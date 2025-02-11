#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters

ndim = 1
# Define the compresible Navier-Stokes equations in Einstein notation, by default the scheme is Central no need to
mass = "Eq(Der(rho,t), - Skew(rho*u_j,x_j))"
momentum = "Eq(Der(rhou_i,t) , - Skew(rhou_i*u_j, x_j) - Der(p,x_i)  + Der(tau_i_j,x_j))"
energy = "Eq(Der(rhoE,t), - Skew(rhoE*u_j,x_j) - Conservative(p*u_j,x_j) + Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j))"
# Substitutions
substitutions = []

# Define all the constants in the equations
constants = ["gama"]

# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"

simulation_eq = SimulationEquations()
eq = EinsteinEquation()
# Mass equation
eqns = eq.expand(mass, ndim, coordinate_symbol, substitutions, constants)
simulation_eq.add_equations(eqns)
# Momentum equation
eqns = eq.expand(momentum, ndim, coordinate_symbol, substitutions, constants)
simulation_eq.add_equations(eqns)
# Energy equation
eqns = eq.expand(energy, ndim, coordinate_symbol, substitutions, constants)
simulation_eq.add_equations(eqns)

constituent = ConstituentRelations()
# Velocity components
eqns = eq.expand(velocity, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)
# Pressure
eqns = eq.expand(pressure, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)
# Speed of sound
eqns = eq.expand(speed_of_sound, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)


block = SimulationBlock(ndim, block_number=0)

# added
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(False, False)], 2)
simulation_eq.apply_metrics(metriceq)

# Initial conditions
initial = GridBasedInitialisation()
x0 = "Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])"
d = "Eq(GridVariable(d), Piecewise((1.0, DataObject(x0) < 0.5), (0.125, True)))"
p = "Eq(GridVariable(p), Piecewise((1.0, DataObject(x0) < 0.5), (0.10, True)))"
u0 = "Eq(GridVariable(u0), Piecewise((0.0, DataObject(x0) < 0.5),(0, True)))"
rho = "Eq(DataObject(rho), d)"
rhou0 = "Eq(DataObject(rhou0), d*u0)"
rhoE = "Eq(DataObject(rhoE), p/(gama-1.0) + 0.5* d *(u0**2.0))"
eqns = [x0, u0, p, d, rho, rhou0, rhoE]
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
initial = GridBasedInitialisation()
initial.add_equations(initial_equations)


# Left boundary condition
d, u, p = symbols('d u0 p', **{'cls':GridVariable})
left_eqns = [OpenSBLIEq(d, 1.0), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, 1.0)] + [parse_expr(eq, local_dict=local_dict) for eq in [rho, rhou0, rhoE]]
# Right boundary condition
right_eqns = [OpenSBLIEq(d, 0.125), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, 0.1)] + [parse_expr(eq, local_dict=local_dict) for eq in [rho, rhou0, rhoE]]

boundaries = []
# Create boundaries, one for each side per dimension
for direction in range(ndim):
    boundaries += [DirichletBC(direction, 0, left_eqns)]
    boundaries += [DirichletBC(direction, 1, right_eqns)]

pprint
schemes = {}
# Central scheme for spatial discretisation and add to the schemes dictionary
# Low storage optimisation for the central scheme
fns = 'u0 u1 T'
# cent = StoreSome(4, fns)
cent = Central(4)
schemes[cent.name] = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk = RungeKuttaLS(3) # formulation='SSP' ?????
schemes[rk.name] = rk

block.set_block_boundaries(boundaries)
kwargs = {'iotype': "Write"}
h5 = iohdf5(**kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0')])
block.setio(copy.deepcopy(h5))

# Set the equations to be solved on the block
block.set_equations([constituent, simulation_eq, initial, metriceq])

# block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
block.set_discretisation_schemes(schemes)

# Perform the discretisation
block.discretise()
# Create an algorithm and generate a C code
alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
# Substitute simulation paramters into the C code
constants = ['gama', 'dt', 'niter', 'block0np0', 'Delta0block0', 'eps', 'TENO_CT']
values = ['1.4', '0.0002', 'ceil(0.2/0.0002)', '200', '1.0/(block0np0-1)', '1.0e-16', '1.0e-5']
substitute_simulation_parameters(constants, values)
# print_iteration_ops(NaN_check='rho_B0')
