#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel044(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0, ACC<double> &x0_B0, const int
*idx)
{
   double T0 = 0.0;
   double Tv = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double rhoref = 0.0;
   double u0 = 0.0;
   x0_B0(0) = Delta0block0*idx[0];

   u0 = 0;

   T0 = ((x0_B0(0) < 0.0) ? (
   9000.0
)
: (
   3000.0
));

   p0 = ((x0_B0(0) < 0.0) ? (
   195256.0
)
: (
   10000.0
));

   Tv = p0/(Rhat*(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO + cO2*rhoref/MO2));

   rhoref = 1.0*p0/(Rhat*T0*(cN/MN + cN2/MN2 + cNO/MNO + cO/MO + cO2/MO2));

   rhoN2_B0(0) = cN2*rhoref;

   rhoN_B0(0) = cN*rhoref;

   rhoO2_B0(0) = cO2*rhoref;

   rhoO_B0(0) = cO*rhoref;

   rhoNO_B0(0) = cNO*rhoref;

   rhou0_B0(0) = u0*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref + cO2*rhoref);

   evO2 = Rhat*thetavO2/(MO2*(-1.0 + exp(thetavO2/Tv)));

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/Tv)));

   evNO = Rhat*thetavNO/(MNO*(-1.0 + exp(thetavNO/Tv)));

   rhou0_B0(0) = u0*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref + cO2*rhoref);

    rhoev_B0(0) = (cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref)*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref
      + cO2*rhoref)/(cN2*rhoref + cNO*rhoref + cO2*rhoref);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*rhoref + 0.5*cN2*rhoref + 0.5*cNO*rhoref + 0.5*cO*rhoref + 0.5*cO2*rhoref) +
      cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref + p0*(1.5*cN*rhoref/MN + 1.5*cO*rhoref/MO + 2.5*cN2*rhoref/MN2
      + 2.5*cNO*rhoref/MNO + 2.5*cO2*rhoref/MO2)/(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO +
      cO2*rhoref/MO2) + 4186800.0*cN*dhN*rhoref/MN + 4186800.0*cNO*dhNO*rhoref/MNO + 4186800.0*cO*dhO*rhoref/MO;

}

 void opensbliblock00Kernel042(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0)
{
   double T = 0.0;
   double Tv = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double cNO = 0.0;
   double cO = 0.0;
   double cO2 = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double rhoref = 0.0;
   double u0 = 0.0;
   T = 9000;

   u0 = 0.0;

   p0 = 195256.000000000;

   cN2 = 0.234274000000000;

   cN = 2.70000000000000e-5;

   cO2 = 0.698439000000000;

   cO = 0.0660720000000000;

   cNO = 0.00118900000000000;

   rhoref = 1.90510442174576e-7;

   rhoN2_B0(0) = cN2*rhoref;

   rhoN_B0(0) = cN*rhoref;

   rhoO2_B0(0) = cO2*rhoref;

   rhoO_B0(0) = cO*rhoref;

   rhoNO_B0(0) = cNO*rhoref;

   rhou0_B0(0) = u0*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref + cO2*rhoref);

   Tv = p0/(Rhat*(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO + cO2*rhoref/MO2));

   evO2 = Rhat*thetavO2/(MO2*(-1.0 + exp(thetavO2/Tv)));

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/Tv)));

   evNO = Rhat*thetavNO/(MNO*(-1.0 + exp(thetavNO/Tv)));

    rhoev_B0(0) = (cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref)*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref
      + cO2*rhoref)/(cN2*rhoref + cNO*rhoref + cO2*rhoref);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*rhoref + 0.5*cN2*rhoref + 0.5*cNO*rhoref + 0.5*cO*rhoref + 0.5*cO2*rhoref) +
      cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref + p0*(1.5*cN*rhoref/MN + 1.5*cO*rhoref/MO + 2.5*cN2*rhoref/MN2
      + 2.5*cNO*rhoref/MNO + 2.5*cO2*rhoref/MO2)/(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO +
      cO2*rhoref/MO2) + 4186800.0*cN*dhN*rhoref/MN + 4186800.0*cNO*dhNO*rhoref/MNO + 4186800.0*cO*dhO*rhoref/MO;

}

 void opensbliblock00Kernel043(ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0,
ACC<double> &rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0)
{
   double T = 0.0;
   double Tv = 0.0;
   double cN = 0.0;
   double cN2 = 0.0;
   double cNO = 0.0;
   double cO = 0.0;
   double cO2 = 0.0;
   double evN2 = 0.0;
   double evNO = 0.0;
   double evO2 = 0.0;
   double p0 = 0.0;
   double rhoref = 0.0;
   double u0 = 0.0;
   T = 3000;

   u0 = 0.0;

   p0 = 10000.0000000000;

   cN2 = 0.0693020000000000;

   cN = 0.145363000000000;

   cO2 = 2.50000000000000e-5;

   cO = 0.745802000000000;

   cNO = 0.0395080000000000;

   rhoref = 2.19339508222495e-6;

   rhoN2_B0(0) = cN2*rhoref;

   rhoN_B0(0) = cN*rhoref;

   rhoO2_B0(0) = cO2*rhoref;

   rhoO_B0(0) = cO*rhoref;

   rhoNO_B0(0) = cNO*rhoref;

   rhou0_B0(0) = u0*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref + cO2*rhoref);

   Tv = p0/(Rhat*(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO + cO2*rhoref/MO2));

   evO2 = Rhat*thetavO2/(MO2*(-1.0 + exp(thetavO2/Tv)));

   evN2 = Rhat*thetavN2/(MN2*(-1.0 + exp(thetavN2/Tv)));

   evNO = Rhat*thetavNO/(MNO*(-1.0 + exp(thetavNO/Tv)));

    rhoev_B0(0) = (cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref)*(cN*rhoref + cN2*rhoref + cNO*rhoref + cO*rhoref
      + cO2*rhoref)/(cN2*rhoref + cNO*rhoref + cO2*rhoref);

    rhoE_B0(0) = (u0*u0)*(0.5*cN*rhoref + 0.5*cN2*rhoref + 0.5*cNO*rhoref + 0.5*cO*rhoref + 0.5*cO2*rhoref) +
      cN2*evN2*rhoref + cNO*evNO*rhoref + cO2*evO2*rhoref + p0*(1.5*cN*rhoref/MN + 1.5*cO*rhoref/MO + 2.5*cN2*rhoref/MN2
      + 2.5*cNO*rhoref/MNO + 2.5*cO2*rhoref/MO2)/(cN*rhoref/MN + cN2*rhoref/MN2 + cNO*rhoref/MNO + cO*rhoref/MO +
      cO2*rhoref/MO2) + 4186800.0*cN*dhN*rhoref/MN + 4186800.0*cNO*dhNO*rhoref/MNO + 4186800.0*cO*dhO*rhoref/MO;

}

 void opensbliblock00Kernel007(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0) = rhou0_B0(0)/(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) + rhoO2_B0(0));

}

 void opensbliblock00Kernel018(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoO2_B0,
const ACC<double> &rhoev_B0, ACC<double> &Tv_B0)
{
    Tv_B0(0) = (invMN2*thetavN2*rhoN2_B0(0) + invMNO*thetavNO*rhoNO_B0(0) +
      invMO2*thetavO2*rhoO2_B0(0))/((invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0))*log(1.0 +
      (invMN2*thetavN2*rhoN2_B0(0) + invMNO*thetavNO*rhoNO_B0(0) + invMO2*thetavO2*rhoO2_B0(0))*Rhat/rhoev_B0(0)));

}

 void opensbliblock00Kernel029(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &yN2_B0)
{
    yN2_B0(0) = invMN2*rhoN2_B0(0)/(invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel030(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &yNO_B0)
{
    yNO_B0(0) = invMNO*rhoNO_B0(0)/(invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel031(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &yN_B0)
{
    yN_B0(0) = invMN*rhoN_B0(0)/(invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel032(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &yO2_B0)
{
    yO2_B0(0) = invMO2*rhoO2_B0(0)/(invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel033(const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0,
const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &yO_B0)
{
    yO_B0(0) = invMO*rhoO_B0(0)/(invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel017(const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0,
const ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, const ACC<double> &rhoev_B0, const
ACC<double> &u0_B0, ACC<double> &T_B0)
{
    T_B0(0) = (-rhoev_B0(0) - 0.5*(u0_B0(0)*u0_B0(0))*(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) +
      rhoO2_B0(0)) - 4186800.0*dhN*invMN*rhoN_B0(0) - 4186800.0*dhO*invMO*rhoO_B0(0) - 4186800.0*dhNO*invMNO*rhoNO_B0(0)
      + rhoE_B0(0))*invRhat/(1.5*invMN*rhoN_B0(0) + 1.5*invMO*rhoO_B0(0) + 2.5*invMN2*rhoN2_B0(0) +
      2.5*invMNO*rhoNO_B0(0) + 2.5*invMO2*rhoO2_B0(0));

}

void opensbliblock00Kernel023(const ACC<double> &Tv_B0, ACC<double> &evN2_B0)
{
   evN2_B0(0) = Rhat*invMN2*thetavN2/(-1.0 + exp(thetavN2/Tv_B0(0)));

}

void opensbliblock00Kernel024(const ACC<double> &Tv_B0, ACC<double> &evNO_B0)
{
   evNO_B0(0) = Rhat*invMNO*thetavNO/(-1.0 + exp(thetavNO/Tv_B0(0)));

}

void opensbliblock00Kernel025(const ACC<double> &Tv_B0, ACC<double> &evO2_B0)
{
   evO2_B0(0) = Rhat*invMO2*thetavO2/(-1.0 + exp(thetavO2/Tv_B0(0)));

}

 void opensbliblock00Kernel008(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &p_B0)
{
    p_B0(0) = (invMN*rhoN_B0(0) + invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) +
      invMO2*rhoO2_B0(0))*Rhat*T_B0(0);

}

 void opensbliblock00Kernel026(const ACC<double> &T_B0, const ACC<double> &yN2_B0, const ACC<double> &yNO_B0, const
ACC<double> &yN_B0, const ACC<double> &yO2_B0, const ACC<double> &yO_B0, ACC<double> &kappa_B0)
{
    kappa_B0(0) = (1.0 - exp(-0.010568*T_B0(0)))*(0.00177095328464541*pow(T_B0(0), 0.342509 +
      0.022652*log(T_B0(0)))*(yN_B0(0) + yO_B0(0)) + 0.00188950552784029*pow(T_B0(0), 0.34357 +
      0.021823*log(T_B0(0)))*(yN2_B0(0) + yNO_B0(0) + yO2_B0(0)));

}

 void opensbliblock00Kernel027(const ACC<double> &T_B0, const ACC<double> &yN2_B0, const ACC<double> &yNO_B0, const
ACC<double> &yN_B0, const ACC<double> &yO2_B0, const ACC<double> &yO_B0, ACC<double> &kappav_B0)
{
    kappav_B0(0) = (1.0 - exp(-0.010568*T_B0(0)))*(0.000384199457327525*pow(T_B0(0), 0.34357 +
      0.021823*log(T_B0(0)))*(yN2_B0(0) + yNO_B0(0) + yO2_B0(0)) + 0.000416374355973645*pow(T_B0(0), 0.342509 +
      0.022652*log(T_B0(0)))*(yN_B0(0) + yO_B0(0)));

}

 void opensbliblock00Kernel028(const ACC<double> &T_B0, const ACC<double> &yN2_B0, const ACC<double> &yNO_B0, const
ACC<double> &yN_B0, const ACC<double> &yO2_B0, const ACC<double> &yO_B0, ACC<double> &mu_B0)
{
    mu_B0(0) = (1.0 - exp(-0.010568*T_B0(0)))*(8.0133632789385e-7*pow(T_B0(0), 0.342509 +
      0.022652*log(T_B0(0)))*(yN_B0(0) + yO_B0(0)) + 1.34007484243992e-6*pow(T_B0(0), 0.34357 +
      0.021823*log(T_B0(0)))*(yN2_B0(0) + yNO_B0(0) + yO2_B0(0)));

}

void opensbliblock00Kernel036(const ACC<double> &T_B0, ACC<double> &eveqNO_B0)
{
   eveqNO_B0(0) = Rhat*invMNO*thetavNO/(-1.0 + exp(thetavNO/T_B0(0)));

}

void opensbliblock00Kernel037(const ACC<double> &T_B0, ACC<double> &eveqO2_B0)
{
   eveqO2_B0(0) = Rhat*invMO2*thetavO2/(-1.0 + exp(thetavO2/T_B0(0)));

}

void opensbliblock00Kernel038(const ACC<double> &T_B0, ACC<double> &eveqN2_B0)
{
   eveqN2_B0(0) = Rhat*invMN2*thetavN2/(-1.0 + exp(thetavN2/T_B0(0)));

}

 void opensbliblock00Kernel039(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauN2_B0)
{
    ptauN2_B0(0) = (3.14066959164866e-11*invMN*rhoN_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.69627729418406e-11*invMN2*rhoN2_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      2.75229751516092e-11*invMO*rhoO_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.51958310305852e-11*invMO2*rhoO2_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)) +
      1.58793752948278e-11*invMNO*rhoNO_B0(0)*exp(220.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel040(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauO2_B0)
{
    ptauO2_B0(0) = (3.03420950194169e-10*invMO*rhoO_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.14180928034488e-10*invMNO*rhoNO_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      3.27838502246041e-10*invMN*rhoN_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.08725734681668e-10*invMO2*rhoO2_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)) +
      2.22632207449373e-10*invMN2*rhoN2_B0(0)*exp(129.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

}

 void opensbliblock00Kernel041(const ACC<double> &T_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const
ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &ptauNO_B0)
{
    ptauNO_B0(0) = (6.69952094392908e-11*invMO2*rhoO2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.07234831431176e-10*invMO*rhoO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.18607665290378e-10*invMN*rhoN_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.04583049652578e-11*invMNO*rhoNO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.28659255329465e-11*invMN2*rhoN2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

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

 void opensbliblock00Kernel034(const ACC<double> &evN2_B0, const ACC<double> &evNO_B0, const ACC<double> &evO2_B0, const
ACC<double> &eveqN2_B0, const ACC<double> &eveqNO_B0, const ACC<double> &eveqO2_B0, const ACC<double> &p_B0, const
ACC<double> &ptauN2_B0, const ACC<double> &ptauNO_B0, const ACC<double> &ptauO2_B0, const ACC<double> &rhoE_B0, const
ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0, const ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const
ACC<double> &rhoO_B0, const ACC<double> &rhoev_B0, const ACC<double> &rhou0_B0, const ACC<double> &u0_B0, const
ACC<double> &wdotN2_B0, const ACC<double> &wdotNO_B0, const ACC<double> &wdotN_B0, const ACC<double> &wdotO2_B0, const
ACC<double> &wdotO_B0, const ACC<double> &wk0_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double>
&Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0, ACC<double> &Residual5_B0, ACC<double>
&Residual6_B0, ACC<double> &Residual7_B0, const int *idx)
{
   double d1_p_dx = 0.0;
   double d1_pu0_dx = 0.0;
   double d1_rhoE_dx = 0.0;
   double d1_rhoEu0_dx = 0.0;
   double d1_rhoN2_dx = 0.0;
   double d1_rhoN2u0_dx = 0.0;
   double d1_rhoNO_dx = 0.0;
   double d1_rhoNOu0_dx = 0.0;
   double d1_rhoN_dx = 0.0;
   double d1_rhoNu0_dx = 0.0;
   double d1_rhoO2_dx = 0.0;
   double d1_rhoO2u0_dx = 0.0;
   double d1_rhoO_dx = 0.0;
   double d1_rhoOu0_dx = 0.0;
   double d1_rhoev_dx = 0.0;
   double d1_rhoevu0_dx = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0u0_dx = 0.0;
   if (idx[0] == 0){

      d1_p_dx = (3.0*p_B0(1) + 0.333333333333333*p_B0(3) - 1.5*p_B0(2) - 1.83333333333333*p_B0(0))*invDelta0block0;

       d1_pu0_dx = (3.0*p_B0(1)*u0_B0(1) + 0.333333333333333*p_B0(3)*u0_B0(3) - 1.5*p_B0(2)*u0_B0(2) -
            1.83333333333333*p_B0(0)*u0_B0(0))*invDelta0block0;

       d1_rhoE_dx = (3.0*rhoE_B0(1) + 0.333333333333333*rhoE_B0(3) - 1.5*rhoE_B0(2) -
            1.83333333333333*rhoE_B0(0))*invDelta0block0;

       d1_rhoEu0_dx = (3.0*u0_B0(1)*rhoE_B0(1) + 0.333333333333333*u0_B0(3)*rhoE_B0(3) - 1.5*u0_B0(2)*rhoE_B0(2) -
            1.83333333333333*u0_B0(0)*rhoE_B0(0))*invDelta0block0;

       d1_rhoN2_dx = (3.0*rhoN2_B0(1) + 0.333333333333333*rhoN2_B0(3) - 1.5*rhoN2_B0(2) -
            1.83333333333333*rhoN2_B0(0))*invDelta0block0;

       d1_rhoN2u0_dx = (3.0*u0_B0(1)*rhoN2_B0(1) + 0.333333333333333*u0_B0(3)*rhoN2_B0(3) - 1.5*u0_B0(2)*rhoN2_B0(2) -
            1.83333333333333*u0_B0(0)*rhoN2_B0(0))*invDelta0block0;

       d1_rhoNO_dx = (3.0*rhoNO_B0(1) + 0.333333333333333*rhoNO_B0(3) - 1.5*rhoNO_B0(2) -
            1.83333333333333*rhoNO_B0(0))*invDelta0block0;

       d1_rhoNOu0_dx = (3.0*u0_B0(1)*rhoNO_B0(1) + 0.333333333333333*u0_B0(3)*rhoNO_B0(3) - 1.5*u0_B0(2)*rhoNO_B0(2) -
            1.83333333333333*u0_B0(0)*rhoNO_B0(0))*invDelta0block0;

       d1_rhoN_dx = (3.0*rhoN_B0(1) + 0.333333333333333*rhoN_B0(3) - 1.5*rhoN_B0(2) -
            1.83333333333333*rhoN_B0(0))*invDelta0block0;

       d1_rhoNu0_dx = (3.0*u0_B0(1)*rhoN_B0(1) + 0.333333333333333*u0_B0(3)*rhoN_B0(3) - 1.5*u0_B0(2)*rhoN_B0(2) -
            1.83333333333333*u0_B0(0)*rhoN_B0(0))*invDelta0block0;

       d1_rhoO2_dx = (3.0*rhoO2_B0(1) + 0.333333333333333*rhoO2_B0(3) - 1.5*rhoO2_B0(2) -
            1.83333333333333*rhoO2_B0(0))*invDelta0block0;

       d1_rhoO2u0_dx = (3.0*u0_B0(1)*rhoO2_B0(1) + 0.333333333333333*u0_B0(3)*rhoO2_B0(3) - 1.5*u0_B0(2)*rhoO2_B0(2) -
            1.83333333333333*u0_B0(0)*rhoO2_B0(0))*invDelta0block0;

       d1_rhoO_dx = (3.0*rhoO_B0(1) + 0.333333333333333*rhoO_B0(3) - 1.5*rhoO_B0(2) -
            1.83333333333333*rhoO_B0(0))*invDelta0block0;

       d1_rhoOu0_dx = (3.0*u0_B0(1)*rhoO_B0(1) + 0.333333333333333*u0_B0(3)*rhoO_B0(3) - 1.5*u0_B0(2)*rhoO_B0(2) -
            1.83333333333333*u0_B0(0)*rhoO_B0(0))*invDelta0block0;

       d1_rhoev_dx = (3.0*rhoev_B0(1) + 0.333333333333333*rhoev_B0(3) - 1.5*rhoev_B0(2) -
            1.83333333333333*rhoev_B0(0))*invDelta0block0;

       d1_rhoevu0_dx = (3.0*u0_B0(1)*rhoev_B0(1) + 0.333333333333333*u0_B0(3)*rhoev_B0(3) - 1.5*u0_B0(2)*rhoev_B0(2) -
            1.83333333333333*u0_B0(0)*rhoev_B0(0))*invDelta0block0;

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

       d1_rhoE_dx = (0.0394168524399447*rhoE_B0(2) + 0.00571369039775442*rhoE_B0(4) + 0.719443173328855*rhoE_B0(1) -
            0.322484932882161*rhoE_B0(0) - 0.0658051057710389*rhoE_B0(3) -
            0.376283677513354*rhoE_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.0394168524399447*u0_B0(2)*rhoE_B0(2) + 0.00571369039775442*u0_B0(4)*rhoE_B0(4) +
            0.719443173328855*u0_B0(1)*rhoE_B0(1) - 0.322484932882161*u0_B0(0)*rhoE_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoE_B0(3) - 0.376283677513354*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_rhoN2_dx = (0.0394168524399447*rhoN2_B0(2) + 0.00571369039775442*rhoN2_B0(4) + 0.719443173328855*rhoN2_B0(1) -
            0.322484932882161*rhoN2_B0(0) - 0.0658051057710389*rhoN2_B0(3) -
            0.376283677513354*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.0394168524399447*u0_B0(2)*rhoN2_B0(2) + 0.00571369039775442*u0_B0(4)*rhoN2_B0(4) +
            0.719443173328855*u0_B0(1)*rhoN2_B0(1) - 0.322484932882161*u0_B0(0)*rhoN2_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoN2_B0(3) - 0.376283677513354*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNO_dx = (0.0394168524399447*rhoNO_B0(2) + 0.00571369039775442*rhoNO_B0(4) + 0.719443173328855*rhoNO_B0(1) -
            0.322484932882161*rhoNO_B0(0) - 0.0658051057710389*rhoNO_B0(3) -
            0.376283677513354*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNOu0_dx = (0.0394168524399447*u0_B0(2)*rhoNO_B0(2) + 0.00571369039775442*u0_B0(4)*rhoNO_B0(4) +
            0.719443173328855*u0_B0(1)*rhoNO_B0(1) - 0.322484932882161*u0_B0(0)*rhoNO_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoNO_B0(3) - 0.376283677513354*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoN_dx = (0.0394168524399447*rhoN_B0(2) + 0.00571369039775442*rhoN_B0(4) + 0.719443173328855*rhoN_B0(1) -
            0.322484932882161*rhoN_B0(0) - 0.0658051057710389*rhoN_B0(3) -
            0.376283677513354*rhoN_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.0394168524399447*u0_B0(2)*rhoN_B0(2) + 0.00571369039775442*u0_B0(4)*rhoN_B0(4) +
            0.719443173328855*u0_B0(1)*rhoN_B0(1) - 0.322484932882161*u0_B0(0)*rhoN_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoN_B0(3) - 0.376283677513354*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2_dx = (0.0394168524399447*rhoO2_B0(2) + 0.00571369039775442*rhoO2_B0(4) + 0.719443173328855*rhoO2_B0(1) -
            0.322484932882161*rhoO2_B0(0) - 0.0658051057710389*rhoO2_B0(3) -
            0.376283677513354*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.0394168524399447*u0_B0(2)*rhoO2_B0(2) + 0.00571369039775442*u0_B0(4)*rhoO2_B0(4) +
            0.719443173328855*u0_B0(1)*rhoO2_B0(1) - 0.322484932882161*u0_B0(0)*rhoO2_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoO2_B0(3) - 0.376283677513354*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO_dx = (0.0394168524399447*rhoO_B0(2) + 0.00571369039775442*rhoO_B0(4) + 0.719443173328855*rhoO_B0(1) -
            0.322484932882161*rhoO_B0(0) - 0.0658051057710389*rhoO_B0(3) -
            0.376283677513354*rhoO_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.0394168524399447*u0_B0(2)*rhoO_B0(2) + 0.00571369039775442*u0_B0(4)*rhoO_B0(4) +
            0.719443173328855*u0_B0(1)*rhoO_B0(1) - 0.322484932882161*u0_B0(0)*rhoO_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoO_B0(3) - 0.376283677513354*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

       d1_rhoev_dx = (0.0394168524399447*rhoev_B0(2) + 0.00571369039775442*rhoev_B0(4) + 0.719443173328855*rhoev_B0(1) -
            0.322484932882161*rhoev_B0(0) - 0.0658051057710389*rhoev_B0(3) -
            0.376283677513354*rhoev_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.0394168524399447*u0_B0(2)*rhoev_B0(2) + 0.00571369039775442*u0_B0(4)*rhoev_B0(4) +
            0.719443173328855*u0_B0(1)*rhoev_B0(1) - 0.322484932882161*u0_B0(0)*rhoev_B0(0) -
            0.0658051057710389*u0_B0(3)*rhoev_B0(3) - 0.376283677513354*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

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

       d1_rhoE_dx = (0.197184333887745*rhoE_B0(0) + 0.521455851089587*rhoE_B0(1) + 0.113446470384241*rhoE_B0(-2) -
            0.00412637789557492*rhoE_B0(3) - 0.0367146847001261*rhoE_B0(2) -
            0.791245592765872*rhoE_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.197184333887745*u0_B0(0)*rhoE_B0(0) + 0.521455851089587*u0_B0(1)*rhoE_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoE_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoE_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoE_B0(2) - 0.791245592765872*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_rhoN2_dx = (0.197184333887745*rhoN2_B0(0) + 0.521455851089587*rhoN2_B0(1) + 0.113446470384241*rhoN2_B0(-2) -
            0.00412637789557492*rhoN2_B0(3) - 0.0367146847001261*rhoN2_B0(2) -
            0.791245592765872*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.197184333887745*u0_B0(0)*rhoN2_B0(0) + 0.521455851089587*u0_B0(1)*rhoN2_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoN2_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoN2_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoN2_B0(2) - 0.791245592765872*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNO_dx = (0.197184333887745*rhoNO_B0(0) + 0.521455851089587*rhoNO_B0(1) + 0.113446470384241*rhoNO_B0(-2) -
            0.00412637789557492*rhoNO_B0(3) - 0.0367146847001261*rhoNO_B0(2) -
            0.791245592765872*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNOu0_dx = (0.197184333887745*u0_B0(0)*rhoNO_B0(0) + 0.521455851089587*u0_B0(1)*rhoNO_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoNO_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoNO_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoNO_B0(2) - 0.791245592765872*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoN_dx = (0.197184333887745*rhoN_B0(0) + 0.521455851089587*rhoN_B0(1) + 0.113446470384241*rhoN_B0(-2) -
            0.00412637789557492*rhoN_B0(3) - 0.0367146847001261*rhoN_B0(2) -
            0.791245592765872*rhoN_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.197184333887745*u0_B0(0)*rhoN_B0(0) + 0.521455851089587*u0_B0(1)*rhoN_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoN_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoN_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoN_B0(2) - 0.791245592765872*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2_dx = (0.197184333887745*rhoO2_B0(0) + 0.521455851089587*rhoO2_B0(1) + 0.113446470384241*rhoO2_B0(-2) -
            0.00412637789557492*rhoO2_B0(3) - 0.0367146847001261*rhoO2_B0(2) -
            0.791245592765872*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.197184333887745*u0_B0(0)*rhoO2_B0(0) + 0.521455851089587*u0_B0(1)*rhoO2_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoO2_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoO2_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoO2_B0(2) - 0.791245592765872*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO_dx = (0.197184333887745*rhoO_B0(0) + 0.521455851089587*rhoO_B0(1) + 0.113446470384241*rhoO_B0(-2) -
            0.00412637789557492*rhoO_B0(3) - 0.0367146847001261*rhoO_B0(2) -
            0.791245592765872*rhoO_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.197184333887745*u0_B0(0)*rhoO_B0(0) + 0.521455851089587*u0_B0(1)*rhoO_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoO_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoO_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoO_B0(2) - 0.791245592765872*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

       d1_rhoev_dx = (0.197184333887745*rhoev_B0(0) + 0.521455851089587*rhoev_B0(1) + 0.113446470384241*rhoev_B0(-2) -
            0.00412637789557492*rhoev_B0(3) - 0.0367146847001261*rhoev_B0(2) -
            0.791245592765872*rhoev_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.197184333887745*u0_B0(0)*rhoev_B0(0) + 0.521455851089587*u0_B0(1)*rhoev_B0(1) +
            0.113446470384241*u0_B0(-2)*rhoev_B0(-2) - 0.00412637789557492*u0_B0(3)*rhoev_B0(3) -
            0.0367146847001261*u0_B0(2)*rhoev_B0(2) - 0.791245592765872*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

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

       d1_rhoE_dx = (0.0451033223343881*rhoE_B0(0) + 0.652141084861241*rhoE_B0(1) + 0.121937153224065*rhoE_B0(-2) -
            0.00932597985049999*rhoE_B0(-3) - 0.727822147724592*rhoE_B0(-1) -
            0.082033432844602*rhoE_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.0451033223343881*u0_B0(0)*rhoE_B0(0) + 0.652141084861241*u0_B0(1)*rhoE_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoE_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoE_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoE_B0(-1) - 0.082033432844602*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_rhoN2_dx = (0.0451033223343881*rhoN2_B0(0) + 0.652141084861241*rhoN2_B0(1) + 0.121937153224065*rhoN2_B0(-2) -
            0.00932597985049999*rhoN2_B0(-3) - 0.727822147724592*rhoN2_B0(-1) -
            0.082033432844602*rhoN2_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.0451033223343881*u0_B0(0)*rhoN2_B0(0) + 0.652141084861241*u0_B0(1)*rhoN2_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoN2_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoN2_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoN2_B0(-1) - 0.082033432844602*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNO_dx = (0.0451033223343881*rhoNO_B0(0) + 0.652141084861241*rhoNO_B0(1) + 0.121937153224065*rhoNO_B0(-2) -
            0.00932597985049999*rhoNO_B0(-3) - 0.727822147724592*rhoNO_B0(-1) -
            0.082033432844602*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNOu0_dx = (0.0451033223343881*u0_B0(0)*rhoNO_B0(0) + 0.652141084861241*u0_B0(1)*rhoNO_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoNO_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoNO_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoNO_B0(-1) - 0.082033432844602*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoN_dx = (0.0451033223343881*rhoN_B0(0) + 0.652141084861241*rhoN_B0(1) + 0.121937153224065*rhoN_B0(-2) -
            0.00932597985049999*rhoN_B0(-3) - 0.727822147724592*rhoN_B0(-1) -
            0.082033432844602*rhoN_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.0451033223343881*u0_B0(0)*rhoN_B0(0) + 0.652141084861241*u0_B0(1)*rhoN_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoN_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoN_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoN_B0(-1) - 0.082033432844602*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2_dx = (0.0451033223343881*rhoO2_B0(0) + 0.652141084861241*rhoO2_B0(1) + 0.121937153224065*rhoO2_B0(-2) -
            0.00932597985049999*rhoO2_B0(-3) - 0.727822147724592*rhoO2_B0(-1) -
            0.082033432844602*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.0451033223343881*u0_B0(0)*rhoO2_B0(0) + 0.652141084861241*u0_B0(1)*rhoO2_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoO2_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoO2_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoO2_B0(-1) - 0.082033432844602*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO_dx = (0.0451033223343881*rhoO_B0(0) + 0.652141084861241*rhoO_B0(1) + 0.121937153224065*rhoO_B0(-2) -
            0.00932597985049999*rhoO_B0(-3) - 0.727822147724592*rhoO_B0(-1) -
            0.082033432844602*rhoO_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.0451033223343881*u0_B0(0)*rhoO_B0(0) + 0.652141084861241*u0_B0(1)*rhoO_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoO_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoO_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoO_B0(-1) - 0.082033432844602*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

       d1_rhoev_dx = (0.0451033223343881*rhoev_B0(0) + 0.652141084861241*rhoev_B0(1) + 0.121937153224065*rhoev_B0(-2) -
            0.00932597985049999*rhoev_B0(-3) - 0.727822147724592*rhoev_B0(-1) -
            0.082033432844602*rhoev_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.0451033223343881*u0_B0(0)*rhoev_B0(0) + 0.652141084861241*u0_B0(1)*rhoev_B0(1) +
            0.121937153224065*u0_B0(-2)*rhoev_B0(-2) - 0.00932597985049999*u0_B0(-3)*rhoev_B0(-3) -
            0.727822147724592*u0_B0(-1)*rhoev_B0(-1) - 0.082033432844602*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

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

       d1_rhoE_dx = (1.5*rhoE_B0(-2) + 1.83333333333333*rhoE_B0(0) - 3.0*rhoE_B0(-1) -
            0.333333333333333*rhoE_B0(-3))*invDelta0block0;

       d1_rhoEu0_dx = (1.5*u0_B0(-2)*rhoE_B0(-2) + 1.83333333333333*u0_B0(0)*rhoE_B0(0) - 3.0*u0_B0(-1)*rhoE_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoE_B0(-3))*invDelta0block0;

       d1_rhoN2_dx = (1.5*rhoN2_B0(-2) + 1.83333333333333*rhoN2_B0(0) - 3.0*rhoN2_B0(-1) -
            0.333333333333333*rhoN2_B0(-3))*invDelta0block0;

       d1_rhoN2u0_dx = (1.5*u0_B0(-2)*rhoN2_B0(-2) + 1.83333333333333*u0_B0(0)*rhoN2_B0(0) - 3.0*u0_B0(-1)*rhoN2_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoN2_B0(-3))*invDelta0block0;

       d1_rhoNO_dx = (1.5*rhoNO_B0(-2) + 1.83333333333333*rhoNO_B0(0) - 3.0*rhoNO_B0(-1) -
            0.333333333333333*rhoNO_B0(-3))*invDelta0block0;

       d1_rhoNOu0_dx = (1.5*u0_B0(-2)*rhoNO_B0(-2) + 1.83333333333333*u0_B0(0)*rhoNO_B0(0) - 3.0*u0_B0(-1)*rhoNO_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoNO_B0(-3))*invDelta0block0;

       d1_rhoN_dx = (1.5*rhoN_B0(-2) + 1.83333333333333*rhoN_B0(0) - 3.0*rhoN_B0(-1) -
            0.333333333333333*rhoN_B0(-3))*invDelta0block0;

       d1_rhoNu0_dx = (1.5*u0_B0(-2)*rhoN_B0(-2) + 1.83333333333333*u0_B0(0)*rhoN_B0(0) - 3.0*u0_B0(-1)*rhoN_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoN_B0(-3))*invDelta0block0;

       d1_rhoO2_dx = (1.5*rhoO2_B0(-2) + 1.83333333333333*rhoO2_B0(0) - 3.0*rhoO2_B0(-1) -
            0.333333333333333*rhoO2_B0(-3))*invDelta0block0;

       d1_rhoO2u0_dx = (1.5*u0_B0(-2)*rhoO2_B0(-2) + 1.83333333333333*u0_B0(0)*rhoO2_B0(0) - 3.0*u0_B0(-1)*rhoO2_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoO2_B0(-3))*invDelta0block0;

       d1_rhoO_dx = (1.5*rhoO_B0(-2) + 1.83333333333333*rhoO_B0(0) - 3.0*rhoO_B0(-1) -
            0.333333333333333*rhoO_B0(-3))*invDelta0block0;

       d1_rhoOu0_dx = (1.5*u0_B0(-2)*rhoO_B0(-2) + 1.83333333333333*u0_B0(0)*rhoO_B0(0) - 3.0*u0_B0(-1)*rhoO_B0(-1) -
            0.333333333333333*u0_B0(-3)*rhoO_B0(-3))*invDelta0block0;

       d1_rhoev_dx = (1.5*rhoev_B0(-2) + 1.83333333333333*rhoev_B0(0) - 3.0*rhoev_B0(-1) -
            0.333333333333333*rhoev_B0(-3))*invDelta0block0;

       d1_rhoevu0_dx = (1.5*u0_B0(-2)*rhoev_B0(-2) + 1.83333333333333*u0_B0(0)*rhoev_B0(0) - 3.0*u0_B0(-1)*rhoev_B0(-1)
            - 0.333333333333333*u0_B0(-3)*rhoev_B0(-3))*invDelta0block0;

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

       d1_rhoE_dx = (0.322484932882161*rhoE_B0(0) + 0.0658051057710389*rhoE_B0(-3) + 0.376283677513354*rhoE_B0(1) -
            0.0394168524399447*rhoE_B0(-2) - 0.00571369039775442*rhoE_B0(-4) -
            0.719443173328855*rhoE_B0(-1))*invDelta0block0;

       d1_rhoEu0_dx = (0.322484932882161*u0_B0(0)*rhoE_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoE_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoE_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoE_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoE_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoE_B0(-1))*invDelta0block0;

       d1_rhoN2_dx = (0.322484932882161*rhoN2_B0(0) + 0.0658051057710389*rhoN2_B0(-3) + 0.376283677513354*rhoN2_B0(1) -
            0.0394168524399447*rhoN2_B0(-2) - 0.00571369039775442*rhoN2_B0(-4) -
            0.719443173328855*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoN2u0_dx = (0.322484932882161*u0_B0(0)*rhoN2_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoN2_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoN2_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoN2_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoN2_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoN2_B0(-1))*invDelta0block0;

       d1_rhoNO_dx = (0.322484932882161*rhoNO_B0(0) + 0.0658051057710389*rhoNO_B0(-3) + 0.376283677513354*rhoNO_B0(1) -
            0.0394168524399447*rhoNO_B0(-2) - 0.00571369039775442*rhoNO_B0(-4) -
            0.719443173328855*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoNOu0_dx = (0.322484932882161*u0_B0(0)*rhoNO_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoNO_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoNO_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoNO_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoNO_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoNO_B0(-1))*invDelta0block0;

       d1_rhoN_dx = (0.322484932882161*rhoN_B0(0) + 0.0658051057710389*rhoN_B0(-3) + 0.376283677513354*rhoN_B0(1) -
            0.0394168524399447*rhoN_B0(-2) - 0.00571369039775442*rhoN_B0(-4) -
            0.719443173328855*rhoN_B0(-1))*invDelta0block0;

       d1_rhoNu0_dx = (0.322484932882161*u0_B0(0)*rhoN_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoN_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoN_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoN_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoN_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoN_B0(-1))*invDelta0block0;

       d1_rhoO2_dx = (0.322484932882161*rhoO2_B0(0) + 0.0658051057710389*rhoO2_B0(-3) + 0.376283677513354*rhoO2_B0(1) -
            0.0394168524399447*rhoO2_B0(-2) - 0.00571369039775442*rhoO2_B0(-4) -
            0.719443173328855*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO2u0_dx = (0.322484932882161*u0_B0(0)*rhoO2_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoO2_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoO2_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoO2_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoO2_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoO2_B0(-1))*invDelta0block0;

       d1_rhoO_dx = (0.322484932882161*rhoO_B0(0) + 0.0658051057710389*rhoO_B0(-3) + 0.376283677513354*rhoO_B0(1) -
            0.0394168524399447*rhoO_B0(-2) - 0.00571369039775442*rhoO_B0(-4) -
            0.719443173328855*rhoO_B0(-1))*invDelta0block0;

       d1_rhoOu0_dx = (0.322484932882161*u0_B0(0)*rhoO_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoO_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoO_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoO_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoO_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoO_B0(-1))*invDelta0block0;

       d1_rhoev_dx = (0.322484932882161*rhoev_B0(0) + 0.0658051057710389*rhoev_B0(-3) + 0.376283677513354*rhoev_B0(1) -
            0.0394168524399447*rhoev_B0(-2) - 0.00571369039775442*rhoev_B0(-4) -
            0.719443173328855*rhoev_B0(-1))*invDelta0block0;

       d1_rhoevu0_dx = (0.322484932882161*u0_B0(0)*rhoev_B0(0) + 0.0658051057710389*u0_B0(-3)*rhoev_B0(-3) +
            0.376283677513354*u0_B0(1)*rhoev_B0(1) - 0.0394168524399447*u0_B0(-2)*rhoev_B0(-2) -
            0.00571369039775442*u0_B0(-4)*rhoev_B0(-4) - 0.719443173328855*u0_B0(-1)*rhoev_B0(-1))*invDelta0block0;

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

       d1_rhoE_dx = (0.00412637789557492*rhoE_B0(-3) + 0.0367146847001261*rhoE_B0(-2) + 0.791245592765872*rhoE_B0(1) -
            0.197184333887745*rhoE_B0(0) - 0.521455851089587*rhoE_B0(-1) -
            0.113446470384241*rhoE_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.00412637789557492*u0_B0(-3)*rhoE_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoE_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoE_B0(1) - 0.197184333887745*u0_B0(0)*rhoE_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoE_B0(-1) - 0.113446470384241*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_rhoN2_dx = (0.00412637789557492*rhoN2_B0(-3) + 0.0367146847001261*rhoN2_B0(-2) + 0.791245592765872*rhoN2_B0(1)
            - 0.197184333887745*rhoN2_B0(0) - 0.521455851089587*rhoN2_B0(-1) -
            0.113446470384241*rhoN2_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.00412637789557492*u0_B0(-3)*rhoN2_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoN2_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoN2_B0(1) - 0.197184333887745*u0_B0(0)*rhoN2_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoN2_B0(-1) - 0.113446470384241*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNO_dx = (0.00412637789557492*rhoNO_B0(-3) + 0.0367146847001261*rhoNO_B0(-2) + 0.791245592765872*rhoNO_B0(1)
            - 0.197184333887745*rhoNO_B0(0) - 0.521455851089587*rhoNO_B0(-1) -
            0.113446470384241*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNOu0_dx = (0.00412637789557492*u0_B0(-3)*rhoNO_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoNO_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoNO_B0(1) - 0.197184333887745*u0_B0(0)*rhoNO_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoNO_B0(-1) - 0.113446470384241*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoN_dx = (0.00412637789557492*rhoN_B0(-3) + 0.0367146847001261*rhoN_B0(-2) + 0.791245592765872*rhoN_B0(1) -
            0.197184333887745*rhoN_B0(0) - 0.521455851089587*rhoN_B0(-1) -
            0.113446470384241*rhoN_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00412637789557492*u0_B0(-3)*rhoN_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoN_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoN_B0(1) - 0.197184333887745*u0_B0(0)*rhoN_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoN_B0(-1) - 0.113446470384241*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2_dx = (0.00412637789557492*rhoO2_B0(-3) + 0.0367146847001261*rhoO2_B0(-2) + 0.791245592765872*rhoO2_B0(1)
            - 0.197184333887745*rhoO2_B0(0) - 0.521455851089587*rhoO2_B0(-1) -
            0.113446470384241*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.00412637789557492*u0_B0(-3)*rhoO2_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoO2_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoO2_B0(1) - 0.197184333887745*u0_B0(0)*rhoO2_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoO2_B0(-1) - 0.113446470384241*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO_dx = (0.00412637789557492*rhoO_B0(-3) + 0.0367146847001261*rhoO_B0(-2) + 0.791245592765872*rhoO_B0(1) -
            0.197184333887745*rhoO_B0(0) - 0.521455851089587*rhoO_B0(-1) -
            0.113446470384241*rhoO_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.00412637789557492*u0_B0(-3)*rhoO_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoO_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoO_B0(1) - 0.197184333887745*u0_B0(0)*rhoO_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoO_B0(-1) - 0.113446470384241*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

       d1_rhoev_dx = (0.00412637789557492*rhoev_B0(-3) + 0.0367146847001261*rhoev_B0(-2) + 0.791245592765872*rhoev_B0(1)
            - 0.197184333887745*rhoev_B0(0) - 0.521455851089587*rhoev_B0(-1) -
            0.113446470384241*rhoev_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.00412637789557492*u0_B0(-3)*rhoev_B0(-3) + 0.0367146847001261*u0_B0(-2)*rhoev_B0(-2) +
            0.791245592765872*u0_B0(1)*rhoev_B0(1) - 0.197184333887745*u0_B0(0)*rhoev_B0(0) -
            0.521455851089587*u0_B0(-1)*rhoev_B0(-1) - 0.113446470384241*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

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

       d1_rhoE_dx = (0.00932597985049999*rhoE_B0(3) + 0.727822147724592*rhoE_B0(1) + 0.082033432844602*rhoE_B0(-2) -
            0.0451033223343881*rhoE_B0(0) - 0.652141084861241*rhoE_B0(-1) -
            0.121937153224065*rhoE_B0(2))*invDelta0block0;

       d1_rhoEu0_dx = (0.00932597985049999*u0_B0(3)*rhoE_B0(3) + 0.727822147724592*u0_B0(1)*rhoE_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoE_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoE_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoE_B0(-1) - 0.121937153224065*u0_B0(2)*rhoE_B0(2))*invDelta0block0;

       d1_rhoN2_dx = (0.00932597985049999*rhoN2_B0(3) + 0.727822147724592*rhoN2_B0(1) + 0.082033432844602*rhoN2_B0(-2) -
            0.0451033223343881*rhoN2_B0(0) - 0.652141084861241*rhoN2_B0(-1) -
            0.121937153224065*rhoN2_B0(2))*invDelta0block0;

       d1_rhoN2u0_dx = (0.00932597985049999*u0_B0(3)*rhoN2_B0(3) + 0.727822147724592*u0_B0(1)*rhoN2_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoN2_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoN2_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoN2_B0(-1) - 0.121937153224065*u0_B0(2)*rhoN2_B0(2))*invDelta0block0;

       d1_rhoNO_dx = (0.00932597985049999*rhoNO_B0(3) + 0.727822147724592*rhoNO_B0(1) + 0.082033432844602*rhoNO_B0(-2) -
            0.0451033223343881*rhoNO_B0(0) - 0.652141084861241*rhoNO_B0(-1) -
            0.121937153224065*rhoNO_B0(2))*invDelta0block0;

       d1_rhoNOu0_dx = (0.00932597985049999*u0_B0(3)*rhoNO_B0(3) + 0.727822147724592*u0_B0(1)*rhoNO_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoNO_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoNO_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoNO_B0(-1) - 0.121937153224065*u0_B0(2)*rhoNO_B0(2))*invDelta0block0;

       d1_rhoN_dx = (0.00932597985049999*rhoN_B0(3) + 0.727822147724592*rhoN_B0(1) + 0.082033432844602*rhoN_B0(-2) -
            0.0451033223343881*rhoN_B0(0) - 0.652141084861241*rhoN_B0(-1) -
            0.121937153224065*rhoN_B0(2))*invDelta0block0;

       d1_rhoNu0_dx = (0.00932597985049999*u0_B0(3)*rhoN_B0(3) + 0.727822147724592*u0_B0(1)*rhoN_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoN_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoN_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoN_B0(-1) - 0.121937153224065*u0_B0(2)*rhoN_B0(2))*invDelta0block0;

       d1_rhoO2_dx = (0.00932597985049999*rhoO2_B0(3) + 0.727822147724592*rhoO2_B0(1) + 0.082033432844602*rhoO2_B0(-2) -
            0.0451033223343881*rhoO2_B0(0) - 0.652141084861241*rhoO2_B0(-1) -
            0.121937153224065*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO2u0_dx = (0.00932597985049999*u0_B0(3)*rhoO2_B0(3) + 0.727822147724592*u0_B0(1)*rhoO2_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoO2_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoO2_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoO2_B0(-1) - 0.121937153224065*u0_B0(2)*rhoO2_B0(2))*invDelta0block0;

       d1_rhoO_dx = (0.00932597985049999*rhoO_B0(3) + 0.727822147724592*rhoO_B0(1) + 0.082033432844602*rhoO_B0(-2) -
            0.0451033223343881*rhoO_B0(0) - 0.652141084861241*rhoO_B0(-1) -
            0.121937153224065*rhoO_B0(2))*invDelta0block0;

       d1_rhoOu0_dx = (0.00932597985049999*u0_B0(3)*rhoO_B0(3) + 0.727822147724592*u0_B0(1)*rhoO_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoO_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoO_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoO_B0(-1) - 0.121937153224065*u0_B0(2)*rhoO_B0(2))*invDelta0block0;

       d1_rhoev_dx = (0.00932597985049999*rhoev_B0(3) + 0.727822147724592*rhoev_B0(1) + 0.082033432844602*rhoev_B0(-2) -
            0.0451033223343881*rhoev_B0(0) - 0.652141084861241*rhoev_B0(-1) -
            0.121937153224065*rhoev_B0(2))*invDelta0block0;

       d1_rhoevu0_dx = (0.00932597985049999*u0_B0(3)*rhoev_B0(3) + 0.727822147724592*u0_B0(1)*rhoev_B0(1) +
            0.082033432844602*u0_B0(-2)*rhoev_B0(-2) - 0.0451033223343881*u0_B0(0)*rhoev_B0(0) -
            0.652141084861241*u0_B0(-1)*rhoev_B0(-1) - 0.121937153224065*u0_B0(2)*rhoev_B0(2))*invDelta0block0;

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

       d1_rhoE_dx = (-(2.0/3.0)*rhoE_B0(-1) - (1.0/12.0)*rhoE_B0(2) + ((1.0/12.0))*rhoE_B0(-2) +
            ((2.0/3.0))*rhoE_B0(1))*invDelta0block0;

       d1_rhoEu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoE_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoE_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoE_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoE_B0(1))*invDelta0block0;

       d1_rhoN2_dx = (-(2.0/3.0)*rhoN2_B0(-1) - (1.0/12.0)*rhoN2_B0(2) + ((1.0/12.0))*rhoN2_B0(-2) +
            ((2.0/3.0))*rhoN2_B0(1))*invDelta0block0;

       d1_rhoN2u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoN2_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoN2_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoN2_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoN2_B0(1))*invDelta0block0;

       d1_rhoNO_dx = (-(2.0/3.0)*rhoNO_B0(-1) - (1.0/12.0)*rhoNO_B0(2) + ((1.0/12.0))*rhoNO_B0(-2) +
            ((2.0/3.0))*rhoNO_B0(1))*invDelta0block0;

       d1_rhoNOu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoNO_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoNO_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoNO_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoNO_B0(1))*invDelta0block0;

       d1_rhoN_dx = (-(2.0/3.0)*rhoN_B0(-1) - (1.0/12.0)*rhoN_B0(2) + ((1.0/12.0))*rhoN_B0(-2) +
            ((2.0/3.0))*rhoN_B0(1))*invDelta0block0;

       d1_rhoNu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoN_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoN_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoN_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoN_B0(1))*invDelta0block0;

       d1_rhoO2_dx = (-(2.0/3.0)*rhoO2_B0(-1) - (1.0/12.0)*rhoO2_B0(2) + ((1.0/12.0))*rhoO2_B0(-2) +
            ((2.0/3.0))*rhoO2_B0(1))*invDelta0block0;

       d1_rhoO2u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoO2_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoO2_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoO2_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoO2_B0(1))*invDelta0block0;

       d1_rhoO_dx = (-(2.0/3.0)*rhoO_B0(-1) - (1.0/12.0)*rhoO_B0(2) + ((1.0/12.0))*rhoO_B0(-2) +
            ((2.0/3.0))*rhoO_B0(1))*invDelta0block0;

       d1_rhoOu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoO_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoO_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoO_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoO_B0(1))*invDelta0block0;

       d1_rhoev_dx = (-(2.0/3.0)*rhoev_B0(-1) - (1.0/12.0)*rhoev_B0(2) + ((1.0/12.0))*rhoev_B0(-2) +
            ((2.0/3.0))*rhoev_B0(1))*invDelta0block0;

       d1_rhoevu0_dx = (-(2.0/3.0)*u0_B0(-1)*rhoev_B0(-1) - (1.0/12.0)*u0_B0(2)*rhoev_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhoev_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhoev_B0(1))*invDelta0block0;

       d1_rhou0_dx = (-(2.0/3.0)*rhou0_B0(-1) - (1.0/12.0)*rhou0_B0(2) + ((1.0/12.0))*rhou0_B0(-2) +
            ((2.0/3.0))*rhou0_B0(1))*invDelta0block0;

       d1_rhou0u0_dx = (-(2.0/3.0)*u0_B0(-1)*rhou0_B0(-1) - (1.0/12.0)*u0_B0(2)*rhou0_B0(2) +
            ((1.0/12.0))*u0_B0(-2)*rhou0_B0(-2) + ((2.0/3.0))*u0_B0(1)*rhou0_B0(1))*invDelta0block0;

   }

    Residual0_B0(0) = -(1.0/2.0)*d1_rhoOu0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoO_dx - (1.0/2.0)*wk0_B0(0)*rhoO_B0(0) +
      wdotO_B0(0);

    Residual1_B0(0) = -(1.0/2.0)*d1_rhoO2u0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoO2_dx - (1.0/2.0)*wk0_B0(0)*rhoO2_B0(0) +
      wdotO2_B0(0);

    Residual2_B0(0) = -(1.0/2.0)*d1_rhoNu0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoN_dx - (1.0/2.0)*wk0_B0(0)*rhoN_B0(0) +
      wdotN_B0(0);

    Residual3_B0(0) = -(1.0/2.0)*d1_rhoN2u0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoN2_dx - (1.0/2.0)*wk0_B0(0)*rhoN2_B0(0) +
      wdotN2_B0(0);

    Residual4_B0(0) = -(1.0/2.0)*d1_rhoNOu0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoNO_dx - (1.0/2.0)*wk0_B0(0)*rhoNO_B0(0) +
      wdotNO_B0(0);

    Residual5_B0(0) = -d1_p_dx - (1.0/2.0)*d1_rhou0u0_dx - (1.0/2.0)*u0_B0(0)*d1_rhou0_dx -
      (1.0/2.0)*wk0_B0(0)*rhou0_B0(0);

    Residual6_B0(0) = -(1.0/2.0)*d1_rhoevu0_dx + evN2_B0(0)*wdotN2_B0(0) + evNO_B0(0)*wdotNO_B0(0) +
      evO2_B0(0)*wdotO2_B0(0) - (1.0/2.0)*u0_B0(0)*d1_rhoev_dx - (1.0/2.0)*wk0_B0(0)*rhoev_B0(0) +
      9.86923266716013e-5*(invMN2*rhoN2_B0(0)/ptauN2_B0(0) + invMNO*rhoNO_B0(0)/ptauNO_B0(0) +
      invMO2*rhoO2_B0(0)/ptauO2_B0(0))*(-rhoev_B0(0) + rhoN2_B0(0)*eveqN2_B0(0) + rhoNO_B0(0)*eveqNO_B0(0) +
      rhoO2_B0(0)*eveqO2_B0(0))*p_B0(0)/(invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));

    Residual7_B0(0) = -d1_pu0_dx - (1.0/2.0)*d1_rhoEu0_dx - (1.0/2.0)*u0_B0(0)*d1_rhoE_dx -
      (1.0/2.0)*wk0_B0(0)*rhoE_B0(0);

}

 void opensbliblock00Kernel035(const ACC<double> &T_B0, const ACC<double> &Tv_B0, const ACC<double> &YN2_B0, const
ACC<double> &YNO_B0, const ACC<double> &YN_B0, const ACC<double> &YO_B0, const ACC<double> &evN2_B0, const ACC<double>
&evNO_B0, const ACC<double> &evO2_B0, const ACC<double> &kappa_B0, const ACC<double> &kappav_B0, const ACC<double>
&mu_B0, const ACC<double> &u0_B0, const ACC<double> &wk0_B0, const ACC<double> &yN2_B0, const ACC<double> &yNO_B0, const
ACC<double> &yN_B0, const ACC<double> &yO2_B0, const ACC<double> &yO_B0, ACC<double> &Residual0_B0, ACC<double>
&Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0, ACC<double>
&Residual5_B0, ACC<double> &Residual6_B0, ACC<double> &Residual7_B0, const int *idx)
{
   double d1_T_dx = 0.0;
   double d1_Tv_dx = 0.0;
   double d1_YN2_dx = 0.0;
   double d1_YNO_dx = 0.0;
   double d1_YN_dx = 0.0;
   double d1_YO_dx = 0.0;
   double d1_evN2_dx = 0.0;
   double d1_evNO_dx = 0.0;
   double d1_evO2_dx = 0.0;
   double d1_kappa_dx = 0.0;
   double d1_kappav_dx = 0.0;
   double d1_mu_dx = 0.0;
   double d1_yN2_dx = 0.0;
   double d1_yNO_dx = 0.0;
   double d1_yN_dx = 0.0;
   double d1_yO2_dx = 0.0;
   double d1_yO_dx = 0.0;
   double d2_T_dx = 0.0;
   double d2_Tv_dx = 0.0;
   double d2_YN2_dx = 0.0;
   double d2_YNO_dx = 0.0;
   double d2_YN_dx = 0.0;
   double d2_YO_dx = 0.0;
   double d2_u0_dx = 0.0;
   double d2_yN2_dx = 0.0;
   double d2_yNO_dx = 0.0;
   double d2_yN_dx = 0.0;
   double d2_yO2_dx = 0.0;
   double d2_yO_dx = 0.0;
   if (idx[0] == 0){

      d1_T_dx = (3.0*T_B0(1) + 0.333333333333333*T_B0(3) - 1.5*T_B0(2) - 1.83333333333333*T_B0(0))*invDelta0block0;

       d1_Tv_dx = (3.0*Tv_B0(1) + 0.333333333333333*Tv_B0(3) - 1.5*Tv_B0(2) -
            1.83333333333333*Tv_B0(0))*invDelta0block0;

       d1_YN2_dx = (3.0*YN2_B0(1) + 0.333333333333333*YN2_B0(3) - 1.5*YN2_B0(2) -
            1.83333333333333*YN2_B0(0))*invDelta0block0;

       d1_YNO_dx = (3.0*YNO_B0(1) + 0.333333333333333*YNO_B0(3) - 1.5*YNO_B0(2) -
            1.83333333333333*YNO_B0(0))*invDelta0block0;

       d1_YN_dx = (3.0*YN_B0(1) + 0.333333333333333*YN_B0(3) - 1.5*YN_B0(2) -
            1.83333333333333*YN_B0(0))*invDelta0block0;

       d1_YO_dx = (3.0*YO_B0(1) + 0.333333333333333*YO_B0(3) - 1.5*YO_B0(2) -
            1.83333333333333*YO_B0(0))*invDelta0block0;

       d1_evN2_dx = (3.0*evN2_B0(1) + 0.333333333333333*evN2_B0(3) - 1.5*evN2_B0(2) -
            1.83333333333333*evN2_B0(0))*invDelta0block0;

       d1_evNO_dx = (3.0*evNO_B0(1) + 0.333333333333333*evNO_B0(3) - 1.5*evNO_B0(2) -
            1.83333333333333*evNO_B0(0))*invDelta0block0;

       d1_evO2_dx = (3.0*evO2_B0(1) + 0.333333333333333*evO2_B0(3) - 1.5*evO2_B0(2) -
            1.83333333333333*evO2_B0(0))*invDelta0block0;

       d1_kappa_dx = (3.0*kappa_B0(1) + 0.333333333333333*kappa_B0(3) - 1.5*kappa_B0(2) -
            1.83333333333333*kappa_B0(0))*invDelta0block0;

       d1_kappav_dx = (3.0*kappav_B0(1) + 0.333333333333333*kappav_B0(3) - 1.5*kappav_B0(2) -
            1.83333333333333*kappav_B0(0))*invDelta0block0;

       d1_mu_dx = (3.0*mu_B0(1) + 0.333333333333333*mu_B0(3) - 1.5*mu_B0(2) -
            1.83333333333333*mu_B0(0))*invDelta0block0;

       d1_yN2_dx = (3.0*yN2_B0(1) + 0.333333333333333*yN2_B0(3) - 1.5*yN2_B0(2) -
            1.83333333333333*yN2_B0(0))*invDelta0block0;

       d1_yNO_dx = (3.0*yNO_B0(1) + 0.333333333333333*yNO_B0(3) - 1.5*yNO_B0(2) -
            1.83333333333333*yNO_B0(0))*invDelta0block0;

       d1_yN_dx = (3.0*yN_B0(1) + 0.333333333333333*yN_B0(3) - 1.5*yN_B0(2) -
            1.83333333333333*yN_B0(0))*invDelta0block0;

       d1_yO2_dx = (3.0*yO2_B0(1) + 0.333333333333333*yO2_B0(3) - 1.5*yO2_B0(2) -
            1.83333333333333*yO2_B0(0))*invDelta0block0;

       d1_yO_dx = (3.0*yO_B0(1) + 0.333333333333333*yO_B0(3) - 1.5*yO_B0(2) -
            1.83333333333333*yO_B0(0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_T_dx = (0.0394168524399447*T_B0(2) + 0.00571369039775442*T_B0(4) + 0.719443173328855*T_B0(1) -
            0.322484932882161*T_B0(0) - 0.0658051057710389*T_B0(3) - 0.376283677513354*T_B0(-1))*invDelta0block0;

       d1_Tv_dx = (0.0394168524399447*Tv_B0(2) + 0.00571369039775442*Tv_B0(4) + 0.719443173328855*Tv_B0(1) -
            0.322484932882161*Tv_B0(0) - 0.0658051057710389*Tv_B0(3) - 0.376283677513354*Tv_B0(-1))*invDelta0block0;

       d1_YN2_dx = (0.0394168524399447*YN2_B0(2) + 0.00571369039775442*YN2_B0(4) + 0.719443173328855*YN2_B0(1) -
            0.322484932882161*YN2_B0(0) - 0.0658051057710389*YN2_B0(3) - 0.376283677513354*YN2_B0(-1))*invDelta0block0;

       d1_YNO_dx = (0.0394168524399447*YNO_B0(2) + 0.00571369039775442*YNO_B0(4) + 0.719443173328855*YNO_B0(1) -
            0.322484932882161*YNO_B0(0) - 0.0658051057710389*YNO_B0(3) - 0.376283677513354*YNO_B0(-1))*invDelta0block0;

       d1_YN_dx = (0.0394168524399447*YN_B0(2) + 0.00571369039775442*YN_B0(4) + 0.719443173328855*YN_B0(1) -
            0.322484932882161*YN_B0(0) - 0.0658051057710389*YN_B0(3) - 0.376283677513354*YN_B0(-1))*invDelta0block0;

       d1_YO_dx = (0.0394168524399447*YO_B0(2) + 0.00571369039775442*YO_B0(4) + 0.719443173328855*YO_B0(1) -
            0.322484932882161*YO_B0(0) - 0.0658051057710389*YO_B0(3) - 0.376283677513354*YO_B0(-1))*invDelta0block0;

       d1_evN2_dx = (0.0394168524399447*evN2_B0(2) + 0.00571369039775442*evN2_B0(4) + 0.719443173328855*evN2_B0(1) -
            0.322484932882161*evN2_B0(0) - 0.0658051057710389*evN2_B0(3) -
            0.376283677513354*evN2_B0(-1))*invDelta0block0;

       d1_evNO_dx = (0.0394168524399447*evNO_B0(2) + 0.00571369039775442*evNO_B0(4) + 0.719443173328855*evNO_B0(1) -
            0.322484932882161*evNO_B0(0) - 0.0658051057710389*evNO_B0(3) -
            0.376283677513354*evNO_B0(-1))*invDelta0block0;

       d1_evO2_dx = (0.0394168524399447*evO2_B0(2) + 0.00571369039775442*evO2_B0(4) + 0.719443173328855*evO2_B0(1) -
            0.322484932882161*evO2_B0(0) - 0.0658051057710389*evO2_B0(3) -
            0.376283677513354*evO2_B0(-1))*invDelta0block0;

       d1_kappa_dx = (0.0394168524399447*kappa_B0(2) + 0.00571369039775442*kappa_B0(4) + 0.719443173328855*kappa_B0(1) -
            0.322484932882161*kappa_B0(0) - 0.0658051057710389*kappa_B0(3) -
            0.376283677513354*kappa_B0(-1))*invDelta0block0;

       d1_kappav_dx = (0.0394168524399447*kappav_B0(2) + 0.00571369039775442*kappav_B0(4) +
            0.719443173328855*kappav_B0(1) - 0.322484932882161*kappav_B0(0) - 0.0658051057710389*kappav_B0(3) -
            0.376283677513354*kappav_B0(-1))*invDelta0block0;

       d1_mu_dx = (0.0394168524399447*mu_B0(2) + 0.00571369039775442*mu_B0(4) + 0.719443173328855*mu_B0(1) -
            0.322484932882161*mu_B0(0) - 0.0658051057710389*mu_B0(3) - 0.376283677513354*mu_B0(-1))*invDelta0block0;

       d1_yN2_dx = (0.0394168524399447*yN2_B0(2) + 0.00571369039775442*yN2_B0(4) + 0.719443173328855*yN2_B0(1) -
            0.322484932882161*yN2_B0(0) - 0.0658051057710389*yN2_B0(3) - 0.376283677513354*yN2_B0(-1))*invDelta0block0;

       d1_yNO_dx = (0.0394168524399447*yNO_B0(2) + 0.00571369039775442*yNO_B0(4) + 0.719443173328855*yNO_B0(1) -
            0.322484932882161*yNO_B0(0) - 0.0658051057710389*yNO_B0(3) - 0.376283677513354*yNO_B0(-1))*invDelta0block0;

       d1_yN_dx = (0.0394168524399447*yN_B0(2) + 0.00571369039775442*yN_B0(4) + 0.719443173328855*yN_B0(1) -
            0.322484932882161*yN_B0(0) - 0.0658051057710389*yN_B0(3) - 0.376283677513354*yN_B0(-1))*invDelta0block0;

       d1_yO2_dx = (0.0394168524399447*yO2_B0(2) + 0.00571369039775442*yO2_B0(4) + 0.719443173328855*yO2_B0(1) -
            0.322484932882161*yO2_B0(0) - 0.0658051057710389*yO2_B0(3) - 0.376283677513354*yO2_B0(-1))*invDelta0block0;

       d1_yO_dx = (0.0394168524399447*yO_B0(2) + 0.00571369039775442*yO_B0(4) + 0.719443173328855*yO_B0(1) -
            0.322484932882161*yO_B0(0) - 0.0658051057710389*yO_B0(3) - 0.376283677513354*yO_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 2){

       d1_T_dx = (0.197184333887745*T_B0(0) + 0.521455851089587*T_B0(1) + 0.113446470384241*T_B0(-2) -
            0.00412637789557492*T_B0(3) - 0.0367146847001261*T_B0(2) - 0.791245592765872*T_B0(-1))*invDelta0block0;

       d1_Tv_dx = (0.197184333887745*Tv_B0(0) + 0.521455851089587*Tv_B0(1) + 0.113446470384241*Tv_B0(-2) -
            0.00412637789557492*Tv_B0(3) - 0.0367146847001261*Tv_B0(2) - 0.791245592765872*Tv_B0(-1))*invDelta0block0;

       d1_YN2_dx = (0.197184333887745*YN2_B0(0) + 0.521455851089587*YN2_B0(1) + 0.113446470384241*YN2_B0(-2) -
            0.00412637789557492*YN2_B0(3) - 0.0367146847001261*YN2_B0(2) -
            0.791245592765872*YN2_B0(-1))*invDelta0block0;

       d1_YNO_dx = (0.197184333887745*YNO_B0(0) + 0.521455851089587*YNO_B0(1) + 0.113446470384241*YNO_B0(-2) -
            0.00412637789557492*YNO_B0(3) - 0.0367146847001261*YNO_B0(2) -
            0.791245592765872*YNO_B0(-1))*invDelta0block0;

       d1_YN_dx = (0.197184333887745*YN_B0(0) + 0.521455851089587*YN_B0(1) + 0.113446470384241*YN_B0(-2) -
            0.00412637789557492*YN_B0(3) - 0.0367146847001261*YN_B0(2) - 0.791245592765872*YN_B0(-1))*invDelta0block0;

       d1_YO_dx = (0.197184333887745*YO_B0(0) + 0.521455851089587*YO_B0(1) + 0.113446470384241*YO_B0(-2) -
            0.00412637789557492*YO_B0(3) - 0.0367146847001261*YO_B0(2) - 0.791245592765872*YO_B0(-1))*invDelta0block0;

       d1_evN2_dx = (0.197184333887745*evN2_B0(0) + 0.521455851089587*evN2_B0(1) + 0.113446470384241*evN2_B0(-2) -
            0.00412637789557492*evN2_B0(3) - 0.0367146847001261*evN2_B0(2) -
            0.791245592765872*evN2_B0(-1))*invDelta0block0;

       d1_evNO_dx = (0.197184333887745*evNO_B0(0) + 0.521455851089587*evNO_B0(1) + 0.113446470384241*evNO_B0(-2) -
            0.00412637789557492*evNO_B0(3) - 0.0367146847001261*evNO_B0(2) -
            0.791245592765872*evNO_B0(-1))*invDelta0block0;

       d1_evO2_dx = (0.197184333887745*evO2_B0(0) + 0.521455851089587*evO2_B0(1) + 0.113446470384241*evO2_B0(-2) -
            0.00412637789557492*evO2_B0(3) - 0.0367146847001261*evO2_B0(2) -
            0.791245592765872*evO2_B0(-1))*invDelta0block0;

       d1_kappa_dx = (0.197184333887745*kappa_B0(0) + 0.521455851089587*kappa_B0(1) + 0.113446470384241*kappa_B0(-2) -
            0.00412637789557492*kappa_B0(3) - 0.0367146847001261*kappa_B0(2) -
            0.791245592765872*kappa_B0(-1))*invDelta0block0;

       d1_kappav_dx = (0.197184333887745*kappav_B0(0) + 0.521455851089587*kappav_B0(1) + 0.113446470384241*kappav_B0(-2)
            - 0.00412637789557492*kappav_B0(3) - 0.0367146847001261*kappav_B0(2) -
            0.791245592765872*kappav_B0(-1))*invDelta0block0;

       d1_mu_dx = (0.197184333887745*mu_B0(0) + 0.521455851089587*mu_B0(1) + 0.113446470384241*mu_B0(-2) -
            0.00412637789557492*mu_B0(3) - 0.0367146847001261*mu_B0(2) - 0.791245592765872*mu_B0(-1))*invDelta0block0;

       d1_yN2_dx = (0.197184333887745*yN2_B0(0) + 0.521455851089587*yN2_B0(1) + 0.113446470384241*yN2_B0(-2) -
            0.00412637789557492*yN2_B0(3) - 0.0367146847001261*yN2_B0(2) -
            0.791245592765872*yN2_B0(-1))*invDelta0block0;

       d1_yNO_dx = (0.197184333887745*yNO_B0(0) + 0.521455851089587*yNO_B0(1) + 0.113446470384241*yNO_B0(-2) -
            0.00412637789557492*yNO_B0(3) - 0.0367146847001261*yNO_B0(2) -
            0.791245592765872*yNO_B0(-1))*invDelta0block0;

       d1_yN_dx = (0.197184333887745*yN_B0(0) + 0.521455851089587*yN_B0(1) + 0.113446470384241*yN_B0(-2) -
            0.00412637789557492*yN_B0(3) - 0.0367146847001261*yN_B0(2) - 0.791245592765872*yN_B0(-1))*invDelta0block0;

       d1_yO2_dx = (0.197184333887745*yO2_B0(0) + 0.521455851089587*yO2_B0(1) + 0.113446470384241*yO2_B0(-2) -
            0.00412637789557492*yO2_B0(3) - 0.0367146847001261*yO2_B0(2) -
            0.791245592765872*yO2_B0(-1))*invDelta0block0;

       d1_yO_dx = (0.197184333887745*yO_B0(0) + 0.521455851089587*yO_B0(1) + 0.113446470384241*yO_B0(-2) -
            0.00412637789557492*yO_B0(3) - 0.0367146847001261*yO_B0(2) - 0.791245592765872*yO_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == 3){

       d1_T_dx = (0.0451033223343881*T_B0(0) + 0.652141084861241*T_B0(1) + 0.121937153224065*T_B0(-2) -
            0.00932597985049999*T_B0(-3) - 0.727822147724592*T_B0(-1) - 0.082033432844602*T_B0(2))*invDelta0block0;

       d1_Tv_dx = (0.0451033223343881*Tv_B0(0) + 0.652141084861241*Tv_B0(1) + 0.121937153224065*Tv_B0(-2) -
            0.00932597985049999*Tv_B0(-3) - 0.727822147724592*Tv_B0(-1) - 0.082033432844602*Tv_B0(2))*invDelta0block0;

       d1_YN2_dx = (0.0451033223343881*YN2_B0(0) + 0.652141084861241*YN2_B0(1) + 0.121937153224065*YN2_B0(-2) -
            0.00932597985049999*YN2_B0(-3) - 0.727822147724592*YN2_B0(-1) -
            0.082033432844602*YN2_B0(2))*invDelta0block0;

       d1_YNO_dx = (0.0451033223343881*YNO_B0(0) + 0.652141084861241*YNO_B0(1) + 0.121937153224065*YNO_B0(-2) -
            0.00932597985049999*YNO_B0(-3) - 0.727822147724592*YNO_B0(-1) -
            0.082033432844602*YNO_B0(2))*invDelta0block0;

       d1_YN_dx = (0.0451033223343881*YN_B0(0) + 0.652141084861241*YN_B0(1) + 0.121937153224065*YN_B0(-2) -
            0.00932597985049999*YN_B0(-3) - 0.727822147724592*YN_B0(-1) - 0.082033432844602*YN_B0(2))*invDelta0block0;

       d1_YO_dx = (0.0451033223343881*YO_B0(0) + 0.652141084861241*YO_B0(1) + 0.121937153224065*YO_B0(-2) -
            0.00932597985049999*YO_B0(-3) - 0.727822147724592*YO_B0(-1) - 0.082033432844602*YO_B0(2))*invDelta0block0;

       d1_evN2_dx = (0.0451033223343881*evN2_B0(0) + 0.652141084861241*evN2_B0(1) + 0.121937153224065*evN2_B0(-2) -
            0.00932597985049999*evN2_B0(-3) - 0.727822147724592*evN2_B0(-1) -
            0.082033432844602*evN2_B0(2))*invDelta0block0;

       d1_evNO_dx = (0.0451033223343881*evNO_B0(0) + 0.652141084861241*evNO_B0(1) + 0.121937153224065*evNO_B0(-2) -
            0.00932597985049999*evNO_B0(-3) - 0.727822147724592*evNO_B0(-1) -
            0.082033432844602*evNO_B0(2))*invDelta0block0;

       d1_evO2_dx = (0.0451033223343881*evO2_B0(0) + 0.652141084861241*evO2_B0(1) + 0.121937153224065*evO2_B0(-2) -
            0.00932597985049999*evO2_B0(-3) - 0.727822147724592*evO2_B0(-1) -
            0.082033432844602*evO2_B0(2))*invDelta0block0;

       d1_kappa_dx = (0.0451033223343881*kappa_B0(0) + 0.652141084861241*kappa_B0(1) + 0.121937153224065*kappa_B0(-2) -
            0.00932597985049999*kappa_B0(-3) - 0.727822147724592*kappa_B0(-1) -
            0.082033432844602*kappa_B0(2))*invDelta0block0;

       d1_kappav_dx = (0.0451033223343881*kappav_B0(0) + 0.652141084861241*kappav_B0(1) +
            0.121937153224065*kappav_B0(-2) - 0.00932597985049999*kappav_B0(-3) - 0.727822147724592*kappav_B0(-1) -
            0.082033432844602*kappav_B0(2))*invDelta0block0;

       d1_mu_dx = (0.0451033223343881*mu_B0(0) + 0.652141084861241*mu_B0(1) + 0.121937153224065*mu_B0(-2) -
            0.00932597985049999*mu_B0(-3) - 0.727822147724592*mu_B0(-1) - 0.082033432844602*mu_B0(2))*invDelta0block0;

       d1_yN2_dx = (0.0451033223343881*yN2_B0(0) + 0.652141084861241*yN2_B0(1) + 0.121937153224065*yN2_B0(-2) -
            0.00932597985049999*yN2_B0(-3) - 0.727822147724592*yN2_B0(-1) -
            0.082033432844602*yN2_B0(2))*invDelta0block0;

       d1_yNO_dx = (0.0451033223343881*yNO_B0(0) + 0.652141084861241*yNO_B0(1) + 0.121937153224065*yNO_B0(-2) -
            0.00932597985049999*yNO_B0(-3) - 0.727822147724592*yNO_B0(-1) -
            0.082033432844602*yNO_B0(2))*invDelta0block0;

       d1_yN_dx = (0.0451033223343881*yN_B0(0) + 0.652141084861241*yN_B0(1) + 0.121937153224065*yN_B0(-2) -
            0.00932597985049999*yN_B0(-3) - 0.727822147724592*yN_B0(-1) - 0.082033432844602*yN_B0(2))*invDelta0block0;

       d1_yO2_dx = (0.0451033223343881*yO2_B0(0) + 0.652141084861241*yO2_B0(1) + 0.121937153224065*yO2_B0(-2) -
            0.00932597985049999*yO2_B0(-3) - 0.727822147724592*yO2_B0(-1) -
            0.082033432844602*yO2_B0(2))*invDelta0block0;

       d1_yO_dx = (0.0451033223343881*yO_B0(0) + 0.652141084861241*yO_B0(1) + 0.121937153224065*yO_B0(-2) -
            0.00932597985049999*yO_B0(-3) - 0.727822147724592*yO_B0(-1) - 0.082033432844602*yO_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

      d1_T_dx = (1.5*T_B0(-2) + 1.83333333333333*T_B0(0) - 3.0*T_B0(-1) - 0.333333333333333*T_B0(-3))*invDelta0block0;

       d1_Tv_dx = (1.5*Tv_B0(-2) + 1.83333333333333*Tv_B0(0) - 3.0*Tv_B0(-1) -
            0.333333333333333*Tv_B0(-3))*invDelta0block0;

       d1_YN2_dx = (1.5*YN2_B0(-2) + 1.83333333333333*YN2_B0(0) - 3.0*YN2_B0(-1) -
            0.333333333333333*YN2_B0(-3))*invDelta0block0;

       d1_YNO_dx = (1.5*YNO_B0(-2) + 1.83333333333333*YNO_B0(0) - 3.0*YNO_B0(-1) -
            0.333333333333333*YNO_B0(-3))*invDelta0block0;

       d1_YN_dx = (1.5*YN_B0(-2) + 1.83333333333333*YN_B0(0) - 3.0*YN_B0(-1) -
            0.333333333333333*YN_B0(-3))*invDelta0block0;

       d1_YO_dx = (1.5*YO_B0(-2) + 1.83333333333333*YO_B0(0) - 3.0*YO_B0(-1) -
            0.333333333333333*YO_B0(-3))*invDelta0block0;

       d1_evN2_dx = (1.5*evN2_B0(-2) + 1.83333333333333*evN2_B0(0) - 3.0*evN2_B0(-1) -
            0.333333333333333*evN2_B0(-3))*invDelta0block0;

       d1_evNO_dx = (1.5*evNO_B0(-2) + 1.83333333333333*evNO_B0(0) - 3.0*evNO_B0(-1) -
            0.333333333333333*evNO_B0(-3))*invDelta0block0;

       d1_evO2_dx = (1.5*evO2_B0(-2) + 1.83333333333333*evO2_B0(0) - 3.0*evO2_B0(-1) -
            0.333333333333333*evO2_B0(-3))*invDelta0block0;

       d1_kappa_dx = (1.5*kappa_B0(-2) + 1.83333333333333*kappa_B0(0) - 3.0*kappa_B0(-1) -
            0.333333333333333*kappa_B0(-3))*invDelta0block0;

       d1_kappav_dx = (1.5*kappav_B0(-2) + 1.83333333333333*kappav_B0(0) - 3.0*kappav_B0(-1) -
            0.333333333333333*kappav_B0(-3))*invDelta0block0;

       d1_mu_dx = (1.5*mu_B0(-2) + 1.83333333333333*mu_B0(0) - 3.0*mu_B0(-1) -
            0.333333333333333*mu_B0(-3))*invDelta0block0;

       d1_yN2_dx = (1.5*yN2_B0(-2) + 1.83333333333333*yN2_B0(0) - 3.0*yN2_B0(-1) -
            0.333333333333333*yN2_B0(-3))*invDelta0block0;

       d1_yNO_dx = (1.5*yNO_B0(-2) + 1.83333333333333*yNO_B0(0) - 3.0*yNO_B0(-1) -
            0.333333333333333*yNO_B0(-3))*invDelta0block0;

       d1_yN_dx = (1.5*yN_B0(-2) + 1.83333333333333*yN_B0(0) - 3.0*yN_B0(-1) -
            0.333333333333333*yN_B0(-3))*invDelta0block0;

       d1_yO2_dx = (1.5*yO2_B0(-2) + 1.83333333333333*yO2_B0(0) - 3.0*yO2_B0(-1) -
            0.333333333333333*yO2_B0(-3))*invDelta0block0;

       d1_yO_dx = (1.5*yO_B0(-2) + 1.83333333333333*yO_B0(0) - 3.0*yO_B0(-1) -
            0.333333333333333*yO_B0(-3))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_T_dx = (0.322484932882161*T_B0(0) + 0.0658051057710389*T_B0(-3) + 0.376283677513354*T_B0(1) -
            0.0394168524399447*T_B0(-2) - 0.00571369039775442*T_B0(-4) - 0.719443173328855*T_B0(-1))*invDelta0block0;

       d1_Tv_dx = (0.322484932882161*Tv_B0(0) + 0.0658051057710389*Tv_B0(-3) + 0.376283677513354*Tv_B0(1) -
            0.0394168524399447*Tv_B0(-2) - 0.00571369039775442*Tv_B0(-4) -
            0.719443173328855*Tv_B0(-1))*invDelta0block0;

       d1_YN2_dx = (0.322484932882161*YN2_B0(0) + 0.0658051057710389*YN2_B0(-3) + 0.376283677513354*YN2_B0(1) -
            0.0394168524399447*YN2_B0(-2) - 0.00571369039775442*YN2_B0(-4) -
            0.719443173328855*YN2_B0(-1))*invDelta0block0;

       d1_YNO_dx = (0.322484932882161*YNO_B0(0) + 0.0658051057710389*YNO_B0(-3) + 0.376283677513354*YNO_B0(1) -
            0.0394168524399447*YNO_B0(-2) - 0.00571369039775442*YNO_B0(-4) -
            0.719443173328855*YNO_B0(-1))*invDelta0block0;

       d1_YN_dx = (0.322484932882161*YN_B0(0) + 0.0658051057710389*YN_B0(-3) + 0.376283677513354*YN_B0(1) -
            0.0394168524399447*YN_B0(-2) - 0.00571369039775442*YN_B0(-4) -
            0.719443173328855*YN_B0(-1))*invDelta0block0;

       d1_YO_dx = (0.322484932882161*YO_B0(0) + 0.0658051057710389*YO_B0(-3) + 0.376283677513354*YO_B0(1) -
            0.0394168524399447*YO_B0(-2) - 0.00571369039775442*YO_B0(-4) -
            0.719443173328855*YO_B0(-1))*invDelta0block0;

       d1_evN2_dx = (0.322484932882161*evN2_B0(0) + 0.0658051057710389*evN2_B0(-3) + 0.376283677513354*evN2_B0(1) -
            0.0394168524399447*evN2_B0(-2) - 0.00571369039775442*evN2_B0(-4) -
            0.719443173328855*evN2_B0(-1))*invDelta0block0;

       d1_evNO_dx = (0.322484932882161*evNO_B0(0) + 0.0658051057710389*evNO_B0(-3) + 0.376283677513354*evNO_B0(1) -
            0.0394168524399447*evNO_B0(-2) - 0.00571369039775442*evNO_B0(-4) -
            0.719443173328855*evNO_B0(-1))*invDelta0block0;

       d1_evO2_dx = (0.322484932882161*evO2_B0(0) + 0.0658051057710389*evO2_B0(-3) + 0.376283677513354*evO2_B0(1) -
            0.0394168524399447*evO2_B0(-2) - 0.00571369039775442*evO2_B0(-4) -
            0.719443173328855*evO2_B0(-1))*invDelta0block0;

       d1_kappa_dx = (0.322484932882161*kappa_B0(0) + 0.0658051057710389*kappa_B0(-3) + 0.376283677513354*kappa_B0(1) -
            0.0394168524399447*kappa_B0(-2) - 0.00571369039775442*kappa_B0(-4) -
            0.719443173328855*kappa_B0(-1))*invDelta0block0;

       d1_kappav_dx = (0.322484932882161*kappav_B0(0) + 0.0658051057710389*kappav_B0(-3) +
            0.376283677513354*kappav_B0(1) - 0.0394168524399447*kappav_B0(-2) - 0.00571369039775442*kappav_B0(-4) -
            0.719443173328855*kappav_B0(-1))*invDelta0block0;

       d1_mu_dx = (0.322484932882161*mu_B0(0) + 0.0658051057710389*mu_B0(-3) + 0.376283677513354*mu_B0(1) -
            0.0394168524399447*mu_B0(-2) - 0.00571369039775442*mu_B0(-4) -
            0.719443173328855*mu_B0(-1))*invDelta0block0;

       d1_yN2_dx = (0.322484932882161*yN2_B0(0) + 0.0658051057710389*yN2_B0(-3) + 0.376283677513354*yN2_B0(1) -
            0.0394168524399447*yN2_B0(-2) - 0.00571369039775442*yN2_B0(-4) -
            0.719443173328855*yN2_B0(-1))*invDelta0block0;

       d1_yNO_dx = (0.322484932882161*yNO_B0(0) + 0.0658051057710389*yNO_B0(-3) + 0.376283677513354*yNO_B0(1) -
            0.0394168524399447*yNO_B0(-2) - 0.00571369039775442*yNO_B0(-4) -
            0.719443173328855*yNO_B0(-1))*invDelta0block0;

       d1_yN_dx = (0.322484932882161*yN_B0(0) + 0.0658051057710389*yN_B0(-3) + 0.376283677513354*yN_B0(1) -
            0.0394168524399447*yN_B0(-2) - 0.00571369039775442*yN_B0(-4) -
            0.719443173328855*yN_B0(-1))*invDelta0block0;

       d1_yO2_dx = (0.322484932882161*yO2_B0(0) + 0.0658051057710389*yO2_B0(-3) + 0.376283677513354*yO2_B0(1) -
            0.0394168524399447*yO2_B0(-2) - 0.00571369039775442*yO2_B0(-4) -
            0.719443173328855*yO2_B0(-1))*invDelta0block0;

       d1_yO_dx = (0.322484932882161*yO_B0(0) + 0.0658051057710389*yO_B0(-3) + 0.376283677513354*yO_B0(1) -
            0.0394168524399447*yO_B0(-2) - 0.00571369039775442*yO_B0(-4) -
            0.719443173328855*yO_B0(-1))*invDelta0block0;

   }

   else if (idx[0] == -3 + block0np0){

       d1_T_dx = (0.00412637789557492*T_B0(-3) + 0.0367146847001261*T_B0(-2) + 0.791245592765872*T_B0(1) -
            0.197184333887745*T_B0(0) - 0.521455851089587*T_B0(-1) - 0.113446470384241*T_B0(2))*invDelta0block0;

       d1_Tv_dx = (0.00412637789557492*Tv_B0(-3) + 0.0367146847001261*Tv_B0(-2) + 0.791245592765872*Tv_B0(1) -
            0.197184333887745*Tv_B0(0) - 0.521455851089587*Tv_B0(-1) - 0.113446470384241*Tv_B0(2))*invDelta0block0;

       d1_YN2_dx = (0.00412637789557492*YN2_B0(-3) + 0.0367146847001261*YN2_B0(-2) + 0.791245592765872*YN2_B0(1) -
            0.197184333887745*YN2_B0(0) - 0.521455851089587*YN2_B0(-1) - 0.113446470384241*YN2_B0(2))*invDelta0block0;

       d1_YNO_dx = (0.00412637789557492*YNO_B0(-3) + 0.0367146847001261*YNO_B0(-2) + 0.791245592765872*YNO_B0(1) -
            0.197184333887745*YNO_B0(0) - 0.521455851089587*YNO_B0(-1) - 0.113446470384241*YNO_B0(2))*invDelta0block0;

       d1_YN_dx = (0.00412637789557492*YN_B0(-3) + 0.0367146847001261*YN_B0(-2) + 0.791245592765872*YN_B0(1) -
            0.197184333887745*YN_B0(0) - 0.521455851089587*YN_B0(-1) - 0.113446470384241*YN_B0(2))*invDelta0block0;

       d1_YO_dx = (0.00412637789557492*YO_B0(-3) + 0.0367146847001261*YO_B0(-2) + 0.791245592765872*YO_B0(1) -
            0.197184333887745*YO_B0(0) - 0.521455851089587*YO_B0(-1) - 0.113446470384241*YO_B0(2))*invDelta0block0;

       d1_evN2_dx = (0.00412637789557492*evN2_B0(-3) + 0.0367146847001261*evN2_B0(-2) + 0.791245592765872*evN2_B0(1) -
            0.197184333887745*evN2_B0(0) - 0.521455851089587*evN2_B0(-1) -
            0.113446470384241*evN2_B0(2))*invDelta0block0;

       d1_evNO_dx = (0.00412637789557492*evNO_B0(-3) + 0.0367146847001261*evNO_B0(-2) + 0.791245592765872*evNO_B0(1) -
            0.197184333887745*evNO_B0(0) - 0.521455851089587*evNO_B0(-1) -
            0.113446470384241*evNO_B0(2))*invDelta0block0;

       d1_evO2_dx = (0.00412637789557492*evO2_B0(-3) + 0.0367146847001261*evO2_B0(-2) + 0.791245592765872*evO2_B0(1) -
            0.197184333887745*evO2_B0(0) - 0.521455851089587*evO2_B0(-1) -
            0.113446470384241*evO2_B0(2))*invDelta0block0;

       d1_kappa_dx = (0.00412637789557492*kappa_B0(-3) + 0.0367146847001261*kappa_B0(-2) + 0.791245592765872*kappa_B0(1)
            - 0.197184333887745*kappa_B0(0) - 0.521455851089587*kappa_B0(-1) -
            0.113446470384241*kappa_B0(2))*invDelta0block0;

       d1_kappav_dx = (0.00412637789557492*kappav_B0(-3) + 0.0367146847001261*kappav_B0(-2) +
            0.791245592765872*kappav_B0(1) - 0.197184333887745*kappav_B0(0) - 0.521455851089587*kappav_B0(-1) -
            0.113446470384241*kappav_B0(2))*invDelta0block0;

       d1_mu_dx = (0.00412637789557492*mu_B0(-3) + 0.0367146847001261*mu_B0(-2) + 0.791245592765872*mu_B0(1) -
            0.197184333887745*mu_B0(0) - 0.521455851089587*mu_B0(-1) - 0.113446470384241*mu_B0(2))*invDelta0block0;

       d1_yN2_dx = (0.00412637789557492*yN2_B0(-3) + 0.0367146847001261*yN2_B0(-2) + 0.791245592765872*yN2_B0(1) -
            0.197184333887745*yN2_B0(0) - 0.521455851089587*yN2_B0(-1) - 0.113446470384241*yN2_B0(2))*invDelta0block0;

       d1_yNO_dx = (0.00412637789557492*yNO_B0(-3) + 0.0367146847001261*yNO_B0(-2) + 0.791245592765872*yNO_B0(1) -
            0.197184333887745*yNO_B0(0) - 0.521455851089587*yNO_B0(-1) - 0.113446470384241*yNO_B0(2))*invDelta0block0;

       d1_yN_dx = (0.00412637789557492*yN_B0(-3) + 0.0367146847001261*yN_B0(-2) + 0.791245592765872*yN_B0(1) -
            0.197184333887745*yN_B0(0) - 0.521455851089587*yN_B0(-1) - 0.113446470384241*yN_B0(2))*invDelta0block0;

       d1_yO2_dx = (0.00412637789557492*yO2_B0(-3) + 0.0367146847001261*yO2_B0(-2) + 0.791245592765872*yO2_B0(1) -
            0.197184333887745*yO2_B0(0) - 0.521455851089587*yO2_B0(-1) - 0.113446470384241*yO2_B0(2))*invDelta0block0;

       d1_yO_dx = (0.00412637789557492*yO_B0(-3) + 0.0367146847001261*yO_B0(-2) + 0.791245592765872*yO_B0(1) -
            0.197184333887745*yO_B0(0) - 0.521455851089587*yO_B0(-1) - 0.113446470384241*yO_B0(2))*invDelta0block0;

   }

   else if (idx[0] == -4 + block0np0){

       d1_T_dx = (0.00932597985049999*T_B0(3) + 0.727822147724592*T_B0(1) + 0.082033432844602*T_B0(-2) -
            0.0451033223343881*T_B0(0) - 0.652141084861241*T_B0(-1) - 0.121937153224065*T_B0(2))*invDelta0block0;

       d1_Tv_dx = (0.00932597985049999*Tv_B0(3) + 0.727822147724592*Tv_B0(1) + 0.082033432844602*Tv_B0(-2) -
            0.0451033223343881*Tv_B0(0) - 0.652141084861241*Tv_B0(-1) - 0.121937153224065*Tv_B0(2))*invDelta0block0;

       d1_YN2_dx = (0.00932597985049999*YN2_B0(3) + 0.727822147724592*YN2_B0(1) + 0.082033432844602*YN2_B0(-2) -
            0.0451033223343881*YN2_B0(0) - 0.652141084861241*YN2_B0(-1) - 0.121937153224065*YN2_B0(2))*invDelta0block0;

       d1_YNO_dx = (0.00932597985049999*YNO_B0(3) + 0.727822147724592*YNO_B0(1) + 0.082033432844602*YNO_B0(-2) -
            0.0451033223343881*YNO_B0(0) - 0.652141084861241*YNO_B0(-1) - 0.121937153224065*YNO_B0(2))*invDelta0block0;

       d1_YN_dx = (0.00932597985049999*YN_B0(3) + 0.727822147724592*YN_B0(1) + 0.082033432844602*YN_B0(-2) -
            0.0451033223343881*YN_B0(0) - 0.652141084861241*YN_B0(-1) - 0.121937153224065*YN_B0(2))*invDelta0block0;

       d1_YO_dx = (0.00932597985049999*YO_B0(3) + 0.727822147724592*YO_B0(1) + 0.082033432844602*YO_B0(-2) -
            0.0451033223343881*YO_B0(0) - 0.652141084861241*YO_B0(-1) - 0.121937153224065*YO_B0(2))*invDelta0block0;

       d1_evN2_dx = (0.00932597985049999*evN2_B0(3) + 0.727822147724592*evN2_B0(1) + 0.082033432844602*evN2_B0(-2) -
            0.0451033223343881*evN2_B0(0) - 0.652141084861241*evN2_B0(-1) -
            0.121937153224065*evN2_B0(2))*invDelta0block0;

       d1_evNO_dx = (0.00932597985049999*evNO_B0(3) + 0.727822147724592*evNO_B0(1) + 0.082033432844602*evNO_B0(-2) -
            0.0451033223343881*evNO_B0(0) - 0.652141084861241*evNO_B0(-1) -
            0.121937153224065*evNO_B0(2))*invDelta0block0;

       d1_evO2_dx = (0.00932597985049999*evO2_B0(3) + 0.727822147724592*evO2_B0(1) + 0.082033432844602*evO2_B0(-2) -
            0.0451033223343881*evO2_B0(0) - 0.652141084861241*evO2_B0(-1) -
            0.121937153224065*evO2_B0(2))*invDelta0block0;

       d1_kappa_dx = (0.00932597985049999*kappa_B0(3) + 0.727822147724592*kappa_B0(1) + 0.082033432844602*kappa_B0(-2) -
            0.0451033223343881*kappa_B0(0) - 0.652141084861241*kappa_B0(-1) -
            0.121937153224065*kappa_B0(2))*invDelta0block0;

       d1_kappav_dx = (0.00932597985049999*kappav_B0(3) + 0.727822147724592*kappav_B0(1) +
            0.082033432844602*kappav_B0(-2) - 0.0451033223343881*kappav_B0(0) - 0.652141084861241*kappav_B0(-1) -
            0.121937153224065*kappav_B0(2))*invDelta0block0;

       d1_mu_dx = (0.00932597985049999*mu_B0(3) + 0.727822147724592*mu_B0(1) + 0.082033432844602*mu_B0(-2) -
            0.0451033223343881*mu_B0(0) - 0.652141084861241*mu_B0(-1) - 0.121937153224065*mu_B0(2))*invDelta0block0;

       d1_yN2_dx = (0.00932597985049999*yN2_B0(3) + 0.727822147724592*yN2_B0(1) + 0.082033432844602*yN2_B0(-2) -
            0.0451033223343881*yN2_B0(0) - 0.652141084861241*yN2_B0(-1) - 0.121937153224065*yN2_B0(2))*invDelta0block0;

       d1_yNO_dx = (0.00932597985049999*yNO_B0(3) + 0.727822147724592*yNO_B0(1) + 0.082033432844602*yNO_B0(-2) -
            0.0451033223343881*yNO_B0(0) - 0.652141084861241*yNO_B0(-1) - 0.121937153224065*yNO_B0(2))*invDelta0block0;

       d1_yN_dx = (0.00932597985049999*yN_B0(3) + 0.727822147724592*yN_B0(1) + 0.082033432844602*yN_B0(-2) -
            0.0451033223343881*yN_B0(0) - 0.652141084861241*yN_B0(-1) - 0.121937153224065*yN_B0(2))*invDelta0block0;

       d1_yO2_dx = (0.00932597985049999*yO2_B0(3) + 0.727822147724592*yO2_B0(1) + 0.082033432844602*yO2_B0(-2) -
            0.0451033223343881*yO2_B0(0) - 0.652141084861241*yO2_B0(-1) - 0.121937153224065*yO2_B0(2))*invDelta0block0;

       d1_yO_dx = (0.00932597985049999*yO_B0(3) + 0.727822147724592*yO_B0(1) + 0.082033432844602*yO_B0(-2) -
            0.0451033223343881*yO_B0(0) - 0.652141084861241*yO_B0(-1) - 0.121937153224065*yO_B0(2))*invDelta0block0;

   }

   else{

       d1_T_dx = (-(2.0/3.0)*T_B0(-1) - (1.0/12.0)*T_B0(2) + ((1.0/12.0))*T_B0(-2) +
            ((2.0/3.0))*T_B0(1))*invDelta0block0;

       d1_Tv_dx = (-(2.0/3.0)*Tv_B0(-1) - (1.0/12.0)*Tv_B0(2) + ((1.0/12.0))*Tv_B0(-2) +
            ((2.0/3.0))*Tv_B0(1))*invDelta0block0;

       d1_YN2_dx = (-(2.0/3.0)*YN2_B0(-1) - (1.0/12.0)*YN2_B0(2) + ((1.0/12.0))*YN2_B0(-2) +
            ((2.0/3.0))*YN2_B0(1))*invDelta0block0;

       d1_YNO_dx = (-(2.0/3.0)*YNO_B0(-1) - (1.0/12.0)*YNO_B0(2) + ((1.0/12.0))*YNO_B0(-2) +
            ((2.0/3.0))*YNO_B0(1))*invDelta0block0;

       d1_YN_dx = (-(2.0/3.0)*YN_B0(-1) - (1.0/12.0)*YN_B0(2) + ((1.0/12.0))*YN_B0(-2) +
            ((2.0/3.0))*YN_B0(1))*invDelta0block0;

       d1_YO_dx = (-(2.0/3.0)*YO_B0(-1) - (1.0/12.0)*YO_B0(2) + ((1.0/12.0))*YO_B0(-2) +
            ((2.0/3.0))*YO_B0(1))*invDelta0block0;

       d1_evN2_dx = (-(2.0/3.0)*evN2_B0(-1) - (1.0/12.0)*evN2_B0(2) + ((1.0/12.0))*evN2_B0(-2) +
            ((2.0/3.0))*evN2_B0(1))*invDelta0block0;

       d1_evNO_dx = (-(2.0/3.0)*evNO_B0(-1) - (1.0/12.0)*evNO_B0(2) + ((1.0/12.0))*evNO_B0(-2) +
            ((2.0/3.0))*evNO_B0(1))*invDelta0block0;

       d1_evO2_dx = (-(2.0/3.0)*evO2_B0(-1) - (1.0/12.0)*evO2_B0(2) + ((1.0/12.0))*evO2_B0(-2) +
            ((2.0/3.0))*evO2_B0(1))*invDelta0block0;

       d1_kappa_dx = (-(2.0/3.0)*kappa_B0(-1) - (1.0/12.0)*kappa_B0(2) + ((1.0/12.0))*kappa_B0(-2) +
            ((2.0/3.0))*kappa_B0(1))*invDelta0block0;

       d1_kappav_dx = (-(2.0/3.0)*kappav_B0(-1) - (1.0/12.0)*kappav_B0(2) + ((1.0/12.0))*kappav_B0(-2) +
            ((2.0/3.0))*kappav_B0(1))*invDelta0block0;

       d1_mu_dx = (-(2.0/3.0)*mu_B0(-1) - (1.0/12.0)*mu_B0(2) + ((1.0/12.0))*mu_B0(-2) +
            ((2.0/3.0))*mu_B0(1))*invDelta0block0;

       d1_yN2_dx = (-(2.0/3.0)*yN2_B0(-1) - (1.0/12.0)*yN2_B0(2) + ((1.0/12.0))*yN2_B0(-2) +
            ((2.0/3.0))*yN2_B0(1))*invDelta0block0;

       d1_yNO_dx = (-(2.0/3.0)*yNO_B0(-1) - (1.0/12.0)*yNO_B0(2) + ((1.0/12.0))*yNO_B0(-2) +
            ((2.0/3.0))*yNO_B0(1))*invDelta0block0;

       d1_yN_dx = (-(2.0/3.0)*yN_B0(-1) - (1.0/12.0)*yN_B0(2) + ((1.0/12.0))*yN_B0(-2) +
            ((2.0/3.0))*yN_B0(1))*invDelta0block0;

       d1_yO2_dx = (-(2.0/3.0)*yO2_B0(-1) - (1.0/12.0)*yO2_B0(2) + ((1.0/12.0))*yO2_B0(-2) +
            ((2.0/3.0))*yO2_B0(1))*invDelta0block0;

       d1_yO_dx = (-(2.0/3.0)*yO_B0(-1) - (1.0/12.0)*yO_B0(2) + ((1.0/12.0))*yO_B0(-2) +
            ((2.0/3.0))*yO_B0(1))*invDelta0block0;

   }

   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1) - (14.0/3.0)*T_B0(3) + ((11.0/12.0))*T_B0(4) + ((19.0/2.0))*T_B0(2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

       d2_Tv_dx = (-(26.0/3.0)*Tv_B0(1) - (14.0/3.0)*Tv_B0(3) + ((11.0/12.0))*Tv_B0(4) + ((19.0/2.0))*Tv_B0(2) +
            ((35.0/12.0))*Tv_B0(0))*inv2Delta0block0;

       d2_YN2_dx = (-(26.0/3.0)*YN2_B0(1) - (14.0/3.0)*YN2_B0(3) + ((11.0/12.0))*YN2_B0(4) + ((19.0/2.0))*YN2_B0(2) +
            ((35.0/12.0))*YN2_B0(0))*inv2Delta0block0;

       d2_YNO_dx = (-(26.0/3.0)*YNO_B0(1) - (14.0/3.0)*YNO_B0(3) + ((11.0/12.0))*YNO_B0(4) + ((19.0/2.0))*YNO_B0(2) +
            ((35.0/12.0))*YNO_B0(0))*inv2Delta0block0;

       d2_YN_dx = (-(26.0/3.0)*YN_B0(1) - (14.0/3.0)*YN_B0(3) + ((11.0/12.0))*YN_B0(4) + ((19.0/2.0))*YN_B0(2) +
            ((35.0/12.0))*YN_B0(0))*inv2Delta0block0;

       d2_YO_dx = (-(26.0/3.0)*YO_B0(1) - (14.0/3.0)*YO_B0(3) + ((11.0/12.0))*YO_B0(4) + ((19.0/2.0))*YO_B0(2) +
            ((35.0/12.0))*YO_B0(0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(1) - (14.0/3.0)*u0_B0(3) + ((11.0/12.0))*u0_B0(4) + ((19.0/2.0))*u0_B0(2) +
            ((35.0/12.0))*u0_B0(0))*inv2Delta0block0;

       d2_yN2_dx = (-(26.0/3.0)*yN2_B0(1) - (14.0/3.0)*yN2_B0(3) + ((11.0/12.0))*yN2_B0(4) + ((19.0/2.0))*yN2_B0(2) +
            ((35.0/12.0))*yN2_B0(0))*inv2Delta0block0;

       d2_yNO_dx = (-(26.0/3.0)*yNO_B0(1) - (14.0/3.0)*yNO_B0(3) + ((11.0/12.0))*yNO_B0(4) + ((19.0/2.0))*yNO_B0(2) +
            ((35.0/12.0))*yNO_B0(0))*inv2Delta0block0;

       d2_yN_dx = (-(26.0/3.0)*yN_B0(1) - (14.0/3.0)*yN_B0(3) + ((11.0/12.0))*yN_B0(4) + ((19.0/2.0))*yN_B0(2) +
            ((35.0/12.0))*yN_B0(0))*inv2Delta0block0;

       d2_yO2_dx = (-(26.0/3.0)*yO2_B0(1) - (14.0/3.0)*yO2_B0(3) + ((11.0/12.0))*yO2_B0(4) + ((19.0/2.0))*yO2_B0(2) +
            ((35.0/12.0))*yO2_B0(0))*inv2Delta0block0;

       d2_yO_dx = (-(26.0/3.0)*yO_B0(1) - (14.0/3.0)*yO_B0(3) + ((11.0/12.0))*yO_B0(4) + ((19.0/2.0))*yO_B0(2) +
            ((35.0/12.0))*yO_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(3) + ((1.0/3.0))*T_B0(2) +
            ((11.0/12.0))*T_B0(-1))*inv2Delta0block0;

       d2_Tv_dx = (((1.0/2.0))*Tv_B0(1) - (5.0/3.0)*Tv_B0(0) - (1.0/12.0)*Tv_B0(3) + ((1.0/3.0))*Tv_B0(2) +
            ((11.0/12.0))*Tv_B0(-1))*inv2Delta0block0;

       d2_YN2_dx = (((1.0/2.0))*YN2_B0(1) - (5.0/3.0)*YN2_B0(0) - (1.0/12.0)*YN2_B0(3) + ((1.0/3.0))*YN2_B0(2) +
            ((11.0/12.0))*YN2_B0(-1))*inv2Delta0block0;

       d2_YNO_dx = (((1.0/2.0))*YNO_B0(1) - (5.0/3.0)*YNO_B0(0) - (1.0/12.0)*YNO_B0(3) + ((1.0/3.0))*YNO_B0(2) +
            ((11.0/12.0))*YNO_B0(-1))*inv2Delta0block0;

       d2_YN_dx = (((1.0/2.0))*YN_B0(1) - (5.0/3.0)*YN_B0(0) - (1.0/12.0)*YN_B0(3) + ((1.0/3.0))*YN_B0(2) +
            ((11.0/12.0))*YN_B0(-1))*inv2Delta0block0;

       d2_YO_dx = (((1.0/2.0))*YO_B0(1) - (5.0/3.0)*YO_B0(0) - (1.0/12.0)*YO_B0(3) + ((1.0/3.0))*YO_B0(2) +
            ((11.0/12.0))*YO_B0(-1))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(1) - (5.0/3.0)*u0_B0(0) - (1.0/12.0)*u0_B0(3) + ((1.0/3.0))*u0_B0(2) +
            ((11.0/12.0))*u0_B0(-1))*inv2Delta0block0;

       d2_yN2_dx = (((1.0/2.0))*yN2_B0(1) - (5.0/3.0)*yN2_B0(0) - (1.0/12.0)*yN2_B0(3) + ((1.0/3.0))*yN2_B0(2) +
            ((11.0/12.0))*yN2_B0(-1))*inv2Delta0block0;

       d2_yNO_dx = (((1.0/2.0))*yNO_B0(1) - (5.0/3.0)*yNO_B0(0) - (1.0/12.0)*yNO_B0(3) + ((1.0/3.0))*yNO_B0(2) +
            ((11.0/12.0))*yNO_B0(-1))*inv2Delta0block0;

       d2_yN_dx = (((1.0/2.0))*yN_B0(1) - (5.0/3.0)*yN_B0(0) - (1.0/12.0)*yN_B0(3) + ((1.0/3.0))*yN_B0(2) +
            ((11.0/12.0))*yN_B0(-1))*inv2Delta0block0;

       d2_yO2_dx = (((1.0/2.0))*yO2_B0(1) - (5.0/3.0)*yO2_B0(0) - (1.0/12.0)*yO2_B0(3) + ((1.0/3.0))*yO2_B0(2) +
            ((11.0/12.0))*yO2_B0(-1))*inv2Delta0block0;

       d2_yO_dx = (((1.0/2.0))*yO_B0(1) - (5.0/3.0)*yO_B0(0) - (1.0/12.0)*yO_B0(3) + ((1.0/3.0))*yO_B0(2) +
            ((11.0/12.0))*yO_B0(-1))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1) - (14.0/3.0)*T_B0(-3) + ((11.0/12.0))*T_B0(-4) + ((19.0/2.0))*T_B0(-2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

       d2_Tv_dx = (-(26.0/3.0)*Tv_B0(-1) - (14.0/3.0)*Tv_B0(-3) + ((11.0/12.0))*Tv_B0(-4) + ((19.0/2.0))*Tv_B0(-2) +
            ((35.0/12.0))*Tv_B0(0))*inv2Delta0block0;

       d2_YN2_dx = (-(26.0/3.0)*YN2_B0(-1) - (14.0/3.0)*YN2_B0(-3) + ((11.0/12.0))*YN2_B0(-4) + ((19.0/2.0))*YN2_B0(-2)
            + ((35.0/12.0))*YN2_B0(0))*inv2Delta0block0;

       d2_YNO_dx = (-(26.0/3.0)*YNO_B0(-1) - (14.0/3.0)*YNO_B0(-3) + ((11.0/12.0))*YNO_B0(-4) + ((19.0/2.0))*YNO_B0(-2)
            + ((35.0/12.0))*YNO_B0(0))*inv2Delta0block0;

       d2_YN_dx = (-(26.0/3.0)*YN_B0(-1) - (14.0/3.0)*YN_B0(-3) + ((11.0/12.0))*YN_B0(-4) + ((19.0/2.0))*YN_B0(-2) +
            ((35.0/12.0))*YN_B0(0))*inv2Delta0block0;

       d2_YO_dx = (-(26.0/3.0)*YO_B0(-1) - (14.0/3.0)*YO_B0(-3) + ((11.0/12.0))*YO_B0(-4) + ((19.0/2.0))*YO_B0(-2) +
            ((35.0/12.0))*YO_B0(0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(-1) - (14.0/3.0)*u0_B0(-3) + ((11.0/12.0))*u0_B0(-4) + ((19.0/2.0))*u0_B0(-2) +
            ((35.0/12.0))*u0_B0(0))*inv2Delta0block0;

       d2_yN2_dx = (-(26.0/3.0)*yN2_B0(-1) - (14.0/3.0)*yN2_B0(-3) + ((11.0/12.0))*yN2_B0(-4) + ((19.0/2.0))*yN2_B0(-2)
            + ((35.0/12.0))*yN2_B0(0))*inv2Delta0block0;

       d2_yNO_dx = (-(26.0/3.0)*yNO_B0(-1) - (14.0/3.0)*yNO_B0(-3) + ((11.0/12.0))*yNO_B0(-4) + ((19.0/2.0))*yNO_B0(-2)
            + ((35.0/12.0))*yNO_B0(0))*inv2Delta0block0;

       d2_yN_dx = (-(26.0/3.0)*yN_B0(-1) - (14.0/3.0)*yN_B0(-3) + ((11.0/12.0))*yN_B0(-4) + ((19.0/2.0))*yN_B0(-2) +
            ((35.0/12.0))*yN_B0(0))*inv2Delta0block0;

       d2_yO2_dx = (-(26.0/3.0)*yO2_B0(-1) - (14.0/3.0)*yO2_B0(-3) + ((11.0/12.0))*yO2_B0(-4) + ((19.0/2.0))*yO2_B0(-2)
            + ((35.0/12.0))*yO2_B0(0))*inv2Delta0block0;

       d2_yO_dx = (-(26.0/3.0)*yO_B0(-1) - (14.0/3.0)*yO_B0(-3) + ((11.0/12.0))*yO_B0(-4) + ((19.0/2.0))*yO_B0(-2) +
            ((35.0/12.0))*yO_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(-3) + ((1.0/3.0))*T_B0(-2) +
            ((11.0/12.0))*T_B0(1))*inv2Delta0block0;

       d2_Tv_dx = (((1.0/2.0))*Tv_B0(-1) - (5.0/3.0)*Tv_B0(0) - (1.0/12.0)*Tv_B0(-3) + ((1.0/3.0))*Tv_B0(-2) +
            ((11.0/12.0))*Tv_B0(1))*inv2Delta0block0;

       d2_YN2_dx = (((1.0/2.0))*YN2_B0(-1) - (5.0/3.0)*YN2_B0(0) - (1.0/12.0)*YN2_B0(-3) + ((1.0/3.0))*YN2_B0(-2) +
            ((11.0/12.0))*YN2_B0(1))*inv2Delta0block0;

       d2_YNO_dx = (((1.0/2.0))*YNO_B0(-1) - (5.0/3.0)*YNO_B0(0) - (1.0/12.0)*YNO_B0(-3) + ((1.0/3.0))*YNO_B0(-2) +
            ((11.0/12.0))*YNO_B0(1))*inv2Delta0block0;

       d2_YN_dx = (((1.0/2.0))*YN_B0(-1) - (5.0/3.0)*YN_B0(0) - (1.0/12.0)*YN_B0(-3) + ((1.0/3.0))*YN_B0(-2) +
            ((11.0/12.0))*YN_B0(1))*inv2Delta0block0;

       d2_YO_dx = (((1.0/2.0))*YO_B0(-1) - (5.0/3.0)*YO_B0(0) - (1.0/12.0)*YO_B0(-3) + ((1.0/3.0))*YO_B0(-2) +
            ((11.0/12.0))*YO_B0(1))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(-1) - (5.0/3.0)*u0_B0(0) - (1.0/12.0)*u0_B0(-3) + ((1.0/3.0))*u0_B0(-2) +
            ((11.0/12.0))*u0_B0(1))*inv2Delta0block0;

       d2_yN2_dx = (((1.0/2.0))*yN2_B0(-1) - (5.0/3.0)*yN2_B0(0) - (1.0/12.0)*yN2_B0(-3) + ((1.0/3.0))*yN2_B0(-2) +
            ((11.0/12.0))*yN2_B0(1))*inv2Delta0block0;

       d2_yNO_dx = (((1.0/2.0))*yNO_B0(-1) - (5.0/3.0)*yNO_B0(0) - (1.0/12.0)*yNO_B0(-3) + ((1.0/3.0))*yNO_B0(-2) +
            ((11.0/12.0))*yNO_B0(1))*inv2Delta0block0;

       d2_yN_dx = (((1.0/2.0))*yN_B0(-1) - (5.0/3.0)*yN_B0(0) - (1.0/12.0)*yN_B0(-3) + ((1.0/3.0))*yN_B0(-2) +
            ((11.0/12.0))*yN_B0(1))*inv2Delta0block0;

       d2_yO2_dx = (((1.0/2.0))*yO2_B0(-1) - (5.0/3.0)*yO2_B0(0) - (1.0/12.0)*yO2_B0(-3) + ((1.0/3.0))*yO2_B0(-2) +
            ((11.0/12.0))*yO2_B0(1))*inv2Delta0block0;

       d2_yO_dx = (((1.0/2.0))*yO_B0(-1) - (5.0/3.0)*yO_B0(0) - (1.0/12.0)*yO_B0(-3) + ((1.0/3.0))*yO_B0(-2) +
            ((11.0/12.0))*yO_B0(1))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0) - (1.0/12.0)*T_B0(-2) - (1.0/12.0)*T_B0(2) + ((4.0/3.0))*T_B0(1) +
            ((4.0/3.0))*T_B0(-1))*inv2Delta0block0;

       d2_Tv_dx = (-(5.0/2.0)*Tv_B0(0) - (1.0/12.0)*Tv_B0(-2) - (1.0/12.0)*Tv_B0(2) + ((4.0/3.0))*Tv_B0(1) +
            ((4.0/3.0))*Tv_B0(-1))*inv2Delta0block0;

       d2_YN2_dx = (-(5.0/2.0)*YN2_B0(0) - (1.0/12.0)*YN2_B0(-2) - (1.0/12.0)*YN2_B0(2) + ((4.0/3.0))*YN2_B0(1) +
            ((4.0/3.0))*YN2_B0(-1))*inv2Delta0block0;

       d2_YNO_dx = (-(5.0/2.0)*YNO_B0(0) - (1.0/12.0)*YNO_B0(-2) - (1.0/12.0)*YNO_B0(2) + ((4.0/3.0))*YNO_B0(1) +
            ((4.0/3.0))*YNO_B0(-1))*inv2Delta0block0;

       d2_YN_dx = (-(5.0/2.0)*YN_B0(0) - (1.0/12.0)*YN_B0(-2) - (1.0/12.0)*YN_B0(2) + ((4.0/3.0))*YN_B0(1) +
            ((4.0/3.0))*YN_B0(-1))*inv2Delta0block0;

       d2_YO_dx = (-(5.0/2.0)*YO_B0(0) - (1.0/12.0)*YO_B0(-2) - (1.0/12.0)*YO_B0(2) + ((4.0/3.0))*YO_B0(1) +
            ((4.0/3.0))*YO_B0(-1))*inv2Delta0block0;

       d2_u0_dx = (-(5.0/2.0)*u0_B0(0) - (1.0/12.0)*u0_B0(-2) - (1.0/12.0)*u0_B0(2) + ((4.0/3.0))*u0_B0(1) +
            ((4.0/3.0))*u0_B0(-1))*inv2Delta0block0;

       d2_yN2_dx = (-(5.0/2.0)*yN2_B0(0) - (1.0/12.0)*yN2_B0(-2) - (1.0/12.0)*yN2_B0(2) + ((4.0/3.0))*yN2_B0(1) +
            ((4.0/3.0))*yN2_B0(-1))*inv2Delta0block0;

       d2_yNO_dx = (-(5.0/2.0)*yNO_B0(0) - (1.0/12.0)*yNO_B0(-2) - (1.0/12.0)*yNO_B0(2) + ((4.0/3.0))*yNO_B0(1) +
            ((4.0/3.0))*yNO_B0(-1))*inv2Delta0block0;

       d2_yN_dx = (-(5.0/2.0)*yN_B0(0) - (1.0/12.0)*yN_B0(-2) - (1.0/12.0)*yN_B0(2) + ((4.0/3.0))*yN_B0(1) +
            ((4.0/3.0))*yN_B0(-1))*inv2Delta0block0;

       d2_yO2_dx = (-(5.0/2.0)*yO2_B0(0) - (1.0/12.0)*yO2_B0(-2) - (1.0/12.0)*yO2_B0(2) + ((4.0/3.0))*yO2_B0(1) +
            ((4.0/3.0))*yO2_B0(-1))*inv2Delta0block0;

       d2_yO_dx = (-(5.0/2.0)*yO_B0(0) - (1.0/12.0)*yO_B0(-2) - (1.0/12.0)*yO_B0(2) + ((4.0/3.0))*yO_B0(1) +
            ((4.0/3.0))*yO_B0(-1))*inv2Delta0block0;

   }

   Residual0_B0(0) = invRe*invSc*mu_B0(0)*d2_yO_dx + invRe*invSc*d1_mu_dx*d1_yO_dx + Residual0_B0(0);

   Residual1_B0(0) = invRe*invSc*mu_B0(0)*d2_yO2_dx + invRe*invSc*d1_mu_dx*d1_yO2_dx + Residual1_B0(0);

   Residual2_B0(0) = invRe*invSc*mu_B0(0)*d2_yN_dx + invRe*invSc*d1_mu_dx*d1_yN_dx + Residual2_B0(0);

   Residual3_B0(0) = invRe*invSc*mu_B0(0)*d2_yN2_dx + invRe*invSc*d1_mu_dx*d1_yN2_dx + Residual3_B0(0);

   Residual4_B0(0) = invRe*invSc*mu_B0(0)*d2_yNO_dx + invRe*invSc*d1_mu_dx*d1_yNO_dx + Residual4_B0(0);

   Residual5_B0(0) = ((4.0/3.0))*invRe*mu_B0(0)*d2_u0_dx + ((4.0/3.0))*invRe*wk0_B0(0)*d1_mu_dx + Residual5_B0(0);

    Residual6_B0(0) = invRe*kappav_B0(0)*d2_Tv_dx + invRe*d1_Tv_dx*d1_kappav_dx + (evN2_B0(0)*d1_yN2_dx +
      evNO_B0(0)*d1_yNO_dx + evO2_B0(0)*d1_yO2_dx)*invRe*invSc*d1_mu_dx + (evN2_B0(0)*d2_yN2_dx + evNO_B0(0)*d2_yNO_dx +
      evO2_B0(0)*d2_yO2_dx + d1_evN2_dx*d1_yN2_dx + d1_evNO_dx*d1_yNO_dx + d1_evO2_dx*d1_yO2_dx)*invRe*invSc*mu_B0(0) +
      Residual6_B0(0);

    Residual7_B0(0) = invRe*kappa_B0(0)*d2_T_dx + invRe*kappav_B0(0)*d2_Tv_dx + invRe*d1_T_dx*d1_kappa_dx +
      invRe*d1_Tv_dx*d1_kappav_dx + ((4.0/3.0))*(wk0_B0(0)*wk0_B0(0))*invRe*mu_B0(0) + (evN2_B0(0)*d1_yN2_dx +
      evNO_B0(0)*d1_yNO_dx + evO2_B0(0)*d1_yO2_dx)*invRe*invSc*d1_mu_dx + (evN2_B0(0)*d2_yN2_dx + evNO_B0(0)*d2_yNO_dx +
      evO2_B0(0)*d2_yO2_dx + d1_evN2_dx*d1_yN2_dx + d1_evNO_dx*d1_yNO_dx + d1_evO2_dx*d1_yO2_dx)*invRe*invSc*mu_B0(0) +
      ((4.0/3.0))*invRe*mu_B0(0)*u0_B0(0)*d2_u0_dx + ((4.0/3.0))*invRe*u0_B0(0)*wk0_B0(0)*d1_mu_dx +
      4186800.0*(dhN*invMN*d1_YN_dx + dhO*invMO*d1_YO_dx + dhNO*invMNO*d1_YNO_dx)*invRe*invSc*d1_mu_dx +
      4186800.0*(dhN*invMN*d2_YN_dx + dhO*invMO*d2_YO_dx + dhNO*invMNO*d2_YNO_dx)*invRe*invSc*mu_B0(0) +
      (2.5*invMN*d1_yN_dx + 2.5*invMO*d1_yO_dx + 3.5*invMN2*d1_YN2_dx + 3.5*invMNO*d1_YNO_dx +
      3.5*invMO2*d1_yO2_dx)*Rhat*invRe*invSc*T_B0(0)*d1_mu_dx + (2.5*invMN*d1_yN_dx + 2.5*invMO*d1_yO_dx +
      3.5*invMN2*d1_YN2_dx + 3.5*invMNO*d1_YNO_dx + 3.5*invMO2*d1_yO2_dx)*Rhat*invRe*invSc*mu_B0(0)*d1_T_dx +
      (2.5*invMN*d2_yN_dx + 2.5*invMO*d2_yO_dx + 3.5*invMN2*d2_YN2_dx + 3.5*invMNO*d2_YNO_dx +
      3.5*invMO2*d2_yO2_dx)*Rhat*invRe*invSc*T_B0(0)*mu_B0(0) + Residual7_B0(0);

}

 void opensbliblock00Kernel045(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
&Residual2_B0, const ACC<double> &Residual3_B0, const ACC<double> &Residual4_B0, const ACC<double> &Residual5_B0, const
ACC<double> &Residual6_B0, const ACC<double> &Residual7_B0, ACC<double> &rhoE_B0, ACC<double> &rhoE_RKold_B0,
ACC<double> &rhoN2_B0, ACC<double> &rhoN2_RKold_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoNO_RKold_B0, ACC<double>
&rhoN_B0, ACC<double> &rhoN_RKold_B0, ACC<double> &rhoO2_B0, ACC<double> &rhoO2_RKold_B0, ACC<double> &rhoO_B0,
ACC<double> &rhoO_RKold_B0, ACC<double> &rhoev_B0, ACC<double> &rhoev_RKold_B0, ACC<double> &rhou0_B0, ACC<double>
&rhou0_RKold_B0, const double *rkA, const double *rkB)
{
   rhoO_RKold_B0(0) = rkA[0]*rhoO_RKold_B0(0) + dt*Residual0_B0(0);

   rhoO_B0(0) = rkB[0]*rhoO_RKold_B0(0) + rhoO_B0(0);

   rhoO2_RKold_B0(0) = rkA[0]*rhoO2_RKold_B0(0) + dt*Residual1_B0(0);

   rhoO2_B0(0) = rkB[0]*rhoO2_RKold_B0(0) + rhoO2_B0(0);

   rhoN_RKold_B0(0) = rkA[0]*rhoN_RKold_B0(0) + dt*Residual2_B0(0);

   rhoN_B0(0) = rkB[0]*rhoN_RKold_B0(0) + rhoN_B0(0);

   rhoN2_RKold_B0(0) = rkA[0]*rhoN2_RKold_B0(0) + dt*Residual3_B0(0);

   rhoN2_B0(0) = rkB[0]*rhoN2_RKold_B0(0) + rhoN2_B0(0);

   rhoNO_RKold_B0(0) = rkA[0]*rhoNO_RKold_B0(0) + dt*Residual4_B0(0);

   rhoNO_B0(0) = rkB[0]*rhoNO_RKold_B0(0) + rhoNO_B0(0);

   rhou0_RKold_B0(0) = rkA[0]*rhou0_RKold_B0(0) + dt*Residual5_B0(0);

   rhou0_B0(0) = rkB[0]*rhou0_RKold_B0(0) + rhou0_B0(0);

   rhoev_RKold_B0(0) = rkA[0]*rhoev_RKold_B0(0) + dt*Residual6_B0(0);

   rhoev_B0(0) = rkB[0]*rhoev_RKold_B0(0) + rhoev_B0(0);

   rhoE_RKold_B0(0) = rkA[0]*rhoE_RKold_B0(0) + dt*Residual7_B0(0);

   rhoE_B0(0) = rkB[0]*rhoE_RKold_B0(0) + rhoE_B0(0);

}

 void opensbliblock00Kernel002(const ACC<double> &rhoE_B0, const ACC<double> &rhoN2_B0, const ACC<double> &rhoNO_B0,
const ACC<double> &rhoN_B0, const ACC<double> &rhoO2_B0, const ACC<double> &rhoO_B0, ACC<double> &a_B0, ACC<double>
&u0_B0, ACC<double> &p_B0)
{
   double inv_rho = 0.0;
   inv_rho = 1.0/(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) + rhoO2_B0(0));

   u0_B0(0) = rhoN_B0(0)*inv_rho;

   p_B0(0) = (-1 + gama)*(-0.5*(rhoN_B0(0)*rhoN_B0(0))*inv_rho + rhoE_B0(0));

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

 void opensbliblock00Kernel004(const ACC<double> &af_B0, const ACC<double> &gamaf_B0, const ACC<double> &rhoE_B0, const
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
   double AVG_0_0_LEV_07 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_14 = 0.0;
   double AVG_0_0_LEV_17 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_24 = 0.0;
   double AVG_0_0_LEV_27 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double AVG_0_0_LEV_34 = 0.0;
   double AVG_0_0_LEV_37 = 0.0;
   double AVG_0_0_LEV_46 = 0.0;
   double AVG_0_0_LEV_50 = 0.0;
   double AVG_0_0_LEV_51 = 0.0;
   double AVG_0_0_LEV_52 = 0.0;
   double AVG_0_0_LEV_53 = 0.0;
   double AVG_0_0_LEV_54 = 0.0;
   double AVG_0_0_LEV_57 = 0.0;
   double AVG_0_0_LEV_60 = 0.0;
   double AVG_0_0_LEV_61 = 0.0;
   double AVG_0_0_LEV_62 = 0.0;
   double AVG_0_0_LEV_63 = 0.0;
   double AVG_0_0_LEV_64 = 0.0;
   double AVG_0_0_LEV_65 = 0.0;
   double AVG_0_0_LEV_67 = 0.0;
   double AVG_0_0_LEV_70 = 0.0;
   double AVG_0_0_LEV_71 = 0.0;
   double AVG_0_0_LEV_72 = 0.0;
   double AVG_0_0_LEV_73 = 0.0;
   double AVG_0_0_LEV_74 = 0.0;
   double AVG_0_0_LEV_75 = 0.0;
   double AVG_0_0_LEV_77 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_01 = 0.0;
   double AVG_0_REV_02 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_05 = 0.0;
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
   double AVG_0_REV_56 = 0.0;
   double AVG_0_REV_57 = 0.0;
   double AVG_0_REV_64 = 0.0;
   double AVG_0_REV_75 = 0.0;
   double AVG_0_REV_76 = 0.0;
   double AVG_0_REV_77 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_af = 0.0;
   double AVG_0_gamaf = 0.0;
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
   AVG_0_gamaf = ((1.0/2.0))*(gamaf_B0(0) + gamaf_B0(-1));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(0) + rhoNO_B0(-1));

   AVG_0_af = ((1.0/2.0))*(af_B0(0) + af_B0(-1));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(0) + rhoO_B0(-1));

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(0) + rhoN2_B0(-1));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(0) + rhoN_B0(-1));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(-1));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(0) + rhoO2_B0(-1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   AVG_0_0_LEV_00 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_01 = -(-AVG_0_rhoO2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_02 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_03 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_04 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_07 = 2*AVG_0_rhoO2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_10 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_11 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_12 = -(-AVG_0_rhoNO + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_13 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_14 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_17 = 2*AVG_0_rhoNO/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_20 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_21 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_22 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_23 = -(-AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_24 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_27 = 2*AVG_0_rhoN2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_30 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_31 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_32 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_33 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_34 = -(-AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_37 = 2*AVG_0_rhoN/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_46 = 1;

   AVG_0_0_LEV_50 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_51 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_52 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_53 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_54 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_57 = -2*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_60 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_61 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_62 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_63 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_64 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_65 = ((1.0/2.0))*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_67 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_70 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_71 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_72 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_73 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_74 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_75 = -(1.0/2.0)*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_77 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    alpha_00 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_07 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_02 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_00 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_03 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_04 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_01;

    alpha_10 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_17 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_12 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_10 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_13 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_14 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_11;

    alpha_20 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_27 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_22 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_20 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_23 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_24 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_21;

    alpha_30 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_37 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_32 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_30 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_33 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_34 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_31;

   alpha_40 = (-rhoev_B0(-1) + rhoev_B0(0))*AVG_0_0_LEV_46;

    alpha_50 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_57 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_52 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_50 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_53 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_54 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_51;

    alpha_60 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_67 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_62 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_60 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_63 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_64 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_61 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_65;

    alpha_70 = (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_77 + (-rhoN_B0(-1) + rhoN_B0(0))*AVG_0_0_LEV_72 + (-rhoO_B0(-1) +
      rhoO_B0(0))*AVG_0_0_LEV_70 + (-rhoN2_B0(-1) + rhoN2_B0(0))*AVG_0_0_LEV_73 + (-rhoNO_B0(-1) +
      rhoNO_B0(0))*AVG_0_0_LEV_74 + (-rhoO2_B0(-1) + rhoO2_B0(0))*AVG_0_0_LEV_71 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_75;

   AVG_0_gamaf = ((1.0/2.0))*(gamaf_B0(0) + gamaf_B0(1));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(0) + rhoNO_B0(1));

   AVG_0_af = ((1.0/2.0))*(af_B0(0) + af_B0(1));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(0) + rhoO_B0(1));

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(0) + rhoN2_B0(1));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(0) + rhoN_B0(1));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(1));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(0) + rhoO2_B0(1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   AVG_0_0_LEV_00 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_01 = -(-AVG_0_rhoO2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_02 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_03 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_04 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_07 = 2*AVG_0_rhoO2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_10 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_11 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_12 = -(-AVG_0_rhoNO + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_13 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_14 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_17 = 2*AVG_0_rhoNO/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_20 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_21 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_22 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_23 = -(-AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_24 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_27 = 2*AVG_0_rhoN2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_30 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_31 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_32 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_33 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_34 = -(-AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_37 = 2*AVG_0_rhoN/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_46 = 1;

   AVG_0_0_LEV_50 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_51 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_52 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_53 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_54 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_57 = -2*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_60 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_61 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_62 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_63 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_64 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_65 = ((1.0/2.0))*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_67 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_70 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_71 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_72 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_73 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_74 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_75 = -(1.0/2.0)*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_77 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    alpha_01 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_07 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_02 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_00 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_03 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_04 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_01;

    alpha_11 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_17 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_12 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_10 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_13 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_14 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_11;

    alpha_21 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_27 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_22 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_20 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_23 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_24 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_21;

    alpha_31 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_37 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_32 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_30 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_33 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_34 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_31;

   alpha_41 = (-rhoev_B0(0) + rhoev_B0(1))*AVG_0_0_LEV_46;

    alpha_51 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_57 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_52 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_50 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_53 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_54 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_51;

    alpha_61 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_67 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_62 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_60 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_63 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_64 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_61 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_65;

    alpha_71 = (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_77 + (-rhoN_B0(0) + rhoN_B0(1))*AVG_0_0_LEV_72 + (-rhoO_B0(0) +
      rhoO_B0(1))*AVG_0_0_LEV_70 + (-rhoN2_B0(0) + rhoN2_B0(1))*AVG_0_0_LEV_73 + (-rhoNO_B0(0) +
      rhoNO_B0(1))*AVG_0_0_LEV_74 + (-rhoO2_B0(0) + rhoO2_B0(1))*AVG_0_0_LEV_71 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_75;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = AVG_0_u0;

   ws_lambda_33 = AVG_0_u0;

   ws_lambda_44 = AVG_0_u0;

   ws_lambda_55 = AVG_0_u0;

   ws_lambda_66 = AVG_0_af + AVG_0_u0;

   ws_lambda_77 = -AVG_0_af + AVG_0_u0;

   AVG_0_REV_00 = 1;

   AVG_0_REV_01 = 1;

   AVG_0_REV_02 = 1;

   AVG_0_REV_03 = 1;

   AVG_0_REV_05 = 1;

   AVG_0_REV_06 = 1;

   AVG_0_REV_07 = 1;

   AVG_0_REV_10 = -1;

   AVG_0_REV_16 = AVG_0_rhoO2/AVG_0_rhoO;

   AVG_0_REV_17 = AVG_0_rhoO2/AVG_0_rhoO;

   AVG_0_REV_21 = -1;

   AVG_0_REV_26 = AVG_0_rhoNO/AVG_0_rhoO;

   AVG_0_REV_27 = AVG_0_rhoNO/AVG_0_rhoO;

   AVG_0_REV_32 = -1;

   AVG_0_REV_36 = AVG_0_rhoN2/AVG_0_rhoO;

   AVG_0_REV_37 = AVG_0_rhoN2/AVG_0_rhoO;

   AVG_0_REV_43 = -1;

   AVG_0_REV_46 = AVG_0_rhoN/AVG_0_rhoO;

   AVG_0_REV_47 = AVG_0_rhoN/AVG_0_rhoO;

   AVG_0_REV_56 = AVG_0_af/AVG_0_rhoO;

   AVG_0_REV_57 = -AVG_0_af/AVG_0_rhoO;

   AVG_0_REV_64 = 1;

   AVG_0_REV_75 = -(1.0/2.0)*AVG_0_af/(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2);

   AVG_0_REV_76 = ((1.0/2.0))*(-1 + AVG_0_gamaf)*AVG_0_af/AVG_0_rhoO;

   AVG_0_REV_77 = ((1.0/2.0))*(-1 + AVG_0_gamaf)*AVG_0_af/AVG_0_rhoO;

   AVG_0_gamaf = ((1.0/2.0))*(gamaf_B0(1) + gamaf_B0(2));

   AVG_0_rhoNO = ((1.0/2.0))*(rhoNO_B0(1) + rhoNO_B0(2));

   AVG_0_af = ((1.0/2.0))*(af_B0(1) + af_B0(2));

   AVG_0_rhoO = ((1.0/2.0))*(rhoO_B0(1) + rhoO_B0(2));

   AVG_0_rhoN2 = ((1.0/2.0))*(rhoN2_B0(1) + rhoN2_B0(2));

   AVG_0_rhoN = ((1.0/2.0))*(rhoN_B0(1) + rhoN_B0(2));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1) + u0_B0(2));

   AVG_0_rhoO2 = ((1.0/2.0))*(rhoO2_B0(1) + rhoO2_B0(2));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   AVG_0_0_LEV_00 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_01 = -(-AVG_0_rhoO2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_02 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_03 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_04 = AVG_0_rhoO2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_07 = 2*AVG_0_rhoO2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_10 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_11 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_12 = -(-AVG_0_rhoNO + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_13 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_14 = AVG_0_rhoNO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_17 = 2*AVG_0_rhoNO/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_20 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_21 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_22 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_23 = -(-AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_24 = AVG_0_rhoN2/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_27 = 2*AVG_0_rhoN2/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_30 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_31 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_32 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_33 = AVG_0_rhoN/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_34 = -(-AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN + AVG_0_gamaf*AVG_0_rhoN2 + AVG_0_gamaf*AVG_0_rhoNO +
      AVG_0_gamaf*AVG_0_rhoO + AVG_0_gamaf*AVG_0_rhoO2)/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_37 = 2*AVG_0_rhoN/(AVG_0_af*AVG_0_gamaf);

   AVG_0_0_LEV_46 = 1;

   AVG_0_0_LEV_50 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_51 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_52 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_53 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_54 = (-1 + AVG_0_gamaf)/AVG_0_gamaf;

   AVG_0_0_LEV_57 = -2*(AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO + AVG_0_rhoO2)/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_60 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_61 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_62 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_63 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_64 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_65 = ((1.0/2.0))*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_67 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    AVG_0_0_LEV_70 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_71 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_72 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_73 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

    AVG_0_0_LEV_74 = ((1.0/2.0))*AVG_0_rhoO/((AVG_0_rhoN + AVG_0_rhoN2 + AVG_0_rhoNO + AVG_0_rhoO +
      AVG_0_rhoO2)*AVG_0_gamaf);

   AVG_0_0_LEV_75 = -(1.0/2.0)*AVG_0_rhoO/AVG_0_af;

   AVG_0_0_LEV_77 = AVG_0_rhoO/(AVG_0_af*AVG_0_gamaf);

    alpha_02 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_07 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_02 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_00 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_03 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_04 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_01;

    alpha_12 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_17 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_12 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_10 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_13 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_14 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_11;

    alpha_22 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_27 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_22 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_20 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_23 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_24 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_21;

    alpha_32 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_37 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_32 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_30 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_33 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_34 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_31;

   alpha_42 = (-rhoev_B0(1) + rhoev_B0(2))*AVG_0_0_LEV_46;

    alpha_52 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_57 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_52 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_50 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_53 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_54 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_51;

    alpha_62 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_67 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_62 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_60 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_63 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_64 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_61 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_65;

    alpha_72 = (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_77 + (-rhoN_B0(1) + rhoN_B0(2))*AVG_0_0_LEV_72 + (-rhoO_B0(1) +
      rhoO_B0(2))*AVG_0_0_LEV_70 + (-rhoN2_B0(1) + rhoN2_B0(2))*AVG_0_0_LEV_73 + (-rhoNO_B0(1) +
      rhoNO_B0(2))*AVG_0_0_LEV_74 + (-rhoO2_B0(1) + rhoO2_B0(2))*AVG_0_0_LEV_71 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_75;

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
      AVG_0_REV_03*phi_star_3 + AVG_0_REV_05*phi_star_5 + AVG_0_REV_06*phi_star_6 + AVG_0_REV_07*phi_star_7);

   wk1_B0(0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_16*phi_star_6 + AVG_0_REV_17*phi_star_7);

   wk2_B0(0) = 0.5*(AVG_0_REV_21*phi_star_1 + AVG_0_REV_26*phi_star_6 + AVG_0_REV_27*phi_star_7);

   wk3_B0(0) = 0.5*(AVG_0_REV_32*phi_star_2 + AVG_0_REV_36*phi_star_6 + AVG_0_REV_37*phi_star_7);

   wk4_B0(0) = 0.5*(AVG_0_REV_43*phi_star_3 + AVG_0_REV_46*phi_star_6 + AVG_0_REV_47*phi_star_7);

   wk5_B0(0) = 0.5*(AVG_0_REV_56*phi_star_6 + AVG_0_REV_57*phi_star_7);

   wk6_B0(0) = 0.5*AVG_0_REV_64*phi_star_4;

   wk7_B0(0) = 0.5*(AVG_0_REV_75*phi_star_5 + AVG_0_REV_76*phi_star_6 + AVG_0_REV_77*phi_star_7);

}

 void opensbliblock00Kernel005(const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const
ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double> &wk6_B0, const ACC<double>
&wk7_B0, ACC<double> &rhoE_B0, ACC<double> &rhoN2_B0, ACC<double> &rhoNO_B0, ACC<double> &rhoN_B0, ACC<double>
&rhoO2_B0, ACC<double> &rhoO_B0, ACC<double> &rhoev_B0, ACC<double> &rhou0_B0, const int *idx)
{
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   rhoO_B0(0) = -(-wk0_B0(-1) + wk0_B0(0))*dt*invDelta0block0 + rhoO_B0(0);

   rhoO2_B0(0) = -(-wk1_B0(-1) + wk1_B0(0))*dt*invDelta0block0 + rhoO2_B0(0);

   rhoN_B0(0) = -(-wk2_B0(-1) + wk2_B0(0))*dt*invDelta0block0 + rhoN_B0(0);

   rhoN2_B0(0) = -(-wk3_B0(-1) + wk3_B0(0))*dt*invDelta0block0 + rhoN2_B0(0);

   rhoNO_B0(0) = -(-wk4_B0(-1) + wk4_B0(0))*dt*invDelta0block0 + rhoNO_B0(0);

   rhou0_B0(0) = -(-wk5_B0(-1) + wk5_B0(0))*dt*invDelta0block0 + rhou0_B0(0);

   rhoev_B0(0) = -(-wk6_B0(-1) + wk6_B0(0))*dt*invDelta0block0 + rhoev_B0(0);

   rhoE_B0(0) = -(-wk7_B0(-1) + wk7_B0(0))*dt*invDelta0block0 + rhoE_B0(0);

}

#endif
