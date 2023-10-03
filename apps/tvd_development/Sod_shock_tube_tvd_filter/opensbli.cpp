#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int block0np0;
double Delta0block0;
int niter;
double dt;
double gama;
double gamma_m1;
double shock_filter_control;
double sensor_theta;
double inv_0;
double rc1;
double rc2;
double rc3;
double rc4;
double rc5;
double rc6;
double rc7;
double rc8;
double rc9;
double rc10;
double rc11;
double rc12;
double rc13;
double rc14;
double rc15;
double rc16;
double rc17;
double rc18;
double rc19;
double rc20;
double rc21;
double rcinv22;
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
gamma_m1 = gama - 1;
shock_filter_control = 1;
sensor_theta = 4.00000000000000;
inv_0 = 1.0/Delta0block0;
rc1 = 1.0/2.0;
rc2 = 1.0/12.0;
rc3 = 2.0/3.0;
rc4 = 1.0/4.0;
rc5 = 5.0/3.0;
rc6 = 31.0/6.0;
rc7 = 11.0/6.0;
rc8 = 25.0/6.0;
rc9 = 19.0/6.0;
rc10 = 1.0/3.0;
rc11 = 13.0/6.0;
rc12 = 5.0/6.0;
rc13 = 3.0/10.0;
rc14 = 3.0/5.0;
rc15 = 1.0/10.0;
rc16 = 1.0/6.0;
rc17 = 5.0/12.0;
rc18 = 7.0/12.0;
rc19 = 11.0/12.0;
rc20 = 10.0/3.0;
rc21 = 1.0/60.0;
rcinv22 = 1.0/gamma_m1;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("shock_filter_control" , 1, "double", &shock_filter_control);
ops_decl_const("sensor_theta" , 1, "double", &sensor_theta);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("rc1" , 1, "double", &rc1);
ops_decl_const("rc2" , 1, "double", &rc2);
ops_decl_const("rc3" , 1, "double", &rc3);
ops_decl_const("rc4" , 1, "double", &rc4);
ops_decl_const("rc5" , 1, "double", &rc5);
ops_decl_const("rc6" , 1, "double", &rc6);
ops_decl_const("rc7" , 1, "double", &rc7);
ops_decl_const("rc8" , 1, "double", &rc8);
ops_decl_const("rc9" , 1, "double", &rc9);
ops_decl_const("rc10" , 1, "double", &rc10);
ops_decl_const("rc11" , 1, "double", &rc11);
ops_decl_const("rc12" , 1, "double", &rc12);
ops_decl_const("rc13" , 1, "double", &rc13);
ops_decl_const("rc14" , 1, "double", &rc14);
ops_decl_const("rc15" , 1, "double", &rc15);
ops_decl_const("rc16" , 1, "double", &rc16);
ops_decl_const("rc17" , 1, "double", &rc17);
ops_decl_const("rc18" , 1, "double", &rc18);
ops_decl_const("rc19" , 1, "double", &rc19);
ops_decl_const("rc20" , 1, "double", &rc20);
ops_decl_const("rc21" , 1, "double", &rc21);
ops_decl_const("rcinv22" , 1, "double", &rcinv22);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(1, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {0};
ops_stencil stencil_0_00 = ops_decl_stencil(1,1,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
ops_stencil stencil_0_01 = ops_decl_stencil(1,11,stencil_0_01temp,"stencil_0_01temp");
int stencil_0_02temp[] = {-3, -2, -1, 1, 2, 3};
ops_stencil stencil_0_02 = ops_decl_stencil(1,6,stencil_0_02temp,"stencil_0_02temp");
int stencil_0_03temp[] = {-4, -3, -2, -1, 1, 2, 3, 4};
ops_stencil stencil_0_03 = ops_decl_stencil(1,8,stencil_0_03temp,"stencil_0_03temp");
int stencil_0_04temp[] = {-2, -1, 0, 1, 2, 3};
ops_stencil stencil_0_04 = ops_decl_stencil(1,6,stencil_0_04temp,"stencil_0_04temp");
int stencil_0_05temp[] = {-1, 0};
ops_stencil stencil_0_05 = ops_decl_stencil(1,2,stencil_0_05temp,"stencil_0_05temp");
// Init OPS partition
ops_partition("");

int iteration_range_24_block0[] = {-5, block0np0 + 5};
ops_par_loop(opensbliblock00Kernel024, "Grid_based_initialisation0", opensbliblock00, 1, iteration_range_24_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_idx());


int iteration_range_25_block0[] = {0, 1};
ops_par_loop(opensbliblock00Kernel025, "Metric boundary dir0 side0", opensbliblock00, 1, iteration_range_25_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_02, "double", OPS_RW));


int iteration_range_26_block0[] = {block0np0 - 1, block0np0};
ops_par_loop(opensbliblock00Kernel026, "Metric boundary dir0 side1", opensbliblock00, 1, iteration_range_26_block0,
ops_arg_dat(detJ_B0, 1, stencil_0_03, "double", OPS_RW));


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{

if(fmod(iter+1, 1) == 0){
    ops_printf("Iteration is %d\n", iter+1);
    ops_NaNcheck(rho_B0);
}

int iteration_range_22_block0[] = {-3, 1};
ops_par_loop(opensbliblock00Kernel022, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_22_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_23_block0[] = {block0np0 - 1, block0np0 + 4};
ops_par_loop(opensbliblock00Kernel023, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_23_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE));


for(int stage=0; stage<=2; stage++)
{
int iteration_range_3_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel003, "CRu0_B0", opensbliblock00, 1, iteration_range_3_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_13_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel013, "CRp_B0", opensbliblock00, 1, iteration_range_13_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_2_block0[] = {-2, block0np0 + 2};
ops_par_loop(opensbliblock00Kernel002, "Convective terms group 0", opensbliblock00, 1, iteration_range_2_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk17_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_5_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel005, "Convective CD rhoE_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_5_block0,
ops_arg_dat(wk14_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_7_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel007, "Convective CD q0_B0 xi0 ", opensbliblock00, 1, iteration_range_7_block0,
ops_arg_dat(q0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_9_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel009, "Convective CD rho_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_9_block0,
ops_arg_dat(wk15_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_11_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel011, "Convective CD rhou0_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_11_block0,
ops_arg_dat(wk16_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_12_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel012, "Convective CD rhoE_B0 xi0 ", opensbliblock00, 1, iteration_range_12_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_14_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel014, "Convective CD p_B0*u0_B0 xi0 ", opensbliblock00, 1, iteration_range_14_block0,
ops_arg_dat(wk17_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_15_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel015, "Convective CD p_B0 xi0 ", opensbliblock00, 1, iteration_range_15_block0,
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_16_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel016, "Convective CD rho_B0 xi0 ", opensbliblock00, 1, iteration_range_16_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_17_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel017, "Convective CD rhou0_B0 xi0 ", opensbliblock00, 1, iteration_range_17_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_18_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel018, "Convective CD u0_B0 xi0 ", opensbliblock00, 1, iteration_range_18_block0,
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_20_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel020, "Convective CD tau00_B0 xi0 ", opensbliblock00, 1, iteration_range_20_block0,
ops_arg_dat(tau00_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_21_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel021, "Convective residual ", opensbliblock00, 1, iteration_range_21_block0,
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(tau00_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_30_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel030, "Temporal solution advancement", opensbliblock00, 1, iteration_range_30_block0,
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(tempRK_rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ));


int iteration_range_22_block0[] = {-3, 1};
ops_par_loop(opensbliblock00Kernel022, "Dirichlet boundary dir0 side0", opensbliblock00, 1, iteration_range_22_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_23_block0[] = {block0np0 - 1, block0np0 + 4};
ops_par_loop(opensbliblock00Kernel023, "Dirichlet boundary dir0 side1", opensbliblock00, 1, iteration_range_23_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE));


}
int iteration_range_27_block0[] = {-3, block0np0 + 4};
ops_par_loop(opensbliblock00Kernel027, "User kernel: Constituent Relations evaluation", opensbliblock00, 1, iteration_range_27_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Mach_sensor_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(a_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_RW));


int iteration_range_28_block0[] = {-1, block0np0 + 1};
ops_par_loop(opensbliblock00Kernel028, "User kernel: WENO reconstruction direction 0", opensbliblock00, 1, iteration_range_28_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_29_block0[] = {0, block0np0};
ops_par_loop(opensbliblock00Kernel029, "User kernel: Non-linear filter application", opensbliblock00, 1, iteration_range_29_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(Mach_sensor_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_idx());


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
