#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include "constants.h"
#define OPS_3D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
#include "io.h"
#include "reductions.h"
FILE *f0 = fopen("block0_TGV.log", "a");
int main(int argc, char **argv) 
{
// Set restart to 1 to restart the simulation from HDF5 file
restart = 0;
// User defined constant values
block0np0 = 64;
block0np1 = 64;
block0np2 = 64;
Delta0block0 = 2*M_PI/block0np0;
Delta1block0 = 2*M_PI/block0np1;
Delta2block0 = 2*M_PI/block0np2;
niter = 40000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.0005;
write_output_file = 10000;
HDF5_timing = 0;
gama = 1.4;
Minf = 1.25;
Re = 1600.0;
Pr = 0.71;
delta_TVD = 0.500000000000000;
eps_TVD = 1.00000000000000e-8;
kappa_TVD = 0.05;
gamma_m1 = -1 + gama;
inv2Delta0block0 = 1.0/(Delta0block0*Delta0block0);
inv2Delta1block0 = 1.0/(Delta1block0*Delta1block0);
inv2Delta2block0 = 1.0/(Delta2block0*Delta2block0);
inv2Minf = 1.0/(Minf*Minf);
invDelta0block0 = 1.0/(Delta0block0);
invDelta1block0 = 1.0/(Delta1block0);
invDelta2block0 = 1.0/(Delta2block0);
invPr = 1.0/(Pr);
invRe = 1.0/(Re);
inv_gamma_m1 = 1.0/((-1 + gama));
invdelta_TVD = 1.0/(delta_TVD);
invgamma_m1 = 1.0/(gamma_m1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("Delta2block0" , 1, "double", &Delta2block0);
ops_decl_const("HDF5_timing" , 1, "int", &HDF5_timing);
ops_decl_const("Minf" , 1, "double", &Minf);
ops_decl_const("Pr" , 1, "double", &Pr);
ops_decl_const("Re" , 1, "double", &Re);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("block0np1" , 1, "int", &block0np1);
ops_decl_const("block0np2" , 1, "int", &block0np2);
ops_decl_const("delta_TVD" , 1, "double", &delta_TVD);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("eps_TVD" , 1, "double", &eps_TVD);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("inv2Delta0block0" , 1, "double", &inv2Delta0block0);
ops_decl_const("inv2Delta1block0" , 1, "double", &inv2Delta1block0);
ops_decl_const("inv2Delta2block0" , 1, "double", &inv2Delta2block0);
ops_decl_const("inv2Minf" , 1, "double", &inv2Minf);
ops_decl_const("invDelta0block0" , 1, "double", &invDelta0block0);
ops_decl_const("invDelta1block0" , 1, "double", &invDelta1block0);
ops_decl_const("invDelta2block0" , 1, "double", &invDelta2block0);
ops_decl_const("invPr" , 1, "double", &invPr);
ops_decl_const("invRe" , 1, "double", &invRe);
ops_decl_const("inv_gamma_m1" , 1, "double", &inv_gamma_m1);
ops_decl_const("invdelta_TVD" , 1, "double", &invdelta_TVD);
ops_decl_const("invgamma_m1" , 1, "double", &invgamma_m1);
ops_decl_const("kappa_TVD" , 1, "double", &kappa_TVD);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
ops_decl_const("write_output_file" , 1, "int", &write_output_file);
// Initializing OPS 
ops_init(argc,argv,2);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(3, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
#include "stencils.h"
// Define and declare OPS reduction handles
double enstrophy_dissipation_B0_out = 0.0;
ops_reduction enstrophy_dissipation_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_enstrophy_dissipation_B0");
double KE_B0_out = 0.0;
ops_reduction KE_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_KE_B0");
double dilatation_dissipation_B0_out = 0.0;
ops_reduction dilatation_dissipation_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_dilatation_dissipation_B0");
double rhom_B0_out = 0.0;
ops_reduction rhom_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_rhom_B0");
#include "bc_exchanges.h"
// Init OPS partition
double partition_start0, elapsed_partition_start0, partition_end0, elapsed_partition_end0;
ops_timers(&partition_start0, &elapsed_partition_start0);
ops_partition("");
ops_timers(&partition_end0, &elapsed_partition_end0);
ops_printf("-----------------------------------------\n MPI partition and reading input file time: %lf\n -----------------------------------------\n", elapsed_partition_end0-elapsed_partition_start0);
fflush(stdout);

// Restart procedure
ops_printf("\033[1;32m");
if (restart == 1){
ops_printf("OpenSBLI is restarting from the input file: restart.h5\n");
}
else {
ops_printf("OpenSBLI is starting from the initial condition.\n");
}
ops_printf("\033[0m");
// Constants from HDF5 restart file
if (restart == 1){
ops_get_const_hdf5("simulation_time", 1, "double", (char*)&simulation_time, "restart.h5");
ops_get_const_hdf5("iter", 1, "int", (char*)&start_iter, "restart.h5");
}
else {
simulation_time = 0.0;
start_iter = 0;
}
tstart = simulation_time;

if (restart == 0){
int iteration_range_37_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel037, "Grid_based_initialisation0", opensbliblock00, 3, iteration_range_37_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());
}

// Initialize loop timers
double cpu_start0, elapsed_start0, cpu_end0, elapsed_end0;
ops_timers(&cpu_start0, &elapsed_start0);
double inner_start, elapsed_inner_start;
double inner_end, elapsed_inner_end;
ops_timers(&inner_start, &elapsed_inner_start);
for(iter=start_iter; iter<=start_iter+niter - 1; iter++)
{
simulation_time = tstart + dt*((iter - start_iter)+1);
if(fmod(iter+1, 100) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/100);
        fflush(stdout);
        ops_NaNcheck(rho_B0);
        ops_timers(&inner_start, &elapsed_inner_start);
}

ops_halo_transfer(periodicBC_direction0_side0_31_block0);
ops_halo_transfer(periodicBC_direction0_side1_32_block0);
ops_halo_transfer(periodicBC_direction1_side0_33_block0);
ops_halo_transfer(periodicBC_direction1_side1_34_block0);
ops_halo_transfer(periodicBC_direction2_side0_35_block0);
ops_halo_transfer(periodicBC_direction2_side1_36_block0);
for(stage=0; stage<=2; stage++)
{
int iteration_range_5_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel005, "CRu0_B0", opensbliblock00, 3, iteration_range_5_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_7_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel007, "CRu1_B0", opensbliblock00, 3, iteration_range_7_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_9_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel009, "CRu2_B0", opensbliblock00, 3, iteration_range_9_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_19_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel019, "CRp_B0", opensbliblock00, 3, iteration_range_19_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_16_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel016, "CRH_B0", opensbliblock00, 3, iteration_range_16_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(H_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_22_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel022, "CRT_B0", opensbliblock00, 3, iteration_range_22_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_23_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel023, "CRmu_B0", opensbliblock00, 3, iteration_range_23_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_4_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel004, "Derivative evaluation CD u0_B0 x0 ", opensbliblock00, 3, iteration_range_4_block0,
ops_arg_dat(u0_B0, 1, stencil_0_22_00_00_8, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_6_block0[] = {0, block0np0, -2, block0np1 + 2, 0, block0np2};
ops_par_loop(opensbliblock00Kernel006, "Derivative evaluation CD u1_B0 x0 ", opensbliblock00, 3, iteration_range_6_block0,
ops_arg_dat(u1_B0, 1, stencil_0_22_00_00_8, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_8_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel008, "Derivative evaluation CD u2_B0 x0 ", opensbliblock00, 3, iteration_range_8_block0,
ops_arg_dat(u2_B0, 1, stencil_0_22_00_00_8, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_10_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel010, "Derivative evaluation CD u0_B0 x1 ", opensbliblock00, 3, iteration_range_10_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_22_00_8, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_11_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel011, "Derivative evaluation CD u1_B0 x1 ", opensbliblock00, 3, iteration_range_11_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_22_00_8, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_12_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel012, "Derivative evaluation CD u2_B0 x1 ", opensbliblock00, 3, iteration_range_12_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_22_00_8, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_13_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel013, "Derivative evaluation CD u0_B0 x2 ", opensbliblock00, 3, iteration_range_13_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_14_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel014, "Derivative evaluation CD u1_B0 x2 ", opensbliblock00, 3, iteration_range_14_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_15_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel015, "Derivative evaluation CD u2_B0 x2 ", opensbliblock00, 3, iteration_range_15_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_29_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel029, "Convective terms", opensbliblock00, 3, iteration_range_29_block0,
ops_arg_dat(H_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_22_22_22_24, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_30_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel030, "Viscous terms", opensbliblock00, 3, iteration_range_30_block0,
ops_arg_dat(T_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_22_22_19, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_22_00_11, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW));

int iteration_range_49_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel049, "Temporal solution advancement", opensbliblock00, 3, iteration_range_49_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ));

ops_halo_transfer(periodicBC_direction0_side0_31_block0);
ops_halo_transfer(periodicBC_direction0_side1_32_block0);
ops_halo_transfer(periodicBC_direction1_side0_33_block0);
ops_halo_transfer(periodicBC_direction1_side1_34_block0);
ops_halo_transfer(periodicBC_direction2_side0_35_block0);
ops_halo_transfer(periodicBC_direction2_side1_36_block0);
}
ops_halo_transfer(periodicBC_direction0_side0_50_block0);
ops_halo_transfer(periodicBC_direction0_side1_51_block0);
ops_halo_transfer(periodicBC_direction1_side0_52_block0);
ops_halo_transfer(periodicBC_direction1_side1_53_block0);
ops_halo_transfer(periodicBC_direction2_side0_54_block0);
ops_halo_transfer(periodicBC_direction2_side1_55_block0);
int iteration_range_43_block0[] = {-1, block0np0 + 2, -1, block0np1 + 2, -1, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel043, "User kernel: Constituent Relations evaluation", opensbliblock00, 3, iteration_range_43_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW));

int iteration_range_44_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel044, "User kernel: Zero the work arrays", opensbliblock00, 3, iteration_range_44_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_45_block0[] = {-1, block0np0 + 1, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel045, "User kernel: TVD reconstruction direction 0", opensbliblock00, 3, iteration_range_45_block0,
ops_arg_dat(a_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_46_block0[] = {0, block0np0, -1, block0np1 + 1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel046, "User kernel: TVD reconstruction direction 1", opensbliblock00, 3, iteration_range_46_block0,
ops_arg_dat(a_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_47_block0[] = {0, block0np0, 0, block0np1, -1, block0np2 + 1};
ops_par_loop(opensbliblock00Kernel047, "User kernel: TVD reconstruction direction 2", opensbliblock00, 3, iteration_range_47_block0,
ops_arg_dat(a_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_48_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel048, "User kernel: Non-linear TVD Filter application", opensbliblock00, 3, iteration_range_48_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_idx());

if (fmod(1 + iter,100) == 0){
int iteration_range_42_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel042, "Taylor-Green vortex post-processing", opensbliblock00, 3, iteration_range_42_block0,
ops_arg_dat(mu_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_22_22_22_27, "double", OPS_READ),
ops_arg_reduce(KE_B0, 1, "double", OPS_INC),
ops_arg_reduce(dilatation_dissipation_B0, 1, "double", OPS_INC),
ops_arg_reduce(enstrophy_dissipation_B0, 1, "double", OPS_INC),
ops_arg_reduce(rhom_B0, 1, "double", OPS_INC),
ops_arg_dat(divV_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW));

ops_reduction_result(KE_B0, &KE_B0_out);
ops_reduction_result(enstrophy_dissipation_B0, &enstrophy_dissipation_B0_out);
ops_reduction_result(dilatation_dissipation_B0, &dilatation_dissipation_B0_out);
ops_reduction_result(rhom_B0, &rhom_B0_out);
}

if (fmod(1 + iter,100) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, KE, dilatation_dissipation, enstrophy_dissipation, rhom\n");}
// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, KE_B0_out, dilatation_dissipation_B0_out, enstrophy_dissipation_B0_out, rhom_B0_out);
fflush(f0);
}

if (fmod(1 + iter,write_output_file) == 0 || iter == 0){
HDF5_IO_Write_0_opensbliblock00_dynamic(opensbliblock00, iter, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, HDF5_timing);
}

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, HDF5_timing);
ops_timing_output(std::cout);
fclose(f0);
ops_exit();
//Main program end 
}