//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel052;
int xdim1_opensbliblock00Kernel052;
int xdim2_opensbliblock00Kernel052;
int xdim3_opensbliblock00Kernel052;
int xdim4_opensbliblock00Kernel052;
int xdim5_opensbliblock00Kernel052;
int xdim6_opensbliblock00Kernel052;
int xdim7_opensbliblock00Kernel052;
int xdim8_opensbliblock00Kernel052;
int xdim9_opensbliblock00Kernel052;
int xdim10_opensbliblock00Kernel052;


//user function



void opensbliblock00Kernel052_c_wrapper(
  double * restrict x0_B0_p,
  double * restrict x1_B0_p,
  double * restrict D00_B0_p,
  double * restrict D01_B0_p,
  double * restrict D10_B0_p,
  double * restrict D11_B0_p,
  double * restrict detJ_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk2_B0_p,
  double * restrict wk3_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double x0_B0 = { x0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel052*1, xdim0_opensbliblock00Kernel052};
      const ptr_double x1_B0 = { x1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel052*1, xdim1_opensbliblock00Kernel052};
      ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel052*1, xdim2_opensbliblock00Kernel052};
      ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel052*1, xdim3_opensbliblock00Kernel052};
      ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel052*1, xdim4_opensbliblock00Kernel052};
      ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel052*1, xdim5_opensbliblock00Kernel052};
      ptr_double detJ_B0 = { detJ_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel052*1, xdim6_opensbliblock00Kernel052};
      ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel052*1, xdim7_opensbliblock00Kernel052};
      ptr_double wk1_B0 = { wk1_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel052*1, xdim8_opensbliblock00Kernel052};
      ptr_double wk2_B0 = { wk2_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel052*1, xdim9_opensbliblock00Kernel052};
      ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel052*1, xdim10_opensbliblock00Kernel052};
      
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
    d1_x0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x0_B0, 2,0) + 4*OPS_ACC(x0_B0, 1,0) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(x0_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 2,0) - (1.0/4.0)*OPS_ACC(x0_B0, -1,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 3,0) + ((3.0/2.0))*OPS_ACC(x0_B0, 1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*OPS_ACC(x0_B0, -1,0) + 3*OPS_ACC(x0_B0, -2,0) - (4.0/3.0)*OPS_ACC(x0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(x0_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(x0_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(x0_B0, -2,0) - (3.0/2.0)*OPS_ACC(x0_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(x0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(x0_B0, 1,0) + ((5.0/6.0))*OPS_ACC(x0_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x0_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(x0_B0, 2,0) + ((1.0/12.0))*OPS_ACC(x0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(x0_B0, 1,0)
)))));

    d1_x1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x1_B0, 2,0) + 4*OPS_ACC(x1_B0, 1,0) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 4,0) + ((4.0/3.0))*OPS_ACC(x1_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 2,0) - (1.0/4.0)*OPS_ACC(x1_B0, -1,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 3,0) + ((3.0/2.0))*OPS_ACC(x1_B0, 1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*OPS_ACC(x1_B0, -1,0) + 3*OPS_ACC(x1_B0, -2,0) - (4.0/3.0)*OPS_ACC(x1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(x1_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(x1_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(x1_B0, -2,0) - (3.0/2.0)*OPS_ACC(x1_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(x1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(x1_B0, 1,0) + ((5.0/6.0))*OPS_ACC(x1_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x1_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(x1_B0, 2,0) + ((1.0/12.0))*OPS_ACC(x1_B0, -2,0) + ((2.0/3.0))*OPS_ACC(x1_B0, 1,0)
)))));

    d1_x1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x1_B0, 0,2) + 4*OPS_ACC(x1_B0, 0,1) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(x1_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 0,2) - (1.0/4.0)*OPS_ACC(x1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,3) + ((3.0/2.0))*OPS_ACC(x1_B0, 0,1)
)
: (

      -(2.0/3.0)*OPS_ACC(x1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(x1_B0, 0,2) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(x1_B0, 0,1)
)));

    d1_x0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x0_B0, 0,2) + 4*OPS_ACC(x0_B0, 0,1) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 0,4) + ((4.0/3.0))*OPS_ACC(x0_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 0,2) - (1.0/4.0)*OPS_ACC(x0_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,3) + ((3.0/2.0))*OPS_ACC(x0_B0, 0,1)
)
: (

      -(2.0/3.0)*OPS_ACC(x0_B0, 0,-1) - (1.0/12.0)*OPS_ACC(x0_B0, 0,2) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(x0_B0, 0,1)
)));

   OPS_ACC(wk0_B0, 0,0) = d1_x0_dx;

   OPS_ACC(wk1_B0, 0,0) = d1_x0_dy;

   OPS_ACC(wk2_B0, 0,0) = d1_x1_dx;

   OPS_ACC(wk3_B0, 0,0) = d1_x1_dy;

   OPS_ACC(detJ_B0, 0,0) = d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx;

   OPS_ACC(D00_B0, 0,0) = d1_x1_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D01_B0, 0,0) = -d1_x0_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D10_B0, 0,0) = -d1_x1_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D11_B0, 0,0) = d1_x0_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);


    }
  }
}
