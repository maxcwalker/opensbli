#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel037(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0, ACC<double> &x0_B0, ACC<double> &x1_B0, ACC<double> &x2_B0, const int *idx)
{
   double p = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   double u1 = 0.0;
   double u2 = 0.0;
   double x0 = 0.0;
   double x1 = 0.0;
   double x2 = 0.0;
   x0 = Delta0block0*idx[0];

   x1 = Delta1block0*idx[1];

   x2 = Delta2block0*idx[2];

   u0 = cos(x1)*cos(x2)*sin(x0);

   u1 = -cos(x0)*cos(x2)*sin(x1);

   u2 = 0.0;

   p = (2.0 + cos(2.0*x2))*(0.0625*cos(2.0*x0) + 0.0625*cos(2.0*x1)) + 1.0/((Minf*Minf)*gama);

   r = gama*p*(Minf*Minf);

   rho_B0(0,0,0) = r;

   rhou0_B0(0,0,0) = r*u0;

   rhou1_B0(0,0,0) = r*u1;

   rhou2_B0(0,0,0) = r*u2;

   rhoE_B0(0,0,0) = p/(-1 + gama) + 0.5*r*((u0*u0) + (u1*u1) + (u2*u2));

   x0_B0(0,0,0) = x0;

   x1_B0(0,0,0) = x1;

   x2_B0(0,0,0) = x2;

}

void opensbliblock00Kernel005(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0,0) = rhou0_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel007(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0,0) = rhou1_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel009(const ACC<double> &rho_B0, const ACC<double> &rhou2_B0, ACC<double> &u2_B0)
{
   u2_B0(0,0,0) = rhou2_B0(0,0,0)/rho_B0(0,0,0);

}

 void opensbliblock00Kernel019(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &p_B0)
{
    p_B0(0,0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0,0)*u0_B0(0,0,0))*rho_B0(0,0,0) -
      (1.0/2.0)*(u1_B0(0,0,0)*u1_B0(0,0,0))*rho_B0(0,0,0) - (1.0/2.0)*(u2_B0(0,0,0)*u2_B0(0,0,0))*rho_B0(0,0,0) +
      rhoE_B0(0,0,0));

}

 void opensbliblock00Kernel016(const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0,
ACC<double> &H_B0)
{
   H_B0(0,0,0) = (p_B0(0,0,0) + rhoE_B0(0,0,0))/rho_B0(0,0,0);

}

void opensbliblock00Kernel022(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0,0) = (Minf*Minf)*gama*p_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel023(const ACC<double> &T_B0, ACC<double> &mu_B0)
{
   mu_B0(0,0,0) = 1.4042*T_B0(0,0,0)*sqrt(T_B0(0,0,0))/(0.40417 + T_B0(0,0,0));

}

void opensbliblock00Kernel004(const ACC<double> &u0_B0, ACC<double> &wk0_B0)
{
    wk0_B0(0,0,0) = (-(2.0/3.0)*u0_B0(-1,0,0) - (1.0/12.0)*u0_B0(2,0,0) + ((1.0/12.0))*u0_B0(-2,0,0) +
      ((2.0/3.0))*u0_B0(1,0,0))*invDelta0block0;

}

void opensbliblock00Kernel006(const ACC<double> &u1_B0, ACC<double> &wk1_B0)
{
    wk1_B0(0,0,0) = (-(2.0/3.0)*u1_B0(-1,0,0) - (1.0/12.0)*u1_B0(2,0,0) + ((1.0/12.0))*u1_B0(-2,0,0) +
      ((2.0/3.0))*u1_B0(1,0,0))*invDelta0block0;

}

void opensbliblock00Kernel008(const ACC<double> &u2_B0, ACC<double> &wk2_B0)
{
    wk2_B0(0,0,0) = (-(2.0/3.0)*u2_B0(-1,0,0) - (1.0/12.0)*u2_B0(2,0,0) + ((1.0/12.0))*u2_B0(-2,0,0) +
      ((2.0/3.0))*u2_B0(1,0,0))*invDelta0block0;

}

void opensbliblock00Kernel010(const ACC<double> &u0_B0, ACC<double> &wk3_B0)
{
    wk3_B0(0,0,0) = (-(2.0/3.0)*u0_B0(0,-1,0) - (1.0/12.0)*u0_B0(0,2,0) + ((1.0/12.0))*u0_B0(0,-2,0) +
      ((2.0/3.0))*u0_B0(0,1,0))*invDelta1block0;

}

void opensbliblock00Kernel011(const ACC<double> &u1_B0, ACC<double> &wk4_B0)
{
    wk4_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,-1,0) - (1.0/12.0)*u1_B0(0,2,0) + ((1.0/12.0))*u1_B0(0,-2,0) +
      ((2.0/3.0))*u1_B0(0,1,0))*invDelta1block0;

}

void opensbliblock00Kernel012(const ACC<double> &u2_B0, ACC<double> &wk5_B0)
{
    wk5_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,-1,0) - (1.0/12.0)*u2_B0(0,2,0) + ((1.0/12.0))*u2_B0(0,-2,0) +
      ((2.0/3.0))*u2_B0(0,1,0))*invDelta1block0;

}

void opensbliblock00Kernel013(const ACC<double> &u0_B0, ACC<double> &wk6_B0)
{
    wk6_B0(0,0,0) = (-(2.0/3.0)*u0_B0(0,0,-1) - (1.0/12.0)*u0_B0(0,0,2) + ((1.0/12.0))*u0_B0(0,0,-2) +
      ((2.0/3.0))*u0_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel014(const ACC<double> &u1_B0, ACC<double> &wk7_B0)
{
    wk7_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,0,-1) - (1.0/12.0)*u1_B0(0,0,2) + ((1.0/12.0))*u1_B0(0,0,-2) +
      ((2.0/3.0))*u1_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel015(const ACC<double> &u2_B0, ACC<double> &wk8_B0)
{
    wk8_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,0,-1) - (1.0/12.0)*u2_B0(0,0,2) + ((1.0/12.0))*u2_B0(0,0,-2) +
      ((2.0/3.0))*u2_B0(0,0,1))*invDelta2block0;

}

 void opensbliblock00Kernel029(const ACC<double> &H_B0, const ACC<double> &p_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double>
&wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double> &wk6_B0,
const ACC<double> &wk7_B0, const ACC<double> &wk8_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double>
&Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0)
{
   double d1_H_dx = 0.0;
   double d1_H_dy = 0.0;
   double d1_H_dz = 0.0;
   double d1_Hrho_dx = 0.0;
   double d1_Hrho_dy = 0.0;
   double d1_Hrho_dz = 0.0;
   double d1_Hrhou0_dx = 0.0;
   double d1_Hrhou1_dy = 0.0;
   double d1_Hrhou2_dz = 0.0;
   double d1_Hu0_dx = 0.0;
   double d1_Hu1_dy = 0.0;
   double d1_Hu2_dz = 0.0;
   double d1_p_dx = 0.0;
   double d1_p_dy = 0.0;
   double d1_p_dz = 0.0;
   double d1_rho_dx = 0.0;
   double d1_rho_dy = 0.0;
   double d1_rho_dz = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0_dy = 0.0;
   double d1_rhou0_dz = 0.0;
   double d1_rhou0u0_dx = 0.0;
   double d1_rhou0u1_dx = 0.0;
   double d1_rhou0u2_dx = 0.0;
   double d1_rhou1_dx = 0.0;
   double d1_rhou1_dy = 0.0;
   double d1_rhou1_dz = 0.0;
   double d1_rhou1u0_dy = 0.0;
   double d1_rhou1u1_dy = 0.0;
   double d1_rhou1u2_dy = 0.0;
   double d1_rhou2_dx = 0.0;
   double d1_rhou2_dy = 0.0;
   double d1_rhou2_dz = 0.0;
   double d1_rhou2u0_dz = 0.0;
   double d1_rhou2u1_dz = 0.0;
   double d1_rhou2u2_dz = 0.0;
   double d1_u0u0_dx = 0.0;
   double d1_u0u1_dx = 0.0;
   double d1_u0u1_dy = 0.0;
   double d1_u0u2_dx = 0.0;
   double d1_u0u2_dz = 0.0;
   double d1_u1u1_dy = 0.0;
   double d1_u1u2_dy = 0.0;
   double d1_u1u2_dz = 0.0;
   double d1_u2u2_dz = 0.0;
   d1_H_dx = -(1.0/12.0)*(-H_B0(-2,0,0) - 8*H_B0(1,0,0) + 8*H_B0(-1,0,0) + H_B0(2,0,0))*invDelta0block0;

    d1_Hrho_dx = ((1.0/12.0))*(H_B0(-2,0,0)*rho_B0(-2,0,0) - H_B0(2,0,0)*rho_B0(2,0,0) - 8*H_B0(-1,0,0)*rho_B0(-1,0,0) +
      8*H_B0(1,0,0)*rho_B0(1,0,0))*invDelta0block0;

    d1_Hrhou0_dx = ((1.0/12.0))*(H_B0(-2,0,0)*rhou0_B0(-2,0,0) - H_B0(2,0,0)*rhou0_B0(2,0,0) -
      8*H_B0(-1,0,0)*rhou0_B0(-1,0,0) + 8*H_B0(1,0,0)*rhou0_B0(1,0,0))*invDelta0block0;

    d1_Hu0_dx = ((1.0/12.0))*(H_B0(-2,0,0)*u0_B0(-2,0,0) - H_B0(2,0,0)*u0_B0(2,0,0) - 8*H_B0(-1,0,0)*u0_B0(-1,0,0) +
      8*H_B0(1,0,0)*u0_B0(1,0,0))*invDelta0block0;

   d1_p_dx = -(1.0/12.0)*(-p_B0(-2,0,0) - 8*p_B0(1,0,0) + 8*p_B0(-1,0,0) + p_B0(2,0,0))*invDelta0block0;

   d1_rho_dx = -(1.0/12.0)*(-rho_B0(-2,0,0) - 8*rho_B0(1,0,0) + 8*rho_B0(-1,0,0) + rho_B0(2,0,0))*invDelta0block0;

    d1_rhou0_dx = -(1.0/12.0)*(-rhou0_B0(-2,0,0) - 8*rhou0_B0(1,0,0) + 8*rhou0_B0(-1,0,0) +
      rhou0_B0(2,0,0))*invDelta0block0;

    d1_rhou0u0_dx = -(1.0/12.0)*(u0_B0(2,0,0)*rhou0_B0(2,0,0) - u0_B0(-2,0,0)*rhou0_B0(-2,0,0) -
      8*u0_B0(1,0,0)*rhou0_B0(1,0,0) + 8*u0_B0(-1,0,0)*rhou0_B0(-1,0,0))*invDelta0block0;

    d1_rhou0u1_dx = -(1.0/12.0)*(u1_B0(2,0,0)*rhou0_B0(2,0,0) - u1_B0(-2,0,0)*rhou0_B0(-2,0,0) -
      8*u1_B0(1,0,0)*rhou0_B0(1,0,0) + 8*u1_B0(-1,0,0)*rhou0_B0(-1,0,0))*invDelta0block0;

    d1_rhou0u2_dx = -(1.0/12.0)*(u2_B0(2,0,0)*rhou0_B0(2,0,0) - u2_B0(-2,0,0)*rhou0_B0(-2,0,0) -
      8*u2_B0(1,0,0)*rhou0_B0(1,0,0) + 8*u2_B0(-1,0,0)*rhou0_B0(-1,0,0))*invDelta0block0;

    d1_rhou1_dx = -(1.0/12.0)*(-rhou1_B0(-2,0,0) - 8*rhou1_B0(1,0,0) + 8*rhou1_B0(-1,0,0) +
      rhou1_B0(2,0,0))*invDelta0block0;

    d1_rhou2_dx = -(1.0/12.0)*(-rhou2_B0(-2,0,0) - 8*rhou2_B0(1,0,0) + 8*rhou2_B0(-1,0,0) +
      rhou2_B0(2,0,0))*invDelta0block0;

    d1_u0u0_dx = -(1.0/12.0)*((u0_B0(2,0,0)*u0_B0(2,0,0)) - (u0_B0(-2,0,0)*u0_B0(-2,0,0)) -
      8*(u0_B0(1,0,0)*u0_B0(1,0,0)) + 8*(u0_B0(-1,0,0)*u0_B0(-1,0,0)))*invDelta0block0;

    d1_u0u1_dx = ((1.0/12.0))*(u0_B0(-2,0,0)*u1_B0(-2,0,0) - u0_B0(2,0,0)*u1_B0(2,0,0) - 8*u0_B0(-1,0,0)*u1_B0(-1,0,0) +
      8*u0_B0(1,0,0)*u1_B0(1,0,0))*invDelta0block0;

    d1_u0u2_dx = -(1.0/12.0)*(u0_B0(2,0,0)*u2_B0(2,0,0) - u0_B0(-2,0,0)*u2_B0(-2,0,0) - 8*u0_B0(1,0,0)*u2_B0(1,0,0) +
      8*u0_B0(-1,0,0)*u2_B0(-1,0,0))*invDelta0block0;

   d1_H_dy = -(1.0/12.0)*(-H_B0(0,-2,0) - 8*H_B0(0,1,0) + 8*H_B0(0,-1,0) + H_B0(0,2,0))*invDelta1block0;

    d1_Hrho_dy = ((1.0/12.0))*(H_B0(0,-2,0)*rho_B0(0,-2,0) - H_B0(0,2,0)*rho_B0(0,2,0) - 8*H_B0(0,-1,0)*rho_B0(0,-1,0) +
      8*H_B0(0,1,0)*rho_B0(0,1,0))*invDelta1block0;

    d1_Hrhou1_dy = ((1.0/12.0))*(H_B0(0,-2,0)*rhou1_B0(0,-2,0) - H_B0(0,2,0)*rhou1_B0(0,2,0) -
      8*H_B0(0,-1,0)*rhou1_B0(0,-1,0) + 8*H_B0(0,1,0)*rhou1_B0(0,1,0))*invDelta1block0;

    d1_Hu1_dy = ((1.0/12.0))*(H_B0(0,-2,0)*u1_B0(0,-2,0) - H_B0(0,2,0)*u1_B0(0,2,0) - 8*H_B0(0,-1,0)*u1_B0(0,-1,0) +
      8*H_B0(0,1,0)*u1_B0(0,1,0))*invDelta1block0;

   d1_p_dy = -(1.0/12.0)*(-p_B0(0,-2,0) - 8*p_B0(0,1,0) + 8*p_B0(0,-1,0) + p_B0(0,2,0))*invDelta1block0;

   d1_rho_dy = -(1.0/12.0)*(-rho_B0(0,-2,0) - 8*rho_B0(0,1,0) + 8*rho_B0(0,-1,0) + rho_B0(0,2,0))*invDelta1block0;

    d1_rhou0_dy = -(1.0/12.0)*(-rhou0_B0(0,-2,0) - 8*rhou0_B0(0,1,0) + 8*rhou0_B0(0,-1,0) +
      rhou0_B0(0,2,0))*invDelta1block0;

    d1_rhou1_dy = -(1.0/12.0)*(-rhou1_B0(0,-2,0) - 8*rhou1_B0(0,1,0) + 8*rhou1_B0(0,-1,0) +
      rhou1_B0(0,2,0))*invDelta1block0;

    d1_rhou1u0_dy = ((1.0/12.0))*(u0_B0(0,-2,0)*rhou1_B0(0,-2,0) - u0_B0(0,2,0)*rhou1_B0(0,2,0) -
      8*u0_B0(0,-1,0)*rhou1_B0(0,-1,0) + 8*u0_B0(0,1,0)*rhou1_B0(0,1,0))*invDelta1block0;

    d1_rhou1u1_dy = ((1.0/12.0))*(u1_B0(0,-2,0)*rhou1_B0(0,-2,0) - u1_B0(0,2,0)*rhou1_B0(0,2,0) -
      8*u1_B0(0,-1,0)*rhou1_B0(0,-1,0) + 8*u1_B0(0,1,0)*rhou1_B0(0,1,0))*invDelta1block0;

    d1_rhou1u2_dy = ((1.0/12.0))*(u2_B0(0,-2,0)*rhou1_B0(0,-2,0) - u2_B0(0,2,0)*rhou1_B0(0,2,0) -
      8*u2_B0(0,-1,0)*rhou1_B0(0,-1,0) + 8*u2_B0(0,1,0)*rhou1_B0(0,1,0))*invDelta1block0;

    d1_rhou2_dy = -(1.0/12.0)*(-rhou2_B0(0,-2,0) - 8*rhou2_B0(0,1,0) + 8*rhou2_B0(0,-1,0) +
      rhou2_B0(0,2,0))*invDelta1block0;

    d1_u0u1_dy = ((1.0/12.0))*(u0_B0(0,-2,0)*u1_B0(0,-2,0) - u0_B0(0,2,0)*u1_B0(0,2,0) - 8*u0_B0(0,-1,0)*u1_B0(0,-1,0) +
      8*u0_B0(0,1,0)*u1_B0(0,1,0))*invDelta1block0;

    d1_u1u1_dy = ((1.0/12.0))*((u1_B0(0,-2,0)*u1_B0(0,-2,0)) - (u1_B0(0,2,0)*u1_B0(0,2,0)) -
      8*(u1_B0(0,-1,0)*u1_B0(0,-1,0)) + 8*(u1_B0(0,1,0)*u1_B0(0,1,0)))*invDelta1block0;

    d1_u1u2_dy = ((1.0/12.0))*(u1_B0(0,-2,0)*u2_B0(0,-2,0) - u1_B0(0,2,0)*u2_B0(0,2,0) - 8*u1_B0(0,-1,0)*u2_B0(0,-1,0) +
      8*u1_B0(0,1,0)*u2_B0(0,1,0))*invDelta1block0;

   d1_H_dz = -(1.0/12.0)*(-H_B0(0,0,-2) - 8*H_B0(0,0,1) + 8*H_B0(0,0,-1) + H_B0(0,0,2))*invDelta2block0;

    d1_Hrho_dz = ((1.0/12.0))*(H_B0(0,0,-2)*rho_B0(0,0,-2) - H_B0(0,0,2)*rho_B0(0,0,2) - 8*H_B0(0,0,-1)*rho_B0(0,0,-1) +
      8*H_B0(0,0,1)*rho_B0(0,0,1))*invDelta2block0;

    d1_Hrhou2_dz = ((1.0/12.0))*(H_B0(0,0,-2)*rhou2_B0(0,0,-2) - H_B0(0,0,2)*rhou2_B0(0,0,2) -
      8*H_B0(0,0,-1)*rhou2_B0(0,0,-1) + 8*H_B0(0,0,1)*rhou2_B0(0,0,1))*invDelta2block0;

    d1_Hu2_dz = -(1.0/12.0)*(H_B0(0,0,2)*u2_B0(0,0,2) - H_B0(0,0,-2)*u2_B0(0,0,-2) - 8*H_B0(0,0,1)*u2_B0(0,0,1) +
      8*H_B0(0,0,-1)*u2_B0(0,0,-1))*invDelta2block0;

   d1_p_dz = -(1.0/12.0)*(-p_B0(0,0,-2) - 8*p_B0(0,0,1) + 8*p_B0(0,0,-1) + p_B0(0,0,2))*invDelta2block0;

   d1_rho_dz = -(1.0/12.0)*(-rho_B0(0,0,-2) - 8*rho_B0(0,0,1) + 8*rho_B0(0,0,-1) + rho_B0(0,0,2))*invDelta2block0;

    d1_rhou0_dz = -(1.0/12.0)*(-rhou0_B0(0,0,-2) - 8*rhou0_B0(0,0,1) + 8*rhou0_B0(0,0,-1) +
      rhou0_B0(0,0,2))*invDelta2block0;

    d1_rhou1_dz = -(1.0/12.0)*(-rhou1_B0(0,0,-2) - 8*rhou1_B0(0,0,1) + 8*rhou1_B0(0,0,-1) +
      rhou1_B0(0,0,2))*invDelta2block0;

    d1_rhou2_dz = -(1.0/12.0)*(-rhou2_B0(0,0,-2) - 8*rhou2_B0(0,0,1) + 8*rhou2_B0(0,0,-1) +
      rhou2_B0(0,0,2))*invDelta2block0;

    d1_rhou2u0_dz = ((1.0/12.0))*(u0_B0(0,0,-2)*rhou2_B0(0,0,-2) - u0_B0(0,0,2)*rhou2_B0(0,0,2) -
      8*u0_B0(0,0,-1)*rhou2_B0(0,0,-1) + 8*u0_B0(0,0,1)*rhou2_B0(0,0,1))*invDelta2block0;

    d1_rhou2u1_dz = ((1.0/12.0))*(u1_B0(0,0,-2)*rhou2_B0(0,0,-2) - u1_B0(0,0,2)*rhou2_B0(0,0,2) -
      8*u1_B0(0,0,-1)*rhou2_B0(0,0,-1) + 8*u1_B0(0,0,1)*rhou2_B0(0,0,1))*invDelta2block0;

    d1_rhou2u2_dz = ((1.0/12.0))*(u2_B0(0,0,-2)*rhou2_B0(0,0,-2) - u2_B0(0,0,2)*rhou2_B0(0,0,2) -
      8*u2_B0(0,0,-1)*rhou2_B0(0,0,-1) + 8*u2_B0(0,0,1)*rhou2_B0(0,0,1))*invDelta2block0;

    d1_u0u2_dz = ((1.0/12.0))*(u0_B0(0,0,-2)*u2_B0(0,0,-2) - u0_B0(0,0,2)*u2_B0(0,0,2) - 8*u0_B0(0,0,-1)*u2_B0(0,0,-1) +
      8*u0_B0(0,0,1)*u2_B0(0,0,1))*invDelta2block0;

    d1_u1u2_dz = -(1.0/12.0)*(u1_B0(0,0,2)*u2_B0(0,0,2) - u1_B0(0,0,-2)*u2_B0(0,0,-2) - 8*u1_B0(0,0,1)*u2_B0(0,0,1) +
      8*u1_B0(0,0,-1)*u2_B0(0,0,-1))*invDelta2block0;

    d1_u2u2_dz = ((1.0/12.0))*((u2_B0(0,0,-2)*u2_B0(0,0,-2)) - (u2_B0(0,0,2)*u2_B0(0,0,2)) -
      8*(u2_B0(0,0,-1)*u2_B0(0,0,-1)) + 8*(u2_B0(0,0,1)*u2_B0(0,0,1)))*invDelta2block0;

    Residual0_B0(0,0,0) = -(1.0/2.0)*d1_rhou0_dx - (1.0/2.0)*d1_rhou1_dy - (1.0/2.0)*d1_rhou2_dz -
      (1.0/2.0)*(wk0_B0(0,0,0) + wk4_B0(0,0,0) + wk8_B0(0,0,0))*rho_B0(0,0,0) - (1.0/2.0)*u0_B0(0,0,0)*d1_rho_dx -
      (1.0/2.0)*u1_B0(0,0,0)*d1_rho_dy - (1.0/2.0)*u2_B0(0,0,0)*d1_rho_dz;

    Residual1_B0(0,0,0) = -d1_p_dx - (1.0/4.0)*d1_rhou0u0_dx - (1.0/4.0)*d1_rhou1u0_dy - (1.0/4.0)*d1_rhou2u0_dz -
      (1.0/2.0)*u0_B0(0,0,0)*d1_rhou0_dx - (1.0/2.0)*wk0_B0(0,0,0)*rhou0_B0(0,0,0) -
      (1.0/4.0)*(u0_B0(0,0,0)*u0_B0(0,0,0))*d1_rho_dx - (1.0/4.0)*u0_B0(0,0,0)*d1_rhou1_dy -
      (1.0/4.0)*u0_B0(0,0,0)*d1_rhou2_dz - (1.0/4.0)*u1_B0(0,0,0)*d1_rhou0_dy - (1.0/4.0)*u2_B0(0,0,0)*d1_rhou0_dz -
      (1.0/4.0)*rho_B0(0,0,0)*d1_u0u0_dx - (1.0/4.0)*rho_B0(0,0,0)*d1_u0u1_dy - (1.0/4.0)*rho_B0(0,0,0)*d1_u0u2_dz -
      (1.0/4.0)*wk3_B0(0,0,0)*rhou1_B0(0,0,0) - (1.0/4.0)*wk4_B0(0,0,0)*rhou0_B0(0,0,0) -
      (1.0/4.0)*wk6_B0(0,0,0)*rhou2_B0(0,0,0) - (1.0/4.0)*wk8_B0(0,0,0)*rhou0_B0(0,0,0) -
      (1.0/4.0)*u0_B0(0,0,0)*u1_B0(0,0,0)*d1_rho_dy - (1.0/4.0)*u0_B0(0,0,0)*u2_B0(0,0,0)*d1_rho_dz;

    Residual2_B0(0,0,0) = -d1_p_dy - (1.0/4.0)*d1_rhou0u1_dx - (1.0/4.0)*d1_rhou1u1_dy - (1.0/4.0)*d1_rhou2u1_dz -
      (1.0/4.0)*(u1_B0(0,0,0)*u1_B0(0,0,0))*d1_rho_dy - (1.0/4.0)*(wk0_B0(0,0,0) + wk4_B0(0,0,0) +
      wk8_B0(0,0,0))*rhou1_B0(0,0,0) - (1.0/4.0)*(d1_rhou0_dx + d1_rhou1_dy + d1_rhou2_dz)*u1_B0(0,0,0) -
      (1.0/4.0)*(d1_u0u1_dx + d1_u1u1_dy + d1_u1u2_dz)*rho_B0(0,0,0) - (1.0/4.0)*u0_B0(0,0,0)*d1_rhou1_dx -
      (1.0/4.0)*u1_B0(0,0,0)*d1_rhou1_dy - (1.0/4.0)*u2_B0(0,0,0)*d1_rhou1_dz - (1.0/4.0)*wk1_B0(0,0,0)*rhou0_B0(0,0,0)
      - (1.0/4.0)*wk4_B0(0,0,0)*rhou1_B0(0,0,0) - (1.0/4.0)*wk7_B0(0,0,0)*rhou2_B0(0,0,0) -
      (1.0/4.0)*u0_B0(0,0,0)*u1_B0(0,0,0)*d1_rho_dx - (1.0/4.0)*u1_B0(0,0,0)*u2_B0(0,0,0)*d1_rho_dz;

    Residual3_B0(0,0,0) = -d1_p_dz - (1.0/4.0)*d1_rhou0u2_dx - (1.0/4.0)*d1_rhou1u2_dy - (1.0/4.0)*d1_rhou2u2_dz -
      (1.0/4.0)*(u2_B0(0,0,0)*u2_B0(0,0,0))*d1_rho_dz - (1.0/4.0)*(wk0_B0(0,0,0) + wk4_B0(0,0,0) +
      wk8_B0(0,0,0))*rhou2_B0(0,0,0) - (1.0/4.0)*(d1_rhou0_dx + d1_rhou1_dy + d1_rhou2_dz)*u2_B0(0,0,0) -
      (1.0/4.0)*(d1_u0u2_dx + d1_u1u2_dy + d1_u2u2_dz)*rho_B0(0,0,0) - (1.0/4.0)*u0_B0(0,0,0)*d1_rhou2_dx -
      (1.0/4.0)*u1_B0(0,0,0)*d1_rhou2_dy - (1.0/4.0)*u2_B0(0,0,0)*d1_rhou2_dz - (1.0/4.0)*wk2_B0(0,0,0)*rhou0_B0(0,0,0)
      - (1.0/4.0)*wk5_B0(0,0,0)*rhou1_B0(0,0,0) - (1.0/4.0)*wk8_B0(0,0,0)*rhou2_B0(0,0,0) -
      (1.0/4.0)*u0_B0(0,0,0)*u2_B0(0,0,0)*d1_rho_dx - (1.0/4.0)*u1_B0(0,0,0)*u2_B0(0,0,0)*d1_rho_dy;

    Residual4_B0(0,0,0) = -(1.0/4.0)*d1_Hrhou0_dx - (1.0/4.0)*d1_Hrhou1_dy - (1.0/4.0)*d1_Hrhou2_dz -
      (1.0/4.0)*(d1_Hu0_dx + d1_Hu1_dy + d1_Hu2_dz)*rho_B0(0,0,0) - (1.0/4.0)*(d1_rhou0_dx + d1_rhou1_dy +
      d1_rhou2_dz)*H_B0(0,0,0) - (1.0/4.0)*u0_B0(0,0,0)*d1_Hrho_dx - (1.0/4.0)*u1_B0(0,0,0)*d1_Hrho_dy -
      (1.0/4.0)*u2_B0(0,0,0)*d1_Hrho_dz - (1.0/4.0)*rhou0_B0(0,0,0)*d1_H_dx - (1.0/4.0)*rhou1_B0(0,0,0)*d1_H_dy -
      (1.0/4.0)*rhou2_B0(0,0,0)*d1_H_dz - (1.0/4.0)*(wk0_B0(0,0,0) + wk4_B0(0,0,0) +
      wk8_B0(0,0,0))*H_B0(0,0,0)*rho_B0(0,0,0) - (1.0/4.0)*H_B0(0,0,0)*u0_B0(0,0,0)*d1_rho_dx -
      (1.0/4.0)*H_B0(0,0,0)*u1_B0(0,0,0)*d1_rho_dy - (1.0/4.0)*H_B0(0,0,0)*u2_B0(0,0,0)*d1_rho_dz;

}

 void opensbliblock00Kernel030(const ACC<double> &T_B0, const ACC<double> &mu_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double>
&wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double> &wk6_B0,
const ACC<double> &wk7_B0, const ACC<double> &wk8_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double>
&Residual3_B0, ACC<double> &Residual4_B0)
{
   double d1_T_dx = 0.0;
   double d1_T_dy = 0.0;
   double d1_T_dz = 0.0;
   double d1_mu_dx = 0.0;
   double d1_mu_dy = 0.0;
   double d1_mu_dz = 0.0;
   double d1_wk0_dy = 0.0;
   double d1_wk0_dz = 0.0;
   double d1_wk1_dy = 0.0;
   double d1_wk2_dz = 0.0;
   double d1_wk4_dz = 0.0;
   double d1_wk5_dz = 0.0;
   double d2_T_dx = 0.0;
   double d2_T_dy = 0.0;
   double d2_T_dz = 0.0;
   double d2_u0_dx = 0.0;
   double d2_u0_dy = 0.0;
   double d2_u0_dz = 0.0;
   double d2_u1_dx = 0.0;
   double d2_u1_dy = 0.0;
   double d2_u1_dz = 0.0;
   double d2_u2_dx = 0.0;
   double d2_u2_dy = 0.0;
   double d2_u2_dz = 0.0;
   d1_T_dx = ((1.0/12.0))*(-T_B0(2,0,0) - 8*T_B0(-1,0,0) + 8*T_B0(1,0,0) + T_B0(-2,0,0))*invDelta0block0;

    d2_T_dx = ((1.0/12.0))*(-T_B0(-2,0,0) - T_B0(2,0,0) - 30*T_B0(0,0,0) + 16*T_B0(1,0,0) +
      16*T_B0(-1,0,0))*inv2Delta0block0;

   d1_mu_dx = -(1.0/12.0)*(-mu_B0(-2,0,0) - 8*mu_B0(1,0,0) + 8*mu_B0(-1,0,0) + mu_B0(2,0,0))*invDelta0block0;

    d2_u0_dx = ((1.0/12.0))*(-u0_B0(-2,0,0) - u0_B0(2,0,0) - 30*u0_B0(0,0,0) + 16*u0_B0(1,0,0) +
      16*u0_B0(-1,0,0))*inv2Delta0block0;

    d2_u1_dx = ((1.0/12.0))*(-u1_B0(-2,0,0) - u1_B0(2,0,0) - 30*u1_B0(0,0,0) + 16*u1_B0(1,0,0) +
      16*u1_B0(-1,0,0))*inv2Delta0block0;

    d2_u2_dx = -(1.0/12.0)*(-16*u2_B0(1,0,0) - 16*u2_B0(-1,0,0) + 30*u2_B0(0,0,0) + u2_B0(-2,0,0) +
      u2_B0(2,0,0))*inv2Delta0block0;

   d1_T_dy = ((1.0/12.0))*(-T_B0(0,2,0) - 8*T_B0(0,-1,0) + 8*T_B0(0,1,0) + T_B0(0,-2,0))*invDelta1block0;

    d2_T_dy = ((1.0/12.0))*(-T_B0(0,-2,0) - T_B0(0,2,0) - 30*T_B0(0,0,0) + 16*T_B0(0,1,0) +
      16*T_B0(0,-1,0))*inv2Delta1block0;

   d1_mu_dy = -(1.0/12.0)*(-mu_B0(0,-2,0) - 8*mu_B0(0,1,0) + 8*mu_B0(0,-1,0) + mu_B0(0,2,0))*invDelta1block0;

    d2_u0_dy = ((1.0/12.0))*(-u0_B0(0,-2,0) - u0_B0(0,2,0) - 30*u0_B0(0,0,0) + 16*u0_B0(0,1,0) +
      16*u0_B0(0,-1,0))*inv2Delta1block0;

    d2_u1_dy = ((1.0/12.0))*(-u1_B0(0,-2,0) - u1_B0(0,2,0) - 30*u1_B0(0,0,0) + 16*u1_B0(0,1,0) +
      16*u1_B0(0,-1,0))*inv2Delta1block0;

    d2_u2_dy = -(1.0/12.0)*(-16*u2_B0(0,1,0) - 16*u2_B0(0,-1,0) + 30*u2_B0(0,0,0) + u2_B0(0,-2,0) +
      u2_B0(0,2,0))*inv2Delta1block0;

   d1_wk0_dy = ((1.0/12.0))*(-wk0_B0(0,2,0) - 8*wk0_B0(0,-1,0) + 8*wk0_B0(0,1,0) + wk0_B0(0,-2,0))*invDelta1block0;

   d1_wk1_dy = ((1.0/12.0))*(-wk1_B0(0,2,0) - 8*wk1_B0(0,-1,0) + 8*wk1_B0(0,1,0) + wk1_B0(0,-2,0))*invDelta1block0;

   d1_T_dz = -(1.0/12.0)*(-T_B0(0,0,-2) - 8*T_B0(0,0,1) + 8*T_B0(0,0,-1) + T_B0(0,0,2))*invDelta2block0;

    d2_T_dz = ((1.0/12.0))*(-T_B0(0,0,-2) - T_B0(0,0,2) - 30*T_B0(0,0,0) + 16*T_B0(0,0,1) +
      16*T_B0(0,0,-1))*inv2Delta2block0;

   d1_mu_dz = -(1.0/12.0)*(-mu_B0(0,0,-2) - 8*mu_B0(0,0,1) + 8*mu_B0(0,0,-1) + mu_B0(0,0,2))*invDelta2block0;

    d2_u0_dz = ((1.0/12.0))*(-u0_B0(0,0,-2) - u0_B0(0,0,2) - 30*u0_B0(0,0,0) + 16*u0_B0(0,0,1) +
      16*u0_B0(0,0,-1))*inv2Delta2block0;

    d2_u1_dz = ((1.0/12.0))*(-u1_B0(0,0,-2) - u1_B0(0,0,2) - 30*u1_B0(0,0,0) + 16*u1_B0(0,0,1) +
      16*u1_B0(0,0,-1))*inv2Delta2block0;

    d2_u2_dz = -(1.0/12.0)*(-16*u2_B0(0,0,1) - 16*u2_B0(0,0,-1) + 30*u2_B0(0,0,0) + u2_B0(0,0,-2) +
      u2_B0(0,0,2))*inv2Delta2block0;

   d1_wk0_dz = ((1.0/12.0))*(-wk0_B0(0,0,2) - 8*wk0_B0(0,0,-1) + 8*wk0_B0(0,0,1) + wk0_B0(0,0,-2))*invDelta2block0;

   d1_wk2_dz = -(1.0/12.0)*(-wk2_B0(0,0,-2) - 8*wk2_B0(0,0,1) + 8*wk2_B0(0,0,-1) + wk2_B0(0,0,2))*invDelta2block0;

   d1_wk4_dz = -(1.0/12.0)*(-wk4_B0(0,0,-2) - 8*wk4_B0(0,0,1) + 8*wk4_B0(0,0,-1) + wk4_B0(0,0,2))*invDelta2block0;

   d1_wk5_dz = -(1.0/12.0)*(-wk5_B0(0,0,-2) - 8*wk5_B0(0,0,1) + 8*wk5_B0(0,0,-1) + wk5_B0(0,0,2))*invDelta2block0;

    Residual1_B0(0,0,0) = (wk1_B0(0,0,0) + wk3_B0(0,0,0))*invRe*d1_mu_dy + (wk2_B0(0,0,0) +
      wk6_B0(0,0,0))*invRe*d1_mu_dz + ((1.0/3.0))*(3*d2_u0_dy + 3*d2_u0_dz + 4*d2_u0_dx + d1_wk1_dy +
      d1_wk2_dz)*invRe*mu_B0(0,0,0) + ((2.0/3.0))*(-wk4_B0(0,0,0) - wk8_B0(0,0,0) + 2*wk0_B0(0,0,0))*invRe*d1_mu_dx +
      Residual1_B0(0,0,0);

    Residual2_B0(0,0,0) = (wk1_B0(0,0,0) + wk3_B0(0,0,0))*invRe*d1_mu_dx + (wk5_B0(0,0,0) +
      wk7_B0(0,0,0))*invRe*d1_mu_dz - (2.0/3.0)*(-2*wk4_B0(0,0,0) + wk0_B0(0,0,0) + wk8_B0(0,0,0))*invRe*d1_mu_dy +
      ((1.0/3.0))*(3*d2_u1_dx + 3*d2_u1_dz + 4*d2_u1_dy + d1_wk0_dy + d1_wk5_dz)*invRe*mu_B0(0,0,0) +
      Residual2_B0(0,0,0);

    Residual3_B0(0,0,0) = (wk2_B0(0,0,0) + wk6_B0(0,0,0))*invRe*d1_mu_dx + (wk5_B0(0,0,0) +
      wk7_B0(0,0,0))*invRe*d1_mu_dy - (2.0/3.0)*(-2*wk8_B0(0,0,0) + wk0_B0(0,0,0) + wk4_B0(0,0,0))*invRe*d1_mu_dz +
      ((1.0/3.0))*(3*d2_u2_dx + 3*d2_u2_dy + 4*d2_u2_dz + d1_wk0_dz + d1_wk4_dz)*invRe*mu_B0(0,0,0) +
      Residual3_B0(0,0,0);

    Residual4_B0(0,0,0) = (wk1_B0(0,0,0) + wk3_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk1_B0(0,0,0) + (wk1_B0(0,0,0) +
      wk3_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk3_B0(0,0,0) + (wk1_B0(0,0,0) + wk3_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dy +
      (wk1_B0(0,0,0) + wk3_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dx + (wk2_B0(0,0,0) +
      wk6_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk2_B0(0,0,0) + (wk2_B0(0,0,0) + wk6_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk6_B0(0,0,0)
      + (wk2_B0(0,0,0) + wk6_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dz + (wk2_B0(0,0,0) +
      wk6_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dx + (wk5_B0(0,0,0) + wk7_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk5_B0(0,0,0) +
      (wk5_B0(0,0,0) + wk7_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk7_B0(0,0,0) + (wk5_B0(0,0,0) +
      wk7_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dz + (wk5_B0(0,0,0) + wk7_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dy -
      (2.0/3.0)*(-2*wk4_B0(0,0,0) + wk0_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk4_B0(0,0,0) -
      (2.0/3.0)*(-2*wk4_B0(0,0,0) + wk0_B0(0,0,0) + wk8_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dy -
      (2.0/3.0)*(-2*wk8_B0(0,0,0) + wk0_B0(0,0,0) + wk4_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk8_B0(0,0,0) -
      (2.0/3.0)*(-2*wk8_B0(0,0,0) + wk0_B0(0,0,0) + wk4_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dz + ((1.0/3.0))*(3*d2_u0_dy
      + 3*d2_u0_dz + 4*d2_u0_dx + d1_wk1_dy + d1_wk2_dz)*invRe*mu_B0(0,0,0)*u0_B0(0,0,0) + ((1.0/3.0))*(3*d2_u1_dx +
      3*d2_u1_dz + 4*d2_u1_dy + d1_wk0_dy + d1_wk5_dz)*invRe*mu_B0(0,0,0)*u1_B0(0,0,0) + ((1.0/3.0))*(3*d2_u2_dx +
      3*d2_u2_dy + 4*d2_u2_dz + d1_wk0_dz + d1_wk4_dz)*invRe*mu_B0(0,0,0)*u2_B0(0,0,0) + ((2.0/3.0))*(-wk4_B0(0,0,0) -
      wk8_B0(0,0,0) + 2*wk0_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk0_B0(0,0,0) + ((2.0/3.0))*(-wk4_B0(0,0,0) - wk8_B0(0,0,0) +
      2*wk0_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dx + (d2_T_dx + d2_T_dy +
      d2_T_dz)*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0,0) + invPr*invRe*inv2Minf*inv_gamma_m1*d1_T_dx*d1_mu_dx +
      invPr*invRe*inv2Minf*inv_gamma_m1*d1_T_dy*d1_mu_dy + invPr*invRe*inv2Minf*inv_gamma_m1*d1_T_dz*d1_mu_dz +
      Residual4_B0(0,0,0);

}

 void opensbliblock00Kernel049(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &Residual4_B0, ACC<double> &rhoE_B0, ACC<double>
&rhoE_RKold_B0, ACC<double> &rho_B0, ACC<double> &rho_RKold_B0, ACC<double> &rhou0_B0, ACC<double> &rhou0_RKold_B0,
ACC<double> &rhou1_B0, ACC<double> &rhou1_RKold_B0, ACC<double> &rhou2_B0, ACC<double> &rhou2_RKold_B0, const double
*rkA, const double *rkB)
{
   rho_RKold_B0(0,0,0) = rkA[0]*rho_RKold_B0(0,0,0) + dt*Residual0_B0(0,0,0);

   rho_B0(0,0,0) = rkB[0]*rho_RKold_B0(0,0,0) + rho_B0(0,0,0);

   rhou0_RKold_B0(0,0,0) = rkA[0]*rhou0_RKold_B0(0,0,0) + dt*Residual1_B0(0,0,0);

   rhou0_B0(0,0,0) = rkB[0]*rhou0_RKold_B0(0,0,0) + rhou0_B0(0,0,0);

   rhou1_RKold_B0(0,0,0) = rkA[0]*rhou1_RKold_B0(0,0,0) + dt*Residual2_B0(0,0,0);

   rhou1_B0(0,0,0) = rkB[0]*rhou1_RKold_B0(0,0,0) + rhou1_B0(0,0,0);

   rhou2_RKold_B0(0,0,0) = rkA[0]*rhou2_RKold_B0(0,0,0) + dt*Residual3_B0(0,0,0);

   rhou2_B0(0,0,0) = rkB[0]*rhou2_RKold_B0(0,0,0) + rhou2_B0(0,0,0);

   rhoE_RKold_B0(0,0,0) = rkA[0]*rhoE_RKold_B0(0,0,0) + dt*Residual4_B0(0,0,0);

   rhoE_B0(0,0,0) = rkB[0]*rhoE_RKold_B0(0,0,0) + rhoE_B0(0,0,0);

}

 void opensbliblock00Kernel043(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const
ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, ACC<double> &a_B0, ACC<double> &u0_B0, ACC<double> &u1_B0,
ACC<double> &u2_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/rho_B0(0,0,0);

   u0_B0(0,0,0) = rhou0_B0(0,0,0)*inv_rho;

   u1_B0(0,0,0) = rhou1_B0(0,0,0)*inv_rho;

   u2_B0(0,0,0) = rhou2_B0(0,0,0)*inv_rho;

    p_B0(0,0,0) = (-1 + gama)*(-(0.5*(rhou0_B0(0,0,0)*rhou0_B0(0,0,0)) + 0.5*(rhou1_B0(0,0,0)*rhou1_B0(0,0,0)) +
      0.5*(rhou2_B0(0,0,0)*rhou2_B0(0,0,0)))*inv_rho + rhoE_B0(0,0,0));

   a_B0(0,0,0) = sqrt(gama*p_B0(0,0,0)*inv_rho);

}

 void opensbliblock00Kernel044(ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0,
ACC<double> &Residual3_B0, ACC<double> &Residual4_B0, ACC<double> &rhoE_RKold_B0, ACC<double> &rho_RKold_B0, ACC<double>
&rhou0_RKold_B0, ACC<double> &rhou1_RKold_B0, ACC<double> &rhou2_RKold_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0,
ACC<double> &wk2_B0, ACC<double> &wk3_B0, ACC<double> &wk4_B0)
{
   wk0_B0(0,0,0) = 0.0;

   wk1_B0(0,0,0) = 0.0;

   wk2_B0(0,0,0) = 0.0;

   wk3_B0(0,0,0) = 0.0;

   wk4_B0(0,0,0) = 0.0;

   Residual0_B0(0,0,0) = 0.0;

   Residual1_B0(0,0,0) = 0.0;

   Residual2_B0(0,0,0) = 0.0;

   Residual3_B0(0,0,0) = 0.0;

   Residual4_B0(0,0,0) = 0.0;

   rho_RKold_B0(0,0,0) = 0.0;

   rhou0_RKold_B0(0,0,0) = 0.0;

   rhou1_RKold_B0(0,0,0) = 0.0;

   rhou2_RKold_B0(0,0,0) = 0.0;

   rhoE_RKold_B0(0,0,0) = 0.0;

}

 void opensbliblock00Kernel045(const ACC<double> &a_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double>
&wk3_B0, ACC<double> &wk4_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_04 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double AVG_0_0_LEV_34 = 0.0;
   double AVG_0_0_LEV_40 = 0.0;
   double AVG_0_0_LEV_41 = 0.0;
   double AVG_0_0_LEV_42 = 0.0;
   double AVG_0_0_LEV_43 = 0.0;
   double AVG_0_0_LEV_44 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_04 = 0.0;
   double AVG_0_REV_10 = 0.0;
   double AVG_0_REV_13 = 0.0;
   double AVG_0_REV_14 = 0.0;
   double AVG_0_REV_20 = 0.0;
   double AVG_0_REV_22 = 0.0;
   double AVG_0_REV_23 = 0.0;
   double AVG_0_REV_24 = 0.0;
   double AVG_0_REV_30 = 0.0;
   double AVG_0_REV_31 = 0.0;
   double AVG_0_REV_33 = 0.0;
   double AVG_0_REV_34 = 0.0;
   double AVG_0_REV_40 = 0.0;
   double AVG_0_REV_41 = 0.0;
   double AVG_0_REV_42 = 0.0;
   double AVG_0_REV_43 = 0.0;
   double AVG_0_REV_44 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_u1 = 0.0;
   double AVG_0_u2 = 0.0;
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
   double alpha_40 = 0.0;
   double alpha_41 = 0.0;
   double alpha_42 = 0.0;
   double g_00 = 0.0;
   double g_01 = 0.0;
   double g_10 = 0.0;
   double g_11 = 0.0;
   double g_20 = 0.0;
   double g_21 = 0.0;
   double g_30 = 0.0;
   double g_31 = 0.0;
   double g_40 = 0.0;
   double g_41 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double gamma_4 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_4 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double phi_star_4 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_0_4 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double sigma_1_4 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_4 = 0.0;
   double theta_hat_00 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_hat_30 = 0.0;
   double theta_hat_31 = 0.0;
   double theta_hat_40 = 0.0;
   double theta_hat_41 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   double ws_lambda_44 = 0.0;
   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(-1,0,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(-1,0,0));

   AVG_0_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(-1,0,0));

   AVG_0_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(-1,0,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(-1,0,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u2;

   AVG_0_0_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -AVG_0_u2*inv_AVG_rho;

   AVG_0_0_LEV_13 = inv_AVG_rho;

   AVG_0_0_LEV_20 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_22 = -inv_AVG_rho;

    AVG_0_0_LEV_30 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2) -
      (AVG_0_u0*AVG_0_u0)*gama - (AVG_0_u1*AVG_0_u1)*gama - (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_40 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) - (AVG_0_u2*AVG_0_u2) +
      (AVG_0_u0*AVG_0_u0)*gama + (AVG_0_u1*AVG_0_u1)*gama + (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_41 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_42 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_43 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_00 = (-rho_B0(-1,0,0) + rho_B0(0,0,0))*AVG_0_0_LEV_00 + (-rhoE_B0(-1,0,0) + rhoE_B0(0,0,0))*AVG_0_0_LEV_04 +
      (-rhou0_B0(-1,0,0) + rhou0_B0(0,0,0))*AVG_0_0_LEV_01 + (-rhou1_B0(-1,0,0) + rhou1_B0(0,0,0))*AVG_0_0_LEV_02 +
      (-rhou2_B0(-1,0,0) + rhou2_B0(0,0,0))*AVG_0_0_LEV_03;

   alpha_10 = (-rho_B0(-1,0,0) + rho_B0(0,0,0))*AVG_0_0_LEV_10 + (-rhou2_B0(-1,0,0) + rhou2_B0(0,0,0))*AVG_0_0_LEV_13;

   alpha_20 = (-rho_B0(-1,0,0) + rho_B0(0,0,0))*AVG_0_0_LEV_20 + (-rhou1_B0(-1,0,0) + rhou1_B0(0,0,0))*AVG_0_0_LEV_22;

    alpha_30 = (-rho_B0(-1,0,0) + rho_B0(0,0,0))*AVG_0_0_LEV_30 + (-rhoE_B0(-1,0,0) + rhoE_B0(0,0,0))*AVG_0_0_LEV_34 +
      (-rhou0_B0(-1,0,0) + rhou0_B0(0,0,0))*AVG_0_0_LEV_31 + (-rhou1_B0(-1,0,0) + rhou1_B0(0,0,0))*AVG_0_0_LEV_32 +
      (-rhou2_B0(-1,0,0) + rhou2_B0(0,0,0))*AVG_0_0_LEV_33;

    alpha_40 = (-rho_B0(-1,0,0) + rho_B0(0,0,0))*AVG_0_0_LEV_40 + (-rhoE_B0(-1,0,0) + rhoE_B0(0,0,0))*AVG_0_0_LEV_44 +
      (-rhou0_B0(-1,0,0) + rhou0_B0(0,0,0))*AVG_0_0_LEV_41 + (-rhou1_B0(-1,0,0) + rhou1_B0(0,0,0))*AVG_0_0_LEV_42 +
      (-rhou2_B0(-1,0,0) + rhou2_B0(0,0,0))*AVG_0_0_LEV_43;

   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(1,0,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(1,0,0));

   AVG_0_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(1,0,0));

   AVG_0_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(1,0,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(1,0,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u2;

   AVG_0_0_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -AVG_0_u2*inv_AVG_rho;

   AVG_0_0_LEV_13 = inv_AVG_rho;

   AVG_0_0_LEV_20 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_22 = -inv_AVG_rho;

    AVG_0_0_LEV_30 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2) -
      (AVG_0_u0*AVG_0_u0)*gama - (AVG_0_u1*AVG_0_u1)*gama - (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_40 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) - (AVG_0_u2*AVG_0_u2) +
      (AVG_0_u0*AVG_0_u0)*gama + (AVG_0_u1*AVG_0_u1)*gama + (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_41 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_42 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_43 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_01 = (-rho_B0(0,0,0) + rho_B0(1,0,0))*AVG_0_0_LEV_00 + (-rhoE_B0(0,0,0) + rhoE_B0(1,0,0))*AVG_0_0_LEV_04 +
      (-rhou0_B0(0,0,0) + rhou0_B0(1,0,0))*AVG_0_0_LEV_01 + (-rhou1_B0(0,0,0) + rhou1_B0(1,0,0))*AVG_0_0_LEV_02 +
      (-rhou2_B0(0,0,0) + rhou2_B0(1,0,0))*AVG_0_0_LEV_03;

   alpha_11 = (-rho_B0(0,0,0) + rho_B0(1,0,0))*AVG_0_0_LEV_10 + (-rhou2_B0(0,0,0) + rhou2_B0(1,0,0))*AVG_0_0_LEV_13;

   alpha_21 = (-rho_B0(0,0,0) + rho_B0(1,0,0))*AVG_0_0_LEV_20 + (-rhou1_B0(0,0,0) + rhou1_B0(1,0,0))*AVG_0_0_LEV_22;

    alpha_31 = (-rho_B0(0,0,0) + rho_B0(1,0,0))*AVG_0_0_LEV_30 + (-rhoE_B0(0,0,0) + rhoE_B0(1,0,0))*AVG_0_0_LEV_34 +
      (-rhou0_B0(0,0,0) + rhou0_B0(1,0,0))*AVG_0_0_LEV_31 + (-rhou1_B0(0,0,0) + rhou1_B0(1,0,0))*AVG_0_0_LEV_32 +
      (-rhou2_B0(0,0,0) + rhou2_B0(1,0,0))*AVG_0_0_LEV_33;

    alpha_41 = (-rho_B0(0,0,0) + rho_B0(1,0,0))*AVG_0_0_LEV_40 + (-rhoE_B0(0,0,0) + rhoE_B0(1,0,0))*AVG_0_0_LEV_44 +
      (-rhou0_B0(0,0,0) + rhou0_B0(1,0,0))*AVG_0_0_LEV_41 + (-rhou1_B0(0,0,0) + rhou1_B0(1,0,0))*AVG_0_0_LEV_42 +
      (-rhou2_B0(0,0,0) + rhou2_B0(1,0,0))*AVG_0_0_LEV_43;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = AVG_0_u0;

   ws_lambda_33 = AVG_0_a + AVG_0_u0;

   ws_lambda_44 = -AVG_0_a + AVG_0_u0;

   AVG_0_REV_00 = 1;

   AVG_0_REV_03 = 0.707106781186547*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_04 = 0.707106781186547*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_10 = AVG_0_u0;

   AVG_0_REV_13 = 0.707106781186547*(AVG_0_a + AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_14 = 0.707106781186547*(-AVG_0_a + AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_20 = AVG_0_u1;

   AVG_0_REV_22 = -AVG_0_rho;

   AVG_0_REV_23 = 0.707106781186547*AVG_0_rho*AVG_0_u1*inv_AVG_a;

   AVG_0_REV_24 = 0.707106781186547*AVG_0_rho*AVG_0_u1*inv_AVG_a;

   AVG_0_REV_30 = AVG_0_u2;

   AVG_0_REV_31 = AVG_0_rho;

   AVG_0_REV_33 = 0.707106781186547*AVG_0_rho*AVG_0_u2*inv_AVG_a;

   AVG_0_REV_34 = 0.707106781186547*AVG_0_rho*AVG_0_u2*inv_AVG_a;

   AVG_0_REV_40 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0) + ((1.0/2.0))*(AVG_0_u1*AVG_0_u1) + ((1.0/2.0))*(AVG_0_u2*AVG_0_u2);

   AVG_0_REV_41 = AVG_0_rho*AVG_0_u2;

   AVG_0_REV_42 = -AVG_0_rho*AVG_0_u1;

    AVG_0_REV_43 = 0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) +
      (AVG_0_u2*AVG_0_u2))*gamma_m1)*invgamma_m1 + AVG_0_a*AVG_0_u0)*AVG_0_rho*inv_AVG_a;

    AVG_0_REV_44 = 0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) +
      (AVG_0_u2*AVG_0_u2))*gamma_m1)*invgamma_m1 - AVG_0_a*AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_rho = ((1.0/2.0))*(rho_B0(1,0,0) + rho_B0(2,0,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1,0,0) + u0_B0(2,0,0));

   AVG_0_a = ((1.0/2.0))*(a_B0(1,0,0) + a_B0(2,0,0));

   AVG_0_u2 = ((1.0/2.0))*(u2_B0(1,0,0) + u2_B0(2,0,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(1,0,0) + u1_B0(2,0,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u2;

   AVG_0_0_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -AVG_0_u2*inv_AVG_rho;

   AVG_0_0_LEV_13 = inv_AVG_rho;

   AVG_0_0_LEV_20 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_22 = -inv_AVG_rho;

    AVG_0_0_LEV_30 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2) -
      (AVG_0_u0*AVG_0_u0)*gama - (AVG_0_u1*AVG_0_u1)*gama - (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_40 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) - (AVG_0_u2*AVG_0_u2) +
      (AVG_0_u0*AVG_0_u0)*gama + (AVG_0_u1*AVG_0_u1)*gama + (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_41 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_42 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_43 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_02 = (-rho_B0(1,0,0) + rho_B0(2,0,0))*AVG_0_0_LEV_00 + (-rhoE_B0(1,0,0) + rhoE_B0(2,0,0))*AVG_0_0_LEV_04 +
      (-rhou0_B0(1,0,0) + rhou0_B0(2,0,0))*AVG_0_0_LEV_01 + (-rhou1_B0(1,0,0) + rhou1_B0(2,0,0))*AVG_0_0_LEV_02 +
      (-rhou2_B0(1,0,0) + rhou2_B0(2,0,0))*AVG_0_0_LEV_03;

   alpha_12 = (-rho_B0(1,0,0) + rho_B0(2,0,0))*AVG_0_0_LEV_10 + (-rhou2_B0(1,0,0) + rhou2_B0(2,0,0))*AVG_0_0_LEV_13;

   alpha_22 = (-rho_B0(1,0,0) + rho_B0(2,0,0))*AVG_0_0_LEV_20 + (-rhou1_B0(1,0,0) + rhou1_B0(2,0,0))*AVG_0_0_LEV_22;

    alpha_32 = (-rho_B0(1,0,0) + rho_B0(2,0,0))*AVG_0_0_LEV_30 + (-rhoE_B0(1,0,0) + rhoE_B0(2,0,0))*AVG_0_0_LEV_34 +
      (-rhou0_B0(1,0,0) + rhou0_B0(2,0,0))*AVG_0_0_LEV_31 + (-rhou1_B0(1,0,0) + rhou1_B0(2,0,0))*AVG_0_0_LEV_32 +
      (-rhou2_B0(1,0,0) + rhou2_B0(2,0,0))*AVG_0_0_LEV_33;

    alpha_42 = (-rho_B0(1,0,0) + rho_B0(2,0,0))*AVG_0_0_LEV_40 + (-rhoE_B0(1,0,0) + rhoE_B0(2,0,0))*AVG_0_0_LEV_44 +
      (-rhou0_B0(1,0,0) + rhou0_B0(2,0,0))*AVG_0_0_LEV_41 + (-rhou1_B0(1,0,0) + rhou1_B0(2,0,0))*AVG_0_0_LEV_42 +
      (-rhou2_B0(1,0,0) + rhou2_B0(2,0,0))*AVG_0_0_LEV_43;

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

    sigma_0_4 = ((fabs(ws_lambda_44) >= delta_TVD) ? (
   fabs(ws_lambda_44)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_44*ws_lambda_44))*invdelta_TVD
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

   S = (alpha_41 > 0) ? 1 : ((alpha_41 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_40, 2*fabs(alpha_41)));

   t2 = fmin(fabs(alpha_41), 2*S*alpha_40);

   g_40 = S*fmax(t1, t2);

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

   S = (alpha_42 > 0) ? 1 : ((alpha_42 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_41, 2*fabs(alpha_42)));

   t2 = fmin(fabs(alpha_42), 2*S*alpha_41);

   g_41 = S*fmax(t1, t2);

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

   gamma_4 = ((alpha_41 == 0) ? (
   0
)
: (
   (-g_40 + g_41)*alpha_41*sigma_0_4/((alpha_41*alpha_41) + eps_TVD)
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

    sigma_1_4 = ((fabs(gamma_4) >= delta_TVD) ? (
   fabs(gamma_4)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_4*gamma_4))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   phi_4 = -fabs(sigma_0_4 + sigma_1_4)*alpha_41 + 0.5*(g_40 + g_41)*sigma_0_4;

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

   t1 = -fabs(alpha_40) + fabs(alpha_41);

   t2 = fabs(alpha_40) + fabs(alpha_41) + eps_TVD;

   theta_hat_40 = (fabs(t1/t2)*fabs(t1/t2));

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

   t1 = -fabs(alpha_41) + fabs(alpha_42);

   t2 = fabs(alpha_41) + fabs(alpha_42) + eps_TVD;

   theta_hat_41 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   theta_4 = fmax(theta_hat_40, theta_hat_41);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   phi_star_4 = kappa_TVD*phi_4*theta_4;

   wk0_B0(0,0,0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_03*phi_star_3 + AVG_0_REV_04*phi_star_4);

   wk1_B0(0,0,0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_13*phi_star_3 + AVG_0_REV_14*phi_star_4);

    wk2_B0(0,0,0) = 0.5*(AVG_0_REV_20*phi_star_0 + AVG_0_REV_22*phi_star_2 + AVG_0_REV_23*phi_star_3 +
      AVG_0_REV_24*phi_star_4);

    wk3_B0(0,0,0) = 0.5*(AVG_0_REV_30*phi_star_0 + AVG_0_REV_31*phi_star_1 + AVG_0_REV_33*phi_star_3 +
      AVG_0_REV_34*phi_star_4);

    wk4_B0(0,0,0) = 0.5*(AVG_0_REV_40*phi_star_0 + AVG_0_REV_41*phi_star_1 + AVG_0_REV_42*phi_star_2 +
      AVG_0_REV_43*phi_star_3 + AVG_0_REV_44*phi_star_4);

}

 void opensbliblock00Kernel046(const ACC<double> &a_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double>
&Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0)
{
   double AVG_1_1_LEV_00 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double AVG_1_1_LEV_13 = 0.0;
   double AVG_1_1_LEV_14 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double AVG_1_1_LEV_34 = 0.0;
   double AVG_1_1_LEV_40 = 0.0;
   double AVG_1_1_LEV_41 = 0.0;
   double AVG_1_1_LEV_42 = 0.0;
   double AVG_1_1_LEV_43 = 0.0;
   double AVG_1_1_LEV_44 = 0.0;
   double AVG_1_REV_01 = 0.0;
   double AVG_1_REV_03 = 0.0;
   double AVG_1_REV_04 = 0.0;
   double AVG_1_REV_11 = 0.0;
   double AVG_1_REV_12 = 0.0;
   double AVG_1_REV_13 = 0.0;
   double AVG_1_REV_14 = 0.0;
   double AVG_1_REV_21 = 0.0;
   double AVG_1_REV_23 = 0.0;
   double AVG_1_REV_24 = 0.0;
   double AVG_1_REV_30 = 0.0;
   double AVG_1_REV_31 = 0.0;
   double AVG_1_REV_33 = 0.0;
   double AVG_1_REV_34 = 0.0;
   double AVG_1_REV_40 = 0.0;
   double AVG_1_REV_41 = 0.0;
   double AVG_1_REV_42 = 0.0;
   double AVG_1_REV_43 = 0.0;
   double AVG_1_REV_44 = 0.0;
   double AVG_1_a = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_u0 = 0.0;
   double AVG_1_u1 = 0.0;
   double AVG_1_u2 = 0.0;
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
   double alpha_40 = 0.0;
   double alpha_41 = 0.0;
   double alpha_42 = 0.0;
   double g_00 = 0.0;
   double g_01 = 0.0;
   double g_10 = 0.0;
   double g_11 = 0.0;
   double g_20 = 0.0;
   double g_21 = 0.0;
   double g_30 = 0.0;
   double g_31 = 0.0;
   double g_40 = 0.0;
   double g_41 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double gamma_4 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_4 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double phi_star_4 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_0_4 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double sigma_1_4 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_4 = 0.0;
   double theta_hat_00 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_hat_30 = 0.0;
   double theta_hat_31 = 0.0;
   double theta_hat_40 = 0.0;
   double theta_hat_41 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   double ws_lambda_44 = 0.0;
   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(0,-1,0));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(0,-1,0));

   AVG_1_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(0,-1,0));

   AVG_1_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(0,-1,0));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(0,-1,0));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   AVG_1_1_LEV_00 = AVG_1_u2*inv_AVG_rho;

   AVG_1_1_LEV_03 = -inv_AVG_rho;

    AVG_1_1_LEV_10 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_13 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u2;

   AVG_1_1_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_20 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_21 = inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2) -
      (AVG_1_u0*AVG_1_u0)*gama - (AVG_1_u1*AVG_1_u1)*gama - (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) - (AVG_1_u2*AVG_1_u2) +
      (AVG_1_u0*AVG_1_u0)*gama + (AVG_1_u1*AVG_1_u1)*gama + (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_41 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_42 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_00 = (-rho_B0(0,-1,0) + rho_B0(0,0,0))*AVG_1_1_LEV_00 + (-rhou2_B0(0,-1,0) + rhou2_B0(0,0,0))*AVG_1_1_LEV_03;

    alpha_10 = (-rho_B0(0,-1,0) + rho_B0(0,0,0))*AVG_1_1_LEV_10 + (-rhoE_B0(0,-1,0) + rhoE_B0(0,0,0))*AVG_1_1_LEV_14 +
      (-rhou0_B0(0,-1,0) + rhou0_B0(0,0,0))*AVG_1_1_LEV_11 + (-rhou1_B0(0,-1,0) + rhou1_B0(0,0,0))*AVG_1_1_LEV_12 +
      (-rhou2_B0(0,-1,0) + rhou2_B0(0,0,0))*AVG_1_1_LEV_13;

   alpha_20 = (-rho_B0(0,-1,0) + rho_B0(0,0,0))*AVG_1_1_LEV_20 + (-rhou0_B0(0,-1,0) + rhou0_B0(0,0,0))*AVG_1_1_LEV_21;

    alpha_30 = (-rho_B0(0,-1,0) + rho_B0(0,0,0))*AVG_1_1_LEV_30 + (-rhoE_B0(0,-1,0) + rhoE_B0(0,0,0))*AVG_1_1_LEV_34 +
      (-rhou0_B0(0,-1,0) + rhou0_B0(0,0,0))*AVG_1_1_LEV_31 + (-rhou1_B0(0,-1,0) + rhou1_B0(0,0,0))*AVG_1_1_LEV_32 +
      (-rhou2_B0(0,-1,0) + rhou2_B0(0,0,0))*AVG_1_1_LEV_33;

    alpha_40 = (-rho_B0(0,-1,0) + rho_B0(0,0,0))*AVG_1_1_LEV_40 + (-rhoE_B0(0,-1,0) + rhoE_B0(0,0,0))*AVG_1_1_LEV_44 +
      (-rhou0_B0(0,-1,0) + rhou0_B0(0,0,0))*AVG_1_1_LEV_41 + (-rhou1_B0(0,-1,0) + rhou1_B0(0,0,0))*AVG_1_1_LEV_42 +
      (-rhou2_B0(0,-1,0) + rhou2_B0(0,0,0))*AVG_1_1_LEV_43;

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(0,1,0));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(0,1,0));

   AVG_1_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(0,1,0));

   AVG_1_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(0,1,0));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(0,1,0));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   AVG_1_1_LEV_00 = AVG_1_u2*inv_AVG_rho;

   AVG_1_1_LEV_03 = -inv_AVG_rho;

    AVG_1_1_LEV_10 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_13 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u2;

   AVG_1_1_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_20 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_21 = inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2) -
      (AVG_1_u0*AVG_1_u0)*gama - (AVG_1_u1*AVG_1_u1)*gama - (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) - (AVG_1_u2*AVG_1_u2) +
      (AVG_1_u0*AVG_1_u0)*gama + (AVG_1_u1*AVG_1_u1)*gama + (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_41 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_42 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_01 = (-rho_B0(0,0,0) + rho_B0(0,1,0))*AVG_1_1_LEV_00 + (-rhou2_B0(0,0,0) + rhou2_B0(0,1,0))*AVG_1_1_LEV_03;

    alpha_11 = (-rho_B0(0,0,0) + rho_B0(0,1,0))*AVG_1_1_LEV_10 + (-rhoE_B0(0,0,0) + rhoE_B0(0,1,0))*AVG_1_1_LEV_14 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,1,0))*AVG_1_1_LEV_11 + (-rhou1_B0(0,0,0) + rhou1_B0(0,1,0))*AVG_1_1_LEV_12 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,1,0))*AVG_1_1_LEV_13;

   alpha_21 = (-rho_B0(0,0,0) + rho_B0(0,1,0))*AVG_1_1_LEV_20 + (-rhou0_B0(0,0,0) + rhou0_B0(0,1,0))*AVG_1_1_LEV_21;

    alpha_31 = (-rho_B0(0,0,0) + rho_B0(0,1,0))*AVG_1_1_LEV_30 + (-rhoE_B0(0,0,0) + rhoE_B0(0,1,0))*AVG_1_1_LEV_34 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,1,0))*AVG_1_1_LEV_31 + (-rhou1_B0(0,0,0) + rhou1_B0(0,1,0))*AVG_1_1_LEV_32 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,1,0))*AVG_1_1_LEV_33;

    alpha_41 = (-rho_B0(0,0,0) + rho_B0(0,1,0))*AVG_1_1_LEV_40 + (-rhoE_B0(0,0,0) + rhoE_B0(0,1,0))*AVG_1_1_LEV_44 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,1,0))*AVG_1_1_LEV_41 + (-rhou1_B0(0,0,0) + rhou1_B0(0,1,0))*AVG_1_1_LEV_42 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,1,0))*AVG_1_1_LEV_43;

   ws_lambda_00 = AVG_1_u1;

   ws_lambda_11 = AVG_1_u1;

   ws_lambda_22 = AVG_1_u1;

   ws_lambda_33 = AVG_1_a + AVG_1_u1;

   ws_lambda_44 = -AVG_1_a + AVG_1_u1;

   AVG_1_REV_01 = 1;

   AVG_1_REV_03 = 0.707106781186547*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_04 = 0.707106781186547*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_11 = AVG_1_u0;

   AVG_1_REV_12 = AVG_1_rho;

   AVG_1_REV_13 = 0.707106781186547*AVG_1_rho*AVG_1_u0*inv_AVG_a;

   AVG_1_REV_14 = 0.707106781186547*AVG_1_rho*AVG_1_u0*inv_AVG_a;

   AVG_1_REV_21 = AVG_1_u1;

   AVG_1_REV_23 = 0.707106781186547*(AVG_1_a + AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_24 = 0.707106781186547*(-AVG_1_a + AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_30 = -AVG_1_rho;

   AVG_1_REV_31 = AVG_1_u2;

   AVG_1_REV_33 = 0.707106781186547*AVG_1_rho*AVG_1_u2*inv_AVG_a;

   AVG_1_REV_34 = 0.707106781186547*AVG_1_rho*AVG_1_u2*inv_AVG_a;

   AVG_1_REV_40 = -AVG_1_rho*AVG_1_u2;

   AVG_1_REV_41 = ((1.0/2.0))*(AVG_1_u0*AVG_1_u0) + ((1.0/2.0))*(AVG_1_u1*AVG_1_u1) + ((1.0/2.0))*(AVG_1_u2*AVG_1_u2);

   AVG_1_REV_42 = AVG_1_rho*AVG_1_u0;

    AVG_1_REV_43 = 0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*gamma_m1)*invgamma_m1 + AVG_1_a*AVG_1_u1)*AVG_1_rho*inv_AVG_a;

    AVG_1_REV_44 = 0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*gamma_m1)*invgamma_m1 - AVG_1_a*AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,1,0) + rho_B0(0,2,0));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,1,0) + u0_B0(0,2,0));

   AVG_1_a = ((1.0/2.0))*(a_B0(0,1,0) + a_B0(0,2,0));

   AVG_1_u2 = ((1.0/2.0))*(u2_B0(0,1,0) + u2_B0(0,2,0));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,1,0) + u1_B0(0,2,0));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   AVG_1_1_LEV_00 = AVG_1_u2*inv_AVG_rho;

   AVG_1_1_LEV_03 = -inv_AVG_rho;

    AVG_1_1_LEV_10 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_13 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u2;

   AVG_1_1_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_20 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_21 = inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2) -
      (AVG_1_u0*AVG_1_u0)*gama - (AVG_1_u1*AVG_1_u1)*gama - (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) - (AVG_1_u2*AVG_1_u2) +
      (AVG_1_u0*AVG_1_u0)*gama + (AVG_1_u1*AVG_1_u1)*gama + (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_41 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_42 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_02 = (-rho_B0(0,1,0) + rho_B0(0,2,0))*AVG_1_1_LEV_00 + (-rhou2_B0(0,1,0) + rhou2_B0(0,2,0))*AVG_1_1_LEV_03;

    alpha_12 = (-rho_B0(0,1,0) + rho_B0(0,2,0))*AVG_1_1_LEV_10 + (-rhoE_B0(0,1,0) + rhoE_B0(0,2,0))*AVG_1_1_LEV_14 +
      (-rhou0_B0(0,1,0) + rhou0_B0(0,2,0))*AVG_1_1_LEV_11 + (-rhou1_B0(0,1,0) + rhou1_B0(0,2,0))*AVG_1_1_LEV_12 +
      (-rhou2_B0(0,1,0) + rhou2_B0(0,2,0))*AVG_1_1_LEV_13;

   alpha_22 = (-rho_B0(0,1,0) + rho_B0(0,2,0))*AVG_1_1_LEV_20 + (-rhou0_B0(0,1,0) + rhou0_B0(0,2,0))*AVG_1_1_LEV_21;

    alpha_32 = (-rho_B0(0,1,0) + rho_B0(0,2,0))*AVG_1_1_LEV_30 + (-rhoE_B0(0,1,0) + rhoE_B0(0,2,0))*AVG_1_1_LEV_34 +
      (-rhou0_B0(0,1,0) + rhou0_B0(0,2,0))*AVG_1_1_LEV_31 + (-rhou1_B0(0,1,0) + rhou1_B0(0,2,0))*AVG_1_1_LEV_32 +
      (-rhou2_B0(0,1,0) + rhou2_B0(0,2,0))*AVG_1_1_LEV_33;

    alpha_42 = (-rho_B0(0,1,0) + rho_B0(0,2,0))*AVG_1_1_LEV_40 + (-rhoE_B0(0,1,0) + rhoE_B0(0,2,0))*AVG_1_1_LEV_44 +
      (-rhou0_B0(0,1,0) + rhou0_B0(0,2,0))*AVG_1_1_LEV_41 + (-rhou1_B0(0,1,0) + rhou1_B0(0,2,0))*AVG_1_1_LEV_42 +
      (-rhou2_B0(0,1,0) + rhou2_B0(0,2,0))*AVG_1_1_LEV_43;

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

    sigma_0_4 = ((fabs(ws_lambda_44) >= delta_TVD) ? (
   fabs(ws_lambda_44)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_44*ws_lambda_44))*invdelta_TVD
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

   S = (alpha_41 > 0) ? 1 : ((alpha_41 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_40, 2*fabs(alpha_41)));

   t2 = fmin(fabs(alpha_41), 2*S*alpha_40);

   g_40 = S*fmax(t1, t2);

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

   S = (alpha_42 > 0) ? 1 : ((alpha_42 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_41, 2*fabs(alpha_42)));

   t2 = fmin(fabs(alpha_42), 2*S*alpha_41);

   g_41 = S*fmax(t1, t2);

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

   gamma_4 = ((alpha_41 == 0) ? (
   0
)
: (
   (-g_40 + g_41)*alpha_41*sigma_0_4/((alpha_41*alpha_41) + eps_TVD)
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

    sigma_1_4 = ((fabs(gamma_4) >= delta_TVD) ? (
   fabs(gamma_4)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_4*gamma_4))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   phi_4 = -fabs(sigma_0_4 + sigma_1_4)*alpha_41 + 0.5*(g_40 + g_41)*sigma_0_4;

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

   t1 = -fabs(alpha_40) + fabs(alpha_41);

   t2 = fabs(alpha_40) + fabs(alpha_41) + eps_TVD;

   theta_hat_40 = (fabs(t1/t2)*fabs(t1/t2));

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

   t1 = -fabs(alpha_41) + fabs(alpha_42);

   t2 = fabs(alpha_41) + fabs(alpha_42) + eps_TVD;

   theta_hat_41 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   theta_4 = fmax(theta_hat_40, theta_hat_41);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   phi_star_4 = kappa_TVD*phi_4*theta_4;

   Residual0_B0(0,0,0) = 0.5*(AVG_1_REV_01*phi_star_1 + AVG_1_REV_03*phi_star_3 + AVG_1_REV_04*phi_star_4);

    Residual1_B0(0,0,0) = 0.5*(AVG_1_REV_11*phi_star_1 + AVG_1_REV_12*phi_star_2 + AVG_1_REV_13*phi_star_3 +
      AVG_1_REV_14*phi_star_4);

   Residual2_B0(0,0,0) = 0.5*(AVG_1_REV_21*phi_star_1 + AVG_1_REV_23*phi_star_3 + AVG_1_REV_24*phi_star_4);

    Residual3_B0(0,0,0) = 0.5*(AVG_1_REV_30*phi_star_0 + AVG_1_REV_31*phi_star_1 + AVG_1_REV_33*phi_star_3 +
      AVG_1_REV_34*phi_star_4);

    Residual4_B0(0,0,0) = 0.5*(AVG_1_REV_40*phi_star_0 + AVG_1_REV_41*phi_star_1 + AVG_1_REV_42*phi_star_2 +
      AVG_1_REV_43*phi_star_3 + AVG_1_REV_44*phi_star_4);

}

 void opensbliblock00Kernel047(const ACC<double> &a_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &rhoE_RKold_B0, ACC<double> &rho_RKold_B0, ACC<double>
&rhou0_RKold_B0, ACC<double> &rhou1_RKold_B0, ACC<double> &rhou2_RKold_B0)
{
   double AVG_2_2_LEV_00 = 0.0;
   double AVG_2_2_LEV_02 = 0.0;
   double AVG_2_2_LEV_10 = 0.0;
   double AVG_2_2_LEV_11 = 0.0;
   double AVG_2_2_LEV_20 = 0.0;
   double AVG_2_2_LEV_21 = 0.0;
   double AVG_2_2_LEV_22 = 0.0;
   double AVG_2_2_LEV_23 = 0.0;
   double AVG_2_2_LEV_24 = 0.0;
   double AVG_2_2_LEV_30 = 0.0;
   double AVG_2_2_LEV_31 = 0.0;
   double AVG_2_2_LEV_32 = 0.0;
   double AVG_2_2_LEV_33 = 0.0;
   double AVG_2_2_LEV_34 = 0.0;
   double AVG_2_2_LEV_40 = 0.0;
   double AVG_2_2_LEV_41 = 0.0;
   double AVG_2_2_LEV_42 = 0.0;
   double AVG_2_2_LEV_43 = 0.0;
   double AVG_2_2_LEV_44 = 0.0;
   double AVG_2_REV_02 = 0.0;
   double AVG_2_REV_03 = 0.0;
   double AVG_2_REV_04 = 0.0;
   double AVG_2_REV_11 = 0.0;
   double AVG_2_REV_12 = 0.0;
   double AVG_2_REV_13 = 0.0;
   double AVG_2_REV_14 = 0.0;
   double AVG_2_REV_20 = 0.0;
   double AVG_2_REV_22 = 0.0;
   double AVG_2_REV_23 = 0.0;
   double AVG_2_REV_24 = 0.0;
   double AVG_2_REV_32 = 0.0;
   double AVG_2_REV_33 = 0.0;
   double AVG_2_REV_34 = 0.0;
   double AVG_2_REV_40 = 0.0;
   double AVG_2_REV_41 = 0.0;
   double AVG_2_REV_42 = 0.0;
   double AVG_2_REV_43 = 0.0;
   double AVG_2_REV_44 = 0.0;
   double AVG_2_a = 0.0;
   double AVG_2_rho = 0.0;
   double AVG_2_u0 = 0.0;
   double AVG_2_u1 = 0.0;
   double AVG_2_u2 = 0.0;
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
   double alpha_40 = 0.0;
   double alpha_41 = 0.0;
   double alpha_42 = 0.0;
   double g_00 = 0.0;
   double g_01 = 0.0;
   double g_10 = 0.0;
   double g_11 = 0.0;
   double g_20 = 0.0;
   double g_21 = 0.0;
   double g_30 = 0.0;
   double g_31 = 0.0;
   double g_40 = 0.0;
   double g_41 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double gamma_4 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_4 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double phi_star_4 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_0_4 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double sigma_1_4 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_4 = 0.0;
   double theta_hat_00 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_hat_30 = 0.0;
   double theta_hat_31 = 0.0;
   double theta_hat_40 = 0.0;
   double theta_hat_41 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   double ws_lambda_44 = 0.0;
   AVG_2_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(0,0,-1));

   AVG_2_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(0,0,-1));

   AVG_2_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(0,0,-1));

   AVG_2_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(0,0,-1));

   AVG_2_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(0,0,-1));

   inv_AVG_a = 1.0/(AVG_2_a);

   inv_AVG_rho = 1.0/(AVG_2_rho);

   AVG_2_2_LEV_00 = -AVG_2_u1*inv_AVG_rho;

   AVG_2_2_LEV_02 = inv_AVG_rho;

   AVG_2_2_LEV_10 = AVG_2_u0*inv_AVG_rho;

   AVG_2_2_LEV_11 = -inv_AVG_rho;

    AVG_2_2_LEV_20 = -(1.0/2.0)*(-2 - (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_2_2_LEV_21 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u0;

   AVG_2_2_LEV_22 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u1;

   AVG_2_2_LEV_23 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u2;

   AVG_2_2_LEV_24 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_2_2_LEV_30 = -0.353553390593274*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) + (AVG_2_u2*AVG_2_u2) -
      (AVG_2_u0*AVG_2_u0)*gama - (AVG_2_u1*AVG_2_u1)*gama - (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_31 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_32 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_33 = 0.707106781186547*(-gama*AVG_2_u2 + AVG_2_a + AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_2_2_LEV_40 = 0.353553390593274*(-(AVG_2_u0*AVG_2_u0) - (AVG_2_u1*AVG_2_u1) - (AVG_2_u2*AVG_2_u2) +
      (AVG_2_u0*AVG_2_u0)*gama + (AVG_2_u1*AVG_2_u1)*gama + (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_41 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_42 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_43 = -0.707106781186547*(-AVG_2_u2 + gama*AVG_2_u2 + AVG_2_a)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_00 = (-rho_B0(0,0,-1) + rho_B0(0,0,0))*AVG_2_2_LEV_00 + (-rhou1_B0(0,0,-1) + rhou1_B0(0,0,0))*AVG_2_2_LEV_02;

   alpha_10 = (-rho_B0(0,0,-1) + rho_B0(0,0,0))*AVG_2_2_LEV_10 + (-rhou0_B0(0,0,-1) + rhou0_B0(0,0,0))*AVG_2_2_LEV_11;

    alpha_20 = (-rho_B0(0,0,-1) + rho_B0(0,0,0))*AVG_2_2_LEV_20 + (-rhoE_B0(0,0,-1) + rhoE_B0(0,0,0))*AVG_2_2_LEV_24 +
      (-rhou0_B0(0,0,-1) + rhou0_B0(0,0,0))*AVG_2_2_LEV_21 + (-rhou1_B0(0,0,-1) + rhou1_B0(0,0,0))*AVG_2_2_LEV_22 +
      (-rhou2_B0(0,0,-1) + rhou2_B0(0,0,0))*AVG_2_2_LEV_23;

    alpha_30 = (-rho_B0(0,0,-1) + rho_B0(0,0,0))*AVG_2_2_LEV_30 + (-rhoE_B0(0,0,-1) + rhoE_B0(0,0,0))*AVG_2_2_LEV_34 +
      (-rhou0_B0(0,0,-1) + rhou0_B0(0,0,0))*AVG_2_2_LEV_31 + (-rhou1_B0(0,0,-1) + rhou1_B0(0,0,0))*AVG_2_2_LEV_32 +
      (-rhou2_B0(0,0,-1) + rhou2_B0(0,0,0))*AVG_2_2_LEV_33;

    alpha_40 = (-rho_B0(0,0,-1) + rho_B0(0,0,0))*AVG_2_2_LEV_40 + (-rhoE_B0(0,0,-1) + rhoE_B0(0,0,0))*AVG_2_2_LEV_44 +
      (-rhou0_B0(0,0,-1) + rhou0_B0(0,0,0))*AVG_2_2_LEV_41 + (-rhou1_B0(0,0,-1) + rhou1_B0(0,0,0))*AVG_2_2_LEV_42 +
      (-rhou2_B0(0,0,-1) + rhou2_B0(0,0,0))*AVG_2_2_LEV_43;

   AVG_2_rho = ((1.0/2.0))*(rho_B0(0,0,0) + rho_B0(0,0,1));

   AVG_2_u0 = ((1.0/2.0))*(u0_B0(0,0,0) + u0_B0(0,0,1));

   AVG_2_a = ((1.0/2.0))*(a_B0(0,0,0) + a_B0(0,0,1));

   AVG_2_u2 = ((1.0/2.0))*(u2_B0(0,0,0) + u2_B0(0,0,1));

   AVG_2_u1 = ((1.0/2.0))*(u1_B0(0,0,0) + u1_B0(0,0,1));

   inv_AVG_a = 1.0/(AVG_2_a);

   inv_AVG_rho = 1.0/(AVG_2_rho);

   AVG_2_2_LEV_00 = -AVG_2_u1*inv_AVG_rho;

   AVG_2_2_LEV_02 = inv_AVG_rho;

   AVG_2_2_LEV_10 = AVG_2_u0*inv_AVG_rho;

   AVG_2_2_LEV_11 = -inv_AVG_rho;

    AVG_2_2_LEV_20 = -(1.0/2.0)*(-2 - (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_2_2_LEV_21 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u0;

   AVG_2_2_LEV_22 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u1;

   AVG_2_2_LEV_23 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u2;

   AVG_2_2_LEV_24 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_2_2_LEV_30 = -0.353553390593274*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) + (AVG_2_u2*AVG_2_u2) -
      (AVG_2_u0*AVG_2_u0)*gama - (AVG_2_u1*AVG_2_u1)*gama - (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_31 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_32 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_33 = 0.707106781186547*(-gama*AVG_2_u2 + AVG_2_a + AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_2_2_LEV_40 = 0.353553390593274*(-(AVG_2_u0*AVG_2_u0) - (AVG_2_u1*AVG_2_u1) - (AVG_2_u2*AVG_2_u2) +
      (AVG_2_u0*AVG_2_u0)*gama + (AVG_2_u1*AVG_2_u1)*gama + (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_41 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_42 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_43 = -0.707106781186547*(-AVG_2_u2 + gama*AVG_2_u2 + AVG_2_a)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_01 = (-rho_B0(0,0,0) + rho_B0(0,0,1))*AVG_2_2_LEV_00 + (-rhou1_B0(0,0,0) + rhou1_B0(0,0,1))*AVG_2_2_LEV_02;

   alpha_11 = (-rho_B0(0,0,0) + rho_B0(0,0,1))*AVG_2_2_LEV_10 + (-rhou0_B0(0,0,0) + rhou0_B0(0,0,1))*AVG_2_2_LEV_11;

    alpha_21 = (-rho_B0(0,0,0) + rho_B0(0,0,1))*AVG_2_2_LEV_20 + (-rhoE_B0(0,0,0) + rhoE_B0(0,0,1))*AVG_2_2_LEV_24 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,0,1))*AVG_2_2_LEV_21 + (-rhou1_B0(0,0,0) + rhou1_B0(0,0,1))*AVG_2_2_LEV_22 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,0,1))*AVG_2_2_LEV_23;

    alpha_31 = (-rho_B0(0,0,0) + rho_B0(0,0,1))*AVG_2_2_LEV_30 + (-rhoE_B0(0,0,0) + rhoE_B0(0,0,1))*AVG_2_2_LEV_34 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,0,1))*AVG_2_2_LEV_31 + (-rhou1_B0(0,0,0) + rhou1_B0(0,0,1))*AVG_2_2_LEV_32 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,0,1))*AVG_2_2_LEV_33;

    alpha_41 = (-rho_B0(0,0,0) + rho_B0(0,0,1))*AVG_2_2_LEV_40 + (-rhoE_B0(0,0,0) + rhoE_B0(0,0,1))*AVG_2_2_LEV_44 +
      (-rhou0_B0(0,0,0) + rhou0_B0(0,0,1))*AVG_2_2_LEV_41 + (-rhou1_B0(0,0,0) + rhou1_B0(0,0,1))*AVG_2_2_LEV_42 +
      (-rhou2_B0(0,0,0) + rhou2_B0(0,0,1))*AVG_2_2_LEV_43;

   ws_lambda_00 = AVG_2_u2;

   ws_lambda_11 = AVG_2_u2;

   ws_lambda_22 = AVG_2_u2;

   ws_lambda_33 = AVG_2_a + AVG_2_u2;

   ws_lambda_44 = -AVG_2_a + AVG_2_u2;

   AVG_2_REV_02 = 1;

   AVG_2_REV_03 = 0.707106781186547*AVG_2_rho*inv_AVG_a;

   AVG_2_REV_04 = 0.707106781186547*AVG_2_rho*inv_AVG_a;

   AVG_2_REV_11 = -AVG_2_rho;

   AVG_2_REV_12 = AVG_2_u0;

   AVG_2_REV_13 = 0.707106781186547*AVG_2_rho*AVG_2_u0*inv_AVG_a;

   AVG_2_REV_14 = 0.707106781186547*AVG_2_rho*AVG_2_u0*inv_AVG_a;

   AVG_2_REV_20 = AVG_2_rho;

   AVG_2_REV_22 = AVG_2_u1;

   AVG_2_REV_23 = 0.707106781186547*AVG_2_rho*AVG_2_u1*inv_AVG_a;

   AVG_2_REV_24 = 0.707106781186547*AVG_2_rho*AVG_2_u1*inv_AVG_a;

   AVG_2_REV_32 = AVG_2_u2;

   AVG_2_REV_33 = 0.707106781186547*(AVG_2_a + AVG_2_u2)*AVG_2_rho*inv_AVG_a;

   AVG_2_REV_34 = 0.707106781186547*(-AVG_2_a + AVG_2_u2)*AVG_2_rho*inv_AVG_a;

   AVG_2_REV_40 = AVG_2_rho*AVG_2_u1;

   AVG_2_REV_41 = -AVG_2_rho*AVG_2_u0;

   AVG_2_REV_42 = ((1.0/2.0))*(AVG_2_u0*AVG_2_u0) + ((1.0/2.0))*(AVG_2_u1*AVG_2_u1) + ((1.0/2.0))*(AVG_2_u2*AVG_2_u2);

    AVG_2_REV_43 = 0.707106781186547*(((AVG_2_a*AVG_2_a) + ((1.0/2.0))*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) +
      (AVG_2_u2*AVG_2_u2))*gamma_m1)*invgamma_m1 + AVG_2_a*AVG_2_u2)*AVG_2_rho*inv_AVG_a;

    AVG_2_REV_44 = 0.707106781186547*(((AVG_2_a*AVG_2_a) + ((1.0/2.0))*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) +
      (AVG_2_u2*AVG_2_u2))*gamma_m1)*invgamma_m1 - AVG_2_a*AVG_2_u2)*AVG_2_rho*inv_AVG_a;

   AVG_2_rho = ((1.0/2.0))*(rho_B0(0,0,1) + rho_B0(0,0,2));

   AVG_2_u0 = ((1.0/2.0))*(u0_B0(0,0,1) + u0_B0(0,0,2));

   AVG_2_a = ((1.0/2.0))*(a_B0(0,0,1) + a_B0(0,0,2));

   AVG_2_u2 = ((1.0/2.0))*(u2_B0(0,0,1) + u2_B0(0,0,2));

   AVG_2_u1 = ((1.0/2.0))*(u1_B0(0,0,1) + u1_B0(0,0,2));

   inv_AVG_a = 1.0/(AVG_2_a);

   inv_AVG_rho = 1.0/(AVG_2_rho);

   AVG_2_2_LEV_00 = -AVG_2_u1*inv_AVG_rho;

   AVG_2_2_LEV_02 = inv_AVG_rho;

   AVG_2_2_LEV_10 = AVG_2_u0*inv_AVG_rho;

   AVG_2_2_LEV_11 = -inv_AVG_rho;

    AVG_2_2_LEV_20 = -(1.0/2.0)*(-2 - (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a) - (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a) +
      (AVG_2_u0*AVG_2_u0)*(inv_AVG_a*inv_AVG_a)*gama + (AVG_2_u1*AVG_2_u1)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_2_u2*AVG_2_u2)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_2_2_LEV_21 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u0;

   AVG_2_2_LEV_22 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u1;

   AVG_2_2_LEV_23 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_2_u2;

   AVG_2_2_LEV_24 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_2_2_LEV_30 = -0.353553390593274*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) + (AVG_2_u2*AVG_2_u2) -
      (AVG_2_u0*AVG_2_u0)*gama - (AVG_2_u1*AVG_2_u1)*gama - (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_31 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_32 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_33 = 0.707106781186547*(-gama*AVG_2_u2 + AVG_2_a + AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_2_2_LEV_40 = 0.353553390593274*(-(AVG_2_u0*AVG_2_u0) - (AVG_2_u1*AVG_2_u1) - (AVG_2_u2*AVG_2_u2) +
      (AVG_2_u0*AVG_2_u0)*gama + (AVG_2_u1*AVG_2_u1)*gama + (AVG_2_u2*AVG_2_u2)*gama +
      2*AVG_2_a*AVG_2_u2)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_41 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_42 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_43 = -0.707106781186547*(-AVG_2_u2 + gama*AVG_2_u2 + AVG_2_a)*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

   alpha_02 = (-rho_B0(0,0,1) + rho_B0(0,0,2))*AVG_2_2_LEV_00 + (-rhou1_B0(0,0,1) + rhou1_B0(0,0,2))*AVG_2_2_LEV_02;

   alpha_12 = (-rho_B0(0,0,1) + rho_B0(0,0,2))*AVG_2_2_LEV_10 + (-rhou0_B0(0,0,1) + rhou0_B0(0,0,2))*AVG_2_2_LEV_11;

    alpha_22 = (-rho_B0(0,0,1) + rho_B0(0,0,2))*AVG_2_2_LEV_20 + (-rhoE_B0(0,0,1) + rhoE_B0(0,0,2))*AVG_2_2_LEV_24 +
      (-rhou0_B0(0,0,1) + rhou0_B0(0,0,2))*AVG_2_2_LEV_21 + (-rhou1_B0(0,0,1) + rhou1_B0(0,0,2))*AVG_2_2_LEV_22 +
      (-rhou2_B0(0,0,1) + rhou2_B0(0,0,2))*AVG_2_2_LEV_23;

    alpha_32 = (-rho_B0(0,0,1) + rho_B0(0,0,2))*AVG_2_2_LEV_30 + (-rhoE_B0(0,0,1) + rhoE_B0(0,0,2))*AVG_2_2_LEV_34 +
      (-rhou0_B0(0,0,1) + rhou0_B0(0,0,2))*AVG_2_2_LEV_31 + (-rhou1_B0(0,0,1) + rhou1_B0(0,0,2))*AVG_2_2_LEV_32 +
      (-rhou2_B0(0,0,1) + rhou2_B0(0,0,2))*AVG_2_2_LEV_33;

    alpha_42 = (-rho_B0(0,0,1) + rho_B0(0,0,2))*AVG_2_2_LEV_40 + (-rhoE_B0(0,0,1) + rhoE_B0(0,0,2))*AVG_2_2_LEV_44 +
      (-rhou0_B0(0,0,1) + rhou0_B0(0,0,2))*AVG_2_2_LEV_41 + (-rhou1_B0(0,0,1) + rhou1_B0(0,0,2))*AVG_2_2_LEV_42 +
      (-rhou2_B0(0,0,1) + rhou2_B0(0,0,2))*AVG_2_2_LEV_43;

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

    sigma_0_4 = ((fabs(ws_lambda_44) >= delta_TVD) ? (
   fabs(ws_lambda_44)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_44*ws_lambda_44))*invdelta_TVD
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

   S = (alpha_41 > 0) ? 1 : ((alpha_41 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_40, 2*fabs(alpha_41)));

   t2 = fmin(fabs(alpha_41), 2*S*alpha_40);

   g_40 = S*fmax(t1, t2);

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

   S = (alpha_42 > 0) ? 1 : ((alpha_42 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_41, 2*fabs(alpha_42)));

   t2 = fmin(fabs(alpha_42), 2*S*alpha_41);

   g_41 = S*fmax(t1, t2);

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

   gamma_4 = ((alpha_41 == 0) ? (
   0
)
: (
   (-g_40 + g_41)*alpha_41*sigma_0_4/((alpha_41*alpha_41) + eps_TVD)
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

    sigma_1_4 = ((fabs(gamma_4) >= delta_TVD) ? (
   fabs(gamma_4)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_4*gamma_4))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   phi_4 = -fabs(sigma_0_4 + sigma_1_4)*alpha_41 + 0.5*(g_40 + g_41)*sigma_0_4;

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

   t1 = -fabs(alpha_40) + fabs(alpha_41);

   t2 = fabs(alpha_40) + fabs(alpha_41) + eps_TVD;

   theta_hat_40 = (fabs(t1/t2)*fabs(t1/t2));

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

   t1 = -fabs(alpha_41) + fabs(alpha_42);

   t2 = fabs(alpha_41) + fabs(alpha_42) + eps_TVD;

   theta_hat_41 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   theta_4 = fmax(theta_hat_40, theta_hat_41);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   phi_star_4 = kappa_TVD*phi_4*theta_4;

   rho_RKold_B0(0,0,0) = 0.5*(AVG_2_REV_02*phi_star_2 + AVG_2_REV_03*phi_star_3 + AVG_2_REV_04*phi_star_4);

    rhou0_RKold_B0(0,0,0) = 0.5*(AVG_2_REV_11*phi_star_1 + AVG_2_REV_12*phi_star_2 + AVG_2_REV_13*phi_star_3 +
      AVG_2_REV_14*phi_star_4);

    rhou1_RKold_B0(0,0,0) = 0.5*(AVG_2_REV_20*phi_star_0 + AVG_2_REV_22*phi_star_2 + AVG_2_REV_23*phi_star_3 +
      AVG_2_REV_24*phi_star_4);

   rhou2_RKold_B0(0,0,0) = 0.5*(AVG_2_REV_32*phi_star_2 + AVG_2_REV_33*phi_star_3 + AVG_2_REV_34*phi_star_4);

    rhoE_RKold_B0(0,0,0) = 0.5*(AVG_2_REV_40*phi_star_0 + AVG_2_REV_41*phi_star_1 + AVG_2_REV_42*phi_star_2 +
      AVG_2_REV_43*phi_star_3 + AVG_2_REV_44*phi_star_4);

}

 void opensbliblock00Kernel048(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &Residual4_B0, const ACC<double> &rhoE_RKold_B0, const
ACC<double> &rho_RKold_B0, const ACC<double> &rhou0_RKold_B0, const ACC<double> &rhou1_RKold_B0, const ACC<double>
&rhou2_RKold_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const ACC<double>
&wk3_B0, const ACC<double> &wk4_B0, ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double>
&rhou1_B0, ACC<double> &rhou2_B0, const int *idx)
{
   double Grid_0 = 0.0;
   double Grid_1 = 0.0;
   double Grid_2 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Grid_1 = idx[1];

   Grid_2 = idx[2];

   Wall = 1;

    rho_B0(0,0,0) = (-(-wk0_B0(-1,0,0) + wk0_B0(0,0,0))*invDelta0block0 - (-Residual0_B0(0,-1,0) +
      Residual0_B0(0,0,0))*invDelta1block0 - (-rho_RKold_B0(0,0,-1) + rho_RKold_B0(0,0,0))*invDelta2block0)*dt +
      rho_B0(0,0,0);

    rhou0_B0(0,0,0) = (-(-wk1_B0(-1,0,0) + wk1_B0(0,0,0))*invDelta0block0 - (-Residual1_B0(0,-1,0) +
      Residual1_B0(0,0,0))*invDelta1block0 - (-rhou0_RKold_B0(0,0,-1) + rhou0_RKold_B0(0,0,0))*invDelta2block0)*dt +
      rhou0_B0(0,0,0);

    rhou1_B0(0,0,0) = (-(-wk2_B0(-1,0,0) + wk2_B0(0,0,0))*invDelta0block0 - (-Residual2_B0(0,-1,0) +
      Residual2_B0(0,0,0))*invDelta1block0 - (-rhou1_RKold_B0(0,0,-1) + rhou1_RKold_B0(0,0,0))*invDelta2block0)*dt +
      rhou1_B0(0,0,0);

    rhou2_B0(0,0,0) = (-(-wk3_B0(-1,0,0) + wk3_B0(0,0,0))*invDelta0block0 - (-Residual3_B0(0,-1,0) +
      Residual3_B0(0,0,0))*invDelta1block0 - (-rhou2_RKold_B0(0,0,-1) + rhou2_RKold_B0(0,0,0))*invDelta2block0)*dt +
      rhou2_B0(0,0,0);

    rhoE_B0(0,0,0) = (-(-wk4_B0(-1,0,0) + wk4_B0(0,0,0))*invDelta0block0 - (-Residual4_B0(0,-1,0) +
      Residual4_B0(0,0,0))*invDelta1block0 - (-rhoE_RKold_B0(0,0,-1) + rhoE_RKold_B0(0,0,0))*invDelta2block0)*dt +
      rhoE_B0(0,0,0);

}

 void opensbliblock00Kernel042(const ACC<double> &mu_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, double *KE_B0, double *dilatation_dissipation_B0, double
*enstrophy_dissipation_B0, double *rhom_B0, ACC<double> &divV_B0)
{
   double d1_u0_dx = 0.0;
   double d1_u0_dy = 0.0;
   double d1_u0_dz = 0.0;
   double d1_u1_dx = 0.0;
   double d1_u1_dy = 0.0;
   double d1_u1_dz = 0.0;
   double d1_u2_dx = 0.0;
   double d1_u2_dy = 0.0;
   double d1_u2_dz = 0.0;
   double wx = 0.0;
   double wy = 0.0;
   double wz = 0.0;
    d1_u1_dz = (-(2.0/3.0)*u1_B0(0,0,-1) - (1.0/12.0)*u1_B0(0,0,2) + ((1.0/12.0))*u1_B0(0,0,-2) +
      ((2.0/3.0))*u1_B0(0,0,1))*invDelta2block0;

    d1_u2_dy = (-(2.0/3.0)*u2_B0(0,-1,0) - (1.0/12.0)*u2_B0(0,2,0) + ((1.0/12.0))*u2_B0(0,-2,0) +
      ((2.0/3.0))*u2_B0(0,1,0))*invDelta1block0;

   wx = -d1_u1_dz + d1_u2_dy;

    d1_u0_dz = (-(2.0/3.0)*u0_B0(0,0,-1) - (1.0/12.0)*u0_B0(0,0,2) + ((1.0/12.0))*u0_B0(0,0,-2) +
      ((2.0/3.0))*u0_B0(0,0,1))*invDelta2block0;

    d1_u2_dx = (-(2.0/3.0)*u2_B0(-1,0,0) - (1.0/12.0)*u2_B0(2,0,0) + ((1.0/12.0))*u2_B0(-2,0,0) +
      ((2.0/3.0))*u2_B0(1,0,0))*invDelta0block0;

   wy = -d1_u2_dx + d1_u0_dz;

    d1_u0_dy = (-(2.0/3.0)*u0_B0(0,-1,0) - (1.0/12.0)*u0_B0(0,2,0) + ((1.0/12.0))*u0_B0(0,-2,0) +
      ((2.0/3.0))*u0_B0(0,1,0))*invDelta1block0;

    d1_u1_dx = (-(2.0/3.0)*u1_B0(-1,0,0) - (1.0/12.0)*u1_B0(2,0,0) + ((1.0/12.0))*u1_B0(-2,0,0) +
      ((2.0/3.0))*u1_B0(1,0,0))*invDelta0block0;

   wz = -d1_u0_dy + d1_u1_dx;

    d1_u1_dy = (-(2.0/3.0)*u1_B0(0,-1,0) - (1.0/12.0)*u1_B0(0,2,0) + ((1.0/12.0))*u1_B0(0,-2,0) +
      ((2.0/3.0))*u1_B0(0,1,0))*invDelta1block0;

    d1_u2_dz = (-(2.0/3.0)*u2_B0(0,0,-1) - (1.0/12.0)*u2_B0(0,0,2) + ((1.0/12.0))*u2_B0(0,0,-2) +
      ((2.0/3.0))*u2_B0(0,0,1))*invDelta2block0;

    d1_u0_dx = (-(2.0/3.0)*u0_B0(-1,0,0) - (1.0/12.0)*u0_B0(2,0,0) + ((1.0/12.0))*u0_B0(-2,0,0) +
      ((2.0/3.0))*u0_B0(1,0,0))*invDelta0block0;

   divV_B0(0,0,0) = d1_u0_dx + d1_u1_dy + d1_u2_dz;

   *rhom_B0 = rho_B0(0,0,0) + *rhom_B0;

    *KE_B0 = 0.5*((u0_B0(0,0,0)*u0_B0(0,0,0)) + (u1_B0(0,0,0)*u1_B0(0,0,0)) + (u2_B0(0,0,0)*u2_B0(0,0,0)))*rho_B0(0,0,0)
      + *KE_B0;

   *dilatation_dissipation_B0 = ((4.0/3.0))*(divV_B0(0,0,0)*divV_B0(0,0,0))*mu_B0(0,0,0) + *dilatation_dissipation_B0;

   *enstrophy_dissipation_B0 = ((wx*wx) + (wy*wy) + (wz*wz))*mu_B0(0,0,0) + *enstrophy_dissipation_B0;

}

#endif
