//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel032;
int xdim1_opensbliblock00Kernel032;


//user function



void opensbliblock00Kernel032_c_wrapper(
  double * restrict u1_B0_p,
  double * restrict wk4_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel032*1, xdim0_opensbliblock00Kernel032};
      ptr_double wk4_B0 = { wk4_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel032*1, xdim1_opensbliblock00Kernel032};
      
    OPS_ACC(wk4_B0, 0,0) = inv_1*((idx[0] == 0) ? (
   -rc31*OPS_ACC(u1_B0, 3,0) + (rc27)*OPS_ACC(u1_B0, 4,0) +
      (rc32)*OPS_ACC(u1_B0, 2,0) - rc29*OPS_ACC(u1_B0, 1,0) + (rc30)*OPS_ACC(u1_B0, 0,0)
)
: ((idx[0] == 1) ? (

      -rc8*OPS_ACC(u1_B0, 3,0) + (rc18)*OPS_ACC(u1_B0, 2,0) + (rc10)*OPS_ACC(u1_B0, 1,0) - rc13*OPS_ACC(u1_B0, 0,0)
      + (rc27)*OPS_ACC(u1_B0, -1,0)
)
: ((idx[0] == block0np0 - 1) ? (
   (rc30)*OPS_ACC(u1_B0, 0,0) -
      rc29*OPS_ACC(u1_B0, -1,0) + (rc32)*OPS_ACC(u1_B0, -2,0) - rc31*OPS_ACC(u1_B0, -3,0) +
      (rc27)*OPS_ACC(u1_B0, -4,0)
)
: ((idx[0] == block0np0 - 2) ? (
   (rc27)*OPS_ACC(u1_B0, 1,0) -
      rc13*OPS_ACC(u1_B0, 0,0) + (rc10)*OPS_ACC(u1_B0, -1,0) + (rc18)*OPS_ACC(u1_B0, -2,0) -
      rc8*OPS_ACC(u1_B0, -3,0)
)
: (
   -rc8*OPS_ACC(u1_B0, 2,0) + (rc33)*OPS_ACC(u1_B0, 1,0) -
      rc34*OPS_ACC(u1_B0, 0,0) - rc8*OPS_ACC(u1_B0, -2,0) + (rc33)*OPS_ACC(u1_B0, -1,0)
)))));


    }
  }
}
