//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel021;
int xdim1_opensbliblock00Kernel021;
int xdim2_opensbliblock00Kernel021;
int xdim3_opensbliblock00Kernel021;
int xdim4_opensbliblock00Kernel021;


//user function



void opensbliblock00Kernel021_c_wrapper(
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict u0_B0_p,
  double * restrict u1_B0_p,
  double * restrict p_B0_p,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      const ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel021*1, xdim0_opensbliblock00Kernel021};
      const ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel021*1, xdim1_opensbliblock00Kernel021};
      const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel021*1, xdim2_opensbliblock00Kernel021};
      const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel021*1, xdim3_opensbliblock00Kernel021};
      ptr_double p_B0 = { p_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel021*1, xdim4_opensbliblock00Kernel021};
      
    OPS_ACC(p_B0, 0,0) = (-1 + gama)*(-(1.0/2.0)*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*OPS_ACC(rho_B0, 0,0) -
      (1.0/2.0)*(OPS_ACC(u1_B0, 0,0)*OPS_ACC(u1_B0, 0,0))*OPS_ACC(rho_B0, 0,0) + OPS_ACC(rhoE_B0, 0,0));


    }
  }
}
