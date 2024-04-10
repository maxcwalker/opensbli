#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include "constants.h"
#define OPS_3D
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
block0np0 = 1500;
block0np1 = 300;
block0np2 = 200;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Delta2block0 = 20.0/(block0np2-1);
niter = 200000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.005;
Minf = 4.0;
Twall = 1.37;
write_output_file = 50000;
HDF5_timing = 0;
gama = 1.4;
SuthT = 110.4;
a = 20.0;
RefT = 439.0;
Re = 4000.0;
Pr = 0.72;
delta_TVD = 0.500000000000000;
eps_TVD = 1.00000000000000e-8;
kappa_TVD = 0.9;
gamma_m1 = -1 + gama;
Ducros_check = 0.0500000000000000;
Ducros_select = 0.0500000000000000;
write_slices = 2500;
beta_0 = 0.628;
omega_1 = 0.2;
phi_1 = 3.141;
xts = 50.0;
tripA = 0.05;
omega_3 = 1.0;
omega_2 = 0.4;
b_f = 0.002;
omega_0 = 0.1;
phi_2 = 4.712;
phi_0 = 1.571;
b = 5.0;
L = 400.0;
H = 115.0;
inv2Delta0block0 = 1.0/(Delta0block0*Delta0block0);
inv2Delta1block0 = 1.0/(Delta1block0*Delta1block0);
inv2Delta2block0 = 1.0/(Delta2block0*Delta2block0);
inv2Minf = 1.0/(Minf*Minf);
inv2a = 1.0/(a*a);
invDelta0block0 = 1.0/(Delta0block0);
invDelta1block0 = 1.0/(Delta1block0);
invDelta2block0 = 1.0/(Delta2block0);
invH = 1.0/(H);
invPr = 1.0/(Pr);
invRe = 1.0/(Re);
invRefT = 1.0/(RefT);
inv_gamma_m1 = 1.0/((-1 + gama));
invdelta_TVD = 1.0/(delta_TVD);
invgama = 1.0/(gama);
invgamma_m1 = 1.0/(gamma_m1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("Delta2block0" , 1, "double", &Delta2block0);
ops_decl_const("Ducros_check" , 1, "double", &Ducros_check);
ops_decl_const("Ducros_select" , 1, "double", &Ducros_select);
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
ops_decl_const("b_f" , 1, "double", &b_f);
ops_decl_const("beta_0" , 1, "double", &beta_0);
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
ops_decl_const("inv2a" , 1, "double", &inv2a);
ops_decl_const("invDelta0block0" , 1, "double", &invDelta0block0);
ops_decl_const("invDelta1block0" , 1, "double", &invDelta1block0);
ops_decl_const("invDelta2block0" , 1, "double", &invDelta2block0);
ops_decl_const("invH" , 1, "double", &invH);
ops_decl_const("invPr" , 1, "double", &invPr);
ops_decl_const("invRe" , 1, "double", &invRe);
ops_decl_const("invRefT" , 1, "double", &invRefT);
ops_decl_const("inv_gamma_m1" , 1, "double", &inv_gamma_m1);
ops_decl_const("invdelta_TVD" , 1, "double", &invdelta_TVD);
ops_decl_const("invgama" , 1, "double", &invgama);
ops_decl_const("invgamma_m1" , 1, "double", &invgamma_m1);
ops_decl_const("kappa_TVD" , 1, "double", &kappa_TVD);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("omega_0" , 1, "double", &omega_0);
ops_decl_const("omega_1" , 1, "double", &omega_1);
ops_decl_const("omega_2" , 1, "double", &omega_2);
ops_decl_const("omega_3" , 1, "double", &omega_3);
ops_decl_const("phi_0" , 1, "double", &phi_0);
ops_decl_const("phi_1" , 1, "double", &phi_1);
ops_decl_const("phi_2" , 1, "double", &phi_2);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
ops_decl_const("tripA" , 1, "double", &tripA);
ops_decl_const("write_output_file" , 1, "int", &write_output_file);
ops_decl_const("write_slices" , 1, "int", &write_slices);
ops_decl_const("xts" , 1, "double", &xts);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(3, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
#include "stencils.h"
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
int iteration_range_42_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel042, "Similiarity solution laminar boundary-layer initialisation0", opensbliblock00, 3, iteration_range_42_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_idx());
}

int iteration_range_45_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel045, "MetricsEquation evaluation", opensbliblock00, 3, iteration_range_45_block0,
ops_arg_dat(x0_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(x1_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_46_block0[] = {0, 1, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel046, "Metric_copy_block0 boundary dir0 side0", opensbliblock00, 3, iteration_range_46_block0,
ops_arg_dat(D00_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW));

int iteration_range_47_block0[] = {block0np0 - 1, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel047, "Metric_copy_block0 boundary dir0 side1", opensbliblock00, 3, iteration_range_47_block0,
ops_arg_dat(D00_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_22_00_00_8, "double", OPS_RW));

int iteration_range_48_block0[] = {-2, block0np0 + 2, 0, 1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel048, "Metric_copy_block0 boundary dir1 side0", opensbliblock00, 3, iteration_range_48_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW));

int iteration_range_49_block0[] = {-2, block0np0 + 2, block0np1 - 1, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel049, "Metric_copy_block0 boundary dir1 side1", opensbliblock00, 3, iteration_range_49_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_22_00_8, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_50_block0);
ops_halo_transfer(periodicBC_direction2_side1_51_block0);
int iteration_range_56_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel056, "MetricsEquation evaluation", opensbliblock00, 3, iteration_range_56_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_44_24_00_31, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD001_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD010_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD011_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD100_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD101_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD110_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(SD111_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

char slice_name0[80];
sprintf(slice_name0, "0");
ops_write_plane_group_hdf5({{1, 1}}, slice_name0, {{x0_B0, x2_B0}});
ops_write_plane_group_hdf5({{2, block0np2/2}}, slice_name0, {{x0_B0, x2_B0}});
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

int iteration_range_36_block0[] = {0, 1, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel036, "InletTransfer boundary dir0 side0", opensbliblock00, 3, iteration_range_36_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW));

int iteration_range_37_block0[] = {block0np0 - 1, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel037, "Extrapolation boundary dir0 side1", opensbliblock00, 3, iteration_range_37_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW));

int iteration_range_38_block0[] = {-2, block0np0 + 2, 0, 1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel038, "ForcingStripWall boundary dir1 side0", opensbliblock00, 3, iteration_range_38_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_21_00_9, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW));

int iteration_range_39_block0[] = {-2, block0np0 + 2, block0np1 - 1, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel039, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 3, iteration_range_39_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_40_block0);
ops_halo_transfer(periodicBC_direction2_side1_41_block0);
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

int iteration_range_20_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel020, "CRp_B0", opensbliblock00, 3, iteration_range_20_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_11_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel011, "CRT_B0", opensbliblock00, 3, iteration_range_11_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_26_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel026, "CRmu_B0", opensbliblock00, 3, iteration_range_26_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_4_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel004, "Derivative evaluation CD u0_B0 xi0 ", opensbliblock00, 3, iteration_range_4_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_6_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel006, "Derivative evaluation CD u1_B0 xi0 ", opensbliblock00, 3, iteration_range_6_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_8_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel008, "Derivative evaluation CD u2_B0 xi0 ", opensbliblock00, 3, iteration_range_8_block0,
ops_arg_dat(u2_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_10_block0[] = {0, block0np0, -2, block0np1 + 2, 0, block0np2};
ops_par_loop(opensbliblock00Kernel010, "Derivative evaluation CD T_B0 xi0 ", opensbliblock00, 3, iteration_range_10_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_12_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel012, "Derivative evaluation CD u0_B0 xi1 ", opensbliblock00, 3, iteration_range_12_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_13_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel013, "Derivative evaluation CD u1_B0 xi1 ", opensbliblock00, 3, iteration_range_13_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_14_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel014, "Derivative evaluation CD u2_B0 xi1 ", opensbliblock00, 3, iteration_range_14_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_15_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel015, "Derivative evaluation CD T_B0 xi1 ", opensbliblock00, 3, iteration_range_15_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_16_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel016, "Derivative evaluation CD u0_B0 xi2 ", opensbliblock00, 3, iteration_range_16_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_17_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel017, "Derivative evaluation CD u1_B0 xi2 ", opensbliblock00, 3, iteration_range_17_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_18_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel018, "Derivative evaluation CD u2_B0 xi2 ", opensbliblock00, 3, iteration_range_18_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_19_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel019, "Derivative evaluation CD T_B0 xi2 ", opensbliblock00, 3, iteration_range_19_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_34_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel034, "Convective terms", opensbliblock00, 3, iteration_range_34_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_35_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel035, "Viscous terms", opensbliblock00, 3, iteration_range_35_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD001_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD010_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD011_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD100_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD101_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD110_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(SD111_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_24_22_23, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_24_22_23, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_24_22_23, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_22_11, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_idx());

int iteration_range_68_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel068, "Temporal solution advancement", opensbliblock00, 3, iteration_range_68_block0,
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

int iteration_range_36_block0[] = {0, 1, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel036, "InletTransfer boundary dir0 side0", opensbliblock00, 3, iteration_range_36_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW));

int iteration_range_37_block0[] = {block0np0 - 1, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel037, "Extrapolation boundary dir0 side1", opensbliblock00, 3, iteration_range_37_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_12_00_00_9, "double", OPS_RW));

int iteration_range_38_block0[] = {-2, block0np0 + 2, 0, 1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel038, "ForcingStripWall boundary dir1 side0", opensbliblock00, 3, iteration_range_38_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_21_00_9, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW));

int iteration_range_39_block0[] = {-2, block0np0 + 2, block0np1 - 1, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel039, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 3, iteration_range_39_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_22_00_11, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_40_block0);
ops_halo_transfer(periodicBC_direction2_side1_41_block0);
}
int iteration_range_57_block0[] = {-1, block0np0 + 2, -1, block0np1 + 2, -1, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel057, "User kernel: Constituent Relations evaluationOG", opensbliblock00, 3, iteration_range_57_block0,
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

int iteration_range_61_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel061, "UserDefinedEquations evaluation", opensbliblock00, 3, iteration_range_61_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_44_24_22_39, "double", OPS_READ),
ops_arg_dat(kappa_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_62_block0[] = {-1, block0np0 + 2, -1, block0np1 + 2, -1, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel062, "User kernel: Constituent Relations evaluationOG", opensbliblock00, 3, iteration_range_62_block0,
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

int iteration_range_63_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel063, "User kernel: Zero the work arrays", opensbliblock00, 3, iteration_range_63_block0,
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

int iteration_range_64_block0[] = {-1, block0np0 + 1, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel064, "User kernel: TVD reconstruction direction 0", opensbliblock00, 3, iteration_range_64_block0,
ops_arg_dat(D00_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_12_00_00_9, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(kappa_B0, 1, stencil_0_32_00_00_13, "double", OPS_READ),
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

int iteration_range_65_block0[] = {0, block0np0, -1, block0np1 + 1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel065, "User kernel: TVD reconstruction direction 1", opensbliblock00, 3, iteration_range_65_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_12_00_9, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(kappa_B0, 1, stencil_0_00_32_00_13, "double", OPS_READ),
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

int iteration_range_66_block0[] = {0, block0np0, 0, block0np1, -1, block0np2 + 1};
ops_par_loop(opensbliblock00Kernel066, "User kernel: TVD reconstruction direction 2", opensbliblock00, 3, iteration_range_66_block0,
ops_arg_dat(a_B0, 1, stencil_0_00_00_12_9, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_01_5, "double", OPS_READ),
ops_arg_dat(kappa_B0, 1, stencil_0_00_00_32_13, "double", OPS_READ),
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

int iteration_range_67_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel067, "User kernel: Non-linear TVD Filter application", opensbliblock00, 3, iteration_range_67_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(kappa_B0, 1, stencil_0_11_11_11_15, "double", OPS_READ),
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
ops_arg_dat(TVD_filter_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_idx());

if (fmod(1 + iter,2) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, p_B0(50*block0np0/L, 0, block0np2/2), p_B0(100*block0np0/L, 2, block0np2/2), p_B0(175*block0np0/L, 4, block0np2/2), p_B0(187*block0np0/L, 6, block0np2/2), p_B0(200*block0np0/L, 8, block0np2/2), p_B0(225*block0np0/L, 10, block0np2/2), p_B0(300*block0np0/L, 12, block0np2/2), p_B0(350*block0np0/L, 12, block0np2/2), rhou0_B0(50*block0np0/L, 0, block0np2/2), rhou0_B0(100*block0np0/L, 2, block0np2/2), rhou0_B0(175*block0np0/L, 4, block0np2/2), rhou0_B0(187*block0np0/L, 6, block0np2/2), rhou0_B0(200*block0np0/L, 8, block0np2/2), rhou0_B0(225*block0np0/L, 10, block0np2/2), rhou0_B0(300*block0np0/L, 12, block0np2/2), rhou0_B0(350*block0np0/L, 12, block0np2/2)\n");}
// Monitoring of p_B0
ops_reduction reduce_0_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_0_p_B0");
double p_B0_0_output = 0.0;
int i00 = 50*block0np0/L, j00 = 0, k00 = block0np2/2;
int monitor_range_0_p_B0[] = {i00, i00+1, j00, j00+1, k00, k00+1};
ops_par_loop(monitor_0_p_B0, "Reduction p_B0_0", opensbliblock00, 3, monitor_range_0_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_0_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_0_p_B0, &p_B0_0_output);

// Monitoring of p_B0
ops_reduction reduce_1_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_1_p_B0");
double p_B0_1_output = 0.0;
int i01 = 100*block0np0/L, j01 = 2, k01 = block0np2/2;
int monitor_range_1_p_B0[] = {i01, i01+1, j01, j01+1, k01, k01+1};
ops_par_loop(monitor_1_p_B0, "Reduction p_B0_1", opensbliblock00, 3, monitor_range_1_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_1_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_1_p_B0, &p_B0_1_output);

// Monitoring of p_B0
ops_reduction reduce_2_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_2_p_B0");
double p_B0_2_output = 0.0;
int i02 = 175*block0np0/L, j02 = 4, k02 = block0np2/2;
int monitor_range_2_p_B0[] = {i02, i02+1, j02, j02+1, k02, k02+1};
ops_par_loop(monitor_2_p_B0, "Reduction p_B0_2", opensbliblock00, 3, monitor_range_2_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_2_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_2_p_B0, &p_B0_2_output);

// Monitoring of p_B0
ops_reduction reduce_3_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_3_p_B0");
double p_B0_3_output = 0.0;
int i03 = 187*block0np0/L, j03 = 6, k03 = block0np2/2;
int monitor_range_3_p_B0[] = {i03, i03+1, j03, j03+1, k03, k03+1};
ops_par_loop(monitor_3_p_B0, "Reduction p_B0_3", opensbliblock00, 3, monitor_range_3_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_3_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_3_p_B0, &p_B0_3_output);

// Monitoring of p_B0
ops_reduction reduce_4_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_4_p_B0");
double p_B0_4_output = 0.0;
int i04 = 200*block0np0/L, j04 = 8, k04 = block0np2/2;
int monitor_range_4_p_B0[] = {i04, i04+1, j04, j04+1, k04, k04+1};
ops_par_loop(monitor_4_p_B0, "Reduction p_B0_4", opensbliblock00, 3, monitor_range_4_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_4_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_4_p_B0, &p_B0_4_output);

// Monitoring of p_B0
ops_reduction reduce_5_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_5_p_B0");
double p_B0_5_output = 0.0;
int i05 = 225*block0np0/L, j05 = 10, k05 = block0np2/2;
int monitor_range_5_p_B0[] = {i05, i05+1, j05, j05+1, k05, k05+1};
ops_par_loop(monitor_5_p_B0, "Reduction p_B0_5", opensbliblock00, 3, monitor_range_5_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_5_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_5_p_B0, &p_B0_5_output);

// Monitoring of p_B0
ops_reduction reduce_6_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_6_p_B0");
double p_B0_6_output = 0.0;
int i06 = 300*block0np0/L, j06 = 12, k06 = block0np2/2;
int monitor_range_6_p_B0[] = {i06, i06+1, j06, j06+1, k06, k06+1};
ops_par_loop(monitor_6_p_B0, "Reduction p_B0_6", opensbliblock00, 3, monitor_range_6_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_6_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_6_p_B0, &p_B0_6_output);

// Monitoring of p_B0
ops_reduction reduce_7_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_7_p_B0");
double p_B0_7_output = 0.0;
int i07 = 350*block0np0/L, j07 = 12, k07 = block0np2/2;
int monitor_range_7_p_B0[] = {i07, i07+1, j07, j07+1, k07, k07+1};
ops_par_loop(monitor_7_p_B0, "Reduction p_B0_7", opensbliblock00, 3, monitor_range_7_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_7_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_7_p_B0, &p_B0_7_output);

// Monitoring of rhou0_B0
ops_reduction reduce_8_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_8_rhou0_B0");
double rhou0_B0_8_output = 0.0;
int i08 = 50*block0np0/L, j08 = 0, k08 = block0np2/2;
int monitor_range_8_rhou0_B0[] = {i08, i08+1, j08, j08+1, k08, k08+1};
ops_par_loop(monitor_8_rhou0_B0, "Reduction rhou0_B0_8", opensbliblock00, 3, monitor_range_8_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_8_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_8_rhou0_B0, &rhou0_B0_8_output);

// Monitoring of rhou0_B0
ops_reduction reduce_9_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_9_rhou0_B0");
double rhou0_B0_9_output = 0.0;
int i09 = 100*block0np0/L, j09 = 2, k09 = block0np2/2;
int monitor_range_9_rhou0_B0[] = {i09, i09+1, j09, j09+1, k09, k09+1};
ops_par_loop(monitor_9_rhou0_B0, "Reduction rhou0_B0_9", opensbliblock00, 3, monitor_range_9_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_9_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_9_rhou0_B0, &rhou0_B0_9_output);

// Monitoring of rhou0_B0
ops_reduction reduce_10_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_10_rhou0_B0");
double rhou0_B0_10_output = 0.0;
int i010 = 175*block0np0/L, j010 = 4, k010 = block0np2/2;
int monitor_range_10_rhou0_B0[] = {i010, i010+1, j010, j010+1, k010, k010+1};
ops_par_loop(monitor_10_rhou0_B0, "Reduction rhou0_B0_10", opensbliblock00, 3, monitor_range_10_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_10_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_10_rhou0_B0, &rhou0_B0_10_output);

// Monitoring of rhou0_B0
ops_reduction reduce_11_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_11_rhou0_B0");
double rhou0_B0_11_output = 0.0;
int i011 = 187*block0np0/L, j011 = 6, k011 = block0np2/2;
int monitor_range_11_rhou0_B0[] = {i011, i011+1, j011, j011+1, k011, k011+1};
ops_par_loop(monitor_11_rhou0_B0, "Reduction rhou0_B0_11", opensbliblock00, 3, monitor_range_11_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_11_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_11_rhou0_B0, &rhou0_B0_11_output);

// Monitoring of rhou0_B0
ops_reduction reduce_12_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_12_rhou0_B0");
double rhou0_B0_12_output = 0.0;
int i012 = 200*block0np0/L, j012 = 8, k012 = block0np2/2;
int monitor_range_12_rhou0_B0[] = {i012, i012+1, j012, j012+1, k012, k012+1};
ops_par_loop(monitor_12_rhou0_B0, "Reduction rhou0_B0_12", opensbliblock00, 3, monitor_range_12_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_12_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_12_rhou0_B0, &rhou0_B0_12_output);

// Monitoring of rhou0_B0
ops_reduction reduce_13_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_13_rhou0_B0");
double rhou0_B0_13_output = 0.0;
int i013 = 225*block0np0/L, j013 = 10, k013 = block0np2/2;
int monitor_range_13_rhou0_B0[] = {i013, i013+1, j013, j013+1, k013, k013+1};
ops_par_loop(monitor_13_rhou0_B0, "Reduction rhou0_B0_13", opensbliblock00, 3, monitor_range_13_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_13_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_13_rhou0_B0, &rhou0_B0_13_output);

// Monitoring of rhou0_B0
ops_reduction reduce_14_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_14_rhou0_B0");
double rhou0_B0_14_output = 0.0;
int i014 = 300*block0np0/L, j014 = 12, k014 = block0np2/2;
int monitor_range_14_rhou0_B0[] = {i014, i014+1, j014, j014+1, k014, k014+1};
ops_par_loop(monitor_14_rhou0_B0, "Reduction rhou0_B0_14", opensbliblock00, 3, monitor_range_14_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_14_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_14_rhou0_B0, &rhou0_B0_14_output);

// Monitoring of rhou0_B0
ops_reduction reduce_15_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_15_rhou0_B0");
double rhou0_B0_15_output = 0.0;
int i015 = 350*block0np0/L, j015 = 12, k015 = block0np2/2;
int monitor_range_15_rhou0_B0[] = {i015, i015+1, j015, j015+1, k015, k015+1};
ops_par_loop(monitor_15_rhou0_B0, "Reduction rhou0_B0_15", opensbliblock00, 3, monitor_range_15_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_15_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_15_rhou0_B0, &rhou0_B0_15_output);

// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, p_B0_0_output, p_B0_1_output, p_B0_2_output, p_B0_3_output, p_B0_4_output, p_B0_5_output, p_B0_6_output, p_B0_7_output, rhou0_B0_8_output, rhou0_B0_9_output, rhou0_B0_10_output, rhou0_B0_11_output, rhou0_B0_12_output, rhou0_B0_13_output, rhou0_B0_14_output, rhou0_B0_15_output);
fflush(f0);
}

if (fmod(1 + iter,write_output_file) == 0 || iter == 0){
HDF5_IO_Write_0_opensbliblock00_dynamic(opensbliblock00, iter, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, D11_B0, p_B0, HDF5_timing);
}

if (fmod(1 + iter,write_slices) == 0){
char slice_name0[80];
sprintf(slice_name0, "%d", iter + 1);
ops_write_plane_group_hdf5({{1, 1}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{1, 10}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{2, block0np2/2}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
}

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, D11_B0, p_B0, HDF5_timing);
fclose(f0);
ops_exit();
//Main program end 
}