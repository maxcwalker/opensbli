//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel016;
int ydim0_opensbliblock00Kernel016;
int xdim1_opensbliblock00Kernel016;
int ydim1_opensbliblock00Kernel016;
int xdim2_opensbliblock00Kernel016;
int ydim2_opensbliblock00Kernel016;


//user function



void opensbliblock00Kernel016_c_wrapper(
  double * restrict p_B0_p,
  double * restrict rho_B0_p,
  double * restrict a_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double p_B0 = { p_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel016*1 + n_z * xdim0_opensbliblock00Kernel016 * ydim0_opensbliblock00Kernel016*1, xdim0_opensbliblock00Kernel016, ydim0_opensbliblock00Kernel016};
        const ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel016*1 + n_z * xdim1_opensbliblock00Kernel016 * ydim1_opensbliblock00Kernel016*1, xdim1_opensbliblock00Kernel016, ydim1_opensbliblock00Kernel016};
        ptr_double a_B0 = { a_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel016*1 + n_z * xdim2_opensbliblock00Kernel016 * ydim2_opensbliblock00Kernel016*1, xdim2_opensbliblock00Kernel016, ydim2_opensbliblock00Kernel016};
        
   OPS_ACC(a_B0, 0,0,0) = sqrt(gama*OPS_ACC(p_B0, 0,0,0)/OPS_ACC(rho_B0, 0,0,0));


      }
    }
  }
}
