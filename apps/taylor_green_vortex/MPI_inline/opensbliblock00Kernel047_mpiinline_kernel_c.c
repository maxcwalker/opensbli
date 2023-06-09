//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel047;
int ydim0_opensbliblock00Kernel047;
int xdim1_opensbliblock00Kernel047;
int ydim1_opensbliblock00Kernel047;


//user function



void opensbliblock00Kernel047_c_wrapper(
  double * restrict wk43_B0_p,
  double * restrict wk35_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double wk43_B0 = { wk43_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel047*1 + n_z * xdim0_opensbliblock00Kernel047 * ydim0_opensbliblock00Kernel047*1, xdim0_opensbliblock00Kernel047, ydim0_opensbliblock00Kernel047};
        ptr_double wk35_B0 = { wk35_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel047*1 + n_z * xdim1_opensbliblock00Kernel047 * ydim1_opensbliblock00Kernel047*1, xdim1_opensbliblock00Kernel047, ydim1_opensbliblock00Kernel047};
        
    OPS_ACC(wk35_B0, 0,0,0) = inv_2*(-rc8*OPS_ACC(wk43_B0, 2,0,0) + (rc7)*OPS_ACC(wk43_B0, 1,0,0) +
      (rc8)*OPS_ACC(wk43_B0, -2,0,0) - rc7*OPS_ACC(wk43_B0, -1,0,0));


      }
    }
  }
}
