#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters

ndim = 2

sc1 = "**{\'scheme\':\'Weno\'}"
# Define the compresible Navier-Stokes equations in Einstein notation.
a = "Conservative(rhou_j,x_j,%s)" % sc1
mass = "Eq(Der(rho,t), - %s)" % (a)
a = "Conservative(rhou_i*u_j + KD(_i,_j)*p,x_j , %s)" % sc1
momentum = "Eq(Der(rhou_i,t) , -%s  )" % (a)
a = "Conservative((p+rhoE)*u_j,x_j, %s)" % sc1
energy = "Eq(Der(rhoE,t), - %s  )" % (a)
# Substitutions
substitutions = []

# Define all the constants in the equations
constants = ["gama", "Minf"]

# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"

simulation_eq = SimulationEquations()
eq = EinsteinEquation()
eqns = eq.expand(mass, ndim, coordinate_symbol, substitutions, constants)

simulation_eq.add_equations(eqns)

eqns = eq.expand(momentum, ndim, coordinate_symbol, substitutions, constants)
simulation_eq.add_equations(eqns)

eqns = eq.expand(energy, ndim, coordinate_symbol, substitutions, constants)
simulation_eq.add_equations(eqns)

constituent = ConstituentRelations()
eqns = eq.expand(velocity, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = eq.expand(pressure, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = eq.expand(speed_of_sound, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)

schemes = {}
weno_order = 5
# Averaging procedure to be used for the eigen system evaluation
Avg = SimpleAverage([0, 1])
# LLF scheme
LLF = LLFWeno(weno_order, formulation='Z', averaging=Avg)
# Add to schemes
schemes[LLF.name] = LLF
rk = RungeKuttaLS(3)
schemes[rk.name] = rk

block = SimulationBlock(ndim, block_number=0)


local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
for con in constants:
    local_dict[con] = ConstantObject(con)
# Initial conditions
x0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
x1 = parse_expr("Eq(DataObject(x1), block.deltas[1]*block.grid_indexes[1])", local_dict=local_dict)


d_in = parse_expr("Eq(GridVariable(d), 1.0)", local_dict=local_dict)
u0_in = parse_expr("Eq(GridVariable(u0), 1.0)", local_dict=local_dict)
u1_in = parse_expr("Eq(GridVariable(u1), 0.0)", local_dict=local_dict)
p_in = parse_expr("Eq(GridVariable(p), 1.0/(gama*Minf**2.0))", local_dict=local_dict)  # p = 1/(gama*Minf^2)


rho = parse_expr("Eq(DataObject(rho), d)", local_dict=local_dict)
rhou0 = parse_expr("Eq(DataObject(rhou0), d*u0)", local_dict=local_dict)
rhou1 = parse_expr("Eq(DataObject(rhou1), d*u1)", local_dict=local_dict)
rhoE = parse_expr("Eq(DataObject(rhoE), p/(gama-1) + 0.5* d *(u0**2+u1**2))", local_dict=local_dict)

initial = GridBasedInitialisation()
initial.add_equations([x0, x1, d_in, u0_in, u1_in, p_in, rho, rhou0, rhou1, rhoE])

boundaries = [[0, 0] for t in range(ndim)]
# Left Dirchlet at x= 0, inlet conditions
# Inflow conditions
direction = 0
side = 0
inlet_eq = [d_in, u0_in, u1_in, p_in, rho, rhou0, rhou1, rhoE]
boundaries[direction][side] = DirichletBC(direction, side, inlet_eq)

# Right extrapolation at outlet
direction = 0
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0)

# Bottom inviscid wall
direction = 1
side = 0
boundaries[direction][side] = SymmetryBC(direction, side)

# Top dirichlet shock condition
direction = 1
side = 1
pre_shock_pressure = 1.0 / (1.4 * 4.0)
post_shock_pressure = pre_shock_pressure * 1.18646663
shock_loc = parse_expr("Eq(GridVariable(shock_loc), 40.0)", local_dict=local_dict)

x = "Eq(GridVariable(x), DataObject(x0))"
d = "Eq(GridVariable(d), Piecewise((1.0 ,x<shock_loc),(1.129734572, x>=shock_loc),(1.0,True)))"
u0 = "Eq(GridVariable(u0), Piecewise((1.0 ,x<shock_loc),(0.9667023804242755, x>=shock_loc),(1.0,True)))"
u1 = "Eq(GridVariable(u1), Piecewise((0.0 ,x<shock_loc),(-0.052106102140246795, x>=shock_loc),(1.0,True)))"
p = "Eq(GridVariable(p), Piecewise( (%f,x<shock_loc),(%f, x>=shock_loc),(1.0,True)))" % (pre_shock_pressure, post_shock_pressure)

x = parse_expr(x, local_dict=local_dict)
d = parse_expr(d, local_dict=local_dict)
u0 = parse_expr(u0, local_dict=local_dict)
u1 = parse_expr(u1, local_dict=local_dict)
p = parse_expr(p, local_dict=local_dict)

upper_eqns = [x, shock_loc, d, u0, u1, p, rho, rhou0, rhou1, rhoE]
boundaries[direction][side] = DirichletBC(direction, side, upper_eqns)

block.set_block_boundaries(boundaries)

kwargs = {'iotype': "Write"}
h5 = iohdf5(**kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1')])
block.setio(copy.deepcopy(h5))

block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
block.set_discretisation_schemes(schemes)

block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
constants = ['gama', 'Minf', 'dt', 'niter', 'block0np0', 'block0np1', 'Delta0block0', 'Delta1block0']
values = ['1.4', '2.0', '0.1', '10000', '457', '255', '350.0/(block0np0-1)', '115.0/(block0np1-1)']
substitute_simulation_parameters(constants, values)
