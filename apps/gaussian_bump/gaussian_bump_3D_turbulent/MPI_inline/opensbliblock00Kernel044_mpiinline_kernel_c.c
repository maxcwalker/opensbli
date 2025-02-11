//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel044;
int ydim0_opensbliblock00Kernel044;
int xdim1_opensbliblock00Kernel044;
int ydim1_opensbliblock00Kernel044;


//user function



void opensbliblock00Kernel044_c_wrapper(
  double * restrict T_B0_p,
  double * restrict wk9_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1, int arg_idx2,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        int idx[] = {arg_idx0+n_x, arg_idx1+n_y, arg_idx2+n_z};
        const ptr_double T_B0 = { T_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel044*1 + n_z * xdim0_opensbliblock00Kernel044 * ydim0_opensbliblock00Kernel044*1, xdim0_opensbliblock00Kernel044, ydim0_opensbliblock00Kernel044};
        ptr_double wk9_B0 = { wk9_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel044*1 + n_z * xdim1_opensbliblock00Kernel044 * ydim1_opensbliblock00Kernel044*1, xdim1_opensbliblock00Kernel044, ydim1_opensbliblock00Kernel044};
        
    OPS_ACC(wk9_B0, 0,0,0) = ((idx[1] == 0) ? (
   inv_0*(-3*OPS_ACC(T_B0, 0,2,0) + (rc14)*OPS_ACC(T_B0, 0,3,0) -
      rc15*OPS_ACC(T_B0, 0,4,0) - rc13*OPS_ACC(T_B0, 0,0,0) + 4*OPS_ACC(T_B0, 0,1,0))
)
: ((idx[1] == 1) ? (

      (rc16)*inv_0*(-6*OPS_ACC(T_B0, 0,2,0) + OPS_ACC(T_B0, 0,3,0) - 10*OPS_ACC(T_B0, 0,0,0) +
      18*OPS_ACC(T_B0, 0,1,0) - 3*OPS_ACC(T_B0, 0,-1,0))
)
: (
   (rc16)*inv_0*(-OPS_ACC(T_B0, 0,2,0) +
      OPS_ACC(T_B0, 0,-2,0) + 8*OPS_ACC(T_B0, 0,1,0) - 8*OPS_ACC(T_B0, 0,-1,0))
)));


      }
    }
  }
}
