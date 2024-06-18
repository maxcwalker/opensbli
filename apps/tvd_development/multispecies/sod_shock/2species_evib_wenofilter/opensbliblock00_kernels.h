#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel021(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoN_B0, ACC<double> &rhoev_B0,
ACC<double> &rhou0_B0, ACC<double> &x0_B0, const int *idx)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double evN2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   x0_B0(0) = Delta0block0*idx[0];

   u0 = 0.0;

   r = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.125
));

   p0 = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.1
));

   T0 = p0/(Rhat*r);

   cN = ((x0_B0(0) < 0.5) ? (
   0.0
)
: (
   0.05
));

   cN2 = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.95
));

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = Rhat*thetavN2*(cN*r/MN + cN2*r/MN2)/(MN2*Tref*(uref*uref)*(-1.0 + exp(thetavN2/(T0*Tref))));

   rhoE_B0(0) = (u0*u0)*(0.5*cN*r + 0.5*cN2*r) + p0*(1.5*cN*r/MN + 2.5*cN2*r/MN2)/(cN*r/MN + cN2*r/MN2);

}

 void opensbliblock00Kernel019(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoN_B0, ACC<double> &rhoev_B0,
ACC<double> &rhou0_B0)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double evN2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   r = 1.00000000000000;

   u0 = 0.0;

   p0 = 1.00000000000000;

   cN2 = 1.00000000000000;

   cN = 0.0;

   T0 = 1.0*invRhat;

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = Rhat*thetavN2*(cN*r/MN + cN2*r/MN2)/(MN2*Tref*(uref*uref)*(-1.0 + exp(thetavN2/(T0*Tref))));

   rhoE_B0(0) = (u0*u0)*(0.5*cN*r + 0.5*cN2*r) + p0*(1.5*cN*r/MN + 2.5*cN2*r/MN2)/(cN*r/MN + cN2*r/MN2);

}

 void opensbliblock00Kernel020(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoN_B0, ACC<double> &rhoev_B0,
ACC<double> &rhou0_B0)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double evN2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   r = 0.125000000000000;

   u0 = 0.0;

   p0 = 0.100000000000000;

   cN2 = 0.950000000000000;

   cN = 0.0500000000000000;

   T0 = 0.8*invRhat;

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = Rhat*thetavN2*(cN*r/MN + cN2*r/MN2)/(MN2*Tref*(uref*uref)*(-1.0 + exp(thetavN2/(T0*Tref))));

   rhoE_B0(0) = (u0*u0)*(0.5*cN*r + 0.5*cN2*r) + p0*(1.5*cN*r/MN + 2.5*cN2*r/MN2)/(cN*r/MN + cN2*r/MN2);

}

 void opensbliblock00Kernel009(const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0, const ACC<double> &rhou0_B0,
ACC<double> &u0_B0)
{
   u0_B0(0) = rhou0_B0(0)/(rhoN_B0(0) + rhoN2_B0(0));

}

 void opensbliblock00Kernel011(const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoev_B0, const ACC<double> &u0_B0, ACC<double> &T_B0)
{
    T_B0(0) = (uref*uref)*(-rhoev_B0(0) - 0.5*(u0_B0(0)*u0_B0(0))*(rhoN_B0(0) + rhoN2_B0(0)) +
      rhoE_B0(0))*invRhat*invTref/(invMN*rhoN_B0(0) + invMN2*rhoN2_B0(0));

}

 void opensbliblock00Kernel008(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0,
ACC<double> &p_B0)
{
   p_B0(0) = (invMN*rhoN_B0(0) + invMN2*rhoN2_B0(0))*Rhat*Tref*inv2uref*T_B0(0);

}

 void opensbliblock00Kernel017(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0,
ACC<double> &ptauN2_B0)
{
    ptauN2_B0(0) = (3.14066959164866e-11*invMN*rhoN_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.69627729418406e-11*invMN2*rhoN2_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMN2*rhoN2_B0(0));

}

void opensbliblock00Kernel018(const ACC<double> &T_B0, ACC<double> &eveqN2_B0)
{
   eveqN2_B0(0) = Rhat*invMN2*invTref*inv2uref*thetavN2/(-1.0 + exp(invTref*thetavN2/T_B0(0)));

}

void opensbliblock00Kernel006(const ACC<double> &u_B0, ACC<double> &wk0_B0, const int *idx)
{
   if (idx[0] == 0){

      wk0_B0(0) = (3.0*u_B0(1) + 0.333333333333333*u_B0(3) - 1.5*u_B0(2) - 1.83333333333333*u_B0(0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk0_B0(0) = (0.0394168524399447*u_B0(2) + 0.00571369039775442*u_B0(4) + 0.719443173328855*u_B0(1) -
            0.322484932882161*u_B0(0) - 0.0658051057710389*u_B0(3) - 0.376283677513354*u_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 2){

       wk0_B0(0) = (0.197184333887745*u_B0(0) + 0.521455851089587*u_B0(1) + 0.113446470384241*u_B0(-2) -
            0.00412637789557492*u_B0(3) - 0.0367146847001261*u_B0(2) - 0.791245592765872*u_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 3){

       wk0_B0(0) = (0.0451033223343881*u_B0(0) + 0.652141084861241*u_B0(1) + 0.121937153224065*u_B0(-2) -
            0.00932597985049999*u_B0(-3) - 0.727822147724592*u_B0(-1) - 0.082033432844602*u_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk0_B0(0) = (1.5*u_B0(-2) + 1.83333333333333*u_B0(0) - 3.0*u_B0(-1) -
            0.333333333333333*u_B0(-3))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk0_B0(0) = (0.322484932882161*u_B0(0) + 0.0658051057710389*u_B0(-3) + 0.376283677513354*u_B0(1) -
            0.0394168524399447*u_B0(-2) - 0.00571369039775442*u_B0(-4) - 0.719443173328855*u_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == -3 + block0np0){

       wk0_B0(0) = (0.00412637789557492*u_B0(-3) + 0.0367146847001261*u_B0(-2) + 0.791245592765872*u_B0(1) -
            0.197184333887745*u_B0(0) - 0.521455851089587*u_B0(-1) - 0.113446470384241*u_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -4 + block0np0){

       wk0_B0(0) = (0.00932597985049999*u_B0(3) + 0.727822147724592*u_B0(1) + 0.082033432844602*u_B0(-2) -
            0.0451033223343881*u_B0(0) - 0.652141084861241*u_B0(-1) - 0.121937153224065*u_B0(2))*invDelta0block0;

   }

   else{

       wk0_B0(0) = (-(2.0/3.0)*u_B0(-1) - (1.0/12.0)*u_B0(2) + ((1.0/12.0))*u_B0(-2) +
            ((2.0/3.0))*u_B0(1))*invDelta0block0;

   }

}

 void opensbliblock00Kernel016(const ACC<double> &T_B0, const ACC<double> &eveqN2_B0, const ACC<double> &p_B0, const
ACC<double> &ptauN2_B0, const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0, const
ACC<double> &rhoev_B0, const ACC<double> &rhou0_B0, const ACC<double> &u0_B0, const ACC<double> &wdotN2_B0, const
ACC<double> &wdotN_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double>
&Residual3_B0, ACC<double> &Residual4_B0, const int *idx)
{
   double d1_prhoEu0_dx = 0.0;
   double d1_prhou0u0_dx = 0.0;
   double d1_rhoN2u0_dx = 0.0;
   double d1_rhoNu0_dx = 0.0;
   double d1_rhoevu0_dx = 0.0;
   double d2_T_dx = 0.0;
   if (idx[0] == 0){

       d1_prhoEu0_dx = (3.0*(p_B0(1) + rhoE_B0(1))*u0_B0(1) + 0.333333333333333*(p_B0(3) + rhoE_B0(3))*u0_B0(3) -
            1.5*(p_B0(2) + rhoE_B0(2))*u0_B0(2) - 1.83333333333333*(p_B0(0) + rhoE_B0(0))*u0_B0(0))*invDelta0block0;

       d1_prhou0u0_dx = (3.0*p_B0(1) + 0.333333333333333*p_B0(3) - 1.5*p_B0(2) - 1.83333333333333*p_B0(0) +
            3.0*u0_B0(1)*rhou0_B0(1) + 0.333333333333333*u0_B0(3)*rhou0_B0(3) - 1.5*u0_B0(2)*rhou0_B0(2) -
            1.83333333333333*u0_B0(0)*rhou0_B0(0))*invDelta0block0;

       d1_rhoN2u0_dx = (3.0*u0_B0(1)*rhoN2_B0(1) + 0.333333333333333*u0_B0(3)*rhoN2_B0(3) - 1.5*u0_B0(2)*rhoN2_B0(2) -
            1.83333333333333*u0_B0(0)*rhoN2_B0(0))*invDelta0block0;

       d1_rhoNu0_dx = (3.0*u0_B0(1)*rhoN_B0(1) + 0.333333333333333*u0_B0(3)*rhoN_B0(3) - 1.5*u0_B0(2)*rhoN_B0(2) -
            1.83333333333333*u0_B0(0)*rhoN_B0(0))*invDelta0block0;

       d1_rhoevu0_dx = (3.0*u0_B0(1)*rhoev_B0(1) + 0.333333333333333*u0_B0(3)*rhoev_B0(3) - 1.5*u0_B0(2)*rhoev_B0(2) -
            1.83333333333333*u0_B0(0)*rhoev_B0(0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_prhoEu0_dx = (0.0394168524399447*(p_B0(2) + rhoE_B0(2))*u0_B0(2) + 0.00571369039775442*(p_B0(4) +
            rhoE_B0(4))*u0_B0(4) + 0.719443173328855*(p_B0(1) + rhoE_B0(1))*u0_B0(1) - 0.322484932882161*(p_B0(0) +
            rhoE_B0(0))*u0_B0(0) - 0.0658051057710389*(p_B0(3) + rhoE_B0(3))*u0_B0(3) - 0.376283677513354*(p_B0(-1) +
            rhoE_B0(-1))*u0_B0(-1))*invDelta0block0;

       d1_prhou0u0_dx = (0.0394168524399447*p_B0(2) + 0.00571369039775442*p_B0(4) + 0.719443173328855*p_B0(1) -
            0.322484932882161*p_B0(0) - 0.0658051057710389*p_B0(3) - 0.376283677513354*p_B0(-1) +
            0.0394168524399447*u0_B0(2)*rhou0_B0(2) + 0.00571369039775442*u0_B0(4)*rhou0_B0(4) +
            0.719443173328855*u0_B0(1)*rhou0_B0(1) - 0.322484932882161*u0_B0(0)*rhou0_B0(0) -
            0.0658051057710389*u0_B0(3)*rhou0_B0(3) - 0.376283677513354*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.0394168524399447*u0_B0(2)*rhoN2_B0(2) + 0.00571369039775442*u0_B0(4)*rhoN2_B0(4) +
            0.719443173328855*u0_B0(1)*rhoN2_B0(1) - 0.322484932882161*u0_B0(0)*rhoN2_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoN2_B0(3) - 0.376283677513354*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.0394168524399447*u0_B0(2)*rhoN_B0(2) + 0.00571369039775442*u0_B0(4)*rhoN_B0(4) +
            0.719443173328855*u0_B0(1)*rhoN_B0(1) - 0.322484932882161*u0_B0(0)*rhoN_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoN_B0(3) - 0.376283677513354*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.0394168524399447*u0_B0(2)*rhoev_B0(2) + 0.00571369039775442*u0_B0(4)*rhoev_B0(4) +
            0.719443173328855*u0_B0(1)*rhoev_B0(1) - 0.322484932882161*u0_B0(0)*rhoev_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoev_B0(3) - 0.376283677513354*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 2){

       d1_prhoEu0_dx = (0.197184333887745*(p_B0(0) + rhoE_B0(0))*u0_B0(0) + 0.521455851089587*(p_B0(1) +
            rhoE_B0(1))*u0_B0(1) + 0.113446470384241*(p_B0(-2) + rhoE_B0(-2))*u0_B0(-2) - 0.00412637789557492*(p_B0(3) +
            rhoE_B0(3))*u0_B0(3) - 0.0367146847001261*(p_B0(2) + rhoE_B0(2))*u0_B0(2) - 0.791245592765872*(p_B0(-1) +
            rhoE_B0(-1))*u0_B0(-1))*invDelta0block0;

       d1_prhou0u0_dx = (0.197184333887745*p_B0(0) + 0.521455851089587*p_B0(1) + 0.113446470384241*p_B0(-2) -
            0.00412637789557492*p_B0(3) - 0.0367146847001261*p_B0(2) - 0.791245592765872*p_B0(-1) +
            0.197184333887745*u0_B0(0)*rhou0_B0(0) + 0.521455851089587*u0_B0(1)*rhou0_B0(1) +
            0.113446470384241*u0_B0(-2)*rhou0_B0(-2) - 0.00412637789557492*u0_B0(3)*rhou0_B0(3) -
            0.0367146847001261*u0_B0(2)*rhou0_B0(2) - 0.791245592765872*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.197184333887745*u0_B0(0)*rhoN2_B0(0) + 0.521455851089587*u0_B0(1)*rhoN2_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoN2_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoN2_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoN2_B0(2) - 0.791245592765872*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.197184333887745*u0_B0(0)*rhoN_B0(0) + 0.521455851089587*u0_B0(1)*rhoN_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoN_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoN_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoN_B0(2) - 0.791245592765872*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.197184333887745*u0_B0(0)*rhoev_B0(0) + 0.521455851089587*u0_B0(1)*rhoev_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoev_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoev_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoev_B0(2) - 0.791245592765872*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 3){

       d1_prhoEu0_dx = (0.0451033223343881*(p_B0(0) + rhoE_B0(0))*u0_B0(0) + 0.652141084861241*(p_B0(1) +
            rhoE_B0(1))*u0_B0(1) + 0.121937153224065*(p_B0(-2) + rhoE_B0(-2))*u0_B0(-2) - 0.00932597985049999*(p_B0(-3)
            + rhoE_B0(-3))*u0_B0(-3) - 0.727822147724592*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1) - 0.082033432844602*(p_B0(2)
            + rhoE_B0(2))*u0_B0(2))*invDelta0block0;

       d1_prhou0u0_dx = (0.0451033223343881*p_B0(0) + 0.652141084861241*p_B0(1) + 0.121937153224065*p_B0(-2) -
            0.00932597985049999*p_B0(-3) - 0.727822147724592*p_B0(-1) - 0.082033432844602*p_B0(2) +
            0.0451033223343881*u0_B0(0)*rhou0_B0(0) + 0.652141084861241*u0_B0(1)*rhou0_B0(1) +
            0.121937153224065*u0_B0(-2)*rhou0_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhou0_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhou0_B0(-1) - 0.082033432844602*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.0451033223343881*u0_B0(0)*rhoN2_B0(0) + 0.652141084861241*u0_B0(1)*rhoN2_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoN2_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoN2_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoN2_B0(-1) - 0.082033432844602*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.0451033223343881*u0_B0(0)*rhoN_B0(0) + 0.652141084861241*u0_B0(1)*rhoN_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoN_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoN_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoN_B0(-1) - 0.082033432844602*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.0451033223343881*u0_B0(0)*rhoev_B0(0) + 0.652141084861241*u0_B0(1)*rhoev_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoev_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoev_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoev_B0(-1) - 0.082033432844602*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_prhoEu0_dx = (1.5*(p_B0(-2) + rhoE_B0(-2))*u0_B0(-2) + 1.83333333333333*(p_B0(0) + rhoE_B0(0))*u0_B0(0) -
            3.0*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1) - 0.333333333333333*(p_B0(-3) +
            rhoE_B0(-3))*u0_B0(-3))*invDelta0block0;

       d1_prhou0u0_dx = (1.5*p_B0(-2) + 1.83333333333333*p_B0(0) - 3.0*p_B0(-1) - 0.333333333333333*p_B0(-3) +
            1.5*u0_B0(-2)*rhou0_B0(-2) + 1.83333333333333*u0_B0(0)*rhou0_B0(0) - 3.0*u0_B0(-1)*rhou0_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhou0_B0(-3))*invDelta0block0;

       d1_rhoN2u0_dx = (1.5*u0_B0(-2)*rhoN2_B0(-2) + 1.83333333333333*u0_B0(0)*rhoN2_B0(0) - 3.0*u0_B0(-1)*rhoN2_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoN2_B0(-3))*invDelta0block0;

       d1_rhoNu0_dx = (1.5*u0_B0(-2)*rhoN_B0(-2) + 1.83333333333333*u0_B0(0)*rhoN_B0(0) - 3.0*u0_B0(-1)*rhoN_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoN_B0(-3))*invDelta0block0;

       d1_rhoevu0_dx = (1.5*u0_B0(-2)*rhoev_B0(-2) + 1.83333333333333*u0_B0(0)*rhoev_B0(0) - 3.0*u0_B0(-1)*rhoev_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoev_B0(-3))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_prhoEu0_dx = (0.322484932882161*(p_B0(0) + rhoE_B0(0))*u0_B0(0) + 0.0658051057710389*(p_B0(-3) +
            rhoE_B0(-3))*u0_B0(-3) + 0.376283677513354*(p_B0(1) + rhoE_B0(1))*u0_B0(1) - 0.0394168524399447*(p_B0(-2) +
            rhoE_B0(-2))*u0_B0(-2) - 0.00571369039775442*(p_B0(-4) + rhoE_B0(-4))*u0_B0(-4) -
            0.719443173328855*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1))*invDelta0block0;

       d1_prhou0u0_dx = (0.322484932882161*p_B0(0) + 0.0658051057710389*p_B0(-3) + 0.376283677513354*p_B0(1) -
            0.0394168524399447*p_B0(-2) - 0.00571369039775442*p_B0(-4) - 0.719443173328855*p_B0(-1) +
            0.322484932882161*u0_B0(0)*rhou0_B0(0) + 0.0658051057710389*u0_B0(-3)*rhou0_B0(-3) +
            0.376283677513354*u0_B0(1)*rhou0_B0(1) - 0.0394168524399447*u0_B0(-2)*rhou0_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhou0_B0(-4) - 0.719443173328855*u0_B0(-1)*rhou0_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.322484932882161*u0_B0(0)*rhoN2_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoN2_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoN2_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoN2_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoN2_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.322484932882161*u0_B0(0)*rhoN_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoN_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoN_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoN_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoN_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.322484932882161*u0_B0(0)*rhoev_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoev_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoev_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoev_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoev_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == -3 + block0np0){

       d1_prhoEu0_dx = (0.00412637789557492*(p_B0(-3) + rhoE_B0(-3))*u0_B0(-3) + 0.0367146847001261*(p_B0(-2) +
            rhoE_B0(-2))*u0_B0(-2) + 0.791245592765872*(p_B0(1) + rhoE_B0(1))*u0_B0(1) - 0.197184333887745*(p_B0(0) +
            rhoE_B0(0))*u0_B0(0) - 0.521455851089587*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1) - 0.113446470384241*(p_B0(2) +
            rhoE_B0(2))*u0_B0(2))*invDelta0block0;

       d1_prhou0u0_dx = (0.00412637789557492*p_B0(-3) + 0.0367146847001261*p_B0(-2) + 0.791245592765872*p_B0(1) -
            0.197184333887745*p_B0(0) - 0.521455851089587*p_B0(-1) - 0.113446470384241*p_B0(2) +
            0.00412637789557492*u0_B0(-3)*rhou0_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhou0_B0(-2) +
            0.791245592765872*u0_B0(1)*rhou0_B0(1) - 0.197184333887745*u0_B0(0)*rhou0_B0(0) -
            0.521455851089587*u0_B0(-1)*rhou0_B0(-1) - 0.113446470384241*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.00412637789557492*u0_B0(-3)*rhoN2_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoN2_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoN2_B0(1) - 0.197184333887745*u0_B0(0)*rhoN2_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoN2_B0(-1) - 0.113446470384241*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00412637789557492*u0_B0(-3)*rhoN_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoN_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoN_B0(1) - 0.197184333887745*u0_B0(0)*rhoN_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoN_B0(-1) - 0.113446470384241*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.00412637789557492*u0_B0(-3)*rhoev_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoev_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoev_B0(1) - 0.197184333887745*u0_B0(0)*rhoev_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoev_B0(-1) - 0.113446470384241*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -4 + block0np0){

       d1_prhoEu0_dx = (0.00932597985049999*(p_B0(3) + rhoE_B0(3))*u0_B0(3) + 0.727822147724592*(p_B0(1) +
            rhoE_B0(1))*u0_B0(1) + 0.082033432844602*(p_B0(-2) + rhoE_B0(-2))*u0_B0(-2) - 0.0451033223343881*(p_B0(0) +
            rhoE_B0(0))*u0_B0(0) - 0.652141084861241*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1) - 0.121937153224065*(p_B0(2) +
            rhoE_B0(2))*u0_B0(2))*invDelta0block0;

       d1_prhou0u0_dx = (0.00932597985049999*p_B0(3) + 0.727822147724592*p_B0(1) + 0.082033432844602*p_B0(-2) -
            0.0451033223343881*p_B0(0) - 0.652141084861241*p_B0(-1) - 0.121937153224065*p_B0(2) +
            0.00932597985049999*u0_B0(3)*rhou0_B0(3) + 0.727822147724592*u0_B0(1)*rhou0_B0(1) +
            0.082033432844602*u0_B0(-2)*rhou0_B0(-2) - 0.0451033223343881*u0_B0(0)*rhou0_B0(0) -
            0.652141084861241*u0_B0(-1)*rhou0_B0(-1) - 0.121937153224065*u0_B0(2)*rhou0_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.00932597985049999*u0_B0(3)*rhoN2_B0(3) + 0.727822147724592*u0_B0(1)*rhoN2_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoN2_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoN2_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoN2_B0(-1) - 0.121937153224065*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00932597985049999*u0_B0(3)*rhoN_B0(3) + 0.727822147724592*u0_B0(1)*rhoN_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoN_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoN_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoN_B0(-1) - 0.121937153224065*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.00932597985049999*u0_B0(3)*rhoev_B0(3) + 0.727822147724592*u0_B0(1)*rhoev_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoev_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoev_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoev_B0(-1) - 0.121937153224065*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

   }

   else{

       d1_prhoEu0_dx = (-(2.0/3.0)*(p_B0(-1) + rhoE_B0(-1))*u0_B0(-1) - (1.0/12.0)*(p_B0(2) + rhoE_B0(2))*u0_B0(2) +
            ((1.0/12.0))*(p_B0(-2) + rhoE_B0(-2))*u0_B0(-2) + ((2.0/3.0))*(p_B0(1) +
            rhoE_B0(1))*u0_B0(1))*invDelta0block0;

       d1_prhou0u0_dx = (-(2.0/3.0)*p_B0(-1) - (1.0/12.0)*p_B0(2) + ((1.0/12.0))*p_B0(-2) + ((2.0/3.0))*p_B0(1) -
            (2.0/3.0)*u0_B0(-1)*rhou0_B0(-1) - (1.0/12.0)*u0_B0(2)*rhou0_B0(2) + ((1.0/12.0))*u0_B0(-2)*rhou0_B0(-2) +
            ((2.0/3.0))*u0_B0(1)*rhou0_B0(1))*invDelta0block0;

       d1_rhoN2u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoN2_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoN2_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoN2_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoN2_B0(1))*invDelta0block0;

       d1_rhoNu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoN_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoN_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoN_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoN_B0(1))*invDelta0block0;

       d1_rhoevu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoev_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoev_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoev_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoev_B0(1))*invDelta0block0;

   }

   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1) - (14.0/3.0)*T_B0(3) + ((11.0/12.0))*T_B0(4) + ((19.0/2.0))*T_B0(2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(3) + ((1.0/3.0))*T_B0(2) +
            ((11.0/12.0))*T_B0(-1))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1) - (14.0/3.0)*T_B0(-3) + ((11.0/12.0))*T_B0(-4) + ((19.0/2.0))*T_B0(-2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(-3) + ((1.0/3.0))*T_B0(-2) +
            ((11.0/12.0))*T_B0(1))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0) - (1.0/12.0)*T_B0(-2) - (1.0/12.0)*T_B0(2) + ((4.0/3.0))*T_B0(1) +
            ((4.0/3.0))*T_B0(-1))*inv2Delta0block0;

   }

   Residual0_B0(0) = -d1_rhoNu0_dx + wdotN_B0(0);

   Residual1_B0(0) = -d1_rhoN2u0_dx + wdotN2_B0(0);

   Residual2_B0(0) = -d1_prhou0u0_dx;

    Residual3_B0(0) = -d1_rhoevu0_dx + 9.86923266716013e-6*(-rhoev_B0(0) +
      rhoN2_B0(0)*eveqN2_B0(0))*Lref*invuref*p_B0(0)/ptauN2_B0(0) + wdotN_B0(0) + wdotN2_B0(0);

   Residual4_B0(0) = -d1_prhoEu0_dx + kappa*d2_T_dx;

}

 void opensbliblock00Kernel022(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &Residual4_B0, ACC<double> &rhoE_B0, ACC<double>
&rhoE_RKold_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoN2_RKold_B0, ACC<double> &rhoN_B0, ACC<double> &rhoN_RKold_B0,
ACC<double> &rhoev_B0, ACC<double> &rhoev_RKold_B0, ACC<double> &rhou0_B0, ACC<double> &rhou0_RKold_B0, const double
*rkA, const double *rkB)
{
   rhoN_RKold_B0(0) = rkA[0]*rhoN_RKold_B0(0) + dt*Residual0_B0(0);

   rhoN_B0(0) = rkB[0]*rhoN_RKold_B0(0) + rhoN_B0(0);

   rhoN2_RKold_B0(0) = rkA[0]*rhoN2_RKold_B0(0) + dt*Residual1_B0(0);

   rhoN2_B0(0) = rkB[0]*rhoN2_RKold_B0(0) + rhoN2_B0(0);

   rhou0_RKold_B0(0) = rkA[0]*rhou0_RKold_B0(0) + dt*Residual2_B0(0);

   rhou0_B0(0) = rkB[0]*rhou0_RKold_B0(0) + rhou0_B0(0);

   rhoev_RKold_B0(0) = rkA[0]*rhoev_RKold_B0(0) + dt*Residual3_B0(0);

   rhoev_B0(0) = rkB[0]*rhoev_RKold_B0(0) + rhoev_B0(0);

   rhoE_RKold_B0(0) = rkA[0]*rhoE_RKold_B0(0) + dt*Residual4_B0(0);

   rhoE_B0(0) = rkB[0]*rhoE_RKold_B0(0) + rhoE_B0(0);

}

 void opensbliblock00Kernel002(const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhou0_B0, ACC<double> &a_B0, ACC<double> &u0_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/(rhoN_B0(0) + rhoN2_B0(0));

   u0_B0(0) = rhou0_B0(0)*inv_rho;

   p_B0(0) = (-1 + gama)*(-0.5*(rhou0_B0(0)*rhou0_B0(0))*inv_rho + rhoE_B0(0));

   a_B0(0) = sqrt(gama*p_B0(0)*inv_rho);

}

 void opensbliblock00Kernel003(ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0,
ACC<double> &wk4_B0)
{
   wk0_B0(0) = 0.0;

   wk1_B0(0) = 0.0;

   wk2_B0(0) = 0.0;

   wk3_B0(0) = 0.0;

   wk4_B0(0) = 0.0;

}

 void opensbliblock00Kernel004(const ACC<double> &a_B0, const ACC<double> &ev_B0, const ACC<double> &p_B0, const
ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoN_B0, const ACC<double> &rhoev_B0, const
ACC<double> &rhou0_B0, const ACC<double> &u0_B0, const ACC<double> &u_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0,
ACC<double> &wk2_B0, ACC<double> &wk3_B0, ACC<double> &wk4_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_04 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_24 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_34 = 0.0;
   double AVG_0_0_LEV_40 = 0.0;
   double AVG_0_0_LEV_41 = 0.0;
   double AVG_0_0_LEV_42 = 0.0;
   double AVG_0_0_LEV_44 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_ev = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_rhoN = 0.0;
   double AVG_0_rhoN2 = 0.0;
   double AVG_0_u = 0.0;
   double AVG_0_u0 = 0.0;
   double CF_00 = 0.0;
   double CF_01 = 0.0;
   double CF_02 = 0.0;
   double CF_03 = 0.0;
   double CF_04 = 0.0;
   double CF_05 = 0.0;
   double CF_10 = 0.0;
   double CF_11 = 0.0;
   double CF_12 = 0.0;
   double CF_13 = 0.0;
   double CF_14 = 0.0;
   double CF_15 = 0.0;
   double CF_20 = 0.0;
   double CF_21 = 0.0;
   double CF_22 = 0.0;
   double CF_23 = 0.0;
   double CF_24 = 0.0;
   double CF_25 = 0.0;
   double CF_30 = 0.0;
   double CF_31 = 0.0;
   double CF_32 = 0.0;
   double CF_33 = 0.0;
   double CF_34 = 0.0;
   double CF_35 = 0.0;
   double CF_40 = 0.0;
   double CF_41 = 0.0;
   double CF_42 = 0.0;
   double CF_43 = 0.0;
   double CF_44 = 0.0;
   double CF_45 = 0.0;
   double CS_00 = 0.0;
   double CS_01 = 0.0;
   double CS_02 = 0.0;
   double CS_03 = 0.0;
   double CS_04 = 0.0;
   double CS_05 = 0.0;
   double CS_10 = 0.0;
   double CS_11 = 0.0;
   double CS_12 = 0.0;
   double CS_13 = 0.0;
   double CS_14 = 0.0;
   double CS_15 = 0.0;
   double CS_20 = 0.0;
   double CS_21 = 0.0;
   double CS_22 = 0.0;
   double CS_23 = 0.0;
   double CS_24 = 0.0;
   double CS_25 = 0.0;
   double CS_30 = 0.0;
   double CS_31 = 0.0;
   double CS_32 = 0.0;
   double CS_33 = 0.0;
   double CS_34 = 0.0;
   double CS_35 = 0.0;
   double CS_40 = 0.0;
   double CS_41 = 0.0;
   double CS_42 = 0.0;
   double CS_43 = 0.0;
   double CS_44 = 0.0;
   double CS_45 = 0.0;
   double Recon_0 = 0.0;
   double Recon_1 = 0.0;
   double Recon_2 = 0.0;
   double Recon_3 = 0.0;
   double Recon_4 = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double max_lambda_44 = 0.0;
   double omega_0 = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
   double rj0 = 0.0;
   double rj1 = 0.0;
   double rj2 = 0.0;
   double rj3 = 0.0;
   double rj4 = 0.0;
   AVG_0_u = ((1.0/2.0))*(u_B0(0) + u_B0(1));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(1));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(0) + rhoN_B0(1));

   AVG_0_ev = ((1.0/2.0))*(ev_B0(0) + ev_B0(1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(1));

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(0) + rhoN2_B0(1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   AVG_0_0_LEV_00 = -0.5*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_01 = -1.0*(-1.0*AVG_0_rhoN - 1.0*AVG_0_rhoN2 - 0.5*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoN +
      0.5*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoN)/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_02 = 1.0*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN*AVG_0_u/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_04 = -1.0*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_10 = -1.0*AVG_0_ev/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_11 = -1.0*AVG_0_ev/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_13 = 1.0/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_20 = 1.0*(-0.5 - 0.25*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a)*gama)/((AVG_0_rhoN + AVG_0_rhoN2)*inv_AVG_a);

    AVG_0_0_LEV_21 = 1.0*(-0.5 - 0.25*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u*AVG_0_u)*(inv_AVG_a*inv_AVG_a)*gama)/((AVG_0_rhoN + AVG_0_rhoN2)*inv_AVG_a);

   AVG_0_0_LEV_22 = -0.5*gamma_m1*AVG_0_u*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_24 = 0.5*gamma_m1*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_30 = 1.0*(-0.125 + 0.125*gama)*(0.25*AVG_0_a - 0.125*AVG_0_u +
      0.125*gama*AVG_0_u)*AVG_0_u*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_31 = 1.0*(-0.125 + 0.125*gama)*(0.25*AVG_0_a - 0.125*AVG_0_u +
      0.125*gama*AVG_0_u)*AVG_0_u*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_32 = -0.25*(-1.0 + 1.0*gama)*(1.0*AVG_0_a - 1.0*AVG_0_u + 1.0*gama*AVG_0_u)*inv_AVG_a/(AVG_0_rhoN +
      AVG_0_rhoN2);

   AVG_0_0_LEV_34 = 0.25*(-1.0 + 1.0*gama)*gamma_m1*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_40 = -1.0*(-0.125 + 0.125*gama)*(0.125*AVG_0_u + 0.25*AVG_0_a -
      0.125*gama*AVG_0_u)*AVG_0_u*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    AVG_0_0_LEV_41 = -1.0*(-0.125 + 0.125*gama)*(0.125*AVG_0_u + 0.25*AVG_0_a -
      0.125*gama*AVG_0_u)*AVG_0_u*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_42 = 0.25*(1.0*AVG_0_a + 1.0*AVG_0_u - 1.0*gama*AVG_0_u)*gamma_m1*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

   AVG_0_0_LEV_44 = 0.25*(-1.0 + 1.0*gama)*gamma_m1*inv_AVG_a/(AVG_0_rhoN + AVG_0_rhoN2);

    CF_00 = p_B0(-2)*AVG_0_0_LEV_02 + p_B0(-2)*u0_B0(-2)*AVG_0_0_LEV_04 + u0_B0(-2)*rhoE_B0(-2)*AVG_0_0_LEV_04 +
      u0_B0(-2)*rhoN_B0(-2)*AVG_0_0_LEV_00 + u0_B0(-2)*rhoN2_B0(-2)*AVG_0_0_LEV_01 +
      u0_B0(-2)*rhou0_B0(-2)*AVG_0_0_LEV_02;

   CF_10 = (rhoN_B0(-2)*AVG_0_0_LEV_10 + rhoN2_B0(-2)*AVG_0_0_LEV_11 + rhoev_B0(-2)*AVG_0_0_LEV_13)*u0_B0(-2);

    CF_20 = p_B0(-2)*AVG_0_0_LEV_22 + p_B0(-2)*u0_B0(-2)*AVG_0_0_LEV_24 + u0_B0(-2)*rhoE_B0(-2)*AVG_0_0_LEV_24 +
      u0_B0(-2)*rhoN_B0(-2)*AVG_0_0_LEV_20 + u0_B0(-2)*rhoN2_B0(-2)*AVG_0_0_LEV_21 +
      u0_B0(-2)*rhou0_B0(-2)*AVG_0_0_LEV_22;

    CF_30 = p_B0(-2)*AVG_0_0_LEV_32 + p_B0(-2)*u0_B0(-2)*AVG_0_0_LEV_34 + u0_B0(-2)*rhoE_B0(-2)*AVG_0_0_LEV_34 +
      u0_B0(-2)*rhoN_B0(-2)*AVG_0_0_LEV_30 + u0_B0(-2)*rhoN2_B0(-2)*AVG_0_0_LEV_31 +
      u0_B0(-2)*rhou0_B0(-2)*AVG_0_0_LEV_32;

    CF_40 = p_B0(-2)*AVG_0_0_LEV_42 + p_B0(-2)*u0_B0(-2)*AVG_0_0_LEV_44 + u0_B0(-2)*rhoE_B0(-2)*AVG_0_0_LEV_44 +
      u0_B0(-2)*rhoN_B0(-2)*AVG_0_0_LEV_40 + u0_B0(-2)*rhoN2_B0(-2)*AVG_0_0_LEV_41 +
      u0_B0(-2)*rhou0_B0(-2)*AVG_0_0_LEV_42;

    CS_00 = rhoE_B0(-2)*AVG_0_0_LEV_04 + rhoN_B0(-2)*AVG_0_0_LEV_00 + rhoN2_B0(-2)*AVG_0_0_LEV_01 +
      rhou0_B0(-2)*AVG_0_0_LEV_02;

   CS_10 = rhoN_B0(-2)*AVG_0_0_LEV_10 + rhoN2_B0(-2)*AVG_0_0_LEV_11 + rhoev_B0(-2)*AVG_0_0_LEV_13;

    CS_20 = rhoE_B0(-2)*AVG_0_0_LEV_24 + rhoN_B0(-2)*AVG_0_0_LEV_20 + rhoN2_B0(-2)*AVG_0_0_LEV_21 +
      rhou0_B0(-2)*AVG_0_0_LEV_22;

    CS_30 = rhoE_B0(-2)*AVG_0_0_LEV_34 + rhoN_B0(-2)*AVG_0_0_LEV_30 + rhoN2_B0(-2)*AVG_0_0_LEV_31 +
      rhou0_B0(-2)*AVG_0_0_LEV_32;

    CS_40 = rhoE_B0(-2)*AVG_0_0_LEV_44 + rhoN_B0(-2)*AVG_0_0_LEV_40 + rhoN2_B0(-2)*AVG_0_0_LEV_41 +
      rhou0_B0(-2)*AVG_0_0_LEV_42;

    CF_01 = p_B0(-1)*AVG_0_0_LEV_02 + p_B0(-1)*u0_B0(-1)*AVG_0_0_LEV_04 + u0_B0(-1)*rhoE_B0(-1)*AVG_0_0_LEV_04 +
      u0_B0(-1)*rhoN_B0(-1)*AVG_0_0_LEV_00 + u0_B0(-1)*rhoN2_B0(-1)*AVG_0_0_LEV_01 +
      u0_B0(-1)*rhou0_B0(-1)*AVG_0_0_LEV_02;

   CF_11 = (rhoN_B0(-1)*AVG_0_0_LEV_10 + rhoN2_B0(-1)*AVG_0_0_LEV_11 + rhoev_B0(-1)*AVG_0_0_LEV_13)*u0_B0(-1);

    CF_21 = p_B0(-1)*AVG_0_0_LEV_22 + p_B0(-1)*u0_B0(-1)*AVG_0_0_LEV_24 + u0_B0(-1)*rhoE_B0(-1)*AVG_0_0_LEV_24 +
      u0_B0(-1)*rhoN_B0(-1)*AVG_0_0_LEV_20 + u0_B0(-1)*rhoN2_B0(-1)*AVG_0_0_LEV_21 +
      u0_B0(-1)*rhou0_B0(-1)*AVG_0_0_LEV_22;

    CF_31 = p_B0(-1)*AVG_0_0_LEV_32 + p_B0(-1)*u0_B0(-1)*AVG_0_0_LEV_34 + u0_B0(-1)*rhoE_B0(-1)*AVG_0_0_LEV_34 +
      u0_B0(-1)*rhoN_B0(-1)*AVG_0_0_LEV_30 + u0_B0(-1)*rhoN2_B0(-1)*AVG_0_0_LEV_31 +
      u0_B0(-1)*rhou0_B0(-1)*AVG_0_0_LEV_32;

    CF_41 = p_B0(-1)*AVG_0_0_LEV_42 + p_B0(-1)*u0_B0(-1)*AVG_0_0_LEV_44 + u0_B0(-1)*rhoE_B0(-1)*AVG_0_0_LEV_44 +
      u0_B0(-1)*rhoN_B0(-1)*AVG_0_0_LEV_40 + u0_B0(-1)*rhoN2_B0(-1)*AVG_0_0_LEV_41 +
      u0_B0(-1)*rhou0_B0(-1)*AVG_0_0_LEV_42;

    CS_01 = rhoE_B0(-1)*AVG_0_0_LEV_04 + rhoN_B0(-1)*AVG_0_0_LEV_00 + rhoN2_B0(-1)*AVG_0_0_LEV_01 +
      rhou0_B0(-1)*AVG_0_0_LEV_02;

   CS_11 = rhoN_B0(-1)*AVG_0_0_LEV_10 + rhoN2_B0(-1)*AVG_0_0_LEV_11 + rhoev_B0(-1)*AVG_0_0_LEV_13;

    CS_21 = rhoE_B0(-1)*AVG_0_0_LEV_24 + rhoN_B0(-1)*AVG_0_0_LEV_20 + rhoN2_B0(-1)*AVG_0_0_LEV_21 +
      rhou0_B0(-1)*AVG_0_0_LEV_22;

    CS_31 = rhoE_B0(-1)*AVG_0_0_LEV_34 + rhoN_B0(-1)*AVG_0_0_LEV_30 + rhoN2_B0(-1)*AVG_0_0_LEV_31 +
      rhou0_B0(-1)*AVG_0_0_LEV_32;

    CS_41 = rhoE_B0(-1)*AVG_0_0_LEV_44 + rhoN_B0(-1)*AVG_0_0_LEV_40 + rhoN2_B0(-1)*AVG_0_0_LEV_41 +
      rhou0_B0(-1)*AVG_0_0_LEV_42;

    CF_02 = p_B0(0)*AVG_0_0_LEV_02 + p_B0(0)*u0_B0(0)*AVG_0_0_LEV_04 + u0_B0(0)*rhoE_B0(0)*AVG_0_0_LEV_04 +
      u0_B0(0)*rhoN_B0(0)*AVG_0_0_LEV_00 + u0_B0(0)*rhoN2_B0(0)*AVG_0_0_LEV_01 + u0_B0(0)*rhou0_B0(0)*AVG_0_0_LEV_02;

   CF_12 = (rhoN_B0(0)*AVG_0_0_LEV_10 + rhoN2_B0(0)*AVG_0_0_LEV_11 + rhoev_B0(0)*AVG_0_0_LEV_13)*u0_B0(0);

    CF_22 = p_B0(0)*AVG_0_0_LEV_22 + p_B0(0)*u0_B0(0)*AVG_0_0_LEV_24 + u0_B0(0)*rhoE_B0(0)*AVG_0_0_LEV_24 +
      u0_B0(0)*rhoN_B0(0)*AVG_0_0_LEV_20 + u0_B0(0)*rhoN2_B0(0)*AVG_0_0_LEV_21 + u0_B0(0)*rhou0_B0(0)*AVG_0_0_LEV_22;

    CF_32 = p_B0(0)*AVG_0_0_LEV_32 + p_B0(0)*u0_B0(0)*AVG_0_0_LEV_34 + u0_B0(0)*rhoE_B0(0)*AVG_0_0_LEV_34 +
      u0_B0(0)*rhoN_B0(0)*AVG_0_0_LEV_30 + u0_B0(0)*rhoN2_B0(0)*AVG_0_0_LEV_31 + u0_B0(0)*rhou0_B0(0)*AVG_0_0_LEV_32;

    CF_42 = p_B0(0)*AVG_0_0_LEV_42 + p_B0(0)*u0_B0(0)*AVG_0_0_LEV_44 + u0_B0(0)*rhoE_B0(0)*AVG_0_0_LEV_44 +
      u0_B0(0)*rhoN_B0(0)*AVG_0_0_LEV_40 + u0_B0(0)*rhoN2_B0(0)*AVG_0_0_LEV_41 + u0_B0(0)*rhou0_B0(0)*AVG_0_0_LEV_42;

    CS_02 = rhoE_B0(0)*AVG_0_0_LEV_04 + rhoN_B0(0)*AVG_0_0_LEV_00 + rhoN2_B0(0)*AVG_0_0_LEV_01 +
      rhou0_B0(0)*AVG_0_0_LEV_02;

   CS_12 = rhoN_B0(0)*AVG_0_0_LEV_10 + rhoN2_B0(0)*AVG_0_0_LEV_11 + rhoev_B0(0)*AVG_0_0_LEV_13;

    CS_22 = rhoE_B0(0)*AVG_0_0_LEV_24 + rhoN_B0(0)*AVG_0_0_LEV_20 + rhoN2_B0(0)*AVG_0_0_LEV_21 +
      rhou0_B0(0)*AVG_0_0_LEV_22;

    CS_32 = rhoE_B0(0)*AVG_0_0_LEV_34 + rhoN_B0(0)*AVG_0_0_LEV_30 + rhoN2_B0(0)*AVG_0_0_LEV_31 +
      rhou0_B0(0)*AVG_0_0_LEV_32;

    CS_42 = rhoE_B0(0)*AVG_0_0_LEV_44 + rhoN_B0(0)*AVG_0_0_LEV_40 + rhoN2_B0(0)*AVG_0_0_LEV_41 +
      rhou0_B0(0)*AVG_0_0_LEV_42;

    CF_03 = p_B0(1)*AVG_0_0_LEV_02 + p_B0(1)*u0_B0(1)*AVG_0_0_LEV_04 + u0_B0(1)*rhoE_B0(1)*AVG_0_0_LEV_04 +
      u0_B0(1)*rhoN_B0(1)*AVG_0_0_LEV_00 + u0_B0(1)*rhoN2_B0(1)*AVG_0_0_LEV_01 + u0_B0(1)*rhou0_B0(1)*AVG_0_0_LEV_02;

   CF_13 = (rhoN_B0(1)*AVG_0_0_LEV_10 + rhoN2_B0(1)*AVG_0_0_LEV_11 + rhoev_B0(1)*AVG_0_0_LEV_13)*u0_B0(1);

    CF_23 = p_B0(1)*AVG_0_0_LEV_22 + p_B0(1)*u0_B0(1)*AVG_0_0_LEV_24 + u0_B0(1)*rhoE_B0(1)*AVG_0_0_LEV_24 +
      u0_B0(1)*rhoN_B0(1)*AVG_0_0_LEV_20 + u0_B0(1)*rhoN2_B0(1)*AVG_0_0_LEV_21 + u0_B0(1)*rhou0_B0(1)*AVG_0_0_LEV_22;

    CF_33 = p_B0(1)*AVG_0_0_LEV_32 + p_B0(1)*u0_B0(1)*AVG_0_0_LEV_34 + u0_B0(1)*rhoE_B0(1)*AVG_0_0_LEV_34 +
      u0_B0(1)*rhoN_B0(1)*AVG_0_0_LEV_30 + u0_B0(1)*rhoN2_B0(1)*AVG_0_0_LEV_31 + u0_B0(1)*rhou0_B0(1)*AVG_0_0_LEV_32;

    CF_43 = p_B0(1)*AVG_0_0_LEV_42 + p_B0(1)*u0_B0(1)*AVG_0_0_LEV_44 + u0_B0(1)*rhoE_B0(1)*AVG_0_0_LEV_44 +
      u0_B0(1)*rhoN_B0(1)*AVG_0_0_LEV_40 + u0_B0(1)*rhoN2_B0(1)*AVG_0_0_LEV_41 + u0_B0(1)*rhou0_B0(1)*AVG_0_0_LEV_42;

    CS_03 = rhoE_B0(1)*AVG_0_0_LEV_04 + rhoN_B0(1)*AVG_0_0_LEV_00 + rhoN2_B0(1)*AVG_0_0_LEV_01 +
      rhou0_B0(1)*AVG_0_0_LEV_02;

   CS_13 = rhoN_B0(1)*AVG_0_0_LEV_10 + rhoN2_B0(1)*AVG_0_0_LEV_11 + rhoev_B0(1)*AVG_0_0_LEV_13;

    CS_23 = rhoE_B0(1)*AVG_0_0_LEV_24 + rhoN_B0(1)*AVG_0_0_LEV_20 + rhoN2_B0(1)*AVG_0_0_LEV_21 +
      rhou0_B0(1)*AVG_0_0_LEV_22;

    CS_33 = rhoE_B0(1)*AVG_0_0_LEV_34 + rhoN_B0(1)*AVG_0_0_LEV_30 + rhoN2_B0(1)*AVG_0_0_LEV_31 +
      rhou0_B0(1)*AVG_0_0_LEV_32;

    CS_43 = rhoE_B0(1)*AVG_0_0_LEV_44 + rhoN_B0(1)*AVG_0_0_LEV_40 + rhoN2_B0(1)*AVG_0_0_LEV_41 +
      rhou0_B0(1)*AVG_0_0_LEV_42;

    CF_04 = p_B0(2)*AVG_0_0_LEV_02 + p_B0(2)*u0_B0(2)*AVG_0_0_LEV_04 + u0_B0(2)*rhoE_B0(2)*AVG_0_0_LEV_04 +
      u0_B0(2)*rhoN_B0(2)*AVG_0_0_LEV_00 + u0_B0(2)*rhoN2_B0(2)*AVG_0_0_LEV_01 + u0_B0(2)*rhou0_B0(2)*AVG_0_0_LEV_02;

   CF_14 = (rhoN_B0(2)*AVG_0_0_LEV_10 + rhoN2_B0(2)*AVG_0_0_LEV_11 + rhoev_B0(2)*AVG_0_0_LEV_13)*u0_B0(2);

    CF_24 = p_B0(2)*AVG_0_0_LEV_22 + p_B0(2)*u0_B0(2)*AVG_0_0_LEV_24 + u0_B0(2)*rhoE_B0(2)*AVG_0_0_LEV_24 +
      u0_B0(2)*rhoN_B0(2)*AVG_0_0_LEV_20 + u0_B0(2)*rhoN2_B0(2)*AVG_0_0_LEV_21 + u0_B0(2)*rhou0_B0(2)*AVG_0_0_LEV_22;

    CF_34 = p_B0(2)*AVG_0_0_LEV_32 + p_B0(2)*u0_B0(2)*AVG_0_0_LEV_34 + u0_B0(2)*rhoE_B0(2)*AVG_0_0_LEV_34 +
      u0_B0(2)*rhoN_B0(2)*AVG_0_0_LEV_30 + u0_B0(2)*rhoN2_B0(2)*AVG_0_0_LEV_31 + u0_B0(2)*rhou0_B0(2)*AVG_0_0_LEV_32;

    CF_44 = p_B0(2)*AVG_0_0_LEV_42 + p_B0(2)*u0_B0(2)*AVG_0_0_LEV_44 + u0_B0(2)*rhoE_B0(2)*AVG_0_0_LEV_44 +
      u0_B0(2)*rhoN_B0(2)*AVG_0_0_LEV_40 + u0_B0(2)*rhoN2_B0(2)*AVG_0_0_LEV_41 + u0_B0(2)*rhou0_B0(2)*AVG_0_0_LEV_42;

    CS_04 = rhoE_B0(2)*AVG_0_0_LEV_04 + rhoN_B0(2)*AVG_0_0_LEV_00 + rhoN2_B0(2)*AVG_0_0_LEV_01 +
      rhou0_B0(2)*AVG_0_0_LEV_02;

   CS_14 = rhoN_B0(2)*AVG_0_0_LEV_10 + rhoN2_B0(2)*AVG_0_0_LEV_11 + rhoev_B0(2)*AVG_0_0_LEV_13;

    CS_24 = rhoE_B0(2)*AVG_0_0_LEV_24 + rhoN_B0(2)*AVG_0_0_LEV_20 + rhoN2_B0(2)*AVG_0_0_LEV_21 +
      rhou0_B0(2)*AVG_0_0_LEV_22;

    CS_34 = rhoE_B0(2)*AVG_0_0_LEV_34 + rhoN_B0(2)*AVG_0_0_LEV_30 + rhoN2_B0(2)*AVG_0_0_LEV_31 +
      rhou0_B0(2)*AVG_0_0_LEV_32;

    CS_44 = rhoE_B0(2)*AVG_0_0_LEV_44 + rhoN_B0(2)*AVG_0_0_LEV_40 + rhoN2_B0(2)*AVG_0_0_LEV_41 +
      rhou0_B0(2)*AVG_0_0_LEV_42;

    CF_05 = p_B0(3)*AVG_0_0_LEV_02 + p_B0(3)*u0_B0(3)*AVG_0_0_LEV_04 + u0_B0(3)*rhoE_B0(3)*AVG_0_0_LEV_04 +
      u0_B0(3)*rhoN_B0(3)*AVG_0_0_LEV_00 + u0_B0(3)*rhoN2_B0(3)*AVG_0_0_LEV_01 + u0_B0(3)*rhou0_B0(3)*AVG_0_0_LEV_02;

   CF_15 = (rhoN_B0(3)*AVG_0_0_LEV_10 + rhoN2_B0(3)*AVG_0_0_LEV_11 + rhoev_B0(3)*AVG_0_0_LEV_13)*u0_B0(3);

    CF_25 = p_B0(3)*AVG_0_0_LEV_22 + p_B0(3)*u0_B0(3)*AVG_0_0_LEV_24 + u0_B0(3)*rhoE_B0(3)*AVG_0_0_LEV_24 +
      u0_B0(3)*rhoN_B0(3)*AVG_0_0_LEV_20 + u0_B0(3)*rhoN2_B0(3)*AVG_0_0_LEV_21 + u0_B0(3)*rhou0_B0(3)*AVG_0_0_LEV_22;

    CF_35 = p_B0(3)*AVG_0_0_LEV_32 + p_B0(3)*u0_B0(3)*AVG_0_0_LEV_34 + u0_B0(3)*rhoE_B0(3)*AVG_0_0_LEV_34 +
      u0_B0(3)*rhoN_B0(3)*AVG_0_0_LEV_30 + u0_B0(3)*rhoN2_B0(3)*AVG_0_0_LEV_31 + u0_B0(3)*rhou0_B0(3)*AVG_0_0_LEV_32;

    CF_45 = p_B0(3)*AVG_0_0_LEV_42 + p_B0(3)*u0_B0(3)*AVG_0_0_LEV_44 + u0_B0(3)*rhoE_B0(3)*AVG_0_0_LEV_44 +
      u0_B0(3)*rhoN_B0(3)*AVG_0_0_LEV_40 + u0_B0(3)*rhoN2_B0(3)*AVG_0_0_LEV_41 + u0_B0(3)*rhou0_B0(3)*AVG_0_0_LEV_42;

    CS_05 = rhoE_B0(3)*AVG_0_0_LEV_04 + rhoN_B0(3)*AVG_0_0_LEV_00 + rhoN2_B0(3)*AVG_0_0_LEV_01 +
      rhou0_B0(3)*AVG_0_0_LEV_02;

   CS_15 = rhoN_B0(3)*AVG_0_0_LEV_10 + rhoN2_B0(3)*AVG_0_0_LEV_11 + rhoev_B0(3)*AVG_0_0_LEV_13;

    CS_25 = rhoE_B0(3)*AVG_0_0_LEV_24 + rhoN_B0(3)*AVG_0_0_LEV_20 + rhoN2_B0(3)*AVG_0_0_LEV_21 +
      rhou0_B0(3)*AVG_0_0_LEV_22;

    CS_35 = rhoE_B0(3)*AVG_0_0_LEV_34 + rhoN_B0(3)*AVG_0_0_LEV_30 + rhoN2_B0(3)*AVG_0_0_LEV_31 +
      rhou0_B0(3)*AVG_0_0_LEV_32;

    CS_45 = rhoE_B0(3)*AVG_0_0_LEV_44 + rhoN_B0(3)*AVG_0_0_LEV_40 + rhoN2_B0(3)*AVG_0_0_LEV_41 +
      rhou0_B0(3)*AVG_0_0_LEV_42;

   max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(1)), fabs(u0_B0(0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

   max_lambda_33 = shock_filter_control*fmax(fabs(-u0_B0(0) + a_B0(0)), fabs(-u0_B0(1) + a_B0(1)));

   max_lambda_44 = shock_filter_control*fmax(fabs(a_B0(0) + u0_B0(0)), fabs(a_B0(1) + u0_B0(1)));

    beta_0 = ((1.0/3.0))*((CS_04*max_lambda_00 + CF_04)*(CS_04*max_lambda_00 + CF_04)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_04*max_lambda_00 + CF_04) + ((25.0/6.0))*(CS_03*max_lambda_00 +
      CF_03))*(CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(CS_02*max_lambda_00 +
      CF_02)*(-(31.0/6.0)*(CS_03*max_lambda_00 + CF_03) + ((5.0/3.0))*(CS_02*max_lambda_00 + CF_02) +
      ((11.0/6.0))*(CS_04*max_lambda_00 + CF_04));

    beta_1 = ((1.0/3.0))*((CS_03*max_lambda_00 + CF_03)*(CS_03*max_lambda_00 + CF_03)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_03*max_lambda_00 + CF_03) + ((13.0/6.0))*(CS_02*max_lambda_00 +
      CF_02))*(CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(CS_01*max_lambda_00 +
      CF_01)*(-(13.0/6.0)*(CS_02*max_lambda_00 + CF_02) + ((2.0/3.0))*(CS_01*max_lambda_00 + CF_01) +
      ((5.0/6.0))*(CS_03*max_lambda_00 + CF_03));

    beta_2 = ((5.0/6.0))*((CS_02*max_lambda_00 + CF_02)*(CS_02*max_lambda_00 + CF_02)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_00*max_lambda_00 + CF_00) + ((11.0/6.0))*(CS_02*max_lambda_00 +
      CF_02))*(CS_00*max_lambda_00 + CF_00) + ((1.0/2.0))*(CS_01*max_lambda_00 +
      CF_01)*(-(31.0/6.0)*(CS_02*max_lambda_00 + CF_02) - (19.0/6.0)*(CS_00*max_lambda_00 + CF_00) +
      ((25.0/6.0))*(CS_01*max_lambda_00 + CF_01));

    alpha_0 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj0 = 0.0909090909090909*fabs(-1.0 + 10*omega_2) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_0);

    Recon_0 = (-(7.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_00*max_lambda_00 + CF_00) +
      ((11.0/12.0))*(CS_02*max_lambda_00 + CF_02))*omega_2 + (-(1.0/12.0)*(CS_01*max_lambda_00 + CF_01) +
      ((1.0/6.0))*(CS_03*max_lambda_00 + CF_03) + ((5.0/12.0))*(CS_02*max_lambda_00 + CF_02))*omega_1 +
      (-(1.0/12.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(CS_03*max_lambda_00 + CF_03))*omega_0 + Recon_0;

    beta_0 = ((1.0/3.0))*((-CS_05*max_lambda_00 + CF_05)*(-CS_05*max_lambda_00 + CF_05)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_05*max_lambda_00 + CF_05) + ((25.0/6.0))*(-CS_04*max_lambda_00 +
      CF_04))*(-CS_04*max_lambda_00 + CF_04) + ((1.0/2.0))*(-CS_03*max_lambda_00 +
      CF_03)*(-(31.0/6.0)*(-CS_04*max_lambda_00 + CF_04) + ((5.0/3.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((11.0/6.0))*(-CS_05*max_lambda_00 + CF_05));

    beta_1 = ((1.0/3.0))*((-CS_04*max_lambda_00 + CF_04)*(-CS_04*max_lambda_00 + CF_04)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_04*max_lambda_00 + CF_04) + ((13.0/6.0))*(-CS_03*max_lambda_00 +
      CF_03))*(-CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(-CS_02*max_lambda_00 +
      CF_02)*(-(13.0/6.0)*(-CS_03*max_lambda_00 + CF_03) + ((2.0/3.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/6.0))*(-CS_04*max_lambda_00 + CF_04));

    beta_2 = ((5.0/6.0))*((-CS_03*max_lambda_00 + CF_03)*(-CS_03*max_lambda_00 + CF_03)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_03*max_lambda_00 + CF_03) + ((25.0/6.0))*(-CS_02*max_lambda_00 +
      CF_02))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01)*(-(19.0/6.0)*(-CS_02*max_lambda_00 + CF_02) + ((2.0/3.0))*(-CS_01*max_lambda_00 + CF_01) +
      ((11.0/6.0))*(-CS_03*max_lambda_00 + CF_03));

    alpha_0 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj0 = fmax(rj0, 0.0909090909090909*fabs(-1.0 + 10*omega_0) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_2));

    Recon_0 = (-(7.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_05*max_lambda_00 + CF_05) +
      ((11.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*omega_0 + (-(1.0/12.0)*(-CS_01*max_lambda_00 + CF_01) +
      ((1.0/6.0))*(-CS_03*max_lambda_00 + CF_03) + ((5.0/12.0))*(-CS_02*max_lambda_00 + CF_02))*omega_2 +
      (-(1.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*omega_1 + Recon_0;

    beta_0 = ((1.0/3.0))*((CS_14*max_lambda_11 + CF_14)*(CS_14*max_lambda_11 + CF_14)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_14*max_lambda_11 + CF_14) + ((25.0/6.0))*(CS_13*max_lambda_11 +
      CF_13))*(CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(CS_12*max_lambda_11 +
      CF_12)*(-(31.0/6.0)*(CS_13*max_lambda_11 + CF_13) + ((5.0/3.0))*(CS_12*max_lambda_11 + CF_12) +
      ((11.0/6.0))*(CS_14*max_lambda_11 + CF_14));

    beta_1 = ((1.0/3.0))*((CS_13*max_lambda_11 + CF_13)*(CS_13*max_lambda_11 + CF_13)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_13*max_lambda_11 + CF_13) + ((13.0/6.0))*(CS_12*max_lambda_11 +
      CF_12))*(CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(CS_11*max_lambda_11 +
      CF_11)*(-(13.0/6.0)*(CS_12*max_lambda_11 + CF_12) + ((2.0/3.0))*(CS_11*max_lambda_11 + CF_11) +
      ((5.0/6.0))*(CS_13*max_lambda_11 + CF_13));

    beta_2 = ((5.0/6.0))*((CS_12*max_lambda_11 + CF_12)*(CS_12*max_lambda_11 + CF_12)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_10*max_lambda_11 + CF_10) + ((11.0/6.0))*(CS_12*max_lambda_11 +
      CF_12))*(CS_10*max_lambda_11 + CF_10) + ((1.0/2.0))*(CS_11*max_lambda_11 +
      CF_11)*(-(31.0/6.0)*(CS_12*max_lambda_11 + CF_12) - (19.0/6.0)*(CS_10*max_lambda_11 + CF_10) +
      ((25.0/6.0))*(CS_11*max_lambda_11 + CF_11));

    alpha_0 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj1 = 0.0909090909090909*fabs(-1.0 + 10*omega_2) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_0);

    Recon_1 = (-(7.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_10*max_lambda_11 + CF_10) +
      ((11.0/12.0))*(CS_12*max_lambda_11 + CF_12))*omega_2 + (-(1.0/12.0)*(CS_11*max_lambda_11 + CF_11) +
      ((1.0/6.0))*(CS_13*max_lambda_11 + CF_13) + ((5.0/12.0))*(CS_12*max_lambda_11 + CF_12))*omega_1 +
      (-(1.0/12.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(CS_13*max_lambda_11 + CF_13))*omega_0 + Recon_1;

    beta_0 = ((1.0/3.0))*((-CS_15*max_lambda_11 + CF_15)*(-CS_15*max_lambda_11 + CF_15)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_15*max_lambda_11 + CF_15) + ((25.0/6.0))*(-CS_14*max_lambda_11 +
      CF_14))*(-CS_14*max_lambda_11 + CF_14) + ((1.0/2.0))*(-CS_13*max_lambda_11 +
      CF_13)*(-(31.0/6.0)*(-CS_14*max_lambda_11 + CF_14) + ((5.0/3.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((11.0/6.0))*(-CS_15*max_lambda_11 + CF_15));

    beta_1 = ((1.0/3.0))*((-CS_14*max_lambda_11 + CF_14)*(-CS_14*max_lambda_11 + CF_14)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_14*max_lambda_11 + CF_14) + ((13.0/6.0))*(-CS_13*max_lambda_11 +
      CF_13))*(-CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(-CS_12*max_lambda_11 +
      CF_12)*(-(13.0/6.0)*(-CS_13*max_lambda_11 + CF_13) + ((2.0/3.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/6.0))*(-CS_14*max_lambda_11 + CF_14));

    beta_2 = ((5.0/6.0))*((-CS_13*max_lambda_11 + CF_13)*(-CS_13*max_lambda_11 + CF_13)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_13*max_lambda_11 + CF_13) + ((25.0/6.0))*(-CS_12*max_lambda_11 +
      CF_12))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11)*(-(19.0/6.0)*(-CS_12*max_lambda_11 + CF_12) + ((2.0/3.0))*(-CS_11*max_lambda_11 + CF_11) +
      ((11.0/6.0))*(-CS_13*max_lambda_11 + CF_13));

    alpha_0 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj1 = fmax(rj1, 0.0909090909090909*fabs(-1.0 + 10*omega_0) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_2));

    Recon_1 = (-(7.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_15*max_lambda_11 + CF_15) +
      ((11.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*omega_0 + (-(1.0/12.0)*(-CS_11*max_lambda_11 + CF_11) +
      ((1.0/6.0))*(-CS_13*max_lambda_11 + CF_13) + ((5.0/12.0))*(-CS_12*max_lambda_11 + CF_12))*omega_2 +
      (-(1.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*omega_1 + Recon_1;

    beta_0 = ((1.0/3.0))*((CS_24*max_lambda_22 + CF_24)*(CS_24*max_lambda_22 + CF_24)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_24*max_lambda_22 + CF_24) + ((25.0/6.0))*(CS_23*max_lambda_22 +
      CF_23))*(CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(CS_22*max_lambda_22 +
      CF_22)*(-(31.0/6.0)*(CS_23*max_lambda_22 + CF_23) + ((5.0/3.0))*(CS_22*max_lambda_22 + CF_22) +
      ((11.0/6.0))*(CS_24*max_lambda_22 + CF_24));

    beta_1 = ((1.0/3.0))*((CS_23*max_lambda_22 + CF_23)*(CS_23*max_lambda_22 + CF_23)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_23*max_lambda_22 + CF_23) + ((13.0/6.0))*(CS_22*max_lambda_22 +
      CF_22))*(CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(CS_21*max_lambda_22 +
      CF_21)*(-(13.0/6.0)*(CS_22*max_lambda_22 + CF_22) + ((2.0/3.0))*(CS_21*max_lambda_22 + CF_21) +
      ((5.0/6.0))*(CS_23*max_lambda_22 + CF_23));

    beta_2 = ((5.0/6.0))*((CS_22*max_lambda_22 + CF_22)*(CS_22*max_lambda_22 + CF_22)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_20*max_lambda_22 + CF_20) + ((11.0/6.0))*(CS_22*max_lambda_22 +
      CF_22))*(CS_20*max_lambda_22 + CF_20) + ((1.0/2.0))*(CS_21*max_lambda_22 +
      CF_21)*(-(31.0/6.0)*(CS_22*max_lambda_22 + CF_22) - (19.0/6.0)*(CS_20*max_lambda_22 + CF_20) +
      ((25.0/6.0))*(CS_21*max_lambda_22 + CF_21));

    alpha_0 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj2 = 0.0909090909090909*fabs(-1.0 + 10*omega_2) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_0);

    Recon_2 = (-(7.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_20*max_lambda_22 + CF_20) +
      ((11.0/12.0))*(CS_22*max_lambda_22 + CF_22))*omega_2 + (-(1.0/12.0)*(CS_21*max_lambda_22 + CF_21) +
      ((1.0/6.0))*(CS_23*max_lambda_22 + CF_23) + ((5.0/12.0))*(CS_22*max_lambda_22 + CF_22))*omega_1 +
      (-(1.0/12.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(CS_23*max_lambda_22 + CF_23))*omega_0 + Recon_2;

    beta_0 = ((1.0/3.0))*((-CS_25*max_lambda_22 + CF_25)*(-CS_25*max_lambda_22 + CF_25)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_25*max_lambda_22 + CF_25) + ((25.0/6.0))*(-CS_24*max_lambda_22 +
      CF_24))*(-CS_24*max_lambda_22 + CF_24) + ((1.0/2.0))*(-CS_23*max_lambda_22 +
      CF_23)*(-(31.0/6.0)*(-CS_24*max_lambda_22 + CF_24) + ((5.0/3.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((11.0/6.0))*(-CS_25*max_lambda_22 + CF_25));

    beta_1 = ((1.0/3.0))*((-CS_24*max_lambda_22 + CF_24)*(-CS_24*max_lambda_22 + CF_24)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_24*max_lambda_22 + CF_24) + ((13.0/6.0))*(-CS_23*max_lambda_22 +
      CF_23))*(-CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(-CS_22*max_lambda_22 +
      CF_22)*(-(13.0/6.0)*(-CS_23*max_lambda_22 + CF_23) + ((2.0/3.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/6.0))*(-CS_24*max_lambda_22 + CF_24));

    beta_2 = ((5.0/6.0))*((-CS_23*max_lambda_22 + CF_23)*(-CS_23*max_lambda_22 + CF_23)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_23*max_lambda_22 + CF_23) + ((25.0/6.0))*(-CS_22*max_lambda_22 +
      CF_22))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21)*(-(19.0/6.0)*(-CS_22*max_lambda_22 + CF_22) + ((2.0/3.0))*(-CS_21*max_lambda_22 + CF_21) +
      ((11.0/6.0))*(-CS_23*max_lambda_22 + CF_23));

    alpha_0 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj2 = fmax(rj2, 0.0909090909090909*fabs(-1.0 + 10*omega_0) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_2));

    Recon_2 = (-(7.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_25*max_lambda_22 + CF_25) +
      ((11.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*omega_0 + (-(1.0/12.0)*(-CS_21*max_lambda_22 + CF_21) +
      ((1.0/6.0))*(-CS_23*max_lambda_22 + CF_23) + ((5.0/12.0))*(-CS_22*max_lambda_22 + CF_22))*omega_2 +
      (-(1.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*omega_1 + Recon_2;

    beta_0 = ((1.0/3.0))*((CS_34*max_lambda_33 + CF_34)*(CS_34*max_lambda_33 + CF_34)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_34*max_lambda_33 + CF_34) + ((25.0/6.0))*(CS_33*max_lambda_33 +
      CF_33))*(CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(CS_32*max_lambda_33 +
      CF_32)*(-(31.0/6.0)*(CS_33*max_lambda_33 + CF_33) + ((5.0/3.0))*(CS_32*max_lambda_33 + CF_32) +
      ((11.0/6.0))*(CS_34*max_lambda_33 + CF_34));

    beta_1 = ((1.0/3.0))*((CS_33*max_lambda_33 + CF_33)*(CS_33*max_lambda_33 + CF_33)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_33*max_lambda_33 + CF_33) + ((13.0/6.0))*(CS_32*max_lambda_33 +
      CF_32))*(CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(CS_31*max_lambda_33 +
      CF_31)*(-(13.0/6.0)*(CS_32*max_lambda_33 + CF_32) + ((2.0/3.0))*(CS_31*max_lambda_33 + CF_31) +
      ((5.0/6.0))*(CS_33*max_lambda_33 + CF_33));

    beta_2 = ((5.0/6.0))*((CS_32*max_lambda_33 + CF_32)*(CS_32*max_lambda_33 + CF_32)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_30*max_lambda_33 + CF_30) + ((11.0/6.0))*(CS_32*max_lambda_33 +
      CF_32))*(CS_30*max_lambda_33 + CF_30) + ((1.0/2.0))*(CS_31*max_lambda_33 +
      CF_31)*(-(31.0/6.0)*(CS_32*max_lambda_33 + CF_32) - (19.0/6.0)*(CS_30*max_lambda_33 + CF_30) +
      ((25.0/6.0))*(CS_31*max_lambda_33 + CF_31));

    alpha_0 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj3 = 0.0909090909090909*fabs(-1.0 + 10*omega_2) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_0);

    Recon_3 = (-(7.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_30*max_lambda_33 + CF_30) +
      ((11.0/12.0))*(CS_32*max_lambda_33 + CF_32))*omega_2 + (-(1.0/12.0)*(CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(CS_32*max_lambda_33 + CF_32))*omega_1 +
      (-(1.0/12.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(CS_33*max_lambda_33 + CF_33))*omega_0 + Recon_3;

    beta_0 = ((1.0/3.0))*((-CS_35*max_lambda_33 + CF_35)*(-CS_35*max_lambda_33 + CF_35)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_35*max_lambda_33 + CF_35) + ((25.0/6.0))*(-CS_34*max_lambda_33 +
      CF_34))*(-CS_34*max_lambda_33 + CF_34) + ((1.0/2.0))*(-CS_33*max_lambda_33 +
      CF_33)*(-(31.0/6.0)*(-CS_34*max_lambda_33 + CF_34) + ((5.0/3.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((11.0/6.0))*(-CS_35*max_lambda_33 + CF_35));

    beta_1 = ((1.0/3.0))*((-CS_34*max_lambda_33 + CF_34)*(-CS_34*max_lambda_33 + CF_34)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_34*max_lambda_33 + CF_34) + ((13.0/6.0))*(-CS_33*max_lambda_33 +
      CF_33))*(-CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(-CS_32*max_lambda_33 +
      CF_32)*(-(13.0/6.0)*(-CS_33*max_lambda_33 + CF_33) + ((2.0/3.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/6.0))*(-CS_34*max_lambda_33 + CF_34));

    beta_2 = ((5.0/6.0))*((-CS_33*max_lambda_33 + CF_33)*(-CS_33*max_lambda_33 + CF_33)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_33*max_lambda_33 + CF_33) + ((25.0/6.0))*(-CS_32*max_lambda_33 +
      CF_32))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31)*(-(19.0/6.0)*(-CS_32*max_lambda_33 + CF_32) + ((2.0/3.0))*(-CS_31*max_lambda_33 + CF_31) +
      ((11.0/6.0))*(-CS_33*max_lambda_33 + CF_33));

    alpha_0 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj3 = fmax(rj3, 0.0909090909090909*fabs(-1.0 + 10*omega_0) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_2));

    Recon_3 = (-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_0 + (-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*omega_2 +
      (-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_1 + Recon_3;

    beta_0 = ((1.0/3.0))*((CS_44*max_lambda_44 + CF_44)*(CS_44*max_lambda_44 + CF_44)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_44*max_lambda_44 + CF_44) + ((25.0/6.0))*(CS_43*max_lambda_44 +
      CF_43))*(CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(CS_42*max_lambda_44 +
      CF_42)*(-(31.0/6.0)*(CS_43*max_lambda_44 + CF_43) + ((5.0/3.0))*(CS_42*max_lambda_44 + CF_42) +
      ((11.0/6.0))*(CS_44*max_lambda_44 + CF_44));

    beta_1 = ((1.0/3.0))*((CS_43*max_lambda_44 + CF_43)*(CS_43*max_lambda_44 + CF_43)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_43*max_lambda_44 + CF_43) + ((13.0/6.0))*(CS_42*max_lambda_44 +
      CF_42))*(CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(CS_41*max_lambda_44 +
      CF_41)*(-(13.0/6.0)*(CS_42*max_lambda_44 + CF_42) + ((2.0/3.0))*(CS_41*max_lambda_44 + CF_41) +
      ((5.0/6.0))*(CS_43*max_lambda_44 + CF_43));

    beta_2 = ((5.0/6.0))*((CS_42*max_lambda_44 + CF_42)*(CS_42*max_lambda_44 + CF_42)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_40*max_lambda_44 + CF_40) + ((11.0/6.0))*(CS_42*max_lambda_44 +
      CF_42))*(CS_40*max_lambda_44 + CF_40) + ((1.0/2.0))*(CS_41*max_lambda_44 +
      CF_41)*(-(31.0/6.0)*(CS_42*max_lambda_44 + CF_42) - (19.0/6.0)*(CS_40*max_lambda_44 + CF_40) +
      ((25.0/6.0))*(CS_41*max_lambda_44 + CF_41));

    alpha_0 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj4 = 0.0909090909090909*fabs(-1.0 + 10*omega_2) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_0);

    Recon_4 = (-(7.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_40*max_lambda_44 + CF_40) +
      ((11.0/12.0))*(CS_42*max_lambda_44 + CF_42))*omega_2 + (-(1.0/12.0)*(CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(CS_42*max_lambda_44 + CF_42))*omega_1 +
      (-(1.0/12.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(CS_43*max_lambda_44 + CF_43))*omega_0 + Recon_4;

    beta_0 = ((1.0/3.0))*((-CS_45*max_lambda_44 + CF_45)*(-CS_45*max_lambda_44 + CF_45)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_45*max_lambda_44 + CF_45) + ((25.0/6.0))*(-CS_44*max_lambda_44 +
      CF_44))*(-CS_44*max_lambda_44 + CF_44) + ((1.0/2.0))*(-CS_43*max_lambda_44 +
      CF_43)*(-(31.0/6.0)*(-CS_44*max_lambda_44 + CF_44) + ((5.0/3.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((11.0/6.0))*(-CS_45*max_lambda_44 + CF_45));

    beta_1 = ((1.0/3.0))*((-CS_44*max_lambda_44 + CF_44)*(-CS_44*max_lambda_44 + CF_44)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_44*max_lambda_44 + CF_44) + ((13.0/6.0))*(-CS_43*max_lambda_44 +
      CF_43))*(-CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(-CS_42*max_lambda_44 +
      CF_42)*(-(13.0/6.0)*(-CS_43*max_lambda_44 + CF_43) + ((2.0/3.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/6.0))*(-CS_44*max_lambda_44 + CF_44));

    beta_2 = ((5.0/6.0))*((-CS_43*max_lambda_44 + CF_43)*(-CS_43*max_lambda_44 + CF_43)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_43*max_lambda_44 + CF_43) + ((25.0/6.0))*(-CS_42*max_lambda_44 +
      CF_42))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41)*(-(19.0/6.0)*(-CS_42*max_lambda_44 + CF_42) + ((2.0/3.0))*(-CS_41*max_lambda_44 + CF_41) +
      ((11.0/6.0))*(-CS_43*max_lambda_44 + CF_43));

    alpha_0 = 0.1 + ((1.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_0)*(1.0e-40 +
      beta_0));

   alpha_1 = 0.6 + ((3.0/5.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(fabs(-beta_2 + beta_0)*fabs(-beta_2 + beta_0))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    rj4 = fmax(rj4, 0.0909090909090909*fabs(-1.0 + 10*omega_0) + 0.0909090909090909*fabs(-1.0 + ((5.0/3.0))*omega_1) +
      0.0909090909090909*fabs(-1.0 + ((10.0/3.0))*omega_2));

    Recon_4 = (-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_0 + (-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*omega_2 +
      (-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_1 + Recon_4;

   Recon_0 = (-(1.0/60.0)*(-8*CF_01 - 8*CF_04 + 37*CF_02 + 37*CF_03 + CF_00 + CF_05) + Recon_0)*rj0;

   Recon_1 = (-(1.0/60.0)*(-8*CF_11 - 8*CF_14 + 37*CF_12 + 37*CF_13 + CF_10 + CF_15) + Recon_1)*rj1;

   Recon_2 = (-(1.0/60.0)*(-8*CF_21 - 8*CF_24 + 37*CF_22 + 37*CF_23 + CF_20 + CF_25) + Recon_2)*rj2;

   Recon_3 = (-(1.0/60.0)*(-8*CF_31 - 8*CF_34 + 37*CF_32 + 37*CF_33 + CF_30 + CF_35) + Recon_3)*rj3;

   Recon_4 = (-(1.0/60.0)*(-8*CF_41 - 8*CF_44 + 37*CF_42 + 37*CF_43 + CF_40 + CF_45) + Recon_4)*rj4;

    wk0_B0(0) = -1.0*Recon_0 + (-2.0*AVG_0_rhoN - 2.0*AVG_0_rhoN2)*Recon_2*inv_AVG_a +
      2.0*invgamma_m1*AVG_0_rhoN2*Recon_3*inv_AVG_a + 2.0*invgamma_m1*AVG_0_rhoN2*Recon_4*inv_AVG_a;

    wk1_B0(0) = 1.0*Recon_0 + 2.0*invgamma_m1*AVG_0_rhoN*Recon_3*inv_AVG_a +
      2.0*invgamma_m1*AVG_0_rhoN*Recon_4*inv_AVG_a;

    wk2_B0(0) = -2.0*(AVG_0_rhoN + AVG_0_rhoN2)*AVG_0_u*Recon_2*inv_AVG_a + 2.0*(AVG_0_a + AVG_0_u)*(AVG_0_rhoN +
      AVG_0_rhoN2)*invgamma_m1*Recon_4*inv_AVG_a - 2.0*(-AVG_0_u + AVG_0_a)*(AVG_0_rhoN +
      AVG_0_rhoN2)*invgamma_m1*Recon_3*inv_AVG_a;

    wk3_B0(0) = (1.0*AVG_0_rhoN + 1.0*AVG_0_rhoN2)*Recon_1 - 2.0*(AVG_0_rhoN + AVG_0_rhoN2)*AVG_0_ev*Recon_2*inv_AVG_a +
      2.0*(AVG_0_rhoN + AVG_0_rhoN2)*invgamma_m1*AVG_0_ev*Recon_3*inv_AVG_a + 2.0*(AVG_0_rhoN +
      AVG_0_rhoN2)*invgamma_m1*AVG_0_ev*Recon_4*inv_AVG_a;

    wk4_B0(0) = -1.0*(AVG_0_u*AVG_0_u)*(AVG_0_rhoN + AVG_0_rhoN2)*Recon_2*inv_AVG_a + (AVG_0_rhoN +
      AVG_0_rhoN2)*(2.0*(AVG_0_a*AVG_0_a) + 2.0*(AVG_0_a*AVG_0_a)*gamma_m1 + 1.0*(AVG_0_u*AVG_0_u)*gama*gamma_m1 +
      2.0*gama*gamma_m1*AVG_0_a*AVG_0_u)*invgama*inv2gamma_m1*Recon_4*inv_AVG_a + (AVG_0_rhoN +
      AVG_0_rhoN2)*(2.0*(AVG_0_a*AVG_0_a) + 2.0*(AVG_0_a*AVG_0_a)*gamma_m1 + 1.0*(AVG_0_u*AVG_0_u)*gama*gamma_m1 -
      2.0*gama*gamma_m1*AVG_0_a*AVG_0_u)*invgama*inv2gamma_m1*Recon_3*inv_AVG_a;

}

 void opensbliblock00Kernel005(const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const
ACC<double> &wk3_B0, const ACC<double> &wk4_B0, ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoev_B0, ACC<double> &rhou0_B0, const int *idx)
{
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   rhoN_B0(0) = -(-wk0_B0(-1) + wk0_B0(0))*dt*inv_rfact0_block0 + rhoN_B0(0);

   rhoN2_B0(0) = -(-wk1_B0(-1) + wk1_B0(0))*dt*inv_rfact0_block0 + rhoN2_B0(0);

   rhou0_B0(0) = -(-wk2_B0(-1) + wk2_B0(0))*dt*inv_rfact0_block0 + rhou0_B0(0);

   rhoev_B0(0) = -(-wk3_B0(-1) + wk3_B0(0))*dt*inv_rfact0_block0 + rhoev_B0(0);

   rhoE_B0(0) = -(-wk4_B0(-1) + wk4_B0(0))*dt*inv_rfact0_block0 + rhoE_B0(0);

}

#endif
