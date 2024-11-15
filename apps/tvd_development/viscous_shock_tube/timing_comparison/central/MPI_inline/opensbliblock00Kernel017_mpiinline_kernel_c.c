//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel017;
int xdim1_opensbliblock00Kernel017;
int xdim2_opensbliblock00Kernel017;
int xdim3_opensbliblock00Kernel017;
int xdim4_opensbliblock00Kernel017;
int xdim5_opensbliblock00Kernel017;
int xdim6_opensbliblock00Kernel017;
int xdim7_opensbliblock00Kernel017;
int xdim8_opensbliblock00Kernel017;
int xdim9_opensbliblock00Kernel017;
int xdim10_opensbliblock00Kernel017;
int xdim11_opensbliblock00Kernel017;
int xdim12_opensbliblock00Kernel017;
int xdim13_opensbliblock00Kernel017;
int xdim14_opensbliblock00Kernel017;


//user function



void opensbliblock00Kernel017_c_wrapper(
  double * restrict H_B0_p,
  double * restrict p_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict rhou1_B0_p,
  double * restrict u0_B0_p,
  double * restrict u1_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk3_B0_p,
  double * restrict wk4_B0_p,
  double * restrict Residual0_B0_p,
  double * restrict Residual1_B0_p,
  double * restrict Residual2_B0_p,
  double * restrict Residual3_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double H_B0 = { H_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel017*1, xdim0_opensbliblock00Kernel017};
      const ptr_double p_B0 = { p_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel017*1, xdim1_opensbliblock00Kernel017};
      const ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel017*1, xdim2_opensbliblock00Kernel017};
      const ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel017*1, xdim3_opensbliblock00Kernel017};
      const ptr_double rhou1_B0 = { rhou1_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel017*1, xdim4_opensbliblock00Kernel017};
      const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel017*1, xdim5_opensbliblock00Kernel017};
      const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel017*1, xdim6_opensbliblock00Kernel017};
      const ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel017*1, xdim7_opensbliblock00Kernel017};
      const ptr_double wk1_B0 = { wk1_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel017*1, xdim8_opensbliblock00Kernel017};
      const ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel017*1, xdim9_opensbliblock00Kernel017};
      const ptr_double wk4_B0 = { wk4_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel017*1, xdim10_opensbliblock00Kernel017};
      ptr_double Residual0_B0 = { Residual0_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel017*1, xdim11_opensbliblock00Kernel017};
      ptr_double Residual1_B0 = { Residual1_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel017*1, xdim12_opensbliblock00Kernel017};
      ptr_double Residual2_B0 = { Residual2_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel017*1, xdim13_opensbliblock00Kernel017};
      ptr_double Residual3_B0 = { Residual3_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel017*1, xdim14_opensbliblock00Kernel017};
      
   double d1_H_dx = 0.0;
   double d1_H_dy = 0.0;
   double d1_Hrho_dx = 0.0;
   double d1_Hrho_dy = 0.0;
   double d1_Hrhou0_dx = 0.0;
   double d1_Hrhou1_dy = 0.0;
   double d1_Hu0_dx = 0.0;
   double d1_Hu1_dy = 0.0;
   double d1_p_dx = 0.0;
   double d1_p_dy = 0.0;
   double d1_rho_dx = 0.0;
   double d1_rho_dy = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0_dy = 0.0;
   double d1_rhou0u0_dx = 0.0;
   double d1_rhou0u1_dx = 0.0;
   double d1_rhou1_dx = 0.0;
   double d1_rhou1_dy = 0.0;
   double d1_rhou1u0_dy = 0.0;
   double d1_rhou1u1_dy = 0.0;
   double d1_u0u0_dx = 0.0;
   double d1_u0u1_dx = 0.0;
   double d1_u0u1_dy = 0.0;
   double d1_u1u1_dy = 0.0;
   if (idx[0] == 0){

       d1_H_dx = (-3*OPS_ACC(H_B0, 2,0) + 4*OPS_ACC(H_B0, 1,0) - (25.0/12.0)*OPS_ACC(H_B0, 0,0) - (1.0/4.0)*OPS_ACC(H_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(H_B0, 3,0))*invDelta0block0;

       d1_Hrho_dx = (-3*OPS_ACC(H_B0, 2,0)*OPS_ACC(rho_B0, 2,0) + 4*OPS_ACC(H_B0, 1,0)*OPS_ACC(rho_B0, 1,0) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 4,0)*OPS_ACC(rho_B0, 4,0) + ((4.0/3.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(rho_B0, 3,0))*invDelta0block0;

       d1_Hrhou0_dx = (-3*OPS_ACC(H_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(H_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 4,0)*OPS_ACC(rhou0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_Hu0_dx = (-3*OPS_ACC(H_B0, 2,0)*OPS_ACC(u0_B0, 2,0) + 4*OPS_ACC(H_B0, 1,0)*OPS_ACC(u0_B0, 1,0) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u0_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 4,0)*OPS_ACC(u0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(u0_B0, 3,0))*invDelta0block0;

       d1_p_dx = (-3*OPS_ACC(p_B0, 2,0) + 4*OPS_ACC(p_B0, 1,0) - (25.0/12.0)*OPS_ACC(p_B0, 0,0) - (1.0/4.0)*OPS_ACC(p_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(p_B0, 3,0))*invDelta0block0;

       d1_rho_dx = (-3*OPS_ACC(rho_B0, 2,0) + 4*OPS_ACC(rho_B0, 1,0) - (25.0/12.0)*OPS_ACC(rho_B0, 0,0) - (1.0/4.0)*OPS_ACC(rho_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(rho_B0, 3,0))*invDelta0block0;

       d1_rhou0_dx = (-3*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou0_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_rhou0u0_dx = (-3*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u0_B0, 4,0)*OPS_ACC(rhou0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_rhou0u1_dx = (-3*OPS_ACC(u1_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(u1_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u1_B0, 4,0)*OPS_ACC(rhou0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u1_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_rhou1_dx = (-3*OPS_ACC(rhou1_B0, 2,0) + 4*OPS_ACC(rhou1_B0, 1,0) - (25.0/12.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou1_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(rhou1_B0, 3,0))*invDelta0block0;

       d1_u0u0_dx = (-3*(OPS_ACC(u0_B0, 2,0)*OPS_ACC(u0_B0, 2,0)) + 4*(OPS_ACC(u0_B0, 1,0)*OPS_ACC(u0_B0, 1,0)) - (25.0/12.0)*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0)) -
            (1.0/4.0)*(OPS_ACC(u0_B0, 4,0)*OPS_ACC(u0_B0, 4,0)) + ((4.0/3.0))*(OPS_ACC(u0_B0, 3,0)*OPS_ACC(u0_B0, 3,0)))*invDelta0block0;

       d1_u0u1_dx = (-3*OPS_ACC(u0_B0, 2,0)*OPS_ACC(u1_B0, 2,0) + 4*OPS_ACC(u0_B0, 1,0)*OPS_ACC(u1_B0, 1,0) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, 4,0)*OPS_ACC(u1_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(u1_B0, 3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_H_dx = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 2,0) - (1.0/4.0)*OPS_ACC(H_B0, -1,0) + ((1.0/12.0))*OPS_ACC(H_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(H_B0, 1,0))*invDelta0block0;

       d1_Hrho_dx = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(rho_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rho_B0, -1,0) + ((1.0/12.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(rho_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_Hrhou0_dx = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + ((1.0/12.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_Hu0_dx = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u0_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(u0_B0, 2,0) - (1.0/4.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(u0_B0, -1,0)
            + ((1.0/12.0))*OPS_ACC(H_B0, 3,0)*OPS_ACC(u0_B0, 3,0) + ((3.0/2.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(u0_B0, 1,0))*invDelta0block0;

       d1_p_dx = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 2,0) - (1.0/4.0)*OPS_ACC(p_B0, -1,0) + ((1.0/12.0))*OPS_ACC(p_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(p_B0, 1,0))*invDelta0block0;

       d1_rho_dx = (-(5.0/6.0)*OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(rho_B0, 2,0) - (1.0/4.0)*OPS_ACC(rho_B0, -1,0) + ((1.0/12.0))*OPS_ACC(rho_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_rhou0_dx = (-(5.0/6.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou0_B0, 2,0) - (1.0/4.0)*OPS_ACC(rhou0_B0, -1,0) +
            ((1.0/12.0))*OPS_ACC(rhou0_B0, 3,0) + ((3.0/2.0))*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u0_dx = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u1_dx = (-(5.0/6.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(u1_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u1_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u1_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u1_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou1_dx = (-(5.0/6.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou1_B0, 2,0) - (1.0/4.0)*OPS_ACC(rhou1_B0, -1,0) +
            ((1.0/12.0))*OPS_ACC(rhou1_B0, 3,0) + ((3.0/2.0))*OPS_ACC(rhou1_B0, 1,0))*invDelta0block0;

       d1_u0u0_dx = (-(5.0/6.0)*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0)) - (1.0/2.0)*(OPS_ACC(u0_B0, 2,0)*OPS_ACC(u0_B0, 2,0)) -
            (1.0/4.0)*(OPS_ACC(u0_B0, -1,0)*OPS_ACC(u0_B0, -1,0)) + ((1.0/12.0))*(OPS_ACC(u0_B0, 3,0)*OPS_ACC(u0_B0, 3,0)) +
            ((3.0/2.0))*(OPS_ACC(u0_B0, 1,0)*OPS_ACC(u0_B0, 1,0)))*invDelta0block0;

       d1_u0u1_dx = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(u1_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(u1_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(u1_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(u1_B0, 1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_H_dx = (-4*OPS_ACC(H_B0, -1,0) + 3*OPS_ACC(H_B0, -2,0) - (4.0/3.0)*OPS_ACC(H_B0, -3,0) + ((1.0/4.0))*OPS_ACC(H_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(H_B0, 0,0))*invDelta0block0;

       d1_Hrho_dx = (-4*OPS_ACC(H_B0, -1,0)*OPS_ACC(rho_B0, -1,0) + 3*OPS_ACC(H_B0, -2,0)*OPS_ACC(rho_B0, -2,0) - (4.0/3.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(rho_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(H_B0, -4,0)*OPS_ACC(rho_B0, -4,0) + ((25.0/12.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_Hrhou0_dx = (-4*OPS_ACC(H_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(H_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) - (4.0/3.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0)
            + ((1.0/4.0))*OPS_ACC(H_B0, -4,0)*OPS_ACC(rhou0_B0, -4,0) + ((25.0/12.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_Hu0_dx = (-4*OPS_ACC(H_B0, -1,0)*OPS_ACC(u0_B0, -1,0) + 3*OPS_ACC(H_B0, -2,0)*OPS_ACC(u0_B0, -2,0) - (4.0/3.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(u0_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(H_B0, -4,0)*OPS_ACC(u0_B0, -4,0) + ((25.0/12.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*invDelta0block0;

       d1_p_dx = (-4*OPS_ACC(p_B0, -1,0) + 3*OPS_ACC(p_B0, -2,0) - (4.0/3.0)*OPS_ACC(p_B0, -3,0) + ((1.0/4.0))*OPS_ACC(p_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(p_B0, 0,0))*invDelta0block0;

       d1_rho_dx = (-4*OPS_ACC(rho_B0, -1,0) + 3*OPS_ACC(rho_B0, -2,0) - (4.0/3.0)*OPS_ACC(rho_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rho_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_rhou0_dx = (-4*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(rhou0_B0, -2,0) - (4.0/3.0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rhou0_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u0_dx = (-4*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) -
            (4.0/3.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, -4,0)*OPS_ACC(rhou0_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u1_dx = (-4*OPS_ACC(u1_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(u1_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) -
            (4.0/3.0)*OPS_ACC(u1_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u1_B0, -4,0)*OPS_ACC(rhou0_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou1_dx = (-4*OPS_ACC(rhou1_B0, -1,0) + 3*OPS_ACC(rhou1_B0, -2,0) - (4.0/3.0)*OPS_ACC(rhou1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rhou1_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(rhou1_B0, 0,0))*invDelta0block0;

       d1_u0u0_dx = (-4*(OPS_ACC(u0_B0, -1,0)*OPS_ACC(u0_B0, -1,0)) + 3*(OPS_ACC(u0_B0, -2,0)*OPS_ACC(u0_B0, -2,0)) - (4.0/3.0)*(OPS_ACC(u0_B0, -3,0)*OPS_ACC(u0_B0, -3,0)) +
            ((1.0/4.0))*(OPS_ACC(u0_B0, -4,0)*OPS_ACC(u0_B0, -4,0)) + ((25.0/12.0))*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0)))*invDelta0block0;

       d1_u0u1_dx = (-4*OPS_ACC(u0_B0, -1,0)*OPS_ACC(u1_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0)*OPS_ACC(u1_B0, -2,0) - (4.0/3.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(u1_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(u0_B0, -4,0)*OPS_ACC(u1_B0, -4,0) + ((25.0/12.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_H_dx = (((1.0/2.0))*OPS_ACC(H_B0, -2,0) - (3.0/2.0)*OPS_ACC(H_B0, -1,0) - (1.0/12.0)*OPS_ACC(H_B0, -3,0) + ((1.0/4.0))*OPS_ACC(H_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(H_B0, 0,0))*invDelta0block0;

       d1_Hrho_dx = (((1.0/2.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(rho_B0, -2,0) - (3.0/2.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rho_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(rho_B0, -3,0) + ((1.0/4.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rho_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_Hrhou0_dx = (((1.0/2.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_Hu0_dx = (((1.0/2.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(u0_B0, -2,0) - (3.0/2.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(u0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(H_B0, -3,0)*OPS_ACC(u0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(u0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*invDelta0block0;

       d1_p_dx = (((1.0/2.0))*OPS_ACC(p_B0, -2,0) - (3.0/2.0)*OPS_ACC(p_B0, -1,0) - (1.0/12.0)*OPS_ACC(p_B0, -3,0) + ((1.0/4.0))*OPS_ACC(p_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(p_B0, 0,0))*invDelta0block0;

       d1_rho_dx = (((1.0/2.0))*OPS_ACC(rho_B0, -2,0) - (3.0/2.0)*OPS_ACC(rho_B0, -1,0) - (1.0/12.0)*OPS_ACC(rho_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(rho_B0, 1,0) + ((5.0/6.0))*OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_rhou0_dx = (((1.0/2.0))*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou0_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(rhou0_B0, 1,0) + ((5.0/6.0))*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u0_dx = (((1.0/2.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u1_dx = (((1.0/2.0))*OPS_ACC(u1_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(u1_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u1_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u1_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou1_dx = (((1.0/2.0))*OPS_ACC(rhou1_B0, -2,0) - (3.0/2.0)*OPS_ACC(rhou1_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou1_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(rhou1_B0, 1,0) + ((5.0/6.0))*OPS_ACC(rhou1_B0, 0,0))*invDelta0block0;

       d1_u0u0_dx = (((1.0/2.0))*(OPS_ACC(u0_B0, -2,0)*OPS_ACC(u0_B0, -2,0)) - (3.0/2.0)*(OPS_ACC(u0_B0, -1,0)*OPS_ACC(u0_B0, -1,0)) -
            (1.0/12.0)*(OPS_ACC(u0_B0, -3,0)*OPS_ACC(u0_B0, -3,0)) + ((1.0/4.0))*(OPS_ACC(u0_B0, 1,0)*OPS_ACC(u0_B0, 1,0)) +
            ((5.0/6.0))*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0)))*invDelta0block0;

       d1_u0u1_dx = (((1.0/2.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(u1_B0, -2,0) - (3.0/2.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(u1_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(u1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(u1_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0))*invDelta0block0;

   }

   else{

       d1_H_dx = (-(2.0/3.0)*OPS_ACC(H_B0, -1,0) - (1.0/12.0)*OPS_ACC(H_B0, 2,0) + ((1.0/12.0))*OPS_ACC(H_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(H_B0, 1,0))*invDelta0block0;

       d1_Hrho_dx = (-(2.0/3.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rho_B0, -1,0) - (1.0/12.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(rho_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(rho_B0, -2,0) + ((2.0/3.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_Hrhou0_dx = (-(2.0/3.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_Hu0_dx = (-(2.0/3.0)*OPS_ACC(H_B0, -1,0)*OPS_ACC(u0_B0, -1,0) - (1.0/12.0)*OPS_ACC(H_B0, 2,0)*OPS_ACC(u0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(H_B0, -2,0)*OPS_ACC(u0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(H_B0, 1,0)*OPS_ACC(u0_B0, 1,0))*invDelta0block0;

       d1_p_dx = (-(2.0/3.0)*OPS_ACC(p_B0, -1,0) - (1.0/12.0)*OPS_ACC(p_B0, 2,0) + ((1.0/12.0))*OPS_ACC(p_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(p_B0, 1,0))*invDelta0block0;

       d1_rho_dx = (-(2.0/3.0)*OPS_ACC(rho_B0, -1,0) - (1.0/12.0)*OPS_ACC(rho_B0, 2,0) + ((1.0/12.0))*OPS_ACC(rho_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_rhou0_dx = (-(2.0/3.0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou0_B0, 2,0) + ((1.0/12.0))*OPS_ACC(rhou0_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u0_dx = (-(2.0/3.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u1_dx = (-(2.0/3.0)*OPS_ACC(u1_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(u1_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u1_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u1_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou1_dx = (-(2.0/3.0)*OPS_ACC(rhou1_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou1_B0, 2,0) + ((1.0/12.0))*OPS_ACC(rhou1_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(rhou1_B0, 1,0))*invDelta0block0;

       d1_u0u0_dx = (-(2.0/3.0)*(OPS_ACC(u0_B0, -1,0)*OPS_ACC(u0_B0, -1,0)) - (1.0/12.0)*(OPS_ACC(u0_B0, 2,0)*OPS_ACC(u0_B0, 2,0)) +
            ((1.0/12.0))*(OPS_ACC(u0_B0, -2,0)*OPS_ACC(u0_B0, -2,0)) + ((2.0/3.0))*(OPS_ACC(u0_B0, 1,0)*OPS_ACC(u0_B0, 1,0)))*invDelta0block0;

       d1_u0u1_dx = (-(2.0/3.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(u1_B0, -1,0) - (1.0/12.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(u1_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(u1_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(u1_B0, 1,0))*invDelta0block0;

   }

   if (idx[1] == 0){

       d1_H_dy = (-3*OPS_ACC(H_B0, 0,2) + 4*OPS_ACC(H_B0, 0,1) - (25.0/12.0)*OPS_ACC(H_B0, 0,0) - (1.0/4.0)*OPS_ACC(H_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(H_B0, 0,3))*invDelta1block0;

       d1_Hrho_dy = (-3*OPS_ACC(H_B0, 0,2)*OPS_ACC(rho_B0, 0,2) + 4*OPS_ACC(H_B0, 0,1)*OPS_ACC(rho_B0, 0,1) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 0,4)*OPS_ACC(rho_B0, 0,4) + ((4.0/3.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(rho_B0, 0,3))*invDelta1block0;

       d1_Hrhou1_dy = (-3*OPS_ACC(H_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(H_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 0,4)*OPS_ACC(rhou1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

       d1_Hu1_dy = (-3*OPS_ACC(H_B0, 0,2)*OPS_ACC(u1_B0, 0,2) + 4*OPS_ACC(H_B0, 0,1)*OPS_ACC(u1_B0, 0,1) - (25.0/12.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u1_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(H_B0, 0,4)*OPS_ACC(u1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(u1_B0, 0,3))*invDelta1block0;

       d1_p_dy = (-3*OPS_ACC(p_B0, 0,2) + 4*OPS_ACC(p_B0, 0,1) - (25.0/12.0)*OPS_ACC(p_B0, 0,0) - (1.0/4.0)*OPS_ACC(p_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(p_B0, 0,3))*invDelta1block0;

       d1_rho_dy = (-3*OPS_ACC(rho_B0, 0,2) + 4*OPS_ACC(rho_B0, 0,1) - (25.0/12.0)*OPS_ACC(rho_B0, 0,0) - (1.0/4.0)*OPS_ACC(rho_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(rho_B0, 0,3))*invDelta1block0;

       d1_rhou0_dy = (-3*OPS_ACC(rhou0_B0, 0,2) + 4*OPS_ACC(rhou0_B0, 0,1) - (25.0/12.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou0_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(rhou0_B0, 0,3))*invDelta1block0;

       d1_rhou1_dy = (-3*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou1_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

       d1_rhou1u0_dy = (-3*OPS_ACC(u0_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(u0_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u0_B0, 0,4)*OPS_ACC(rhou1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u0_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

       d1_rhou1u1_dy = (-3*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u1_B0, 0,4)*OPS_ACC(rhou1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

       d1_u0u1_dy = (-3*OPS_ACC(u0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) + 4*OPS_ACC(u0_B0, 0,1)*OPS_ACC(u1_B0, 0,1) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, 0,4)*OPS_ACC(u1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u0_B0, 0,3)*OPS_ACC(u1_B0, 0,3))*invDelta1block0;

       d1_u1u1_dy = (-3*(OPS_ACC(u1_B0, 0,2)*OPS_ACC(u1_B0, 0,2)) + 4*(OPS_ACC(u1_B0, 0,1)*OPS_ACC(u1_B0, 0,1)) - (25.0/12.0)*(OPS_ACC(u1_B0, 0,0)*OPS_ACC(u1_B0, 0,0)) -
            (1.0/4.0)*(OPS_ACC(u1_B0, 0,4)*OPS_ACC(u1_B0, 0,4)) + ((4.0/3.0))*(OPS_ACC(u1_B0, 0,3)*OPS_ACC(u1_B0, 0,3)))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_H_dy = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 0,2) - (1.0/4.0)*OPS_ACC(H_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(H_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(H_B0, 0,1))*invDelta1block0;

       d1_Hrho_dy = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(rho_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(rho_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(rho_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_Hrhou1_dy = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_Hu1_dy = (-(5.0/6.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u1_B0, 0,0) - (1.0/2.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(u1_B0, 0,2) - (1.0/4.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1)
            + ((1.0/12.0))*OPS_ACC(H_B0, 0,3)*OPS_ACC(u1_B0, 0,3) + ((3.0/2.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_p_dy = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 0,2) - (1.0/4.0)*OPS_ACC(p_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(p_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(p_B0, 0,1))*invDelta1block0;

       d1_rho_dy = (-(5.0/6.0)*OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(rho_B0, 0,2) - (1.0/4.0)*OPS_ACC(rho_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(rho_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_rhou0_dy = (-(5.0/6.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou0_B0, 0,2) - (1.0/4.0)*OPS_ACC(rhou0_B0, 0,-1) +
            ((1.0/12.0))*OPS_ACC(rhou0_B0, 0,3) + ((3.0/2.0))*OPS_ACC(rhou0_B0, 0,1))*invDelta1block0;

       d1_rhou1_dy = (-(5.0/6.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou1_B0, 0,2) - (1.0/4.0)*OPS_ACC(rhou1_B0, 0,-1) +
            ((1.0/12.0))*OPS_ACC(rhou1_B0, 0,3) + ((3.0/2.0))*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u0_dy = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u0_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u0_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u1_dy = (-(5.0/6.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_u0u1_dy = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u0_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_u1u1_dy = (-(5.0/6.0)*(OPS_ACC(u1_B0, 0,0)*OPS_ACC(u1_B0, 0,0)) - (1.0/2.0)*(OPS_ACC(u1_B0, 0,2)*OPS_ACC(u1_B0, 0,2)) -
            (1.0/4.0)*(OPS_ACC(u1_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1)) + ((1.0/12.0))*(OPS_ACC(u1_B0, 0,3)*OPS_ACC(u1_B0, 0,3)) +
            ((3.0/2.0))*(OPS_ACC(u1_B0, 0,1)*OPS_ACC(u1_B0, 0,1)))*invDelta1block0;

   }

   else{

       d1_H_dy = (-(2.0/3.0)*OPS_ACC(H_B0, 0,-1) - (1.0/12.0)*OPS_ACC(H_B0, 0,2) + ((1.0/12.0))*OPS_ACC(H_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(H_B0, 0,1))*invDelta1block0;

       d1_Hrho_dy = (-(2.0/3.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(rho_B0, 0,-1) - (1.0/12.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(rho_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(H_B0, 0,-2)*OPS_ACC(rho_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_Hrhou1_dy = (-(2.0/3.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(H_B0, 0,-2)*OPS_ACC(rhou1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_Hu1_dy = (-(2.0/3.0)*OPS_ACC(H_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(H_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(H_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(H_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_p_dy = (-(2.0/3.0)*OPS_ACC(p_B0, 0,-1) - (1.0/12.0)*OPS_ACC(p_B0, 0,2) + ((1.0/12.0))*OPS_ACC(p_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(p_B0, 0,1))*invDelta1block0;

       d1_rho_dy = (-(2.0/3.0)*OPS_ACC(rho_B0, 0,-1) - (1.0/12.0)*OPS_ACC(rho_B0, 0,2) + ((1.0/12.0))*OPS_ACC(rho_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_rhou0_dy = (-(2.0/3.0)*OPS_ACC(rhou0_B0, 0,-1) - (1.0/12.0)*OPS_ACC(rhou0_B0, 0,2) + ((1.0/12.0))*OPS_ACC(rhou0_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(rhou0_B0, 0,1))*invDelta1block0;

       d1_rhou1_dy = (-(2.0/3.0)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(rhou1_B0, 0,2) + ((1.0/12.0))*OPS_ACC(rhou1_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u0_dy = (-(2.0/3.0)*OPS_ACC(u0_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u0_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u0_B0, 0,-2)*OPS_ACC(rhou1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u0_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u1_dy = (-(2.0/3.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u1_B0, 0,-2)*OPS_ACC(rhou1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_u0u1_dy = (-(2.0/3.0)*OPS_ACC(u0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u0_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u0_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_u1u1_dy = (-(2.0/3.0)*(OPS_ACC(u1_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1)) - (1.0/12.0)*(OPS_ACC(u1_B0, 0,2)*OPS_ACC(u1_B0, 0,2)) +
            ((1.0/12.0))*(OPS_ACC(u1_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2)) + ((2.0/3.0))*(OPS_ACC(u1_B0, 0,1)*OPS_ACC(u1_B0, 0,1)))*invDelta1block0;

   }

    OPS_ACC(Residual0_B0, 0,0) = -(1.0/2.0)*d1_rhou0_dx - (1.0/2.0)*d1_rhou1_dy - (1.0/2.0)*(OPS_ACC(wk0_B0, 0,0) +
      OPS_ACC(wk4_B0, 0,0))*OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 0,0)*d1_rho_dx - (1.0/2.0)*OPS_ACC(u1_B0, 0,0)*d1_rho_dy;

    OPS_ACC(Residual1_B0, 0,0) = -d1_p_dx - (1.0/4.0)*d1_rhou0u0_dx - (1.0/4.0)*d1_rhou1u0_dy - (1.0/2.0)*OPS_ACC(u0_B0, 0,0)*d1_rhou0_dx
      - (1.0/2.0)*OPS_ACC(wk0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/4.0)*(OPS_ACC(u0_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*d1_rho_dx -
      (1.0/4.0)*OPS_ACC(u0_B0, 0,0)*d1_rhou1_dy - (1.0/4.0)*OPS_ACC(u1_B0, 0,0)*d1_rhou0_dy - (1.0/4.0)*OPS_ACC(rho_B0, 0,0)*d1_u0u0_dx -
      (1.0/4.0)*OPS_ACC(rho_B0, 0,0)*d1_u0u1_dy - (1.0/4.0)*OPS_ACC(wk3_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/4.0)*OPS_ACC(wk4_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0)*d1_rho_dy;

    OPS_ACC(Residual2_B0, 0,0) = -d1_p_dy - (1.0/4.0)*d1_rhou0u1_dx - (1.0/4.0)*d1_rhou1u1_dy -
      (1.0/4.0)*(OPS_ACC(u1_B0, 0,0)*OPS_ACC(u1_B0, 0,0))*d1_rho_dy - (1.0/4.0)*(OPS_ACC(wk0_B0, 0,0) + OPS_ACC(wk4_B0, 0,0))*OPS_ACC(rhou1_B0, 0,0) -
      (1.0/4.0)*(d1_rhou0_dx + d1_rhou1_dy)*OPS_ACC(u1_B0, 0,0) - (1.0/4.0)*(d1_u0u1_dx + d1_u1u1_dy)*OPS_ACC(rho_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(u0_B0, 0,0)*d1_rhou1_dx - (1.0/4.0)*OPS_ACC(u1_B0, 0,0)*d1_rhou1_dy - (1.0/4.0)*OPS_ACC(wk1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(wk4_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/4.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(u1_B0, 0,0)*d1_rho_dx;

    OPS_ACC(Residual3_B0, 0,0) = -(1.0/4.0)*d1_Hrhou0_dx - (1.0/4.0)*d1_Hrhou1_dy - (1.0/4.0)*(d1_Hu0_dx + d1_Hu1_dy)*OPS_ACC(rho_B0, 0,0)
      - (1.0/4.0)*(d1_rhou0_dx + d1_rhou1_dy)*OPS_ACC(H_B0, 0,0) - (1.0/4.0)*OPS_ACC(u0_B0, 0,0)*d1_Hrho_dx -
      (1.0/4.0)*OPS_ACC(u1_B0, 0,0)*d1_Hrho_dy - (1.0/4.0)*OPS_ACC(rhou0_B0, 0,0)*d1_H_dx - (1.0/4.0)*OPS_ACC(rhou1_B0, 0,0)*d1_H_dy -
      (1.0/4.0)*(OPS_ACC(wk0_B0, 0,0) + OPS_ACC(wk4_B0, 0,0))*OPS_ACC(H_B0, 0,0)*OPS_ACC(rho_B0, 0,0) - (1.0/4.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u0_B0, 0,0)*d1_rho_dx -
      (1.0/4.0)*OPS_ACC(H_B0, 0,0)*OPS_ACC(u1_B0, 0,0)*d1_rho_dy;


    }
  }
}
