#!/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# mixst03.py - shock tube with thermochemistry
#           based on, https://doi.org/10.1016/0021-9991(90)90245-V
#
# author. gnsa1e21, 2023
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------


#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters

# Direct application of shock-capturing scheme, otherwise central scheme with filter-step example
weno = False
teno = False
ndim = 1


mass_O   = "Eq(Der(rhoO,t), - Skew(rhoO*u_j,x_j) + Der(mu/(Re*Sc)*Der(yO,x_j),x_j)  +wdotO)" #+wdotO
mass_O2  = "Eq(Der(rhoO2,t), - Skew(rhoO2*u_j,x_j) + Der(mu/(Re*Sc)*Der(yO2,x_j),x_j)+wdotO2  )" #+wdotO2
mass_N   = "Eq(Der(rhoN,t), - Skew(rhoN*u_j,x_j) + Der(mu/(Re*Sc)*Der(yN,x_j),x_j) +wdotN )" #+wdotN
mass_N2  = "Eq(Der(rhoN2,t), - Skew(rhoN2*u_j,x_j) + Der(mu/(Re*Sc)*Der(yN2,x_j),x_j) +wdotN2 )" #+wdotN2
mass_NO  = "Eq(Der(rhoNO,t), - Skew(rhoNO*u_j,x_j) + Der(mu/(Re*Sc)*Der(yNO,x_j),x_j) +wdotNO )" #+wdotNO
momentum = "Eq(Der(rhou_i,t) , - Skew(rhou_i*u_j, x_j) - Der(p,x_i)  + Der(tau_i_j,x_j))"
evib     = "Eq(Der(rhoev,t), - Skew(rhoev*u_j,x_j) + (rhoO2*eveqO2+rhoN2*eveqN2+rhoNO*eveqNO - rho*ev)/tau +Der(mu/(Re*Sc)*(evO2*Der(yO2,x_j)+evN2*Der(yN2,x_j)+evNO*Der(yNO,x_j)),x_j) - Der(qv_j,x_j) + wdotO2*evO2+wdotN2*evN2+wdotNO*evNO)" # 
energy   = "Eq(Der(rhoE,t), - Skew(rhoE*u_j,x_j) - Conservative(p*u_j,x_j) +Der(mu/(Re*Sc)*Rhat*T*(5.0/(2.0*MO)*Der(yO,x_j)+5.0/(2.0*MN)*Der(yN,x_j)+7.0/(2.0*MO2)*Der(yO2,x_j)+7.0/(2.0*MN2)*Der(YN2,x_j)+7.0/(2.0*MNO)*Der(YNO,x_j)),x_j) + Der(mu/(Re*Sc)*4.1868e6*(dhO/MO*Der(YO,x_j)+dhN/MN*Der(YN,x_j)+dhNO/MNO*Der(YNO,x_j)),x_j) + Der(mu/(Re*Sc)*(evO2*Der(yO2,x_j)+evN2*Der(yN2,x_j)+evNO*Der(yNO,x_j)),x_j) - Der(q_j,x_j) - Der(qv_j,x_j) + Der(u_i*tau_i_j ,x_j))"

# substitutions used in the equations
stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i)- (2/3)* KD(_i,_j)* Der(u_k,x_k)))" 
# note that we need to keep Re (set=1) as this is used in scheme.py to split terms into convective and viscous (Q for DL - does this apply to conduction and species diffusion too?)
heat_flux = "Eq(q_j, -(kappa/Re)*Der(T,x_j))"
heat_flux_vib = "Eq(qv_j, -(kappav/Re)*Der(Tv,x_j))" 
evibration = "Eq(ev, rhoev/rho)"

density = "Eq(rho, (rhoO+rhoO2+rhoN+rhoN2+rhoNO))"
molesum = "Eq(ysum, (rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))"
molesumM = "Eq(ysumM, (rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))"
hformation = "Eq(dhf, 0*(dhO*rhoO/MO+dhN*rhoN/MN+dhNO*rhoNO/MNO))"

timeconst = "Eq(tau, 0.1 * (rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)*101325.0/(p*(rhoO2/(MO2*ptauO2)+rhoN2/(MN2*ptauN2)+rhoNO/(MNO*ptauNO))))"
thetavset = "Eq(thetavnum, (thetavO2*rhoO2/MO2+thetavN2*rhoN2/MN2+thetavNO*rhoNO/MNO))"

# make substitutions
substitutions = [stress_tensor, heat_flux, heat_flux_vib, evibration, density, molesum, molesumM, hformation, timeconst, thetavset]

# Constants that are used
constants = ["Re", "Sc", "uref", "p0", "rhoref", "pexp", "Rhat", "MO", "MO2", "MN", "MN2", "MNO","rhoEref"]
constants=constants+["dhO", "dhN", "dhNO", "thetavO2", "thetavN2", "thetavNO"]


# symbol for the coordinate system in the equations
coordinate_symbol = "x"

# Variable relations used in the system
velocity = "Eq(u_i, rhou_i/rho)"
mixturefraction = "Eq(f, rhof/rho)"
# energyam = "Eq(E, rhoE/rho)"				# Added to involve rhoE in the equaation
pressure = "Eq(p, Rhat*T*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))"
temperature = "Eq(T, (rhoE -rhoev - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j))/(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) )"
#temperature = "Eq(T, (rhoE - 4.1868e6*(dhO*rhoO/MO+dhN*rhoN/MN+dhNO*rhoNO/MNO)- rho*(1./2.)*(KD(_i,_j)*u_i*u_j))/(Rhat*(3/2*(rhoO/MO+rhoN/MN)+5/2*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) )"

# vibrational terms
tempv = "Eq(Tv, thetavnum/(ysumM*log(1.0+thetavnum*Rhat/(rhoev))))" # method to find Tv based on a mole-weighted thetav (compare with N-R or Cv-based method later)
#tempc = "Eq(Tw, rhothetav/(rho*log(1.0+rhothetav*Rhat*ysum/(rho**2*ev))))"
#Tchem = "Eq(Tc, Tv**0.3)"
#Tchem = "Eq(Tc, (rhothetav/(rho*log(1.0+rhothetav*Rhat*ysum/(rho**2*ev))))**0.3*((rhoE -rhoev - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j))/(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))))**0.7)" # OpenSBLI seems to prevent this being shortened - it is only (Tv**0.3)*(T**0.7)
evequilO2 = "Eq(eveqO2, thetavO2*Rhat/(MO2*(exp(thetavO2/T)-1.0)))"
evequilN2 = "Eq(eveqN2, thetavN2*Rhat/(MN2*(exp(thetavN2/T)-1.0)))"
evequilNO = "Eq(eveqNO, thetavNO*Rhat/(MNO*(exp(thetavNO/T)-1.0)))"

evvO2 = "Eq(evO2, thetavO2*Rhat/(MO2*(exp(thetavO2/Tv)-1.0)))"
evvN2 = "Eq(evN2, thetavN2*Rhat/(MN2*(exp(thetavN2/Tv)-1.0)))"
evvNO = "Eq(evNO, thetavNO*Rhat/(MNO*(exp(thetavNO/Tv)-1.0)))"


timefactorO2 = "Eq(ptauO2, (rhoO/MO*exp(129.0*(T**(-1.0/3.0)-0.0271)-18.42)+rhoO2/MO2*exp(129.0*(T**(-1.0/3.0)-0.0300)-18.42)+rhoN/MN*exp(129.0*(T**(-1.0/3.0)-0.0265)-18.42)+rhoN2/MN2*exp(129.0*(T**(-1.0/3.0)-0.0295)-18.42)+rhoNO/MNO*exp(129.0*(T**(-1.0/3.0)-0.0298)-18.42))/ysum)" 
timefactorN2 = "Eq(ptauN2, (rhoO/MO*exp(220.0*(T**(-1.0/3.0)-0.0268)-18.42)+rhoO2/MO2*exp(220.0*(T**(-1.0/3.0)-0.0295)-18.42)+rhoN/MN*exp(220.0*(T**(-1.0/3.0)-0.0262)-18.42)+rhoN2/MN2*exp(220.0*(T**(-1.0/3.0)-0.0290)-18.42)+rhoNO/MNO*exp(220.0*(T**(-1.0/3.0)-0.0293)-18.42))/ysum)" 
timefactorNO = "Eq(ptauNO, (rhoO/MO*exp(168.0*(T**(-1.0/3.0)-0.0270)-18.42)+rhoO2/MO2*exp(168.0*(T**(-1.0/3.0)-0.0298)-18.42)+rhoN/MN*exp(168.0*(T**(-1.0/3.0)-0.0264)-18.42)+rhoN2/MN2*exp(168.0*(T**(-1.0/3.0)-0.0293)-18.42)+rhoNO/MNO*exp(168.0*(T**(-1.0/3.0)-0.0295)-18.42))/ysum)" 

# fluid properties
viscosity = "Eq(mu, ((yO2+yN2+yNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34357)+(yO+yN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.342509))*(1.0-exp(-0.010568*T)) )" # NDS simplication of Blottner/Sutherland
conductivity = "Eq(kappa, 0.0)"#(1410.0*(yO2+yN2+yNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34357)+2210.0*(yO+yN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.342509))*(1.0-exp(-0.010568*T)) )" # NDS simplification of Blottner/Sutherland/Eucken (see Viscosity_model3.m and Viscosity_model_v2_optimise.m)
conductivity_vib = "Eq(kappav, 0.0)"#(286.7*(yO2+yN2+yNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34357)+519.6*(yO+yN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.342509))*(1.0-exp(-0.010568*T)) )" # NDS simplification of Blottner/Sutherland/Eucken (see Viscosity_model3.m and Viscosity_model_v2_optimise.m) vibration is just taken as one factor of Rhat/Mhat(needs a closer look maybe)

# chemistry
molefractionO = "Eq(yO, rhoO/(MO*ysum))"
molefractionO2 = "Eq(yO2, rhoO2/(MO2*ysum))"
molefractionN = "Eq(yN, rhoN/(MN*ysum))"
molefractionN2 = "Eq(yN2, rhoN2/(MN2*ysum))"
molefractionNO = "Eq(yNO, rhoNO/(MNO*ysum))"

# Instantiate EinsteinEquation class for expanding the Einstein indices in the equations
eq = EinsteinEquation()

# Expand the simulation equations
simulation_eq = SimulationEquations()
base_eqns = [mass_O, mass_O2, mass_N, mass_N2, mass_NO, momentum, evib, energy]
for i, base in enumerate(base_eqns):
    base_eqns[i]=eq.expand(base, ndim, coordinate_symbol, substitutions, constants)

for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

# Expand the constituent relations
constituent = ConstituentRelations()  
constituent_eqns = [velocity, pressure, temperature, mixturefraction, viscosity, conductivity, conductivity_vib, molefractionO, molefractionO2, molefractionN, molefractionN2, molefractionNO, evequilO2, evequilN2, evequilNO, evvO2, evvN2, evvNO, timefactorO2, timefactorN2, timefactorNO, tempv] # Added energy am
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# Write the expanded equations to a Latex file with a given name and titile
latex = LatexWriter()
latex.open('equations.tex', "Einstein Expansion of the simulation equations")
latex.write_string("Simulation equations\n")
for index, eq in enumerate(flatten(simulation_eq.equations)):
    latex.write_expression(eq)

latex.write_string("Constituent relations\n")
for index, eq in enumerate(flatten(constituent.equations)):
    latex.write_expression(eq)

latex.close()

# Create a simulation block
block = SimulationBlock(ndim, block_number=0)


# Create a simulation block
block = SimulationBlock(ndim, block_number=0)

# Local dictionary for parsing the expressions
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# initial conditions and grid generation																															
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

uref, p0, rhoref,rhoEref, Rhat, MO, MO2, MN, MN2, MNO, dhO, dhN, dhNO, thetavO2, thetavN2, thetavNO \
	= symbols('uref p0 rhoref rhoEref Rhat MO MO2 MN MN2 MNO dhO dhN dhNO thetavO2 thetavN2 thetavNO', **{'cls': ConstantObject})
rhoO, rhoO2, rhoN, rhoN2, rhoNO,rho, u, v, p, T ,f, ev, evequilO2, evequilN2, evequilNO,evO2, evN2, evNO,evO2eq, evN2eq, evNOeq, Tv \
	= symbols('rhoO, rhoO2, rhoN, rhoN2, rhoNO,rho, u, v, p, T, f, ev, evequilO2, evequilN2, evequilNO,evO2, evN2, evNO,evO2eq, evN2eq, evNOeq, Tv', **{'cls': GridVariable})

Rhat = 8314.3
MN2, MN, MO2, MO, MNO = 28.0, 14.0, 32.0, 16.0, 30.0 # molar mass

ul, Tl, pl, cN2l, cNl, cO2l, cOl, cNOl = symbols('ul Tl pl cN2l cNl cO2l cOl cNOl', **{'cls': ConstantObject})
ur, Tr, pr, cN2r, cNr, cO2r, cOr, cNOr =  symbols('ur Tr pr cN2r cNr cO2r cOr cNOr', **{'cls': ConstantObject})

initial = GridBasedInitialisation()

ul, Tl, pl = 0.0, 1.0, 1.0
ur, Tr, pr = 0.0, 0.3, 0.125
rl,rr = 1.0,0.1

cN2l, cNl, cO2l, cOl, cNOl = 0.234274, 0.000027, 0.698439, 0.066072, 0.001189
cN2r, cNr, cO2r, cOr, cNOr = 0.069302, 0.145363, 0.000025, 0.745802, 0.039508

# grid equation 
x0 = "Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])"

# velocity, temperature and pressure
u0 = "Eq(GridVariable(u0), ul )"

cN2, cN, cO2, cO, cNO =  symbols('cN2 cN cO2 cO cNO', **{'cls': ConstantObject})
# species densities, composition at p = 1.95256e5 Pa and T = 9000 K, see python script for Park compositions
cN = "Eq(GridVariable(cN), Piecewise((0.000027, DataObject(x0) < 0.5), (0.145363, True)))"
cN2 = "Eq(GridVariable(cN2), Piecewise((0.234274, DataObject(x0) < 0.5), (0.069302, True)))"
cO = "Eq(GridVariable(cO), Piecewise((0.066072, DataObject(x0) < 0.5), (0.745802, True)))"
cO2 = "Eq(GridVariable(cO2), Piecewise((0.698439, DataObject(x0) < 0.5), (0.000025, True)))"
cNO = "Eq(GridVariable(cNO), Piecewise((0.001189, DataObject(x0) < 0.5), (0.039508, True)))"

rhoref = "Eq(GridVariable(rhoref), 1.0*p0*(1/Rhat)/(T0*(cO2/MO2 + cO/MO + cN2/MN2 + cNO/MNO + cN/MN)))"
rhoref = "Eq(GridVariable(rhoref), Piecewise((1.0, DataObject(x0) < 0.5), (0.1, True)))"
rhoN2 = "Eq(DataObject(rhoN2), rhoref*cN2)"
rhoN = "Eq(DataObject(rhoN), rhoref*cN)" 
rhoO2 = "Eq(DataObject(rhoO2), rhoref*cO2)" 
rhoO = "Eq(DataObject(rhoO), rhoref*cO)" 
rhoNO = "Eq(DataObject(rhoNO), rhoref*cNO)" 

rho = "Eq(DataObject(rho), (rhoref*cO+rhoref*cO2+rhoref*cN+rhoref*cN2+rhoref*cNO))" 

# vibrational energy
Tv = "Eq(GridVariable(Tv), p0/(Rhat*(rhoref*cO/MO+rhoref*cO2/MO2+rhoref*cN/MN+rhoref*cN2/MN2+rhoref*cNO/MNO)))"
evO2 = "Eq(GridVariable(evO2), thetavO2*Rhat/(MO2*(exp(thetavO2/Tv)-1.0)))"
evN2 = "Eq(GridVariable(evN2), thetavN2*Rhat/(MN2*(exp(thetavN2/Tv)-1.0)))"
evNO = "Eq(GridVariable(evNO), thetavNO*Rhat/(MNO*(exp(thetavNO/Tv)-1.0)))"

d = "Eq(GridVariable(T0), Piecewise((1.0, DataObject(x0) < 0.0), (0.3, True)))"
p = "Eq(GridVariable(p0), Piecewise((1.0, DataObject(x0) < 0.0), (0.125, True)))"
u0 = "Eq(GridVariable(u0), Piecewise((0.0, DataObject(x0) < 0.0),(0, True)))"

rhou0 = "Eq(DataObject(rhou0), (rhoref*cO+rhoref*cO2+rhoref*cN+rhoref*cN2+rhoref*cNO)*u0)"
rhoev = "Eq(DataObject(rhoev), (rhoref*cO2*evO2+rhoref*cN2*evN2+rhoref*cNO*evNO)*(rhoref*cO+rhoref*cO2+rhoref*cN+rhoref*cN2+rhoref*cNO)/(rhoref*cO2+rhoref*cN2+rhoref*cNO))"
rhoE = "Eq(DataObject(rhoE), p0*(3.0/2.0*(rhoref*cO/MO+rhoref*cN/MN)+5.0/2.0*(rhoref*cO2/MO2+rhoref*cN2/MN2+rhoref*cNO/MNO))/(rhoref*cO/MO+rhoref*cN/MN+rhoref*cO2/MO2+rhoref*cN2/MN2+rhoref*cNO/MNO)+4.1868e6*(dhO*rhoref*cO/MO+dhN*rhoref*cN/MN+dhNO*rhoref*cNO/MNO)+rhoref*cO2*evO2+rhoref*cN2*evN2+rhoref*cNO*evNO+0.5*(rhoref*cO+rhoref*cO2+rhoref*cN+rhoref*cN2+rhoref*cNO)*(u0**2))"


# eqns = [x0, u0, p, d, rho, rhou0, rhoE]
eqns = [x0, u0, d, p, cN,cN2,cO,cO2,cNO,rhoref, rhoN2, rhoN, rhoO2, rhoO, rhoNO, rho, rhou0,  Tv, evO2, evN2, evNO, rhou0, rhoev, rhoE]
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
initial = GridBasedInitialisation()
initial.add_equations(initial_equations)

# Left boundary condition
d, u, p, cN2, cN, cO2, cO, cNO, rhoref = symbols('T u0 p0 cN2 cN cO2 cO cNO rhoref', **{'cls':GridVariable})
left_eqns = [OpenSBLIEq(T, Tl), OpenSBLIEq(u, ul), OpenSBLIEq(p, pl), OpenSBLIEq(cN2, cN2l),  OpenSBLIEq(cN, cNl),OpenSBLIEq(cO2, cO2l),  OpenSBLIEq(cO, cOl), OpenSBLIEq(cNO, cNOl), \
OpenSBLIEq(rhoref, rl)] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN2, rhoN, rhoO2, rhoO, rhoNO, rho, rhou0, Tv, evO2, evN2, evNO, rhoev, rhoE]]

# Right boundary condition
right_eqns = [OpenSBLIEq(T, Tr), OpenSBLIEq(u, ur), OpenSBLIEq(p, pr),OpenSBLIEq(cN2, cN2r),  OpenSBLIEq(cN, cNr),OpenSBLIEq(cO2, cO2r),  OpenSBLIEq(cO, cOr),OpenSBLIEq(cNO, cNOr),\
OpenSBLIEq(rhoref, rr)] + [parse_expr(eq, local_dict=local_dict) for eq in [rhoN2, rhoN, rhoO2, rhoO, rhoNO, rho, rhou0, Tv, evO2, evN2, evNO, rhoev, rhoE]]

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


block.setio(copy.deepcopy(h5))

TVD_filter = TVDFilter(block, airfoil=False, optimize=False, species = '5_species_ev')
block.set_equations(TVD_filter.equation_classes)

block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
block.set_discretisation_schemes(schemes)
block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
constants = ['gama', 'dt', 'niter', 'block0np0', 'Delta0block0', 'eps', 'inv_rfact0_block0', 'lambda0_TVD', 'TENO_CT','kappa_TVD']
values = ['1.4', '0.0002', '2', '200', '1.0/(block0np0-1)', '1.0e-16', '1.0/Delta0block0', 'dt/Delta0block0', '1.0e-5','1.5']
substitute_simulation_parameters(constants, values)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# define constants, in line with intialisation above																												
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# mixlayer conditions
physical_constants = ['Re', 'Sc', 'ul', 'Tl', 'pl', 'ur','Tr','pr']
physical_values = ['1.0', '0.71', str(ul), str(Tl), str(pl), str(ur),str(Tr),str(pr)]

substitute_simulation_parameters(physical_constants, physical_values)

gas_data = ['Rhat', 'MO', 'MO2', 'MN', 'MN2', 'MNO', 'dhO', 'dhN', 'dhNO', 'thetavO2', 'thetavN2', 'thetavNO']
physical_values = ['8314.3', '16.0', '32.0', '14.0', '28.0', '30.0', '59.544', '112.951', '21.6009', '2270.0', '3390.0', '2740.0']
substitute_simulation_parameters(gas_data, physical_values)

concentration_data = ['cN2', 'cN', 'cO2', 'cO', 'cNO']
physical_values    = [  str(cN2l), str(cNl), str(cO2l), str(cOl), str(cNOl)]
substitute_simulation_parameters(concentration_data, physical_values)




print_iteration_ops(every=1,NaN_check='rhoN2_B0')
