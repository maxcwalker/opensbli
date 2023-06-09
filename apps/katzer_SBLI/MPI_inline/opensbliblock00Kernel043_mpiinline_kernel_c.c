//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel043;
int xdim1_opensbliblock00Kernel043;


//user function



void opensbliblock00Kernel043_c_wrapper(
  double * restrict D11_B0_p,
  double * restrict detJ_B0_p,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel043*1, xdim0_opensbliblock00Kernel043};
      ptr_double detJ_B0 = { detJ_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel043*1, xdim1_opensbliblock00Kernel043};
      
   OPS_ACC(D11_B0, -1,0) = OPS_ACC(D11_B0, 1,0);

   OPS_ACC(detJ_B0, -1,0) = OPS_ACC(detJ_B0, 1,0);

   OPS_ACC(D11_B0, -2,0) = OPS_ACC(D11_B0, 2,0);

   OPS_ACC(detJ_B0, -2,0) = OPS_ACC(detJ_B0, 2,0);

   OPS_ACC(D11_B0, -3,0) = OPS_ACC(D11_B0, 3,0);

   OPS_ACC(detJ_B0, -3,0) = OPS_ACC(detJ_B0, 3,0);


    }
  }
}
