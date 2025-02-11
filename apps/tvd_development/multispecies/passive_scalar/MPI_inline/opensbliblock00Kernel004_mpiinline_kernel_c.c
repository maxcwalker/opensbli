//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel004;
int xdim1_opensbliblock00Kernel004;
int xdim2_opensbliblock00Kernel004;
int xdim3_opensbliblock00Kernel004;
int xdim4_opensbliblock00Kernel004;
int xdim5_opensbliblock00Kernel004;
int xdim6_opensbliblock00Kernel004;
int xdim7_opensbliblock00Kernel004;
int xdim8_opensbliblock00Kernel004;
int xdim9_opensbliblock00Kernel004;
int xdim10_opensbliblock00Kernel004;


//user function



void opensbliblock00Kernel004_c_wrapper(
  double * restrict a_B0_p,
  double * restrict f_B0_p,
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhof_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict u0_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk2_B0_p,
  double * restrict wk3_B0_p,
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double a_B0 = { a_B0_p + n_x*1};
    const ptr_double f_B0 = { f_B0_p + n_x*1};
    const ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1};
    const ptr_double rho_B0 = { rho_B0_p + n_x*1};
    const ptr_double rhof_B0 = { rhof_B0_p + n_x*1};
    const ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1};
    const ptr_double u0_B0 = { u0_B0_p + n_x*1};
    ptr_double wk0_B0 = { wk0_B0_p + n_x*1};
    ptr_double wk1_B0 = { wk1_B0_p + n_x*1};
    ptr_double wk2_B0 = { wk2_B0_p + n_x*1};
    ptr_double wk3_B0 = { wk3_B0_p + n_x*1};
    
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_02 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_10 = 0.0;
   double AVG_0_REV_12 = 0.0;
   double AVG_0_REV_13 = 0.0;
   double AVG_0_REV_20 = 0.0;
   double AVG_0_REV_22 = 0.0;
   double AVG_0_REV_23 = 0.0;
   double AVG_0_REV_30 = 0.0;
   double AVG_0_REV_31 = 0.0;
   double AVG_0_REV_32 = 0.0;
   double AVG_0_REV_33 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_f = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double S = 0.0;
   double alpha_00 = 0.0;
   double alpha_01 = 0.0;
   double alpha_02 = 0.0;
   double alpha_10 = 0.0;
   double alpha_11 = 0.0;
   double alpha_12 = 0.0;
   double alpha_20 = 0.0;
   double alpha_21 = 0.0;
   double alpha_22 = 0.0;
   double alpha_30 = 0.0;
   double alpha_31 = 0.0;
   double alpha_32 = 0.0;
   double g_00 = 0.0;
   double g_01 = 0.0;
   double g_10 = 0.0;
   double g_11 = 0.0;
   double g_20 = 0.0;
   double g_21 = 0.0;
   double g_30 = 0.0;
   double g_31 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_hat_00 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_hat_30 = 0.0;
   double theta_hat_31 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   AVG_0_u0 = ((1.0/2.0))*(OPS_ACC(u0_B0, 0) + OPS_ACC(u0_B0, -1));

   AVG_0_f = ((1.0/2.0))*(OPS_ACC(f_B0, 0) + OPS_ACC(f_B0, -1));

   AVG_0_a = ((1.0/2.0))*(OPS_ACC(a_B0, 0) + OPS_ACC(a_B0, -1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = 1.0*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama)/(inv_AVG_a*inv_AVG_a);

   AVG_0_0_LEV_01 = -0.5*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = 0.5*gamma_m1;

   AVG_0_0_LEV_10 = -1.0*AVG_0_a*AVG_0_f;

   AVG_0_0_LEV_13 = 1.0*AVG_0_a;

   AVG_0_0_LEV_20 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 0.5*AVG_0_u0 + 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 1.0*AVG_0_u0 + 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_22 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

   AVG_0_0_LEV_30 = -0.25*(-1.0 + 1.0*gama)*(0.5*AVG_0_u0 + 1.0*AVG_0_a - 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a + 1.0*AVG_0_u0 - 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_32 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

    alpha_00 = (-OPS_ACC(rho_B0, -1) + OPS_ACC(rho_B0, 0))*AVG_0_0_LEV_00 + (-OPS_ACC(rhoE_B0, -1) + OPS_ACC(rhoE_B0, 0))*AVG_0_0_LEV_02 + (-OPS_ACC(rhou0_B0, -1) +
      OPS_ACC(rhou0_B0, 0))*AVG_0_0_LEV_01;

   alpha_10 = (-OPS_ACC(rho_B0, -1) + OPS_ACC(rho_B0, 0))*AVG_0_0_LEV_10 + (-OPS_ACC(rhof_B0, -1) + OPS_ACC(rhof_B0, 0))*AVG_0_0_LEV_13;

    alpha_20 = (-OPS_ACC(rho_B0, -1) + OPS_ACC(rho_B0, 0))*AVG_0_0_LEV_20 + (-OPS_ACC(rhoE_B0, -1) + OPS_ACC(rhoE_B0, 0))*AVG_0_0_LEV_22 + (-OPS_ACC(rhou0_B0, -1) +
      OPS_ACC(rhou0_B0, 0))*AVG_0_0_LEV_21;

    alpha_30 = (-OPS_ACC(rho_B0, -1) + OPS_ACC(rho_B0, 0))*AVG_0_0_LEV_30 + (-OPS_ACC(rhoE_B0, -1) + OPS_ACC(rhoE_B0, 0))*AVG_0_0_LEV_32 + (-OPS_ACC(rhou0_B0, -1) +
      OPS_ACC(rhou0_B0, 0))*AVG_0_0_LEV_31;

   AVG_0_u0 = ((1.0/2.0))*(OPS_ACC(u0_B0, 0) + OPS_ACC(u0_B0, 1));

   AVG_0_f = ((1.0/2.0))*(OPS_ACC(f_B0, 0) + OPS_ACC(f_B0, 1));

   AVG_0_a = ((1.0/2.0))*(OPS_ACC(a_B0, 0) + OPS_ACC(a_B0, 1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = 1.0*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama)/(inv_AVG_a*inv_AVG_a);

   AVG_0_0_LEV_01 = -0.5*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = 0.5*gamma_m1;

   AVG_0_0_LEV_10 = -1.0*AVG_0_a*AVG_0_f;

   AVG_0_0_LEV_13 = 1.0*AVG_0_a;

   AVG_0_0_LEV_20 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 0.5*AVG_0_u0 + 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 1.0*AVG_0_u0 + 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_22 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

   AVG_0_0_LEV_30 = -0.25*(-1.0 + 1.0*gama)*(0.5*AVG_0_u0 + 1.0*AVG_0_a - 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a + 1.0*AVG_0_u0 - 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_32 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

    alpha_01 = (-OPS_ACC(rho_B0, 0) + OPS_ACC(rho_B0, 1))*AVG_0_0_LEV_00 + (-OPS_ACC(rhoE_B0, 0) + OPS_ACC(rhoE_B0, 1))*AVG_0_0_LEV_02 + (-OPS_ACC(rhou0_B0, 0) +
      OPS_ACC(rhou0_B0, 1))*AVG_0_0_LEV_01;

   alpha_11 = (-OPS_ACC(rho_B0, 0) + OPS_ACC(rho_B0, 1))*AVG_0_0_LEV_10 + (-OPS_ACC(rhof_B0, 0) + OPS_ACC(rhof_B0, 1))*AVG_0_0_LEV_13;

    alpha_21 = (-OPS_ACC(rho_B0, 0) + OPS_ACC(rho_B0, 1))*AVG_0_0_LEV_20 + (-OPS_ACC(rhoE_B0, 0) + OPS_ACC(rhoE_B0, 1))*AVG_0_0_LEV_22 + (-OPS_ACC(rhou0_B0, 0) +
      OPS_ACC(rhou0_B0, 1))*AVG_0_0_LEV_21;

    alpha_31 = (-OPS_ACC(rho_B0, 0) + OPS_ACC(rho_B0, 1))*AVG_0_0_LEV_30 + (-OPS_ACC(rhoE_B0, 0) + OPS_ACC(rhoE_B0, 1))*AVG_0_0_LEV_32 + (-OPS_ACC(rhou0_B0, 0) +
      OPS_ACC(rhou0_B0, 1))*AVG_0_0_LEV_31;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = -AVG_0_a + AVG_0_u0;

   ws_lambda_33 = AVG_0_a + AVG_0_u0;

   AVG_0_REV_00 = -2.0/(AVG_0_a*AVG_0_a);

   AVG_0_REV_02 = 2.0*invgamma_m1/(AVG_0_a*AVG_0_a);

   AVG_0_REV_03 = 2.0*invgamma_m1/(AVG_0_a*AVG_0_a);

   AVG_0_REV_10 = -2.0*AVG_0_u0/(AVG_0_a*AVG_0_a);

   AVG_0_REV_12 = 2.0*(-AVG_0_a + AVG_0_u0)*invgamma_m1/(AVG_0_a*AVG_0_a);

   AVG_0_REV_13 = 2.0*(AVG_0_a + AVG_0_u0)*invgamma_m1/(AVG_0_a*AVG_0_a);

   AVG_0_REV_20 = -1.0*(AVG_0_u0*AVG_0_u0)/(AVG_0_a*AVG_0_a);

    AVG_0_REV_22 = 1.0*(2.0*(AVG_0_a*AVG_0_a) - 1.0*(AVG_0_u0*AVG_0_u0) + 1.0*(AVG_0_u0*AVG_0_u0)*gama +
      2.0*AVG_0_a*AVG_0_u0 - 2.0*gama*AVG_0_a*AVG_0_u0)/((1.0*(gama*gama) - 2.0*gama + 1.0)*(AVG_0_a*AVG_0_a));

    AVG_0_REV_23 = 1.0*(2.0*(AVG_0_a*AVG_0_a) - 1.0*(AVG_0_u0*AVG_0_u0) + 1.0*(AVG_0_u0*AVG_0_u0)*gama -
      2.0*AVG_0_a*AVG_0_u0 + 2.0*gama*AVG_0_a*AVG_0_u0)/((1.0*(gama*gama) - 2.0*gama + 1.0)*(AVG_0_a*AVG_0_a));

   AVG_0_REV_30 = -2.0*AVG_0_f/(AVG_0_a*AVG_0_a);

   AVG_0_REV_31 = 1.0*inv_AVG_a;

   AVG_0_REV_32 = 2.0*invgamma_m1*AVG_0_f/(AVG_0_a*AVG_0_a);

   AVG_0_REV_33 = 2.0*invgamma_m1*AVG_0_f/(AVG_0_a*AVG_0_a);

   AVG_0_u0 = ((1.0/2.0))*(OPS_ACC(u0_B0, 1) + OPS_ACC(u0_B0, 2));

   AVG_0_f = ((1.0/2.0))*(OPS_ACC(f_B0, 1) + OPS_ACC(f_B0, 2));

   AVG_0_a = ((1.0/2.0))*(OPS_ACC(a_B0, 1) + OPS_ACC(a_B0, 2));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = 1.0*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama)/(inv_AVG_a*inv_AVG_a);

   AVG_0_0_LEV_01 = -0.5*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = 0.5*gamma_m1;

   AVG_0_0_LEV_10 = -1.0*AVG_0_a*AVG_0_f;

   AVG_0_0_LEV_13 = 1.0*AVG_0_a;

   AVG_0_0_LEV_20 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 0.5*AVG_0_u0 + 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 1.0*AVG_0_u0 + 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_22 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

   AVG_0_0_LEV_30 = -0.25*(-1.0 + 1.0*gama)*(0.5*AVG_0_u0 + 1.0*AVG_0_a - 0.5*gama*AVG_0_u0)*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a + 1.0*AVG_0_u0 - 1.0*gama*AVG_0_u0);

   AVG_0_0_LEV_32 = 0.25*((-1.0 + 1.0*gama)*(-1.0 + 1.0*gama));

    alpha_02 = (-OPS_ACC(rho_B0, 1) + OPS_ACC(rho_B0, 2))*AVG_0_0_LEV_00 + (-OPS_ACC(rhoE_B0, 1) + OPS_ACC(rhoE_B0, 2))*AVG_0_0_LEV_02 + (-OPS_ACC(rhou0_B0, 1) +
      OPS_ACC(rhou0_B0, 2))*AVG_0_0_LEV_01;

   alpha_12 = (-OPS_ACC(rho_B0, 1) + OPS_ACC(rho_B0, 2))*AVG_0_0_LEV_10 + (-OPS_ACC(rhof_B0, 1) + OPS_ACC(rhof_B0, 2))*AVG_0_0_LEV_13;

    alpha_22 = (-OPS_ACC(rho_B0, 1) + OPS_ACC(rho_B0, 2))*AVG_0_0_LEV_20 + (-OPS_ACC(rhoE_B0, 1) + OPS_ACC(rhoE_B0, 2))*AVG_0_0_LEV_22 + (-OPS_ACC(rhou0_B0, 1) +
      OPS_ACC(rhou0_B0, 2))*AVG_0_0_LEV_21;

    alpha_32 = (-OPS_ACC(rho_B0, 1) + OPS_ACC(rho_B0, 2))*AVG_0_0_LEV_30 + (-OPS_ACC(rhoE_B0, 1) + OPS_ACC(rhoE_B0, 2))*AVG_0_0_LEV_32 + (-OPS_ACC(rhou0_B0, 1) +
      OPS_ACC(rhou0_B0, 2))*AVG_0_0_LEV_31;

    sigma_0_0 = ((fabs(ws_lambda_00) >= delta_TVD) ? (
   fabs(ws_lambda_00)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_00*ws_lambda_00))*invdelta_TVD
));

    sigma_0_1 = ((fabs(ws_lambda_11) >= delta_TVD) ? (
   fabs(ws_lambda_11)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_11*ws_lambda_11))*invdelta_TVD
));

    sigma_0_2 = ((fabs(ws_lambda_22) >= delta_TVD) ? (
   fabs(ws_lambda_22)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_22*ws_lambda_22))*invdelta_TVD
));

    sigma_0_3 = ((fabs(ws_lambda_33) >= delta_TVD) ? (
   fabs(ws_lambda_33)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_33*ws_lambda_33))*invdelta_TVD
));

   S = (alpha_01 > 0) ? 1 : ((alpha_01 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_00, 2*fabs(alpha_01)));

   t2 = fmin(fabs(alpha_01), 2*S*alpha_00);

   g_00 = S*fmax(t1, t2);

   S = (alpha_11 > 0) ? 1 : ((alpha_11 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_10, 2*fabs(alpha_11)));

   t2 = fmin(fabs(alpha_11), 2*S*alpha_10);

   g_10 = S*fmax(t1, t2);

   S = (alpha_21 > 0) ? 1 : ((alpha_21 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_20, 2*fabs(alpha_21)));

   t2 = fmin(fabs(alpha_21), 2*S*alpha_20);

   g_20 = S*fmax(t1, t2);

   S = (alpha_31 > 0) ? 1 : ((alpha_31 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_30, 2*fabs(alpha_31)));

   t2 = fmin(fabs(alpha_31), 2*S*alpha_30);

   g_30 = S*fmax(t1, t2);

   S = (alpha_02 > 0) ? 1 : ((alpha_02 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_01, 2*fabs(alpha_02)));

   t2 = fmin(fabs(alpha_02), 2*S*alpha_01);

   g_01 = S*fmax(t1, t2);

   S = (alpha_12 > 0) ? 1 : ((alpha_12 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_11, 2*fabs(alpha_12)));

   t2 = fmin(fabs(alpha_12), 2*S*alpha_11);

   g_11 = S*fmax(t1, t2);

   S = (alpha_22 > 0) ? 1 : ((alpha_22 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_21, 2*fabs(alpha_22)));

   t2 = fmin(fabs(alpha_22), 2*S*alpha_21);

   g_21 = S*fmax(t1, t2);

   S = (alpha_32 > 0) ? 1 : ((alpha_32 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_31, 2*fabs(alpha_32)));

   t2 = fmin(fabs(alpha_32), 2*S*alpha_31);

   g_31 = S*fmax(t1, t2);

   gamma_0 = ((alpha_01 == 0) ? (
   0
)
: (
   (-g_00 + g_01)*alpha_01*sigma_0_0/((alpha_01*alpha_01) + eps_TVD)
));

   gamma_1 = ((alpha_11 == 0) ? (
   0
)
: (
   (-g_10 + g_11)*alpha_11*sigma_0_1/((alpha_11*alpha_11) + eps_TVD)
));

   gamma_2 = ((alpha_21 == 0) ? (
   0
)
: (
   (-g_20 + g_21)*alpha_21*sigma_0_2/((alpha_21*alpha_21) + eps_TVD)
));

   gamma_3 = ((alpha_31 == 0) ? (
   0
)
: (
   (-g_30 + g_31)*alpha_31*sigma_0_3/((alpha_31*alpha_31) + eps_TVD)
));

    sigma_1_0 = ((fabs(gamma_0) >= delta_TVD) ? (
   fabs(gamma_0)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_0*gamma_0))*invdelta_TVD
));

    sigma_1_1 = ((fabs(gamma_1) >= delta_TVD) ? (
   fabs(gamma_1)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_1*gamma_1))*invdelta_TVD
));

    sigma_1_2 = ((fabs(gamma_2) >= delta_TVD) ? (
   fabs(gamma_2)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_2*gamma_2))*invdelta_TVD
));

    sigma_1_3 = ((fabs(gamma_3) >= delta_TVD) ? (
   fabs(gamma_3)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_3*gamma_3))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   t1 = -fabs(alpha_00) + fabs(alpha_01);

   t2 = fabs(alpha_00) + fabs(alpha_01) + eps_TVD;

   theta_hat_00 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_10) + fabs(alpha_11);

   t2 = fabs(alpha_10) + fabs(alpha_11) + eps_TVD;

   theta_hat_10 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_20) + fabs(alpha_21);

   t2 = fabs(alpha_20) + fabs(alpha_21) + eps_TVD;

   theta_hat_20 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_30) + fabs(alpha_31);

   t2 = fabs(alpha_30) + fabs(alpha_31) + eps_TVD;

   theta_hat_30 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_01) + fabs(alpha_02);

   t2 = fabs(alpha_01) + fabs(alpha_02) + eps_TVD;

   theta_hat_01 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_11) + fabs(alpha_12);

   t2 = fabs(alpha_11) + fabs(alpha_12) + eps_TVD;

   theta_hat_11 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_21) + fabs(alpha_22);

   t2 = fabs(alpha_21) + fabs(alpha_22) + eps_TVD;

   theta_hat_21 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_31) + fabs(alpha_32);

   t2 = fabs(alpha_31) + fabs(alpha_32) + eps_TVD;

   theta_hat_31 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   OPS_ACC(wk0_B0, 0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_02*phi_star_2 + AVG_0_REV_03*phi_star_3);

   OPS_ACC(wk1_B0, 0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_12*phi_star_2 + AVG_0_REV_13*phi_star_3);

   OPS_ACC(wk2_B0, 0) = 0.5*(AVG_0_REV_20*phi_star_0 + AVG_0_REV_22*phi_star_2 + AVG_0_REV_23*phi_star_3);

    OPS_ACC(wk3_B0, 0) = 0.5*(AVG_0_REV_30*phi_star_0 + AVG_0_REV_31*phi_star_1 + AVG_0_REV_32*phi_star_2 +
      AVG_0_REV_33*phi_star_3);


  }
}
