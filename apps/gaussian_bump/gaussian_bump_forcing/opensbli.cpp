#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include "constants.h"
#define OPS_2D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
#include "io.h"
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
dt = 0.01;
block0np0 = 600.0;
block0np1 = 400.0;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Twall = 1.68;
Minf = 2.0;
write_output_file = 5000;
HDF5_timing = 0;
RefT = 288.0;
SuthT = 110.4;
gama = 1.4;
Pr = 0.72;
Re = 950.0;
shock_filter_control = 1.00000000000000;
gamma_m1 = -1 + gama;
b = 5.0;
a = 20.0;
L = 400.0;
H = 115.0;
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
ops_par_loop(opensbliblock00Kernel067, "MetricsEquation CD x1_B0 xi1 ", opensbliblock00, 2, iteration_range_67_block0,
ops_arg_dat(x1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_68_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel068, "MetricsEquation CD x1_B0 xi0 ", opensbliblock00, 2, iteration_range_68_block0,
ops_arg_dat(x1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_69_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel069, "MetricsEquation CD x0_B0 xi0 ", opensbliblock00, 2, iteration_range_69_block0,
ops_arg_dat(x0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_70_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel070, "MetricsEquation CD x0_B0 xi1 ", opensbliblock00, 2, iteration_range_70_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_73_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel073, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_73_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(detJ_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_RW),
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
ops_par_loop(opensbliblock00Kernel078, "MetricsEquation CD D10_B0 xi0 ", opensbliblock00, 2, iteration_range_78_block0,
ops_arg_dat(D10_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_79_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel079, "MetricsEquation CD D10_B0 xi1 ", opensbliblock00, 2, iteration_range_79_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_80_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel080, "MetricsEquation CD D00_B0 xi1 ", opensbliblock00, 2, iteration_range_80_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_81_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel081, "MetricsEquation CD D01_B0 xi1 ", opensbliblock00, 2, iteration_range_81_block0,
ops_arg_dat(D01_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_82_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel082, "MetricsEquation CD D11_B0 xi0 ", opensbliblock00, 2, iteration_range_82_block0,
ops_arg_dat(D11_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_83_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel083, "MetricsEquation CD D11_B0 xi1 ", opensbliblock00, 2, iteration_range_83_block0,
ops_arg_dat(D11_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_84_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel084, "MetricsEquation CD D01_B0 xi0 ", opensbliblock00, 2, iteration_range_84_block0,
ops_arg_dat(D01_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
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
if(fmod(iter+1, 100) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/100);
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
int iteration_range_3_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel003, "CRu1", opensbliblock00, 2, iteration_range_3_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_10_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel010, "CRu0", opensbliblock00, 2, iteration_range_10_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_5_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel005, "CRp", opensbliblock00, 2, iteration_range_5_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_6_block0[] = {-3, block0np0 + 4, 0, block0np1};
ops_par_loop(opensbliblock00Kernel006, "CRU0", opensbliblock00, 2, iteration_range_6_block0,
ops_arg_dat(D00_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_15_block0[] = {0, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel015, "CRU1", opensbliblock00, 2, iteration_range_15_block0,
ops_arg_dat(D10_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_12_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel012, "CRa", opensbliblock00, 2, iteration_range_12_block0,
ops_arg_dat(p_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_00_2, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE));

int iteration_range_20_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel020, "CRT_B0", opensbliblock00, 2, iteration_range_20_block0,
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
ops_par_loop(opensbliblock00Kernel028, "Viscous CD u1_B0 xi0 ", opensbliblock00, 2, iteration_range_28_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_29_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel029, "Viscous CD u0_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_29_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_31_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel031, "Viscous CD T_B0 xi0 ", opensbliblock00, 2, iteration_range_31_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_32_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel032, "Viscous CD u1_B0 xi1 ", opensbliblock00, 2, iteration_range_32_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_33_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel033, "Viscous CD u0_B0 xi0 ", opensbliblock00, 2, iteration_range_33_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_36_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel036, "Viscous CD mu_B0 xi0 ", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(mu_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_37_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel037, "Viscous CD u1_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_37_block0,
ops_arg_dat(u1_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_38_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel038, "Viscous CD T_B0 xi1 ", opensbliblock00, 2, iteration_range_38_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_39_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel039, "Viscous CD T_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_39_block0,
ops_arg_dat(T_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_40_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel040, "Viscous CD T_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_40_block0,
ops_arg_dat(T_B0, 1, stencil_0_44_00_10, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_41_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel041, "Viscous CD mu_B0 xi1 ", opensbliblock00, 2, iteration_range_41_block0,
ops_arg_dat(mu_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_42_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel042, "Viscous CD u1_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_42_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_43_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel043, "Viscous CD u0_B0 xi1 ", opensbliblock00, 2, iteration_range_43_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_44_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel044, "Viscous CD u0_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_44_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_30_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel030, "Viscous CD CD u0_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_30_block0,
ops_arg_dat(wk5_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_34_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel034, "Viscous CD CD u1_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_34_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_35_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel035, "Viscous CD CD T_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_35_block0,
ops_arg_dat(wk3_B0, 1, stencil_0_00_24_8, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00_00_2, "double", OPS_WRITE),
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
if (fmod(1 + iter,write_output_file) == 0 || iter == 0){
HDF5_IO_Write_0_opensbliblock00_dynamic(opensbliblock00, iter, rho_B0, rhou0_B0, rhou1_B0, rhoE_B0, x0_B0, x1_B0, D11_B0, HDF5_timing);
}

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhou1_B0, rhoE_B0, x0_B0, x1_B0, D11_B0, HDF5_timing);
ops_exit();
//Main program end 
}