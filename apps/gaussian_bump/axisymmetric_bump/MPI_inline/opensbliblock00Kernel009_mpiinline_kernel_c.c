//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel009;
int ydim0_opensbliblock00Kernel009;
int xdim1_opensbliblock00Kernel009;
int ydim1_opensbliblock00Kernel009;
int xdim2_opensbliblock00Kernel009;
int ydim2_opensbliblock00Kernel009;


//user function



void opensbliblock00Kernel009_c_wrapper(
  double * restrict rho_B0_p,
  double * restrict rhou2_B0_p,
  double * restrict u2_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel009*1 + n_z * xdim0_opensbliblock00Kernel009 * ydim0_opensbliblock00Kernel009*1, xdim0_opensbliblock00Kernel009, ydim0_opensbliblock00Kernel009};
        const ptr_double rhou2_B0 = { rhou2_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel009*1 + n_z * xdim1_opensbliblock00Kernel009 * ydim1_opensbliblock00Kernel009*1, xdim1_opensbliblock00Kernel009, ydim1_opensbliblock00Kernel009};
        ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel009*1 + n_z * xdim2_opensbliblock00Kernel009 * ydim2_opensbliblock00Kernel009*1, xdim2_opensbliblock00Kernel009, ydim2_opensbliblock00Kernel009};
        
   OPS_ACC(u2_B0, 0,0,0) = OPS_ACC(rhou2_B0, 0,0,0)/OPS_ACC(rho_B0, 0,0,0);


      }
    }
  }
}
