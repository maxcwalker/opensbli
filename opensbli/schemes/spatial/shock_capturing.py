"""@brief
   @author Satya Pramod Jammy, David J Lusher
   @contributors
   @details
"""

from sympy import Symbol, Rational, zeros, Abs, Matrix, flatten, Max, diag, Function
from sympy.core.numbers import Zero
from opensbli.core.opensbliobjects import EinsteinTerm, DataSetBase, ConstantObject, DataSet, DataObject
from opensbli.equation_types.opensbliequations import OpenSBLIEq
from opensbli.core.kernel import Kernel, ConstantsToDeclare
from opensbli.core.grid import GridVariable
from opensbli.utilities.helperfunctions import increment_dataset
from opensbli.physical_models.euler_eigensystem import EulerEquations
from sympy import factor, pprint
from opensbli.schemes.spatial.averaging import SimpleAverage

class ShockCapturing(object):
    """ Class that contains functions common to all shock capturing schemes."""

    def evaluate_residuals(self, block, eqns, local_ders):
        residual_eqn = []
        for eq in eqns:
            substitutions = {}
            for d in eq.rhs.atoms(Function):
                if d in local_ders:
                    substitutions[d] = d._discretise_derivative(block)
                else:
                    substitutions[d] = 0
            residual_eqn += [OpenSBLIEq(eq.residual, eq.rhs.subs(substitutions))]
        residual_kernel = Kernel(block, computation_name="%s Residual" % self.__class__.__name__)
        residual_kernel.set_grid_range(block)
        residual_kernel.add_equation(residual_eqn)
        return residual_kernel

    def generate_left_reconstruction_variables(self, expression_matrix, derivatives):
        if isinstance(expression_matrix, Matrix):
            stencil = expression_matrix.stencil_points
            for i in range(expression_matrix.shape[0]):
                settings = derivatives[i].settings
                if "combine_reconstructions" in settings and settings["combine_reconstructions"]:
                    name = "Recon_%d" % i
                else:
                    name = 'L_X%d_%d' % (self.direction, i)
                lv = type(self.reconstruction_classes[1])(name)
                lv.settings = settings
                for p in sorted(set(self.reconstruction_classes[1].func_points)):
                    lv.function_stencil_dictionary[p] = expression_matrix[i, stencil.index(p)]
                derivatives[i].add_reconstruction_classes([lv])
        else:
            raise TypeError("Input should be a matrix.")
        return

    def generate_right_reconstruction_variables(self, expression_matrix, derivatives):
        if isinstance(expression_matrix, Matrix):
            stencil = expression_matrix.stencil_points
            for i in range(expression_matrix.shape[0]):
                settings = derivatives[i].settings
                if "combine_reconstructions" in settings and settings["combine_reconstructions"]:
                    name = "Recon_%d" % i
                else:
                    name = 'R_X%d_%d' % (self.direction, i)
                rv = type(self.reconstruction_classes[0])(name)
                for p in sorted(set(self.reconstruction_classes[0].func_points)):
                    rv.function_stencil_dictionary[p] = expression_matrix[i, stencil.index(p)]
                rv.settings = settings
                derivatives[i].add_reconstruction_classes([rv])
        else:
            raise TypeError("Input should be a matrix.")
        return

    def interpolate_reconstruction_variables(self, derivatives):
        """ Perform the WENO/TENO interpolation on the reconstruction variables.

        :arg list derivatives: A list of the TENO derivatives to be computed.
        :arg object kernel: The current computational kernel."""
        output_eqns = []
        for no, d in enumerate(derivatives):
            for rv in d.reconstructions:
                if isinstance(rv, type(self.reconstruction_classes[1])):
                    original_rv = self.reconstruction_classes[1]
                elif isinstance(rv, type(self.reconstruction_classes[0])):
                    original_rv = self.reconstruction_classes[0]
                else:
                    raise ValueError("Reconstruction must be left or right")
                rv.update_quantities(original_rv)
                rv.evaluate_quantities()
                # Add all of the current equations
                output_eqns += [rv.final_equations]
                # Apply a sensor to each characteristic wave if using filtering methods
                if self.sensor_evaluation is not None:
                    if isinstance(rv, type(self.reconstruction_classes[0])):
                        output_eqns += [OpenSBLIEq(GridVariable('rj%d' % no), self.sensor_evaluation[0].rhs)]
                    elif isinstance(rv, type(self.reconstruction_classes[1])):
                        output_eqns += [OpenSBLIEq(GridVariable('rj%d' % no), Max(GridVariable('rj%d' % no),self.sensor_evaluation[1].rhs))] 
        return output_eqns

    def update_constituent_relation_symbols(self, sym, direction):
        """ Function to take the set of required quantities from the constituent relations in symbolic form
        and update the directions in which they are used.

        :arg set sym: Set of required symbols.
        :arg int direction: The axis on which WENO is being applied to (x0, x1 ..)."""
        if isinstance(sym, Symbol):
            sym = [sym]
        elif isinstance(sym, list) or isinstance(sym, set):
            pass
        else:
            raise ValueError("The symbol provided should be either a list or symbols")
        for s in sym:
            if isinstance(s, DataSetBase):
                s = s.noblockname
            if s in self.required_constituent_relations_symbols.keys():
                self.required_constituent_relations_symbols[s] += [direction]
            else:
                self.required_constituent_relations_symbols[s] = [direction]
        return

    def generate_constituent_relations_kernels(self, block):
        """ Generates constituent relation kernels on the block.

        :arg object block: The current block."""
        crs = {}
        for key in self.required_constituent_relations_symbols:
            kernel = Kernel(block, computation_name="CR%s" % key)
            kernel.set_grid_range(block)
            for direction in self.required_constituent_relations_symbols[key]:
                kernel.set_halo_range(direction, 0, self.halotype)
                kernel.set_halo_range(direction, 1, self.halotype)
            crs[block.location_dataset(key)] = kernel
        return crs

    def check_constituent_relations(self, block, list_of_eq, current_constituents):
        """ Checks all the datasets in equations provided are evaluated in constituent relations."""
        arrays = []
        for eq in flatten(list_of_eq):
            arrays += list(eq.atoms(DataSet))
        arrays = set(arrays)
        undefined = arrays.difference(current_constituents.keys())

        for dset in undefined:
            current_constituents[dset] = Kernel(block, computation_name="CR%s" % dset)
            current_constituents[dset].set_grid_range(block)
        return current_constituents

    def create_reconstruction_kernel(self, direction, halos, block):
        """ Creates a kernel for the WENO/TENO reconstruction, currently done per direction."""
        kernel = Kernel(block, computation_name="%s_reconstruction_%d_direction" % (self.__class__.__name__, direction))
        kernel.set_grid_range(block)
        # WENO reconstruction should be evaluated for extra point on each side
        kernel.set_halo_range(direction, 0, halos)
        kernel.set_halo_range(direction, 1, halos)
        block.set_block_boundary_halos(direction, 0, self.halotype)
        block.set_block_boundary_halos(direction, 1, self.halotype)
        return kernel


class EigenSystem(object):
    """ Class to hold the routines required by the characteristic decomposition of the Euler equations. The input
    is the eigensystems used to diagonalise the Jacobian in each direction.

    :arg object physics: Physics object, defaults to NSPhysics."""

    def __init__(self, physics):
        self.physics = physics
        return

    def instantiate_eigensystem(self, block):
        if self.physics is None:
            Euler_eq = EulerEquations(block.ndim)
            Euler_eq.generate_eig_system(block)
        else:
            self.physics.generate_eig_system(block)
        self.euler = Euler_eq
        self.eigen_value = {}
        self.left_eigen_vector = {}
        self.right_eigen_vector = {}
        return

    def get_symbols_in_ev(self, direction):
        """ Retrieve the unique symbols present in the eigenvalue matrix for a given direction."""
        return self.eigen_value[direction].atoms(EinsteinTerm).difference(self.eigen_value[direction].atoms(ConstantObject))

    def get_symbols_in_LEV(self, direction):
        """ Retrieve the unique symbols present in the left eigenvector matrix for a given direction."""
        return self.left_eigen_vector[direction].atoms(EinsteinTerm).difference(self.left_eigen_vector[direction].atoms(ConstantObject))

    def get_symbols_in_REV(self, direction):
        """ Retrieve the unique symbols present in the right rigenvector matrix for a given direction."""
        return self.right_eigen_vector[direction].atoms(EinsteinTerm).difference(self.right_eigen_vector[direction].atoms(ConstantObject))

    def generate_grid_variable_ev(self, direction, name):
        """ Create a matrix of eigenvalue GridVariable elements. """
        name = '%s_lambda_%d' % (name, direction)
        return self.symbol_matrix(self.eigen_value[direction], name)

    def generate_grid_variable_REV(self, direction, name):
        """ Create a matrix of right eigenvector GridVariable elements. """
        name = '%s_%d_REV' % (name, direction)
        return self.symbol_matrix(self.right_eigen_vector[direction], name)

    def generate_grid_variable_LEV(self, direction, name):
        """ Create a matrix of left eigenvector GridVariable elements. """
        name = '%s_%d_LEV' % (name, direction)
        return self.symbol_matrix(self.left_eigen_vector[direction], name)

    def symbol_matrix(self, mat, name):
        """ Generic function to populate a matrix of GridVariables for a given name and shape."""
        shape = mat.shape
        symbolic_matrix = zeros(*shape)
        for i in range(shape[0]):
            for j in range(shape[1]):
                if mat[i, j]:
                    symbolic_matrix[i, j] = GridVariable('%s_%d%d' % (name, i, j))
        return symbolic_matrix

    def convert_matrix_to_grid_variable(self, mat, name):
        """ Converts the given symbolic matrix to grid variable equivalent.

        :arg Matrix mat: Symbolic matrix to convert to GridVariable elements.
        :arg str name: Base name to use for the GridVariables
        :returns: mat: The matrix updated to contain GridVariables."""
        syms = list(mat.atoms(EinsteinTerm).difference(mat.atoms(ConstantObject)))
        new_syms = [GridVariable('%s_%s' % (name, str(sym))) for sym in syms]
        substitutions = dict(zip(syms, new_syms))
        # Find Metric terms which are datasets
        dsets = list(mat.atoms(DataSet).difference(mat.atoms(ConstantObject)))
        new_dsets = [GridVariable('%s_%s' % (name, d.base.simplelabel())) for d in dsets]
        substitutions.update(dict(zip(dsets, new_dsets)))
        mat = mat.subs(substitutions)
        return mat

    def generate_equations_from_matrices(self, lhs_matrix, rhs_matrix):
        """ Forms a matrix containing Sympy equations at each element, given two input matrices.

        :arg Matrix lhs_matrix: The elements of lhs_matrix form the LHS of the output equations.
        :arg Matrix rhs_matrix: The elements of rhs_matrix form the RHS of the output equations.
        returns: Matrix: equations: A matrix containing an Eq(lhs, rhs) pair in each element."""
        if lhs_matrix.shape != rhs_matrix.shape:
            raise ValueError("Matrices should have the same dimension.")
        equations = zeros(*lhs_matrix.shape)
        for no, v in enumerate(lhs_matrix):
            if rhs_matrix[no] != 0:
                equations[no] = OpenSBLIEq(v, factor(rhs_matrix[no]))
        return equations


class Characteristic(EigenSystem):
    """ Class containing the routines required to perform the characteristic decomposition.

        :arg object physics: Physics object, defaults to NSPhysics."""

    def __init__(self, physics):
        EigenSystem.__init__(self, physics)
        return

    def get_characteristic_equations(self, direction, derivatives, solution_vector, block):
        """ Performs the three stages required for a characteristic based reconstruction."""
        settings = {"combine_reconstructions": True}
        for i in range(len(derivatives)):
            derivatives[i].update_settings(**settings)
        pre_process_eqns = self.pre_process(direction, derivatives, solution_vector, block)
        interpolated_eqns = self.interpolate_reconstruction_variables(derivatives)
        post_process_eqns = self.post_process(direction, derivatives, block)
        return [pre_process_eqns, interpolated_eqns, post_process_eqns]

    def remove_zero_equations(self, equations):
        for eqn in equations[:]:
            if isinstance(eqn, Zero) is True:
                equations.remove(eqn)
        return equations

    def direction_flux_vector(self, derivatives, direction):
        flux_vector = []
        for d in derivatives:
            if d.get_direction[0] != direction:
                raise ValueError("Derivatives provided for flux vector are not homogeneous in direction.")
            flux_vector += [d.args[0]]
        return flux_vector

    def convert_symbolic_to_dataset(self, symbolics, location, direction, block):
        """ Converts symbolic terms to DataSets.

        :arg object symbolics: Expression containing Symbols to be converted into DataSets.
        :arg int location: The integer location to apply to the DataSet.
        :arg int direction: The integer direction (axis) of the DataSet to apply the location to.
        returns: object: symbolics: The original expression updated to be in terms of DataSets rather than Symbols."""
        dsets = symbolics.atoms(DataSet).difference(symbolics.atoms(ConstantObject))
        symbols = symbolics.atoms(EinsteinTerm).difference(symbolics.atoms(ConstantObject))
        substitutions = {}
        # Increment flow variables
        for s in symbols:
            dest = block.create_datasetbase(s)
            loc = dest.location
            loc[direction] = loc[direction] + location
            substitutions[s] = dest[loc]
        # Increment metric datasets
        for d in dsets:
            substitutions[d] = increment_dataset(d, direction, location)
        return symbolics.subs(substitutions)

    def characteristic_setup(self, direction, name, derivatives, block):
        """ Perform the initial characteristic steps used in both LLF and RF."""
        ev_dict, LEV_dict, REV_dict, required_metrics, inv_metric = self.euler.apply_direction(direction)
        self.eigen_value.update(ev_dict)
        self.left_eigen_vector.update(LEV_dict)
        self.right_eigen_vector.update(REV_dict)
        averaged_suffix_name = 'AVG_%d' % direction
        self.averaged_suffix_name = averaged_suffix_name
        # Finding flow variables to average
        required_symbols = self.get_symbols_in_ev(direction).union(self.get_symbols_in_LEV(direction)).union(self.get_symbols_in_REV(direction))
        required_terms = required_symbols.union(required_metrics)
        averaged_equations = self.average(required_terms, direction, averaged_suffix_name, block)
        # Add symbols from the derivatives: e.g. pressure is required
        for d in derivatives:
            required_symbols = required_symbols.union(d.atoms(DataSetBase))
        return inv_metric, averaged_equations, required_symbols

    def create_LEV_inverses(self, direction, avg_LEV_values):
        """ Optimizations to avoid repeated divides."""
        inverses = [GridVariable('inv_AVG_a'), GridVariable('inv_AVG_rho')]
        to_be_replaced = [1/GridVariable('AVG_%d_a' % direction), 1/GridVariable('AVG_%d_rho' % direction)]
        if len(self.inv_metric.atoms(GridVariable)) > 0:  # Don't substitute if there are no metrics
            inverses += [GridVariable('inv_AVG_met_fact')]
            to_be_replaced += [1/self.inv_metric]
        inverse_evals = [OpenSBLIEq(a, b) for (a, b) in zip(inverses, to_be_replaced)]
        for i, term in enumerate(avg_LEV_values):
            for old, new in zip(to_be_replaced, inverses):
                term = term.subs({old: new})
            avg_LEV_values[i] = term
        return inverse_evals, avg_LEV_values

    def replace_gamma_factor(self, eqns):
        gamma_minus_one = ConstantObject('gamma_m1')
        gamma_minus_one.value = (ConstantObject('gama') - 1)
        ConstantsToDeclare.add_constant(gamma_minus_one)
        for i, eqn in enumerate(eqns):
            eqns[i] = eqn.subs({gamma_minus_one.value: gamma_minus_one})
        return eqns


class LLFCharacteristic(Characteristic):
    """ This class contains the base Local Lax-Fedrich scheme performed in characteristic space.

    :arg object physics: Physics object, defaults to NSPhysics.
    :arg object averaging: The averaging procedure to be applied for characteristics, defaults to Simple averaging."""

    def __init__(self, physics, averaging=None):
        Characteristic.__init__(self, physics)
        if averaging is None:
            self.average = SimpleAverage([0, 1]).average
        else:
            self.average = averaging.average
        self.flux_split = True
        return

    def pre_process(self, direction, derivatives, solution_vector, block):
        """ Performs the transformation of the derivatives into characteristic space using the eigensystems provided to Characteristic. Flux splitting is then applied
        to the characteristic variables in preparation for the WENO interpolation. Required quantities are added to pre_process_equations.

        :arg int direction: Integer direction to apply the characteristic decomposition and WENO (x0, x1, ...).
        :arg list derivatives: The derivatives to perform the characteristic decomposition and WENO on.
        :arg list solution_vector: Solution vector from the Euler equations (rho, rhou0, rhou1, rhou2, rhoE) in vector form."""
        self.direction = direction
        pre_process_equations = []
        # Update the ev, LEV and REV dicts and perform averaging
        avg_name = 'AVG_%d' % direction
        inv_metric, averaged_equations, required_symbols = self.characteristic_setup(direction, avg_name, derivatives, block)
        pre_process_equations += averaged_equations
        # Update required CRs
        self.update_constituent_relation_symbols(required_symbols, direction)

        # Inverse metric term
        self.inv_metric = self.convert_matrix_to_grid_variable(inv_metric, avg_name)
        # Eigensystem based on averaged quantities
        avg_LEV_values = self.convert_matrix_to_grid_variable(self.left_eigen_vector[direction], avg_name)
        # Manually replace re-used divides by inverses
        inverse_evals, avg_LEV_values = self.create_LEV_inverses(direction, avg_LEV_values)
        pre_process_equations += inverse_evals

        # Grid variables to store averaged eigensystems
        grid_LEV = self.generate_grid_variable_LEV(direction, avg_name)
        pre_process_equations += flatten(self.generate_equations_from_matrices(grid_LEV, avg_LEV_values))

        # Create characteristic matrices and add their evaluations to pre_process
        evaluations, CS_matrix, CF_matrix = self.create_characteristic_matrices(direction, derivatives, solution_vector, avg_name)
        pre_process_equations += evaluations
        # Get max wavespeeds and their evaluations
        grid_EV, pre_process_equations = self.create_max_characteristic_wave_speed(pre_process_equations, direction, block)
        # Transform the flux vector and the solution vector to characteristic space
        if hasattr(self, 'flux_split') and self.flux_split:
            self.characteristic_flux_splitting(grid_EV, CS_matrix, CF_matrix, derivatives)
        else:
            raise NotImplementedError("Only flux splitting is implemented in characteristic.")
        # Remove '0' entries and gamma - 1 factors from pre_process_equations
        pre_process_equations = self.remove_zero_equations(pre_process_equations)
        pre_process_equations = self.replace_gamma_factor(pre_process_equations)
        return pre_process_equations


    def central_diff_formula(self, component, reconstruction_variable):
        """ Central difference formula based on the f_i = 0.5*(f_(i+1/2) - f_(i-1/2)) half-node locations. Applied in characteristic space
        using the CF local variables."""
        if (self.order+1) == 4:
            weights = [Rational(-1,12), Rational(7,12), Rational(7,12), Rational(-1,12)]
        elif (self.order+1) == 6:
            weights = [Rational(1,60), Rational(-8,60), Rational(37,60), Rational(37,60), Rational(-8,60), Rational(1,60)]
        elif (self.order+1) == 8:
            weights = [Rational(-1,280), Rational(29, 840), Rational(-139,840), Rational(533, 840), Rational(533,840), Rational(-139,840), Rational(29,840), Rational(-1, 280)]
        else:
            raise NotImplementedError("Only 4th, 6th, and 8th order Central are implemented for the WENO-Filter.")
        # Take a central difference of the characteristic fluxes
        terms = [GridVariable('CF_%d%d' % (component, j)) for j in range(len(weights))]
        formula = factor(sum([x*y for (x,y) in zip(weights, terms)]))
        output_equation = [OpenSBLIEq(reconstruction_variable, GridVariable('rj%d' % component)*(reconstruction_variable - formula))]
        return output_equation

    def post_process(self, direction, derivatives, block):
        """ Transforms the characteristic WENO interpolated fluxes back into real space by multiplying by the right
        eigenvector matrix.

        :arg list derivatives: The derivatives to perform the characteristic decomposition and WENO on.
        :arg object kernel: The current computational kernel."""
        post_process_equations = []
        averaged_suffix_name = self.averaged_suffix_name
        avg_REV_values = self.convert_matrix_to_grid_variable(self.right_eigen_vector[self.direction], averaged_suffix_name)
        # Manually remove the divides
        inverses = [GridVariable('inv_AVG_a'), GridVariable('inv_AVG_rho')]
        to_be_replaced = [1/GridVariable('AVG_%d_a' % direction), 1/GridVariable('AVG_%d_rho' % direction)]
        if len(self.inv_metric.atoms(GridVariable)) > 0:  # Don't substitute if there are no metrics
            inverses += [GridVariable('inv_AVG_met_fact')]
            to_be_replaced += [1/self.inv_metric]

        for i, term in enumerate(avg_REV_values):
            for old, new in zip(to_be_replaced, inverses):
                term = term.replace(old, new)
            avg_REV_values[i] = term
        reconstructed_characteristics = Matrix([d.evaluate_reconstruction for d in derivatives])
        # Apply a shock sensor if the WENO is being applied as a filter step
        if block.shock_filter:
            for i, recon in enumerate(reconstructed_characteristics):
                post_process_equations += flatten([self.central_diff_formula(i, recon)])

        reconstructed_flux = avg_REV_values*reconstructed_characteristics
        reconstructed_work = [d.reconstruction_work for d in derivatives]
        post_process_equations += [OpenSBLIEq(x, y) for x, y in zip(reconstructed_work, reconstructed_flux)]
        post_process_equations = self.replace_gamma_factor(post_process_equations)
        return post_process_equations

    def solution_vector_to_characteristic(self, solution_vector, direction, name):
        stencil_points = sorted(list(set(self.reconstruction_classes[0].func_points + self.reconstruction_classes[1].func_points)))
        solution_vector_stencil = zeros(len(solution_vector), len(stencil_points))
        CS_matrix = zeros(len(solution_vector), len(stencil_points))
        for j, val in enumerate(stencil_points):  # j in fv stencil matrix
            for i, flux in enumerate(solution_vector):
                solution_vector_stencil[i, j] = increment_dataset(flux, direction, val)
                CS_matrix[i, j] = GridVariable('CS_%d%d' % (i, j))
        grid_LEV = self.generate_grid_variable_LEV(direction, name)
        characteristic_solution_stencil = grid_LEV*solution_vector_stencil
        characteristic_solution_stencil.stencil_points = stencil_points
        CS_matrix.stencil_points = stencil_points
        return characteristic_solution_stencil, CS_matrix

    def create_characteristic_matrices(self, direction, derivatives, solution_vector, name):
        characteristic_flux_vector, CF_matrix = self.flux_vector_to_characteristic(derivatives, direction, name)
        characteristic_solution_vector, CS_matrix = self.solution_vector_to_characteristic(solution_vector, direction, name)
        CF_evaluations = flatten(self.generate_equations_from_matrices(CF_matrix, characteristic_flux_vector))
        CS_evaluations = flatten(self.generate_equations_from_matrices(CS_matrix, characteristic_solution_vector))
        # Optimise by grouping evaluations by stencil location
        reordered_CS, reordered_CF = [], []
        n_rows, n_cols = CS_matrix.shape[0], CS_matrix.shape[1]
        for j in range(n_cols):
            for i in range(n_rows):
                # reordered_CS.append(CS_evaluations[j+i*n_cols])
                reordered_CF.append(CF_evaluations[j+i*n_cols])
        reordered = reordered_CF + CS_evaluations
        return reordered, CS_matrix, CF_matrix

    def characteristic_flux_splitting(self, ev_matrix, CS_matrix, CF_matrix, derivatives):
        positive = Rational(1, 2)*(CF_matrix + ev_matrix*CS_matrix)
        positive_flux = zeros(*positive.shape)
        negative = factor(Rational(1, 2)*(CF_matrix - ev_matrix*CS_matrix))
        negative_flux = zeros(*negative.shape)
        for i in range(positive_flux.shape[0]):
            for j in range(positive_flux.shape[1]):
                positive_flux[i, j] = factor(positive[i, j])
                negative_flux[i, j] = factor(negative[i, j])
        positive_flux.stencil_points = CF_matrix.stencil_points
        negative_flux.stencil_points = CF_matrix.stencil_points
        # pprint(positive_flux)
        # pprint(positive_flux.stencil_points)
        # exit()
        self.generate_right_reconstruction_variables(positive_flux, derivatives)
        self.generate_left_reconstruction_variables(negative_flux, derivatives)
        return

    def flux_vector_to_characteristic(self, derivatives, direction, name):
        fv = self.direction_flux_vector(derivatives, direction)
        stencil_points = sorted(list(set(self.reconstruction_classes[0].func_points + self.reconstruction_classes[1].func_points)))
        flux_stencil = zeros(len(fv), len(stencil_points))
        CF_matrix = zeros(len(fv), len(stencil_points))
        for j, val in enumerate(stencil_points):  # j in fv stencil matrix
            for i, flux in enumerate(fv):
                flux_stencil[i, j] = increment_dataset(flux, direction, val)
                CF_matrix[i, j] = GridVariable('CF_%d%d' % (i, j))
        grid_LEV = self.generate_grid_variable_LEV(direction, name)
        characteristic_flux_stencil = grid_LEV*flux_stencil
        characteristic_flux_stencil.stencil_points = stencil_points
        CF_matrix.stencil_points = stencil_points
        return characteristic_flux_stencil, CF_matrix

    def create_max_characteristic_wave_speed(self, pre_process_equations, direction, block):
        """ Creates the equations for local Lax-Friedrich wave speeds, maximum eigenvalues over the local
        WENO/TENO stencils are found."""
        stencil_points = sorted(list(set(self.reconstruction_classes[0].func_points + self.reconstruction_classes[1].func_points)))
        ev = self.eigen_value[direction]
        out = zeros(*ev.shape)
        # stencil_points = [0,1]
        for p in stencil_points:
            location_ev = self.convert_symbolic_to_dataset(ev, p, direction, block)
            for no, val in enumerate(location_ev):
                out[no] = Max(out[no], Abs(val))
        max_wave_speed = self.generate_grid_variable_ev(direction, 'max')
        ev_equations = self.generate_equations_from_matrices(max_wave_speed, out)
        ev_equations = [x for x in ev_equations if x != 0]
        ev_lhs = [x.lhs for x in ev_equations]
        ev_rhs = [x.rhs for x in ev_equations]
        # If there are repeated eigenvalues we don't compute them multiple times
        for no, eqn in enumerate(ev_rhs):
            if no > 0:
                if eqn == ev_rhs[0]:
                    ev_rhs[no] = ev_lhs[0]  # u, u, u, u+a, u-a ordering
        ev_equations = [OpenSBLIEq(left, right) for (left, right) in zip(ev_lhs, ev_rhs)]
        pre_process_equations += ev_equations
        max_wave_speed = diag(*([max_wave_speed[i, i] for i in range(ev.shape[0])]))
        return max_wave_speed, pre_process_equations
