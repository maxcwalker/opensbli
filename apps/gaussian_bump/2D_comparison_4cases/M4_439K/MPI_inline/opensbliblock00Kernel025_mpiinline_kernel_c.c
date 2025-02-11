//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel025;
int xdim1_opensbliblock00Kernel025;


//user function



void opensbliblock00Kernel025_c_wrapper(
  double * restrict T_B0_p,
  double * restrict mu_B0_p,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      const ptr_double T_B0 = { T_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel025*1, xdim0_opensbliblock00Kernel025};
      ptr_double mu_B0 = { mu_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel025*1, xdim1_opensbliblock00Kernel025};
      
   OPS_ACC(mu_B0, 0,0) = OPS_ACC(T_B0, 0,0)*sqrt(OPS_ACC(T_B0, 0,0))*(1.0 + SuthT*invRefT)/(SuthT*invRefT + OPS_ACC(T_B0, 0,0));


    }
  }
}
