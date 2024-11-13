#!/usr/bin/env python
# --------------------------------------------------------------------------------------------------------------------------------------------
# fpwigg3.py 
#               2D flat plate M6 adiabatic wiggly wall (Re_deltastar0 = 8200)
#
# author. 
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------
from opensbli import *
import copy
from opensbli.utilities.flat_init import Initialise_Flatplate 
from opensbli.utilities.helperfunctions import substitute_simulation_parameters
from sympy import sin, cos, sinh, tanh, exp, pi, log
import numpy as np

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# define equations		
# 
#  should i include time step and iteration number here? food for thought
#           time_step, niterations = 0.01, 1200000
# 																																		
# --------------------------------------------------------------------------------------------------------------------------------------------
# number of simulation dimensions
ndim = 2
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = 'x'

# split scheme, kgp or feiereisen
split_scheme = 'normal'

sc1 = "**{\'scheme\':\'Weno\'}"

# define compressible navier stokes equations in einstein notation and curvilinear form
mass     = 'Eq(Der(rho,t)    , - Conservative(detJ *  rho*U_j              , xi_j, %s)/detJ)' % sc1
momentum = 'Eq(Der(rhou_i,t) , - Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j, %s)/detJ)' % sc1
energy   = 'Eq(Der(rhoE,t)   , - Conservative(detJ * (p+rhoE)*U_j          , xi_j, %s)/detJ)' % sc1

# sc1 = "**{\'scheme\':\'Weno\'}"
# a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
# mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
# a        = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1
# momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
# a        = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
# energy    = "Eq(Der(rhoE,t), - %s/detJ)" % (a)

constants = ['Re', 'Pr', 'gama', 'Minf', 'SuthT', 'RefT']

# kennedy gruber scheme from splitforms
# NS = NS_Split('KGP', ndim, constants, coordinate_symbol='x', conservative=True, viscosity='dynamic', energy_formulation='enthalpy', debug=False)
# mass, momentum, energy = NS.mass, NS.momentum, NS.energy

# substitutions 
stress_tensor = 'Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j) + Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))'
heat_flux     = 'Eq(q_j    , (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))'

substitutions = [stress_tensor, heat_flux]

# constituent equations
velocity       = 'Eq(u_i , rhou_i/rho)'
pressure       = 'Eq(p   , (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))'
speed_of_sound = 'Eq(a   , (gama*p/rho)**0.5)'
temperature    = 'Eq(T   , p*gama*Minf*Minf/(rho))'

# viscocity sutherland's law
viscosity      = 'Eq(mu  , (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))'

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# add equations to the kernels																													
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# create metrics before the scheme selection
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True)], 2)

# instantiate insteinEquation class for expanding the einstein indices in the equations
eq = EinsteinEquation()

# viscous momentum and energy components
visc_momentum = 'Eq(Der(rhou_i, t), Der(tau_i_j,x_j))'
visc_momentum = eq.expand(visc_momentum, ndim, coordinate_symbol, substitutions, constants)
visc_momentum = [metriceq.apply_transformation(v) for v in visc_momentum]

visc_energy   = 'Eq(Der(rhoE, t), -Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j))'
visc_energy   = eq.expand(visc_energy, ndim, coordinate_symbol, substitutions, constants)
visc_energy   = metriceq.apply_transformation(visc_energy)

# create an optional substitutions dictionary, this will be used to modify the equations when parsed
optional_subs_dict = metriceq.metric_subs
eq.optional_subs_dict = optional_subs_dict

metric_vel  = 'Eq(U_i, D_i_j*u_j)'

# new coordinate symbol for cylindrical coordinates
coordinate_symbol = 'xi'

base_eqns = [mass, momentum, energy]
constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity, metric_vel]
 
# expand the base equations
for i, base in enumerate(base_eqns):
    base_eqns[i] = eq.expand(base, ndim, coordinate_symbol, substitutions, constants)
    if base==momentum:
        for no, b in enumerate(base_eqns[i]):
            base_eqns[i][no] = Eq(base_eqns[i][no].lhs, base_eqns[i][no].rhs + visc_momentum[no].rhs)
    else:
        if base==energy:
            base_eqns[i] = Eq(base_eqns[i].lhs, base_eqns[i].rhs + visc_energy.rhs)

# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, coordinate_symbol, substitutions, constants)

# block = SimulationBlock(ndim, block_number=0)

# Create SimulationEquations and Constituent relations, add the expanded equations
simulation_eq = SimulationEquations()
constituent = ConstituentRelations()

for eqn in base_eqns:
    simulation_eq.add_equations(eqn)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# reset coordinate symbol
coordinate_symbol = "xi"

# Grid is stretched normal to the wall
simulation_eq.apply_metrics(metriceq)

# set the discretisation schemes to be used (a python dictionary)
block = SimulationBlock(ndim, block_number=0)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# create a schemes dictionary to be used for discretisation																													
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# Create a schemes dictionary to be used for discretisation
schemes = {}
weno_order          = 5
# averaging procedure to be used for the eigen system evaluation
Avg                 = SimpleAverage([0, 1])
# LLF scheme
LF                  = LFWeno(weno_order, formulation='Z', averaging=Avg)
# add to schemes
schemes[LF.name]    = LF

# Central scheme for spatial discretisation and add to the schemes dictionary
# Low storage optimisation for the central scheme
fns                 = 'u0 u1 T'
cent                = StoreSome(4,fns)
# cent = Central(4)
schemes[cent.name]  = cent
# RungeKutta scheme for temporal discretisation and add to the schemes dictionary
rk                  = RungeKuttaLS(3)
schemes[rk.name]    = rk

# Set the discretisation schemes to be used (a python dictionary)
block.set_discretisation_schemes(schemes)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# grid generation and initial conditions																															
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

local_dict = {'block': block, 'GridVariable': GridVariable, 'DataObject': DataObject}

# perform initial condition
# reynolds number, mach number and free-stream temperature for the initial profile
Re, xMach, Tinf, Twall = 8200.0, 6.0, 288.0, 7.021

# ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1'))]
n_poly_coefficients = 50
grid_const = ['Lx1', 'by']
for con in grid_const:
    local_dict[con] = ConstantObject(con)

gridx0 = parse_expr('Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])', local_dict=local_dict)
gridx1 = parse_expr('Eq(DataObject(x1), 2*pi/40 * Lx1*sinh(by*block.deltas[1]*block.grid_indexes[1]/Lx1)/sinh(by))', local_dict=local_dict)
# gridx1 = parse_expr("Eq(DataObject(x1), (Lx1/100)*0.237*(1+tanh(block.deltas[0]*block.grid_indexes[0])*sin(block.deltas[0]*block.grid_indexes[0]*0.17))+(Lx1-(Lx1/100)*0.5*(1+tanh(block.deltas[0]*block.grid_indexes[0])*sin(block.deltas[0]*block.grid_indexes[0]*0.17)))*(sinh(by*block.deltas[1]*block.grid_indexes[1]/Lx1)/sinh(by)))", local_dict=local_dict)

# gridx1 = parse_expr("Eq(DataObject(x1), (Lx1/100.0)*(0.237*(1+tanh(block.deltas[0]*block.grid_indexes[0] - 100.0))* sin(block.deltas[0]*block.grid_indexes[0]*2*pi/40)) + (Lx1 - (Lx1/100.0)*(0.237*(1+tanh(block.deltas[0]*block.grid_indexes[0] - 100.0))* sin(block.deltas[0]*block.grid_indexes[0]*2*pi/40)))*sinh((by*block.deltas[1]*block.grid_indexes[1])/Lx1)/sinh(by))", local_dict=local_dict)



coordinate_evaluation = [gridx0, gridx1]

# intiialise flat plate compressible similarity equations, for isothermal wall, add Twall = Twall into the function
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, coordinate_evaluations=coordinate_evaluation)

# --------------------------------------------------------------------------------------------------------------------------------------------																																			
# 
# boundary conditions		
#               (0,0) - inflow
#               (0,1) - outflow
#               (1,0) - wall 
#               (1,1) - farfield																																																												
#
#  --------------------------------------------------------------------------------------------------------------------------------------------

boundaries = []

boundaries += [InletTransferBC(0, 0, scheme=Carpenter())]
boundaries += [ExtrapolationBC(0, 1, order=0, scheme=Carpenter())]

wall_const = ['Minf', 'Twall']
for con in wall_const:
    local_dict[con] = ConstantObject(con)

# isothermal wall condition
rhoE_wall = parse_expr('Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))', local_dict=local_dict)
wall_eqns = [rhoE_wall]

# boundaries += [IsothermalWallBC(1, 0, wall_eqns, scheme=Carpenter())]
boundaries += [ZeroGradientOutletBC(1, 1)]

# forcing strip wall implementation
uref, dt = symbols('uref dt')
current_iter = Globalvariable('iter', integer=True)
x0 = DataObject('x0')
t = dt*current_iter
trip_eqn = exp(-((x0 - 20))**2.0/ ( 0.425*2/(0.1)))  * 1e-3 * (sin(2*np.pi*0.12 * t )) 

wall_normal_velocity = OpenSBLIEq(DataObject('rhou1'), (DataObject('rho'))*trip_eqn)
boundaries += [ForcingStripBC(1, 0,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())]

block.set_block_boundaries(boundaries)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# read/write definitions and output arrays																												
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# monitor points
# set monitor points
# monitor points
indices = [(i, 0) for i in range(110, 500*4, int(500*4/400))]
# Create the list of 'p' repeated to match the number of tuples in 'indices'
arrays = ['p' for _ in indices]  # The same length as indices, filled with 'p'
arrays = [block.location_dataset('%s' % dset) for dset in arrays]


SM = SimulationMonitor(arrays, indices, block, print_frequency=100, fp_precision=12, output_file='disrflat_baseflow.log')

# write hdf5 files
kwargs = {'iotype': 'Write'}
h5 = iohdf5(save_every=10000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('D11')])
block.setio(h5)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# add to opensbli 																											
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq])

# # filtering
# j = block.grid_indexes[1]
# grid_condition = j >= 220
# BF = BinomialFilter(block, order=6, directions=[0,1], grid_condition=grid_condition, sigma=0.2)
# block.set_equations(BF.equation_classes)

WF = WENOFilter(block, order=5, formulation='Z', flux_type='LLF', airfoil=False, metrics=metriceq)
block.set_equations(WF.equation_classes) 

# set the equations to be solved on the block
block.discretise()

alg = TraditionalAlgorithmRK(block, simulation_monitor=SM)
SimulationDataType.set_datatype(Double)
OPSC(alg)

# --------------------------------------------------------------------------------------------------------------------------------------------
#																																			
# define constants																											
#																																			
# --------------------------------------------------------------------------------------------------------------------------------------------

# physical constants
physical_constants   = ['gama',     'Minf',    'Pr',    'Re',    'Twall', 'SuthT',     'RefT']
physical_values      = [ '1.4', str(xMach),  '0.72', str(Re), str(Twall), '110.4',  str(Tinf)]
substitute_simulation_parameters(physical_constants, physical_values)

# numerical constants
numerical_constants  = [  'dt',   'niter', 'block0np0', 'block0np1',         'Delta0block0',          'Delta1block0',    'Lx1',   'by']
numerical_values     = ['0.01', '1200000',     '500*4',     '250*2',  '600.0/(block0np0-1)',   '100.0/(block0np1-1)',  '100.0',  '5.0']
substitute_simulation_parameters(numerical_constants, numerical_values)

# weno constants
weno_constants = [ 'inv_rfact0_block0','inv_rfact1_block0', 'epsilon']
weno_values    = [  '1.0/Delta0block0', '1.0/Delta1block0', '1.0e-30']
substitute_simulation_parameters(weno_constants, weno_values)

print_iteration_ops(every=250000, NaN_check='rho_B0')