#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int block0np0;
int block0np1;
int block0np2;
double Delta0block0;
double Delta1block0;
double Delta2block0;
int niter;
double dt;
double Minf;
double gama;
double Pr;
double Re;
double inv_0;
double inv_1;
double inv_2;
double inv_3;
double inv_4;
double inv_5;
double rc6;
double rc7;
double rc8;
double rcinv9;
double rc10;
double rc11;
double rcinv12;
double rcinv13;
double rcinv14;
#define OPS_3D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
int main(int argc, char **argv) 
{
block0np0 = 64;
block0np1 = 64;
block0np2 = 64;
Delta0block0 = 2*M_PI/block0np0;
Delta1block0 = 2*M_PI/block0np1;
Delta2block0 = 2*M_PI/block0np2;
niter = 5909;
double rkold[] = {1.0/4.0, 3.0/20.0, 3.0/5.0};
double rknew[] = {2.0/3.0, 5.0/12.0, 3.0/5.0};
dt = 0.003385;
Minf = 0.1;
gama = 1.4;
Pr = 0.71;
Re = 1600.0;
inv_0 = 1.0/Delta2block0;
inv_1 = 1.0/Delta1block0;
inv_2 = 1.0/Delta0block0;
inv_3 = pow(Delta1block0, -2);
inv_4 = pow(Delta2block0, -2);
inv_5 = pow(Delta0block0, -2);
rc6 = 1.0/2.0;
rc7 = 2.0/3.0;
rc8 = 1.0/12.0;
rcinv9 = 1.0/Re;
rc10 = 4.0/3.0;
rc11 = 1.0/3.0;
rcinv12 = pow(Minf, -2);
rcinv13 = 1.0/(gama - 1);
rcinv14 = 1.0/Pr;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("block0np1" , 1, "int", &block0np1);
ops_decl_const("block0np2" , 1, "int", &block0np2);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("Delta2block0" , 1, "double", &Delta2block0);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("Minf" , 1, "double", &Minf);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("Pr" , 1, "double", &Pr);
ops_decl_const("Re" , 1, "double", &Re);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("inv_1" , 1, "double", &inv_1);
ops_decl_const("inv_2" , 1, "double", &inv_2);
ops_decl_const("inv_3" , 1, "double", &inv_3);
ops_decl_const("inv_4" , 1, "double", &inv_4);
ops_decl_const("inv_5" , 1, "double", &inv_5);
ops_decl_const("rc6" , 1, "double", &rc6);
ops_decl_const("rc7" , 1, "double", &rc7);
ops_decl_const("rc8" , 1, "double", &rc8);
ops_decl_const("rcinv9" , 1, "double", &rcinv9);
ops_decl_const("rc10" , 1, "double", &rc10);
ops_decl_const("rc11" , 1, "double", &rc11);
ops_decl_const("rcinv12" , 1, "double", &rcinv12);
ops_decl_const("rcinv13" , 1, "double", &rcinv13);
ops_decl_const("rcinv14" , 1, "double", &rcinv14);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(3, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {0, 0, 0};
ops_stencil stencil_0_00 = ops_decl_stencil(3,1,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {0, 0, -2, 0, 0, -1, 0, 0, 1, 0, 0, 2};
ops_stencil stencil_0_01 = ops_decl_stencil(3,4,stencil_0_01temp,"stencil_0_01temp");
int stencil_0_02temp[] = {0, -2, 0, 0, -1, 0, 0, 1, 0, 0, 2, 0};
ops_stencil stencil_0_02 = ops_decl_stencil(3,4,stencil_0_02temp,"stencil_0_02temp");
int stencil_0_03temp[] = {-2, 0, 0, -1, 0, 0, 1, 0, 0, 2, 0, 0};
ops_stencil stencil_0_03 = ops_decl_stencil(3,4,stencil_0_03temp,"stencil_0_03temp");
int stencil_0_04temp[] = {0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0};
ops_stencil stencil_0_04 = ops_decl_stencil(3,5,stencil_0_04temp,"stencil_0_04temp");
int stencil_0_05temp[] = {0, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 2};
ops_stencil stencil_0_05 = ops_decl_stencil(3,5,stencil_0_05temp,"stencil_0_05temp");
int stencil_0_06temp[] = {-2, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0};
ops_stencil stencil_0_06 = ops_decl_stencil(3,5,stencil_0_06temp,"stencil_0_06temp");
#include "bc_exchanges.h"
// Init OPS partition
ops_partition("");

int iteration_range_87_block0[] = {-5, block0np0 + 5, -5, block0np1 + 5, -5, block0np2 + 5};
ops_par_loop(opensbliblock00Kernel087, "Grid_based_initialisation0", opensbliblock00, 3, iteration_range_87_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{
ops_halo_transfer(exchange81_block0);
ops_halo_transfer(exchange82_block0);
ops_halo_transfer(exchange83_block0);
ops_halo_transfer(exchange84_block0);
ops_halo_transfer(exchange85_block0);
ops_halo_transfer(exchange86_block0);
int iteration_range_88_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel088, "Save equations", opensbliblock00, 3, iteration_range_88_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00, "double", OPS_WRITE));


for(int stage=0; stage<=2; stage++)
{
int iteration_range_2_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel002, "CRu2_B0", opensbliblock00, 3, iteration_range_2_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_24_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel024, "CRu1_B0", opensbliblock00, 3, iteration_range_24_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_38_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel038, "CRu0_B0", opensbliblock00, 3, iteration_range_38_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_4_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel004, "CRp_B0", opensbliblock00, 3, iteration_range_4_block0,
ops_arg_dat(u2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_79_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel079, "CRT_B0", opensbliblock00, 3, iteration_range_79_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_0_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel000, "Convective terms group 2", opensbliblock00, 3, iteration_range_0_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk42_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk44_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk43_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk41_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk39_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk40_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_3_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel003, "Convective CD rhou1_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_3_block0,
ops_arg_dat(wk39_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_5_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel005, "Convective CD p_B0 x2 ", opensbliblock00, 3, iteration_range_5_block0,
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_7_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel007, "Convective CD rhou0_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_7_block0,
ops_arg_dat(wk40_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_9_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel009, "Convective CD rho_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_9_block0,
ops_arg_dat(wk41_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_11_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel011, "Convective CD rhou2_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_11_block0,
ops_arg_dat(wk42_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_13_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel013, "Convective CD rhoE_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_13_block0,
ops_arg_dat(wk43_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_14_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel014, "Convective CD rhou2_B0 x2 ", opensbliblock00, 3, iteration_range_14_block0,
ops_arg_dat(rhou2_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_15_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel015, "Convective CD rhou1_B0 x2 ", opensbliblock00, 3, iteration_range_15_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_16_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel016, "Convective CD p_B0*u2_B0 x2 ", opensbliblock00, 3, iteration_range_16_block0,
ops_arg_dat(wk44_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_17_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel017, "Convective CD rho_B0 x2 ", opensbliblock00, 3, iteration_range_17_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_18_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel018, "Convective CD rhoE_B0 x2 ", opensbliblock00, 3, iteration_range_18_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_19_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel019, "Convective CD rhou0_B0 x2 ", opensbliblock00, 3, iteration_range_19_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_20_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel020, "Convective CD u2_B0 x2 ", opensbliblock00, 3, iteration_range_20_block0,
ops_arg_dat(u2_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_21_block0[] = {0, block0np0, -2, block0np1 + 2, 0, block0np2};
ops_par_loop(opensbliblock00Kernel021, "Convective terms group 1", opensbliblock00, 3, iteration_range_21_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk42_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk44_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk43_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk41_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk39_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk40_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_22_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel022, "Convective CD rhou2_B0 x1 ", opensbliblock00, 3, iteration_range_22_block0,
ops_arg_dat(rhou2_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_23_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel023, "Convective CD rhoE_B0 x1 ", opensbliblock00, 3, iteration_range_23_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_25_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel025, "Convective CD rhou2_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_25_block0,
ops_arg_dat(wk39_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_26_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel026, "Convective CD rhou1_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_26_block0,
ops_arg_dat(wk40_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_27_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel027, "Convective CD rho_B0 x1 ", opensbliblock00, 3, iteration_range_27_block0,
ops_arg_dat(rho_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk17_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_28_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel028, "Convective CD p_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_28_block0,
ops_arg_dat(wk41_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk18_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_29_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel029, "Convective CD rhou0_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_29_block0,
ops_arg_dat(wk42_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk19_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_30_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel030, "Convective CD rhou1_B0 x1 ", opensbliblock00, 3, iteration_range_30_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk20_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_31_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel031, "Convective CD rhou0_B0 x1 ", opensbliblock00, 3, iteration_range_31_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk21_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_32_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel032, "Convective CD rho_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_32_block0,
ops_arg_dat(wk43_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk22_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_33_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel033, "Convective CD u1_B0 x1 ", opensbliblock00, 3, iteration_range_33_block0,
ops_arg_dat(u1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk23_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_34_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel034, "Convective CD rhoE_B0*u1_B0 x1 ", opensbliblock00, 3, iteration_range_34_block0,
ops_arg_dat(wk44_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk24_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_35_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel035, "Convective CD p_B0 x1 ", opensbliblock00, 3, iteration_range_35_block0,
ops_arg_dat(p_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk25_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_36_block0[] = {-2, block0np0 + 2, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel036, "Convective terms group 0", opensbliblock00, 3, iteration_range_36_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk42_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk44_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk43_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk41_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk39_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk40_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_37_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel037, "Convective CD rhou1_B0 x0 ", opensbliblock00, 3, iteration_range_37_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk26_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_39_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel039, "Convective CD rho_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_39_block0,
ops_arg_dat(wk39_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk27_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_40_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel040, "Convective CD rhoE_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_40_block0,
ops_arg_dat(wk40_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk28_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_41_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel041, "Convective CD rho_B0 x0 ", opensbliblock00, 3, iteration_range_41_block0,
ops_arg_dat(rho_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk29_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_42_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel042, "Convective CD rhou1_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_42_block0,
ops_arg_dat(wk41_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk30_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_43_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel043, "Convective CD rhou0_B0 x0 ", opensbliblock00, 3, iteration_range_43_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk31_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_44_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel044, "Convective CD u0_B0 x0 ", opensbliblock00, 3, iteration_range_44_block0,
ops_arg_dat(u0_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk32_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_45_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel045, "Convective CD rhou2_B0 x0 ", opensbliblock00, 3, iteration_range_45_block0,
ops_arg_dat(rhou2_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk33_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_46_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel046, "Convective CD rhou2_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_46_block0,
ops_arg_dat(wk42_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk34_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_47_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel047, "Convective CD rhou0_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_47_block0,
ops_arg_dat(wk43_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk35_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_48_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel048, "Convective CD p_B0 x0 ", opensbliblock00, 3, iteration_range_48_block0,
ops_arg_dat(p_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk36_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_49_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel049, "Convective CD p_B0*u0_B0 x0 ", opensbliblock00, 3, iteration_range_49_block0,
ops_arg_dat(wk44_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk37_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_50_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel050, "Convective CD rhoE_B0 x0 ", opensbliblock00, 3, iteration_range_50_block0,
ops_arg_dat(rhoE_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk38_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_51_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel051, "Convective residual ", opensbliblock00, 3, iteration_range_51_block0,
ops_arg_dat(wk32_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk35_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk18_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk27_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk22_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk25_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk20_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk34_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk26_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk28_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk36_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk19_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk31_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk37_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk30_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk38_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk33_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk29_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk17_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk24_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk21_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk23_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_52_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel052, "Viscous CD u0_B0 x1 x1 ", opensbliblock00, 3, iteration_range_52_block0,
ops_arg_dat(u0_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_53_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel053, "Viscous CD u0_B0 x1 ", opensbliblock00, 3, iteration_range_53_block0,
ops_arg_dat(u0_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_55_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel055, "Viscous CD u0_B0 x2 x2 ", opensbliblock00, 3, iteration_range_55_block0,
ops_arg_dat(u0_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_56_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel056, "Viscous CD u2_B0 x1 ", opensbliblock00, 3, iteration_range_56_block0,
ops_arg_dat(u2_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_58_block0[] = {0, block0np0, -2, block0np1 + 2, 0, block0np2};
ops_par_loop(opensbliblock00Kernel058, "Viscous CD u1_B0 x0 ", opensbliblock00, 3, iteration_range_58_block0,
ops_arg_dat(u1_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_59_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel059, "Viscous CD u1_B0 x0 x0 ", opensbliblock00, 3, iteration_range_59_block0,
ops_arg_dat(u1_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_61_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel061, "Viscous CD u0_B0 x2 ", opensbliblock00, 3, iteration_range_61_block0,
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_62_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel062, "Viscous CD u1_B0 x1 x1 ", opensbliblock00, 3, iteration_range_62_block0,
ops_arg_dat(u1_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_63_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel063, "Viscous CD u1_B0 x2 ", opensbliblock00, 3, iteration_range_63_block0,
ops_arg_dat(u1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_65_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel065, "Viscous CD u0_B0 x0 x0 ", opensbliblock00, 3, iteration_range_65_block0,
ops_arg_dat(u0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_66_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel066, "Viscous CD T_B0 x2 x2 ", opensbliblock00, 3, iteration_range_66_block0,
ops_arg_dat(T_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_67_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel067, "Viscous CD u2_B0 x1 x1 ", opensbliblock00, 3, iteration_range_67_block0,
ops_arg_dat(u2_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_68_block0[] = {0, block0np0, -2, block0np1 + 2, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel068, "Viscous CD u0_B0 x0 ", opensbliblock00, 3, iteration_range_68_block0,
ops_arg_dat(u0_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_69_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel069, "Viscous CD u1_B0 x2 x2 ", opensbliblock00, 3, iteration_range_69_block0,
ops_arg_dat(u1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk17_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_71_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel071, "Viscous CD u1_B0 x1 ", opensbliblock00, 3, iteration_range_71_block0,
ops_arg_dat(u1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk19_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_72_block0[] = {0, block0np0, 0, block0np1, -2, block0np2 + 2};
ops_par_loop(opensbliblock00Kernel072, "Viscous CD u2_B0 x0 ", opensbliblock00, 3, iteration_range_72_block0,
ops_arg_dat(u2_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk20_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_73_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel073, "Viscous CD u2_B0 x0 x0 ", opensbliblock00, 3, iteration_range_73_block0,
ops_arg_dat(u2_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk21_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_75_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel075, "Viscous CD u2_B0 x2 x2 ", opensbliblock00, 3, iteration_range_75_block0,
ops_arg_dat(u2_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk23_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_76_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel076, "Viscous CD T_B0 x1 x1 ", opensbliblock00, 3, iteration_range_76_block0,
ops_arg_dat(T_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk24_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_77_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel077, "Viscous CD u2_B0 x2 ", opensbliblock00, 3, iteration_range_77_block0,
ops_arg_dat(u2_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk25_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_78_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel078, "Viscous CD T_B0 x0 x0 ", opensbliblock00, 3, iteration_range_78_block0,
ops_arg_dat(T_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk26_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_54_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel054, "Viscous CD CD u0_B0 x0 x1 ", opensbliblock00, 3, iteration_range_54_block0,
ops_arg_dat(wk16_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_57_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel057, "Viscous CD CD u1_B0 x0 x1 ", opensbliblock00, 3, iteration_range_57_block0,
ops_arg_dat(wk6_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_60_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel060, "Viscous CD CD u2_B0 x0 x2 ", opensbliblock00, 3, iteration_range_60_block0,
ops_arg_dat(wk20_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_64_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel064, "Viscous CD CD u1_B0 x1 x2 ", opensbliblock00, 3, iteration_range_64_block0,
ops_arg_dat(wk19_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_70_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel070, "Viscous CD CD u2_B0 x1 x2 ", opensbliblock00, 3, iteration_range_70_block0,
ops_arg_dat(wk4_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk18_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_74_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel074, "Viscous CD CD u0_B0 x0 x2 ", opensbliblock00, 3, iteration_range_74_block0,
ops_arg_dat(wk16_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk22_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_80_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel080, "Viscous residual", opensbliblock00, 3, iteration_range_80_block0,
ops_arg_dat(wk18_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk22_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk20_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk25_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk26_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk19_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk17_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk24_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk21_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk23_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(Residual4_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_RW));


int iteration_range_90_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel090, "Sub stage advancement", opensbliblock00, 3, iteration_range_90_block0,
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_gbl(&rknew[stage], 1, "double", OPS_READ));


int iteration_range_89_block0[] = {0, block0np0, 0, block0np1, 0, block0np2};
ops_par_loop(opensbliblock00Kernel089, "Temporal solution advancement", opensbliblock00, 3, iteration_range_89_block0,
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhoE_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou1_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou0_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou2_RKold_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_gbl(&rkold[stage], 1, "double", OPS_READ));


ops_halo_transfer(exchange81_block0);
ops_halo_transfer(exchange82_block0);
ops_halo_transfer(exchange83_block0);
ops_halo_transfer(exchange84_block0);
ops_halo_transfer(exchange85_block0);
ops_halo_transfer(exchange86_block0);
}
if (fmod(iter + 1,10000) == 0){
char name0[80];
sprintf(name0, "opensbli_output_%06d.h5", iter + 1);
ops_fetch_block_hdf5_file(opensbliblock00, name0);
ops_fetch_dat_hdf5_file(rho_B0, name0);
ops_fetch_dat_hdf5_file(rhou0_B0, name0);
ops_fetch_dat_hdf5_file(rhou1_B0, name0);
ops_fetch_dat_hdf5_file(rhou2_B0, name0);
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
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
ops_fetch_dat_hdf5_file(rhou1_B0, name0);
ops_fetch_dat_hdf5_file(rhou2_B0, name0);
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
ops_exit();
//Main program end 
}