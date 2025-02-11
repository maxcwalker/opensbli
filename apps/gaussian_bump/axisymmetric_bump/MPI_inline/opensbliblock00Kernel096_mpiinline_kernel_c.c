//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel096;
int ydim0_opensbliblock00Kernel096;
int xdim1_opensbliblock00Kernel096;
int ydim1_opensbliblock00Kernel096;
int xdim2_opensbliblock00Kernel096;
int ydim2_opensbliblock00Kernel096;
int xdim3_opensbliblock00Kernel096;
int ydim3_opensbliblock00Kernel096;
int xdim4_opensbliblock00Kernel096;
int ydim4_opensbliblock00Kernel096;
int xdim5_opensbliblock00Kernel096;
int ydim5_opensbliblock00Kernel096;
int xdim6_opensbliblock00Kernel096;
int ydim6_opensbliblock00Kernel096;
int xdim7_opensbliblock00Kernel096;
int ydim7_opensbliblock00Kernel096;
int xdim8_opensbliblock00Kernel096;
int ydim8_opensbliblock00Kernel096;
int xdim9_opensbliblock00Kernel096;
int ydim9_opensbliblock00Kernel096;
int xdim10_opensbliblock00Kernel096;
int ydim10_opensbliblock00Kernel096;
int xdim11_opensbliblock00Kernel096;
int ydim11_opensbliblock00Kernel096;
int xdim12_opensbliblock00Kernel096;
int ydim12_opensbliblock00Kernel096;
int xdim13_opensbliblock00Kernel096;
int ydim13_opensbliblock00Kernel096;
int xdim14_opensbliblock00Kernel096;
int ydim14_opensbliblock00Kernel096;
int xdim15_opensbliblock00Kernel096;
int ydim15_opensbliblock00Kernel096;
int xdim16_opensbliblock00Kernel096;
int ydim16_opensbliblock00Kernel096;
int xdim17_opensbliblock00Kernel096;
int ydim17_opensbliblock00Kernel096;
int xdim18_opensbliblock00Kernel096;
int ydim18_opensbliblock00Kernel096;
int xdim19_opensbliblock00Kernel096;
int ydim19_opensbliblock00Kernel096;
int xdim20_opensbliblock00Kernel096;
int ydim20_opensbliblock00Kernel096;
int xdim21_opensbliblock00Kernel096;
int ydim21_opensbliblock00Kernel096;


//user function



void opensbliblock00Kernel096_c_wrapper(
  double * restrict x0_B0_p,
  double * restrict x1_B0_p,
  double * restrict x2_B0_p,
  double * restrict D00_B0_p,
  double * restrict D01_B0_p,
  double * restrict D02_B0_p,
  double * restrict D10_B0_p,
  double * restrict D11_B0_p,
  double * restrict D12_B0_p,
  double * restrict D20_B0_p,
  double * restrict D21_B0_p,
  double * restrict D22_B0_p,
  double * restrict detJ_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk2_B0_p,
  double * restrict wk3_B0_p,
  double * restrict wk4_B0_p,
  double * restrict wk5_B0_p,
  double * restrict wk6_B0_p,
  double * restrict wk7_B0_p,
  double * restrict wk8_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1, int arg_idx2,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        int idx[] = {arg_idx0+n_x, arg_idx1+n_y, arg_idx2+n_z};
        const ptr_double x0_B0 = { x0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel096*1 + n_z * xdim0_opensbliblock00Kernel096 * ydim0_opensbliblock00Kernel096*1, xdim0_opensbliblock00Kernel096, ydim0_opensbliblock00Kernel096};
        const ptr_double x1_B0 = { x1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel096*1 + n_z * xdim1_opensbliblock00Kernel096 * ydim1_opensbliblock00Kernel096*1, xdim1_opensbliblock00Kernel096, ydim1_opensbliblock00Kernel096};
        const ptr_double x2_B0 = { x2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel096*1 + n_z * xdim2_opensbliblock00Kernel096 * ydim2_opensbliblock00Kernel096*1, xdim2_opensbliblock00Kernel096, ydim2_opensbliblock00Kernel096};
        ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel096*1 + n_z * xdim3_opensbliblock00Kernel096 * ydim3_opensbliblock00Kernel096*1, xdim3_opensbliblock00Kernel096, ydim3_opensbliblock00Kernel096};
        ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel096*1 + n_z * xdim4_opensbliblock00Kernel096 * ydim4_opensbliblock00Kernel096*1, xdim4_opensbliblock00Kernel096, ydim4_opensbliblock00Kernel096};
        ptr_double D02_B0 = { D02_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel096*1 + n_z * xdim5_opensbliblock00Kernel096 * ydim5_opensbliblock00Kernel096*1, xdim5_opensbliblock00Kernel096, ydim5_opensbliblock00Kernel096};
        ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel096*1 + n_z * xdim6_opensbliblock00Kernel096 * ydim6_opensbliblock00Kernel096*1, xdim6_opensbliblock00Kernel096, ydim6_opensbliblock00Kernel096};
        ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel096*1 + n_z * xdim7_opensbliblock00Kernel096 * ydim7_opensbliblock00Kernel096*1, xdim7_opensbliblock00Kernel096, ydim7_opensbliblock00Kernel096};
        ptr_double D12_B0 = { D12_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel096*1 + n_z * xdim8_opensbliblock00Kernel096 * ydim8_opensbliblock00Kernel096*1, xdim8_opensbliblock00Kernel096, ydim8_opensbliblock00Kernel096};
        ptr_double D20_B0 = { D20_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel096*1 + n_z * xdim9_opensbliblock00Kernel096 * ydim9_opensbliblock00Kernel096*1, xdim9_opensbliblock00Kernel096, ydim9_opensbliblock00Kernel096};
        ptr_double D21_B0 = { D21_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel096*1 + n_z * xdim10_opensbliblock00Kernel096 * ydim10_opensbliblock00Kernel096*1, xdim10_opensbliblock00Kernel096, ydim10_opensbliblock00Kernel096};
        ptr_double D22_B0 = { D22_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel096*1 + n_z * xdim11_opensbliblock00Kernel096 * ydim11_opensbliblock00Kernel096*1, xdim11_opensbliblock00Kernel096, ydim11_opensbliblock00Kernel096};
        ptr_double detJ_B0 = { detJ_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel096*1 + n_z * xdim12_opensbliblock00Kernel096 * ydim12_opensbliblock00Kernel096*1, xdim12_opensbliblock00Kernel096, ydim12_opensbliblock00Kernel096};
        ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel096*1 + n_z * xdim13_opensbliblock00Kernel096 * ydim13_opensbliblock00Kernel096*1, xdim13_opensbliblock00Kernel096, ydim13_opensbliblock00Kernel096};
        ptr_double wk1_B0 = { wk1_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel096*1 + n_z * xdim14_opensbliblock00Kernel096 * ydim14_opensbliblock00Kernel096*1, xdim14_opensbliblock00Kernel096, ydim14_opensbliblock00Kernel096};
        ptr_double wk2_B0 = { wk2_B0_p + n_x*1 + n_y * xdim15_opensbliblock00Kernel096*1 + n_z * xdim15_opensbliblock00Kernel096 * ydim15_opensbliblock00Kernel096*1, xdim15_opensbliblock00Kernel096, ydim15_opensbliblock00Kernel096};
        ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim16_opensbliblock00Kernel096*1 + n_z * xdim16_opensbliblock00Kernel096 * ydim16_opensbliblock00Kernel096*1, xdim16_opensbliblock00Kernel096, ydim16_opensbliblock00Kernel096};
        ptr_double wk4_B0 = { wk4_B0_p + n_x*1 + n_y * xdim17_opensbliblock00Kernel096*1 + n_z * xdim17_opensbliblock00Kernel096 * ydim17_opensbliblock00Kernel096*1, xdim17_opensbliblock00Kernel096, ydim17_opensbliblock00Kernel096};
        ptr_double wk5_B0 = { wk5_B0_p + n_x*1 + n_y * xdim18_opensbliblock00Kernel096*1 + n_z * xdim18_opensbliblock00Kernel096 * ydim18_opensbliblock00Kernel096*1, xdim18_opensbliblock00Kernel096, ydim18_opensbliblock00Kernel096};
        ptr_double wk6_B0 = { wk6_B0_p + n_x*1 + n_y * xdim19_opensbliblock00Kernel096*1 + n_z * xdim19_opensbliblock00Kernel096 * ydim19_opensbliblock00Kernel096*1, xdim19_opensbliblock00Kernel096, ydim19_opensbliblock00Kernel096};
        ptr_double wk7_B0 = { wk7_B0_p + n_x*1 + n_y * xdim20_opensbliblock00Kernel096*1 + n_z * xdim20_opensbliblock00Kernel096 * ydim20_opensbliblock00Kernel096*1, xdim20_opensbliblock00Kernel096, ydim20_opensbliblock00Kernel096};
        ptr_double wk8_B0 = { wk8_B0_p + n_x*1 + n_y * xdim21_opensbliblock00Kernel096*1 + n_z * xdim21_opensbliblock00Kernel096 * ydim21_opensbliblock00Kernel096*1, xdim21_opensbliblock00Kernel096, ydim21_opensbliblock00Kernel096};
        
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x0_dz = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
   double d1_x1_dz = 0.0;
   double d1_x2_dx = 0.0;
   double d1_x2_dy = 0.0;
   double d1_x2_dz = 0.0;
    d1_x2_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x2_B0, 2,0,0) + 4*OPS_ACC(x2_B0, 1,0,0) - (25.0/12.0)*OPS_ACC(x2_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x2_B0, 4,0,0) + ((4.0/3.0))*OPS_ACC(x2_B0, 3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x2_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x2_B0, 2,0,0) - (1.0/4.0)*OPS_ACC(x2_B0, -1,0,0) + ((1.0/12.0))*OPS_ACC(x2_B0, 3,0,0) + ((3.0/2.0))*OPS_ACC(x2_B0, 1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*OPS_ACC(x2_B0, -1,0,0) + 3*OPS_ACC(x2_B0, -2,0,0) - (4.0/3.0)*OPS_ACC(x2_B0, -3,0,0) +
      ((1.0/4.0))*OPS_ACC(x2_B0, -4,0,0) + ((25.0/12.0))*OPS_ACC(x2_B0, 0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (

      ((1.0/2.0))*OPS_ACC(x2_B0, -2,0,0) - (3.0/2.0)*OPS_ACC(x2_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x2_B0, -3,0,0) + ((1.0/4.0))*OPS_ACC(x2_B0, 1,0,0) +
      ((5.0/6.0))*OPS_ACC(x2_B0, 0,0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x2_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x2_B0, 2,0,0) + ((1.0/12.0))*OPS_ACC(x2_B0, -2,0,0)
      + ((2.0/3.0))*OPS_ACC(x2_B0, 1,0,0)
)))));

    d1_x1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x1_B0, 2,0,0) + 4*OPS_ACC(x1_B0, 1,0,0) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 4,0,0) + ((4.0/3.0))*OPS_ACC(x1_B0, 3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 2,0,0) - (1.0/4.0)*OPS_ACC(x1_B0, -1,0,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 3,0,0) + ((3.0/2.0))*OPS_ACC(x1_B0, 1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*OPS_ACC(x1_B0, -1,0,0) + 3*OPS_ACC(x1_B0, -2,0,0) - (4.0/3.0)*OPS_ACC(x1_B0, -3,0,0) +
      ((1.0/4.0))*OPS_ACC(x1_B0, -4,0,0) + ((25.0/12.0))*OPS_ACC(x1_B0, 0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (

      ((1.0/2.0))*OPS_ACC(x1_B0, -2,0,0) - (3.0/2.0)*OPS_ACC(x1_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x1_B0, -3,0,0) + ((1.0/4.0))*OPS_ACC(x1_B0, 1,0,0) +
      ((5.0/6.0))*OPS_ACC(x1_B0, 0,0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x1_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x1_B0, 2,0,0) + ((1.0/12.0))*OPS_ACC(x1_B0, -2,0,0)
      + ((2.0/3.0))*OPS_ACC(x1_B0, 1,0,0)
)))));

    d1_x0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x0_B0, 2,0,0) + 4*OPS_ACC(x0_B0, 1,0,0) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 4,0,0) + ((4.0/3.0))*OPS_ACC(x0_B0, 3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 2,0,0) - (1.0/4.0)*OPS_ACC(x0_B0, -1,0,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 3,0,0) + ((3.0/2.0))*OPS_ACC(x0_B0, 1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*OPS_ACC(x0_B0, -1,0,0) + 3*OPS_ACC(x0_B0, -2,0,0) - (4.0/3.0)*OPS_ACC(x0_B0, -3,0,0) +
      ((1.0/4.0))*OPS_ACC(x0_B0, -4,0,0) + ((25.0/12.0))*OPS_ACC(x0_B0, 0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (

      ((1.0/2.0))*OPS_ACC(x0_B0, -2,0,0) - (3.0/2.0)*OPS_ACC(x0_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x0_B0, -3,0,0) + ((1.0/4.0))*OPS_ACC(x0_B0, 1,0,0) +
      ((5.0/6.0))*OPS_ACC(x0_B0, 0,0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x0_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x0_B0, 2,0,0) + ((1.0/12.0))*OPS_ACC(x0_B0, -2,0,0)
      + ((2.0/3.0))*OPS_ACC(x0_B0, 1,0,0)
)))));

    d1_x0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x0_B0, 0,2,0) + 4*OPS_ACC(x0_B0, 0,1,0) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 0,4,0) + ((4.0/3.0))*OPS_ACC(x0_B0, 0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 0,2,0) - (1.0/4.0)*OPS_ACC(x0_B0, 0,-1,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,3,0) + ((3.0/2.0))*OPS_ACC(x0_B0, 0,1,0)
)
: (

      -(2.0/3.0)*OPS_ACC(x0_B0, 0,-1,0) - (1.0/12.0)*OPS_ACC(x0_B0, 0,2,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,-2,0) + ((2.0/3.0))*OPS_ACC(x0_B0, 0,1,0)
)));

    d1_x1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x1_B0, 0,2,0) + 4*OPS_ACC(x1_B0, 0,1,0) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 0,4,0) + ((4.0/3.0))*OPS_ACC(x1_B0, 0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 0,2,0) - (1.0/4.0)*OPS_ACC(x1_B0, 0,-1,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,3,0) + ((3.0/2.0))*OPS_ACC(x1_B0, 0,1,0)
)
: (

      -(2.0/3.0)*OPS_ACC(x1_B0, 0,-1,0) - (1.0/12.0)*OPS_ACC(x1_B0, 0,2,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,-2,0) + ((2.0/3.0))*OPS_ACC(x1_B0, 0,1,0)
)));

    d1_x2_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x2_B0, 0,2,0) + 4*OPS_ACC(x2_B0, 0,1,0) - (25.0/12.0)*OPS_ACC(x2_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x2_B0, 0,4,0) + ((4.0/3.0))*OPS_ACC(x2_B0, 0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x2_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x2_B0, 0,2,0) - (1.0/4.0)*OPS_ACC(x2_B0, 0,-1,0) + ((1.0/12.0))*OPS_ACC(x2_B0, 0,3,0) + ((3.0/2.0))*OPS_ACC(x2_B0, 0,1,0)
)
: (

      -(2.0/3.0)*OPS_ACC(x2_B0, 0,-1,0) - (1.0/12.0)*OPS_ACC(x2_B0, 0,2,0) + ((1.0/12.0))*OPS_ACC(x2_B0, 0,-2,0) + ((2.0/3.0))*OPS_ACC(x2_B0, 0,1,0)
)));

    d1_x0_dz = (-(2.0/3.0)*OPS_ACC(x0_B0, 0,0,-1) - (1.0/12.0)*OPS_ACC(x0_B0, 0,0,2) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,0,-2) +
      ((2.0/3.0))*OPS_ACC(x0_B0, 0,0,1))*invDelta2block0;

    d1_x1_dz = (-(2.0/3.0)*OPS_ACC(x1_B0, 0,0,-1) - (1.0/12.0)*OPS_ACC(x1_B0, 0,0,2) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,0,-2) +
      ((2.0/3.0))*OPS_ACC(x1_B0, 0,0,1))*invDelta2block0;

    d1_x2_dz = (-(2.0/3.0)*OPS_ACC(x2_B0, 0,0,-1) - (1.0/12.0)*OPS_ACC(x2_B0, 0,0,2) + ((1.0/12.0))*OPS_ACC(x2_B0, 0,0,-2) +
      ((2.0/3.0))*OPS_ACC(x2_B0, 0,0,1))*invDelta2block0;

   OPS_ACC(wk0_B0, 0,0,0) = d1_x0_dx;

   OPS_ACC(wk1_B0, 0,0,0) = d1_x0_dy;

   OPS_ACC(wk2_B0, 0,0,0) = d1_x0_dz;

   OPS_ACC(wk3_B0, 0,0,0) = d1_x1_dx;

   OPS_ACC(wk4_B0, 0,0,0) = d1_x1_dy;

   OPS_ACC(wk5_B0, 0,0,0) = d1_x1_dz;

   OPS_ACC(wk6_B0, 0,0,0) = d1_x2_dx;

   OPS_ACC(wk7_B0, 0,0,0) = d1_x2_dy;

   OPS_ACC(wk8_B0, 0,0,0) = d1_x2_dz;

    OPS_ACC(detJ_B0, 0,0,0) = d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx + d1_x0_dz*d1_x1_dx*d1_x2_dy -
      d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz - d1_x0_dz*d1_x1_dy*d1_x2_dx;

    OPS_ACC(D00_B0, 0,0,0) = (d1_x1_dy*d1_x2_dz - d1_x1_dz*d1_x2_dy)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D01_B0, 0,0,0) = (d1_x0_dz*d1_x2_dy - d1_x0_dy*d1_x2_dz)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D02_B0, 0,0,0) = (d1_x0_dy*d1_x1_dz - d1_x0_dz*d1_x1_dy)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D10_B0, 0,0,0) = (d1_x1_dz*d1_x2_dx - d1_x1_dx*d1_x2_dz)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D11_B0, 0,0,0) = (d1_x0_dx*d1_x2_dz - d1_x0_dz*d1_x2_dx)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D12_B0, 0,0,0) = (d1_x0_dz*d1_x1_dx - d1_x0_dx*d1_x1_dz)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D20_B0, 0,0,0) = (d1_x1_dx*d1_x2_dy - d1_x1_dy*d1_x2_dx)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D21_B0, 0,0,0) = (d1_x0_dy*d1_x2_dx - d1_x0_dx*d1_x2_dy)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);

    OPS_ACC(D22_B0, 0,0,0) = (d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx)/(d1_x0_dx*d1_x1_dy*d1_x2_dz + d1_x0_dy*d1_x1_dz*d1_x2_dx +
      d1_x0_dz*d1_x1_dx*d1_x2_dy - d1_x0_dx*d1_x1_dz*d1_x2_dy - d1_x0_dy*d1_x1_dx*d1_x2_dz -
      d1_x0_dz*d1_x1_dy*d1_x2_dx);


      }
    }
  }
}
