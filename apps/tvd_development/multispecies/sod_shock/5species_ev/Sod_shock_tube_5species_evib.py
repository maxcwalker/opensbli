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
    "dt"                   : "0.0001", 
    "niter"                : "700",#ceil(0.2/0.00003)",#ceil(0.2/0.0002)",
    "block0np0"            : "200", 
    "Delta0block0"         : "1.0/(block0np0-1)",
    "eps"                  : "1.0e-16",
    "inv_rfact0_block0"    : "1.0/Delta0block0",
    "lambda0_TVD"          : "dt/Delta0block0", 
    "kappa_TVD"            : "1.5",
    "MN"                   : "14.0",    
    "MN2"                  : "28.0",
    "MO"                  : '16.0',
    "MO2"                  : "32.0",
    "MNO"                  : "30.0",
    "dhN"                  : "112.951",
    "thetavO2"              : "2270.0",
    "thetavN2"             : "3390.0",
    "thetavNO"             : "2740.0",
    "Rhat"                 : "8314.3",
    "uref"                 : "340",
    "Lref"                 : "1.0",
    "Tref"                 : "600",
    "rhoref"               : "1.225",
    "p_r"                  : "101325.0",
    "kappa"                : "0.0",   
}

constants = input_dict.keys()
values = input_dict.values()

ndim = 1
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# Substitutions
conservative = True 

eq = EinsteinEquation()
massN   = "Eq(Der(rhoN,t), - Conservative(rhoN*u_j,x_j) + wdotN)" 
massN2  = "Eq(Der(rhoN2,t), - Conservative(rhoN2*u_j,x_j) + wdotN2)" 
massO  = "Eq(Der(rhoO,t), - Conservative(rhoO*u_j,x_j) + wdotO)" 
massO2  = "Eq(Der(rhoO2,t), - Conservative(rhoO2*u_j,x_j) + wdotO2)" 
massNO  = "Eq(Der(rhoNO,t), - Conservative(rhoNO*u_j,x_j) + wdotNO)" 
momentum = "Eq(Der(rhou_i,t) , -Conservative(rhou_i*u_j + KD(_i,_j)*p,x_j))"
evib     = "Eq(Der(rhoev,t), - Conservative(rhoev*u_j,x_j) + (rhoO2*eveqO2+rhoN2*eveqN2+rhoNO*eveqNO - rho*ev)/tau + wdotO2*evO2+wdotN2*evN2+wdotNO*evNO)" 
energy = "Eq(Der(rhoE,t), - Conservative((p+rhoE)*u_j,x_j) - Der(q_j,x_j))"

# substitutions used in the equations
heat_flux = "Eq(q_j, -(kappa)*Der(T,x_j))"
evibration = "Eq(ev, rhoev/rho)"
molesum = "Eq(ysum, (rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))"
molesumM = "Eq(ysumM, (rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))"
timeconst = "Eq(tau, uref/Lref * (rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)*101325.0/(p*(rhoO2/(MO2*ptauO2)+rhoN2/(MN2*ptauN2)+rhoNO/(MNO*ptauNO))))"
hformation = "Eq(dhf, 0.0*(dhO*rhoO/MO+dhN*rhoN/MN+dhNO*rhoNO/MNO))"

substitutions = [heat_flux, timeconst, evibration, molesum, molesumM, hformation]
# Expand the simulation equations, for this create a simulation equations class
massN = eq.expand(massN, ndim, coordinate_symbol, substitutions, constants)
massN2 = eq.expand(massN2, ndim, coordinate_symbol, substitutions, constants)
massO = eq.expand(massO, ndim, coordinate_symbol, substitutions, constants)
massO2 = eq.expand(massO2, ndim, coordinate_symbol, substitutions, constants)
massNO = eq.expand(massNO, ndim, coordinate_symbol, substitutions, constants)
momentum = eq.expand(momentum, ndim, coordinate_symbol, substitutions, constants)
evib = eq.expand(evib, ndim, coordinate_symbol, substitutions, constants)
energy = eq.expand(energy, ndim, coordinate_symbol, substitutions, constants)
simulation_eq = SimulationEquations()
simulation_eq.add_equations(massN)
simulation_eq.add_equations(massN2)
simulation_eq.add_equations(massO)
simulation_eq.add_equations(massO2)
simulation_eq.add_equations(massNO)
simulation_eq.add_equations(momentum)
simulation_eq.add_equations(evib)
simulation_eq.add_equations(energy)

# Constituent relations
density = "Eq(rho, (rhoO+rhoO2+rhoN+rhoN2+rhoNO))"
velocity = "Eq(u_i, rhou_i/(rhoO+rhoO2+rhoN+rhoN2+rhoNO))"
pressure = "Eq(p, Tref/uref**2 * Rhat*T*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))"
temperature = "Eq(T, uref**2 / Tref *(rhoE -rhoev - dhf - (rhoO+rhoO2+rhoN+rhoN2+rhoNO)*(1./2.)*(KD(_i,_j)*u_i*u_j)-rhoev)/(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) )"
# vibrational terms
tempv = "Eq(Tv, thetavnum/(ysumM*log(1.0+thetavnum*Rhat/(rhoev))))" # method to find Tv based on a mole-weighted thetav (compare with N-R or Cv-based method later)


timefactorO2 = "Eq(ptauO2, (rhoO/MO*exp(129.0*(T**(-1.0/3.0)-0.0271)-18.42)+rhoO2/MO2*exp(129.0*(T**(-1.0/3.0)-0.0300)-18.42)+rhoN/MN*exp(129.0*(T**(-1.0/3.0)-0.0265)-18.42)+rhoN2/MN2*exp(129.0*(T**(-1.0/3.0)-0.0295)-18.42)+rhoNO/MNO*exp(129.0*(T**(-1.0/3.0)-0.0298)-18.42))/ysum)" 
timefactorN2 = "Eq(ptauN2, (rhoO/MO*exp(220.0*(T**(-1.0/3.0)-0.0268)-18.42)+rhoO2/MO2*exp(220.0*(T**(-1.0/3.0)-0.0295)-18.42)+rhoN/MN*exp(220.0*(T**(-1.0/3.0)-0.0262)-18.42)+rhoN2/MN2*exp(220.0*(T**(-1.0/3.0)-0.0290)-18.42)+rhoNO/MNO*exp(220.0*(T**(-1.0/3.0)-0.0293)-18.42))/ysum)" 
timefactorNO = "Eq(ptauNO, (rhoO/MO*exp(168.0*(T**(-1.0/3.0)-0.0270)-18.42)+rhoO2/MO2*exp(168.0*(T**(-1.0/3.0)-0.0298)-18.42)+rhoN/MN*exp(168.0*(T**(-1.0/3.0)-0.0264)-18.42)+rhoN2/MN2*exp(168.0*(T**(-1.0/3.0)-0.0293)-18.42)+rhoNO/MNO*exp(168.0*(T**(-1.0/3.0)-0.0295)-18.42))/ysum)" 

evequilO2 = "Eq(eveqO2, 1/uref**2 * thetavO2/Tref*Rhat/(MO2*(exp(thetavO2/Tref/T)-1.0)))"
evequilN2 = "Eq(eveqN2, 1/uref**2 * thetavN2/Tref*Rhat/(MN2*(exp(thetavN2/Tref/T)-1.0)))"
evequilNO = "Eq(eveqNO, 1/uref**2 * thetavNO/Tref*Rhat/(MNO*(exp(thetavNO/Tref/T)-1.0)))"



constituent = ConstituentRelations()
constituent_eqns = [density, velocity, temperature,tempv, pressure, timefactorO2, timefactorN2, timefactorNO, evequilO2, evequilN2, evequilNO] 
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)
for eqn in constituent_eqns:
    constituent.add_equations(eqn)

block = SimulationBlock(ndim, block_number=0)

# Initial conditions
cNl, cNr = 0.725, 0.0
cN2l, cN2r = 0.05, 0.775
cOl, cOr = 0.225, 0.0
cO2l, cO2r = 0.0, 0.225
cNOl, cNOr = 0.0, 0.0

pl, pr = 1.0, 0.125
rl, rr = 1.0, 0.1

MN2, MN, MO,MO2,MNO, Rhat, Tref, uref =  symbols('MN2 MN MO MO2 MNO Rhat Tref uref', **{'cls': ConstantObject})

x0 = "Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])"
r = "Eq(GridVariable(r), Piecewise((1.0, DataObject(x0) < 0.5), (0.1, True)))"
u0 = "Eq(GridVariable(u0), Piecewise((0.0, DataObject(x0) < 0.5),(0.0, True)))"
p = "Eq(GridVariable(p0), Piecewise((1.0, DataObject(x0) < 0.5), (0.125, True)))"
T = "Eq(GridVariable(T0), Piecewise((1.0, DataObject(x0) < 0.5), (0.125, True)))"

cN = "Eq(GridVariable(cN), Piecewise((0.725, DataObject(x0) < 0.5), (0.0, True)))"
cN2 = "Eq(GridVariable(cN2), Piecewise((0.05, DataObject(x0) < 0.5), (0.775, True)))"
cO = "Eq(GridVariable(cO), Piecewise((0.225, DataObject(x0) < 0.5), (0.0, True)))"
cO2 = "Eq(GridVariable(cO2), Piecewise((0.0, DataObject(x0) < 0.5), (0.225, True)))"
cNO = "Eq(GridVariable(cNO), Piecewise((0.0, DataObject(x0) < 0.5), (0.0, True)))"

rhoN = "Eq(DataObject(rhoN), r*cN)" 
rhoN2 = "Eq(DataObject(rhoN2), r*cN2)" 
rhoO = "Eq(DataObject(rhoO), r*cO)" 
rhoO2 = "Eq(DataObject(rhoO2), r*cO2)" 
rhoNO = "Eq(DataObject(rhoNO), r*cNO)" 

# T = "Eq(GridVariable(T0), p0 / ((r*cN/MN)+(r*cN2/MN2)*Rhat*uref**2/Tref))"
# T = "Eq(GridVariable(T0), p0/(Rhat*r*(cO/MO+cO2/MO2+cN/MN+cN2/MN2+cNO/MNO)))"
# T = "Eq(GridVariable(T0), p0 / (r*Rhat))"

evN2 = "Eq(GridVariable(evN2), thetavN2*Rhat/(MN2*(exp(thetavN2/T0)-1.0)))"
evO2 = "Eq(GridVariable(evO2), thetavO2*Rhat/(MN2*(exp(thetavN2/T0)-1.0)))"
evNO = "Eq(GridVariable(evNO), thetavNO*Rhat/(MN2*(exp(thetavN2/T0)-1.0)))"
# rhoev = "Eq(DataObject(rhoev), (r*cN/MN+r*cN2/MN2) * 1/uref**2 * thetavN2/Tref*Rhat/(MN2*(exp(thetavN2/Tref/T0)-1.0)))"
rhoev = "Eq(DataObject(rhoev), (r*cO2*evO2+r*cN2*evN2+r*cNO*evNO)*(r*cO+r*cO2+r*cN+r*cN2+r*cNO)/(r*cO2+r*cN2+r*cNO))"
rhou0 = "Eq(DataObject(rhou0), r*u0)"
rhoE = "Eq(DataObject(rhoE), p0*(3.0/2.0*(r*cO/MO+r*cN/MN)+5.0/2.0*(r*cO2/MO2+r*cN2/MN2+r*cNO/MNO))/(r*cO/MO+r*cN/MN+r*cO2/MO2+r*cN2/MN2+r*cNO/MNO)+r*cO2*evO2+r*cN2*evN2+r*cNO*evNO+0.5*(r*cO/MO+r*cO2/MO2+r*cN/MN+r*cN2/MN2+r*cNO/MNO)*(u0**2))"

eqns = [x0, u0, r, p, T, cN,cN2, cO, cO2, cNO, rhoN, rhoN2, rhoO, rhoO2, rhoNO, rhou0, evN2, evO2, evNO, rhoev,  rhoE]
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
initial = GridBasedInitialisation()
initial.add_equations(initial_equations)

r, u, p, cN, cN2, cO, cO2, cNO = symbols('r u0 p0 cN cN2 cO cO2 cNO', **{'cls':GridVariable})
# Left boundary condition
left_eqns = [OpenSBLIEq(r, rl), OpenSBLIEq(u, 0.0), OpenSBLIEq(p, pl), OpenSBLIEq(cN, cNl),  OpenSBLIEq(cN2, cN2l),  OpenSBLIEq(cO, cOl),  OpenSBLIEq(cO2, cO2l),  OpenSBLIEq(cNO, cNOl),\
] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhoO, rhoO2, rhoNO, T, rhou0, evN2, evO2, evNO, rhoev, rhoE]] #*(cOl/MO+cO2l/MO2+cNl/MN+cN2l/MN2+cNOl/MNO)
# Right boundary condition
right_eqns = [OpenSBLIEq(r, rr), OpenSBLIEq(u, 0.0),  OpenSBLIEq(p, pr), OpenSBLIEq(cN, cNr),  OpenSBLIEq(cN2, cN2r),  OpenSBLIEq(cO, cOr),  OpenSBLIEq(cO2, cO2r),  OpenSBLIEq(cNO, cNOr),\
] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN, rhoN2, rhoO, rhoO2, rhoNO, T, rhou0, evN2, evO2, evNO, rhoev, rhoE]] #*(cOr/MO+cO2r/MO2+cNr/MN+cN2r/MN2+cNOr/MNO)

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

TVD_filter = TVDFilter(block, airfoil=False, optimize=False, species = '5_species_ev')
block.set_equations(TVD_filter.equation_classes)

# WF = WENOFilter(block, order=5, flux_type='LLF', airfoil=False, optimize=False, species='2_species_ev')
# block.set_equations(WF.equation_classes) 

block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
block.set_discretisation_schemes(schemes)
block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)

substitute_simulation_parameters(constants, values)
print_iteration_ops(every=1, NaN_check='rhoN')
