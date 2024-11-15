#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include "constants.h"
#define OPS_2D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
#include "io.h"
#include "reductions.h"
FILE *f0 = fopen("block0_monitor.log", "a");
int main(int argc, char **argv) 
{
// Initializing OPS 
ops_init(argc,argv,1);
// Set restart to 1 to restart the simulation from HDF5 file
restart = 0;
// User defined constant values
niter = 1000000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.003;
block0np0 = 600.0;
block0np1 = 400.0;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Minf = 2.0;
Twall = 1.68;
write_output_file = 2500;
HDF5_timing = 0;
SuthT = 110.4;
gama = 1.4;
RefT = 288.0;
Re = 950.0;
Pr = 0.72;
shock_filter_control = 1.00000000000000;
gamma_m1 = -1 + gama;
xts = 50.0;
tripA = 0.0;
k_0 = 0.02;
omega_0 = 0.1;
L = 400.0;
b = 5.0;
H = 115.0;
a = 20.0;
inv2Delta0block0 = 1.0/(Delta0block0*Delta0block0);
inv2Delta1block0 = 1.0/(Delta1block0*Delta1block0);
inv2Minf = 1.0/(Minf*Minf);
inv2a = 1.0/(a*a);
invDelta0block0 = 1.0/(Delta0block0);
invDelta1block0 = 1.0/(Delta1block0);
invH = 1.0/(H);
invPr = 1.0/(Pr);
invRe = 1.0/(Re);
invRefT = 1.0/(RefT);
inv_gamma_m1 = 1.0/((-1 + gama));
invgama = 1.0/(gama);
invgamma_m1 = 1.0/(gamma_m1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("H" , 1, "double", &H);
ops_decl_const("HDF5_timing" , 1, "int", &HDF5_timing);
ops_decl_const("L" , 1, "double", &L);
ops_decl_const("Minf" , 1, "double", &Minf);
ops_decl_const("Pr" , 1, "double", &Pr);
ops_decl_const("Re" , 1, "double", &Re);
ops_decl_const("RefT" , 1, "double", &RefT);
ops_decl_const("SuthT" , 1, "double", &SuthT);
ops_decl_const("Twall" , 1, "double", &Twall);
ops_decl_const("a" , 1, "double", &a);
ops_decl_const("b" , 1, "double", &b);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("block0np1" , 1, "int", &block0np1);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("inv2Delta0block0" , 1, "double", &inv2Delta0block0);
ops_decl_const("inv2Delta1block0" , 1, "double", &inv2Delta1block0);
ops_decl_const("inv2Minf" , 1, "double", &inv2Minf);
ops_decl_const("inv2a" , 1, "double", &inv2a);
ops_decl_const("invDelta0block0" , 1, "double", &invDelta0block0);
ops_decl_const("invDelta1block0" , 1, "double", &invDelta1block0);
ops_decl_const("invH" , 1, "double", &invH);
ops_decl_const("invPr" , 1, "double", &invPr);
ops_decl_const("invRe" , 1, "double", &invRe);
ops_decl_const("invRefT" , 1, "double", &invRefT);
ops_decl_const("inv_gamma_m1" , 1, "double", &inv_gamma_m1);
ops_decl_const("invgama" , 1, "double", &invgama);
ops_decl_const("invgamma_m1" , 1, "double", &invgamma_m1);
ops_decl_const("k_0" , 1, "double", &k_0);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("omega_0" , 1, "double", &omega_0);
ops_decl_const("shock_filter_control" , 1, "double", &shock_filter_control);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
ops_decl_const("tripA" , 1, "double", &tripA);
ops_decl_const("write_output_file" , 1, "int", &write_output_file);
ops_decl_const("xts" , 1, "double", &xts);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(2, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
#include "stencils.h"
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
int iteration_range_49_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5};
ops_par_loop(opensbliblock00Kernel049, "Similiarity solution laminar boundary-layer initialisation0", opensbliblock00, 2, iteration_range_49_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_idx());
}

int iteration_range_52_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel052, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_52_block0,
ops_arg_dat(x0_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(x1_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_53_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel053, "Metric_copy_block0 boundary dir0 side0", opensbliblock00, 2, iteration_range_53_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_8, "double", OPS_RW));

int iteration_range_54_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel054, "Metric_copy_block0 boundary dir0 side1", opensbliblock00, 2, iteration_range_54_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_8, "double", OPS_RW));

int iteration_range_55_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel055, "Metric_copy_block0 boundary dir1 side0", opensbliblock00, 2, iteration_range_55_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_8, "double", OPS_RW));

int iteration_range_56_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel056, "Metric_copy_block0 boundary dir1 side1", opensbliblock00, 2, iteration_range_56_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_8, "double", OPS_RW));

int iteration_range_61_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel061, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_61_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD001_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD010_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD011_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD100_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD101_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD110_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD111_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

// Initialize loop timers
double cpu_start0, elapsed_start0, cpu_end0, elapsed_end0;
ops_timers(&cpu_start0, &elapsed_start0);
double inner_start, elapsed_inner_start;
double inner_end, elapsed_inner_end;
ops_timers(&inner_start, &elapsed_inner_start);
for(iter=start_iter; iter<=start_iter+niter - 1; iter++)
{
simulation_time = tstart + dt*((iter - start_iter)+1);
if(fmod(iter+1, 1) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/1);
        fflush(stdout);
        ops_NaNcheck(rho_B0);
        ops_timers(&inner_start, &elapsed_inner_start);
}

int iteration_range_45_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel045, "InletTransfer boundary dir0 side0", opensbliblock00, 2, iteration_range_45_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_3, "double", OPS_RW));

int iteration_range_46_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel046, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_46_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_7, "double", OPS_RW));

int iteration_range_47_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel047, "ForcingStripWall boundary dir1 side0", opensbliblock00, 2, iteration_range_47_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

int iteration_range_48_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel048, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_48_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

for(stage=0; stage<=2; stage++)
{
int iteration_range_10_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel010, "CRu0", opensbliblock00, 2, iteration_range_10_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_11_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel011, "CRu1", opensbliblock00, 2, iteration_range_11_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_2_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel002, "CRp", opensbliblock00, 2, iteration_range_2_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_5_block0[] = {-3, block0np0 + 4, 0, block0np1};
ops_par_loop(opensbliblock00Kernel005, "CRU0", opensbliblock00, 2, iteration_range_5_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_14_block0[] = {0, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel014, "CRU1", opensbliblock00, 2, iteration_range_14_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_6_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel006, "CRa", opensbliblock00, 2, iteration_range_6_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_21_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel021, "CRT_B0", opensbliblock00, 2, iteration_range_21_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_18_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel018, "CRmu_B0", opensbliblock00, 2, iteration_range_18_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_0_block0[] = {-1, block0np0 + 1, 0, block0np1};
ops_par_loop(opensbliblock00Kernel000, "LFWeno_reconstruction_0_direction", opensbliblock00, 2, iteration_range_0_block0,
ops_arg_dat(D00_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_01_00_3, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_23_00_7, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_01_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_01_00_3, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_1_block0[] = {0, block0np0, -1, block0np1 + 1};
ops_par_loop(opensbliblock00Kernel001, "LFWeno_reconstruction_1_direction", opensbliblock00, 2, iteration_range_1_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_01_3, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_23_7, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_01_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_01_3, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_17_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel017, "LFWeno Residual", opensbliblock00, 2, iteration_range_17_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_10_00_3, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_10_00_3, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_10_00_3, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_10_00_3, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_10_3, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_10_3, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_10_3, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_10_3, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_28_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel028, "Derivative evaluation CD u0_B0 xi0 ", opensbliblock00, 2, iteration_range_28_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_30_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel030, "Derivative evaluation CD u1_B0 xi0 ", opensbliblock00, 2, iteration_range_30_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_32_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel032, "Derivative evaluation CD T_B0 xi0 ", opensbliblock00, 2, iteration_range_32_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_34_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel034, "Derivative evaluation CD u0_B0 xi1 ", opensbliblock00, 2, iteration_range_34_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_35_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel035, "Derivative evaluation CD u1_B0 xi1 ", opensbliblock00, 2, iteration_range_35_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_36_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel036, "Derivative evaluation CD T_B0 xi1 ", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_41_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel041, "Viscous terms", opensbliblock00, 2, iteration_range_41_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD001_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD010_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD011_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD100_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD101_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD110_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD111_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_44_24_16, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_idx());

int iteration_range_62_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel062, "Temporal solution advancement", opensbliblock00, 2, iteration_range_62_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ));

int iteration_range_45_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel045, "InletTransfer boundary dir0 side0", opensbliblock00, 2, iteration_range_45_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_3, "double", OPS_RW));

int iteration_range_46_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel046, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_46_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_7, "double", OPS_RW));

int iteration_range_47_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel047, "ForcingStripWall boundary dir1 side0", opensbliblock00, 2, iteration_range_47_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

int iteration_range_48_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel048, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_48_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

}
if (fmod(1 + iter,100) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, p_B0(178, 45), p_B0(178, 72), p_B0(178, 96), p_B0(178, 118), p_B0(178, 139), p_B0(178, 160), p_B0(178, 176)\n");}
// Monitoring of p_B0
ops_reduction reduce_0_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_0_p_B0");
double p_B0_0_output = 0.0;
int i00 = 178, j00 = 45;
int monitor_range_0_p_B0[] = {i00, i00+1, j00, j00+1};
ops_par_loop(monitor_0_p_B0, "Reduction p_B0_0", opensbliblock00, 2, monitor_range_0_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_0_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_0_p_B0, &p_B0_0_output);

// Monitoring of p_B0
ops_reduction reduce_1_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_1_p_B0");
double p_B0_1_output = 0.0;
int i01 = 178, j01 = 72;
int monitor_range_1_p_B0[] = {i01, i01+1, j01, j01+1};
ops_par_loop(monitor_1_p_B0, "Reduction p_B0_1", opensbliblock00, 2, monitor_range_1_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_1_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_1_p_B0, &p_B0_1_output);

// Monitoring of p_B0
ops_reduction reduce_2_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_2_p_B0");
double p_B0_2_output = 0.0;
int i02 = 178, j02 = 96;
int monitor_range_2_p_B0[] = {i02, i02+1, j02, j02+1};
ops_par_loop(monitor_2_p_B0, "Reduction p_B0_2", opensbliblock00, 2, monitor_range_2_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_2_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_2_p_B0, &p_B0_2_output);

// Monitoring of p_B0
ops_reduction reduce_3_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_3_p_B0");
double p_B0_3_output = 0.0;
int i03 = 178, j03 = 118;
int monitor_range_3_p_B0[] = {i03, i03+1, j03, j03+1};
ops_par_loop(monitor_3_p_B0, "Reduction p_B0_3", opensbliblock00, 2, monitor_range_3_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_3_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_3_p_B0, &p_B0_3_output);

// Monitoring of p_B0
ops_reduction reduce_4_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_4_p_B0");
double p_B0_4_output = 0.0;
int i04 = 178, j04 = 139;
int monitor_range_4_p_B0[] = {i04, i04+1, j04, j04+1};
ops_par_loop(monitor_4_p_B0, "Reduction p_B0_4", opensbliblock00, 2, monitor_range_4_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_4_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_4_p_B0, &p_B0_4_output);

// Monitoring of p_B0
ops_reduction reduce_5_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_5_p_B0");
double p_B0_5_output = 0.0;
int i05 = 178, j05 = 160;
int monitor_range_5_p_B0[] = {i05, i05+1, j05, j05+1};
ops_par_loop(monitor_5_p_B0, "Reduction p_B0_5", opensbliblock00, 2, monitor_range_5_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_5_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_5_p_B0, &p_B0_5_output);

// Monitoring of p_B0
ops_reduction reduce_6_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_6_p_B0");
double p_B0_6_output = 0.0;
int i06 = 178, j06 = 176;
int monitor_range_6_p_B0[] = {i06, i06+1, j06, j06+1};
ops_par_loop(monitor_6_p_B0, "Reduction p_B0_6", opensbliblock00, 2, monitor_range_6_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_6_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_6_p_B0, &p_B0_6_output);

// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, p_B0_0_output, p_B0_1_output, p_B0_2_output, p_B0_3_output, p_B0_4_output, p_B0_5_output, p_B0_6_output);
fflush(f0);
}

if (fmod(1 + iter,write_output_file) == 0 || iter == 0){
HDF5_IO_Write_0_opensbliblock00_dynamic(opensbliblock00, iter, rho_B0, rhou0_B0, rhou1_B0, rhoE_B0, x0_B0, x1_B0, D11_B0, p_B0, HDF5_timing);
}

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhou1_B0, rhoE_B0, x0_B0, x1_B0, D11_B0, p_B0, HDF5_timing);
fclose(f0);
ops_exit();
//Main program end 
}