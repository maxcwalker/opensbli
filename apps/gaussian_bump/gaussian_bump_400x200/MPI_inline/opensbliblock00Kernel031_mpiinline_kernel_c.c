//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel031;
int xdim1_opensbliblock00Kernel031;


//user function



void opensbliblock00Kernel031_c_wrapper(
  double * restrict u1_B0_p,
  double * restrict wk3_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel031*1, xdim0_opensbliblock00Kernel031};
      ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel031*1, xdim1_opensbliblock00Kernel031};
      
    OPS_ACC(wk3_B0, 0,0) = inv_1*((idx[0] == 0) ? (
   (rc12)*OPS_ACC(u1_B0, 3,0) - rc11*OPS_ACC(u1_B0, 0,0) +
      4*OPS_ACC(u1_B0, 1,0) - rc13*OPS_ACC(u1_B0, 4,0) - 3*OPS_ACC(u1_B0, 2,0)
)
: ((idx[0] == 1) ? (

      (rc16)*OPS_ACC(u1_B0, 3,0) - rc15*OPS_ACC(u1_B0, 0,0) + (rc14)*OPS_ACC(u1_B0, 1,0) - rc13*OPS_ACC(u1_B0, -1,0)
      - rc17*OPS_ACC(u1_B0, 2,0)
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*OPS_ACC(u1_B0, 0,0) -
      4*OPS_ACC(u1_B0, -1,0) + 3*OPS_ACC(u1_B0, -2,0) + (rc13)*OPS_ACC(u1_B0, -4,0) - rc12*OPS_ACC(u1_B0, -3,0)
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc15)*OPS_ACC(u1_B0, 0,0) + (rc13)*OPS_ACC(u1_B0, 1,0) +
      (rc17)*OPS_ACC(u1_B0, -2,0) - rc14*OPS_ACC(u1_B0, -1,0) - rc16*OPS_ACC(u1_B0, -3,0)
)
: (

      -rc18*OPS_ACC(u1_B0, -1,0) + (rc18)*OPS_ACC(u1_B0, 1,0) - rc16*OPS_ACC(u1_B0, 2,0) +
      (rc16)*OPS_ACC(u1_B0, -2,0)
)))));


    }
  }
}
