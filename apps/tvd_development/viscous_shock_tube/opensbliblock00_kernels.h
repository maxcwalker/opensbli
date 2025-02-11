#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel022(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &x0_B0, ACC<double> &x1_B0, const int *idx)
{
   double p = 0.0;
   double rho = 0.0;
   double u0 = 0.0;
   double u1 = 0.0;
   double x_grid = 0.0;
   x_grid = Delta0block0*idx[0];

   x0_B0(0,0) = x_grid;

   x1_B0(0,0) = Delta1block0*idx[1];

   rho = ((x_grid <= 0.5) ? (
   120.0
)
: (
   1.2
));

   u0 = 0.0;

   u1 = 0.0;

   p = ((x_grid <= 0.5) ? (
   120.0*invgama
)
: (
   1.2*invgama
));

   rho_B0(0,0) = rho;

   rhou0_B0(0,0) = rho*u0;

   rhou1_B0(0,0) = rho*u1;

   rhoE_B0(0,0) = p/(-1.0 + gama) + 0.5*((u0*u0) + (u1*u1))*rho;

}

void opensbliblock00Kernel018(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(-1,0) = rho_B0(1,0);

   rho_B0(-2,0) = rho_B0(2,0);

   rhou0_B0(0,0) = 0;

   rhou1_B0(0,0) = 0;

   rhou0_B0(-1,0) = -rhou0_B0(1,0);

   rhou1_B0(-1,0) = -rhou1_B0(1,0);

   rhou0_B0(-2,0) = -rhou0_B0(2,0);

   rhou1_B0(-2,0) = -rhou1_B0(2,0);

    rhoE_B0(0,0) = (-(9.0/11.0)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(2,0)*rhou0_B0(2,0)) +
      ((1.0/2.0))*(rhou1_B0(2,0)*rhou1_B0(2,0)))/rho_B0(2,0) + rhoE_B0(2,0))*gama/(inv2Minf*rho_B0(2,0)) +
      ((2.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(3,0)*rhou0_B0(3,0)) +
      ((1.0/2.0))*(rhou1_B0(3,0)*rhou1_B0(3,0)))/rho_B0(3,0) + rhoE_B0(3,0))*gama/(inv2Minf*rho_B0(3,0)) +
      ((18.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(1,0)*rhou0_B0(1,0)) +
      ((1.0/2.0))*(rhou1_B0(1,0)*rhou1_B0(1,0)))/rho_B0(1,0) +
      rhoE_B0(1,0))*gama/(inv2Minf*rho_B0(1,0)))*invgama*inv2Minf*inv_gamma_m1*rho_B0(0,0);

   rhoE_B0(-1,0) = rhoE_B0(1,0);

   rhoE_B0(-2,0) = rhoE_B0(2,0);

}

void opensbliblock00Kernel019(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(1,0) = rho_B0(-1,0);

   rho_B0(2,0) = rho_B0(-2,0);

   rhou0_B0(0,0) = 0;

   rhou1_B0(0,0) = 0;

   rhou0_B0(1,0) = -rhou0_B0(-1,0);

   rhou1_B0(1,0) = -rhou1_B0(-1,0);

   rhou0_B0(2,0) = -rhou0_B0(-2,0);

   rhou1_B0(2,0) = -rhou1_B0(-2,0);

    rhoE_B0(0,0) = (-(9.0/11.0)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(-2,0)*rhou0_B0(-2,0)) +
      ((1.0/2.0))*(rhou1_B0(-2,0)*rhou1_B0(-2,0)))/rho_B0(-2,0) + rhoE_B0(-2,0))*gama/(inv2Minf*rho_B0(-2,0)) +
      ((2.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(-3,0)*rhou0_B0(-3,0)) +
      ((1.0/2.0))*(rhou1_B0(-3,0)*rhou1_B0(-3,0)))/rho_B0(-3,0) + rhoE_B0(-3,0))*gama/(inv2Minf*rho_B0(-3,0)) +
      ((18.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(-1,0)*rhou0_B0(-1,0)) +
      ((1.0/2.0))*(rhou1_B0(-1,0)*rhou1_B0(-1,0)))/rho_B0(-1,0) +
      rhoE_B0(-1,0))*gama/(inv2Minf*rho_B0(-1,0)))*invgama*inv2Minf*inv_gamma_m1*rho_B0(0,0);

   rhoE_B0(1,0) = rhoE_B0(-1,0);

   rhoE_B0(2,0) = rhoE_B0(-2,0);

}

void opensbliblock00Kernel020(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,-1) = rho_B0(0,1);

   rho_B0(0,-2) = rho_B0(0,2);

   rhou0_B0(0,0) = 0;

   rhou1_B0(0,0) = 0;

   rhou0_B0(0,-1) = -rhou0_B0(0,1);

   rhou1_B0(0,-1) = -rhou1_B0(0,1);

   rhou0_B0(0,-2) = -rhou0_B0(0,2);

   rhou1_B0(0,-2) = -rhou1_B0(0,2);

    rhoE_B0(0,0) = (-(9.0/11.0)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,2)*rhou0_B0(0,2)) +
      ((1.0/2.0))*(rhou1_B0(0,2)*rhou1_B0(0,2)))/rho_B0(0,2) + rhoE_B0(0,2))*gama/(inv2Minf*rho_B0(0,2)) +
      ((2.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,3)*rhou0_B0(0,3)) +
      ((1.0/2.0))*(rhou1_B0(0,3)*rhou1_B0(0,3)))/rho_B0(0,3) + rhoE_B0(0,3))*gama/(inv2Minf*rho_B0(0,3)) +
      ((18.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,1)*rhou0_B0(0,1)) +
      ((1.0/2.0))*(rhou1_B0(0,1)*rhou1_B0(0,1)))/rho_B0(0,1) +
      rhoE_B0(0,1))*gama/(inv2Minf*rho_B0(0,1)))*invgama*inv2Minf*inv_gamma_m1*rho_B0(0,0);

   rhoE_B0(0,-1) = rhoE_B0(0,1);

   rhoE_B0(0,-2) = rhoE_B0(0,2);

}

void opensbliblock00Kernel021(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,1) = rho_B0(0,-1);

   rhou0_B0(0,1) = rhou0_B0(0,-1);

   rhou1_B0(0,1) = -1.0*rhou1_B0(0,-1);

   rhoE_B0(0,1) = rhoE_B0(0,-1);

   rho_B0(0,2) = rho_B0(0,-2);

   rhou0_B0(0,2) = rhou0_B0(0,-2);

   rhou1_B0(0,2) = -1.0*rhou1_B0(0,-2);

   rhoE_B0(0,2) = rhoE_B0(0,-2);

}

void opensbliblock00Kernel001(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0) = rhou0_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel003(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0) = rhou1_B0(0,0)/rho_B0(0,0);

}

 void opensbliblock00Kernel009(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &p_B0)
{
    p_B0(0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0)*u0_B0(0,0))*rho_B0(0,0) -
      (1.0/2.0)*(u1_B0(0,0)*u1_B0(0,0))*rho_B0(0,0) + rhoE_B0(0,0));

}

void opensbliblock00Kernel013(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0) = (Minf*Minf)*gama*p_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel000(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
{
   if (idx[0] == 0){

       wk0_B0(0,0) = (-3*u0_B0(2,0) + 4*u0_B0(1,0) - (25.0/12.0)*u0_B0(0,0) - (1.0/4.0)*u0_B0(4,0) +
            ((4.0/3.0))*u0_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk0_B0(0,0) = (-(5.0/6.0)*u0_B0(0,0) - (1.0/2.0)*u0_B0(2,0) - (1.0/4.0)*u0_B0(-1,0) + ((1.0/12.0))*u0_B0(3,0) +
            ((3.0/2.0))*u0_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk0_B0(0,0) = (-4*u0_B0(-1,0) + 3*u0_B0(-2,0) - (4.0/3.0)*u0_B0(-3,0) + ((1.0/4.0))*u0_B0(-4,0) +
            ((25.0/12.0))*u0_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk0_B0(0,0) = (((1.0/2.0))*u0_B0(-2,0) - (3.0/2.0)*u0_B0(-1,0) - (1.0/12.0)*u0_B0(-3,0) + ((1.0/4.0))*u0_B0(1,0)
            + ((5.0/6.0))*u0_B0(0,0))*invDelta0block0;

   }

   else{

       wk0_B0(0,0) = (-(2.0/3.0)*u0_B0(-1,0) - (1.0/12.0)*u0_B0(2,0) + ((1.0/12.0))*u0_B0(-2,0) +
            ((2.0/3.0))*u0_B0(1,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel002(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
{
   if (idx[0] == 0){

       wk1_B0(0,0) = (-3*u1_B0(2,0) + 4*u1_B0(1,0) - (25.0/12.0)*u1_B0(0,0) - (1.0/4.0)*u1_B0(4,0) +
            ((4.0/3.0))*u1_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk1_B0(0,0) = (-(5.0/6.0)*u1_B0(0,0) - (1.0/2.0)*u1_B0(2,0) - (1.0/4.0)*u1_B0(-1,0) + ((1.0/12.0))*u1_B0(3,0) +
            ((3.0/2.0))*u1_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk1_B0(0,0) = (-4*u1_B0(-1,0) + 3*u1_B0(-2,0) - (4.0/3.0)*u1_B0(-3,0) + ((1.0/4.0))*u1_B0(-4,0) +
            ((25.0/12.0))*u1_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk1_B0(0,0) = (((1.0/2.0))*u1_B0(-2,0) - (3.0/2.0)*u1_B0(-1,0) - (1.0/12.0)*u1_B0(-3,0) + ((1.0/4.0))*u1_B0(1,0)
            + ((5.0/6.0))*u1_B0(0,0))*invDelta0block0;

   }

   else{

       wk1_B0(0,0) = (-(2.0/3.0)*u1_B0(-1,0) - (1.0/12.0)*u1_B0(2,0) + ((1.0/12.0))*u1_B0(-2,0) +
            ((2.0/3.0))*u1_B0(1,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel004(const ACC<double> &u2_B0, ACC<double> &wk2_B0, const int *idx)
{
   if (idx[0] == 0){

       wk2_B0(0,0) = (-3*u2_B0(2,0) + 4*u2_B0(1,0) - (25.0/12.0)*u2_B0(0,0) - (1.0/4.0)*u2_B0(4,0) +
            ((4.0/3.0))*u2_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk2_B0(0,0) = (-(5.0/6.0)*u2_B0(0,0) - (1.0/2.0)*u2_B0(2,0) - (1.0/4.0)*u2_B0(-1,0) + ((1.0/12.0))*u2_B0(3,0) +
            ((3.0/2.0))*u2_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk2_B0(0,0) = (-4*u2_B0(-1,0) + 3*u2_B0(-2,0) - (4.0/3.0)*u2_B0(-3,0) + ((1.0/4.0))*u2_B0(-4,0) +
            ((25.0/12.0))*u2_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk2_B0(0,0) = (((1.0/2.0))*u2_B0(-2,0) - (3.0/2.0)*u2_B0(-1,0) - (1.0/12.0)*u2_B0(-3,0) + ((1.0/4.0))*u2_B0(1,0)
            + ((5.0/6.0))*u2_B0(0,0))*invDelta0block0;

   }

   else{

       wk2_B0(0,0) = (-(2.0/3.0)*u2_B0(-1,0) - (1.0/12.0)*u2_B0(2,0) + ((1.0/12.0))*u2_B0(-2,0) +
            ((2.0/3.0))*u2_B0(1,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel006(const ACC<double> &u0_B0, ACC<double> &wk3_B0, const int *idx)
{
   if (idx[1] == 0){

       wk3_B0(0,0) = (-3*u0_B0(0,2) + 4*u0_B0(0,1) - (25.0/12.0)*u0_B0(0,0) - (1.0/4.0)*u0_B0(0,4) +
            ((4.0/3.0))*u0_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk3_B0(0,0) = (-(5.0/6.0)*u0_B0(0,0) - (1.0/2.0)*u0_B0(0,2) - (1.0/4.0)*u0_B0(0,-1) + ((1.0/12.0))*u0_B0(0,3) +
            ((3.0/2.0))*u0_B0(0,1))*invDelta1block0;

   }

   else{

       wk3_B0(0,0) = (-(2.0/3.0)*u0_B0(0,-1) - (1.0/12.0)*u0_B0(0,2) + ((1.0/12.0))*u0_B0(0,-2) +
            ((2.0/3.0))*u0_B0(0,1))*invDelta1block0;

   }

}

void opensbliblock00Kernel007(const ACC<double> &u1_B0, ACC<double> &wk4_B0, const int *idx)
{
   if (idx[1] == 0){

       wk4_B0(0,0) = (-3*u1_B0(0,2) + 4*u1_B0(0,1) - (25.0/12.0)*u1_B0(0,0) - (1.0/4.0)*u1_B0(0,4) +
            ((4.0/3.0))*u1_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk4_B0(0,0) = (-(5.0/6.0)*u1_B0(0,0) - (1.0/2.0)*u1_B0(0,2) - (1.0/4.0)*u1_B0(0,-1) + ((1.0/12.0))*u1_B0(0,3) +
            ((3.0/2.0))*u1_B0(0,1))*invDelta1block0;

   }

   else{

       wk4_B0(0,0) = (-(2.0/3.0)*u1_B0(0,-1) - (1.0/12.0)*u1_B0(0,2) + ((1.0/12.0))*u1_B0(0,-2) +
            ((2.0/3.0))*u1_B0(0,1))*invDelta1block0;

   }

}

void opensbliblock00Kernel008(const ACC<double> &u2_B0, ACC<double> &wk5_B0, const int *idx)
{
   if (idx[1] == 0){

       wk5_B0(0,0) = (-3*u2_B0(0,2) + 4*u2_B0(0,1) - (25.0/12.0)*u2_B0(0,0) - (1.0/4.0)*u2_B0(0,4) +
            ((4.0/3.0))*u2_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk5_B0(0,0) = (-(5.0/6.0)*u2_B0(0,0) - (1.0/2.0)*u2_B0(0,2) - (1.0/4.0)*u2_B0(0,-1) + ((1.0/12.0))*u2_B0(0,3) +
            ((3.0/2.0))*u2_B0(0,1))*invDelta1block0;

   }

   else{

       wk5_B0(0,0) = (-(2.0/3.0)*u2_B0(0,-1) - (1.0/12.0)*u2_B0(0,2) + ((1.0/12.0))*u2_B0(0,-2) +
            ((2.0/3.0))*u2_B0(0,1))*invDelta1block0;

   }

}

 void opensbliblock00Kernel016(const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rhou0_B0, const
ACC<double> &rhou1_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, ACC<double> &Residual0_B0, ACC<double>
&Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, const int *idx)
{
   double d1_prhoEu0_dx = 0.0;
   double d1_prhoEu1_dy = 0.0;
   double d1_prhou0u0_dx = 0.0;
   double d1_prhou1u1_dy = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0u1_dy = 0.0;
   double d1_rhou1_dy = 0.0;
   double d1_rhou1u0_dx = 0.0;
   if (idx[0] == 0){

       d1_prhoEu0_dx = (-3*(p_B0(2,0) + rhoE_B0(2,0))*u0_B0(2,0) + 4*(p_B0(1,0) + rhoE_B0(1,0))*u0_B0(1,0) -
            (25.0/12.0)*(p_B0(0,0) + rhoE_B0(0,0))*u0_B0(0,0) - (1.0/4.0)*(p_B0(4,0) + rhoE_B0(4,0))*u0_B0(4,0) +
            ((4.0/3.0))*(p_B0(3,0) + rhoE_B0(3,0))*u0_B0(3,0))*invDelta0block0;

       d1_prhou0u0_dx = (-3*p_B0(2,0) + 4*p_B0(1,0) - (25.0/12.0)*p_B0(0,0) - (1.0/4.0)*p_B0(4,0) +
            ((4.0/3.0))*p_B0(3,0) - 3*u0_B0(2,0)*rhou0_B0(2,0) + 4*u0_B0(1,0)*rhou0_B0(1,0) -
            (25.0/12.0)*u0_B0(0,0)*rhou0_B0(0,0) - (1.0/4.0)*u0_B0(4,0)*rhou0_B0(4,0) +
            ((4.0/3.0))*u0_B0(3,0)*rhou0_B0(3,0))*invDelta0block0;

       d1_rhou0_dx = (-3*rhou0_B0(2,0) + 4*rhou0_B0(1,0) - (25.0/12.0)*rhou0_B0(0,0) - (1.0/4.0)*rhou0_B0(4,0) +
            ((4.0/3.0))*rhou0_B0(3,0))*invDelta0block0;

       d1_rhou1u0_dx = (-3*u0_B0(2,0)*rhou1_B0(2,0) + 4*u0_B0(1,0)*rhou1_B0(1,0) - (25.0/12.0)*u0_B0(0,0)*rhou1_B0(0,0)
            - (1.0/4.0)*u0_B0(4,0)*rhou1_B0(4,0) + ((4.0/3.0))*u0_B0(3,0)*rhou1_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_prhoEu0_dx = (-(5.0/6.0)*(p_B0(0,0) + rhoE_B0(0,0))*u0_B0(0,0) - (1.0/2.0)*(p_B0(2,0) +
            rhoE_B0(2,0))*u0_B0(2,0) - (1.0/4.0)*(p_B0(-1,0) + rhoE_B0(-1,0))*u0_B0(-1,0) + ((1.0/12.0))*(p_B0(3,0) +
            rhoE_B0(3,0))*u0_B0(3,0) + ((3.0/2.0))*(p_B0(1,0) + rhoE_B0(1,0))*u0_B0(1,0))*invDelta0block0;

       d1_prhou0u0_dx = (-(5.0/6.0)*p_B0(0,0) - (1.0/2.0)*p_B0(2,0) - (1.0/4.0)*p_B0(-1,0) + ((1.0/12.0))*p_B0(3,0) +
            ((3.0/2.0))*p_B0(1,0) - (5.0/6.0)*u0_B0(0,0)*rhou0_B0(0,0) - (1.0/2.0)*u0_B0(2,0)*rhou0_B0(2,0) -
            (1.0/4.0)*u0_B0(-1,0)*rhou0_B0(-1,0) + ((1.0/12.0))*u0_B0(3,0)*rhou0_B0(3,0) +
            ((3.0/2.0))*u0_B0(1,0)*rhou0_B0(1,0))*invDelta0block0;

       d1_rhou0_dx = (-(5.0/6.0)*rhou0_B0(0,0) - (1.0/2.0)*rhou0_B0(2,0) - (1.0/4.0)*rhou0_B0(-1,0) +
            ((1.0/12.0))*rhou0_B0(3,0) + ((3.0/2.0))*rhou0_B0(1,0))*invDelta0block0;

       d1_rhou1u0_dx = (-(5.0/6.0)*u0_B0(0,0)*rhou1_B0(0,0) - (1.0/2.0)*u0_B0(2,0)*rhou1_B0(2,0) -
            (1.0/4.0)*u0_B0(-1,0)*rhou1_B0(-1,0) + ((1.0/12.0))*u0_B0(3,0)*rhou1_B0(3,0) +
            ((3.0/2.0))*u0_B0(1,0)*rhou1_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_prhoEu0_dx = (-4*(p_B0(-1,0) + rhoE_B0(-1,0))*u0_B0(-1,0) + 3*(p_B0(-2,0) + rhoE_B0(-2,0))*u0_B0(-2,0) -
            (4.0/3.0)*(p_B0(-3,0) + rhoE_B0(-3,0))*u0_B0(-3,0) + ((1.0/4.0))*(p_B0(-4,0) + rhoE_B0(-4,0))*u0_B0(-4,0) +
            ((25.0/12.0))*(p_B0(0,0) + rhoE_B0(0,0))*u0_B0(0,0))*invDelta0block0;

       d1_prhou0u0_dx = (-4*p_B0(-1,0) + 3*p_B0(-2,0) - (4.0/3.0)*p_B0(-3,0) + ((1.0/4.0))*p_B0(-4,0) +
            ((25.0/12.0))*p_B0(0,0) - 4*u0_B0(-1,0)*rhou0_B0(-1,0) + 3*u0_B0(-2,0)*rhou0_B0(-2,0) -
            (4.0/3.0)*u0_B0(-3,0)*rhou0_B0(-3,0) + ((1.0/4.0))*u0_B0(-4,0)*rhou0_B0(-4,0) +
            ((25.0/12.0))*u0_B0(0,0)*rhou0_B0(0,0))*invDelta0block0;

       d1_rhou0_dx = (-4*rhou0_B0(-1,0) + 3*rhou0_B0(-2,0) - (4.0/3.0)*rhou0_B0(-3,0) + ((1.0/4.0))*rhou0_B0(-4,0) +
            ((25.0/12.0))*rhou0_B0(0,0))*invDelta0block0;

       d1_rhou1u0_dx = (-4*u0_B0(-1,0)*rhou1_B0(-1,0) + 3*u0_B0(-2,0)*rhou1_B0(-2,0) -
            (4.0/3.0)*u0_B0(-3,0)*rhou1_B0(-3,0) + ((1.0/4.0))*u0_B0(-4,0)*rhou1_B0(-4,0) +
            ((25.0/12.0))*u0_B0(0,0)*rhou1_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_prhoEu0_dx = (((1.0/2.0))*(p_B0(-2,0) + rhoE_B0(-2,0))*u0_B0(-2,0) - (3.0/2.0)*(p_B0(-1,0) +
            rhoE_B0(-1,0))*u0_B0(-1,0) - (1.0/12.0)*(p_B0(-3,0) + rhoE_B0(-3,0))*u0_B0(-3,0) + ((1.0/4.0))*(p_B0(1,0) +
            rhoE_B0(1,0))*u0_B0(1,0) + ((5.0/6.0))*(p_B0(0,0) + rhoE_B0(0,0))*u0_B0(0,0))*invDelta0block0;

       d1_prhou0u0_dx = (((1.0/2.0))*p_B0(-2,0) - (3.0/2.0)*p_B0(-1,0) - (1.0/12.0)*p_B0(-3,0) + ((1.0/4.0))*p_B0(1,0) +
            ((5.0/6.0))*p_B0(0,0) + ((1.0/2.0))*u0_B0(-2,0)*rhou0_B0(-2,0) - (3.0/2.0)*u0_B0(-1,0)*rhou0_B0(-1,0) -
            (1.0/12.0)*u0_B0(-3,0)*rhou0_B0(-3,0) + ((1.0/4.0))*u0_B0(1,0)*rhou0_B0(1,0) +
            ((5.0/6.0))*u0_B0(0,0)*rhou0_B0(0,0))*invDelta0block0;

       d1_rhou0_dx = (((1.0/2.0))*rhou0_B0(-2,0) - (3.0/2.0)*rhou0_B0(-1,0) - (1.0/12.0)*rhou0_B0(-3,0) +
            ((1.0/4.0))*rhou0_B0(1,0) + ((5.0/6.0))*rhou0_B0(0,0))*invDelta0block0;

       d1_rhou1u0_dx = (((1.0/2.0))*u0_B0(-2,0)*rhou1_B0(-2,0) - (3.0/2.0)*u0_B0(-1,0)*rhou1_B0(-1,0) -
            (1.0/12.0)*u0_B0(-3,0)*rhou1_B0(-3,0) + ((1.0/4.0))*u0_B0(1,0)*rhou1_B0(1,0) +
            ((5.0/6.0))*u0_B0(0,0)*rhou1_B0(0,0))*invDelta0block0;

   }

   else{

       d1_prhoEu0_dx = (-(2.0/3.0)*(p_B0(-1,0) + rhoE_B0(-1,0))*u0_B0(-1,0) - (1.0/12.0)*(p_B0(2,0) +
            rhoE_B0(2,0))*u0_B0(2,0) + ((1.0/12.0))*(p_B0(-2,0) + rhoE_B0(-2,0))*u0_B0(-2,0) + ((2.0/3.0))*(p_B0(1,0) +
            rhoE_B0(1,0))*u0_B0(1,0))*invDelta0block0;

       d1_prhou0u0_dx = (-(2.0/3.0)*p_B0(-1,0) - (1.0/12.0)*p_B0(2,0) + ((1.0/12.0))*p_B0(-2,0) + ((2.0/3.0))*p_B0(1,0)
            - (2.0/3.0)*u0_B0(-1,0)*rhou0_B0(-1,0) - (1.0/12.0)*u0_B0(2,0)*rhou0_B0(2,0) +
            ((1.0/12.0))*u0_B0(-2,0)*rhou0_B0(-2,0) + ((2.0/3.0))*u0_B0(1,0)*rhou0_B0(1,0))*invDelta0block0;

       d1_rhou0_dx = (-(2.0/3.0)*rhou0_B0(-1,0) - (1.0/12.0)*rhou0_B0(2,0) + ((1.0/12.0))*rhou0_B0(-2,0) +
            ((2.0/3.0))*rhou0_B0(1,0))*invDelta0block0;

       d1_rhou1u0_dx = (-(2.0/3.0)*u0_B0(-1,0)*rhou1_B0(-1,0) - (1.0/12.0)*u0_B0(2,0)*rhou1_B0(2,0) +
            ((1.0/12.0))*u0_B0(-2,0)*rhou1_B0(-2,0) + ((2.0/3.0))*u0_B0(1,0)*rhou1_B0(1,0))*invDelta0block0;

   }

   if (idx[1] == 0){

       d1_prhoEu1_dy = (-3*(p_B0(0,2) + rhoE_B0(0,2))*u1_B0(0,2) + 4*(p_B0(0,1) + rhoE_B0(0,1))*u1_B0(0,1) -
            (25.0/12.0)*(p_B0(0,0) + rhoE_B0(0,0))*u1_B0(0,0) - (1.0/4.0)*(p_B0(0,4) + rhoE_B0(0,4))*u1_B0(0,4) +
            ((4.0/3.0))*(p_B0(0,3) + rhoE_B0(0,3))*u1_B0(0,3))*invDelta1block0;

       d1_prhou1u1_dy = (-3*p_B0(0,2) + 4*p_B0(0,1) - (25.0/12.0)*p_B0(0,0) - (1.0/4.0)*p_B0(0,4) +
            ((4.0/3.0))*p_B0(0,3) - 3*u1_B0(0,2)*rhou1_B0(0,2) + 4*u1_B0(0,1)*rhou1_B0(0,1) -
            (25.0/12.0)*u1_B0(0,0)*rhou1_B0(0,0) - (1.0/4.0)*u1_B0(0,4)*rhou1_B0(0,4) +
            ((4.0/3.0))*u1_B0(0,3)*rhou1_B0(0,3))*invDelta1block0;

       d1_rhou0u1_dy = (-3*u1_B0(0,2)*rhou0_B0(0,2) + 4*u1_B0(0,1)*rhou0_B0(0,1) - (25.0/12.0)*u1_B0(0,0)*rhou0_B0(0,0)
            - (1.0/4.0)*u1_B0(0,4)*rhou0_B0(0,4) + ((4.0/3.0))*u1_B0(0,3)*rhou0_B0(0,3))*invDelta1block0;

       d1_rhou1_dy = (-3*rhou1_B0(0,2) + 4*rhou1_B0(0,1) - (25.0/12.0)*rhou1_B0(0,0) - (1.0/4.0)*rhou1_B0(0,4) +
            ((4.0/3.0))*rhou1_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_prhoEu1_dy = (-(5.0/6.0)*(p_B0(0,0) + rhoE_B0(0,0))*u1_B0(0,0) - (1.0/2.0)*(p_B0(0,2) +
            rhoE_B0(0,2))*u1_B0(0,2) - (1.0/4.0)*(p_B0(0,-1) + rhoE_B0(0,-1))*u1_B0(0,-1) + ((1.0/12.0))*(p_B0(0,3) +
            rhoE_B0(0,3))*u1_B0(0,3) + ((3.0/2.0))*(p_B0(0,1) + rhoE_B0(0,1))*u1_B0(0,1))*invDelta1block0;

       d1_prhou1u1_dy = (-(5.0/6.0)*p_B0(0,0) - (1.0/2.0)*p_B0(0,2) - (1.0/4.0)*p_B0(0,-1) + ((1.0/12.0))*p_B0(0,3) +
            ((3.0/2.0))*p_B0(0,1) - (5.0/6.0)*u1_B0(0,0)*rhou1_B0(0,0) - (1.0/2.0)*u1_B0(0,2)*rhou1_B0(0,2) -
            (1.0/4.0)*u1_B0(0,-1)*rhou1_B0(0,-1) + ((1.0/12.0))*u1_B0(0,3)*rhou1_B0(0,3) +
            ((3.0/2.0))*u1_B0(0,1)*rhou1_B0(0,1))*invDelta1block0;

       d1_rhou0u1_dy = (-(5.0/6.0)*u1_B0(0,0)*rhou0_B0(0,0) - (1.0/2.0)*u1_B0(0,2)*rhou0_B0(0,2) -
            (1.0/4.0)*u1_B0(0,-1)*rhou0_B0(0,-1) + ((1.0/12.0))*u1_B0(0,3)*rhou0_B0(0,3) +
            ((3.0/2.0))*u1_B0(0,1)*rhou0_B0(0,1))*invDelta1block0;

       d1_rhou1_dy = (-(5.0/6.0)*rhou1_B0(0,0) - (1.0/2.0)*rhou1_B0(0,2) - (1.0/4.0)*rhou1_B0(0,-1) +
            ((1.0/12.0))*rhou1_B0(0,3) + ((3.0/2.0))*rhou1_B0(0,1))*invDelta1block0;

   }

   else{

       d1_prhoEu1_dy = (-(2.0/3.0)*(p_B0(0,-1) + rhoE_B0(0,-1))*u1_B0(0,-1) - (1.0/12.0)*(p_B0(0,2) +
            rhoE_B0(0,2))*u1_B0(0,2) + ((1.0/12.0))*(p_B0(0,-2) + rhoE_B0(0,-2))*u1_B0(0,-2) + ((2.0/3.0))*(p_B0(0,1) +
            rhoE_B0(0,1))*u1_B0(0,1))*invDelta1block0;

       d1_prhou1u1_dy = (-(2.0/3.0)*p_B0(0,-1) - (1.0/12.0)*p_B0(0,2) + ((1.0/12.0))*p_B0(0,-2) + ((2.0/3.0))*p_B0(0,1)
            - (2.0/3.0)*u1_B0(0,-1)*rhou1_B0(0,-1) - (1.0/12.0)*u1_B0(0,2)*rhou1_B0(0,2) +
            ((1.0/12.0))*u1_B0(0,-2)*rhou1_B0(0,-2) + ((2.0/3.0))*u1_B0(0,1)*rhou1_B0(0,1))*invDelta1block0;

       d1_rhou0u1_dy = (-(2.0/3.0)*u1_B0(0,-1)*rhou0_B0(0,-1) - (1.0/12.0)*u1_B0(0,2)*rhou0_B0(0,2) +
            ((1.0/12.0))*u1_B0(0,-2)*rhou0_B0(0,-2) + ((2.0/3.0))*u1_B0(0,1)*rhou0_B0(0,1))*invDelta1block0;

       d1_rhou1_dy = (-(2.0/3.0)*rhou1_B0(0,-1) - (1.0/12.0)*rhou1_B0(0,2) + ((1.0/12.0))*rhou1_B0(0,-2) +
            ((2.0/3.0))*rhou1_B0(0,1))*invDelta1block0;

   }

   Residual0_B0(0,0) = -d1_rhou0_dx - d1_rhou1_dy;

   Residual1_B0(0,0) = -d1_prhou0u0_dx - d1_rhou0u1_dy;

   Residual2_B0(0,0) = -d1_prhou1u1_dy - d1_rhou1u0_dx;

   Residual3_B0(0,0) = -d1_prhoEu0_dx - d1_prhoEu1_dy;

}

 void opensbliblock00Kernel017(const ACC<double> &T_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const
ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, ACC<double>
&Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, const int *idx)
{
   double d1_wk0_dy = 0.0;
   double d1_wk1_dy = 0.0;
   double d2_T_dx = 0.0;
   double d2_T_dy = 0.0;
   double d2_u0_dx = 0.0;
   double d2_u0_dy = 0.0;
   double d2_u1_dx = 0.0;
   double d2_u1_dy = 0.0;
   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1,0) - (14.0/3.0)*T_B0(3,0) + ((11.0/12.0))*T_B0(4,0) + ((19.0/2.0))*T_B0(2,0) +
            ((35.0/12.0))*T_B0(0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(1,0) - (14.0/3.0)*u0_B0(3,0) + ((11.0/12.0))*u0_B0(4,0) + ((19.0/2.0))*u0_B0(2,0) +
            ((35.0/12.0))*u0_B0(0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(1,0) - (14.0/3.0)*u1_B0(3,0) + ((11.0/12.0))*u1_B0(4,0) + ((19.0/2.0))*u1_B0(2,0) +
            ((35.0/12.0))*u1_B0(0,0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1,0) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(3,0) + ((1.0/3.0))*T_B0(2,0) +
            ((11.0/12.0))*T_B0(-1,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(1,0) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(3,0) + ((1.0/3.0))*u0_B0(2,0) +
            ((11.0/12.0))*u0_B0(-1,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(1,0) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(3,0) + ((1.0/3.0))*u1_B0(2,0) +
            ((11.0/12.0))*u1_B0(-1,0))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1,0) - (14.0/3.0)*T_B0(-3,0) + ((11.0/12.0))*T_B0(-4,0) + ((19.0/2.0))*T_B0(-2,0) +
            ((35.0/12.0))*T_B0(0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(-1,0) - (14.0/3.0)*u0_B0(-3,0) + ((11.0/12.0))*u0_B0(-4,0) +
            ((19.0/2.0))*u0_B0(-2,0) + ((35.0/12.0))*u0_B0(0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(-1,0) - (14.0/3.0)*u1_B0(-3,0) + ((11.0/12.0))*u1_B0(-4,0) +
            ((19.0/2.0))*u1_B0(-2,0) + ((35.0/12.0))*u1_B0(0,0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1,0) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(-3,0) + ((1.0/3.0))*T_B0(-2,0) +
            ((11.0/12.0))*T_B0(1,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(-1,0) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(-3,0) + ((1.0/3.0))*u0_B0(-2,0) +
            ((11.0/12.0))*u0_B0(1,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(-1,0) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(-3,0) + ((1.0/3.0))*u1_B0(-2,0) +
            ((11.0/12.0))*u1_B0(1,0))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0,0) - (1.0/12.0)*T_B0(-2,0) - (1.0/12.0)*T_B0(2,0) + ((4.0/3.0))*T_B0(1,0) +
            ((4.0/3.0))*T_B0(-1,0))*inv2Delta0block0;

       d2_u0_dx = (-(5.0/2.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(-2,0) - (1.0/12.0)*u0_B0(2,0) + ((4.0/3.0))*u0_B0(1,0) +
            ((4.0/3.0))*u0_B0(-1,0))*inv2Delta0block0;

       d2_u1_dx = (-(5.0/2.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(-2,0) - (1.0/12.0)*u1_B0(2,0) + ((4.0/3.0))*u1_B0(1,0) +
            ((4.0/3.0))*u1_B0(-1,0))*inv2Delta0block0;

   }

   if (idx[1] == 0){

       d1_wk0_dy = (-3*wk0_B0(0,2) + 4*wk0_B0(0,1) - (25.0/12.0)*wk0_B0(0,0) - (1.0/4.0)*wk0_B0(0,4) +
            ((4.0/3.0))*wk0_B0(0,3))*invDelta1block0;

       d1_wk1_dy = (-3*wk1_B0(0,2) + 4*wk1_B0(0,1) - (25.0/12.0)*wk1_B0(0,0) - (1.0/4.0)*wk1_B0(0,4) +
            ((4.0/3.0))*wk1_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_wk0_dy = (-(5.0/6.0)*wk0_B0(0,0) - (1.0/2.0)*wk0_B0(0,2) - (1.0/4.0)*wk0_B0(0,-1) + ((1.0/12.0))*wk0_B0(0,3) +
            ((3.0/2.0))*wk0_B0(0,1))*invDelta1block0;

       d1_wk1_dy = (-(5.0/6.0)*wk1_B0(0,0) - (1.0/2.0)*wk1_B0(0,2) - (1.0/4.0)*wk1_B0(0,-1) + ((1.0/12.0))*wk1_B0(0,3) +
            ((3.0/2.0))*wk1_B0(0,1))*invDelta1block0;

   }

   else{

       d1_wk0_dy = (-(2.0/3.0)*wk0_B0(0,-1) - (1.0/12.0)*wk0_B0(0,2) + ((1.0/12.0))*wk0_B0(0,-2) +
            ((2.0/3.0))*wk0_B0(0,1))*invDelta1block0;

       d1_wk1_dy = (-(2.0/3.0)*wk1_B0(0,-1) - (1.0/12.0)*wk1_B0(0,2) + ((1.0/12.0))*wk1_B0(0,-2) +
            ((2.0/3.0))*wk1_B0(0,1))*invDelta1block0;

   }

   if (idx[1] == 0){

       d2_T_dy = (-(26.0/3.0)*T_B0(0,1) - (14.0/3.0)*T_B0(0,3) + ((11.0/12.0))*T_B0(0,4) + ((19.0/2.0))*T_B0(0,2) +
            ((35.0/12.0))*T_B0(0,0))*inv2Delta1block0;

       d2_u0_dy = (-(26.0/3.0)*u0_B0(0,1) - (14.0/3.0)*u0_B0(0,3) + ((11.0/12.0))*u0_B0(0,4) + ((19.0/2.0))*u0_B0(0,2) +
            ((35.0/12.0))*u0_B0(0,0))*inv2Delta1block0;

       d2_u1_dy = (-(26.0/3.0)*u1_B0(0,1) - (14.0/3.0)*u1_B0(0,3) + ((11.0/12.0))*u1_B0(0,4) + ((19.0/2.0))*u1_B0(0,2) +
            ((35.0/12.0))*u1_B0(0,0))*inv2Delta1block0;

   }

   else if (idx[1] == 1){

       d2_T_dy = (((1.0/2.0))*T_B0(0,1) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,3) + ((1.0/3.0))*T_B0(0,2) +
            ((11.0/12.0))*T_B0(0,-1))*inv2Delta1block0;

       d2_u0_dy = (((1.0/2.0))*u0_B0(0,1) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(0,3) + ((1.0/3.0))*u0_B0(0,2) +
            ((11.0/12.0))*u0_B0(0,-1))*inv2Delta1block0;

       d2_u1_dy = (((1.0/2.0))*u1_B0(0,1) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(0,3) + ((1.0/3.0))*u1_B0(0,2) +
            ((11.0/12.0))*u1_B0(0,-1))*inv2Delta1block0;

   }

   else{

       d2_T_dy = (-(5.0/2.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,-2) - (1.0/12.0)*T_B0(0,2) + ((4.0/3.0))*T_B0(0,1) +
            ((4.0/3.0))*T_B0(0,-1))*inv2Delta1block0;

       d2_u0_dy = (-(5.0/2.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(0,-2) - (1.0/12.0)*u0_B0(0,2) + ((4.0/3.0))*u0_B0(0,1) +
            ((4.0/3.0))*u0_B0(0,-1))*inv2Delta1block0;

       d2_u1_dy = (-(5.0/2.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(0,-2) - (1.0/12.0)*u1_B0(0,2) + ((4.0/3.0))*u1_B0(0,1) +
            ((4.0/3.0))*u1_B0(0,-1))*inv2Delta1block0;

   }

   Residual1_B0(0,0) = ((1.0/3.0))*(3*d2_u0_dy + 4*d2_u0_dx + d1_wk1_dy)*mu*invRe + Residual1_B0(0,0);

   Residual2_B0(0,0) = ((1.0/3.0))*(3*d2_u1_dx + 4*d2_u1_dy + d1_wk0_dy)*mu*invRe + Residual2_B0(0,0);

    Residual3_B0(0,0) = (wk1_B0(0,0) + wk3_B0(0,0))*mu*invRe*wk1_B0(0,0) + (wk1_B0(0,0) +
      wk3_B0(0,0))*mu*invRe*wk3_B0(0,0) - (2.0/3.0)*(-2*wk4_B0(0,0) + wk0_B0(0,0))*mu*invRe*wk4_B0(0,0) +
      ((1.0/3.0))*(3*d2_u0_dy + 4*d2_u0_dx + d1_wk1_dy)*mu*invRe*u0_B0(0,0) + ((1.0/3.0))*(3*d2_u1_dx + 4*d2_u1_dy +
      d1_wk0_dy)*mu*invRe*u1_B0(0,0) + ((2.0/3.0))*(-wk4_B0(0,0) + 2*wk0_B0(0,0))*mu*invRe*wk0_B0(0,0) + (d2_T_dx +
      d2_T_dy)*mu*invPr*invRe*inv2Minf*inv_gamma_m1 + Residual3_B0(0,0);

}

 void opensbliblock00Kernel023(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, ACC<double> &rhoE_B0, ACC<double> &rhoE_RKold_B0, ACC<double> &rho_B0,
ACC<double> &rho_RKold_B0, ACC<double> &rhou0_B0, ACC<double> &rhou0_RKold_B0, ACC<double> &rhou1_B0, ACC<double>
&rhou1_RKold_B0, const double *rkA, const double *rkB)
{
   rho_RKold_B0(0,0) = rkA[0]*rho_RKold_B0(0,0) + dt*Residual0_B0(0,0);

   rho_B0(0,0) = rkB[0]*rho_RKold_B0(0,0) + rho_B0(0,0);

   rhou0_RKold_B0(0,0) = rkA[0]*rhou0_RKold_B0(0,0) + dt*Residual1_B0(0,0);

   rhou0_B0(0,0) = rkB[0]*rhou0_RKold_B0(0,0) + rhou0_B0(0,0);

   rhou1_RKold_B0(0,0) = rkA[0]*rhou1_RKold_B0(0,0) + dt*Residual2_B0(0,0);

   rhou1_B0(0,0) = rkB[0]*rhou1_RKold_B0(0,0) + rhou1_B0(0,0);

   rhoE_RKold_B0(0,0) = rkA[0]*rhoE_RKold_B0(0,0) + dt*Residual3_B0(0,0);

   rhoE_B0(0,0) = rkB[0]*rhoE_RKold_B0(0,0) + rhoE_B0(0,0);

}

#endif
