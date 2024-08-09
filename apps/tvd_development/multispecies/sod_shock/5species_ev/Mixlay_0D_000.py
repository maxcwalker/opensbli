#!/usr/bin/env python
# ----------------------------------------------------------------------------------------------------------------------
# Coded by:     Ali Musawi - Early 2023
# Description:  Thermal-Chemical Non-Equilibrium of 5-species air.
#				This code is edited to be converted to the JAXA release
# 			    --------------------------------------------------------------------------------------------------------
# References:
# 				[1] Gnoffo, P. A., Gupta, R. N., &#38; Shinn, J. L. (1989). Conservation Equations and Physical Models
# 					For Hypersonic Air Flows In Thermal and Chemical Nonequilibrium NASA Technical Paper (Issue 2867).
#				[2] Gupta, R. N., Yos, J. M., Thompson, R. A., &#38; Lee, K.-P. (1990). A Review of Reaction Rates and
#					Thermodynamic and Transport Properties for an 11-Species Air Model for Chemical and Thermal
#					Nonequilibrium Calculations to 30000K.
#				[3] Park, C. (1993). Review of Chemical-Kinetic Problems of Future NASA Missions, I: Earth Entries.
#					Journal of Thermophysics and Heat Transfer, 7(3), 385–398. https://doi.org/10.2514/3.431
#				[4] https://stackoverflow.com/questions/13361510/typeerror-unsupported-operand-types-for-dict-items-and-dict-items
# ----------------------------------------------------------------------------------------------------------------------
# Last edited:
#               30/12/2023 - Cleaned the code, added enthalpy at substitution and cleaned the code. Checked the
#               			 equations with literature to confirm they are correct.
#				01/01/2024 - Added the details of the code (author, description, references, last edited)
#							 Added the Tvs for thermal conductivity
#				02/01/2024 - Changed molecular weight and universal gas constant to si units
#				09/01/2024 - Cleaned the code for the 1ev-1rho version
#				12/01/2024 - Corrected "T'C_split_Tvs" by changing "/Tv" with "/Tvs". Made bulk viscosity an option
# ----------------------------------------------------------------------------------------------------------------------
from opensbli import *
from sympy import sin, cos, sinh, tanh, exp, pi, log, Piecewise, Or
from opensbli.utilities.helperfunctions import substitute_simulatifn_parameters
import chemistry_air5 as chemistry
# ----------------------------------------------------------------------------------------------------------------------
#########################################################################################################################
#																														#
# Inputs			 																									#
#																														#
#########################################################################################################################
Chemistry_model 		= 'New'					# Options: GGS - Park01 - New - none
# Transport Property:
Viscosity 				= 'Yos_Brokaw_Gupta' 	# Options: Yos_Gupta - Yos_Brokaw_Gupta - Sandham - Blottner - Sutherland - AM - none
Thermal_conductivity 	= 'Yos_Brokaw_Gupta'	# Options: Yos_Gupta - Yos_Brokaw_Gupta - Sandham - Blottner - none
bulk_viscosity			= 'Y'					# Options: Y - N
TC_split				= 'Y'					# Options: Y - N	# Y=3xTC
TC_split_Tvs			= 'N'					# Options: Y - N	derivative of Tvs instead of Tv for each molecule - if Y then "infinity to zero" has to be Y
Diffusion				= 'Lee85'				# Options: 'CSc' - 'Lee85'
# --------------------------------------------- #
TvNR_py					= 'Y'					# Enable or disable TvNR exchange - Y (yes) or N (NO)
inf_to_zero				= 'Y'					# Enable or disable the replacement of inf to zero for 3-rho ev models

# ----------------------------------------------------------------------------------------------------------------------
# Define the constants

Physical = {
	'Re'			:'1.0',
	'Sc'			:'0.71',
	'uref'			:'0.0',
	'pref'			:'53000.0',
	'rhoref'		:'0.02',
	'pexp'			:'0.0',
	'vorthick'		:'0.0029619572'
}
Grid = {
	'dt'			:'0.00000007',
	'niter'			:'1000',
	'block0np0'		:'11',
	'block0np1'		:'11',
	'Delta0block0'	:'15.0 * 0.0029619572 / block0np0',
	'Delta1block0'	:'1.0/(block0np1-1)',
	'Ly'			:'1000.0/15.0 * 0.0029619572 ',
	'stretch'		:'1.0',
}
Gas = {
	'Rhat'			:'8.3143',
	'MO'			:'0.016',
	'MO2'			:'0.032',
	'MN'			:'0.014',
	'MN2'			:'0.028',
	'MNO'			:'0.030',
	'thetavO2'		:'2270.0',
	'thetavN2'		:'3390.0',
	'thetavNO'		:'2740.0',
	'boltz'			:'1.380649e-23',
}
set_constants = {**Physical , **Grid , **Gas}					# REF[4]: Unpacks the dictionaries in a single one

#########################################################################################################################
#																														#
# Simulation Equations																									#
#																														#
#########################################################################################################################
# Number of simulation dimensions
ndim  = 2
stats = False

# Define the compresible Navier-Stokes equations in tensor notation
mass_O   = "Eq(Der(rhoO,t),  	- Skew(rhoO*u_j,x_j)  + Der(rho *DO* Der(XO,x_j),x_j) 		+ wdotO	  - rhoO  * Der(Dcor,x_j) )"
mass_O2  = "Eq(Der(rhoO2,t), 	- Skew(rhoO2*u_j,x_j) + Der(rho *DO2*Der(XO2,x_j),x_j)  	+ wdotO2  - rhoO2 * Der(Dcor,x_j) )"
mass_N   = "Eq(Der(rhoN,t),  	- Skew(rhoN*u_j,x_j)  + Der(rho *DN* Der(XN,x_j),x_j)  		+ wdotN   - rhoN  * Der(Dcor,x_j) )"
mass_N2  = "Eq(Der(rhoN2,t), 	- Skew(rhoN2*u_j,x_j) + Der(rho *DN2*Der(XN2,x_j),x_j)  	+ wdotN2  - rhoN2 * Der(Dcor,x_j) )"
mass_NO  = "Eq(Der(rhoNO,t), 	- Skew(rhoNO*u_j,x_j) + Der(rho *DNO*Der(XNO,x_j),x_j)  	+ wdotNO  - rhoNO * Der(Dcor,x_j) )"
momentum = "Eq(Der(rhou_i,t), 	- Skew(rhou_i*u_j, x_j) - Der(p,x_i)  + Der(tau_i_j,x_j))"
evib	 = "Eq(Der(rhoev,t),	- Skew(rhoev*u_j,x_j)  + ((rhoO2*eveqO2+rhoN2*eveqN2+rhoNO*eveqNO)*rho/(rhoO2+rhoN2+rhoNO)- rhoev)/ (101325.0*tau/p)  "\
							   "+ Der(qvO2_j+qvN2_j+qvNO_j,x_j)"\
							   "+ Der( rho*DO2*(evO2*Der(XO2,x_j)) + rho*DN2*(evN2*Der(XN2,x_j)) + rho*DNO*(evNO*Der(XNO,x_j)) ,x_j)"\
							   "+ wdotO2*evO2 + wdotN2*evN2 + wdotNO*evNO 	)"
energy   = "Eq(Der(rhoE,t), 	- Skew(rhoE*u_j,x_j) - Conservative(p*u_j,x_j) + Der(q_j + qv_j,x_j) + Der(u_i*tau_i_j ,x_j)" \
		   					   "+ Der(rho*  ( hO*DO*Der(XO,x_j)+hN*DN*Der(XN,x_j)+hO2*DO2*Der(XO2,x_j)+hN2*DN2*Der(XN2,x_j)+hNO*DNO*Der(XNO,x_j) ) ,x_j)  ) "
scalar   = "Eq(Der(rhof,t), 	- Skew(rhof*u_j,x_j) + Der(mu/(Re*Sc)*Der(f,x_j),x_j))"
dummy 	 = "Eq(Der(rhodum,t), 	- Der(rhodum*u_j,x_j)  + Tvref )"

# ----------------------------------------------------------------------------------------------------------------------
# Constituent Equations																									#
# ----------------------------------------------------------------------------------------------------------------------

# Variable relations used in the system
velocity 		= "Eq(u_i, rhou_i/rho)"
mixturefraction = "Eq(f, rhof/rho)"
pressure 		= "Eq(p, Rhat*T*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))"
temperature 	= "Eq(T, (rhoE - rhoev*(rhoO2+rhoN2+rhoNO)/rho - dhf - rho*(1./2.)*(KD(_i,_j)*u_i*u_j)) / " \
				 		"(Rhat*(3.0/2.0*(rhoO/MO+rhoN/MN) + 5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))) )"

# Condition for TvNR
if TvNR_py == 'Y':
	tempv 		= "Eq(Tvref, 3000.0/(log(1.0+3000.0*Rhat/(0.030*rhoev/rho)))	)"
	tempvNR		= "Eq(Tv, Tvref + " \
						"((rhoev) - (  (rhoO2*thetavO2*(Rhat/MO2)/(exp(thetavO2/Tvref)-1)) +"\
									  "(rhoN2*thetavN2*(Rhat/MN2)/(exp(thetavN2/Tvref)-1)) +"\
									  "(rhoNO*thetavNO*(Rhat/MNO)/(exp(thetavNO/Tvref)-1))  ) ) /" \
						"(  (rhoO2*thetavO2**(2.0)*(Rhat/MO2)*exp(thetavO2/Tvref)/(Tvref**(2.0)*(exp(thetavO2/Tvref)-1)**(2.0)))  "\
						" + (rhoN2*thetavN2**(2.0)*(Rhat/MN2)*exp(thetavN2/Tvref)/(Tvref**(2.0)*(exp(thetavN2/Tvref)-1)**(2.0)))  "\
						" + (rhoNO*thetavNO**(2.0)*(Rhat/MNO)*exp(thetavNO/Tvref)/(Tvref**(2.0)*(exp(thetavNO/Tvref)-1)**(2.0))) )   )"
else:
	tempv		= "Eq(Tv, thetavnum/((rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)*log(1.0+thetavnum*Rhat/(rhoev))))"
	tempvNR		= "Eq(Tvref, 1.0)"


evequilO2 	 	= "Eq(eveqO2, 	thetavO2*Rhat/(MO2*(exp(thetavO2/T)-1.0)))"
evequilN2 	 	= "Eq(eveqN2, 	thetavN2*Rhat/(MN2*(exp(thetavN2/T)-1.0)))"
evequilNO 	 	= "Eq(eveqNO, 	thetavNO*Rhat/(MNO*(exp(thetavNO/T)-1.0)))"
evibrationsO2 	= "Eq(evO2,   	thetavO2*Rhat/(MO2*(exp(thetavO2/Tv)-1.0)))"
evibrationsN2 	= "Eq(evN2,   	thetavN2*Rhat/(MN2*(exp(thetavN2/Tv)-1.0)))"
evibrationsNO 	= "Eq(evNO,   	thetavNO*Rhat/(MNO*(exp(thetavNO/Tv)-1.0)))"
# evdum 		 	= "Eq(rhoev, 	(rhoevO2 + rhoevN2 + rhoevNO) )"
timefactorO2 	= "Eq(ptauO2,	ns/ ( (rhoO/MO)   / exp(129.0*(T**(-1.0/3.0)-0.0271)-18.42)" \
								   "+ (rhoO2/MO2) / exp(129.0*(T**(-1.0/3.0)-0.0300)-18.42)" \
								   "+ (rhoN/MN)   / exp(129.0*(T**(-1.0/3.0)-0.0265)-18.42)" \
								   "+ (rhoN2/MN2) / exp(129.0*(T**(-1.0/3.0)-0.0295)-18.42)" \
								   "+ (rhoNO/MNO) / exp(129.0*(T**(-1.0/3.0)-0.0298)-18.42) ) )"
timefactorN2 	= "Eq(ptauN2, 	ns/ ( (rhoO/MO)   / exp(220.0*(T**(-1.0/3.0)-0.0268)-18.42)" \
								   "+ (rhoO2/MO2) / exp(220.0*(T**(-1.0/3.0)-0.0295)-18.42)" \
								   "+ (rhoN/MN)   / exp(220.0*(T**(-1.0/3.0)-0.0262)-18.42)" \
								   "+ (rhoN2/MN2) / exp(220.0*(T**(-1.0/3.0)-0.0290)-18.42)" \
								   "+ (rhoNO/MNO) / exp(220.0*(T**(-1.0/3.0)-0.0293)-18.42) ) )"
timefactorNO 	= "Eq(ptauNO, 	ns/ ( (rhoO/MO)   / exp(168.0*(T**(-1.0/3.0)-0.0270)-18.42)" \
								   "+ (rhoO2/MO2) / exp(168.0*(T**(-1.0/3.0)-0.0298)-18.42)" \
								   "+ (rhoN/MN)   / exp(168.0*(T**(-1.0/3.0)-0.0264)-18.42)" \
								   "+ (rhoN2/MN2) / exp(168.0*(T**(-1.0/3.0)-0.0293)-18.42)" \
								   "+ (rhoNO/MNO) / exp(168.0*(T**(-1.0/3.0)-0.0295)-18.42) ) )"

TtauparkO2   	= "Eq(tauparkO2, 1/( (rhoO2*Rhat/(MO2*boltz)) * (8.0*boltz*T/(3.14159265358979323846*(MO2*boltz/Rhat)))**0.5 * 3.0*1.0e-21*(50000.0/T)**2.0 )  )"
TtauparkN2   	= "Eq(tauparkN2, 1/( (rhoN2*Rhat/(MN2*boltz)) * (8.0*boltz*T/(3.14159265358979323846*(MN2*boltz/Rhat)))**0.5 * 3.0*1.0e-21*(50000.0/T)**2.0 )  )"
TtauparkNO   	= "Eq(tauparkNO, 1/( (rhoNO*Rhat/(MNO*boltz)) * (8.0*boltz*T/(3.14159265358979323846*(MNO*boltz/Rhat)))**0.5 * 3.0*1.0e-21*(50000.0/T)**2.0 )  )"

# fluid properties
viscosity 		= "Eq(mu,  	 	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )" 		# Placeholder for viscosity
conductivity 	= "Eq(kappatr,  (XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )" 		# Placeholder for thermal conductivity tr
heat_flux 		= "Eq(q_j, 		(kappatr/Re)*Der(T,x_j))"

if TC_split =='N':
	conductivity_vib 	= "Eq(kappavib,   	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	heat_flux_vib 		= "Eq(qv_j, 	  	(kappavib/Re)*Der(Tv,x_j))"
elif TC_split =='Y' and TC_split_Tvs == 'N':
	conductivity_vibO2 	= "Eq(kappavibO2, 	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	conductivity_vibN2 	= "Eq(kappavibN2, 	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	conductivity_vibNO 	= "Eq(kappavibNO,   (XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	heat_flux_vibO2 	= "Eq(qvO2_j, 		(kappavibO2/Re)*Der(Tv,x_j))"
	heat_flux_vibN2 	= "Eq(qvN2_j, 		(kappavibN2/Re)*Der(Tv,x_j))"
	heat_flux_vibNO 	= "Eq(qvNO_j, 		(kappavibNO/Re)*Der(Tv,x_j))"
	heat_flux_vib 		= "Eq(qv_j, 	  	qvO2_j + qvN2_j + qvNO_j)"
elif TC_split == 'Y' and TC_split_Tvs == 'Y':
	tempvO2 			= "Eq(TvO2,  		thetavO2/(log(1.0+thetavO2*Rhat/(MO2*rhoevO2/rhoO2))))"
	tempvN2 			= "Eq(TvN2,  		thetavN2/(log(1.0+thetavN2*Rhat/(MN2*rhoevN2/rhoN2))))"
	tempvNO 			= "Eq(TvNO,  		thetavNO/(log(1.0+thetavNO*Rhat/(MNO*rhoevNO/rhoNO))))"
	conductivity_vibO2 	= "Eq(kappavibO2, 	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	conductivity_vibN2 	= "Eq(kappavibN2, 	(XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	conductivity_vibNO 	= "Eq(kappavibNO,   (XO+XO2+XN+XN2+XNO)*T*Tv*1.0e-6  )"  	# Placeholder for thermal conductivity vib
	heat_flux_vibO2 	= "Eq(qvO2_j, 		(kappavibO2/Re)*Der(TvO2,x_j))"
	heat_flux_vibN2 	= "Eq(qvN2_j, 		(kappavibN2/Re)*Der(TvN2,x_j))"
	heat_flux_vibNO 	= "Eq(qvNO_j, 		(kappavibNO/Re)*Der(TvNO,x_j))"
	heat_flux_vib 		= "Eq(qv_j, 	  	qvO2_j + qvN2_j + qvNO_j)"


# Diffusion - Depending on the
if Diffusion == 'Lee85':
	DiffO  				= "Eq(DO,  	 	(XO+XO2+XN+XN2+XNO)*T*rhoref*rhoO*rhoO2*rhoN*rhoN2*rhoNO*1.0e-6  )" 		# Placeholder
	DiffO2 				= "Eq(DO2,  	(XO+XO2+XN+XN2+XNO)*T*rhoref*rhoO*rhoO2*rhoN*rhoN2*rhoNO*1.0e-6  )" 		# Placeholder
	DiffN  				= "Eq(DN,		(XO+XO2+XN+XN2+XNO)*T*rhoref*rhoO*rhoO2*rhoN*rhoN2*rhoNO*1.0e-6  )" 		# Placeholder
	DiffN2 				= "Eq(DN2,  	(XO+XO2+XN+XN2+XNO)*T*rhoref*rhoO*rhoO2*rhoN*rhoN2*rhoNO*1.0e-6  )" 		# Placeholder
	DiffNO 				= "Eq(DNO,  	(XO+XO2+XN+XN2+XNO)*T*rhoref*rhoO*rhoO2*rhoN*rhoN2*rhoNO*1.0e-6  )" 		# Placeholder
elif Diffusion == 'CSc':
	DiffO  				= "Eq(DO,  	 	mu/(rho*Re*Sc) )"
	DiffO2 				= "Eq(DO2,  	mu/(rho*Re*Sc) )"
	DiffN  				= "Eq(DN,  	 	mu/(rho*Re*Sc) )"
	DiffN2 				= "Eq(DN2,  	mu/(rho*Re*Sc) )"
	DiffNO 				= "Eq(DNO,  	mu/(rho*Re*Sc) )"

molefractionO  			= "Eq(XO,  		rhoO/(MO*ns)	)"
molefractionO2 			= "Eq(XO2, 		rhoO2/(MO2*ns)	)"
molefractionN  			= "Eq(XN,  		rhoN/(MN*ns)	)"
molefractionN2 			= "Eq(XN2, 		rhoN2/(MN2*ns)	)"
molefractionNO 			= "Eq(XNO, 		rhoNO/(MNO*ns)	)"

# ----------------------------------------------------------------------------------------------------------------------
# Substitutions																											#
# ----------------------------------------------------------------------------------------------------------------------

# Substitutions used in the equations
stress_tensor   = "Eq(tau_i_j, 		(mu/Re)*( Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)*KD(_i,_j)*Der(u_k,x_k) ) + mub*KD(_i,_j)*Der(u_k,x_k))"
density    		= "Eq(rho, 	 	 	(rhoO+rhoO2+rhoN+rhoN2+rhoNO) )"
molesum    		= "Eq(ns, 	 		(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO) )"
hformation 		= "Eq(dhf,       	(rhoO*249.2*1000/MO + rhoN*472.7*1000/MN + rhoNO*91.27*1000/MNO) )"
thetavset  		= "Eq(thetavnum, 	(thetavO2*rhoO2/MO2 + thetavN2*rhoN2/MN2 + thetavNO*rhoNO/MNO) )"
diffcorrection  = "Eq(Dcor,			(DO*Der(XO,x_j) + DO2*Der(XO2,x_j) + DN*Der(XN,x_j) + DN2*Der(XN2,x_j) + DNO*Der(XNO,x_j)) )"
timeconst  		= "Eq(tau,       	(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)/((rhoO2/(MO2*ptauO2)+rhoN2/(MN2*ptauN2)+rhoNO/(MNO*ptauNO))))"

# Species enthalpy
enthalpyO		= "Eq(hO, 			5.0/2.0*Rhat/MO*T  + 249.2*1000/MO )"
enthalpyO2		= "Eq(hO2, 			7.0/2.0*Rhat/MO2*T + evO2 )"
enthalpyN		= "Eq(hN, 			5.0/2.0*Rhat/MN*T  + 472.7*1000/MN )"
enthalpyN2		= "Eq(hN2, 			7.0/2.0*Rhat/MN2*T + evN2)"
enthalpyNO		= "Eq(hNO, 			7.0/2.0*Rhat/MNO*T + 91.27*1000/MNO + evNO)"

# Calculation of Bulk viscosity
# -----------------------------
CvO2_tr				= "Eq(CvO2tr, 	 1.5*Rhat/MO2 )"
CvO2_rot			= "Eq(CvO2rot,	 Rhat/MO2 )"
CvO2_vib			= "Eq(CvO2vib,	 (thetavO2/T)**2.0 *exp(thetavO2/T)*Rhat/MO2 /(exp(thetavO2/T)-1)**2.0 )"
CvN2_tr				= "Eq(CvN2tr, 	 1.5*Rhat/MN2 )"
CvN2_rot			= "Eq(CvN2rot,	 Rhat/MN2 )"
CvN2_vib			= "Eq(CvN2vib,	 (thetavN2/T)**2.0 *exp(thetavN2/T)*Rhat/MN2 /(exp(thetavN2/T)-1)**2.0 )"
CvNO_tr				= "Eq(CvNOtr, 	 1.5*Rhat/MNO )"
CvNO_rot			= "Eq(CvNOrot,	 Rhat/MNO )"
CvNO_vib			= "Eq(CvNOvib,	 (thetavNO/T)**2.0 *exp(thetavNO/T)*Rhat/MNO /(exp(thetavNO/T)-1)**2.0 )"
Cvtot				= "Eq(Cvtot,     1/rho * (rhoO *  1.5*Rhat/MO "\
										   "+ rhoO2* (1.5*Rhat/MO2 + CvO2rot + CvO2vib) "\
										   "+ rhoN *  1.5*Rhat/MN "\
										   "+ rhoN2* (1.5*Rhat/MN2 + CvN2rot + CvN2vib) "\
										   "+ rhoNO* (1.5*Rhat/MNO + CvNOrot + CvNOvib) ) )"
# -----------------------------
gam					= "Eq(gam,       1 + Rhat*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO) / "\
						  			"( 	   (rhoO*1.5*Rhat/MO 									"\
									"	  + rhoO2*(1.5*Rhat/MO2+CvO2rot+CvO2vib) 				"\
									"	  + rhoN*1.5*Rhat/MN 									"\
									"	  + rhoN2*(1.5*Rhat/MN2+CvN2rot+CvN2vib) 				"\
									"	  + rhoNO*(1.5*Rhat/MNO+CvNOrot+CvNOvib))		)		)"
a_f					= "Eq(af,        (T*gam * Rhat*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO)/rho )**0.5)"
tauO2_rot			= "Eq(taurO2rot,  35.0*af*100.0*0.19*1.92*1.0e-13/(8.0*pi**2.0))"
tauN2_rot			= "Eq(taurN2rot,  35.0*af*100.0*0.24*1.64*1.0e-13/(8.0*pi**2.0))"
tauNO_rot			= "Eq(taurNOrot,  35.0*af*100.0*0.24*1.64*1.0e-13/(8.0*pi**2.0))"
# -----------------------------
bulk_vis			= "Eq(mub, p * Rhat*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO)/(rho*Cvtot)**2.0 *"\
							   "( rhoO2*(CvO2rot+CvO2vib)**2.0/(CvO2vib*ptauO2*101325.0/p+CvO2rot/taurO2rot) "\
							   "+ rhoN2*(CvN2rot+CvN2vib)**2.0/(CvN2vib*ptauN2*101325.0/p+CvN2rot/taurN2rot) "\
							   "+ rhoNO*(CvNOrot+CvNOvib)**2.0/(CvNOvib*ptauNO*101325.0/p+CvNOrot/taurNOrot)  ) )"
bulk_vis0			= "Eq(mub, 0.0)"

# make substitutions
substitutions = [stress_tensor, heat_flux, heat_flux_vib, density, molesum, hformation, thetavset,diffcorrection,timeconst]
substitutions += [tauNO_rot, tauN2_rot, tauO2_rot, a_f, gam, Cvtot, CvNO_vib, CvNO_rot, CvNO_tr, CvN2_vib, CvN2_rot,
				  CvN2_tr, CvO2_vib, CvO2_rot, CvO2_tr, density]  # Bulk Viscosity
substitutions += [enthalpyO,enthalpyO2,enthalpyN,enthalpyN2,enthalpyNO]		# Species enthalpy
if Diffusion == 'CSc':
	substitutions += [DiffO, DiffO2, DiffN, DiffN2, DiffNO,density]
if TC_split =='Y':
	substitutions += [heat_flux_vibO2, heat_flux_vibN2, heat_flux_vibNO]
# Chemistry
substitutions += chemistry.substitutions(Chemistry_model)

# ----------------------------------------------------------------------------------------------------------------------
# Expanding the Equations																								#
# ----------------------------------------------------------------------------------------------------------------------

# Instantiate EinsteinEquation class for expanding the Einstein indices in the equations
eq = EinsteinEquation()
# symbol for the coordinate system in the equations
coordinate_symbol = "x"

# Constants that are used
constants = ["Re", "Sc", "uref", "pref", "rhoref", "pexp", "Rhat", "MO", "MO2", "MN", "MN2", "MNO",
			 "thetavO2", "thetavN2", "thetavNO","boltz","vorthick"]

# Add the constants used for the chemistry model - (their names)
constants += list(chemistry.constants(Chemistry_model))

# Expand the simulation equations
simulation_eq = SimulationEquations()
base_eqns 	  = [mass_O, mass_O2, mass_N, mass_N2, mass_NO, momentum, evib, energy, scalar,dummy]
for i, base in enumerate(base_eqns):
	base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants)
for eqn in base_eqns:
	simulation_eq.add_equations(eqn)

# Expand the constituent relations
constituent 	 = ConstituentRelations()
constituent_eqns = [velocity, pressure, temperature, mixturefraction, viscosity, conductivity,
					molefractionO, molefractionO2, molefractionN, molefractionN2, molefractionNO, evequilO2, evequilN2,
					evequilNO,TtauparkO2,TtauparkN2,TtauparkNO, timefactorO2, timefactorN2, timefactorNO,tempv,
					tempvNR,evibrationsNO,evibrationsO2,evibrationsN2]
if bulk_viscosity == 'Y':
	constituent_eqns += [bulk_vis]
elif bulk_viscosity == 'N':
	constituent_eqns += [bulk_vis0]
if Diffusion == 'Lee85':
	constituent_eqns += [DiffO, DiffO2, DiffN, DiffN2, DiffNO]
if TC_split =='Y' and TC_split_Tvs == 'N':
	constituent_eqns += [conductivity_vibO2,conductivity_vibN2,conductivity_vibNO]
elif TC_split =='Y' and TC_split_Tvs == 'Y':
	constituent_eqns += [tempvO2,tempvN2,tempvNO,conductivity_vibO2,conductivity_vibN2,conductivity_vibNO]
else:
	constituent_eqns+= [conductivity_vib]
# Chemistry constituent equations
constituent_eqns+= chemistry.constituent(Chemistry_model)

for i, CR in enumerate(constituent_eqns):
	constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)
for eqn in constituent_eqns:
	constituent.add_equations(eqn)

# Create a simulation block
block = SimulationBlock(ndim, block_number=0)

# Local dictionary for parsing the expressions
local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}

#########################################################################################################################
#																														#
# Grid																													#
#																														#
#########################################################################################################################

# Set the discretisation schemes - low storage
schemes = {}
fns  				= 'u0 u1 T Tvref'
cent 				= StoreSome(4,fns)
schemes[cent.name] 	= cent
rk 					= RungeKuttaLS(4)
schemes[rk.name] 	= rk
block.set_discretisation_schemes(schemes)

# ----------------------------------------------------------------------------------------------------------------------

dx, dy  			= block.deltas
x, y 				= symbols('x0:%d' % ndim, **{'cls': DataObject})
i, j 				= block.grid_indexes
nx, ny, Ly, stretch = symbols('block0np0 block0np1 Ly stretch', **{'cls': ConstantObject})
Lx					= nx*dx
q_vector			= flatten(simulation_eq.time_advance_arrays)
grid_equations 		= []
stretch_eqn 		= 0.5*Ly*sinh(stretch*(j-(ny-1)/2)/((ny-1)/2))/sinh(stretch)
grid_equations 	   += [Eq(x, i*dx), Eq(y,stretch_eqn)]

# Metrics: Stretching or curvature of the grid
metriceq =  MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(False, False), (True, False)], 2)
simulation_eq.apply_metrics(metriceq)

# Boundary Conditions
boundaries  = []
direction   = 0
boundaries += [PeriodicBC(direction, side=0)]
boundaries += [PeriodicBC(direction, side=1)]
direction   = 1
boundaries += [SymmetryBC(direction, 0)]
boundaries += [SymmetryBC(direction, 1)]
block.set_block_boundaries(boundaries)

# # Binomial Filter
# j 		= block.grid_indexes[1]
# nfilter = 20
# grid_condition = Or(j<=nfilter,j>=ny-nfilter)
# BF 		= BinomialFilter(block, order=2, grid_condition=grid_condition ,sigma=0.20)


#########################################################################################################################
#																														#
# Initial Conditions																									#
#																														#
#########################################################################################################################
uref, pref, rhoref,rhoEref, Rhat, MO, MO2, MN, MN2, MNO, thetavO2, thetavN2, thetavNO,boltz, vorthick \
	= symbols('uref pref rhoref rhoEref Rhat MO MO2 MN MN2 MNO thetavO2 thetavN2 thetavNO boltz vorthick', **{'cls': ConstantObject})
rhoO, rhoO2, rhoN, rhoN2, rhoNO,rho, u, v, p, T ,f, ev, evequilO2, evequilN2, evequilNO,evO2, evN2, evNO,evO2eq, evN2eq, evNOeq, Tv \
	= symbols('rhoO, rhoO2, rhoN, rhoN2, rhoNO,rho, u, v, p, T, f, ev, evequilO2, evequilN2, evequilNO,evO2, evN2, evNO,evO2eq, evN2eq, evNOeq, Tv', **{'cls': GridVariable})


initial_equations = [

	# Velcity/Scalar
	Eq(u, 				0.0 ),
	Eq(v, 				0.0 ),
	Eq(f, 				0.0 ),

	# Species/Density
	Eq(rhoO,			rhoref*0.229825),
	Eq(rhoO2,			rhoref*0.000108),
	Eq(rhoN,			rhoref*0.184726),
	Eq(rhoN2,			rhoref*0.579743),
	Eq(rhoNO,			rhoref*0.005598),
	Eq(rho,				rhoO+rhoO2+rhoN+rhoN2+rhoNO),

	# Vibrational Energy
	Eq(Tv,				pref/(Rhat*(rhoO/MO+rhoO2/MO2+rhoN/MN+rhoN2/MN2+rhoNO/MNO))),
	Eq(evO2, 			thetavO2*Rhat/(MO2*(exp(thetavO2/Tv)-1.0))),		# Added this
	Eq(evN2, 			thetavN2*Rhat/(MN2*(exp(thetavN2/Tv)-1.0))),		# Added this
	Eq(evNO, 			thetavNO*Rhat/(MNO*(exp(thetavNO/Tv)-1.0))),		# Added this

	# q Vectors
	Eq(q_vector[0],		rhoO),
	Eq(q_vector[1],		rhoO2),
	Eq(q_vector[2],		rhoN),
	Eq(q_vector[3],		rhoN2),
	Eq(q_vector[4],		rhoNO),
	Eq(q_vector[5],		rho*u),
	Eq(q_vector[6],		rho*v),
	Eq(q_vector[7],		rho*(rhoO2*evO2+rhoN2*evN2+rhoNO*evNO)/(rhoO2+rhoN2+rhoNO) ),
	Eq(q_vector[8],		pref*(3.0/2.0*(rhoO/MO+rhoN/MN)+5.0/2.0*(rhoO2/MO2+rhoN2/MN2+rhoNO/MNO))/(rhoO/MO+rhoN/MN+rhoO2/MO2+rhoN2/MN2+rhoNO/MNO)
	   					+ (rhoO*249.2*1000/MO + rhoN*472.7*1000/MN + rhoNO*91.27*1000/MNO)
	   					+ rhoO2*evO2+rhoN2*evN2+rhoNO*evNO
	   					+ 0.5*rho*(u**2+v**2) ),
	Eq(q_vector[9],		rho*f),
	Eq(q_vector[10],	1.0),
]

# Parse the initial conditions
initial = GridBasedInitialisation()
initial.add_equations(grid_equations + initial_equations)


#########################################################################################################################
#																														#
# Printouts & Monitor Points / Latex																					#
#																														#
#########################################################################################################################

# set the IO class to write out arrays
kwargs  = {'iotype': "Write"}
h5 		= iohdf5(save_every=200, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays + [x, y])
h5.add_arrays([DataObject('T'),DataObject('Tv'),DataObject('p')])
block.setio(copy.deepcopy(h5))

# set monitor points
arrays   = ['rhoO','rhoO2','rhoN','rhoN2','rhoNO','rhoE','rhoev','T','Tv','p']
arrays  += ['mu','mu','mu']
# arrays  += ['mub','mub','mub']
arrays   = [block.location_dataset('%s' % dset) for dset in arrays]
indices  = [(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1)]
indices += [(1,1),('block0np0/4', '(block0np1-1)/2'),('3*block0np0/4', '(block0np1-1)/2')]
# indices += [(1,1),('block0np0/4', '(block0np1-1)/2'),('3*block0np0/4', '(block0np1-1)/2')]
SM 		 = SimulationMonitor(arrays, indices, block, print_frequency=2,fp_precision=12, output_file='output.log')

# ----------------------------------------------------------------------------------------------------------------------

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

#########################################################################################################################
#																														#
# Miscellaneous																											#
#																														#
#########################################################################################################################
# set chemical model constants
set_constants.update(chemistry.constants(Chemistry_model))

# set the equations to be solved on the block
block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), initial, metriceq]) # "BF.equation_classes" is for the filter

# Discretise the equations on the block
block.discretise()

# create an algorithm from the discretised computations
alg = TraditionalAlgorithmRK(block, simulation_monitor=SM)

# set the simulation data type, for more information on the datatypes see opensbli.core.datatypes
SimulationDataType.set_datatype(Double)

# Write the code for the algorithm
OPSC(alg) 

# Add the data from "Input" section
substitute_simulation_parameters(set_constants.keys(), set_constants.values())

print_iteration_ops(NaN_check='rhoN2_B0')
