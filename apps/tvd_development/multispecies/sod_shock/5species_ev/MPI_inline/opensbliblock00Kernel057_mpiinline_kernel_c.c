//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel057;
int xdim1_opensbliblock00Kernel057;
int xdim2_opensbliblock00Kernel057;
int xdim3_opensbliblock00Kernel057;
int xdim4_opensbliblock00Kernel057;
int xdim5_opensbliblock00Kernel057;
int xdim6_opensbliblock00Kernel057;
int xdim7_opensbliblock00Kernel057;


//user function



void opensbliblock00Kernel057_c_wrapper(
  double * restrict rhoE_B0_p,
  double * restrict rhoN_B0_p,
  double * restrict rhoO_B0_p,
  double * restrict rhoev_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict rhoN2_B0_p,
  double * restrict rhoNO_B0_p,
  double * restrict rhoO2_B0_p,
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1};
    ptr_double rhoN_B0 = { rhoN_B0_p + n_x*1};
    ptr_double rhoO_B0 = { rhoO_B0_p + n_x*1};
    ptr_double rhoev_B0 = { rhoev_B0_p + n_x*1};
    ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1};
    ptr_double rhoN2_B0 = { rhoN2_B0_p + n_x*1};
    ptr_double rhoNO_B0 = { rhoNO_B0_p + n_x*1};
    ptr_double rhoO2_B0 = { rhoO2_B0_p + n_x*1};
    
   double T = 0.0;
   double p0 = 0.0;
   double rho = 0.0;
   double rhoN = 0.0;
   double rhoN2 = 0.0;
   double rhoNO = 0.0;
   double rhoO = 0.0;
   double rhoO2 = 0.0;
   double rhoref = 0.0;
   double u0 = 0.0;
   double yN = 0.0;
   double yN2 = 0.0;
   double yNO = 0.0;
   double yO = 0.0;
   double yO2 = 0.0;
   T = 9000;

   u0 = 0.0;

   p0 = 1975837.50000000;

   rhoref = 4658.43254549014/T;

   yO2 = 0.00126100000000000;

   yN2 = 0.487304000000000;

   yO = 0.223284000000000;

   yN = 0.262766000000000;

   yNO = 0.0253860000000000;

   rhoO2 = 0.001261*rhoref;

   rhoN2 = 0.487304*rhoref;

   rhoO = 0.223284*rhoref;

   rhoN = 0.262766*rhoref;

   rhoNO = 0.025386*rhoref;

   OPS_ACC(rhoO2_B0, 0) = rhoO2;

   OPS_ACC(rhoN2_B0, 0) = rhoN2;

   OPS_ACC(rhoO_B0, 0) = rhoO;

   OPS_ACC(rhoN_B0, 0) = rhoN;

   OPS_ACC(rhoNO_B0, 0) = rhoNO;

   OPS_ACC(rhou0_B0, 0) = rhoref*u0;

    OPS_ACC(rhoev_B0, 0) = 8.3143*thetavNO*OPS_ACC(rhoNO_B0, 0)/(-0.03 + 0.03*exp(thetavNO/T)) + 8.3143*thetavO2*OPS_ACC(rhoO2_B0, 0)/(-0.032 +
      0.032*exp(thetavO2/T)) + 8.3143*thetavN2*OPS_ACC(rhoN2_B0, 0)/(-0.028 + 0.028*exp(thetavN2/T));

    OPS_ACC(rhoE_B0, 0) = 0.5*(u0*u0)*rho + 62.5*dhf0O*rhoO + 33.3333333333333*dhf0NO*rhoNO + 71.4285714285714*dhf0N*rhoN +
      (93.75*rhoO + 78.125*rhoO2 + 83.3333333333333*rhoNO + 107.142857142857*rhoN +
      89.2857142857143*rhoN2)*p0/(31.25*rhoO2 + 62.5*rhoO + 33.3333333333333*rhoNO + 35.7142857142857*rhoN2 +
      71.4285714285714*rhoN) + 8.3143*thetavNO*OPS_ACC(rhoNO_B0, 0)/(-0.03 + 0.03*exp(thetavNO/T)) +
      8.3143*thetavO2*OPS_ACC(rhoO2_B0, 0)/(-0.032 + 0.032*exp(thetavO2/T)) + 8.3143*thetavN2*OPS_ACC(rhoN2_B0, 0)/(-0.028 +
      0.028*exp(thetavN2/T));


  }
}
