#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import exp

#############################################################################################################################################
#																																			#
# Inputs			 																														#
#																																			#
#############################################################################################################################################

input_dict = {
    "gama"                 : "1.4", 
    "Re"                   : "1.0",
    "Sc"                   : "1.0",
    "dt"                   : "0.00002", 
    "niter"                : "1",#2000",#ceil(0.2/0.00003)",#ceil(0.2/0.0002)",
    "block0np0"            : "200", 
    "Delta0block0"         : "1.0/(block0np0-1)",
    "eps"                  : "1.0e-16",
    "inv_rfact0_block0"  : "1.0/Delta0block0",
    "lambda0_TVD"          : "dt/Delta0block0", 
    "kappa_TVD"           : "1.5",
    "MN"                   : "14.0",    
    "MN2"                  : "28.0",
    "dhN"                   : "112.951",
    "cN"                   : "0.02",
    "cN2"                   : "0.98",
    "thetavN2"             : "3390.0",
    "Rhat"                 : "8314.3",
    "p_r"                  : "101325.0",
    "kappa"                 : "0.6", #completely made up! Just for testing
}

constants = input_dict.keys()
values = input_dict.values()

ndim = 1
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# Substitutions

eq = EinsteinEquation()
massN   = "Eq(Der(rhoN,t), - Conservative(rhoN*u_j,x_j) + Der(mu/(Re*Sc)*Der(yN,x_j),x_j)  + wdotN )" 
massN2  = "Eq(Der(rhoN2,t), - Conservative(rhoN2*u_j,x_j) + Der(mu/(Re*Sc)*Der(yN2,x_j),x_j) + wdotN2)" 
momentum = "Eq(Der(rhou_i,t) , -Conservative(rhou_i*u_j + KD(_i,_j)*p,x_j))"
evib     = "Eq(Der(rhoev,t), - Conservative(rhoev*u_j,x_j) + (rhoN2*eveqN2 - rho*ev)/tau + wdotN + wdotN2)" 
energy   = "Eq(Der(rhoE,t), - Skew(rhoE*u_j,x_j) - Conservative(p*u_j,x_j) +Der(mu/(Re*Sc)*Rhat*T*(5.0/(2.0*MN)*Der(yN,x_j)+7.0/(2.0*MN2)*Der(YN2,x_j)),x_j) + Der(mu/(Re*Sc)*4.1868e6*(dhN/MN*Der(YN,x_j)),x_j) + Der(mu/(Re*Sc)*(evN2*Der(yN2,x_j)),x_j) - Der(q_j,x_j) - Der(qv_j,x_j) + Der(u_i*tau_i_j ,x_j))"

# substitutions used in the equations
heat_flux = "Eq(q_j, -(kappa/Re)*Der(T,x_j))"
evibration = "Eq(ev, rhoev/rho)"
molesum = "Eq(ysum, rhoN/MN+rhoN2/MN2)"
timeconst = "Eq(tau, (rhoN2/MN2)*101325.0/(p*(rhoN2/(MN2*ptauN2))))"
hformation = "Eq(dhf, 0.00001*(dhN*rhoN/MN))"

substitutions = [heat_flux, timeconst, evibration, molesum, hformation]
# Expand the simulation equations, for this create a simulation equations class
massN = eq.expand(massN, ndim, coordinate_symbol, substitutions, constants)
massN2 = eq.expand(massN2, ndim, coordinate_symbol, substitutions, constants)
momentum = eq.expand(momentum, ndim, coordinate_symbol, substitutions, constants)
evib = eq.expand(evib, ndim, coordinate_symbol, substitutions, constants)
energy = eq.expand(energy, ndim, coordinate_symbol, substitutions, constants)
simulation_eq = SimulationEquations()
simulation_eq.add_equations(massN)
simulation_eq.add_equations(massN2)
simulation_eq.add_equations(momentum)
simulation_eq.add_equations(evib)
simulation_eq.add_equations(energy)

# Constituent relations
# pressure = "Eq(p, (gama-1)*(rhoE - (1/2)*(rhoN+rhoN2)*(KD(_i,_j)*u_i*u_j)))"
pressure = "Eq(p, Rhat*T*(rhoN/MN+rhoN2/MN2))"
velocity = "Eq(u_i, rhou_i/(rhoN + rhoN2))"
# temperature = "Eq(T, p/((rhoN + rhoN2)*Rhat))"
temperature = "Eq(T, (rhoE - dhf - (rhoN + rhoN2)*(1./2.)*(KD(_i,_j)*u_i*u_j))/(Rhat*((rhoN/MN)+(rhoN2/MN2))))"
speed_of_sound = "Eq(a, (gama*p/(rhoN + rhoN2))**0.5)"
timefactorN2 = "Eq(ptauN2, (rhoN/MN*exp(220.0*(T**(-1.0/3.0)-0.0262)-18.42)+rhoN2/MN2*exp(220.0*(T**(-1.0/3.0)-0.0290)-18.42))/ysum)" 
evequilN2 = "Eq(eveqN2, thetavN2*Rhat/(MN2*(exp(thetavN2/T)-1.0)))"
evN2 = "Eq(evN2, thetavN2*Rhat/(MN2*(exp(thetavN2/T)-1.0)))"
consts = "Eq(consts, cN + cN2)" # This is just to declare constants that arent called in the CR and so wont be recognised in the initialisation

constituent = ConstituentRelations()
constituent_eqns = [velocity, pressure, temperature, timefactorN2, evequilN2, consts] 
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)
for eqn in constituent_eqns:
    constituent.add_equations(eqn)

block = SimulationBlock(ndim, block_number=0)

# Initial conditions
cN2l, cNl = 0.98, 0.02
cN2r, cNr = 0.98, 0.02
pl, pr = 2000000.0, 100000.0
rl, rr = 0.2806, 0.3368

MN2, MN, Rhat =  symbols('MN2 MN Rhat', **{'cls': ConstantObject})

x0 = "Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])"
r = "Eq(GridVariable(r), Piecewise((0.2806, DataObject(x0) < 0.5), (0.3368, True)))"
u0 = "Eq(GridVariable(u0), Piecewise((0.0, DataObject(x0) < 0.5),(0.0, True)))"
p = "Eq(GridVariable(p0), Piecewise((2000000.0, DataObject(x0) < 0.5), (100000.0, True)))"
cN = "Eq(GridVariable(cN), Piecewise((0.02, DataObject(x0) < 0.5), (0.02, True)))"
cN2 = "Eq(GridVariable(cN2), Piecewise((0.98, DataObject(x0) < 0.5), (0.98, True)))"

rhoN2 = "Eq(DataObject(rhoN2), r*cN2)" 
rhoN = "Eq(DataObject(rhoN), r*cN)" 

T = "Eq(GridVariable(T0), p0 / (r*Rhat))"
evN2 = "Eq(GridVariable(evN2), thetavN2*Rhat/(MN2*(exp(thetavN2/T0)-1.0)))"

rhoev = "Eq(DataObject(rhoev), 100.0)"
rhou0 = "Eq(DataObject(rhou0), r*u0)"
rhoE = "Eq(DataObject(rhoE), p0*(3.0/2.0*(r*cN/MN)+5.0/2.0*(r*cN2/MN2))/(r*cN/MN+r*cN2/MN2)+ 0.5*(r*cN + r*cN2)*(u0**2))"

eqns = [x0, u0, r, p, T, cN,cN2, rhoN, rhoN2, rhou0, evN2, rhoev,  rhoE]
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
initial = GridBasedInitialisation()
initial.add_equations(initial_equations)

r, u, p, cN2, cN, T  = symbols('r u0 p0 cN2 cN T0', **{'cls':GridVariable})
# Left boundary condition
left_eqns = [OpenSBLIEq(r, rl), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, pl), OpenSBLIEq(cN2, cN2l),  OpenSBLIEq(cN, cNl),\
OpenSBLIEq(T, pl*(1/Rhat)/(rl))] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhou0, evN2, rhoev, rhoE]]
# Right boundary condition
right_eqns = [OpenSBLIEq(r, rr), OpenSBLIEq(u, 0.0),  OpenSBLIEq(p, pr), OpenSBLIEq(cN2, cN2r),  OpenSBLIEq(cN, cNr),\
OpenSBLIEq(T, pr*(1/Rhat)/(rr))] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhou0, evN2, rhoev, rhoE]]

boundaries = []
# Create boundaries, one for each side per dimension
for direction in range(ndim):
    boundaries += [DirichletBC(direction, 0, left_eqns)]
    boundaries += [DirichletBC(direction, 1, right_eqns)]

schemes = {}
fns = 'u'
cent = StoreSome(4, fns)
schemes[cent.name] = cent

# Time-stepping
rk = RungeKuttaLS(3, formulation='SSP')
schemes[rk.name] = rk
 
block.set_block_boundaries(boundaries)
kwargs = {'iotype': "Write"}
h5 = iohdf5( **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0')])
h5.add_arrays([DataObject('T')])
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
