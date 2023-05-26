#!/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# flat3_central - Katzer case without shock capturing and central scheme
#   Attempt a flat plate boundary layer code 
#
# author. gnsa1e21, 2022
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------
from opensbli import *
import copy
from opensbli.utilities.katzer_init import Initialise_Katzer
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import sin, cos, sinh, tanh, exp, pi, log


ndim = 2

# Define the compresible Navier-Stokes equations in Einstein notation.
mass = "Eq(Der(rho,t), - Conservative(rhou_j,x_j))" 
momentum = "Eq(Der(rhou_i,t) , - Conservative(rhou_i*u_j,x_j ) - KD(_i,_j)*Der(p,x_j) + Der(tau_i_j,x_j))" 
energy = "Eq(Der(rhoE,t), - Conservative(p*u_j,x_j) - Conservative(rhoE*u_j, x_j) - Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j) )" 
stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"
# Substitutions
substitutions = [stress_tensor, heat_flux]
constants = ["Re", "Pr", "gama", "Minf", "SuthT", "RefT"]
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

# Instatiate equation classes
eq = EinsteinEquation()
base_eqns = [mass, momentum, energy]
constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity]
# Expand the base equations
for i, base in enumerate(base_eqns):
    base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants)
# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)

block = SimulationBlock(ndim, block_number=0)

# Create metrics before the scheme selection
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(False, False), (True, False)], 2)

# Create SimulationEquations and Constituent relations, add the expanded equations
simulation_eq = SimulationEquations()
constituent = ConstituentRelations()

for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# Grid is stretched normal to the wall
simulation_eq.apply_metrics(metriceq)

# # Adaptive TENO with modified Ducros sensor
# SS = ShockSensor()
# shock_sensor, sensor_array = SS.ducros_equations(block, coordinate_symbol, metriceq)
# # Add shock Ducros sensor to constituent relations
# constituent.add_equations(shock_sensor)
# store_sensor = True
# teno_order = 5
# Avg = RoeAverage([0, 1])
# LLF = LLFTeno(teno_order, formulation='adaptive', averaging=Avg, sensor=sensor_array, store_sensor=True)
# schemes = {}
# schemes[LLF.name] = LLF
# # cent = Central(4)
# fns = 'u0 u1 u2 T'
# cent = StoreSome(4, fns)
# schemes[cent.name] = cent
# rk = RungeKuttaLS(3, formulation='SSP')
# schemes[rk.name] = rk
# block.set_discretisation_schemes(schemes)

# # STEP 3
# # Create the dictionary of schemes
# schemes = {}
# # Central scheme for spatial discretisation and add to the schemes dictionary
# cent = Central(4)
# schemes[cent.name] = cent
# # RungeKutta scheme for temporal discretisation and add to the schemes dictionary
# rk = RungeKuttaLS(3)
# schemes[rk.name] = rk
# # Set the discretisation schemes to be used (a python dictionary)
# block.set_discretisation_schemes(schemes)

# Create a schemes dictionary to be used for discretisation
schemes = {}
# Central scheme for spatial discretisation and add to the schemes dictionary
# Low storage optimisation for the central scheme
# fns = 'u0 u1 T'
# cent = StoreSome(4, fns)
cent = Central(4)
schemes[cent.name] = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk = RungeKuttaLS(3)
schemes[rk.name] = rk
# Set the discretisation schemes to be used (a python dictionary)
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
boundaries[direction][side] = InletTransferBC(0, 0, scheme=ReducedAccess())
# Right extrapolation at outlet
direction = 0
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0, scheme=ReducedAccess())
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
# boundaries[direction][side] = IsothermalWallBC(1, 0, wall_eqns, scheme=ReducedAccess())

local_dict['xF'] = ConstantObject('xF')
local_dict['zc'] = ConstantObject('zc')
local_dict['zw'] = ConstantObject('zw')
local_dict['sigmaf'] = ConstantObject('sigmaf')

local_dict['af'] = ConstantObject('af')

local_dict['A1'] = ConstantObject('A1')
local_dict['beta1'] = ConstantObject('beta1')
local_dict['omega1'] = ConstantObject('omega1')

local_dict['A2'] = ConstantObject('A2')
local_dict['beta2'] = ConstantObject('beta2')
local_dict['omega2'] = ConstantObject('omega2')
local_dict['iterfeed'] = ConstantObject('iterfeed')
# local_dict['iter'] = Globalvariable("iter", integer=True)


#############################################################################################################################################
#																																			#
# Forcing																													                #
#																																			#
#############################################################################################################################################


wall_const = ['tripA', 'tripSigma', 'xts', 'dt', 'omega_0', 'omega_1', 'omega_2', 'k_0', 'k_1', 'k_2', 'phi_0', 'phi_1', 'phi_2']
for con in wall_const:
    local_dict[con] = ConstantObject(con)


Amp, sigma, xts, xtp = symbols('tripA tripSigma xts xtp', **{'cls':ConstantObject})
dt, omega0, omega1, omega2 = symbols('dt omega_0 omega_1 omega_2', **{'cls': ConstantObject})
# Spatial Modes
k0, k1, k2 = symbols('k_0 k_1 k_2', **{'cls': ConstantObject})
phi0, phi1, phi2 = symbols('phi_0 phi_1 phi_2', **{'cls': ConstantObject})



# current_iter = symbols('current_iter', **{'cls': ConstantObject})

current_iter = Globalvariable('iter', integer=False)
t = dt*current_iter

# Coordinate arrays
x0, z0 = DataObject('x0'), DataObject('x2')

conditional_expressions = []
# trip_eqn = Amp*(exp(-(x0 - xts)**2  / (2*sigma**2))*(sin(k0 * z0)*sin(omega0*dt*current_iter + phi0) + sin(k1 * z0)*sin(omega1*dt*current_iter + phi1) + sin(k2 * z0)*sin(omega2*dt*current_iter + phi2)))
trip_eqn = exp(-(x0 - 20)**2.0/ ( 0.425*2/0.1))  * 0.05* sin(0.15 * t)


wall_normal_velocity = OpenSBLIEq(DataObject('rhou1'), DataObject('rho')*trip_eqn)

rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)

wall_eqns = [rhoE_wall]
wall_energy = [rhoE_wall]

# ForcingStripBC(direction, side, v, wall_eqns)
boundaries[direction][side] = ForcingStripBC(direction, side,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())

#################################################################################################################################################################################
#################################################################################################################################################################################

# wall_normal_velocity = parse_expr("Eq(DataObject(rhou1), exp( -(DataObject(x0) - 20)**2.0/ ( 0.425*2*pi/0.1) ) * (0.05* (sin(0.15 * dt * iterfeed ) ))  )", local_dict=local_dict)

# boundaries[direction][side] = ForcingStripBC(direction, side,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())

# Top dirichlet shock generator condition
direction = 1
side = 1

boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

block.set_block_boundaries(boundaries)

# Perform initial condition
# Reynolds number, Mach number and free-stream temperature for the initial profile
Re, xMach, Tinf = 950.0, 2.0, 288.0
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1'))]
n_poly_coefficients = 50
grid_const = ["Lx1", "by"]
for con in grid_const:
    local_dict[con] = ConstantObject(con)
gridx0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
gridx1 = parse_expr("Eq(DataObject(x1), Lx1*sinh(by*block.deltas[1]*block.grid_indexes[1]/Lx1)/sinh(by))", local_dict=local_dict)
coordinate_evaluation = [gridx0, gridx1]
initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients,  Re, xMach, Tinf, coordinate_evaluation)

# # initial conditions
# dx, dy = block.deltas
# x, y = symbols('x0:%d' % ndim, **{'cls': DataObject})
# i, j = block.grid_indexes
# nx, ny, Lx1, by = symbols('block0np0 block0np1 Lx1 by', **{'cls': ConstantObject}) 
# Lx=nx*dx
# q_vector=flatten(simulation_eq.time_advance_arrays)
# grid_equations= []
# # stretch_eqn=0.5*Ly*sinh(stretch*(j-(ny-1)/2)/((ny-1)/2))/sinh(stretch)
# stretch_eqn=Lx1*sinh(by*dy*j/Lx1)/sinh(by)

# grid_equations += [Eq(x, i*dx), Eq(y,stretch_eqn)]


# # Initial conditions as strings
# u0 = "Eq(GridVariable(u0), 1.0)" # need to find a way to update these. 
# u1 = "Eq(GridVariable(u1), 0.0,)"
# p = "Eq(GridVariable(p), 1/(gama*Minf*Minf))"
# r = "Eq(GridVariable(r), gama*Minf*Minf*p)"

# rho = "Eq(DataObject(rho), r)"
# rhou0 = "Eq(DataObject(rhou0), r*u0)"
# rhou1 = "Eq(DataObject(rhou1), r*u1)"
# rhoE = "Eq(DataObject(rhoE), p/(gama-1) + 0.5* r *(u0**2+ u1**2))"

# eqns = [u0, u1, p, r, rho, rhou0, rhou1, rhoE]

# initial_equations = [parse_expr(eq, local_dict=local_dict) for eq in eqns]
# initial = GridBasedInitialisation()
# initial.add_equations(grid_equations + initial_equations)


kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=50, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('D11')])
block.setio(h5)

# Add SFD filtering
# SFD = SFD(block, chifilt=0.1, omegafilt=1.0/0.75)
j = block.grid_indexes[1]
grid_condition = j >= 169
F = BinomialFilter(block, order=10, grid_condition=grid_condition)

# # Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq])
# # Set the equations to be solved on the block
# block.set_equations([constituent, simulation_eq, initial, metriceq] + F.equation_classes)# + SFD.equation_classes)
block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
# Substitute simulation parameter values
constants = ['gama', 'Minf', 'Pr', 'Re', 'Twall', 'dt', 'niter', 'block0np0', 'block0np1',
                 'Delta0block0', 'Delta1block0', 'SuthT', 'RefT', 'eps', 'Lx1', 'by', 'epsilon', 'zc', 'zw', 'A1', 'beta1', 'omega1', 'A2', 'beta2', 'omega2', 'sigmaf','iterfeed']
values = ['1.4', '2.0', '0.72', '950.0', '1.67619431', '0.02', '30000', '500', '250',
              '400.0/(block0np0-1)', '115.0/(block0np1-1)', '110.4', '288.0', '1e-15', '115.0', '5.0', '1.0e-30','0', '27.32/2.0', '27.32', '50e-3', '0', '1.71', '2.50e-3', '0', '0.855', '0.5', '0.0']
substitute_simulation_parameters(constants, values)

trip_constants = ['tripA', 'tripSigma', 'xts', 'omega_0', 'omega_1', 'omega_2', 'k_0', 'k_1', 'k_2', 'phi_0', 'phi_1', 'phi_2']
trip_constant_values = ['0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0']
substitute_simulation_parameters(trip_constants, trip_constant_values)

print_iteration_ops(NaN_check='rho_B0')

