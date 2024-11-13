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
niter = 250000;
double rkB[] = {(1.0/3.0), (15.0/16.0), (8.0/15.0)};
double rkA[] = {0, (-5.0/9.0), (-153.0/128.0)};
dt = 0.01;
block0np0 = 1000;
block0np1 = 400;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Minf = 4.0;
Twall = 1.37;
RefT = 439.0;
gama = 1.4;
SuthT = 110.4;
Re = 4000.0;
Pr = 0.72;
write_output_file = 50000;
HDF5_timing = 0;
shock_filter_control = 1.00000000000000;
gamma_m1 = -1 + gama;
H = 115.0;
b = 5.0;
L = 400.0;
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
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("shock_filter_control" , 1, "double", &shock_filter_control);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
ops_decl_const("write_output_file" , 1, "int", &write_output_file);
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
int iteration_range_66_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5};
ops_par_loop(opensbliblock00Kernel066, "Similiarity solution laminar boundary-layer initialisation0", opensbliblock00, 2, iteration_range_66_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_idx());
}

int iteration_range_67_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel067, "MetricsEquation CD x0_B0 xi1 ", opensbliblock00, 2, iteration_range_67_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_68_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel068, "MetricsEquation CD x1_B0 xi1 ", opensbliblock00, 2, iteration_range_68_block0,
ops_arg_dat(x1_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_69_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel069, "MetricsEquation CD x1_B0 xi0 ", opensbliblock00, 2, iteration_range_69_block0,
ops_arg_dat(x1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_70_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel070, "MetricsEquation CD x0_B0 xi0 ", opensbliblock00, 2, iteration_range_70_block0,
ops_arg_dat(x0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_73_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel073, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_73_block0,
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_RW));

int iteration_range_74_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel074, "Metric_copy_block0 boundary dir0 side0", opensbliblock00, 2, iteration_range_74_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_8, "double", OPS_RW));

int iteration_range_75_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel075, "Metric_copy_block0 boundary dir0 side1", opensbliblock00, 2, iteration_range_75_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_44_00_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_44_00_8, "double", OPS_RW));

int iteration_range_76_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel076, "Metric_copy_block0 boundary dir1 side0", opensbliblock00, 2, iteration_range_76_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_8, "double", OPS_RW));

int iteration_range_77_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel077, "Metric_copy_block0 boundary dir1 side1", opensbliblock00, 2, iteration_range_77_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D10_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_00_44_8, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_00_44_8, "double", OPS_RW));

int iteration_range_78_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel078, "MetricsEquation CD D00_B0 xi1 ", opensbliblock00, 2, iteration_range_78_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_79_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel079, "MetricsEquation CD D10_B0 xi1 ", opensbliblock00, 2, iteration_range_79_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_80_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel080, "MetricsEquation CD D01_B0 xi0 ", opensbliblock00, 2, iteration_range_80_block0,
ops_arg_dat(D01_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_81_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel081, "MetricsEquation CD D11_B0 xi1 ", opensbliblock00, 2, iteration_range_81_block0,
ops_arg_dat(D11_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_82_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel082, "MetricsEquation CD D11_B0 xi0 ", opensbliblock00, 2, iteration_range_82_block0,
ops_arg_dat(D11_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_83_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel083, "MetricsEquation CD D01_B0 xi1 ", opensbliblock00, 2, iteration_range_83_block0,
ops_arg_dat(D01_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_84_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel084, "MetricsEquation CD D10_B0 xi0 ", opensbliblock00, 2, iteration_range_84_block0,
ops_arg_dat(D10_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_85_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel085, "MetricsEquation CD D00_B0 xi0 ", opensbliblock00, 2, iteration_range_85_block0,
ops_arg_dat(D00_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_90_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel090, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_90_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD001_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD010_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD011_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD100_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD101_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD110_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(SD111_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

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

int iteration_range_62_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel062, "InletTransfer boundary dir0 side0", opensbliblock00, 2, iteration_range_62_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_3, "double", OPS_RW));

int iteration_range_63_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel063, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_63_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_7, "double", OPS_RW));

int iteration_range_64_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel064, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_64_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

int iteration_range_65_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel065, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_65_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

for(stage=0; stage<=2; stage++)
{
int iteration_range_8_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel008, "CRu0", opensbliblock00, 2, iteration_range_8_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_9_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel009, "CRu1", opensbliblock00, 2, iteration_range_9_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_7_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel007, "CRp", opensbliblock00, 2, iteration_range_7_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_12_block0[] = {-3, block0np0 + 4, 0, block0np1};
ops_par_loop(opensbliblock00Kernel012, "CRU0", opensbliblock00, 2, iteration_range_12_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_16_block0[] = {0, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel016, "CRU1", opensbliblock00, 2, iteration_range_16_block0,
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

int iteration_range_25_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel025, "CRmu_B0", opensbliblock00, 2, iteration_range_25_block0,
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

int iteration_range_29_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel029, "Viscous CD u1_B0 xi1 ", opensbliblock00, 2, iteration_range_29_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_30_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel030, "Viscous CD T_B0 xi0 ", opensbliblock00, 2, iteration_range_30_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_31_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel031, "Viscous CD T_B0 xi1 ", opensbliblock00, 2, iteration_range_31_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_32_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel032, "Viscous CD u1_B0 xi0 ", opensbliblock00, 2, iteration_range_32_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_34_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel034, "Viscous CD mu_B0 xi0 ", opensbliblock00, 2, iteration_range_34_block0,
ops_arg_dat(mu_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_35_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel035, "Viscous CD u0_B0 xi1 ", opensbliblock00, 2, iteration_range_35_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_37_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel037, "Viscous CD T_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_37_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_38_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel038, "Viscous CD u0_B0 xi0 ", opensbliblock00, 2, iteration_range_38_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_39_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel039, "Viscous CD mu_B0 xi1 ", opensbliblock00, 2, iteration_range_39_block0,
ops_arg_dat(mu_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_40_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel040, "Viscous CD T_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_40_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_41_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel041, "Viscous CD u0_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_41_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_42_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel042, "Viscous CD u1_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_42_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_43_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel043, "Viscous CD u0_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_43_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_44_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel044, "Viscous CD u1_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_44_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_28_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel028, "Viscous CD CD u0_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_28_block0,
ops_arg_dat(wk10_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_33_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel033, "Viscous CD CD T_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_33_block0,
ops_arg_dat(wk2_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_36_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel036, "Viscous CD CD u1_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(wk4_B0, 1, stencil_0_00_34_9, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_61_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel061, "Viscous residual", opensbliblock00, 2, iteration_range_61_block0,
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
ops_arg_dat(mu_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00_00_2, "double", OPS_RW));

int iteration_range_91_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel091, "Temporal solution advancement", opensbliblock00, 2, iteration_range_91_block0,
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

int iteration_range_62_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel062, "InletTransfer boundary dir0 side0", opensbliblock00, 2, iteration_range_62_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_10_00_3, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10_00_3, "double", OPS_RW));

int iteration_range_63_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel063, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_63_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_14_00_7, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_14_00_7, "double", OPS_RW));

int iteration_range_64_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel064, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_64_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_41_7, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

int iteration_range_65_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel065, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_65_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_44_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_44_10, "double", OPS_RW));

}
if (fmod(1 + iter,20) == 0 || iter == 0){
// Data access for simulation monitoring
if (iter == 0){
ops_fprintf(f0, "Iteration, Time, p_B0(125, 0), p_B0(225, 0), p_B0(250, 0), p_B0(275, 0), p_B0(300, 0), p_B0(325, 0), p_B0(350, 0), p_B0(375, 0), p_B0(400, 0), p_B0(425, 0), p_B0(450, 0), p_B0(462, 0), p_B0(475, 0), p_B0(487, 0), p_B0(500, 0), p_B0(512, 0), p_B0(525, 0), p_B0(537, 0), p_B0(550, 0), p_B0(575, 0), p_B0(600, 0), p_B0(625, 0), p_B0(650, 0), p_B0(675, 0), p_B0(700, 0), p_B0(725, 0), p_B0(750, 0), p_B0(775, 0), p_B0(800, 0), p_B0(825, 0), p_B0(850, 0), p_B0(875, 0), p_B0(900, 0), p_B0(925, 0), p_B0(950, 0), p_B0(975, 0), p_B0(997, 0), rhou0_B0(125, 1), rhou0_B0(225, 1), rhou0_B0(250, 1), rhou0_B0(275, 1), rhou0_B0(300, 1), rhou0_B0(325, 1), rhou0_B0(350, 1), rhou0_B0(375, 1), rhou0_B0(400, 1), rhou0_B0(425, 1), rhou0_B0(450, 1), rhou0_B0(462, 1), rhou0_B0(475, 1), rhou0_B0(487, 1), rhou0_B0(500, 1), rhou0_B0(512, 1), rhou0_B0(525, 1), rhou0_B0(537, 1), rhou0_B0(550, 1), rhou0_B0(575, 1), rhou0_B0(600, 1), rhou0_B0(625, 1), rhou0_B0(650, 1), rhou0_B0(675, 1), rhou0_B0(700, 1), rhou0_B0(725, 1), rhou0_B0(750, 1), rhou0_B0(775, 1), rhou0_B0(800, 1), rhou0_B0(825, 1), rhou0_B0(850, 1), rhou0_B0(875, 1), rhou0_B0(900, 1), rhou0_B0(925, 1), rhou0_B0(950, 1), rhou0_B0(975, 1), rhou0_B0(997, 1)\n");}
// Monitoring of p_B0
ops_reduction reduce_0_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_0_p_B0");
double p_B0_0_output = 0.0;
int i00 = 125, j00 = 0;
int monitor_range_0_p_B0[] = {i00, i00+1, j00, j00+1};
ops_par_loop(monitor_0_p_B0, "Reduction p_B0_0", opensbliblock00, 2, monitor_range_0_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_0_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_0_p_B0, &p_B0_0_output);

// Monitoring of p_B0
ops_reduction reduce_1_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_1_p_B0");
double p_B0_1_output = 0.0;
int i01 = 225, j01 = 0;
int monitor_range_1_p_B0[] = {i01, i01+1, j01, j01+1};
ops_par_loop(monitor_1_p_B0, "Reduction p_B0_1", opensbliblock00, 2, monitor_range_1_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_1_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_1_p_B0, &p_B0_1_output);

// Monitoring of p_B0
ops_reduction reduce_2_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_2_p_B0");
double p_B0_2_output = 0.0;
int i02 = 250, j02 = 0;
int monitor_range_2_p_B0[] = {i02, i02+1, j02, j02+1};
ops_par_loop(monitor_2_p_B0, "Reduction p_B0_2", opensbliblock00, 2, monitor_range_2_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_2_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_2_p_B0, &p_B0_2_output);

// Monitoring of p_B0
ops_reduction reduce_3_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_3_p_B0");
double p_B0_3_output = 0.0;
int i03 = 275, j03 = 0;
int monitor_range_3_p_B0[] = {i03, i03+1, j03, j03+1};
ops_par_loop(monitor_3_p_B0, "Reduction p_B0_3", opensbliblock00, 2, monitor_range_3_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_3_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_3_p_B0, &p_B0_3_output);

// Monitoring of p_B0
ops_reduction reduce_4_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_4_p_B0");
double p_B0_4_output = 0.0;
int i04 = 300, j04 = 0;
int monitor_range_4_p_B0[] = {i04, i04+1, j04, j04+1};
ops_par_loop(monitor_4_p_B0, "Reduction p_B0_4", opensbliblock00, 2, monitor_range_4_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_4_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_4_p_B0, &p_B0_4_output);

// Monitoring of p_B0
ops_reduction reduce_5_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_5_p_B0");
double p_B0_5_output = 0.0;
int i05 = 325, j05 = 0;
int monitor_range_5_p_B0[] = {i05, i05+1, j05, j05+1};
ops_par_loop(monitor_5_p_B0, "Reduction p_B0_5", opensbliblock00, 2, monitor_range_5_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_5_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_5_p_B0, &p_B0_5_output);

// Monitoring of p_B0
ops_reduction reduce_6_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_6_p_B0");
double p_B0_6_output = 0.0;
int i06 = 350, j06 = 0;
int monitor_range_6_p_B0[] = {i06, i06+1, j06, j06+1};
ops_par_loop(monitor_6_p_B0, "Reduction p_B0_6", opensbliblock00, 2, monitor_range_6_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_6_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_6_p_B0, &p_B0_6_output);

// Monitoring of p_B0
ops_reduction reduce_7_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_7_p_B0");
double p_B0_7_output = 0.0;
int i07 = 375, j07 = 0;
int monitor_range_7_p_B0[] = {i07, i07+1, j07, j07+1};
ops_par_loop(monitor_7_p_B0, "Reduction p_B0_7", opensbliblock00, 2, monitor_range_7_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_7_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_7_p_B0, &p_B0_7_output);

// Monitoring of p_B0
ops_reduction reduce_8_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_8_p_B0");
double p_B0_8_output = 0.0;
int i08 = 400, j08 = 0;
int monitor_range_8_p_B0[] = {i08, i08+1, j08, j08+1};
ops_par_loop(monitor_8_p_B0, "Reduction p_B0_8", opensbliblock00, 2, monitor_range_8_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_8_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_8_p_B0, &p_B0_8_output);

// Monitoring of p_B0
ops_reduction reduce_9_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_9_p_B0");
double p_B0_9_output = 0.0;
int i09 = 425, j09 = 0;
int monitor_range_9_p_B0[] = {i09, i09+1, j09, j09+1};
ops_par_loop(monitor_9_p_B0, "Reduction p_B0_9", opensbliblock00, 2, monitor_range_9_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_9_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_9_p_B0, &p_B0_9_output);

// Monitoring of p_B0
ops_reduction reduce_10_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_10_p_B0");
double p_B0_10_output = 0.0;
int i010 = 450, j010 = 0;
int monitor_range_10_p_B0[] = {i010, i010+1, j010, j010+1};
ops_par_loop(monitor_10_p_B0, "Reduction p_B0_10", opensbliblock00, 2, monitor_range_10_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_10_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_10_p_B0, &p_B0_10_output);

// Monitoring of p_B0
ops_reduction reduce_11_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_11_p_B0");
double p_B0_11_output = 0.0;
int i011 = 462, j011 = 0;
int monitor_range_11_p_B0[] = {i011, i011+1, j011, j011+1};
ops_par_loop(monitor_11_p_B0, "Reduction p_B0_11", opensbliblock00, 2, monitor_range_11_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_11_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_11_p_B0, &p_B0_11_output);

// Monitoring of p_B0
ops_reduction reduce_12_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_12_p_B0");
double p_B0_12_output = 0.0;
int i012 = 475, j012 = 0;
int monitor_range_12_p_B0[] = {i012, i012+1, j012, j012+1};
ops_par_loop(monitor_12_p_B0, "Reduction p_B0_12", opensbliblock00, 2, monitor_range_12_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_12_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_12_p_B0, &p_B0_12_output);

// Monitoring of p_B0
ops_reduction reduce_13_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_13_p_B0");
double p_B0_13_output = 0.0;
int i013 = 487, j013 = 0;
int monitor_range_13_p_B0[] = {i013, i013+1, j013, j013+1};
ops_par_loop(monitor_13_p_B0, "Reduction p_B0_13", opensbliblock00, 2, monitor_range_13_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_13_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_13_p_B0, &p_B0_13_output);

// Monitoring of p_B0
ops_reduction reduce_14_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_14_p_B0");
double p_B0_14_output = 0.0;
int i014 = 500, j014 = 0;
int monitor_range_14_p_B0[] = {i014, i014+1, j014, j014+1};
ops_par_loop(monitor_14_p_B0, "Reduction p_B0_14", opensbliblock00, 2, monitor_range_14_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_14_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_14_p_B0, &p_B0_14_output);

// Monitoring of p_B0
ops_reduction reduce_15_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_15_p_B0");
double p_B0_15_output = 0.0;
int i015 = 512, j015 = 0;
int monitor_range_15_p_B0[] = {i015, i015+1, j015, j015+1};
ops_par_loop(monitor_15_p_B0, "Reduction p_B0_15", opensbliblock00, 2, monitor_range_15_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_15_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_15_p_B0, &p_B0_15_output);

// Monitoring of p_B0
ops_reduction reduce_16_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_16_p_B0");
double p_B0_16_output = 0.0;
int i016 = 525, j016 = 0;
int monitor_range_16_p_B0[] = {i016, i016+1, j016, j016+1};
ops_par_loop(monitor_16_p_B0, "Reduction p_B0_16", opensbliblock00, 2, monitor_range_16_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_16_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_16_p_B0, &p_B0_16_output);

// Monitoring of p_B0
ops_reduction reduce_17_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_17_p_B0");
double p_B0_17_output = 0.0;
int i017 = 537, j017 = 0;
int monitor_range_17_p_B0[] = {i017, i017+1, j017, j017+1};
ops_par_loop(monitor_17_p_B0, "Reduction p_B0_17", opensbliblock00, 2, monitor_range_17_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_17_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_17_p_B0, &p_B0_17_output);

// Monitoring of p_B0
ops_reduction reduce_18_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_18_p_B0");
double p_B0_18_output = 0.0;
int i018 = 550, j018 = 0;
int monitor_range_18_p_B0[] = {i018, i018+1, j018, j018+1};
ops_par_loop(monitor_18_p_B0, "Reduction p_B0_18", opensbliblock00, 2, monitor_range_18_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_18_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_18_p_B0, &p_B0_18_output);

// Monitoring of p_B0
ops_reduction reduce_19_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_19_p_B0");
double p_B0_19_output = 0.0;
int i019 = 575, j019 = 0;
int monitor_range_19_p_B0[] = {i019, i019+1, j019, j019+1};
ops_par_loop(monitor_19_p_B0, "Reduction p_B0_19", opensbliblock00, 2, monitor_range_19_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_19_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_19_p_B0, &p_B0_19_output);

// Monitoring of p_B0
ops_reduction reduce_20_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_20_p_B0");
double p_B0_20_output = 0.0;
int i020 = 600, j020 = 0;
int monitor_range_20_p_B0[] = {i020, i020+1, j020, j020+1};
ops_par_loop(monitor_20_p_B0, "Reduction p_B0_20", opensbliblock00, 2, monitor_range_20_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_20_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_20_p_B0, &p_B0_20_output);

// Monitoring of p_B0
ops_reduction reduce_21_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_21_p_B0");
double p_B0_21_output = 0.0;
int i021 = 625, j021 = 0;
int monitor_range_21_p_B0[] = {i021, i021+1, j021, j021+1};
ops_par_loop(monitor_21_p_B0, "Reduction p_B0_21", opensbliblock00, 2, monitor_range_21_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_21_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_21_p_B0, &p_B0_21_output);

// Monitoring of p_B0
ops_reduction reduce_22_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_22_p_B0");
double p_B0_22_output = 0.0;
int i022 = 650, j022 = 0;
int monitor_range_22_p_B0[] = {i022, i022+1, j022, j022+1};
ops_par_loop(monitor_22_p_B0, "Reduction p_B0_22", opensbliblock00, 2, monitor_range_22_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_22_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_22_p_B0, &p_B0_22_output);

// Monitoring of p_B0
ops_reduction reduce_23_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_23_p_B0");
double p_B0_23_output = 0.0;
int i023 = 675, j023 = 0;
int monitor_range_23_p_B0[] = {i023, i023+1, j023, j023+1};
ops_par_loop(monitor_23_p_B0, "Reduction p_B0_23", opensbliblock00, 2, monitor_range_23_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_23_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_23_p_B0, &p_B0_23_output);

// Monitoring of p_B0
ops_reduction reduce_24_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_24_p_B0");
double p_B0_24_output = 0.0;
int i024 = 700, j024 = 0;
int monitor_range_24_p_B0[] = {i024, i024+1, j024, j024+1};
ops_par_loop(monitor_24_p_B0, "Reduction p_B0_24", opensbliblock00, 2, monitor_range_24_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_24_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_24_p_B0, &p_B0_24_output);

// Monitoring of p_B0
ops_reduction reduce_25_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_25_p_B0");
double p_B0_25_output = 0.0;
int i025 = 725, j025 = 0;
int monitor_range_25_p_B0[] = {i025, i025+1, j025, j025+1};
ops_par_loop(monitor_25_p_B0, "Reduction p_B0_25", opensbliblock00, 2, monitor_range_25_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_25_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_25_p_B0, &p_B0_25_output);

// Monitoring of p_B0
ops_reduction reduce_26_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_26_p_B0");
double p_B0_26_output = 0.0;
int i026 = 750, j026 = 0;
int monitor_range_26_p_B0[] = {i026, i026+1, j026, j026+1};
ops_par_loop(monitor_26_p_B0, "Reduction p_B0_26", opensbliblock00, 2, monitor_range_26_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_26_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_26_p_B0, &p_B0_26_output);

// Monitoring of p_B0
ops_reduction reduce_27_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_27_p_B0");
double p_B0_27_output = 0.0;
int i027 = 775, j027 = 0;
int monitor_range_27_p_B0[] = {i027, i027+1, j027, j027+1};
ops_par_loop(monitor_27_p_B0, "Reduction p_B0_27", opensbliblock00, 2, monitor_range_27_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_27_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_27_p_B0, &p_B0_27_output);

// Monitoring of p_B0
ops_reduction reduce_28_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_28_p_B0");
double p_B0_28_output = 0.0;
int i028 = 800, j028 = 0;
int monitor_range_28_p_B0[] = {i028, i028+1, j028, j028+1};
ops_par_loop(monitor_28_p_B0, "Reduction p_B0_28", opensbliblock00, 2, monitor_range_28_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_28_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_28_p_B0, &p_B0_28_output);

// Monitoring of p_B0
ops_reduction reduce_29_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_29_p_B0");
double p_B0_29_output = 0.0;
int i029 = 825, j029 = 0;
int monitor_range_29_p_B0[] = {i029, i029+1, j029, j029+1};
ops_par_loop(monitor_29_p_B0, "Reduction p_B0_29", opensbliblock00, 2, monitor_range_29_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_29_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_29_p_B0, &p_B0_29_output);

// Monitoring of p_B0
ops_reduction reduce_30_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_30_p_B0");
double p_B0_30_output = 0.0;
int i030 = 850, j030 = 0;
int monitor_range_30_p_B0[] = {i030, i030+1, j030, j030+1};
ops_par_loop(monitor_30_p_B0, "Reduction p_B0_30", opensbliblock00, 2, monitor_range_30_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_30_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_30_p_B0, &p_B0_30_output);

// Monitoring of p_B0
ops_reduction reduce_31_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_31_p_B0");
double p_B0_31_output = 0.0;
int i031 = 875, j031 = 0;
int monitor_range_31_p_B0[] = {i031, i031+1, j031, j031+1};
ops_par_loop(monitor_31_p_B0, "Reduction p_B0_31", opensbliblock00, 2, monitor_range_31_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_31_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_31_p_B0, &p_B0_31_output);

// Monitoring of p_B0
ops_reduction reduce_32_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_32_p_B0");
double p_B0_32_output = 0.0;
int i032 = 900, j032 = 0;
int monitor_range_32_p_B0[] = {i032, i032+1, j032, j032+1};
ops_par_loop(monitor_32_p_B0, "Reduction p_B0_32", opensbliblock00, 2, monitor_range_32_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_32_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_32_p_B0, &p_B0_32_output);

// Monitoring of p_B0
ops_reduction reduce_33_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_33_p_B0");
double p_B0_33_output = 0.0;
int i033 = 925, j033 = 0;
int monitor_range_33_p_B0[] = {i033, i033+1, j033, j033+1};
ops_par_loop(monitor_33_p_B0, "Reduction p_B0_33", opensbliblock00, 2, monitor_range_33_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_33_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_33_p_B0, &p_B0_33_output);

// Monitoring of p_B0
ops_reduction reduce_34_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_34_p_B0");
double p_B0_34_output = 0.0;
int i034 = 950, j034 = 0;
int monitor_range_34_p_B0[] = {i034, i034+1, j034, j034+1};
ops_par_loop(monitor_34_p_B0, "Reduction p_B0_34", opensbliblock00, 2, monitor_range_34_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_34_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_34_p_B0, &p_B0_34_output);

// Monitoring of p_B0
ops_reduction reduce_35_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_35_p_B0");
double p_B0_35_output = 0.0;
int i035 = 975, j035 = 0;
int monitor_range_35_p_B0[] = {i035, i035+1, j035, j035+1};
ops_par_loop(monitor_35_p_B0, "Reduction p_B0_35", opensbliblock00, 2, monitor_range_35_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_35_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_35_p_B0, &p_B0_35_output);

// Monitoring of p_B0
ops_reduction reduce_36_p_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_36_p_B0");
double p_B0_36_output = 0.0;
int i036 = 997, j036 = 0;
int monitor_range_36_p_B0[] = {i036, i036+1, j036, j036+1};
ops_par_loop(monitor_36_p_B0, "Reduction p_B0_36", opensbliblock00, 2, monitor_range_36_p_B0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_36_p_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_36_p_B0, &p_B0_36_output);

// Monitoring of rhou0_B0
ops_reduction reduce_37_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_37_rhou0_B0");
double rhou0_B0_37_output = 0.0;
int i037 = 125, j037 = 1;
int monitor_range_37_rhou0_B0[] = {i037, i037+1, j037, j037+1};
ops_par_loop(monitor_37_rhou0_B0, "Reduction rhou0_B0_37", opensbliblock00, 2, monitor_range_37_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_37_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_37_rhou0_B0, &rhou0_B0_37_output);

// Monitoring of rhou0_B0
ops_reduction reduce_38_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_38_rhou0_B0");
double rhou0_B0_38_output = 0.0;
int i038 = 225, j038 = 1;
int monitor_range_38_rhou0_B0[] = {i038, i038+1, j038, j038+1};
ops_par_loop(monitor_38_rhou0_B0, "Reduction rhou0_B0_38", opensbliblock00, 2, monitor_range_38_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_38_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_38_rhou0_B0, &rhou0_B0_38_output);

// Monitoring of rhou0_B0
ops_reduction reduce_39_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_39_rhou0_B0");
double rhou0_B0_39_output = 0.0;
int i039 = 250, j039 = 1;
int monitor_range_39_rhou0_B0[] = {i039, i039+1, j039, j039+1};
ops_par_loop(monitor_39_rhou0_B0, "Reduction rhou0_B0_39", opensbliblock00, 2, monitor_range_39_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_39_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_39_rhou0_B0, &rhou0_B0_39_output);

// Monitoring of rhou0_B0
ops_reduction reduce_40_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_40_rhou0_B0");
double rhou0_B0_40_output = 0.0;
int i040 = 275, j040 = 1;
int monitor_range_40_rhou0_B0[] = {i040, i040+1, j040, j040+1};
ops_par_loop(monitor_40_rhou0_B0, "Reduction rhou0_B0_40", opensbliblock00, 2, monitor_range_40_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_40_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_40_rhou0_B0, &rhou0_B0_40_output);

// Monitoring of rhou0_B0
ops_reduction reduce_41_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_41_rhou0_B0");
double rhou0_B0_41_output = 0.0;
int i041 = 300, j041 = 1;
int monitor_range_41_rhou0_B0[] = {i041, i041+1, j041, j041+1};
ops_par_loop(monitor_41_rhou0_B0, "Reduction rhou0_B0_41", opensbliblock00, 2, monitor_range_41_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_41_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_41_rhou0_B0, &rhou0_B0_41_output);

// Monitoring of rhou0_B0
ops_reduction reduce_42_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_42_rhou0_B0");
double rhou0_B0_42_output = 0.0;
int i042 = 325, j042 = 1;
int monitor_range_42_rhou0_B0[] = {i042, i042+1, j042, j042+1};
ops_par_loop(monitor_42_rhou0_B0, "Reduction rhou0_B0_42", opensbliblock00, 2, monitor_range_42_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_42_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_42_rhou0_B0, &rhou0_B0_42_output);

// Monitoring of rhou0_B0
ops_reduction reduce_43_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_43_rhou0_B0");
double rhou0_B0_43_output = 0.0;
int i043 = 350, j043 = 1;
int monitor_range_43_rhou0_B0[] = {i043, i043+1, j043, j043+1};
ops_par_loop(monitor_43_rhou0_B0, "Reduction rhou0_B0_43", opensbliblock00, 2, monitor_range_43_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_43_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_43_rhou0_B0, &rhou0_B0_43_output);

// Monitoring of rhou0_B0
ops_reduction reduce_44_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_44_rhou0_B0");
double rhou0_B0_44_output = 0.0;
int i044 = 375, j044 = 1;
int monitor_range_44_rhou0_B0[] = {i044, i044+1, j044, j044+1};
ops_par_loop(monitor_44_rhou0_B0, "Reduction rhou0_B0_44", opensbliblock00, 2, monitor_range_44_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_44_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_44_rhou0_B0, &rhou0_B0_44_output);

// Monitoring of rhou0_B0
ops_reduction reduce_45_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_45_rhou0_B0");
double rhou0_B0_45_output = 0.0;
int i045 = 400, j045 = 1;
int monitor_range_45_rhou0_B0[] = {i045, i045+1, j045, j045+1};
ops_par_loop(monitor_45_rhou0_B0, "Reduction rhou0_B0_45", opensbliblock00, 2, monitor_range_45_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_45_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_45_rhou0_B0, &rhou0_B0_45_output);

// Monitoring of rhou0_B0
ops_reduction reduce_46_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_46_rhou0_B0");
double rhou0_B0_46_output = 0.0;
int i046 = 425, j046 = 1;
int monitor_range_46_rhou0_B0[] = {i046, i046+1, j046, j046+1};
ops_par_loop(monitor_46_rhou0_B0, "Reduction rhou0_B0_46", opensbliblock00, 2, monitor_range_46_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_46_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_46_rhou0_B0, &rhou0_B0_46_output);

// Monitoring of rhou0_B0
ops_reduction reduce_47_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_47_rhou0_B0");
double rhou0_B0_47_output = 0.0;
int i047 = 450, j047 = 1;
int monitor_range_47_rhou0_B0[] = {i047, i047+1, j047, j047+1};
ops_par_loop(monitor_47_rhou0_B0, "Reduction rhou0_B0_47", opensbliblock00, 2, monitor_range_47_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_47_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_47_rhou0_B0, &rhou0_B0_47_output);

// Monitoring of rhou0_B0
ops_reduction reduce_48_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_48_rhou0_B0");
double rhou0_B0_48_output = 0.0;
int i048 = 462, j048 = 1;
int monitor_range_48_rhou0_B0[] = {i048, i048+1, j048, j048+1};
ops_par_loop(monitor_48_rhou0_B0, "Reduction rhou0_B0_48", opensbliblock00, 2, monitor_range_48_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_48_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_48_rhou0_B0, &rhou0_B0_48_output);

// Monitoring of rhou0_B0
ops_reduction reduce_49_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_49_rhou0_B0");
double rhou0_B0_49_output = 0.0;
int i049 = 475, j049 = 1;
int monitor_range_49_rhou0_B0[] = {i049, i049+1, j049, j049+1};
ops_par_loop(monitor_49_rhou0_B0, "Reduction rhou0_B0_49", opensbliblock00, 2, monitor_range_49_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_49_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_49_rhou0_B0, &rhou0_B0_49_output);

// Monitoring of rhou0_B0
ops_reduction reduce_50_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_50_rhou0_B0");
double rhou0_B0_50_output = 0.0;
int i050 = 487, j050 = 1;
int monitor_range_50_rhou0_B0[] = {i050, i050+1, j050, j050+1};
ops_par_loop(monitor_50_rhou0_B0, "Reduction rhou0_B0_50", opensbliblock00, 2, monitor_range_50_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_50_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_50_rhou0_B0, &rhou0_B0_50_output);

// Monitoring of rhou0_B0
ops_reduction reduce_51_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_51_rhou0_B0");
double rhou0_B0_51_output = 0.0;
int i051 = 500, j051 = 1;
int monitor_range_51_rhou0_B0[] = {i051, i051+1, j051, j051+1};
ops_par_loop(monitor_51_rhou0_B0, "Reduction rhou0_B0_51", opensbliblock00, 2, monitor_range_51_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_51_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_51_rhou0_B0, &rhou0_B0_51_output);

// Monitoring of rhou0_B0
ops_reduction reduce_52_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_52_rhou0_B0");
double rhou0_B0_52_output = 0.0;
int i052 = 512, j052 = 1;
int monitor_range_52_rhou0_B0[] = {i052, i052+1, j052, j052+1};
ops_par_loop(monitor_52_rhou0_B0, "Reduction rhou0_B0_52", opensbliblock00, 2, monitor_range_52_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_52_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_52_rhou0_B0, &rhou0_B0_52_output);

// Monitoring of rhou0_B0
ops_reduction reduce_53_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_53_rhou0_B0");
double rhou0_B0_53_output = 0.0;
int i053 = 525, j053 = 1;
int monitor_range_53_rhou0_B0[] = {i053, i053+1, j053, j053+1};
ops_par_loop(monitor_53_rhou0_B0, "Reduction rhou0_B0_53", opensbliblock00, 2, monitor_range_53_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_53_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_53_rhou0_B0, &rhou0_B0_53_output);

// Monitoring of rhou0_B0
ops_reduction reduce_54_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_54_rhou0_B0");
double rhou0_B0_54_output = 0.0;
int i054 = 537, j054 = 1;
int monitor_range_54_rhou0_B0[] = {i054, i054+1, j054, j054+1};
ops_par_loop(monitor_54_rhou0_B0, "Reduction rhou0_B0_54", opensbliblock00, 2, monitor_range_54_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_54_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_54_rhou0_B0, &rhou0_B0_54_output);

// Monitoring of rhou0_B0
ops_reduction reduce_55_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_55_rhou0_B0");
double rhou0_B0_55_output = 0.0;
int i055 = 550, j055 = 1;
int monitor_range_55_rhou0_B0[] = {i055, i055+1, j055, j055+1};
ops_par_loop(monitor_55_rhou0_B0, "Reduction rhou0_B0_55", opensbliblock00, 2, monitor_range_55_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_55_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_55_rhou0_B0, &rhou0_B0_55_output);

// Monitoring of rhou0_B0
ops_reduction reduce_56_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_56_rhou0_B0");
double rhou0_B0_56_output = 0.0;
int i056 = 575, j056 = 1;
int monitor_range_56_rhou0_B0[] = {i056, i056+1, j056, j056+1};
ops_par_loop(monitor_56_rhou0_B0, "Reduction rhou0_B0_56", opensbliblock00, 2, monitor_range_56_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_56_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_56_rhou0_B0, &rhou0_B0_56_output);

// Monitoring of rhou0_B0
ops_reduction reduce_57_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_57_rhou0_B0");
double rhou0_B0_57_output = 0.0;
int i057 = 600, j057 = 1;
int monitor_range_57_rhou0_B0[] = {i057, i057+1, j057, j057+1};
ops_par_loop(monitor_57_rhou0_B0, "Reduction rhou0_B0_57", opensbliblock00, 2, monitor_range_57_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_57_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_57_rhou0_B0, &rhou0_B0_57_output);

// Monitoring of rhou0_B0
ops_reduction reduce_58_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_58_rhou0_B0");
double rhou0_B0_58_output = 0.0;
int i058 = 625, j058 = 1;
int monitor_range_58_rhou0_B0[] = {i058, i058+1, j058, j058+1};
ops_par_loop(monitor_58_rhou0_B0, "Reduction rhou0_B0_58", opensbliblock00, 2, monitor_range_58_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_58_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_58_rhou0_B0, &rhou0_B0_58_output);

// Monitoring of rhou0_B0
ops_reduction reduce_59_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_59_rhou0_B0");
double rhou0_B0_59_output = 0.0;
int i059 = 650, j059 = 1;
int monitor_range_59_rhou0_B0[] = {i059, i059+1, j059, j059+1};
ops_par_loop(monitor_59_rhou0_B0, "Reduction rhou0_B0_59", opensbliblock00, 2, monitor_range_59_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_59_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_59_rhou0_B0, &rhou0_B0_59_output);

// Monitoring of rhou0_B0
ops_reduction reduce_60_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_60_rhou0_B0");
double rhou0_B0_60_output = 0.0;
int i060 = 675, j060 = 1;
int monitor_range_60_rhou0_B0[] = {i060, i060+1, j060, j060+1};
ops_par_loop(monitor_60_rhou0_B0, "Reduction rhou0_B0_60", opensbliblock00, 2, monitor_range_60_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_60_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_60_rhou0_B0, &rhou0_B0_60_output);

// Monitoring of rhou0_B0
ops_reduction reduce_61_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_61_rhou0_B0");
double rhou0_B0_61_output = 0.0;
int i061 = 700, j061 = 1;
int monitor_range_61_rhou0_B0[] = {i061, i061+1, j061, j061+1};
ops_par_loop(monitor_61_rhou0_B0, "Reduction rhou0_B0_61", opensbliblock00, 2, monitor_range_61_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_61_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_61_rhou0_B0, &rhou0_B0_61_output);

// Monitoring of rhou0_B0
ops_reduction reduce_62_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_62_rhou0_B0");
double rhou0_B0_62_output = 0.0;
int i062 = 725, j062 = 1;
int monitor_range_62_rhou0_B0[] = {i062, i062+1, j062, j062+1};
ops_par_loop(monitor_62_rhou0_B0, "Reduction rhou0_B0_62", opensbliblock00, 2, monitor_range_62_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_62_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_62_rhou0_B0, &rhou0_B0_62_output);

// Monitoring of rhou0_B0
ops_reduction reduce_63_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_63_rhou0_B0");
double rhou0_B0_63_output = 0.0;
int i063 = 750, j063 = 1;
int monitor_range_63_rhou0_B0[] = {i063, i063+1, j063, j063+1};
ops_par_loop(monitor_63_rhou0_B0, "Reduction rhou0_B0_63", opensbliblock00, 2, monitor_range_63_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_63_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_63_rhou0_B0, &rhou0_B0_63_output);

// Monitoring of rhou0_B0
ops_reduction reduce_64_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_64_rhou0_B0");
double rhou0_B0_64_output = 0.0;
int i064 = 775, j064 = 1;
int monitor_range_64_rhou0_B0[] = {i064, i064+1, j064, j064+1};
ops_par_loop(monitor_64_rhou0_B0, "Reduction rhou0_B0_64", opensbliblock00, 2, monitor_range_64_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_64_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_64_rhou0_B0, &rhou0_B0_64_output);

// Monitoring of rhou0_B0
ops_reduction reduce_65_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_65_rhou0_B0");
double rhou0_B0_65_output = 0.0;
int i065 = 800, j065 = 1;
int monitor_range_65_rhou0_B0[] = {i065, i065+1, j065, j065+1};
ops_par_loop(monitor_65_rhou0_B0, "Reduction rhou0_B0_65", opensbliblock00, 2, monitor_range_65_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_65_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_65_rhou0_B0, &rhou0_B0_65_output);

// Monitoring of rhou0_B0
ops_reduction reduce_66_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_66_rhou0_B0");
double rhou0_B0_66_output = 0.0;
int i066 = 825, j066 = 1;
int monitor_range_66_rhou0_B0[] = {i066, i066+1, j066, j066+1};
ops_par_loop(monitor_66_rhou0_B0, "Reduction rhou0_B0_66", opensbliblock00, 2, monitor_range_66_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_66_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_66_rhou0_B0, &rhou0_B0_66_output);

// Monitoring of rhou0_B0
ops_reduction reduce_67_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_67_rhou0_B0");
double rhou0_B0_67_output = 0.0;
int i067 = 850, j067 = 1;
int monitor_range_67_rhou0_B0[] = {i067, i067+1, j067, j067+1};
ops_par_loop(monitor_67_rhou0_B0, "Reduction rhou0_B0_67", opensbliblock00, 2, monitor_range_67_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_67_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_67_rhou0_B0, &rhou0_B0_67_output);

// Monitoring of rhou0_B0
ops_reduction reduce_68_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_68_rhou0_B0");
double rhou0_B0_68_output = 0.0;
int i068 = 875, j068 = 1;
int monitor_range_68_rhou0_B0[] = {i068, i068+1, j068, j068+1};
ops_par_loop(monitor_68_rhou0_B0, "Reduction rhou0_B0_68", opensbliblock00, 2, monitor_range_68_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_68_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_68_rhou0_B0, &rhou0_B0_68_output);

// Monitoring of rhou0_B0
ops_reduction reduce_69_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_69_rhou0_B0");
double rhou0_B0_69_output = 0.0;
int i069 = 900, j069 = 1;
int monitor_range_69_rhou0_B0[] = {i069, i069+1, j069, j069+1};
ops_par_loop(monitor_69_rhou0_B0, "Reduction rhou0_B0_69", opensbliblock00, 2, monitor_range_69_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_69_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_69_rhou0_B0, &rhou0_B0_69_output);

// Monitoring of rhou0_B0
ops_reduction reduce_70_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_70_rhou0_B0");
double rhou0_B0_70_output = 0.0;
int i070 = 925, j070 = 1;
int monitor_range_70_rhou0_B0[] = {i070, i070+1, j070, j070+1};
ops_par_loop(monitor_70_rhou0_B0, "Reduction rhou0_B0_70", opensbliblock00, 2, monitor_range_70_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_70_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_70_rhou0_B0, &rhou0_B0_70_output);

// Monitoring of rhou0_B0
ops_reduction reduce_71_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_71_rhou0_B0");
double rhou0_B0_71_output = 0.0;
int i071 = 950, j071 = 1;
int monitor_range_71_rhou0_B0[] = {i071, i071+1, j071, j071+1};
ops_par_loop(monitor_71_rhou0_B0, "Reduction rhou0_B0_71", opensbliblock00, 2, monitor_range_71_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_71_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_71_rhou0_B0, &rhou0_B0_71_output);

// Monitoring of rhou0_B0
ops_reduction reduce_72_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_72_rhou0_B0");
double rhou0_B0_72_output = 0.0;
int i072 = 975, j072 = 1;
int monitor_range_72_rhou0_B0[] = {i072, i072+1, j072, j072+1};
ops_par_loop(monitor_72_rhou0_B0, "Reduction rhou0_B0_72", opensbliblock00, 2, monitor_range_72_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_72_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_72_rhou0_B0, &rhou0_B0_72_output);

// Monitoring of rhou0_B0
ops_reduction reduce_73_rhou0_B0 = ops_decl_reduction_handle(sizeof(double), "double", "reduction_73_rhou0_B0");
double rhou0_B0_73_output = 0.0;
int i073 = 997, j073 = 1;
int monitor_range_73_rhou0_B0[] = {i073, i073+1, j073, j073+1};
ops_par_loop(monitor_73_rhou0_B0, "Reduction rhou0_B0_73", opensbliblock00, 2, monitor_range_73_rhou0_B0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_reduce(reduce_73_rhou0_B0, 1, "double", OPS_INC));
ops_reduction_result(reduce_73_rhou0_B0, &rhou0_B0_73_output);

// Write the output values
ops_fprintf(f0, "%d, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e, %.12e\n", iter+1, simulation_time, p_B0_0_output, p_B0_1_output, p_B0_2_output, p_B0_3_output, p_B0_4_output, p_B0_5_output, p_B0_6_output, p_B0_7_output, p_B0_8_output, p_B0_9_output, p_B0_10_output, p_B0_11_output, p_B0_12_output, p_B0_13_output, p_B0_14_output, p_B0_15_output, p_B0_16_output, p_B0_17_output, p_B0_18_output, p_B0_19_output, p_B0_20_output, p_B0_21_output, p_B0_22_output, p_B0_23_output, p_B0_24_output, p_B0_25_output, p_B0_26_output, p_B0_27_output, p_B0_28_output, p_B0_29_output, p_B0_30_output, p_B0_31_output, p_B0_32_output, p_B0_33_output, p_B0_34_output, p_B0_35_output, p_B0_36_output, rhou0_B0_37_output, rhou0_B0_38_output, rhou0_B0_39_output, rhou0_B0_40_output, rhou0_B0_41_output, rhou0_B0_42_output, rhou0_B0_43_output, rhou0_B0_44_output, rhou0_B0_45_output, rhou0_B0_46_output, rhou0_B0_47_output, rhou0_B0_48_output, rhou0_B0_49_output, rhou0_B0_50_output, rhou0_B0_51_output, rhou0_B0_52_output, rhou0_B0_53_output, rhou0_B0_54_output, rhou0_B0_55_output, rhou0_B0_56_output, rhou0_B0_57_output, rhou0_B0_58_output, rhou0_B0_59_output, rhou0_B0_60_output, rhou0_B0_61_output, rhou0_B0_62_output, rhou0_B0_63_output, rhou0_B0_64_output, rhou0_B0_65_output, rhou0_B0_66_output, rhou0_B0_67_output, rhou0_B0_68_output, rhou0_B0_69_output, rhou0_B0_70_output, rhou0_B0_71_output, rhou0_B0_72_output, rhou0_B0_73_output);
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