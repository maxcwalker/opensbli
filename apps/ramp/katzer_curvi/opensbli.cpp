#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int niter;
double dt;
int block0np0;
int block0np1;
double Delta0block0;
double Delta1block0;
double Twall;
double Minf;
double SuthT;
double gama;
double RefT;
double Pr;
double Re;
double gamma_m1;
double inv_0;
double inv_1;
double inv_2;
double inv_3;
double b;
double Ly;
double rcinv4;
double rcinv5;
double rcinv6;
double rcinv7;
double rc8;
double rc9;
double rc10;
double rc11;
double rc12;
double rc13;
double rc14;
double rc15;
double rcinv16;
double rcinv17;
double rc18;
double rc19;
double rc20;
double rc21;
double rc22;
double rc23;
double rc24;
double rc25;
double rc26;
double rc27;
double rc28;
double rc29;
double rc30;
double rc31;
double rc32;
double rcinv33;
double rc34;
double rc35;
double rc36;
double rc37;
double rc38;
double rcinv39;
double rc40;
double rcinv41;
#define OPS_2D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
int main(int argc, char **argv) 
{
niter = 50000;
double rkB[] = {1.0/3.0, 15.0/16.0, 8.0/15.0};
double rkA[] = {0, -5.0/9.0, -153.0/128.0};
dt = 0.005;
block0np0 = 500;
block0np1 = 250;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
Twall = 1.67619431;
Minf = 2.0;
SuthT = 110.4;
gama = 1.4;
RefT = 288.0;
Pr = 0.72;
Re = 950.0;
gamma_m1 = gama - 1;
inv_0 = 1.0/Delta0block0;
inv_1 = 1.0/Delta1block0;
inv_2 = pow(Delta1block0, -2);
inv_3 = pow(Delta0block0, -2);
b = 5.0;
Ly = 115.0;
rcinv4 = 1.0/Ly;
rcinv5 = 1.0/(gama - 1);
rcinv6 = 1.0/gama;
rcinv7 = pow(Minf, -2);
rc8 = 4.0/3.0;
rc9 = 1.0/4.0;
rc10 = 25.0/12.0;
rc11 = 1.0/12.0;
rc12 = 5.0/6.0;
rc13 = 3.0/2.0;
rc14 = 1.0/2.0;
rc15 = 2.0/3.0;
rcinv16 = pow(Minf, -2.0);
rcinv17 = 1.0/RefT;
rc18 = -1.0/2.0;
rc19 = 5.0/3.0;
rc20 = 31.0/6.0;
rc21 = 11.0/6.0;
rc22 = 25.0/6.0;
rc23 = 19.0/6.0;
rc24 = 1.0/3.0;
rc25 = 13.0/6.0;
rc26 = 3.0/10.0;
rc27 = 3.0/5.0;
rc28 = 1.0/10.0;
rc29 = 1.0/6.0;
rc30 = 5.0/12.0;
rc31 = 7.0/12.0;
rc32 = 11.0/12.0;
rcinv33 = 1.0/gamma_m1;
rc34 = 35.0/12.0;
rc35 = 26.0/3.0;
rc36 = 19.0/2.0;
rc37 = 14.0/3.0;
rc38 = 5.0/2.0;
rcinv39 = 1.0/Re;
rc40 = 8.0/3.0;
rcinv41 = 1.0/Pr;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("block0np1" , 1, "int", &block0np1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("Twall" , 1, "double", &Twall);
ops_decl_const("Minf" , 1, "double", &Minf);
ops_decl_const("SuthT" , 1, "double", &SuthT);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("RefT" , 1, "double", &RefT);
ops_decl_const("Pr" , 1, "double", &Pr);
ops_decl_const("Re" , 1, "double", &Re);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("inv_1" , 1, "double", &inv_1);
ops_decl_const("inv_2" , 1, "double", &inv_2);
ops_decl_const("inv_3" , 1, "double", &inv_3);
ops_decl_const("b" , 1, "double", &b);
ops_decl_const("Ly" , 1, "double", &Ly);
ops_decl_const("rcinv4" , 1, "double", &rcinv4);
ops_decl_const("rcinv5" , 1, "double", &rcinv5);
ops_decl_const("rcinv6" , 1, "double", &rcinv6);
ops_decl_const("rcinv7" , 1, "double", &rcinv7);
ops_decl_const("rc8" , 1, "double", &rc8);
ops_decl_const("rc9" , 1, "double", &rc9);
ops_decl_const("rc10" , 1, "double", &rc10);
ops_decl_const("rc11" , 1, "double", &rc11);
ops_decl_const("rc12" , 1, "double", &rc12);
ops_decl_const("rc13" , 1, "double", &rc13);
ops_decl_const("rc14" , 1, "double", &rc14);
ops_decl_const("rc15" , 1, "double", &rc15);
ops_decl_const("rcinv16" , 1, "double", &rcinv16);
ops_decl_const("rcinv17" , 1, "double", &rcinv17);
ops_decl_const("rc18" , 1, "double", &rc18);
ops_decl_const("rc19" , 1, "double", &rc19);
ops_decl_const("rc20" , 1, "double", &rc20);
ops_decl_const("rc21" , 1, "double", &rc21);
ops_decl_const("rc22" , 1, "double", &rc22);
ops_decl_const("rc23" , 1, "double", &rc23);
ops_decl_const("rc24" , 1, "double", &rc24);
ops_decl_const("rc25" , 1, "double", &rc25);
ops_decl_const("rc26" , 1, "double", &rc26);
ops_decl_const("rc27" , 1, "double", &rc27);
ops_decl_const("rc28" , 1, "double", &rc28);
ops_decl_const("rc29" , 1, "double", &rc29);
ops_decl_const("rc30" , 1, "double", &rc30);
ops_decl_const("rc31" , 1, "double", &rc31);
ops_decl_const("rc32" , 1, "double", &rc32);
ops_decl_const("rcinv33" , 1, "double", &rcinv33);
ops_decl_const("rc34" , 1, "double", &rc34);
ops_decl_const("rc35" , 1, "double", &rc35);
ops_decl_const("rc36" , 1, "double", &rc36);
ops_decl_const("rc37" , 1, "double", &rc37);
ops_decl_const("rc38" , 1, "double", &rc38);
ops_decl_const("rcinv39" , 1, "double", &rcinv39);
ops_decl_const("rc40" , 1, "double", &rc40);
ops_decl_const("rcinv41" , 1, "double", &rcinv41);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(2, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {0, 0};
ops_stencil stencil_0_00 = ops_decl_stencil(2,1,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {-2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0};
ops_stencil stencil_0_01 = ops_decl_stencil(2,6,stencil_0_01temp,"stencil_0_01temp");
int stencil_0_02temp[] = {0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_02 = ops_decl_stencil(2,6,stencil_0_02temp,"stencil_0_02temp");
int stencil_0_03temp[] = {0, -1, 0, 0};
ops_stencil stencil_0_03 = ops_decl_stencil(2,2,stencil_0_03temp,"stencil_0_03temp");
int stencil_0_04temp[] = {-1, 0, 0, 0};
ops_stencil stencil_0_04 = ops_decl_stencil(2,2,stencil_0_04temp,"stencil_0_04temp");
int stencil_0_05temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0};
ops_stencil stencil_0_05 = ops_decl_stencil(2,10,stencil_0_05temp,"stencil_0_05temp");
int stencil_0_06temp[] = {0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4};
ops_stencil stencil_0_06 = ops_decl_stencil(2,7,stencil_0_06temp,"stencil_0_06temp");
int stencil_0_07temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_07 = ops_decl_stencil(2,9,stencil_0_07temp,"stencil_0_07temp");
int stencil_0_08temp[] = {-3, 0, -2, 0, -1, 0, 0, 0};
ops_stencil stencil_0_08 = ops_decl_stencil(2,4,stencil_0_08temp,"stencil_0_08temp");
int stencil_0_09temp[] = {-1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_09 = ops_decl_stencil(2,6,stencil_0_09temp,"stencil_0_09temp");
int stencil_0_10temp[] = {0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_10 = ops_decl_stencil(2,7,stencil_0_10temp,"stencil_0_10temp");
int stencil_0_11temp[] = {0, -3, 0, -2, 0, -1, 0, 0, 0, 1};
ops_stencil stencil_0_11 = ops_decl_stencil(2,5,stencil_0_11temp,"stencil_0_11temp");
int stencil_0_12temp[] = {0, -4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4};
ops_stencil stencil_0_12 = ops_decl_stencil(2,9,stencil_0_12temp,"stencil_0_12temp");
int stencil_0_13temp[] = {-3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0};
ops_stencil stencil_0_13 = ops_decl_stencil(2,6,stencil_0_13temp,"stencil_0_13temp");
int stencil_0_14temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_14 = ops_decl_stencil(2,8,stencil_0_14temp,"stencil_0_14temp");
int stencil_0_15temp[] = {0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_15 = ops_decl_stencil(2,6,stencil_0_15temp,"stencil_0_15temp");
int stencil_0_16temp[] = {0, -4, 0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0, 4};
ops_stencil stencil_0_16 = ops_decl_stencil(2,8,stencil_0_16temp,"stencil_0_16temp");
// Init OPS partition
ops_partition("");

int iteration_range_66_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel066, "Grid_based_initialisation0", opensbliblock00, 2, iteration_range_66_block0,
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_idx());


int iteration_range_67_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel067, "MetricsEquation CD x0_B0 xi1 ", opensbliblock00, 2, iteration_range_67_block0,
ops_arg_dat(x0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_68_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel068, "MetricsEquation CD x1_B0 xi1 ", opensbliblock00, 2, iteration_range_68_block0,
ops_arg_dat(x1_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_69_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel069, "MetricsEquation CD x1_B0 xi0 ", opensbliblock00, 2, iteration_range_69_block0,
ops_arg_dat(x1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_70_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel070, "MetricsEquation CD x0_B0 xi0 ", opensbliblock00, 2, iteration_range_70_block0,
ops_arg_dat(x0_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_73_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel073, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_73_block0,
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(detJ_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(D00_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(D01_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_74_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel074, "Metric boundary dir0 side0", opensbliblock00, 2, iteration_range_74_block0,
ops_arg_dat(D10_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(D00_B0, 1, stencil_0_13, "double", OPS_RW));


int iteration_range_75_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel075, "Metric boundary dir0 side1", opensbliblock00, 2, iteration_range_75_block0,
ops_arg_dat(D10_B0, 1, stencil_0_14, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_14, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_14, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_14, "double", OPS_RW),
ops_arg_dat(D00_B0, 1, stencil_0_14, "double", OPS_RW));


int iteration_range_76_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel076, "Metric boundary dir1 side0", opensbliblock00, 2, iteration_range_76_block0,
ops_arg_dat(D10_B0, 1, stencil_0_15, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_15, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_15, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_15, "double", OPS_RW),
ops_arg_dat(D00_B0, 1, stencil_0_15, "double", OPS_RW));


int iteration_range_77_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel077, "Metric boundary dir1 side1", opensbliblock00, 2, iteration_range_77_block0,
ops_arg_dat(D10_B0, 1, stencil_0_16, "double", OPS_RW),
ops_arg_dat(D01_B0, 1, stencil_0_16, "double", OPS_RW),
ops_arg_dat(D11_B0, 1, stencil_0_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_16, "double", OPS_RW),
ops_arg_dat(D00_B0, 1, stencil_0_16, "double", OPS_RW));


int iteration_range_78_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel078, "MetricsEquation CD D01_B0 xi0 ", opensbliblock00, 2, iteration_range_78_block0,
ops_arg_dat(D01_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_79_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel079, "MetricsEquation CD D10_B0 xi0 ", opensbliblock00, 2, iteration_range_79_block0,
ops_arg_dat(D10_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_80_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel080, "MetricsEquation CD D00_B0 xi1 ", opensbliblock00, 2, iteration_range_80_block0,
ops_arg_dat(D00_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_81_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel081, "MetricsEquation CD D11_B0 xi0 ", opensbliblock00, 2, iteration_range_81_block0,
ops_arg_dat(D11_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_82_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel082, "MetricsEquation CD D10_B0 xi1 ", opensbliblock00, 2, iteration_range_82_block0,
ops_arg_dat(D10_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_83_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel083, "MetricsEquation CD D01_B0 xi1 ", opensbliblock00, 2, iteration_range_83_block0,
ops_arg_dat(D01_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_84_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel084, "MetricsEquation CD D11_B0 xi1 ", opensbliblock00, 2, iteration_range_84_block0,
ops_arg_dat(D11_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_85_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel085, "MetricsEquation CD D00_B0 xi0 ", opensbliblock00, 2, iteration_range_85_block0,
ops_arg_dat(D00_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_90_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel090, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_90_block0,
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD001_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD010_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD110_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD100_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD101_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD011_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD111_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(SD000_B0, 1, stencil_0_00, "double", OPS_WRITE));


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{
if(fmod(iter+1, 250) == 0){
        ops_printf("Iteration is %d\n", iter+1); 
        ops_NaNcheck(rho_B0);
}
int iteration_range_62_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel062, "InletPressureExtrapolate boundary dir0 side0", opensbliblock00, 2, iteration_range_62_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_08, "double", OPS_RW));


int iteration_range_63_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel063, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_63_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_09, "double", OPS_RW));


int iteration_range_64_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel064, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_64_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_11, "double", OPS_RW));


int iteration_range_65_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel065, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_65_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_12, "double", OPS_RW));


for(int stage=0; stage<=2; stage++)
{
int iteration_range_3_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel003, "CRu1", opensbliblock00, 2, iteration_range_3_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_12_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel012, "CRu0", opensbliblock00, 2, iteration_range_12_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_4_block0[] = {-3, block0np0 + 4, 0, block0np1};
ops_par_loop(opensbliblock00Kernel004, "CRU0", opensbliblock00, 2, iteration_range_4_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_9_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel009, "CRp", opensbliblock00, 2, iteration_range_9_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_15_block0[] = {0, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel015, "CRU1", opensbliblock00, 2, iteration_range_15_block0,
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_6_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel006, "CRa", opensbliblock00, 2, iteration_range_6_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_21_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel021, "CRT_B0", opensbliblock00, 2, iteration_range_21_block0,
ops_arg_dat(p_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_24_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel024, "CRmu_B0", opensbliblock00, 2, iteration_range_24_block0,
ops_arg_dat(T_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_0_block0[] = {-1, block0np0 + 1, 0, block0np1};
ops_par_loop(opensbliblock00Kernel000, "LLFWeno_reconstruction_0_direction", opensbliblock00, 2, iteration_range_0_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(U0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_1_block0[] = {0, block0np0, -1, block0np1 + 1};
ops_par_loop(opensbliblock00Kernel001, "LLFWeno_reconstruction_1_direction", opensbliblock00, 2, iteration_range_1_block0,
ops_arg_dat(D10_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(U1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_17_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel017, "LLFWeno Residual", opensbliblock00, 2, iteration_range_17_block0,
ops_arg_dat(wk6_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_WRITE));


int iteration_range_28_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel028, "Viscous CD T_B0 xi0 ", opensbliblock00, 2, iteration_range_28_block0,
ops_arg_dat(T_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_29_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel029, "Viscous CD mu_B0 xi0 ", opensbliblock00, 2, iteration_range_29_block0,
ops_arg_dat(mu_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_30_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel030, "Viscous CD mu_B0 xi1 ", opensbliblock00, 2, iteration_range_30_block0,
ops_arg_dat(mu_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_31_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel031, "Viscous CD u1_B0 xi1 ", opensbliblock00, 2, iteration_range_31_block0,
ops_arg_dat(u1_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_32_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel032, "Viscous CD u1_B0 xi0 ", opensbliblock00, 2, iteration_range_32_block0,
ops_arg_dat(u1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_33_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel033, "Viscous CD u0_B0 xi0 ", opensbliblock00, 2, iteration_range_33_block0,
ops_arg_dat(u0_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_34_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel034, "Viscous CD u0_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_34_block0,
ops_arg_dat(u0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_35_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel035, "Viscous CD T_B0 xi1 ", opensbliblock00, 2, iteration_range_35_block0,
ops_arg_dat(T_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_36_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel036, "Viscous CD u1_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(u1_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_37_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel037, "Viscous CD T_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_37_block0,
ops_arg_dat(T_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_39_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel039, "Viscous CD T_B0 xi1 xi1 ", opensbliblock00, 2, iteration_range_39_block0,
ops_arg_dat(T_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_40_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel040, "Viscous CD u0_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_40_block0,
ops_arg_dat(u0_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_42_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel042, "Viscous CD u0_B0 xi1 ", opensbliblock00, 2, iteration_range_42_block0,
ops_arg_dat(u0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_43_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel043, "Viscous CD u1_B0 xi0 xi0 ", opensbliblock00, 2, iteration_range_43_block0,
ops_arg_dat(u1_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_38_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel038, "Viscous CD CD T_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_38_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_41_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel041, "Viscous CD CD u0_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_41_block0,
ops_arg_dat(wk5_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_44_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel044, "Viscous CD CD u1_B0 xi0 xi1 ", opensbliblock00, 2, iteration_range_44_block0,
ops_arg_dat(wk4_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_61_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel061, "Viscous residual", opensbliblock00, 2, iteration_range_61_block0,
ops_arg_dat(SD010_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk16_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk9_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk12_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD001_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D01_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD101_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk15_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD110_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk10_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD100_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD111_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D00_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk8_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk14_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk13_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD011_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk11_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(SD000_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_RW));


int iteration_range_91_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel091, "Temporal solution advancement", opensbliblock00, 2, iteration_range_91_block0,
ops_arg_dat(Residual2_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(tempRK_rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rhou1_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rho_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(tempRK_rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_00, "double", OPS_RW),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ));


int iteration_range_62_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel062, "InletPressureExtrapolate boundary dir0 side0", opensbliblock00, 2, iteration_range_62_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_04, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_08, "double", OPS_RW));


int iteration_range_63_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel063, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_63_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_09, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_09, "double", OPS_RW));


int iteration_range_64_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel064, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_64_block0,
ops_arg_dat(x0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_11, "double", OPS_RW));


int iteration_range_65_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel065, "ZeroGradientOutlet boundary dir1 side1", opensbliblock00, 2, iteration_range_65_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_12, "double", OPS_RW));


}
if (fmod(iter + 1,2500) == 0){
char name0[80];
sprintf(name0, "opensbli_output_%06d.h5", iter + 1);
ops_fetch_block_hdf5_file(opensbliblock00, name0);
ops_fetch_dat_hdf5_file(rho_B0, name0);
ops_fetch_dat_hdf5_file(rhou0_B0, name0);
ops_fetch_dat_hdf5_file(rhou1_B0, name0);
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
ops_fetch_dat_hdf5_file(x0_B0, name0);
ops_fetch_dat_hdf5_file(x1_B0, name0);
ops_fetch_dat_hdf5_file(D11_B0, name0);
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
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
ops_fetch_dat_hdf5_file(x0_B0, name0);
ops_fetch_dat_hdf5_file(x1_B0, name0);
ops_fetch_dat_hdf5_file(D11_B0, name0);
ops_exit();
//Main program end 
}