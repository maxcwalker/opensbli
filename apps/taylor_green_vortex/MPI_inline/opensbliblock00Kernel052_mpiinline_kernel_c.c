//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel052;
int ydim0_opensbliblock00Kernel052;
int xdim1_opensbliblock00Kernel052;
int ydim1_opensbliblock00Kernel052;


//user function



void opensbliblock00Kernel052_c_wrapper(
  double * restrict u0_B0_p,
  double * restrict wk0_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel052*1 + n_z * xdim0_opensbliblock00Kernel052 * ydim0_opensbliblock00Kernel052*1, xdim0_opensbliblock00Kernel052, ydim0_opensbliblock00Kernel052};
        ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel052*1 + n_z * xdim1_opensbliblock00Kernel052 * ydim1_opensbliblock00Kernel052*1, xdim1_opensbliblock00Kernel052, ydim1_opensbliblock00Kernel052};
        
    OPS_ACC(wk0_B0, 0,0,0) = -rc8*inv_3*(OPS_ACC(u0_B0, 0,2,0) + OPS_ACC(u0_B0, 0,-2,0) - 16*OPS_ACC(u0_B0, 0,-1,0)
      - 16*OPS_ACC(u0_B0, 0,1,0) + 30*OPS_ACC(u0_B0, 0,0,0));


      }
    }
  }
}
