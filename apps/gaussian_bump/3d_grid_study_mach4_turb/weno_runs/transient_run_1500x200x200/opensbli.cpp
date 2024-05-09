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
niter = 500000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.01;
block0np0 = 1500;
block0np1 = 200;
block0np2 = 200;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Delta2block0 = 20.0/(block0np2-1);
Minf = 4.0;
Twall = 1.37;
stat_frequency = 200;
write_output_file = 100000;
HDF5_timing = 0;
RefT = 439.0;
SuthT = 110.4;
gama = 1.4;
Pr = 0.72;
Re = 4000.0;
write_slices = 2500;
shock_filter_control = 1.00000000000000;
gamma_m1 = -1 + gama;
omega_1 = 0.2;
beta_0 = 0.628;
omega_0 = 0.1;
phi_1 = 3.141;
phi_2 = 4.712;
omega_2 = 0.4;
omega_3 = 1.0;
tripA = 0.0;
xts = 50.0;
b_f = 0.002;
phi_0 = 1.571;
b = 5.0;
a = 20.0;
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
invgama = 1.0/(gama);
invgamma_m1 = 1.0/(gamma_m1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("Delta2block0" , 1, "double", &Delta2block0);
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
ops_decl_const("dt" , 1, "double", &dt);
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
ops_decl_const("invgama" , 1, "double", &invgama);
ops_decl_const("invgamma_m1" , 1, "double", &invgamma_m1);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("omega_0" , 1, "double", &omega_0);
ops_decl_const("omega_1" , 1, "double", &omega_1);
ops_decl_const("omega_2" , 1, "double", &omega_2);
ops_decl_const("omega_3" , 1, "double", &omega_3);
ops_decl_const("phi_0" , 1, "double", &phi_0);
ops_decl_const("phi_1" , 1, "double", &phi_1);
ops_decl_const("phi_2" , 1, "double", &phi_2);
ops_decl_const("shock_filter_control" , 1, "double", &shock_filter_control);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
ops_decl_const("stat_frequency" , 1, "int", &stat_frequency);
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
int iteration_range_67_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel067, "Similiarity solution laminar boundary-layer initialisation0", opensbliblock00, 3, iteration_range_67_block0,
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

int iteration_range_70_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel070, "MetricsEquation evaluation", opensbliblock00, 3, iteration_range_70_block0,
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

int iteration_range_71_block0[] = {0, 1, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel071, "Metric_copy_block0 boundary dir0 side0", opensbliblock00, 3, iteration_range_71_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW));

int iteration_range_72_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel072, "Metric_copy_block0 boundary dir0 side1", opensbliblock00, 3, iteration_range_72_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_00_16, "double", OPS_RW));

int iteration_range_73_block0[] = {-3, block0np0 + 4, 0, 1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel073, "Metric_copy_block0 boundary dir1 side0", opensbliblock00, 3, iteration_range_73_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW));

int iteration_range_74_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel074, "Metric_copy_block0 boundary dir1 side1", opensbliblock00, 3, iteration_range_74_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_00_16, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_75_block0);
ops_halo_transfer(periodicBC_direction2_side1_76_block0);
int iteration_range_81_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel081, "MetricsEquation evaluation", opensbliblock00, 3, iteration_range_81_block0,
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
if(fmod(iter+1, 25000) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/25000);
        fflush(stdout);
        ops_NaNcheck(rho_B0);
        ops_timers(&inner_start, &elapsed_inner_start);
}

int iteration_range_61_block0[] = {0, 1, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel061, "InletTransfer boundary dir0 side0", opensbliblock00, 3, iteration_range_61_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW));

int iteration_range_62_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel062, "Extrapolation boundary dir0 side1", opensbliblock00, 3, iteration_range_62_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW));

int iteration_range_63_block0[] = {-3, block0np0 + 4, 0, 1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel063, "ForcingStripWall boundary dir1 side0", opensbliblock00, 3, iteration_range_63_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_00_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW));

int iteration_range_64_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel064, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 3, iteration_range_64_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_65_block0);
ops_halo_transfer(periodicBC_direction2_side1_66_block0);
for(stage=0; stage<=2; stage++)
{
int iteration_range_5_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel005, "CRu1", opensbliblock00, 3, iteration_range_5_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_11_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel011, "CRu2", opensbliblock00, 3, iteration_range_11_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_14_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel014, "CRu0", opensbliblock00, 3, iteration_range_14_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_10_block0[] = {-3, block0np0 + 4, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel010, "CRU0", opensbliblock00, 3, iteration_range_10_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_13_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel013, "CRp", opensbliblock00, 3, iteration_range_13_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_19_block0[] = {0, block0np0, -3, block0np1 + 4, 0, block0np2};
ops_par_loop(opensbliblock00Kernel019, "CRU1", opensbliblock00, 3, iteration_range_19_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_20_block0[] = {0, block0np0, 0, block0np1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel020, "CRU2", opensbliblock00, 3, iteration_range_20_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_9_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel009, "CRa", opensbliblock00, 3, iteration_range_9_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_25_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel025, "CRT_B0", opensbliblock00, 3, iteration_range_25_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_28_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel028, "CRmu_B0", opensbliblock00, 3, iteration_range_28_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_0_block0[] = {-1, block0np0 + 1, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel000, "LFWeno_reconstruction_0_direction", opensbliblock00, 3, iteration_range_0_block0,
ops_arg_dat(D00_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_23_00_00_13, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_01_00_00_5, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_1_block0[] = {0, block0np0, -1, block0np1 + 1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel001, "LFWeno_reconstruction_1_direction", opensbliblock00, 3, iteration_range_1_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_23_00_13, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_01_00_5, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_2_block0[] = {0, block0np0, 0, block0np1, -1, block0np2 + 1};
ops_par_loop(opensbliblock00Kernel002, "LFWeno_reconstruction_2_direction", opensbliblock00, 3, iteration_range_2_block0,
ops_arg_dat(U2_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_01_5, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_23_13, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_01_5, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_01_5, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_01_5, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk12_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk13_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(wk14_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_21_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel021, "LFWeno Residual", opensbliblock00, 3, iteration_range_21_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00_00_10_5, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_10_00_00_5, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_10_00_5, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_32_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel032, "Derivative evaluation CD u0_B0 xi0 ", opensbliblock00, 3, iteration_range_32_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_34_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel034, "Derivative evaluation CD u1_B0 xi0 ", opensbliblock00, 3, iteration_range_34_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_36_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel036, "Derivative evaluation CD u2_B0 xi0 ", opensbliblock00, 3, iteration_range_36_block0,
ops_arg_dat(u2_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_38_block0[] = {0, block0np0, -2, block0np1 + 2, 0, block0np2};
ops_par_loop(opensbliblock00Kernel038, "Derivative evaluation CD T_B0 xi0 ", opensbliblock00, 3, iteration_range_38_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_00_19, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_40_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel040, "Derivative evaluation CD u0_B0 xi1 ", opensbliblock00, 3, iteration_range_40_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_41_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel041, "Derivative evaluation CD u1_B0 xi1 ", opensbliblock00, 3, iteration_range_41_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_42_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel042, "Derivative evaluation CD u2_B0 xi1 ", opensbliblock00, 3, iteration_range_42_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_43_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel043, "Derivative evaluation CD T_B0 xi1 ", opensbliblock00, 3, iteration_range_43_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_00_15, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_44_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel044, "Derivative evaluation CD u0_B0 xi2 ", opensbliblock00, 3, iteration_range_44_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_45_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel045, "Derivative evaluation CD u1_B0 xi2 ", opensbliblock00, 3, iteration_range_45_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_46_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel046, "Derivative evaluation CD u2_B0 xi2 ", opensbliblock00, 3, iteration_range_46_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_47_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel047, "Derivative evaluation CD T_B0 xi2 ", opensbliblock00, 3, iteration_range_47_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_00_22_8, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_56_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel056, "Viscous terms", opensbliblock00, 3, iteration_range_56_block0,
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

int iteration_range_82_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel082, "Temporal solution advancement", opensbliblock00, 3, iteration_range_82_block0,
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

int iteration_range_61_block0[] = {0, 1, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel061, "InletTransfer boundary dir0 side0", opensbliblock00, 3, iteration_range_61_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_10_00_00_5, "double", OPS_RW));

int iteration_range_62_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel062, "Extrapolation boundary dir0 side1", opensbliblock00, 3, iteration_range_62_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_14_00_00_13, "double", OPS_RW));

int iteration_range_63_block0[] = {-3, block0np0 + 4, 0, 1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel063, "ForcingStripWall boundary dir1 side0", opensbliblock00, 3, iteration_range_63_block0,
ops_arg_gbl(&iter, 1, "int", OPS_READ),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(x2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_00_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW));

int iteration_range_64_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel064, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 3, iteration_range_64_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_44_00_19, "double", OPS_RW));

ops_halo_transfer(periodicBC_direction2_side0_65_block0);
ops_halo_transfer(periodicBC_direction2_side1_66_block0);
}
if (fmod(1 + iter,2) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, p_B0(187, 0, 100.0), p_B0(360, 0, 100.0), p_B0(375, 0, 100.0), p_B0(656, 0, 100.0), p_B0(701, 0, 100.0), p_B0(716, 0, 100.0), p_B0(750, 0, 100.0), p_B0(798, 0, 100.0), p_B0(843, 0, 100.0), p_B0(900, 0, 100.0), p_B0(937, 0, 100.0), p_B0(1031, 0, 100.0), p_B0(1125, 0, 100.0), p_B0(1218, 0, 100.0), p_B0(1312, 0, 100.0), p_B0(1406, 0, 100.0), p_B0(1496, 0, 100.0), rhou0_B0(187, 1, 100.0), rhou0_B0(360, 1, 100.0), rhou0_B0(375, 1, 100.0), rhou0_B0(656, 1, 100.0), rhou0_B0(701, 1, 100.0), rhou0_B0(716, 1, 100.0), rhou0_B0(750, 1, 100.0), rhou0_B0(798, 1, 100.0), rhou0_B0(843, 1, 100.0), rhou0_B0(900, 1, 100.0), rhou0_B0(937, 1, 100.0), rhou0_B0(1031, 1, 100.0), rhou0_B0(1125, 1, 100.0), rhou0_B0(1218, 1, 100.0), rhou0_B0(1312, 1, 100.0), rhou0_B0(1406, 1, 100.0), rhou0_B0(1496, 1, 100.0)\n");}
// Monitoring of p_B0
ops_reduction reduce_0_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_0_p_B0");
double p_B0_0_output = 0.0;
int i00 = 187, j00 = 0, k00 = 100.0;
int monitor_range_0_p_B0[] = {i00, i00+1, j00, j00+1, k00, k00+1};
ops_par_loop(monitor_0_p_B0, "Reduction p_B0_0", opensbliblock00, 3, monitor_range_0_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_0_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_0_p_B0, &p_B0_0_output);

// Monitoring of p_B0
ops_reduction reduce_1_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_1_p_B0");
double p_B0_1_output = 0.0;
int i01 = 360, j01 = 0, k01 = 100.0;
int monitor_range_1_p_B0[] = {i01, i01+1, j01, j01+1, k01, k01+1};
ops_par_loop(monitor_1_p_B0, "Reduction p_B0_1", opensbliblock00, 3, monitor_range_1_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_1_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_1_p_B0, &p_B0_1_output);

// Monitoring of p_B0
ops_reduction reduce_2_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_2_p_B0");
double p_B0_2_output = 0.0;
int i02 = 375, j02 = 0, k02 = 100.0;
int monitor_range_2_p_B0[] = {i02, i02+1, j02, j02+1, k02, k02+1};
ops_par_loop(monitor_2_p_B0, "Reduction p_B0_2", opensbliblock00, 3, monitor_range_2_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_2_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_2_p_B0, &p_B0_2_output);

// Monitoring of p_B0
ops_reduction reduce_3_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_3_p_B0");
double p_B0_3_output = 0.0;
int i03 = 656, j03 = 0, k03 = 100.0;
int monitor_range_3_p_B0[] = {i03, i03+1, j03, j03+1, k03, k03+1};
ops_par_loop(monitor_3_p_B0, "Reduction p_B0_3", opensbliblock00, 3, monitor_range_3_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_3_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_3_p_B0, &p_B0_3_output);

// Monitoring of p_B0
ops_reduction reduce_4_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_4_p_B0");
double p_B0_4_output = 0.0;
int i04 = 701, j04 = 0, k04 = 100.0;
int monitor_range_4_p_B0[] = {i04, i04+1, j04, j04+1, k04, k04+1};
ops_par_loop(monitor_4_p_B0, "Reduction p_B0_4", opensbliblock00, 3, monitor_range_4_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_4_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_4_p_B0, &p_B0_4_output);

// Monitoring of p_B0
ops_reduction reduce_5_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_5_p_B0");
double p_B0_5_output = 0.0;
int i05 = 716, j05 = 0, k05 = 100.0;
int monitor_range_5_p_B0[] = {i05, i05+1, j05, j05+1, k05, k05+1};
ops_par_loop(monitor_5_p_B0, "Reduction p_B0_5", opensbliblock00, 3, monitor_range_5_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_5_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_5_p_B0, &p_B0_5_output);

// Monitoring of p_B0
ops_reduction reduce_6_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_6_p_B0");
double p_B0_6_output = 0.0;
int i06 = 750, j06 = 0, k06 = 100.0;
int monitor_range_6_p_B0[] = {i06, i06+1, j06, j06+1, k06, k06+1};
ops_par_loop(monitor_6_p_B0, "Reduction p_B0_6", opensbliblock00, 3, monitor_range_6_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_6_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_6_p_B0, &p_B0_6_output);

// Monitoring of p_B0
ops_reduction reduce_7_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_7_p_B0");
double p_B0_7_output = 0.0;
int i07 = 798, j07 = 0, k07 = 100.0;
int monitor_range_7_p_B0[] = {i07, i07+1, j07, j07+1, k07, k07+1};
ops_par_loop(monitor_7_p_B0, "Reduction p_B0_7", opensbliblock00, 3, monitor_range_7_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_7_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_7_p_B0, &p_B0_7_output);

// Monitoring of p_B0
ops_reduction reduce_8_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_8_p_B0");
double p_B0_8_output = 0.0;
int i08 = 843, j08 = 0, k08 = 100.0;
int monitor_range_8_p_B0[] = {i08, i08+1, j08, j08+1, k08, k08+1};
ops_par_loop(monitor_8_p_B0, "Reduction p_B0_8", opensbliblock00, 3, monitor_range_8_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_8_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_8_p_B0, &p_B0_8_output);

// Monitoring of p_B0
ops_reduction reduce_9_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_9_p_B0");
double p_B0_9_output = 0.0;
int i09 = 900, j09 = 0, k09 = 100.0;
int monitor_range_9_p_B0[] = {i09, i09+1, j09, j09+1, k09, k09+1};
ops_par_loop(monitor_9_p_B0, "Reduction p_B0_9", opensbliblock00, 3, monitor_range_9_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_9_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_9_p_B0, &p_B0_9_output);

// Monitoring of p_B0
ops_reduction reduce_10_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_10_p_B0");
double p_B0_10_output = 0.0;
int i010 = 937, j010 = 0, k010 = 100.0;
int monitor_range_10_p_B0[] = {i010, i010+1, j010, j010+1, k010, k010+1};
ops_par_loop(monitor_10_p_B0, "Reduction p_B0_10", opensbliblock00, 3, monitor_range_10_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_10_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_10_p_B0, &p_B0_10_output);

// Monitoring of p_B0
ops_reduction reduce_11_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_11_p_B0");
double p_B0_11_output = 0.0;
int i011 = 1031, j011 = 0, k011 = 100.0;
int monitor_range_11_p_B0[] = {i011, i011+1, j011, j011+1, k011, k011+1};
ops_par_loop(monitor_11_p_B0, "Reduction p_B0_11", opensbliblock00, 3, monitor_range_11_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_11_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_11_p_B0, &p_B0_11_output);

// Monitoring of p_B0
ops_reduction reduce_12_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_12_p_B0");
double p_B0_12_output = 0.0;
int i012 = 1125, j012 = 0, k012 = 100.0;
int monitor_range_12_p_B0[] = {i012, i012+1, j012, j012+1, k012, k012+1};
ops_par_loop(monitor_12_p_B0, "Reduction p_B0_12", opensbliblock00, 3, monitor_range_12_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_12_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_12_p_B0, &p_B0_12_output);

// Monitoring of p_B0
ops_reduction reduce_13_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_13_p_B0");
double p_B0_13_output = 0.0;
int i013 = 1218, j013 = 0, k013 = 100.0;
int monitor_range_13_p_B0[] = {i013, i013+1, j013, j013+1, k013, k013+1};
ops_par_loop(monitor_13_p_B0, "Reduction p_B0_13", opensbliblock00, 3, monitor_range_13_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_13_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_13_p_B0, &p_B0_13_output);

// Monitoring of p_B0
ops_reduction reduce_14_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_14_p_B0");
double p_B0_14_output = 0.0;
int i014 = 1312, j014 = 0, k014 = 100.0;
int monitor_range_14_p_B0[] = {i014, i014+1, j014, j014+1, k014, k014+1};
ops_par_loop(monitor_14_p_B0, "Reduction p_B0_14", opensbliblock00, 3, monitor_range_14_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_14_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_14_p_B0, &p_B0_14_output);

// Monitoring of p_B0
ops_reduction reduce_15_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_15_p_B0");
double p_B0_15_output = 0.0;
int i015 = 1406, j015 = 0, k015 = 100.0;
int monitor_range_15_p_B0[] = {i015, i015+1, j015, j015+1, k015, k015+1};
ops_par_loop(monitor_15_p_B0, "Reduction p_B0_15", opensbliblock00, 3, monitor_range_15_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_15_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_15_p_B0, &p_B0_15_output);

// Monitoring of p_B0
ops_reduction reduce_16_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_16_p_B0");
double p_B0_16_output = 0.0;
int i016 = 1496, j016 = 0, k016 = 100.0;
int monitor_range_16_p_B0[] = {i016, i016+1, j016, j016+1, k016, k016+1};
ops_par_loop(monitor_16_p_B0, "Reduction p_B0_16", opensbliblock00, 3, monitor_range_16_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_16_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_16_p_B0, &p_B0_16_output);

// Monitoring of rhou0_B0
ops_reduction reduce_17_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_17_rhou0_B0");
double rhou0_B0_17_output = 0.0;
int i017 = 187, j017 = 1, k017 = 100.0;
int monitor_range_17_rhou0_B0[] = {i017, i017+1, j017, j017+1, k017, k017+1};
ops_par_loop(monitor_17_rhou0_B0, "Reduction rhou0_B0_17", opensbliblock00, 3, monitor_range_17_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_17_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_17_rhou0_B0, &rhou0_B0_17_output);

// Monitoring of rhou0_B0
ops_reduction reduce_18_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_18_rhou0_B0");
double rhou0_B0_18_output = 0.0;
int i018 = 360, j018 = 1, k018 = 100.0;
int monitor_range_18_rhou0_B0[] = {i018, i018+1, j018, j018+1, k018, k018+1};
ops_par_loop(monitor_18_rhou0_B0, "Reduction rhou0_B0_18", opensbliblock00, 3, monitor_range_18_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_18_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_18_rhou0_B0, &rhou0_B0_18_output);

// Monitoring of rhou0_B0
ops_reduction reduce_19_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_19_rhou0_B0");
double rhou0_B0_19_output = 0.0;
int i019 = 375, j019 = 1, k019 = 100.0;
int monitor_range_19_rhou0_B0[] = {i019, i019+1, j019, j019+1, k019, k019+1};
ops_par_loop(monitor_19_rhou0_B0, "Reduction rhou0_B0_19", opensbliblock00, 3, monitor_range_19_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_19_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_19_rhou0_B0, &rhou0_B0_19_output);

// Monitoring of rhou0_B0
ops_reduction reduce_20_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_20_rhou0_B0");
double rhou0_B0_20_output = 0.0;
int i020 = 656, j020 = 1, k020 = 100.0;
int monitor_range_20_rhou0_B0[] = {i020, i020+1, j020, j020+1, k020, k020+1};
ops_par_loop(monitor_20_rhou0_B0, "Reduction rhou0_B0_20", opensbliblock00, 3, monitor_range_20_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_20_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_20_rhou0_B0, &rhou0_B0_20_output);

// Monitoring of rhou0_B0
ops_reduction reduce_21_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_21_rhou0_B0");
double rhou0_B0_21_output = 0.0;
int i021 = 701, j021 = 1, k021 = 100.0;
int monitor_range_21_rhou0_B0[] = {i021, i021+1, j021, j021+1, k021, k021+1};
ops_par_loop(monitor_21_rhou0_B0, "Reduction rhou0_B0_21", opensbliblock00, 3, monitor_range_21_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_21_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_21_rhou0_B0, &rhou0_B0_21_output);

// Monitoring of rhou0_B0
ops_reduction reduce_22_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_22_rhou0_B0");
double rhou0_B0_22_output = 0.0;
int i022 = 716, j022 = 1, k022 = 100.0;
int monitor_range_22_rhou0_B0[] = {i022, i022+1, j022, j022+1, k022, k022+1};
ops_par_loop(monitor_22_rhou0_B0, "Reduction rhou0_B0_22", opensbliblock00, 3, monitor_range_22_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_22_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_22_rhou0_B0, &rhou0_B0_22_output);

// Monitoring of rhou0_B0
ops_reduction reduce_23_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_23_rhou0_B0");
double rhou0_B0_23_output = 0.0;
int i023 = 750, j023 = 1, k023 = 100.0;
int monitor_range_23_rhou0_B0[] = {i023, i023+1, j023, j023+1, k023, k023+1};
ops_par_loop(monitor_23_rhou0_B0, "Reduction rhou0_B0_23", opensbliblock00, 3, monitor_range_23_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_23_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_23_rhou0_B0, &rhou0_B0_23_output);

// Monitoring of rhou0_B0
ops_reduction reduce_24_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_24_rhou0_B0");
double rhou0_B0_24_output = 0.0;
int i024 = 798, j024 = 1, k024 = 100.0;
int monitor_range_24_rhou0_B0[] = {i024, i024+1, j024, j024+1, k024, k024+1};
ops_par_loop(monitor_24_rhou0_B0, "Reduction rhou0_B0_24", opensbliblock00, 3, monitor_range_24_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_24_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_24_rhou0_B0, &rhou0_B0_24_output);

// Monitoring of rhou0_B0
ops_reduction reduce_25_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_25_rhou0_B0");
double rhou0_B0_25_output = 0.0;
int i025 = 843, j025 = 1, k025 = 100.0;
int monitor_range_25_rhou0_B0[] = {i025, i025+1, j025, j025+1, k025, k025+1};
ops_par_loop(monitor_25_rhou0_B0, "Reduction rhou0_B0_25", opensbliblock00, 3, monitor_range_25_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_25_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_25_rhou0_B0, &rhou0_B0_25_output);

// Monitoring of rhou0_B0
ops_reduction reduce_26_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_26_rhou0_B0");
double rhou0_B0_26_output = 0.0;
int i026 = 900, j026 = 1, k026 = 100.0;
int monitor_range_26_rhou0_B0[] = {i026, i026+1, j026, j026+1, k026, k026+1};
ops_par_loop(monitor_26_rhou0_B0, "Reduction rhou0_B0_26", opensbliblock00, 3, monitor_range_26_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_26_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_26_rhou0_B0, &rhou0_B0_26_output);

// Monitoring of rhou0_B0
ops_reduction reduce_27_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_27_rhou0_B0");
double rhou0_B0_27_output = 0.0;
int i027 = 937, j027 = 1, k027 = 100.0;
int monitor_range_27_rhou0_B0[] = {i027, i027+1, j027, j027+1, k027, k027+1};
ops_par_loop(monitor_27_rhou0_B0, "Reduction rhou0_B0_27", opensbliblock00, 3, monitor_range_27_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_27_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_27_rhou0_B0, &rhou0_B0_27_output);

// Monitoring of rhou0_B0
ops_reduction reduce_28_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_28_rhou0_B0");
double rhou0_B0_28_output = 0.0;
int i028 = 1031, j028 = 1, k028 = 100.0;
int monitor_range_28_rhou0_B0[] = {i028, i028+1, j028, j028+1, k028, k028+1};
ops_par_loop(monitor_28_rhou0_B0, "Reduction rhou0_B0_28", opensbliblock00, 3, monitor_range_28_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_28_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_28_rhou0_B0, &rhou0_B0_28_output);

// Monitoring of rhou0_B0
ops_reduction reduce_29_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_29_rhou0_B0");
double rhou0_B0_29_output = 0.0;
int i029 = 1125, j029 = 1, k029 = 100.0;
int monitor_range_29_rhou0_B0[] = {i029, i029+1, j029, j029+1, k029, k029+1};
ops_par_loop(monitor_29_rhou0_B0, "Reduction rhou0_B0_29", opensbliblock00, 3, monitor_range_29_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_29_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_29_rhou0_B0, &rhou0_B0_29_output);

// Monitoring of rhou0_B0
ops_reduction reduce_30_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_30_rhou0_B0");
double rhou0_B0_30_output = 0.0;
int i030 = 1218, j030 = 1, k030 = 100.0;
int monitor_range_30_rhou0_B0[] = {i030, i030+1, j030, j030+1, k030, k030+1};
ops_par_loop(monitor_30_rhou0_B0, "Reduction rhou0_B0_30", opensbliblock00, 3, monitor_range_30_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_30_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_30_rhou0_B0, &rhou0_B0_30_output);

// Monitoring of rhou0_B0
ops_reduction reduce_31_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_31_rhou0_B0");
double rhou0_B0_31_output = 0.0;
int i031 = 1312, j031 = 1, k031 = 100.0;
int monitor_range_31_rhou0_B0[] = {i031, i031+1, j031, j031+1, k031, k031+1};
ops_par_loop(monitor_31_rhou0_B0, "Reduction rhou0_B0_31", opensbliblock00, 3, monitor_range_31_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_31_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_31_rhou0_B0, &rhou0_B0_31_output);

// Monitoring of rhou0_B0
ops_reduction reduce_32_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_32_rhou0_B0");
double rhou0_B0_32_output = 0.0;
int i032 = 1406, j032 = 1, k032 = 100.0;
int monitor_range_32_rhou0_B0[] = {i032, i032+1, j032, j032+1, k032, k032+1};
ops_par_loop(monitor_32_rhou0_B0, "Reduction rhou0_B0_32", opensbliblock00, 3, monitor_range_32_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_32_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_32_rhou0_B0, &rhou0_B0_32_output);

// Monitoring of rhou0_B0
ops_reduction reduce_33_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_33_rhou0_B0");
double rhou0_B0_33_output = 0.0;
int i033 = 1496, j033 = 1, k033 = 100.0;
int monitor_range_33_rhou0_B0[] = {i033, i033+1, j033, j033+1, k033, k033+1};
ops_par_loop(monitor_33_rhou0_B0, "Reduction rhou0_B0_33", opensbliblock00, 3, monitor_range_33_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_33_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_33_rhou0_B0, &rhou0_B0_33_output);

// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, p_B0_0_output, p_B0_1_output, p_B0_2_output, p_B0_3_output, p_B0_4_output, p_B0_5_output, p_B0_6_output, p_B0_7_output, p_B0_8_output, p_B0_9_output, p_B0_10_output, p_B0_11_output, p_B0_12_output, p_B0_13_output, p_B0_14_output, p_B0_15_output, p_B0_16_output, rhou0_B0_17_output, rhou0_B0_18_output, rhou0_B0_19_output, rhou0_B0_20_output, rhou0_B0_21_output, rhou0_B0_22_output, rhou0_B0_23_output, rhou0_B0_24_output, rhou0_B0_25_output, rhou0_B0_26_output, rhou0_B0_27_output, rhou0_B0_28_output, rhou0_B0_29_output, rhou0_B0_30_output, rhou0_B0_31_output, rhou0_B0_32_output, rhou0_B0_33_output);
fflush(f0);
}

if (fmod(1 + iter,write_output_file) == 0 || iter == 0){
HDF5_IO_Write_0_opensbliblock00_dynamic(opensbliblock00, iter, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, D11_B0, p_B0, HDF5_timing);
}

if (fmod(1 + iter,write_slices) == 0){
char slice_name0[80];
sprintf(slice_name0, "%d", iter + 1);
ops_write_plane_group_hdf5({{1, 1}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{1, 20}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 187}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 375}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 468}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 562}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 656}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 712}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 750}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 787}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 843}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 900}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 937}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1031}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1218}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1312}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1406}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
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