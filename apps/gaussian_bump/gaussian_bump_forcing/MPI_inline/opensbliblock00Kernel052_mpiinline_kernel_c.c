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


//user function



void opensbliblock00Kernel052_c_wrapper(
  double * restrict x1_B0_p,
  double * restrict x0_B0_p,
  double * restrict detJ_B0_p,
  double * restrict D01_B0_p,
  double * restrict D11_B0_p,
  double * restrict D10_B0_p,
  double * restrict D00_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double x1_B0 = { x1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel052*1, xdim0_opensbliblock00Kernel052};
      const ptr_double x0_B0 = { x0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel052*1, xdim1_opensbliblock00Kernel052};
      ptr_double detJ_B0 = { detJ_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel052*1, xdim2_opensbliblock00Kernel052};
      ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel052*1, xdim3_opensbliblock00Kernel052};
      ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel052*1, xdim4_opensbliblock00Kernel052};
      ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel052*1, xdim5_opensbliblock00Kernel052};
      ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel052*1, xdim6_opensbliblock00Kernel052};
      
   double localeval_1 = 0.0;
   double localeval_0 = 0.0;
   double localeval_2 = 0.0;
   double localeval_3 = 0.0;
    localeval_0 = ((idx[0] == 0) ? (
   inv_1*(-rc11*OPS_ACC(x0_B0, 0,0) + 4*OPS_ACC(x0_B0, 1,0) -
      rc12*OPS_ACC(x0_B0, 4,0) - 3*OPS_ACC(x0_B0, 2,0) + (rc13)*OPS_ACC(x0_B0, 3,0))
)
: ((idx[0] == 1) ? (

      (rc14)*inv_1*(-10*OPS_ACC(x0_B0, 0,0) + 18*OPS_ACC(x0_B0, 1,0) - 3*OPS_ACC(x0_B0, -1,0) -
      6*OPS_ACC(x0_B0, 2,0) + OPS_ACC(x0_B0, 3,0))
)
: ((idx[0] == block0np0 - 1) ? (

      inv_1*((rc11)*OPS_ACC(x0_B0, 0,0) - rc13*OPS_ACC(x0_B0, -3,0) + 3*OPS_ACC(x0_B0, -2,0) -
      4*OPS_ACC(x0_B0, -1,0) + (rc12)*OPS_ACC(x0_B0, -4,0))
)
: ((idx[0] == block0np0 - 2) ? (

      (rc14)*inv_1*(10*OPS_ACC(x0_B0, 0,0) - OPS_ACC(x0_B0, -3,0) + 3*OPS_ACC(x0_B0, 1,0) + 6*OPS_ACC(x0_B0, -2,0) -
      18*OPS_ACC(x0_B0, -1,0))
)
: (
   (rc14)*inv_1*(-OPS_ACC(x0_B0, 2,0) + OPS_ACC(x0_B0, -2,0) -
      8*OPS_ACC(x0_B0, -1,0) + 8*OPS_ACC(x0_B0, 1,0))
)))));

    localeval_1 = ((idx[1] == 0) ? (
   inv_0*(-rc11*OPS_ACC(x0_B0, 0,0) + 4*OPS_ACC(x0_B0, 0,1) -
      3*OPS_ACC(x0_B0, 0,2) + (rc13)*OPS_ACC(x0_B0, 0,3) - rc12*OPS_ACC(x0_B0, 0,4))
)
: ((idx[1] == 1) ? (

      (rc14)*inv_0*(-10*OPS_ACC(x0_B0, 0,0) + 18*OPS_ACC(x0_B0, 0,1) - 6*OPS_ACC(x0_B0, 0,2) -
      3*OPS_ACC(x0_B0, 0,-1) + OPS_ACC(x0_B0, 0,3))
)
: (
   (rc14)*inv_0*(-OPS_ACC(x0_B0, 0,2) +
      OPS_ACC(x0_B0, 0,-2) + 8*OPS_ACC(x0_B0, 0,1) - 8*OPS_ACC(x0_B0, 0,-1))
)));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(-rc12*OPS_ACC(x1_B0, 4,0) + 4*OPS_ACC(x1_B0, 1,0) -
      rc11*OPS_ACC(x1_B0, 0,0) + (rc13)*OPS_ACC(x1_B0, 3,0) - 3*OPS_ACC(x1_B0, 2,0))
)
: ((idx[0] == 1) ? (

      (rc14)*inv_1*(-3*OPS_ACC(x1_B0, -1,0) + 18*OPS_ACC(x1_B0, 1,0) - 10*OPS_ACC(x1_B0, 0,0) + OPS_ACC(x1_B0, 3,0)
      - 6*OPS_ACC(x1_B0, 2,0))
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc12)*OPS_ACC(x1_B0, -4,0) +
      3*OPS_ACC(x1_B0, -2,0) - 4*OPS_ACC(x1_B0, -1,0) + (rc11)*OPS_ACC(x1_B0, 0,0) - rc13*OPS_ACC(x1_B0, -3,0))
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc14)*inv_1*(6*OPS_ACC(x1_B0, -2,0) - 18*OPS_ACC(x1_B0, -1,0) +
      3*OPS_ACC(x1_B0, 1,0) + 10*OPS_ACC(x1_B0, 0,0) - OPS_ACC(x1_B0, -3,0))
)
: (

      (rc14)*inv_1*(8*OPS_ACC(x1_B0, 1,0) + OPS_ACC(x1_B0, -2,0) - 8*OPS_ACC(x1_B0, -1,0) -
      OPS_ACC(x1_B0, 2,0))
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*(-3*OPS_ACC(x1_B0, 0,2) + 4*OPS_ACC(x1_B0, 0,1) -
      rc11*OPS_ACC(x1_B0, 0,0) - rc12*OPS_ACC(x1_B0, 0,4) + (rc13)*OPS_ACC(x1_B0, 0,3))
)
: ((idx[1] == 1) ? (

      (rc14)*inv_0*(-6*OPS_ACC(x1_B0, 0,2) + 18*OPS_ACC(x1_B0, 0,1) - 3*OPS_ACC(x1_B0, 0,-1) -
      10*OPS_ACC(x1_B0, 0,0) + OPS_ACC(x1_B0, 0,3))
)
: (
   (rc14)*inv_0*(OPS_ACC(x1_B0, 0,-2) -
      8*OPS_ACC(x1_B0, 0,-1) + 8*OPS_ACC(x1_B0, 0,1) - OPS_ACC(x1_B0, 0,2))
)));

   OPS_ACC(detJ_B0, 0,0) = localeval_0*localeval_3 - localeval_1*localeval_2;

   OPS_ACC(D00_B0, 0,0) = localeval_3/(localeval_0*localeval_3 - localeval_1*localeval_2);

   OPS_ACC(D01_B0, 0,0) = -localeval_1/(localeval_0*localeval_3 - localeval_1*localeval_2);

   OPS_ACC(D10_B0, 0,0) = -localeval_2/(localeval_0*localeval_3 - localeval_1*localeval_2);

   OPS_ACC(D11_B0, 0,0) = localeval_0/(localeval_0*localeval_3 - localeval_1*localeval_2);


    }
  }
}
