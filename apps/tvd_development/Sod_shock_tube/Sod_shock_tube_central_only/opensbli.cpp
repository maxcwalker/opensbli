#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int block0np0;
double Delta0block0;
int niter;
double dt;
double gama;
double inv_0;
double rc1;
double rc2;
double rc3;
#define OPS_1D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
int main(int argc, char **argv) 
{
block0np0 = 200;
Delta0block0 = 1.0/(block0np0-1);
niter = ceil(0.2/0.0002);
double rkB[] = {1.0/3.0, 15.0/16.0, 8.0/15.0};
double rkA[] = {0, -5.0/9.0, -153.0/128.0};
dt = 0.0002;
gama = 1.4;
inv_0 = 1.0/Delta0block0;
rc1 = 1.0/2.0;
rc2 = 2.0/3.0;
rc3 = 1.0/12.0;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("rc1" , 1, "double", &rc1);
ops_decl_const("rc2" , 1, "double", &rc2);
ops_decl_const("rc3" , 1, "double", &rc3);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(1, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {0};
ops_stencil stencil_0_00 = ops_decl_stencil(1,1,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
ops_stencil stencil_0_01 = ops_decl_stencil(1,11,stencil_0_01temp,"stencil_0_01temp");
int stencil_0_02temp[] = {-2, -1, 1, 2};
ops_stencil stencil_0_02 = ops_decl_stencil(1,4,stencil_0_02temp,"stencil_0_02temp");
// Init OPS partition
ops_partition("");

int iteration_range_22_block0[] = {-5, block0np0 + 5};
ops_par_loop(opensbliblock00Kernel022, "Grid_based_initialisation0", opensbliblock00, 1, iteration_range_22_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_idx());


int iteration_range_23_block0[] = {0, 1};
ops_par_loop(opensbliblock00Kernel023, "Metric boundary dir0 side0", opensbliblock00, 1, iteration_range_23_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_02, "double", OPS_RW));


int iteration_range_24_block0[] = {block0np0 - 1, block0np0};
ops_par_loop(opensbliblock00Kernel024, "Metric boundary dir0 side1", opensbliblock00, 1, iteration_range_24_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_02, "double", OPS_RW));


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{
int iteration_range_20_block0[] = {-2, 1};
ops_par_loop(opensbliblock00Kernel020, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_20_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_21_block0[] = {block0np0 - 1, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel021, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_21_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE));


for(int stage=0; stage<=2; stage++)
{
int iteration_range_2_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel002, "CRu0_B0", opensbliblock00, 1, iteration_range_2_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_1_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel001, "CRp_B0", opensbliblock00, 1, iteration_range_1_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_0_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel000, "Convective terms group 0", opensbliblock00, 1, iteration_range_0_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_3_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel003, "Convective CD p_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_3_block0,
ops_arg_dat(wk11_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_5_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel005, "Convective CD rhou0_B0 xi0 ", opensbliblock00, 1, iteration_range_5_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_7_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel007, "Convective CD rhoE_B0 xi0 ", opensbliblock00, 1, iteration_range_7_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_8_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel008, "Convective CD rhou0_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_8_block0,
ops_arg_dat(wk12_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_9_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel009, "Convective CD u0_B0 xi0 ", opensbliblock00, 1, iteration_range_9_block0,
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_10_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel010, "Convective CD rhoE_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_10_block0,
ops_arg_dat(wk13_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_12_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel012, "Convective CD rho_B0 xi0 ", opensbliblock00, 1, iteration_range_12_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_13_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel013, "Convective CD p_B0 xi0 ", opensbliblock00, 1, iteration_range_13_block0,
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_15_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel015, "Convective CD tau00_B0 xi0 ", opensbliblock00, 1, iteration_range_15_block0,
ops_arg_dat(tau00_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_17_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel017, "Convective CD q0_B0 xi0 ", opensbliblock00, 1, iteration_range_17_block0,
ops_arg_dat(q0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_18_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel018, "Convective CD rho_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_18_block0,
ops_arg_dat(wk14_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_19_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel019, "Convective residual ", opensbliblock00, 1, iteration_range_19_block0,
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(tau00_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_25_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel025, "Temporal solution advancement", opensbliblock00, 1, iteration_range_25_block0,
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(tempRK_rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ));


int iteration_range_20_block0[] = {-2, 1};
ops_par_loop(opensbliblock00Kernel020, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_20_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_21_block0[] = {block0np0 - 1, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel021, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_21_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE));


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
ops_fetch_dat_hdf5_file(rho_B0, name0);
ops_fetch_dat_hdf5_file(rhou0_B0, name0);
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
ops_fetch_dat_hdf5_file(x0_B0, name0);
ops_exit();
//Main program end 
}