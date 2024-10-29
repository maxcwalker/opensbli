// Auto-generated at 2024-09-02 15:36:03.369458 by ops-translator legacy

__constant__ int dims_opensbliblock00Kernel067 [6][2];
static int dims_opensbliblock00Kernel067_h [6][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void opensbliblock00Kernel067_gpu(const ACC<double> &x1_B0,
  ACC<double> &rhoE_B0,
  ACC<double> &rho_B0,
  ACC<double>
&rhou0_B0,
  ACC<double> &rhou1_B0,
  ACC<double> &rhou2_B0)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   double x1b0 = 0.0;
    rhou0 = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   2.98010537508574e-7 + 2.17137893910512e-8*pow(-x1b0 +
      x1_B0(0,0,0), 27) + 0.0252449626304193*pow(-x1b0 + x1_B0(0,0,0), 14) + 1.72288869974662e-16*pow(-x1b0 +
      x1_B0(0,0,0), 44) + 30.6037023000319*pow(-x1b0 + x1_B0(0,0,0), 7) + 2.12843517734356e-5*pow(-x1b0 + x1_B0(0,0,0),
      20) + 0.70500345124088*x1_B0(0,0,0) + 1.32482987815919e-15*pow(-x1b0 + x1_B0(0,0,0), 42) +
      4.35046042189372e-12*pow(-x1b0 + x1_B0(0,0,0), 35) + 1.28472097728017*pow(-x1b0 + x1_B0(0,0,0), 10) +
      5.40448458421883*pow(-x1b0 + x1_B0(0,0,0), 9) + 7.67673035724381e-13*pow(-x1b0 + x1_B0(0,0,0), 36) +
      0.000211166618419883*pow(-x1b0 + x1_B0(0,0,0), 19) + 5.2776959398151e-8*pow(-x1b0 + x1_B0(0,0,0), 24) +
      1.30783741946686e-11*pow(-x1b0 + x1_B0(0,0,0), 34) + 3.99039681831242*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.000518125029896123*pow(-x1b0 + x1_B0(0,0,0), 18) +
      0.133865868334425*pow(-x1b0 + x1_B0(0,0,0), 13) + 6.70874505326609e-20*pow(-x1b0 + x1_B0(0,0,0), 48) +
      19.9087894702914*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 2.05227695456625e-11*pow(-x1b0 + x1_B0(0,0,0), 33) +
      6.89065718764235e-16*pow(-x1b0 + x1_B0(0,0,0), 43) + 1.36444444761311e-18*pow(-x1b0 + x1_B0(0,0,0), 49) +
      9.94338036470296e-8*pow(-x1b0 + x1_B0(0,0,0), 26) + 2.29770520340474e-7*pow(-x1b0 + x1_B0(0,0,0), 25) -
      3.14685525043011e-18*pow(-x1b0 + x1_B0(0,0,0), 45) - 5.54663857336047e-14*pow(-x1b0 + x1_B0(0,0,0), 39) -
      2.50967722926707e-9*pow(-x1b0 + x1_B0(0,0,0), 29) - 3.75537943671666e-10*pow(-x1b0 + x1_B0(0,0,0), 28) -
      1.2970382233701e-13*pow(-x1b0 + x1_B0(0,0,0), 38) - 0.70500345124088*x1b0 - 19.4490714625157*pow(-x1b0 +
      x1_B0(0,0,0), 8) - 9.84001869224845*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) - 1.17917798848888e-9*pow(-x1b0 + x1_B0(0,0,0), 30) - 3.08824172034029e-10*pow(-x1b0 +
      x1_B0(0,0,0), 31) - 1.36055618730943*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      0.00549316667051347*pow(-x1b0 + x1_B0(0,0,0), 16) - 29.7489710517421*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      1.92048017861274e-6*pow(-x1b0 + x1_B0(0,0,0), 23) - 8.27802057742277e-6*pow(-x1b0 + x1_B0(0,0,0), 22) -
      1.0958051866497*pow(-x1b0 + x1_B0(0,0,0), 11) - 0.000296044358818979*pow(-x1b0 + x1_B0(0,0,0), 17) -
      8.74763938491298e-18*pow(-x1b0 + x1_B0(0,0,0), 47) - 0.0811820521446499*pow(-x1b0 + x1_B0(0,0,0), 12) -
      0.0110103876402037*pow(-x1b0 + x1_B0(0,0,0), 15) - 8.9227208199772e-14*pow(-x1b0 + x1_B0(0,0,0), 37) -
      2.26097375236549e-17*pow(-x1b0 + x1_B0(0,0,0), 46) - 2.57705290058786e-11*pow(-x1b0 + x1_B0(0,0,0), 32) -
      3.9396145861337e-16*pow(-x1b0 + x1_B0(0,0,0), 41) - 1.94065718568835e-19*pow(-x1b0 + x1_B0(0,0,0), 50) -
      1.33377666289244e-14*pow(-x1b0 + x1_B0(0,0,0), 40) - 1.46567217885769e-5*pow(-x1b0 + x1_B0(0,0,0), 21)
)
: (

      0.999998963470747
));

    rhou1 = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   -4.54052089570034e-9 + 8.1880548886519e-6*pow(-x1b0 +
      x1_B0(0,0,0), 15) + 3.15590063406684e-7*pow(-x1b0 + x1_B0(0,0,0), 20) + 0.040425268842647*((-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) + 2.0154496007228e-11*pow(-x1b0 + x1_B0(0,0,0), 28) + 0.0242329259197411*pow(-x1b0 + x1_B0(0,0,0),
      10) + 0.000291381826494586*pow(-x1b0 + x1_B0(0,0,0), 14) + 6.73898204799131e-10*pow(-x1b0 + x1_B0(0,0,0), 25) +
      1.85416600135407e-16*pow(-x1b0 + x1_B0(0,0,0), 37) + 2.46346518485074e-14*pow(-x1b0 + x1_B0(0,0,0), 35) +
      3.55996755975014e-18*pow(-x1b0 + x1_B0(0,0,0), 43) + 5.96015141953445e-14*pow(-x1b0 + x1_B0(0,0,0), 34) +
      7.19961160237273e-21*pow(-x1b0 + x1_B0(0,0,0), 49) + 5.11019492260991e-10*pow(-x1b0 + x1_B0(0,0,0), 26) +
      0.000271933313720515*pow(-x1b0 + x1_B0(0,0,0), 13) + 1.02819050245244e-18*pow(-x1b0 + x1_B0(0,0,0), 44) +
      1.20076383298111e-6*pow(-x1b0 + x1_B0(0,0,0), 19) + 0.0802767538273824*pow(-x1b0 + x1_B0(0,0,0), 8) +
      1.60952352657344e-10*pow(-x1b0 + x1_B0(0,0,0), 27) + 0.000675804420077356*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) + 3.46646111091862e-7*x1_B0(0,0,0) + 3.95659671623606e-20*pow(-x1b0 + x1_B0(0,0,0), 45) +
      0.00601485560417741*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0)))
      + 5.44509393295634e-18*pow(-x1b0 + x1_B0(0,0,0), 42) + 4.56390658216947e-14*pow(-x1b0 + x1_B0(0,0,0), 33) +
      5.77610054249051e-15*pow(-x1b0 + x1_B0(0,0,0), 36) + 9.37278284543165e-7*pow(-x1b0 + x1_B0(0,0,0), 18) -
      3.43043397023927e-13*pow(-x1b0 + x1_B0(0,0,0), 32) - 1.97603337376184e-9*pow(-x1b0 + x1_B0(0,0,0), 24) -
      0.0173159424327144*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.08374437841993e-21*pow(-x1b0 + x1_B0(0,0,0), 48) -
      3.84328807722218e-8*pow(-x1b0 + x1_B0(0,0,0), 22) - 0.00174020189862055*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.98806894410881e-12*pow(-x1b0 + x1_B0(0,0,0), 31) -
      9.78788444400239e-22*pow(-x1b0 + x1_B0(0,0,0), 50) - 0.00248243956904384*pow(-x1b0 + x1_B0(0,0,0), 12) -
      1.09492602247293e-19*pow(-x1b0 + x1_B0(0,0,0), 46) - 7.69040185413285e-12*pow(-x1b0 + x1_B0(0,0,0), 29) -
      8.33906981903121e-6*pow(-x1b0 + x1_B0(0,0,0), 17) - 0.0687165671173466*pow(-x1b0 + x1_B0(0,0,0), 7) -
      8.2833798617672e-18*pow(-x1b0 + x1_B0(0,0,0), 41) - 5.42856439731251e-16*pow(-x1b0 + x1_B0(0,0,0), 38) -
      2.9053357388848e-16*pow(-x1b0 + x1_B0(0,0,0), 39) - 0.00141134699427674*pow(-x1b0 + x1_B0(0,0,0), 11) -
      3.46646111091862e-7*x1b0 - 8.33338364767477e-17*pow(-x1b0 + x1_B0(0,0,0), 40) - 5.82577714670976e-12*pow(-x1b0 +
      x1_B0(0,0,0), 30) - 1.19380225994185e-8*pow(-x1b0 + x1_B0(0,0,0), 21) - 4.82177190833371e-20*pow(-x1b0 +
      x1_B0(0,0,0), 47) - 0.0600438180785648*pow(-x1b0 + x1_B0(0,0,0), 9) - 1.43879912982306e-8*pow(-x1b0 +
      x1_B0(0,0,0), 23) - 3.04892028367409e-5*pow(-x1b0 + x1_B0(0,0,0), 16)
)
: (
   0.00193194788504255
));

    T = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   1.36969826742154 + 0.0992963978742254*pow(-x1b0 +
      x1_B0(0,0,0), 13) + 2.86617027971165e-15*pow(-x1b0 + x1_B0(0,0,0), 41) + 2.0268337344622*x1_B0(0,0,0) +
      42.4845202774873*pow(-x1b0 + x1_B0(0,0,0), 9) + 0.00582133304112724*pow(-x1b0 + x1_B0(0,0,0), 16) +
      6.64980553213925e-6*pow(-x1b0 + x1_B0(0,0,0), 22) + 1.13879429024366e-10*pow(-x1b0 + x1_B0(0,0,0), 32) +
      1.1308454106724e-13*pow(-x1b0 + x1_B0(0,0,0), 38) + 0.00030145027063903*pow(-x1b0 + x1_B0(0,0,0), 18) +
      1.26189273290074e-9*pow(-x1b0 + x1_B0(0,0,0), 30) + 97.5431351348556*pow(-x1b0 + x1_B0(0,0,0), 7) +
      4.37375087293463e-19*pow(-x1b0 + x1_B0(0,0,0), 48) + 3.91704143820735e-6*pow(-x1b0 + x1_B0(0,0,0), 23) +
      1.09546598579685*pow(-x1b0 + x1_B0(0,0,0), 12) + 5.19322330244578e-10*pow(-x1b0 + x1_B0(0,0,0), 31) +
      2.50553276623531e-19*pow(-x1b0 + x1_B0(0,0,0), 50) + 7.12556727621899e-14*pow(-x1b0 + x1_B0(0,0,0), 39) +
      43.2952051988253*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 5.94617332276474*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) + 2.23675251451957e-14*pow(-x1b0 + x1_B0(0,0,0), 40) + 7.43073974634038e-10*pow(-x1b0 +
      x1_B0(0,0,0), 29) + 0.00339078474382293*pow(-x1b0 + x1_B0(0,0,0), 17) + 1.26410264823667e-17*pow(-x1b0 +
      x1_B0(0,0,0), 47) + 8.92551641671999e-7*pow(-x1b0 + x1_B0(0,0,0), 24) + 2.69256935130225e-17*pow(-x1b0 +
      x1_B0(0,0,0), 46) - 4.43354296488102e-8*pow(-x1b0 + x1_B0(0,0,0), 27) - 2.0268337344622*x1b0 -
      1.38796867965428e-13*pow(-x1b0 + x1_B0(0,0,0), 37) - 0.0983732879910376*pow(-x1b0 + x1_B0(0,0,0), 14) -
      81.9540739658969*pow(-x1b0 + x1_B0(0,0,0), 8) - 0.0214185365200827*pow(-x1b0 + x1_B0(0,0,0), 15) -
      3.36981953913679*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.26838474894301e-11*pow(-x1b0 + x1_B0(0,0,0),
      34) - 1.08493288242023e-7*pow(-x1b0 + x1_B0(0,0,0), 26) - 8.8861672751871e-16*pow(-x1b0 + x1_B0(0,0,0), 43) -
      0.000251816345600445*pow(-x1b0 + x1_B0(0,0,0), 19) - 1.86978885577543e-18*pow(-x1b0 + x1_B0(0,0,0), 49) -
      17.5412907280677*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      8.58959654131943e-9*pow(-x1b0 + x1_B0(0,0,0), 28) - 3.48338396716385e-8*pow(-x1b0 + x1_B0(0,0,0), 25) -
      1.66670032495984e-17*pow(-x1b0 + x1_B0(0,0,0), 45) - 77.8084617211988*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      2.75031316978532e-16*pow(-x1b0 + x1_B0(0,0,0), 44) - 10.1079111210035*pow(-x1b0 + x1_B0(0,0,0), 10) -
      1.17119752904835e-15*pow(-x1b0 + x1_B0(0,0,0), 42) - 1.34176860771771*pow(-x1b0 + x1_B0(0,0,0), 11) -
      7.56013271459707e-13*pow(-x1b0 + x1_B0(0,0,0), 33) - 6.14617333062365e-12*pow(-x1b0 + x1_B0(0,0,0), 35) -
      1.29935522041302e-5*pow(-x1b0 + x1_B0(0,0,0), 21) - 1.64571857521028e-12*pow(-x1b0 + x1_B0(0,0,0), 36) -
      0.00011149693097182*pow(-x1b0 + x1_B0(0,0,0), 20)
)
: (
   1.00000103348235
));

   rho = 1.0/T;

   rho_B0(0,0,0) = rho;

   rhou0_B0(0,0,0) = rhou0;

   rhou1_B0(0,0,0) = rhou1;

   rhoE_B0(0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   rhou2_B0(0,0,0) = 0.0;

}


//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_opensbliblock00Kernel067(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
double* __restrict arg5,
int size0,
int size1,
int size2) {
    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[0][0] * dims_opensbliblock00Kernel067[0][1];
    arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[1][0] * dims_opensbliblock00Kernel067[1][1];
    arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[2][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[2][0] * dims_opensbliblock00Kernel067[2][1];
    arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[3][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[3][0] * dims_opensbliblock00Kernel067[3][1];
    arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[4][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[4][0] * dims_opensbliblock00Kernel067[4][1];
    arg5 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[5][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[5][0] * dims_opensbliblock00Kernel067[5][1];

    if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
        const ACC<double> argp0(dims_opensbliblock00Kernel067[0][0], dims_opensbliblock00Kernel067[0][1], arg0);
        ACC<double> argp1(dims_opensbliblock00Kernel067[1][0], dims_opensbliblock00Kernel067[1][1], arg1);
        ACC<double> argp2(dims_opensbliblock00Kernel067[2][0], dims_opensbliblock00Kernel067[2][1], arg2);
        ACC<double> argp3(dims_opensbliblock00Kernel067[3][0], dims_opensbliblock00Kernel067[3][1], arg3);
        ACC<double> argp4(dims_opensbliblock00Kernel067[4][0], dims_opensbliblock00Kernel067[4][1], arg4);
        ACC<double> argp5(dims_opensbliblock00Kernel067[5][0], dims_opensbliblock00Kernel067[5][1], arg5);
        opensbliblock00Kernel067_gpu(
         argp0, argp1, argp2, argp3, argp4,
         argp5);
    }

} //End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5) {
#else
void ops_par_loop_opensbliblock00Kernel067_execute(ops_kernel_descriptor *desc) {
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
    ops_arg arg5 = desc->args[5];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

#if CHECKPOINTING && !OPS_LAZY
    if (!ops_checkpointing_before(args, 6, range, 0)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 0, "opensbliblock00Kernel067");
        block->instance->OPS_kernels[0].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
#ifdef OPS_MPI
    int arg_idx[3];
#endif

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 6, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

    int xdim0 = args[0].dat->size[0];
    int ydim0 = args[0].dat->size[1];
    int xdim1 = args[1].dat->size[0];
    int ydim1 = args[1].dat->size[1];
    int xdim2 = args[2].dat->size[0];
    int ydim2 = args[2].dat->size[1];
    int xdim3 = args[3].dat->size[0];
    int ydim3 = args[3].dat->size[1];
    int xdim4 = args[4].dat->size[0];
    int ydim4 = args[4].dat->size[1];
    int xdim5 = args[5].dat->size[0];
    int ydim5 = args[5].dat->size[1];

    if (xdim0 != dims_opensbliblock00Kernel067_h[0][0] || ydim0 != dims_opensbliblock00Kernel067_h[0][1] || xdim1 != dims_opensbliblock00Kernel067_h[1][0] || ydim1 != dims_opensbliblock00Kernel067_h[1][1] || xdim2 != dims_opensbliblock00Kernel067_h[2][0] || ydim2 != dims_opensbliblock00Kernel067_h[2][1] || xdim3 != dims_opensbliblock00Kernel067_h[3][0] || ydim3 != dims_opensbliblock00Kernel067_h[3][1] || xdim4 != dims_opensbliblock00Kernel067_h[4][0] || ydim4 != dims_opensbliblock00Kernel067_h[4][1] || xdim5 != dims_opensbliblock00Kernel067_h[5][0] || ydim5 != dims_opensbliblock00Kernel067_h[5][1]) {
        dims_opensbliblock00Kernel067_h[0][0] = xdim0;
        dims_opensbliblock00Kernel067_h[0][1] = ydim0;
        dims_opensbliblock00Kernel067_h[1][0] = xdim1;
        dims_opensbliblock00Kernel067_h[1][1] = ydim1;
        dims_opensbliblock00Kernel067_h[2][0] = xdim2;
        dims_opensbliblock00Kernel067_h[2][1] = ydim2;
        dims_opensbliblock00Kernel067_h[3][0] = xdim3;
        dims_opensbliblock00Kernel067_h[3][1] = ydim3;
        dims_opensbliblock00Kernel067_h[4][0] = xdim4;
        dims_opensbliblock00Kernel067_h[4][1] = ydim4;
        dims_opensbliblock00Kernel067_h[5][0] = xdim5;
        dims_opensbliblock00Kernel067_h[5][1] = ydim5;

        hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel067, dims_opensbliblock00Kernel067_h, sizeof(dims_opensbliblock00Kernel067)));
    }


    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z +1);
    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
    long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
    long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
    long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
    long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);

    char *p_a[6];

//  =======================
//  set up initial pointers
//  =======================
    long long int base0 = args[0].dat->base_offset + 
             dat0 * 1 * (start_indx[0] * args[0].stencil->stride[0]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                      (start_indx[1] * args[0].stencil->stride[1]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                       args[0].dat->size[1] *
                      (start_indx[2] * args[0].stencil->stride[2]);
    p_a[0] = (char *)args[0].data_d + base0;

    long long int base1 = args[1].dat->base_offset + 
             dat1 * 1 * (start_indx[0] * args[1].stencil->stride[0]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                      (start_indx[1] * args[1].stencil->stride[1]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                       args[1].dat->size[1] *
                      (start_indx[2] * args[1].stencil->stride[2]);
    p_a[1] = (char *)args[1].data_d + base1;

    long long int base2 = args[2].dat->base_offset + 
             dat2 * 1 * (start_indx[0] * args[2].stencil->stride[0]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                      (start_indx[1] * args[2].stencil->stride[1]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                       args[2].dat->size[1] *
                      (start_indx[2] * args[2].stencil->stride[2]);
    p_a[2] = (char *)args[2].data_d + base2;

    long long int base3 = args[3].dat->base_offset + 
             dat3 * 1 * (start_indx[0] * args[3].stencil->stride[0]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                      (start_indx[1] * args[3].stencil->stride[1]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                       args[3].dat->size[1] *
                      (start_indx[2] * args[3].stencil->stride[2]);
    p_a[3] = (char *)args[3].data_d + base3;

    long long int base4 = args[4].dat->base_offset + 
             dat4 * 1 * (start_indx[0] * args[4].stencil->stride[0]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                      (start_indx[1] * args[4].stencil->stride[1]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                       args[4].dat->size[1] *
                      (start_indx[2] * args[4].stencil->stride[2]);
    p_a[4] = (char *)args[4].data_d + base4;

    long long int base5 = args[5].dat->base_offset + 
             dat5 * 1 * (start_indx[0] * args[5].stencil->stride[0]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                      (start_indx[1] * args[5].stencil->stride[1]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                       args[5].dat->size[1] *
                      (start_indx[2] * args[5].stencil->stride[2]);
    p_a[5] = (char *)args[5].data_d + base5;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 6);
    ops_halo_exchanges(args, 6, range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
    }


//call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_opensbliblock00Kernel067<<<grid, tblock >>> ( 
         (double *)p_a[0], (double *)p_a[1],
         (double *)p_a[2], (double *)p_a[3],
         (double *)p_a[4], (double *)p_a[5],
        x_size, y_size, z_size);

    }

    hipSafeCall(block->instance->ostream(), hipGetLastError());

    if (block->instance->OPS_diags>1) {
        hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[0].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 6);
    ops_set_halo_dirtybit3(&args[1], range);
    ops_set_halo_dirtybit3(&args[2], range);
    ops_set_halo_dirtybit3(&args[3], range);
    ops_set_halo_dirtybit3(&args[4], range);
    ops_set_halo_dirtybit3(&args[5], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg3);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg5);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5)
{
    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

    create_kerneldesc_and_enque("opensbliblock00Kernel067", args, 6, 0, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel067_execute);
}
#endif
