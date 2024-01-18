import numpy as npMN2
from matplotlib import pyplot as plt
from sympy import *
# import pprint

rho=Symbol('rho'); u0=Symbol('u0'); p=Symbol('p'); gama=Symbol('gama'); asq=Symbol('asq'); a=Symbol('a')
f=Symbol('f'); rhoN2=Symbol('rhoN2'); rhoN=Symbol('rhoN'); ev=Symbol('ev')
MN2=Symbol('MN2'); MN=Symbol('MN'); gamaf=Symbol('gamaf'); af=Symbol('af')

# using pressure as varaiable

# Q = Matrix([rho,rho*u0,5*p/2+0.5*rho*u0**2])
# U=Matrix([rho,u0,p])
# F=Matrix([rho*u0,rho*u0**2+p,u0*(5*p/2+0.5*rho*u0**2)+u0*p])

# using asq as variable
# Q=Matrix([rho,rho*u0,rho*asq/gama/(gama-1.0)+0.5*rho*u0**2])
# U=Matrix([rho,u0,asq])
# F=Matrix([rho*u0,rho*u0**2+rho*asq/gama,u0*(rho*asq/gama/(gama-1.0)+0.5*rho*u0**2)+u0*rho*asq/gama])


# **** using a as variable (avoids sqrt in evect output)
# Q=Matrix([rho,rho*u0,rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2])
# U=Matrix([rho,u0,a])
# F=Matrix([rho*u0,rho*u0**2+rho*a**2/gama,u0*(rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2)+u0*rho*a**2/gama])
# pprint(F)

# **** using a as variable (avoids sqrt in evect output) with substitution H
# H = Symbol('H')
# H = rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2

# Q=Matrix([rho,rho*u0,H])
# U=Matrix([rho,u0,a])
# F=Matrix([rho*u0,rho*u0**2+rho*a**2/gama,u0*H+u0*rho*a**2/gama])
# pprint(Q)

# with passive scalar
# Q=Matrix([rho,rho*u0,rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2,rho*f])
# U=Matrix([rho,u0,a,f])
# F=Matrix([rho*u0,rho*u0**2+rho*a**2/gama,u0*(rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2)+u0*rho*a**2/gama,rho*u0*f])

# with 2 species (N2 and N)
# Q=Matrix([rhoN2,rhoN,(rhoN2+rhoN)*u0,(rhoN2+rhoN)*a**2/gama/(gama-1.0)+0.5*(rhoN2+rhoN)*u0**2])
# U=Matrix([rhoN2,rhoN,u0,a])
# F=Matrix([rhoN2*u0,rhoN*u0,(rhoN2+rhoN)*u0**2+(rhoN2+rhoN)*a**2/gama,u0*((rhoN2+rhoN)*a**2/gama/(gama-1.0)+0.5*(rhoN2+rhoN)*u0**2)+u0*(rhoN2+rhoN)*a**2/gama])

# *** with 2 species (N2 and N) and a separate ev equation 
# uses frozen flow gama and sound speed, such that gamaf=cpf/cvf,
# af**2=gamaf*Rhat*T/Mhat, e=rho*af**2/(gamaf*(gamaf-1), p=rho*af**2/gamaf
# gamaf=cpf*Mhat/(Mhat*cpf-Rhat
# Mhat is defined from rho/Mhat=sum_s(rho_s/M_s)
# rho*cpf=sum_s(rho_s*cp_s)

Q=Matrix([rhoN2,rhoN,(rhoN2+rhoN)*u0,(rhoN2+rhoN)*ev,(rhoN2+rhoN)*(ev+af**2/(gamaf*(gamaf-1.0))+0.5*u0**2)])
U=Matrix([rhoN2,rhoN,u0,ev,af])
F=Matrix([rhoN2*u0,rhoN*u0,(rhoN2+rhoN)*u0**2+(rhoN2+rhoN)*af**2/gamaf,u0*(rhoN2+rhoN)*ev,u0*((rhoN2+rhoN)*(ev+af**2/(gamaf*(gamaf-1.0))+0.5*u0**2))+u0*(rhoN2+rhoN)*af**2/gamaf])

# find the jacobian matrics, construct A and find the eigenvalues and
# eigenvectors
dQdU=Q.jacobian(U)
dUdQ= dQdU.inv()
dFdU=F.jacobian(U)
A=dFdU*dUdQ

REV, ev = A.diagonalize()
REV = simplify(REV)
LEV = REV.inv(method='ADJ')
LEV = simplify(LEV)
# LEV = LEV.subs(rho*a**2/gama/(gama-1.0)+0.5*rho*u0**2, H)
print(REV)
print("-----------------------------------------------")
print(LEV)
print("-----------------------------------------------")
print(ev)


# print(LEV)

####################################################################################################
####################################################################################################

##                                       All MATLAB lefotover                                     ##

# pp.pprint(ev)'

# # simplify (may not be needed)
# nstep=2
# ev=simplify(diag(eval),'Steps',nstep)
# REV=simplify(evect,'Steps',nstep)
# LEV=simplify(inv(evect),'Steps',nstep)

# # check the eigenvectors by susbtituting some numerical values
# nstep=2
# result=simplify(LEV*(A*REV),'Steps',nstep)
# numericaltest=simplify(subs(result,[rho,u0,a],[1.4,1.0,0.5]),'Steps',nstep)

# # output c code for implementation in TVD/WENO
# ccodeev=ccode(ev)
# ccodeREV=ccode(REV)
# ccodeLEV=ccode(LEV)
# print(ccodeREV)