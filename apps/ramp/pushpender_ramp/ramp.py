from opensbli import *
import copy, h5py
from opensbli.utilities.katzer_init import Initialise_Katzer
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import sin, cos, tan, sinh, cosh, tanh, exp, pi, log, pprint
from sympy import sin, cos, tan, sinh, cosh, tanh, exp, pi, log
import numpy as np

#############################################################################################################################################
#                                                                                                                                                                                                                                                                                       #
# Inputs                                                                                                                                                                                                                                                                        #
#                                                                                                                                                                                                                                                                                       #
#############################################################################################################################################

input_dict = {
    "gama"                 : "1.4",
    "Minf"                 : "1.5",
    "Pr"                   : "0.72",
    "Re"                   : "750.0",
    "Twall"                : "1.3809973268575328",
    "dt"                   : "0.005",
    "niter"                : "2500000",
    "block0np0"            : "2050",
    "block0np1"            : "365",
    "block0np2"            : "200",
    "Delta0block0"         : "375.0/(block0np0-1)",
    "Delta1block0"         : "158.0/(block0np1-1)",
    "Delta2block0"         : "27.32/(block0np2-1)",
    "SuthT"                : "110.4",
    "RefT"                 : "202.17",
    "eps"                  : "1e-15",
    "TENO_CT"              : "1e-5",
    "Ly"                   : "158.0",
    "tramp"                : "tan(5.2*M_PI/180.0)",     # tan of ramp angle
    "aramp"                : "1.0",                     # parameter for ramp grid
    "xramp"                : "154.0",                   # x-location of ramp start
    "b"                    : "5.0",
    "A"                    : "2.5e-3",
    "omega1"               : "0.100",
    "omega2"               : "0.104",
    "bta"                  : "0.23",
    "xF"                   : "20.0",
    "yF"                   : "4.0",
    "teno_a1"              : "10.5",
    "teno_a2"              : "4.5",
    "epsilon"              : "1.0e-30",
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#                                                                                                                                                                                                                                                                                       #
# Governing equations                                                                                                                                                                                                                                           #
#                                                                                                                                                                                                                                                                                       #
#############################################################################################################################################

ndim = 3
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(False, True), (True, True), (False, False)], 2)

# Define the compresible Navier-Stokes equations in Einstein notation.
sc1 = "**{\'scheme\':\'Teno\'}"

a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
a = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1
momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
a = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
energy = "Eq(Der(rhoE,t), - %s/detJ)" % (a)

# auxilliary equations for NS
stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"

# Substitutions
substitutions = [stress_tensor, heat_flux]
constants_var = ["Re", "Pr", "gama", "Minf", "SuthT", "RefT"]
# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

# Instatiate equation classes
eq = EinsteinEquation()

# viscous momentum and energy components
visc_momentum = "Eq(Der(rhou_i, t), Der(tau_i_j,x_j))"
visc_momentum = eq.expand(visc_momentum, ndim, coordinate_symbol, substitutions, constants)
visc_momentum = [metriceq.apply_transformation(v) for v in visc_momentum]

visc_energy = "Eq(Der(rhoE, t), -Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j))"
visc_energy = eq.expand(visc_energy, ndim, coordinate_symbol, substitutions, constants)
visc_energy = metriceq.apply_transformation(visc_energy)

# create an optional substitutions dictionary, this will be used to modify the equations when parsed
optional_subs_dict = metriceq.metric_subs
eq.optional_subs_dict = optional_subs_dict

metric_vel = "Eq(U_i, D_i_j*u_j)"
# eqns = eq.expand(metric_vel, ndim, coordinate_symbol, substitutions, constants)
# for eq in eqns:
#     optional_subs_dict[eq.lhs] = eq.rhs

# change coordinate symbol to curvilinear
coordinate_symbol = "xi"
base_eqns = [mass, momentum, energy]
constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity, metric_vel]
# Expand the base equations
for i, base in enumerate(base_eqns):
    base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants_var)
    if base==momentum:
        for no, b in enumerate(base_eqns[i]):
            base_eqns[i][no] = Eq(base_eqns[i][no].lhs, base_eqns[i][no].rhs + visc_momentum[no].rhs)
    else:
        if base==energy:
            base_eqns[i] = Eq(base_eqns[i].lhs, base_eqns[i].rhs + visc_energy.rhs)

# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants_var)

 # reset coordinate symbol

coordinate_symbol = "x"

#############################################################################################################################################
#                                                                                                                                                                                                                                                                                       #
# Schemes                                                                                                                                                                                                                                                                       #
#                                                                                                                                                                                                                                                                                       #
#############################################################################################################################################
# # Set the discretisation schemes to be used (a python dictionary)
block = SimulationBlock(ndim, block_number=0)

# Adaptive TENO with modified Ducros sensor
SS = ShockSensor()
shock_sensor, sensor_array = SS.ducros_equations(block, coordinate_symbol, metriceq)
store_sensor = True
teno_order = 6
Avg = RoeAverage([0, 1])
LF = LFTeno(teno_order, formulation='adaptive', averaging=Avg, sensor=sensor_array, store_sensor=store_sensor)
schemes = {}
schemes[LF.name] = LF
# cent = Central(4)
fns = 'u0 u1 u2 T'
cent = StoreSome(4, fns)
schemes[cent.name] = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk = RungeKuttaLS(3)
#rk = RungeKuttaLS(3, formulation='SSP')
schemes[rk.name] = rk

block.set_discretisation_schemes(schemes)
################################################################################
# Create the body force after specifying a time stepping scheme
A, B, xF, yF, bta, omega1, omega2, dt = symbols('A B xF yF bta omega1 omega2 dt', **{'cls': ConstantObject})
forcing_const = ["A", "B", "xF", "yF", "bta", "omega1", "omega2", "dt"]

current_iter = block.get_temporal_schemes[0].iteration_number
x0, x1, x2 = symbols('x0 x1 x2', **{'cls': DataObject})
# damping = (1 - exp(-x1 / 0.5))
#body_force = Eq(DataObject('BF'), 0.5*A*exp(-((x0-xF)**2+(x1-yF)**2))*( cos(bta*x2)*(cos(omega1*dt*current_iter) + cos(omega2*dt*current_iter) ) + sin(bta*x2)*(sin(omega1*dt*current_iter) - sin(omega2*dt*current_iter) ) ) )
body_force = Eq(DataObject('BF'), 0.5*A*exp(-((x0-xF)**2+(x1-yF)**2))*( cos(bta*x2-omega1*dt*current_iter) + cos(bta*x2+omega2*dt*current_iter) ) )

# Add forcing as an acoustic term to the continuity equation
for i, eq in enumerate(base_eqns):
    if i == 0:
        base_eqns[i] = Eq(eq.lhs, eq.rhs + body_force.lhs)
# Create SimulationEquations and Constituent relations, add the expanded equations
simulation_eq = SimulationEquations()
constituent = ConstituentRelations()
for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# Define a shock sensor for the TENO schemee
# Add the shock sensor to constituent relations
constituent.add_equations(shock_sensor)
# Add the body forcing term to the constituent relations
constituent.add_equations(body_force)