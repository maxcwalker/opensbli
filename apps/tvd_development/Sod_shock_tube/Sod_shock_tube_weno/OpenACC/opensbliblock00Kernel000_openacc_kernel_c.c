//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel000;
int xdim1_opensbliblock00Kernel000;
int xdim2_opensbliblock00Kernel000;
int xdim3_opensbliblock00Kernel000;
int xdim4_opensbliblock00Kernel000;
int xdim5_opensbliblock00Kernel000;
int xdim6_opensbliblock00Kernel000;
int xdim7_opensbliblock00Kernel000;
int xdim8_opensbliblock00Kernel000;

//user function
inline 
 void opensbliblock00Kernel000(const ptr_double rhou0_B0,
  const ptr_double rho_B0,
  const ptr_double p_B0,
  const ptr_double a_B0,
  const ptr_double u0_B0,
  const ptr_double rhoE_B0,
  ptr_double wk1_B0,
  ptr_double wk0_B0,
  ptr_double wk2_B0)
{
   double max_lambda_0_11 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CF_23 = 0.0;
   double AVG_0_u0 = 0.0;
   double CF_25 = 0.0;
   double CS_14 = 0.0;
   double CF_10 = 0.0;
   double Recon_2 = 0.0;
   double CF_20 = 0.0;
   double alpha_1 = 0.0;
   double AVG_0_a = 0.0;
   double CF_11 = 0.0;
   double CF_21 = 0.0;
   double beta_0 = 0.0;
   double Recon_0 = 0.0;
   double CS_00 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CF_13 = 0.0;
   double CF_01 = 0.0;
   double CS_02 = 0.0;
   double beta_1 = 0.0;
   double CF_14 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double CS_20 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double CS_21 = 0.0;
   double CF_02 = 0.0;
   double CF_05 = 0.0;
   double CS_11 = 0.0;
   double CS_15 = 0.0;
   double omega_2 = 0.0;
   double inv_AVG_a = 0.0;
   double CF_24 = 0.0;
   double omega_1 = 0.0;
   double CS_13 = 0.0;
   double CS_10 = 0.0;
   double alpha_0 = 0.0;
   double inv_AVG_rho = 0.0;
   double CF_03 = 0.0;
   double AVG_0_inv_rho = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double CS_23 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double CF_04 = 0.0;
   double CS_05 = 0.0;
   double CF_22 = 0.0;
   double Recon_1 = 0.0;
   double CS_04 = 0.0;
   double CS_12 = 0.0;
   double CF_15 = 0.0;
   double CS_03 = 0.0;
   double beta_2 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double CF_12 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CS_22 = 0.0;
   double max_lambda_0_00 = 0.0;
   double alpha_2 = 0.0;
   double CS_25 = 0.0;
   double CF_00 = 0.0;
   double CS_24 = 0.0;
   double max_lambda_0_22 = 0.0;
   double CS_01 = 0.0;
   double omega_0 = 0.0;
   AVG_0_rho = sqrt(OPS_ACC(rho_B0, 0)*OPS_ACC(rho_B0, 1));

   AVG_0_inv_rho = 1.0/(sqrt(OPS_ACC(rho_B0, 1)) + sqrt(OPS_ACC(rho_B0, 0)));

    AVG_0_u0 = AVG_0_inv_rho*(sqrt(OPS_ACC(rho_B0, 1))*OPS_ACC(u0_B0, 1) +
      sqrt(OPS_ACC(rho_B0, 0))*OPS_ACC(u0_B0, 0));

    AVG_0_a = sqrt(gamma_m1*(AVG_0_inv_rho*((OPS_ACC(p_B0, 0) + OPS_ACC(rhoE_B0, 0))/sqrt(OPS_ACC(rho_B0, 0)) +
      (OPS_ACC(p_B0, 1) + OPS_ACC(rhoE_B0, 1))/sqrt(OPS_ACC(rho_B0, 1))) - rc0*pow(AVG_0_u0, 2)));

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

    AVG_0_0_LEV_00 = (rc1)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) + 2);

   AVG_0_0_LEV_01 = -rc0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) + 1);

   AVG_0_0_LEV_02 = (rc0)*gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = -rc0*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_11 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_12 = -gamma_m1*pow(inv_AVG_a, 2);

    AVG_0_0_LEV_20 = (rc1)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) - 2);

   AVG_0_0_LEV_21 = -rc0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - 1);

   AVG_0_0_LEV_22 = (rc0)*gamma_m1*pow(inv_AVG_a, 2);

    CF_00 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, -2) + AVG_0_0_LEV_01*OPS_ACC(p_B0, -2) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, -2)*OPS_ACC(u0_B0, -2) + AVG_0_0_LEV_02*OPS_ACC(p_B0, -2)*OPS_ACC(u0_B0, -2)
      + AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, -2)*OPS_ACC(u0_B0, -2);

    CF_10 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, -2) + AVG_0_0_LEV_11*OPS_ACC(p_B0, -2) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, -2)*OPS_ACC(u0_B0, -2) + AVG_0_0_LEV_12*OPS_ACC(p_B0, -2)*OPS_ACC(u0_B0, -2)
      + AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, -2)*OPS_ACC(u0_B0, -2);

    CF_20 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, -2) + AVG_0_0_LEV_21*OPS_ACC(p_B0, -2) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, -2)*OPS_ACC(u0_B0, -2) + AVG_0_0_LEV_22*OPS_ACC(p_B0, -2)*OPS_ACC(u0_B0, -2)
      + AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, -2)*OPS_ACC(u0_B0, -2);

    CF_01 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, -1) + AVG_0_0_LEV_01*OPS_ACC(p_B0, -1) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, -1)*OPS_ACC(u0_B0, -1) + AVG_0_0_LEV_02*OPS_ACC(p_B0, -1)*OPS_ACC(u0_B0, -1)
      + AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, -1)*OPS_ACC(u0_B0, -1);

    CF_11 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, -1) + AVG_0_0_LEV_11*OPS_ACC(p_B0, -1) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, -1)*OPS_ACC(u0_B0, -1) + AVG_0_0_LEV_12*OPS_ACC(p_B0, -1)*OPS_ACC(u0_B0, -1)
      + AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, -1)*OPS_ACC(u0_B0, -1);

    CF_21 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, -1) + AVG_0_0_LEV_21*OPS_ACC(p_B0, -1) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, -1)*OPS_ACC(u0_B0, -1) + AVG_0_0_LEV_22*OPS_ACC(p_B0, -1)*OPS_ACC(u0_B0, -1)
      + AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, -1)*OPS_ACC(u0_B0, -1);

    CF_02 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, 0) + AVG_0_0_LEV_01*OPS_ACC(p_B0, 0) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 0)*OPS_ACC(u0_B0, 0) + AVG_0_0_LEV_02*OPS_ACC(p_B0, 0)*OPS_ACC(u0_B0, 0) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 0)*OPS_ACC(u0_B0, 0);

    CF_12 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, 0) + AVG_0_0_LEV_11*OPS_ACC(p_B0, 0) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 0)*OPS_ACC(u0_B0, 0) + AVG_0_0_LEV_12*OPS_ACC(p_B0, 0)*OPS_ACC(u0_B0, 0) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 0)*OPS_ACC(u0_B0, 0);

    CF_22 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, 0) + AVG_0_0_LEV_21*OPS_ACC(p_B0, 0) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 0)*OPS_ACC(u0_B0, 0) + AVG_0_0_LEV_22*OPS_ACC(p_B0, 0)*OPS_ACC(u0_B0, 0) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 0)*OPS_ACC(u0_B0, 0);

    CF_03 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, 1) + AVG_0_0_LEV_01*OPS_ACC(p_B0, 1) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 1)*OPS_ACC(u0_B0, 1) + AVG_0_0_LEV_02*OPS_ACC(p_B0, 1)*OPS_ACC(u0_B0, 1) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 1)*OPS_ACC(u0_B0, 1);

    CF_13 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, 1) + AVG_0_0_LEV_11*OPS_ACC(p_B0, 1) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 1)*OPS_ACC(u0_B0, 1) + AVG_0_0_LEV_12*OPS_ACC(p_B0, 1)*OPS_ACC(u0_B0, 1) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 1)*OPS_ACC(u0_B0, 1);

    CF_23 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, 1) + AVG_0_0_LEV_21*OPS_ACC(p_B0, 1) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 1)*OPS_ACC(u0_B0, 1) + AVG_0_0_LEV_22*OPS_ACC(p_B0, 1)*OPS_ACC(u0_B0, 1) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 1)*OPS_ACC(u0_B0, 1);

    CF_04 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, 2) + AVG_0_0_LEV_01*OPS_ACC(p_B0, 2) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 2)*OPS_ACC(u0_B0, 2) + AVG_0_0_LEV_02*OPS_ACC(p_B0, 2)*OPS_ACC(u0_B0, 2) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 2)*OPS_ACC(u0_B0, 2);

    CF_14 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, 2) + AVG_0_0_LEV_11*OPS_ACC(p_B0, 2) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 2)*OPS_ACC(u0_B0, 2) + AVG_0_0_LEV_12*OPS_ACC(p_B0, 2)*OPS_ACC(u0_B0, 2) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 2)*OPS_ACC(u0_B0, 2);

    CF_24 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, 2) + AVG_0_0_LEV_21*OPS_ACC(p_B0, 2) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 2)*OPS_ACC(u0_B0, 2) + AVG_0_0_LEV_22*OPS_ACC(p_B0, 2)*OPS_ACC(u0_B0, 2) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 2)*OPS_ACC(u0_B0, 2);

    CF_05 = AVG_0_0_LEV_00*OPS_ACC(rhou0_B0, 3) + AVG_0_0_LEV_01*OPS_ACC(p_B0, 3) +
      AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 3)*OPS_ACC(u0_B0, 3) + AVG_0_0_LEV_02*OPS_ACC(p_B0, 3)*OPS_ACC(u0_B0, 3) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 3)*OPS_ACC(u0_B0, 3);

    CF_15 = AVG_0_0_LEV_10*OPS_ACC(rhou0_B0, 3) + AVG_0_0_LEV_11*OPS_ACC(p_B0, 3) +
      AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 3)*OPS_ACC(u0_B0, 3) + AVG_0_0_LEV_12*OPS_ACC(p_B0, 3)*OPS_ACC(u0_B0, 3) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 3)*OPS_ACC(u0_B0, 3);

    CF_25 = AVG_0_0_LEV_20*OPS_ACC(rhou0_B0, 3) + AVG_0_0_LEV_21*OPS_ACC(p_B0, 3) +
      AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 3)*OPS_ACC(u0_B0, 3) + AVG_0_0_LEV_22*OPS_ACC(p_B0, 3)*OPS_ACC(u0_B0, 3) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 3)*OPS_ACC(u0_B0, 3);

    CS_00 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, -2) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, -2) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, -2);

    CS_01 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, -1) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, -1) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, -1);

    CS_02 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, 0) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 0) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 0);

    CS_03 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, 1) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 1) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 1);

    CS_04 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, 2) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 2) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 2);

    CS_05 = AVG_0_0_LEV_00*OPS_ACC(rho_B0, 3) + AVG_0_0_LEV_01*OPS_ACC(rhou0_B0, 3) +
      AVG_0_0_LEV_02*OPS_ACC(rhoE_B0, 3);

    CS_10 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, -2) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, -2) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, -2);

    CS_11 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, -1) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, -1) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, -1);

    CS_12 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, 0) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 0) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 0);

    CS_13 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, 1) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 1) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 1);

    CS_14 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, 2) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 2) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 2);

    CS_15 = AVG_0_0_LEV_10*OPS_ACC(rho_B0, 3) + AVG_0_0_LEV_11*OPS_ACC(rhou0_B0, 3) +
      AVG_0_0_LEV_12*OPS_ACC(rhoE_B0, 3);

    CS_20 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, -2) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, -2) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, -2);

    CS_21 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, -1) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, -1) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, -1);

    CS_22 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, 0) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 0) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 0);

    CS_23 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, 1) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 1) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 1);

    CS_24 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, 2) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 2) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 2);

    CS_25 = AVG_0_0_LEV_20*OPS_ACC(rho_B0, 3) + AVG_0_0_LEV_21*OPS_ACC(rhou0_B0, 3) +
      AVG_0_0_LEV_22*OPS_ACC(rhoE_B0, 3);

    max_lambda_0_00 = fmax(fabs(OPS_ACC(a_B0, 3) - OPS_ACC(u0_B0, 3)), fmax(fabs(OPS_ACC(a_B0, 1) -
      OPS_ACC(u0_B0, 1)), fmax(fabs(OPS_ACC(a_B0, -1) - OPS_ACC(u0_B0, -1)), fmax(fabs(OPS_ACC(a_B0, 2) -
      OPS_ACC(u0_B0, 2)), fmax(fabs(OPS_ACC(a_B0, 0) - OPS_ACC(u0_B0, 0)), fabs(OPS_ACC(a_B0, -2) -
      OPS_ACC(u0_B0, -2)))))));

    max_lambda_0_11 = fmax(fabs(OPS_ACC(u0_B0, -2)), fmax(fabs(OPS_ACC(u0_B0, -1)), fmax(fabs(OPS_ACC(u0_B0, 0)),
      fmax(fabs(OPS_ACC(u0_B0, 3)), fmax(fabs(OPS_ACC(u0_B0, 2)), fabs(OPS_ACC(u0_B0, 1)))))));

    max_lambda_0_22 = fmax(fabs(OPS_ACC(a_B0, -2) + OPS_ACC(u0_B0, -2)), fmax(fabs(OPS_ACC(a_B0, -1) +
      OPS_ACC(u0_B0, -1)), fmax(fabs(OPS_ACC(a_B0, 2) + OPS_ACC(u0_B0, 2)), fmax(fabs(OPS_ACC(a_B0, 3) +
      OPS_ACC(u0_B0, 3)), fmax(fabs(OPS_ACC(a_B0, 1) + OPS_ACC(u0_B0, 1)), fabs(OPS_ACC(a_B0, 0) +
      OPS_ACC(u0_B0, 0)))))));

    beta_0 = (rc0)*(CF_02 + CS_02*max_lambda_0_00)*((rc2)*(CF_02 + CS_02*max_lambda_0_00) - rc3*(CF_03 +
      CS_03*max_lambda_0_00) + (rc4)*(CF_04 + CS_04*max_lambda_0_00)) + (rc0)*(CF_03 +
      CS_03*max_lambda_0_00)*((rc5)*(CF_03 + CS_03*max_lambda_0_00) - rc6*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc7)*pow(CF_04 + CS_04*max_lambda_0_00, 2);

    beta_1 = (rc0)*(CF_01 + CS_01*max_lambda_0_00)*((rc8)*(CF_01 + CS_01*max_lambda_0_00) - rc9*(CF_02 +
      CS_02*max_lambda_0_00) + (rc10)*(CF_03 + CS_03*max_lambda_0_00)) + (rc0)*(CF_02 +
      CS_02*max_lambda_0_00)*((rc9)*(CF_02 + CS_02*max_lambda_0_00) - rc9*(CF_03 + CS_03*max_lambda_0_00)) +
      (rc7)*pow(CF_03 + CS_03*max_lambda_0_00, 2);

    beta_2 = (rc0)*(CF_00 + CS_00*max_lambda_0_00)*((rc8)*(CF_00 + CS_00*max_lambda_0_00) + (rc4)*(CF_02 +
      CS_02*max_lambda_0_00)) + (rc0)*(CF_01 + CS_01*max_lambda_0_00)*(-rc6*(CF_00 + CS_00*max_lambda_0_00) +
      (rc5)*(CF_01 + CS_01*max_lambda_0_00) - rc3*(CF_02 + CS_02*max_lambda_0_00)) + (rc10)*pow(CF_02 +
      CS_02*max_lambda_0_00, 2);

   alpha_0 = (rc11)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc13)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc14)*(CF_02 + CS_02*max_lambda_0_00) + (rc15)*(CF_03 + CS_03*max_lambda_0_00) -
      rc16*(CF_04 + CS_04*max_lambda_0_00)) + omega_1*(-rc16*(CF_01 + CS_01*max_lambda_0_00) + (rc15)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc14)*(CF_03 + CS_03*max_lambda_0_00)) + omega_2*((rc14)*(CF_00 + CS_00*max_lambda_0_00)
      - rc17*(CF_01 + CS_01*max_lambda_0_00) + (rc18)*(CF_02 + CS_02*max_lambda_0_00));

    beta_0 = (rc0)*(CF_03 - CS_03*max_lambda_0_00)*((rc2)*(CF_03 - CS_03*max_lambda_0_00) - rc3*(CF_04 -
      CS_04*max_lambda_0_00) + (rc4)*(CF_05 - CS_05*max_lambda_0_00)) + (rc0)*(CF_04 -
      CS_04*max_lambda_0_00)*((rc5)*(CF_04 - CS_04*max_lambda_0_00) - rc6*(CF_05 - CS_05*max_lambda_0_00)) +
      (rc7)*pow(CF_05 - CS_05*max_lambda_0_00, 2);

    beta_1 = (rc0)*(CF_02 - CS_02*max_lambda_0_00)*((rc8)*(CF_02 - CS_02*max_lambda_0_00) - rc9*(CF_03 -
      CS_03*max_lambda_0_00) + (rc10)*(CF_04 - CS_04*max_lambda_0_00)) + (rc0)*(CF_03 -
      CS_03*max_lambda_0_00)*((rc9)*(CF_03 - CS_03*max_lambda_0_00) - rc9*(CF_04 - CS_04*max_lambda_0_00)) +
      (rc7)*pow(CF_04 - CS_04*max_lambda_0_00, 2);

    beta_2 = (rc0)*(CF_01 - CS_01*max_lambda_0_00)*((rc8)*(CF_01 - CS_01*max_lambda_0_00) - rc6*(CF_02 -
      CS_02*max_lambda_0_00) + (rc4)*(CF_03 - CS_03*max_lambda_0_00)) + (rc0)*(CF_02 -
      CS_02*max_lambda_0_00)*((rc5)*(CF_02 - CS_02*max_lambda_0_00) - rc3*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc10)*pow(CF_03 - CS_03*max_lambda_0_00, 2);

   alpha_0 = (rc13)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc11)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc18)*(CF_03 - CS_03*max_lambda_0_00) - rc17*(CF_04 - CS_04*max_lambda_0_00) +
      (rc14)*(CF_05 - CS_05*max_lambda_0_00)) + omega_1*((rc14)*(CF_02 - CS_02*max_lambda_0_00) + (rc15)*(CF_03 -
      CS_03*max_lambda_0_00) - rc16*(CF_04 - CS_04*max_lambda_0_00)) + omega_2*(-rc16*(CF_01 - CS_01*max_lambda_0_00) +
      (rc15)*(CF_02 - CS_02*max_lambda_0_00) + (rc14)*(CF_03 - CS_03*max_lambda_0_00));

    beta_0 = (rc0)*(CF_12 + CS_12*max_lambda_0_11)*((rc2)*(CF_12 + CS_12*max_lambda_0_11) - rc3*(CF_13 +
      CS_13*max_lambda_0_11) + (rc4)*(CF_14 + CS_14*max_lambda_0_11)) + (rc0)*(CF_13 +
      CS_13*max_lambda_0_11)*((rc5)*(CF_13 + CS_13*max_lambda_0_11) - rc6*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc7)*pow(CF_14 + CS_14*max_lambda_0_11, 2);

    beta_1 = (rc0)*(CF_11 + CS_11*max_lambda_0_11)*((rc8)*(CF_11 + CS_11*max_lambda_0_11) - rc9*(CF_12 +
      CS_12*max_lambda_0_11) + (rc10)*(CF_13 + CS_13*max_lambda_0_11)) + (rc0)*(CF_12 +
      CS_12*max_lambda_0_11)*((rc9)*(CF_12 + CS_12*max_lambda_0_11) - rc9*(CF_13 + CS_13*max_lambda_0_11)) +
      (rc7)*pow(CF_13 + CS_13*max_lambda_0_11, 2);

    beta_2 = (rc0)*(CF_10 + CS_10*max_lambda_0_11)*((rc8)*(CF_10 + CS_10*max_lambda_0_11) + (rc4)*(CF_12 +
      CS_12*max_lambda_0_11)) + (rc0)*(CF_11 + CS_11*max_lambda_0_11)*(-rc6*(CF_10 + CS_10*max_lambda_0_11) +
      (rc5)*(CF_11 + CS_11*max_lambda_0_11) - rc3*(CF_12 + CS_12*max_lambda_0_11)) + (rc10)*pow(CF_12 +
      CS_12*max_lambda_0_11, 2);

   alpha_0 = (rc11)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc13)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc14)*(CF_12 + CS_12*max_lambda_0_11) + (rc15)*(CF_13 + CS_13*max_lambda_0_11) -
      rc16*(CF_14 + CS_14*max_lambda_0_11)) + omega_1*(-rc16*(CF_11 + CS_11*max_lambda_0_11) + (rc15)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc14)*(CF_13 + CS_13*max_lambda_0_11)) + omega_2*((rc14)*(CF_10 + CS_10*max_lambda_0_11)
      - rc17*(CF_11 + CS_11*max_lambda_0_11) + (rc18)*(CF_12 + CS_12*max_lambda_0_11));

    beta_0 = (rc0)*(CF_13 - CS_13*max_lambda_0_11)*((rc2)*(CF_13 - CS_13*max_lambda_0_11) - rc3*(CF_14 -
      CS_14*max_lambda_0_11) + (rc4)*(CF_15 - CS_15*max_lambda_0_11)) + (rc0)*(CF_14 -
      CS_14*max_lambda_0_11)*((rc5)*(CF_14 - CS_14*max_lambda_0_11) - rc6*(CF_15 - CS_15*max_lambda_0_11)) +
      (rc7)*pow(CF_15 - CS_15*max_lambda_0_11, 2);

    beta_1 = (rc0)*(CF_12 - CS_12*max_lambda_0_11)*((rc8)*(CF_12 - CS_12*max_lambda_0_11) - rc9*(CF_13 -
      CS_13*max_lambda_0_11) + (rc10)*(CF_14 - CS_14*max_lambda_0_11)) + (rc0)*(CF_13 -
      CS_13*max_lambda_0_11)*((rc9)*(CF_13 - CS_13*max_lambda_0_11) - rc9*(CF_14 - CS_14*max_lambda_0_11)) +
      (rc7)*pow(CF_14 - CS_14*max_lambda_0_11, 2);

    beta_2 = (rc0)*(CF_11 - CS_11*max_lambda_0_11)*((rc8)*(CF_11 - CS_11*max_lambda_0_11) - rc6*(CF_12 -
      CS_12*max_lambda_0_11) + (rc4)*(CF_13 - CS_13*max_lambda_0_11)) + (rc0)*(CF_12 -
      CS_12*max_lambda_0_11)*((rc5)*(CF_12 - CS_12*max_lambda_0_11) - rc3*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc10)*pow(CF_13 - CS_13*max_lambda_0_11, 2);

   alpha_0 = (rc13)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc11)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc18)*(CF_13 - CS_13*max_lambda_0_11) - rc17*(CF_14 - CS_14*max_lambda_0_11) +
      (rc14)*(CF_15 - CS_15*max_lambda_0_11)) + omega_1*((rc14)*(CF_12 - CS_12*max_lambda_0_11) + (rc15)*(CF_13 -
      CS_13*max_lambda_0_11) - rc16*(CF_14 - CS_14*max_lambda_0_11)) + omega_2*(-rc16*(CF_11 - CS_11*max_lambda_0_11) +
      (rc15)*(CF_12 - CS_12*max_lambda_0_11) + (rc14)*(CF_13 - CS_13*max_lambda_0_11));

    beta_0 = (rc0)*(CF_22 + CS_22*max_lambda_0_22)*((rc2)*(CF_22 + CS_22*max_lambda_0_22) - rc3*(CF_23 +
      CS_23*max_lambda_0_22) + (rc4)*(CF_24 + CS_24*max_lambda_0_22)) + (rc0)*(CF_23 +
      CS_23*max_lambda_0_22)*((rc5)*(CF_23 + CS_23*max_lambda_0_22) - rc6*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc7)*pow(CF_24 + CS_24*max_lambda_0_22, 2);

    beta_1 = (rc0)*(CF_21 + CS_21*max_lambda_0_22)*((rc8)*(CF_21 + CS_21*max_lambda_0_22) - rc9*(CF_22 +
      CS_22*max_lambda_0_22) + (rc10)*(CF_23 + CS_23*max_lambda_0_22)) + (rc0)*(CF_22 +
      CS_22*max_lambda_0_22)*((rc9)*(CF_22 + CS_22*max_lambda_0_22) - rc9*(CF_23 + CS_23*max_lambda_0_22)) +
      (rc7)*pow(CF_23 + CS_23*max_lambda_0_22, 2);

    beta_2 = (rc0)*(CF_20 + CS_20*max_lambda_0_22)*((rc8)*(CF_20 + CS_20*max_lambda_0_22) + (rc4)*(CF_22 +
      CS_22*max_lambda_0_22)) + (rc0)*(CF_21 + CS_21*max_lambda_0_22)*(-rc6*(CF_20 + CS_20*max_lambda_0_22) +
      (rc5)*(CF_21 + CS_21*max_lambda_0_22) - rc3*(CF_22 + CS_22*max_lambda_0_22)) + (rc10)*pow(CF_22 +
      CS_22*max_lambda_0_22, 2);

   alpha_0 = (rc11)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc13)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc14)*(CF_22 + CS_22*max_lambda_0_22) + (rc15)*(CF_23 + CS_23*max_lambda_0_22) -
      rc16*(CF_24 + CS_24*max_lambda_0_22)) + omega_1*(-rc16*(CF_21 + CS_21*max_lambda_0_22) + (rc15)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc14)*(CF_23 + CS_23*max_lambda_0_22)) + omega_2*((rc14)*(CF_20 + CS_20*max_lambda_0_22)
      - rc17*(CF_21 + CS_21*max_lambda_0_22) + (rc18)*(CF_22 + CS_22*max_lambda_0_22));

    beta_0 = (rc0)*(CF_23 - CS_23*max_lambda_0_22)*((rc2)*(CF_23 - CS_23*max_lambda_0_22) - rc3*(CF_24 -
      CS_24*max_lambda_0_22) + (rc4)*(CF_25 - CS_25*max_lambda_0_22)) + (rc0)*(CF_24 -
      CS_24*max_lambda_0_22)*((rc5)*(CF_24 - CS_24*max_lambda_0_22) - rc6*(CF_25 - CS_25*max_lambda_0_22)) +
      (rc7)*pow(CF_25 - CS_25*max_lambda_0_22, 2);

    beta_1 = (rc0)*(CF_22 - CS_22*max_lambda_0_22)*((rc8)*(CF_22 - CS_22*max_lambda_0_22) - rc9*(CF_23 -
      CS_23*max_lambda_0_22) + (rc10)*(CF_24 - CS_24*max_lambda_0_22)) + (rc0)*(CF_23 -
      CS_23*max_lambda_0_22)*((rc9)*(CF_23 - CS_23*max_lambda_0_22) - rc9*(CF_24 - CS_24*max_lambda_0_22)) +
      (rc7)*pow(CF_24 - CS_24*max_lambda_0_22, 2);

    beta_2 = (rc0)*(CF_21 - CS_21*max_lambda_0_22)*((rc8)*(CF_21 - CS_21*max_lambda_0_22) - rc6*(CF_22 -
      CS_22*max_lambda_0_22) + (rc4)*(CF_23 - CS_23*max_lambda_0_22)) + (rc0)*(CF_22 -
      CS_22*max_lambda_0_22)*((rc5)*(CF_22 - CS_22*max_lambda_0_22) - rc3*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc10)*pow(CF_23 - CS_23*max_lambda_0_22, 2);

   alpha_0 = (rc13)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc12)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc11)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc18)*(CF_23 - CS_23*max_lambda_0_22) - rc17*(CF_24 - CS_24*max_lambda_0_22) +
      (rc14)*(CF_25 - CS_25*max_lambda_0_22)) + omega_1*((rc14)*(CF_22 - CS_22*max_lambda_0_22) + (rc15)*(CF_23 -
      CS_23*max_lambda_0_22) - rc16*(CF_24 - CS_24*max_lambda_0_22)) + omega_2*(-rc16*(CF_21 - CS_21*max_lambda_0_22) +
      (rc15)*(CF_22 - CS_22*max_lambda_0_22) + (rc14)*(CF_23 - CS_23*max_lambda_0_22));

   OPS_ACC(wk0_B0, 0) = Recon_0 + Recon_1 + Recon_2;

   OPS_ACC(wk1_B0, 0) = AVG_0_u0*Recon_1 + Recon_0*(-AVG_0_a + AVG_0_u0) + Recon_2*(AVG_0_a + AVG_0_u0);

    OPS_ACC(wk2_B0, 0) = (rc0)*pow(AVG_0_u0, 2)*Recon_1 + Recon_0*(rcinv19*pow(AVG_0_a, 2) - AVG_0_a*AVG_0_u0 +
      (rc0)*pow(AVG_0_u0, 2)) + Recon_2*(rcinv19*pow(AVG_0_a, 2) + AVG_0_a*AVG_0_u0 + (rc0)*pow(AVG_0_u0, 2));

}


void opensbliblock00Kernel000_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  int x_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8)
  #pragma acc loop
  #endif
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double ptr0 = {  p_a0 + n_x*1*1 };
    const ptr_double ptr1 = {  p_a1 + n_x*1*1 };
    const ptr_double ptr2 = {  p_a2 + n_x*1*1 };
    const ptr_double ptr3 = {  p_a3 + n_x*1*1 };
    const ptr_double ptr4 = {  p_a4 + n_x*1*1 };
    const ptr_double ptr5 = {  p_a5 + n_x*1*1 };
    ptr_double ptr6 = {  p_a6 + n_x*1*1 };
    ptr_double ptr7 = {  p_a7 + n_x*1*1 };
    ptr_double ptr8 = {  p_a8 + n_x*1*1 };
    opensbliblock00Kernel000( ptr0,
          ptr1,ptr2,
          ptr3,ptr4,
          ptr5,ptr6,
          ptr7,ptr8 );

  }
}
