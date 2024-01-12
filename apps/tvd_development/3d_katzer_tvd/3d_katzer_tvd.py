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
'gama'      :   '1.4',
'Minf'      :   '2.0',
'Pr'        :   '0.72',
'Re'        :   '950.0',
'Twall'     :   '1.67619431',
'dt'        :   '0.03',
'niter'     :   '200000',
'block0np0'     :   '400',
'block0np1'     :   '200',
'block0np2'     :   '100',
'Delta0block0'      :   '400.0/(block0np0-1)',
'Delta1block0'      :   '115.0/(block0np1-1)',
'Delta2block0'      :   '20.0/(block0np1-1)',
'SuthT'     :   '110.4',
'RefT'      :   '288.0',
'eps'       :   '1e-15',
'Lx1'       :   '115.0',
'by'        :   '5.0',
'epsilon'       :   '1.0e-30',
"kappa_TVD"            : "0.3"
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#																																			#
# Governing equations 																														#
#																																			#
#############################################################################################################################################

ndim = 3
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
eq = EinsteinEquation()

# Define the compresible Navier-Stokes equations in Einstein notation.
NS = NS_Split('KGP', ndim, constants, coordinate_symbol="x", conservative=True, viscosity='dynamic', debug=False)
mass, momentum, energy = NS.mass, NS.momentum, NS.energy
# Expand the simulation equations, for this create a simulation equations class
simulation_eq = SimulationEquations()
simulation_eq.add_equations(mass)
simulation_eq.add_equations(momentum)
simulation_eq.add_equations(energy)

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity]
constituent = ConstituentRelations()
# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, "x", [], constants)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# Create a simulationblock
block = SimulationBlock(ndim, block_number=0)

# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True),(False,False)], 2)
simulation_eq.apply_metrics(metriceq)

#############################################################################################################################################
#																																			#
# Schemes																																	#
#																																			#
#############################################################################################################################################

schemes = {}
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
boundaries[direction][side] = IsothermalWallBC(1, 0, wall_eqns, scheme=ReducedAccess())

# Top dirichlet shock generator condition
direction = 1
side = 1
boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

# spanwise periodic BC
direction = 2
for side in [0,1]:
    boundaries[direction][side] = PeriodicBC(direction, side)

block.set_block_boundaries(boundaries)

# Monitor points
# arrays = ['p', 'p', 'p', 'p', 'p', 'p', 'p']
# #arrays = ['rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0']
# arrays = [block.location_dataset('%s' % dset) for dset in arrays]
# indices = [(178, 45), (178, 72), (178, 96), (178, 118), (178, 139), (178, 160), (178, 176)]
# SM = SimulationMonitor(arrays, indices, block, print_frequency=100, fp_precision=12, output_file='monitor.log')

#############################################################################################################################################
#																																			#
# Grid and intial conditions																												#
#																																			#
#############################################################################################################################################

# Reynolds number, Mach number and free-stream temperature for the initial profile
Re, xMach, Tinf = 950.0, 2.0, 288.0
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1')), (False, DataObject('x2'))]
n_poly_coefficients = 50
grid_const = ["Lx1", "by"]
for con in grid_const:
    local_dict[con] = ConstantObject(con)
gridx0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
gridx1 = parse_expr("Eq(DataObject(x1), Lx1*sinh(by*block.deltas[1]*block.grid_indexes[1]/Lx1)/sinh(by))", local_dict=local_dict)
gridx2 = parse_expr("Eq(DataObject(x2), block.deltas[2]*block.grid_indexes[2])", local_dict=local_dict)
coordinate_evaluation = [gridx0, gridx1, gridx2]
# initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients,  Re, xMach, Tinf, coordinate_evaluation)
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, coordinate_evaluations=coordinate_evaluation)

#############################################################################################################################################
#																																			#
# Data i/o 																																	#
#																																			#
#############################################################################################################################################

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=10000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2'), DataObject('D11')])
h5.add_arrays([DataObject('p')]) # save pressure
h5.add_arrays([DataObject('kappa')]) # shock sensor array
block.setio(h5)

# Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq])

# apply filter 
TVD_filter = TVDFilter(block, airfoil=False, optimize=True, metrics=metriceq)
block.set_equations(TVD_filter.equation_classes)

# WF = WENOFilter(block, order=5, formulation='Z', flux_type='LLF', airfoil=False, optimize=True)
# block.set_equations(WF.equation_classes) 

block.discretise()
# Add some full [-5,5] halo swaps over the periodic directions only when the filter is called
def create_exchange_calls_codes(block, dsets):
    kernels = []
    arrays = [block.location_dataset(a) for a in flatten(dsets)]
    for direction in [0,2]:
        for side in [0,1]:
            BC = PeriodicBC(direction, side, halos=[-5,5])
            kernels += [BC.apply(arrays, block)]
    return kernels

# Make some full swaps for interfaces before filtering
# filter_swaps = create_exchange_calls_codes(block, ['rho', 'u0', 'u1', 'u2', 'Et'])
filter_swaps = create_exchange_calls_codes(block, ['rho', 'rhou0', 'rhou1', 'rhou2', 'rhoE'])
for no, eq in enumerate(block.list_of_equation_classes):
    if isinstance(eq, UserDefinedEquations):
        if eq.full_swap:
            eq.Kernels += filter_swaps

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)

substitute_simulation_parameters(constants, values)
print_iteration_ops(every=5000, NaN_check='rho_B0')