//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel083;
int xdim1_opensbliblock00Kernel083;


//user function



void opensbliblock00Kernel083_c_wrapper(
  double * restrict D01_B0_p,
  double * restrict wk5_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel083*1, xdim0_opensbliblock00Kernel083};
      ptr_double wk5_B0 = { wk5_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel083*1, xdim1_opensbliblock00Kernel083};
      
    OPS_ACC(wk5_B0, 0,0) = inv_0*((idx[1] == 0) ? (
   -3*OPS_ACC(D01_B0, 0,2) + 4*OPS_ACC(D01_B0, 0,1) -
      rc12*OPS_ACC(D01_B0, 0,0) - rc11*OPS_ACC(D01_B0, 0,4) + (rc13)*OPS_ACC(D01_B0, 0,3)
)
: ((idx[1] == 1) ? (

      -rc7*OPS_ACC(D01_B0, 0,2) + (rc14)*OPS_ACC(D01_B0, 0,1) - rc11*OPS_ACC(D01_B0, 0,-1) -
      rc15*OPS_ACC(D01_B0, 0,0) + (rc16)*OPS_ACC(D01_B0, 0,3)
)
: (
   -rc17*OPS_ACC(D01_B0, 0,-1) +
      (rc17)*OPS_ACC(D01_B0, 0,1) - rc16*OPS_ACC(D01_B0, 0,2) + (rc16)*OPS_ACC(D01_B0, 0,-2)
)));


    }
  }
}
