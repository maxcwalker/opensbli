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
    "niter"                : "500000", 
    "block0np0"            : "1000", 
    "block0np1"            : "200",
    'block0np2'            : "200", 
    "Delta0block0"         : "400.0/(block0np0-1)",
    "Delta1block0"         : "115.0/(block0np1-1)",
    "Delta2block0"         : "20.0/(block0np2-1)",
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
    "tripA"                : "0.0",
    "xts"                  : "50.0",
    "omega_0"              : "0.1",
    "omega_1"              : "0.2", 
    "omega_2"              : "0.4",
    "omega_3"              : "1.0", 
    "phi_0"                : "1.571",
    "phi_1"                : "3.141",
    "phi_2"                : "4.712",
    "b_f"                  : "0.002", # was 0.02
    "beta_0"               : "0.628", #was 0.31
    'kappa_TVD'             : "0.3",
}

constants = input_dict.keys()
values = input_dict.values()

#############################################################################################################################################
#																																			#
# Governing equations 																														#
#																																			#
#############################################################################################################################################

ndim = 3
# Define coordinate direction symbol (x) this will be x_i, x_j, x_k
coordinate_symbol = "x"
eq = EinsteinEquation()

# Define the compresible Navier-Stokes equations in Einstein notation.
NS = NS_Split('KGP', ndim, constants, coordinate_symbol="x", conservative=True, viscosity='dynamic', debug=False)
mass, momentum, energy = NS.mass, NS.momentum, NS.energy
# Expand the simulation equations, for this create a simulation equations class
simulation_eq = SimulationEquations()
simulation_eq.add_equations(mass)
simulation_eq.add_equations(momentum)
simulation_eq.add_equations(energy)

# Formulas for the variables used in the equations
velocity = "Eq(u_i, rhou_i/rho)"
pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
viscosity = "Eq(mu, (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT)))"

constituent_eqns = [velocity, pressure, speed_of_sound, temperature, viscosity]
constituent = ConstituentRelations()
# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, "x", [], constants)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

# Create a simulationblock
block = SimulationBlock(ndim, block_number=0)

# added metric class to genenerate curvilinear transformation
metriceq = MetricsEquation()
metriceq.generate_transformations(ndim, coordinate_symbol, [(True, True), (True, True),(False,False)], 2)
simulation_eq.apply_metrics(metriceq)

#############################################################################################################################################
#																																			#
# Schemes																																	#
#																																			#
#############################################################################################################################################

schemes = {}
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

#############################################################################################################################################
#																																			#
# Forcing																													                #
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

# current_iter = symbols('current_iter', **{'cls': ConstantObject})

current_iter = Globalvariable("iter", integer=True)

# Coordinate arrays
x0, z0 = DataObject('x0'), DataObject('x2')

conditional_expressions = []
trip_eqn = Amp*(exp(-bf*(x0-xts)**2))*(sin(omega0*dt*current_iter)
                                        +sin(omega1*dt*current_iter+phi0)
                                        +sin(omega2*dt*current_iter+phi1)
                                        +sin(omega3*dt*current_iter+phi2)
                                        )*sin(b0*z0)

wall_normal_velocity = OpenSBLIEq(DataObject('rhou1'), DataObject('rho')*trip_eqn)

rhoE_wall = parse_expr("Eq(DataObject(rhoE), DataObject(rho)*Twall/(gama*(gama-1.0)*Minf**2.0))", local_dict=local_dict)

wall_eqns = [rhoE_wall]
wall_energy = [rhoE_wall]

# wall_eqns = [wall_normal_velocity, rhoE_wall]
# wall_energy = [rhoE_wall]
direction = 1
side = 0
# ForcingStripBC(direction, side, v, wall_eqns)
boundaries[direction][side] = ForcingStripBC(direction, side,  wall_normal_velocity, wall_eqns, scheme=ReducedAccess())

# Top dirichlet shock generator condition
direction = 1
side = 1
boundaries[direction][side] = ZeroGradientOutletBC(1, 1)

# Spanwise periodic
direction = 2
for side in [0,1]:
    boundaries[direction][side] = PeriodicBC(direction, side)

block.set_block_boundaries(boundaries)

#############################################################################################################################################
#																																			#
# Grid and intial conditions																												#
#																																			#
#############################################################################################################################################

# Perform initial condition
# Reynolds number, Mach number and free-stream temperature for the initial profile
Re, xMach, Tinf,Twall = 4000.0, 4.0, 439.0, 1.37
## Ensure the grid size passed to the initialisation routine matches the grid sizes used in the simulation parameters
polynomial_directions = [(False, DataObject('x0')), (True, DataObject('x1')), (False, DataObject('x2'))]
n_poly_coefficients = 50
grid_const = ["L", "H", "a", "b"]
for con in grid_const:
    local_dict[con] = ConstantObject(con)
gridx0 = parse_expr("Eq(DataObject(x0), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
gridx1 = parse_expr("Eq(DataObject(x1), H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2) + (H - H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2))*sinh(b*block.deltas[1]*block.grid_indexes[1]/H)/sinh(b))", local_dict=local_dict)
gridx2 = parse_expr("Eq(DataObject(x2), block.deltas[2]*block.grid_indexes[2])", local_dict=local_dict)
coordinate_evaluation = [gridx0, gridx1, gridx2]
# initial = Initialise_Katzer(polynomial_directions, n_poly_coefficients,  Re, xMach, Tinf, coordinate_evaluation)
initial = Initialise_Flatplate(polynomial_directions, n_poly_coefficients, Re, xMach, Tinf, Twall, coordinate_evaluations=coordinate_evaluation)
#############################################################################################################################################
#																																			#
# Data i/o 																																	#
#																																			#
#############################################################################################################################################

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=10000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1'), DataObject('x2'), DataObject('D11')])
h5.add_arrays([DataObject('p')]) # save pressure
h5.add_arrays([])
h5.add_arrays([DataObject('kappa')])
block.setio(h5)

# Set equations on the block and discretise
block.set_equations([constituent, simulation_eq, initial, metriceq])

TVD_filter = TVDFilter(block, airfoil=False, optimize=True, metrics=metriceq)
block.set_equations(TVD_filter.equation_classes)

block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
substitute_simulation_parameters(constants, values)
print_iteration_ops(every=1000, NaN_check='rho_B0')
