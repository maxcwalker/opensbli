#!/usr/bin/env python
# Import all the functions from opensbli
from opensbli import *
from sympy import pi, tan, exp, cos, tanh, sqrt, sinh
from sympy import *
import numpy
import copy
import re
import os
import shutil
from opensbli.utilities.helperfunctions import substitute_simulation_parameters, print_iteration_ops, output_hdf5
from opensbli.utilities.katzer_init import Initialise_Katzer
import h5py
import random

ndim = 3
sc1 = "**{\'scheme\':\'Weno\'}"
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True), (True, True)], 2)

einstein_eqn = EinsteinEquation()
# Stress tensor and heat flux
stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"
# Substitutions
substitutions = [stress_tensor, heat_flux]
constants = ["Re", "Pr","gama", "Minf", "SuthT", "RefT"]

# Viscous momentum and energy components
visc_momentum = "Eq(Der(rhou_i, t), Der(tau_i_j,x_j))"
visc_momentum = einstein_eqn.expand(visc_momentum, ndim, coordinate_symbol, substitutions, constants)
visc_momentum = [metriceq.apply_transformation(v) for v in visc_momentum]
visc_energy = "Eq(Der(rhoE, t), -Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j))"
visc_energy = einstein_eqn.expand(visc_energy, ndim, coordinate_symbol, substitutions, constants)
visc_energy = metriceq.apply_transformation(visc_energy)

# Create an optional substitutions dictionary, this will be used to modify the equations when parsed
optional_subs_dict = metriceq.metric_subs

a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
a = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1 # Changed rho*u_i to rhou_i
momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
a = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
energy = "Eq(Der(rhoE,t), - %s/detJ)" % (a)
# Substitutions
substitutions = []

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

einstein_eqn.optional_subs_dict = optional_subs_dict

metric_vel = "Eq(U_i, D_i_j*u_j)"

output_folder = "./new_phase/" 
if os.path.exists(output_folder):
	shutil.rmtree(output_folder)
os.makedirs(output_folder)

block = SimulationBlock(ndim, block_number=0)



#############################################################################################################################################
#																																			#
# Schemes																																	#
#																																			#
#############################################################################################################################################

Weno_order = 5
Avg = RoeAverage([0, 1])
RF = LLFWeno(Weno_order, formulation='Z', averaging=Avg)
central_order = Weno_order-1
#Linear = InterpolateCentral(central_order)
#Hybrid = Hybrid(Linear, RF, sensor=block.location_dataset('theta'))
schemes = {}
#schemes[Hybrid.name] = Hybrid
cent = Central(4)
schemes[cent.name] = cent
rk = RungeKuttaLS(3)
schemes[rk.name] = rk
block.set_discretisation_schemes(schemes)


curvilinear_symbol = "xi"
simulation_eq = SimulationEquations()

n = GridVariable('n')
m = GridVariable('m')
forcing = DataObject('forcing')
N = 20
M = 20

eqns = einstein_eqn.expand(mass, ndim, curvilinear_symbol, substitutions, constants)


ampli, xF, yF, F0, dt, lz = symbols('ampli xF yF F0 dt lz', **{'cls':ConstantObject})
current_iter = block.get_temporal_schemes[0].iteration_number
x, y, z = [DataObject('x%d' % i) for i in range(ndim)]

forcing_eq = Eq(forcing, ampli*exp(-((x-xF)**2+(y-yF)**2))*summation(cos(2*pi*m/lz*z+random.uniform(0,2*pi)), (m, 0, M))*summation(sin(2*pi*n*F0*dt*current_iter+random.uniform(0,2*pi)), (n, 1, N)))

### Add forcing to continuity
mass_eq = Eq(eqns.lhs, eqns.rhs+ DataObject('forcing')) 
simulation_eq.add_equations(mass_eq)


eqns = einstein_eqn.expand(momentum, ndim, curvilinear_symbol, substitutions, constants)
for no, eq in enumerate(eqns):
	eqns[no] = Eq(eqns[no].lhs, eqns[no].rhs + visc_momentum[no].rhs)

simulation_eq.add_equations(eqns)

eqns = einstein_eqn.expand(energy, ndim, curvilinear_symbol, substitutions, constants)
eqns = Eq(eqns.lhs, eqns.rhs + visc_energy.rhs)
simulation_eq.add_equations(eqns)

## Metric_vel is now a continuity for hybrid, no speed of sound for Roe-Flux
constituent = ConstituentRelations()
eqns = einstein_eqn.expand(velocity, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = einstein_eqn.expand(pressure, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = einstein_eqn.expand(temperature, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = einstein_eqn.expand(viscosity, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = einstein_eqn.expand(speed_of_sound, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)

eqns = einstein_eqn.expand(metric_vel, ndim, curvilinear_symbol, substitutions, constants)
constituent.add_equations(eqns)
## Add forcing to CR
constituent.add_equations(forcing_eq)

## Need to add a shock sensor
cart = CoordinateObject('x_i')
cartesian_coordinates = [cart.apply_index(cart.indices[0], dim) for dim in range(ndim)]

x0, x1, x2 = cartesian_coordinates[0], cartesian_coordinates[1], cartesian_coordinates[2]
u0, u1, u2 = DataObject('u0'), DataObject('u1'), DataObject('u2')
epsilon = ConstantObject('epsilon')
theta = DataObject('theta')
CD = CentralDerivative
vorticity_sq = (CD(u2, x1) - CD(u1, x2))**2 + (CD(u0, x2) - CD(u2, x0))**2 + (CD(u1, x0) - CD(u0, x1))**2

vorticity_sq = metriceq.apply_transformation(vorticity_sq)

divergence = "Eq(divergence, (KD(_i,_j)*Der(u_i, x_j)))"
divergence = einstein_eqn.expand(divergence, ndim, coordinate_symbol, substitutions, constants)

divergence = metriceq.apply_transformation(divergence)

ducros = OpenSBLIEq(theta, divergence.rhs**2 / (divergence.rhs**2 + vorticity_sq + epsilon))

# pprint(ducros)

# shock_sensor = OpenSBLIEq(theta, jameson*ducros.rhs)
shock_sensor = OpenSBLIEq(theta, ducros.rhs)

constituent.add_equations(shock_sensor)




local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}

coordinates = [DataObject('x%d' % i) for i in range(ndim)]
x, y, z = coordinates[0], coordinates[1], coordinates[2]
#dx, dy = block.deltas[0], block.deltas[1]
i,j,k = block.grid_indexes[0], block.grid_indexes[1], block.grid_indexes[2]
npy = block.ranges[1][1]
np0, np1, np2 = ConstantObject('block0np0'), ConstantObject('block0np1'), ConstantObject('block0np2')

gama = ConstantObject('gama')
minf = ConstantObject('Minf')

# Reynolds number, Mach number and free-stream temperature for the initial profile
Re, xMach, Tinf = 14000.0, 6.0, 273.15
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1')), (False, DataObject('x2'))]
n_poly_coefficients = 50

coordinate_evaluation = [DataObject('x0'), DataObject('x1'), DataObject('x2')]
initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, coordinate_evaluations=None)


# Left dirichlet
boundaries = [[0, 0] for t in range(ndim)]
direction = 0
side = 0
boundaries[direction][side] = InletPressureExtrapolateBC(direction, side)

# Right extrapolation at outlet
direction = 0
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0)

wall_const = ["Minf", "Twall"]
for con in wall_const:
	local_dict[con] = ConstantObject(con)
# Isothermal wall condition
direction = 1
side = 0
rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)
wall_eqns = [rhoE_wall]
boundaries[direction][side] = IsothermalWallBC(direction, side, wall_eqns)

# Top outlet Transfer
direction = 1
side = 1
boundaries[direction][side] = ExtrapolationBC(direction, side, order=0)


#Periodic BC on sides
direction = 2
side = 1
boundaries[direction][side] = PeriodicBC(direction, side)
direction = 2
side = 0
boundaries[direction][side] = PeriodicBC(direction, side)


block.set_block_boundaries(boundaries)

#Write restart/output file

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=2000, **kwargs)
arrays = simulation_eq.time_advance_arrays
h5.add_arrays(arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2')])

kwargs = {'iotype': "Read"}
kwargs['name'] = 'grid.h5'
h5_read = iohdf5(**kwargs)
h5_read.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2')])
block.setio([copy.deepcopy(h5), h5_read])

block.set_equations([constituent, simulation_eq, initial, metriceq])

#block.set_equations([copy.deepcopy(constituent), copy.deepcopy(simulation_eq), copy.deepcopy(metriceq), initial])

block.discretise()

## Kernel to force the hybrid scheme to use WENO over the boundaries
# Force shock sensor to 1 in the halos
kernel1 = Kernel(block, computation_name="sensor1")
kernel1.set_grid_range(block)
schemes = block.discretisation_schemes
for d in range(block.ndim):
    for sc in schemes:
        if schemes[sc].schemetype == "Spatial":
            kernel1.set_halo_range(d, 0, schemes[sc].halotype)
            kernel1.set_halo_range(d, 1, schemes[sc].halotype)
eq = block.dataobjects_to_datasets_on_block([OpenSBLIEq(DataObject('sensor'), 1.0)])
kernel1.add_equation(eq)
kernel1.update_block_datasets(block)
initial.Kernels += [kernel1]


alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
constants = ['Twall', 'Re', 'Pr', 'gama', 'Minf', 'SuthT', 'RefT', 'dt', 'niter', 'block0np0', 'block0np1','block0np2', 'Delta0block0', 'Delta1block0','Delta2block0', 'lx', 'ly', 'lz', 'ampli', 'xF', 'yF', 'F0', 'epsilon', 'ducros', 'harten']
values = ['7.02184974692', '14000.0', '0.72', '1.4', '6.0', '110.4', '273.15', '0.001', '10', '1600', '205', '468','190.0/(block0np0-1.0)', '20.0/(block0np1-1.0)', '50.0/(block0np2)', "190.0", "20.0", "50.0",'0.0006', '12.', '6.','0.02', '1.0e-6', '0.65', '0.25']
simulation_name = 'opensbli'
# if (shock_capturing_type.lower() == 'teno'):
# 	# TODO give the reference for these teno parameters
# 	# we need epsilon and TENO_CT values
# 	constants += ['eps', 'TENO_CT']
# 	values += ['1e-15']
# 	if order == 5:
# 	    values += ['1e-5']
# 	elif order == 6:
# 	    values += ['1e-7']
substitute_simulation_parameters(constants, values)
print_iteration_ops()
shutil.move('./latex_output', output_folder)
for files in os.listdir('./'):
	if files.endswith((".cpp", ".h")):
	    shutil.move(files, output_folder)

# f = h5py.File('grid.h5', 'r')
# x0, x1, x2 = f['x0'].value, f['x1'].value, f['x2'].value
# print(x1.shape)
# array = [x0, x1, x2]
# array_name = ['x0', 'x1', 'x2']
# halos = [-5, 5]
# npoints = [1600, 205, 468] # number of x,y, z points
# output_hdf5(array, array_name, halos, npoints, block)
