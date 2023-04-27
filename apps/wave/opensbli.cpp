#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int block0np0;
double Delta0block0;
double c0;
int niter;
double dt;
double inv_0;
double rc1;
double rc2;
#define OPS_1D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
int main(int argc, char **argv) 
{
block0np0 = 200;
Delta0block0 = 1.0/block0np0;
c0 = 0.5;
niter = 1.0/0.001;
double rkold[] = {1.0/4.0, 3.0/20.0, 3.0/5.0};
double rknew[] = {2.0/3.0, 5.0/12.0, 3.0/5.0};
dt = 0.001;
inv_0 = 1.0/Delta0block0;
rc1 = 2.0/3.0;
rc2 = 1.0/12.0;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("c0" , 1, "double", &c0);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("rc1" , 1, "double", &rc1);
ops_decl_const("rc2" , 1, "double", &rc2);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(1, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {0};
ops_stencil stencil_0_00 = ops_decl_stencil(1,1,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {-2, -1, 1, 2};
ops_stencil stencil_0_01 = ops_decl_stencil(1,4,stencil_0_01temp,"stencil_0_01temp");
#include "bc_exchanges.h"
// Init OPS partition
ops_partition("");

int iteration_range_0_block0[] = {-5, block0np0 + 5};
ops_par_loop(opensbliblock00Kernel000, "Grid_based_initialisation0", opensbliblock00, 1, iteration_range_0_block0,
ops_arg_dat(phi_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_idx());


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{
ops_halo_transfer(exchange5_block0);
ops_halo_transfer(exchange6_block0);
int iteration_range_7_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel007, "Save equations", opensbliblock00, 1, iteration_range_7_block0,
ops_arg_dat(phi_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(phi_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE));


for(int stage=0; stage<=2; stage++)
{
int iteration_range_3_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel003, "Convective CD phi_B0 x0 ", opensbliblock00, 1, iteration_range_3_block0,
ops_arg_dat(phi_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_4_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel004, "Convective residual ", opensbliblock00, 1, iteration_range_4_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_9_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel009, "Sub stage advancement", opensbliblock00, 1, iteration_range_9_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(phi_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(phi_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_gbl(&rknew[stage], 1, "double", OPS_READ));


int iteration_range_8_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel008, "Temporal solution advancement", opensbliblock00, 1, iteration_range_8_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(phi_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_gbl(&rkold[stage], 1, "double", OPS_READ));


ops_halo_transfer(exchange5_block0);
ops_halo_transfer(exchange6_block0);
}
}
double cpu_end0, elapsed_end0;
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("\nTimings are:\n");
ops_printf("-----------------------------------------\n");
ops_printf("Total Wall time %lf\n",elapsed_end0-elapsed_start0);
char name0[80];
sprintf(name0, "opensbli_output.h5");
ops_fetch_block_hdf5_file(opensbliblock00, name0);
ops_fetch_dat_hdf5_file(phi_B0, name0);
ops_fetch_dat_hdf5_file(x0_B0, name0);
ops_exit();
//Main program end 
}