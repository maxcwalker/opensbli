# !/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# flat13 
#
# author. 
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------

from opensbli import *
import copy
from opensbli.utilities.katzer_init import Initialise_Katzer
from opensbli.utilities.flat_init import Initialise_Flatplate
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import sin, cos, sinh, tanh, exp, pi, log

#############################################################################################################################################
#																																			#
# Inputs			 																														#
#																																			#
#############################################################################################################################################

input_dict = {
    "gama"                 : "1.4",
    "Minf"                 : "4.0", 
    "Pr"                   : "0.72",
    "Re"                   : "4000.0",
    "Twall"                : "1.37",
    "dt"                   : "0.001",
    "niter"                : "250000", 
    "block0np0"            : "1000", 
    "block0np1"            : "400",
    "Delta0block0"         : "400.0/(block0np0-1)",
    "Delta1block0"         : "115.0/(block0np1-1)",
    "SuthT"                : "110.4",
    "RefT"                 : "439.0",
    "eps"                  : "1e-15",
    "TENO_CT"              : "1e-5",
    "L"                    : "400.0",
    "H"                    : "115.0",
    "a"                    : "20.0", # larger values create a wider and smoother bump
    "b"                    : "5.0",
    "teno_a1"              : "10.5",
    "teno_a2"              : "4.5",
    "epsilon"              : "1.0e-30",
    'kappa_TVD'            : "0.3",
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#																																			#
# Governing equations 																														#
#																																			#
#############################################################################################################################################

monitor = True
ndim = 2
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True)], 2)

sc1 = "**{\'scheme\':\'Weno\'}"

# define compressible navier stokes equations in einstein notation and curvilinear form
mass     = 'Eq(Der(rho,t)    , - Conservative(detJ *  rho*U_j              , xi_j, %s)/detJ)' % sc1
momentum = 'Eq(Der(rhou_i,t) , - Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j, %s)/detJ)' % sc1
energy   = 'Eq(Der(rhoE,t)   , - Conservative(detJ * (p+rhoE)*U_j          , xi_j, %s)/detJ)' % sc1

# # Define the compresible Navier-Stokes equations in Einstein notation.
# a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
# mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
# a = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1
# momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
# a = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
# energy = "Eq(Der(rhoE,t), - %s/detJ)" % (a)
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

# Create SimulationEquations and Constituent relations, add the expanded equations
simulation_eq = SimulationEquations()
constituent = ConstituentRelations()

#'''
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

for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# reset coordinate symbol
coordinate_symbol = "x"

#############################################################################################################################################
#																																			#
# Schemes																																	#
#																																			#
#############################################################################################################################################

schemes = {}
weno_order = 5
Avg = SimpleAverage([0, 1])
LF = LFWeno(weno_order, formulation='Z', averaging=Avg)

schemes[LF.name] = LF

fns = 'u0 u1 T'
cent = StoreSome(4, fns)

schemes[cent.name] = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk = RungeKuttaLS(3)
schemes[rk.name] = rk

#############################################################################################################################################
#																																			#
# Boundary conditions																														#
#																																			#
#############################################################################################################################################

# Set the discretisation schemes to be used (a python dictionary)
block = SimulationBlock(ndim, block_number=0)
block.set_discretisation_schemes(schemes)

local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
x_loc = parse_expr("Eq(GridVariable(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)

rho = parse_expr("Eq(DataObject(rho), d)", local_dict=local_dict)
rhou0 = parse_expr("Eq(DataObject(rhou0), d*u0)", local_dict=local_dict)
rhou1 = parse_expr("Eq(DataObject(rhou1), d*u1)", local_dict=local_dict)
rhoE = parse_expr("Eq(DataObject(rhoE), p/(gama-1) + 0.5* d *(u0**2+u1**2))", local_dict=local_dict)

boundaries = [[0, 0] for t in range(ndim)]
# Left pressure extrapolation at x= 0, inlet conditions
direction = 0
side = 0
boundaries[direction][side] = InletTransferBC(0, 0, scheme=Carpenter())
# Right extrapolation at outlet
direction = 0
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0, scheme=Carpenter())
# boundaries[direction][side] = ZeroGradientOutletBC(0, 1)
# Bottom no-slip isothermal wall
direction = 1
side = 0
wall_const = ["Minf", "Twall"]
for con in wall_const:
    local_dict[con] = ConstantObject(con)
# Isothermal wall condition
rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)
wall_eqns = [rhoE_wall]
boundaries[direction][side] = IsothermalWallBC(1, 0, wall_eqns, scheme=Carpenter())
# Top dirichlet shock generator condition
direction = 1
side = 1
boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

block.set_block_boundaries(boundaries)

# Monitor points - indexing is (x,y,z)
if monitor:
    # Nx, Nz, L = symbols('block0np0 block0np2 L', **{'cls': ConstantObject})
    Nx, L = 1000, 400.0
    arrays = ['p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p']
    arrays += ['rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0']
    
    arrays = [block.location_dataset('%s' % dset) for dset in arrays]
    indices = [(int(50 * Nx/L), 0 ), (int(90 * Nx/L), 0 ), (int(100 * Nx/L), 0 ), (int(110 * Nx/L), 0 ), (int(120 * Nx/L), 0 ), (int(130 * Nx/L), 0 ), (int(140 * Nx/L), 0 ), (int(150 * Nx/L), 0 ), (int(160 * Nx/L), 0 ), (int(170 * Nx/L), 0 ), (int(180 * Nx/L), 0 ), (int(185 * Nx/L), 0 ), (int(190 * Nx/L), 0 ), (int(195 * Nx/L), 0 ), (int(200 * Nx/L), 0 ), (int(205 * Nx/L), 0 ), (int(210 * Nx/L), 0 ), (int(215 * Nx/L), 0 ), (int(220 * Nx/L), 0 ), (int(230 * Nx/L), 0 ), (int(240 * Nx/L), 0 ),(int(250 * Nx/L), 0 ), (int(260 * Nx/L), 0 ), (int(270 * Nx/L), 0 ),(int(280 * Nx/L), 0 ),(int(290 * Nx/L), 0 ), (int(300 * Nx/L), 0 ), (int(310 * Nx/L), 0 ), (int(320 * Nx/L), 0 ), (int(330 * Nx/L), 0 ), (int(340 * Nx/L), 0 ), (int(350 * Nx/L), 0 ), (int(360 * Nx/L), 0 ), (int(370 * Nx/L), 0 ),(int(380 * Nx/L), 0 ), (int(390 * Nx/L), 0 ),(int(399 * Nx/L), 0 ),\
               (int(50 * Nx/L), 1 ), (int(90 * Nx/L), 1 ), (int(100 * Nx/L), 1 ), (int(110 * Nx/L), 1 ), (int(120 * Nx/L), 1 ), (int(130 * Nx/L), 1 ), (int(140 * Nx/L), 1 ), (int(150 * Nx/L), 1 ), (int(160 * Nx/L), 1 ), (int(170 * Nx/L), 1 ), (int(180 * Nx/L), 1 ), (int(185 * Nx/L), 1 ), (int(190 * Nx/L), 1 ), (int(195 * Nx/L), 1 ), (int(200 * Nx/L), 1 ), (int(205 * Nx/L), 1 ), (int(210 * Nx/L), 1 ), (int(215 * Nx/L), 1 ), (int(220 * Nx/L), 1 ), (int(230 * Nx/L), 1 ), (int(240 * Nx/L), 1 ),(int(250 * Nx/L), 1 ), (int(260 * Nx/L), 1 ), (int(270 * Nx/L), 1 ),(int(280 * Nx/L), 1 ),(int(290 * Nx/L), 1 ), (int(300 * Nx/L), 1 ), (int(310 * Nx/L), 1 ), (int(320 * Nx/L), 1 ), (int(330 * Nx/L), 1 ), (int(340 * Nx/L), 1 ), (int(350 * Nx/L), 1 ), (int(360 * Nx/L), 1 ), (int(370 * Nx/L), 1 ),(int(380 * Nx/L), 1 ), (int(390 * Nx/L), 1 ),(int(399 * Nx/L), 1 )]

    SM = SimulationMonitor(arrays, indices, block, print_frequency=20, fp_precision=12, output_file='monitor.log')
 
#############################################################################################################################################
#																																			#
# Grid and intial conditions																												#
#																																			#
#############################################################################################################################################

# Re, xMach, Tinf,Twall = symbols('Re Minf RefT Twall', **{'cls': ConstantObject})
Re, xMach, Tinf,Twall = 4000.0, 4.0, 439.0, 1.37
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1'))]
n_poly_coefficients = 50
grid_const = ["L", "H", "a", "b"]
for con in grid_const:
    local_dict[con] = ConstantObject(con)
gridx0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
gridx1 = parse_expr("Eq(DataObject(x1), H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2) + (H - H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2))*sinh(b*block.deltas[1]*block.grid_indexes[1]/H)/sinh(b))", local_dict=local_dict)
coordinate_evaluation = [gridx0, gridx1]
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, Twall, coordinate_evaluations=coordinate_evaluation)
# initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients,  Re, xMach, Tinf, coordinate_evaluation)
#############################################################################################################################################
#																																			#
# Data i/o 																																	#
#																																			#
#############################################################################################################################################
#grouping conserved variables into 1 vector
q_vector = flatten(simulation_eq.time_advance_arrays)

stat_equation_classes, stats_arrays = [], []

# Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq] + stat_equation_classes)

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=50000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'),DataObject('D11')])
h5.add_arrays([DataObject('p')]) # save pressure

block.setio(h5)


block.discretise()

if monitor:
    alg = TraditionalAlgorithmRK(block, simulation_monitor=SM)
else:
    alg = TraditionalAlgorithmRK(block)

SimulationDataType.set_datatype(Double)
OPSC(alg)

substitute_simulation_parameters(constants, values)
print_iteration_ops(every=1, NaN_check='rho_B0')
