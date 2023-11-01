#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel034(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
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

void opensbliblock00Kernel030(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel031(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel032(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel033(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel013(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0) = rhou0_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel015(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0) = rhou1_B0(0,0)/rho_B0(0,0);

}

 void opensbliblock00Kernel022(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &p_B0)
{
    p_B0(0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0)*u0_B0(0,0))*rho_B0(0,0) -
      (1.0/2.0)*(u1_B0(0,0)*u1_B0(0,0))*rho_B0(0,0) + rhoE_B0(0,0));

}

void opensbliblock00Kernel025(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0) = (Minf*Minf)*gama*p_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel012(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
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

void opensbliblock00Kernel014(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
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

void opensbliblock00Kernel016(const ACC<double> &u2_B0, ACC<double> &wk2_B0, const int *idx)
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

void opensbliblock00Kernel018(const ACC<double> &u0_B0, ACC<double> &wk3_B0, const int *idx)
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

void opensbliblock00Kernel019(const ACC<double> &u1_B0, ACC<double> &wk4_B0, const int *idx)
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

void opensbliblock00Kernel020(const ACC<double> &u2_B0, ACC<double> &wk5_B0, const int *idx)
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

 void opensbliblock00Kernel028(const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rhou0_B0, const
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

 void opensbliblock00Kernel029(const ACC<double> &T_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const
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

 void opensbliblock00Kernel035(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
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

 void opensbliblock00Kernel003(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const
ACC<double> &rhou1_B0, ACC<double> &a_B0, ACC<double> &kappa_B0, ACC<double> &u0_B0, ACC<double> &u1_B0, ACC<double>
&p_B0)
{
   double inv_rho = 0.0;
   kappa_B0(0,0) = 1;

   inv_rho = 1.0/rho_B0(0,0);

   u0_B0(0,0) = rhou0_B0(0,0)*inv_rho;

   u1_B0(0,0) = rhou1_B0(0,0)*inv_rho;

    p_B0(0,0) = (-1 + gama)*(-(0.5*(rhou0_B0(0,0)*rhou0_B0(0,0)) + 0.5*(rhou1_B0(0,0)*rhou1_B0(0,0)))*inv_rho +
      rhoE_B0(0,0));

   a_B0(0,0) = sqrt(gama*p_B0(0,0)*inv_rho);

}

 void opensbliblock00Kernel006(const ACC<double> &u0_B0, const ACC<double> &u1_B0, ACC<double> &kappa_B0, const int
*idx)
{
   double d1_u0_dx = 0.0;
   double d1_u0_dy = 0.0;
   double d1_u1_dx = 0.0;
   double d1_u1_dy = 0.0;
    d1_u1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*u1_B0(2,0) + 4*u1_B0(1,0) - (25.0/12.0)*u1_B0(0,0) -
      (1.0/4.0)*u1_B0(4,0) + ((4.0/3.0))*u1_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*u1_B0(0,0) -
      (1.0/2.0)*u1_B0(2,0) - (1.0/4.0)*u1_B0(-1,0) + ((1.0/12.0))*u1_B0(3,0) + ((3.0/2.0))*u1_B0(1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*u1_B0(-1,0) + 3*u1_B0(-2,0) - (4.0/3.0)*u1_B0(-3,0) + ((1.0/4.0))*u1_B0(-4,0) +
      ((25.0/12.0))*u1_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*u1_B0(-2,0) - (3.0/2.0)*u1_B0(-1,0) -
      (1.0/12.0)*u1_B0(-3,0) + ((1.0/4.0))*u1_B0(1,0) + ((5.0/6.0))*u1_B0(0,0)
)
: (
   -(2.0/3.0)*u1_B0(-1,0) -
      (1.0/12.0)*u1_B0(2,0) + ((1.0/12.0))*u1_B0(-2,0) + ((2.0/3.0))*u1_B0(1,0)
)))));

    d1_u0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*u0_B0(2,0) + 4*u0_B0(1,0) - (25.0/12.0)*u0_B0(0,0) -
      (1.0/4.0)*u0_B0(4,0) + ((4.0/3.0))*u0_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*u0_B0(0,0) -
      (1.0/2.0)*u0_B0(2,0) - (1.0/4.0)*u0_B0(-1,0) + ((1.0/12.0))*u0_B0(3,0) + ((3.0/2.0))*u0_B0(1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*u0_B0(-1,0) + 3*u0_B0(-2,0) - (4.0/3.0)*u0_B0(-3,0) + ((1.0/4.0))*u0_B0(-4,0) +
      ((25.0/12.0))*u0_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*u0_B0(-2,0) - (3.0/2.0)*u0_B0(-1,0) -
      (1.0/12.0)*u0_B0(-3,0) + ((1.0/4.0))*u0_B0(1,0) + ((5.0/6.0))*u0_B0(0,0)
)
: (
   -(2.0/3.0)*u0_B0(-1,0) -
      (1.0/12.0)*u0_B0(2,0) + ((1.0/12.0))*u0_B0(-2,0) + ((2.0/3.0))*u0_B0(1,0)
)))));

    d1_u1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*u1_B0(0,2) + 4*u1_B0(0,1) - (25.0/12.0)*u1_B0(0,0) -
      (1.0/4.0)*u1_B0(0,4) + ((4.0/3.0))*u1_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*u1_B0(0,0) -
      (1.0/2.0)*u1_B0(0,2) - (1.0/4.0)*u1_B0(0,-1) + ((1.0/12.0))*u1_B0(0,3) + ((3.0/2.0))*u1_B0(0,1)
)
: (
  
      -(2.0/3.0)*u1_B0(0,-1) - (1.0/12.0)*u1_B0(0,2) + ((1.0/12.0))*u1_B0(0,-2) + ((2.0/3.0))*u1_B0(0,1)
)));

    d1_u0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*u0_B0(0,2) + 4*u0_B0(0,1) - (25.0/12.0)*u0_B0(0,0) -
      (1.0/4.0)*u0_B0(0,4) + ((4.0/3.0))*u0_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*u0_B0(0,0) -
      (1.0/2.0)*u0_B0(0,2) - (1.0/4.0)*u0_B0(0,-1) + ((1.0/12.0))*u0_B0(0,3) + ((3.0/2.0))*u0_B0(0,1)
)
: (
  
      -(2.0/3.0)*u0_B0(0,-1) - (1.0/12.0)*u0_B0(0,2) + ((1.0/12.0))*u0_B0(0,-2) + ((2.0/3.0))*u0_B0(0,1)
)));

    kappa_B0(0,0) = ((d1_u0_dx + d1_u1_dy)*(d1_u0_dx + d1_u1_dy))*(0.5 - 0.5*tanh(2.5 + 500.0*(d1_u0_dx +
      d1_u1_dy)/sqrt((Delta0block0*Delta0block0) + (Delta1block0*Delta1block0))))/(1.0e-40 + ((-d1_u0_dy +
      d1_u1_dx)*(-d1_u0_dy + d1_u1_dx)) + ((d1_u0_dx + d1_u1_dy)*(d1_u0_dx + d1_u1_dy)));

}

 void opensbliblock00Kernel007(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const
ACC<double> &rhou1_B0, ACC<double> &a_B0, ACC<double> &u0_B0, ACC<double> &u1_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/rho_B0(0,0);

   u0_B0(0,0) = rhou0_B0(0,0)*inv_rho;

   u1_B0(0,0) = rhou1_B0(0,0)*inv_rho;

    p_B0(0,0) = (-1 + gama)*(-(0.5*(rhou0_B0(0,0)*rhou0_B0(0,0)) + 0.5*(rhou1_B0(0,0)*rhou1_B0(0,0)))*inv_rho +
      rhoE_B0(0,0));

   a_B0(0,0) = sqrt(gama*p_B0(0,0)*inv_rho);

}

 void opensbliblock00Kernel008(ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0,
ACC<double> &Residual3_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   wk0_B0(0,0) = 0.0;

   wk1_B0(0,0) = 0.0;

   wk2_B0(0,0) = 0.0;

   wk3_B0(0,0) = 0.0;

   Residual0_B0(0,0) = 0.0;

   Residual1_B0(0,0) = 0.0;

   Residual2_B0(0,0) = 0.0;

   Residual3_B0(0,0) = 0.0;

}

 void opensbliblock00Kernel009(const ACC<double> &a_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, ACC<double>
&wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_02 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_10 = 0.0;
   double AVG_0_REV_12 = 0.0;
   double AVG_0_REV_13 = 0.0;
   double AVG_0_REV_20 = 0.0;
   double AVG_0_REV_21 = 0.0;
   double AVG_0_REV_22 = 0.0;
   double AVG_0_REV_23 = 0.0;
   double AVG_0_REV_30 = 0.0;
   double AVG_0_REV_31 = 0.0;
   double AVG_0_REV_32 = 0.0;
   double AVG_0_REV_33 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_u1 = 0.0;
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
   AVG_0_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(-1,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(-1,0));

   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(-1,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(-1,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) - (AVG_0_u0*AVG_0_u0)*gama -
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_21 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) + (AVG_0_u0*AVG_0_u0)*gama +
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_00 = (-rho_B0(-1,0) + rho_B0(0,0))*AVG_0_0_LEV_00 + (-rhoE_B0(-1,0) + rhoE_B0(0,0))*AVG_0_0_LEV_03 +
      (-rhou0_B0(-1,0) + rhou0_B0(0,0))*AVG_0_0_LEV_01 + (-rhou1_B0(-1,0) + rhou1_B0(0,0))*AVG_0_0_LEV_02;

   alpha_10 = (-rho_B0(-1,0) + rho_B0(0,0))*AVG_0_0_LEV_10 + (-rhou1_B0(-1,0) + rhou1_B0(0,0))*AVG_0_0_LEV_12;

    alpha_20 = (-rho_B0(-1,0) + rho_B0(0,0))*AVG_0_0_LEV_20 + (-rhoE_B0(-1,0) + rhoE_B0(0,0))*AVG_0_0_LEV_23 +
      (-rhou0_B0(-1,0) + rhou0_B0(0,0))*AVG_0_0_LEV_21 + (-rhou1_B0(-1,0) + rhou1_B0(0,0))*AVG_0_0_LEV_22;

    alpha_30 = (-rho_B0(-1,0) + rho_B0(0,0))*AVG_0_0_LEV_30 + (-rhoE_B0(-1,0) + rhoE_B0(0,0))*AVG_0_0_LEV_33 +
      (-rhou0_B0(-1,0) + rhou0_B0(0,0))*AVG_0_0_LEV_31 + (-rhou1_B0(-1,0) + rhou1_B0(0,0))*AVG_0_0_LEV_32;

   AVG_0_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(1,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(1,0));

   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(1,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(1,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) - (AVG_0_u0*AVG_0_u0)*gama -
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_21 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) + (AVG_0_u0*AVG_0_u0)*gama +
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_01 = (-rho_B0(0,0) + rho_B0(1,0))*AVG_0_0_LEV_00 + (-rhoE_B0(0,0) + rhoE_B0(1,0))*AVG_0_0_LEV_03 +
      (-rhou0_B0(0,0) + rhou0_B0(1,0))*AVG_0_0_LEV_01 + (-rhou1_B0(0,0) + rhou1_B0(1,0))*AVG_0_0_LEV_02;

   alpha_11 = (-rho_B0(0,0) + rho_B0(1,0))*AVG_0_0_LEV_10 + (-rhou1_B0(0,0) + rhou1_B0(1,0))*AVG_0_0_LEV_12;

    alpha_21 = (-rho_B0(0,0) + rho_B0(1,0))*AVG_0_0_LEV_20 + (-rhoE_B0(0,0) + rhoE_B0(1,0))*AVG_0_0_LEV_23 +
      (-rhou0_B0(0,0) + rhou0_B0(1,0))*AVG_0_0_LEV_21 + (-rhou1_B0(0,0) + rhou1_B0(1,0))*AVG_0_0_LEV_22;

    alpha_31 = (-rho_B0(0,0) + rho_B0(1,0))*AVG_0_0_LEV_30 + (-rhoE_B0(0,0) + rhoE_B0(1,0))*AVG_0_0_LEV_33 +
      (-rhou0_B0(0,0) + rhou0_B0(1,0))*AVG_0_0_LEV_31 + (-rhou1_B0(0,0) + rhou1_B0(1,0))*AVG_0_0_LEV_32;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = AVG_0_a + AVG_0_u0;

   ws_lambda_33 = -AVG_0_a + AVG_0_u0;

   AVG_0_REV_00 = 1;

   AVG_0_REV_02 = 0.707106781186547*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_03 = 0.707106781186547*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_10 = AVG_0_u0;

   AVG_0_REV_12 = 0.707106781186547*(AVG_0_a + AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_13 = 0.707106781186547*(-AVG_0_a + AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_REV_20 = AVG_0_u1;

   AVG_0_REV_21 = -AVG_0_rho;

   AVG_0_REV_22 = 0.707106781186547*AVG_0_rho*AVG_0_u1*inv_AVG_a;

   AVG_0_REV_23 = 0.707106781186547*AVG_0_rho*AVG_0_u1*inv_AVG_a;

   AVG_0_REV_30 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0) + ((1.0/2.0))*(AVG_0_u1*AVG_0_u1);

   AVG_0_REV_31 = -AVG_0_rho*AVG_0_u1;

    AVG_0_REV_32 = 0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) +
      (AVG_0_u1*AVG_0_u1))*gamma_m1)*invgamma_m1 + AVG_0_a*AVG_0_u0)*AVG_0_rho*inv_AVG_a;

    AVG_0_REV_33 = 0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) +
      (AVG_0_u1*AVG_0_u1))*gamma_m1)*invgamma_m1 - AVG_0_a*AVG_0_u0)*AVG_0_rho*inv_AVG_a;

   AVG_0_a = ((1.0/2.0))*(a_B0(1,0) + a_B0(2,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1,0) + u0_B0(2,0));

   AVG_0_rho = ((1.0/2.0))*(rho_B0(1,0) + rho_B0(2,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(1,0) + u1_B0(2,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) - (AVG_0_u0*AVG_0_u0)*gama -
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_21 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) + (AVG_0_u0*AVG_0_u0)*gama +
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_a*AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_31 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_02 = (-rho_B0(1,0) + rho_B0(2,0))*AVG_0_0_LEV_00 + (-rhoE_B0(1,0) + rhoE_B0(2,0))*AVG_0_0_LEV_03 +
      (-rhou0_B0(1,0) + rhou0_B0(2,0))*AVG_0_0_LEV_01 + (-rhou1_B0(1,0) + rhou1_B0(2,0))*AVG_0_0_LEV_02;

   alpha_12 = (-rho_B0(1,0) + rho_B0(2,0))*AVG_0_0_LEV_10 + (-rhou1_B0(1,0) + rhou1_B0(2,0))*AVG_0_0_LEV_12;

    alpha_22 = (-rho_B0(1,0) + rho_B0(2,0))*AVG_0_0_LEV_20 + (-rhoE_B0(1,0) + rhoE_B0(2,0))*AVG_0_0_LEV_23 +
      (-rhou0_B0(1,0) + rhou0_B0(2,0))*AVG_0_0_LEV_21 + (-rhou1_B0(1,0) + rhou1_B0(2,0))*AVG_0_0_LEV_22;

    alpha_32 = (-rho_B0(1,0) + rho_B0(2,0))*AVG_0_0_LEV_30 + (-rhoE_B0(1,0) + rhoE_B0(2,0))*AVG_0_0_LEV_33 +
      (-rhou0_B0(1,0) + rhou0_B0(2,0))*AVG_0_0_LEV_31 + (-rhou1_B0(1,0) + rhou1_B0(2,0))*AVG_0_0_LEV_32;

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

   wk0_B0(0,0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_02*phi_star_2 + AVG_0_REV_03*phi_star_3);

   wk1_B0(0,0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_12*phi_star_2 + AVG_0_REV_13*phi_star_3);

    wk2_B0(0,0) = 0.5*(AVG_0_REV_20*phi_star_0 + AVG_0_REV_21*phi_star_1 + AVG_0_REV_22*phi_star_2 +
      AVG_0_REV_23*phi_star_3);

    wk3_B0(0,0) = 0.5*(AVG_0_REV_30*phi_star_0 + AVG_0_REV_31*phi_star_1 + AVG_0_REV_32*phi_star_2 +
      AVG_0_REV_33*phi_star_3);

}

 void opensbliblock00Kernel010(const ACC<double> &a_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, ACC<double>
&Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0)
{
   double AVG_1_1_LEV_00 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double AVG_1_REV_00 = 0.0;
   double AVG_1_REV_02 = 0.0;
   double AVG_1_REV_03 = 0.0;
   double AVG_1_REV_10 = 0.0;
   double AVG_1_REV_11 = 0.0;
   double AVG_1_REV_12 = 0.0;
   double AVG_1_REV_13 = 0.0;
   double AVG_1_REV_20 = 0.0;
   double AVG_1_REV_22 = 0.0;
   double AVG_1_REV_23 = 0.0;
   double AVG_1_REV_30 = 0.0;
   double AVG_1_REV_31 = 0.0;
   double AVG_1_REV_32 = 0.0;
   double AVG_1_REV_33 = 0.0;
   double AVG_1_a = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_u0 = 0.0;
   double AVG_1_u1 = 0.0;
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
   AVG_1_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(0,-1));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(0,-1));

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(0,-1));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(0,-1));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) - (AVG_1_u0*AVG_1_u0)*gama -
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) + (AVG_1_u0*AVG_1_u0)*gama +
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_00 = (-rho_B0(0,-1) + rho_B0(0,0))*AVG_1_1_LEV_00 + (-rhoE_B0(0,-1) + rhoE_B0(0,0))*AVG_1_1_LEV_03 +
      (-rhou0_B0(0,-1) + rhou0_B0(0,0))*AVG_1_1_LEV_01 + (-rhou1_B0(0,-1) + rhou1_B0(0,0))*AVG_1_1_LEV_02;

   alpha_10 = (-rho_B0(0,-1) + rho_B0(0,0))*AVG_1_1_LEV_10 + (-rhou0_B0(0,-1) + rhou0_B0(0,0))*AVG_1_1_LEV_11;

    alpha_20 = (-rho_B0(0,-1) + rho_B0(0,0))*AVG_1_1_LEV_20 + (-rhoE_B0(0,-1) + rhoE_B0(0,0))*AVG_1_1_LEV_23 +
      (-rhou0_B0(0,-1) + rhou0_B0(0,0))*AVG_1_1_LEV_21 + (-rhou1_B0(0,-1) + rhou1_B0(0,0))*AVG_1_1_LEV_22;

    alpha_30 = (-rho_B0(0,-1) + rho_B0(0,0))*AVG_1_1_LEV_30 + (-rhoE_B0(0,-1) + rhoE_B0(0,0))*AVG_1_1_LEV_33 +
      (-rhou0_B0(0,-1) + rhou0_B0(0,0))*AVG_1_1_LEV_31 + (-rhou1_B0(0,-1) + rhou1_B0(0,0))*AVG_1_1_LEV_32;

   AVG_1_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(0,1));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(0,1));

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(0,1));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(0,1));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) - (AVG_1_u0*AVG_1_u0)*gama -
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) + (AVG_1_u0*AVG_1_u0)*gama +
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_01 = (-rho_B0(0,0) + rho_B0(0,1))*AVG_1_1_LEV_00 + (-rhoE_B0(0,0) + rhoE_B0(0,1))*AVG_1_1_LEV_03 +
      (-rhou0_B0(0,0) + rhou0_B0(0,1))*AVG_1_1_LEV_01 + (-rhou1_B0(0,0) + rhou1_B0(0,1))*AVG_1_1_LEV_02;

   alpha_11 = (-rho_B0(0,0) + rho_B0(0,1))*AVG_1_1_LEV_10 + (-rhou0_B0(0,0) + rhou0_B0(0,1))*AVG_1_1_LEV_11;

    alpha_21 = (-rho_B0(0,0) + rho_B0(0,1))*AVG_1_1_LEV_20 + (-rhoE_B0(0,0) + rhoE_B0(0,1))*AVG_1_1_LEV_23 +
      (-rhou0_B0(0,0) + rhou0_B0(0,1))*AVG_1_1_LEV_21 + (-rhou1_B0(0,0) + rhou1_B0(0,1))*AVG_1_1_LEV_22;

    alpha_31 = (-rho_B0(0,0) + rho_B0(0,1))*AVG_1_1_LEV_30 + (-rhoE_B0(0,0) + rhoE_B0(0,1))*AVG_1_1_LEV_33 +
      (-rhou0_B0(0,0) + rhou0_B0(0,1))*AVG_1_1_LEV_31 + (-rhou1_B0(0,0) + rhou1_B0(0,1))*AVG_1_1_LEV_32;

   ws_lambda_00 = AVG_1_u1;

   ws_lambda_11 = AVG_1_u1;

   ws_lambda_22 = AVG_1_a + AVG_1_u1;

   ws_lambda_33 = -AVG_1_a + AVG_1_u1;

   AVG_1_REV_00 = 1;

   AVG_1_REV_02 = 0.707106781186547*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_03 = 0.707106781186547*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_10 = AVG_1_u0;

   AVG_1_REV_11 = AVG_1_rho;

   AVG_1_REV_12 = 0.707106781186547*AVG_1_rho*AVG_1_u0*inv_AVG_a;

   AVG_1_REV_13 = 0.707106781186547*AVG_1_rho*AVG_1_u0*inv_AVG_a;

   AVG_1_REV_20 = AVG_1_u1;

   AVG_1_REV_22 = 0.707106781186547*(AVG_1_a + AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_23 = 0.707106781186547*(-AVG_1_a + AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_REV_30 = ((1.0/2.0))*(AVG_1_u0*AVG_1_u0) + ((1.0/2.0))*(AVG_1_u1*AVG_1_u1);

   AVG_1_REV_31 = AVG_1_rho*AVG_1_u0;

    AVG_1_REV_32 = 0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) +
      (AVG_1_u1*AVG_1_u1))*gamma_m1)*invgamma_m1 + AVG_1_a*AVG_1_u1)*AVG_1_rho*inv_AVG_a;

    AVG_1_REV_33 = 0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) +
      (AVG_1_u1*AVG_1_u1))*gamma_m1)*invgamma_m1 - AVG_1_a*AVG_1_u1)*AVG_1_rho*inv_AVG_a;

   AVG_1_a = ((1.0/2.0))*(a_B0(0,1) + a_B0(0,2));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,1) + u0_B0(0,2));

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,1) + rho_B0(0,2));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,1) + u1_B0(0,2));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) - (AVG_1_u0*AVG_1_u0)*gama -
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) + (AVG_1_u0*AVG_1_u0)*gama +
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_a*AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 + AVG_1_a)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    alpha_02 = (-rho_B0(0,1) + rho_B0(0,2))*AVG_1_1_LEV_00 + (-rhoE_B0(0,1) + rhoE_B0(0,2))*AVG_1_1_LEV_03 +
      (-rhou0_B0(0,1) + rhou0_B0(0,2))*AVG_1_1_LEV_01 + (-rhou1_B0(0,1) + rhou1_B0(0,2))*AVG_1_1_LEV_02;

   alpha_12 = (-rho_B0(0,1) + rho_B0(0,2))*AVG_1_1_LEV_10 + (-rhou0_B0(0,1) + rhou0_B0(0,2))*AVG_1_1_LEV_11;

    alpha_22 = (-rho_B0(0,1) + rho_B0(0,2))*AVG_1_1_LEV_20 + (-rhoE_B0(0,1) + rhoE_B0(0,2))*AVG_1_1_LEV_23 +
      (-rhou0_B0(0,1) + rhou0_B0(0,2))*AVG_1_1_LEV_21 + (-rhou1_B0(0,1) + rhou1_B0(0,2))*AVG_1_1_LEV_22;

    alpha_32 = (-rho_B0(0,1) + rho_B0(0,2))*AVG_1_1_LEV_30 + (-rhoE_B0(0,1) + rhoE_B0(0,2))*AVG_1_1_LEV_33 +
      (-rhou0_B0(0,1) + rhou0_B0(0,2))*AVG_1_1_LEV_31 + (-rhou1_B0(0,1) + rhou1_B0(0,2))*AVG_1_1_LEV_32;

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

   Residual0_B0(0,0) = 0.5*(AVG_1_REV_00*phi_star_0 + AVG_1_REV_02*phi_star_2 + AVG_1_REV_03*phi_star_3);

    Residual1_B0(0,0) = 0.5*(AVG_1_REV_10*phi_star_0 + AVG_1_REV_11*phi_star_1 + AVG_1_REV_12*phi_star_2 +
      AVG_1_REV_13*phi_star_3);

   Residual2_B0(0,0) = 0.5*(AVG_1_REV_20*phi_star_0 + AVG_1_REV_22*phi_star_2 + AVG_1_REV_23*phi_star_3);

    Residual3_B0(0,0) = 0.5*(AVG_1_REV_30*phi_star_0 + AVG_1_REV_31*phi_star_1 + AVG_1_REV_32*phi_star_2 +
      AVG_1_REV_33*phi_star_3);

}

 void opensbliblock00Kernel011(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &kappa_B0, const ACC<double> &wk0_B0, const
ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const ACC<double> &wk3_B0, ACC<double> &TVD_filter_B0, ACC<double>
&rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0, const int *idx)
{
   double Grid_0 = 0.0;
   double Grid_1 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Grid_1 = idx[1];

   Wall = ((Grid_0 >= -6 + block0np0 || Grid_0 <= 5 || Grid_1 <= 5) ? (
   0
)
: (
   1
));

    TVD_filter_B0(0,0) = ((fmax(kappa_B0(0,2), fmax(kappa_B0(0,0), fmax(kappa_B0(-1,0), fmax(kappa_B0(0,-1),
      fmax(kappa_B0(1,0), fmax(kappa_B0(2,0), kappa_B0(0,1))))))) >= Ducros_select) ? (
   1
)
: (
   0.0
));

    rho_B0(0,0) = (-(-wk0_B0(-1,0) + wk0_B0(0,0))*invDelta0block0 - (-Residual0_B0(0,-1) +
      Residual0_B0(0,0))*invDelta1block0)*dt*TVD_filter_B0(0,0) + rho_B0(0,0);

    rhou0_B0(0,0) = (-(-wk1_B0(-1,0) + wk1_B0(0,0))*invDelta0block0 - (-Residual1_B0(0,-1) +
      Residual1_B0(0,0))*invDelta1block0)*dt*TVD_filter_B0(0,0) + rhou0_B0(0,0);

    rhou1_B0(0,0) = (-(-wk2_B0(-1,0) + wk2_B0(0,0))*invDelta0block0 - (-Residual2_B0(0,-1) +
      Residual2_B0(0,0))*invDelta1block0)*dt*TVD_filter_B0(0,0) + rhou1_B0(0,0);

    rhoE_B0(0,0) = (-(-wk3_B0(-1,0) + wk3_B0(0,0))*invDelta0block0 - (-Residual3_B0(0,-1) +
      Residual3_B0(0,0))*invDelta1block0)*dt*TVD_filter_B0(0,0) + rhoE_B0(0,0);

}

#endif
