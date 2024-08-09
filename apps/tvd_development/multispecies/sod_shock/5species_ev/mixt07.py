#!/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# chemflat3.py - TNEQ attempt at chemflat3
#
# author. gnsa1e21, 2024
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------
# Import all the functions from opensbli
from opensbli import *
from sympy import sin, cos, sinh, tanh, exp, pi, log
#import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from opensbli.utilities.chemical_kinetics import add_rate_equations
import numpy as np
# from opensbli.utilities.mixflat_init import Initialise_MixFlat
# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# define equations																														
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------
# number of simulation dimensions
# number of dimensions of the system to be solved
ndim = 1
# define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = 'x'
simulation_type, thermal_type = 'frozen', 'equilibrium'
# split scheme, kgp or feiereisen
split_scheme = 'normal'

# printf("AVG_0_af %f\n", rho_B0(0) );

# define the compresible Navier-Stokes equations in Einstein notation
mass_O   = 'Eq(Der(rhoO   , t), - Skew(rhoO  *u_j,x_j) + Der(mu/(Re*Sc)*Der(XO  ,x_j),x_j) + wdotO  )'
mass_O2  = 'Eq(Der(rhoO2  , t), - Skew(rhoO2 *u_j,x_j) + Der(mu/(Re*Sc)*Der(XO2 ,x_j),x_j) + wdotO2 )'
mass_N   = 'Eq(Der(rhoN   , t), - Skew(rhoN  *u_j,x_j) + Der(mu/(Re*Sc)*Der(XN  ,x_j),x_j) + wdotN  )'
mass_N2  = 'Eq(Der(rhoN2  , t), - Skew(rhoN2 *u_j,x_j) + Der(mu/(Re*Sc)*Der(XN2 ,x_j),x_j) + wdotN2 )'
mass_NO  = 'Eq(Der(rhoNO  , t), - Skew(rhoNO *u_j,x_j) + Der(mu/(Re*Sc)*Der(XNO ,x_j),x_j) + wdotNO )'

momentum = 'Eq(Der(rhou_i , t), - Skew(rhou_i*u_j, x_j) - Der(p,x_i)  + Der(tau_i_j,x_j))'

evib     = 'Eq(Der(rhoev  , t), - Skew(rhoev*u_j,x_j) - Der(qv_j,x_j) + wdotO2*evO2+wdotN2*evN2+wdotNO*evNO* dumgaama*cp*af*gammaf*yO*yO2*yN*yNO*yN2*Tv'\
							'   + ((rhoO2*eveqO2 - (rhoev - rhoN2*evN2 - rhoNO*evNO))/tauO2 + (rhoN2*eveqN2 - (rhoev - rhoO2*evO2 - rhoNO*evNO))/tauN2 + (rhoNO*eveqNO - (rhoev - rhoN2*evN2 - rhoO2*evO2))/tauNO)' \
							'   + Der( rho*DO2*evO2*Der(XO2,x_j) + rho*DN2*evN2*Der(XN2,x_j) + rho*DNO*evNO*Der(XNO,x_j), x_j))'
# total energy
energy   = 'Eq(Der(rhoE   , t), - Skew(rhoE*u_j ,x_j) - Conservative(p*u_j ,x_j) - Der(q_j ,x_j) - Der(qv_j ,x_j) + Der(u_i*tau_i_j ,x_j) '\
                            '   + Der( rho * (     + dhf0O/MO   + (5.0/2.0)*(Rhat/MO )*T) * DO  * Der(XO  ,x_j)       ' \
							'   +      rho * (evO2 +            + (7.0/2.0)*(Rhat/MO2)*T) * DO2 * Der(XO2 ,x_j)       ' \
							'   +      rho * (     + dhf0N/MN   + (5.0/2.0)*(Rhat/MN )*T) * DN  * Der(XN  ,x_j)       ' \
							'   +      rho * (evN2 +            + (7.0/2.0)*(Rhat/MN2)*T) * DN2 * Der(XN2 ,x_j)       ' \
							'   +      rho * (evNO + dhf0NO/MNO + (7.0/2.0)*(Rhat/MNO)*T) * DNO * Der(XNO ,x_j) ,x_j))'


constants  = ['Re', 'Sc', 'uref', 'pref', 'rhoref', 'Tinf', 'pexp', 'Tvguess', 'dumgama', 'gama']
constants += ['Rhat', 'MO', 'MO2', 'MN', 'MN2', 'MNO', 'dhO', 'dhN', 'dhNO', 'thetavO2', 'thetavN2', 'thetavNO', 'hf0']
constants += ['dhf0O', 'dhf0N', 'dhf0NO']

# scaler not used because of flat plate code 
# base_eqns 	  = [mass_O, mass_O2, mass_N, mass_N2, mass_NO, momentum, evib, energy]
base_eqns 	  = [mass_N2, mass_O2, mass_NO, mass_N, mass_O, evib, momentum, energy]


# constituent equations --------------------------------------------------------------------------------------------------------------------
velocity 		= 'Eq(u_i, rhou_i/rho)'
pressure 		= 'Eq(p, Rhat*T*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))'
temperature 	= 'Eq(T, (rhoE - rhoev - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j)) / ' \
				 		'(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN) + 5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))))'

if thermal_type == 'equilibrium':
    tempv		= 'Eq(Tv, (rhoE - rhoev - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j)) / (Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN) + 5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) )'

else:
    tempv		= 'Eq(Tv, Tvguess + (	((rhoE - rhoev - rhoO2*thetavO2*Rhat/(MO2*(exp(thetavO2/Tvguess)-1.0)) -'\
					  '  						 rhoN2*thetavN2*Rhat/(MN2*(exp(thetavN2/Tvguess)-1.0)) -'\
					  '						   	 rhoNO*thetavNO*Rhat/(MNO*(exp(thetavNO/Tvguess)-1.0)) - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j)) / (Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)))  - Tvguess) /'\
						 ' (  ((Rhat*rhoO2*thetavO2*thetavO2*exp(thetavO2/Tvguess)/(MO2*Tvguess*Tvguess*(exp(thetavO2/Tvguess)-1)*(exp(thetavO2/Tvguess)-1))) +'\
						 '     (Rhat*rhoN2*thetavN2*thetavN2*exp(thetavN2/Tvguess)/(MN2*Tvguess*Tvguess*(exp(thetavN2/Tvguess)-1)*(exp(thetavN2/Tvguess)-1))) +'\
						 '     (Rhat*rhoNO*thetavNO*thetavNO*exp(thetavNO/Tvguess)/(MNO*Tvguess*Tvguess*(exp(thetavNO/Tvguess)-1)*(exp(thetavNO/Tvguess)-1)))) /(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) +1)  )        )'

    
evequilO2 	 	= 'Eq(eveqO2, 	thetavO2*Rhat/(MO2*(exp(thetavO2/T)-1.0)))'
evequilN2 	 	= 'Eq(eveqN2, 	thetavN2*Rhat/(MN2*(exp(thetavN2/T)-1.0)))'
evequilNO 	 	= 'Eq(eveqNO, 	thetavNO*Rhat/(MNO*(exp(thetavNO/T)-1.0)))'

evibrationsO2 	= 'Eq(evO2,   	thetavO2*Rhat/(MO2*(exp(thetavO2/Tv)-1.0)))'
evibrationsN2 	= 'Eq(evN2,   	thetavN2*Rhat/(MN2*(exp(thetavN2/Tv)-1.0)))'
evibrationsNO 	= 'Eq(evNO,   	thetavNO*Rhat/(MNO*(exp(thetavNO/Tv)-1.0)))'

evibration 		= 'Eq(ev         ,  rhoev/rho)'

specificheat_cp    = 'Eq(cp     ,  yN*((5.0/2.0)*Rhat/MN) + yO*((5.0/2.0)*Rhat/MO) + yN2*(7.0/2.0+((thetavN2/T)**2*exp(thetavN2/T)/(exp(thetavN2/T)-1.0)**2))*Rhat/MN2 + yO2*(7.0/2.0+((thetavO2/T)**2*exp(thetavO2/T)/(exp(thetavO2/T)-1.0)**2))*Rhat/MO2 + yNO*(7.0/2.0+((thetavNO/T)**2*exp(thetavNO/T)/(exp(thetavNO/T)-1.0)**2))*Rhat/MNO)'
specificheat_gamma = 'Eq(gammaf , cp/(cp-Rhat*((yN2/MN2 + yO2/MO2 + yO/MO + yN/MN + yNO/MNO))))'
speed_of_sound     = 'Eq(af     , sqrt(gammaf*Rhat*((yN2/MN2 + yO2/MO2 + yO/MO + yN/MN + yNO/MNO))*T))'

# fluid properties - log law
viscosity 		 = 'Eq(mu     , ((XO2+XN2+XNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34567)+(XO+XN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.42509))*(1.0-exp(-0.010568*T)) )' # NDS simplication of Blottner/Sutherland
conductivity 	 = 'Eq(kappa  , (1410.0*(XO2+XN2+XNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34567)+2210.0*(XO+XN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.42509))*(1.0-exp(-0.010568*T)) )' # NDS simplification of Blottner/Sutherland/Eucken (see Viscosity_model3.m and Viscosity_model_v2_optimise.m)
conductivity_vib = 'Eq(kappav , (286.7*(XO2+XN2+XNO)*0.1*exp(-11.2202)*T**(0.021823*log(T)+0.34567)+519.6*(XO+XN)*0.1*exp(-11.7344)*T**(0.022652*log(T)+0.42509))*(1.0-exp(-0.010568*T)) )' # NDS simplification of Blottner/Sutherland/Eucken (see Viscosity_model3.m and Viscosity_model_v2_optimise.m) vibration is just taken as one factor of Rhat/Mhat(needs a closer look maybe)

# diffusion
diffusionO  		    = 'Eq(DO,  	 	mu/(rho*Re*Sc) )'
diffusionO2 		    = 'Eq(DO2,  	mu/(rho*Re*Sc) )'
diffusionN  		    = 'Eq(DN,  	 	mu/(rho*Re*Sc) )'
diffusionN2 		    = 'Eq(DN2,  	mu/(rho*Re*Sc) )'
diffusionNO 		    = 'Eq(DNO,  	mu/(rho*Re*Sc) )'

molefractionO  			= 'Eq(XO,  		rhoO/(MO   *ns))'
molefractionO2 			= 'Eq(XO2, 		rhoO2/(MO2 *ns))'
molefractionN  			= 'Eq(XN,  		rhoN/(MN   *ns))'
molefractionN2 			= 'Eq(XN2, 		rhoN2/(MN2 *ns))'
molefractionNO 			= 'Eq(XNO, 		rhoNO/(MNO *ns))'

massfractionO  			= 'Eq(yO,  		rhoO / rho)'
massfractionO2 			= 'Eq(yO2, 		rhoO2/ rho)'
massfractionN  			= 'Eq(yN,  		rhoN / rho)'
massfractionN2 			= 'Eq(yN2, 		rhoN2/ rho)'
massfractionNO 			= 'Eq(yNO, 		rhoNO/ rho)'


timefactorO2 = 'Eq(tauO2 ,  ns*( (rhoO/MO)*tauO2O +  (rhoO2/MO2)*tauO2O2 + (rhoN/MN)*tauO2N + (rhoN2/MN2)*tauO2N2 + (rhoNO/MNO)*tauO2NO))'
timefactorN2 = 'Eq(tauN2 ,  ns*( (rhoO/MO)*tauN2O +  (rhoO2/MO2)*tauN2O2 + (rhoN/MN)*tauN2N + (rhoN2/MN2)*tauN2N2 + (rhoNO/MNO)*tauN2NO))'
timefactorNO = 'Eq(tauNO ,  ns*( (rhoO/MO)*tauNOO +  (rhoO2/MO2)*tauNOO2 + (rhoN/MN)*tauNON + (rhoN2/MN2)*tauNON2 + (rhoNO/MNO)*tauNONO))'


# constituent equations
constituent_eqns  = [velocity, pressure, temperature, viscosity, conductivity, conductivity_vib]
constituent_eqns += [molefractionO, molefractionO2, molefractionN, molefractionN2, massfractionNO, massfractionO, massfractionO2, massfractionN, massfractionN2, massfractionNO]
constituent_eqns += [diffusionO, diffusionO2, diffusionN, diffusionN2, diffusionNO]
constituent_eqns += [evibration, evequilO2, evequilN2,evequilNO, evibrationsO2, evibrationsN2, evibrationsNO, timefactorO2, timefactorN2, timefactorNO, tempv]
constituent_eqns += [specificheat_cp, specificheat_gamma, speed_of_sound]


# substitutions used in the equations
stress_tensor   = 'Eq(tau_i_j, 		(mu/Re)*( Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)*KD(_i,_j)*Der(u_k,x_k)))'
density    		= 'Eq(rho, 	 	 	(rhoO+rhoO2+rhoN+rhoN2+rhoNO) )'
molesum    		= 'Eq(ns, 	 		(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))'
# hformation 		= 'Eq(dhf,       	(rhoO*dhf0O/MO + rhoN*dhf0N/MN + rhoNO*dhf0NO/MNO))'
hformation 		= 'Eq(dhf,       	(rhoO*dhf0O/MO + rhoN*dhf0N/MN + rhoNO*dhf0NO/MNO))'
thetavset  		= 'Eq(thetavnum, 	(thetavO2*rhoO2/MO2 + thetavN2*rhoN2/MN2 + thetavNO*rhoNO/MNO))'
timeconst  		= 'Eq(tau,       	(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)/((rhoO2/(MO2*ptauO2)+rhoN2/(MN2*ptauN2)+rhoNO/(MNO*ptauNO))))'
Mhat            = 'Eq(Mhat,         (yN2/MN2 + yO2/MO2 + yO/MO + yN/MN + yNO/MNO)**(-1.0))'
# conductivity
heat_flux 		= 'Eq(q_j        ,  -(kappa /Re)*Der(T ,x_j))'
heat_flux_vib 	= 'Eq(qv_j       ,  -(kappav/Re)*Der(Tv,x_j))'


# Milikan White tau values - Park 1993
# O2-M values
tauO2O  = 'Eq(tauO2O  ,  (p/101325)*exp(47.7  * (T**(-1/3) - 0.0590) - 18.42))'
tauO2O2 = 'Eq(tauO2O2 ,  (p/101325)*exp(138.0 * (T**(-1/3) - 0.0300) - 18.42))'
tauO2N  = 'Eq(tauO2N  ,  (p/101325)*exp(72.4  * (T**(-1/3) - 0.0150) - 18.42))'
tauO2N2 = 'Eq(tauO2N2 ,  (p/101325)*exp(134.0 * (T**(-1/3) - 0.0295) - 18.42))'
tauO2NO = 'Eq(tauO2NO ,  (p/101325)*exp(136.0 * (T**(-1/3) - 0.0298) - 18.42))'


# N2-O values
tauN2O  = 'Eq(tauN2O  ,  (p/101325)*exp(72.4  * (T**(-1/3) - 0.0150) - 18.42))'
tauN2O2 = 'Eq(tauN2O2 ,  (p/101325)*exp(299.0 * (T**(-1/3) - 0.0295) - 18.42))'
tauN2N  = 'Eq(tauN2N  ,  (p/101325)*exp(180.0 * (T**(-1/3) - 0.0262) - 18.42))'
tauN2N2 = 'Eq(tauN2N2 ,  (p/101325)*exp(221.0 * (T**(-1/3) - 0.0290) - 18.42))'
tauN2NO = 'Eq(tauN2NO ,  (p/101325)*exp(225.0 * (T**(-1/3) - 0.0293) - 18.42))'

# NO-O values
tauNOO  = 'Eq(tauNOO  ,  (p/101325)*exp(49.5 * (T**(-1/3) - 0.0420) - 18.42))'
tauNOO2 = 'Eq(tauNOO2 ,  (p/101325)*exp(49.5 * (T**(-1/3) - 0.0420) - 18.42))'
tauNON  = 'Eq(tauNON  ,  (p/101325)*exp(49.5 * (T**(-1/3) - 0.0420) - 18.42))'
tauNON2 = 'Eq(tauNON2 ,  (p/101325)*exp(49.5 * (T**(-1/3) - 0.0420) - 18.42))'
tauNONO = 'Eq(tauNONO ,  (p/101325)*exp(49.5 * (T**(-1/3) - 0.0420) - 18.42))'


#
substitutions = [density, stress_tensor, heat_flux, heat_flux_vib, evibration, molesum, hformation, timeconst, thetavset, Mhat]
substitutions += [tauO2O, tauO2O2, tauO2N, tauO2N2, tauO2NO]
substitutions += [tauN2O, tauN2O2, tauN2N, tauN2N2, tauN2NO]
substitutions += [tauNOO, tauNOO2, tauNON, tauNON2, tauNONO]
substitutions += [Mhat]
# constants = [] 

add_rate_equations(constituent_eqns, substitutions, constants, \
     simulation_type=simulation_type, equation_type='park01am', species=5, two_temperature=True) 

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# add equations to the kernels																													
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# instantiate insteinEquation class for expanding the einstein indices in the equations
eq = EinsteinEquation()

# base_eqns = [mass, momentum, energy]
# expand the simulation equations
simulation_eq = SimulationEquations()

for i, base in enumerate(base_eqns):
	base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants)
for eqn in base_eqns:
	simulation_eq.add_equations(eqn)
	
# expand the constituent relations
constituent 	 = ConstituentRelations()

for i, CR in enumerate(constituent_eqns):
	constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)
	
for eqn in constituent_eqns:
	constituent.add_equations(eqn)
	
# create a simulation block
block = SimulationBlock(ndim, block_number=0)

# local dictionary for parsing the expressions
local_dict = {'block': block, 'GridVariable': GridVariable, 'DataObject': DataObject}

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# create a schemes dictionary to be used for discretisation																													
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# Create a schemes dictionary to be used for discretisation
schemes = {}
# Central scheme for spatial discretisation and add to the schemes dictionary
# Low storage optimisation for the central scheme
fns                 = 'u0 T'
cent                = StoreSome(4,fns)
# cent = Central(4)
schemes[cent.name]  = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk                  = RungeKuttaLS(3, formulation='SSP')
schemes[rk.name]    = rk

# Set the discretisation schemes to be used (a python dictionary)
block.set_discretisation_schemes(schemes)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# grid generation and initial conditions																															
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# define grid
grid_equations = [Eq(DataObject('x0'), block.deltas[0]*block.grid_indexes[0])]


# define q vectors for later use ---- although I think this is not needed, there might be an easier way
q_vector=flatten(simulation_eq.time_advance_arrays)


Rhat, MN2, MN, MO2, MO, MNO = 8.3143, 28.0e-3, 14.0e-3, 32.0e-3, 16.0e-3, 30.0e-3

# # define left and right conditions for the shock tube
# ul, Tl, pl =1200.0, 9000, 1.95256e5 
# ur, Tr, pr = 0.0, 3000, 1e4

# yN2l, yNl, yO2l, yOl, yNOl = 0.234274, 0.000027, 0.698439, 0.066072, 0.001189
# yN2r, yNr, yO2r, yOr, yNOr = 0.069302, 0.145363, 0.000025, 0.745802, 0.039508

# define left and right conditions for the shock tube
ul, pl, Tl = 0.0, 101325*100,9000
ur, pr, Tr = 0.0, 101325 , 300
# ur, pr, Tr =0.0, 101325*100,9000

yOl, yO2l, yNl, yN2l, yNOl = 0.223284, 0.001261, 0.262766, 0.487304, 0.025386
yOr, yO2r, yNr, yN2r, yNOr = 0.000000, 0.234700, 0.000000, 0.765300, 0.000000


u0, p0, T0, rho0 = symbols('u0, p0, T0, rho0', **{'cls': GridVariable})
yO20, yN20, yO0, yN0, yNO0 = symbols('yO20, yN20, yO0, yN0, yNO0', **{'cls': GridVariable})
uin, pin, Tin, rhoin = symbols('u0, p0, T0, rho0', **{'cls': GridVariable})
rho, rhoO20, rhoN20, rhoO0, rhoN0, rhoNO0 = symbols('rho, rhoO20, rhoN20, rhoO0, rhoN0, rhoNO0 ', **{'cls': GridVariable})
Tvl, evO2l, evN2l, evNOl = symbols('Tvl, evO2l, evN2l, evNOl', **{'cls': GridVariable})

# constant symbols
thetavO2, thetavN2, thetavNO = symbols('thetavO2, thetavN2, thetavNO', **{'cls': ConstantObject})
dhf0O, dhf0N, dhf0NO         = symbols('dhf0O, dhf0N, dhf0NO', **{'cls': ConstantObject})

initial_equations = []

# initial_equations += [Eq(uin  , ul)]
# initial_equations += [Eq(pin  , pl)]
# initial_equations += [Eq(Tin  , Tl)]

initial_equations += [Eq(T0 , Piecewise((Tl  , DataObject('x0') < 0.5), (Tr, True)))]
initial_equations += [Eq(p0 , Piecewise((pl, DataObject('x0') < 0.5), (pr   , True)))]
initial_equations += [Eq(u0 , Piecewise((ul       , DataObject('x0') < 0.5), (ur     , True)) )]

initial_equations += [Eq(yO20 , Piecewise((yO2l     , DataObject('x0') < 0.5), (yO2r  , True)))]
initial_equations += [Eq(yN20 , Piecewise((yN2l     , DataObject('x0') < 0.5), (yN2r  , True)))]
initial_equations += [Eq(yO0  , Piecewise((yOl      , DataObject('x0') < 0.5), (yOr   , True)) )]
initial_equations += [Eq(yN0  , Piecewise((yNl      , DataObject('x0') < 0.5), (yNr   , True)))]
initial_equations += [Eq(yNO0 , Piecewise((yNOl     , DataObject('x0') < 0.5), (yNOr  , True)) )]



# define densities
initial_equations += [Eq(rhoin , 1.0*pin*(1/Rhat)/(Tin*(yO20/MO2 + yO0/MO + yN20/MN2 + yNO0/MNO + yN0/MN)))]

initial_equations += [Eq(rhoO20 , rhoin*yO20)]
initial_equations += [Eq(rhoN20 , rhoin*yN20)]
initial_equations += [Eq( rhoO0  , rhoin*yO0)]
initial_equations += [Eq( rhoN0  , rhoin*yN0)]
initial_equations += [Eq(rhoNO0 , rhoin*yNO0)]

initial_equations += [Eq(rho0    , rhoO20 + rhoN20 + rhoO0 + rhoN0 + rhoNO0)]

# vibrational energy
initial_equations += [Eq(Tvl   , pin/(Rhat*(rhoO0/MO+rhoO20/MO2+rhoN0/MN+rhoN20/MN2+rhoNO0/MNO)))]
initial_equations += [Eq(evO2l , thetavO2*Rhat/(MO2*(exp(thetavO2/Tvl)-1.0)) )]
initial_equations += [Eq(evN2l , thetavN2*Rhat/(MN2*(exp(thetavN2/Tvl)-1.0)))]
initial_equations += [Eq(evNOl  ,thetavNO*Rhat/(MNO*(exp(thetavNO/Tvl)-1.0)))]

initial_equations += [Eq(DataObject('rhoO2') , rhoin*yO20)]
initial_equations += [Eq(DataObject('rhoN2') , rhoin*yN20)]
initial_equations += [Eq(DataObject('rhoO')  , rhoin*yO0)]
initial_equations += [Eq(DataObject('rhoN')  , rhoin*yN0)]
initial_equations += [Eq(DataObject('rhoNO') , rhoin*yNO0)]

initial_equations += [Eq(DataObject('rhou0') , rho*u0)]
initial_equations += [Eq(DataObject('rhoev') , (rhoO20*evO2l+rhoN20*evN2l+rhoNO0*evNOl) )]
initial_equations += [Eq(DataObject('rhoE')  , p0*(3.0/2.0*(rhoO0/MO+rhoN0/MN)+5.0/2.0*(rhoO20/MO2+rhoN20/MN2+rhoNO0/MNO))/(rhoO0/MO+rhoN0/MN+rhoO20/MO2+rhoN20/MN2+rhoNO0/MNO)+(dhf0O*rhoO0/MO+dhf0N*rhoN0/MN+dhf0NO*rhoNO0/MNO)+rhoO20*evO2l+rhoN20*evN2l+rhoNO0*evNOl+0.5*rho*(u0**2) )]

# Parse the initial conditions
initial = GridBasedInitialisation()
initial.add_equations(grid_equations + initial_equations)



# --------------------------------------------------------------------------------------------------------------------------------------------																																			
# 
# boundary conditions		
#               (0,0) - inflow
#               (0,1) - outflow
#               (1,0) - wall 
#               (1,1) - farfield																																																												
#
#  --------------------------------------------------------------------------------------------------------------------------------------------
rhou0 = "Eq(DataObject(rhou0), rho*u0)"
rhoev = "Eq(DataObject(rhoev), (rhoO2*evO2+rhoN2*evN2+rhoNO*evNO)*rho/(rhoO2+rhoN2+rhoNO))"
rhoE = "Eq(DataObject(rhoE), p0*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))/(rhoO/MO+rhoN/MN+rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)+4.1868e6*(dhO*rhoO/MO+dhN*rhoN/MN+dhNO*rhoNO/MNO)+rhoO2*evO2+rhoN2*evN2+rhoNO*evNO+0.5*rho*(u0**2))"



d, u, p, yN2, yN, yO2, yO, yNO, rhof = symbols('T u0 p0 yN2 yN yO2 yO yNO rhoref', **{'cls':GridVariable})
rhoO2, rhoN2, rhoO, rhoN, rhoNO, evO2, evN2, evNO = symbols('rhoO2, rhoN2, rhoO, rhoN, rhoNO, evO2, evN2, evNO', **{'cls':GridVariable})

left_eqns = [OpenSBLIEq(d, Tl), \
			 OpenSBLIEq(u, ul), \
             OpenSBLIEq(p, pl), \
			 OpenSBLIEq(rhof, 1.0*pl*(1/Rhat)/(d*(yO2l/MO2 + yOl/MO + yN2l/MN2 + yNOl/MNO + yNl/MN))), \
			 OpenSBLIEq(yO2, yO2l), \
			 OpenSBLIEq(yN2, yN2l), \
			 OpenSBLIEq(yO, yOl), \
			 OpenSBLIEq(yN, yNl), \
			 OpenSBLIEq(yNO, yNOl), \
			 OpenSBLIEq(rhoO2,rhof* yO2l), \
			 OpenSBLIEq(rhoN2,rhof* yN2l), \
			 OpenSBLIEq(rhoO ,rhof* yOl), \
			 OpenSBLIEq(rhoN ,rhof* yNl), \
			 OpenSBLIEq(rhoNO,rhof* yNOl), \
			 OpenSBLIEq(DataObject('rhoO2'), rhoO2), \
			 OpenSBLIEq(DataObject('rhoN2'), rhoN2), \
			 OpenSBLIEq(DataObject('rhoO') , rhoO ), \
			 OpenSBLIEq(DataObject('rhoN') , rhoN ), \
			 OpenSBLIEq(DataObject('rhoNO'), rhoNO), \
			 OpenSBLIEq(DataObject('rhou0'), rhof*u)   , \
			 OpenSBLIEq(DataObject('rhoev'), DataObject('rhoO2')*thetavO2*Rhat/(MO2*(exp(thetavO2/d)-1.0)) + DataObject('rhoN2')*thetavN2*Rhat/(MN2*(exp(thetavN2/d)-1.0))  + DataObject('rhoNO')*thetavNO*Rhat/(MNO*(exp(thetavNO/d)-1.0))  )   , \
			 OpenSBLIEq(DataObject('rhoE'), p*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))/(rhoO/MO+rhoN/MN+rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)+(dhf0O*rhoO/MO+dhf0N*rhoN/MN+dhf0NO*rhoNO/MNO)+DataObject('rhoO2')*thetavO2*Rhat/(MO2*(exp(thetavO2/d)-1.0)) + DataObject('rhoN2')*thetavN2*Rhat/(MN2*(exp(thetavN2/d)-1.0))  + DataObject('rhoNO')*thetavNO*Rhat/(MNO*(exp(thetavNO/d)-1.0)) +0.5*rho*(u**2)  ) ]


# Right boundary condition
right_eqns = [OpenSBLIEq(d, Tr), \
			 OpenSBLIEq(u, ur), \
             OpenSBLIEq(p, pr), \
			 OpenSBLIEq(rhof, 1.0*pr*(1/Rhat)/(d*(yO2r/MO2 + yOr/MO + yN2r/MN2 + yNOr/MNO + yNr/MN))), \
			 OpenSBLIEq(yO2, yO2r), \
			 OpenSBLIEq(yN2, yN2r), \
			 OpenSBLIEq(yO, yOr), \
			 OpenSBLIEq(yN, yNr), \
			 OpenSBLIEq(yNO, yNOr), \
			 OpenSBLIEq(rhoO2,rhof* yO2r), \
			 OpenSBLIEq(rhoN2,rhof* yN2r), \
			 OpenSBLIEq(rhoO ,rhof* yOr), \
			 OpenSBLIEq(rhoN ,rhof* yNr), \
			 OpenSBLIEq(rhoNO,rhof* yNOr), \
			 OpenSBLIEq(DataObject('rhoO2'), rhoO2), \
			 OpenSBLIEq(DataObject('rhoN2'), rhoN2), \
			 OpenSBLIEq(DataObject('rhoO') , rhoO ), \
			 OpenSBLIEq(DataObject('rhoN') , rhoN ), \
			 OpenSBLIEq(DataObject('rhoNO'), rhoNO), \
			 OpenSBLIEq(DataObject('rhou0'), rhof*u)   , \
			 OpenSBLIEq(DataObject('rhoev'), DataObject('rhoO2')*thetavO2*Rhat/(MO2*(exp(thetavO2/d)-1.0)) + DataObject('rhoN2')*thetavN2*Rhat/(MN2*(exp(thetavN2/d)-1.0))  + DataObject('rhoNO')*thetavNO*Rhat/(MNO*(exp(thetavNO/d)-1.0))  )   , \
			 OpenSBLIEq(DataObject('rhoE'), p*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))/(rhoO/MO+rhoN/MN+rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)+(dhf0O*rhoO/MO+dhf0N*rhoN/MN+dhf0NO*rhoNO/MNO)+DataObject('rhoO2')*thetavO2*Rhat/(MO2*(exp(thetavO2/d)-1.0)) + DataObject('rhoN2')*thetavN2*Rhat/(MN2*(exp(thetavN2/d)-1.0))  + DataObject('rhoNO')*thetavNO*Rhat/(MNO*(exp(thetavNO/d)-1.0)) +0.5*rho*(u**2)  ) ]

boundaries = []
# Create boundaries, one for each side per dimension
for direction in range(ndim):
    boundaries += [DirichletBC(direction, 0, left_eqns)]
    boundaries += [DirichletBC(direction, 1, right_eqns)]
	
block.set_block_boundaries(boundaries)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# read/write definitions and output arrays																												
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

kwargs = {'iotype': 'Write'}
h5     = iohdf5(save_every=2000, **kwargs)

h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('T'), DataObject('Tv'), DataObject('af')])
block.setio(copy.deepcopy(h5))

# WF = WENOFilter(block, order=5, formulation='Z', flux_type='LLF', airfoil=False, optimize=False)
# block.set_equations(WF.equation_classes)  

TVD_filter = TVDFilter(block, airfoil=False, optimize=False, species = '5_species_ev')
block.set_equations(TVD_filter.equation_classes)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# add to opensbli 																											
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# set the equations to be solved on the block
block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial])
# set the discretisation schemes
block.set_discretisation_schemes(schemes)

# Discretise the equations on the block
block.discretise()

# create an algorithm from the discretised computations
alg = TraditionalAlgorithmRK(block)

# set the simulation data type, for more information on the datatypes see opensbli.core.datatypes
SimulationDataType.set_datatype(Double)

# Write the code for the algorithm
# OPSC(alg)
OPSC(alg) # ,OPS_V2=True by default in opensbli3/opensbi_jaxa

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# define constants, in line with intialisation above																												
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------


# constants = ['gama', 'dt', 'niter', 'block0np0', 'Delta0block0', 'eps', 'inv_rfact0_block0', 'lambda0_TVD', 'TENO_CT']
# values    = ['1.4', '0.0002', 'ceil(0.2/0.0002)', '200', '1.0/(block0np0-1)', '1.0e-16', '1.0/Delta0block0', 'dt/Delta0block0', '1.0e-5']


# mixlayer conditions
physical_constants   = ['Re' ,    'Sc',    'uref',    'pref',    'Tinf',  'pexp', 'Twn', 'Tvguess', 'dumgama', 'gama']
physical_values      = ['1.0',   '1.0', str(ul), str(pl), str(Tl),   '0.0', '0.0', '500.0', '0.0', '1.4']
substitute_simulation_parameters(physical_constants, physical_values)

gas_data             = [  'Rhat',     'MO',      'MO2',     'MN',     'MN2',     'MNO',    'dhO',     'dhN',    'dhNO', 'thetavO2', 'thetavN2', 'thetavNO',      'hf0']
gas_values           = ['8.3143', '16.0e-3', '32.0e-3', '14.0e-3', '28.0e-3', '30.0e-3', '59.544', '112.951', '21.6009',   '2270.0',   '3390.0',   '2740.0', '4.1868e3']
substitute_simulation_parameters(gas_data, gas_values)

enthalpy_data       = [  'dhf0O',   'dhf0N',  'dhf0NO'] #  enthalpy_values     = [    '0.0',     '0.0',     '0.0']
# enthalpy_values     = ['249.2e3', '472.7e3', '91.27e3']
enthalpy_values     = [    '0.0',     '0.0',     '0.0']
substitute_simulation_parameters(enthalpy_data, enthalpy_values)


concentration_data   = [    'yN2e',    'yNe',    'yO2e',    'yOe',    'yNOe']
concentration_values = [ str(yN2l), str(yNl), str(yO2l), str(yOl), str(yNOl)]
substitute_simulation_parameters(concentration_data, concentration_values)

numerical_constants  = [      'dt',            'niter', 'block0np0',      'Delta0block0','kappa_TVD']
numerical_values     = [    '0.00002',            '20000',       '1000', '1.0/(block0np0-1)','1.5']
substitute_simulation_parameters(numerical_constants, numerical_values)

shockcap_data   = [    'eps', 'inv_rfact0_block0',     'lambda0_TVD', 'TENO_CT']
shockcap_values = ['1.0e-16',  '1.0/Delta0block0', 'dt/Delta0block0',  '1.0e-5']
substitute_simulation_parameters(shockcap_data, shockcap_values)

print_iteration_ops(every=1, NaN_check='rhoN2_B0')

