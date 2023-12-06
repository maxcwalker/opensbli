#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel049(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &x0_B0, ACC<double> &x1_B0, const int *idx)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   x0_B0(0,0) = Delta0block0*idx[0];

    x1_B0(0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a)
      + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a) +
      H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

    rhou0 = ((x1_B0(0,0) < 2.99429942994299) ? (
   -6.79885229354697e-6 + 1.67214576440403e-15*pow(x1_B0(0,0), 43) +
      6.62609706082458e-8*pow(x1_B0(0,0), 24) + 2.98375659025026e-5*pow(x1_B0(0,0), 20) +
      0.126243129686605*pow(x1_B0(0,0), 13) + 4.19573005111711*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0))
      + 1.69076757508543*pow(x1_B0(0,0), 10) + 2.03176591512731e-19*pow(x1_B0(0,0), 48) +
      0.0298244304917194*pow(x1_B0(0,0), 14) + 3.83419788084576e-18*pow(x1_B0(0,0), 49) +
      0.000615582519760767*pow(x1_B0(0,0), 18) + 0.324542714858587*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) +
      1.55527060442377e-7*pow(x1_B0(0,0), 26) + 3.88129708090835e-11*pow(x1_B0(0,0), 33) +
      10.6865238854981*pow(x1_B0(0,0), 7) + 0.366955462805737*x1_B0(0,0) + 2.53262687813713e-11*pow(x1_B0(0,0), 34) +
      3.14827640533376e-15*pow(x1_B0(0,0), 42) + 4.27145437316059e-16*pow(x1_B0(0,0), 44) +
      0.000269336486878435*pow(x1_B0(0,0), 19) + 1.15214468964544*pow(x1_B0(0,0), 9) +
      3.50438739574933e-8*pow(x1_B0(0,0), 27) + 8.62883142948422e-12*pow(x1_B0(0,0), 35) +
      3.47266104607713e-7*pow(x1_B0(0,0), 25) + 1.55582786171241e-12*pow(x1_B0(0,0), 36) -
      7.20659855575652*pow(x1_B0(0,0), 8) -
      8.58262294264666*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      0.0110034695305397*pow(x1_B0(0,0), 15) - 0.00631704177417841*pow(x1_B0(0,0), 16) -
      1.89504462660425e-13*pow(x1_B0(0,0), 37) - 5.91600474661752e-17*pow(x1_B0(0,0), 46) -
      2.78552815102481e-13*pow(x1_B0(0,0), 38) - 8.63295716234996e-18*pow(x1_B0(0,0), 45) -
      0.0195239337386234*(x1_B0(0,0)*x1_B0(0,0)) - 1.26048044856151*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      5.59449766936062e-19*pow(x1_B0(0,0), 50) - 2.78585585488651e-6*pow(x1_B0(0,0), 23) -
      4.70977143222768e-11*pow(x1_B0(0,0), 32) - 0.13022591625403*pow(x1_B0(0,0), 12) -
      2.99381761569239e-14*pow(x1_B0(0,0), 40) - 1.21813959744852e-13*pow(x1_B0(0,0), 39) -
      2.05542500875851e-9*pow(x1_B0(0,0), 30) - 4.25404943097097e-9*pow(x1_B0(0,0), 29) -
      5.52553504022722e-10*pow(x1_B0(0,0), 31) - 5.79287182325348e-10*pow(x1_B0(0,0), 28) -
      1.93038694398876e-5*pow(x1_B0(0,0), 21) - 1.15119271094842e-5*pow(x1_B0(0,0), 22) -
      2.33848528182873e-17*pow(x1_B0(0,0), 47) - 0.885085658468942*pow(x1_B0(0,0), 11) -
      0.000443349455521302*pow(x1_B0(0,0), 17) - 8.60901866220568e-16*pow(x1_B0(0,0), 41)
)
: (
  
      0.999999224476483
));

    rhou1 = ((x1_B0(0,0) < 2.99429942994299) ? (
   -3.55809262938878e-8 +
      0.000502173746863*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 5.05628488696696e-9*pow(x1_B0(0,0), 25) +
      3.26077171091605e-6*x1_B0(0,0) + 2.67167062793271e-19*pow(x1_B0(0,0), 45) + 1.00091188044208e-9*pow(x1_B0(0,0),
      27) + 4.42078058019716e-14*pow(x1_B0(0,0), 36) +
      0.0516627511761917*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) +
      0.000414336236066314*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 6.49345465644724e-6*pow(x1_B0(0,0), 19) +
      0.00169834206105855*pow(x1_B0(0,0), 13) + 5.49661999515462e-17*pow(x1_B0(0,0), 42) +
      4.6137902286588e-13*pow(x1_B0(0,0), 33) + 4.85037171824644e-13*pow(x1_B0(0,0), 34) +
      2.7150506827642e-16*pow(x1_B0(0,0), 37) + 3.46584192929136e-17*pow(x1_B0(0,0), 43) +
      0.00125338352789817*pow(x1_B0(0,0), 14) + 9.91685221830504e-18*pow(x1_B0(0,0), 44) +
      0.0915443510541033*pow(x1_B0(0,0), 10) + 8.0200735796748e-20*pow(x1_B0(0,0), 49) +
      0.00154408756160506*(x1_B0(0,0)*x1_B0(0,0)) + 1.52283931245167e-6*pow(x1_B0(0,0), 20) +
      0.20683469022637*pow(x1_B0(0,0), 8) + 1.94822682850571e-13*pow(x1_B0(0,0), 35) +
      1.02765795274568e-10*pow(x1_B0(0,0), 28) + 3.34289856562083e-9*pow(x1_B0(0,0), 26) +
      7.13044307392859e-6*pow(x1_B0(0,0), 18) - 7.25250677255355e-16*pow(x1_B0(0,0), 40) -
      9.08347249629834e-9*pow(x1_B0(0,0), 24) - 2.56804312724929e-15*pow(x1_B0(0,0), 39) -
      0.188773333436024*pow(x1_B0(0,0), 9) - 2.8697732308619e-5*pow(x1_B0(0,0), 15) -
      8.09580874114824e-21*pow(x1_B0(0,0), 48) - 2.21037886849149e-12*pow(x1_B0(0,0), 32) -
      0.00955081867425732*pow(x1_B0(0,0), 12) - 8.12833717377197e-8*pow(x1_B0(0,0), 23) -
      6.25916350876912e-11*pow(x1_B0(0,0), 29) - 0.134992085123733*pow(x1_B0(0,0), 7) -
      6.31267481738989e-17*pow(x1_B0(0,0), 41) - 5.07524000049457e-19*pow(x1_B0(0,0), 47) -
      3.59441987111512e-5*pow(x1_B0(0,0), 17) -
      0.0096025712923926*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) - 0.000153858548343256*pow(x1_B0(0,0),
      16) - 0.010034669380685*pow(x1_B0(0,0), 11) - 1.53178456879174e-7*pow(x1_B0(0,0), 21) -
      1.16147003447654e-18*pow(x1_B0(0,0), 46) - 4.96474941780048e-15*pow(x1_B0(0,0), 38) -
      4.22856961424178e-11*pow(x1_B0(0,0), 30) - 1.12820437760232e-20*pow(x1_B0(0,0), 50) -
      1.39392346238368e-11*pow(x1_B0(0,0), 31) - 2.34094986727713e-7*pow(x1_B0(0,0), 22)
)
: (
  
      0.00878175646748518
));

    T = ((x1_B0(0,0) < 2.99429942994299) ? (
   2.05509841547725 + 3.8212473384235e-9*pow(x1_B0(0,0), 28) +
      0.196895824562075*pow(x1_B0(0,0), 11) + 1.42982882188753e-17*pow(x1_B0(0,0), 45) +
      0.0232241263819855*pow(x1_B0(0,0), 14) + 6.98953216447816e-6*pow(x1_B0(0,0), 21) +
      1.39315293284763e-8*pow(x1_B0(0,0), 26) + 2.25561145727452e-13*pow(x1_B0(0,0), 34) +
      2.60580316630023e-19*pow(x1_B0(0,0), 49) +
      6.57336872053344*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) +
      0.647453621926527*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 3.23872805592056e-5*pow(x1_B0(0,0), 20) +
      4.95662842981949e-13*pow(x1_B0(0,0), 36) + 6.1621090471385e-17*pow(x1_B0(0,0), 44) +
      1.2869055385934e-13*pow(x1_B0(0,0), 37) + 1.06585809905616e-12*pow(x1_B0(0,0), 35) +
      5.93091178567877e-10*pow(x1_B0(0,0), 29) + 10.8017663552313*pow(x1_B0(0,0), 8) +
      9.90167089336861e-15*pow(x1_B0(0,0), 38) + 0.00574892119341443*pow(x1_B0(0,0), 15) +
      1.14510428296074e-8*pow(x1_B0(0,0), 27) + 4.93530669430688e-5*pow(x1_B0(0,0), 19) +
      1.02711852895838e-16*pow(x1_B0(0,0), 43) + 1.95900301618798*pow(x1_B0(0,0), 10) - 10.4739984091963*pow(x1_B0(0,0),
      7) - 5.33039546348979e-15*pow(x1_B0(0,0), 40) - 1.17486403129522e-10*pow(x1_B0(0,0), 30) -
      0.000144099162483709*pow(x1_B0(0,0), 18) - 9.09984616614245e-12*pow(x1_B0(0,0), 33) -
      1.56198360830805e-15*pow(x1_B0(0,0), 41) - 0.233437748980024*pow(x1_B0(0,0), 12) -
      0.500539338745882*(x1_B0(0,0)*x1_B0(0,0)) - 0.0199877526980616*pow(x1_B0(0,0), 13) -
      2.63193632371527*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) - 0.000329119172379296*x1_B0(0,0) -
      6.73370820899258*pow(x1_B0(0,0), 9) - 0.109888830873074*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      1.17758291158569e-10*pow(x1_B0(0,0), 31) - 9.74728650158839e-7*pow(x1_B0(0,0), 23) -
      8.92129738625189e-15*pow(x1_B0(0,0), 39) - 0.00123299895914358*pow(x1_B0(0,0), 16) -
      2.19751981779326e-18*pow(x1_B0(0,0), 47) - 6.14496948201501e-7*pow(x1_B0(0,0), 22) -
      1.4931238860637e-16*pow(x1_B0(0,0), 42) - 3.47458952796756e-7*pow(x1_B0(0,0), 24) -
      4.43046996992817e-11*pow(x1_B0(0,0), 32) - 4.97047225496105e-8*pow(x1_B0(0,0), 25) -
      1.48892919053983e-18*pow(x1_B0(0,0), 46) - 2.41225653208545e-20*pow(x1_B0(0,0), 50) -
      3.95865283426961e-19*pow(x1_B0(0,0), 48) - 0.00092373473652247*pow(x1_B0(0,0), 17)
)
: (
   1.00000077269372
));

   rho = 1.0/T;

   rho_B0(0,0) = rho;

   rhou0_B0(0,0) = rhou0;

   rhou1_B0(0,0) = rhou1;

   rhoE_B0(0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

}

 void opensbliblock00Kernel052(const ACC<double> &x0_B0, const ACC<double> &x1_B0, ACC<double> &D00_B0, ACC<double>
&D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0, ACC<double> &detJ_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0,
ACC<double> &wk2_B0, ACC<double> &wk3_B0, const int *idx)
{
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
    d1_x0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*x0_B0(0,2) + 4*x0_B0(0,1) - (25.0/12.0)*x0_B0(0,0) -
      (1.0/4.0)*x0_B0(0,4) + ((4.0/3.0))*x0_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0) -
      (1.0/2.0)*x0_B0(0,2) - (1.0/4.0)*x0_B0(0,-1) + ((1.0/12.0))*x0_B0(0,3) + ((3.0/2.0))*x0_B0(0,1)
)
: (
  
      -(2.0/3.0)*x0_B0(0,-1) - (1.0/12.0)*x0_B0(0,2) + ((1.0/12.0))*x0_B0(0,-2) + ((2.0/3.0))*x0_B0(0,1)
)));

    d1_x1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*x1_B0(2,0) + 4*x1_B0(1,0) - (25.0/12.0)*x1_B0(0,0) -
      (1.0/4.0)*x1_B0(4,0) + ((4.0/3.0))*x1_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0) -
      (1.0/2.0)*x1_B0(2,0) - (1.0/4.0)*x1_B0(-1,0) + ((1.0/12.0))*x1_B0(3,0) + ((3.0/2.0))*x1_B0(1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*x1_B0(-1,0) + 3*x1_B0(-2,0) - (4.0/3.0)*x1_B0(-3,0) + ((1.0/4.0))*x1_B0(-4,0) +
      ((25.0/12.0))*x1_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*x1_B0(-2,0) - (3.0/2.0)*x1_B0(-1,0) -
      (1.0/12.0)*x1_B0(-3,0) + ((1.0/4.0))*x1_B0(1,0) + ((5.0/6.0))*x1_B0(0,0)
)
: (
   -(2.0/3.0)*x1_B0(-1,0) -
      (1.0/12.0)*x1_B0(2,0) + ((1.0/12.0))*x1_B0(-2,0) + ((2.0/3.0))*x1_B0(1,0)
)))));

    d1_x0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*x0_B0(2,0) + 4*x0_B0(1,0) - (25.0/12.0)*x0_B0(0,0) -
      (1.0/4.0)*x0_B0(4,0) + ((4.0/3.0))*x0_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0) -
      (1.0/2.0)*x0_B0(2,0) - (1.0/4.0)*x0_B0(-1,0) + ((1.0/12.0))*x0_B0(3,0) + ((3.0/2.0))*x0_B0(1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*x0_B0(-1,0) + 3*x0_B0(-2,0) - (4.0/3.0)*x0_B0(-3,0) + ((1.0/4.0))*x0_B0(-4,0) +
      ((25.0/12.0))*x0_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*x0_B0(-2,0) - (3.0/2.0)*x0_B0(-1,0) -
      (1.0/12.0)*x0_B0(-3,0) + ((1.0/4.0))*x0_B0(1,0) + ((5.0/6.0))*x0_B0(0,0)
)
: (
   -(2.0/3.0)*x0_B0(-1,0) -
      (1.0/12.0)*x0_B0(2,0) + ((1.0/12.0))*x0_B0(-2,0) + ((2.0/3.0))*x0_B0(1,0)
)))));

    d1_x1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*x1_B0(0,2) + 4*x1_B0(0,1) - (25.0/12.0)*x1_B0(0,0) -
      (1.0/4.0)*x1_B0(0,4) + ((4.0/3.0))*x1_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0) -
      (1.0/2.0)*x1_B0(0,2) - (1.0/4.0)*x1_B0(0,-1) + ((1.0/12.0))*x1_B0(0,3) + ((3.0/2.0))*x1_B0(0,1)
)
: (
  
      -(2.0/3.0)*x1_B0(0,-1) - (1.0/12.0)*x1_B0(0,2) + ((1.0/12.0))*x1_B0(0,-2) + ((2.0/3.0))*x1_B0(0,1)
)));

   wk0_B0(0,0) = d1_x0_dx;

   wk1_B0(0,0) = d1_x0_dy;

   wk2_B0(0,0) = d1_x1_dx;

   wk3_B0(0,0) = d1_x1_dy;

   detJ_B0(0,0) = d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx;

   D00_B0(0,0) = d1_x1_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D01_B0(0,0) = -d1_x0_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D10_B0(0,0) = -d1_x1_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D11_B0(0,0) = d1_x0_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

}

 void opensbliblock00Kernel053(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(-1,0) = D00_B0(1,0);

   D01_B0(-1,0) = D01_B0(1,0);

   D10_B0(-1,0) = D10_B0(1,0);

   D11_B0(-1,0) = D11_B0(1,0);

   detJ_B0(-1,0) = detJ_B0(1,0);

   D00_B0(-2,0) = D00_B0(2,0);

   D01_B0(-2,0) = D01_B0(2,0);

   D10_B0(-2,0) = D10_B0(2,0);

   D11_B0(-2,0) = D11_B0(2,0);

   detJ_B0(-2,0) = detJ_B0(2,0);

   D00_B0(-3,0) = D00_B0(3,0);

   D01_B0(-3,0) = D01_B0(3,0);

   D10_B0(-3,0) = D10_B0(3,0);

   D11_B0(-3,0) = D11_B0(3,0);

   detJ_B0(-3,0) = detJ_B0(3,0);

   D00_B0(-4,0) = D00_B0(4,0);

   D01_B0(-4,0) = D01_B0(4,0);

   D10_B0(-4,0) = D10_B0(4,0);

   D11_B0(-4,0) = D11_B0(4,0);

   detJ_B0(-4,0) = detJ_B0(4,0);

}

 void opensbliblock00Kernel054(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(1,0) = D00_B0(-1,0);

   D01_B0(1,0) = D01_B0(-1,0);

   D10_B0(1,0) = D10_B0(-1,0);

   D11_B0(1,0) = D11_B0(-1,0);

   detJ_B0(1,0) = detJ_B0(-1,0);

   D00_B0(2,0) = D00_B0(-2,0);

   D01_B0(2,0) = D01_B0(-2,0);

   D10_B0(2,0) = D10_B0(-2,0);

   D11_B0(2,0) = D11_B0(-2,0);

   detJ_B0(2,0) = detJ_B0(-2,0);

   D00_B0(3,0) = D00_B0(-3,0);

   D01_B0(3,0) = D01_B0(-3,0);

   D10_B0(3,0) = D10_B0(-3,0);

   D11_B0(3,0) = D11_B0(-3,0);

   detJ_B0(3,0) = detJ_B0(-3,0);

   D00_B0(4,0) = D00_B0(-4,0);

   D01_B0(4,0) = D01_B0(-4,0);

   D10_B0(4,0) = D10_B0(-4,0);

   D11_B0(4,0) = D11_B0(-4,0);

   detJ_B0(4,0) = detJ_B0(-4,0);

}

 void opensbliblock00Kernel055(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(0,-1) = D00_B0(0,1);

   D01_B0(0,-1) = D01_B0(0,1);

   D10_B0(0,-1) = D10_B0(0,1);

   D11_B0(0,-1) = D11_B0(0,1);

   detJ_B0(0,-1) = detJ_B0(0,1);

   D00_B0(0,-2) = D00_B0(0,2);

   D01_B0(0,-2) = D01_B0(0,2);

   D10_B0(0,-2) = D10_B0(0,2);

   D11_B0(0,-2) = D11_B0(0,2);

   detJ_B0(0,-2) = detJ_B0(0,2);

   D00_B0(0,-3) = D00_B0(0,3);

   D01_B0(0,-3) = D01_B0(0,3);

   D10_B0(0,-3) = D10_B0(0,3);

   D11_B0(0,-3) = D11_B0(0,3);

   detJ_B0(0,-3) = detJ_B0(0,3);

   D00_B0(0,-4) = D00_B0(0,4);

   D01_B0(0,-4) = D01_B0(0,4);

   D10_B0(0,-4) = D10_B0(0,4);

   D11_B0(0,-4) = D11_B0(0,4);

   detJ_B0(0,-4) = detJ_B0(0,4);

}

 void opensbliblock00Kernel056(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0)
{
   D00_B0(0,1) = D00_B0(0,-1);

   D01_B0(0,1) = D01_B0(0,-1);

   D10_B0(0,1) = D10_B0(0,-1);

   D11_B0(0,1) = D11_B0(0,-1);

   detJ_B0(0,1) = detJ_B0(0,-1);

   D00_B0(0,2) = D00_B0(0,-2);

   D01_B0(0,2) = D01_B0(0,-2);

   D10_B0(0,2) = D10_B0(0,-2);

   D11_B0(0,2) = D11_B0(0,-2);

   detJ_B0(0,2) = detJ_B0(0,-2);

   D00_B0(0,3) = D00_B0(0,-3);

   D01_B0(0,3) = D01_B0(0,-3);

   D10_B0(0,3) = D10_B0(0,-3);

   D11_B0(0,3) = D11_B0(0,-3);

   detJ_B0(0,3) = detJ_B0(0,-3);

   D00_B0(0,4) = D00_B0(0,-4);

   D01_B0(0,4) = D01_B0(0,-4);

   D10_B0(0,4) = D10_B0(0,-4);

   D11_B0(0,4) = D11_B0(0,-4);

   detJ_B0(0,4) = detJ_B0(0,-4);

}

 void opensbliblock00Kernel061(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
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
    d1_D10_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D10_B0(2,0) + 4*D10_B0(1,0) - (25.0/12.0)*D10_B0(0,0) -
      (1.0/4.0)*D10_B0(4,0) + ((4.0/3.0))*D10_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D10_B0(0,0) -
      (1.0/2.0)*D10_B0(2,0) - (1.0/4.0)*D10_B0(-1,0) + ((1.0/12.0))*D10_B0(3,0) + ((3.0/2.0))*D10_B0(1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*D10_B0(-1,0) + 3*D10_B0(-2,0) - (4.0/3.0)*D10_B0(-3,0) + ((1.0/4.0))*D10_B0(-4,0) +
      ((25.0/12.0))*D10_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*D10_B0(-2,0) - (3.0/2.0)*D10_B0(-1,0)
      - (1.0/12.0)*D10_B0(-3,0) + ((1.0/4.0))*D10_B0(1,0) + ((5.0/6.0))*D10_B0(0,0)
)
: (
   -(2.0/3.0)*D10_B0(-1,0) -
      (1.0/12.0)*D10_B0(2,0) + ((1.0/12.0))*D10_B0(-2,0) + ((2.0/3.0))*D10_B0(1,0)
)))));

    d1_D11_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D11_B0(2,0) + 4*D11_B0(1,0) - (25.0/12.0)*D11_B0(0,0) -
      (1.0/4.0)*D11_B0(4,0) + ((4.0/3.0))*D11_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D11_B0(0,0) -
      (1.0/2.0)*D11_B0(2,0) - (1.0/4.0)*D11_B0(-1,0) + ((1.0/12.0))*D11_B0(3,0) + ((3.0/2.0))*D11_B0(1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*D11_B0(-1,0) + 3*D11_B0(-2,0) - (4.0/3.0)*D11_B0(-3,0) + ((1.0/4.0))*D11_B0(-4,0) +
      ((25.0/12.0))*D11_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*D11_B0(-2,0) - (3.0/2.0)*D11_B0(-1,0)
      - (1.0/12.0)*D11_B0(-3,0) + ((1.0/4.0))*D11_B0(1,0) + ((5.0/6.0))*D11_B0(0,0)
)
: (
   -(2.0/3.0)*D11_B0(-1,0) -
      (1.0/12.0)*D11_B0(2,0) + ((1.0/12.0))*D11_B0(-2,0) + ((2.0/3.0))*D11_B0(1,0)
)))));

    d1_D01_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D01_B0(2,0) + 4*D01_B0(1,0) - (25.0/12.0)*D01_B0(0,0) -
      (1.0/4.0)*D01_B0(4,0) + ((4.0/3.0))*D01_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D01_B0(0,0) -
      (1.0/2.0)*D01_B0(2,0) - (1.0/4.0)*D01_B0(-1,0) + ((1.0/12.0))*D01_B0(3,0) + ((3.0/2.0))*D01_B0(1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*D01_B0(-1,0) + 3*D01_B0(-2,0) - (4.0/3.0)*D01_B0(-3,0) + ((1.0/4.0))*D01_B0(-4,0) +
      ((25.0/12.0))*D01_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*D01_B0(-2,0) - (3.0/2.0)*D01_B0(-1,0)
      - (1.0/12.0)*D01_B0(-3,0) + ((1.0/4.0))*D01_B0(1,0) + ((5.0/6.0))*D01_B0(0,0)
)
: (
   -(2.0/3.0)*D01_B0(-1,0) -
      (1.0/12.0)*D01_B0(2,0) + ((1.0/12.0))*D01_B0(-2,0) + ((2.0/3.0))*D01_B0(1,0)
)))));

    d1_D00_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D00_B0(0,2) + 4*D00_B0(0,1) - (25.0/12.0)*D00_B0(0,0) -
      (1.0/4.0)*D00_B0(0,4) + ((4.0/3.0))*D00_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D00_B0(0,0) -
      (1.0/2.0)*D00_B0(0,2) - (1.0/4.0)*D00_B0(0,-1) + ((1.0/12.0))*D00_B0(0,3) + ((3.0/2.0))*D00_B0(0,1)
)
: (
  
      -(2.0/3.0)*D00_B0(0,-1) - (1.0/12.0)*D00_B0(0,2) + ((1.0/12.0))*D00_B0(0,-2) + ((2.0/3.0))*D00_B0(0,1)
)));

    d1_D00_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*D00_B0(2,0) + 4*D00_B0(1,0) - (25.0/12.0)*D00_B0(0,0) -
      (1.0/4.0)*D00_B0(4,0) + ((4.0/3.0))*D00_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*D00_B0(0,0) -
      (1.0/2.0)*D00_B0(2,0) - (1.0/4.0)*D00_B0(-1,0) + ((1.0/12.0))*D00_B0(3,0) + ((3.0/2.0))*D00_B0(1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*D00_B0(-1,0) + 3*D00_B0(-2,0) - (4.0/3.0)*D00_B0(-3,0) + ((1.0/4.0))*D00_B0(-4,0) +
      ((25.0/12.0))*D00_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*D00_B0(-2,0) - (3.0/2.0)*D00_B0(-1,0)
      - (1.0/12.0)*D00_B0(-3,0) + ((1.0/4.0))*D00_B0(1,0) + ((5.0/6.0))*D00_B0(0,0)
)
: (
   -(2.0/3.0)*D00_B0(-1,0) -
      (1.0/12.0)*D00_B0(2,0) + ((1.0/12.0))*D00_B0(-2,0) + ((2.0/3.0))*D00_B0(1,0)
)))));

    d1_D11_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D11_B0(0,2) + 4*D11_B0(0,1) - (25.0/12.0)*D11_B0(0,0) -
      (1.0/4.0)*D11_B0(0,4) + ((4.0/3.0))*D11_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D11_B0(0,0) -
      (1.0/2.0)*D11_B0(0,2) - (1.0/4.0)*D11_B0(0,-1) + ((1.0/12.0))*D11_B0(0,3) + ((3.0/2.0))*D11_B0(0,1)
)
: (
  
      -(2.0/3.0)*D11_B0(0,-1) - (1.0/12.0)*D11_B0(0,2) + ((1.0/12.0))*D11_B0(0,-2) + ((2.0/3.0))*D11_B0(0,1)
)));

    d1_D10_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D10_B0(0,2) + 4*D10_B0(0,1) - (25.0/12.0)*D10_B0(0,0) -
      (1.0/4.0)*D10_B0(0,4) + ((4.0/3.0))*D10_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D10_B0(0,0) -
      (1.0/2.0)*D10_B0(0,2) - (1.0/4.0)*D10_B0(0,-1) + ((1.0/12.0))*D10_B0(0,3) + ((3.0/2.0))*D10_B0(0,1)
)
: (
  
      -(2.0/3.0)*D10_B0(0,-1) - (1.0/12.0)*D10_B0(0,2) + ((1.0/12.0))*D10_B0(0,-2) + ((2.0/3.0))*D10_B0(0,1)
)));

    d1_D01_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*D01_B0(0,2) + 4*D01_B0(0,1) - (25.0/12.0)*D01_B0(0,0) -
      (1.0/4.0)*D01_B0(0,4) + ((4.0/3.0))*D01_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*D01_B0(0,0) -
      (1.0/2.0)*D01_B0(0,2) - (1.0/4.0)*D01_B0(0,-1) + ((1.0/12.0))*D01_B0(0,3) + ((3.0/2.0))*D01_B0(0,1)
)
: (
  
      -(2.0/3.0)*D01_B0(0,-1) - (1.0/12.0)*D01_B0(0,2) + ((1.0/12.0))*D01_B0(0,-2) + ((2.0/3.0))*D01_B0(0,1)
)));

   SD000_B0(0,0) = d1_D00_dx;

   SD001_B0(0,0) = d1_D00_dy;

   SD010_B0(0,0) = d1_D01_dx;

   SD011_B0(0,0) = d1_D01_dy;

   SD100_B0(0,0) = d1_D10_dx;

   SD101_B0(0,0) = d1_D10_dy;

   SD110_B0(0,0) = d1_D11_dx;

   SD111_B0(0,0) = d1_D11_dy;

}

void opensbliblock00Kernel045(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,0) = rho_B0(-1,0);

   rhou0_B0(0,0) = rhou0_B0(-1,0);

   rhou1_B0(0,0) = rhou1_B0(-1,0);

   rhoE_B0(0,0) = rhoE_B0(-1,0);

}

void opensbliblock00Kernel046(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,0) = rho_B0(-1,0);

   rhou0_B0(0,0) = rhou0_B0(-1,0);

   rhou1_B0(0,0) = rhou1_B0(-1,0);

   rhoE_B0(0,0) = rhoE_B0(-1,0);

   rho_B0(1,0) = rho_B0(-1,0);

   rhou0_B0(1,0) = rhou0_B0(-1,0);

   rhou1_B0(1,0) = rhou1_B0(-1,0);

   rhoE_B0(1,0) = rhoE_B0(-1,0);

   rho_B0(2,0) = rho_B0(-1,0);

   rhou0_B0(2,0) = rhou0_B0(-1,0);

   rhou1_B0(2,0) = rhou1_B0(-1,0);

   rhoE_B0(2,0) = rhoE_B0(-1,0);

   rho_B0(3,0) = rho_B0(-1,0);

   rhou0_B0(3,0) = rhou0_B0(-1,0);

   rhou1_B0(3,0) = rhou1_B0(-1,0);

   rhoE_B0(3,0) = rhoE_B0(-1,0);

   rho_B0(4,0) = rho_B0(-1,0);

   rhou0_B0(4,0) = rhou0_B0(-1,0);

   rhou1_B0(4,0) = rhou1_B0(-1,0);

   rhoE_B0(4,0) = rhoE_B0(-1,0);

}

void opensbliblock00Kernel047(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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
   rhou0_B0(0,0) = 0.0;

   rhou1_B0(0,0) = 0.0;

   rhoE_B0(0,0) = Twall*inv2Minf*rho_B0(0,0)/(gama*(-1.0 + gama));

    Pwall = (-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,0)*rhou0_B0(0,0)) +
      ((1.0/2.0))*(rhou1_B0(0,0)*rhou1_B0(0,0)))/rho_B0(0,0) + rhoE_B0(0,0));

   u01 = rhou0_B0(0,1)/rho_B0(0,1);

   u02 = rhou0_B0(0,2)/rho_B0(0,2);

   u03 = rhou0_B0(0,3)/rho_B0(0,3);

   u04 = rhou0_B0(0,4)/rho_B0(0,4);

   u11 = rhou1_B0(0,1)/rho_B0(0,1);

   u12 = rhou1_B0(0,2)/rho_B0(0,2);

   u13 = rhou1_B0(0,3)/rho_B0(0,3);

   u14 = rhou1_B0(0,4)/rho_B0(0,4);

    T_above = (Minf*Minf)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,1)*rhou0_B0(0,1)) +
      ((1.0/2.0))*(rhou1_B0(0,1)*rhou1_B0(0,1)))/rho_B0(0,1) + rhoE_B0(0,1))*gama/rho_B0(0,1);

   T1 = -T_above + 2*Twall;

   rho_halo_1 = (Minf*Minf)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhoE_B0(0,-1) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11))*rho_halo_1;

   T2 = -2*T_above + 3*Twall;

   rho_halo_1 = (Minf*Minf)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rho_halo_2 = (Minf*Minf)*gama*Pwall/T2;

   rho_B0(0,-2) = rho_halo_2;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhou0_B0(0,-2) = -rho_halo_2*u02;

   rhou1_B0(0,-2) = -rho_halo_2*u12;

   rhoE_B0(0,-1) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11))*rho_halo_1;

   rhoE_B0(0,-2) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u02*u02) + (u12*u12))*rho_halo_2;

   T3 = -3*T_above + 4*Twall;

   rho_halo_1 = (Minf*Minf)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rho_halo_2 = (Minf*Minf)*gama*Pwall/T2;

   rho_B0(0,-2) = rho_halo_2;

   rho_halo_3 = (Minf*Minf)*gama*Pwall/T3;

   rho_B0(0,-3) = rho_halo_3;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhou0_B0(0,-2) = -rho_halo_2*u02;

   rhou1_B0(0,-2) = -rho_halo_2*u12;

   rhou0_B0(0,-3) = -rho_halo_3*u03;

   rhou1_B0(0,-3) = -rho_halo_3*u13;

   rhoE_B0(0,-1) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11))*rho_halo_1;

   rhoE_B0(0,-2) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u02*u02) + (u12*u12))*rho_halo_2;

   rhoE_B0(0,-3) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u03*u03) + (u13*u13))*rho_halo_3;

   T4 = -4*T_above + 5*Twall;

   rho_halo_1 = (Minf*Minf)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rho_halo_2 = (Minf*Minf)*gama*Pwall/T2;

   rho_B0(0,-2) = rho_halo_2;

   rho_halo_3 = (Minf*Minf)*gama*Pwall/T3;

   rho_B0(0,-3) = rho_halo_3;

   rho_halo_4 = (Minf*Minf)*gama*Pwall/T4;

   rho_B0(0,-4) = rho_halo_4;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhou0_B0(0,-2) = -rho_halo_2*u02;

   rhou1_B0(0,-2) = -rho_halo_2*u12;

   rhou0_B0(0,-3) = -rho_halo_3*u03;

   rhou1_B0(0,-3) = -rho_halo_3*u13;

   rhou0_B0(0,-4) = -rho_halo_4*u04;

   rhou1_B0(0,-4) = -rho_halo_4*u14;

   rhoE_B0(0,-1) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11))*rho_halo_1;

   rhoE_B0(0,-2) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u02*u02) + (u12*u12))*rho_halo_2;

   rhoE_B0(0,-3) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u03*u03) + (u13*u13))*rho_halo_3;

   rhoE_B0(0,-4) = inv_gamma_m1*Pwall + ((1.0/2.0))*((u04*u04) + (u14*u14))*rho_halo_4;

}

void opensbliblock00Kernel048(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,0) = rho_B0(0,-1);

   rhou0_B0(0,0) = rhou0_B0(0,-1);

   rhou1_B0(0,0) = rhou1_B0(0,-1);

   rhoE_B0(0,0) = rhoE_B0(0,-1);

   rho_B0(0,1) = rho_B0(0,-1);

   rhou0_B0(0,1) = rhou0_B0(0,-1);

   rhou1_B0(0,1) = rhou1_B0(0,-1);

   rhoE_B0(0,1) = rhoE_B0(0,-1);

   rho_B0(0,2) = rho_B0(0,-2);

   rhou0_B0(0,2) = rhou0_B0(0,-2);

   rhou1_B0(0,2) = rhou1_B0(0,-2);

   rhoE_B0(0,2) = rhoE_B0(0,-2);

   rho_B0(0,3) = rho_B0(0,-3);

   rhou0_B0(0,3) = rhou0_B0(0,-3);

   rhou1_B0(0,3) = rhou1_B0(0,-3);

   rhoE_B0(0,3) = rhoE_B0(0,-3);

   rho_B0(0,4) = rho_B0(0,-4);

   rhou0_B0(0,4) = rhou0_B0(0,-4);

   rhou1_B0(0,4) = rhou1_B0(0,-4);

   rhoE_B0(0,4) = rhoE_B0(0,-4);

}

void opensbliblock00Kernel002(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0) = rhou1_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel003(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0) = rhou0_B0(0,0)/rho_B0(0,0);

}

 void opensbliblock00Kernel004(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &p_B0)
{
    p_B0(0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0)*u0_B0(0,0))*rho_B0(0,0) -
      (1.0/2.0)*(u1_B0(0,0)*u1_B0(0,0))*rho_B0(0,0) + rhoE_B0(0,0));

}

 void opensbliblock00Kernel010(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0) = u0_B0(0,0)*D00_B0(0,0) + u1_B0(0,0)*D01_B0(0,0);

}

 void opensbliblock00Kernel016(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U1_B0)
{
   U1_B0(0,0) = u0_B0(0,0)*D10_B0(0,0) + u1_B0(0,0)*D11_B0(0,0);

}

void opensbliblock00Kernel011(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0) = sqrt(gama*p_B0(0,0)/rho_B0(0,0));

}

void opensbliblock00Kernel019(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0) = (Minf*Minf)*gama*p_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel027(const ACC<double> &T_B0, ACC<double> &mu_B0)
{
   mu_B0(0,0) = T_B0(0,0)*sqrt(T_B0(0,0))*(1.0 + SuthT*invRefT)/(SuthT*invRefT + T_B0(0,0));

}

 void opensbliblock00Kernel000(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &U0_B0, const
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double>
&rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0,
ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double AVG_0_D00 = 0.0;
   double AVG_0_D01 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_detJ = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_u1 = 0.0;
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
   double Recon_0 = 0.0;
   double Recon_1 = 0.0;
   double Recon_2 = 0.0;
   double Recon_3 = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_met_fact = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double omega_0 = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
   AVG_0_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(1,0));

   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(1,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(1,0));

   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(1,0));

   AVG_0_D01 = ((1.0/2.0))*(D01_B0(0,0) + D01_B0(1,0));

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0) + D00_B0(1,0));

   AVG_0_detJ = ((1.0/2.0))*(detJ_B0(0,0) + detJ_B0(1,0));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

   inv_AVG_met_fact = pow((AVG_0_D00*AVG_0_D00) + (AVG_0_D01*AVG_0_D01), (-1.0/2.0));

    AVG_0_0_LEV_00 = -(1.0/2.0)*(-2 - (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_0_u1*AVG_0_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u0;

   AVG_0_0_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_u1;

   AVG_0_0_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = (AVG_0_D00*AVG_0_u1 - AVG_0_D01*AVG_0_u0)*inv_AVG_met_fact*inv_AVG_rho;

   AVG_0_0_LEV_11 = AVG_0_D01*inv_AVG_met_fact*inv_AVG_rho;

   AVG_0_0_LEV_12 = -AVG_0_D00*inv_AVG_met_fact*inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) - (AVG_0_u0*AVG_0_u0)*gama -
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact +
      2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_21 = 0.707106781186547*(-gama*AVG_0_u0 + AVG_0_D00*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u0)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_22 = 0.707106781186547*(-gama*AVG_0_u1 + AVG_0_D01*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*(-(AVG_0_u0*AVG_0_u0) - (AVG_0_u1*AVG_0_u1) + (AVG_0_u0*AVG_0_u0)*gama +
      (AVG_0_u1*AVG_0_u1)*gama + 2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact +
      2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_31 = -0.707106781186547*(-AVG_0_u0 + gama*AVG_0_u0 +
      AVG_0_D00*AVG_0_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_32 = -0.707106781186547*(-AVG_0_u1 + gama*AVG_0_u1 +
      AVG_0_D01*AVG_0_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (p_B0(-2,0)*U0_B0(-2,0)*AVG_0_0_LEV_03 + p_B0(-2,0)*D00_B0(-2,0)*AVG_0_0_LEV_01 +
      p_B0(-2,0)*D01_B0(-2,0)*AVG_0_0_LEV_02 + U0_B0(-2,0)*rho_B0(-2,0)*AVG_0_0_LEV_00 +
      U0_B0(-2,0)*rhoE_B0(-2,0)*AVG_0_0_LEV_03 + U0_B0(-2,0)*rhou0_B0(-2,0)*AVG_0_0_LEV_01 +
      U0_B0(-2,0)*rhou1_B0(-2,0)*AVG_0_0_LEV_02)*detJ_B0(-2,0);

    CF_10 = (p_B0(-2,0)*D00_B0(-2,0)*AVG_0_0_LEV_11 + p_B0(-2,0)*D01_B0(-2,0)*AVG_0_0_LEV_12 +
      U0_B0(-2,0)*rho_B0(-2,0)*AVG_0_0_LEV_10 + U0_B0(-2,0)*rhou0_B0(-2,0)*AVG_0_0_LEV_11 +
      U0_B0(-2,0)*rhou1_B0(-2,0)*AVG_0_0_LEV_12)*detJ_B0(-2,0);

    CF_20 = (p_B0(-2,0)*U0_B0(-2,0)*AVG_0_0_LEV_23 + p_B0(-2,0)*D00_B0(-2,0)*AVG_0_0_LEV_21 +
      p_B0(-2,0)*D01_B0(-2,0)*AVG_0_0_LEV_22 + U0_B0(-2,0)*rho_B0(-2,0)*AVG_0_0_LEV_20 +
      U0_B0(-2,0)*rhoE_B0(-2,0)*AVG_0_0_LEV_23 + U0_B0(-2,0)*rhou0_B0(-2,0)*AVG_0_0_LEV_21 +
      U0_B0(-2,0)*rhou1_B0(-2,0)*AVG_0_0_LEV_22)*detJ_B0(-2,0);

    CF_30 = (p_B0(-2,0)*U0_B0(-2,0)*AVG_0_0_LEV_33 + p_B0(-2,0)*D00_B0(-2,0)*AVG_0_0_LEV_31 +
      p_B0(-2,0)*D01_B0(-2,0)*AVG_0_0_LEV_32 + U0_B0(-2,0)*rho_B0(-2,0)*AVG_0_0_LEV_30 +
      U0_B0(-2,0)*rhoE_B0(-2,0)*AVG_0_0_LEV_33 + U0_B0(-2,0)*rhou0_B0(-2,0)*AVG_0_0_LEV_31 +
      U0_B0(-2,0)*rhou1_B0(-2,0)*AVG_0_0_LEV_32)*detJ_B0(-2,0);

    CS_00 = rho_B0(-2,0)*AVG_0_0_LEV_00 + rhoE_B0(-2,0)*AVG_0_0_LEV_03 + rhou0_B0(-2,0)*AVG_0_0_LEV_01 +
      rhou1_B0(-2,0)*AVG_0_0_LEV_02;

   CS_10 = rho_B0(-2,0)*AVG_0_0_LEV_10 + rhou0_B0(-2,0)*AVG_0_0_LEV_11 + rhou1_B0(-2,0)*AVG_0_0_LEV_12;

    CS_20 = rho_B0(-2,0)*AVG_0_0_LEV_20 + rhoE_B0(-2,0)*AVG_0_0_LEV_23 + rhou0_B0(-2,0)*AVG_0_0_LEV_21 +
      rhou1_B0(-2,0)*AVG_0_0_LEV_22;

    CS_30 = rho_B0(-2,0)*AVG_0_0_LEV_30 + rhoE_B0(-2,0)*AVG_0_0_LEV_33 + rhou0_B0(-2,0)*AVG_0_0_LEV_31 +
      rhou1_B0(-2,0)*AVG_0_0_LEV_32;

    CF_01 = (p_B0(-1,0)*U0_B0(-1,0)*AVG_0_0_LEV_03 + p_B0(-1,0)*D00_B0(-1,0)*AVG_0_0_LEV_01 +
      p_B0(-1,0)*D01_B0(-1,0)*AVG_0_0_LEV_02 + U0_B0(-1,0)*rho_B0(-1,0)*AVG_0_0_LEV_00 +
      U0_B0(-1,0)*rhoE_B0(-1,0)*AVG_0_0_LEV_03 + U0_B0(-1,0)*rhou0_B0(-1,0)*AVG_0_0_LEV_01 +
      U0_B0(-1,0)*rhou1_B0(-1,0)*AVG_0_0_LEV_02)*detJ_B0(-1,0);

    CF_11 = (p_B0(-1,0)*D00_B0(-1,0)*AVG_0_0_LEV_11 + p_B0(-1,0)*D01_B0(-1,0)*AVG_0_0_LEV_12 +
      U0_B0(-1,0)*rho_B0(-1,0)*AVG_0_0_LEV_10 + U0_B0(-1,0)*rhou0_B0(-1,0)*AVG_0_0_LEV_11 +
      U0_B0(-1,0)*rhou1_B0(-1,0)*AVG_0_0_LEV_12)*detJ_B0(-1,0);

    CF_21 = (p_B0(-1,0)*U0_B0(-1,0)*AVG_0_0_LEV_23 + p_B0(-1,0)*D00_B0(-1,0)*AVG_0_0_LEV_21 +
      p_B0(-1,0)*D01_B0(-1,0)*AVG_0_0_LEV_22 + U0_B0(-1,0)*rho_B0(-1,0)*AVG_0_0_LEV_20 +
      U0_B0(-1,0)*rhoE_B0(-1,0)*AVG_0_0_LEV_23 + U0_B0(-1,0)*rhou0_B0(-1,0)*AVG_0_0_LEV_21 +
      U0_B0(-1,0)*rhou1_B0(-1,0)*AVG_0_0_LEV_22)*detJ_B0(-1,0);

    CF_31 = (p_B0(-1,0)*U0_B0(-1,0)*AVG_0_0_LEV_33 + p_B0(-1,0)*D00_B0(-1,0)*AVG_0_0_LEV_31 +
      p_B0(-1,0)*D01_B0(-1,0)*AVG_0_0_LEV_32 + U0_B0(-1,0)*rho_B0(-1,0)*AVG_0_0_LEV_30 +
      U0_B0(-1,0)*rhoE_B0(-1,0)*AVG_0_0_LEV_33 + U0_B0(-1,0)*rhou0_B0(-1,0)*AVG_0_0_LEV_31 +
      U0_B0(-1,0)*rhou1_B0(-1,0)*AVG_0_0_LEV_32)*detJ_B0(-1,0);

    CS_01 = rho_B0(-1,0)*AVG_0_0_LEV_00 + rhoE_B0(-1,0)*AVG_0_0_LEV_03 + rhou0_B0(-1,0)*AVG_0_0_LEV_01 +
      rhou1_B0(-1,0)*AVG_0_0_LEV_02;

   CS_11 = rho_B0(-1,0)*AVG_0_0_LEV_10 + rhou0_B0(-1,0)*AVG_0_0_LEV_11 + rhou1_B0(-1,0)*AVG_0_0_LEV_12;

    CS_21 = rho_B0(-1,0)*AVG_0_0_LEV_20 + rhoE_B0(-1,0)*AVG_0_0_LEV_23 + rhou0_B0(-1,0)*AVG_0_0_LEV_21 +
      rhou1_B0(-1,0)*AVG_0_0_LEV_22;

    CS_31 = rho_B0(-1,0)*AVG_0_0_LEV_30 + rhoE_B0(-1,0)*AVG_0_0_LEV_33 + rhou0_B0(-1,0)*AVG_0_0_LEV_31 +
      rhou1_B0(-1,0)*AVG_0_0_LEV_32;

    CF_02 = (p_B0(0,0)*U0_B0(0,0)*AVG_0_0_LEV_03 + p_B0(0,0)*D00_B0(0,0)*AVG_0_0_LEV_01 +
      p_B0(0,0)*D01_B0(0,0)*AVG_0_0_LEV_02 + U0_B0(0,0)*rho_B0(0,0)*AVG_0_0_LEV_00 +
      U0_B0(0,0)*rhoE_B0(0,0)*AVG_0_0_LEV_03 + U0_B0(0,0)*rhou0_B0(0,0)*AVG_0_0_LEV_01 +
      U0_B0(0,0)*rhou1_B0(0,0)*AVG_0_0_LEV_02)*detJ_B0(0,0);

    CF_12 = (p_B0(0,0)*D00_B0(0,0)*AVG_0_0_LEV_11 + p_B0(0,0)*D01_B0(0,0)*AVG_0_0_LEV_12 +
      U0_B0(0,0)*rho_B0(0,0)*AVG_0_0_LEV_10 + U0_B0(0,0)*rhou0_B0(0,0)*AVG_0_0_LEV_11 +
      U0_B0(0,0)*rhou1_B0(0,0)*AVG_0_0_LEV_12)*detJ_B0(0,0);

    CF_22 = (p_B0(0,0)*U0_B0(0,0)*AVG_0_0_LEV_23 + p_B0(0,0)*D00_B0(0,0)*AVG_0_0_LEV_21 +
      p_B0(0,0)*D01_B0(0,0)*AVG_0_0_LEV_22 + U0_B0(0,0)*rho_B0(0,0)*AVG_0_0_LEV_20 +
      U0_B0(0,0)*rhoE_B0(0,0)*AVG_0_0_LEV_23 + U0_B0(0,0)*rhou0_B0(0,0)*AVG_0_0_LEV_21 +
      U0_B0(0,0)*rhou1_B0(0,0)*AVG_0_0_LEV_22)*detJ_B0(0,0);

    CF_32 = (p_B0(0,0)*U0_B0(0,0)*AVG_0_0_LEV_33 + p_B0(0,0)*D00_B0(0,0)*AVG_0_0_LEV_31 +
      p_B0(0,0)*D01_B0(0,0)*AVG_0_0_LEV_32 + U0_B0(0,0)*rho_B0(0,0)*AVG_0_0_LEV_30 +
      U0_B0(0,0)*rhoE_B0(0,0)*AVG_0_0_LEV_33 + U0_B0(0,0)*rhou0_B0(0,0)*AVG_0_0_LEV_31 +
      U0_B0(0,0)*rhou1_B0(0,0)*AVG_0_0_LEV_32)*detJ_B0(0,0);

    CS_02 = rho_B0(0,0)*AVG_0_0_LEV_00 + rhoE_B0(0,0)*AVG_0_0_LEV_03 + rhou0_B0(0,0)*AVG_0_0_LEV_01 +
      rhou1_B0(0,0)*AVG_0_0_LEV_02;

   CS_12 = rho_B0(0,0)*AVG_0_0_LEV_10 + rhou0_B0(0,0)*AVG_0_0_LEV_11 + rhou1_B0(0,0)*AVG_0_0_LEV_12;

    CS_22 = rho_B0(0,0)*AVG_0_0_LEV_20 + rhoE_B0(0,0)*AVG_0_0_LEV_23 + rhou0_B0(0,0)*AVG_0_0_LEV_21 +
      rhou1_B0(0,0)*AVG_0_0_LEV_22;

    CS_32 = rho_B0(0,0)*AVG_0_0_LEV_30 + rhoE_B0(0,0)*AVG_0_0_LEV_33 + rhou0_B0(0,0)*AVG_0_0_LEV_31 +
      rhou1_B0(0,0)*AVG_0_0_LEV_32;

    CF_03 = (p_B0(1,0)*U0_B0(1,0)*AVG_0_0_LEV_03 + p_B0(1,0)*D00_B0(1,0)*AVG_0_0_LEV_01 +
      p_B0(1,0)*D01_B0(1,0)*AVG_0_0_LEV_02 + U0_B0(1,0)*rho_B0(1,0)*AVG_0_0_LEV_00 +
      U0_B0(1,0)*rhoE_B0(1,0)*AVG_0_0_LEV_03 + U0_B0(1,0)*rhou0_B0(1,0)*AVG_0_0_LEV_01 +
      U0_B0(1,0)*rhou1_B0(1,0)*AVG_0_0_LEV_02)*detJ_B0(1,0);

    CF_13 = (p_B0(1,0)*D00_B0(1,0)*AVG_0_0_LEV_11 + p_B0(1,0)*D01_B0(1,0)*AVG_0_0_LEV_12 +
      U0_B0(1,0)*rho_B0(1,0)*AVG_0_0_LEV_10 + U0_B0(1,0)*rhou0_B0(1,0)*AVG_0_0_LEV_11 +
      U0_B0(1,0)*rhou1_B0(1,0)*AVG_0_0_LEV_12)*detJ_B0(1,0);

    CF_23 = (p_B0(1,0)*U0_B0(1,0)*AVG_0_0_LEV_23 + p_B0(1,0)*D00_B0(1,0)*AVG_0_0_LEV_21 +
      p_B0(1,0)*D01_B0(1,0)*AVG_0_0_LEV_22 + U0_B0(1,0)*rho_B0(1,0)*AVG_0_0_LEV_20 +
      U0_B0(1,0)*rhoE_B0(1,0)*AVG_0_0_LEV_23 + U0_B0(1,0)*rhou0_B0(1,0)*AVG_0_0_LEV_21 +
      U0_B0(1,0)*rhou1_B0(1,0)*AVG_0_0_LEV_22)*detJ_B0(1,0);

    CF_33 = (p_B0(1,0)*U0_B0(1,0)*AVG_0_0_LEV_33 + p_B0(1,0)*D00_B0(1,0)*AVG_0_0_LEV_31 +
      p_B0(1,0)*D01_B0(1,0)*AVG_0_0_LEV_32 + U0_B0(1,0)*rho_B0(1,0)*AVG_0_0_LEV_30 +
      U0_B0(1,0)*rhoE_B0(1,0)*AVG_0_0_LEV_33 + U0_B0(1,0)*rhou0_B0(1,0)*AVG_0_0_LEV_31 +
      U0_B0(1,0)*rhou1_B0(1,0)*AVG_0_0_LEV_32)*detJ_B0(1,0);

    CS_03 = rho_B0(1,0)*AVG_0_0_LEV_00 + rhoE_B0(1,0)*AVG_0_0_LEV_03 + rhou0_B0(1,0)*AVG_0_0_LEV_01 +
      rhou1_B0(1,0)*AVG_0_0_LEV_02;

   CS_13 = rho_B0(1,0)*AVG_0_0_LEV_10 + rhou0_B0(1,0)*AVG_0_0_LEV_11 + rhou1_B0(1,0)*AVG_0_0_LEV_12;

    CS_23 = rho_B0(1,0)*AVG_0_0_LEV_20 + rhoE_B0(1,0)*AVG_0_0_LEV_23 + rhou0_B0(1,0)*AVG_0_0_LEV_21 +
      rhou1_B0(1,0)*AVG_0_0_LEV_22;

    CS_33 = rho_B0(1,0)*AVG_0_0_LEV_30 + rhoE_B0(1,0)*AVG_0_0_LEV_33 + rhou0_B0(1,0)*AVG_0_0_LEV_31 +
      rhou1_B0(1,0)*AVG_0_0_LEV_32;

    CF_04 = (p_B0(2,0)*U0_B0(2,0)*AVG_0_0_LEV_03 + p_B0(2,0)*D00_B0(2,0)*AVG_0_0_LEV_01 +
      p_B0(2,0)*D01_B0(2,0)*AVG_0_0_LEV_02 + U0_B0(2,0)*rho_B0(2,0)*AVG_0_0_LEV_00 +
      U0_B0(2,0)*rhoE_B0(2,0)*AVG_0_0_LEV_03 + U0_B0(2,0)*rhou0_B0(2,0)*AVG_0_0_LEV_01 +
      U0_B0(2,0)*rhou1_B0(2,0)*AVG_0_0_LEV_02)*detJ_B0(2,0);

    CF_14 = (p_B0(2,0)*D00_B0(2,0)*AVG_0_0_LEV_11 + p_B0(2,0)*D01_B0(2,0)*AVG_0_0_LEV_12 +
      U0_B0(2,0)*rho_B0(2,0)*AVG_0_0_LEV_10 + U0_B0(2,0)*rhou0_B0(2,0)*AVG_0_0_LEV_11 +
      U0_B0(2,0)*rhou1_B0(2,0)*AVG_0_0_LEV_12)*detJ_B0(2,0);

    CF_24 = (p_B0(2,0)*U0_B0(2,0)*AVG_0_0_LEV_23 + p_B0(2,0)*D00_B0(2,0)*AVG_0_0_LEV_21 +
      p_B0(2,0)*D01_B0(2,0)*AVG_0_0_LEV_22 + U0_B0(2,0)*rho_B0(2,0)*AVG_0_0_LEV_20 +
      U0_B0(2,0)*rhoE_B0(2,0)*AVG_0_0_LEV_23 + U0_B0(2,0)*rhou0_B0(2,0)*AVG_0_0_LEV_21 +
      U0_B0(2,0)*rhou1_B0(2,0)*AVG_0_0_LEV_22)*detJ_B0(2,0);

    CF_34 = (p_B0(2,0)*U0_B0(2,0)*AVG_0_0_LEV_33 + p_B0(2,0)*D00_B0(2,0)*AVG_0_0_LEV_31 +
      p_B0(2,0)*D01_B0(2,0)*AVG_0_0_LEV_32 + U0_B0(2,0)*rho_B0(2,0)*AVG_0_0_LEV_30 +
      U0_B0(2,0)*rhoE_B0(2,0)*AVG_0_0_LEV_33 + U0_B0(2,0)*rhou0_B0(2,0)*AVG_0_0_LEV_31 +
      U0_B0(2,0)*rhou1_B0(2,0)*AVG_0_0_LEV_32)*detJ_B0(2,0);

    CS_04 = rho_B0(2,0)*AVG_0_0_LEV_00 + rhoE_B0(2,0)*AVG_0_0_LEV_03 + rhou0_B0(2,0)*AVG_0_0_LEV_01 +
      rhou1_B0(2,0)*AVG_0_0_LEV_02;

   CS_14 = rho_B0(2,0)*AVG_0_0_LEV_10 + rhou0_B0(2,0)*AVG_0_0_LEV_11 + rhou1_B0(2,0)*AVG_0_0_LEV_12;

    CS_24 = rho_B0(2,0)*AVG_0_0_LEV_20 + rhoE_B0(2,0)*AVG_0_0_LEV_23 + rhou0_B0(2,0)*AVG_0_0_LEV_21 +
      rhou1_B0(2,0)*AVG_0_0_LEV_22;

    CS_34 = rho_B0(2,0)*AVG_0_0_LEV_30 + rhoE_B0(2,0)*AVG_0_0_LEV_33 + rhou0_B0(2,0)*AVG_0_0_LEV_31 +
      rhou1_B0(2,0)*AVG_0_0_LEV_32;

    CF_05 = (p_B0(3,0)*U0_B0(3,0)*AVG_0_0_LEV_03 + p_B0(3,0)*D00_B0(3,0)*AVG_0_0_LEV_01 +
      p_B0(3,0)*D01_B0(3,0)*AVG_0_0_LEV_02 + U0_B0(3,0)*rho_B0(3,0)*AVG_0_0_LEV_00 +
      U0_B0(3,0)*rhoE_B0(3,0)*AVG_0_0_LEV_03 + U0_B0(3,0)*rhou0_B0(3,0)*AVG_0_0_LEV_01 +
      U0_B0(3,0)*rhou1_B0(3,0)*AVG_0_0_LEV_02)*detJ_B0(3,0);

    CF_15 = (p_B0(3,0)*D00_B0(3,0)*AVG_0_0_LEV_11 + p_B0(3,0)*D01_B0(3,0)*AVG_0_0_LEV_12 +
      U0_B0(3,0)*rho_B0(3,0)*AVG_0_0_LEV_10 + U0_B0(3,0)*rhou0_B0(3,0)*AVG_0_0_LEV_11 +
      U0_B0(3,0)*rhou1_B0(3,0)*AVG_0_0_LEV_12)*detJ_B0(3,0);

    CF_25 = (p_B0(3,0)*U0_B0(3,0)*AVG_0_0_LEV_23 + p_B0(3,0)*D00_B0(3,0)*AVG_0_0_LEV_21 +
      p_B0(3,0)*D01_B0(3,0)*AVG_0_0_LEV_22 + U0_B0(3,0)*rho_B0(3,0)*AVG_0_0_LEV_20 +
      U0_B0(3,0)*rhoE_B0(3,0)*AVG_0_0_LEV_23 + U0_B0(3,0)*rhou0_B0(3,0)*AVG_0_0_LEV_21 +
      U0_B0(3,0)*rhou1_B0(3,0)*AVG_0_0_LEV_22)*detJ_B0(3,0);

    CF_35 = (p_B0(3,0)*U0_B0(3,0)*AVG_0_0_LEV_33 + p_B0(3,0)*D00_B0(3,0)*AVG_0_0_LEV_31 +
      p_B0(3,0)*D01_B0(3,0)*AVG_0_0_LEV_32 + U0_B0(3,0)*rho_B0(3,0)*AVG_0_0_LEV_30 +
      U0_B0(3,0)*rhoE_B0(3,0)*AVG_0_0_LEV_33 + U0_B0(3,0)*rhou0_B0(3,0)*AVG_0_0_LEV_31 +
      U0_B0(3,0)*rhou1_B0(3,0)*AVG_0_0_LEV_32)*detJ_B0(3,0);

    CS_05 = rho_B0(3,0)*AVG_0_0_LEV_00 + rhoE_B0(3,0)*AVG_0_0_LEV_03 + rhou0_B0(3,0)*AVG_0_0_LEV_01 +
      rhou1_B0(3,0)*AVG_0_0_LEV_02;

   CS_15 = rho_B0(3,0)*AVG_0_0_LEV_10 + rhou0_B0(3,0)*AVG_0_0_LEV_11 + rhou1_B0(3,0)*AVG_0_0_LEV_12;

    CS_25 = rho_B0(3,0)*AVG_0_0_LEV_20 + rhoE_B0(3,0)*AVG_0_0_LEV_23 + rhou0_B0(3,0)*AVG_0_0_LEV_21 +
      rhou1_B0(3,0)*AVG_0_0_LEV_22;

    CS_35 = rho_B0(3,0)*AVG_0_0_LEV_30 + rhoE_B0(3,0)*AVG_0_0_LEV_33 + rhou0_B0(3,0)*AVG_0_0_LEV_31 +
      rhou1_B0(3,0)*AVG_0_0_LEV_32;

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)), fabs(u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)));

   max_lambda_11 = max_lambda_00;

    max_lambda_22 = shock_filter_control*fmax(fabs(sqrt((D00_B0(1,0)*D00_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)) +
      (D01_B0(1,0)*D01_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)))*a_B0(1,0) + u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)), fabs(sqrt((D00_B0(0,0)*D00_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D01_B0(0,0)*D01_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)));

    max_lambda_33 = shock_filter_control*fmax(fabs(-sqrt((D00_B0(0,0)*D00_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D01_B0(0,0)*D01_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)), fabs(-sqrt((D00_B0(1,0)*D00_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)) +
      (D01_B0(1,0)*D01_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)))*a_B0(1,0) + u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)));

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

    Recon_3 = (-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_0 + (-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*omega_2 +
      (-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_1 + Recon_3;

    wk0_B0(0,0) = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a + 0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a +
      Recon_0;

    wk1_B0(0,0) = AVG_0_u0*Recon_0 + AVG_0_D01*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*(AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0)*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*(-AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0)*AVG_0_rho*Recon_3*inv_AVG_a;

    wk2_B0(0,0) = AVG_0_u1*Recon_0 - AVG_0_D00*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*(AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1)*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*(-AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1)*AVG_0_rho*Recon_3*inv_AVG_a;

    wk3_B0(0,0) = (((1.0/2.0))*(AVG_0_u0*AVG_0_u0) + ((1.0/2.0))*(AVG_0_u1*AVG_0_u1))*Recon_0 +
      (AVG_0_D01*AVG_0_u0*inv_AVG_met_fact - AVG_0_D00*AVG_0_u1*inv_AVG_met_fact)*AVG_0_rho*Recon_1 +
      0.707106781186547*(((AVG_0_a*AVG_0_a) + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) +
      (AVG_0_u1*AVG_0_u1))*gamma_m1)*invgamma_m1 + (AVG_0_D00*AVG_0_u0*inv_AVG_met_fact +
      AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)*AVG_0_a)*AVG_0_rho*Recon_2*inv_AVG_a + 0.707106781186547*(((AVG_0_a*AVG_0_a)
      + ((1.0/2.0))*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1))*gamma_m1)*invgamma_m1 -
      (AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)*AVG_0_a)*AVG_0_rho*Recon_3*inv_AVG_a;

}

 void opensbliblock00Kernel001(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &U1_B0, const
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double>
&rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0,
ACC<double> &wk4_B0, ACC<double> &wk5_B0, ACC<double> &wk6_B0, ACC<double> &wk7_B0)
{
   double AVG_1_1_LEV_00 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double AVG_1_D10 = 0.0;
   double AVG_1_D11 = 0.0;
   double AVG_1_a = 0.0;
   double AVG_1_detJ = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_u0 = 0.0;
   double AVG_1_u1 = 0.0;
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
   double Recon_0 = 0.0;
   double Recon_1 = 0.0;
   double Recon_2 = 0.0;
   double Recon_3 = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double beta_0 = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_met_fact = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double omega_0 = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
   AVG_1_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(0,1));

   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(0,1));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(0,1));

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(0,1));

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0) + D11_B0(0,1));

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0) + D10_B0(0,1));

   AVG_1_detJ = ((1.0/2.0))*(detJ_B0(0,0) + detJ_B0(0,1));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   inv_AVG_met_fact = pow((AVG_1_D10*AVG_1_D10) + (AVG_1_D11*AVG_1_D11), (-1.0/2.0));

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a) -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a) + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u0;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_1_u1;

   AVG_1_1_LEV_03 = -(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_1_1_LEV_10 = (AVG_1_D10*AVG_1_u1 - AVG_1_D11*AVG_1_u0)*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_11 = AVG_1_D11*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_12 = -AVG_1_D10*inv_AVG_met_fact*inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) - (AVG_1_u0*AVG_1_u0)*gama -
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_21 = 0.707106781186547*(-gama*AVG_1_u0 + AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_22 = 0.707106781186547*(-gama*AVG_1_u1 + AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) + (AVG_1_u0*AVG_1_u0)*gama +
      (AVG_1_u1*AVG_1_u1)*gama + 2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_31 = -0.707106781186547*(-AVG_1_u0 + gama*AVG_1_u0 +
      AVG_1_D10*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_32 = -0.707106781186547*(-AVG_1_u1 + gama*AVG_1_u1 +
      AVG_1_D11*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (p_B0(0,-2)*U1_B0(0,-2)*AVG_1_1_LEV_03 + p_B0(0,-2)*D10_B0(0,-2)*AVG_1_1_LEV_01 +
      p_B0(0,-2)*D11_B0(0,-2)*AVG_1_1_LEV_02 + U1_B0(0,-2)*rho_B0(0,-2)*AVG_1_1_LEV_00 +
      U1_B0(0,-2)*rhoE_B0(0,-2)*AVG_1_1_LEV_03 + U1_B0(0,-2)*rhou0_B0(0,-2)*AVG_1_1_LEV_01 +
      U1_B0(0,-2)*rhou1_B0(0,-2)*AVG_1_1_LEV_02)*detJ_B0(0,-2);

    CF_10 = (p_B0(0,-2)*D10_B0(0,-2)*AVG_1_1_LEV_11 + p_B0(0,-2)*D11_B0(0,-2)*AVG_1_1_LEV_12 +
      U1_B0(0,-2)*rho_B0(0,-2)*AVG_1_1_LEV_10 + U1_B0(0,-2)*rhou0_B0(0,-2)*AVG_1_1_LEV_11 +
      U1_B0(0,-2)*rhou1_B0(0,-2)*AVG_1_1_LEV_12)*detJ_B0(0,-2);

    CF_20 = (p_B0(0,-2)*U1_B0(0,-2)*AVG_1_1_LEV_23 + p_B0(0,-2)*D10_B0(0,-2)*AVG_1_1_LEV_21 +
      p_B0(0,-2)*D11_B0(0,-2)*AVG_1_1_LEV_22 + U1_B0(0,-2)*rho_B0(0,-2)*AVG_1_1_LEV_20 +
      U1_B0(0,-2)*rhoE_B0(0,-2)*AVG_1_1_LEV_23 + U1_B0(0,-2)*rhou0_B0(0,-2)*AVG_1_1_LEV_21 +
      U1_B0(0,-2)*rhou1_B0(0,-2)*AVG_1_1_LEV_22)*detJ_B0(0,-2);

    CF_30 = (p_B0(0,-2)*U1_B0(0,-2)*AVG_1_1_LEV_33 + p_B0(0,-2)*D10_B0(0,-2)*AVG_1_1_LEV_31 +
      p_B0(0,-2)*D11_B0(0,-2)*AVG_1_1_LEV_32 + U1_B0(0,-2)*rho_B0(0,-2)*AVG_1_1_LEV_30 +
      U1_B0(0,-2)*rhoE_B0(0,-2)*AVG_1_1_LEV_33 + U1_B0(0,-2)*rhou0_B0(0,-2)*AVG_1_1_LEV_31 +
      U1_B0(0,-2)*rhou1_B0(0,-2)*AVG_1_1_LEV_32)*detJ_B0(0,-2);

    CS_00 = rho_B0(0,-2)*AVG_1_1_LEV_00 + rhoE_B0(0,-2)*AVG_1_1_LEV_03 + rhou0_B0(0,-2)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-2)*AVG_1_1_LEV_02;

   CS_10 = rho_B0(0,-2)*AVG_1_1_LEV_10 + rhou0_B0(0,-2)*AVG_1_1_LEV_11 + rhou1_B0(0,-2)*AVG_1_1_LEV_12;

    CS_20 = rho_B0(0,-2)*AVG_1_1_LEV_20 + rhoE_B0(0,-2)*AVG_1_1_LEV_23 + rhou0_B0(0,-2)*AVG_1_1_LEV_21 +
      rhou1_B0(0,-2)*AVG_1_1_LEV_22;

    CS_30 = rho_B0(0,-2)*AVG_1_1_LEV_30 + rhoE_B0(0,-2)*AVG_1_1_LEV_33 + rhou0_B0(0,-2)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-2)*AVG_1_1_LEV_32;

    CF_01 = (p_B0(0,-1)*U1_B0(0,-1)*AVG_1_1_LEV_03 + p_B0(0,-1)*D10_B0(0,-1)*AVG_1_1_LEV_01 +
      p_B0(0,-1)*D11_B0(0,-1)*AVG_1_1_LEV_02 + U1_B0(0,-1)*rho_B0(0,-1)*AVG_1_1_LEV_00 +
      U1_B0(0,-1)*rhoE_B0(0,-1)*AVG_1_1_LEV_03 + U1_B0(0,-1)*rhou0_B0(0,-1)*AVG_1_1_LEV_01 +
      U1_B0(0,-1)*rhou1_B0(0,-1)*AVG_1_1_LEV_02)*detJ_B0(0,-1);

    CF_11 = (p_B0(0,-1)*D10_B0(0,-1)*AVG_1_1_LEV_11 + p_B0(0,-1)*D11_B0(0,-1)*AVG_1_1_LEV_12 +
      U1_B0(0,-1)*rho_B0(0,-1)*AVG_1_1_LEV_10 + U1_B0(0,-1)*rhou0_B0(0,-1)*AVG_1_1_LEV_11 +
      U1_B0(0,-1)*rhou1_B0(0,-1)*AVG_1_1_LEV_12)*detJ_B0(0,-1);

    CF_21 = (p_B0(0,-1)*U1_B0(0,-1)*AVG_1_1_LEV_23 + p_B0(0,-1)*D10_B0(0,-1)*AVG_1_1_LEV_21 +
      p_B0(0,-1)*D11_B0(0,-1)*AVG_1_1_LEV_22 + U1_B0(0,-1)*rho_B0(0,-1)*AVG_1_1_LEV_20 +
      U1_B0(0,-1)*rhoE_B0(0,-1)*AVG_1_1_LEV_23 + U1_B0(0,-1)*rhou0_B0(0,-1)*AVG_1_1_LEV_21 +
      U1_B0(0,-1)*rhou1_B0(0,-1)*AVG_1_1_LEV_22)*detJ_B0(0,-1);

    CF_31 = (p_B0(0,-1)*U1_B0(0,-1)*AVG_1_1_LEV_33 + p_B0(0,-1)*D10_B0(0,-1)*AVG_1_1_LEV_31 +
      p_B0(0,-1)*D11_B0(0,-1)*AVG_1_1_LEV_32 + U1_B0(0,-1)*rho_B0(0,-1)*AVG_1_1_LEV_30 +
      U1_B0(0,-1)*rhoE_B0(0,-1)*AVG_1_1_LEV_33 + U1_B0(0,-1)*rhou0_B0(0,-1)*AVG_1_1_LEV_31 +
      U1_B0(0,-1)*rhou1_B0(0,-1)*AVG_1_1_LEV_32)*detJ_B0(0,-1);

    CS_01 = rho_B0(0,-1)*AVG_1_1_LEV_00 + rhoE_B0(0,-1)*AVG_1_1_LEV_03 + rhou0_B0(0,-1)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-1)*AVG_1_1_LEV_02;

   CS_11 = rho_B0(0,-1)*AVG_1_1_LEV_10 + rhou0_B0(0,-1)*AVG_1_1_LEV_11 + rhou1_B0(0,-1)*AVG_1_1_LEV_12;

    CS_21 = rho_B0(0,-1)*AVG_1_1_LEV_20 + rhoE_B0(0,-1)*AVG_1_1_LEV_23 + rhou0_B0(0,-1)*AVG_1_1_LEV_21 +
      rhou1_B0(0,-1)*AVG_1_1_LEV_22;

    CS_31 = rho_B0(0,-1)*AVG_1_1_LEV_30 + rhoE_B0(0,-1)*AVG_1_1_LEV_33 + rhou0_B0(0,-1)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-1)*AVG_1_1_LEV_32;

    CF_02 = (p_B0(0,0)*U1_B0(0,0)*AVG_1_1_LEV_03 + p_B0(0,0)*D10_B0(0,0)*AVG_1_1_LEV_01 +
      p_B0(0,0)*D11_B0(0,0)*AVG_1_1_LEV_02 + U1_B0(0,0)*rho_B0(0,0)*AVG_1_1_LEV_00 +
      U1_B0(0,0)*rhoE_B0(0,0)*AVG_1_1_LEV_03 + U1_B0(0,0)*rhou0_B0(0,0)*AVG_1_1_LEV_01 +
      U1_B0(0,0)*rhou1_B0(0,0)*AVG_1_1_LEV_02)*detJ_B0(0,0);

    CF_12 = (p_B0(0,0)*D10_B0(0,0)*AVG_1_1_LEV_11 + p_B0(0,0)*D11_B0(0,0)*AVG_1_1_LEV_12 +
      U1_B0(0,0)*rho_B0(0,0)*AVG_1_1_LEV_10 + U1_B0(0,0)*rhou0_B0(0,0)*AVG_1_1_LEV_11 +
      U1_B0(0,0)*rhou1_B0(0,0)*AVG_1_1_LEV_12)*detJ_B0(0,0);

    CF_22 = (p_B0(0,0)*U1_B0(0,0)*AVG_1_1_LEV_23 + p_B0(0,0)*D10_B0(0,0)*AVG_1_1_LEV_21 +
      p_B0(0,0)*D11_B0(0,0)*AVG_1_1_LEV_22 + U1_B0(0,0)*rho_B0(0,0)*AVG_1_1_LEV_20 +
      U1_B0(0,0)*rhoE_B0(0,0)*AVG_1_1_LEV_23 + U1_B0(0,0)*rhou0_B0(0,0)*AVG_1_1_LEV_21 +
      U1_B0(0,0)*rhou1_B0(0,0)*AVG_1_1_LEV_22)*detJ_B0(0,0);

    CF_32 = (p_B0(0,0)*U1_B0(0,0)*AVG_1_1_LEV_33 + p_B0(0,0)*D10_B0(0,0)*AVG_1_1_LEV_31 +
      p_B0(0,0)*D11_B0(0,0)*AVG_1_1_LEV_32 + U1_B0(0,0)*rho_B0(0,0)*AVG_1_1_LEV_30 +
      U1_B0(0,0)*rhoE_B0(0,0)*AVG_1_1_LEV_33 + U1_B0(0,0)*rhou0_B0(0,0)*AVG_1_1_LEV_31 +
      U1_B0(0,0)*rhou1_B0(0,0)*AVG_1_1_LEV_32)*detJ_B0(0,0);

    CS_02 = rho_B0(0,0)*AVG_1_1_LEV_00 + rhoE_B0(0,0)*AVG_1_1_LEV_03 + rhou0_B0(0,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,0)*AVG_1_1_LEV_02;

   CS_12 = rho_B0(0,0)*AVG_1_1_LEV_10 + rhou0_B0(0,0)*AVG_1_1_LEV_11 + rhou1_B0(0,0)*AVG_1_1_LEV_12;

    CS_22 = rho_B0(0,0)*AVG_1_1_LEV_20 + rhoE_B0(0,0)*AVG_1_1_LEV_23 + rhou0_B0(0,0)*AVG_1_1_LEV_21 +
      rhou1_B0(0,0)*AVG_1_1_LEV_22;

    CS_32 = rho_B0(0,0)*AVG_1_1_LEV_30 + rhoE_B0(0,0)*AVG_1_1_LEV_33 + rhou0_B0(0,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,0)*AVG_1_1_LEV_32;

    CF_03 = (p_B0(0,1)*U1_B0(0,1)*AVG_1_1_LEV_03 + p_B0(0,1)*D10_B0(0,1)*AVG_1_1_LEV_01 +
      p_B0(0,1)*D11_B0(0,1)*AVG_1_1_LEV_02 + U1_B0(0,1)*rho_B0(0,1)*AVG_1_1_LEV_00 +
      U1_B0(0,1)*rhoE_B0(0,1)*AVG_1_1_LEV_03 + U1_B0(0,1)*rhou0_B0(0,1)*AVG_1_1_LEV_01 +
      U1_B0(0,1)*rhou1_B0(0,1)*AVG_1_1_LEV_02)*detJ_B0(0,1);

    CF_13 = (p_B0(0,1)*D10_B0(0,1)*AVG_1_1_LEV_11 + p_B0(0,1)*D11_B0(0,1)*AVG_1_1_LEV_12 +
      U1_B0(0,1)*rho_B0(0,1)*AVG_1_1_LEV_10 + U1_B0(0,1)*rhou0_B0(0,1)*AVG_1_1_LEV_11 +
      U1_B0(0,1)*rhou1_B0(0,1)*AVG_1_1_LEV_12)*detJ_B0(0,1);

    CF_23 = (p_B0(0,1)*U1_B0(0,1)*AVG_1_1_LEV_23 + p_B0(0,1)*D10_B0(0,1)*AVG_1_1_LEV_21 +
      p_B0(0,1)*D11_B0(0,1)*AVG_1_1_LEV_22 + U1_B0(0,1)*rho_B0(0,1)*AVG_1_1_LEV_20 +
      U1_B0(0,1)*rhoE_B0(0,1)*AVG_1_1_LEV_23 + U1_B0(0,1)*rhou0_B0(0,1)*AVG_1_1_LEV_21 +
      U1_B0(0,1)*rhou1_B0(0,1)*AVG_1_1_LEV_22)*detJ_B0(0,1);

    CF_33 = (p_B0(0,1)*U1_B0(0,1)*AVG_1_1_LEV_33 + p_B0(0,1)*D10_B0(0,1)*AVG_1_1_LEV_31 +
      p_B0(0,1)*D11_B0(0,1)*AVG_1_1_LEV_32 + U1_B0(0,1)*rho_B0(0,1)*AVG_1_1_LEV_30 +
      U1_B0(0,1)*rhoE_B0(0,1)*AVG_1_1_LEV_33 + U1_B0(0,1)*rhou0_B0(0,1)*AVG_1_1_LEV_31 +
      U1_B0(0,1)*rhou1_B0(0,1)*AVG_1_1_LEV_32)*detJ_B0(0,1);

    CS_03 = rho_B0(0,1)*AVG_1_1_LEV_00 + rhoE_B0(0,1)*AVG_1_1_LEV_03 + rhou0_B0(0,1)*AVG_1_1_LEV_01 +
      rhou1_B0(0,1)*AVG_1_1_LEV_02;

   CS_13 = rho_B0(0,1)*AVG_1_1_LEV_10 + rhou0_B0(0,1)*AVG_1_1_LEV_11 + rhou1_B0(0,1)*AVG_1_1_LEV_12;

    CS_23 = rho_B0(0,1)*AVG_1_1_LEV_20 + rhoE_B0(0,1)*AVG_1_1_LEV_23 + rhou0_B0(0,1)*AVG_1_1_LEV_21 +
      rhou1_B0(0,1)*AVG_1_1_LEV_22;

    CS_33 = rho_B0(0,1)*AVG_1_1_LEV_30 + rhoE_B0(0,1)*AVG_1_1_LEV_33 + rhou0_B0(0,1)*AVG_1_1_LEV_31 +
      rhou1_B0(0,1)*AVG_1_1_LEV_32;

    CF_04 = (p_B0(0,2)*U1_B0(0,2)*AVG_1_1_LEV_03 + p_B0(0,2)*D10_B0(0,2)*AVG_1_1_LEV_01 +
      p_B0(0,2)*D11_B0(0,2)*AVG_1_1_LEV_02 + U1_B0(0,2)*rho_B0(0,2)*AVG_1_1_LEV_00 +
      U1_B0(0,2)*rhoE_B0(0,2)*AVG_1_1_LEV_03 + U1_B0(0,2)*rhou0_B0(0,2)*AVG_1_1_LEV_01 +
      U1_B0(0,2)*rhou1_B0(0,2)*AVG_1_1_LEV_02)*detJ_B0(0,2);

    CF_14 = (p_B0(0,2)*D10_B0(0,2)*AVG_1_1_LEV_11 + p_B0(0,2)*D11_B0(0,2)*AVG_1_1_LEV_12 +
      U1_B0(0,2)*rho_B0(0,2)*AVG_1_1_LEV_10 + U1_B0(0,2)*rhou0_B0(0,2)*AVG_1_1_LEV_11 +
      U1_B0(0,2)*rhou1_B0(0,2)*AVG_1_1_LEV_12)*detJ_B0(0,2);

    CF_24 = (p_B0(0,2)*U1_B0(0,2)*AVG_1_1_LEV_23 + p_B0(0,2)*D10_B0(0,2)*AVG_1_1_LEV_21 +
      p_B0(0,2)*D11_B0(0,2)*AVG_1_1_LEV_22 + U1_B0(0,2)*rho_B0(0,2)*AVG_1_1_LEV_20 +
      U1_B0(0,2)*rhoE_B0(0,2)*AVG_1_1_LEV_23 + U1_B0(0,2)*rhou0_B0(0,2)*AVG_1_1_LEV_21 +
      U1_B0(0,2)*rhou1_B0(0,2)*AVG_1_1_LEV_22)*detJ_B0(0,2);

    CF_34 = (p_B0(0,2)*U1_B0(0,2)*AVG_1_1_LEV_33 + p_B0(0,2)*D10_B0(0,2)*AVG_1_1_LEV_31 +
      p_B0(0,2)*D11_B0(0,2)*AVG_1_1_LEV_32 + U1_B0(0,2)*rho_B0(0,2)*AVG_1_1_LEV_30 +
      U1_B0(0,2)*rhoE_B0(0,2)*AVG_1_1_LEV_33 + U1_B0(0,2)*rhou0_B0(0,2)*AVG_1_1_LEV_31 +
      U1_B0(0,2)*rhou1_B0(0,2)*AVG_1_1_LEV_32)*detJ_B0(0,2);

    CS_04 = rho_B0(0,2)*AVG_1_1_LEV_00 + rhoE_B0(0,2)*AVG_1_1_LEV_03 + rhou0_B0(0,2)*AVG_1_1_LEV_01 +
      rhou1_B0(0,2)*AVG_1_1_LEV_02;

   CS_14 = rho_B0(0,2)*AVG_1_1_LEV_10 + rhou0_B0(0,2)*AVG_1_1_LEV_11 + rhou1_B0(0,2)*AVG_1_1_LEV_12;

    CS_24 = rho_B0(0,2)*AVG_1_1_LEV_20 + rhoE_B0(0,2)*AVG_1_1_LEV_23 + rhou0_B0(0,2)*AVG_1_1_LEV_21 +
      rhou1_B0(0,2)*AVG_1_1_LEV_22;

    CS_34 = rho_B0(0,2)*AVG_1_1_LEV_30 + rhoE_B0(0,2)*AVG_1_1_LEV_33 + rhou0_B0(0,2)*AVG_1_1_LEV_31 +
      rhou1_B0(0,2)*AVG_1_1_LEV_32;

    CF_05 = (p_B0(0,3)*U1_B0(0,3)*AVG_1_1_LEV_03 + p_B0(0,3)*D10_B0(0,3)*AVG_1_1_LEV_01 +
      p_B0(0,3)*D11_B0(0,3)*AVG_1_1_LEV_02 + U1_B0(0,3)*rho_B0(0,3)*AVG_1_1_LEV_00 +
      U1_B0(0,3)*rhoE_B0(0,3)*AVG_1_1_LEV_03 + U1_B0(0,3)*rhou0_B0(0,3)*AVG_1_1_LEV_01 +
      U1_B0(0,3)*rhou1_B0(0,3)*AVG_1_1_LEV_02)*detJ_B0(0,3);

    CF_15 = (p_B0(0,3)*D10_B0(0,3)*AVG_1_1_LEV_11 + p_B0(0,3)*D11_B0(0,3)*AVG_1_1_LEV_12 +
      U1_B0(0,3)*rho_B0(0,3)*AVG_1_1_LEV_10 + U1_B0(0,3)*rhou0_B0(0,3)*AVG_1_1_LEV_11 +
      U1_B0(0,3)*rhou1_B0(0,3)*AVG_1_1_LEV_12)*detJ_B0(0,3);

    CF_25 = (p_B0(0,3)*U1_B0(0,3)*AVG_1_1_LEV_23 + p_B0(0,3)*D10_B0(0,3)*AVG_1_1_LEV_21 +
      p_B0(0,3)*D11_B0(0,3)*AVG_1_1_LEV_22 + U1_B0(0,3)*rho_B0(0,3)*AVG_1_1_LEV_20 +
      U1_B0(0,3)*rhoE_B0(0,3)*AVG_1_1_LEV_23 + U1_B0(0,3)*rhou0_B0(0,3)*AVG_1_1_LEV_21 +
      U1_B0(0,3)*rhou1_B0(0,3)*AVG_1_1_LEV_22)*detJ_B0(0,3);

    CF_35 = (p_B0(0,3)*U1_B0(0,3)*AVG_1_1_LEV_33 + p_B0(0,3)*D10_B0(0,3)*AVG_1_1_LEV_31 +
      p_B0(0,3)*D11_B0(0,3)*AVG_1_1_LEV_32 + U1_B0(0,3)*rho_B0(0,3)*AVG_1_1_LEV_30 +
      U1_B0(0,3)*rhoE_B0(0,3)*AVG_1_1_LEV_33 + U1_B0(0,3)*rhou0_B0(0,3)*AVG_1_1_LEV_31 +
      U1_B0(0,3)*rhou1_B0(0,3)*AVG_1_1_LEV_32)*detJ_B0(0,3);

    CS_05 = rho_B0(0,3)*AVG_1_1_LEV_00 + rhoE_B0(0,3)*AVG_1_1_LEV_03 + rhou0_B0(0,3)*AVG_1_1_LEV_01 +
      rhou1_B0(0,3)*AVG_1_1_LEV_02;

   CS_15 = rho_B0(0,3)*AVG_1_1_LEV_10 + rhou0_B0(0,3)*AVG_1_1_LEV_11 + rhou1_B0(0,3)*AVG_1_1_LEV_12;

    CS_25 = rho_B0(0,3)*AVG_1_1_LEV_20 + rhoE_B0(0,3)*AVG_1_1_LEV_23 + rhou0_B0(0,3)*AVG_1_1_LEV_21 +
      rhou1_B0(0,3)*AVG_1_1_LEV_22;

    CS_35 = rho_B0(0,3)*AVG_1_1_LEV_30 + rhoE_B0(0,3)*AVG_1_1_LEV_33 + rhou0_B0(0,3)*AVG_1_1_LEV_31 +
      rhou1_B0(0,3)*AVG_1_1_LEV_32;

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)), fabs(u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)));

   max_lambda_11 = max_lambda_00;

    max_lambda_22 = shock_filter_control*fmax(fabs(sqrt((D10_B0(0,1)*D10_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)) +
      (D11_B0(0,1)*D11_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)))*a_B0(0,1) + u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)), fabs(sqrt((D10_B0(0,0)*D10_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D11_B0(0,0)*D11_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)));

    max_lambda_33 = shock_filter_control*fmax(fabs(-sqrt((D10_B0(0,1)*D10_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)) +
      (D11_B0(0,1)*D11_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)))*a_B0(0,1) + u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)), fabs(-sqrt((D10_B0(0,0)*D10_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D11_B0(0,0)*D11_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)));

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

    Recon_3 = (-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_0 + (-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*omega_2 +
      (-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_1 + Recon_3;

    wk4_B0(0,0) = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a + 0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a +
      Recon_0;

    wk5_B0(0,0) = AVG_1_u0*Recon_0 + AVG_1_D11*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*(AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0)*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*(-AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0)*AVG_1_rho*Recon_3*inv_AVG_a;

    wk6_B0(0,0) = AVG_1_u1*Recon_0 - AVG_1_D10*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*(AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1)*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*(-AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1)*AVG_1_rho*Recon_3*inv_AVG_a;

    wk7_B0(0,0) = (((1.0/2.0))*(AVG_1_u0*AVG_1_u0) + ((1.0/2.0))*(AVG_1_u1*AVG_1_u1))*Recon_0 +
      (AVG_1_D11*AVG_1_u0*inv_AVG_met_fact - AVG_1_D10*AVG_1_u1*inv_AVG_met_fact)*AVG_1_rho*Recon_1 +
      0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) +
      (AVG_1_u1*AVG_1_u1))*gamma_m1)*invgamma_m1 + (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_2*inv_AVG_a + 0.707106781186547*(((AVG_1_a*AVG_1_a)
      + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1))*gamma_m1)*invgamma_m1 -
      (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_3*inv_AVG_a;

}

 void opensbliblock00Kernel017(const ACC<double> &detJ_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const
ACC<double> &wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double>
&wk6_B0, const ACC<double> &wk7_B0, ACC<double> &Residual0_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0,
ACC<double> &Residual3_B0)
{
    Residual0_B0(0,0) = -((-wk0_B0(-1,0) + wk0_B0(0,0))*invDelta0block0 + (-wk4_B0(0,-1) +
      wk4_B0(0,0))*invDelta1block0)/detJ_B0(0,0);

    Residual1_B0(0,0) = -((-wk1_B0(-1,0) + wk1_B0(0,0))*invDelta0block0 + (-wk5_B0(0,-1) +
      wk5_B0(0,0))*invDelta1block0)/detJ_B0(0,0);

    Residual2_B0(0,0) = -((-wk2_B0(-1,0) + wk2_B0(0,0))*invDelta0block0 + (-wk6_B0(0,-1) +
      wk6_B0(0,0))*invDelta1block0)/detJ_B0(0,0);

    Residual3_B0(0,0) = -((-wk3_B0(-1,0) + wk3_B0(0,0))*invDelta0block0 + (-wk7_B0(0,-1) +
      wk7_B0(0,0))*invDelta1block0)/detJ_B0(0,0);

}

void opensbliblock00Kernel028(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
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

void opensbliblock00Kernel030(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
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

void opensbliblock00Kernel032(const ACC<double> &T_B0, ACC<double> &wk2_B0, const int *idx)
{
   if (idx[0] == 0){

       wk2_B0(0,0) = (-3*T_B0(2,0) + 4*T_B0(1,0) - (25.0/12.0)*T_B0(0,0) - (1.0/4.0)*T_B0(4,0) +
            ((4.0/3.0))*T_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       wk2_B0(0,0) = (-(5.0/6.0)*T_B0(0,0) - (1.0/2.0)*T_B0(2,0) - (1.0/4.0)*T_B0(-1,0) + ((1.0/12.0))*T_B0(3,0) +
            ((3.0/2.0))*T_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       wk2_B0(0,0) = (-4*T_B0(-1,0) + 3*T_B0(-2,0) - (4.0/3.0)*T_B0(-3,0) + ((1.0/4.0))*T_B0(-4,0) +
            ((25.0/12.0))*T_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       wk2_B0(0,0) = (((1.0/2.0))*T_B0(-2,0) - (3.0/2.0)*T_B0(-1,0) - (1.0/12.0)*T_B0(-3,0) + ((1.0/4.0))*T_B0(1,0) +
            ((5.0/6.0))*T_B0(0,0))*invDelta0block0;

   }

   else{

       wk2_B0(0,0) = (-(2.0/3.0)*T_B0(-1,0) - (1.0/12.0)*T_B0(2,0) + ((1.0/12.0))*T_B0(-2,0) +
            ((2.0/3.0))*T_B0(1,0))*invDelta0block0;

   }

}

void opensbliblock00Kernel034(const ACC<double> &u0_B0, ACC<double> &wk3_B0, const int *idx)
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

void opensbliblock00Kernel035(const ACC<double> &u1_B0, ACC<double> &wk4_B0, const int *idx)
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

void opensbliblock00Kernel036(const ACC<double> &T_B0, ACC<double> &wk5_B0, const int *idx)
{
   if (idx[1] == 0){

       wk5_B0(0,0) = (-3*T_B0(0,2) + 4*T_B0(0,1) - (25.0/12.0)*T_B0(0,0) - (1.0/4.0)*T_B0(0,4) +
            ((4.0/3.0))*T_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk5_B0(0,0) = (-(5.0/6.0)*T_B0(0,0) - (1.0/2.0)*T_B0(0,2) - (1.0/4.0)*T_B0(0,-1) + ((1.0/12.0))*T_B0(0,3) +
            ((3.0/2.0))*T_B0(0,1))*invDelta1block0;

   }

   else{

       wk5_B0(0,0) = (-(2.0/3.0)*T_B0(0,-1) - (1.0/12.0)*T_B0(0,2) + ((1.0/12.0))*T_B0(0,-2) +
            ((2.0/3.0))*T_B0(0,1))*invDelta1block0;

   }

}

 void opensbliblock00Kernel041(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
ACC<double> &D11_B0, const ACC<double> &SD000_B0, const ACC<double> &SD001_B0, const ACC<double> &SD010_B0, const
ACC<double> &SD011_B0, const ACC<double> &SD100_B0, const ACC<double> &SD101_B0, const ACC<double> &SD110_B0, const
ACC<double> &SD111_B0, const ACC<double> &T_B0, const ACC<double> &mu_B0, const ACC<double> &u0_B0, const ACC<double>
&u1_B0, const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const ACC<double> &wk3_B0,
const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, ACC<double> &Residual1_B0, ACC<double> &Residual2_B0, ACC<double>
&Residual3_B0, const int *idx)
{
   double d1_mu_dx = 0.0;
   double d1_mu_dy = 0.0;
   double d1_wk0_dy = 0.0;
   double d1_wk1_dy = 0.0;
   double d1_wk2_dy = 0.0;
   double d2_T_dx = 0.0;
   double d2_T_dy = 0.0;
   double d2_u0_dx = 0.0;
   double d2_u0_dy = 0.0;
   double d2_u1_dx = 0.0;
   double d2_u1_dy = 0.0;
   if (idx[0] == 0){

       d1_mu_dx = (-3*mu_B0(2,0) + 4*mu_B0(1,0) - (25.0/12.0)*mu_B0(0,0) - (1.0/4.0)*mu_B0(4,0) +
            ((4.0/3.0))*mu_B0(3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_mu_dx = (-(5.0/6.0)*mu_B0(0,0) - (1.0/2.0)*mu_B0(2,0) - (1.0/4.0)*mu_B0(-1,0) + ((1.0/12.0))*mu_B0(3,0) +
            ((3.0/2.0))*mu_B0(1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_mu_dx = (-4*mu_B0(-1,0) + 3*mu_B0(-2,0) - (4.0/3.0)*mu_B0(-3,0) + ((1.0/4.0))*mu_B0(-4,0) +
            ((25.0/12.0))*mu_B0(0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_mu_dx = (((1.0/2.0))*mu_B0(-2,0) - (3.0/2.0)*mu_B0(-1,0) - (1.0/12.0)*mu_B0(-3,0) + ((1.0/4.0))*mu_B0(1,0) +
            ((5.0/6.0))*mu_B0(0,0))*invDelta0block0;

   }

   else{

       d1_mu_dx = (-(2.0/3.0)*mu_B0(-1,0) - (1.0/12.0)*mu_B0(2,0) + ((1.0/12.0))*mu_B0(-2,0) +
            ((2.0/3.0))*mu_B0(1,0))*invDelta0block0;

   }

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

       d1_mu_dy = (-3*mu_B0(0,2) + 4*mu_B0(0,1) - (25.0/12.0)*mu_B0(0,0) - (1.0/4.0)*mu_B0(0,4) +
            ((4.0/3.0))*mu_B0(0,3))*invDelta1block0;

       d1_wk0_dy = (-3*wk0_B0(0,2) + 4*wk0_B0(0,1) - (25.0/12.0)*wk0_B0(0,0) - (1.0/4.0)*wk0_B0(0,4) +
            ((4.0/3.0))*wk0_B0(0,3))*invDelta1block0;

       d1_wk1_dy = (-3*wk1_B0(0,2) + 4*wk1_B0(0,1) - (25.0/12.0)*wk1_B0(0,0) - (1.0/4.0)*wk1_B0(0,4) +
            ((4.0/3.0))*wk1_B0(0,3))*invDelta1block0;

       d1_wk2_dy = (-3*wk2_B0(0,2) + 4*wk2_B0(0,1) - (25.0/12.0)*wk2_B0(0,0) - (1.0/4.0)*wk2_B0(0,4) +
            ((4.0/3.0))*wk2_B0(0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_mu_dy = (-(5.0/6.0)*mu_B0(0,0) - (1.0/2.0)*mu_B0(0,2) - (1.0/4.0)*mu_B0(0,-1) + ((1.0/12.0))*mu_B0(0,3) +
            ((3.0/2.0))*mu_B0(0,1))*invDelta1block0;

       d1_wk0_dy = (-(5.0/6.0)*wk0_B0(0,0) - (1.0/2.0)*wk0_B0(0,2) - (1.0/4.0)*wk0_B0(0,-1) + ((1.0/12.0))*wk0_B0(0,3) +
            ((3.0/2.0))*wk0_B0(0,1))*invDelta1block0;

       d1_wk1_dy = (-(5.0/6.0)*wk1_B0(0,0) - (1.0/2.0)*wk1_B0(0,2) - (1.0/4.0)*wk1_B0(0,-1) + ((1.0/12.0))*wk1_B0(0,3) +
            ((3.0/2.0))*wk1_B0(0,1))*invDelta1block0;

       d1_wk2_dy = (-(5.0/6.0)*wk2_B0(0,0) - (1.0/2.0)*wk2_B0(0,2) - (1.0/4.0)*wk2_B0(0,-1) + ((1.0/12.0))*wk2_B0(0,3) +
            ((3.0/2.0))*wk2_B0(0,1))*invDelta1block0;

   }

   else{

       d1_mu_dy = (-(2.0/3.0)*mu_B0(0,-1) - (1.0/12.0)*mu_B0(0,2) + ((1.0/12.0))*mu_B0(0,-2) +
            ((2.0/3.0))*mu_B0(0,1))*invDelta1block0;

       d1_wk0_dy = (-(2.0/3.0)*wk0_B0(0,-1) - (1.0/12.0)*wk0_B0(0,2) + ((1.0/12.0))*wk0_B0(0,-2) +
            ((2.0/3.0))*wk0_B0(0,1))*invDelta1block0;

       d1_wk1_dy = (-(2.0/3.0)*wk1_B0(0,-1) - (1.0/12.0)*wk1_B0(0,2) + ((1.0/12.0))*wk1_B0(0,-2) +
            ((2.0/3.0))*wk1_B0(0,1))*invDelta1block0;

       d1_wk2_dy = (-(2.0/3.0)*wk2_B0(0,-1) - (1.0/12.0)*wk2_B0(0,2) + ((1.0/12.0))*wk2_B0(0,-2) +
            ((2.0/3.0))*wk2_B0(0,1))*invDelta1block0;

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

    Residual1_B0(0,0) = (D01_B0(0,0)*d1_mu_dx + D11_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk0_B0(0,0)
      + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0))*invRe + ((1.0/3.0))*(3*(D01_B0(0,0)*D01_B0(0,0))*d2_u0_dx +
      3*(D11_B0(0,0)*D11_B0(0,0))*d2_u0_dy + 4*(D00_B0(0,0)*D00_B0(0,0))*d2_u0_dx + 4*(D10_B0(0,0)*D10_B0(0,0))*d2_u0_dy
      + D00_B0(0,0)*D01_B0(0,0)*d2_u1_dx + D00_B0(0,0)*D11_B0(0,0)*d1_wk1_dy + D01_B0(0,0)*D10_B0(0,0)*d1_wk1_dy +
      D10_B0(0,0)*D11_B0(0,0)*d2_u1_dy - 2*D00_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) -
      2*D00_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) - 2*D10_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) -
      2*D10_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) + 3*D01_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) +
      3*D01_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + 3*D01_B0(0,0)*wk3_B0(0,0)*SD110_B0(0,0) +
      3*D01_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) + 3*D11_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) +
      3*D11_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + 3*D11_B0(0,0)*wk3_B0(0,0)*SD111_B0(0,0) +
      3*D11_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) + 4*D00_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) +
      4*D00_B0(0,0)*wk3_B0(0,0)*SD100_B0(0,0) + 4*D10_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) +
      4*D10_B0(0,0)*wk3_B0(0,0)*SD101_B0(0,0) + 6*D01_B0(0,0)*D11_B0(0,0)*d1_wk0_dy +
      8*D00_B0(0,0)*D10_B0(0,0)*d1_wk0_dy)*invRe*mu_B0(0,0) + ((2.0/3.0))*(D00_B0(0,0)*d1_mu_dx +
      D10_B0(0,0)*d1_mu_dy)*(-D01_B0(0,0)*wk1_B0(0,0) - D11_B0(0,0)*wk4_B0(0,0) + 2*D00_B0(0,0)*wk0_B0(0,0) +
      2*D10_B0(0,0)*wk3_B0(0,0))*invRe + Residual1_B0(0,0);

    Residual2_B0(0,0) = (D00_B0(0,0)*d1_mu_dx + D10_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk0_B0(0,0)
      + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0))*invRe - (2.0/3.0)*(D01_B0(0,0)*d1_mu_dx +
      D11_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk3_B0(0,0) - 2*D01_B0(0,0)*wk1_B0(0,0) -
      2*D11_B0(0,0)*wk4_B0(0,0))*invRe + ((1.0/3.0))*(3*(D00_B0(0,0)*D00_B0(0,0))*d2_u1_dx +
      3*(D10_B0(0,0)*D10_B0(0,0))*d2_u1_dy + 4*(D01_B0(0,0)*D01_B0(0,0))*d2_u1_dx + 4*(D11_B0(0,0)*D11_B0(0,0))*d2_u1_dy
      + D00_B0(0,0)*D01_B0(0,0)*d2_u0_dx + D00_B0(0,0)*D11_B0(0,0)*d1_wk0_dy + D01_B0(0,0)*D10_B0(0,0)*d1_wk0_dy +
      D10_B0(0,0)*D11_B0(0,0)*d2_u0_dy - 2*D01_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) -
      2*D01_B0(0,0)*wk3_B0(0,0)*SD100_B0(0,0) - 2*D11_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) -
      2*D11_B0(0,0)*wk3_B0(0,0)*SD101_B0(0,0) + 3*D00_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) +
      3*D00_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + 3*D00_B0(0,0)*wk3_B0(0,0)*SD110_B0(0,0) +
      3*D00_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) + 3*D10_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) +
      3*D10_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + 3*D10_B0(0,0)*wk3_B0(0,0)*SD111_B0(0,0) +
      3*D10_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) + 4*D01_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) +
      4*D01_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) + 4*D11_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) +
      4*D11_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) + 6*D00_B0(0,0)*D10_B0(0,0)*d1_wk1_dy +
      8*D01_B0(0,0)*D11_B0(0,0)*d1_wk1_dy)*invRe*mu_B0(0,0) + Residual2_B0(0,0);

    Residual3_B0(0,0) = (D00_B0(0,0)*wk1_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) +
      D01_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0))*invRe*mu_B0(0,0) +
      (D00_B0(0,0)*d1_mu_dx + D10_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk0_B0(0,0) +
      D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0))*invRe*u1_B0(0,0) + (D01_B0(0,0)*wk0_B0(0,0) +
      D11_B0(0,0)*wk3_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk3_B0(0,0))*invRe*mu_B0(0,0) + (D01_B0(0,0)*d1_mu_dx + D11_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk1_B0(0,0)
      + D01_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0))*invRe*u0_B0(0,0) -
      (2.0/3.0)*(D01_B0(0,0)*wk1_B0(0,0) + D11_B0(0,0)*wk4_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk3_B0(0,0) -
      2*D01_B0(0,0)*wk1_B0(0,0) - 2*D11_B0(0,0)*wk4_B0(0,0))*invRe*mu_B0(0,0) - (2.0/3.0)*(D01_B0(0,0)*d1_mu_dx +
      D11_B0(0,0)*d1_mu_dy)*(D00_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk3_B0(0,0) - 2*D01_B0(0,0)*wk1_B0(0,0) -
      2*D11_B0(0,0)*wk4_B0(0,0))*invRe*u1_B0(0,0) + ((1.0/3.0))*(3*(D00_B0(0,0)*D00_B0(0,0))*d2_u1_dx +
      3*(D10_B0(0,0)*D10_B0(0,0))*d2_u1_dy + 4*(D01_B0(0,0)*D01_B0(0,0))*d2_u1_dx + 4*(D11_B0(0,0)*D11_B0(0,0))*d2_u1_dy
      + D00_B0(0,0)*D01_B0(0,0)*d2_u0_dx + D00_B0(0,0)*D11_B0(0,0)*d1_wk0_dy + D01_B0(0,0)*D10_B0(0,0)*d1_wk0_dy +
      D10_B0(0,0)*D11_B0(0,0)*d2_u0_dy - 2*D01_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) -
      2*D01_B0(0,0)*wk3_B0(0,0)*SD100_B0(0,0) - 2*D11_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) -
      2*D11_B0(0,0)*wk3_B0(0,0)*SD101_B0(0,0) + 3*D00_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) +
      3*D00_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + 3*D00_B0(0,0)*wk3_B0(0,0)*SD110_B0(0,0) +
      3*D00_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) + 3*D10_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) +
      3*D10_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + 3*D10_B0(0,0)*wk3_B0(0,0)*SD111_B0(0,0) +
      3*D10_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) + 4*D01_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) +
      4*D01_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) + 4*D11_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) +
      4*D11_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) + 6*D00_B0(0,0)*D10_B0(0,0)*d1_wk1_dy +
      8*D01_B0(0,0)*D11_B0(0,0)*d1_wk1_dy)*invRe*mu_B0(0,0)*u1_B0(0,0) +
      ((1.0/3.0))*(3*(D01_B0(0,0)*D01_B0(0,0))*d2_u0_dx + 3*(D11_B0(0,0)*D11_B0(0,0))*d2_u0_dy +
      4*(D00_B0(0,0)*D00_B0(0,0))*d2_u0_dx + 4*(D10_B0(0,0)*D10_B0(0,0))*d2_u0_dy + D00_B0(0,0)*D01_B0(0,0)*d2_u1_dx +
      D00_B0(0,0)*D11_B0(0,0)*d1_wk1_dy + D01_B0(0,0)*D10_B0(0,0)*d1_wk1_dy + D10_B0(0,0)*D11_B0(0,0)*d2_u1_dy -
      2*D00_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) - 2*D00_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) -
      2*D10_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) - 2*D10_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) +
      3*D01_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) + 3*D01_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) +
      3*D01_B0(0,0)*wk3_B0(0,0)*SD110_B0(0,0) + 3*D01_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) +
      3*D11_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) + 3*D11_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) +
      3*D11_B0(0,0)*wk3_B0(0,0)*SD111_B0(0,0) + 3*D11_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) +
      4*D00_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) + 4*D00_B0(0,0)*wk3_B0(0,0)*SD100_B0(0,0) +
      4*D10_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) + 4*D10_B0(0,0)*wk3_B0(0,0)*SD101_B0(0,0) +
      6*D01_B0(0,0)*D11_B0(0,0)*d1_wk0_dy + 8*D00_B0(0,0)*D10_B0(0,0)*d1_wk0_dy)*invRe*mu_B0(0,0)*u0_B0(0,0) +
      ((2.0/3.0))*(D00_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk3_B0(0,0))*(-D01_B0(0,0)*wk1_B0(0,0) -
      D11_B0(0,0)*wk4_B0(0,0) + 2*D00_B0(0,0)*wk0_B0(0,0) + 2*D10_B0(0,0)*wk3_B0(0,0))*invRe*mu_B0(0,0) +
      ((2.0/3.0))*(D00_B0(0,0)*d1_mu_dx + D10_B0(0,0)*d1_mu_dy)*(-D01_B0(0,0)*wk1_B0(0,0) - D11_B0(0,0)*wk4_B0(0,0) +
      2*D00_B0(0,0)*wk0_B0(0,0) + 2*D10_B0(0,0)*wk3_B0(0,0))*invRe*u0_B0(0,0) + (D00_B0(0,0)*wk2_B0(0,0) +
      D10_B0(0,0)*wk5_B0(0,0))*(D00_B0(0,0)*d1_mu_dx + D10_B0(0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 +
      (D01_B0(0,0)*wk2_B0(0,0) + D11_B0(0,0)*wk5_B0(0,0))*(D01_B0(0,0)*d1_mu_dx +
      D11_B0(0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 + ((D00_B0(0,0)*D00_B0(0,0))*d2_T_dx +
      (D01_B0(0,0)*D01_B0(0,0))*d2_T_dx + (D10_B0(0,0)*D10_B0(0,0))*d2_T_dy + (D11_B0(0,0)*D11_B0(0,0))*d2_T_dy +
      D00_B0(0,0)*wk2_B0(0,0)*SD000_B0(0,0) + D00_B0(0,0)*wk5_B0(0,0)*SD100_B0(0,0) +
      D01_B0(0,0)*wk2_B0(0,0)*SD010_B0(0,0) + D01_B0(0,0)*wk5_B0(0,0)*SD110_B0(0,0) +
      D10_B0(0,0)*wk2_B0(0,0)*SD001_B0(0,0) + D10_B0(0,0)*wk5_B0(0,0)*SD101_B0(0,0) +
      D11_B0(0,0)*wk2_B0(0,0)*SD011_B0(0,0) + D11_B0(0,0)*wk5_B0(0,0)*SD111_B0(0,0) +
      2*D00_B0(0,0)*D10_B0(0,0)*d1_wk2_dy +
      2*D01_B0(0,0)*D11_B0(0,0)*d1_wk2_dy)*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0) + Residual3_B0(0,0);

}

 void opensbliblock00Kernel062(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
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
