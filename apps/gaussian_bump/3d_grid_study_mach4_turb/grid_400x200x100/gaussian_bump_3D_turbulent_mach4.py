# !/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# flat13 
#
# author. 
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------

from opensbli import *
import copy
# from opensbli.utilities.katzer_init import Initialise_Katzer
from opensbli.utilities.flat_init import Initialise_Flatplate
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import sin, cos, sinh, tanh, exp, pi, log

#############################################################################################################################################
#																																			#
# Inputs			 																														#
#																																			#
#############################################################################################################################################

input_dict = {
    "gama"                 : "1.4",
    "Minf"                 : "4.0",
    "Pr"                   : "0.72", 
    "Re"                   : "4000.0", 
    "Twall"                : "1.37", 
    "dt"                   : "0.01", 
    "niter"                : "8", 
    "stat_frequency"       : "200",
    "block0np0"            : "400", 
    "block0np1"            : "200",
    'block0np2'            : "100", 
    "Delta0block0"         : "400.0/(block0np0-1)",
    "Delta1block0"         : "115.0/(block0np1-1)",
    "Delta2block0"         : "20.0/(block0np2-1)",
    "SuthT"                : "110.4",
    "RefT"                 : "439.0",
    "eps"                  : "1e-15",
    "TENO_CT"              : "1e-5",
    "L"                    : "400.0",
    "H"                    : "115.0",
    "a"                    : "20.0", # larger values create a wider and smoother bump
    "b"                    : "5.0",
    "teno_a1"              : "10.5",
    "teno_a2"              : "4.5",
    "epsilon"              : "1.0e-30",
    "tripA"                : "0.0",
    "xts"                  : "50.0",
    "omega_0"              : "0.1",
    "omega_1"              : "0.2", 
    "omega_2"              : "0.4",
    "omega_3"              : "1.0", 
    "phi_0"                : "1.571",
    "phi_1"                : "3.141",
    "phi_2"                : "4.712",
    "b_f"                  : "0.002", # was 0.02
    "beta_0"               : "0.628", #was 0.31
    'kappa_TVD'            : "0.3",
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#																																			#
# Governing equations 																														#
#																																			#
#############################################################################################################################################

weno = True
teno = False
TVD = False
slices = True
stats = False
monitor = True

conservative=True
ndim = 3
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True),(False,False)], 2)

if weno or teno:
    if weno:
       sc1 = "**{\'scheme\':\'Weno\'}"
    else:
        sc1 = "**{\'scheme\':\'Teno\'}" 
    # Define the compresible Navier-Stokes equations in Einstein notation.
    a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
    mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
    a = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1
    momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
    a = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
    energy = "Eq(Der(rhoE,t), - %s/detJ)" % (a)
    # auxilliary equations for NS
    stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
    heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"
else:
    NS = NS_Split('KGP', ndim, constants, coordinate_symbol=coordinate_symbol, conservative=conservative, viscosity='dynamic', energy_formulation='enthalpy', debug=False)
    mass, momentum, energy = NS.mass, NS.momentum, NS.energy
    # Expand the simulation equations, for this create a simulation equations class
    simulation_eq = SimulationEquations()
    simulation_eq.add_equations(mass)
    simulation_eq.add_equations(momentum)
    simulation_eq.add_equations(energy)


# Substitutions
substitutions = [stress_tensor, heat_flux]
constants_var = ["Re", "Pr", "gama", "Minf", "SuthT", "RefT"]

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

# Instatiate equation classes
eq = EinsteinEquation()

# viscous momentum and energy components
visc_momentum = "Eq(Der(rhou_i, t), Der(tau_i_j,x_j))"
visc_momentum = eq.expand(visc_momentum, ndim, coordinate_symbol, substitutions, constants)
visc_momentum = [metriceq.apply_transformation(v) for v in visc_momentum]

visc_energy = "Eq(Der(rhoE, t), -Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j))"
visc_energy = eq.expand(visc_energy, ndim, coordinate_symbol, substitutions, constants)
visc_energy = metriceq.apply_transformation(visc_energy)

# create an optional substitutions dictionary, this will be used to modify the equations when parsed
optional_subs_dict = metriceq.metric_subs
eq.optional_subs_dict = optional_subs_dict
metric_vel = "Eq(U_i, D_i_j*u_j)"

# Create SimulationEquations and Constituent relations, add the expanded equations
simulation_eq = SimulationEquations()
constituent = ConstituentRelations()

#'''
# change coordinate symbol to curvilinear
coordinate_symbol = "xi"
base_eqns = [mass, momentum, energy]
constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity, metric_vel]
# Expand the base equations
for i, base in enumerate(base_eqns):
    base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants_var)
    if base==momentum:
        for no, b in enumerate(base_eqns[i]):
            base_eqns[i][no] = Eq(base_eqns[i][no].lhs, base_eqns[i][no].rhs + visc_momentum[no].rhs)
    else:
        if base==energy:
            base_eqns[i] = Eq(base_eqns[i].lhs, base_eqns[i].rhs + visc_energy.rhs)

# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants_var)

for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# reset coordinate symbol
coordinate_symbol = "x"

#############################################################################################################################################
#																																			#
# Schemes																																	#
#																																			#
#############################################################################################################################################

schemes = {}
Avg = RoeAverage([0, 1])
if teno or weno:
    if teno:
        teno_order = 6

        LF = LFTeno(teno_order, averaging=Avg)
    else:
        weno_order = 5
        LF = LFWeno(weno_order, formulation='Z', averaging=Avg)

schemes[LF.name] = LF

fns = 'u0 u1 u2 T'
cent = StoreSome(4, fns)

schemes[cent.name] = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk = RungeKuttaLS(3)
schemes[rk.name] = rk


#############################################################################################################################################
#																																			#
# Boundary conditions																														#
#																																			#
#############################################################################################################################################

# Set the discretisation schemes to be used (a python dictionary)
block = SimulationBlock(ndim, block_number=0)
block.set_discretisation_schemes(schemes)

local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
x_loc = parse_expr("Eq(GridVariable(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)

rho = parse_expr("Eq(DataObject(rho), d)", local_dict=local_dict)
rhou0 = parse_expr("Eq(DataObject(rhou0), d*u0)", local_dict=local_dict)
rhou1 = parse_expr("Eq(DataObject(rhou1), d*u1)", local_dict=local_dict)
rhoE = parse_expr("Eq(DataObject(rhoE), p/(gama-1) + 0.5* d *(u0**2+u1**2))", local_dict=local_dict)

boundaries = [[0, 0] for t in range(ndim)]
# Left pressure extrapolation at x= 0, inlet conditions
direction = 0
side = 0
boundaries[direction][side] = InletTransferBC(0, 0, scheme=ReducedAccess())
# Right extrapolation at outlet
direction = 0
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0, scheme=ReducedAccess())
# boundaries[direction][side] = ZeroGradientOutletBC(0, 1)
# Bottom no-slip isothermal wall
direction = 1
side = 0
wall_const = ["Minf", "Twall"]
for con in wall_const:
    local_dict[con] = ConstantObject(con)
# Isothermal wall condition
rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)
wall_eqns = [rhoE_wall]

#############################################################################################################################################
#																																			#
# Forcing																													                #
#																																			#
#############################################################################################################################################

wall_const = ['tripA', 'xts', 'dt', 'omega_0', 'omega_1', 'omega_2', 'omega_3', 'phi_0', 'phi_1', 'phi_2','k_0', 'b_f', 'beta_0']
for con in wall_const:
    local_dict[con] = ConstantObject(con)

Amp, xts = symbols('tripA xts', **{'cls':ConstantObject})
dt, omega0, omega1, omega2, omega3, phi0, phi1, phi2 = symbols('dt omega_0 omega_1 omega_2 omega_3 phi_0 phi_1 phi_2', **{'cls': ConstantObject})
# Spatial Modes
bf = symbols('b_f', **{'cls': ConstantObject})
b0 = symbols('beta_0', **{'cls': ConstantObject})

# current_iter = symbols('current_iter', **{'cls': ConstantObject})

current_iter = Globalvariable("iter", integer=True)

# Coordinate arrays
x0, z0 = DataObject('x0'), DataObject('x2')

conditional_expressions = []
trip_eqn = Amp*(exp(-bf*(x0-xts)**2))*(sin(omega0*dt*current_iter)
                                        +sin(omega1*dt*current_iter+phi0)
                                        +sin(omega2*dt*current_iter+phi1)
                                        +sin(omega3*dt*current_iter+phi2)
                                        )*sin(b0*z0)

wall_normal_velocity = OpenSBLIEq(DataObject('rhou1'), DataObject('rho')*trip_eqn)

rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)

wall_eqns = [rhoE_wall]
wall_energy = [rhoE_wall]

# wall_eqns = [wall_normal_velocity, rhoE_wall]
# wall_energy = [rhoE_wall]
direction = 1
side = 0
# ForcingStripBC(direction, side, v, wall_eqns)
boundaries[direction][side] = ForcingStripBC(direction, side,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())

# Top dirichlet shock generator condition
direction = 1
side = 1

boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

direction = 2
for side in [0,1]:
    boundaries[direction][side] = PeriodicBC(direction, side)


block.set_block_boundaries(boundaries)

# Monitor points
if monitor:
    Nx, Nz, L = symbols('block0np0 block0np2 L', **{'cls': ConstantObject})
    arrays = ['p', 'p', 'p', 'p', 'p', 'p', 'p']
    arrays += ['rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0']
    arrays = [block.location_dataset('%s' % dset) for dset in arrays]
    indices = [(50 * Nx/L, 0, Nz/2), (100 * Nx/L, 2, Nz/2), (175 * Nx/L, 4, Nz/2), (187 * Nx/L, 6, Nz/2), (200 * Nx/L, 8, Nz/2), (225 * Nx/L, 10, Nz/2), (300 * Nx/L, 12, Nz/2), (350 * Nx/L, 12, Nz/2),\
               (50 * Nx/L, 0, Nz/2), (100 * Nx/L, 2, Nz/2), (175 * Nx/L, 4, Nz/2), (187 * Nx/L, 6, Nz/2), (200 * Nx/L, 8, Nz/2), (225 * Nx/L, 10, Nz/2), (300 * Nx/L, 12, Nz/2), (350 * Nx/L, 12, Nz/2)]
    SM = SimulationMonitor(arrays, indices, block, print_frequency=2, fp_precision=12, output_file='monitor.log')

#############################################################################################################################################
#																																			#
# Grid and intial conditions																												#
#																																			#
#############################################################################################################################################
Re, xMach, Tinf,Twall = 4000.0, 4.0, 288.0, 1.37
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1')), (False, DataObject('x2'))]
n_poly_coefficients = 50
grid_const = ["L", "H", "a", "b"]
for con in grid_const:
    local_dict[con] = ConstantObject(con)
gridx0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
gridx1 = parse_expr("Eq(DataObject(x1), H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2) + (H - H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2))*sinh(b*block.deltas[1]*block.grid_indexes[1]/H)/sinh(b))", local_dict=local_dict)
gridx2 = parse_expr("Eq(DataObject(x2), block.deltas[2]*block.grid_indexes[2])", local_dict=local_dict)
coordinate_evaluation = [gridx0, gridx1, gridx2]
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, Twall,coordinate_evaluations=coordinate_evaluation)

#############################################################################################################################################
#																																			#
# Data i/o 																																	#
#																																			#
#############################################################################################################################################
#grouping conserved variables into 1 vector
q_vector = flatten(simulation_eq.time_advance_arrays)
#   Stats    #
if stats:
    from airfoil_stats import favre_averaged_stats
    stat_equation_classes, stats_arrays = favre_averaged_stats(ndim, q_vector, conservative=True)
else:
    stat_equation_classes, stats_arrays = [], []

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=50000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2'), DataObject('D11')])
h5.add_arrays([DataObject('p')]) # save pressure
block.setio(h5)

# Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq])

if TVD:
    TVD_filter = TVDFilter(block, airfoil=False, optimize=True, metrics=metriceq)
    block.set_equations(TVD_filter.equation_classes)


##################################################################################################################																															
#         Slicing																																																																	
##################################################################################################################
if slices:
    # Add grid coordinates to the slices, once at the start of the simulation
    grid_slice_hdf5 = iohdf5_slices(**{'iotype': "Init"})
    coords = [([DataObject('x0'), DataObject('x2')], 1, 1), ([DataObject('x0'), DataObject('x2')], 2, 'block0np2/2')] # q vector, x-z, j=1 plane, # q vector, x-y, z=Lz/2 plane
    grid_slice_hdf5.add_slices(coords)
    # Q vector slices written out in time
    slices_hdf5 = iohdf5_slices(save_every=2500, **{'iotype': "Write"})
    # Arrays, direction, index
    slices = [(q_vector, 1, 1)] # conserved variables, plan view, j=1
    slices = [(q_vector, 1, 10)] # conserved variables, plan view, j=10
    slices += [(q_vector, 2, 'block0np2/2')] # q vector, x-y, z=Lz/2 plane
    slices_hdf5.add_slices(slices)
    block.setio([grid_slice_hdf5, slices_hdf5])

block.discretise()

if monitor:
    alg = TraditionalAlgorithmRK(block, simulation_monitor=SM)
else:
    alg = TraditionalAlgorithmRK(block)

SimulationDataType.set_datatype(Double)
OPSC(alg)

substitute_simulation_parameters(constants, values)
print_iteration_ops(every=1, NaN_check='rho_B0')
