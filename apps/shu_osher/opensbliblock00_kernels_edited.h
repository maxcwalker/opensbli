#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
void opensbliblock00Kernel010(double *rho_B0, double *rhoE_B0, double *x0_B0, double *rhou0_B0, const int *idx)
{
   double u0 = 0.0;
   double x0 = 0.0;
   double d = 0.0;
   double p = 0.0;
   x0 = Delta0block0*idx[0] - 5.0;

   x0_B0[OPS_ACC2(0)] = x0;

   u0 = ((x0 < -4.0) ? (
   2.629369
)
: (
   0.0
));

   p = ((x0 < -4.0) ? (
   10.33333
)
: ((x0 >= -4.0) ? (
   1.0
)
: (
   0.0
)));

   d = ((x0 < -4.0) ? (
   3.857143
)
: ((x0 >= -4.0) ? (
   0.2*sin(5*x0) + 1.0
)
: (
   0
)));

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC3(0)] = d*u0;

   rhoE_B0[OPS_ACC1(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel008(double *rho_B0, double *rhoE_B0, double *rhou0_B0, const int *idx)
{
   double u0 = 0.0;
   double x0 = 0.0;
   double d = 0.0;
   double p = 0.0;
   x0 = Delta0block0*idx[0] - 5.0;

   u0 = 2.62936900000000;

   p = 10.3333300000000;

   d = 3.85714300000000;

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC2(0)] = d*u0;

   rhoE_B0[OPS_ACC1(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel009(double *rho_B0, double *rhoE_B0, double *rhou0_B0, const int *idx)
{
   double u0 = 0.0;
   double x0 = 0.0;
   double d = 0.0;
   double p = 0.0;
   x0 = Delta0block0*idx[0] - 5.0;

   u0 = 0.0;

   p = 1.00000000000000;

   d = 0.973529649980445;

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC2(0)] = d*u0;

   rhoE_B0[OPS_ACC1(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel005(const double *rho_B0, const double *rhou0_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0)] = rhou0_B0[OPS_ACC1(0)]/rho_B0[OPS_ACC0(0)];

}

void opensbliblock00Kernel004(const double *rho_B0, const double *rhoE_B0, const double *u0_B0, double *p_B0)
{
   p_B0[OPS_ACC3(0)] = (gama - 1)*(rhoE_B0[OPS_ACC1(0)] - rc0*rho_B0[OPS_ACC0(0)]*pow(u0_B0[OPS_ACC2(0)], 2));

}

void opensbliblock00Kernel003(const double *rho_B0, const double *p_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0)] = sqrt(gama*p_B0[OPS_ACC1(0)]/rho_B0[OPS_ACC0(0)]);

}

 void opensbliblock00Kernel000(const double *rhoE_B0, const double *rho_B0, const double *rhou0_B0, const double *a_B0,
const double *p_B0, const double *u0_B0, double *wk0_B0, double *wk2_B0, double *wk1_B0)
{
   double AVG_0_0_LEV_10 = 0.0;
   double CS_25 = 0.0;
   double max_lambda_0_00 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double CF_12 = 0.0;
   double CF_22 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double alpha_2 = 0.0;
   double omega_2 = 0.0;
   double CS_05 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double CF_25 = 0.0;
   double CS_04 = 0.0;
   double CF_04 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double CS_13 = 0.0;
   double CS_23 = 0.0;
   double beta_0 = 0.0;
   double omega_1 = 0.0;
   double CF_10 = 0.0;
   double CS_21 = 0.0;
   double CF_14 = 0.0;
   double CS_24 = 0.0;
   double CS_20 = 0.0;
   double beta_1 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double CF_24 = 0.0;
   double CS_10 = 0.0;
   double CS_03 = 0.0;
   double max_lambda_0_22 = 0.0;
   double CF_02 = 0.0;
   double CF_21 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CS_00 = 0.0;
   double Recon_1 = 0.0;
   double CS_22 = 0.0;
   double CF_15 = 0.0;
   double CF_01 = 0.0;
   double omega_0 = 0.0;
   double AVG_0_u0 = 0.0;
   double CF_11 = 0.0;
   double CF_00 = 0.0;
   double CF_13 = 0.0;
   double CF_20 = 0.0;
   double CF_23 = 0.0;
   double AVG_0_a = 0.0;
   double CS_15 = 0.0;
   double alpha_0 = 0.0;
   double Recon_2 = 0.0;
   double CS_01 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double max_lambda_0_11 = 0.0;
   double CF_05 = 0.0;
   double CS_02 = 0.0;
   double CF_03 = 0.0;
   double Recon_0 = 0.0;
   double AVG_0_rho = 0.0;
   double alpha_1 = 0.0;
   double beta_2 = 0.0;
   double CS_14 = 0.0;
   double AVG_0_inv_rho = 0.0;
   double CS_12 = 0.0;
   double CS_11 = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   AVG_0_rho = sqrt(rho_B0[OPS_ACC1(0)]*rho_B0[OPS_ACC1(1)]);

   AVG_0_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC1(1)]) + sqrt(rho_B0[OPS_ACC1(0)]));

    AVG_0_u0 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC1(1)])*u0_B0[OPS_ACC5(1)] +
      sqrt(rho_B0[OPS_ACC1(0)])*u0_B0[OPS_ACC5(0)]);

    AVG_0_a = sqrt(gamma_m1*(AVG_0_inv_rho*((p_B0[OPS_ACC4(0)] + rhoE_B0[OPS_ACC0(0)])/sqrt(rho_B0[OPS_ACC1(0)]) +
      (p_B0[OPS_ACC4(1)] + rhoE_B0[OPS_ACC0(1)])/sqrt(rho_B0[OPS_ACC1(1)])) - rc0*pow(AVG_0_u0, 2)));

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

    CF_00 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(-2)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(-2)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(-2)]*u0_B0[OPS_ACC5(-2)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(-2)]*u0_B0[OPS_ACC5(-2)]
      + AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(-2)]*u0_B0[OPS_ACC5(-2)];

    CF_10 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(-2)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(-2)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(-2)]*u0_B0[OPS_ACC5(-2)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(-2)]*u0_B0[OPS_ACC5(-2)]
      + AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(-2)]*u0_B0[OPS_ACC5(-2)];

    CF_20 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(-2)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(-2)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(-2)]*u0_B0[OPS_ACC5(-2)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(-2)]*u0_B0[OPS_ACC5(-2)]
      + AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(-2)]*u0_B0[OPS_ACC5(-2)];

    CF_01 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(-1)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(-1)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(-1)]*u0_B0[OPS_ACC5(-1)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(-1)]*u0_B0[OPS_ACC5(-1)]
      + AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(-1)]*u0_B0[OPS_ACC5(-1)];

    CF_11 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(-1)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(-1)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(-1)]*u0_B0[OPS_ACC5(-1)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(-1)]*u0_B0[OPS_ACC5(-1)]
      + AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(-1)]*u0_B0[OPS_ACC5(-1)];

    CF_21 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(-1)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(-1)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(-1)]*u0_B0[OPS_ACC5(-1)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(-1)]*u0_B0[OPS_ACC5(-1)]
      + AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(-1)]*u0_B0[OPS_ACC5(-1)];

    CF_02 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(0)]*u0_B0[OPS_ACC5(0)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(0)]*u0_B0[OPS_ACC5(0)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(0)]*u0_B0[OPS_ACC5(0)];

    CF_12 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(0)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(0)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(0)]*u0_B0[OPS_ACC5(0)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(0)]*u0_B0[OPS_ACC5(0)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(0)]*u0_B0[OPS_ACC5(0)];

    CF_22 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(0)]*u0_B0[OPS_ACC5(0)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(0)]*u0_B0[OPS_ACC5(0)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(0)]*u0_B0[OPS_ACC5(0)];

    CF_03 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(1)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(1)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(1)]*u0_B0[OPS_ACC5(1)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(1)]*u0_B0[OPS_ACC5(1)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(1)]*u0_B0[OPS_ACC5(1)];

    CF_13 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(1)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(1)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(1)]*u0_B0[OPS_ACC5(1)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(1)]*u0_B0[OPS_ACC5(1)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(1)]*u0_B0[OPS_ACC5(1)];

    CF_23 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(1)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(1)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(1)]*u0_B0[OPS_ACC5(1)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(1)]*u0_B0[OPS_ACC5(1)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(1)]*u0_B0[OPS_ACC5(1)];

    CF_04 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(2)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(2)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(2)]*u0_B0[OPS_ACC5(2)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(2)]*u0_B0[OPS_ACC5(2)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(2)]*u0_B0[OPS_ACC5(2)];

    CF_14 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(2)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(2)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(2)]*u0_B0[OPS_ACC5(2)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(2)]*u0_B0[OPS_ACC5(2)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(2)]*u0_B0[OPS_ACC5(2)];

    CF_24 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(2)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(2)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(2)]*u0_B0[OPS_ACC5(2)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(2)]*u0_B0[OPS_ACC5(2)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(2)]*u0_B0[OPS_ACC5(2)];

    CF_05 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC2(3)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(3)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(3)]*u0_B0[OPS_ACC5(3)] + AVG_0_0_LEV_02*p_B0[OPS_ACC4(3)]*u0_B0[OPS_ACC5(3)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(3)]*u0_B0[OPS_ACC5(3)];

    CF_15 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC2(3)] + AVG_0_0_LEV_11*p_B0[OPS_ACC4(3)] +
      AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(3)]*u0_B0[OPS_ACC5(3)] + AVG_0_0_LEV_12*p_B0[OPS_ACC4(3)]*u0_B0[OPS_ACC5(3)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(3)]*u0_B0[OPS_ACC5(3)];

    CF_25 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC2(3)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(3)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(3)]*u0_B0[OPS_ACC5(3)] + AVG_0_0_LEV_22*p_B0[OPS_ACC4(3)]*u0_B0[OPS_ACC5(3)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(3)]*u0_B0[OPS_ACC5(3)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(-2)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(-2)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(-2)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(-1)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(-1)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(-1)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(0)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(1)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(1)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(1)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(2)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(2)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(2)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(3)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC2(3)] +
      AVG_0_0_LEV_02*rhoE_B0[OPS_ACC0(3)];

    CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(-2)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(-2)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(-2)];

    CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(-1)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(-1)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(-1)];

    CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(0)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(0)];

    CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(1)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(1)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(1)];

    CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(2)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(2)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(2)];

    CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(3)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC2(3)] +
      AVG_0_0_LEV_12*rhoE_B0[OPS_ACC0(3)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(-2)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(-2)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(-2)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(-1)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(-1)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(-1)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(0)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(1)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(1)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(1)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(2)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(2)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(2)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(3)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC2(3)] +
      AVG_0_0_LEV_22*rhoE_B0[OPS_ACC0(3)];

    max_lambda_0_00 = fmax(fabs(a_B0[OPS_ACC3(-2)] - u0_B0[OPS_ACC5(-2)]), fmax(fabs(a_B0[OPS_ACC3(2)] -
      u0_B0[OPS_ACC5(2)]), fmax(fabs(a_B0[OPS_ACC3(1)] - u0_B0[OPS_ACC5(1)]), fmax(fabs(a_B0[OPS_ACC3(-1)] -
      u0_B0[OPS_ACC5(-1)]), fmax(fabs(a_B0[OPS_ACC3(3)] - u0_B0[OPS_ACC5(3)]), fabs(a_B0[OPS_ACC3(0)] -
      u0_B0[OPS_ACC5(0)]))))));

    max_lambda_0_11 = fmax(fabs(u0_B0[OPS_ACC5(-1)]), fmax(fabs(u0_B0[OPS_ACC5(0)]), fmax(fabs(u0_B0[OPS_ACC5(3)]),
      fmax(fabs(u0_B0[OPS_ACC5(2)]), fmax(fabs(u0_B0[OPS_ACC5(1)]), fabs(u0_B0[OPS_ACC5(-2)]))))));

    max_lambda_0_22 = fmax(fabs(a_B0[OPS_ACC3(0)] + u0_B0[OPS_ACC5(0)]), fmax(fabs(a_B0[OPS_ACC3(1)] +
      u0_B0[OPS_ACC5(1)]), fmax(fabs(a_B0[OPS_ACC3(-2)] + u0_B0[OPS_ACC5(-2)]), fmax(fabs(a_B0[OPS_ACC3(3)] +
      u0_B0[OPS_ACC5(3)]), fmax(fabs(a_B0[OPS_ACC3(2)] + u0_B0[OPS_ACC5(2)]), fabs(a_B0[OPS_ACC3(-1)] +
      u0_B0[OPS_ACC5(-1)]))))));

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

   alpha_0 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

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

   alpha_0 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

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

   alpha_0 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

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

   alpha_0 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

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

   alpha_0 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

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

   alpha_0 = 0.1 + (rc13)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc12)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc11)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc18)*(CF_23 - CS_23*max_lambda_0_22) - rc17*(CF_24 - CS_24*max_lambda_0_22) +
      (rc14)*(CF_25 - CS_25*max_lambda_0_22)) + omega_1*((rc14)*(CF_22 - CS_22*max_lambda_0_22) + (rc15)*(CF_23 -
      CS_23*max_lambda_0_22) - rc16*(CF_24 - CS_24*max_lambda_0_22)) + omega_2*(-rc16*(CF_21 - CS_21*max_lambda_0_22) +
      (rc15)*(CF_22 - CS_22*max_lambda_0_22) + (rc14)*(CF_23 - CS_23*max_lambda_0_22));

   wk0_B0[OPS_ACC6(0)] = Recon_0 + Recon_1 + Recon_2;

   wk1_B0[OPS_ACC8(0)] = AVG_0_u0*Recon_1 + Recon_0*(-AVG_0_a + AVG_0_u0) + Recon_2*(AVG_0_a + AVG_0_u0);

    wk2_B0[OPS_ACC7(0)] = (rc0)*pow(AVG_0_u0, 2)*Recon_1 + Recon_0*(rcinv19*pow(AVG_0_a, 2) - AVG_0_a*AVG_0_u0 +
      (rc0)*pow(AVG_0_u0, 2)) + Recon_2*(rcinv19*pow(AVG_0_a, 2) + AVG_0_a*AVG_0_u0 + (rc0)*pow(AVG_0_u0, 2));

}

 void opensbliblock00Kernel006(const double *wk0_B0, const double *wk2_B0, const double *wk1_B0, double *Residual2_B0,
double *Residual0_B0, double *Residual1_B0)
{
   Residual0_B0[OPS_ACC4(0)] = -rcinv20*(-wk0_B0[OPS_ACC0(-1)] + wk0_B0[OPS_ACC0(0)]);

   Residual1_B0[OPS_ACC5(0)] = -rcinv20*(wk1_B0[OPS_ACC2(0)] - wk1_B0[OPS_ACC2(-1)]);

   Residual2_B0[OPS_ACC3(0)] = -rcinv20*(-wk2_B0[OPS_ACC1(-1)] + wk2_B0[OPS_ACC1(0)]);

}

 void opensbliblock00Kernel011(const double *Residual2_B0, const double *Residual0_B0, const double *Residual1_B0,
double *rhoE_B0, double *tempRK_rhoE_B0, double *rho_B0, double *rhou0_B0, double *tempRK_rhou0_B0, double
*tempRK_rho_B0, const double *rkB, const double *rkA)
{
   tempRK_rho_B0[OPS_ACC8(0)] = dt*Residual0_B0[OPS_ACC1(0)] + rkA[0]*tempRK_rho_B0[OPS_ACC8(0)];

   rho_B0[OPS_ACC5(0)] = rkB[0]*tempRK_rho_B0[OPS_ACC8(0)] + rho_B0[OPS_ACC5(0)];

   tempRK_rhou0_B0[OPS_ACC7(0)] = dt*Residual1_B0[OPS_ACC2(0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC7(0)];

   rhou0_B0[OPS_ACC6(0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC7(0)] + rhou0_B0[OPS_ACC6(0)];

   tempRK_rhoE_B0[OPS_ACC4(0)] = dt*Residual2_B0[OPS_ACC0(0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC4(0)];

   rhoE_B0[OPS_ACC3(0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC4(0)] + rhoE_B0[OPS_ACC3(0)];

}

#endif
