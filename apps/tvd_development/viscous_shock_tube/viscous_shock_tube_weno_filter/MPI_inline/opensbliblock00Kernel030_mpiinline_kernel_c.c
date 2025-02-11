//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel030;
int xdim1_opensbliblock00Kernel030;
int xdim2_opensbliblock00Kernel030;
int xdim3_opensbliblock00Kernel030;


//user function



void opensbliblock00Kernel030_c_wrapper(
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict rhou1_B0_p,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel030*1, xdim0_opensbliblock00Kernel030};
      ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel030*1, xdim1_opensbliblock00Kernel030};
      ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel030*1, xdim2_opensbliblock00Kernel030};
      ptr_double rhou1_B0 = { rhou1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel030*1, xdim3_opensbliblock00Kernel030};
      
   OPS_ACC(rho_B0, 1,0) = OPS_ACC(rho_B0, -1,0);

   OPS_ACC(rho_B0, 2,0) = OPS_ACC(rho_B0, -2,0);

   OPS_ACC(rho_B0, 3,0) = OPS_ACC(rho_B0, -3,0);

   OPS_ACC(rho_B0, 4,0) = OPS_ACC(rho_B0, -4,0);

   OPS_ACC(rhou0_B0, 0,0) = 0;

   OPS_ACC(rhou1_B0, 0,0) = 0;

   OPS_ACC(rhou0_B0, 1,0) = -OPS_ACC(rhou0_B0, -1,0);

   OPS_ACC(rhou1_B0, 1,0) = -OPS_ACC(rhou1_B0, -1,0);

   OPS_ACC(rhou0_B0, 2,0) = -OPS_ACC(rhou0_B0, -2,0);

   OPS_ACC(rhou1_B0, 2,0) = -OPS_ACC(rhou1_B0, -2,0);

   OPS_ACC(rhou0_B0, 3,0) = -OPS_ACC(rhou0_B0, -3,0);

   OPS_ACC(rhou1_B0, 3,0) = -OPS_ACC(rhou1_B0, -3,0);

   OPS_ACC(rhou0_B0, 4,0) = -OPS_ACC(rhou0_B0, -4,0);

   OPS_ACC(rhou1_B0, 4,0) = -OPS_ACC(rhou1_B0, -4,0);

    OPS_ACC(rhoE_B0, 0,0) = (-(9.0/11.0)*(-1 + gama)*(-(((1.0/2.0))*(OPS_ACC(rhou0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0)) +
      ((1.0/2.0))*(OPS_ACC(rhou1_B0, -2,0)*OPS_ACC(rhou1_B0, -2,0)))/OPS_ACC(rho_B0, -2,0) + OPS_ACC(rhoE_B0, -2,0))*gama/(inv2Minf*OPS_ACC(rho_B0, -2,0)) +
      ((2.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(OPS_ACC(rhou0_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0)) +
      ((1.0/2.0))*(OPS_ACC(rhou1_B0, -3,0)*OPS_ACC(rhou1_B0, -3,0)))/OPS_ACC(rho_B0, -3,0) + OPS_ACC(rhoE_B0, -3,0))*gama/(inv2Minf*OPS_ACC(rho_B0, -3,0)) +
      ((18.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(OPS_ACC(rhou0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0)) +
      ((1.0/2.0))*(OPS_ACC(rhou1_B0, -1,0)*OPS_ACC(rhou1_B0, -1,0)))/OPS_ACC(rho_B0, -1,0) +
      OPS_ACC(rhoE_B0, -1,0))*gama/(inv2Minf*OPS_ACC(rho_B0, -1,0)))*invgama*inv2Minf*inv_gamma_m1*OPS_ACC(rho_B0, 0,0);

   OPS_ACC(rhoE_B0, 1,0) = OPS_ACC(rhoE_B0, -1,0);

   OPS_ACC(rhoE_B0, 2,0) = OPS_ACC(rhoE_B0, -2,0);

   OPS_ACC(rhoE_B0, 3,0) = OPS_ACC(rhoE_B0, -3,0);

   OPS_ACC(rhoE_B0, 4,0) = OPS_ACC(rhoE_B0, -4,0);


    }
  }
}
