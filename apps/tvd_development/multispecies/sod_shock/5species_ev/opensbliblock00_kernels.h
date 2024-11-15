#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel028(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0, ACC<double> &x0_B0, const int
*idx)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double cNO = 0.0;
   double cO = 0.0;
   double cO2 = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   x0_B0(0) = Delta0block0*idx[0];

   u0 = 0.0;

   p0 = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.051282
));

   T0 = ((x0_B0(0) < 0.5) ? (
   1.0
)
: (
   0.033333
));

   cN = ((x0_B0(0) < 0.5) ? (
   0.6984386275169115
)
: (
   0.0
));

   cN2 = ((x0_B0(0) < 0.5) ? (
   0.06607169490642878
)
: (
   0.7653
));

   cO = ((x0_B0(0) < 0.5) ? (
   0.2342744649144739
)
: (
   0.0
));

   cO2 = ((x0_B0(0) < 0.5) ? (
   2.663297558683734e-5
)
: (
   0.2347
));

   cNO = ((x0_B0(0) < 0.5) ? (
   0.001188579686599012
)
: (
   6.178621075754453e-19
));

   r = p0/(Rhat*T0*(cN/MN + cN2/MN2 + cNO/MNO + cO/MO + cO2/MO2));

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhoO_B0(0) = cO*r;

   rhoO2_B0(0) = cO2*r;

   rhoNO_B0(0) = cNO*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evO2 = Rhat*thetavO2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evNO = Rhat*thetavNO/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = (cN2*evN2*r + cNO*evNO*r + cO2*evO2*r)*(cN*r + cN2*r + cNO*r + cO*r + cO2*r)/(cN2*r + cNO*r + cO2*r);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*r/MN + 0.5*cN2*r/MN2 + 0.5*cNO*r/MNO + 0.5*cO*r/MO + 0.5*cO2*r/MO2) + cN2*evN2*r +
      cNO*evNO*r + cO2*evO2*r + p0*(1.5*cN*r/MN + 1.5*cO*r/MO + 2.5*cN2*r/MN2 + 2.5*cNO*r/MNO + 2.5*cO2*r/MO2)/(cN*r/MN
      + cN2*r/MN2 + cNO*r/MNO + cO*r/MO + cO2*r/MO2);

}

 void opensbliblock00Kernel026(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double cNO = 0.0;
   double cO = 0.0;
   double cO2 = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   u0 = 0.0;

   p0 = 1.00000000000000;

   T0 = 1.00000000000000;

   cN = 0.698438627516912;

   cN2 = 0.0660716949064288;

   cO = 0.234274464914474;

   cO2 = 2.66329755868373e-5;

   cNO = 0.00118857968659901;

    r = 1.0*invRhat/(0.234274464914474*invMO + 0.0660716949064288*invMN2 + 0.00118857968659901*invMNO +
      2.66329755868373e-5*invMO2 + 0.698438627516912*invMN);

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhoO_B0(0) = cO*r;

   rhoO2_B0(0) = cO2*r;

   rhoNO_B0(0) = cNO*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evO2 = Rhat*thetavO2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evNO = Rhat*thetavNO/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = (cN2*evN2*r + cNO*evNO*r + cO2*evO2*r)*(cN*r + cN2*r + cNO*r + cO*r + cO2*r)/(cN2*r + cNO*r + cO2*r);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*r/MN + 0.5*cN2*r/MN2 + 0.5*cNO*r/MNO + 0.5*cO*r/MO + 0.5*cO2*r/MO2) + cN2*evN2*r +
      cNO*evNO*r + cO2*evO2*r + p0*(1.5*cN*r/MN + 1.5*cO*r/MO + 2.5*cN2*r/MN2 + 2.5*cNO*r/MNO + 2.5*cO2*r/MO2)/(cN*r/MN
      + cN2*r/MN2 + cNO*r/MNO + cO*r/MO + cO2*r/MO2);

}

 void opensbliblock00Kernel027(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0)
{
   double T0 = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double cNO = 0.0;
   double cO = 0.0;
   double cO2 = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double r = 0.0;
   double u0 = 0.0;
   u0 = 0.0;

   p0 = 0.0512820000000000;

   T0 = 0.0333330000000000;

   cN = 0.0;

   cN2 = 0.765300000000000;

   cO = 0.0;

   cO2 = 0.234700000000000;

   cNO = 6.17862107575445e-19;

   r = 0.051282*invRhat/(2.05951976318123e-20*invMNO + 0.0255097449*invMN2 + 0.0078232551*invMO2);

   rhoN_B0(0) = cN*r;

   rhoN2_B0(0) = cN2*r;

   rhoO_B0(0) = cO*r;

   rhoO2_B0(0) = cO2*r;

   rhoNO_B0(0) = cNO*r;

   rhou0_B0(0) = r*u0;

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evO2 = Rhat*thetavO2/(MN2*(-1.0 + exp(thetavN2/T0)));

   evNO = Rhat*thetavNO/(MN2*(-1.0 + exp(thetavN2/T0)));

   rhoev_B0(0) = (cN2*evN2*r + cNO*evNO*r + cO2*evO2*r)*(cN*r + cN2*r + cNO*r + cO*r + cO2*r)/(cN2*r + cNO*r + cO2*r);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*r/MN + 0.5*cN2*r/MN2 + 0.5*cNO*r/MNO + 0.5*cO*r/MO + 0.5*cO2*r/MO2) + cN2*evN2*r +
      cNO*evNO*r + cO2*evO2*r + p0*(1.5*cN*r/MN + 1.5*cO*r/MO + 2.5*cN2*r/MN2 + 2.5*cNO*r/MNO + 2.5*cO2*r/MO2)/(cN*r/MN
      + cN2*r/MN2 + cNO*r/MNO + cO*r/MO + cO2*r/MO2);

}

 void opensbliblock00Kernel008(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0) = rhou0_B0(0)/(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) + rhoO2_B0(0));

}

 void opensbliblock00Kernel011(const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0,
const ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhoev_B0, const
ACC<double> &u0_B0, ACC<double> &T_B0)
{
    T_B0(0) = (-2*rhoev_B0(0) - 0.5*(u0_B0(0)*u0_B0(0))*(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) +
      rhoO2_B0(0)) + rhoE_B0(0))*invRhat/(1.5*invMN*rhoN_B0(0) + 1.5*invMO*rhoO_B0(0) + 2.5*invMN2*rhoN2_B0(0) +
      2.5*invMNO*rhoNO_B0(0) + 2.5*invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel010(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &p_B0)
{
    p_B0(0) = (invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0))*Rhat*T_B0(0);

}

void opensbliblock00Kernel020(const ACC<double> &T_B0, ACC<double> &eveqNO_B0)
{
   eveqNO_B0(0) = Rhat*invMNO*thetavNO/(-1.0 + exp(thetavNO/T_B0(0)));

}

 void opensbliblock00Kernel021(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauO2_B0)
{
    ptauO2_B0(0) = (3.03420950194169e-10*invMO*rhoO_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.14180928034488e-10*invMNO*rhoNO_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      3.27838502246041e-10*invMN*rhoN_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.08725734681668e-10*invMO2*rhoO2_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.22632207449373e-10*invMN2*rhoN2_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel022(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauN2_B0)
{
    ptauN2_B0(0) = (3.14066959164866e-11*invMN*rhoN_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.69627729418406e-11*invMN2*rhoN2_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      2.75229751516092e-11*invMO*rhoO_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.51958310305852e-11*invMO2*rhoO2_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.58793752948278e-11*invMNO*rhoNO_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

}

void opensbliblock00Kernel023(const ACC<double> &T_B0, ACC<double> &eveqO2_B0)
{
   eveqO2_B0(0) = Rhat*invMO2*thetavO2/(-1.0 + exp(thetavO2/T_B0(0)));

}

 void opensbliblock00Kernel024(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauNO_B0)
{
    ptauNO_B0(0) = (6.69952094392908e-11*invMO2*rhoO2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.07234831431176e-10*invMO*rhoO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.18607665290378e-10*invMN*rhoN_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.04583049652578e-11*invMNO*rhoNO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.28659255329465e-11*invMN2*rhoN2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

}

void opensbliblock00Kernel025(const ACC<double> &T_B0, ACC<double> &eveqN2_B0)
{
   eveqN2_B0(0) = Rhat*invMN2*thetavN2/(-1.0 + exp(thetavN2/T_B0(0)));

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

 void opensbliblock00Kernel019(const ACC<double> &T_B0, const ACC<double> &evN2_B0, const ACC<double> &evNO_B0, const
ACC<double> &evO2_B0, const ACC<double> &eveqN2_B0, const ACC<double> &eveqNO_B0, const ACC<double> &eveqO2_B0, const
ACC<double> &p_B0, const ACC<double> &ptauN2_B0, const ACC<double> &ptauNO_B0, const ACC<double> &ptauO2_B0, const
ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0, const
ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhoev_B0, const ACC<double> &rhou0_B0, const
ACC<double> &u0_B0, const ACC<double> &wdotN2_B0, const ACC<double> &wdotNO_B0, const ACC<double> &wdotN_B0, const
ACC<double> &wdotO2_B0, const ACC<double> &wdotO_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double>
&Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0, ACC<double> &Residual5_B0, ACC<double>
&Residual6_B0, ACC<double> &Residual7_B0, const int *idx)
{
   double d1_prhoEu0_dx = 0.0;
   double d1_prhou0u0_dx = 0.0;
   double d1_rhoN2u0_dx = 0.0;
   double d1_rhoNOu0_dx = 0.0;
   double d1_rhoNu0_dx = 0.0;
   double d1_rhoO2u0_dx = 0.0;
   double d1_rhoOu0_dx = 0.0;
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

       d1_rhoNOu0_dx = (3.0*u0_B0(1)*rhoNO_B0(1) + 0.333333333333333*u0_B0(3)*rhoNO_B0(3) - 1.5*u0_B0(2)*rhoNO_B0(2) -
            1.83333333333333*u0_B0(0)*rhoNO_B0(0))*invDelta0block0;

       d1_rhoNu0_dx = (3.0*u0_B0(1)*rhoN_B0(1) + 0.333333333333333*u0_B0(3)*rhoN_B0(3) - 1.5*u0_B0(2)*rhoN_B0(2) -
            1.83333333333333*u0_B0(0)*rhoN_B0(0))*invDelta0block0;

       d1_rhoO2u0_dx = (3.0*u0_B0(1)*rhoO2_B0(1) + 0.333333333333333*u0_B0(3)*rhoO2_B0(3) - 1.5*u0_B0(2)*rhoO2_B0(2) -
            1.83333333333333*u0_B0(0)*rhoO2_B0(0))*invDelta0block0;

       d1_rhoOu0_dx = (3.0*u0_B0(1)*rhoO_B0(1) + 0.333333333333333*u0_B0(3)*rhoO_B0(3) - 1.5*u0_B0(2)*rhoO_B0(2) -
            1.83333333333333*u0_B0(0)*rhoO_B0(0))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.0394168524399447*u0_B0(2)*rhoNO_B0(2) + 0.00571369039775442*u0_B0(4)*rhoNO_B0(4) +
            0.719443173328855*u0_B0(1)*rhoNO_B0(1) - 0.322484932882161*u0_B0(0)*rhoNO_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoNO_B0(3) - 0.376283677513354*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.0394168524399447*u0_B0(2)*rhoN_B0(2) + 0.00571369039775442*u0_B0(4)*rhoN_B0(4) +
            0.719443173328855*u0_B0(1)*rhoN_B0(1) - 0.322484932882161*u0_B0(0)*rhoN_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoN_B0(3) - 0.376283677513354*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.0394168524399447*u0_B0(2)*rhoO2_B0(2) + 0.00571369039775442*u0_B0(4)*rhoO2_B0(4) +
            0.719443173328855*u0_B0(1)*rhoO2_B0(1) - 0.322484932882161*u0_B0(0)*rhoO2_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoO2_B0(3) - 0.376283677513354*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.0394168524399447*u0_B0(2)*rhoO_B0(2) + 0.00571369039775442*u0_B0(4)*rhoO_B0(4) +
            0.719443173328855*u0_B0(1)*rhoO_B0(1) - 0.322484932882161*u0_B0(0)*rhoO_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoO_B0(3) - 0.376283677513354*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.197184333887745*u0_B0(0)*rhoNO_B0(0) + 0.521455851089587*u0_B0(1)*rhoNO_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoNO_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoNO_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoNO_B0(2) - 0.791245592765872*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.197184333887745*u0_B0(0)*rhoN_B0(0) + 0.521455851089587*u0_B0(1)*rhoN_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoN_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoN_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoN_B0(2) - 0.791245592765872*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.197184333887745*u0_B0(0)*rhoO2_B0(0) + 0.521455851089587*u0_B0(1)*rhoO2_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoO2_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoO2_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoO2_B0(2) - 0.791245592765872*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.197184333887745*u0_B0(0)*rhoO_B0(0) + 0.521455851089587*u0_B0(1)*rhoO_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoO_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoO_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoO_B0(2) - 0.791245592765872*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.0451033223343881*u0_B0(0)*rhoNO_B0(0) + 0.652141084861241*u0_B0(1)*rhoNO_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoNO_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoNO_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoNO_B0(-1) - 0.082033432844602*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.0451033223343881*u0_B0(0)*rhoN_B0(0) + 0.652141084861241*u0_B0(1)*rhoN_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoN_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoN_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoN_B0(-1) - 0.082033432844602*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.0451033223343881*u0_B0(0)*rhoO2_B0(0) + 0.652141084861241*u0_B0(1)*rhoO2_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoO2_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoO2_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoO2_B0(-1) - 0.082033432844602*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.0451033223343881*u0_B0(0)*rhoO_B0(0) + 0.652141084861241*u0_B0(1)*rhoO_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoO_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoO_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoO_B0(-1) - 0.082033432844602*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

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

       d1_rhoNOu0_dx = (1.5*u0_B0(-2)*rhoNO_B0(-2) + 1.83333333333333*u0_B0(0)*rhoNO_B0(0) - 3.0*u0_B0(-1)*rhoNO_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoNO_B0(-3))*invDelta0block0;

       d1_rhoNu0_dx = (1.5*u0_B0(-2)*rhoN_B0(-2) + 1.83333333333333*u0_B0(0)*rhoN_B0(0) - 3.0*u0_B0(-1)*rhoN_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoN_B0(-3))*invDelta0block0;

       d1_rhoO2u0_dx = (1.5*u0_B0(-2)*rhoO2_B0(-2) + 1.83333333333333*u0_B0(0)*rhoO2_B0(0) - 3.0*u0_B0(-1)*rhoO2_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoO2_B0(-3))*invDelta0block0;

       d1_rhoOu0_dx = (1.5*u0_B0(-2)*rhoO_B0(-2) + 1.83333333333333*u0_B0(0)*rhoO_B0(0) - 3.0*u0_B0(-1)*rhoO_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoO_B0(-3))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.322484932882161*u0_B0(0)*rhoNO_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoNO_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoNO_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoNO_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoNO_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.322484932882161*u0_B0(0)*rhoN_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoN_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoN_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoN_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoN_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.322484932882161*u0_B0(0)*rhoO2_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoO2_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoO2_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoO2_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoO2_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.322484932882161*u0_B0(0)*rhoO_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoO_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoO_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoO_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoO_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.00412637789557492*u0_B0(-3)*rhoNO_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoNO_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoNO_B0(1) - 0.197184333887745*u0_B0(0)*rhoNO_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoNO_B0(-1) - 0.113446470384241*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00412637789557492*u0_B0(-3)*rhoN_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoN_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoN_B0(1) - 0.197184333887745*u0_B0(0)*rhoN_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoN_B0(-1) - 0.113446470384241*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.00412637789557492*u0_B0(-3)*rhoO2_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoO2_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoO2_B0(1) - 0.197184333887745*u0_B0(0)*rhoO2_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoO2_B0(-1) - 0.113446470384241*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.00412637789557492*u0_B0(-3)*rhoO_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoO_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoO_B0(1) - 0.197184333887745*u0_B0(0)*rhoO_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoO_B0(-1) - 0.113446470384241*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

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

       d1_rhoNOu0_dx = (0.00932597985049999*u0_B0(3)*rhoNO_B0(3) + 0.727822147724592*u0_B0(1)*rhoNO_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoNO_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoNO_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoNO_B0(-1) - 0.121937153224065*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00932597985049999*u0_B0(3)*rhoN_B0(3) + 0.727822147724592*u0_B0(1)*rhoN_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoN_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoN_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoN_B0(-1) - 0.121937153224065*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.00932597985049999*u0_B0(3)*rhoO2_B0(3) + 0.727822147724592*u0_B0(1)*rhoO2_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoO2_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoO2_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoO2_B0(-1) - 0.121937153224065*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.00932597985049999*u0_B0(3)*rhoO_B0(3) + 0.727822147724592*u0_B0(1)*rhoO_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoO_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoO_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoO_B0(-1) - 0.121937153224065*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

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

       d1_rhoNOu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoNO_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoNO_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoNO_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoNO_B0(1))*invDelta0block0;

       d1_rhoNu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoN_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoN_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoN_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoN_B0(1))*invDelta0block0;

       d1_rhoO2u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoO2_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoO2_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoO2_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoO2_B0(1))*invDelta0block0;

       d1_rhoOu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoO_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoO_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoO_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoO_B0(1))*invDelta0block0;

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

   Residual2_B0(0) = -d1_rhoOu0_dx + wdotO_B0(0);

   Residual3_B0(0) = -d1_rhoO2u0_dx + wdotO2_B0(0);

   Residual4_B0(0) = -d1_rhoNOu0_dx + wdotNO_B0(0);

   Residual5_B0(0) = -d1_prhou0u0_dx;

    Residual6_B0(0) = -d1_rhoevu0_dx + evN2_B0(0)*wdotN2_B0(0) + evNO_B0(0)*wdotNO_B0(0) + evO2_B0(0)*wdotO2_B0(0) +
      9.86923266716013e-6*(invMN2*rhoN2_B0(0)/ptauN2_B0(0) + invMNO*rhoNO_B0(0)/ptauNO_B0(0) +
      invMO2*rhoO2_B0(0)/ptauO2_B0(0))*(-rhoev_B0(0) + rhoN2_B0(0)*eveqN2_B0(0) + rhoNO_B0(0)*eveqNO_B0(0) +
      rhoO2_B0(0)*eveqO2_B0(0))*p_B0(0)/(invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

   Residual7_B0(0) = -d1_prhoEu0_dx + kappa*d2_T_dx;

}

 void opensbliblock00Kernel029(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &Residual4_B0, const ACC<double> &Residual5_B0, const
ACC<double> &Residual6_B0, const ACC<double> &Residual7_B0, ACC<double> &rhoE_B0, ACC<double> &rhoE_RKold_B0,
ACC<double> &rhoN2_B0, ACC<double> &rhoN2_RKold_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoNO_RKold_B0, ACC<double>
&rhoN_B0, ACC<double> &rhoN_RKold_B0, ACC<double> &rhoO2_B0, ACC<double> &rhoO2_RKold_B0, ACC<double> &rhoO_B0,
ACC<double> &rhoO_RKold_B0, ACC<double> &rhoev_B0, ACC<double> &rhoev_RKold_B0, ACC<double> &rhou0_B0, ACC<double>
&rhou0_RKold_B0, const double *rkA, const double *rkB)
{
   rhoN_RKold_B0(0) = rkA[0]*rhoN_RKold_B0(0) + dt*Residual0_B0(0);

   rhoN_B0(0) = rkB[0]*rhoN_RKold_B0(0) + rhoN_B0(0);

   rhoN2_RKold_B0(0) = rkA[0]*rhoN2_RKold_B0(0) + dt*Residual1_B0(0);

   rhoN2_B0(0) = rkB[0]*rhoN2_RKold_B0(0) + rhoN2_B0(0);

   rhoO_RKold_B0(0) = rkA[0]*rhoO_RKold_B0(0) + dt*Residual2_B0(0);

   rhoO_B0(0) = rkB[0]*rhoO_RKold_B0(0) + rhoO_B0(0);

   rhoO2_RKold_B0(0) = rkA[0]*rhoO2_RKold_B0(0) + dt*Residual3_B0(0);

   rhoO2_B0(0) = rkB[0]*rhoO2_RKold_B0(0) + rhoO2_B0(0);

   rhoNO_RKold_B0(0) = rkA[0]*rhoNO_RKold_B0(0) + dt*Residual4_B0(0);

   rhoNO_B0(0) = rkB[0]*rhoNO_RKold_B0(0) + rhoNO_B0(0);

   rhou0_RKold_B0(0) = rkA[0]*rhou0_RKold_B0(0) + dt*Residual5_B0(0);

   rhou0_B0(0) = rkB[0]*rhou0_RKold_B0(0) + rhou0_B0(0);

   rhoev_RKold_B0(0) = rkA[0]*rhoev_RKold_B0(0) + dt*Residual6_B0(0);

   rhoev_B0(0) = rkB[0]*rhoev_RKold_B0(0) + rhoev_B0(0);

   rhoE_RKold_B0(0) = rkA[0]*rhoE_RKold_B0(0) + dt*Residual7_B0(0);

   rhoE_B0(0) = rkB[0]*rhoE_RKold_B0(0) + rhoE_B0(0);

}

 void opensbliblock00Kernel002(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhou0_B0, ACC<double>
&a_B0, ACC<double> &u0_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) + rhoO2_B0(0));

   u0_B0(0) = rhou0_B0(0)*inv_rho;

    p_B0(0) = (invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0))*Rhat*T_B0(0);

   a_B0(0) = sqrt(gama*p_B0(0)*inv_rho);

}

 void opensbliblock00Kernel003(ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0,
ACC<double> &wk4_B0, ACC<double> &wk5_B0, ACC<double> &wk6_B0, ACC<double> &wk7_B0)
{
   wk0_B0(0) = 0.0;

   wk1_B0(0) = 0.0;

   wk2_B0(0) = 0.0;

   wk3_B0(0) = 0.0;

   wk4_B0(0) = 0.0;

   wk5_B0(0) = 0.0;

   wk6_B0(0) = 0.0;

   wk7_B0(0) = 0.0;

}

 void opensbliblock00Kernel004(const ACC<double> &a_B0, const ACC<double> &ev_B0, const ACC<double> &rhoE_B0, const
ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const
ACC<double> &rhoO_B0, const ACC<double> &rhoev_B0, const ACC<double> &rhou0_B0, const ACC<double> &u0_B0, ACC<double>
&wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0, ACC<double> &wk4_B0, ACC<double> &wk5_B0,
ACC<double> &wk6_B0, ACC<double> &wk7_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_04 = 0.0;
   double AVG_0_0_LEV_05 = 0.0;
   double AVG_0_0_LEV_06 = 0.0;
   double AVG_0_0_LEV_07 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_14 = 0.0;
   double AVG_0_0_LEV_15 = 0.0;
   double AVG_0_0_LEV_16 = 0.0;
   double AVG_0_0_LEV_17 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_24 = 0.0;
   double AVG_0_0_LEV_25 = 0.0;
   double AVG_0_0_LEV_26 = 0.0;
   double AVG_0_0_LEV_27 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double AVG_0_0_LEV_34 = 0.0;
   double AVG_0_0_LEV_35 = 0.0;
   double AVG_0_0_LEV_36 = 0.0;
   double AVG_0_0_LEV_37 = 0.0;
   double AVG_0_0_LEV_40 = 0.0;
   double AVG_0_0_LEV_41 = 0.0;
   double AVG_0_0_LEV_42 = 0.0;
   double AVG_0_0_LEV_43 = 0.0;
   double AVG_0_0_LEV_44 = 0.0;
   double AVG_0_0_LEV_45 = 0.0;
   double AVG_0_0_LEV_46 = 0.0;
   double AVG_0_0_LEV_47 = 0.0;
   double AVG_0_0_LEV_50 = 0.0;
   double AVG_0_0_LEV_51 = 0.0;
   double AVG_0_0_LEV_52 = 0.0;
   double AVG_0_0_LEV_53 = 0.0;
   double AVG_0_0_LEV_54 = 0.0;
   double AVG_0_0_LEV_55 = 0.0;
   double AVG_0_0_LEV_56 = 0.0;
   double AVG_0_0_LEV_57 = 0.0;
   double AVG_0_0_LEV_60 = 0.0;
   double AVG_0_0_LEV_61 = 0.0;
   double AVG_0_0_LEV_62 = 0.0;
   double AVG_0_0_LEV_63 = 0.0;
   double AVG_0_0_LEV_64 = 0.0;
   double AVG_0_0_LEV_65 = 0.0;
   double AVG_0_0_LEV_66 = 0.0;
   double AVG_0_0_LEV_67 = 0.0;
   double AVG_0_0_LEV_70 = 0.0;
   double AVG_0_0_LEV_71 = 0.0;
   double AVG_0_0_LEV_72 = 0.0;
   double AVG_0_0_LEV_73 = 0.0;
   double AVG_0_0_LEV_74 = 0.0;
   double AVG_0_0_LEV_75 = 0.0;
   double AVG_0_0_LEV_76 = 0.0;
   double AVG_0_0_LEV_77 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_01 = 0.0;
   double AVG_0_REV_02 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_04 = 0.0;
   double AVG_0_REV_06 = 0.0;
   double AVG_0_REV_07 = 0.0;
   double AVG_0_REV_10 = 0.0;
   double AVG_0_REV_16 = 0.0;
   double AVG_0_REV_17 = 0.0;
   double AVG_0_REV_21 = 0.0;
   double AVG_0_REV_26 = 0.0;
   double AVG_0_REV_27 = 0.0;
   double AVG_0_REV_32 = 0.0;
   double AVG_0_REV_36 = 0.0;
   double AVG_0_REV_37 = 0.0;
   double AVG_0_REV_43 = 0.0;
   double AVG_0_REV_46 = 0.0;
   double AVG_0_REV_47 = 0.0;
   double AVG_0_REV_54 = 0.0;
   double AVG_0_REV_55 = 0.0;
   double AVG_0_REV_56 = 0.0;
   double AVG_0_REV_57 = 0.0;
   double AVG_0_REV_64 = 0.0;
   double AVG_0_REV_66 = 0.0;
   double AVG_0_REV_67 = 0.0;
   double AVG_0_REV_75 = 0.0;
   double AVG_0_REV_76 = 0.0;
   double AVG_0_REV_77 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_ev = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_rhoN = 0.0;
   double AVG_0_rhoN2 = 0.0;
   double AVG_0_rhoNO = 0.0;
   double AVG_0_rhoO = 0.0;
   double AVG_0_rhoO2 = 0.0;
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
   double alpha_40 = 0.0;
   double alpha_41 = 0.0;
   double alpha_42 = 0.0;
   double alpha_50 = 0.0;
   double alpha_51 = 0.0;
   double alpha_52 = 0.0;
   double alpha_60 = 0.0;
   double alpha_61 = 0.0;
   double alpha_62 = 0.0;
   double alpha_70 = 0.0;
   double alpha_71 = 0.0;
   double alpha_72 = 0.0;
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
   double g_50 = 0.0;
   double g_51 = 0.0;
   double g_60 = 0.0;
   double g_61 = 0.0;
   double g_70 = 0.0;
   double g_71 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double gamma_4 = 0.0;
   double gamma_5 = 0.0;
   double gamma_6 = 0.0;
   double gamma_7 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_4 = 0.0;
   double phi_5 = 0.0;
   double phi_6 = 0.0;
   double phi_7 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double phi_star_4 = 0.0;
   double phi_star_5 = 0.0;
   double phi_star_6 = 0.0;
   double phi_star_7 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_0_4 = 0.0;
   double sigma_0_5 = 0.0;
   double sigma_0_6 = 0.0;
   double sigma_0_7 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double sigma_1_4 = 0.0;
   double sigma_1_5 = 0.0;
   double sigma_1_6 = 0.0;
   double sigma_1_7 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_4 = 0.0;
   double theta_5 = 0.0;
   double theta_6 = 0.0;
   double theta_7 = 0.0;
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
   double theta_hat_50 = 0.0;
   double theta_hat_51 = 0.0;
   double theta_hat_60 = 0.0;
   double theta_hat_61 = 0.0;
   double theta_hat_70 = 0.0;
   double theta_hat_71 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   double ws_lambda_44 = 0.0;
   double ws_lambda_55 = 0.0;
   double ws_lambda_66 = 0.0;
   double ws_lambda_77 = 0.0;
   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(0) + rhoN2_B0(-1));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(0) + rhoN_B0(-1));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(0) + rhoO_B0(-1));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(0) + rhoNO_B0(-1));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(-1));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(0) + rhoO2_B0(-1));

   AVG_0_ev = ((1.0/2.0))*(ev_B0(0) + ev_B0(-1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(-1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_01 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_02 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_03 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_04 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_05 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_06 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_07 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_10 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_11 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_12 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO2)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_13 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_14 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_15 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_16 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_17 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_20 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_21 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_22 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_23 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoNO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoNO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_24 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_25 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_26 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_27 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_30 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_31 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_32 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_33 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_34 = ((1.0/2.0))*(-2*AVG_0_rhoN - 2*AVG_0_rhoN2 - 2*AVG_0_rhoNO - 2*AVG_0_rhoO - 2*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoN +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoN)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_35 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_36 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_37 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_40 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_41 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_42 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_43 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_44 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_45 = (inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_46 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_47 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_0_0_LEV_50 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_51 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_52 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_53 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_54 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_55 = ((1.0/2.0))*pow(2, 1.0/(2))*(2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_56 = ((1.0/2.0))*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) +
      2*AVG_0_ev)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_57 = -(1.0/2.0)*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) + 2*AVG_0_ev)*gamma_m1;

    AVG_0_0_LEV_60 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_61 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_62 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_63 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_64 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_65 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_66 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_67 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_70 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_71 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_72 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_73 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_74 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_75 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_76 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_77 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    alpha_00 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_07 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_04 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_01 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_00 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_03 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_02 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_05 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_06;

    alpha_10 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_17 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_14 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_11 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_10 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_13 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_12 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_15 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_16;

    alpha_20 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_27 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_24 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_21 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_20 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_23 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_22 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_25 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_26;

    alpha_30 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_37 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_34 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_31 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_30 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_33 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_32 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_35 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_36;

    alpha_40 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_47 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_44 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_41 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_40 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_43 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_42 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_45 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_46;

    alpha_50 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_57 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_54 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_51 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_50 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_53 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_52 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_55 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_56;

    alpha_60 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_67 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_64 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_61 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_60 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_63 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_62 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_65 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_66;

    alpha_70 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_77 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_74 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_71 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_70 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_73 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_72 + (-rhoev_B0(-1) +
      rhoev_B0(0))*AVG_0_0_LEV_75 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_76;

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(0) + rhoN2_B0(1));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(0) + rhoN_B0(1));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(0) + rhoO_B0(1));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(0) + rhoNO_B0(1));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(1));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(0) + rhoO2_B0(1));

   AVG_0_ev = ((1.0/2.0))*(ev_B0(0) + ev_B0(1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_01 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_02 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_03 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_04 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_05 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_06 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_07 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_10 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_11 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_12 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO2)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_13 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_14 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_15 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_16 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_17 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_20 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_21 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_22 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_23 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoNO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoNO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_24 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_25 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_26 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_27 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_30 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_31 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_32 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_33 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_34 = ((1.0/2.0))*(-2*AVG_0_rhoN - 2*AVG_0_rhoN2 - 2*AVG_0_rhoNO - 2*AVG_0_rhoO - 2*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoN +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoN)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_35 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_36 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_37 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_40 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_41 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_42 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_43 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_44 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_45 = (inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_46 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_47 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_0_0_LEV_50 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_51 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_52 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_53 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_54 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_55 = ((1.0/2.0))*pow(2, 1.0/(2))*(2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_56 = ((1.0/2.0))*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) +
      2*AVG_0_ev)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_57 = -(1.0/2.0)*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) + 2*AVG_0_ev)*gamma_m1;

    AVG_0_0_LEV_60 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_61 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_62 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_63 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_64 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_65 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_66 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_67 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_70 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_71 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_72 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_73 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_74 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_75 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_76 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_77 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    alpha_01 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_07 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_04 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_01 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_00 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_03 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_02 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_05 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_06;

    alpha_11 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_17 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_14 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_11 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_10 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_13 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_12 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_15 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_16;

    alpha_21 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_27 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_24 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_21 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_20 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_23 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_22 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_25 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_26;

    alpha_31 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_37 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_34 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_31 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_30 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_33 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_32 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_35 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_36;

    alpha_41 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_47 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_44 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_41 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_40 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_43 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_42 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_45 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_46;

    alpha_51 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_57 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_54 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_51 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_50 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_53 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_52 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_55 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_56;

    alpha_61 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_67 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_64 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_61 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_60 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_63 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_62 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_65 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_66;

    alpha_71 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_77 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_74 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_71 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_70 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_73 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_72 + (-rhoev_B0(0) +
      rhoev_B0(1))*AVG_0_0_LEV_75 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_76;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = AVG_0_u0;

   ws_lambda_33 = AVG_0_u0;

   ws_lambda_44 = AVG_0_u0;

   ws_lambda_55 = AVG_0_u0;

   ws_lambda_66 = AVG_0_a + AVG_0_u0;

   ws_lambda_77 = -AVG_0_a + AVG_0_u0;

   AVG_0_REV_00 = 1;

   AVG_0_REV_01 = 1;

   AVG_0_REV_02 = 1;

   AVG_0_REV_03 = 1;

   AVG_0_REV_04 = 1;

   AVG_0_REV_06 = 1;

   AVG_0_REV_07 = 1;

   AVG_0_REV_10 = -1;

   AVG_0_REV_16 = AVG_0_rhoO/AVG_0_rhoN2;

   AVG_0_REV_17 = AVG_0_rhoO/AVG_0_rhoN2;

   AVG_0_REV_21 = -1;

   AVG_0_REV_26 = AVG_0_rhoO2/AVG_0_rhoN2;

   AVG_0_REV_27 = AVG_0_rhoO2/AVG_0_rhoN2;

   AVG_0_REV_32 = -1;

   AVG_0_REV_36 = AVG_0_rhoNO/AVG_0_rhoN2;

   AVG_0_REV_37 = AVG_0_rhoNO/AVG_0_rhoN2;

   AVG_0_REV_43 = -1;

   AVG_0_REV_46 = AVG_0_rhoN/AVG_0_rhoN2;

   AVG_0_REV_47 = AVG_0_rhoN/AVG_0_rhoN2;

   AVG_0_REV_54 = -(1.0/2.0)*(AVG_0_u0*AVG_0_u0);

   AVG_0_REV_55 = pow(2, 1.0/(2))/2;

   AVG_0_REV_56 = (AVG_0_rhoN + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_ev/AVG_0_rhoN2 + AVG_0_ev;

   AVG_0_REV_57 = (AVG_0_rhoN + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_ev/AVG_0_rhoN2 + AVG_0_ev;

   AVG_0_REV_64 = AVG_0_u0;

   AVG_0_REV_66 = (AVG_0_a + AVG_0_u0)*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)/AVG_0_rhoN2;

    AVG_0_REV_67 = -(-AVG_0_u0 + AVG_0_a)*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)/AVG_0_rhoN2;

   AVG_0_REV_75 = pow(2, 1.0/(2))/2;

    AVG_0_REV_76 = ((1.0/2.0))*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*(-(AVG_0_u0*AVG_0_u0)
      - 2*AVG_0_ev + 2*(AVG_0_a*AVG_0_a) + (AVG_0_u0*AVG_0_u0)*gama - 2*AVG_0_a*AVG_0_u0 + 2*gama*AVG_0_ev +
      2*gama*AVG_0_a*AVG_0_u0)*invgamma_m1/AVG_0_rhoN2;

    AVG_0_REV_77 = ((1.0/2.0))*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*(-(AVG_0_u0*AVG_0_u0)
      - 2*AVG_0_ev + 2*(AVG_0_a*AVG_0_a) + (AVG_0_u0*AVG_0_u0)*gama + 2*gama*AVG_0_ev + 2*AVG_0_a*AVG_0_u0 -
      2*gama*AVG_0_a*AVG_0_u0)*invgamma_m1/AVG_0_rhoN2;

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(1) + rhoN2_B0(2));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(1) + rhoN_B0(2));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(1) + rhoO_B0(2));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(1) + rhoNO_B0(2));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1) + u0_B0(2));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(1) + rhoO2_B0(2));

   AVG_0_ev = ((1.0/2.0))*(ev_B0(1) + ev_B0(2));

   AVG_0_a = ((1.0/2.0))*(a_B0(1) + a_B0(2));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_01 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_02 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_03 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_04 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_05 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_06 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_07 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_10 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_11 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_12 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoO2)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_13 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_14 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_15 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_16 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_17 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoO2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_20 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_21 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_22 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_23 = -(1.0/2.0)*(2*AVG_0_rhoN + 2*AVG_0_rhoN2 + 2*AVG_0_rhoNO + 2*AVG_0_rhoO + 2*AVG_0_rhoO2 +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoNO -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoNO)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_24 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_25 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_26 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_27 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoNO/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_30 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_31 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_32 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_33 = ((1.0/2.0))*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2
      + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_34 = ((1.0/2.0))*(-2*AVG_0_rhoN - 2*AVG_0_rhoN2 - 2*AVG_0_rhoNO - 2*AVG_0_rhoO - 2*AVG_0_rhoO2 -
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_rhoN +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_rhoN)/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_35 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_36 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_37 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2);

    AVG_0_0_LEV_40 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_41 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_42 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_43 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

    AVG_0_0_LEV_44 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_45 = (inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_46 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_47 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

    AVG_0_0_LEV_50 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_51 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_52 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_53 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_54 = -(1.0/4.0)*pow(2, 1.0/(2))*(AVG_0_u0*AVG_0_u0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_55 = ((1.0/2.0))*pow(2, 1.0/(2))*(2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      2*(inv_AVG_a*inv_AVG_a)*AVG_0_ev + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      2*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_ev);

    AVG_0_0_LEV_56 = ((1.0/2.0))*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) +
      2*AVG_0_ev)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_57 = -(1.0/2.0)*pow(2, 1.0/(2))*(inv_AVG_a*inv_AVG_a)*((AVG_0_u0*AVG_0_u0) + 2*AVG_0_ev)*gamma_m1;

    AVG_0_0_LEV_60 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_61 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_62 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_63 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_64 = -(1.0/4.0)*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 +
      AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_65 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_66 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_67 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_70 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_71 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_72 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_73 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_74 = ((1.0/4.0))*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a +
      gama*AVG_0_u0)*AVG_0_rhoN2*AVG_0_u0/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_75 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_76 = -(1.0/2.0)*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_rhoN2/(AVG_0_rhoN +
      AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

    AVG_0_0_LEV_77 = ((1.0/2.0))*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_rhoN2/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO +
      AVG_0_rhoO + AVG_0_rhoO2);

    alpha_02 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_07 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_04 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_01 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_00 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_03 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_02 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_05 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_06;

    alpha_12 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_17 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_14 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_11 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_10 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_13 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_12 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_15 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_16;

    alpha_22 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_27 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_24 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_21 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_20 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_23 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_22 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_25 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_26;

    alpha_32 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_37 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_34 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_31 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_30 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_33 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_32 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_35 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_36;

    alpha_42 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_47 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_44 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_41 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_40 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_43 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_42 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_45 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_46;

    alpha_52 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_57 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_54 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_51 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_50 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_53 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_52 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_55 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_56;

    alpha_62 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_67 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_64 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_61 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_60 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_63 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_62 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_65 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_66;

    alpha_72 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_77 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_74 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_71 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_70 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_73 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_72 + (-rhoev_B0(1) +
      rhoev_B0(2))*AVG_0_0_LEV_75 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_76;

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

    sigma_0_5 = ((fabs(ws_lambda_55) >= delta_TVD) ? (
   fabs(ws_lambda_55)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_55*ws_lambda_55))*invdelta_TVD
));

    sigma_0_6 = ((fabs(ws_lambda_66) >= delta_TVD) ? (
   fabs(ws_lambda_66)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_66*ws_lambda_66))*invdelta_TVD
));

    sigma_0_7 = ((fabs(ws_lambda_77) >= delta_TVD) ? (
   fabs(ws_lambda_77)
)
: (
  
      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_77*ws_lambda_77))*invdelta_TVD
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

   S = (alpha_51 > 0) ? 1 : ((alpha_51 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_50, 2*fabs(alpha_51)));

   t2 = fmin(fabs(alpha_51), 2*S*alpha_50);

   g_50 = S*fmax(t1, t2);

   S = (alpha_61 > 0) ? 1 : ((alpha_61 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_60, 2*fabs(alpha_61)));

   t2 = fmin(fabs(alpha_61), 2*S*alpha_60);

   g_60 = S*fmax(t1, t2);

   S = (alpha_71 > 0) ? 1 : ((alpha_71 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_70, 2*fabs(alpha_71)));

   t2 = fmin(fabs(alpha_71), 2*S*alpha_70);

   g_70 = S*fmax(t1, t2);

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

   S = (alpha_52 > 0) ? 1 : ((alpha_52 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_51, 2*fabs(alpha_52)));

   t2 = fmin(fabs(alpha_52), 2*S*alpha_51);

   g_51 = S*fmax(t1, t2);

   S = (alpha_62 > 0) ? 1 : ((alpha_62 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_61, 2*fabs(alpha_62)));

   t2 = fmin(fabs(alpha_62), 2*S*alpha_61);

   g_61 = S*fmax(t1, t2);

   S = (alpha_72 > 0) ? 1 : ((alpha_72 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_71, 2*fabs(alpha_72)));

   t2 = fmin(fabs(alpha_72), 2*S*alpha_71);

   g_71 = S*fmax(t1, t2);

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

   gamma_5 = ((alpha_51 == 0) ? (
   0
)
: (
   (-g_50 + g_51)*alpha_51*sigma_0_5/((alpha_51*alpha_51) + eps_TVD)
));

   gamma_6 = ((alpha_61 == 0) ? (
   0
)
: (
   (-g_60 + g_61)*alpha_61*sigma_0_6/((alpha_61*alpha_61) + eps_TVD)
));

   gamma_7 = ((alpha_71 == 0) ? (
   0
)
: (
   (-g_70 + g_71)*alpha_71*sigma_0_7/((alpha_71*alpha_71) + eps_TVD)
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

    sigma_1_5 = ((fabs(gamma_5) >= delta_TVD) ? (
   fabs(gamma_5)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_5*gamma_5))*invdelta_TVD
));

    sigma_1_6 = ((fabs(gamma_6) >= delta_TVD) ? (
   fabs(gamma_6)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_6*gamma_6))*invdelta_TVD
));

    sigma_1_7 = ((fabs(gamma_7) >= delta_TVD) ? (
   fabs(gamma_7)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_7*gamma_7))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   phi_4 = -fabs(sigma_0_4 + sigma_1_4)*alpha_41 + 0.5*(g_40 + g_41)*sigma_0_4;

   phi_5 = -fabs(sigma_0_5 + sigma_1_5)*alpha_51 + 0.5*(g_50 + g_51)*sigma_0_5;

   phi_6 = -fabs(sigma_0_6 + sigma_1_6)*alpha_61 + 0.5*(g_60 + g_61)*sigma_0_6;

   phi_7 = -fabs(sigma_0_7 + sigma_1_7)*alpha_71 + 0.5*(g_70 + g_71)*sigma_0_7;

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

   t1 = -fabs(alpha_50) + fabs(alpha_51);

   t2 = fabs(alpha_50) + fabs(alpha_51) + eps_TVD;

   theta_hat_50 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_60) + fabs(alpha_61);

   t2 = fabs(alpha_60) + fabs(alpha_61) + eps_TVD;

   theta_hat_60 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_70) + fabs(alpha_71);

   t2 = fabs(alpha_70) + fabs(alpha_71) + eps_TVD;

   theta_hat_70 = (fabs(t1/t2)*fabs(t1/t2));

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

   t1 = -fabs(alpha_51) + fabs(alpha_52);

   t2 = fabs(alpha_51) + fabs(alpha_52) + eps_TVD;

   theta_hat_51 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_61) + fabs(alpha_62);

   t2 = fabs(alpha_61) + fabs(alpha_62) + eps_TVD;

   theta_hat_61 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_71) + fabs(alpha_72);

   t2 = fabs(alpha_71) + fabs(alpha_72) + eps_TVD;

   theta_hat_71 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   theta_4 = fmax(theta_hat_40, theta_hat_41);

   theta_5 = fmax(theta_hat_50, theta_hat_51);

   theta_6 = fmax(theta_hat_60, theta_hat_61);

   theta_7 = fmax(theta_hat_70, theta_hat_71);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   phi_star_4 = kappa_TVD*phi_4*theta_4;

   phi_star_5 = kappa_TVD*phi_5*theta_5;

   phi_star_6 = kappa_TVD*phi_6*theta_6;

   phi_star_7 = kappa_TVD*phi_7*theta_7;

    wk0_B0(0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_01*phi_star_1 + AVG_0_REV_02*phi_star_2 +
      AVG_0_REV_03*phi_star_3 + AVG_0_REV_04*phi_star_4 + AVG_0_REV_06*phi_star_6 + AVG_0_REV_07*phi_star_7);

   wk1_B0(0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_16*phi_star_6 + AVG_0_REV_17*phi_star_7);

   wk2_B0(0) = 0.5*(AVG_0_REV_21*phi_star_1 + AVG_0_REV_26*phi_star_6 + AVG_0_REV_27*phi_star_7);

   wk3_B0(0) = 0.5*(AVG_0_REV_32*phi_star_2 + AVG_0_REV_36*phi_star_6 + AVG_0_REV_37*phi_star_7);

   wk4_B0(0) = 0.5*(AVG_0_REV_43*phi_star_3 + AVG_0_REV_46*phi_star_6 + AVG_0_REV_47*phi_star_7);

    wk5_B0(0) = 0.5*(AVG_0_REV_54*phi_star_4 + AVG_0_REV_55*phi_star_5 + AVG_0_REV_56*phi_star_6 +
      AVG_0_REV_57*phi_star_7);

   wk6_B0(0) = 0.5*(AVG_0_REV_64*phi_star_4 + AVG_0_REV_66*phi_star_6 + AVG_0_REV_67*phi_star_7);

   wk7_B0(0) = 0.5*(AVG_0_REV_75*phi_star_5 + AVG_0_REV_76*phi_star_6 + AVG_0_REV_77*phi_star_7);

}

 void opensbliblock00Kernel005(const ACC<double> &wdotN2_B0, const ACC<double> &wdotNO_B0, const ACC<double> &wdotN_B0,
const ACC<double> &wdotO2_B0, const ACC<double> &wdotO_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const
ACC<double> &wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double>
&wk6_B0, const ACC<double> &wk7_B0, ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double>
&rhoN_B0, ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0, const int *idx)
{
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   rhoN2_B0(0) = (-(-wk0_B0(-1) + wk0_B0(0))*invDelta0block0 + wdotN2_B0(0))*dt + rhoN2_B0(0);

   rhoO_B0(0) = (-(-wk1_B0(-1) + wk1_B0(0))*invDelta0block0 + wdotO_B0(0))*dt + rhoO_B0(0);

   rhoO2_B0(0) = (-(-wk2_B0(-1) + wk2_B0(0))*invDelta0block0 + wdotO2_B0(0))*dt + rhoO2_B0(0);

   rhoNO_B0(0) = (-(-wk3_B0(-1) + wk3_B0(0))*invDelta0block0 + wdotNO_B0(0))*dt + rhoNO_B0(0);

   rhoN_B0(0) = (-(-wk4_B0(-1) + wk4_B0(0))*invDelta0block0 + wdotN_B0(0))*dt + rhoN_B0(0);

   rhoev_B0(0) = -(-wk5_B0(-1) + wk5_B0(0))*dt*invDelta0block0 + rhoev_B0(0);

   rhou0_B0(0) = -(-wk6_B0(-1) + wk6_B0(0))*dt*invDelta0block0 + rhou0_B0(0);

   rhoE_B0(0) = -(-wk7_B0(-1) + wk7_B0(0))*dt*invDelta0block0 + rhoE_B0(0);

}

#endif
