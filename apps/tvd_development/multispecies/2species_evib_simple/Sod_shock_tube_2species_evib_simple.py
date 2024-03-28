#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters

#############################################################################################################################################
#																																			#
# Inputs			 																														#
#																																			#
#############################################################################################################################################

input_dict = {
    "gama"                 : "1.4", 
    "Re"                   : "1.0",
    "dt"                   : "0.0002", 
    "niter"                : "ceil(0.2/0.0002)",
    "block0np0"            : "200", 
    "Delta0block0"         : "1.0/(block0np0-1)",
    "eps"                  : "1.0e-16",
    "inv_rfact0_block0"  : "1.0/Delta0block0",
    "lambda0_TVD"          : "dt/Delta0block0", 
    "kappa_TVD"           : "2.0",
    "MN"                   : "14.0",    
    "MN2"                  : "28.0",
    "dhN"                   : "112.951",
    "cN"                   : "0.2",
    "cN2"                   : "0.8",
    "thetavN2"             : "3390.0",
    "Rhat"                 : "8314.3",
    "u_r"                  : "340",
    "L_r"                  : "1.0",
    "rho_r"                : "1.225",
    "p_r"                  : "101325.0",
    "kappa"                 : "1.4", #completely made up! Just for testing
}

constants = input_dict.keys()
values = input_dict.values()

ndim = 1
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# Substitutions
conservative = True 
substitutions = []

eq = EinsteinEquation()
massN = "Eq(Der(rhoN,t), - Conservative(rhoN*u_j,x_j))"
massN2 = "Eq(Der(rhoN2,t), - Conservative(rhoN2*u_j,x_j))"
momentum = "Eq(Der(rhou_i,t) , -Conservative(rhou_i*u_j + KD(_i,_j)*p,x_j))"
evib     = "Eq(Der(rhoev,t), - Conservative(rhoev*u_j,x_j) + (rhoN2*eveqN2 - rho*ev)/tau)" 
energy = "Eq(Der(rhoE,t), - Conservative((p+rhoE)*u_j,x_j))"

massN = eq.expand(massN, ndim, coordinate_symbol, substitutions, constants)
massN2 = eq.expand(massN2, ndim, coordinate_symbol, substitutions, constants)
momentum = eq.expand(momentum, ndim, coordinate_symbol, substitutions, constants)
evib = eq.expand(evib, ndim, coordinate_symbol, substitutions, constants)
energy = eq.expand(energy, ndim, coordinate_symbol, substitutions, constants)

# Expand the simulation equations, for this create a simulation equations class
simulation_eq = SimulationEquations()
simulation_eq.add_equations(massN)
simulation_eq.add_equations(massN2)
simulation_eq.add_equations(momentum)
simulation_eq.add_equations(evib)
simulation_eq.add_equations(energy)

pressure = "Eq(p, (gama-1)*(rhoE - (1/2)*(rhoN+rhoN2)*(KD(_i,_j)*u_i*u_j)))"
velocity = "Eq(u_i, rhou_i/(rhoN + rhoN2))"
enthalpy = "Eq(H, (rhoE + p) / (rhoN + rhoN2))"

speed_of_sound = "Eq(a, (gama*p/(rhoN + rhoN2))**0.5)"

constituent = ConstituentRelations()
eqns = eq.expand(velocity, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)
eqns = eq.expand(pressure, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)
eqns = eq.expand(speed_of_sound, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)
eqns = eq.expand(enthalpy, ndim, coordinate_symbol, substitutions, constants)
constituent.add_equations(eqns)

block = SimulationBlock(ndim, block_number=0)

# Initial conditions
initial = GridBasedInitialisation()
x0 = "Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])"
dN = "Eq(GridVariable(dN), Piecewise((0.8, DataObject(x0) < 0.5), (0.2, True)))"
dN2 = "Eq(GridVariable(dN2), Piecewise((0.2, DataObject(x0) < 0.5), (0.8, True)))"
p = "Eq(GridVariable(p), Piecewise((1.0, DataObject(x0) < 0.5), (0.1, True)))"
u0 = "Eq(GridVariable(u0), Piecewise((0.0, DataObject(x0) < 0.5),(0.0, True)))"
rhoN = "Eq(DataObject(rhoN), dN)"
rhoN2 = "Eq(DataObject(rhoN2), dN2)"
rho = "Eq(DataObject(rho), dN + dN2)"
rhou0 = "Eq(DataObject(rhou0), (dN + dN2)*u0)"
rhoE = "Eq(DataObject(rhoE), p/(gama-1.0) + 0.5*(dN + dN2)*(u0**2.0))"


eqns = [x0, u0, p, dN, dN2, rho, rhoN, rhoN2, rhou0, rhoE]
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
initial = GridBasedInitialisation()
initial.add_equations(initial_equations)

# Left boundary condition
dN, dN2, u, p  = symbols('dN dN2 u0 p', **{'cls':GridVariable})
left_eqns = [OpenSBLIEq(dN, 0.8), OpenSBLIEq(dN2, 0.2), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, 1.0)] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhou0, rhoE]]
# Right boundary condition
right_eqns = [OpenSBLIEq(dN, 0.2), OpenSBLIEq(dN2, 0.8), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, 0.1)] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhou0, rhoE]]

boundaries = []
# Create boundaries, one for each side per dimension
for direction in range(ndim):
    boundaries += [DirichletBC(direction, 0, left_eqns)]
    boundaries += [DirichletBC(direction, 1, right_eqns)]

schemes = {}
fns = 'u0'
cent = StoreSome(4, fns)
schemes[cent.name] = cent

# Time-stepping
rk = RungeKuttaLS(3, formulation='SSP')
schemes[rk.name] = rk
 
block.set_block_boundaries(boundaries)
kwargs = {'iotype': "Write"}
h5 = iohdf5(**kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0')])
h5.add_arrays([DataObject('p')])

block.setio(copy.deepcopy(h5))

TVD_filter = TVDFilter(block, airfoil=False, optimize=False, species = '2_species_ev')
block.set_equations(TVD_filter.equation_classes)


block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
block.set_discretisation_schemes(schemes)
block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)


substitute_simulation_parameters(constants, values)
print_iteration_ops(every=1, NaN_check='rhoN')
''''''