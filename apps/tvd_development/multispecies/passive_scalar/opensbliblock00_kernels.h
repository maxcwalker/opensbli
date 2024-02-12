#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel016(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhof_B0, ACC<double> &rhou0_B0,
ACC<double> &x0_B0, const int *idx)
{
   double d = 0.0;
   double f = 0.0;
   double p = 0.0;
   double u0 = 0.0;
   x0_B0(0) = Delta0block0*idx[0];

   u0 = 0;

   p = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.1
));

   d = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.125
));

   rho_B0(0) = d;

   rhou0_B0(0) = d*u0;

   rhoE_B0(0) = p/(-1.0 + gama) + 0.5*d*(u0*u0);

   f = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.2
));

   rhof_B0(0) = d*f;

}

 void opensbliblock00Kernel014(const ACC<double> &x0_B0, ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double>
&rhou0_B0)
{
   double d = 0.0;
   double f = 0.0;
   double p = 0.0;
   double u0 = 0.0;
   d = 1.00000000000000;

   u0 = 0.0;

   p = 1.00000000000000;

   rho_B0(0) = d;

   rhou0_B0(0) = d*u0;

   rhoE_B0(0) = p/(-1.0 + gama) + 0.5*d*(u0*u0);

   f = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.2
));

}

 void opensbliblock00Kernel015(const ACC<double> &x0_B0, ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double>
&rhou0_B0)
{
   double d = 0.0;
   double f = 0.0;
   double p = 0.0;
   double u0 = 0.0;
   d = 0.125000000000000;

   u0 = 0.0;

   p = 0.100000000000000;

   rho_B0(0) = d;

   rhou0_B0(0) = d*u0;

   rhoE_B0(0) = p/(-1.0 + gama) + 0.5*d*(u0*u0);

   f = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.2
));

}

void opensbliblock00Kernel007(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0) = rhou0_B0(0)/rho_B0(0);

}

 void opensbliblock00Kernel008(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0,
ACC<double> &p_B0)
{
   p_B0(0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0)*u0_B0(0))*rho_B0(0) + rhoE_B0(0));

}

void opensbliblock00Kernel006(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
{
   if (idx[0] == 0){

       wk0_B0(0) = (3.0*u0_B0(1) + 0.333333333333333*u0_B0(3) - 1.5*u0_B0(2) -
            1.83333333333333*u0_B0(0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk0_B0(0) = (0.0394168524399447*u0_B0(2) + 0.00571369039775442*u0_B0(4) + 0.719443173328855*u0_B0(1) -
            0.322484932882161*u0_B0(0) - 0.0658051057710389*u0_B0(3) - 0.376283677513354*u0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 2){

       wk0_B0(0) = (0.197184333887745*u0_B0(0) + 0.521455851089587*u0_B0(1) + 0.113446470384241*u0_B0(-2) -
            0.00412637789557492*u0_B0(3) - 0.0367146847001261*u0_B0(2) - 0.791245592765872*u0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 3){

       wk0_B0(0) = (0.0451033223343881*u0_B0(0) + 0.652141084861241*u0_B0(1) + 0.121937153224065*u0_B0(-2) -
            0.00932597985049999*u0_B0(-3) - 0.727822147724592*u0_B0(-1) - 0.082033432844602*u0_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk0_B0(0) = (1.5*u0_B0(-2) + 1.83333333333333*u0_B0(0) - 3.0*u0_B0(-1) -
            0.333333333333333*u0_B0(-3))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk0_B0(0) = (0.322484932882161*u0_B0(0) + 0.0658051057710389*u0_B0(-3) + 0.376283677513354*u0_B0(1) -
            0.0394168524399447*u0_B0(-2) - 0.00571369039775442*u0_B0(-4) -
            0.719443173328855*u0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == -3 + block0np0){

       wk0_B0(0) = (0.00412637789557492*u0_B0(-3) + 0.0367146847001261*u0_B0(-2) + 0.791245592765872*u0_B0(1) -
            0.197184333887745*u0_B0(0) - 0.521455851089587*u0_B0(-1) - 0.113446470384241*u0_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -4 + block0np0){

       wk0_B0(0) = (0.00932597985049999*u0_B0(3) + 0.727822147724592*u0_B0(1) + 0.082033432844602*u0_B0(-2) -
            0.0451033223343881*u0_B0(0) - 0.652141084861241*u0_B0(-1) - 0.121937153224065*u0_B0(2))*invDelta0block0;

   }

   else{

       wk0_B0(0) = (-(2.0/3.0)*u0_B0(-1) - (1.0/12.0)*u0_B0(2) + ((1.0/12.0))*u0_B0(-2) +
            ((2.0/3.0))*u0_B0(1))*invDelta0block0;

   }

}

 void opensbliblock00Kernel013(const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const
ACC<double> &rhof_B0, const ACC<double> &rhou0_B0, const ACC<double> &u0_B0, const ACC<double> &wk0_B0, ACC<double>
&Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, const int *idx)
{
   double d1_inv_rhoErho_dx = 0.0;
   double d1_p_dx = 0.0;
   double d1_pu0_dx = 0.0;
   double d1_rhoEu0_dx = 0.0;
   double d1_rhofu0_dx = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0u0_dx = 0.0;
   if (idx[0] == 0){

      d1_p_dx = (3.0*p_B0(1) + 0.333333333333333*p_B0(3) - 1.5*p_B0(2) - 1.83333333333333*p_B0(0))*invDelta0block0;

       d1_pu0_dx = (3.0*p_B0(1)*u0_B0(1) + 0.333333333333333*p_B0(3)*u0_B0(3) - 1.5*p_B0(2)*u0_B0(2) -
            1.83333333333333*p_B0(0)*u0_B0(0))*invDelta0block0;

       d1_rhoEu0_dx = (3.0*u0_B0(1)*rhoE_B0(1) + 0.333333333333333*u0_B0(3)*rhoE_B0(3) - 1.5*u0_B0(2)*rhoE_B0(2) -
            1.83333333333333*u0_B0(0)*rhoE_B0(0))*invDelta0block0;

       d1_inv_rhoErho_dx = (3.0*rhoE_B0(1)/rho_B0(1) + 0.333333333333333*rhoE_B0(3)/rho_B0(3) - 1.5*rhoE_B0(2)/rho_B0(2)
            - 1.83333333333333*rhoE_B0(0)/rho_B0(0))*invDelta0block0;

       d1_rhofu0_dx = (3.0*u0_B0(1)*rhof_B0(1) + 0.333333333333333*u0_B0(3)*rhof_B0(3) - 1.5*u0_B0(2)*rhof_B0(2) -
            1.83333333333333*u0_B0(0)*rhof_B0(0))*invDelta0block0;

       d1_rhou0_dx = (3.0*rhou0_B0(1) + 0.333333333333333*rhou0_B0(3) - 1.5*rhou0_B0(2) -
            1.83333333333333*rhou0_B0(0))*invDelta0block0;

       d1_rhou0u0_dx = (3.0*u0_B0(1)*rhou0_B0(1) + 0.333333333333333*u0_B0(3)*rhou0_B0(3) - 1.5*u0_B0(2)*rhou0_B0(2) -
            1.83333333333333*u0_B0(0)*rhou0_B0(0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_p_dx = (0.0394168524399447*p_B0(2) + 0.00571369039775442*p_B0(4) + 0.719443173328855*p_B0(1) -
            0.322484932882161*p_B0(0) - 0.0658051057710389*p_B0(3) - 0.376283677513354*p_B0(-1))*invDelta0block0;

       d1_pu0_dx = (0.0394168524399447*p_B0(2)*u0_B0(2) + 0.00571369039775442*p_B0(4)*u0_B0(4) +
            0.719443173328855*p_B0(1)*u0_B0(1) - 0.322484932882161*p_B0(0)*u0_B0(0) -
            0.0658051057710389*p_B0(3)*u0_B0(3) - 0.376283677513354*p_B0(-1)*u0_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.0394168524399447*u0_B0(2)*rhoE_B0(2) + 0.00571369039775442*u0_B0(4)*rhoE_B0(4) +
            0.719443173328855*u0_B0(1)*rhoE_B0(1) - 0.322484932882161*u0_B0(0)*rhoE_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoE_B0(3) - 0.376283677513354*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.0394168524399447*rhoE_B0(2)/rho_B0(2) + 0.00571369039775442*rhoE_B0(4)/rho_B0(4) +
            0.719443173328855*rhoE_B0(1)/rho_B0(1) - 0.322484932882161*rhoE_B0(0)/rho_B0(0) -
            0.0658051057710389*rhoE_B0(3)/rho_B0(3) - 0.376283677513354*rhoE_B0(-1)/rho_B0(-1))*invDelta0block0;

       d1_rhofu0_dx = (0.0394168524399447*u0_B0(2)*rhof_B0(2) + 0.00571369039775442*u0_B0(4)*rhof_B0(4) +
            0.719443173328855*u0_B0(1)*rhof_B0(1) - 0.322484932882161*u0_B0(0)*rhof_B0(0) -
            0.0658051057710389*u0_B0(3)*rhof_B0(3) - 0.376283677513354*u0_B0(-1)*rhof_B0(-1))*invDelta0block0;

       d1_rhou0_dx = (0.0394168524399447*rhou0_B0(2) + 0.00571369039775442*rhou0_B0(4) + 0.719443173328855*rhou0_B0(1) -
            0.322484932882161*rhou0_B0(0) - 0.0658051057710389*rhou0_B0(3) -
            0.376283677513354*rhou0_B0(-1))*invDelta0block0;

       d1_rhou0u0_dx = (0.0394168524399447*u0_B0(2)*rhou0_B0(2) + 0.00571369039775442*u0_B0(4)*rhou0_B0(4) +
            0.719443173328855*u0_B0(1)*rhou0_B0(1) - 0.322484932882161*u0_B0(0)*rhou0_B0(0) -
            0.0658051057710389*u0_B0(3)*rhou0_B0(3) - 0.376283677513354*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 2){

       d1_p_dx = (0.197184333887745*p_B0(0) + 0.521455851089587*p_B0(1) + 0.113446470384241*p_B0(-2) -
            0.00412637789557492*p_B0(3) - 0.0367146847001261*p_B0(2) - 0.791245592765872*p_B0(-1))*invDelta0block0;

       d1_pu0_dx = (0.197184333887745*p_B0(0)*u0_B0(0) + 0.521455851089587*p_B0(1)*u0_B0(1) +
            0.113446470384241*p_B0(-2)*u0_B0(-2) - 0.00412637789557492*p_B0(3)*u0_B0(3) -
            0.0367146847001261*p_B0(2)*u0_B0(2) - 0.791245592765872*p_B0(-1)*u0_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.197184333887745*u0_B0(0)*rhoE_B0(0) + 0.521455851089587*u0_B0(1)*rhoE_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoE_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoE_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoE_B0(2) - 0.791245592765872*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.197184333887745*rhoE_B0(0)/rho_B0(0) + 0.521455851089587*rhoE_B0(1)/rho_B0(1) +
            0.113446470384241*rhoE_B0(-2)/rho_B0(-2) - 0.00412637789557492*rhoE_B0(3)/rho_B0(3) -
            0.0367146847001261*rhoE_B0(2)/rho_B0(2) - 0.791245592765872*rhoE_B0(-1)/rho_B0(-1))*invDelta0block0;

       d1_rhofu0_dx = (0.197184333887745*u0_B0(0)*rhof_B0(0) + 0.521455851089587*u0_B0(1)*rhof_B0(1) +
            0.113446470384241*u0_B0(-2)*rhof_B0(-2) - 0.00412637789557492*u0_B0(3)*rhof_B0(3) -
            0.0367146847001261*u0_B0(2)*rhof_B0(2) - 0.791245592765872*u0_B0(-1)*rhof_B0(-1))*invDelta0block0;

       d1_rhou0_dx = (0.197184333887745*rhou0_B0(0) + 0.521455851089587*rhou0_B0(1) + 0.113446470384241*rhou0_B0(-2) -
            0.00412637789557492*rhou0_B0(3) - 0.0367146847001261*rhou0_B0(2) -
            0.791245592765872*rhou0_B0(-1))*invDelta0block0;

       d1_rhou0u0_dx = (0.197184333887745*u0_B0(0)*rhou0_B0(0) + 0.521455851089587*u0_B0(1)*rhou0_B0(1) +
            0.113446470384241*u0_B0(-2)*rhou0_B0(-2) - 0.00412637789557492*u0_B0(3)*rhou0_B0(3) -
            0.0367146847001261*u0_B0(2)*rhou0_B0(2) - 0.791245592765872*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 3){

       d1_p_dx = (0.0451033223343881*p_B0(0) + 0.652141084861241*p_B0(1) + 0.121937153224065*p_B0(-2) -
            0.00932597985049999*p_B0(-3) - 0.727822147724592*p_B0(-1) - 0.082033432844602*p_B0(2))*invDelta0block0;

       d1_pu0_dx = (0.0451033223343881*p_B0(0)*u0_B0(0) + 0.652141084861241*p_B0(1)*u0_B0(1) +
            0.121937153224065*p_B0(-2)*u0_B0(-2) - 0.00932597985049999*p_B0(-3)*u0_B0(-3) -
            0.727822147724592*p_B0(-1)*u0_B0(-1) - 0.082033432844602*p_B0(2)*u0_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.0451033223343881*u0_B0(0)*rhoE_B0(0) + 0.652141084861241*u0_B0(1)*rhoE_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoE_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoE_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoE_B0(-1) - 0.082033432844602*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.0451033223343881*rhoE_B0(0)/rho_B0(0) + 0.652141084861241*rhoE_B0(1)/rho_B0(1) +
            0.121937153224065*rhoE_B0(-2)/rho_B0(-2) - 0.00932597985049999*rhoE_B0(-3)/rho_B0(-3) -
            0.727822147724592*rhoE_B0(-1)/rho_B0(-1) - 0.082033432844602*rhoE_B0(2)/rho_B0(2))*invDelta0block0;

       d1_rhofu0_dx = (0.0451033223343881*u0_B0(0)*rhof_B0(0) + 0.652141084861241*u0_B0(1)*rhof_B0(1) +
            0.121937153224065*u0_B0(-2)*rhof_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhof_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhof_B0(-1) - 0.082033432844602*u0_B0(2)*rhof_B0(2))*invDelta0block0;

       d1_rhou0_dx = (0.0451033223343881*rhou0_B0(0) + 0.652141084861241*rhou0_B0(1) + 0.121937153224065*rhou0_B0(-2) -
            0.00932597985049999*rhou0_B0(-3) - 0.727822147724592*rhou0_B0(-1) -
            0.082033432844602*rhou0_B0(2))*invDelta0block0;

       d1_rhou0u0_dx = (0.0451033223343881*u0_B0(0)*rhou0_B0(0) + 0.652141084861241*u0_B0(1)*rhou0_B0(1) +
            0.121937153224065*u0_B0(-2)*rhou0_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhou0_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhou0_B0(-1) - 0.082033432844602*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

      d1_p_dx = (1.5*p_B0(-2) + 1.83333333333333*p_B0(0) - 3.0*p_B0(-1) - 0.333333333333333*p_B0(-3))*invDelta0block0;

       d1_pu0_dx = (1.5*p_B0(-2)*u0_B0(-2) + 1.83333333333333*p_B0(0)*u0_B0(0) - 3.0*p_B0(-1)*u0_B0(-1) -
            0.333333333333333*p_B0(-3)*u0_B0(-3))*invDelta0block0;

       d1_rhoEu0_dx = (1.5*u0_B0(-2)*rhoE_B0(-2) + 1.83333333333333*u0_B0(0)*rhoE_B0(0) - 3.0*u0_B0(-1)*rhoE_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoE_B0(-3))*invDelta0block0;

       d1_inv_rhoErho_dx = (1.5*rhoE_B0(-2)/rho_B0(-2) + 1.83333333333333*rhoE_B0(0)/rho_B0(0) -
            3.0*rhoE_B0(-1)/rho_B0(-1) - 0.333333333333333*rhoE_B0(-3)/rho_B0(-3))*invDelta0block0;

       d1_rhofu0_dx = (1.5*u0_B0(-2)*rhof_B0(-2) + 1.83333333333333*u0_B0(0)*rhof_B0(0) - 3.0*u0_B0(-1)*rhof_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhof_B0(-3))*invDelta0block0;

       d1_rhou0_dx = (1.5*rhou0_B0(-2) + 1.83333333333333*rhou0_B0(0) - 3.0*rhou0_B0(-1) -
            0.333333333333333*rhou0_B0(-3))*invDelta0block0;

       d1_rhou0u0_dx = (1.5*u0_B0(-2)*rhou0_B0(-2) + 1.83333333333333*u0_B0(0)*rhou0_B0(0) - 3.0*u0_B0(-1)*rhou0_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhou0_B0(-3))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_p_dx = (0.322484932882161*p_B0(0) + 0.0658051057710389*p_B0(-3) + 0.376283677513354*p_B0(1) -
            0.0394168524399447*p_B0(-2) - 0.00571369039775442*p_B0(-4) - 0.719443173328855*p_B0(-1))*invDelta0block0;

       d1_pu0_dx = (0.322484932882161*p_B0(0)*u0_B0(0) + 0.0658051057710389*p_B0(-3)*u0_B0(-3) +
            0.376283677513354*p_B0(1)*u0_B0(1) - 0.0394168524399447*p_B0(-2)*u0_B0(-2) -
            0.00571369039775442*p_B0(-4)*u0_B0(-4) - 0.719443173328855*p_B0(-1)*u0_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.322484932882161*u0_B0(0)*rhoE_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoE_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoE_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoE_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoE_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.322484932882161*rhoE_B0(0)/rho_B0(0) + 0.0658051057710389*rhoE_B0(-3)/rho_B0(-3) +
            0.376283677513354*rhoE_B0(1)/rho_B0(1) - 0.0394168524399447*rhoE_B0(-2)/rho_B0(-2) -
            0.00571369039775442*rhoE_B0(-4)/rho_B0(-4) - 0.719443173328855*rhoE_B0(-1)/rho_B0(-1))*invDelta0block0;

       d1_rhofu0_dx = (0.322484932882161*u0_B0(0)*rhof_B0(0) + 0.0658051057710389*u0_B0(-3)*rhof_B0(-3) +
            0.376283677513354*u0_B0(1)*rhof_B0(1) - 0.0394168524399447*u0_B0(-2)*rhof_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhof_B0(-4) - 0.719443173328855*u0_B0(-1)*rhof_B0(-1))*invDelta0block0;

       d1_rhou0_dx = (0.322484932882161*rhou0_B0(0) + 0.0658051057710389*rhou0_B0(-3) + 0.376283677513354*rhou0_B0(1) -
            0.0394168524399447*rhou0_B0(-2) - 0.00571369039775442*rhou0_B0(-4) -
            0.719443173328855*rhou0_B0(-1))*invDelta0block0;

       d1_rhou0u0_dx = (0.322484932882161*u0_B0(0)*rhou0_B0(0) + 0.0658051057710389*u0_B0(-3)*rhou0_B0(-3) +
            0.376283677513354*u0_B0(1)*rhou0_B0(1) - 0.0394168524399447*u0_B0(-2)*rhou0_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhou0_B0(-4) - 0.719443173328855*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == -3 + block0np0){

       d1_p_dx = (0.00412637789557492*p_B0(-3) + 0.0367146847001261*p_B0(-2) + 0.791245592765872*p_B0(1) -
            0.197184333887745*p_B0(0) - 0.521455851089587*p_B0(-1) - 0.113446470384241*p_B0(2))*invDelta0block0;

       d1_pu0_dx = (0.00412637789557492*p_B0(-3)*u0_B0(-3) + 0.0367146847001261*p_B0(-2)*u0_B0(-2) +
            0.791245592765872*p_B0(1)*u0_B0(1) - 0.197184333887745*p_B0(0)*u0_B0(0) -
            0.521455851089587*p_B0(-1)*u0_B0(-1) - 0.113446470384241*p_B0(2)*u0_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.00412637789557492*u0_B0(-3)*rhoE_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoE_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoE_B0(1) - 0.197184333887745*u0_B0(0)*rhoE_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoE_B0(-1) - 0.113446470384241*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.00412637789557492*rhoE_B0(-3)/rho_B0(-3) + 0.0367146847001261*rhoE_B0(-2)/rho_B0(-2) +
            0.791245592765872*rhoE_B0(1)/rho_B0(1) - 0.197184333887745*rhoE_B0(0)/rho_B0(0) -
            0.521455851089587*rhoE_B0(-1)/rho_B0(-1) - 0.113446470384241*rhoE_B0(2)/rho_B0(2))*invDelta0block0;

       d1_rhofu0_dx = (0.00412637789557492*u0_B0(-3)*rhof_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhof_B0(-2) +
            0.791245592765872*u0_B0(1)*rhof_B0(1) - 0.197184333887745*u0_B0(0)*rhof_B0(0) -
            0.521455851089587*u0_B0(-1)*rhof_B0(-1) - 0.113446470384241*u0_B0(2)*rhof_B0(2))*invDelta0block0;

       d1_rhou0_dx = (0.00412637789557492*rhou0_B0(-3) + 0.0367146847001261*rhou0_B0(-2) + 0.791245592765872*rhou0_B0(1)
            - 0.197184333887745*rhou0_B0(0) - 0.521455851089587*rhou0_B0(-1) -
            0.113446470384241*rhou0_B0(2))*invDelta0block0;

       d1_rhou0u0_dx = (0.00412637789557492*u0_B0(-3)*rhou0_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhou0_B0(-2) +
            0.791245592765872*u0_B0(1)*rhou0_B0(1) - 0.197184333887745*u0_B0(0)*rhou0_B0(0) -
            0.521455851089587*u0_B0(-1)*rhou0_B0(-1) - 0.113446470384241*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -4 + block0np0){

       d1_p_dx = (0.00932597985049999*p_B0(3) + 0.727822147724592*p_B0(1) + 0.082033432844602*p_B0(-2) -
            0.0451033223343881*p_B0(0) - 0.652141084861241*p_B0(-1) - 0.121937153224065*p_B0(2))*invDelta0block0;

       d1_pu0_dx = (0.00932597985049999*p_B0(3)*u0_B0(3) + 0.727822147724592*p_B0(1)*u0_B0(1) +
            0.082033432844602*p_B0(-2)*u0_B0(-2) - 0.0451033223343881*p_B0(0)*u0_B0(0) -
            0.652141084861241*p_B0(-1)*u0_B0(-1) - 0.121937153224065*p_B0(2)*u0_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.00932597985049999*u0_B0(3)*rhoE_B0(3) + 0.727822147724592*u0_B0(1)*rhoE_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoE_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoE_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoE_B0(-1) - 0.121937153224065*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_inv_rhoErho_dx = (0.00932597985049999*rhoE_B0(3)/rho_B0(3) + 0.727822147724592*rhoE_B0(1)/rho_B0(1) +
            0.082033432844602*rhoE_B0(-2)/rho_B0(-2) - 0.0451033223343881*rhoE_B0(0)/rho_B0(0) -
            0.652141084861241*rhoE_B0(-1)/rho_B0(-1) - 0.121937153224065*rhoE_B0(2)/rho_B0(2))*invDelta0block0;

       d1_rhofu0_dx = (0.00932597985049999*u0_B0(3)*rhof_B0(3) + 0.727822147724592*u0_B0(1)*rhof_B0(1) +
            0.082033432844602*u0_B0(-2)*rhof_B0(-2) - 0.0451033223343881*u0_B0(0)*rhof_B0(0) -
            0.652141084861241*u0_B0(-1)*rhof_B0(-1) - 0.121937153224065*u0_B0(2)*rhof_B0(2))*invDelta0block0;

       d1_rhou0_dx = (0.00932597985049999*rhou0_B0(3) + 0.727822147724592*rhou0_B0(1) + 0.082033432844602*rhou0_B0(-2) -
            0.0451033223343881*rhou0_B0(0) - 0.652141084861241*rhou0_B0(-1) -
            0.121937153224065*rhou0_B0(2))*invDelta0block0;

       d1_rhou0u0_dx = (0.00932597985049999*u0_B0(3)*rhou0_B0(3) + 0.727822147724592*u0_B0(1)*rhou0_B0(1) +
            0.082033432844602*u0_B0(-2)*rhou0_B0(-2) - 0.0451033223343881*u0_B0(0)*rhou0_B0(0) -
            0.652141084861241*u0_B0(-1)*rhou0_B0(-1) - 0.121937153224065*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

   }

   else{

       d1_p_dx = (-(2.0/3.0)*p_B0(-1) - (1.0/12.0)*p_B0(2) + ((1.0/12.0))*p_B0(-2) +
            ((2.0/3.0))*p_B0(1))*invDelta0block0;

       d1_pu0_dx = (-(2.0/3.0)*p_B0(-1)*u0_B0(-1) - (1.0/12.0)*p_B0(2)*u0_B0(2) + ((1.0/12.0))*p_B0(-2)*u0_B0(-2) +
            ((2.0/3.0))*p_B0(1)*u0_B0(1))*invDelta0block0;

       d1_rhoEu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoE_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoE_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoE_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoE_B0(1))*invDelta0block0;

       d1_inv_rhoErho_dx = (-(2.0/3.0)*rhoE_B0(-1)/rho_B0(-1) - (1.0/12.0)*rhoE_B0(2)/rho_B0(2) +
            ((1.0/12.0))*rhoE_B0(-2)/rho_B0(-2) + ((2.0/3.0))*rhoE_B0(1)/rho_B0(1))*invDelta0block0;

       d1_rhofu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhof_B0(-1) - (1.0/12.0)*u0_B0(2)*rhof_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhof_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhof_B0(1))*invDelta0block0;

       d1_rhou0_dx = (-(2.0/3.0)*rhou0_B0(-1) - (1.0/12.0)*rhou0_B0(2) + ((1.0/12.0))*rhou0_B0(-2) +
            ((2.0/3.0))*rhou0_B0(1))*invDelta0block0;

       d1_rhou0u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhou0_B0(-1) - (1.0/12.0)*u0_B0(2)*rhou0_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhou0_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhou0_B0(1))*invDelta0block0;

   }

   Residual0_B0(0) = -d1_rhou0_dx;

    Residual1_B0(0) = -d1_p_dx - (1.0/2.0)*d1_rhou0u0_dx - (1.0/2.0)*u0_B0(0)*d1_rhou0_dx -
      (1.0/2.0)*wk0_B0(0)*rhou0_B0(0);

    Residual2_B0(0) = -d1_pu0_dx - (1.0/2.0)*d1_rhoEu0_dx - (1.0/2.0)*rhou0_B0(0)*d1_inv_rhoErho_dx -
      (1.0/2.0)*rhoE_B0(0)*d1_rhou0_dx/rho_B0(0);

   Residual3_B0(0) = -d1_rhofu0_dx;

}

 void opensbliblock00Kernel017(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, ACC<double> &rhoE_B0, ACC<double> &rhoE_RKold_B0, ACC<double> &rho_B0,
ACC<double> &rho_RKold_B0, ACC<double> &rhof_B0, ACC<double> &rhof_RKold_B0, ACC<double> &rhou0_B0, ACC<double>
&rhou0_RKold_B0, const double *rkA, const double *rkB)
{
   rho_RKold_B0(0) = rkA[0]*rho_RKold_B0(0) + dt*Residual0_B0(0);

   rho_B0(0) = rkB[0]*rho_RKold_B0(0) + rho_B0(0);

   rhou0_RKold_B0(0) = rkA[0]*rhou0_RKold_B0(0) + dt*Residual1_B0(0);

   rhou0_B0(0) = rkB[0]*rhou0_RKold_B0(0) + rhou0_B0(0);

   rhoE_RKold_B0(0) = rkA[0]*rhoE_RKold_B0(0) + dt*Residual2_B0(0);

   rhoE_B0(0) = rkB[0]*rhoE_RKold_B0(0) + rhoE_B0(0);

   rhof_RKold_B0(0) = rkA[0]*rhof_RKold_B0(0) + dt*Residual3_B0(0);

   rhof_B0(0) = rkB[0]*rhof_RKold_B0(0) + rhof_B0(0);

}

 void opensbliblock00Kernel002(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0,
ACC<double> &a_B0, ACC<double> &u0_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/rho_B0(0);

   u0_B0(0) = rhou0_B0(0)*inv_rho;

   p_B0(0) = (-1 + gama)*(-0.5*(rhou0_B0(0)*rhou0_B0(0))*inv_rho + rhoE_B0(0));

   a_B0(0) = sqrt(gama*p_B0(0)*inv_rho);

}

void opensbliblock00Kernel003(ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   wk0_B0(0) = 0.0;

   wk1_B0(0) = 0.0;

   wk2_B0(0) = 0.0;

   wk3_B0(0) = 0.0;

}

 void opensbliblock00Kernel004(const ACC<double> &a_B0, const ACC<double> &f_B0, const ACC<double> &rhoE_B0, const
ACC<double> &rho_B0, const ACC<double> &rhof_B0, const ACC<double> &rhou0_B0, const ACC<double> &u0_B0, ACC<double>
&wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
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
   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(-1));

   AVG_0_f = ((1.0/2.0))*(f_B0(0) + f_B0(-1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(-1));

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

    alpha_00 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_00 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_02 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_01;

   alpha_10 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_10 + (-rhof_B0(-1) + rhof_B0(0))*AVG_0_0_LEV_13;

    alpha_20 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_20 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_22 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_21;

    alpha_30 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_30 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_32 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_31;

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(1));

   AVG_0_f = ((1.0/2.0))*(f_B0(0) + f_B0(1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(1));

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

    alpha_01 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_00 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_02 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_01;

   alpha_11 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_10 + (-rhof_B0(0) + rhof_B0(1))*AVG_0_0_LEV_13;

    alpha_21 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_20 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_22 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_21;

    alpha_31 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_30 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_32 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_31;

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

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1) + u0_B0(2));

   AVG_0_f = ((1.0/2.0))*(f_B0(1) + f_B0(2));

   AVG_0_a = ((1.0/2.0))*(a_B0(1) + a_B0(2));

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

    alpha_02 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_00 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_02 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_01;

   alpha_12 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_10 + (-rhof_B0(1) + rhof_B0(2))*AVG_0_0_LEV_13;

    alpha_22 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_20 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_22 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_21;

    alpha_32 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_30 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_32 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_31;

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

   wk0_B0(0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_02*phi_star_2 + AVG_0_REV_03*phi_star_3);

   wk1_B0(0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_12*phi_star_2 + AVG_0_REV_13*phi_star_3);

   wk2_B0(0) = 0.5*(AVG_0_REV_20*phi_star_0 + AVG_0_REV_22*phi_star_2 + AVG_0_REV_23*phi_star_3);

    wk3_B0(0) = 0.5*(AVG_0_REV_30*phi_star_0 + AVG_0_REV_31*phi_star_1 + AVG_0_REV_32*phi_star_2 +
      AVG_0_REV_33*phi_star_3);

}

 void opensbliblock00Kernel005(const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const
ACC<double> &wk3_B0, ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhof_B0, ACC<double> &rhou0_B0, const int
*idx)
{
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   rho_B0(0) = -(-wk0_B0(-1) + wk0_B0(0))*dt*invDelta0block0 + rho_B0(0);

   rhou0_B0(0) = -(-wk1_B0(-1) + wk1_B0(0))*dt*invDelta0block0 + rhou0_B0(0);

   rhoE_B0(0) = -(-wk2_B0(-1) + wk2_B0(0))*dt*invDelta0block0 + rhoE_B0(0);

   rhof_B0(0) = -(-wk3_B0(-1) + wk3_B0(0))*dt*invDelta0block0 + rhof_B0(0);

}

#endif
