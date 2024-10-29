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
niter = 100000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.01;
block0np0 = 2000;
block0np1 = 300;
block0np2 = 200;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Delta2block0 = 20.0/(block0np2-1);
Twall = 1.9544;
Minf = 4.0;
stat_frequency = 50;
gama = 1.4;
RefT = 307;
SuthT = 110.4;
Re = 4000.0;
Pr = 0.72;
nsamples=niter/stat_frequency;
write_output_file = 50000;
HDF5_timing = 0;
write_slices = 2500;
shock_filter_control = 1.00000000000000;
gamma_m1 = -1 + gama;
omega_3 = 1.0;
phi_1 = 3.141;
tripA = 0.01;
beta_0 = 0.628;
b_f = 0.002;
omega_1 = 0.2;
omega_2 = 0.4;
phi_0 = 1.571;
xts = 50.0;
phi_2 = 4.712;
omega_0 = 0.1;
b = 5.0;
H = 115.0;
L = 400.0;
a = 20.0;
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
invnsamples = 1.0/(nsamples);
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
ops_decl_const("invnsamples" , 1, "double", &invnsamples);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("nsamples" , 1, "int", &nsamples);
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
simulation_time = 10000.0;
start_iter = 1000000;
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
ops_write_plane_group_hdf5({{1, 1}}, slice_name0, {{x0_B0, x2_B0}});
ops_write_plane_group_hdf5({{0, 250}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 450}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 500}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 550}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 625}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 750}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 800}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 850}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 900}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 950}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1000}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1050}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1100}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1150}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1200}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1250}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1375}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1500}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1550}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1625}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1750}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1875}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1950}}, slice_name0, {{x2_B0, x1_B0}});
ops_write_plane_group_hdf5({{0, 1975}}, slice_name0, {{x2_B0, x1_B0}});
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
if(fmod(iter+1, 1000) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/1000);
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
int iteration_range_6_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel006, "CRu0", opensbliblock00, 3, iteration_range_6_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_8_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel008, "CRu1", opensbliblock00, 3, iteration_range_8_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_16_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel016, "CRu2", opensbliblock00, 3, iteration_range_16_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_11_block0[] = {-3, block0np0 + 4, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel011, "CRU0", opensbliblock00, 3, iteration_range_11_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_12_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel012, "CRp", opensbliblock00, 3, iteration_range_12_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_17_block0[] = {0, block0np0, -3, block0np1 + 4, 0, block0np2};
ops_par_loop(opensbliblock00Kernel017, "CRU1", opensbliblock00, 3, iteration_range_17_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_20_block0[] = {0, block0np0, 0, block0np1, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel020, "CRU2", opensbliblock00, 3, iteration_range_20_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(U2_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_10_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4, -3, block0np2 + 4};
ops_par_loop(opensbliblock00Kernel010, "CRa", opensbliblock00, 3, iteration_range_10_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_27_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel027, "CRT_B0", opensbliblock00, 3, iteration_range_27_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00_00_00_3, "double", OPS_WRITE));

int iteration_range_22_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel022, "CRmu_B0", opensbliblock00, 3, iteration_range_22_block0,
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

int iteration_range_84_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel084, "Temporal solution advancement", opensbliblock00, 3, iteration_range_84_block0,
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
if (fmod(1 + iter,stat_frequency) == 0){
int iteration_range_82_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel082, "User kernel: None", opensbliblock00, 3, iteration_range_82_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_dat(E_mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhomean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u0mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1u1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW));
}

if (fmod(1 + iter,20) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, p_B0(250, 0, 100.0), p_B0(450, 0, 100.0), p_B0(500, 0, 100.0), p_B0(550, 0, 100.0), p_B0(600, 0, 100.0), p_B0(650, 0, 100.0), p_B0(700, 0, 100.0), p_B0(750, 0, 100.0), p_B0(800, 0, 100.0), p_B0(850, 0, 100.0), p_B0(900, 0, 100.0), p_B0(925, 0, 100.0), p_B0(950, 0, 100.0), p_B0(975, 0, 100.0), p_B0(1000, 0, 100.0), p_B0(1025, 0, 100.0), p_B0(1050, 0, 100.0), p_B0(1075, 0, 100.0), p_B0(1100, 0, 100.0), p_B0(1150, 0, 100.0), p_B0(1200, 0, 100.0), p_B0(1250, 0, 100.0), p_B0(1300, 0, 100.0), p_B0(1350, 0, 100.0), p_B0(1400, 0, 100.0), p_B0(1450, 0, 100.0), p_B0(1500, 0, 100.0), p_B0(1550, 0, 100.0), p_B0(1600, 0, 100.0), p_B0(1650, 0, 100.0), p_B0(1700, 0, 100.0), p_B0(1750, 0, 100.0), p_B0(1800, 0, 100.0), p_B0(1850, 0, 100.0), p_B0(1900, 0, 100.0), p_B0(1950, 0, 100.0), p_B0(1995, 0, 100.0), rhou0_B0(250, 1, 100.0), rhou0_B0(450, 1, 100.0), rhou0_B0(500, 1, 100.0), rhou0_B0(550, 1, 100.0), rhou0_B0(600, 1, 100.0), rhou0_B0(650, 1, 100.0), rhou0_B0(700, 1, 100.0), rhou0_B0(750, 1, 100.0), rhou0_B0(800, 1, 100.0), rhou0_B0(850, 1, 100.0), rhou0_B0(900, 1, 100.0), rhou0_B0(925, 1, 100.0), rhou0_B0(950, 1, 100.0), rhou0_B0(975, 1, 100.0), rhou0_B0(1000, 1, 100.0), rhou0_B0(1025, 1, 100.0), rhou0_B0(1050, 1, 100.0), rhou0_B0(1075, 1, 100.0), rhou0_B0(1100, 1, 100.0), rhou0_B0(1150, 1, 100.0), rhou0_B0(1200, 1, 100.0), rhou0_B0(1250, 1, 100.0), rhou0_B0(1300, 1, 100.0), rhou0_B0(1350, 1, 100.0), rhou0_B0(1400, 1, 100.0), rhou0_B0(1450, 1, 100.0), rhou0_B0(1500, 1, 100.0), rhou0_B0(1550, 1, 100.0), rhou0_B0(1600, 1, 100.0), rhou0_B0(1650, 1, 100.0), rhou0_B0(1700, 1, 100.0), rhou0_B0(1750, 1, 100.0), rhou0_B0(1800, 1, 100.0), rhou0_B0(1850, 1, 100.0), rhou0_B0(1900, 1, 100.0), rhou0_B0(1950, 1, 100.0), rhou0_B0(1995, 1, 100.0), rhou2_B0(250, 1, 100.0), rhou2_B0(450, 1, 100.0), rhou2_B0(500, 1, 100.0), rhou2_B0(550, 1, 100.0), rhou2_B0(600, 1, 100.0), rhou2_B0(650, 1, 100.0), rhou2_B0(700, 1, 100.0), rhou2_B0(750, 1, 100.0), rhou2_B0(800, 1, 100.0), rhou2_B0(850, 1, 100.0), rhou2_B0(900, 1, 100.0), rhou2_B0(925, 1, 100.0), rhou2_B0(950, 1, 100.0), rhou2_B0(975, 1, 100.0), rhou2_B0(1000, 1, 100.0), rhou2_B0(1025, 1, 100.0), rhou2_B0(1050, 1, 100.0), rhou2_B0(1075, 1, 100.0), rhou2_B0(1100, 1, 100.0), rhou2_B0(1150, 1, 100.0), rhou2_B0(1200, 1, 100.0), rhou2_B0(1250, 1, 100.0), rhou2_B0(1300, 1, 100.0), rhou2_B0(1350, 1, 100.0), rhou2_B0(1400, 1, 100.0), rhou2_B0(1450, 1, 100.0), rhou2_B0(1500, 1, 100.0), rhou2_B0(1550, 1, 100.0), rhou2_B0(1600, 1, 100.0), rhou2_B0(1650, 1, 100.0), rhou2_B0(1700, 1, 100.0), rhou2_B0(1750, 1, 100.0), rhou2_B0(1800, 1, 100.0), rhou2_B0(1850, 1, 100.0), rhou2_B0(1900, 1, 100.0), rhou2_B0(1950, 1, 100.0), rhou2_B0(1995, 1, 100.0)\n");}
// Monitoring of p_B0
ops_reduction reduce_0_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_0_p_B0");
double p_B0_0_output = 0.0;
int i00 = 250, j00 = 0, k00 = 100.0;
int monitor_range_0_p_B0[] = {i00, i00+1, j00, j00+1, k00, k00+1};
ops_par_loop(monitor_0_p_B0, "Reduction p_B0_0", opensbliblock00, 3, monitor_range_0_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_0_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_0_p_B0, &p_B0_0_output);

// Monitoring of p_B0
ops_reduction reduce_1_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_1_p_B0");
double p_B0_1_output = 0.0;
int i01 = 450, j01 = 0, k01 = 100.0;
int monitor_range_1_p_B0[] = {i01, i01+1, j01, j01+1, k01, k01+1};
ops_par_loop(monitor_1_p_B0, "Reduction p_B0_1", opensbliblock00, 3, monitor_range_1_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_1_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_1_p_B0, &p_B0_1_output);

// Monitoring of p_B0
ops_reduction reduce_2_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_2_p_B0");
double p_B0_2_output = 0.0;
int i02 = 500, j02 = 0, k02 = 100.0;
int monitor_range_2_p_B0[] = {i02, i02+1, j02, j02+1, k02, k02+1};
ops_par_loop(monitor_2_p_B0, "Reduction p_B0_2", opensbliblock00, 3, monitor_range_2_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_2_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_2_p_B0, &p_B0_2_output);

// Monitoring of p_B0
ops_reduction reduce_3_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_3_p_B0");
double p_B0_3_output = 0.0;
int i03 = 550, j03 = 0, k03 = 100.0;
int monitor_range_3_p_B0[] = {i03, i03+1, j03, j03+1, k03, k03+1};
ops_par_loop(monitor_3_p_B0, "Reduction p_B0_3", opensbliblock00, 3, monitor_range_3_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_3_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_3_p_B0, &p_B0_3_output);

// Monitoring of p_B0
ops_reduction reduce_4_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_4_p_B0");
double p_B0_4_output = 0.0;
int i04 = 600, j04 = 0, k04 = 100.0;
int monitor_range_4_p_B0[] = {i04, i04+1, j04, j04+1, k04, k04+1};
ops_par_loop(monitor_4_p_B0, "Reduction p_B0_4", opensbliblock00, 3, monitor_range_4_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_4_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_4_p_B0, &p_B0_4_output);

// Monitoring of p_B0
ops_reduction reduce_5_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_5_p_B0");
double p_B0_5_output = 0.0;
int i05 = 650, j05 = 0, k05 = 100.0;
int monitor_range_5_p_B0[] = {i05, i05+1, j05, j05+1, k05, k05+1};
ops_par_loop(monitor_5_p_B0, "Reduction p_B0_5", opensbliblock00, 3, monitor_range_5_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_5_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_5_p_B0, &p_B0_5_output);

// Monitoring of p_B0
ops_reduction reduce_6_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_6_p_B0");
double p_B0_6_output = 0.0;
int i06 = 700, j06 = 0, k06 = 100.0;
int monitor_range_6_p_B0[] = {i06, i06+1, j06, j06+1, k06, k06+1};
ops_par_loop(monitor_6_p_B0, "Reduction p_B0_6", opensbliblock00, 3, monitor_range_6_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_6_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_6_p_B0, &p_B0_6_output);

// Monitoring of p_B0
ops_reduction reduce_7_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_7_p_B0");
double p_B0_7_output = 0.0;
int i07 = 750, j07 = 0, k07 = 100.0;
int monitor_range_7_p_B0[] = {i07, i07+1, j07, j07+1, k07, k07+1};
ops_par_loop(monitor_7_p_B0, "Reduction p_B0_7", opensbliblock00, 3, monitor_range_7_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_7_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_7_p_B0, &p_B0_7_output);

// Monitoring of p_B0
ops_reduction reduce_8_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_8_p_B0");
double p_B0_8_output = 0.0;
int i08 = 800, j08 = 0, k08 = 100.0;
int monitor_range_8_p_B0[] = {i08, i08+1, j08, j08+1, k08, k08+1};
ops_par_loop(monitor_8_p_B0, "Reduction p_B0_8", opensbliblock00, 3, monitor_range_8_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_8_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_8_p_B0, &p_B0_8_output);

// Monitoring of p_B0
ops_reduction reduce_9_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_9_p_B0");
double p_B0_9_output = 0.0;
int i09 = 850, j09 = 0, k09 = 100.0;
int monitor_range_9_p_B0[] = {i09, i09+1, j09, j09+1, k09, k09+1};
ops_par_loop(monitor_9_p_B0, "Reduction p_B0_9", opensbliblock00, 3, monitor_range_9_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_9_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_9_p_B0, &p_B0_9_output);

// Monitoring of p_B0
ops_reduction reduce_10_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_10_p_B0");
double p_B0_10_output = 0.0;
int i010 = 900, j010 = 0, k010 = 100.0;
int monitor_range_10_p_B0[] = {i010, i010+1, j010, j010+1, k010, k010+1};
ops_par_loop(monitor_10_p_B0, "Reduction p_B0_10", opensbliblock00, 3, monitor_range_10_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_10_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_10_p_B0, &p_B0_10_output);

// Monitoring of p_B0
ops_reduction reduce_11_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_11_p_B0");
double p_B0_11_output = 0.0;
int i011 = 925, j011 = 0, k011 = 100.0;
int monitor_range_11_p_B0[] = {i011, i011+1, j011, j011+1, k011, k011+1};
ops_par_loop(monitor_11_p_B0, "Reduction p_B0_11", opensbliblock00, 3, monitor_range_11_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_11_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_11_p_B0, &p_B0_11_output);

// Monitoring of p_B0
ops_reduction reduce_12_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_12_p_B0");
double p_B0_12_output = 0.0;
int i012 = 950, j012 = 0, k012 = 100.0;
int monitor_range_12_p_B0[] = {i012, i012+1, j012, j012+1, k012, k012+1};
ops_par_loop(monitor_12_p_B0, "Reduction p_B0_12", opensbliblock00, 3, monitor_range_12_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_12_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_12_p_B0, &p_B0_12_output);

// Monitoring of p_B0
ops_reduction reduce_13_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_13_p_B0");
double p_B0_13_output = 0.0;
int i013 = 975, j013 = 0, k013 = 100.0;
int monitor_range_13_p_B0[] = {i013, i013+1, j013, j013+1, k013, k013+1};
ops_par_loop(monitor_13_p_B0, "Reduction p_B0_13", opensbliblock00, 3, monitor_range_13_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_13_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_13_p_B0, &p_B0_13_output);

// Monitoring of p_B0
ops_reduction reduce_14_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_14_p_B0");
double p_B0_14_output = 0.0;
int i014 = 1000, j014 = 0, k014 = 100.0;
int monitor_range_14_p_B0[] = {i014, i014+1, j014, j014+1, k014, k014+1};
ops_par_loop(monitor_14_p_B0, "Reduction p_B0_14", opensbliblock00, 3, monitor_range_14_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_14_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_14_p_B0, &p_B0_14_output);

// Monitoring of p_B0
ops_reduction reduce_15_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_15_p_B0");
double p_B0_15_output = 0.0;
int i015 = 1025, j015 = 0, k015 = 100.0;
int monitor_range_15_p_B0[] = {i015, i015+1, j015, j015+1, k015, k015+1};
ops_par_loop(monitor_15_p_B0, "Reduction p_B0_15", opensbliblock00, 3, monitor_range_15_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_15_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_15_p_B0, &p_B0_15_output);

// Monitoring of p_B0
ops_reduction reduce_16_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_16_p_B0");
double p_B0_16_output = 0.0;
int i016 = 1050, j016 = 0, k016 = 100.0;
int monitor_range_16_p_B0[] = {i016, i016+1, j016, j016+1, k016, k016+1};
ops_par_loop(monitor_16_p_B0, "Reduction p_B0_16", opensbliblock00, 3, monitor_range_16_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_16_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_16_p_B0, &p_B0_16_output);

// Monitoring of p_B0
ops_reduction reduce_17_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_17_p_B0");
double p_B0_17_output = 0.0;
int i017 = 1075, j017 = 0, k017 = 100.0;
int monitor_range_17_p_B0[] = {i017, i017+1, j017, j017+1, k017, k017+1};
ops_par_loop(monitor_17_p_B0, "Reduction p_B0_17", opensbliblock00, 3, monitor_range_17_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_17_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_17_p_B0, &p_B0_17_output);

// Monitoring of p_B0
ops_reduction reduce_18_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_18_p_B0");
double p_B0_18_output = 0.0;
int i018 = 1100, j018 = 0, k018 = 100.0;
int monitor_range_18_p_B0[] = {i018, i018+1, j018, j018+1, k018, k018+1};
ops_par_loop(monitor_18_p_B0, "Reduction p_B0_18", opensbliblock00, 3, monitor_range_18_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_18_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_18_p_B0, &p_B0_18_output);

// Monitoring of p_B0
ops_reduction reduce_19_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_19_p_B0");
double p_B0_19_output = 0.0;
int i019 = 1150, j019 = 0, k019 = 100.0;
int monitor_range_19_p_B0[] = {i019, i019+1, j019, j019+1, k019, k019+1};
ops_par_loop(monitor_19_p_B0, "Reduction p_B0_19", opensbliblock00, 3, monitor_range_19_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_19_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_19_p_B0, &p_B0_19_output);

// Monitoring of p_B0
ops_reduction reduce_20_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_20_p_B0");
double p_B0_20_output = 0.0;
int i020 = 1200, j020 = 0, k020 = 100.0;
int monitor_range_20_p_B0[] = {i020, i020+1, j020, j020+1, k020, k020+1};
ops_par_loop(monitor_20_p_B0, "Reduction p_B0_20", opensbliblock00, 3, monitor_range_20_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_20_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_20_p_B0, &p_B0_20_output);

// Monitoring of p_B0
ops_reduction reduce_21_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_21_p_B0");
double p_B0_21_output = 0.0;
int i021 = 1250, j021 = 0, k021 = 100.0;
int monitor_range_21_p_B0[] = {i021, i021+1, j021, j021+1, k021, k021+1};
ops_par_loop(monitor_21_p_B0, "Reduction p_B0_21", opensbliblock00, 3, monitor_range_21_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_21_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_21_p_B0, &p_B0_21_output);

// Monitoring of p_B0
ops_reduction reduce_22_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_22_p_B0");
double p_B0_22_output = 0.0;
int i022 = 1300, j022 = 0, k022 = 100.0;
int monitor_range_22_p_B0[] = {i022, i022+1, j022, j022+1, k022, k022+1};
ops_par_loop(monitor_22_p_B0, "Reduction p_B0_22", opensbliblock00, 3, monitor_range_22_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_22_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_22_p_B0, &p_B0_22_output);

// Monitoring of p_B0
ops_reduction reduce_23_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_23_p_B0");
double p_B0_23_output = 0.0;
int i023 = 1350, j023 = 0, k023 = 100.0;
int monitor_range_23_p_B0[] = {i023, i023+1, j023, j023+1, k023, k023+1};
ops_par_loop(monitor_23_p_B0, "Reduction p_B0_23", opensbliblock00, 3, monitor_range_23_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_23_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_23_p_B0, &p_B0_23_output);

// Monitoring of p_B0
ops_reduction reduce_24_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_24_p_B0");
double p_B0_24_output = 0.0;
int i024 = 1400, j024 = 0, k024 = 100.0;
int monitor_range_24_p_B0[] = {i024, i024+1, j024, j024+1, k024, k024+1};
ops_par_loop(monitor_24_p_B0, "Reduction p_B0_24", opensbliblock00, 3, monitor_range_24_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_24_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_24_p_B0, &p_B0_24_output);

// Monitoring of p_B0
ops_reduction reduce_25_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_25_p_B0");
double p_B0_25_output = 0.0;
int i025 = 1450, j025 = 0, k025 = 100.0;
int monitor_range_25_p_B0[] = {i025, i025+1, j025, j025+1, k025, k025+1};
ops_par_loop(monitor_25_p_B0, "Reduction p_B0_25", opensbliblock00, 3, monitor_range_25_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_25_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_25_p_B0, &p_B0_25_output);

// Monitoring of p_B0
ops_reduction reduce_26_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_26_p_B0");
double p_B0_26_output = 0.0;
int i026 = 1500, j026 = 0, k026 = 100.0;
int monitor_range_26_p_B0[] = {i026, i026+1, j026, j026+1, k026, k026+1};
ops_par_loop(monitor_26_p_B0, "Reduction p_B0_26", opensbliblock00, 3, monitor_range_26_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_26_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_26_p_B0, &p_B0_26_output);

// Monitoring of p_B0
ops_reduction reduce_27_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_27_p_B0");
double p_B0_27_output = 0.0;
int i027 = 1550, j027 = 0, k027 = 100.0;
int monitor_range_27_p_B0[] = {i027, i027+1, j027, j027+1, k027, k027+1};
ops_par_loop(monitor_27_p_B0, "Reduction p_B0_27", opensbliblock00, 3, monitor_range_27_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_27_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_27_p_B0, &p_B0_27_output);

// Monitoring of p_B0
ops_reduction reduce_28_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_28_p_B0");
double p_B0_28_output = 0.0;
int i028 = 1600, j028 = 0, k028 = 100.0;
int monitor_range_28_p_B0[] = {i028, i028+1, j028, j028+1, k028, k028+1};
ops_par_loop(monitor_28_p_B0, "Reduction p_B0_28", opensbliblock00, 3, monitor_range_28_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_28_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_28_p_B0, &p_B0_28_output);

// Monitoring of p_B0
ops_reduction reduce_29_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_29_p_B0");
double p_B0_29_output = 0.0;
int i029 = 1650, j029 = 0, k029 = 100.0;
int monitor_range_29_p_B0[] = {i029, i029+1, j029, j029+1, k029, k029+1};
ops_par_loop(monitor_29_p_B0, "Reduction p_B0_29", opensbliblock00, 3, monitor_range_29_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_29_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_29_p_B0, &p_B0_29_output);

// Monitoring of p_B0
ops_reduction reduce_30_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_30_p_B0");
double p_B0_30_output = 0.0;
int i030 = 1700, j030 = 0, k030 = 100.0;
int monitor_range_30_p_B0[] = {i030, i030+1, j030, j030+1, k030, k030+1};
ops_par_loop(monitor_30_p_B0, "Reduction p_B0_30", opensbliblock00, 3, monitor_range_30_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_30_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_30_p_B0, &p_B0_30_output);

// Monitoring of p_B0
ops_reduction reduce_31_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_31_p_B0");
double p_B0_31_output = 0.0;
int i031 = 1750, j031 = 0, k031 = 100.0;
int monitor_range_31_p_B0[] = {i031, i031+1, j031, j031+1, k031, k031+1};
ops_par_loop(monitor_31_p_B0, "Reduction p_B0_31", opensbliblock00, 3, monitor_range_31_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_31_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_31_p_B0, &p_B0_31_output);

// Monitoring of p_B0
ops_reduction reduce_32_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_32_p_B0");
double p_B0_32_output = 0.0;
int i032 = 1800, j032 = 0, k032 = 100.0;
int monitor_range_32_p_B0[] = {i032, i032+1, j032, j032+1, k032, k032+1};
ops_par_loop(monitor_32_p_B0, "Reduction p_B0_32", opensbliblock00, 3, monitor_range_32_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_32_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_32_p_B0, &p_B0_32_output);

// Monitoring of p_B0
ops_reduction reduce_33_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_33_p_B0");
double p_B0_33_output = 0.0;
int i033 = 1850, j033 = 0, k033 = 100.0;
int monitor_range_33_p_B0[] = {i033, i033+1, j033, j033+1, k033, k033+1};
ops_par_loop(monitor_33_p_B0, "Reduction p_B0_33", opensbliblock00, 3, monitor_range_33_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_33_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_33_p_B0, &p_B0_33_output);

// Monitoring of p_B0
ops_reduction reduce_34_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_34_p_B0");
double p_B0_34_output = 0.0;
int i034 = 1900, j034 = 0, k034 = 100.0;
int monitor_range_34_p_B0[] = {i034, i034+1, j034, j034+1, k034, k034+1};
ops_par_loop(monitor_34_p_B0, "Reduction p_B0_34", opensbliblock00, 3, monitor_range_34_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_34_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_34_p_B0, &p_B0_34_output);

// Monitoring of p_B0
ops_reduction reduce_35_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_35_p_B0");
double p_B0_35_output = 0.0;
int i035 = 1950, j035 = 0, k035 = 100.0;
int monitor_range_35_p_B0[] = {i035, i035+1, j035, j035+1, k035, k035+1};
ops_par_loop(monitor_35_p_B0, "Reduction p_B0_35", opensbliblock00, 3, monitor_range_35_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_35_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_35_p_B0, &p_B0_35_output);

// Monitoring of p_B0
ops_reduction reduce_36_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_36_p_B0");
double p_B0_36_output = 0.0;
int i036 = 1995, j036 = 0, k036 = 100.0;
int monitor_range_36_p_B0[] = {i036, i036+1, j036, j036+1, k036, k036+1};
ops_par_loop(monitor_36_p_B0, "Reduction p_B0_36", opensbliblock00, 3, monitor_range_36_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_36_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_36_p_B0, &p_B0_36_output);

// Monitoring of rhou0_B0
ops_reduction reduce_37_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_37_rhou0_B0");
double rhou0_B0_37_output = 0.0;
int i037 = 250, j037 = 1, k037 = 100.0;
int monitor_range_37_rhou0_B0[] = {i037, i037+1, j037, j037+1, k037, k037+1};
ops_par_loop(monitor_37_rhou0_B0, "Reduction rhou0_B0_37", opensbliblock00, 3, monitor_range_37_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_37_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_37_rhou0_B0, &rhou0_B0_37_output);

// Monitoring of rhou0_B0
ops_reduction reduce_38_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_38_rhou0_B0");
double rhou0_B0_38_output = 0.0;
int i038 = 450, j038 = 1, k038 = 100.0;
int monitor_range_38_rhou0_B0[] = {i038, i038+1, j038, j038+1, k038, k038+1};
ops_par_loop(monitor_38_rhou0_B0, "Reduction rhou0_B0_38", opensbliblock00, 3, monitor_range_38_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_38_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_38_rhou0_B0, &rhou0_B0_38_output);

// Monitoring of rhou0_B0
ops_reduction reduce_39_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_39_rhou0_B0");
double rhou0_B0_39_output = 0.0;
int i039 = 500, j039 = 1, k039 = 100.0;
int monitor_range_39_rhou0_B0[] = {i039, i039+1, j039, j039+1, k039, k039+1};
ops_par_loop(monitor_39_rhou0_B0, "Reduction rhou0_B0_39", opensbliblock00, 3, monitor_range_39_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_39_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_39_rhou0_B0, &rhou0_B0_39_output);

// Monitoring of rhou0_B0
ops_reduction reduce_40_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_40_rhou0_B0");
double rhou0_B0_40_output = 0.0;
int i040 = 550, j040 = 1, k040 = 100.0;
int monitor_range_40_rhou0_B0[] = {i040, i040+1, j040, j040+1, k040, k040+1};
ops_par_loop(monitor_40_rhou0_B0, "Reduction rhou0_B0_40", opensbliblock00, 3, monitor_range_40_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_40_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_40_rhou0_B0, &rhou0_B0_40_output);

// Monitoring of rhou0_B0
ops_reduction reduce_41_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_41_rhou0_B0");
double rhou0_B0_41_output = 0.0;
int i041 = 600, j041 = 1, k041 = 100.0;
int monitor_range_41_rhou0_B0[] = {i041, i041+1, j041, j041+1, k041, k041+1};
ops_par_loop(monitor_41_rhou0_B0, "Reduction rhou0_B0_41", opensbliblock00, 3, monitor_range_41_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_41_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_41_rhou0_B0, &rhou0_B0_41_output);

// Monitoring of rhou0_B0
ops_reduction reduce_42_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_42_rhou0_B0");
double rhou0_B0_42_output = 0.0;
int i042 = 650, j042 = 1, k042 = 100.0;
int monitor_range_42_rhou0_B0[] = {i042, i042+1, j042, j042+1, k042, k042+1};
ops_par_loop(monitor_42_rhou0_B0, "Reduction rhou0_B0_42", opensbliblock00, 3, monitor_range_42_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_42_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_42_rhou0_B0, &rhou0_B0_42_output);

// Monitoring of rhou0_B0
ops_reduction reduce_43_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_43_rhou0_B0");
double rhou0_B0_43_output = 0.0;
int i043 = 700, j043 = 1, k043 = 100.0;
int monitor_range_43_rhou0_B0[] = {i043, i043+1, j043, j043+1, k043, k043+1};
ops_par_loop(monitor_43_rhou0_B0, "Reduction rhou0_B0_43", opensbliblock00, 3, monitor_range_43_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_43_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_43_rhou0_B0, &rhou0_B0_43_output);

// Monitoring of rhou0_B0
ops_reduction reduce_44_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_44_rhou0_B0");
double rhou0_B0_44_output = 0.0;
int i044 = 750, j044 = 1, k044 = 100.0;
int monitor_range_44_rhou0_B0[] = {i044, i044+1, j044, j044+1, k044, k044+1};
ops_par_loop(monitor_44_rhou0_B0, "Reduction rhou0_B0_44", opensbliblock00, 3, monitor_range_44_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_44_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_44_rhou0_B0, &rhou0_B0_44_output);

// Monitoring of rhou0_B0
ops_reduction reduce_45_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_45_rhou0_B0");
double rhou0_B0_45_output = 0.0;
int i045 = 800, j045 = 1, k045 = 100.0;
int monitor_range_45_rhou0_B0[] = {i045, i045+1, j045, j045+1, k045, k045+1};
ops_par_loop(monitor_45_rhou0_B0, "Reduction rhou0_B0_45", opensbliblock00, 3, monitor_range_45_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_45_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_45_rhou0_B0, &rhou0_B0_45_output);

// Monitoring of rhou0_B0
ops_reduction reduce_46_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_46_rhou0_B0");
double rhou0_B0_46_output = 0.0;
int i046 = 850, j046 = 1, k046 = 100.0;
int monitor_range_46_rhou0_B0[] = {i046, i046+1, j046, j046+1, k046, k046+1};
ops_par_loop(monitor_46_rhou0_B0, "Reduction rhou0_B0_46", opensbliblock00, 3, monitor_range_46_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_46_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_46_rhou0_B0, &rhou0_B0_46_output);

// Monitoring of rhou0_B0
ops_reduction reduce_47_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_47_rhou0_B0");
double rhou0_B0_47_output = 0.0;
int i047 = 900, j047 = 1, k047 = 100.0;
int monitor_range_47_rhou0_B0[] = {i047, i047+1, j047, j047+1, k047, k047+1};
ops_par_loop(monitor_47_rhou0_B0, "Reduction rhou0_B0_47", opensbliblock00, 3, monitor_range_47_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_47_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_47_rhou0_B0, &rhou0_B0_47_output);

// Monitoring of rhou0_B0
ops_reduction reduce_48_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_48_rhou0_B0");
double rhou0_B0_48_output = 0.0;
int i048 = 925, j048 = 1, k048 = 100.0;
int monitor_range_48_rhou0_B0[] = {i048, i048+1, j048, j048+1, k048, k048+1};
ops_par_loop(monitor_48_rhou0_B0, "Reduction rhou0_B0_48", opensbliblock00, 3, monitor_range_48_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_48_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_48_rhou0_B0, &rhou0_B0_48_output);

// Monitoring of rhou0_B0
ops_reduction reduce_49_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_49_rhou0_B0");
double rhou0_B0_49_output = 0.0;
int i049 = 950, j049 = 1, k049 = 100.0;
int monitor_range_49_rhou0_B0[] = {i049, i049+1, j049, j049+1, k049, k049+1};
ops_par_loop(monitor_49_rhou0_B0, "Reduction rhou0_B0_49", opensbliblock00, 3, monitor_range_49_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_49_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_49_rhou0_B0, &rhou0_B0_49_output);

// Monitoring of rhou0_B0
ops_reduction reduce_50_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_50_rhou0_B0");
double rhou0_B0_50_output = 0.0;
int i050 = 975, j050 = 1, k050 = 100.0;
int monitor_range_50_rhou0_B0[] = {i050, i050+1, j050, j050+1, k050, k050+1};
ops_par_loop(monitor_50_rhou0_B0, "Reduction rhou0_B0_50", opensbliblock00, 3, monitor_range_50_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_50_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_50_rhou0_B0, &rhou0_B0_50_output);

// Monitoring of rhou0_B0
ops_reduction reduce_51_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_51_rhou0_B0");
double rhou0_B0_51_output = 0.0;
int i051 = 1000, j051 = 1, k051 = 100.0;
int monitor_range_51_rhou0_B0[] = {i051, i051+1, j051, j051+1, k051, k051+1};
ops_par_loop(monitor_51_rhou0_B0, "Reduction rhou0_B0_51", opensbliblock00, 3, monitor_range_51_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_51_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_51_rhou0_B0, &rhou0_B0_51_output);

// Monitoring of rhou0_B0
ops_reduction reduce_52_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_52_rhou0_B0");
double rhou0_B0_52_output = 0.0;
int i052 = 1025, j052 = 1, k052 = 100.0;
int monitor_range_52_rhou0_B0[] = {i052, i052+1, j052, j052+1, k052, k052+1};
ops_par_loop(monitor_52_rhou0_B0, "Reduction rhou0_B0_52", opensbliblock00, 3, monitor_range_52_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_52_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_52_rhou0_B0, &rhou0_B0_52_output);

// Monitoring of rhou0_B0
ops_reduction reduce_53_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_53_rhou0_B0");
double rhou0_B0_53_output = 0.0;
int i053 = 1050, j053 = 1, k053 = 100.0;
int monitor_range_53_rhou0_B0[] = {i053, i053+1, j053, j053+1, k053, k053+1};
ops_par_loop(monitor_53_rhou0_B0, "Reduction rhou0_B0_53", opensbliblock00, 3, monitor_range_53_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_53_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_53_rhou0_B0, &rhou0_B0_53_output);

// Monitoring of rhou0_B0
ops_reduction reduce_54_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_54_rhou0_B0");
double rhou0_B0_54_output = 0.0;
int i054 = 1075, j054 = 1, k054 = 100.0;
int monitor_range_54_rhou0_B0[] = {i054, i054+1, j054, j054+1, k054, k054+1};
ops_par_loop(monitor_54_rhou0_B0, "Reduction rhou0_B0_54", opensbliblock00, 3, monitor_range_54_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_54_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_54_rhou0_B0, &rhou0_B0_54_output);

// Monitoring of rhou0_B0
ops_reduction reduce_55_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_55_rhou0_B0");
double rhou0_B0_55_output = 0.0;
int i055 = 1100, j055 = 1, k055 = 100.0;
int monitor_range_55_rhou0_B0[] = {i055, i055+1, j055, j055+1, k055, k055+1};
ops_par_loop(monitor_55_rhou0_B0, "Reduction rhou0_B0_55", opensbliblock00, 3, monitor_range_55_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_55_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_55_rhou0_B0, &rhou0_B0_55_output);

// Monitoring of rhou0_B0
ops_reduction reduce_56_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_56_rhou0_B0");
double rhou0_B0_56_output = 0.0;
int i056 = 1150, j056 = 1, k056 = 100.0;
int monitor_range_56_rhou0_B0[] = {i056, i056+1, j056, j056+1, k056, k056+1};
ops_par_loop(monitor_56_rhou0_B0, "Reduction rhou0_B0_56", opensbliblock00, 3, monitor_range_56_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_56_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_56_rhou0_B0, &rhou0_B0_56_output);

// Monitoring of rhou0_B0
ops_reduction reduce_57_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_57_rhou0_B0");
double rhou0_B0_57_output = 0.0;
int i057 = 1200, j057 = 1, k057 = 100.0;
int monitor_range_57_rhou0_B0[] = {i057, i057+1, j057, j057+1, k057, k057+1};
ops_par_loop(monitor_57_rhou0_B0, "Reduction rhou0_B0_57", opensbliblock00, 3, monitor_range_57_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_57_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_57_rhou0_B0, &rhou0_B0_57_output);

// Monitoring of rhou0_B0
ops_reduction reduce_58_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_58_rhou0_B0");
double rhou0_B0_58_output = 0.0;
int i058 = 1250, j058 = 1, k058 = 100.0;
int monitor_range_58_rhou0_B0[] = {i058, i058+1, j058, j058+1, k058, k058+1};
ops_par_loop(monitor_58_rhou0_B0, "Reduction rhou0_B0_58", opensbliblock00, 3, monitor_range_58_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_58_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_58_rhou0_B0, &rhou0_B0_58_output);

// Monitoring of rhou0_B0
ops_reduction reduce_59_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_59_rhou0_B0");
double rhou0_B0_59_output = 0.0;
int i059 = 1300, j059 = 1, k059 = 100.0;
int monitor_range_59_rhou0_B0[] = {i059, i059+1, j059, j059+1, k059, k059+1};
ops_par_loop(monitor_59_rhou0_B0, "Reduction rhou0_B0_59", opensbliblock00, 3, monitor_range_59_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_59_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_59_rhou0_B0, &rhou0_B0_59_output);

// Monitoring of rhou0_B0
ops_reduction reduce_60_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_60_rhou0_B0");
double rhou0_B0_60_output = 0.0;
int i060 = 1350, j060 = 1, k060 = 100.0;
int monitor_range_60_rhou0_B0[] = {i060, i060+1, j060, j060+1, k060, k060+1};
ops_par_loop(monitor_60_rhou0_B0, "Reduction rhou0_B0_60", opensbliblock00, 3, monitor_range_60_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_60_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_60_rhou0_B0, &rhou0_B0_60_output);

// Monitoring of rhou0_B0
ops_reduction reduce_61_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_61_rhou0_B0");
double rhou0_B0_61_output = 0.0;
int i061 = 1400, j061 = 1, k061 = 100.0;
int monitor_range_61_rhou0_B0[] = {i061, i061+1, j061, j061+1, k061, k061+1};
ops_par_loop(monitor_61_rhou0_B0, "Reduction rhou0_B0_61", opensbliblock00, 3, monitor_range_61_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_61_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_61_rhou0_B0, &rhou0_B0_61_output);

// Monitoring of rhou0_B0
ops_reduction reduce_62_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_62_rhou0_B0");
double rhou0_B0_62_output = 0.0;
int i062 = 1450, j062 = 1, k062 = 100.0;
int monitor_range_62_rhou0_B0[] = {i062, i062+1, j062, j062+1, k062, k062+1};
ops_par_loop(monitor_62_rhou0_B0, "Reduction rhou0_B0_62", opensbliblock00, 3, monitor_range_62_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_62_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_62_rhou0_B0, &rhou0_B0_62_output);

// Monitoring of rhou0_B0
ops_reduction reduce_63_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_63_rhou0_B0");
double rhou0_B0_63_output = 0.0;
int i063 = 1500, j063 = 1, k063 = 100.0;
int monitor_range_63_rhou0_B0[] = {i063, i063+1, j063, j063+1, k063, k063+1};
ops_par_loop(monitor_63_rhou0_B0, "Reduction rhou0_B0_63", opensbliblock00, 3, monitor_range_63_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_63_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_63_rhou0_B0, &rhou0_B0_63_output);

// Monitoring of rhou0_B0
ops_reduction reduce_64_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_64_rhou0_B0");
double rhou0_B0_64_output = 0.0;
int i064 = 1550, j064 = 1, k064 = 100.0;
int monitor_range_64_rhou0_B0[] = {i064, i064+1, j064, j064+1, k064, k064+1};
ops_par_loop(monitor_64_rhou0_B0, "Reduction rhou0_B0_64", opensbliblock00, 3, monitor_range_64_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_64_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_64_rhou0_B0, &rhou0_B0_64_output);

// Monitoring of rhou0_B0
ops_reduction reduce_65_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_65_rhou0_B0");
double rhou0_B0_65_output = 0.0;
int i065 = 1600, j065 = 1, k065 = 100.0;
int monitor_range_65_rhou0_B0[] = {i065, i065+1, j065, j065+1, k065, k065+1};
ops_par_loop(monitor_65_rhou0_B0, "Reduction rhou0_B0_65", opensbliblock00, 3, monitor_range_65_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_65_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_65_rhou0_B0, &rhou0_B0_65_output);

// Monitoring of rhou0_B0
ops_reduction reduce_66_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_66_rhou0_B0");
double rhou0_B0_66_output = 0.0;
int i066 = 1650, j066 = 1, k066 = 100.0;
int monitor_range_66_rhou0_B0[] = {i066, i066+1, j066, j066+1, k066, k066+1};
ops_par_loop(monitor_66_rhou0_B0, "Reduction rhou0_B0_66", opensbliblock00, 3, monitor_range_66_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_66_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_66_rhou0_B0, &rhou0_B0_66_output);

// Monitoring of rhou0_B0
ops_reduction reduce_67_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_67_rhou0_B0");
double rhou0_B0_67_output = 0.0;
int i067 = 1700, j067 = 1, k067 = 100.0;
int monitor_range_67_rhou0_B0[] = {i067, i067+1, j067, j067+1, k067, k067+1};
ops_par_loop(monitor_67_rhou0_B0, "Reduction rhou0_B0_67", opensbliblock00, 3, monitor_range_67_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_67_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_67_rhou0_B0, &rhou0_B0_67_output);

// Monitoring of rhou0_B0
ops_reduction reduce_68_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_68_rhou0_B0");
double rhou0_B0_68_output = 0.0;
int i068 = 1750, j068 = 1, k068 = 100.0;
int monitor_range_68_rhou0_B0[] = {i068, i068+1, j068, j068+1, k068, k068+1};
ops_par_loop(monitor_68_rhou0_B0, "Reduction rhou0_B0_68", opensbliblock00, 3, monitor_range_68_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_68_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_68_rhou0_B0, &rhou0_B0_68_output);

// Monitoring of rhou0_B0
ops_reduction reduce_69_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_69_rhou0_B0");
double rhou0_B0_69_output = 0.0;
int i069 = 1800, j069 = 1, k069 = 100.0;
int monitor_range_69_rhou0_B0[] = {i069, i069+1, j069, j069+1, k069, k069+1};
ops_par_loop(monitor_69_rhou0_B0, "Reduction rhou0_B0_69", opensbliblock00, 3, monitor_range_69_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_69_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_69_rhou0_B0, &rhou0_B0_69_output);

// Monitoring of rhou0_B0
ops_reduction reduce_70_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_70_rhou0_B0");
double rhou0_B0_70_output = 0.0;
int i070 = 1850, j070 = 1, k070 = 100.0;
int monitor_range_70_rhou0_B0[] = {i070, i070+1, j070, j070+1, k070, k070+1};
ops_par_loop(monitor_70_rhou0_B0, "Reduction rhou0_B0_70", opensbliblock00, 3, monitor_range_70_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_70_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_70_rhou0_B0, &rhou0_B0_70_output);

// Monitoring of rhou0_B0
ops_reduction reduce_71_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_71_rhou0_B0");
double rhou0_B0_71_output = 0.0;
int i071 = 1900, j071 = 1, k071 = 100.0;
int monitor_range_71_rhou0_B0[] = {i071, i071+1, j071, j071+1, k071, k071+1};
ops_par_loop(monitor_71_rhou0_B0, "Reduction rhou0_B0_71", opensbliblock00, 3, monitor_range_71_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_71_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_71_rhou0_B0, &rhou0_B0_71_output);

// Monitoring of rhou0_B0
ops_reduction reduce_72_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_72_rhou0_B0");
double rhou0_B0_72_output = 0.0;
int i072 = 1950, j072 = 1, k072 = 100.0;
int monitor_range_72_rhou0_B0[] = {i072, i072+1, j072, j072+1, k072, k072+1};
ops_par_loop(monitor_72_rhou0_B0, "Reduction rhou0_B0_72", opensbliblock00, 3, monitor_range_72_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_72_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_72_rhou0_B0, &rhou0_B0_72_output);

// Monitoring of rhou0_B0
ops_reduction reduce_73_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_73_rhou0_B0");
double rhou0_B0_73_output = 0.0;
int i073 = 1995, j073 = 1, k073 = 100.0;
int monitor_range_73_rhou0_B0[] = {i073, i073+1, j073, j073+1, k073, k073+1};
ops_par_loop(monitor_73_rhou0_B0, "Reduction rhou0_B0_73", opensbliblock00, 3, monitor_range_73_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_73_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_73_rhou0_B0, &rhou0_B0_73_output);

// Monitoring of rhou2_B0
ops_reduction reduce_74_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_74_rhou2_B0");
double rhou2_B0_74_output = 0.0;
int i074 = 250, j074 = 1, k074 = 100.0;
int monitor_range_74_rhou2_B0[] = {i074, i074+1, j074, j074+1, k074, k074+1};
ops_par_loop(monitor_74_rhou2_B0, "Reduction rhou2_B0_74", opensbliblock00, 3, monitor_range_74_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_74_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_74_rhou2_B0, &rhou2_B0_74_output);

// Monitoring of rhou2_B0
ops_reduction reduce_75_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_75_rhou2_B0");
double rhou2_B0_75_output = 0.0;
int i075 = 450, j075 = 1, k075 = 100.0;
int monitor_range_75_rhou2_B0[] = {i075, i075+1, j075, j075+1, k075, k075+1};
ops_par_loop(monitor_75_rhou2_B0, "Reduction rhou2_B0_75", opensbliblock00, 3, monitor_range_75_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_75_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_75_rhou2_B0, &rhou2_B0_75_output);

// Monitoring of rhou2_B0
ops_reduction reduce_76_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_76_rhou2_B0");
double rhou2_B0_76_output = 0.0;
int i076 = 500, j076 = 1, k076 = 100.0;
int monitor_range_76_rhou2_B0[] = {i076, i076+1, j076, j076+1, k076, k076+1};
ops_par_loop(monitor_76_rhou2_B0, "Reduction rhou2_B0_76", opensbliblock00, 3, monitor_range_76_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_76_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_76_rhou2_B0, &rhou2_B0_76_output);

// Monitoring of rhou2_B0
ops_reduction reduce_77_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_77_rhou2_B0");
double rhou2_B0_77_output = 0.0;
int i077 = 550, j077 = 1, k077 = 100.0;
int monitor_range_77_rhou2_B0[] = {i077, i077+1, j077, j077+1, k077, k077+1};
ops_par_loop(monitor_77_rhou2_B0, "Reduction rhou2_B0_77", opensbliblock00, 3, monitor_range_77_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_77_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_77_rhou2_B0, &rhou2_B0_77_output);

// Monitoring of rhou2_B0
ops_reduction reduce_78_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_78_rhou2_B0");
double rhou2_B0_78_output = 0.0;
int i078 = 600, j078 = 1, k078 = 100.0;
int monitor_range_78_rhou2_B0[] = {i078, i078+1, j078, j078+1, k078, k078+1};
ops_par_loop(monitor_78_rhou2_B0, "Reduction rhou2_B0_78", opensbliblock00, 3, monitor_range_78_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_78_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_78_rhou2_B0, &rhou2_B0_78_output);

// Monitoring of rhou2_B0
ops_reduction reduce_79_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_79_rhou2_B0");
double rhou2_B0_79_output = 0.0;
int i079 = 650, j079 = 1, k079 = 100.0;
int monitor_range_79_rhou2_B0[] = {i079, i079+1, j079, j079+1, k079, k079+1};
ops_par_loop(monitor_79_rhou2_B0, "Reduction rhou2_B0_79", opensbliblock00, 3, monitor_range_79_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_79_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_79_rhou2_B0, &rhou2_B0_79_output);

// Monitoring of rhou2_B0
ops_reduction reduce_80_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_80_rhou2_B0");
double rhou2_B0_80_output = 0.0;
int i080 = 700, j080 = 1, k080 = 100.0;
int monitor_range_80_rhou2_B0[] = {i080, i080+1, j080, j080+1, k080, k080+1};
ops_par_loop(monitor_80_rhou2_B0, "Reduction rhou2_B0_80", opensbliblock00, 3, monitor_range_80_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_80_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_80_rhou2_B0, &rhou2_B0_80_output);

// Monitoring of rhou2_B0
ops_reduction reduce_81_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_81_rhou2_B0");
double rhou2_B0_81_output = 0.0;
int i081 = 750, j081 = 1, k081 = 100.0;
int monitor_range_81_rhou2_B0[] = {i081, i081+1, j081, j081+1, k081, k081+1};
ops_par_loop(monitor_81_rhou2_B0, "Reduction rhou2_B0_81", opensbliblock00, 3, monitor_range_81_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_81_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_81_rhou2_B0, &rhou2_B0_81_output);

// Monitoring of rhou2_B0
ops_reduction reduce_82_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_82_rhou2_B0");
double rhou2_B0_82_output = 0.0;
int i082 = 800, j082 = 1, k082 = 100.0;
int monitor_range_82_rhou2_B0[] = {i082, i082+1, j082, j082+1, k082, k082+1};
ops_par_loop(monitor_82_rhou2_B0, "Reduction rhou2_B0_82", opensbliblock00, 3, monitor_range_82_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_82_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_82_rhou2_B0, &rhou2_B0_82_output);

// Monitoring of rhou2_B0
ops_reduction reduce_83_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_83_rhou2_B0");
double rhou2_B0_83_output = 0.0;
int i083 = 850, j083 = 1, k083 = 100.0;
int monitor_range_83_rhou2_B0[] = {i083, i083+1, j083, j083+1, k083, k083+1};
ops_par_loop(monitor_83_rhou2_B0, "Reduction rhou2_B0_83", opensbliblock00, 3, monitor_range_83_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_83_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_83_rhou2_B0, &rhou2_B0_83_output);

// Monitoring of rhou2_B0
ops_reduction reduce_84_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_84_rhou2_B0");
double rhou2_B0_84_output = 0.0;
int i084 = 900, j084 = 1, k084 = 100.0;
int monitor_range_84_rhou2_B0[] = {i084, i084+1, j084, j084+1, k084, k084+1};
ops_par_loop(monitor_84_rhou2_B0, "Reduction rhou2_B0_84", opensbliblock00, 3, monitor_range_84_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_84_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_84_rhou2_B0, &rhou2_B0_84_output);

// Monitoring of rhou2_B0
ops_reduction reduce_85_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_85_rhou2_B0");
double rhou2_B0_85_output = 0.0;
int i085 = 925, j085 = 1, k085 = 100.0;
int monitor_range_85_rhou2_B0[] = {i085, i085+1, j085, j085+1, k085, k085+1};
ops_par_loop(monitor_85_rhou2_B0, "Reduction rhou2_B0_85", opensbliblock00, 3, monitor_range_85_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_85_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_85_rhou2_B0, &rhou2_B0_85_output);

// Monitoring of rhou2_B0
ops_reduction reduce_86_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_86_rhou2_B0");
double rhou2_B0_86_output = 0.0;
int i086 = 950, j086 = 1, k086 = 100.0;
int monitor_range_86_rhou2_B0[] = {i086, i086+1, j086, j086+1, k086, k086+1};
ops_par_loop(monitor_86_rhou2_B0, "Reduction rhou2_B0_86", opensbliblock00, 3, monitor_range_86_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_86_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_86_rhou2_B0, &rhou2_B0_86_output);

// Monitoring of rhou2_B0
ops_reduction reduce_87_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_87_rhou2_B0");
double rhou2_B0_87_output = 0.0;
int i087 = 975, j087 = 1, k087 = 100.0;
int monitor_range_87_rhou2_B0[] = {i087, i087+1, j087, j087+1, k087, k087+1};
ops_par_loop(monitor_87_rhou2_B0, "Reduction rhou2_B0_87", opensbliblock00, 3, monitor_range_87_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_87_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_87_rhou2_B0, &rhou2_B0_87_output);

// Monitoring of rhou2_B0
ops_reduction reduce_88_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_88_rhou2_B0");
double rhou2_B0_88_output = 0.0;
int i088 = 1000, j088 = 1, k088 = 100.0;
int monitor_range_88_rhou2_B0[] = {i088, i088+1, j088, j088+1, k088, k088+1};
ops_par_loop(monitor_88_rhou2_B0, "Reduction rhou2_B0_88", opensbliblock00, 3, monitor_range_88_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_88_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_88_rhou2_B0, &rhou2_B0_88_output);

// Monitoring of rhou2_B0
ops_reduction reduce_89_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_89_rhou2_B0");
double rhou2_B0_89_output = 0.0;
int i089 = 1025, j089 = 1, k089 = 100.0;
int monitor_range_89_rhou2_B0[] = {i089, i089+1, j089, j089+1, k089, k089+1};
ops_par_loop(monitor_89_rhou2_B0, "Reduction rhou2_B0_89", opensbliblock00, 3, monitor_range_89_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_89_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_89_rhou2_B0, &rhou2_B0_89_output);

// Monitoring of rhou2_B0
ops_reduction reduce_90_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_90_rhou2_B0");
double rhou2_B0_90_output = 0.0;
int i090 = 1050, j090 = 1, k090 = 100.0;
int monitor_range_90_rhou2_B0[] = {i090, i090+1, j090, j090+1, k090, k090+1};
ops_par_loop(monitor_90_rhou2_B0, "Reduction rhou2_B0_90", opensbliblock00, 3, monitor_range_90_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_90_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_90_rhou2_B0, &rhou2_B0_90_output);

// Monitoring of rhou2_B0
ops_reduction reduce_91_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_91_rhou2_B0");
double rhou2_B0_91_output = 0.0;
int i091 = 1075, j091 = 1, k091 = 100.0;
int monitor_range_91_rhou2_B0[] = {i091, i091+1, j091, j091+1, k091, k091+1};
ops_par_loop(monitor_91_rhou2_B0, "Reduction rhou2_B0_91", opensbliblock00, 3, monitor_range_91_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_91_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_91_rhou2_B0, &rhou2_B0_91_output);

// Monitoring of rhou2_B0
ops_reduction reduce_92_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_92_rhou2_B0");
double rhou2_B0_92_output = 0.0;
int i092 = 1100, j092 = 1, k092 = 100.0;
int monitor_range_92_rhou2_B0[] = {i092, i092+1, j092, j092+1, k092, k092+1};
ops_par_loop(monitor_92_rhou2_B0, "Reduction rhou2_B0_92", opensbliblock00, 3, monitor_range_92_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_92_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_92_rhou2_B0, &rhou2_B0_92_output);

// Monitoring of rhou2_B0
ops_reduction reduce_93_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_93_rhou2_B0");
double rhou2_B0_93_output = 0.0;
int i093 = 1150, j093 = 1, k093 = 100.0;
int monitor_range_93_rhou2_B0[] = {i093, i093+1, j093, j093+1, k093, k093+1};
ops_par_loop(monitor_93_rhou2_B0, "Reduction rhou2_B0_93", opensbliblock00, 3, monitor_range_93_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_93_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_93_rhou2_B0, &rhou2_B0_93_output);

// Monitoring of rhou2_B0
ops_reduction reduce_94_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_94_rhou2_B0");
double rhou2_B0_94_output = 0.0;
int i094 = 1200, j094 = 1, k094 = 100.0;
int monitor_range_94_rhou2_B0[] = {i094, i094+1, j094, j094+1, k094, k094+1};
ops_par_loop(monitor_94_rhou2_B0, "Reduction rhou2_B0_94", opensbliblock00, 3, monitor_range_94_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_94_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_94_rhou2_B0, &rhou2_B0_94_output);

// Monitoring of rhou2_B0
ops_reduction reduce_95_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_95_rhou2_B0");
double rhou2_B0_95_output = 0.0;
int i095 = 1250, j095 = 1, k095 = 100.0;
int monitor_range_95_rhou2_B0[] = {i095, i095+1, j095, j095+1, k095, k095+1};
ops_par_loop(monitor_95_rhou2_B0, "Reduction rhou2_B0_95", opensbliblock00, 3, monitor_range_95_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_95_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_95_rhou2_B0, &rhou2_B0_95_output);

// Monitoring of rhou2_B0
ops_reduction reduce_96_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_96_rhou2_B0");
double rhou2_B0_96_output = 0.0;
int i096 = 1300, j096 = 1, k096 = 100.0;
int monitor_range_96_rhou2_B0[] = {i096, i096+1, j096, j096+1, k096, k096+1};
ops_par_loop(monitor_96_rhou2_B0, "Reduction rhou2_B0_96", opensbliblock00, 3, monitor_range_96_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_96_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_96_rhou2_B0, &rhou2_B0_96_output);

// Monitoring of rhou2_B0
ops_reduction reduce_97_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_97_rhou2_B0");
double rhou2_B0_97_output = 0.0;
int i097 = 1350, j097 = 1, k097 = 100.0;
int monitor_range_97_rhou2_B0[] = {i097, i097+1, j097, j097+1, k097, k097+1};
ops_par_loop(monitor_97_rhou2_B0, "Reduction rhou2_B0_97", opensbliblock00, 3, monitor_range_97_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_97_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_97_rhou2_B0, &rhou2_B0_97_output);

// Monitoring of rhou2_B0
ops_reduction reduce_98_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_98_rhou2_B0");
double rhou2_B0_98_output = 0.0;
int i098 = 1400, j098 = 1, k098 = 100.0;
int monitor_range_98_rhou2_B0[] = {i098, i098+1, j098, j098+1, k098, k098+1};
ops_par_loop(monitor_98_rhou2_B0, "Reduction rhou2_B0_98", opensbliblock00, 3, monitor_range_98_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_98_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_98_rhou2_B0, &rhou2_B0_98_output);

// Monitoring of rhou2_B0
ops_reduction reduce_99_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_99_rhou2_B0");
double rhou2_B0_99_output = 0.0;
int i099 = 1450, j099 = 1, k099 = 100.0;
int monitor_range_99_rhou2_B0[] = {i099, i099+1, j099, j099+1, k099, k099+1};
ops_par_loop(monitor_99_rhou2_B0, "Reduction rhou2_B0_99", opensbliblock00, 3, monitor_range_99_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_99_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_99_rhou2_B0, &rhou2_B0_99_output);

// Monitoring of rhou2_B0
ops_reduction reduce_100_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_100_rhou2_B0");
double rhou2_B0_100_output = 0.0;
int i0100 = 1500, j0100 = 1, k0100 = 100.0;
int monitor_range_100_rhou2_B0[] = {i0100, i0100+1, j0100, j0100+1, k0100, k0100+1};
ops_par_loop(monitor_100_rhou2_B0, "Reduction rhou2_B0_100", opensbliblock00, 3, monitor_range_100_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_100_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_100_rhou2_B0, &rhou2_B0_100_output);

// Monitoring of rhou2_B0
ops_reduction reduce_101_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_101_rhou2_B0");
double rhou2_B0_101_output = 0.0;
int i0101 = 1550, j0101 = 1, k0101 = 100.0;
int monitor_range_101_rhou2_B0[] = {i0101, i0101+1, j0101, j0101+1, k0101, k0101+1};
ops_par_loop(monitor_101_rhou2_B0, "Reduction rhou2_B0_101", opensbliblock00, 3, monitor_range_101_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_101_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_101_rhou2_B0, &rhou2_B0_101_output);

// Monitoring of rhou2_B0
ops_reduction reduce_102_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_102_rhou2_B0");
double rhou2_B0_102_output = 0.0;
int i0102 = 1600, j0102 = 1, k0102 = 100.0;
int monitor_range_102_rhou2_B0[] = {i0102, i0102+1, j0102, j0102+1, k0102, k0102+1};
ops_par_loop(monitor_102_rhou2_B0, "Reduction rhou2_B0_102", opensbliblock00, 3, monitor_range_102_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_102_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_102_rhou2_B0, &rhou2_B0_102_output);

// Monitoring of rhou2_B0
ops_reduction reduce_103_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_103_rhou2_B0");
double rhou2_B0_103_output = 0.0;
int i0103 = 1650, j0103 = 1, k0103 = 100.0;
int monitor_range_103_rhou2_B0[] = {i0103, i0103+1, j0103, j0103+1, k0103, k0103+1};
ops_par_loop(monitor_103_rhou2_B0, "Reduction rhou2_B0_103", opensbliblock00, 3, monitor_range_103_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_103_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_103_rhou2_B0, &rhou2_B0_103_output);

// Monitoring of rhou2_B0
ops_reduction reduce_104_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_104_rhou2_B0");
double rhou2_B0_104_output = 0.0;
int i0104 = 1700, j0104 = 1, k0104 = 100.0;
int monitor_range_104_rhou2_B0[] = {i0104, i0104+1, j0104, j0104+1, k0104, k0104+1};
ops_par_loop(monitor_104_rhou2_B0, "Reduction rhou2_B0_104", opensbliblock00, 3, monitor_range_104_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_104_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_104_rhou2_B0, &rhou2_B0_104_output);

// Monitoring of rhou2_B0
ops_reduction reduce_105_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_105_rhou2_B0");
double rhou2_B0_105_output = 0.0;
int i0105 = 1750, j0105 = 1, k0105 = 100.0;
int monitor_range_105_rhou2_B0[] = {i0105, i0105+1, j0105, j0105+1, k0105, k0105+1};
ops_par_loop(monitor_105_rhou2_B0, "Reduction rhou2_B0_105", opensbliblock00, 3, monitor_range_105_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_105_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_105_rhou2_B0, &rhou2_B0_105_output);

// Monitoring of rhou2_B0
ops_reduction reduce_106_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_106_rhou2_B0");
double rhou2_B0_106_output = 0.0;
int i0106 = 1800, j0106 = 1, k0106 = 100.0;
int monitor_range_106_rhou2_B0[] = {i0106, i0106+1, j0106, j0106+1, k0106, k0106+1};
ops_par_loop(monitor_106_rhou2_B0, "Reduction rhou2_B0_106", opensbliblock00, 3, monitor_range_106_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_106_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_106_rhou2_B0, &rhou2_B0_106_output);

// Monitoring of rhou2_B0
ops_reduction reduce_107_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_107_rhou2_B0");
double rhou2_B0_107_output = 0.0;
int i0107 = 1850, j0107 = 1, k0107 = 100.0;
int monitor_range_107_rhou2_B0[] = {i0107, i0107+1, j0107, j0107+1, k0107, k0107+1};
ops_par_loop(monitor_107_rhou2_B0, "Reduction rhou2_B0_107", opensbliblock00, 3, monitor_range_107_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_107_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_107_rhou2_B0, &rhou2_B0_107_output);

// Monitoring of rhou2_B0
ops_reduction reduce_108_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_108_rhou2_B0");
double rhou2_B0_108_output = 0.0;
int i0108 = 1900, j0108 = 1, k0108 = 100.0;
int monitor_range_108_rhou2_B0[] = {i0108, i0108+1, j0108, j0108+1, k0108, k0108+1};
ops_par_loop(monitor_108_rhou2_B0, "Reduction rhou2_B0_108", opensbliblock00, 3, monitor_range_108_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_108_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_108_rhou2_B0, &rhou2_B0_108_output);

// Monitoring of rhou2_B0
ops_reduction reduce_109_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_109_rhou2_B0");
double rhou2_B0_109_output = 0.0;
int i0109 = 1950, j0109 = 1, k0109 = 100.0;
int monitor_range_109_rhou2_B0[] = {i0109, i0109+1, j0109, j0109+1, k0109, k0109+1};
ops_par_loop(monitor_109_rhou2_B0, "Reduction rhou2_B0_109", opensbliblock00, 3, monitor_range_109_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_109_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_109_rhou2_B0, &rhou2_B0_109_output);

// Monitoring of rhou2_B0
ops_reduction reduce_110_rhou2_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_110_rhou2_B0");
double rhou2_B0_110_output = 0.0;
int i0110 = 1995, j0110 = 1, k0110 = 100.0;
int monitor_range_110_rhou2_B0[] = {i0110, i0110+1, j0110, j0110+1, k0110, k0110+1};
ops_par_loop(monitor_110_rhou2_B0, "Reduction rhou2_B0_110", opensbliblock00, 3, monitor_range_110_rhou2_B0,
ops_arg_dat(rhou2_B0, 1, stencil_0_00_00_00_3, "double", OPS_READ),
ops_arg_reduce(reduce_110_rhou2_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_110_rhou2_B0, &rhou2_B0_110_output);

// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, p_B0_0_output, p_B0_1_output, p_B0_2_output, p_B0_3_output, p_B0_4_output, p_B0_5_output, p_B0_6_output, p_B0_7_output, p_B0_8_output, p_B0_9_output, p_B0_10_output, p_B0_11_output, p_B0_12_output, p_B0_13_output, p_B0_14_output, p_B0_15_output, p_B0_16_output, p_B0_17_output, p_B0_18_output, p_B0_19_output, p_B0_20_output, p_B0_21_output, p_B0_22_output, p_B0_23_output, p_B0_24_output, p_B0_25_output, p_B0_26_output, p_B0_27_output, p_B0_28_output, p_B0_29_output, p_B0_30_output, p_B0_31_output, p_B0_32_output, p_B0_33_output, p_B0_34_output, p_B0_35_output, p_B0_36_output, rhou0_B0_37_output, rhou0_B0_38_output, rhou0_B0_39_output, rhou0_B0_40_output, rhou0_B0_41_output, rhou0_B0_42_output, rhou0_B0_43_output, rhou0_B0_44_output, rhou0_B0_45_output, rhou0_B0_46_output, rhou0_B0_47_output, rhou0_B0_48_output, rhou0_B0_49_output, rhou0_B0_50_output, rhou0_B0_51_output, rhou0_B0_52_output, rhou0_B0_53_output, rhou0_B0_54_output, rhou0_B0_55_output, rhou0_B0_56_output, rhou0_B0_57_output, rhou0_B0_58_output, rhou0_B0_59_output, rhou0_B0_60_output, rhou0_B0_61_output, rhou0_B0_62_output, rhou0_B0_63_output, rhou0_B0_64_output, rhou0_B0_65_output, rhou0_B0_66_output, rhou0_B0_67_output, rhou0_B0_68_output, rhou0_B0_69_output, rhou0_B0_70_output, rhou0_B0_71_output, rhou0_B0_72_output, rhou0_B0_73_output, rhou2_B0_74_output, rhou2_B0_75_output, rhou2_B0_76_output, rhou2_B0_77_output, rhou2_B0_78_output, rhou2_B0_79_output, rhou2_B0_80_output, rhou2_B0_81_output, rhou2_B0_82_output, rhou2_B0_83_output, rhou2_B0_84_output, rhou2_B0_85_output, rhou2_B0_86_output, rhou2_B0_87_output, rhou2_B0_88_output, rhou2_B0_89_output, rhou2_B0_90_output, rhou2_B0_91_output, rhou2_B0_92_output, rhou2_B0_93_output, rhou2_B0_94_output, rhou2_B0_95_output, rhou2_B0_96_output, rhou2_B0_97_output, rhou2_B0_98_output, rhou2_B0_99_output, rhou2_B0_100_output, rhou2_B0_101_output, rhou2_B0_102_output, rhou2_B0_103_output, rhou2_B0_104_output, rhou2_B0_105_output, rhou2_B0_106_output, rhou2_B0_107_output, rhou2_B0_108_output, rhou2_B0_109_output, rhou2_B0_110_output);
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
ops_write_plane_group_hdf5({{0, 250}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 450}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 500}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 550}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 625}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 750}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 800}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 850}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 900}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 950}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1000}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1050}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1100}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1150}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1200}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1250}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1375}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1500}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1550}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1625}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1750}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1875}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1950}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{0, 1975}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
ops_write_plane_group_hdf5({{2, block0np2/2}}, slice_name0, {{rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0}});
}

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

int iteration_range_83_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel083, "User kernel: None", opensbliblock00, 3, iteration_range_83_block0,
ops_arg_dat(E_mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhomean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u0mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou0u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1u1mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou1u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW),
ops_arg_dat(rhou2u2mean_B0, 1, stencil_0_00_00_00_3, "double", OPS_RW));

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhou1_B0, rhou2_B0, rhoE_B0, x0_B0, x1_B0, x2_B0, D11_B0, p_B0, HDF5_timing);
HDF5_IO_Write_1_opensbliblock00(opensbliblock00, rhomean_B0, rhou0mean_B0, rhou1mean_B0, rhou2mean_B0, E_mean_B0, rhou0u0mean_B0, rhou0u1mean_B0, rhou1u1mean_B0, rhou0u2mean_B0, rhou1u2mean_B0, rhou2u2mean_B0, HDF5_timing);
fclose(f0);
ops_exit();
//Main program end 
}
