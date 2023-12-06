#!/usr/bin/env python
from opensbli import *
import copy
from opensbli.utilities.helperfunctions import substitute_simulation_parameters, print_iteration_ops

""" Viscous shock tube problem in 2D, conditions taken from Numerical simulation of the viscous shock tube problem
by using a high resolution monotonicity-preserving scheme. Tenaud et al (2009). doi:10.1016/j.compfluid.2008.06.008. """

simulation_parameters = {
'mu'        :   '1.0',
'gama'      :   '1.4',
'Minf'      :   '1.0',
'Pr'        :   '0.73',
'Re'        :   '200.0',
'dt'        :   '0.000005',
'niter'     :   '20000',
'block0np0'     :   '500',
'block0np1'     :   '250',
'Delta0block0'      :   '1.0/(block0np0-1)',
'Delta1block0'      :   '0.5/(block0np1-1)',
'eps'       :   '1e-15',
'TENO_CT'       :   '1e-6',
'inv_rfact0_block0'  : '1.0/Delta0block0',
'inv_rfact1_block0'  : '1.0/Delta1block0',
'lambda0_TVD'       : 'dt/Delta0block0',
}

# Define the problem
ndim = 2
# sc1 = "**{\'scheme\':\'Central\'}"
# # Define the compresible Navier-Stokes equations in Einstein notation.
# mass = "Eq(Der(rho,t), - Conservative(rhou_j,x_j,%s))" % sc1
# momentum = "Eq(Der(rhou_i,t) , -Conservative(rhou_i*u_j + KD(_i,_j)*p,x_j , %s) + Der(tau_i_j,x_j) )" % sc1
# energy = "Eq(Der(rhoE,t), - Conservative((p+rhoE)*u_j,x_j, %s) - Der(q_j,x_j) + Der(u_i*tau_i_j ,x_j) )" % sc1
# stress_tensor = "Eq(tau_i_j, (mu/Re)*(Der(u_i,x_j)+ Der(u_j,x_i) - (2/3)* KD(_i,_j)* Der(u_k,x_k)))"
# heat_flux = "Eq(q_j, (-mu/((gama-1)*Minf*Minf*Pr*Re))*Der(T,x_j))"
# # Substitutions
# substitutions = [stress_tensor, heat_flux]
# constants = ["Re", "Pr", "gama", "Minf", "mu"]
# # Define coordinate direction symbol (x) this will be x_i, x_j, x_k
# coordinate_symbol = "x"
# # Formulas for the variables used in the equations
# velocity = "Eq(u_i, rhou_i/rho)"
# pressure = "Eq(p, (gama-1)*(rhoE - rho*(1/2)*(KD(_i,_j)*u_i*u_j)))"
# speed_of_sound = "Eq(a, (gama*p/rho)**0.5)"
# temperature = "Eq(T, p*gama*Minf*Minf/(rho))"
eq = EinsteinEquation()
constants = ["Re", "Pr", "gama", "Minf", "RefT"]
NS = NS_Split('Feiereisen', ndim, constants, coordinate_symbol="x", conservative=True, viscosity='dynamic', energy_formulation='enthalpy', debug=False)
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

constituent_eqns = [velocity, pressure, speed_of_sound, temperature]
constituent = ConstituentRelations()
# Expand the constituent relations
for i, CR in enumerate(constituent_eqns):
    constituent_eqns[i] = eq.expand(CR, ndim, "x", [], constants)

for eqn in constituent_eqns:
    constituent.add_equations(eqn)

block = SimulationBlock(ndim, block_number=0)

# teno_order = 5
Avg = RoeAverage([0, 1])
# LF = LFTeno(teno_order, averaging=Avg)
schemes = {}
# schemes[LF.name] = LF
fns = 'u0 u1 T'
cent = StoreSome(4, fns)
schemes[cent.name] = cent
rk = RungeKuttaLS(3)
schemes[rk.name] = rk

local_dict = {"block": block, "GridVariable": GridVariable, "DataObject": DataObject}
# Create SimulationEquations and Constituent relations, add the expanded equations
# simulation_eq = SimulationEquations()
# constituent = ConstituentRelations()
# for eqn in base_eqns:
#     simulation_eq.add_equations(eqn)

# for eqn in constituent_eqns:
#     constituent.add_equations(eqn)

# Perform initial condition
initial = GridBasedInitialisation()
x_grid = parse_expr("Eq(GridVariable(x_grid), block.deltas[0]*block.grid_indexes[0])", local_dict=local_dict)
x0 = parse_expr("Eq(DataObject(x0), GridVariable(x_grid))", local_dict=local_dict)
x1 = parse_expr("Eq(DataObject(x1), block.deltas[1]*block.grid_indexes[1])", local_dict=local_dict)
gama = ConstantObject('gama')
local_dict['gama'] = ConstantObject('gama')
# Conditions left and right of the initial diaphram for rho, u, v, p
conditions = [(120.0, 1.2), (0, 0), (0, 0), (120.0, 1.2)]  # pressure is rho/gama, the division is in the equations below for p

rho = parse_expr("Eq(GridVariable(rho), Piecewise((%.15f, GridVariable(x_grid)<=0.5), (%.15f, True)))" % conditions[0], local_dict=local_dict)
u0 = parse_expr("Eq(GridVariable(u0), Piecewise((%.15f, GridVariable(x_grid)<=0.5), (%.15f, True)))" % conditions[1], local_dict=local_dict)
u1 = parse_expr("Eq(GridVariable(u1), Piecewise((%.15f, GridVariable(x_grid)<=0.5), (%.15f, True)))" % conditions[2], local_dict=local_dict)
p = parse_expr("Eq(GridVariable(p), Piecewise((%.15f/gama, GridVariable(x_grid)<=0.5), (%.15f/gama, True)))" % conditions[3], local_dict=local_dict)

# Construct conservative variables to set for the boundary condition.
rho_dset = parse_expr("Eq(DataObject(rho), GridVariable(rho))", local_dict=local_dict)
rhou0_dset = parse_expr("Eq(DataObject(rhou0), GridVariable(rho)*GridVariable(u0))", local_dict=local_dict)
rhou1_dset = parse_expr("Eq(DataObject(rhou1), GridVariable(rho)*GridVariable(u1))", local_dict=local_dict)
rhoE_dset = parse_expr("Eq(DataObject(rhoE), GridVariable(p)/(gama-1.0) + 0.5*GridVariable(rho)*(GridVariable(u0)**2 + GridVariable(u1)**2))", local_dict=local_dict)

initial_eqns = [x_grid, x0, x1, rho, u0, u1, p, rho_dset, rhou0_dset, rhou1_dset, rhoE_dset]
initial.add_equations(initial_eqns)

# Set 4 adiabatic walls
boundaries = [[0, 0] for t in range(ndim)]
direction, side = 0, 0
boundaries[direction][side] = AdiabaticWallBC(direction, side, scheme=ReducedAccess())
direction, side = 0, 1
boundaries[direction][side] = AdiabaticWallBC(direction, side, scheme=ReducedAccess())
direction, side = 1, 0
boundaries[direction][side] = AdiabaticWallBC(direction, side, scheme=ReducedAccess())
direction, side = 1, 1
boundaries[direction][side] = SymmetryBC(direction, side, scheme=ReducedAccess())

kwargs = {'iotype': "Write"}
h5 = iohdf5(save_every=100000, **kwargs)
h5.add_arrays(simulation_eq.time_advance_arrays)
h5.add_arrays([DataObject('x0'), DataObject('x1')])
block.setio(copy.deepcopy(h5))

sim_eq = copy.deepcopy(simulation_eq)
CR = copy.deepcopy(constituent)
block.set_block_boundaries(boundaries)
# Set equations on the block and discretise

# TVD_filter = TVDFilter(block, airfoil=False)
# block.set_equations(TVD_filter.equation_classes)

WF = WENOFilter(block, order=5, formulation='Z', flux_type='LLF', airfoil=False, optimize=False)
block.set_equations(WF.equation_classes) 

block.set_equations([CR, sim_eq, initial])
block.set_discretisation_schemes(schemes)
block.discretise()

alg = TraditionalAlgorithmRK(block)
SimulationDataType.set_datatype(Double)
OPSC(alg)
# Add the simulation constants to the OPS C code
substitute_simulation_parameters(simulation_parameters.keys(), simulation_parameters.values())
print_iteration_ops(every=10,NaN_check='rho')
