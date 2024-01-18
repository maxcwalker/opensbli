#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#include "constants.h"
#define OPS_1D
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
block0np0 = 200;
Delta0block0 = 1.0/(block0np0-1);
niter = ceil(0.2/0.0002);
double rkB[] = {0.924574112262461, 0.287712943868770, 0.626538293270800};
double rkA[] = {0.0, -2.91549395770192, 0.0};
dt = 0.0002;
HDF5_timing = 0;
delta_TVD = 0.500000000000000;
eps_TVD = 1.00000000000000e-8;
kappa_TVD = 1.50000000000000;
gama = 1.4;
gamma_m1 = -1 + gama;
invDelta0block0 = 1.0/(Delta0block0);
invdelta_TVD = 1.0/(delta_TVD);
invgamma_m1 = 1.0/(gamma_m1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("HDF5_timing" , 1, "int", &HDF5_timing);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("delta_TVD" , 1, "double", &delta_TVD);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("eps_TVD" , 1, "double", &eps_TVD);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("invDelta0block0" , 1, "double", &invDelta0block0);
ops_decl_const("invdelta_TVD" , 1, "double", &invdelta_TVD);
ops_decl_const("invgamma_m1" , 1, "double", &invgamma_m1);
ops_decl_const("kappa_TVD" , 1, "double", &kappa_TVD);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("simulation_time" , 1, "double", &simulation_time);
ops_decl_const("start_iter" , 1, "int", &start_iter);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(1, "opensbliblock00");
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
int iteration_range_15_block0[] = {-5, block0np0 + 5};
ops_par_loop(opensbliblock00Kernel015, "Grid_based_initialisation0", opensbliblock00, 1, iteration_range_15_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhof_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00_1, "double", OPS_RW),
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
if(fmod(iter+1, 1) == 0){
        ops_timers(&inner_end, &elapsed_inner_end);
        ops_printf("Iteration: %d. Time-step: %.3e. Simulation time: %.5f. Time/iteration: %lf.\n", iter+1, dt, simulation_time, (elapsed_inner_end - elapsed_inner_start)/1);
        fflush(stdout);
        ops_NaNcheck(rho_B0);
        ops_timers(&inner_start, &elapsed_inner_start);
}

int iteration_range_13_block0[] = {-2, 1};
ops_par_loop(opensbliblock00Kernel013, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_13_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_14_block0[] = {block0np0 - 1, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel014, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_14_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

for(stage=0; stage<=2; stage++)
{
int iteration_range_7_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel007, "CRu0_B0", opensbliblock00, 1, iteration_range_7_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_8_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel008, "CRp_B0", opensbliblock00, 1, iteration_range_8_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_6_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel006, "Derivative evaluation CD u0_B0 x0 ", opensbliblock00, 1, iteration_range_6_block0,
ops_arg_dat(u0_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_12_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel012, "Convective terms", opensbliblock00, 1, iteration_range_12_block0,
ops_arg_dat(p_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_44_1, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_idx());

int iteration_range_16_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel016, "Temporal solution advancement", opensbliblock00, 1, iteration_range_16_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ));

int iteration_range_13_block0[] = {-2, 1};
ops_par_loop(opensbliblock00Kernel013, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_13_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_14_block0[] = {block0np0 - 1, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel014, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_14_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

}
int iteration_range_2_block0[] = {-1, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel002, "User kernel: Constituent Relations evaluation", opensbliblock00, 1, iteration_range_2_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(u0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(p_B0, 1, stencil_0_00_1, "double", OPS_RW));

int iteration_range_3_block0[] = {-5, block0np0 + 5};
ops_par_loop(opensbliblock00Kernel003, "User kernel: Zero the work arrays", opensbliblock00, 1, iteration_range_3_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_4_block0[] = {-1, block0np0 + 1};
ops_par_loop(opensbliblock00Kernel004, "User kernel: TVD reconstruction direction 0", opensbliblock00, 1, iteration_range_4_block0,
ops_arg_dat(a_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(f_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(rhof_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_12_1, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00_1, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00_1, "double", OPS_WRITE));

int iteration_range_5_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel005, "User kernel: Non-linear TVD Filter application", opensbliblock00, 1, iteration_range_5_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_10_1, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_10_1, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_10_1, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_10_1, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rhof_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00_1, "double", OPS_RW),
ops_arg_idx());

}
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);

HDF5_IO_Write_0_opensbliblock00(opensbliblock00, rho_B0, rhou0_B0, rhoE_B0, x0_B0, HDF5_timing);
ops_exit();
//Main program end 
}