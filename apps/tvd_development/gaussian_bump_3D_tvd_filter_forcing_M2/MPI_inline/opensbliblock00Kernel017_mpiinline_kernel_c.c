//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel017;
int ydim0_opensbliblock00Kernel017;
int xdim1_opensbliblock00Kernel017;
int ydim1_opensbliblock00Kernel017;


//user function



void opensbliblock00Kernel017_c_wrapper(
  double * restrict u1_B0_p,
  double * restrict wk9_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel017*1 + n_z * xdim0_opensbliblock00Kernel017 * ydim0_opensbliblock00Kernel017*1, xdim0_opensbliblock00Kernel017, ydim0_opensbliblock00Kernel017};
        ptr_double wk9_B0 = { wk9_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel017*1 + n_z * xdim1_opensbliblock00Kernel017 * ydim1_opensbliblock00Kernel017*1, xdim1_opensbliblock00Kernel017, ydim1_opensbliblock00Kernel017};
        
    OPS_ACC(wk9_B0, 0,0,0) = (-(2.0/3.0)*OPS_ACC(u1_B0, 0,0,-1) - (1.0/12.0)*OPS_ACC(u1_B0, 0,0,2) + ((1.0/12.0))*OPS_ACC(u1_B0, 0,0,-2) +
      ((2.0/3.0))*OPS_ACC(u1_B0, 0,0,1))*invDelta2block0;


      }
    }
  }
}
