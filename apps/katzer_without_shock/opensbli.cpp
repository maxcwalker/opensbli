#include <stdlib.h> 
#include <string.h> 
#include <math.h>
int block0np0;
int block0np1;
double Delta0block0;
double Delta1block0;
double eps;
int niter;
double dt;
double Minf;
double Twall;
double RefT;
double epsilon;
double SuthT;
double gama;
double Pr;
double Re;
double inv_0;
double inv_1;
double gamma_m1;
double teno_a1;
double teno_a2;
double inv_2;
double inv_3;
double by;
double Lx1;
double rcinv4;
double rcinv5;
double rcinv6;
double rcinv7;
double rc8;
double rc9;
double rc10;
double rc11;
double rcinv12;
double rc13;
double rcinv14;
double rc15;
double rc16;
double rc17;
double rc18;
double rc19;
double rc20;
double rc21;
double rc22;
double rc23;
double rcinv24;
double rcinv25;
double rc26;
double rc27;
double rcinv28;
#define OPS_2D
#include "ops_seq.h"
#include "opensbliblock00_kernels.h"
int main(int argc, char **argv) 
{
block0np0 = 1000.0;
block0np1 = 250;
Delta0block0 = 400.0/(block0np0-1);
Delta1block0 = 115.0/(block0np1-1);
eps = 1e-15;
niter = 400;
double rkB[] = {0.924574000000000, 0.287713063186749, 0.626538109512740};
double rkA[] = {0.0, -2.91549252463879, -9.35173755728890e-8};
dt = 0.025;
Minf = 2.0;
Twall = 1.67619431;
RefT = 288.0;
epsilon = 1.00000000000000e-12;
SuthT = 110.4;
gama = 1.4;
Pr = 0.72;
Re = 950.0;
inv_0 = 1.0/Delta0block0;
inv_1 = 1.0/Delta1block0;
gamma_m1 = gama - 1;
teno_a1 = 10.5;
teno_a2 = 4.5;
inv_2 = pow(Delta1block0, -2);
inv_3 = pow(Delta0block0, -2);
by = 5.0;
Lx1 = 115.0;
rcinv4 = 1.0/Lx1;
rcinv5 = 1.0/gama;
rcinv6 = 1.0/(gama - 1);
rcinv7 = pow(Minf, -2);
rc8 = 1.0/4.0;
rc9 = 4.0/3.0;
rc10 = 25.0/12.0;
rc11 = 1.0/12.0;
rcinv12 = pow(Minf, -2.0);
rc13 = 1.0/2.0;
rcinv14 = 1.0/RefT;
rc15 = 13.0/12.0;
rc16 = 3.0/2.0;
rc17 = 11.0/20.0;
rc18 = 2.0/5.0;
rc19 = 1.0/20.0;
rc20 = 5.0/12.0;
rc21 = 1.0/6.0;
rc22 = 7.0/12.0;
rc23 = 11.0/12.0;
rcinv24 = 1.0/gamma_m1;
rcinv25 = 1.0/Re;
rc26 = 2.0/3.0;
rc27 = 1.0/3.0;
rcinv28 = 1.0/Pr;
// Initializing OPS 
ops_init(argc,argv,1);
ops_decl_const("block0np0" , 1, "int", &block0np0);
ops_decl_const("block0np1" , 1, "int", &block0np1);
ops_decl_const("Delta0block0" , 1, "double", &Delta0block0);
ops_decl_const("Delta1block0" , 1, "double", &Delta1block0);
ops_decl_const("eps" , 1, "double", &eps);
ops_decl_const("niter" , 1, "int", &niter);
ops_decl_const("dt" , 1, "double", &dt);
ops_decl_const("Minf" , 1, "double", &Minf);
ops_decl_const("Twall" , 1, "double", &Twall);
ops_decl_const("RefT" , 1, "double", &RefT);
ops_decl_const("epsilon" , 1, "double", &epsilon);
ops_decl_const("SuthT" , 1, "double", &SuthT);
ops_decl_const("gama" , 1, "double", &gama);
ops_decl_const("Pr" , 1, "double", &Pr);
ops_decl_const("Re" , 1, "double", &Re);
ops_decl_const("inv_0" , 1, "double", &inv_0);
ops_decl_const("inv_1" , 1, "double", &inv_1);
ops_decl_const("gamma_m1" , 1, "double", &gamma_m1);
ops_decl_const("teno_a1" , 1, "double", &teno_a1);
ops_decl_const("teno_a2" , 1, "double", &teno_a2);
ops_decl_const("inv_2" , 1, "double", &inv_2);
ops_decl_const("inv_3" , 1, "double", &inv_3);
ops_decl_const("by" , 1, "double", &by);
ops_decl_const("Lx1" , 1, "double", &Lx1);
ops_decl_const("rcinv4" , 1, "double", &rcinv4);
ops_decl_const("rcinv5" , 1, "double", &rcinv5);
ops_decl_const("rcinv6" , 1, "double", &rcinv6);
ops_decl_const("rcinv7" , 1, "double", &rcinv7);
ops_decl_const("rc8" , 1, "double", &rc8);
ops_decl_const("rc9" , 1, "double", &rc9);
ops_decl_const("rc10" , 1, "double", &rc10);
ops_decl_const("rc11" , 1, "double", &rc11);
ops_decl_const("rcinv12" , 1, "double", &rcinv12);
ops_decl_const("rc13" , 1, "double", &rc13);
ops_decl_const("rcinv14" , 1, "double", &rcinv14);
ops_decl_const("rc15" , 1, "double", &rc15);
ops_decl_const("rc16" , 1, "double", &rc16);
ops_decl_const("rc17" , 1, "double", &rc17);
ops_decl_const("rc18" , 1, "double", &rc18);
ops_decl_const("rc19" , 1, "double", &rc19);
ops_decl_const("rc20" , 1, "double", &rc20);
ops_decl_const("rc21" , 1, "double", &rc21);
ops_decl_const("rc22" , 1, "double", &rc22);
ops_decl_const("rc23" , 1, "double", &rc23);
ops_decl_const("rcinv24" , 1, "double", &rcinv24);
ops_decl_const("rcinv25" , 1, "double", &rcinv25);
ops_decl_const("rc26" , 1, "double", &rc26);
ops_decl_const("rc27" , 1, "double", &rc27);
ops_decl_const("rcinv28" , 1, "double", &rcinv28);
// Define and Declare OPS Block
ops_block opensbliblock00 = ops_decl_block(2, "opensbliblock00");
#include "defdec_data_set.h"
// Define and declare stencils
int stencil_0_00temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 0, -4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_00 = ops_decl_stencil(2,17,stencil_0_00temp,"stencil_0_00temp");
int stencil_0_01temp[] = {0, 0};
ops_stencil stencil_0_01 = ops_decl_stencil(2,1,stencil_0_01temp,"stencil_0_01temp");
int stencil_0_02temp[] = {0, -4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4};
ops_stencil stencil_0_02 = ops_decl_stencil(2,9,stencil_0_02temp,"stencil_0_02temp");
int stencil_0_03temp[] = {-2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0};
ops_stencil stencil_0_03 = ops_decl_stencil(2,6,stencil_0_03temp,"stencil_0_03temp");
int stencil_0_04temp[] = {0, 0, 1, 0};
ops_stencil stencil_0_04 = ops_decl_stencil(2,2,stencil_0_04temp,"stencil_0_04temp");
int stencil_0_05temp[] = {0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_05 = ops_decl_stencil(2,6,stencil_0_05temp,"stencil_0_05temp");
int stencil_0_06temp[] = {0, 0, 0, 1};
ops_stencil stencil_0_06 = ops_decl_stencil(2,2,stencil_0_06temp,"stencil_0_06temp");
int stencil_0_07temp[] = {0, -1, 0, 0};
ops_stencil stencil_0_07 = ops_decl_stencil(2,2,stencil_0_07temp,"stencil_0_07temp");
int stencil_0_08temp[] = {-1, 0, 0, 0};
ops_stencil stencil_0_08 = ops_decl_stencil(2,2,stencil_0_08temp,"stencil_0_08temp");
int stencil_0_09temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_09 = ops_decl_stencil(2,9,stencil_0_09temp,"stencil_0_09temp");
int stencil_0_10temp[] = {-3, 0, -2, 0, -1, 0, 0, 0};
ops_stencil stencil_0_10 = ops_decl_stencil(2,4,stencil_0_10temp,"stencil_0_10temp");
int stencil_0_11temp[] = {-1, 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_11 = ops_decl_stencil(2,6,stencil_0_11temp,"stencil_0_11temp");
int stencil_0_12temp[] = {0, -3, 0, -2, 0, -1, 0, 0, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_12 = ops_decl_stencil(2,7,stencil_0_12temp,"stencil_0_12temp");
int stencil_0_13temp[] = {0, -3, 0, -2, 0, -1, 0, 0, 0, 1};
ops_stencil stencil_0_13 = ops_decl_stencil(2,5,stencil_0_13temp,"stencil_0_13temp");
int stencil_0_14temp[] = {-3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0};
ops_stencil stencil_0_14 = ops_decl_stencil(2,6,stencil_0_14temp,"stencil_0_14temp");
int stencil_0_15temp[] = {-4, 0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0, 4, 0};
ops_stencil stencil_0_15 = ops_decl_stencil(2,8,stencil_0_15temp,"stencil_0_15temp");
int stencil_0_16temp[] = {0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3};
ops_stencil stencil_0_16 = ops_decl_stencil(2,6,stencil_0_16temp,"stencil_0_16temp");
int stencil_0_17temp[] = {0, -4, 0, -3, 0, -2, 0, -1, 0, 1, 0, 2, 0, 3, 0, 4};
ops_stencil stencil_0_17 = ops_decl_stencil(2,8,stencil_0_17temp,"stencil_0_17temp");
// Init OPS partition
ops_partition("");

int iteration_range_40_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel040, "Grid_based_initialisation0", opensbliblock00, 2, iteration_range_40_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(x0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(x1_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_idx());


int iteration_range_42_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel042, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_42_block0,
ops_arg_dat(x1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(detJ_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(D11_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_43_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel043, "Metric boundary dir0 side0", opensbliblock00, 2, iteration_range_43_block0,
ops_arg_dat(D11_B0, 1, stencil_0_14, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_14, "double", OPS_RW));


int iteration_range_44_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel044, "Metric boundary dir0 side1", opensbliblock00, 2, iteration_range_44_block0,
ops_arg_dat(D11_B0, 1, stencil_0_15, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_15, "double", OPS_RW));


int iteration_range_45_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel045, "Metric boundary dir1 side0", opensbliblock00, 2, iteration_range_45_block0,
ops_arg_dat(D11_B0, 1, stencil_0_16, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_16, "double", OPS_RW));


int iteration_range_46_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1};
ops_par_loop(opensbliblock00Kernel046, "Metric boundary dir1 side1", opensbliblock00, 2, iteration_range_46_block0,
ops_arg_dat(D11_B0, 1, stencil_0_17, "double", OPS_RW),
ops_arg_dat(detJ_B0, 1, stencil_0_17, "double", OPS_RW));


int iteration_range_48_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel048, "MetricsEquation evaluation", opensbliblock00, 2, iteration_range_48_block0,
ops_arg_dat(D11_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(SD111_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


double cpu_start0, elapsed_start0;
ops_timers(&cpu_start0, &elapsed_start0);
for(int iter=0; iter<=niter - 1; iter++)
{
if(fmod(iter+1, 250) == 0){
        ops_printf("Iteration is %d\n", iter+1); 
        ops_NaNcheck(rho_B0);
}
int iteration_range_36_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel036, "InletPressureExtrapolate boundary dir0 side0", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_08, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_08, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_08, "double", OPS_RW));


int iteration_range_37_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel037, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_37_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_11, "double", OPS_RW));


int iteration_range_38_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel038, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_38_block0,
ops_arg_dat(x0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12, "double", OPS_RW));


int iteration_range_39_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel039, "Dirichlet boundary dir1 side1", opensbliblock00, 2, iteration_range_39_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


for(int stage=0; stage<=2; stage++)
{
int iteration_range_6_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel006, "CRu0", opensbliblock00, 2, iteration_range_6_block0,
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_8_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel008, "CRu1", opensbliblock00, 2, iteration_range_8_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_9_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel009, "CRp", opensbliblock00, 2, iteration_range_9_block0,
ops_arg_dat(u1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_2_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel002, "ConstituentRelations evaluation", opensbliblock00, 2, iteration_range_2_block0,
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(theta_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_12_block0[] = {-3, block0np0 + 4, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel012, "CRa", opensbliblock00, 2, iteration_range_12_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_17_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel017, "CRT_B0", opensbliblock00, 2, iteration_range_17_block0,
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_18_block0[] = {-2, block0np0 + 2, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel018, "CRmu_B0", opensbliblock00, 2, iteration_range_18_block0,
ops_arg_dat(T_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_3_block0[] = {-1, block0np0 + 1, 0, block0np1};
ops_par_loop(opensbliblock00Kernel003, "LLFTeno_reconstruction_0_direction", opensbliblock00, 2, iteration_range_3_block0,
ops_arg_dat(rho_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(theta_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_04, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_03, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk2_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk1_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(TENO_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk3_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_4_block0[] = {0, block0np0, -1, block0np1 + 1};
ops_par_loop(opensbliblock00Kernel004, "LLFTeno_reconstruction_1_direction", opensbliblock00, 2, iteration_range_4_block0,
ops_arg_dat(rho_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_06, "double", OPS_READ),
ops_arg_dat(theta_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(p_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(a_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(rhou0_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(rhoE_B0, 1, stencil_0_05, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk7_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk5_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(wk6_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_14_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel014, "LLFTeno Residual", opensbliblock00, 2, iteration_range_14_block0,
ops_arg_dat(wk0_B0, 1, stencil_0_08, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_08, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_08, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_08, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_07, "double", OPS_READ),
ops_arg_dat(Residual0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(Residual2_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(Residual3_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(Residual1_B0, 1, stencil_0_01, "double", OPS_WRITE));


int iteration_range_19_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel019, "Derivative evaluation CD u0_B0 xi1 ", opensbliblock00, 2, iteration_range_19_block0,
ops_arg_dat(u0_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_21_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel021, "Derivative evaluation CD u0_B0 xi0 ", opensbliblock00, 2, iteration_range_21_block0,
ops_arg_dat(u0_B0, 1, stencil_0_09, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_22_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel022, "Derivative evaluation CD u1_B0 xi1 ", opensbliblock00, 2, iteration_range_22_block0,
ops_arg_dat(u1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_24_block0[] = {0, block0np0, -2, block0np1 + 2};
ops_par_loop(opensbliblock00Kernel024, "Derivative evaluation CD u1_B0 xi0 ", opensbliblock00, 2, iteration_range_24_block0,
ops_arg_dat(u1_B0, 1, stencil_0_09, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_25_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel025, "Derivative evaluation CD u2_B0 xi1 ", opensbliblock00, 2, iteration_range_25_block0,
ops_arg_dat(u2_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk4_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_27_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel027, "Derivative evaluation CD u2_B0 xi0 ", opensbliblock00, 2, iteration_range_27_block0,
ops_arg_dat(u2_B0, 1, stencil_0_09, "double", OPS_READ),
ops_arg_dat(wk5_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_28_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel028, "Derivative evaluation CD T_B0 xi1 ", opensbliblock00, 2, iteration_range_28_block0,
ops_arg_dat(T_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_30_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel030, "Derivative evaluation CD T_B0 xi0 ", opensbliblock00, 2, iteration_range_30_block0,
ops_arg_dat(T_B0, 1, stencil_0_09, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


int iteration_range_34_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel034, "Viscous terms", opensbliblock00, 2, iteration_range_34_block0,
ops_arg_dat(SD111_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk2_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(u0_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk6_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(mu_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk3_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(u1_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(T_B0, 1, stencil_0_00, "double", OPS_READ),
ops_arg_dat(wk1_B0, 1, stencil_0_02, "double", OPS_READ),
ops_arg_dat(D11_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(wk7_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(Residual3_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(Residual1_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_idx());


int iteration_range_49_block0[] = {0, block0np0, 0, block0np1};
ops_par_loop(opensbliblock00Kernel049, "Temporal solution advancement", opensbliblock00, 2, iteration_range_49_block0,
ops_arg_dat(Residual0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(Residual2_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(Residual3_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(Residual1_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(tempRK_rho_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(tempRK_rhou0_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(tempRK_rhoE_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(tempRK_rhou1_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_RW),
ops_arg_gbl(&rkA[stage], 1, "double", OPS_READ),
ops_arg_gbl(&rkB[stage], 1, "double", OPS_READ));


int iteration_range_36_block0[] = {0, 1, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel036, "InletPressureExtrapolate boundary dir0 side0", opensbliblock00, 2, iteration_range_36_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_08, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_08, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_10, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_08, "double", OPS_RW));


int iteration_range_37_block0[] = {block0np0 - 1, block0np0, -3, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel037, "Extrapolation boundary dir0 side1", opensbliblock00, 2, iteration_range_37_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_11, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_11, "double", OPS_RW));


int iteration_range_38_block0[] = {-3, block0np0 + 4, 0, 1};
ops_par_loop(opensbliblock00Kernel038, "IsothermalWall boundary dir1 side0", opensbliblock00, 2, iteration_range_38_block0,
ops_arg_dat(x0_B0, 1, stencil_0_01, "double", OPS_READ),
ops_arg_dat(rhou1_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhou0_B0, 1, stencil_0_12, "double", OPS_RW),
ops_arg_dat(rhoE_B0, 1, stencil_0_13, "double", OPS_RW),
ops_arg_dat(rho_B0, 1, stencil_0_12, "double", OPS_RW));


int iteration_range_39_block0[] = {-3, block0np0 + 4, block0np1 - 1, block0np1 + 4};
ops_par_loop(opensbliblock00Kernel039, "Dirichlet boundary dir1 side1", opensbliblock00, 2, iteration_range_39_block0,
ops_arg_dat(rhou1_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhou0_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rhoE_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_dat(rho_B0, 1, stencil_0_01, "double", OPS_WRITE),
ops_arg_idx());


}
if (fmod(iter + 1,200) == 0){
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
ops_fetch_dat_hdf5_file(TENO_B0, name0);
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
ops_fetch_dat_hdf5_file(TENO_B0, name0);
ops_exit();
//Main program end 
}