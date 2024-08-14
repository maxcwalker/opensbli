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
    "dt"                   : "0.01", 
    "niter"                : "1", 
    "stat_frequency"       : "200",
    "block0np0"            : "100", 
    "block0np1"            : "100",
    'block0np2'            : "100", 
    "Delta0block0"         : "600.0/(block0np0-1)",
    "Delta1block0"         : "300.0/(block0np1-1)",
    "Delta2block0"         : "150.0/(block0np2-1)",
    "SuthT"                : "110.4",
    "RefT"                 : "439.0",
    "eps"                  : "1e-15",
    "TENO_CT"              : "1e-5",
    "teno_a1"              : "10.5",
    "teno_a2"              : "4.5",
    "epsilon"              : "1.0e-30",
    "tripA"                : "0.0",
    "xts"                  : "225.0",
    "omega_0"              : "0.1",
    "omega_1"              : "0.2", 
    "omega_2"              : "0.4",
    "omega_3"              : "1.0", 
    "phi_0"                : "1.571",
    "phi_1"                : "3.141",
    "phi_2"                : "4.712",
    "b_f"                  : "0.002", # was 0.02
    "beta_0"               : "2.513272", #was 0.31
    'kappa_TVD'            : "0.3",
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#																																			#
# Governing equations 																														#
#																																			#
#############################################################################################################################################

weno = True
teno = False
TVD = False
slices = False
stats = False
monitor = False

conservative=True
ndim = 3
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True),(False,False)], 2)

if weno or teno:
    if weno:
       sc1 = "**{\'scheme\':\'Weno\'}"
    else:
        sc1 = "**{\'scheme\':\'Teno\'}" 
    # Define the compresible Navier-Stokes equations in Einstein notation.
    a = "Conservative(detJ * rho*U_j,xi_j,%s)" % sc1
    mass = "Eq(Der(rho,t), - %s/detJ)" % (a)
    a = "Conservative(detJ * (rhou_i*U_j + p*D_j_i), xi_j , %s)" % sc1
    momentum = "Eq(Der(rhou_i,t) , -  %s/detJ)" % (a)
    a = "Conservative(detJ * (p+rhoE)*U_j,xi_j, %s)" % sc1
    energy = "Eq(Der(rhoE,t), - %s/detJ)" % (a)
    # auxilliary equations for NS
    stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
    heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"
else:
    NS = NS_Split('KGP', ndim, constants, coordinate_symbol=coordinate_symbol, conservative=conservative, viscosity='dynamic', energy_formulation='enthalpy', debug=False)
    mass, momentum, energy = NS.mass, NS.momentum, NS.energy
    # Expand the simulation equations, for this create a simulation equations class
    simulation_eq = SimulationEquations()
    simulation_eq.add_equations(mass)
    simulation_eq.add_equations(momentum)
    simulation_eq.add_equations(energy)


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
Avg = RoeAverage([0, 1])
if teno or weno:
    if teno:
        teno_order = 6
        LF = LFTeno(teno_order, averaging=Avg)
    else:
        weno_order = 5
        LF = LFWeno(weno_order, formulation='Z', averaging=Avg)

schemes[LF.name] = LF

fns = 'u0 u1 u2 T'
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
# boundaries[direction][side] = IsothermalWallBC(direction, 0, wall_eqns)

#############################################################################################################################################
#																																			#
#   Forcing		    																											            #
#																																			#
#############################################################################################################################################

wall_const = ['tripA', 'xts', 'dt', 'omega_0', 'omega_1', 'omega_2', 'omega_3', 'phi_0', 'phi_1', 'phi_2','k_0', 'b_f', 'beta_0']
for con in wall_const:
    local_dict[con] = ConstantObject(con)

Amp, xts = symbols('tripA xts', **{'cls':ConstantObject})
dt, omega0, omega1, omega2, omega3, phi0, phi1, phi2 = symbols('dt omega_0 omega_1 omega_2 omega_3 phi_0 phi_1 phi_2', **{'cls': ConstantObject})
# Spatial Modes
bf = symbols('b_f', **{'cls': ConstantObject})
b0 = symbols('beta_0', **{'cls': ConstantObject})
current_iter = Globalvariable("iter", integer=True)
# Coordinate arrays
x0, z0 = DataObject('x0'), DataObject('x2')

conditional_expressions = []
trip_eqn = Amp*(exp(-bf*(x0-xts)**2))*(sin(omega0*dt*current_iter)
                                        )*sin(b0*z0)

wall_normal_velocity = OpenSBLIEq(DataObject('rhou1'), DataObject('rho')*trip_eqn)

direction = 1
side = 0
boundaries[direction][side] = ForcingStripBC(direction, side,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())
# boundaries[direction][side] = IsothermalWallBC(direction, 0, wall_eqns)
# Top dirichlet shock generator condition
direction = 1
side = 1
boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

#periodic
direction = 2
for side in [0,1]:
    boundaries[direction][side] = PeriodicBC(direction, side)


block.set_block_boundaries(boundaries)

# Monitor points - indexing is (x,y,z)
if monitor:
    # Nx, Nz, L = symbols('block0np0 block0np2 L', **{'cls': ConstantObject})
    Nx, Nz, L = 2000,200, 400.0
    arrays = ['p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p','p']
    arrays += ['rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0', 'rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0','rhou0']
    arrays += ['rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2','rhou2']
    arrays += ['rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2', 'rhou2']
    arrays = [block.location_dataset('%s' % dset) for dset in arrays]
    indices = [(int(50 * Nx/L), 0, Nz/2), (int(90 * Nx/L), 0, Nz/2), (int(100 * Nx/L), 0, Nz/2), (int(110 * Nx/L), 0, Nz/2), (int(120 * Nx/L), 0, Nz/2), (int(130 * Nx/L), 0, Nz/2), (int(140 * Nx/L), 0, Nz/2), (int(150 * Nx/L), 0, Nz/2), (int(160 * Nx/L), 0, Nz/2), (int(170 * Nx/L), 0, Nz/2), (int(180 * Nx/L), 0, Nz/2), (int(185 * Nx/L), 0, Nz/2), (int(190 * Nx/L), 0, Nz/2), (int(195 * Nx/L), 0, Nz/2), (int(200 * Nx/L), 0, Nz/2), (int(205 * Nx/L), 0, Nz/2), (int(210 * Nx/L), 0, Nz/2), (int(215 * Nx/L), 0, Nz/2), (int(220 * Nx/L), 0, Nz/2), (int(230 * Nx/L), 0, Nz/2), (int(240 * Nx/L), 0, Nz/2),(int(250 * Nx/L), 0, Nz/2), (int(260 * Nx/L), 0, Nz/2), (int(270 * Nx/L), 0, Nz/2),(int(280 * Nx/L), 0, Nz/2),(int(290 * Nx/L), 0, Nz/2), (int(300 * Nx/L), 0, Nz/2), (int(310 * Nx/L), 0, Nz/2), (int(320 * Nx/L), 0, Nz/2), (int(330 * Nx/L), 0, Nz/2), (int(340 * Nx/L), 0, Nz/2), (int(350 * Nx/L), 0, Nz/2), (int(360 * Nx/L), 0, Nz/2), (int(370 * Nx/L), 0, Nz/2),(int(380 * Nx/L), 0, Nz/2), (int(390 * Nx/L), 0, Nz/2),(int(399 * Nx/L), 0, Nz/2),\
               (int(50 * Nx/L), 1, Nz/2), (int(90 * Nx/L), 1, Nz/2), (int(100 * Nx/L), 1, Nz/2), (int(110 * Nx/L), 1, Nz/2), (int(120 * Nx/L), 1, Nz/2), (int(130 * Nx/L), 1, Nz/2), (int(140 * Nx/L), 1, Nz/2), (int(150 * Nx/L), 1, Nz/2), (int(160 * Nx/L), 1, Nz/2), (int(170 * Nx/L), 1, Nz/2), (int(180 * Nx/L), 1, Nz/2), (int(185 * Nx/L), 1, Nz/2), (int(190 * Nx/L), 1, Nz/2), (int(195 * Nx/L), 1, Nz/2), (int(200 * Nx/L), 1, Nz/2), (int(205 * Nx/L), 1, Nz/2), (int(210 * Nx/L), 1, Nz/2), (int(215 * Nx/L), 1, Nz/2), (int(220 * Nx/L), 1, Nz/2), (int(230 * Nx/L), 1, Nz/2), (int(240 * Nx/L), 1, Nz/2),(int(250 * Nx/L), 1, Nz/2), (int(260 * Nx/L), 1, Nz/2), (int(270 * Nx/L), 1, Nz/2),(int(280 * Nx/L), 1, Nz/2),(int(290 * Nx/L), 1, Nz/2), (int(300 * Nx/L), 1, Nz/2), (int(310 * Nx/L), 1, Nz/2), (int(320 * Nx/L), 1, Nz/2), (int(330 * Nx/L), 1, Nz/2), (int(340 * Nx/L), 1, Nz/2), (int(350 * Nx/L), 1, Nz/2), (int(360 * Nx/L), 1, Nz/2), (int(370 * Nx/L), 1, Nz/2),(int(380 * Nx/L), 1, Nz/2), (int(390 * Nx/L), 1, Nz/2),(int(399 * Nx/L), 1, Nz/2),\
               (int(50 * Nx/L), 15, Nz/2), (int(90 * Nx/L), 15, Nz/2), (int(100 * Nx/L), 15, Nz/2), (int(110 * Nx/L), 15, Nz/2), (int(120 * Nx/L), 15, Nz/2), (int(130 * Nx/L), 15, Nz/2), (int(140 * Nx/L), 15, Nz/2), (int(150 * Nx/L), 15, Nz/2), (int(160 * Nx/L), 15, Nz/2), (int(170 * Nx/L), 15, Nz/2), (int(180 * Nx/L), 15, Nz/2), (int(185 * Nx/L), 15, Nz/2), (int(190 * Nx/L), 15, Nz/2), (int(195 * Nx/L), 15, Nz/2), (int(200 * Nx/L), 15, Nz/2), (int(205 * Nx/L), 15, Nz/2), (int(210 * Nx/L), 15, Nz/2), (int(215 * Nx/L), 15, Nz/2), (int(220 * Nx/L), 15, Nz/2), (int(230 * Nx/L), 15, Nz/2), (int(240 * Nx/L), 15, Nz/2),(int(250 * Nx/L), 15, Nz/2), (int(260 * Nx/L), 15, Nz/2), (int(270 * Nx/L), 15, Nz/2),(int(280 * Nx/L), 15, Nz/2),(int(290 * Nx/L), 15, Nz/2), (int(300 * Nx/L), 15, Nz/2), (int(310 * Nx/L), 15, Nz/2), (int(320 * Nx/L), 15, Nz/2), (int(330 * Nx/L), 15, Nz/2), (int(340 * Nx/L), 15, Nz/2), (int(350 * Nx/L), 15, Nz/2), (int(360 * Nx/L), 15, Nz/2), (int(370 * Nx/L), 15, Nz/2),(int(380 * Nx/L), 15, Nz/2), (int(390 * Nx/L), 15, Nz/2),(int(399 * Nx/L), 15, Nz/2),\
                (int(150 * Nx/L), 15, 20), (int(150 * Nx/L), 15, 40),(int(150 * Nx/L), 15, 60),(int(150 * Nx/L), 15, 80),(int(150 * Nx/L), 15, 100),(int(150 * Nx/L), 15, 120),(int(150 * Nx/L), 15, 140),(int(150 * Nx/L), 15, 160),(int(150 * Nx/L), 15, 180),(int(150 * Nx/L), 15, 20),(int(150 * Nx/L), 15, 200)]
    SM = SimulationMonitor(arrays, indices, block, print_frequency=20, fp_precision=12, output_file='monitor.log')

#############################################################################################################################################
#																																			#
# Grid and intial conditions																												#
#																																			#
#############################################################################################################################################
# Read in the grid file
kwargs = {'iotype': "Read"}
x,y,z = symbols("x0, x1 x2", **{'cls':DataObject})
grid_hdf5 = iohdf5(**kwargs)
grid_hdf5.add_arrays([x, y, z])
# Re, xMach, Tinf,Twall = symbols('Re Minf RefT Twall', **{'cls': ConstantObject})
Re, xMach, Tinf,Twall = 4000.0, 4.0, 439.0, 1.37
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1')), (False, DataObject('x2'))]
n_poly_coefficients = 50
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, Twall)
# initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients,  Re, xMach, Tinf)

#############################################################################################################################################
#																																			#
# Data i/o 																																	#
#																																			#
#############################################################################################################################################
#grouping conserved variables into 1 vector
q_vector = flatten(simulation_eq.time_advance_arrays)
#   Stats    #
if stats:
    from airfoil_stats import favre_averaged_stats
    stat_equation_classes, stats_arrays = favre_averaged_stats(ndim, q_vector, conservative=True)
else:
    stat_equation_classes, stats_arrays = [], []

# Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq] + stat_equation_classes)

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=100000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2'), DataObject('D11')])
h5.add_arrays([DataObject('p')]) # save pressure
if stats:
    kwargs = {'iotype': "Write", 'name': "stats_output.h5"}
    stats_hdf5 = iohdf5(arrays=stats_arrays, **kwargs)
    block.setio([grid_hdf5, h5, stats_hdf5])
else:
    block.setio([grid_hdf5, h5])

if TVD:
    TVD_filter = TVDFilter(block, airfoil=False, optimize=True, metrics=metriceq)
    block.set_equations(TVD_filter.equation_classes)

##################################################################################################################																															
#              Slicing																								 #																																									
##################################################################################################################

if slices:
    # Add grid coordinates to the slices, once at the start of the simulation
    grid_slice_hdf5 = iohdf5_slices(**{'iotype': "Init"})
    coords = [([DataObject('x0'), DataObject('x2')], 1, 1), ([DataObject('x0'), DataObject('x2')], 1, 1),\
              ([DataObject('x2'), DataObject('x1')], 0, int(50 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(90 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(100 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(110 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(125 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(150 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(160 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(170 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(180 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(190 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(200 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(210 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(220 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(230 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(240 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(250 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(275 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(300 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(310 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(325 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0,int(350 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(375 * Nx/L)), ([DataObject('x2'), DataObject('x1')], 0, int(390 * Nx/L)),([DataObject('x2'), DataObject('x1')], 0, int(395 * Nx/L)),\
              ([DataObject('x0'), DataObject('x2')], 2, 'block0np2/2')] # q vector, x-z, j=1 plane, # q vector, x-y, z=Lz/2 plane
    grid_slice_hdf5.add_slices(coords)
    # Q vector slices written out in time
    slices_hdf5 = iohdf5_slices(save_every= 2500, **{'iotype': "Write"})
    # Arrays, direction, index
    #plan contours
    slices = [(q_vector, 1, 1)] # conserved variables, plan view, j=1
    slices += [(q_vector, 1, 20)] # conserved variables, plan view, j=10

    #span contours
    slices += [(q_vector, 0, int(50 * Nx/L))]
    slices += [(q_vector, 0, int(90 * Nx/L))]
    slices += [(q_vector, 0, int(100 * Nx/L))]
    slices += [(q_vector, 0, int(110 * Nx/L))]
    slices += [(q_vector, 0, int(125 * Nx/L))]
    slices += [(q_vector, 0, int(150 * Nx/L))]
    slices += [(q_vector, 0, int(160 * Nx/L))]
    slices += [(q_vector, 0, int(170 * Nx/L))] 
    slices += [(q_vector, 0, int(180 * Nx/L))] 
    slices += [(q_vector, 0, int(190 * Nx/L))]
    slices += [(q_vector, 0, int(200 * Nx/L))]
    slices += [(q_vector, 0, int(210 * Nx/L))]
    slices += [(q_vector, 0, int(220 * Nx/L))]
    slices += [(q_vector, 0, int(230 * Nx/L))]
    slices += [(q_vector, 0, int(240 * Nx/L))]
    slices += [(q_vector, 0, int(250 * Nx/L))]
    slices += [(q_vector, 0, int(275 * Nx/L))]
    slices += [(q_vector, 0, int(300 * Nx/L))]
    slices += [(q_vector, 0, int(310 * Nx/L))]
    slices += [(q_vector, 0, int(325 * Nx/L))]
    slices += [(q_vector, 0, int(350 * Nx/L))]
    slices += [(q_vector, 0, int(375 * Nx/L))]
    slices += [(q_vector, 0, int(390 * Nx/L))]
    slices += [(q_vector, 0, int(395 * Nx/L))]

    #slide contours
    slices += [(q_vector, 2, 'block0np2/2')] # q vector, x-y, z=Lz/2 plane

    slices_hdf5.add_slices(slices)
    block.setio([grid_slice_hdf5, slices_hdf5])

block.discretise()


if monitor:
    alg = TraditionalAlgorithmRK(block, simulation_monitor=SM)
else:
    alg = TraditionalAlgorithmRK(block)

SimulationDataType.set_datatype(Double)
OPSC(alg)

substitute_simulation_parameters(constants, values)
print_iteration_ops(every=25000, NaN_check='rho_B0')
