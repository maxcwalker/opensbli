//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel073;
int ydim0_opensbliblock00Kernel073;
int xdim1_opensbliblock00Kernel073;
int ydim1_opensbliblock00Kernel073;


//user function



void opensbliblock00Kernel073_c_wrapper(
  double * restrict u2_B0_p,
  double * restrict wk21_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel073*1 + n_z * xdim0_opensbliblock00Kernel073 * ydim0_opensbliblock00Kernel073*1, xdim0_opensbliblock00Kernel073, ydim0_opensbliblock00Kernel073};
        ptr_double wk21_B0 = { wk21_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel073*1 + n_z * xdim1_opensbliblock00Kernel073 * ydim1_opensbliblock00Kernel073*1, xdim1_opensbliblock00Kernel073, ydim1_opensbliblock00Kernel073};
        
    OPS_ACC(wk21_B0, 0,0,0) = (rc8)*inv_5*(16*OPS_ACC(u2_B0, 1,0,0) - 30*OPS_ACC(u2_B0, 0,0,0) +
      16*OPS_ACC(u2_B0, -1,0,0) - OPS_ACC(u2_B0, -2,0,0) - OPS_ACC(u2_B0, 2,0,0));


      }
    }
  }
}
