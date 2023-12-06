#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel068(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0, ACC<double> &x0_B0, ACC<double> &x2_B0, ACC<double> &x1_B0, const int *idx)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   x0_B0(0,0,0) = Delta0block0*idx[0];

    x1_B0(0,0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

   x2_B0(0,0,0) = Delta2block0*idx[2];

    rhou0 = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   2.81039661150837e-5 + 1.43741064476382e-8*pow(x1_B0(0,0,0), 42) +
      2.35254921037213e-9*pow(x1_B0(0,0,0), 47) + 356.68317983991*pow(x1_B0(0,0,0), 13) +
      0.0353762430137976*pow(x1_B0(0,0,0), 25) + 4.98281126301807*pow(x1_B0(0,0,0), 17) +
      0.000258705285704767*pow(x1_B0(0,0,0), 31) + 8.56725968618658*pow(x1_B0(0,0,0), 18) +
      1147.20449105431*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) +
      5524.52310783356*pow(x1_B0(0,0,0), 8) + 98.9318180837726*pow(x1_B0(0,0,0), 14) +
      1.03326084723313e-10*pow(x1_B0(0,0,0), 50) + 6.72761786130368e-5*pow(x1_B0(0,0,0), 33) +
      2.22195192398139*pow(x1_B0(0,0,0), 19) + 4629.94440774333*pow(x1_B0(0,0,0), 10) +
      0.0803865778719179*pow(x1_B0(0,0,0), 24) + 1.60761449782845e-7*pow(x1_B0(0,0,0), 41) +
      5.23010079916334e-6*pow(x1_B0(0,0,0), 34) + 46.3409193935041*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0))
      + 0.000184979815958369*pow(x1_B0(0,0,0), 32) + 0.0500331236226379*pow(x1_B0(0,0,0), 23) +
      4.00951990673062e-7*pow(x1_B0(0,0,0), 40) + 0.227035062323798*x1_B0(0,0,0) +
      4.28260217732342e-10*pow(x1_B0(0,0,0), 48) + 0.239394888480591*(x1_B0(0,0,0)*x1_B0(0,0,0)) +
      4.67371873402056e-7*pow(x1_B0(0,0,0), 39) + 1.85444223499528e-9*pow(x1_B0(0,0,0), 46) +
      0.00388938387189537*pow(x1_B0(0,0,0), 26) - 8.5163578155006e-6*pow(x1_B0(0,0,0), 36) -
      6536.18218125039*pow(x1_B0(0,0,0), 9) - 0.250879029929317*pow(x1_B0(0,0,0), 22) -
      65.3032995710932*pow(x1_B0(0,0,0), 15) - 7.07099322048105e-5*pow(x1_B0(0,0,0), 30) -
      0.00143232036328987*pow(x1_B0(0,0,0), 29) - 4.02452312668408e-7*pow(x1_B0(0,0,0), 38) -
      508.302957976023*pow(x1_B0(0,0,0), 12) - 0.00399115719598852*pow(x1_B0(0,0,0), 28) -
      32.9934956790698*pow(x1_B0(0,0,0), 16) - 4.41333041456345*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      286.750140789439*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      1316.13084233651*pow(x1_B0(0,0,0), 11) - 0.00511985973650991*pow(x1_B0(0,0,0), 27) -
      6.3729515154115e-10*pow(x1_B0(0,0,0), 49) - 2.04336344208123e-8*pow(x1_B0(0,0,0), 44) -
      1.09728292538878e-5*pow(x1_B0(0,0,0), 35) - 3067.56701069705*pow(x1_B0(0,0,0), 7) -
      5.62476369399133e-9*pow(x1_B0(0,0,0), 45) - 0.853020979980104*pow(x1_B0(0,0,0), 20) -
      0.864359893893228*pow(x1_B0(0,0,0), 21) - 3.35728025020949e-6*pow(x1_B0(0,0,0), 37) -
      2.75357655562896e-8*pow(x1_B0(0,0,0), 43)
)
: (
   0.999998735003701
));

    rhou1 = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   2.82850755544212e-7 + 3.50264126762691e-12*pow(x1_B0(0,0,0), 48) +
      1.30018938162945e-9*pow(x1_B0(0,0,0), 41) +
      10.7700922614948*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) +
      3.00055195729854*pow(x1_B0(0,0,0), 13) + 1.47342354235137e-6*pow(x1_B0(0,0,0), 32) +
      0.0325726243237278*pow(x1_B0(0,0,0), 17) + 6.43314214225773e-8*pow(x1_B0(0,0,0), 34) +
      5.691392750484e-7*pow(x1_B0(0,0,0), 33) + 1.49988972371651e-10*pow(x1_B0(0,0,0), 42) +
      0.000643780222073761*pow(x1_B0(0,0,0), 24) + 4.32902689710394e-5*pow(x1_B0(0,0,0), 26) +
      0.00306851411799395*(x1_B0(0,0,0)*x1_B0(0,0,0)) + 50.4902697287611*pow(x1_B0(0,0,0), 8) +
      7.68902588231479e-13*pow(x1_B0(0,0,0), 50) +
      0.446296875645359*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) + 0.926238907546023*pow(x1_B0(0,0,0), 14)
      + 1.8984936784265e-6*pow(x1_B0(0,0,0), 31) + 0.0719292862901375*pow(x1_B0(0,0,0), 18) +
      1.79729239219378e-11*pow(x1_B0(0,0,0), 47) + 0.000303170879767114*pow(x1_B0(0,0,0), 25) +
      0.000303522841510186*pow(x1_B0(0,0,0), 23) + 40.7267611787407*pow(x1_B0(0,0,0), 10) +
      0.0206853828562213*pow(x1_B0(0,0,0), 19) + 3.08982412050263e-9*pow(x1_B0(0,0,0), 40) +
      3.29566754536575e-9*pow(x1_B0(0,0,0), 39) + 1.29094786852972e-11*pow(x1_B0(0,0,0), 46) -
      1.57852214508555e-10*pow(x1_B0(0,0,0), 44) - 2.76575646430732e-8*pow(x1_B0(0,0,0), 37) -
      10.9780440895078*pow(x1_B0(0,0,0), 11) - 6.65525568314751e-8*pow(x1_B0(0,0,0), 36) -
      1.99923138073657e-10*pow(x1_B0(0,0,0), 43) - 5.35980258619527e-5*x1_B0(0,0,0) -
      4.10437108979308e-9*pow(x1_B0(0,0,0), 38) - 0.00228279832995747*pow(x1_B0(0,0,0), 22) -
      3.74649430794318e-5*pow(x1_B0(0,0,0), 27) - 7.87229625194212e-8*pow(x1_B0(0,0,0), 35) -
      4.8269472261631e-12*pow(x1_B0(0,0,0), 49) - 0.0441430306839343*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      4.60162293988014e-11*pow(x1_B0(0,0,0), 45) - 58.7715662719512*pow(x1_B0(0,0,0), 9) -
      0.00718722145284829*pow(x1_B0(0,0,0), 21) - 3.21903288072672e-5*pow(x1_B0(0,0,0), 28) -
      0.531967995629153*pow(x1_B0(0,0,0), 15) - 1.0949188226691e-6*pow(x1_B0(0,0,0), 30) -
      4.69647564972346*pow(x1_B0(0,0,0), 12) - 0.293734174034487*pow(x1_B0(0,0,0), 16) -
      2.7255075528464*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      0.00617572465015506*pow(x1_B0(0,0,0), 20) - 1.23434706942339e-5*pow(x1_B0(0,0,0), 29) -
      28.430954033184*pow(x1_B0(0,0,0), 7)
)
: (
   0.00614800732713735
));

    T = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   3.68605368943053 + 0.000131769823417667*pow(x1_B0(0,0,0), 29) +
      0.460099682731*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) + 4.05455574968232e-9*pow(x1_B0(0,0,0), 44) +
      330.595791398787*pow(x1_B0(0,0,0), 9) + 0.00063083422035483*pow(x1_B0(0,0,0), 28) +
      1.60356455720817e-6*pow(x1_B0(0,0,0), 36) + 0.21739398719461*pow(x1_B0(0,0,0), 20) +
      4.6371828661599e-7*pow(x1_B0(0,0,0), 37) + 0.00847221913578787*pow(x1_B0(0,0,0), 22) +
      1.37375928383668e-10*pow(x1_B0(0,0,0), 49) + 9.56566740675196*pow(x1_B0(0,0,0), 15) +
      1.92029711419058*pow(x1_B0(0,0,0), 16) + 62.8420648243096*pow(x1_B0(0,0,0), 7) +
      163.096369994513*pow(x1_B0(0,0,0), 11) + 0.00126769119684369*pow(x1_B0(0,0,0), 27) +
      10.6559158875736*pow(x1_B0(0,0,0), 12) + 2.90122489492484e-6*pow(x1_B0(0,0,0), 35) +
      0.000815321994564817*pow(x1_B0(0,0,0), 26) + 8.16319660216578e-10*pow(x1_B0(0,0,0), 45) +
      0.110001469415963*pow(x1_B0(0,0,0), 21) + 1.71688618230489e-9*pow(x1_B0(0,0,0), 42) +
      6.96468827477218e-9*pow(x1_B0(0,0,0), 43) + 1.80732810234706e-6*pow(x1_B0(0,0,0), 34) -
      0.561250842013717*pow(x1_B0(0,0,0), 14) - 1.68171831786958*(x1_B0(0,0,0)*x1_B0(0,0,0)) -
      8.87275031528965*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      2.38485786943416e-11*pow(x1_B0(0,0,0), 50) - 6.22843587329656e-11*pow(x1_B0(0,0,0), 48) -
      1.00622259221966*pow(x1_B0(0,0,0), 18) - 4.89640863359306e-10*pow(x1_B0(0,0,0), 47) -
      0.000273583121327074*x1_B0(0,0,0) - 0.020782772886469*pow(x1_B0(0,0,0), 19) -
      8.05625879502216e-8*pow(x1_B0(0,0,0), 40) - 2.50796787769672e-8*pow(x1_B0(0,0,0), 41) -
      5.15842556443314e-5*pow(x1_B0(0,0,0), 30) - 0.0132110286562717*pow(x1_B0(0,0,0), 24) -
      0.98863413597168*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      0.125887551674619*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) - 3.15067643882105e-5*pow(x1_B0(0,0,0), 32) -
      6.34357269179205e-5*pow(x1_B0(0,0,0), 31) - 1.30048638120377e-7*pow(x1_B0(0,0,0), 39) -
      5.32751900212481e-10*pow(x1_B0(0,0,0), 46) - 3.76545169440846e-8*pow(x1_B0(0,0,0), 38) -
      0.0198354604355261*pow(x1_B0(0,0,0), 23) - 41.2478961104988*pow(x1_B0(0,0,0), 13) -
      334.886425796705*pow(x1_B0(0,0,0), 10) - 190.049355439722*pow(x1_B0(0,0,0), 8) -
      1.67223255324271*pow(x1_B0(0,0,0), 17) - 0.00343948871777371*pow(x1_B0(0,0,0), 25) -
      7.49626507528941e-6*pow(x1_B0(0,0,0), 33)
)
: (
   1.00000126339526
));

   rho = 1.0/T;

   rho_B0(0,0,0) = rho;

   rhou0_B0(0,0,0) = rhou0;

   rhou1_B0(0,0,0) = rhou1;

   rhoE_B0(0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   rhou2_B0(0,0,0) = 0.0;

}

 void opensbliblock00Kernel071(const ACC<double> &x0_B0, const ACC<double> &x1_B0, ACC<double> &D00_B0, ACC<double>
&D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0, ACC<double> &detJ_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0,
ACC<double> &wk3_B0, ACC<double> &wk4_B0, const int *idx)
{
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
    d1_x1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*x1_B0(0,2,0) + 4*x1_B0(0,1,0) - (25.0/12.0)*x1_B0(0,0,0) -
      (1.0/4.0)*x1_B0(0,4,0) + ((4.0/3.0))*x1_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0,0) -
      (1.0/2.0)*x1_B0(0,2,0) - (1.0/4.0)*x1_B0(0,-1,0) + ((1.0/12.0))*x1_B0(0,3,0) + ((3.0/2.0))*x1_B0(0,1,0)
)
: (
  
      -(2.0/3.0)*x1_B0(0,-1,0) - (1.0/12.0)*x1_B0(0,2,0) + ((1.0/12.0))*x1_B0(0,-2,0) + ((2.0/3.0))*x1_B0(0,1,0)
)));

    d1_x0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*x0_B0(2,0,0) + 4*x0_B0(1,0,0) - (25.0/12.0)*x0_B0(0,0,0) -
      (1.0/4.0)*x0_B0(4,0,0) + ((4.0/3.0))*x0_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0,0) -
      (1.0/2.0)*x0_B0(2,0,0) - (1.0/4.0)*x0_B0(-1,0,0) + ((1.0/12.0))*x0_B0(3,0,0) + ((3.0/2.0))*x0_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*x0_B0(-1,0,0) + 3*x0_B0(-2,0,0) - (4.0/3.0)*x0_B0(-3,0,0) +
      ((1.0/4.0))*x0_B0(-4,0,0) + ((25.0/12.0))*x0_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*x0_B0(-2,0,0) - (3.0/2.0)*x0_B0(-1,0,0) - (1.0/12.0)*x0_B0(-3,0,0) + ((1.0/4.0))*x0_B0(1,0,0) +
      ((5.0/6.0))*x0_B0(0,0,0)
)
: (
   -(2.0/3.0)*x0_B0(-1,0,0) - (1.0/12.0)*x0_B0(2,0,0) + ((1.0/12.0))*x0_B0(-2,0,0)
      + ((2.0/3.0))*x0_B0(1,0,0)
)))));

    d1_x1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*x1_B0(2,0,0) + 4*x1_B0(1,0,0) - (25.0/12.0)*x1_B0(0,0,0) -
      (1.0/4.0)*x1_B0(4,0,0) + ((4.0/3.0))*x1_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0,0) -
      (1.0/2.0)*x1_B0(2,0,0) - (1.0/4.0)*x1_B0(-1,0,0) + ((1.0/12.0))*x1_B0(3,0,0) + ((3.0/2.0))*x1_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*x1_B0(-1,0,0) + 3*x1_B0(-2,0,0) - (4.0/3.0)*x1_B0(-3,0,0) +
      ((1.0/4.0))*x1_B0(-4,0,0) + ((25.0/12.0))*x1_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*x1_B0(-2,0,0) - (3.0/2.0)*x1_B0(-1,0,0) - (1.0/12.0)*x1_B0(-3,0,0) + ((1.0/4.0))*x1_B0(1,0,0) +
      ((5.0/6.0))*x1_B0(0,0,0)
)
: (
   -(2.0/3.0)*x1_B0(-1,0,0) - (1.0/12.0)*x1_B0(2,0,0) + ((1.0/12.0))*x1_B0(-2,0,0)
      + ((2.0/3.0))*x1_B0(1,0,0)
)))));

    d1_x0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*x0_B0(0,2,0) + 4*x0_B0(0,1,0) - (25.0/12.0)*x0_B0(0,0,0) -
      (1.0/4.0)*x0_B0(0,4,0) + ((4.0/3.0))*x0_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0,0) -
      (1.0/2.0)*x0_B0(0,2,0) - (1.0/4.0)*x0_B0(0,-1,0) + ((1.0/12.0))*x0_B0(0,3,0) + ((3.0/2.0))*x0_B0(0,1,0)
)
: (
  
      -(2.0/3.0)*x0_B0(0,-1,0) - (1.0/12.0)*x0_B0(0,2,0) + ((1.0/12.0))*x0_B0(0,-2,0) + ((2.0/3.0))*x0_B0(0,1,0)
)));

   wk0_B0(0,0,0) = d1_x0_dx;

   wk1_B0(0,0,0) = d1_x0_dy;

   wk3_B0(0,0,0) = d1_x1_dx;

   wk4_B0(0,0,0) = d1_x1_dy;

   detJ_B0(0,0,0) = d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx;

   D00_B0(0,0,0) = d1_x1_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D01_B0(0,0,0) = -d1_x0_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D10_B0(0,0,0) = -d1_x1_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D11_B0(0,0,0) = d1_x0_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

}

 void opensbliblock00Kernel072(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(-1,0,0) = D00_B0(1,0,0);

   D01_B0(-1,0,0) = D01_B0(1,0,0);

   D10_B0(-1,0,0) = D10_B0(1,0,0);

   D11_B0(-1,0,0) = D11_B0(1,0,0);

   detJ_B0(-1,0,0) = detJ_B0(1,0,0);

   D00_B0(-2,0,0) = D00_B0(2,0,0);

   D01_B0(-2,0,0) = D01_B0(2,0,0);

   D10_B0(-2,0,0) = D10_B0(2,0,0);

   D11_B0(-2,0,0) = D11_B0(2,0,0);

   detJ_B0(-2,0,0) = detJ_B0(2,0,0);

   D00_B0(-3,0,0) = D00_B0(3,0,0);

   D01_B0(-3,0,0) = D01_B0(3,0,0);

   D10_B0(-3,0,0) = D10_B0(3,0,0);

   D11_B0(-3,0,0) = D11_B0(3,0,0);

   detJ_B0(-3,0,0) = detJ_B0(3,0,0);

   D00_B0(-4,0,0) = D00_B0(4,0,0);

   D01_B0(-4,0,0) = D01_B0(4,0,0);

   D10_B0(-4,0,0) = D10_B0(4,0,0);

   D11_B0(-4,0,0) = D11_B0(4,0,0);

   detJ_B0(-4,0,0) = detJ_B0(4,0,0);

}

 void opensbliblock00Kernel073(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(1,0,0) = D00_B0(-1,0,0);

   D01_B0(1,0,0) = D01_B0(-1,0,0);

   D10_B0(1,0,0) = D10_B0(-1,0,0);

   D11_B0(1,0,0) = D11_B0(-1,0,0);

   detJ_B0(1,0,0) = detJ_B0(-1,0,0);

   D00_B0(2,0,0) = D00_B0(-2,0,0);

   D01_B0(2,0,0) = D01_B0(-2,0,0);

   D10_B0(2,0,0) = D10_B0(-2,0,0);

   D11_B0(2,0,0) = D11_B0(-2,0,0);

   detJ_B0(2,0,0) = detJ_B0(-2,0,0);

   D00_B0(3,0,0) = D00_B0(-3,0,0);

   D01_B0(3,0,0) = D01_B0(-3,0,0);

   D10_B0(3,0,0) = D10_B0(-3,0,0);

   D11_B0(3,0,0) = D11_B0(-3,0,0);

   detJ_B0(3,0,0) = detJ_B0(-3,0,0);

   D00_B0(4,0,0) = D00_B0(-4,0,0);

   D01_B0(4,0,0) = D01_B0(-4,0,0);

   D10_B0(4,0,0) = D10_B0(-4,0,0);

   D11_B0(4,0,0) = D11_B0(-4,0,0);

   detJ_B0(4,0,0) = detJ_B0(-4,0,0);

}

 void opensbliblock00Kernel074(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(0,-1,0) = D00_B0(0,1,0);

   D01_B0(0,-1,0) = D01_B0(0,1,0);

   D10_B0(0,-1,0) = D10_B0(0,1,0);

   D11_B0(0,-1,0) = D11_B0(0,1,0);

   detJ_B0(0,-1,0) = detJ_B0(0,1,0);

   D00_B0(0,-2,0) = D00_B0(0,2,0);

   D01_B0(0,-2,0) = D01_B0(0,2,0);

   D10_B0(0,-2,0) = D10_B0(0,2,0);

   D11_B0(0,-2,0) = D11_B0(0,2,0);

   detJ_B0(0,-2,0) = detJ_B0(0,2,0);

   D00_B0(0,-3,0) = D00_B0(0,3,0);

   D01_B0(0,-3,0) = D01_B0(0,3,0);

   D10_B0(0,-3,0) = D10_B0(0,3,0);

   D11_B0(0,-3,0) = D11_B0(0,3,0);

   detJ_B0(0,-3,0) = detJ_B0(0,3,0);

   D00_B0(0,-4,0) = D00_B0(0,4,0);

   D01_B0(0,-4,0) = D01_B0(0,4,0);

   D10_B0(0,-4,0) = D10_B0(0,4,0);

   D11_B0(0,-4,0) = D11_B0(0,4,0);

   detJ_B0(0,-4,0) = detJ_B0(0,4,0);

}

 void opensbliblock00Kernel075(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(0,1,0) = D00_B0(0,-1,0);

   D01_B0(0,1,0) = D01_B0(0,-1,0);

   D10_B0(0,1,0) = D10_B0(0,-1,0);

   D11_B0(0,1,0) = D11_B0(0,-1,0);

   detJ_B0(0,1,0) = detJ_B0(0,-1,0);

   D00_B0(0,2,0) = D00_B0(0,-2,0);

   D01_B0(0,2,0) = D01_B0(0,-2,0);

   D10_B0(0,2,0) = D10_B0(0,-2,0);

   D11_B0(0,2,0) = D11_B0(0,-2,0);

   detJ_B0(0,2,0) = detJ_B0(0,-2,0);

   D00_B0(0,3,0) = D00_B0(0,-3,0);

   D01_B0(0,3,0) = D01_B0(0,-3,0);

   D10_B0(0,3,0) = D10_B0(0,-3,0);

   D11_B0(0,3,0) = D11_B0(0,-3,0);

   detJ_B0(0,3,0) = detJ_B0(0,-3,0);

   D00_B0(0,4,0) = D00_B0(0,-4,0);

   D01_B0(0,4,0) = D01_B0(0,-4,0);

   D10_B0(0,4,0) = D10_B0(0,-4,0);

   D11_B0(0,4,0) = D11_B0(0,-4,0);

   detJ_B0(0,4,0) = detJ_B0(0,-4,0);

}

 void opensbliblock00Kernel082(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
ACC<double> &D11_B0, ACC<double> &SD000_B0, ACC<double> &SD001_B0, ACC<double> &SD010_B0, ACC<double> &SD011_B0,
ACC<double> &SD100_B0, ACC<double> &SD101_B0, ACC<double> &SD110_B0, ACC<double> &SD111_B0, const int *idx)
{
   double d1_D00_dx = 0.0;
   double d1_D00_dy = 0.0;
   double d1_D01_dx = 0.0;
   double d1_D01_dy = 0.0;
   double d1_D10_dx = 0.0;
   double d1_D10_dy = 0.0;
   double d1_D11_dx = 0.0;
   double d1_D11_dy = 0.0;
    d1_D01_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D01_B0(2,0,0) + 4*D01_B0(1,0,0) - (25.0/12.0)*D01_B0(0,0,0) -
      (1.0/4.0)*D01_B0(4,0,0) + ((4.0/3.0))*D01_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D01_B0(0,0,0) -
      (1.0/2.0)*D01_B0(2,0,0) - (1.0/4.0)*D01_B0(-1,0,0) + ((1.0/12.0))*D01_B0(3,0,0) + ((3.0/2.0))*D01_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*D01_B0(-1,0,0) + 3*D01_B0(-2,0,0) - (4.0/3.0)*D01_B0(-3,0,0) +
      ((1.0/4.0))*D01_B0(-4,0,0) + ((25.0/12.0))*D01_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*D01_B0(-2,0,0) - (3.0/2.0)*D01_B0(-1,0,0) - (1.0/12.0)*D01_B0(-3,0,0) + ((1.0/4.0))*D01_B0(1,0,0) +
      ((5.0/6.0))*D01_B0(0,0,0)
)
: (
   -(2.0/3.0)*D01_B0(-1,0,0) - (1.0/12.0)*D01_B0(2,0,0) +
      ((1.0/12.0))*D01_B0(-2,0,0) + ((2.0/3.0))*D01_B0(1,0,0)
)))));

    d1_D01_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D01_B0(0,2,0) + 4*D01_B0(0,1,0) - (25.0/12.0)*D01_B0(0,0,0) -
      (1.0/4.0)*D01_B0(0,4,0) + ((4.0/3.0))*D01_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D01_B0(0,0,0) -
      (1.0/2.0)*D01_B0(0,2,0) - (1.0/4.0)*D01_B0(0,-1,0) + ((1.0/12.0))*D01_B0(0,3,0) + ((3.0/2.0))*D01_B0(0,1,0)
)
: (

        -(2.0/3.0)*D01_B0(0,-1,0) - (1.0/12.0)*D01_B0(0,2,0) + ((1.0/12.0))*D01_B0(0,-2,0) +
      ((2.0/3.0))*D01_B0(0,1,0)
)));

    d1_D00_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D00_B0(2,0,0) + 4*D00_B0(1,0,0) - (25.0/12.0)*D00_B0(0,0,0) -
      (1.0/4.0)*D00_B0(4,0,0) + ((4.0/3.0))*D00_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D00_B0(0,0,0) -
      (1.0/2.0)*D00_B0(2,0,0) - (1.0/4.0)*D00_B0(-1,0,0) + ((1.0/12.0))*D00_B0(3,0,0) + ((3.0/2.0))*D00_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*D00_B0(-1,0,0) + 3*D00_B0(-2,0,0) - (4.0/3.0)*D00_B0(-3,0,0) +
      ((1.0/4.0))*D00_B0(-4,0,0) + ((25.0/12.0))*D00_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*D00_B0(-2,0,0) - (3.0/2.0)*D00_B0(-1,0,0) - (1.0/12.0)*D00_B0(-3,0,0) + ((1.0/4.0))*D00_B0(1,0,0) +
      ((5.0/6.0))*D00_B0(0,0,0)
)
: (
   -(2.0/3.0)*D00_B0(-1,0,0) - (1.0/12.0)*D00_B0(2,0,0) +
      ((1.0/12.0))*D00_B0(-2,0,0) + ((2.0/3.0))*D00_B0(1,0,0)
)))));

    d1_D10_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D10_B0(2,0,0) + 4*D10_B0(1,0,0) - (25.0/12.0)*D10_B0(0,0,0) -
      (1.0/4.0)*D10_B0(4,0,0) + ((4.0/3.0))*D10_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D10_B0(0,0,0) -
      (1.0/2.0)*D10_B0(2,0,0) - (1.0/4.0)*D10_B0(-1,0,0) + ((1.0/12.0))*D10_B0(3,0,0) + ((3.0/2.0))*D10_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*D10_B0(-1,0,0) + 3*D10_B0(-2,0,0) - (4.0/3.0)*D10_B0(-3,0,0) +
      ((1.0/4.0))*D10_B0(-4,0,0) + ((25.0/12.0))*D10_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*D10_B0(-2,0,0) - (3.0/2.0)*D10_B0(-1,0,0) - (1.0/12.0)*D10_B0(-3,0,0) + ((1.0/4.0))*D10_B0(1,0,0) +
      ((5.0/6.0))*D10_B0(0,0,0)
)
: (
   -(2.0/3.0)*D10_B0(-1,0,0) - (1.0/12.0)*D10_B0(2,0,0) +
      ((1.0/12.0))*D10_B0(-2,0,0) + ((2.0/3.0))*D10_B0(1,0,0)
)))));

    d1_D11_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D11_B0(0,2,0) + 4*D11_B0(0,1,0) - (25.0/12.0)*D11_B0(0,0,0) -
      (1.0/4.0)*D11_B0(0,4,0) + ((4.0/3.0))*D11_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D11_B0(0,0,0) -
      (1.0/2.0)*D11_B0(0,2,0) - (1.0/4.0)*D11_B0(0,-1,0) + ((1.0/12.0))*D11_B0(0,3,0) + ((3.0/2.0))*D11_B0(0,1,0)
)
: (

        -(2.0/3.0)*D11_B0(0,-1,0) - (1.0/12.0)*D11_B0(0,2,0) + ((1.0/12.0))*D11_B0(0,-2,0) +
      ((2.0/3.0))*D11_B0(0,1,0)
)));

    d1_D11_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D11_B0(2,0,0) + 4*D11_B0(1,0,0) - (25.0/12.0)*D11_B0(0,0,0) -
      (1.0/4.0)*D11_B0(4,0,0) + ((4.0/3.0))*D11_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D11_B0(0,0,0) -
      (1.0/2.0)*D11_B0(2,0,0) - (1.0/4.0)*D11_B0(-1,0,0) + ((1.0/12.0))*D11_B0(3,0,0) + ((3.0/2.0))*D11_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*D11_B0(-1,0,0) + 3*D11_B0(-2,0,0) - (4.0/3.0)*D11_B0(-3,0,0) +
      ((1.0/4.0))*D11_B0(-4,0,0) + ((25.0/12.0))*D11_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (
  
      ((1.0/2.0))*D11_B0(-2,0,0) - (3.0/2.0)*D11_B0(-1,0,0) - (1.0/12.0)*D11_B0(-3,0,0) + ((1.0/4.0))*D11_B0(1,0,0) +
      ((5.0/6.0))*D11_B0(0,0,0)
)
: (
   -(2.0/3.0)*D11_B0(-1,0,0) - (1.0/12.0)*D11_B0(2,0,0) +
      ((1.0/12.0))*D11_B0(-2,0,0) + ((2.0/3.0))*D11_B0(1,0,0)
)))));

    d1_D10_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D10_B0(0,2,0) + 4*D10_B0(0,1,0) - (25.0/12.0)*D10_B0(0,0,0) -
      (1.0/4.0)*D10_B0(0,4,0) + ((4.0/3.0))*D10_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D10_B0(0,0,0) -
      (1.0/2.0)*D10_B0(0,2,0) - (1.0/4.0)*D10_B0(0,-1,0) + ((1.0/12.0))*D10_B0(0,3,0) + ((3.0/2.0))*D10_B0(0,1,0)
)
: (

        -(2.0/3.0)*D10_B0(0,-1,0) - (1.0/12.0)*D10_B0(0,2,0) + ((1.0/12.0))*D10_B0(0,-2,0) +
      ((2.0/3.0))*D10_B0(0,1,0)
)));

    d1_D00_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D00_B0(0,2,0) + 4*D00_B0(0,1,0) - (25.0/12.0)*D00_B0(0,0,0) -
      (1.0/4.0)*D00_B0(0,4,0) + ((4.0/3.0))*D00_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D00_B0(0,0,0) -
      (1.0/2.0)*D00_B0(0,2,0) - (1.0/4.0)*D00_B0(0,-1,0) + ((1.0/12.0))*D00_B0(0,3,0) + ((3.0/2.0))*D00_B0(0,1,0)
)
: (

        -(2.0/3.0)*D00_B0(0,-1,0) - (1.0/12.0)*D00_B0(0,2,0) + ((1.0/12.0))*D00_B0(0,-2,0) +
      ((2.0/3.0))*D00_B0(0,1,0)
)));

   SD000_B0(0,0,0) = d1_D00_dx;

   SD001_B0(0,0,0) = d1_D00_dy;

   SD010_B0(0,0,0) = d1_D01_dx;

   SD011_B0(0,0,0) = d1_D01_dy;

   SD100_B0(0,0,0) = d1_D10_dx;

   SD101_B0(0,0,0) = d1_D10_dy;

   SD110_B0(0,0,0) = d1_D11_dx;

   SD111_B0(0,0,0) = d1_D11_dy;

}

 void opensbliblock00Kernel062(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0)
{
   rho_B0(0,0,0) = rho_B0(-1,0,0);

   rhou0_B0(0,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(0,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(0,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(0,0,0) = rhoE_B0(-1,0,0);

}

 void opensbliblock00Kernel063(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0)
{
   rho_B0(0,0,0) = rho_B0(-1,0,0);

   rhou0_B0(0,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(0,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(0,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(0,0,0) = rhoE_B0(-1,0,0);

   rho_B0(1,0,0) = rho_B0(-1,0,0);

   rhou0_B0(1,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(1,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(1,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(1,0,0) = rhoE_B0(-1,0,0);

   rho_B0(2,0,0) = rho_B0(-1,0,0);

   rhou0_B0(2,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(2,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(2,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(2,0,0) = rhoE_B0(-1,0,0);

   rho_B0(3,0,0) = rho_B0(-1,0,0);

   rhou0_B0(3,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(3,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(3,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(3,0,0) = rhoE_B0(-1,0,0);

   rho_B0(4,0,0) = rho_B0(-1,0,0);

   rhou0_B0(4,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(4,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(4,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(4,0,0) = rhoE_B0(-1,0,0);

}

 void opensbliblock00Kernel064(const int *iter, const ACC<double> &x0_B0, const ACC<double> &x2_B0, ACC<double>
&rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0, ACC<double> &rhou2_B0)
{
   double Pwall = 0.0;
   double T1 = 0.0;
   double T2 = 0.0;
   double T3 = 0.0;
   double T4 = 0.0;
   double T_above = 0.0;
   double rho_halo_1 = 0.0;
   double rho_halo_2 = 0.0;
   double rho_halo_3 = 0.0;
   double rho_halo_4 = 0.0;
   double u01 = 0.0;
   double u02 = 0.0;
   double u03 = 0.0;
   double u04 = 0.0;
   double u11 = 0.0;
   double u12 = 0.0;
   double u13 = 0.0;
   double u14 = 0.0;
   double u21 = 0.0;
   double u22 = 0.0;
   double u23 = 0.0;
   double u24 = 0.0;
    rhou1_B0(0,0,0) = (sin(dt*omega_0* *iter) + sin(dt*omega_1* *iter + phi_0) + sin(dt*omega_2* *iter + phi_1) +
      sin(dt*omega_3* *iter + phi_2))*tripA*rho_B0(0,0,0)*exp(-((-xts + x0_B0(0,0,0))*(-xts +
      x0_B0(0,0,0)))*b_f)*sin(beta_0*x2_B0(0,0,0));

   rhou0_B0(0,0,0) = 0.0;

   rhou2_B0(0,0,0) = 0.0;

   rhoE_B0(0,0,0) = Twall*inv2Minf*rho_B0(0,0,0)/(gama*(-1.0 + gama));

    Pwall = (-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,0,0)*rhou0_B0(0,0,0)) + ((1.0/2.0))*(rhou1_B0(0,0,0)*rhou1_B0(0,0,0))
      + ((1.0/2.0))*(rhou2_B0(0,0,0)*rhou2_B0(0,0,0)))/rho_B0(0,0,0) + rhoE_B0(0,0,0));

   u01 = rhou0_B0(0,1,0)/rho_B0(0,1,0);

   u02 = rhou0_B0(0,2,0)/rho_B0(0,2,0);

   u03 = rhou0_B0(0,3,0)/rho_B0(0,3,0);

   u04 = rhou0_B0(0,4,0)/rho_B0(0,4,0);

   u11 = rhou1_B0(0,1,0)/rho_B0(0,1,0);

   u12 = rhou1_B0(0,2,0)/rho_B0(0,2,0);

   u13 = rhou1_B0(0,3,0)/rho_B0(0,3,0);

   u14 = rhou1_B0(0,4,0)/rho_B0(0,4,0);

   u21 = rhou2_B0(0,1,0)/rho_B0(0,1,0);

   u22 = rhou2_B0(0,2,0)/rho_B0(0,2,0);

   u23 = rhou2_B0(0,3,0)/rho_B0(0,3,0);

   u24 = rhou2_B0(0,4,0)/rho_B0(0,4,0);

    T_above = (Minf*Minf)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,1,0)*rhou0_B0(0,1,0)) +
      ((1.0/2.0))*(rhou1_B0(0,1,0)*rhou1_B0(0,1,0)) + ((1.0/2.0))*(rhou2_B0(0,1,0)*rhou2_B0(0,1,0)))/rho_B0(0,1,0) +
      rhoE_B0(0,1,0))*gama/rho_B0(0,1,0);

   T1 = -T_above + 2*Twall;

   T2 = -2*T_above + 3*Twall;

   T3 = -3*T_above + 4*Twall;

   T4 = -4*T_above + 5*Twall;

   rho_halo_1 = (Minf*Minf)*gama*Pwall/T1;

   rho_B0(0,-1,0) = rho_halo_1;

   rho_halo_2 = (Minf*Minf)*gama*Pwall/T2;

   rho_B0(0,-2,0) = rho_halo_2;

   rho_halo_3 = (Minf*Minf)*gama*Pwall/T3;

   rho_B0(0,-3,0) = rho_halo_3;

   rho_halo_4 = (Minf*Minf)*gama*Pwall/T4;

   rho_B0(0,-4,0) = rho_halo_4;

   rhou0_B0(0,-1,0) = -rho_halo_1*u01;

   rhou1_B0(0,-1,0) = -rho_halo_1*u11;

   rhou2_B0(0,-1,0) = -rho_halo_1*u21;

   rhou0_B0(0,-2,0) = -rho_halo_2*u02;

   rhou1_B0(0,-2,0) = -rho_halo_2*u12;

   rhou2_B0(0,-2,0) = -rho_halo_2*u22;

   rhou0_B0(0,-3,0) = -rho_halo_3*u03;

   rhou1_B0(0,-3,0) = -rho_halo_3*u13;

   rhou2_B0(0,-3,0) = -rho_halo_3*u23;

   rhou0_B0(0,-4,0) = -rho_halo_4*u04;

   rhou1_B0(0,-4,0) = -rho_halo_4*u14;

   rhou2_B0(0,-4,0) = -rho_halo_4*u24;

   rhoE_B0(0,-1,0) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11) + (u21*u21))*rho_halo_1;

   rhoE_B0(0,-2,0) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u02*u02) + (u12*u12) + (u22*u22))*rho_halo_2;

   rhoE_B0(0,-3,0) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u03*u03) + (u13*u13) + (u23*u23))*rho_halo_3;

   rhoE_B0(0,-4,0) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u04*u04) + (u14*u14) + (u24*u24))*rho_halo_4;

}

 void opensbliblock00Kernel065(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0)
{
   rho_B0(0,0,0) = rho_B0(0,-1,0);

   rhou0_B0(0,0,0) = rhou0_B0(0,-1,0);

   rhou1_B0(0,0,0) = rhou1_B0(0,-1,0);

   rhou2_B0(0,0,0) = rhou2_B0(0,-1,0);

   rhoE_B0(0,0,0) = rhoE_B0(0,-1,0);

   rho_B0(0,1,0) = rho_B0(0,-1,0);

   rhou0_B0(0,1,0) = rhou0_B0(0,-1,0);

   rhou1_B0(0,1,0) = rhou1_B0(0,-1,0);

   rhou2_B0(0,1,0) = rhou2_B0(0,-1,0);

   rhoE_B0(0,1,0) = rhoE_B0(0,-1,0);

   rho_B0(0,2,0) = rho_B0(0,-2,0);

   rhou0_B0(0,2,0) = rhou0_B0(0,-2,0);

   rhou1_B0(0,2,0) = rhou1_B0(0,-2,0);

   rhou2_B0(0,2,0) = rhou2_B0(0,-2,0);

   rhoE_B0(0,2,0) = rhoE_B0(0,-2,0);

   rho_B0(0,3,0) = rho_B0(0,-3,0);

   rhou0_B0(0,3,0) = rhou0_B0(0,-3,0);

   rhou1_B0(0,3,0) = rhou1_B0(0,-3,0);

   rhou2_B0(0,3,0) = rhou2_B0(0,-3,0);

   rhoE_B0(0,3,0) = rhoE_B0(0,-3,0);

   rho_B0(0,4,0) = rho_B0(0,-4,0);

   rhou0_B0(0,4,0) = rhou0_B0(0,-4,0);

   rhou1_B0(0,4,0) = rhou1_B0(0,-4,0);

   rhou2_B0(0,4,0) = rhou2_B0(0,-4,0);

   rhoE_B0(0,4,0) = rhoE_B0(0,-4,0);

}

void opensbliblock00Kernel003(const ACC<double> &rho_B0, const ACC<double> &rhou2_B0, ACC<double> &u2_B0)
{
   u2_B0(0,0,0) = rhou2_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel008(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0,0) = rhou0_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel016(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0,0) = rhou1_B0(0,0,0)/rho_B0(0,0,0);

}

 void opensbliblock00Kernel006(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0,0) = u0_B0(0,0,0)*D00_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0);

}

 void opensbliblock00Kernel015(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &p_B0)
{
    p_B0(0,0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0,0)*u0_B0(0,0,0))*rho_B0(0,0,0) -
      (1.0/2.0)*(u1_B0(0,0,0)*u1_B0(0,0,0))*rho_B0(0,0,0) - (1.0/2.0)*(u2_B0(0,0,0)*u2_B0(0,0,0))*rho_B0(0,0,0) +
      rhoE_B0(0,0,0));

}

 void opensbliblock00Kernel020(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U1_B0)
{
   U1_B0(0,0,0) = u0_B0(0,0,0)*D10_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0);

}

void opensbliblock00Kernel021(const ACC<double> &u2_B0, ACC<double> &U2_B0)
{
   U2_B0(0,0,0) = u2_B0(0,0,0);

}

void opensbliblock00Kernel011(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0,0) = sqrt(gama*p_B0(0,0,0)/rho_B0(0,0,0));

}

void opensbliblock00Kernel029(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0,0) = (Minf*Minf)*gama*p_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel028(const ACC<double> &T_B0, ACC<double> &mu_B0)
{
   mu_B0(0,0,0) = T_B0(0,0,0)*sqrt(T_B0(0,0,0))*(1.0 + SuthT*invRefT)/(SuthT*invRefT + T_B0(0,0,0));

}

 void opensbliblock00Kernel000(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &U0_B0, const
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &kappa_B0, const ACC<double> &p_B0, const ACC<double>
&rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double>
&rhou2_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &TENO_B0,
ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0, ACC<double> &wk4_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_04 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_14 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
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
   double AVG_0_D00 = 0.0;
   double AVG_0_D01 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_detJ = 0.0;
   double AVG_0_inv_rho = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_u1 = 0.0;
   double AVG_0_u2 = 0.0;
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
   double TENO_CT = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double alpha_3 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double beta_3 = 0.0;
   double delta_0 = 0.0;
   double delta_1 = 0.0;
   double delta_2 = 0.0;
   double delta_3 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_met_fact = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double inv_beta_0 = 0.0;
   double inv_beta_1 = 0.0;
   double inv_beta_2 = 0.0;
   double inv_beta_3 = 0.0;
   double inv_omega_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double max_lambda_44 = 0.0;
   AVG_0_rho = sqrt(rho_B0(0,0,0)*rho_B0(1,0,0));

   AVG_0_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(1,0,0))));

   AVG_0_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u0_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u1_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u2_B0(1,0,0))*AVG_0_inv_rho;

    AVG_0_a = sqrt((-(1.0/2.0)*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(1,0,0) +
      rhoE_B0(1,0,0))/sqrt(rho_B0(1,0,0)))*AVG_0_inv_rho)*gamma_m1);

   AVG_0_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(1,0,0));

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0,0) + D00_B0(1,0,0));

   AVG_0_D01 = ((1.0/2.0))*(D01_B0(0,0,0) + D01_B0(1,0,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   inv_AVG_met_fact = pow((AVG_0_D00*AVG_0_D00) + (AVG_0_D01*AVG_0_D01), (-1.0/2.0));

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2*AVG_0_D00 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_D00 -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*AVG_0_D00 - (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*AVG_0_D00 -
      2*AVG_0_D01*AVG_0_u2*inv_AVG_rho + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D00 +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D00 +
      (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D00)*inv_AVG_met_fact;

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D00*AVG_0_u0*inv_AVG_met_fact;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D00*AVG_0_u1*inv_AVG_met_fact;

    AVG_0_0_LEV_03 = (-AVG_0_D01*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_0_D00*AVG_0_u2 +
      (inv_AVG_a*inv_AVG_a)*gama*AVG_0_D00*AVG_0_u2)*inv_AVG_met_fact;

   AVG_0_0_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D00*inv_AVG_met_fact;

    AVG_0_0_LEV_10 = -(1.0/2.0)*(-2*AVG_0_D01 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*AVG_0_D01 -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*AVG_0_D01 - (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*AVG_0_D01 +
      2*AVG_0_D00*AVG_0_u2*inv_AVG_rho + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D01 +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D01 +
      (AVG_0_u2*AVG_0_u2)*(inv_AVG_a*inv_AVG_a)*gama*AVG_0_D01)*inv_AVG_met_fact;

   AVG_0_0_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D01*AVG_0_u0*inv_AVG_met_fact;

   AVG_0_0_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D01*AVG_0_u1*inv_AVG_met_fact;

    AVG_0_0_LEV_13 = (AVG_0_D00*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_0_D01*AVG_0_u2 +
      (inv_AVG_a*inv_AVG_a)*gama*AVG_0_D01*AVG_0_u2)*inv_AVG_met_fact;

   AVG_0_0_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_D01*inv_AVG_met_fact;

   AVG_0_0_LEV_20 = (AVG_0_D00*AVG_0_u1 - AVG_0_D01*AVG_0_u0)*inv_AVG_met_fact*inv_AVG_rho;

   AVG_0_0_LEV_21 = AVG_0_D01*inv_AVG_met_fact*inv_AVG_rho;

   AVG_0_0_LEV_22 = -AVG_0_D00*inv_AVG_met_fact*inv_AVG_rho;

    AVG_0_0_LEV_30 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2) -
      (AVG_0_u0*AVG_0_u0)*gama - (AVG_0_u1*AVG_0_u1)*gama - (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact +
      2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_31 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_D00*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_32 = 0.707106781186547*(-gama*AVG_0_u1 + AVG_0_D01*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_40 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) - (AVG_0_u2*AVG_0_u2) +
      (AVG_0_u0*AVG_0_u0)*gama + (AVG_0_u1*AVG_0_u1)*gama + (AVG_0_u2*AVG_0_u2)*gama +
      2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact +
      2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_41 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 +
      AVG_0_D00*AVG_0_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_42 = -0.707106781186547*(-AVG_0_u1 + gama*AVG_0_u1 +
      AVG_0_D01*AVG_0_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_43 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (p_B0(-2,0,0)*U0_B0(-2,0,0)*AVG_0_0_LEV_04 + p_B0(-2,0,0)*D00_B0(-2,0,0)*AVG_0_0_LEV_01 +
      p_B0(-2,0,0)*D01_B0(-2,0,0)*AVG_0_0_LEV_02 + U0_B0(-2,0,0)*rho_B0(-2,0,0)*AVG_0_0_LEV_00 +
      U0_B0(-2,0,0)*rhoE_B0(-2,0,0)*AVG_0_0_LEV_04 + U0_B0(-2,0,0)*rhou0_B0(-2,0,0)*AVG_0_0_LEV_01 +
      U0_B0(-2,0,0)*rhou1_B0(-2,0,0)*AVG_0_0_LEV_02 + U0_B0(-2,0,0)*rhou2_B0(-2,0,0)*AVG_0_0_LEV_03)*detJ_B0(-2,0,0);

    CF_10 = (p_B0(-2,0,0)*U0_B0(-2,0,0)*AVG_0_0_LEV_14 + p_B0(-2,0,0)*D00_B0(-2,0,0)*AVG_0_0_LEV_11 +
      p_B0(-2,0,0)*D01_B0(-2,0,0)*AVG_0_0_LEV_12 + U0_B0(-2,0,0)*rho_B0(-2,0,0)*AVG_0_0_LEV_10 +
      U0_B0(-2,0,0)*rhoE_B0(-2,0,0)*AVG_0_0_LEV_14 + U0_B0(-2,0,0)*rhou0_B0(-2,0,0)*AVG_0_0_LEV_11 +
      U0_B0(-2,0,0)*rhou1_B0(-2,0,0)*AVG_0_0_LEV_12 + U0_B0(-2,0,0)*rhou2_B0(-2,0,0)*AVG_0_0_LEV_13)*detJ_B0(-2,0,0);

    CF_20 = (p_B0(-2,0,0)*D00_B0(-2,0,0)*AVG_0_0_LEV_21 + p_B0(-2,0,0)*D01_B0(-2,0,0)*AVG_0_0_LEV_22 +
      U0_B0(-2,0,0)*rho_B0(-2,0,0)*AVG_0_0_LEV_20 + U0_B0(-2,0,0)*rhou0_B0(-2,0,0)*AVG_0_0_LEV_21 +
      U0_B0(-2,0,0)*rhou1_B0(-2,0,0)*AVG_0_0_LEV_22)*detJ_B0(-2,0,0);

    CF_30 = (p_B0(-2,0,0)*U0_B0(-2,0,0)*AVG_0_0_LEV_34 + p_B0(-2,0,0)*D00_B0(-2,0,0)*AVG_0_0_LEV_31 +
      p_B0(-2,0,0)*D01_B0(-2,0,0)*AVG_0_0_LEV_32 + U0_B0(-2,0,0)*rho_B0(-2,0,0)*AVG_0_0_LEV_30 +
      U0_B0(-2,0,0)*rhoE_B0(-2,0,0)*AVG_0_0_LEV_34 + U0_B0(-2,0,0)*rhou0_B0(-2,0,0)*AVG_0_0_LEV_31 +
      U0_B0(-2,0,0)*rhou1_B0(-2,0,0)*AVG_0_0_LEV_32 + U0_B0(-2,0,0)*rhou2_B0(-2,0,0)*AVG_0_0_LEV_33)*detJ_B0(-2,0,0);

    CF_40 = (p_B0(-2,0,0)*U0_B0(-2,0,0)*AVG_0_0_LEV_44 + p_B0(-2,0,0)*D00_B0(-2,0,0)*AVG_0_0_LEV_41 +
      p_B0(-2,0,0)*D01_B0(-2,0,0)*AVG_0_0_LEV_42 + U0_B0(-2,0,0)*rho_B0(-2,0,0)*AVG_0_0_LEV_40 +
      U0_B0(-2,0,0)*rhoE_B0(-2,0,0)*AVG_0_0_LEV_44 + U0_B0(-2,0,0)*rhou0_B0(-2,0,0)*AVG_0_0_LEV_41 +
      U0_B0(-2,0,0)*rhou1_B0(-2,0,0)*AVG_0_0_LEV_42 + U0_B0(-2,0,0)*rhou2_B0(-2,0,0)*AVG_0_0_LEV_43)*detJ_B0(-2,0,0);

    CS_00 = rho_B0(-2,0,0)*AVG_0_0_LEV_00 + rhoE_B0(-2,0,0)*AVG_0_0_LEV_04 + rhou0_B0(-2,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(-2,0,0)*AVG_0_0_LEV_02 + rhou2_B0(-2,0,0)*AVG_0_0_LEV_03;

    CS_10 = rho_B0(-2,0,0)*AVG_0_0_LEV_10 + rhoE_B0(-2,0,0)*AVG_0_0_LEV_14 + rhou0_B0(-2,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(-2,0,0)*AVG_0_0_LEV_12 + rhou2_B0(-2,0,0)*AVG_0_0_LEV_13;

   CS_20 = rho_B0(-2,0,0)*AVG_0_0_LEV_20 + rhou0_B0(-2,0,0)*AVG_0_0_LEV_21 + rhou1_B0(-2,0,0)*AVG_0_0_LEV_22;

    CS_30 = rho_B0(-2,0,0)*AVG_0_0_LEV_30 + rhoE_B0(-2,0,0)*AVG_0_0_LEV_34 + rhou0_B0(-2,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(-2,0,0)*AVG_0_0_LEV_32 + rhou2_B0(-2,0,0)*AVG_0_0_LEV_33;

    CS_40 = rho_B0(-2,0,0)*AVG_0_0_LEV_40 + rhoE_B0(-2,0,0)*AVG_0_0_LEV_44 + rhou0_B0(-2,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(-2,0,0)*AVG_0_0_LEV_42 + rhou2_B0(-2,0,0)*AVG_0_0_LEV_43;

    CF_01 = (p_B0(-1,0,0)*U0_B0(-1,0,0)*AVG_0_0_LEV_04 + p_B0(-1,0,0)*D00_B0(-1,0,0)*AVG_0_0_LEV_01 +
      p_B0(-1,0,0)*D01_B0(-1,0,0)*AVG_0_0_LEV_02 + U0_B0(-1,0,0)*rho_B0(-1,0,0)*AVG_0_0_LEV_00 +
      U0_B0(-1,0,0)*rhoE_B0(-1,0,0)*AVG_0_0_LEV_04 + U0_B0(-1,0,0)*rhou0_B0(-1,0,0)*AVG_0_0_LEV_01 +
      U0_B0(-1,0,0)*rhou1_B0(-1,0,0)*AVG_0_0_LEV_02 + U0_B0(-1,0,0)*rhou2_B0(-1,0,0)*AVG_0_0_LEV_03)*detJ_B0(-1,0,0);

    CF_11 = (p_B0(-1,0,0)*U0_B0(-1,0,0)*AVG_0_0_LEV_14 + p_B0(-1,0,0)*D00_B0(-1,0,0)*AVG_0_0_LEV_11 +
      p_B0(-1,0,0)*D01_B0(-1,0,0)*AVG_0_0_LEV_12 + U0_B0(-1,0,0)*rho_B0(-1,0,0)*AVG_0_0_LEV_10 +
      U0_B0(-1,0,0)*rhoE_B0(-1,0,0)*AVG_0_0_LEV_14 + U0_B0(-1,0,0)*rhou0_B0(-1,0,0)*AVG_0_0_LEV_11 +
      U0_B0(-1,0,0)*rhou1_B0(-1,0,0)*AVG_0_0_LEV_12 + U0_B0(-1,0,0)*rhou2_B0(-1,0,0)*AVG_0_0_LEV_13)*detJ_B0(-1,0,0);

    CF_21 = (p_B0(-1,0,0)*D00_B0(-1,0,0)*AVG_0_0_LEV_21 + p_B0(-1,0,0)*D01_B0(-1,0,0)*AVG_0_0_LEV_22 +
      U0_B0(-1,0,0)*rho_B0(-1,0,0)*AVG_0_0_LEV_20 + U0_B0(-1,0,0)*rhou0_B0(-1,0,0)*AVG_0_0_LEV_21 +
      U0_B0(-1,0,0)*rhou1_B0(-1,0,0)*AVG_0_0_LEV_22)*detJ_B0(-1,0,0);

    CF_31 = (p_B0(-1,0,0)*U0_B0(-1,0,0)*AVG_0_0_LEV_34 + p_B0(-1,0,0)*D00_B0(-1,0,0)*AVG_0_0_LEV_31 +
      p_B0(-1,0,0)*D01_B0(-1,0,0)*AVG_0_0_LEV_32 + U0_B0(-1,0,0)*rho_B0(-1,0,0)*AVG_0_0_LEV_30 +
      U0_B0(-1,0,0)*rhoE_B0(-1,0,0)*AVG_0_0_LEV_34 + U0_B0(-1,0,0)*rhou0_B0(-1,0,0)*AVG_0_0_LEV_31 +
      U0_B0(-1,0,0)*rhou1_B0(-1,0,0)*AVG_0_0_LEV_32 + U0_B0(-1,0,0)*rhou2_B0(-1,0,0)*AVG_0_0_LEV_33)*detJ_B0(-1,0,0);

    CF_41 = (p_B0(-1,0,0)*U0_B0(-1,0,0)*AVG_0_0_LEV_44 + p_B0(-1,0,0)*D00_B0(-1,0,0)*AVG_0_0_LEV_41 +
      p_B0(-1,0,0)*D01_B0(-1,0,0)*AVG_0_0_LEV_42 + U0_B0(-1,0,0)*rho_B0(-1,0,0)*AVG_0_0_LEV_40 +
      U0_B0(-1,0,0)*rhoE_B0(-1,0,0)*AVG_0_0_LEV_44 + U0_B0(-1,0,0)*rhou0_B0(-1,0,0)*AVG_0_0_LEV_41 +
      U0_B0(-1,0,0)*rhou1_B0(-1,0,0)*AVG_0_0_LEV_42 + U0_B0(-1,0,0)*rhou2_B0(-1,0,0)*AVG_0_0_LEV_43)*detJ_B0(-1,0,0);

    CS_01 = rho_B0(-1,0,0)*AVG_0_0_LEV_00 + rhoE_B0(-1,0,0)*AVG_0_0_LEV_04 + rhou0_B0(-1,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(-1,0,0)*AVG_0_0_LEV_02 + rhou2_B0(-1,0,0)*AVG_0_0_LEV_03;

    CS_11 = rho_B0(-1,0,0)*AVG_0_0_LEV_10 + rhoE_B0(-1,0,0)*AVG_0_0_LEV_14 + rhou0_B0(-1,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(-1,0,0)*AVG_0_0_LEV_12 + rhou2_B0(-1,0,0)*AVG_0_0_LEV_13;

   CS_21 = rho_B0(-1,0,0)*AVG_0_0_LEV_20 + rhou0_B0(-1,0,0)*AVG_0_0_LEV_21 + rhou1_B0(-1,0,0)*AVG_0_0_LEV_22;

    CS_31 = rho_B0(-1,0,0)*AVG_0_0_LEV_30 + rhoE_B0(-1,0,0)*AVG_0_0_LEV_34 + rhou0_B0(-1,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(-1,0,0)*AVG_0_0_LEV_32 + rhou2_B0(-1,0,0)*AVG_0_0_LEV_33;

    CS_41 = rho_B0(-1,0,0)*AVG_0_0_LEV_40 + rhoE_B0(-1,0,0)*AVG_0_0_LEV_44 + rhou0_B0(-1,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(-1,0,0)*AVG_0_0_LEV_42 + rhou2_B0(-1,0,0)*AVG_0_0_LEV_43;

    CF_02 = (p_B0(0,0,0)*U0_B0(0,0,0)*AVG_0_0_LEV_04 + p_B0(0,0,0)*D00_B0(0,0,0)*AVG_0_0_LEV_01 +
      p_B0(0,0,0)*D01_B0(0,0,0)*AVG_0_0_LEV_02 + U0_B0(0,0,0)*rho_B0(0,0,0)*AVG_0_0_LEV_00 +
      U0_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_0_0_LEV_04 + U0_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_0_0_LEV_01 +
      U0_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_0_0_LEV_02 + U0_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_0_0_LEV_03)*detJ_B0(0,0,0);

    CF_12 = (p_B0(0,0,0)*U0_B0(0,0,0)*AVG_0_0_LEV_14 + p_B0(0,0,0)*D00_B0(0,0,0)*AVG_0_0_LEV_11 +
      p_B0(0,0,0)*D01_B0(0,0,0)*AVG_0_0_LEV_12 + U0_B0(0,0,0)*rho_B0(0,0,0)*AVG_0_0_LEV_10 +
      U0_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_0_0_LEV_14 + U0_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_0_0_LEV_11 +
      U0_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_0_0_LEV_12 + U0_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_0_0_LEV_13)*detJ_B0(0,0,0);

    CF_22 = (p_B0(0,0,0)*D00_B0(0,0,0)*AVG_0_0_LEV_21 + p_B0(0,0,0)*D01_B0(0,0,0)*AVG_0_0_LEV_22 +
      U0_B0(0,0,0)*rho_B0(0,0,0)*AVG_0_0_LEV_20 + U0_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_0_0_LEV_21 +
      U0_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_0_0_LEV_22)*detJ_B0(0,0,0);

    CF_32 = (p_B0(0,0,0)*U0_B0(0,0,0)*AVG_0_0_LEV_34 + p_B0(0,0,0)*D00_B0(0,0,0)*AVG_0_0_LEV_31 +
      p_B0(0,0,0)*D01_B0(0,0,0)*AVG_0_0_LEV_32 + U0_B0(0,0,0)*rho_B0(0,0,0)*AVG_0_0_LEV_30 +
      U0_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_0_0_LEV_34 + U0_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_0_0_LEV_31 +
      U0_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_0_0_LEV_32 + U0_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_0_0_LEV_33)*detJ_B0(0,0,0);

    CF_42 = (p_B0(0,0,0)*U0_B0(0,0,0)*AVG_0_0_LEV_44 + p_B0(0,0,0)*D00_B0(0,0,0)*AVG_0_0_LEV_41 +
      p_B0(0,0,0)*D01_B0(0,0,0)*AVG_0_0_LEV_42 + U0_B0(0,0,0)*rho_B0(0,0,0)*AVG_0_0_LEV_40 +
      U0_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_0_0_LEV_44 + U0_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_0_0_LEV_41 +
      U0_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_0_0_LEV_42 + U0_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_0_0_LEV_43)*detJ_B0(0,0,0);

    CS_02 = rho_B0(0,0,0)*AVG_0_0_LEV_00 + rhoE_B0(0,0,0)*AVG_0_0_LEV_04 + rhou0_B0(0,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(0,0,0)*AVG_0_0_LEV_02 + rhou2_B0(0,0,0)*AVG_0_0_LEV_03;

    CS_12 = rho_B0(0,0,0)*AVG_0_0_LEV_10 + rhoE_B0(0,0,0)*AVG_0_0_LEV_14 + rhou0_B0(0,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(0,0,0)*AVG_0_0_LEV_12 + rhou2_B0(0,0,0)*AVG_0_0_LEV_13;

   CS_22 = rho_B0(0,0,0)*AVG_0_0_LEV_20 + rhou0_B0(0,0,0)*AVG_0_0_LEV_21 + rhou1_B0(0,0,0)*AVG_0_0_LEV_22;

    CS_32 = rho_B0(0,0,0)*AVG_0_0_LEV_30 + rhoE_B0(0,0,0)*AVG_0_0_LEV_34 + rhou0_B0(0,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(0,0,0)*AVG_0_0_LEV_32 + rhou2_B0(0,0,0)*AVG_0_0_LEV_33;

    CS_42 = rho_B0(0,0,0)*AVG_0_0_LEV_40 + rhoE_B0(0,0,0)*AVG_0_0_LEV_44 + rhou0_B0(0,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(0,0,0)*AVG_0_0_LEV_42 + rhou2_B0(0,0,0)*AVG_0_0_LEV_43;

    CF_03 = (p_B0(1,0,0)*U0_B0(1,0,0)*AVG_0_0_LEV_04 + p_B0(1,0,0)*D00_B0(1,0,0)*AVG_0_0_LEV_01 +
      p_B0(1,0,0)*D01_B0(1,0,0)*AVG_0_0_LEV_02 + U0_B0(1,0,0)*rho_B0(1,0,0)*AVG_0_0_LEV_00 +
      U0_B0(1,0,0)*rhoE_B0(1,0,0)*AVG_0_0_LEV_04 + U0_B0(1,0,0)*rhou0_B0(1,0,0)*AVG_0_0_LEV_01 +
      U0_B0(1,0,0)*rhou1_B0(1,0,0)*AVG_0_0_LEV_02 + U0_B0(1,0,0)*rhou2_B0(1,0,0)*AVG_0_0_LEV_03)*detJ_B0(1,0,0);

    CF_13 = (p_B0(1,0,0)*U0_B0(1,0,0)*AVG_0_0_LEV_14 + p_B0(1,0,0)*D00_B0(1,0,0)*AVG_0_0_LEV_11 +
      p_B0(1,0,0)*D01_B0(1,0,0)*AVG_0_0_LEV_12 + U0_B0(1,0,0)*rho_B0(1,0,0)*AVG_0_0_LEV_10 +
      U0_B0(1,0,0)*rhoE_B0(1,0,0)*AVG_0_0_LEV_14 + U0_B0(1,0,0)*rhou0_B0(1,0,0)*AVG_0_0_LEV_11 +
      U0_B0(1,0,0)*rhou1_B0(1,0,0)*AVG_0_0_LEV_12 + U0_B0(1,0,0)*rhou2_B0(1,0,0)*AVG_0_0_LEV_13)*detJ_B0(1,0,0);

    CF_23 = (p_B0(1,0,0)*D00_B0(1,0,0)*AVG_0_0_LEV_21 + p_B0(1,0,0)*D01_B0(1,0,0)*AVG_0_0_LEV_22 +
      U0_B0(1,0,0)*rho_B0(1,0,0)*AVG_0_0_LEV_20 + U0_B0(1,0,0)*rhou0_B0(1,0,0)*AVG_0_0_LEV_21 +
      U0_B0(1,0,0)*rhou1_B0(1,0,0)*AVG_0_0_LEV_22)*detJ_B0(1,0,0);

    CF_33 = (p_B0(1,0,0)*U0_B0(1,0,0)*AVG_0_0_LEV_34 + p_B0(1,0,0)*D00_B0(1,0,0)*AVG_0_0_LEV_31 +
      p_B0(1,0,0)*D01_B0(1,0,0)*AVG_0_0_LEV_32 + U0_B0(1,0,0)*rho_B0(1,0,0)*AVG_0_0_LEV_30 +
      U0_B0(1,0,0)*rhoE_B0(1,0,0)*AVG_0_0_LEV_34 + U0_B0(1,0,0)*rhou0_B0(1,0,0)*AVG_0_0_LEV_31 +
      U0_B0(1,0,0)*rhou1_B0(1,0,0)*AVG_0_0_LEV_32 + U0_B0(1,0,0)*rhou2_B0(1,0,0)*AVG_0_0_LEV_33)*detJ_B0(1,0,0);

    CF_43 = (p_B0(1,0,0)*U0_B0(1,0,0)*AVG_0_0_LEV_44 + p_B0(1,0,0)*D00_B0(1,0,0)*AVG_0_0_LEV_41 +
      p_B0(1,0,0)*D01_B0(1,0,0)*AVG_0_0_LEV_42 + U0_B0(1,0,0)*rho_B0(1,0,0)*AVG_0_0_LEV_40 +
      U0_B0(1,0,0)*rhoE_B0(1,0,0)*AVG_0_0_LEV_44 + U0_B0(1,0,0)*rhou0_B0(1,0,0)*AVG_0_0_LEV_41 +
      U0_B0(1,0,0)*rhou1_B0(1,0,0)*AVG_0_0_LEV_42 + U0_B0(1,0,0)*rhou2_B0(1,0,0)*AVG_0_0_LEV_43)*detJ_B0(1,0,0);

    CS_03 = rho_B0(1,0,0)*AVG_0_0_LEV_00 + rhoE_B0(1,0,0)*AVG_0_0_LEV_04 + rhou0_B0(1,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(1,0,0)*AVG_0_0_LEV_02 + rhou2_B0(1,0,0)*AVG_0_0_LEV_03;

    CS_13 = rho_B0(1,0,0)*AVG_0_0_LEV_10 + rhoE_B0(1,0,0)*AVG_0_0_LEV_14 + rhou0_B0(1,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(1,0,0)*AVG_0_0_LEV_12 + rhou2_B0(1,0,0)*AVG_0_0_LEV_13;

   CS_23 = rho_B0(1,0,0)*AVG_0_0_LEV_20 + rhou0_B0(1,0,0)*AVG_0_0_LEV_21 + rhou1_B0(1,0,0)*AVG_0_0_LEV_22;

    CS_33 = rho_B0(1,0,0)*AVG_0_0_LEV_30 + rhoE_B0(1,0,0)*AVG_0_0_LEV_34 + rhou0_B0(1,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(1,0,0)*AVG_0_0_LEV_32 + rhou2_B0(1,0,0)*AVG_0_0_LEV_33;

    CS_43 = rho_B0(1,0,0)*AVG_0_0_LEV_40 + rhoE_B0(1,0,0)*AVG_0_0_LEV_44 + rhou0_B0(1,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(1,0,0)*AVG_0_0_LEV_42 + rhou2_B0(1,0,0)*AVG_0_0_LEV_43;

    CF_04 = (p_B0(2,0,0)*U0_B0(2,0,0)*AVG_0_0_LEV_04 + p_B0(2,0,0)*D00_B0(2,0,0)*AVG_0_0_LEV_01 +
      p_B0(2,0,0)*D01_B0(2,0,0)*AVG_0_0_LEV_02 + U0_B0(2,0,0)*rho_B0(2,0,0)*AVG_0_0_LEV_00 +
      U0_B0(2,0,0)*rhoE_B0(2,0,0)*AVG_0_0_LEV_04 + U0_B0(2,0,0)*rhou0_B0(2,0,0)*AVG_0_0_LEV_01 +
      U0_B0(2,0,0)*rhou1_B0(2,0,0)*AVG_0_0_LEV_02 + U0_B0(2,0,0)*rhou2_B0(2,0,0)*AVG_0_0_LEV_03)*detJ_B0(2,0,0);

    CF_14 = (p_B0(2,0,0)*U0_B0(2,0,0)*AVG_0_0_LEV_14 + p_B0(2,0,0)*D00_B0(2,0,0)*AVG_0_0_LEV_11 +
      p_B0(2,0,0)*D01_B0(2,0,0)*AVG_0_0_LEV_12 + U0_B0(2,0,0)*rho_B0(2,0,0)*AVG_0_0_LEV_10 +
      U0_B0(2,0,0)*rhoE_B0(2,0,0)*AVG_0_0_LEV_14 + U0_B0(2,0,0)*rhou0_B0(2,0,0)*AVG_0_0_LEV_11 +
      U0_B0(2,0,0)*rhou1_B0(2,0,0)*AVG_0_0_LEV_12 + U0_B0(2,0,0)*rhou2_B0(2,0,0)*AVG_0_0_LEV_13)*detJ_B0(2,0,0);

    CF_24 = (p_B0(2,0,0)*D00_B0(2,0,0)*AVG_0_0_LEV_21 + p_B0(2,0,0)*D01_B0(2,0,0)*AVG_0_0_LEV_22 +
      U0_B0(2,0,0)*rho_B0(2,0,0)*AVG_0_0_LEV_20 + U0_B0(2,0,0)*rhou0_B0(2,0,0)*AVG_0_0_LEV_21 +
      U0_B0(2,0,0)*rhou1_B0(2,0,0)*AVG_0_0_LEV_22)*detJ_B0(2,0,0);

    CF_34 = (p_B0(2,0,0)*U0_B0(2,0,0)*AVG_0_0_LEV_34 + p_B0(2,0,0)*D00_B0(2,0,0)*AVG_0_0_LEV_31 +
      p_B0(2,0,0)*D01_B0(2,0,0)*AVG_0_0_LEV_32 + U0_B0(2,0,0)*rho_B0(2,0,0)*AVG_0_0_LEV_30 +
      U0_B0(2,0,0)*rhoE_B0(2,0,0)*AVG_0_0_LEV_34 + U0_B0(2,0,0)*rhou0_B0(2,0,0)*AVG_0_0_LEV_31 +
      U0_B0(2,0,0)*rhou1_B0(2,0,0)*AVG_0_0_LEV_32 + U0_B0(2,0,0)*rhou2_B0(2,0,0)*AVG_0_0_LEV_33)*detJ_B0(2,0,0);

    CF_44 = (p_B0(2,0,0)*U0_B0(2,0,0)*AVG_0_0_LEV_44 + p_B0(2,0,0)*D00_B0(2,0,0)*AVG_0_0_LEV_41 +
      p_B0(2,0,0)*D01_B0(2,0,0)*AVG_0_0_LEV_42 + U0_B0(2,0,0)*rho_B0(2,0,0)*AVG_0_0_LEV_40 +
      U0_B0(2,0,0)*rhoE_B0(2,0,0)*AVG_0_0_LEV_44 + U0_B0(2,0,0)*rhou0_B0(2,0,0)*AVG_0_0_LEV_41 +
      U0_B0(2,0,0)*rhou1_B0(2,0,0)*AVG_0_0_LEV_42 + U0_B0(2,0,0)*rhou2_B0(2,0,0)*AVG_0_0_LEV_43)*detJ_B0(2,0,0);

    CS_04 = rho_B0(2,0,0)*AVG_0_0_LEV_00 + rhoE_B0(2,0,0)*AVG_0_0_LEV_04 + rhou0_B0(2,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(2,0,0)*AVG_0_0_LEV_02 + rhou2_B0(2,0,0)*AVG_0_0_LEV_03;

    CS_14 = rho_B0(2,0,0)*AVG_0_0_LEV_10 + rhoE_B0(2,0,0)*AVG_0_0_LEV_14 + rhou0_B0(2,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(2,0,0)*AVG_0_0_LEV_12 + rhou2_B0(2,0,0)*AVG_0_0_LEV_13;

   CS_24 = rho_B0(2,0,0)*AVG_0_0_LEV_20 + rhou0_B0(2,0,0)*AVG_0_0_LEV_21 + rhou1_B0(2,0,0)*AVG_0_0_LEV_22;

    CS_34 = rho_B0(2,0,0)*AVG_0_0_LEV_30 + rhoE_B0(2,0,0)*AVG_0_0_LEV_34 + rhou0_B0(2,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(2,0,0)*AVG_0_0_LEV_32 + rhou2_B0(2,0,0)*AVG_0_0_LEV_33;

    CS_44 = rho_B0(2,0,0)*AVG_0_0_LEV_40 + rhoE_B0(2,0,0)*AVG_0_0_LEV_44 + rhou0_B0(2,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(2,0,0)*AVG_0_0_LEV_42 + rhou2_B0(2,0,0)*AVG_0_0_LEV_43;

    CF_05 = (p_B0(3,0,0)*U0_B0(3,0,0)*AVG_0_0_LEV_04 + p_B0(3,0,0)*D00_B0(3,0,0)*AVG_0_0_LEV_01 +
      p_B0(3,0,0)*D01_B0(3,0,0)*AVG_0_0_LEV_02 + U0_B0(3,0,0)*rho_B0(3,0,0)*AVG_0_0_LEV_00 +
      U0_B0(3,0,0)*rhoE_B0(3,0,0)*AVG_0_0_LEV_04 + U0_B0(3,0,0)*rhou0_B0(3,0,0)*AVG_0_0_LEV_01 +
      U0_B0(3,0,0)*rhou1_B0(3,0,0)*AVG_0_0_LEV_02 + U0_B0(3,0,0)*rhou2_B0(3,0,0)*AVG_0_0_LEV_03)*detJ_B0(3,0,0);

    CF_15 = (p_B0(3,0,0)*U0_B0(3,0,0)*AVG_0_0_LEV_14 + p_B0(3,0,0)*D00_B0(3,0,0)*AVG_0_0_LEV_11 +
      p_B0(3,0,0)*D01_B0(3,0,0)*AVG_0_0_LEV_12 + U0_B0(3,0,0)*rho_B0(3,0,0)*AVG_0_0_LEV_10 +
      U0_B0(3,0,0)*rhoE_B0(3,0,0)*AVG_0_0_LEV_14 + U0_B0(3,0,0)*rhou0_B0(3,0,0)*AVG_0_0_LEV_11 +
      U0_B0(3,0,0)*rhou1_B0(3,0,0)*AVG_0_0_LEV_12 + U0_B0(3,0,0)*rhou2_B0(3,0,0)*AVG_0_0_LEV_13)*detJ_B0(3,0,0);

    CF_25 = (p_B0(3,0,0)*D00_B0(3,0,0)*AVG_0_0_LEV_21 + p_B0(3,0,0)*D01_B0(3,0,0)*AVG_0_0_LEV_22 +
      U0_B0(3,0,0)*rho_B0(3,0,0)*AVG_0_0_LEV_20 + U0_B0(3,0,0)*rhou0_B0(3,0,0)*AVG_0_0_LEV_21 +
      U0_B0(3,0,0)*rhou1_B0(3,0,0)*AVG_0_0_LEV_22)*detJ_B0(3,0,0);

    CF_35 = (p_B0(3,0,0)*U0_B0(3,0,0)*AVG_0_0_LEV_34 + p_B0(3,0,0)*D00_B0(3,0,0)*AVG_0_0_LEV_31 +
      p_B0(3,0,0)*D01_B0(3,0,0)*AVG_0_0_LEV_32 + U0_B0(3,0,0)*rho_B0(3,0,0)*AVG_0_0_LEV_30 +
      U0_B0(3,0,0)*rhoE_B0(3,0,0)*AVG_0_0_LEV_34 + U0_B0(3,0,0)*rhou0_B0(3,0,0)*AVG_0_0_LEV_31 +
      U0_B0(3,0,0)*rhou1_B0(3,0,0)*AVG_0_0_LEV_32 + U0_B0(3,0,0)*rhou2_B0(3,0,0)*AVG_0_0_LEV_33)*detJ_B0(3,0,0);

    CF_45 = (p_B0(3,0,0)*U0_B0(3,0,0)*AVG_0_0_LEV_44 + p_B0(3,0,0)*D00_B0(3,0,0)*AVG_0_0_LEV_41 +
      p_B0(3,0,0)*D01_B0(3,0,0)*AVG_0_0_LEV_42 + U0_B0(3,0,0)*rho_B0(3,0,0)*AVG_0_0_LEV_40 +
      U0_B0(3,0,0)*rhoE_B0(3,0,0)*AVG_0_0_LEV_44 + U0_B0(3,0,0)*rhou0_B0(3,0,0)*AVG_0_0_LEV_41 +
      U0_B0(3,0,0)*rhou1_B0(3,0,0)*AVG_0_0_LEV_42 + U0_B0(3,0,0)*rhou2_B0(3,0,0)*AVG_0_0_LEV_43)*detJ_B0(3,0,0);

    CS_05 = rho_B0(3,0,0)*AVG_0_0_LEV_00 + rhoE_B0(3,0,0)*AVG_0_0_LEV_04 + rhou0_B0(3,0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(3,0,0)*AVG_0_0_LEV_02 + rhou2_B0(3,0,0)*AVG_0_0_LEV_03;

    CS_15 = rho_B0(3,0,0)*AVG_0_0_LEV_10 + rhoE_B0(3,0,0)*AVG_0_0_LEV_14 + rhou0_B0(3,0,0)*AVG_0_0_LEV_11 +
      rhou1_B0(3,0,0)*AVG_0_0_LEV_12 + rhou2_B0(3,0,0)*AVG_0_0_LEV_13;

   CS_25 = rho_B0(3,0,0)*AVG_0_0_LEV_20 + rhou0_B0(3,0,0)*AVG_0_0_LEV_21 + rhou1_B0(3,0,0)*AVG_0_0_LEV_22;

    CS_35 = rho_B0(3,0,0)*AVG_0_0_LEV_30 + rhoE_B0(3,0,0)*AVG_0_0_LEV_34 + rhou0_B0(3,0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(3,0,0)*AVG_0_0_LEV_32 + rhou2_B0(3,0,0)*AVG_0_0_LEV_33;

    CS_45 = rho_B0(3,0,0)*AVG_0_0_LEV_40 + rhoE_B0(3,0,0)*AVG_0_0_LEV_44 + rhou0_B0(3,0,0)*AVG_0_0_LEV_41 +
      rhou1_B0(3,0,0)*AVG_0_0_LEV_42 + rhou2_B0(3,0,0)*AVG_0_0_LEV_43;

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) +
      u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)), fabs(u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) +
      u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(sqrt((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)))*a_B0(1,0,0) +
      u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) + u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(-sqrt((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)))*a_B0(1,0,0) +
      u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) + u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)));

    TENO_CT = pow(10.0, -floor(-(1 - ((1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 -
      kappa_B0(0,0,0)))*(1 + 4*kappa_B0(0,0,0)))*teno_a2 + teno_a1));

   TENO_B0(0,0,0) = TENO_CT;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 +
      CF_03))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 + CF_03))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 + CF_03) -
      (CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 +
      CF_03) - (CS_02*max_lambda_00 + CF_02)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 + CF_03) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 +
      CF_03) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(CS_02*max_lambda_00 +
      CF_02) + ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 + CF_01) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 +
      CF_01) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) +
      ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01))*(((1.0/2.0))*(CS_00*max_lambda_00 +
      CF_00) + ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01)));

    beta_3 = -(781.0/480.0)*(CS_04*max_lambda_00 + CF_04) - (781.0/1440.0)*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/36.0))*((9*(CS_03*max_lambda_00 + CF_03) - (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) -
      (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05)*(9*(CS_03*max_lambda_00 + CF_03) -
      (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) - (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05))
      + ((13.0/12.0))*((2*(CS_04*max_lambda_00 + CF_04) - (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) -
      (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02)*(2*(CS_04*max_lambda_00 + CF_04) -
      (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) - (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02))
      + ((781.0/480.0))*(CS_03*max_lambda_00 + CF_03) + ((781.0/1440.0))*(CS_05*max_lambda_00 + CF_05);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(CS_03*max_lambda_00 + CF_03))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/8.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/24.0))*(CS_05*max_lambda_00 + CF_05) + ((13.0/24.0))*(CS_03*max_lambda_00 + CF_03))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_00*max_lambda_00 + CF_00) +
      ((11.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 + CF_04))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 + CF_04) -
      (-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 +
      CF_04) - (-CS_03*max_lambda_00 + CF_03)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00 + CF_02) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00
      + CF_02) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (-CS_02*max_lambda_00 +
      CF_02))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) -
      (-CS_02*max_lambda_00 + CF_02)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00 + CF_04) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00
      + CF_04) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 +
      CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - (-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) -
      (-CS_04*max_lambda_00 + CF_04)));

    beta_3 = ((1.0/36.0))*((-(-CS_00*max_lambda_00 + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) +
      ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(-(-CS_00*max_lambda_00
      + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) + ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) +
      ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((2*(-CS_01*max_lambda_00 + CF_01) -
      (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 +
      CF_03)*(2*(-CS_01*max_lambda_00 + CF_01) - (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 + CF_03)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 + CF_01)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(-CS_02*max_lambda_00 + CF_02))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/8.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((1.0/24.0))*(-CS_00*max_lambda_00 + CF_00) + ((13.0/24.0))*(-CS_02*max_lambda_00 + CF_02))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_05*max_lambda_00 + CF_05) +
      ((11.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 +
      CF_13))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 + CF_13))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 + CF_13) -
      (CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 +
      CF_13) - (CS_12*max_lambda_11 + CF_12)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 + CF_13) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 +
      CF_13) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(CS_12*max_lambda_11 +
      CF_12) + ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 + CF_11) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 +
      CF_11) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) +
      ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11))*(((1.0/2.0))*(CS_10*max_lambda_11 +
      CF_10) + ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11)));

    beta_3 = -(781.0/480.0)*(CS_14*max_lambda_11 + CF_14) - (781.0/1440.0)*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/36.0))*((9*(CS_13*max_lambda_11 + CF_13) - (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) -
      (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15)*(9*(CS_13*max_lambda_11 + CF_13) -
      (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) - (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15))
      + ((13.0/12.0))*((2*(CS_14*max_lambda_11 + CF_14) - (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) -
      (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12)*(2*(CS_14*max_lambda_11 + CF_14) -
      (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) - (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12))
      + ((781.0/480.0))*(CS_13*max_lambda_11 + CF_13) + ((781.0/1440.0))*(CS_15*max_lambda_11 + CF_15);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(CS_13*max_lambda_11 + CF_13))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/8.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/24.0))*(CS_15*max_lambda_11 + CF_15) + ((13.0/24.0))*(CS_13*max_lambda_11 + CF_13))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_10*max_lambda_11 + CF_10) +
      ((11.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 + CF_14))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 + CF_14) -
      (-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 +
      CF_14) - (-CS_13*max_lambda_11 + CF_13)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11 + CF_12) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11
      + CF_12) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (-CS_12*max_lambda_11 +
      CF_12))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) -
      (-CS_12*max_lambda_11 + CF_12)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11 + CF_14) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11
      + CF_14) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 +
      CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - (-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) -
      (-CS_14*max_lambda_11 + CF_14)));

    beta_3 = ((1.0/36.0))*((-(-CS_10*max_lambda_11 + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) +
      ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(-(-CS_10*max_lambda_11
      + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) + ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) +
      ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((2*(-CS_11*max_lambda_11 + CF_11) -
      (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 +
      CF_13)*(2*(-CS_11*max_lambda_11 + CF_11) - (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 + CF_13)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 + CF_11)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(-CS_12*max_lambda_11 + CF_12))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/8.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((1.0/24.0))*(-CS_10*max_lambda_11 + CF_10) + ((13.0/24.0))*(-CS_12*max_lambda_11 + CF_12))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_15*max_lambda_11 + CF_15) +
      ((11.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 +
      CF_23))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 + CF_23))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 + CF_23) -
      (CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 +
      CF_23) - (CS_22*max_lambda_22 + CF_22)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 + CF_23) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 +
      CF_23) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(CS_22*max_lambda_22 +
      CF_22) + ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 + CF_21) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 +
      CF_21) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) +
      ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21))*(((1.0/2.0))*(CS_20*max_lambda_22 +
      CF_20) + ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21)));

    beta_3 = -(781.0/480.0)*(CS_24*max_lambda_22 + CF_24) - (781.0/1440.0)*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/36.0))*((9*(CS_23*max_lambda_22 + CF_23) - (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) -
      (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25)*(9*(CS_23*max_lambda_22 + CF_23) -
      (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) - (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25))
      + ((13.0/12.0))*((2*(CS_24*max_lambda_22 + CF_24) - (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) -
      (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22)*(2*(CS_24*max_lambda_22 + CF_24) -
      (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) - (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22))
      + ((781.0/480.0))*(CS_23*max_lambda_22 + CF_23) + ((781.0/1440.0))*(CS_25*max_lambda_22 + CF_25);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(CS_23*max_lambda_22 + CF_23))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/8.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/24.0))*(CS_25*max_lambda_22 + CF_25) + ((13.0/24.0))*(CS_23*max_lambda_22 + CF_23))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_20*max_lambda_22 + CF_20) +
      ((11.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 + CF_24))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 + CF_24) -
      (-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 +
      CF_24) - (-CS_23*max_lambda_22 + CF_23)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22 + CF_22) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22
      + CF_22) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (-CS_22*max_lambda_22 +
      CF_22))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) -
      (-CS_22*max_lambda_22 + CF_22)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22 + CF_24) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22
      + CF_24) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 +
      CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - (-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) -
      (-CS_24*max_lambda_22 + CF_24)));

    beta_3 = ((1.0/36.0))*((-(-CS_20*max_lambda_22 + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) +
      ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(-(-CS_20*max_lambda_22
      + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) + ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) +
      ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((2*(-CS_21*max_lambda_22 + CF_21) -
      (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 +
      CF_23)*(2*(-CS_21*max_lambda_22 + CF_21) - (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 + CF_23)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 + CF_21)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(-CS_22*max_lambda_22 + CF_22))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/8.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((1.0/24.0))*(-CS_20*max_lambda_22 + CF_20) + ((13.0/24.0))*(-CS_22*max_lambda_22 + CF_22))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_25*max_lambda_22 + CF_25) +
      ((11.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 +
      CF_33))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 + CF_33))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 + CF_33) -
      (CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 +
      CF_33) - (CS_32*max_lambda_33 + CF_32)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 + CF_33) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 +
      CF_33) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(CS_32*max_lambda_33 +
      CF_32) + ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 + CF_31) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 +
      CF_31) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) +
      ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31))*(((1.0/2.0))*(CS_30*max_lambda_33 +
      CF_30) + ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31)));

    beta_3 = -(781.0/480.0)*(CS_34*max_lambda_33 + CF_34) - (781.0/1440.0)*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/36.0))*((9*(CS_33*max_lambda_33 + CF_33) - (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) -
      (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35)*(9*(CS_33*max_lambda_33 + CF_33) -
      (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) - (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35))
      + ((13.0/12.0))*((2*(CS_34*max_lambda_33 + CF_34) - (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) -
      (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32)*(2*(CS_34*max_lambda_33 + CF_34) -
      (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) - (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32))
      + ((781.0/480.0))*(CS_33*max_lambda_33 + CF_33) + ((781.0/1440.0))*(CS_35*max_lambda_33 + CF_35);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(CS_33*max_lambda_33 + CF_33))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/8.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/24.0))*(CS_35*max_lambda_33 + CF_35) + ((13.0/24.0))*(CS_33*max_lambda_33 + CF_33))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_30*max_lambda_33 + CF_30) +
      ((11.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 + CF_34))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 + CF_34) -
      (-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 +
      CF_34) - (-CS_33*max_lambda_33 + CF_33)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33 + CF_32) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33
      + CF_32) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (-CS_32*max_lambda_33 +
      CF_32))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) -
      (-CS_32*max_lambda_33 + CF_32)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33 + CF_34) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33
      + CF_34) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 +
      CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - (-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) -
      (-CS_34*max_lambda_33 + CF_34)));

    beta_3 = ((1.0/36.0))*((-(-CS_30*max_lambda_33 + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) +
      ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(-(-CS_30*max_lambda_33
      + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) + ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) +
      ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((2*(-CS_31*max_lambda_33 + CF_31) -
      (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 +
      CF_33)*(2*(-CS_31*max_lambda_33 + CF_31) - (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 + CF_33)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 + CF_31)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/8.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((1.0/24.0))*(-CS_30*max_lambda_33 + CF_30) + ((13.0/24.0))*(-CS_32*max_lambda_33 + CF_32))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 +
      CF_43))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 + CF_43))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 + CF_43) -
      (CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 +
      CF_43) - (CS_42*max_lambda_44 + CF_42)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 + CF_43) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 +
      CF_43) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(CS_42*max_lambda_44 +
      CF_42) + ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 + CF_41) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 +
      CF_41) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) +
      ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41))*(((1.0/2.0))*(CS_40*max_lambda_44 +
      CF_40) + ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41)));

    beta_3 = -(781.0/480.0)*(CS_44*max_lambda_44 + CF_44) - (781.0/1440.0)*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/36.0))*((9*(CS_43*max_lambda_44 + CF_43) - (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) -
      (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45)*(9*(CS_43*max_lambda_44 + CF_43) -
      (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) - (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45))
      + ((13.0/12.0))*((2*(CS_44*max_lambda_44 + CF_44) - (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) -
      (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42)*(2*(CS_44*max_lambda_44 + CF_44) -
      (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) - (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42))
      + ((781.0/480.0))*(CS_43*max_lambda_44 + CF_43) + ((781.0/1440.0))*(CS_45*max_lambda_44 + CF_45);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(CS_43*max_lambda_44 + CF_43))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/8.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/24.0))*(CS_45*max_lambda_44 + CF_45) + ((13.0/24.0))*(CS_43*max_lambda_44 + CF_43))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_40*max_lambda_44 + CF_40) +
      ((11.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_0*inv_omega_sum + Recon_4;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 + CF_44))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 + CF_44) -
      (-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 +
      CF_44) - (-CS_43*max_lambda_44 + CF_43)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44 + CF_42) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44
      + CF_42) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (-CS_42*max_lambda_44 +
      CF_42))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) -
      (-CS_42*max_lambda_44 + CF_42)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44 + CF_44) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44
      + CF_44) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 +
      CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - (-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) -
      (-CS_44*max_lambda_44 + CF_44)));

    beta_3 = ((1.0/36.0))*((-(-CS_40*max_lambda_44 + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) +
      ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(-(-CS_40*max_lambda_44
      + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) + ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) +
      ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((2*(-CS_41*max_lambda_44 + CF_41) -
      (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 +
      CF_43)*(2*(-CS_41*max_lambda_44 + CF_41) - (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 + CF_43)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 + CF_41)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/8.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((1.0/24.0))*(-CS_40*max_lambda_44 + CF_40) + ((13.0/24.0))*(-CS_42*max_lambda_44 + CF_42))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_0*inv_omega_sum + Recon_4;

    wk0_B0(0,0,0) = AVG_0_D00*Recon_0*inv_AVG_met_fact + AVG_0_D01*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + 0.707106781186547*AVG_0_rho*Recon_4*inv_AVG_a;

    wk1_B0(0,0,0) = AVG_0_D00*AVG_0_u0*Recon_0*inv_AVG_met_fact + AVG_0_D01*AVG_0_rho*Recon_2*inv_AVG_met_fact +
      AVG_0_D01*AVG_0_u0*Recon_1*inv_AVG_met_fact + 0.707106781186547*(AVG_0_D00*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u0)*AVG_0_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_0_D00*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u0)*AVG_0_rho*Recon_4*inv_AVG_a;

    wk2_B0(0,0,0) = AVG_0_D00*AVG_0_u1*Recon_0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*Recon_1*inv_AVG_met_fact -
      AVG_0_D00*AVG_0_rho*Recon_2*inv_AVG_met_fact + 0.707106781186547*(AVG_0_D01*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u1)*AVG_0_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_0_D01*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u1)*AVG_0_rho*Recon_4*inv_AVG_a;

    wk3_B0(0,0,0) = (AVG_0_D00*AVG_0_rho*inv_AVG_met_fact + AVG_0_D01*AVG_0_u2*inv_AVG_met_fact)*Recon_1 +
      (AVG_0_D00*AVG_0_u2*inv_AVG_met_fact - AVG_0_D01*AVG_0_rho*inv_AVG_met_fact)*Recon_0 +
      0.707106781186547*AVG_0_rho*AVG_0_u2*Recon_3*inv_AVG_a + 0.707106781186547*AVG_0_rho*AVG_0_u2*Recon_4*inv_AVG_a;

    wk4_B0(0,0,0) = (((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) +
      (AVG_0_u2*AVG_0_u2))*AVG_0_D00*inv_AVG_met_fact - AVG_0_D01*AVG_0_rho*AVG_0_u2*inv_AVG_met_fact)*Recon_0 +
      (((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2))*AVG_0_D01*inv_AVG_met_fact +
      AVG_0_D00*AVG_0_rho*AVG_0_u2*inv_AVG_met_fact)*Recon_1 + (AVG_0_D01*AVG_0_u0*inv_AVG_met_fact -
      AVG_0_D00*AVG_0_u1*inv_AVG_met_fact)*AVG_0_rho*Recon_2 + 0.707106781186547*(((AVG_0_a*AVG_0_a) +
      ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2))*gamma_m1)*invgamma_m1 +
      (AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)*AVG_0_a)*AVG_0_rho*Recon_3*inv_AVG_a +
      0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) +
      (AVG_0_u2*AVG_0_u2))*gamma_m1)*invgamma_m1 - (AVG_0_D00*AVG_0_u0*inv_AVG_met_fact +
      AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)*AVG_0_a)*AVG_0_rho*Recon_4*inv_AVG_a;

}

 void opensbliblock00Kernel001(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &U1_B0, const
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &kappa_B0, const ACC<double> &p_B0, const ACC<double>
&rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double>
&rhou2_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &wk5_B0,
ACC<double> &wk6_B0, ACC<double> &wk7_B0, ACC<double> &wk8_B0, ACC<double> &wk9_B0)
{
   double AVG_1_1_LEV_00 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_04 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double AVG_1_1_LEV_13 = 0.0;
   double AVG_1_1_LEV_14 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
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
   double AVG_1_D10 = 0.0;
   double AVG_1_D11 = 0.0;
   double AVG_1_a = 0.0;
   double AVG_1_detJ = 0.0;
   double AVG_1_inv_rho = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_u0 = 0.0;
   double AVG_1_u1 = 0.0;
   double AVG_1_u2 = 0.0;
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
   double TENO_CT = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double alpha_3 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double beta_3 = 0.0;
   double delta_0 = 0.0;
   double delta_1 = 0.0;
   double delta_2 = 0.0;
   double delta_3 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_met_fact = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double inv_beta_0 = 0.0;
   double inv_beta_1 = 0.0;
   double inv_beta_2 = 0.0;
   double inv_beta_3 = 0.0;
   double inv_omega_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double max_lambda_44 = 0.0;
   AVG_1_rho = sqrt(rho_B0(0,0,0)*rho_B0(0,1,0));

   AVG_1_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(0,1,0))));

   AVG_1_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u0_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u1_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u2_B0(0,1,0))*AVG_1_inv_rho;

    AVG_1_a = sqrt((-(1.0/2.0)*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(0,1,0) +
      rhoE_B0(0,1,0))/sqrt(rho_B0(0,1,0)))*AVG_1_inv_rho)*gamma_m1);

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0,0) + D11_B0(0,1,0));

   AVG_1_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(0,1,0));

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0,0) + D10_B0(0,1,0));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   inv_AVG_met_fact = pow((AVG_1_D10*AVG_1_D10) + (AVG_1_D11*AVG_1_D11), (-1.0/2.0));

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2*AVG_1_D10 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 -
      2*AVG_1_D11*AVG_1_u2*inv_AVG_rho + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D10 +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D10 +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D10)*inv_AVG_met_fact;

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D10*AVG_1_u0*inv_AVG_met_fact;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D10*AVG_1_u1*inv_AVG_met_fact;

    AVG_1_1_LEV_03 = (-AVG_1_D11*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_1_D10*AVG_1_u2 +
      (inv_AVG_a*inv_AVG_a)*gama*AVG_1_D10*AVG_1_u2)*inv_AVG_met_fact;

   AVG_1_1_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D10*inv_AVG_met_fact;

    AVG_1_1_LEV_10 = -(1.0/2.0)*(-2*AVG_1_D11 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 +
      2*AVG_1_D10*AVG_1_u2*inv_AVG_rho + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D11 +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D11 +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama*AVG_1_D11)*inv_AVG_met_fact;

   AVG_1_1_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D11*AVG_1_u0*inv_AVG_met_fact;

   AVG_1_1_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D11*AVG_1_u1*inv_AVG_met_fact;

    AVG_1_1_LEV_13 = (AVG_1_D10*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_1_D11*AVG_1_u2 +
      (inv_AVG_a*inv_AVG_a)*gama*AVG_1_D11*AVG_1_u2)*inv_AVG_met_fact;

   AVG_1_1_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_D11*inv_AVG_met_fact;

   AVG_1_1_LEV_20 = (AVG_1_D10*AVG_1_u1 - AVG_1_D11*AVG_1_u0)*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_21 = AVG_1_D11*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_22 = -AVG_1_D10*inv_AVG_met_fact*inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2) -
      (AVG_1_u0*AVG_1_u0)*gama - (AVG_1_u1*AVG_1_u1)*gama - (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_31 = 0.707106781186547*(-gama*AVG_1_u0 + AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_32 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) - (AVG_1_u2*AVG_1_u2) +
      (AVG_1_u0*AVG_1_u0)*gama + (AVG_1_u1*AVG_1_u1)*gama + (AVG_1_u2*AVG_1_u2)*gama +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_41 = -0.707106781186547*(-AVG_1_u0 + gama*AVG_1_u0 +
      AVG_1_D10*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_42 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 +
      AVG_1_D11*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_04 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_01 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_02 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_00 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_04 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_01 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_02 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_03)*detJ_B0(0,-2,0);

    CF_10 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_14 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_11 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_12 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_10 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_14 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_11 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_12 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_13)*detJ_B0(0,-2,0);

    CF_20 = (p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_21 + p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_22 +
      U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_20 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_21 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_22)*detJ_B0(0,-2,0);

    CF_30 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_34 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_31 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_32 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_30 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_34 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_31 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_32 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_33)*detJ_B0(0,-2,0);

    CF_40 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_44 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_41 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_42 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_40 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_44 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_41 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_42 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_43)*detJ_B0(0,-2,0);

    CS_00 = rho_B0(0,-2,0)*AVG_1_1_LEV_00 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_04 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_02 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_03;

    CS_10 = rho_B0(0,-2,0)*AVG_1_1_LEV_10 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_14 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_12 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_13;

   CS_20 = rho_B0(0,-2,0)*AVG_1_1_LEV_20 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_21 + rhou1_B0(0,-2,0)*AVG_1_1_LEV_22;

    CS_30 = rho_B0(0,-2,0)*AVG_1_1_LEV_30 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_34 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_32 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_33;

    CS_40 = rho_B0(0,-2,0)*AVG_1_1_LEV_40 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_44 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_42 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_43;

    CF_01 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_04 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_01 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_02 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_00 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_04 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_01 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_02 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_03)*detJ_B0(0,-1,0);

    CF_11 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_14 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_11 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_12 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_10 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_14 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_11 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_12 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_13)*detJ_B0(0,-1,0);

    CF_21 = (p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_21 + p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_22 +
      U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_20 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_21 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_22)*detJ_B0(0,-1,0);

    CF_31 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_34 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_31 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_32 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_30 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_34 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_31 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_32 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_33)*detJ_B0(0,-1,0);

    CF_41 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_44 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_41 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_42 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_40 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_44 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_41 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_42 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_43)*detJ_B0(0,-1,0);

    CS_01 = rho_B0(0,-1,0)*AVG_1_1_LEV_00 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_04 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_02 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_03;

    CS_11 = rho_B0(0,-1,0)*AVG_1_1_LEV_10 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_14 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_12 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_13;

   CS_21 = rho_B0(0,-1,0)*AVG_1_1_LEV_20 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_21 + rhou1_B0(0,-1,0)*AVG_1_1_LEV_22;

    CS_31 = rho_B0(0,-1,0)*AVG_1_1_LEV_30 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_34 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_32 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_33;

    CS_41 = rho_B0(0,-1,0)*AVG_1_1_LEV_40 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_44 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_42 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_43;

    CF_02 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_04 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_01 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_02 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_00 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_04 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_01 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_02 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_03)*detJ_B0(0,0,0);

    CF_12 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_14 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_11 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_12 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_10 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_14 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_11 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_12 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_13)*detJ_B0(0,0,0);

    CF_22 = (p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_21 + p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_22 +
      U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_20 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_21 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_22)*detJ_B0(0,0,0);

    CF_32 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_34 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_31 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_32 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_30 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_34 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_31 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_32 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_33)*detJ_B0(0,0,0);

    CF_42 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_44 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_41 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_42 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_40 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_44 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_41 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_42 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_43)*detJ_B0(0,0,0);

    CS_02 = rho_B0(0,0,0)*AVG_1_1_LEV_00 + rhoE_B0(0,0,0)*AVG_1_1_LEV_04 + rhou0_B0(0,0,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_02 + rhou2_B0(0,0,0)*AVG_1_1_LEV_03;

    CS_12 = rho_B0(0,0,0)*AVG_1_1_LEV_10 + rhoE_B0(0,0,0)*AVG_1_1_LEV_14 + rhou0_B0(0,0,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_12 + rhou2_B0(0,0,0)*AVG_1_1_LEV_13;

   CS_22 = rho_B0(0,0,0)*AVG_1_1_LEV_20 + rhou0_B0(0,0,0)*AVG_1_1_LEV_21 + rhou1_B0(0,0,0)*AVG_1_1_LEV_22;

    CS_32 = rho_B0(0,0,0)*AVG_1_1_LEV_30 + rhoE_B0(0,0,0)*AVG_1_1_LEV_34 + rhou0_B0(0,0,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_32 + rhou2_B0(0,0,0)*AVG_1_1_LEV_33;

    CS_42 = rho_B0(0,0,0)*AVG_1_1_LEV_40 + rhoE_B0(0,0,0)*AVG_1_1_LEV_44 + rhou0_B0(0,0,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_42 + rhou2_B0(0,0,0)*AVG_1_1_LEV_43;

    CF_03 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_04 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_01 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_02 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_00 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_04 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_01 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_02 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_03)*detJ_B0(0,1,0);

    CF_13 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_14 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_11 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_12 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_10 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_14 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_11 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_12 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_13)*detJ_B0(0,1,0);

    CF_23 = (p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_21 + p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_22 +
      U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_20 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_21 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_22)*detJ_B0(0,1,0);

    CF_33 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_34 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_31 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_32 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_30 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_34 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_31 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_32 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_33)*detJ_B0(0,1,0);

    CF_43 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_44 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_41 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_42 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_40 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_44 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_41 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_42 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_43)*detJ_B0(0,1,0);

    CS_03 = rho_B0(0,1,0)*AVG_1_1_LEV_00 + rhoE_B0(0,1,0)*AVG_1_1_LEV_04 + rhou0_B0(0,1,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_02 + rhou2_B0(0,1,0)*AVG_1_1_LEV_03;

    CS_13 = rho_B0(0,1,0)*AVG_1_1_LEV_10 + rhoE_B0(0,1,0)*AVG_1_1_LEV_14 + rhou0_B0(0,1,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_12 + rhou2_B0(0,1,0)*AVG_1_1_LEV_13;

   CS_23 = rho_B0(0,1,0)*AVG_1_1_LEV_20 + rhou0_B0(0,1,0)*AVG_1_1_LEV_21 + rhou1_B0(0,1,0)*AVG_1_1_LEV_22;

    CS_33 = rho_B0(0,1,0)*AVG_1_1_LEV_30 + rhoE_B0(0,1,0)*AVG_1_1_LEV_34 + rhou0_B0(0,1,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_32 + rhou2_B0(0,1,0)*AVG_1_1_LEV_33;

    CS_43 = rho_B0(0,1,0)*AVG_1_1_LEV_40 + rhoE_B0(0,1,0)*AVG_1_1_LEV_44 + rhou0_B0(0,1,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_42 + rhou2_B0(0,1,0)*AVG_1_1_LEV_43;

    CF_04 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_04 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_01 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_02 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_00 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_04 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_01 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_02 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_03)*detJ_B0(0,2,0);

    CF_14 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_14 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_11 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_12 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_10 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_14 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_11 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_12 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_13)*detJ_B0(0,2,0);

    CF_24 = (p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_21 + p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_22 +
      U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_20 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_21 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_22)*detJ_B0(0,2,0);

    CF_34 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_34 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_31 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_32 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_30 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_34 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_31 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_32 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_33)*detJ_B0(0,2,0);

    CF_44 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_44 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_41 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_42 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_40 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_44 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_41 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_42 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_43)*detJ_B0(0,2,0);

    CS_04 = rho_B0(0,2,0)*AVG_1_1_LEV_00 + rhoE_B0(0,2,0)*AVG_1_1_LEV_04 + rhou0_B0(0,2,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_02 + rhou2_B0(0,2,0)*AVG_1_1_LEV_03;

    CS_14 = rho_B0(0,2,0)*AVG_1_1_LEV_10 + rhoE_B0(0,2,0)*AVG_1_1_LEV_14 + rhou0_B0(0,2,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_12 + rhou2_B0(0,2,0)*AVG_1_1_LEV_13;

   CS_24 = rho_B0(0,2,0)*AVG_1_1_LEV_20 + rhou0_B0(0,2,0)*AVG_1_1_LEV_21 + rhou1_B0(0,2,0)*AVG_1_1_LEV_22;

    CS_34 = rho_B0(0,2,0)*AVG_1_1_LEV_30 + rhoE_B0(0,2,0)*AVG_1_1_LEV_34 + rhou0_B0(0,2,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_32 + rhou2_B0(0,2,0)*AVG_1_1_LEV_33;

    CS_44 = rho_B0(0,2,0)*AVG_1_1_LEV_40 + rhoE_B0(0,2,0)*AVG_1_1_LEV_44 + rhou0_B0(0,2,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_42 + rhou2_B0(0,2,0)*AVG_1_1_LEV_43;

    CF_05 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_04 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_01 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_02 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_00 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_04 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_01 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_02 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_03)*detJ_B0(0,3,0);

    CF_15 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_14 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_11 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_12 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_10 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_14 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_11 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_12 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_13)*detJ_B0(0,3,0);

    CF_25 = (p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_21 + p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_22 +
      U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_20 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_21 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_22)*detJ_B0(0,3,0);

    CF_35 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_34 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_31 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_32 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_30 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_34 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_31 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_32 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_33)*detJ_B0(0,3,0);

    CF_45 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_44 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_41 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_42 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_40 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_44 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_41 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_42 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_43)*detJ_B0(0,3,0);

    CS_05 = rho_B0(0,3,0)*AVG_1_1_LEV_00 + rhoE_B0(0,3,0)*AVG_1_1_LEV_04 + rhou0_B0(0,3,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_02 + rhou2_B0(0,3,0)*AVG_1_1_LEV_03;

    CS_15 = rho_B0(0,3,0)*AVG_1_1_LEV_10 + rhoE_B0(0,3,0)*AVG_1_1_LEV_14 + rhou0_B0(0,3,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_12 + rhou2_B0(0,3,0)*AVG_1_1_LEV_13;

   CS_25 = rho_B0(0,3,0)*AVG_1_1_LEV_20 + rhou0_B0(0,3,0)*AVG_1_1_LEV_21 + rhou1_B0(0,3,0)*AVG_1_1_LEV_22;

    CS_35 = rho_B0(0,3,0)*AVG_1_1_LEV_30 + rhoE_B0(0,3,0)*AVG_1_1_LEV_34 + rhou0_B0(0,3,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_32 + rhou2_B0(0,3,0)*AVG_1_1_LEV_33;

    CS_45 = rho_B0(0,3,0)*AVG_1_1_LEV_40 + rhoE_B0(0,3,0)*AVG_1_1_LEV_44 + rhou0_B0(0,3,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_42 + rhou2_B0(0,3,0)*AVG_1_1_LEV_43;

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) +
      u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)), fabs(u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) +
      u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(-sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)));

    TENO_CT = pow(10.0, -floor(-(1 - ((1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 -
      kappa_B0(0,0,0)))*(1 + 4*kappa_B0(0,0,0)))*teno_a2 + teno_a1));

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 +
      CF_03))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 + CF_03))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 + CF_03) -
      (CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 +
      CF_03) - (CS_02*max_lambda_00 + CF_02)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 + CF_03) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 +
      CF_03) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(CS_02*max_lambda_00 +
      CF_02) + ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 + CF_01) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 +
      CF_01) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) +
      ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01))*(((1.0/2.0))*(CS_00*max_lambda_00 +
      CF_00) + ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01)));

    beta_3 = -(781.0/480.0)*(CS_04*max_lambda_00 + CF_04) - (781.0/1440.0)*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/36.0))*((9*(CS_03*max_lambda_00 + CF_03) - (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) -
      (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05)*(9*(CS_03*max_lambda_00 + CF_03) -
      (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) - (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05))
      + ((13.0/12.0))*((2*(CS_04*max_lambda_00 + CF_04) - (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) -
      (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02)*(2*(CS_04*max_lambda_00 + CF_04) -
      (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) - (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02))
      + ((781.0/480.0))*(CS_03*max_lambda_00 + CF_03) + ((781.0/1440.0))*(CS_05*max_lambda_00 + CF_05);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(CS_03*max_lambda_00 + CF_03))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/8.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/24.0))*(CS_05*max_lambda_00 + CF_05) + ((13.0/24.0))*(CS_03*max_lambda_00 + CF_03))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_00*max_lambda_00 + CF_00) +
      ((11.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 + CF_04))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 + CF_04) -
      (-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 +
      CF_04) - (-CS_03*max_lambda_00 + CF_03)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00 + CF_02) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00
      + CF_02) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (-CS_02*max_lambda_00 +
      CF_02))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) -
      (-CS_02*max_lambda_00 + CF_02)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00 + CF_04) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00
      + CF_04) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 +
      CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - (-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) -
      (-CS_04*max_lambda_00 + CF_04)));

    beta_3 = ((1.0/36.0))*((-(-CS_00*max_lambda_00 + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) +
      ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(-(-CS_00*max_lambda_00
      + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) + ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) +
      ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((2*(-CS_01*max_lambda_00 + CF_01) -
      (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 +
      CF_03)*(2*(-CS_01*max_lambda_00 + CF_01) - (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 + CF_03)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 + CF_01)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(-CS_02*max_lambda_00 + CF_02))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/8.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((1.0/24.0))*(-CS_00*max_lambda_00 + CF_00) + ((13.0/24.0))*(-CS_02*max_lambda_00 + CF_02))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_05*max_lambda_00 + CF_05) +
      ((11.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 +
      CF_13))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 + CF_13))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 + CF_13) -
      (CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 +
      CF_13) - (CS_12*max_lambda_11 + CF_12)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 + CF_13) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 +
      CF_13) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(CS_12*max_lambda_11 +
      CF_12) + ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 + CF_11) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 +
      CF_11) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) +
      ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11))*(((1.0/2.0))*(CS_10*max_lambda_11 +
      CF_10) + ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11)));

    beta_3 = -(781.0/480.0)*(CS_14*max_lambda_11 + CF_14) - (781.0/1440.0)*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/36.0))*((9*(CS_13*max_lambda_11 + CF_13) - (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) -
      (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15)*(9*(CS_13*max_lambda_11 + CF_13) -
      (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) - (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15))
      + ((13.0/12.0))*((2*(CS_14*max_lambda_11 + CF_14) - (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) -
      (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12)*(2*(CS_14*max_lambda_11 + CF_14) -
      (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) - (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12))
      + ((781.0/480.0))*(CS_13*max_lambda_11 + CF_13) + ((781.0/1440.0))*(CS_15*max_lambda_11 + CF_15);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(CS_13*max_lambda_11 + CF_13))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/8.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/24.0))*(CS_15*max_lambda_11 + CF_15) + ((13.0/24.0))*(CS_13*max_lambda_11 + CF_13))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_10*max_lambda_11 + CF_10) +
      ((11.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 + CF_14))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 + CF_14) -
      (-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 +
      CF_14) - (-CS_13*max_lambda_11 + CF_13)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11 + CF_12) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11
      + CF_12) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (-CS_12*max_lambda_11 +
      CF_12))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) -
      (-CS_12*max_lambda_11 + CF_12)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11 + CF_14) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11
      + CF_14) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 +
      CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - (-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) -
      (-CS_14*max_lambda_11 + CF_14)));

    beta_3 = ((1.0/36.0))*((-(-CS_10*max_lambda_11 + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) +
      ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(-(-CS_10*max_lambda_11
      + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) + ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) +
      ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((2*(-CS_11*max_lambda_11 + CF_11) -
      (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 +
      CF_13)*(2*(-CS_11*max_lambda_11 + CF_11) - (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 + CF_13)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 + CF_11)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(-CS_12*max_lambda_11 + CF_12))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/8.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((1.0/24.0))*(-CS_10*max_lambda_11 + CF_10) + ((13.0/24.0))*(-CS_12*max_lambda_11 + CF_12))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_15*max_lambda_11 + CF_15) +
      ((11.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 +
      CF_23))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 + CF_23))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 + CF_23) -
      (CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 +
      CF_23) - (CS_22*max_lambda_22 + CF_22)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 + CF_23) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 +
      CF_23) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(CS_22*max_lambda_22 +
      CF_22) + ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 + CF_21) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 +
      CF_21) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) +
      ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21))*(((1.0/2.0))*(CS_20*max_lambda_22 +
      CF_20) + ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21)));

    beta_3 = -(781.0/480.0)*(CS_24*max_lambda_22 + CF_24) - (781.0/1440.0)*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/36.0))*((9*(CS_23*max_lambda_22 + CF_23) - (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) -
      (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25)*(9*(CS_23*max_lambda_22 + CF_23) -
      (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) - (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25))
      + ((13.0/12.0))*((2*(CS_24*max_lambda_22 + CF_24) - (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) -
      (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22)*(2*(CS_24*max_lambda_22 + CF_24) -
      (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) - (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22))
      + ((781.0/480.0))*(CS_23*max_lambda_22 + CF_23) + ((781.0/1440.0))*(CS_25*max_lambda_22 + CF_25);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(CS_23*max_lambda_22 + CF_23))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/8.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/24.0))*(CS_25*max_lambda_22 + CF_25) + ((13.0/24.0))*(CS_23*max_lambda_22 + CF_23))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_20*max_lambda_22 + CF_20) +
      ((11.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 + CF_24))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 + CF_24) -
      (-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 +
      CF_24) - (-CS_23*max_lambda_22 + CF_23)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22 + CF_22) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22
      + CF_22) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (-CS_22*max_lambda_22 +
      CF_22))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) -
      (-CS_22*max_lambda_22 + CF_22)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22 + CF_24) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22
      + CF_24) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 +
      CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - (-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) -
      (-CS_24*max_lambda_22 + CF_24)));

    beta_3 = ((1.0/36.0))*((-(-CS_20*max_lambda_22 + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) +
      ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(-(-CS_20*max_lambda_22
      + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) + ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) +
      ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((2*(-CS_21*max_lambda_22 + CF_21) -
      (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 +
      CF_23)*(2*(-CS_21*max_lambda_22 + CF_21) - (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 + CF_23)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 + CF_21)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(-CS_22*max_lambda_22 + CF_22))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/8.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((1.0/24.0))*(-CS_20*max_lambda_22 + CF_20) + ((13.0/24.0))*(-CS_22*max_lambda_22 + CF_22))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_25*max_lambda_22 + CF_25) +
      ((11.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 +
      CF_33))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 + CF_33))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 + CF_33) -
      (CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 +
      CF_33) - (CS_32*max_lambda_33 + CF_32)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 + CF_33) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 +
      CF_33) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(CS_32*max_lambda_33 +
      CF_32) + ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 + CF_31) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 +
      CF_31) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) +
      ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31))*(((1.0/2.0))*(CS_30*max_lambda_33 +
      CF_30) + ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31)));

    beta_3 = -(781.0/480.0)*(CS_34*max_lambda_33 + CF_34) - (781.0/1440.0)*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/36.0))*((9*(CS_33*max_lambda_33 + CF_33) - (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) -
      (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35)*(9*(CS_33*max_lambda_33 + CF_33) -
      (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) - (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35))
      + ((13.0/12.0))*((2*(CS_34*max_lambda_33 + CF_34) - (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) -
      (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32)*(2*(CS_34*max_lambda_33 + CF_34) -
      (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) - (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32))
      + ((781.0/480.0))*(CS_33*max_lambda_33 + CF_33) + ((781.0/1440.0))*(CS_35*max_lambda_33 + CF_35);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(CS_33*max_lambda_33 + CF_33))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/8.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/24.0))*(CS_35*max_lambda_33 + CF_35) + ((13.0/24.0))*(CS_33*max_lambda_33 + CF_33))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_30*max_lambda_33 + CF_30) +
      ((11.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 + CF_34))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 + CF_34) -
      (-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 +
      CF_34) - (-CS_33*max_lambda_33 + CF_33)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33 + CF_32) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33
      + CF_32) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (-CS_32*max_lambda_33 +
      CF_32))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) -
      (-CS_32*max_lambda_33 + CF_32)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33 + CF_34) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33
      + CF_34) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 +
      CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - (-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) -
      (-CS_34*max_lambda_33 + CF_34)));

    beta_3 = ((1.0/36.0))*((-(-CS_30*max_lambda_33 + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) +
      ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(-(-CS_30*max_lambda_33
      + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) + ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) +
      ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((2*(-CS_31*max_lambda_33 + CF_31) -
      (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 +
      CF_33)*(2*(-CS_31*max_lambda_33 + CF_31) - (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 + CF_33)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 + CF_31)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/8.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((1.0/24.0))*(-CS_30*max_lambda_33 + CF_30) + ((13.0/24.0))*(-CS_32*max_lambda_33 + CF_32))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 +
      CF_43))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 + CF_43))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 + CF_43) -
      (CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 +
      CF_43) - (CS_42*max_lambda_44 + CF_42)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 + CF_43) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 +
      CF_43) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(CS_42*max_lambda_44 +
      CF_42) + ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 + CF_41) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 +
      CF_41) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) +
      ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41))*(((1.0/2.0))*(CS_40*max_lambda_44 +
      CF_40) + ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41)));

    beta_3 = -(781.0/480.0)*(CS_44*max_lambda_44 + CF_44) - (781.0/1440.0)*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/36.0))*((9*(CS_43*max_lambda_44 + CF_43) - (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) -
      (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45)*(9*(CS_43*max_lambda_44 + CF_43) -
      (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) - (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45))
      + ((13.0/12.0))*((2*(CS_44*max_lambda_44 + CF_44) - (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) -
      (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42)*(2*(CS_44*max_lambda_44 + CF_44) -
      (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) - (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42))
      + ((781.0/480.0))*(CS_43*max_lambda_44 + CF_43) + ((781.0/1440.0))*(CS_45*max_lambda_44 + CF_45);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(CS_43*max_lambda_44 + CF_43))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/8.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/24.0))*(CS_45*max_lambda_44 + CF_45) + ((13.0/24.0))*(CS_43*max_lambda_44 + CF_43))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_40*max_lambda_44 + CF_40) +
      ((11.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_0*inv_omega_sum + Recon_4;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 + CF_44))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 + CF_44) -
      (-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 +
      CF_44) - (-CS_43*max_lambda_44 + CF_43)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44 + CF_42) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44
      + CF_42) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (-CS_42*max_lambda_44 +
      CF_42))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) -
      (-CS_42*max_lambda_44 + CF_42)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44 + CF_44) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44
      + CF_44) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 +
      CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - (-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) -
      (-CS_44*max_lambda_44 + CF_44)));

    beta_3 = ((1.0/36.0))*((-(-CS_40*max_lambda_44 + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) +
      ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(-(-CS_40*max_lambda_44
      + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) + ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) +
      ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((2*(-CS_41*max_lambda_44 + CF_41) -
      (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 +
      CF_43)*(2*(-CS_41*max_lambda_44 + CF_41) - (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 + CF_43)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 + CF_41)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/8.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((1.0/24.0))*(-CS_40*max_lambda_44 + CF_40) + ((13.0/24.0))*(-CS_42*max_lambda_44 + CF_42))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_0*inv_omega_sum + Recon_4;

    wk5_B0(0,0,0) = AVG_1_D10*Recon_0*inv_AVG_met_fact + AVG_1_D11*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*AVG_1_rho*Recon_4*inv_AVG_a;

    wk6_B0(0,0,0) = AVG_1_D10*AVG_1_u0*Recon_0*inv_AVG_met_fact + AVG_1_D11*AVG_1_rho*Recon_2*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u0*Recon_1*inv_AVG_met_fact + 0.707106781186547*(AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*AVG_1_rho*Recon_4*inv_AVG_a;

    wk7_B0(0,0,0) = AVG_1_D10*AVG_1_u1*Recon_0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*Recon_1*inv_AVG_met_fact -
      AVG_1_D10*AVG_1_rho*Recon_2*inv_AVG_met_fact + 0.707106781186547*(AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*AVG_1_rho*Recon_4*inv_AVG_a;

    wk8_B0(0,0,0) = (AVG_1_D10*AVG_1_rho*inv_AVG_met_fact + AVG_1_D11*AVG_1_u2*inv_AVG_met_fact)*Recon_1 +
      (AVG_1_D10*AVG_1_u2*inv_AVG_met_fact - AVG_1_D11*AVG_1_rho*inv_AVG_met_fact)*Recon_0 +
      0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_3*inv_AVG_a + 0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_4*inv_AVG_a;

    wk9_B0(0,0,0) = (((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*AVG_1_D10*inv_AVG_met_fact - AVG_1_D11*AVG_1_rho*AVG_1_u2*inv_AVG_met_fact)*Recon_0 +
      (((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2))*AVG_1_D11*inv_AVG_met_fact +
      AVG_1_D10*AVG_1_rho*AVG_1_u2*inv_AVG_met_fact)*Recon_1 + (AVG_1_D11*AVG_1_u0*inv_AVG_met_fact -
      AVG_1_D10*AVG_1_u1*inv_AVG_met_fact)*AVG_1_rho*Recon_2 + 0.707106781186547*(((AVG_1_a*AVG_1_a) +
      ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2))*gamma_m1)*invgamma_m1 +
      (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_3*inv_AVG_a +
      0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*gamma_m1)*invgamma_m1 - (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_4*inv_AVG_a;

}

 void opensbliblock00Kernel002(const ACC<double> &U2_B0, const ACC<double> &a_B0, const ACC<double> &detJ_B0, const
ACC<double> &kappa_B0, const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double>
&rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0,
const ACC<double> &u2_B0, ACC<double> &wk10_B0, ACC<double> &wk11_B0, ACC<double> &wk12_B0, ACC<double> &wk13_B0,
ACC<double> &wk14_B0)
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
   double AVG_2_a = 0.0;
   double AVG_2_detJ = 0.0;
   double AVG_2_inv_rho = 0.0;
   double AVG_2_rho = 0.0;
   double AVG_2_u0 = 0.0;
   double AVG_2_u1 = 0.0;
   double AVG_2_u2 = 0.0;
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
   double TENO_CT = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double alpha_3 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double beta_3 = 0.0;
   double delta_0 = 0.0;
   double delta_1 = 0.0;
   double delta_2 = 0.0;
   double delta_3 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double inv_beta_0 = 0.0;
   double inv_beta_1 = 0.0;
   double inv_beta_2 = 0.0;
   double inv_beta_3 = 0.0;
   double inv_omega_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double max_lambda_44 = 0.0;
   AVG_2_rho = sqrt(rho_B0(0,0,0)*rho_B0(0,0,1));

   AVG_2_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(0,0,1))));

   AVG_2_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u0_B0(0,0,1))*AVG_2_inv_rho;

   AVG_2_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u1_B0(0,0,1))*AVG_2_inv_rho;

   AVG_2_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u2_B0(0,0,1))*AVG_2_inv_rho;

    AVG_2_a = sqrt((-(1.0/2.0)*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) + (AVG_2_u2*AVG_2_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(0,0,1) +
      rhoE_B0(0,0,1))/sqrt(rho_B0(0,0,1)))*AVG_2_inv_rho)*gamma_m1);

   AVG_2_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(0,0,1));

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

   CF_00 = (rho_B0(0,0,-2)*AVG_2_2_LEV_00 + rhou1_B0(0,0,-2)*AVG_2_2_LEV_02)*U2_B0(0,0,-2)*detJ_B0(0,0,-2);

   CF_10 = (rho_B0(0,0,-2)*AVG_2_2_LEV_10 + rhou0_B0(0,0,-2)*AVG_2_2_LEV_11)*U2_B0(0,0,-2)*detJ_B0(0,0,-2);

    CF_20 = (p_B0(0,0,-2)*AVG_2_2_LEV_23 + p_B0(0,0,-2)*U2_B0(0,0,-2)*AVG_2_2_LEV_24 +
      U2_B0(0,0,-2)*rho_B0(0,0,-2)*AVG_2_2_LEV_20 + U2_B0(0,0,-2)*rhoE_B0(0,0,-2)*AVG_2_2_LEV_24 +
      U2_B0(0,0,-2)*rhou0_B0(0,0,-2)*AVG_2_2_LEV_21 + U2_B0(0,0,-2)*rhou1_B0(0,0,-2)*AVG_2_2_LEV_22 +
      U2_B0(0,0,-2)*rhou2_B0(0,0,-2)*AVG_2_2_LEV_23)*detJ_B0(0,0,-2);

    CF_30 = (p_B0(0,0,-2)*AVG_2_2_LEV_33 + p_B0(0,0,-2)*U2_B0(0,0,-2)*AVG_2_2_LEV_34 +
      U2_B0(0,0,-2)*rho_B0(0,0,-2)*AVG_2_2_LEV_30 + U2_B0(0,0,-2)*rhoE_B0(0,0,-2)*AVG_2_2_LEV_34 +
      U2_B0(0,0,-2)*rhou0_B0(0,0,-2)*AVG_2_2_LEV_31 + U2_B0(0,0,-2)*rhou1_B0(0,0,-2)*AVG_2_2_LEV_32 +
      U2_B0(0,0,-2)*rhou2_B0(0,0,-2)*AVG_2_2_LEV_33)*detJ_B0(0,0,-2);

    CF_40 = (p_B0(0,0,-2)*AVG_2_2_LEV_43 + p_B0(0,0,-2)*U2_B0(0,0,-2)*AVG_2_2_LEV_44 +
      U2_B0(0,0,-2)*rho_B0(0,0,-2)*AVG_2_2_LEV_40 + U2_B0(0,0,-2)*rhoE_B0(0,0,-2)*AVG_2_2_LEV_44 +
      U2_B0(0,0,-2)*rhou0_B0(0,0,-2)*AVG_2_2_LEV_41 + U2_B0(0,0,-2)*rhou1_B0(0,0,-2)*AVG_2_2_LEV_42 +
      U2_B0(0,0,-2)*rhou2_B0(0,0,-2)*AVG_2_2_LEV_43)*detJ_B0(0,0,-2);

   CS_00 = rho_B0(0,0,-2)*AVG_2_2_LEV_00 + rhou1_B0(0,0,-2)*AVG_2_2_LEV_02;

   CS_10 = rho_B0(0,0,-2)*AVG_2_2_LEV_10 + rhou0_B0(0,0,-2)*AVG_2_2_LEV_11;

    CS_20 = rho_B0(0,0,-2)*AVG_2_2_LEV_20 + rhoE_B0(0,0,-2)*AVG_2_2_LEV_24 + rhou0_B0(0,0,-2)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,-2)*AVG_2_2_LEV_22 + rhou2_B0(0,0,-2)*AVG_2_2_LEV_23;

    CS_30 = rho_B0(0,0,-2)*AVG_2_2_LEV_30 + rhoE_B0(0,0,-2)*AVG_2_2_LEV_34 + rhou0_B0(0,0,-2)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,-2)*AVG_2_2_LEV_32 + rhou2_B0(0,0,-2)*AVG_2_2_LEV_33;

    CS_40 = rho_B0(0,0,-2)*AVG_2_2_LEV_40 + rhoE_B0(0,0,-2)*AVG_2_2_LEV_44 + rhou0_B0(0,0,-2)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,-2)*AVG_2_2_LEV_42 + rhou2_B0(0,0,-2)*AVG_2_2_LEV_43;

   CF_01 = (rho_B0(0,0,-1)*AVG_2_2_LEV_00 + rhou1_B0(0,0,-1)*AVG_2_2_LEV_02)*U2_B0(0,0,-1)*detJ_B0(0,0,-1);

   CF_11 = (rho_B0(0,0,-1)*AVG_2_2_LEV_10 + rhou0_B0(0,0,-1)*AVG_2_2_LEV_11)*U2_B0(0,0,-1)*detJ_B0(0,0,-1);

    CF_21 = (p_B0(0,0,-1)*AVG_2_2_LEV_23 + p_B0(0,0,-1)*U2_B0(0,0,-1)*AVG_2_2_LEV_24 +
      U2_B0(0,0,-1)*rho_B0(0,0,-1)*AVG_2_2_LEV_20 + U2_B0(0,0,-1)*rhoE_B0(0,0,-1)*AVG_2_2_LEV_24 +
      U2_B0(0,0,-1)*rhou0_B0(0,0,-1)*AVG_2_2_LEV_21 + U2_B0(0,0,-1)*rhou1_B0(0,0,-1)*AVG_2_2_LEV_22 +
      U2_B0(0,0,-1)*rhou2_B0(0,0,-1)*AVG_2_2_LEV_23)*detJ_B0(0,0,-1);

    CF_31 = (p_B0(0,0,-1)*AVG_2_2_LEV_33 + p_B0(0,0,-1)*U2_B0(0,0,-1)*AVG_2_2_LEV_34 +
      U2_B0(0,0,-1)*rho_B0(0,0,-1)*AVG_2_2_LEV_30 + U2_B0(0,0,-1)*rhoE_B0(0,0,-1)*AVG_2_2_LEV_34 +
      U2_B0(0,0,-1)*rhou0_B0(0,0,-1)*AVG_2_2_LEV_31 + U2_B0(0,0,-1)*rhou1_B0(0,0,-1)*AVG_2_2_LEV_32 +
      U2_B0(0,0,-1)*rhou2_B0(0,0,-1)*AVG_2_2_LEV_33)*detJ_B0(0,0,-1);

    CF_41 = (p_B0(0,0,-1)*AVG_2_2_LEV_43 + p_B0(0,0,-1)*U2_B0(0,0,-1)*AVG_2_2_LEV_44 +
      U2_B0(0,0,-1)*rho_B0(0,0,-1)*AVG_2_2_LEV_40 + U2_B0(0,0,-1)*rhoE_B0(0,0,-1)*AVG_2_2_LEV_44 +
      U2_B0(0,0,-1)*rhou0_B0(0,0,-1)*AVG_2_2_LEV_41 + U2_B0(0,0,-1)*rhou1_B0(0,0,-1)*AVG_2_2_LEV_42 +
      U2_B0(0,0,-1)*rhou2_B0(0,0,-1)*AVG_2_2_LEV_43)*detJ_B0(0,0,-1);

   CS_01 = rho_B0(0,0,-1)*AVG_2_2_LEV_00 + rhou1_B0(0,0,-1)*AVG_2_2_LEV_02;

   CS_11 = rho_B0(0,0,-1)*AVG_2_2_LEV_10 + rhou0_B0(0,0,-1)*AVG_2_2_LEV_11;

    CS_21 = rho_B0(0,0,-1)*AVG_2_2_LEV_20 + rhoE_B0(0,0,-1)*AVG_2_2_LEV_24 + rhou0_B0(0,0,-1)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,-1)*AVG_2_2_LEV_22 + rhou2_B0(0,0,-1)*AVG_2_2_LEV_23;

    CS_31 = rho_B0(0,0,-1)*AVG_2_2_LEV_30 + rhoE_B0(0,0,-1)*AVG_2_2_LEV_34 + rhou0_B0(0,0,-1)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,-1)*AVG_2_2_LEV_32 + rhou2_B0(0,0,-1)*AVG_2_2_LEV_33;

    CS_41 = rho_B0(0,0,-1)*AVG_2_2_LEV_40 + rhoE_B0(0,0,-1)*AVG_2_2_LEV_44 + rhou0_B0(0,0,-1)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,-1)*AVG_2_2_LEV_42 + rhou2_B0(0,0,-1)*AVG_2_2_LEV_43;

   CF_02 = (rho_B0(0,0,0)*AVG_2_2_LEV_00 + rhou1_B0(0,0,0)*AVG_2_2_LEV_02)*U2_B0(0,0,0)*detJ_B0(0,0,0);

   CF_12 = (rho_B0(0,0,0)*AVG_2_2_LEV_10 + rhou0_B0(0,0,0)*AVG_2_2_LEV_11)*U2_B0(0,0,0)*detJ_B0(0,0,0);

    CF_22 = (p_B0(0,0,0)*AVG_2_2_LEV_23 + p_B0(0,0,0)*U2_B0(0,0,0)*AVG_2_2_LEV_24 +
      U2_B0(0,0,0)*rho_B0(0,0,0)*AVG_2_2_LEV_20 + U2_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_2_2_LEV_24 +
      U2_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_2_2_LEV_21 + U2_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_2_2_LEV_22 +
      U2_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_2_2_LEV_23)*detJ_B0(0,0,0);

    CF_32 = (p_B0(0,0,0)*AVG_2_2_LEV_33 + p_B0(0,0,0)*U2_B0(0,0,0)*AVG_2_2_LEV_34 +
      U2_B0(0,0,0)*rho_B0(0,0,0)*AVG_2_2_LEV_30 + U2_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_2_2_LEV_34 +
      U2_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_2_2_LEV_31 + U2_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_2_2_LEV_32 +
      U2_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_2_2_LEV_33)*detJ_B0(0,0,0);

    CF_42 = (p_B0(0,0,0)*AVG_2_2_LEV_43 + p_B0(0,0,0)*U2_B0(0,0,0)*AVG_2_2_LEV_44 +
      U2_B0(0,0,0)*rho_B0(0,0,0)*AVG_2_2_LEV_40 + U2_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_2_2_LEV_44 +
      U2_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_2_2_LEV_41 + U2_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_2_2_LEV_42 +
      U2_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_2_2_LEV_43)*detJ_B0(0,0,0);

   CS_02 = rho_B0(0,0,0)*AVG_2_2_LEV_00 + rhou1_B0(0,0,0)*AVG_2_2_LEV_02;

   CS_12 = rho_B0(0,0,0)*AVG_2_2_LEV_10 + rhou0_B0(0,0,0)*AVG_2_2_LEV_11;

    CS_22 = rho_B0(0,0,0)*AVG_2_2_LEV_20 + rhoE_B0(0,0,0)*AVG_2_2_LEV_24 + rhou0_B0(0,0,0)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,0)*AVG_2_2_LEV_22 + rhou2_B0(0,0,0)*AVG_2_2_LEV_23;

    CS_32 = rho_B0(0,0,0)*AVG_2_2_LEV_30 + rhoE_B0(0,0,0)*AVG_2_2_LEV_34 + rhou0_B0(0,0,0)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,0)*AVG_2_2_LEV_32 + rhou2_B0(0,0,0)*AVG_2_2_LEV_33;

    CS_42 = rho_B0(0,0,0)*AVG_2_2_LEV_40 + rhoE_B0(0,0,0)*AVG_2_2_LEV_44 + rhou0_B0(0,0,0)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,0)*AVG_2_2_LEV_42 + rhou2_B0(0,0,0)*AVG_2_2_LEV_43;

   CF_03 = (rho_B0(0,0,1)*AVG_2_2_LEV_00 + rhou1_B0(0,0,1)*AVG_2_2_LEV_02)*U2_B0(0,0,1)*detJ_B0(0,0,1);

   CF_13 = (rho_B0(0,0,1)*AVG_2_2_LEV_10 + rhou0_B0(0,0,1)*AVG_2_2_LEV_11)*U2_B0(0,0,1)*detJ_B0(0,0,1);

    CF_23 = (p_B0(0,0,1)*AVG_2_2_LEV_23 + p_B0(0,0,1)*U2_B0(0,0,1)*AVG_2_2_LEV_24 +
      U2_B0(0,0,1)*rho_B0(0,0,1)*AVG_2_2_LEV_20 + U2_B0(0,0,1)*rhoE_B0(0,0,1)*AVG_2_2_LEV_24 +
      U2_B0(0,0,1)*rhou0_B0(0,0,1)*AVG_2_2_LEV_21 + U2_B0(0,0,1)*rhou1_B0(0,0,1)*AVG_2_2_LEV_22 +
      U2_B0(0,0,1)*rhou2_B0(0,0,1)*AVG_2_2_LEV_23)*detJ_B0(0,0,1);

    CF_33 = (p_B0(0,0,1)*AVG_2_2_LEV_33 + p_B0(0,0,1)*U2_B0(0,0,1)*AVG_2_2_LEV_34 +
      U2_B0(0,0,1)*rho_B0(0,0,1)*AVG_2_2_LEV_30 + U2_B0(0,0,1)*rhoE_B0(0,0,1)*AVG_2_2_LEV_34 +
      U2_B0(0,0,1)*rhou0_B0(0,0,1)*AVG_2_2_LEV_31 + U2_B0(0,0,1)*rhou1_B0(0,0,1)*AVG_2_2_LEV_32 +
      U2_B0(0,0,1)*rhou2_B0(0,0,1)*AVG_2_2_LEV_33)*detJ_B0(0,0,1);

    CF_43 = (p_B0(0,0,1)*AVG_2_2_LEV_43 + p_B0(0,0,1)*U2_B0(0,0,1)*AVG_2_2_LEV_44 +
      U2_B0(0,0,1)*rho_B0(0,0,1)*AVG_2_2_LEV_40 + U2_B0(0,0,1)*rhoE_B0(0,0,1)*AVG_2_2_LEV_44 +
      U2_B0(0,0,1)*rhou0_B0(0,0,1)*AVG_2_2_LEV_41 + U2_B0(0,0,1)*rhou1_B0(0,0,1)*AVG_2_2_LEV_42 +
      U2_B0(0,0,1)*rhou2_B0(0,0,1)*AVG_2_2_LEV_43)*detJ_B0(0,0,1);

   CS_03 = rho_B0(0,0,1)*AVG_2_2_LEV_00 + rhou1_B0(0,0,1)*AVG_2_2_LEV_02;

   CS_13 = rho_B0(0,0,1)*AVG_2_2_LEV_10 + rhou0_B0(0,0,1)*AVG_2_2_LEV_11;

    CS_23 = rho_B0(0,0,1)*AVG_2_2_LEV_20 + rhoE_B0(0,0,1)*AVG_2_2_LEV_24 + rhou0_B0(0,0,1)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,1)*AVG_2_2_LEV_22 + rhou2_B0(0,0,1)*AVG_2_2_LEV_23;

    CS_33 = rho_B0(0,0,1)*AVG_2_2_LEV_30 + rhoE_B0(0,0,1)*AVG_2_2_LEV_34 + rhou0_B0(0,0,1)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,1)*AVG_2_2_LEV_32 + rhou2_B0(0,0,1)*AVG_2_2_LEV_33;

    CS_43 = rho_B0(0,0,1)*AVG_2_2_LEV_40 + rhoE_B0(0,0,1)*AVG_2_2_LEV_44 + rhou0_B0(0,0,1)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,1)*AVG_2_2_LEV_42 + rhou2_B0(0,0,1)*AVG_2_2_LEV_43;

   CF_04 = (rho_B0(0,0,2)*AVG_2_2_LEV_00 + rhou1_B0(0,0,2)*AVG_2_2_LEV_02)*U2_B0(0,0,2)*detJ_B0(0,0,2);

   CF_14 = (rho_B0(0,0,2)*AVG_2_2_LEV_10 + rhou0_B0(0,0,2)*AVG_2_2_LEV_11)*U2_B0(0,0,2)*detJ_B0(0,0,2);

    CF_24 = (p_B0(0,0,2)*AVG_2_2_LEV_23 + p_B0(0,0,2)*U2_B0(0,0,2)*AVG_2_2_LEV_24 +
      U2_B0(0,0,2)*rho_B0(0,0,2)*AVG_2_2_LEV_20 + U2_B0(0,0,2)*rhoE_B0(0,0,2)*AVG_2_2_LEV_24 +
      U2_B0(0,0,2)*rhou0_B0(0,0,2)*AVG_2_2_LEV_21 + U2_B0(0,0,2)*rhou1_B0(0,0,2)*AVG_2_2_LEV_22 +
      U2_B0(0,0,2)*rhou2_B0(0,0,2)*AVG_2_2_LEV_23)*detJ_B0(0,0,2);

    CF_34 = (p_B0(0,0,2)*AVG_2_2_LEV_33 + p_B0(0,0,2)*U2_B0(0,0,2)*AVG_2_2_LEV_34 +
      U2_B0(0,0,2)*rho_B0(0,0,2)*AVG_2_2_LEV_30 + U2_B0(0,0,2)*rhoE_B0(0,0,2)*AVG_2_2_LEV_34 +
      U2_B0(0,0,2)*rhou0_B0(0,0,2)*AVG_2_2_LEV_31 + U2_B0(0,0,2)*rhou1_B0(0,0,2)*AVG_2_2_LEV_32 +
      U2_B0(0,0,2)*rhou2_B0(0,0,2)*AVG_2_2_LEV_33)*detJ_B0(0,0,2);

    CF_44 = (p_B0(0,0,2)*AVG_2_2_LEV_43 + p_B0(0,0,2)*U2_B0(0,0,2)*AVG_2_2_LEV_44 +
      U2_B0(0,0,2)*rho_B0(0,0,2)*AVG_2_2_LEV_40 + U2_B0(0,0,2)*rhoE_B0(0,0,2)*AVG_2_2_LEV_44 +
      U2_B0(0,0,2)*rhou0_B0(0,0,2)*AVG_2_2_LEV_41 + U2_B0(0,0,2)*rhou1_B0(0,0,2)*AVG_2_2_LEV_42 +
      U2_B0(0,0,2)*rhou2_B0(0,0,2)*AVG_2_2_LEV_43)*detJ_B0(0,0,2);

   CS_04 = rho_B0(0,0,2)*AVG_2_2_LEV_00 + rhou1_B0(0,0,2)*AVG_2_2_LEV_02;

   CS_14 = rho_B0(0,0,2)*AVG_2_2_LEV_10 + rhou0_B0(0,0,2)*AVG_2_2_LEV_11;

    CS_24 = rho_B0(0,0,2)*AVG_2_2_LEV_20 + rhoE_B0(0,0,2)*AVG_2_2_LEV_24 + rhou0_B0(0,0,2)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,2)*AVG_2_2_LEV_22 + rhou2_B0(0,0,2)*AVG_2_2_LEV_23;

    CS_34 = rho_B0(0,0,2)*AVG_2_2_LEV_30 + rhoE_B0(0,0,2)*AVG_2_2_LEV_34 + rhou0_B0(0,0,2)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,2)*AVG_2_2_LEV_32 + rhou2_B0(0,0,2)*AVG_2_2_LEV_33;

    CS_44 = rho_B0(0,0,2)*AVG_2_2_LEV_40 + rhoE_B0(0,0,2)*AVG_2_2_LEV_44 + rhou0_B0(0,0,2)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,2)*AVG_2_2_LEV_42 + rhou2_B0(0,0,2)*AVG_2_2_LEV_43;

   CF_05 = (rho_B0(0,0,3)*AVG_2_2_LEV_00 + rhou1_B0(0,0,3)*AVG_2_2_LEV_02)*U2_B0(0,0,3)*detJ_B0(0,0,3);

   CF_15 = (rho_B0(0,0,3)*AVG_2_2_LEV_10 + rhou0_B0(0,0,3)*AVG_2_2_LEV_11)*U2_B0(0,0,3)*detJ_B0(0,0,3);

    CF_25 = (p_B0(0,0,3)*AVG_2_2_LEV_23 + p_B0(0,0,3)*U2_B0(0,0,3)*AVG_2_2_LEV_24 +
      U2_B0(0,0,3)*rho_B0(0,0,3)*AVG_2_2_LEV_20 + U2_B0(0,0,3)*rhoE_B0(0,0,3)*AVG_2_2_LEV_24 +
      U2_B0(0,0,3)*rhou0_B0(0,0,3)*AVG_2_2_LEV_21 + U2_B0(0,0,3)*rhou1_B0(0,0,3)*AVG_2_2_LEV_22 +
      U2_B0(0,0,3)*rhou2_B0(0,0,3)*AVG_2_2_LEV_23)*detJ_B0(0,0,3);

    CF_35 = (p_B0(0,0,3)*AVG_2_2_LEV_33 + p_B0(0,0,3)*U2_B0(0,0,3)*AVG_2_2_LEV_34 +
      U2_B0(0,0,3)*rho_B0(0,0,3)*AVG_2_2_LEV_30 + U2_B0(0,0,3)*rhoE_B0(0,0,3)*AVG_2_2_LEV_34 +
      U2_B0(0,0,3)*rhou0_B0(0,0,3)*AVG_2_2_LEV_31 + U2_B0(0,0,3)*rhou1_B0(0,0,3)*AVG_2_2_LEV_32 +
      U2_B0(0,0,3)*rhou2_B0(0,0,3)*AVG_2_2_LEV_33)*detJ_B0(0,0,3);

    CF_45 = (p_B0(0,0,3)*AVG_2_2_LEV_43 + p_B0(0,0,3)*U2_B0(0,0,3)*AVG_2_2_LEV_44 +
      U2_B0(0,0,3)*rho_B0(0,0,3)*AVG_2_2_LEV_40 + U2_B0(0,0,3)*rhoE_B0(0,0,3)*AVG_2_2_LEV_44 +
      U2_B0(0,0,3)*rhou0_B0(0,0,3)*AVG_2_2_LEV_41 + U2_B0(0,0,3)*rhou1_B0(0,0,3)*AVG_2_2_LEV_42 +
      U2_B0(0,0,3)*rhou2_B0(0,0,3)*AVG_2_2_LEV_43)*detJ_B0(0,0,3);

   CS_05 = rho_B0(0,0,3)*AVG_2_2_LEV_00 + rhou1_B0(0,0,3)*AVG_2_2_LEV_02;

   CS_15 = rho_B0(0,0,3)*AVG_2_2_LEV_10 + rhou0_B0(0,0,3)*AVG_2_2_LEV_11;

    CS_25 = rho_B0(0,0,3)*AVG_2_2_LEV_20 + rhoE_B0(0,0,3)*AVG_2_2_LEV_24 + rhou0_B0(0,0,3)*AVG_2_2_LEV_21 +
      rhou1_B0(0,0,3)*AVG_2_2_LEV_22 + rhou2_B0(0,0,3)*AVG_2_2_LEV_23;

    CS_35 = rho_B0(0,0,3)*AVG_2_2_LEV_30 + rhoE_B0(0,0,3)*AVG_2_2_LEV_34 + rhou0_B0(0,0,3)*AVG_2_2_LEV_31 +
      rhou1_B0(0,0,3)*AVG_2_2_LEV_32 + rhou2_B0(0,0,3)*AVG_2_2_LEV_33;

    CS_45 = rho_B0(0,0,3)*AVG_2_2_LEV_40 + rhoE_B0(0,0,3)*AVG_2_2_LEV_44 + rhou0_B0(0,0,3)*AVG_2_2_LEV_41 +
      rhou1_B0(0,0,3)*AVG_2_2_LEV_42 + rhou2_B0(0,0,3)*AVG_2_2_LEV_43;

   max_lambda_00 = shock_filter_control*fmax(fabs(u2_B0(0,0,1)*detJ_B0(0,0,1)), fabs(u2_B0(0,0,0)*detJ_B0(0,0,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(a_B0(0,0,1)*detJ_B0(0,0,1) + u2_B0(0,0,1)*detJ_B0(0,0,1)),
      fabs(a_B0(0,0,0)*detJ_B0(0,0,0) + u2_B0(0,0,0)*detJ_B0(0,0,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(a_B0(0,0,0)*detJ_B0(0,0,0) - u2_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(a_B0(0,0,1)*detJ_B0(0,0,1) - u2_B0(0,0,1)*detJ_B0(0,0,1)));

    TENO_CT = pow(10.0, -floor(-(1 - ((1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 - kappa_B0(0,0,0))*(1 -
      kappa_B0(0,0,0)))*(1 + 4*kappa_B0(0,0,0)))*teno_a2 + teno_a1));

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 +
      CF_03))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) - (1.0/2.0)*(CS_03*max_lambda_00 + CF_03))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 + CF_03) -
      (CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(CS_03*max_lambda_00 +
      CF_03) - (CS_02*max_lambda_00 + CF_02)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 + CF_03) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - 2*(CS_03*max_lambda_00 +
      CF_03) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(CS_02*max_lambda_00 +
      CF_02) + ((1.0/2.0))*(CS_04*max_lambda_00 + CF_04) - (CS_03*max_lambda_00 + CF_03)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 + CF_01) +
      ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))*(((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) - 2*(CS_01*max_lambda_00 +
      CF_01) + ((3.0/2.0))*(CS_02*max_lambda_00 + CF_02))) + ((13.0/12.0))*((((1.0/2.0))*(CS_00*max_lambda_00 + CF_00) +
      ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01))*(((1.0/2.0))*(CS_00*max_lambda_00 +
      CF_00) + ((1.0/2.0))*(CS_02*max_lambda_00 + CF_02) - (CS_01*max_lambda_00 + CF_01)));

    beta_3 = -(781.0/480.0)*(CS_04*max_lambda_00 + CF_04) - (781.0/1440.0)*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/36.0))*((9*(CS_03*max_lambda_00 + CF_03) - (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) -
      (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05)*(9*(CS_03*max_lambda_00 + CF_03) -
      (11.0/2.0)*(CS_02*max_lambda_00 + CF_02) - (9.0/2.0)*(CS_04*max_lambda_00 + CF_04) + CS_05*max_lambda_00 + CF_05))
      + ((13.0/12.0))*((2*(CS_04*max_lambda_00 + CF_04) - (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) -
      (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02)*(2*(CS_04*max_lambda_00 + CF_04) -
      (5.0/2.0)*(CS_03*max_lambda_00 + CF_03) - (1.0/2.0)*(CS_05*max_lambda_00 + CF_05) + CS_02*max_lambda_00 + CF_02))
      + ((781.0/480.0))*(CS_03*max_lambda_00 + CF_03) + ((781.0/1440.0))*(CS_05*max_lambda_00 + CF_05);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(CS_03*max_lambda_00 + CF_03))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/8.0))*(CS_02*max_lambda_00 + CF_02) +
      ((1.0/24.0))*(CS_05*max_lambda_00 + CF_05) + ((13.0/24.0))*(CS_03*max_lambda_00 + CF_03))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_00*max_lambda_00 + CF_00) +
      ((11.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(CS_02*max_lambda_00 + CF_02))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_04*max_lambda_00 + CF_04))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 + CF_04) -
      (-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_04*max_lambda_00 +
      CF_04) - (-CS_03*max_lambda_00 + CF_03)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00 + CF_02) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) - 2*(-CS_02*max_lambda_00
      + CF_02) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (-CS_02*max_lambda_00 +
      CF_02))*(((1.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) -
      (-CS_02*max_lambda_00 + CF_02)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00 + CF_04) +
      ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - 2*(-CS_04*max_lambda_00
      + CF_04) + ((3.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 +
      CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) - (-CS_04*max_lambda_00 +
      CF_04))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(-CS_05*max_lambda_00 + CF_05) -
      (-CS_04*max_lambda_00 + CF_04)));

    beta_3 = ((1.0/36.0))*((-(-CS_00*max_lambda_00 + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) +
      ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) + ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))*(-(-CS_00*max_lambda_00
      + CF_00) - 9*(-CS_02*max_lambda_00 + CF_02) + ((9.0/2.0))*(-CS_01*max_lambda_00 + CF_01) +
      ((11.0/2.0))*(-CS_03*max_lambda_00 + CF_03))) + ((13.0/12.0))*((2*(-CS_01*max_lambda_00 + CF_01) -
      (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) - (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 +
      CF_03)*(2*(-CS_01*max_lambda_00 + CF_01) - (5.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) - CS_03*max_lambda_00 + CF_03)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01))*(((1.0/2.0))*(-CS_03*max_lambda_00 + CF_03) - (3.0/2.0)*(-CS_02*max_lambda_00 + CF_02) -
      (1.0/2.0)*(-CS_00*max_lambda_00 + CF_00) + ((3.0/2.0))*(-CS_01*max_lambda_00 + CF_01)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_0 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((5.0/12.0))*(-CS_02*max_lambda_00 + CF_02))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_01*max_lambda_00 + CF_01) + ((1.0/8.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((1.0/24.0))*(-CS_00*max_lambda_00 + CF_00) + ((13.0/24.0))*(-CS_02*max_lambda_00 + CF_02))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_05*max_lambda_00 + CF_05) +
      ((11.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*delta_0*inv_omega_sum + Recon_0;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 +
      CF_13))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) - (1.0/2.0)*(CS_13*max_lambda_11 + CF_13))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 + CF_13) -
      (CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(CS_13*max_lambda_11 +
      CF_13) - (CS_12*max_lambda_11 + CF_12)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 + CF_13) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - 2*(CS_13*max_lambda_11 +
      CF_13) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(CS_12*max_lambda_11 +
      CF_12) + ((1.0/2.0))*(CS_14*max_lambda_11 + CF_14) - (CS_13*max_lambda_11 + CF_13)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 + CF_11) +
      ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))*(((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) - 2*(CS_11*max_lambda_11 +
      CF_11) + ((3.0/2.0))*(CS_12*max_lambda_11 + CF_12))) + ((13.0/12.0))*((((1.0/2.0))*(CS_10*max_lambda_11 + CF_10) +
      ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11))*(((1.0/2.0))*(CS_10*max_lambda_11 +
      CF_10) + ((1.0/2.0))*(CS_12*max_lambda_11 + CF_12) - (CS_11*max_lambda_11 + CF_11)));

    beta_3 = -(781.0/480.0)*(CS_14*max_lambda_11 + CF_14) - (781.0/1440.0)*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/36.0))*((9*(CS_13*max_lambda_11 + CF_13) - (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) -
      (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15)*(9*(CS_13*max_lambda_11 + CF_13) -
      (11.0/2.0)*(CS_12*max_lambda_11 + CF_12) - (9.0/2.0)*(CS_14*max_lambda_11 + CF_14) + CS_15*max_lambda_11 + CF_15))
      + ((13.0/12.0))*((2*(CS_14*max_lambda_11 + CF_14) - (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) -
      (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12)*(2*(CS_14*max_lambda_11 + CF_14) -
      (5.0/2.0)*(CS_13*max_lambda_11 + CF_13) - (1.0/2.0)*(CS_15*max_lambda_11 + CF_15) + CS_12*max_lambda_11 + CF_12))
      + ((781.0/480.0))*(CS_13*max_lambda_11 + CF_13) + ((781.0/1440.0))*(CS_15*max_lambda_11 + CF_15);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(CS_13*max_lambda_11 + CF_13))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/8.0))*(CS_12*max_lambda_11 + CF_12) +
      ((1.0/24.0))*(CS_15*max_lambda_11 + CF_15) + ((13.0/24.0))*(CS_13*max_lambda_11 + CF_13))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_10*max_lambda_11 + CF_10) +
      ((11.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(CS_12*max_lambda_11 + CF_12))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_14*max_lambda_11 + CF_14))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 + CF_14) -
      (-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_14*max_lambda_11 +
      CF_14) - (-CS_13*max_lambda_11 + CF_13)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11 + CF_12) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) - 2*(-CS_12*max_lambda_11
      + CF_12) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (-CS_12*max_lambda_11 +
      CF_12))*(((1.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) -
      (-CS_12*max_lambda_11 + CF_12)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11 + CF_14) +
      ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - 2*(-CS_14*max_lambda_11
      + CF_14) + ((3.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 +
      CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) - (-CS_14*max_lambda_11 +
      CF_14))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(-CS_15*max_lambda_11 + CF_15) -
      (-CS_14*max_lambda_11 + CF_14)));

    beta_3 = ((1.0/36.0))*((-(-CS_10*max_lambda_11 + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) +
      ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) + ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))*(-(-CS_10*max_lambda_11
      + CF_10) - 9*(-CS_12*max_lambda_11 + CF_12) + ((9.0/2.0))*(-CS_11*max_lambda_11 + CF_11) +
      ((11.0/2.0))*(-CS_13*max_lambda_11 + CF_13))) + ((13.0/12.0))*((2*(-CS_11*max_lambda_11 + CF_11) -
      (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) - (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 +
      CF_13)*(2*(-CS_11*max_lambda_11 + CF_11) - (5.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) - CS_13*max_lambda_11 + CF_13)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11))*(((1.0/2.0))*(-CS_13*max_lambda_11 + CF_13) - (3.0/2.0)*(-CS_12*max_lambda_11 + CF_12) -
      (1.0/2.0)*(-CS_10*max_lambda_11 + CF_10) + ((3.0/2.0))*(-CS_11*max_lambda_11 + CF_11)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_1 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((5.0/12.0))*(-CS_12*max_lambda_11 + CF_12))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_11*max_lambda_11 + CF_11) + ((1.0/8.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((1.0/24.0))*(-CS_10*max_lambda_11 + CF_10) + ((13.0/24.0))*(-CS_12*max_lambda_11 + CF_12))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_15*max_lambda_11 + CF_15) +
      ((11.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*delta_0*inv_omega_sum + Recon_1;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 +
      CF_23))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) - (1.0/2.0)*(CS_23*max_lambda_22 + CF_23))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 + CF_23) -
      (CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(CS_23*max_lambda_22 +
      CF_23) - (CS_22*max_lambda_22 + CF_22)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 + CF_23) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - 2*(CS_23*max_lambda_22 +
      CF_23) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(CS_22*max_lambda_22 +
      CF_22) + ((1.0/2.0))*(CS_24*max_lambda_22 + CF_24) - (CS_23*max_lambda_22 + CF_23)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 + CF_21) +
      ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))*(((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) - 2*(CS_21*max_lambda_22 +
      CF_21) + ((3.0/2.0))*(CS_22*max_lambda_22 + CF_22))) + ((13.0/12.0))*((((1.0/2.0))*(CS_20*max_lambda_22 + CF_20) +
      ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21))*(((1.0/2.0))*(CS_20*max_lambda_22 +
      CF_20) + ((1.0/2.0))*(CS_22*max_lambda_22 + CF_22) - (CS_21*max_lambda_22 + CF_21)));

    beta_3 = -(781.0/480.0)*(CS_24*max_lambda_22 + CF_24) - (781.0/1440.0)*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/36.0))*((9*(CS_23*max_lambda_22 + CF_23) - (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) -
      (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25)*(9*(CS_23*max_lambda_22 + CF_23) -
      (11.0/2.0)*(CS_22*max_lambda_22 + CF_22) - (9.0/2.0)*(CS_24*max_lambda_22 + CF_24) + CS_25*max_lambda_22 + CF_25))
      + ((13.0/12.0))*((2*(CS_24*max_lambda_22 + CF_24) - (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) -
      (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22)*(2*(CS_24*max_lambda_22 + CF_24) -
      (5.0/2.0)*(CS_23*max_lambda_22 + CF_23) - (1.0/2.0)*(CS_25*max_lambda_22 + CF_25) + CS_22*max_lambda_22 + CF_22))
      + ((781.0/480.0))*(CS_23*max_lambda_22 + CF_23) + ((781.0/1440.0))*(CS_25*max_lambda_22 + CF_25);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(CS_23*max_lambda_22 + CF_23))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/8.0))*(CS_22*max_lambda_22 + CF_22) +
      ((1.0/24.0))*(CS_25*max_lambda_22 + CF_25) + ((13.0/24.0))*(CS_23*max_lambda_22 + CF_23))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_20*max_lambda_22 + CF_20) +
      ((11.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(CS_22*max_lambda_22 + CF_22))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_24*max_lambda_22 + CF_24))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 + CF_24) -
      (-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_24*max_lambda_22 +
      CF_24) - (-CS_23*max_lambda_22 + CF_23)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22 + CF_22) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) - 2*(-CS_22*max_lambda_22
      + CF_22) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (-CS_22*max_lambda_22 +
      CF_22))*(((1.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) -
      (-CS_22*max_lambda_22 + CF_22)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22 + CF_24) +
      ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - 2*(-CS_24*max_lambda_22
      + CF_24) + ((3.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 +
      CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) - (-CS_24*max_lambda_22 +
      CF_24))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(-CS_25*max_lambda_22 + CF_25) -
      (-CS_24*max_lambda_22 + CF_24)));

    beta_3 = ((1.0/36.0))*((-(-CS_20*max_lambda_22 + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) +
      ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) + ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))*(-(-CS_20*max_lambda_22
      + CF_20) - 9*(-CS_22*max_lambda_22 + CF_22) + ((9.0/2.0))*(-CS_21*max_lambda_22 + CF_21) +
      ((11.0/2.0))*(-CS_23*max_lambda_22 + CF_23))) + ((13.0/12.0))*((2*(-CS_21*max_lambda_22 + CF_21) -
      (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) - (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 +
      CF_23)*(2*(-CS_21*max_lambda_22 + CF_21) - (5.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) - CS_23*max_lambda_22 + CF_23)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21))*(((1.0/2.0))*(-CS_23*max_lambda_22 + CF_23) - (3.0/2.0)*(-CS_22*max_lambda_22 + CF_22) -
      (1.0/2.0)*(-CS_20*max_lambda_22 + CF_20) + ((3.0/2.0))*(-CS_21*max_lambda_22 + CF_21)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_2 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((5.0/12.0))*(-CS_22*max_lambda_22 + CF_22))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_21*max_lambda_22 + CF_21) + ((1.0/8.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((1.0/24.0))*(-CS_20*max_lambda_22 + CF_20) + ((13.0/24.0))*(-CS_22*max_lambda_22 + CF_22))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_25*max_lambda_22 + CF_25) +
      ((11.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*delta_0*inv_omega_sum + Recon_2;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 +
      CF_33))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) - (1.0/2.0)*(CS_33*max_lambda_33 + CF_33))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 + CF_33) -
      (CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(CS_33*max_lambda_33 +
      CF_33) - (CS_32*max_lambda_33 + CF_32)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 + CF_33) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - 2*(CS_33*max_lambda_33 +
      CF_33) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(CS_32*max_lambda_33 +
      CF_32) + ((1.0/2.0))*(CS_34*max_lambda_33 + CF_34) - (CS_33*max_lambda_33 + CF_33)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 + CF_31) +
      ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))*(((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) - 2*(CS_31*max_lambda_33 +
      CF_31) + ((3.0/2.0))*(CS_32*max_lambda_33 + CF_32))) + ((13.0/12.0))*((((1.0/2.0))*(CS_30*max_lambda_33 + CF_30) +
      ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31))*(((1.0/2.0))*(CS_30*max_lambda_33 +
      CF_30) + ((1.0/2.0))*(CS_32*max_lambda_33 + CF_32) - (CS_31*max_lambda_33 + CF_31)));

    beta_3 = -(781.0/480.0)*(CS_34*max_lambda_33 + CF_34) - (781.0/1440.0)*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/36.0))*((9*(CS_33*max_lambda_33 + CF_33) - (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) -
      (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35)*(9*(CS_33*max_lambda_33 + CF_33) -
      (11.0/2.0)*(CS_32*max_lambda_33 + CF_32) - (9.0/2.0)*(CS_34*max_lambda_33 + CF_34) + CS_35*max_lambda_33 + CF_35))
      + ((13.0/12.0))*((2*(CS_34*max_lambda_33 + CF_34) - (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) -
      (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32)*(2*(CS_34*max_lambda_33 + CF_34) -
      (5.0/2.0)*(CS_33*max_lambda_33 + CF_33) - (1.0/2.0)*(CS_35*max_lambda_33 + CF_35) + CS_32*max_lambda_33 + CF_32))
      + ((781.0/480.0))*(CS_33*max_lambda_33 + CF_33) + ((781.0/1440.0))*(CS_35*max_lambda_33 + CF_35);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(CS_33*max_lambda_33 + CF_33))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/8.0))*(CS_32*max_lambda_33 + CF_32) +
      ((1.0/24.0))*(CS_35*max_lambda_33 + CF_35) + ((13.0/24.0))*(CS_33*max_lambda_33 + CF_33))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_30*max_lambda_33 + CF_30) +
      ((11.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(CS_32*max_lambda_33 + CF_32))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_34*max_lambda_33 + CF_34))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 + CF_34) -
      (-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_34*max_lambda_33 +
      CF_34) - (-CS_33*max_lambda_33 + CF_33)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33 + CF_32) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) - 2*(-CS_32*max_lambda_33
      + CF_32) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (-CS_32*max_lambda_33 +
      CF_32))*(((1.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) -
      (-CS_32*max_lambda_33 + CF_32)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33 + CF_34) +
      ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - 2*(-CS_34*max_lambda_33
      + CF_34) + ((3.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 +
      CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) - (-CS_34*max_lambda_33 +
      CF_34))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(-CS_35*max_lambda_33 + CF_35) -
      (-CS_34*max_lambda_33 + CF_34)));

    beta_3 = ((1.0/36.0))*((-(-CS_30*max_lambda_33 + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) +
      ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) + ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))*(-(-CS_30*max_lambda_33
      + CF_30) - 9*(-CS_32*max_lambda_33 + CF_32) + ((9.0/2.0))*(-CS_31*max_lambda_33 + CF_31) +
      ((11.0/2.0))*(-CS_33*max_lambda_33 + CF_33))) + ((13.0/12.0))*((2*(-CS_31*max_lambda_33 + CF_31) -
      (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) - (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 +
      CF_33)*(2*(-CS_31*max_lambda_33 + CF_31) - (5.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) - CS_33*max_lambda_33 + CF_33)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31))*(((1.0/2.0))*(-CS_33*max_lambda_33 + CF_33) - (3.0/2.0)*(-CS_32*max_lambda_33 + CF_32) -
      (1.0/2.0)*(-CS_30*max_lambda_33 + CF_30) + ((3.0/2.0))*(-CS_31*max_lambda_33 + CF_31)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_3 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_31*max_lambda_33 + CF_31) + ((1.0/8.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((1.0/24.0))*(-CS_30*max_lambda_33 + CF_30) + ((13.0/24.0))*(-CS_32*max_lambda_33 + CF_32))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*delta_0*inv_omega_sum + Recon_3;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 +
      CF_43))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) - (1.0/2.0)*(CS_43*max_lambda_44 + CF_43))) +
      ((13.0/12.0))*((((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 + CF_43) -
      (CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(CS_43*max_lambda_44 +
      CF_43) - (CS_42*max_lambda_44 + CF_42)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 + CF_43) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - 2*(CS_43*max_lambda_44 +
      CF_43) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(CS_42*max_lambda_44 +
      CF_42) + ((1.0/2.0))*(CS_44*max_lambda_44 + CF_44) - (CS_43*max_lambda_44 + CF_43)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 + CF_41) +
      ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))*(((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) - 2*(CS_41*max_lambda_44 +
      CF_41) + ((3.0/2.0))*(CS_42*max_lambda_44 + CF_42))) + ((13.0/12.0))*((((1.0/2.0))*(CS_40*max_lambda_44 + CF_40) +
      ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41))*(((1.0/2.0))*(CS_40*max_lambda_44 +
      CF_40) + ((1.0/2.0))*(CS_42*max_lambda_44 + CF_42) - (CS_41*max_lambda_44 + CF_41)));

    beta_3 = -(781.0/480.0)*(CS_44*max_lambda_44 + CF_44) - (781.0/1440.0)*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/36.0))*((9*(CS_43*max_lambda_44 + CF_43) - (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) -
      (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45)*(9*(CS_43*max_lambda_44 + CF_43) -
      (11.0/2.0)*(CS_42*max_lambda_44 + CF_42) - (9.0/2.0)*(CS_44*max_lambda_44 + CF_44) + CS_45*max_lambda_44 + CF_45))
      + ((13.0/12.0))*((2*(CS_44*max_lambda_44 + CF_44) - (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) -
      (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42)*(2*(CS_44*max_lambda_44 + CF_44) -
      (5.0/2.0)*(CS_43*max_lambda_44 + CF_43) - (1.0/2.0)*(CS_45*max_lambda_44 + CF_45) + CS_42*max_lambda_44 + CF_42))
      + ((781.0/480.0))*(CS_43*max_lambda_44 + CF_43) + ((781.0/1440.0))*(CS_45*max_lambda_44 + CF_45);

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(CS_43*max_lambda_44 + CF_43))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/8.0))*(CS_42*max_lambda_44 + CF_42) +
      ((1.0/24.0))*(CS_45*max_lambda_44 + CF_45) + ((13.0/24.0))*(CS_43*max_lambda_44 + CF_43))*delta_3*inv_omega_sum +
      ((27.0/500.0))*(-(7.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_40*max_lambda_44 + CF_40) +
      ((11.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(CS_42*max_lambda_44 + CF_42))*delta_0*inv_omega_sum + Recon_4;

    beta_0 = ((1.0/4.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_44*max_lambda_44 + CF_44))) +
      ((13.0/12.0))*((((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 + CF_44) -
      (-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_44*max_lambda_44 +
      CF_44) - (-CS_43*max_lambda_44 + CF_43)));

    beta_1 = ((1.0/4.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44 + CF_42) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) - 2*(-CS_42*max_lambda_44
      + CF_42) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (-CS_42*max_lambda_44 +
      CF_42))*(((1.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) -
      (-CS_42*max_lambda_44 + CF_42)));

    beta_2 = ((1.0/4.0))*((((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44 + CF_44) +
      ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - 2*(-CS_44*max_lambda_44
      + CF_44) + ((3.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 +
      CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) - (-CS_44*max_lambda_44 +
      CF_44))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(-CS_45*max_lambda_44 + CF_45) -
      (-CS_44*max_lambda_44 + CF_44)));

    beta_3 = ((1.0/36.0))*((-(-CS_40*max_lambda_44 + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) +
      ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) + ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))*(-(-CS_40*max_lambda_44
      + CF_40) - 9*(-CS_42*max_lambda_44 + CF_42) + ((9.0/2.0))*(-CS_41*max_lambda_44 + CF_41) +
      ((11.0/2.0))*(-CS_43*max_lambda_44 + CF_43))) + ((13.0/12.0))*((2*(-CS_41*max_lambda_44 + CF_41) -
      (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) - (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 +
      CF_43)*(2*(-CS_41*max_lambda_44 + CF_41) - (5.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) - CS_43*max_lambda_44 + CF_43)) +
      ((781.0/720.0))*((((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41))*(((1.0/2.0))*(-CS_43*max_lambda_44 + CF_43) - (3.0/2.0)*(-CS_42*max_lambda_44 + CF_42) -
      (1.0/2.0)*(-CS_40*max_lambda_44 + CF_40) + ((3.0/2.0))*(-CS_41*max_lambda_44 + CF_41)));

   inv_beta_0 = 1.0/(eps + beta_0);

   inv_beta_1 = 1.0/(eps + beta_1);

   inv_beta_2 = 1.0/(eps + beta_2);

   inv_beta_3 = 1.0/(eps + beta_3);

    alpha_0 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_0));

    alpha_1 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_1));

    alpha_2 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_2));

    alpha_3 = ((1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 +
      fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 -
      (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 +
      ((1.0/6.0))*beta_0 + ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3)*(1 + fabs(-beta_3 - (2.0/3.0)*beta_1 + ((1.0/6.0))*beta_0 +
      ((1.0/6.0))*beta_2)*inv_beta_3));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2 + alpha_3));

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_3 = ((alpha_3*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

    inv_omega_sum = 1.0/((((3.0/10.0))*delta_1 + ((23.0/125.0))*delta_3 + ((27.0/500.0))*delta_2 +
      ((231.0/500.0))*delta_0));

    Recon_4 = ((3.0/10.0))*(-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*delta_1*inv_omega_sum +
      ((23.0/125.0))*(-(5.0/24.0)*(-CS_41*max_lambda_44 + CF_41) + ((1.0/8.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((1.0/24.0))*(-CS_40*max_lambda_44 + CF_40) + ((13.0/24.0))*(-CS_42*max_lambda_44 + CF_42))*delta_3*inv_omega_sum
      + ((27.0/500.0))*(-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_2*inv_omega_sum +
      ((231.0/500.0))*(-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*delta_0*inv_omega_sum + Recon_4;

    wk10_B0(0,0,0) = 0.707106781186547*AVG_2_rho*Recon_3*inv_AVG_a + 0.707106781186547*AVG_2_rho*Recon_4*inv_AVG_a +
      Recon_2;

    wk11_B0(0,0,0) = AVG_2_u0*Recon_2 - AVG_2_rho*Recon_1 + 0.707106781186547*AVG_2_rho*AVG_2_u0*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_2_rho*AVG_2_u0*Recon_4*inv_AVG_a;

    wk12_B0(0,0,0) = AVG_2_rho*Recon_0 + AVG_2_u1*Recon_2 + 0.707106781186547*AVG_2_rho*AVG_2_u1*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_2_rho*AVG_2_u1*Recon_4*inv_AVG_a;

    wk13_B0(0,0,0) = AVG_2_u2*Recon_2 + 0.707106781186547*(-AVG_2_a + AVG_2_u2)*AVG_2_rho*Recon_4*inv_AVG_a +
      0.707106781186547*(AVG_2_a + AVG_2_u2)*AVG_2_rho*Recon_3*inv_AVG_a;

    wk14_B0(0,0,0) = (((1.0/2.0))*(AVG_2_u0*AVG_2_u0) + ((1.0/2.0))*(AVG_2_u1*AVG_2_u1) +
      ((1.0/2.0))*(AVG_2_u2*AVG_2_u2))*Recon_2 + AVG_2_rho*AVG_2_u1*Recon_0 - AVG_2_rho*AVG_2_u0*Recon_1 +
      0.707106781186547*(((AVG_2_a*AVG_2_a) + ((1.0/2.0))*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) +
      (AVG_2_u2*AVG_2_u2))*gamma_m1)*invgamma_m1 + AVG_2_a*AVG_2_u2)*AVG_2_rho*Recon_3*inv_AVG_a +
      0.707106781186547*(((AVG_2_a*AVG_2_a) + ((1.0/2.0))*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) +
      (AVG_2_u2*AVG_2_u2))*gamma_m1)*invgamma_m1 - AVG_2_a*AVG_2_u2)*AVG_2_rho*Recon_4*inv_AVG_a;

}

 void opensbliblock00Kernel022(const ACC<double> &detJ_B0, const ACC<double> &wk0_B0, const ACC<double> &wk10_B0, const
ACC<double> &wk11_B0, const ACC<double> &wk12_B0, const ACC<double> &wk13_B0, const ACC<double> &wk14_B0, const
ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double>
&wk5_B0, const ACC<double> &wk6_B0, const ACC<double> &wk7_B0, const ACC<double> &wk8_B0, const ACC<double> &wk9_B0,
ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, ACC<double>
&Residual4_B0)
{
    Residual0_B0(0,0,0) = -((-wk0_B0(-1,0,0) + wk0_B0(0,0,0))*invDelta0block0 + (-wk5_B0(0,-1,0) +
      wk5_B0(0,0,0))*invDelta1block0 + (-wk10_B0(0,0,-1) + wk10_B0(0,0,0))*invDelta2block0)/detJ_B0(0,0,0);

    Residual1_B0(0,0,0) = -((-wk1_B0(-1,0,0) + wk1_B0(0,0,0))*invDelta0block0 + (-wk6_B0(0,-1,0) +
      wk6_B0(0,0,0))*invDelta1block0 + (-wk11_B0(0,0,-1) + wk11_B0(0,0,0))*invDelta2block0)/detJ_B0(0,0,0);

    Residual2_B0(0,0,0) = -((-wk2_B0(-1,0,0) + wk2_B0(0,0,0))*invDelta0block0 + (-wk7_B0(0,-1,0) +
      wk7_B0(0,0,0))*invDelta1block0 + (-wk12_B0(0,0,-1) + wk12_B0(0,0,0))*invDelta2block0)/detJ_B0(0,0,0);

    Residual3_B0(0,0,0) = -((-wk3_B0(-1,0,0) + wk3_B0(0,0,0))*invDelta0block0 + (-wk8_B0(0,-1,0) +
      wk8_B0(0,0,0))*invDelta1block0 + (-wk13_B0(0,0,-1) + wk13_B0(0,0,0))*invDelta2block0)/detJ_B0(0,0,0);

    Residual4_B0(0,0,0) = -((-wk4_B0(-1,0,0) + wk4_B0(0,0,0))*invDelta0block0 + (-wk9_B0(0,-1,0) +
      wk9_B0(0,0,0))*invDelta1block0 + (-wk14_B0(0,0,-1) + wk14_B0(0,0,0))*invDelta2block0)/detJ_B0(0,0,0);

}

void opensbliblock00Kernel033(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
{
   if (idx[0] == 0){

       wk0_B0(0,0,0) = (-3*u0_B0(2,0,0) + 4*u0_B0(1,0,0) - (25.0/12.0)*u0_B0(0,0,0) - (1.0/4.0)*u0_B0(4,0,0) +
            ((4.0/3.0))*u0_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk0_B0(0,0,0) = (-(5.0/6.0)*u0_B0(0,0,0) - (1.0/2.0)*u0_B0(2,0,0) - (1.0/4.0)*u0_B0(-1,0,0) +
            ((1.0/12.0))*u0_B0(3,0,0) + ((3.0/2.0))*u0_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk0_B0(0,0,0) = (-4*u0_B0(-1,0,0) + 3*u0_B0(-2,0,0) - (4.0/3.0)*u0_B0(-3,0,0) + ((1.0/4.0))*u0_B0(-4,0,0) +
            ((25.0/12.0))*u0_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk0_B0(0,0,0) = (((1.0/2.0))*u0_B0(-2,0,0) - (3.0/2.0)*u0_B0(-1,0,0) - (1.0/12.0)*u0_B0(-3,0,0) +
            ((1.0/4.0))*u0_B0(1,0,0) + ((5.0/6.0))*u0_B0(0,0,0))*invDelta0block0;

   }

   else{

       wk0_B0(0,0,0) = (-(2.0/3.0)*u0_B0(-1,0,0) - (1.0/12.0)*u0_B0(2,0,0) + ((1.0/12.0))*u0_B0(-2,0,0) +
            ((2.0/3.0))*u0_B0(1,0,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel035(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
{
   if (idx[0] == 0){

       wk1_B0(0,0,0) = (-3*u1_B0(2,0,0) + 4*u1_B0(1,0,0) - (25.0/12.0)*u1_B0(0,0,0) - (1.0/4.0)*u1_B0(4,0,0) +
            ((4.0/3.0))*u1_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk1_B0(0,0,0) = (-(5.0/6.0)*u1_B0(0,0,0) - (1.0/2.0)*u1_B0(2,0,0) - (1.0/4.0)*u1_B0(-1,0,0) +
            ((1.0/12.0))*u1_B0(3,0,0) + ((3.0/2.0))*u1_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk1_B0(0,0,0) = (-4*u1_B0(-1,0,0) + 3*u1_B0(-2,0,0) - (4.0/3.0)*u1_B0(-3,0,0) + ((1.0/4.0))*u1_B0(-4,0,0) +
            ((25.0/12.0))*u1_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk1_B0(0,0,0) = (((1.0/2.0))*u1_B0(-2,0,0) - (3.0/2.0)*u1_B0(-1,0,0) - (1.0/12.0)*u1_B0(-3,0,0) +
            ((1.0/4.0))*u1_B0(1,0,0) + ((5.0/6.0))*u1_B0(0,0,0))*invDelta0block0;

   }

   else{

       wk1_B0(0,0,0) = (-(2.0/3.0)*u1_B0(-1,0,0) - (1.0/12.0)*u1_B0(2,0,0) + ((1.0/12.0))*u1_B0(-2,0,0) +
            ((2.0/3.0))*u1_B0(1,0,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel037(const ACC<double> &u2_B0, ACC<double> &wk2_B0, const int *idx)
{
   if (idx[0] == 0){

       wk2_B0(0,0,0) = (-3*u2_B0(2,0,0) + 4*u2_B0(1,0,0) - (25.0/12.0)*u2_B0(0,0,0) - (1.0/4.0)*u2_B0(4,0,0) +
            ((4.0/3.0))*u2_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk2_B0(0,0,0) = (-(5.0/6.0)*u2_B0(0,0,0) - (1.0/2.0)*u2_B0(2,0,0) - (1.0/4.0)*u2_B0(-1,0,0) +
            ((1.0/12.0))*u2_B0(3,0,0) + ((3.0/2.0))*u2_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk2_B0(0,0,0) = (-4*u2_B0(-1,0,0) + 3*u2_B0(-2,0,0) - (4.0/3.0)*u2_B0(-3,0,0) + ((1.0/4.0))*u2_B0(-4,0,0) +
            ((25.0/12.0))*u2_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk2_B0(0,0,0) = (((1.0/2.0))*u2_B0(-2,0,0) - (3.0/2.0)*u2_B0(-1,0,0) - (1.0/12.0)*u2_B0(-3,0,0) +
            ((1.0/4.0))*u2_B0(1,0,0) + ((5.0/6.0))*u2_B0(0,0,0))*invDelta0block0;

   }

   else{

       wk2_B0(0,0,0) = (-(2.0/3.0)*u2_B0(-1,0,0) - (1.0/12.0)*u2_B0(2,0,0) + ((1.0/12.0))*u2_B0(-2,0,0) +
            ((2.0/3.0))*u2_B0(1,0,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel039(const ACC<double> &T_B0, ACC<double> &wk3_B0, const int *idx)
{
   if (idx[0] == 0){

       wk3_B0(0,0,0) = (-3*T_B0(2,0,0) + 4*T_B0(1,0,0) - (25.0/12.0)*T_B0(0,0,0) - (1.0/4.0)*T_B0(4,0,0) +
            ((4.0/3.0))*T_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk3_B0(0,0,0) = (-(5.0/6.0)*T_B0(0,0,0) - (1.0/2.0)*T_B0(2,0,0) - (1.0/4.0)*T_B0(-1,0,0) +
            ((1.0/12.0))*T_B0(3,0,0) + ((3.0/2.0))*T_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk3_B0(0,0,0) = (-4*T_B0(-1,0,0) + 3*T_B0(-2,0,0) - (4.0/3.0)*T_B0(-3,0,0) + ((1.0/4.0))*T_B0(-4,0,0) +
            ((25.0/12.0))*T_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk3_B0(0,0,0) = (((1.0/2.0))*T_B0(-2,0,0) - (3.0/2.0)*T_B0(-1,0,0) - (1.0/12.0)*T_B0(-3,0,0) +
            ((1.0/4.0))*T_B0(1,0,0) + ((5.0/6.0))*T_B0(0,0,0))*invDelta0block0;

   }

   else{

       wk3_B0(0,0,0) = (-(2.0/3.0)*T_B0(-1,0,0) - (1.0/12.0)*T_B0(2,0,0) + ((1.0/12.0))*T_B0(-2,0,0) +
            ((2.0/3.0))*T_B0(1,0,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel041(const ACC<double> &u0_B0, ACC<double> &wk4_B0, const int *idx)
{
   if (idx[1] == 0){

       wk4_B0(0,0,0) = (-3*u0_B0(0,2,0) + 4*u0_B0(0,1,0) - (25.0/12.0)*u0_B0(0,0,0) - (1.0/4.0)*u0_B0(0,4,0) +
            ((4.0/3.0))*u0_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk4_B0(0,0,0) = (-(5.0/6.0)*u0_B0(0,0,0) - (1.0/2.0)*u0_B0(0,2,0) - (1.0/4.0)*u0_B0(0,-1,0) +
            ((1.0/12.0))*u0_B0(0,3,0) + ((3.0/2.0))*u0_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk4_B0(0,0,0) = (-(2.0/3.0)*u0_B0(0,-1,0) - (1.0/12.0)*u0_B0(0,2,0) + ((1.0/12.0))*u0_B0(0,-2,0) +
            ((2.0/3.0))*u0_B0(0,1,0))*invDelta1block0;

   }

}

void opensbliblock00Kernel042(const ACC<double> &u1_B0, ACC<double> &wk5_B0, const int *idx)
{
   if (idx[1] == 0){

       wk5_B0(0,0,0) = (-3*u1_B0(0,2,0) + 4*u1_B0(0,1,0) - (25.0/12.0)*u1_B0(0,0,0) - (1.0/4.0)*u1_B0(0,4,0) +
            ((4.0/3.0))*u1_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk5_B0(0,0,0) = (-(5.0/6.0)*u1_B0(0,0,0) - (1.0/2.0)*u1_B0(0,2,0) - (1.0/4.0)*u1_B0(0,-1,0) +
            ((1.0/12.0))*u1_B0(0,3,0) + ((3.0/2.0))*u1_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk5_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,-1,0) - (1.0/12.0)*u1_B0(0,2,0) + ((1.0/12.0))*u1_B0(0,-2,0) +
            ((2.0/3.0))*u1_B0(0,1,0))*invDelta1block0;

   }

}

void opensbliblock00Kernel043(const ACC<double> &u2_B0, ACC<double> &wk6_B0, const int *idx)
{
   if (idx[1] == 0){

       wk6_B0(0,0,0) = (-3*u2_B0(0,2,0) + 4*u2_B0(0,1,0) - (25.0/12.0)*u2_B0(0,0,0) - (1.0/4.0)*u2_B0(0,4,0) +
            ((4.0/3.0))*u2_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk6_B0(0,0,0) = (-(5.0/6.0)*u2_B0(0,0,0) - (1.0/2.0)*u2_B0(0,2,0) - (1.0/4.0)*u2_B0(0,-1,0) +
            ((1.0/12.0))*u2_B0(0,3,0) + ((3.0/2.0))*u2_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk6_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,-1,0) - (1.0/12.0)*u2_B0(0,2,0) + ((1.0/12.0))*u2_B0(0,-2,0) +
            ((2.0/3.0))*u2_B0(0,1,0))*invDelta1block0;

   }

}

void opensbliblock00Kernel044(const ACC<double> &T_B0, ACC<double> &wk7_B0, const int *idx)
{
   if (idx[1] == 0){

       wk7_B0(0,0,0) = (-3*T_B0(0,2,0) + 4*T_B0(0,1,0) - (25.0/12.0)*T_B0(0,0,0) - (1.0/4.0)*T_B0(0,4,0) +
            ((4.0/3.0))*T_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk7_B0(0,0,0) = (-(5.0/6.0)*T_B0(0,0,0) - (1.0/2.0)*T_B0(0,2,0) - (1.0/4.0)*T_B0(0,-1,0) +
            ((1.0/12.0))*T_B0(0,3,0) + ((3.0/2.0))*T_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk7_B0(0,0,0) = (-(2.0/3.0)*T_B0(0,-1,0) - (1.0/12.0)*T_B0(0,2,0) + ((1.0/12.0))*T_B0(0,-2,0) +
            ((2.0/3.0))*T_B0(0,1,0))*invDelta1block0;

   }

}

void opensbliblock00Kernel045(const ACC<double> &u0_B0, ACC<double> &wk8_B0)
{
    wk8_B0(0,0,0) = (-(2.0/3.0)*u0_B0(0,0,-1) - (1.0/12.0)*u0_B0(0,0,2) + ((1.0/12.0))*u0_B0(0,0,-2) +
      ((2.0/3.0))*u0_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel046(const ACC<double> &u1_B0, ACC<double> &wk9_B0)
{
    wk9_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,0,-1) - (1.0/12.0)*u1_B0(0,0,2) + ((1.0/12.0))*u1_B0(0,0,-2) +
      ((2.0/3.0))*u1_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel047(const ACC<double> &u2_B0, ACC<double> &wk10_B0)
{
    wk10_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,0,-1) - (1.0/12.0)*u2_B0(0,0,2) + ((1.0/12.0))*u2_B0(0,0,-2) +
      ((2.0/3.0))*u2_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel048(const ACC<double> &T_B0, ACC<double> &wk11_B0)
{
    wk11_B0(0,0,0) = (-(2.0/3.0)*T_B0(0,0,-1) - (1.0/12.0)*T_B0(0,0,2) + ((1.0/12.0))*T_B0(0,0,-2) +
      ((2.0/3.0))*T_B0(0,0,1))*invDelta2block0;

}

 void opensbliblock00Kernel057(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
ACC<double> &D11_B0, const ACC<double> &SD000_B0, const ACC<double> &SD001_B0, const ACC<double> &SD010_B0, const
ACC<double> &SD011_B0, const ACC<double> &SD100_B0, const ACC<double> &SD101_B0, const ACC<double> &SD110_B0, const
ACC<double> &SD111_B0, const ACC<double> &T_B0, const ACC<double> &mu_B0, const ACC<double> &u0_B0, const ACC<double>
&u1_B0, const ACC<double> &u2_B0, const ACC<double> &wk0_B0, const ACC<double> &wk10_B0, const ACC<double> &wk11_B0,
const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const
ACC<double> &wk5_B0, const ACC<double> &wk6_B0, const ACC<double> &wk7_B0, const ACC<double> &wk8_B0, const ACC<double>
&wk9_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double> &Residual3_B0, ACC<double> &Residual4_B0,
const int *idx)
{
   double d1_mu_dx = 0.0;
   double d1_mu_dy = 0.0;
   double d1_mu_dz = 0.0;
   double d1_wk0_dy = 0.0;
   double d1_wk0_dz = 0.0;
   double d1_wk1_dy = 0.0;
   double d1_wk1_dz = 0.0;
   double d1_wk2_dy = 0.0;
   double d1_wk2_dz = 0.0;
   double d1_wk3_dy = 0.0;
   double d1_wk4_dz = 0.0;
   double d1_wk5_dz = 0.0;
   double d1_wk6_dz = 0.0;
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
   if (idx[0] == 0){

       d1_mu_dx = (-3*mu_B0(2,0,0) + 4*mu_B0(1,0,0) - (25.0/12.0)*mu_B0(0,0,0) - (1.0/4.0)*mu_B0(4,0,0) +
            ((4.0/3.0))*mu_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_mu_dx = (-(5.0/6.0)*mu_B0(0,0,0) - (1.0/2.0)*mu_B0(2,0,0) - (1.0/4.0)*mu_B0(-1,0,0) +
            ((1.0/12.0))*mu_B0(3,0,0) + ((3.0/2.0))*mu_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_mu_dx = (-4*mu_B0(-1,0,0) + 3*mu_B0(-2,0,0) - (4.0/3.0)*mu_B0(-3,0,0) + ((1.0/4.0))*mu_B0(-4,0,0) +
            ((25.0/12.0))*mu_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_mu_dx = (((1.0/2.0))*mu_B0(-2,0,0) - (3.0/2.0)*mu_B0(-1,0,0) - (1.0/12.0)*mu_B0(-3,0,0) +
            ((1.0/4.0))*mu_B0(1,0,0) + ((5.0/6.0))*mu_B0(0,0,0))*invDelta0block0;

   }

   else{

       d1_mu_dx = (-(2.0/3.0)*mu_B0(-1,0,0) - (1.0/12.0)*mu_B0(2,0,0) + ((1.0/12.0))*mu_B0(-2,0,0) +
            ((2.0/3.0))*mu_B0(1,0,0))*invDelta0block0;

   }

   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1,0,0) - (14.0/3.0)*T_B0(3,0,0) + ((11.0/12.0))*T_B0(4,0,0) +
            ((19.0/2.0))*T_B0(2,0,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(1,0,0) - (14.0/3.0)*u0_B0(3,0,0) + ((11.0/12.0))*u0_B0(4,0,0) +
            ((19.0/2.0))*u0_B0(2,0,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(1,0,0) - (14.0/3.0)*u1_B0(3,0,0) + ((11.0/12.0))*u1_B0(4,0,0) +
            ((19.0/2.0))*u1_B0(2,0,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(26.0/3.0)*u2_B0(1,0,0) - (14.0/3.0)*u2_B0(3,0,0) + ((11.0/12.0))*u2_B0(4,0,0) +
            ((19.0/2.0))*u2_B0(2,0,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1,0,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(3,0,0) + ((1.0/3.0))*T_B0(2,0,0) +
            ((11.0/12.0))*T_B0(-1,0,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(1,0,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(3,0,0) +
            ((1.0/3.0))*u0_B0(2,0,0) + ((11.0/12.0))*u0_B0(-1,0,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(1,0,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(3,0,0) +
            ((1.0/3.0))*u1_B0(2,0,0) + ((11.0/12.0))*u1_B0(-1,0,0))*inv2Delta0block0;

       d2_u2_dx = (((1.0/2.0))*u2_B0(1,0,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(3,0,0) +
            ((1.0/3.0))*u2_B0(2,0,0) + ((11.0/12.0))*u2_B0(-1,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1,0,0) - (14.0/3.0)*T_B0(-3,0,0) + ((11.0/12.0))*T_B0(-4,0,0) +
            ((19.0/2.0))*T_B0(-2,0,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(-1,0,0) - (14.0/3.0)*u0_B0(-3,0,0) + ((11.0/12.0))*u0_B0(-4,0,0) +
            ((19.0/2.0))*u0_B0(-2,0,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(-1,0,0) - (14.0/3.0)*u1_B0(-3,0,0) + ((11.0/12.0))*u1_B0(-4,0,0) +
            ((19.0/2.0))*u1_B0(-2,0,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(26.0/3.0)*u2_B0(-1,0,0) - (14.0/3.0)*u2_B0(-3,0,0) + ((11.0/12.0))*u2_B0(-4,0,0) +
            ((19.0/2.0))*u2_B0(-2,0,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1,0,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(-3,0,0) + ((1.0/3.0))*T_B0(-2,0,0)
            + ((11.0/12.0))*T_B0(1,0,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(-1,0,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(-3,0,0) +
            ((1.0/3.0))*u0_B0(-2,0,0) + ((11.0/12.0))*u0_B0(1,0,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(-1,0,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(-3,0,0) +
            ((1.0/3.0))*u1_B0(-2,0,0) + ((11.0/12.0))*u1_B0(1,0,0))*inv2Delta0block0;

       d2_u2_dx = (((1.0/2.0))*u2_B0(-1,0,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(-3,0,0) +
            ((1.0/3.0))*u2_B0(-2,0,0) + ((11.0/12.0))*u2_B0(1,0,0))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(-2,0,0) - (1.0/12.0)*T_B0(2,0,0) + ((4.0/3.0))*T_B0(1,0,0) +
            ((4.0/3.0))*T_B0(-1,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(-2,0,0) - (1.0/12.0)*u0_B0(2,0,0) +
            ((4.0/3.0))*u0_B0(1,0,0) + ((4.0/3.0))*u0_B0(-1,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(-2,0,0) - (1.0/12.0)*u1_B0(2,0,0) +
            ((4.0/3.0))*u1_B0(1,0,0) + ((4.0/3.0))*u1_B0(-1,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(-2,0,0) - (1.0/12.0)*u2_B0(2,0,0) +
            ((4.0/3.0))*u2_B0(1,0,0) + ((4.0/3.0))*u2_B0(-1,0,0))*inv2Delta0block0;

   }

   if (idx[1] == 0){

       d1_mu_dy = (-3*mu_B0(0,2,0) + 4*mu_B0(0,1,0) - (25.0/12.0)*mu_B0(0,0,0) - (1.0/4.0)*mu_B0(0,4,0) +
            ((4.0/3.0))*mu_B0(0,3,0))*invDelta1block0;

       d1_wk0_dy = (-3*wk0_B0(0,2,0) + 4*wk0_B0(0,1,0) - (25.0/12.0)*wk0_B0(0,0,0) - (1.0/4.0)*wk0_B0(0,4,0) +
            ((4.0/3.0))*wk0_B0(0,3,0))*invDelta1block0;

       d1_wk1_dy = (-3*wk1_B0(0,2,0) + 4*wk1_B0(0,1,0) - (25.0/12.0)*wk1_B0(0,0,0) - (1.0/4.0)*wk1_B0(0,4,0) +
            ((4.0/3.0))*wk1_B0(0,3,0))*invDelta1block0;

       d1_wk2_dy = (-3*wk2_B0(0,2,0) + 4*wk2_B0(0,1,0) - (25.0/12.0)*wk2_B0(0,0,0) - (1.0/4.0)*wk2_B0(0,4,0) +
            ((4.0/3.0))*wk2_B0(0,3,0))*invDelta1block0;

       d1_wk3_dy = (-3*wk3_B0(0,2,0) + 4*wk3_B0(0,1,0) - (25.0/12.0)*wk3_B0(0,0,0) - (1.0/4.0)*wk3_B0(0,4,0) +
            ((4.0/3.0))*wk3_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_mu_dy = (-(5.0/6.0)*mu_B0(0,0,0) - (1.0/2.0)*mu_B0(0,2,0) - (1.0/4.0)*mu_B0(0,-1,0) +
            ((1.0/12.0))*mu_B0(0,3,0) + ((3.0/2.0))*mu_B0(0,1,0))*invDelta1block0;

       d1_wk0_dy = (-(5.0/6.0)*wk0_B0(0,0,0) - (1.0/2.0)*wk0_B0(0,2,0) - (1.0/4.0)*wk0_B0(0,-1,0) +
            ((1.0/12.0))*wk0_B0(0,3,0) + ((3.0/2.0))*wk0_B0(0,1,0))*invDelta1block0;

       d1_wk1_dy = (-(5.0/6.0)*wk1_B0(0,0,0) - (1.0/2.0)*wk1_B0(0,2,0) - (1.0/4.0)*wk1_B0(0,-1,0) +
            ((1.0/12.0))*wk1_B0(0,3,0) + ((3.0/2.0))*wk1_B0(0,1,0))*invDelta1block0;

       d1_wk2_dy = (-(5.0/6.0)*wk2_B0(0,0,0) - (1.0/2.0)*wk2_B0(0,2,0) - (1.0/4.0)*wk2_B0(0,-1,0) +
            ((1.0/12.0))*wk2_B0(0,3,0) + ((3.0/2.0))*wk2_B0(0,1,0))*invDelta1block0;

       d1_wk3_dy = (-(5.0/6.0)*wk3_B0(0,0,0) - (1.0/2.0)*wk3_B0(0,2,0) - (1.0/4.0)*wk3_B0(0,-1,0) +
            ((1.0/12.0))*wk3_B0(0,3,0) + ((3.0/2.0))*wk3_B0(0,1,0))*invDelta1block0;

   }

   else{

       d1_mu_dy = (-(2.0/3.0)*mu_B0(0,-1,0) - (1.0/12.0)*mu_B0(0,2,0) + ((1.0/12.0))*mu_B0(0,-2,0) +
            ((2.0/3.0))*mu_B0(0,1,0))*invDelta1block0;

       d1_wk0_dy = (-(2.0/3.0)*wk0_B0(0,-1,0) - (1.0/12.0)*wk0_B0(0,2,0) + ((1.0/12.0))*wk0_B0(0,-2,0) +
            ((2.0/3.0))*wk0_B0(0,1,0))*invDelta1block0;

       d1_wk1_dy = (-(2.0/3.0)*wk1_B0(0,-1,0) - (1.0/12.0)*wk1_B0(0,2,0) + ((1.0/12.0))*wk1_B0(0,-2,0) +
            ((2.0/3.0))*wk1_B0(0,1,0))*invDelta1block0;

       d1_wk2_dy = (-(2.0/3.0)*wk2_B0(0,-1,0) - (1.0/12.0)*wk2_B0(0,2,0) + ((1.0/12.0))*wk2_B0(0,-2,0) +
            ((2.0/3.0))*wk2_B0(0,1,0))*invDelta1block0;

       d1_wk3_dy = (-(2.0/3.0)*wk3_B0(0,-1,0) - (1.0/12.0)*wk3_B0(0,2,0) + ((1.0/12.0))*wk3_B0(0,-2,0) +
            ((2.0/3.0))*wk3_B0(0,1,0))*invDelta1block0;

   }

   if (idx[1] == 0){

       d2_T_dy = (-(26.0/3.0)*T_B0(0,1,0) - (14.0/3.0)*T_B0(0,3,0) + ((11.0/12.0))*T_B0(0,4,0) +
            ((19.0/2.0))*T_B0(0,2,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta1block0;

       d2_u0_dy = (-(26.0/3.0)*u0_B0(0,1,0) - (14.0/3.0)*u0_B0(0,3,0) + ((11.0/12.0))*u0_B0(0,4,0) +
            ((19.0/2.0))*u0_B0(0,2,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta1block0;

       d2_u1_dy = (-(26.0/3.0)*u1_B0(0,1,0) - (14.0/3.0)*u1_B0(0,3,0) + ((11.0/12.0))*u1_B0(0,4,0) +
            ((19.0/2.0))*u1_B0(0,2,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta1block0;

       d2_u2_dy = (-(26.0/3.0)*u2_B0(0,1,0) - (14.0/3.0)*u2_B0(0,3,0) + ((11.0/12.0))*u2_B0(0,4,0) +
            ((19.0/2.0))*u2_B0(0,2,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta1block0;

   }

   else if (idx[1] == 1){

       d2_T_dy = (((1.0/2.0))*T_B0(0,1,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,3,0) + ((1.0/3.0))*T_B0(0,2,0) +
            ((11.0/12.0))*T_B0(0,-1,0))*inv2Delta1block0;

       d2_u0_dy = (((1.0/2.0))*u0_B0(0,1,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,3,0) +
            ((1.0/3.0))*u0_B0(0,2,0) + ((11.0/12.0))*u0_B0(0,-1,0))*inv2Delta1block0;

       d2_u1_dy = (((1.0/2.0))*u1_B0(0,1,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,3,0) +
            ((1.0/3.0))*u1_B0(0,2,0) + ((11.0/12.0))*u1_B0(0,-1,0))*inv2Delta1block0;

       d2_u2_dy = (((1.0/2.0))*u2_B0(0,1,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,3,0) +
            ((1.0/3.0))*u2_B0(0,2,0) + ((11.0/12.0))*u2_B0(0,-1,0))*inv2Delta1block0;

   }

   else{

       d2_T_dy = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,-2,0) - (1.0/12.0)*T_B0(0,2,0) + ((4.0/3.0))*T_B0(0,1,0) +
            ((4.0/3.0))*T_B0(0,-1,0))*inv2Delta1block0;

       d2_u0_dy = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,-2,0) - (1.0/12.0)*u0_B0(0,2,0) +
            ((4.0/3.0))*u0_B0(0,1,0) + ((4.0/3.0))*u0_B0(0,-1,0))*inv2Delta1block0;

       d2_u1_dy = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,-2,0) - (1.0/12.0)*u1_B0(0,2,0) +
            ((4.0/3.0))*u1_B0(0,1,0) + ((4.0/3.0))*u1_B0(0,-1,0))*inv2Delta1block0;

       d2_u2_dy = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,-2,0) - (1.0/12.0)*u2_B0(0,2,0) +
            ((4.0/3.0))*u2_B0(0,1,0) + ((4.0/3.0))*u2_B0(0,-1,0))*inv2Delta1block0;

   }

    d2_T_dz = -(1.0/12.0)*(-16*T_B0(0,0,1) - 16*T_B0(0,0,-1) + 30*T_B0(0,0,0) + T_B0(0,0,-2) +
      T_B0(0,0,2))*inv2Delta2block0;

   d1_mu_dz = ((1.0/12.0))*(-mu_B0(0,0,2) - 8*mu_B0(0,0,-1) + 8*mu_B0(0,0,1) + mu_B0(0,0,-2))*invDelta2block0;

    d2_u0_dz = -(1.0/12.0)*(-16*u0_B0(0,0,1) - 16*u0_B0(0,0,-1) + 30*u0_B0(0,0,0) + u0_B0(0,0,-2) +
      u0_B0(0,0,2))*inv2Delta2block0;

    d2_u1_dz = -(1.0/12.0)*(-16*u1_B0(0,0,1) - 16*u1_B0(0,0,-1) + 30*u1_B0(0,0,0) + u1_B0(0,0,-2) +
      u1_B0(0,0,2))*inv2Delta2block0;

    d2_u2_dz = -(1.0/12.0)*(-16*u2_B0(0,0,1) - 16*u2_B0(0,0,-1) + 30*u2_B0(0,0,0) + u2_B0(0,0,-2) +
      u2_B0(0,0,2))*inv2Delta2block0;

   d1_wk0_dz = ((1.0/12.0))*(-wk0_B0(0,0,2) - 8*wk0_B0(0,0,-1) + 8*wk0_B0(0,0,1) + wk0_B0(0,0,-2))*invDelta2block0;

   d1_wk1_dz = -(1.0/12.0)*(-wk1_B0(0,0,-2) - 8*wk1_B0(0,0,1) + 8*wk1_B0(0,0,-1) + wk1_B0(0,0,2))*invDelta2block0;

   d1_wk2_dz = ((1.0/12.0))*(-wk2_B0(0,0,2) - 8*wk2_B0(0,0,-1) + 8*wk2_B0(0,0,1) + wk2_B0(0,0,-2))*invDelta2block0;

   d1_wk4_dz = -(1.0/12.0)*(-wk4_B0(0,0,-2) - 8*wk4_B0(0,0,1) + 8*wk4_B0(0,0,-1) + wk4_B0(0,0,2))*invDelta2block0;

   d1_wk5_dz = -(1.0/12.0)*(-wk5_B0(0,0,-2) - 8*wk5_B0(0,0,1) + 8*wk5_B0(0,0,-1) + wk5_B0(0,0,2))*invDelta2block0;

   d1_wk6_dz = -(1.0/12.0)*(-wk6_B0(0,0,-2) - 8*wk6_B0(0,0,1) + 8*wk6_B0(0,0,-1) + wk6_B0(0,0,2))*invDelta2block0;

    Residual1_B0(0,0,0) = (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*d1_mu_dz +
      ((1.0/3.0))*(3*d2_u0_dz + D00_B0(0,0,0)*d1_wk2_dz + D10_B0(0,0,0)*d1_wk6_dz +
      3*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx + 3*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy +
      4*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + 4*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx + D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy + D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy -
      2*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) - 2*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) -
      2*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) - 2*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + 3*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + 3*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + 3*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + 3*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      4*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) + 4*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) +
      4*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) + 4*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      6*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy + 8*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy)*invRe*mu_B0(0,0,0) +
      ((2.0/3.0))*(D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(-wk10_B0(0,0,0) - D01_B0(0,0,0)*wk1_B0(0,0,0) -
      D11_B0(0,0,0)*wk5_B0(0,0,0) + 2*D00_B0(0,0,0)*wk0_B0(0,0,0) + 2*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe +
      Residual1_B0(0,0,0);

    Residual2_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*d1_mu_dz -
      (2.0/3.0)*(D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk0_B0(0,0,0) +
      D10_B0(0,0,0)*wk4_B0(0,0,0) - 2*D01_B0(0,0,0)*wk1_B0(0,0,0) - 2*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      wk10_B0(0,0,0))*invRe + ((1.0/3.0))*(3*d2_u1_dz + D01_B0(0,0,0)*d1_wk2_dz + D11_B0(0,0,0)*d1_wk6_dz +
      3*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx + 3*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy +
      4*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx + 4*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy +
      D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx + D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy +
      D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy + D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy -
      2*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) - 2*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) -
      2*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) - 2*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      3*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + 3*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      3*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + 3*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + 3*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + 3*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      4*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) + 4*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) +
      4*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) + 4*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) +
      6*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy + 8*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy)*invRe*mu_B0(0,0,0) +
      Residual2_B0(0,0,0);

    Residual3_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe -
      (2.0/3.0)*(-2*wk10_B0(0,0,0) + D00_B0(0,0,0)*wk0_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0) +
      D10_B0(0,0,0)*wk4_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*d1_mu_dz + ((1.0/3.0))*(4*d2_u2_dz +
      D00_B0(0,0,0)*d1_wk0_dz + D01_B0(0,0,0)*d1_wk1_dz + D10_B0(0,0,0)*d1_wk4_dz + D11_B0(0,0,0)*d1_wk5_dz +
      3*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + 3*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      3*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + 3*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      3*D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) + 3*D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) + 3*D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) + 3*D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) + 3*D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) +
      6*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy + 6*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0) +
      Residual3_B0(0,0,0);

    Residual4_B0(0,0,0) = (D00_B0(0,0,0)*wk1_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0))*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx +
      D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) +
      wk8_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u1_B0(0,0,0) +
      (D01_B0(0,0,0)*wk0_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0))*(D01_B0(0,0,0)*wk2_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) +
      wk9_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk8_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dz +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk9_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dz -
      (2.0/3.0)*(D01_B0(0,0,0)*wk1_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0))*(D00_B0(0,0,0)*wk0_B0(0,0,0) +
      D10_B0(0,0,0)*wk4_B0(0,0,0) - 2*D01_B0(0,0,0)*wk1_B0(0,0,0) - 2*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      wk10_B0(0,0,0))*invRe*mu_B0(0,0,0) - (2.0/3.0)*(D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0) - 2*D01_B0(0,0,0)*wk1_B0(0,0,0)
      - 2*D11_B0(0,0,0)*wk5_B0(0,0,0) + wk10_B0(0,0,0))*invRe*u1_B0(0,0,0) - (2.0/3.0)*(-2*wk10_B0(0,0,0) +
      D00_B0(0,0,0)*wk0_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0) +
      D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk10_B0(0,0,0) - (2.0/3.0)*(-2*wk10_B0(0,0,0) +
      D00_B0(0,0,0)*wk0_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0) +
      D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dz + ((1.0/3.0))*(4*d2_u2_dz + D00_B0(0,0,0)*d1_wk0_dz +
      D01_B0(0,0,0)*d1_wk1_dz + D10_B0(0,0,0)*d1_wk4_dz + D11_B0(0,0,0)*d1_wk5_dz +
      3*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + 3*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      3*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + 3*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      3*D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) + 3*D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) + 3*D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) + 3*D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) + 3*D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) +
      6*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy + 6*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0)*u2_B0(0,0,0)
      + ((1.0/3.0))*(3*d2_u0_dz + D00_B0(0,0,0)*d1_wk2_dz + D10_B0(0,0,0)*d1_wk6_dz +
      3*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx + 3*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy +
      4*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + 4*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx + D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy + D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy -
      2*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) - 2*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) -
      2*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) - 2*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + 3*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      3*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + 3*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + 3*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      3*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + 3*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      4*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) + 4*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) +
      4*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) + 4*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      6*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy + 8*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy)*invRe*mu_B0(0,0,0)*u0_B0(0,0,0)
      + ((1.0/3.0))*(3*d2_u1_dz + D01_B0(0,0,0)*d1_wk2_dz + D11_B0(0,0,0)*d1_wk6_dz +
      3*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx + 3*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy +
      4*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx + 4*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy +
      D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx + D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy +
      D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy + D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy -
      2*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) - 2*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) -
      2*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) - 2*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      3*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + 3*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      3*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + 3*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + 3*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      3*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + 3*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      4*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) + 4*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) +
      4*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) + 4*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) +
      6*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy + 8*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy)*invRe*mu_B0(0,0,0)*u1_B0(0,0,0)
      + ((2.0/3.0))*(D00_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0))*(-wk10_B0(0,0,0) -
      D01_B0(0,0,0)*wk1_B0(0,0,0) - D11_B0(0,0,0)*wk5_B0(0,0,0) + 2*D00_B0(0,0,0)*wk0_B0(0,0,0) +
      2*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) + ((2.0/3.0))*(D00_B0(0,0,0)*d1_mu_dx +
      D10_B0(0,0,0)*d1_mu_dy)*(-wk10_B0(0,0,0) - D01_B0(0,0,0)*wk1_B0(0,0,0) - D11_B0(0,0,0)*wk5_B0(0,0,0) +
      2*D00_B0(0,0,0)*wk0_B0(0,0,0) + 2*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) + (D00_B0(0,0,0)*wk3_B0(0,0,0) +
      D10_B0(0,0,0)*wk7_B0(0,0,0))*(D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 +
      (D01_B0(0,0,0)*wk3_B0(0,0,0) + D11_B0(0,0,0)*wk7_B0(0,0,0))*(D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 + ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_T_dx +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_T_dx + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_T_dy +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_T_dy + D00_B0(0,0,0)*wk3_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk7_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk3_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk7_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk3_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk7_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk3_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk7_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk3_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk3_dy + d2_T_dz)*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0,0) +
      invPr*invRe*inv2Minf*inv_gamma_m1*wk11_B0(0,0,0)*d1_mu_dz + Residual4_B0(0,0,0);

}

 void opensbliblock00Kernel083(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
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

#endif
