# ----------------------------------------------------------------------------------------------------------------------
# Coded by:     Ali Musawi - 04/06/2023
# Description:
#				This code consists of three different chemical models incorporating the Park two temperature chemical model.
#				The first is of the 5-species model presented in Gnoffo, Gupta, Shin (1989) [1] NASA report, the second is
#				the model presented in Park (2001) [2] as presented with no alteration and finally the third includes
#				parameters from Park (2001) and Park (1993) [3] in addition to using our in house representation of the
#				equilibrium constant.
#				This code has been written to complement OpenSBLI
# 			    --------------------------------------------------------------------------------------------------------
# References:
#				[1] Gnoffo, P. A., Gupta, R. N., Shinn, J. L. (1989). Conservation Equations and Physical Models For
#					Hypersonic Air Flows In Thermal and Chemical Nonequilibrium. In NASA Technical Paper (Issue 2867).
#				[2] Park, C., Jaffe, R. L.,Partridge, H. (2001). Chemical-Kinetic Parameters of Hyperbolic Earth Entry.
#					Journal of Thermophysics and Heat Transfer,15(1) , 76–90. https://doi.org/10.2514/2.6582
#				[3] Park, C. (1993). Review of Chemical-Kinetic Problems of Future NASA Missions, I: Earth Entries.
#					Journal of Thermophysics and Heat Transfer,(3) , 385–398. https://doi.org/10.2514/3.431
# ----------------------------------------------------------------------------------------------------------------------
# Last edited:
#               31/10/2023 -
#               03/01/2024 - Added molecular weight in g as a constant for chemistry reactions
# ----------------------------------------------------------------------------------------------------------------------

def constants(model):
	if model == 'none':
		return []
	elif model == 'GGS' :
		return constants_GGS
	elif model == 'Park01':
		return constants_P01
	elif model == 'New':
		return constants_New
def substitutions(model):
	if model == 'none':
		return []
	elif model == 'GGS' :
		return [
				ORf0_GGS, ORf1_GGS, ORf2_GGS, ORf3_GGS, ORf4_GGS, ORf5_GGS, ORf6_GGS, ORf7_GGS, ORf8_GGS,  			# forward reaction
				ORb0_GGS, ORb1_GGS, ORb2_GGS, ORb3_GGS, ORb4_GGS, ORb5_GGS, ORb6_GGS, ORb7_GGS, ORb8_GGS,  				# Backward reaction
				ORb00_GGS, ORb01_GGS, ORb02_GGS, ORb03_GGS, ORb04_GGS, ORb05_GGS, ORb06_GGS, ORb07_GGS, ORb08_GGS,  	# Backward reaction coefficient
				OK0_GGS, OK1_GGS, OK2_GGS, OK3_GGS, OK4_GGS, OK5_GGS, OK6_GGS, OK7_GGS, OK8_GGS,  						# equilibrium constant
				ORf00_GGS, ORf01_GGS, ORf02_GGS, ORf03_GGS, ORf04_GGS, ORf05_GGS, ORf06_GGS, ORf07_GGS, ORf08_GGS,  	# forward reaction coefficient
				OZ_GGS,
				twotee,onetee]
	elif model == 'Park01':
		return [
				ORf0_P01,ORf1_P01,ORf2_P01,ORf3_P01,ORf4_P01,ORf5_P01,					# forward reaction
				ORb0_P01,ORb1_P01,ORb2_P01,ORb3_P01,ORb4_P01,ORb5_P01,					# Backward reaction
				ORb00_P01, ORb01_P01, ORb02_P01, ORb03_P01, ORb04_P01, ORb05_P01,		# Backward reaction coefficient
				OK0_P01, OK1_P01, OK2_P01, OK3_P01, OK4_P01, OK5_P01,  					# equilibrium constant
				ORf00_P01, ORf01_P01, ORf02_P01, ORf03_P01, ORf04_P01, ORf05_P01,  		# forward reaction coefficient
				OZ_P01,
				twotee,onetee]
	elif model == 'New':
		return [
				ORf0_New,ORf1_New,ORf2_New,ORf3_New,ORf4_New,ORf5_New,ORf6_New,ORf7_New,					# forward reaction
				ORb0_New,ORb1_New,ORb2_New,ORb3_New,ORb4_New,ORb5_New,ORb6_New,ORb7_New,						# Backward reaction
				ORb00_New, ORb01_New, ORb02_New, ORb03_New, ORb04_New, ORb05_New,ORb06_New,ORb07_New,			# Backward reaction coefficient
				OK0_New, OK1_New, OK2_New, OK3_New, OK4_New, OK5_New,OK6_New,OK7_New,  						# equilibrium constant
				ORf00_New, ORf01_New, ORf02_New, ORf03_New, ORf04_New, ORf05_New,ORf06_New,ORf07_New,  			# forward reaction coefficient
				OZ_New,
				twotee,onetee]
def constituent(model):
	if model == 'none':
		return []
	elif model == 'GGS' :
		return [OwdotO_GGS,OwdotO2_GGS,OwdotN_GGS,OwdotN2_GGS,OwdotNO_GGS]
	elif model == 'Park01':
		return [OwdotO_P01,OwdotO2_P01,OwdotN_P01,OwdotN2_P01,OwdotNO_P01]
	elif model == 'New':
		return [OwdotO_New,OwdotO2_New,OwdotN_New,OwdotN2_New,OwdotNO_New]

# Define the temperature used to compute the reactions
twotee			= "Eq(twoT, (Tv*T)**(0.5))"
onetee			= "Eq(oneT, T)"

# ##################################################################
# # Park 1989 [GGS]
# 		+ Consists of GGS reaction rates
# ##################################################################
# Reactions:
# 0) O2+M ---> 2O+M		(O,N)
# 1) O2+M ---> 2O+M		(O2,N2,NO)
# 2) N2+M ---> 2N+M		(N)
# 3) N2+M ---> 2N+M		(O)
# 4) N2+M ---> 2N+M		(O2,N2)
# 5) N2+M ---> 2N+M		(NO)
# 6) NO+M ---> N+O+M	(O,O2,N,N2,NO)
# 7) NO+O ---> O2+N
# 8) N2+O ---> NO+N
# -------------------------------------------------------------------
constants_GGS  = {
	'Cf0':'2.900e23', 	'nf0':'-2.0', 	'thetaf0':'5.975e4',	'A00':'2.855',	'A01':'0.988',	'A02':'-6.181',	'A03':'-0.023',	'A04':'-0.001',
	'Cf1':'9.680e22', 	'nf1':'-2.0', 	'thetaf1':'5.975e4',	'A10':'2.855',	'A11':'0.988',	'A12':'-6.181',	'A13':'-0.023',	'A14':'-0.001',
	'Cf2':'1.600e22', 	'nf2':'-1.6', 	'thetaf2':'1.132e5',	'A20':'1.858',	'A21':'-1.325',	'A22':'-9.856',	'A23':'-0.174',	'A24':'0.008',
	'Cf3':'4.980e22', 	'nf3':'-1.6', 	'thetaf3':'1.132e5',	'A30':'1.858',	'A31':'-1.325',	'A32':'-9.856',	'A33':'-0.174',	'A34':'0.008',
	'Cf4':'3.700e21', 	'nf4':'-1.6', 	'thetaf4':'1.132e5',	'A40':'1.858',	'A41':'-1.325',	'A42':'-9.856',	'A43':'-0.174',	'A44':'0.008',
	'Cf5':'4.980e21', 	'nf5':'-1.6', 	'thetaf5':'1.132e5',	'A50':'1.858',	'A51':'-1.325',	'A52':'-9.856',	'A53':'-0.174',	'A54':'0.008',
	'Cf6':'7.950e23', 	'nf6':'-2.0', 	'thetaf6':'7.550e4',	'A60':'0.792',	'A61':'-0.492',	'A62':'-6.761',	'A63':'-0.091',	'A64':'0.004',
	'Cf7':'8.370e12', 	'nf7':'0.0', 	'thetaf7':'1.945e4',	'A70':'-2.063',	'A71':'-1.480',	'A72':'-0.580',	'A73':'-0.114',	'A74':'0.005',
	'Cf8':'6.440e17', 	'nf8':'-1.0', 	'thetaf8':'3.837e4',	'A80':'1.066',	'A81':'-0.833',	'A82':'-3.095',	'A83':'-0.084',	'A84':'0.004',
	'MOg':'16.0',	'MO2g':'32.0',	'MNg':'14.0',	'MN2g':'28.0',	'MNOg':'30.0',
}

# Species reaction rates
OwdotO_GGS  = "Eq( wdotO  , MOg  * (2.0 * (Rf0-Rb0) + 2.0*(Rf1-Rb1)+1.0*(Rf6-Rb6)-1.0*(Rf7-Rb7)-1.0*(Rf8-Rb8)) )"
OwdotO2_GGS = "Eq( wdotO2 , MO2g * (-1.0*(Rf0-Rb0)-1.0*(Rf1-Rb1)+1.0*(Rf7-Rb7)) )"
OwdotN_GGS  = "Eq( wdotN  , MNg  * (2.0*(Rf2-Rb2)+2.0*(Rf3-Rb3)+2.0*(Rf4-Rb4)+2.0*(Rf5-Rb5)+1.0*(Rf6-Rb6)+1.0*(Rf7-Rb7)+1.0*(Rf8-Rb8)) )"
OwdotN2_GGS = "Eq( wdotN2 , MN2g * (-1.0*(Rf2-Rb2)-1.0*(Rf3-Rb3)-1.0*(Rf4-Rb4)-1.0*(Rf5-Rb5)-1.0*(Rf8-Rb8)) )"
OwdotNO_GGS = "Eq( wdotNO , MNOg * (-1.0*(Rf6-Rb6)-1.0*(Rf7-Rb7)+1.0*(Rf8-Rb8)) )"

OZ_GGS  	= "Eq(Z, 10000.0/T)"
# Forward reaction coefficient
ORf00_GGS 	= "Eq(Rf00, 1000.0*Cf0*(twoT**nf0)*exp(-thetaf0/twoT))"
ORf01_GGS 	= "Eq(Rf01, 1000.0*Cf1*(twoT**nf1)*exp(-thetaf1/twoT))"
ORf02_GGS 	= "Eq(Rf02, 1000.0*Cf2*(twoT**nf2)*exp(-thetaf2/twoT))"
ORf03_GGS 	= "Eq(Rf03, 1000.0*Cf3*(twoT**nf3)*exp(-thetaf3/twoT))"
ORf04_GGS 	= "Eq(Rf04, 1000.0*Cf4*(twoT**nf4)*exp(-thetaf4/twoT))"
ORf05_GGS 	= "Eq(Rf05, 1000.0*Cf5*(twoT**nf5)*exp(-thetaf5/twoT))"
ORf06_GGS 	= "Eq(Rf06, 1000.0*Cf6*(twoT**nf6)*exp(-thetaf6/twoT))"
ORf07_GGS 	= "Eq(Rf07, 1000.0*Cf7*(twoT**nf7)*exp(-thetaf7/twoT))"
ORf08_GGS 	= "Eq(Rf08, 1000.0*Cf8*(twoT**nf8)*exp(-thetaf8/twoT))"

# Backward reaction coefficient - Using kf(Ttr)
ORb00_GGS 	= "Eq(Rb00, (1000.0*Cf0*(oneT**nf0)*exp(-thetaf0/oneT))/K0)"
ORb01_GGS 	= "Eq(Rb01, (1000.0*Cf1*(oneT**nf1)*exp(-thetaf1/oneT))/K1)"
ORb02_GGS 	= "Eq(Rb02, (1000.0*Cf2*(oneT**nf2)*exp(-thetaf2/oneT))/K2)"
ORb03_GGS 	= "Eq(Rb03, (1000.0*Cf3*(oneT**nf3)*exp(-thetaf3/oneT))/K3)"
ORb04_GGS 	= "Eq(Rb04, (1000.0*Cf4*(oneT**nf4)*exp(-thetaf4/oneT))/K4)"
ORb05_GGS 	= "Eq(Rb05, (1000.0*Cf5*(oneT**nf5)*exp(-thetaf5/oneT))/K5)"
ORb06_GGS 	= "Eq(Rb06, (1000.0*Cf6*(oneT**nf6)*exp(-thetaf6/oneT))/K6)"
ORb07_GGS 	= "Eq(Rb07, (1000.0*Cf7*(oneT**nf7)*exp(-thetaf7/oneT))/K7)"
ORb08_GGS 	= "Eq(Rb08, (1000.0*Cf8*(oneT**nf8)*exp(-thetaf8/oneT))/K8)"

# Defining the reaction rates
ORf0_GGS 	= "Eq(Rf0 , Rf00*(0.001*rhoO2/MO2g)*(0.001*rhoN/MNg+0.001*rhoO/MOg) )"
ORb0_GGS 	= "Eq(Rb0 , Rb00*(0.001*rhoO/MOg)**2.0*(0.001*rhoN/MNg+0.001*rhoO/MOg) )"
ORf1_GGS 	= "Eq(Rf1 , Rf01*(0.001*rhoO2/MO2g)*(0.001*rhoN2/MN2g+0.001*rhoO2/MO2g+0.001*rhoNO/MNOg) )"
ORb1_GGS 	= "Eq(Rb1 , Rb01*(0.001*rhoO/MOg)**2.0*(0.001*rhoN2/MN2g+0.001*rhoO2/MO2g+0.001*rhoNO/MNOg) )"
ORf2_GGS 	= "Eq(Rf2 , Rf02*(0.001*rhoN2/MN2g)*(0.001*rhoN/MNg) )"
ORb2_GGS 	= "Eq(Rb2 , Rb02*(0.001*rhoN/MNg)**3.0 )"
ORf3_GGS 	= "Eq(Rf3 , Rf03*(0.001*rhoN2/MN2g)*(0.001*rhoO/MOg) )"
ORb3_GGS 	= "Eq(Rb3 , Rb03*(0.001*rhoN/MNg)**2.0*(0.001*rhoO/MOg) )"
ORf4_GGS 	= "Eq(Rf4 , Rf04*(0.001*rhoN2/MN2g)*(0.001*rhoN2/MN2g+0.001*rhoO2/MO2g) )"
ORb4_GGS 	= "Eq(Rb4 , Rb04*(0.001*rhoN/MNg)**2.0*(0.001*rhoN2/MN2g+0.001*rhoO2/MO2g) )"
ORf5_GGS 	= "Eq(Rf5 , Rf05*(0.001*rhoN2/MN2g)*(0.001*rhoNO/MNOg) )"
ORb5_GGS 	= "Eq(Rb5 , Rb05*(0.001*rhoN/MNg)**2.0*(0.001*rhoNO/MNOg) )"
ORf6_GGS 	= "Eq(Rf6 , Rf06*(0.001*rhoNO/MNOg)*(0.001*rhoO/MOg+0.001*rhoO2/MO2g+0.001*rhoN/MNg+0.001*rhoN2/MN2g+0.001*rhoNO/MNOg) )"
ORb6_GGS	= "Eq(Rb6 , Rb06*(0.001*rhoN/MNg)*(0.001*rhoO/MOg)*(0.001*rhoO/MOg+0.001*rhoO2/MO2g+0.001*rhoN/MNg+0.001*rhoN2/MN2g+0.001*rhoNO/MNOg) )"
ORf7_GGS 	= "Eq(Rf7 , Rf07*(0.001*rhoNO/MNOg)*(0.001*rhoO/MOg) )"
ORb7_GGS 	= "Eq(Rb7 , Rb07*(0.001*rhoO2/MO2g)*(0.001*rhoN/MNg) )"
ORf8_GGS 	= "Eq(Rf8 , Rf08*(0.001*rhoN2/MN2g)*(0.001*rhoO/MOg) )"
ORb8_GGS 	= "Eq(Rb8 , Rb08*(0.001*rhoNO/MNOg)*(0.001*rhoN/MNg) )"

# Equilibrium constant (GGS)
OK0_GGS 	= "Eq(K0, exp(A00+A01*log(Z)+A02*Z+A03*Z**2.0+A04*Z**3.0) )"
OK1_GGS 	= "Eq(K1, exp(A10+A11*log(Z)+A12*Z+A13*Z**2.0+A14*Z**3.0) )"
OK2_GGS 	= "Eq(K2, exp(A20+A21*log(Z)+A22*Z+A23*Z**2.0+A24*Z**3.0) )"
OK3_GGS 	= "Eq(K3, exp(A30+A31*log(Z)+A32*Z+A33*Z**2.0+A34*Z**3.0) )"
OK4_GGS 	= "Eq(K4, exp(A40+A41*log(Z)+A42*Z+A43*Z**2.0+A44*Z**3.0) )"
OK5_GGS 	= "Eq(K5, exp(A50+A51*log(Z)+A52*Z+A53*Z**2.0+A54*Z**3.0) )"
OK6_GGS 	= "Eq(K6, exp(A60+A61*log(Z)+A62*Z+A63*Z**2.0+A64*Z**3.0) )"
OK7_GGS 	= "Eq(K7, exp(A70+A71*log(Z)+A72*Z+A73*Z**2.0+A74*Z**3.0) )"
OK8_GGS 	= "Eq(K8, exp(A80+A81*log(Z)+A82*Z+A83*Z**2.0+A84*Z**3.0) )"



# ##################################################################
# # Park01 model
# 		+ Consists of Park 2001 reaction rates (Where one reaction is missing)
# ##################################################################
# Reactions:
# 0) O2+M ---> 2O+M		(O,N)
# 1) O2+M ---> 2O+M		(O2,N2,NO)
# 2) N2+M ---> 2N+M		(O,N)
# 3) N2+M ---> 2N+M		(O2,N2,NO)
# 4) NO+O ---> O2+N
# 5) N2+O ---> NO+N
# -------------------------------------------------------------------
constants_P01  = {
	'Cf0':'1.0e22', 	'nf0':'-1.5', 	'thetaf0':'5.936e4',	'A00':'1.578640',	'A01':'2.688744',	'A02':'4.215573',	'A03':'-8.091354',	'A04':'0.174260',
	'Cf1':'2.0e21', 	'nf1':'-1.5', 	'thetaf1':'5.936e4',	'A10':'1.578640',	'A11':'2.688744',	'A12':'4.215573',	'A13':'-8.091354',	'A14':'0.174260',
	'Cf2':'3.0e22', 	'nf2':'-1.6', 	'thetaf2':'1.132e5',	'A20':'-3.293682',	'A21':'0.998998',	'A22':'-8.237028',	'A23':'-5.526183',	'A24':'-0.582174',
	'Cf3':'7.0e21', 	'nf3':'-1.6', 	'thetaf3':'1.132e5',	'A30':'-3.293682',	'A31':'0.998998',	'A32':'-8.237028',	'A33':'-5.526183',	'A34':'-0.582174',
	'Cf4':'8.4e12', 	'nf4':'0.00', 	'thetaf4':'1.940e4',	'A40':'-1.840133',	'A41':'-1.768215',	'A42':'-4.759554',	'A43':'1.153872',	'A44':'-0.238985',
	'Cf5':'5.7e12', 	'nf5':'0.42', 	'thetaf5':'4.2938e4',	'A50':'-3.032189',	'A51':'0.0784648',	'A52':'-7.693047',	'A53':'1.411299',	'A54':'-0.517448',
	'MOg':'16.0',	'MO2g':'32.0',	'MNg':'14.0',	'MN2g':'28.0',	'MNOg':'30.0',
}

# Species reaction rates
OwdotO_P01  = "Eq( wdotO  , MOg  * (2.0 *  (Rf0 - Rb0) + 2.0 * (Rf1 - Rb1) - 1.0 * (Rf4 - Rb4) - 1.0 * (Rf5 - Rb5)) )"
OwdotO2_P01 = "Eq( wdotO2 , MO2g * (-1.0 * (Rf0 - Rb0) - 1.0 * (Rf1 - Rb1) + 1.0 * (Rf4 - Rb4)) )"
OwdotN_P01  = "Eq( wdotN  , MNg  * (2.0 *  (Rf2 - Rb2) + 2.0 * (Rf3 - Rb3) + 1.0 * (Rf4 - Rb4) + 1.0 * (Rf5 - Rb5)) )"
OwdotN2_P01 = "Eq( wdotN2 , MN2g * (-1.0 * (Rf2 - Rb2) - 1.0 * (Rf3 - Rb3) - 1.0 * (Rf5 - Rb5)) )"
OwdotNO_P01 = "Eq( wdotNO , MNOg * (-1.0 * (Rf4 - Rb4) + 1.0 * (Rf5 - Rb5)) )"

# Forward reaction coefficient
ORf00_P01 	= "Eq(Rf00, 1000.0*Cf0*(twoT**nf0)*exp(-thetaf0/twoT))"
ORf01_P01 	= "Eq(Rf01, 1000.0*Cf1*(twoT**nf1)*exp(-thetaf1/twoT))"
ORf02_P01 	= "Eq(Rf02, 1000.0*Cf2*(twoT**nf2)*exp(-thetaf2/twoT))"
ORf03_P01 	= "Eq(Rf03, 1000.0*Cf3*(twoT**nf3)*exp(-thetaf3/twoT))"
ORf04_P01 	= "Eq(Rf04, 1000.0*Cf4*(twoT**nf4)*exp(-thetaf4/twoT))"
ORf05_P01 	= "Eq(Rf05, 1000.0*Cf5*(twoT**nf5)*exp(-thetaf5/twoT))"

OZ_P01  	= "Eq(Z, 10000.0/T)"
# Backward reaction coefficient - Using kf(Ttr)
ORb00_P01 	= "Eq(Rb00, (1000.0*Cf0*(oneT**nf0)*exp(-thetaf0/oneT))/K0)"
ORb01_P01 	= "Eq(Rb01, (1000.0*Cf1*(oneT**nf1)*exp(-thetaf1/oneT))/K1)"
ORb02_P01 	= "Eq(Rb02, (1000.0*Cf2*(oneT**nf2)*exp(-thetaf2/oneT))/K2)"
ORb03_P01 	= "Eq(Rb03, (1000.0*Cf3*(oneT**nf3)*exp(-thetaf3/oneT))/K3)"
ORb04_P01 	= "Eq(Rb04, (1000.0*Cf4*(oneT**nf4)*exp(-thetaf4/oneT))/K4)"
ORb05_P01 	= "Eq(Rb05, (1000.0*Cf5*(oneT**nf5)*exp(-thetaf5/oneT))/K5)"

# Defining the reaction rates
ORf0_P01 	= "Eq(Rf0 , Rf00 * (0.001 * rhoO2 / MO2g) * (0.001 * rhoN / MNg + 0.001 * rhoO / MOg) )"
ORb0_P01 	= "Eq(Rb0 , Rb00 * ((0.001 * rhoO / MOg) ** 2) * (0.001 * rhoN / MNg + 0.001 * rhoO / MOg) )"
ORf1_P01 	= "Eq(Rf1 , Rf01 * (0.001 * rhoO2 / MO2g) * (0.001 * rhoN2 / MN2g + 0.001 * rhoO2 / MO2g + 0.001 * rhoNO / MNOg) )"
ORb1_P01 	= "Eq(Rb1 , Rb01 * ((0.001 * rhoO / MOg) ** 2) * (0.001 * rhoN2 / MN2g + 0.001 * rhoO2 / MO2g + 0.001 * rhoNO / MNOg) )"
ORf2_P01 	= "Eq(Rf2 , Rf02 * (0.001 * rhoN2 / MN2g) * (0.001 * rhoN / MNg + 0.001 * rhoO / MOg) )"
ORb2_P01 	= "Eq(Rb2 , Rb02 * ((0.001 * rhoN / MNg) ** 2) * (0.001 * rhoN / MNg + 0.001 * rhoO / MOg) )"
ORf3_P01 	= "Eq(Rf3 , Rf03 * (0.001 * rhoN2 / MN2g) * (0.001 * rhoN2 / MN2g + 0.001 * rhoO2 / MO2g + (0.001 * rhoNO / MNOg)) )"
ORb3_P01 	= "Eq(Rb3 , Rb03 * ((0.001 * rhoN / MNg) ** 2) * (0.001 * rhoN2 / MN2g + 0.001 * rhoO2 / MO2g + (0.001 * rhoNO / MNOg)) )"
ORf4_P01 	= "Eq(Rf4 , Rf04 * (0.001 * rhoNO / MNOg) * (0.001 * rhoO / MOg) )"
ORb4_P01 	= "Eq(Rb4 , Rb04 * (0.001 * rhoO2 / MO2g) * (0.001 * rhoN / MNg) )"
ORf5_P01 	= "Eq(Rf5 , Rf05 * (0.001 * rhoN2 / MN2g) * (0.001 * rhoO / MOg) )"
ORb5_P01 	= "Eq(Rb5 , Rb05 * (0.001 * rhoNO / MNOg) * (0.001 * rhoN / MNg) )"

# Equilibrium constant (Park 2001 Polynomials)
OK0_P01 	= "Eq(K0, exp(A00/Z+A01+A02*log(Z)+A03*Z+A04*(Z**2.0)))"
OK1_P01 	= "Eq(K1, exp(A10/Z+A11+A12*log(Z)+A13*Z+A14*(Z**2.0)))"
OK2_P01 	= "Eq(K2, exp(A20/Z+A21+A22*log(Z)+A23*Z+A24*(Z**2.0)))"
OK3_P01 	= "Eq(K3, exp(A30/Z+A31+A32*log(Z)+A33*Z+A34*(Z**2.0)))"
OK4_P01 	= "Eq(K4, exp(A40/Z+A41+A42*log(Z)+A43*Z+A44*(Z**2.0)))"
OK5_P01 	= "Eq(K5, exp(A50/Z+A51+A52*log(Z)+A53*Z+A54*(Z**2.0)))"

# ##################################################################
# # New model
# 		+ Consists of Park 2001 and 1993 for reaction rates
#		+ Our NASA-9 Polynomial for equilibrium constant
# ##################################################################
# Reactions:
# 0) N2+M ---> 2N+M		(O,N)
# 1) N2+M ---> 2N+M		(O2,N2,NO)
# 2) O2+M ---> 2O+M		(O,N)
# 3) O2+M ---> 2O+M		(O2,N2,NO)
# 4) NO+M ---> N+O+M	(O,N,NO)
# 5) NO+M ---> N+O+M	(O2,N2)
# 6) N2+O ---> NO+N
# 7) NO+O ---> O2+N
# -------------------------------------------------------------------
constants_New  = {
	'C0':'3.0e22', 	'n0':'-1.6', 	'Tr0':'113200.0',	'A00':'2.091870e+03',	'A01':'-1.134452e+05',	'A02':'-6.427685e-01',	'A03':'5.610081e-01',	'A04':'-3.300745e-04',	'A05':'1.836761e-08',
	'C1':'7.0e21', 	'n1':'-1.6', 	'Tr1':'113200.0',	'A10':'2.091870e+03',	'A11':'-1.134452e+05',	'A12':'-6.427685e-01',	'A13':'5.610081e-01',	'A14':'-3.300745e-04',	'A15':'1.836761e-08',
	'C2':'1.0e22', 	'n2':'-1.5', 	'Tr2':'59360.0',	'A20':'6.275151e+03',	'A21':'-6.017939e+04',	'A22':'3.082217e+00',	'A23':'9.324624e-02',	'A24':'-2.147384e-04',	'A25':'7.298221e-09',
	'C3':'2.0e21', 	'n3':'-1.5', 	'Tr3':'59360.0',	'A30':'6.275151e+03',	'A31':'-6.017939e+04',	'A32':'3.082217e+00',	'A33':'9.324624e-02',	'A34':'-2.147384e-04',	'A35':'7.298221e-09',
	'C4':'1.1e17', 	'n4':'0.00', 	'Tr4':'75500.0',	'A40':'5.029763e+03',	'A41':'-7.594795e+04',	'A42':'7.563820e-01',	'A43':'1.817658e-01',	'A44':'-6.685894e-06',	'A45':'4.489270e-09',
	'C5':'5.0e15', 	'n5':'0.00', 	'Tr5':'75500.0',	'A50':'5.029763e+03',	'A51':'-7.594795e+04',	'A52':'7.563820e-01',	'A53':'1.817658e-01',	'A54':'-6.685894e-06',	'A55':'4.489270e-09',
	'C6':'5.7e12', 	'n6':'0.42', 	'Tr6':'42938.0',	'A60':'-2.937898e+03',	'A61':'-3.749727e+04',	'A62':'-1.399152e+00',	'A63':'3.792425e-01',	'A64':'-1.086524e-04',	'A65':'6.580220e-09',
	'C7':'8.4e12', 	'n7':'0.00', 	'Tr7':'19400.0',	'A70':'-1.245460e+03',	'A71':'-1.576855e+04',	'A72':'-2.325883e+00',	'A73':'8.852601e-02',	'A74':'-6.685894e-06',	'A75':'4.489270e-09',
	'MOg':'16.0',	'MO2g':'32.0',	'MNg':'14.0',	'MN2g':'28.0',	'MNOg':'30.0',
}

# Species reaction rates
OwdotO_New  = "Eq( wdotO  , MOg  * ( 2*(Rf2-Rb2) + 2*(Rf3-Rb3) + (Rf4-Rb4) + (Rf5-Rb5) - (Rf6-Rb6) - (Rf7-Rb7) ) )"
OwdotO2_New = "Eq( wdotO2 , MO2g * ( - (Rf2-Rb2) - (Rf3-Rb3) + (Rf7-Rb7) ) )"
OwdotN_New  = "Eq( wdotN  , MNg  * ( 2*(Rf0-Rb0) + 2*(Rf1-Rb1) + (Rf4-Rb4) + (Rf5-Rb5) + (Rf6-Rb6) + (Rf7-Rb7) ) )"
OwdotN2_New = "Eq( wdotN2 , MN2g * ( - (Rf0-Rb0) - (Rf1-Rb1) - (Rf6-Rb6) ) )"
OwdotNO_New = "Eq( wdotNO , MNOg * ( - (Rf4-Rb4) - (Rf5-Rb5) + (Rf6-Rb6) - (Rf7-Rb7) ) )"

# Forward reaction coefficient
ORf00_New 	= "Eq(Rf00, 1000.0*C0*(twoT**n0)*exp(-Tr0/twoT))"
ORf01_New 	= "Eq(Rf01, 1000.0*C1*(twoT**n1)*exp(-Tr1/twoT))"
ORf02_New 	= "Eq(Rf02, 1000.0*C2*(twoT**n2)*exp(-Tr2/twoT))"
ORf03_New 	= "Eq(Rf03, 1000.0*C3*(twoT**n3)*exp(-Tr3/twoT))"
ORf04_New 	= "Eq(Rf04, 1000.0*C4*(twoT**n4)*exp(-Tr4/twoT))"
ORf05_New 	= "Eq(Rf05, 1000.0*C5*(twoT**n5)*exp(-Tr5/twoT))"
ORf06_New 	= "Eq(Rf06, 1000.0*C6*(oneT**n6)*exp(-Tr6/oneT))"
ORf07_New 	= "Eq(Rf07, 1000.0*C7*(oneT**n7)*exp(-Tr7/oneT))"

OZ_New  	= "Eq(Z,    10000.0/T)"
# Backward reaction coefficient - Using kf(Ttr)
ORb00_New 	= "Eq(Rb00, (1000.0*C0*(oneT**n0)*exp(-Tr0/oneT))/K0)"
ORb01_New 	= "Eq(Rb01, (1000.0*C1*(oneT**n1)*exp(-Tr1/oneT))/K1)"
ORb02_New 	= "Eq(Rb02, (1000.0*C2*(oneT**n2)*exp(-Tr2/oneT))/K2)"
ORb03_New 	= "Eq(Rb03, (1000.0*C3*(oneT**n3)*exp(-Tr3/oneT))/K3)"
ORb04_New 	= "Eq(Rb04, (1000.0*C4*(oneT**n4)*exp(-Tr4/oneT))/K4)"
ORb05_New 	= "Eq(Rb05, (1000.0*C5*(oneT**n5)*exp(-Tr5/oneT))/K5)"
ORb06_New 	= "Eq(Rb06, (1000.0*C6*(oneT**n6)*exp(-Tr6/oneT))/K6)"
ORb07_New 	= "Eq(Rb07, (1000.0*C7*(oneT**n7)*exp(-Tr7/oneT))/K7)"

# Defining the reaction rates
ORf0_New 	= "Eq(Rf0 , Rf00 * (0.001*rhoN2/MN2g) * (0.001*rhoO/MOg + 0.001*rhoN/MNg) )"
ORb0_New 	= "Eq(Rb0 , Rb00 * (0.001*rhoN/MNg)**2.0 * (0.001*rhoO/MOg + 0.001*rhoN/MNg) )"
ORf1_New 	= "Eq(Rf1 , Rf01 * (0.001*rhoN2/MN2g) * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g + 0.001*rhoNO/MNOg) )"
ORb1_New 	= "Eq(Rb1 , Rb01 * (0.001*rhoN/MNg)**2.0 * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g + 0.001*rhoNO/MNOg) )"
ORf2_New 	= "Eq(Rf2 , Rf02 * (0.001*rhoO2/MO2g) * (0.001*rhoO/MOg + 0.001*rhoN/MNg) )"
ORb2_New 	= "Eq(Rb2 , Rb02 * (0.001*rhoO/MOg)**2.0 * (0.001*rhoO/MOg + 0.001*rhoN/MNg) )"
ORf3_New 	= "Eq(Rf3 , Rf03 * (0.001*rhoO2/MO2g) * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g + 0.001*rhoNO/MNOg) )"
ORb3_New 	= "Eq(Rb3 , Rb03 * (0.001*rhoO/MOg)**2.0 * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g + 0.001*rhoNO/MNOg) )"
ORf4_New 	= "Eq(Rf4 , Rf04 * (0.001*rhoNO/MNOg) * (0.001*rhoO/MOg + 0.001*rhoN/MNg + 0.001*rhoNO/MNOg) )"
ORb4_New 	= "Eq(Rb4 , Rb04 * (0.001*rhoN/MNg) * (0.001*rhoO/MOg) * (0.001*rhoO/MOg + 0.001*rhoN/MNg + 0.001*rhoNO/MNOg) )"
ORf5_New 	= "Eq(Rf5 , Rf05 * (0.001*rhoNO/MNOg) * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g) )"
ORb5_New 	= "Eq(Rb5 , Rb05 * (0.001*rhoN/MNg) * (0.001*rhoO/MOg) * (0.001*rhoO2/MO2g + 0.001*rhoN2/MN2g) )"
ORf6_New 	= "Eq(Rf6 , Rf06 * (0.001*rhoN2/MN2g) * (0.001*rhoO/MOg) )"
ORb6_New 	= "Eq(Rb6 , Rb06 * (0.001*rhoNO/MNOg) * (0.001*rhoN/MNg) )"
ORf7_New 	= "Eq(Rf7 , Rf07 * (0.001*rhoNO/MNOg) * (0.001*rhoO/MOg) )"
ORb7_New 	= "Eq(Rb7 , Rb07 * (0.001*rhoO2/MO2g) * (0.001*rhoN/MNg) )"

# Equilibrium constant (NASA9 in house (AM) Polynomials)
OK0_New 	= "Eq(K0, exp(A00/(T**1.5)+A01/T+A02+A03*log(T)+A04*T+A05*(T**2.0)))"
OK1_New 	= "Eq(K1, exp(A10/(T**1.5)+A11/T+A12+A13*log(T)+A14*T+A15*(T**2.0)))"
OK2_New 	= "Eq(K2, exp(A20/(T**1.5)+A21/T+A22+A23*log(T)+A24*T+A25*(T**2.0)))"
OK3_New 	= "Eq(K3, exp(A30/(T**1.5)+A31/T+A32+A33*log(T)+A34*T+A35*(T**2.0)))"
OK4_New 	= "Eq(K4, exp(A40/(T**1.5)+A41/T+A42+A43*log(T)+A44*T+A45*(T**2.0)))"
OK5_New 	= "Eq(K5, exp(A50/(T**1.5)+A51/T+A52+A53*log(T)+A54*T+A55*(T**2.0)))"
OK6_New 	= "Eq(K6, exp(A60/(T**1.5)+A61/T+A62+A63*log(T)+A64*T+A65*(T**2.0)))"
OK7_New 	= "Eq(K7, exp(A70/(T**1.5)+A71/T+A72+A73*log(T)+A74*T+A75*(T**2.0)))"
