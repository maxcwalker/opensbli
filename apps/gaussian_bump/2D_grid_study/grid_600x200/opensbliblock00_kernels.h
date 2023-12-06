#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel066(double *rhoE_B0, double *rhou1_B0, double *x0_B0, double *rhou0_B0, double *rho_B0,
double *x1_B0, const int *idx)
{
   double rhou0 = 0.0;
   double rho = 0.0;
   double rhou1 = 0.0;
   double T = 0.0;
   x0_B0[OPS_ACC2(0,0)] = Delta0block0*idx[0];

    x1_B0[OPS_ACC5(0,0)] = (rc6)*H*exp(-rcinv5*pow(Delta0block0*idx[0] - rc7*L, 2)) + (H -
      rc6*H*exp(-rcinv5*pow(Delta0block0*idx[0] - rc7*L, 2)))*sinh(Delta1block0*b*rcinv4*idx[1])/sinh(b);

    rhou0 = ((x1_B0[OPS_ACC5(0,0)] < 4.97849784978498) ? (
   1.12040675895803e-31*pow(x1_B0[OPS_ACC5(0,0)], 50) -
      1.64617224380928e-30*pow(x1_B0[OPS_ACC5(0,0)], 49) + 2.62870108682109e-30*pow(x1_B0[OPS_ACC5(0,0)], 48) +
      3.39928855109623e-29*pow(x1_B0[OPS_ACC5(0,0)], 47) + 6.52089644654981e-29*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      4.38634529645538e-28*pow(x1_B0[OPS_ACC5(0,0)], 45) - 3.88818512285584e-27*pow(x1_B0[OPS_ACC5(0,0)], 44) -
      1.30856760658175e-26*pow(x1_B0[OPS_ACC5(0,0)], 43) + 9.3831523377831e-27*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      3.82232231443795e-25*pow(x1_B0[OPS_ACC5(0,0)], 41) + 2.42163873344882e-24*pow(x1_B0[OPS_ACC5(0,0)], 40) +
      7.68652042157374e-24*pow(x1_B0[OPS_ACC5(0,0)], 39) - 5.32695482451029e-24*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      2.34816367860066e-22*pow(x1_B0[OPS_ACC5(0,0)], 37) - 1.61174235136764e-21*pow(x1_B0[OPS_ACC5(0,0)], 36) -
      6.03582507699181e-21*pow(x1_B0[OPS_ACC5(0,0)], 35) - 3.69195824354356e-21*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      1.2963396142951e-19*pow(x1_B0[OPS_ACC5(0,0)], 33) + 1.07879118563899e-18*pow(x1_B0[OPS_ACC5(0,0)], 32) +
      4.74230390537465e-18*pow(x1_B0[OPS_ACC5(0,0)], 31) + 7.18191748192305e-18*pow(x1_B0[OPS_ACC5(0,0)], 30) -
      7.23783211517809e-17*pow(x1_B0[OPS_ACC5(0,0)], 29) - 7.31734393254316e-16*pow(x1_B0[OPS_ACC5(0,0)], 28) -
      3.46123804622998e-15*pow(x1_B0[OPS_ACC5(0,0)], 27) - 5.53316938994833e-15*pow(x1_B0[OPS_ACC5(0,0)], 26) +
      5.39527666854329e-14*pow(x1_B0[OPS_ACC5(0,0)], 25) + 5.32443613615035e-13*pow(x1_B0[OPS_ACC5(0,0)], 24) +
      2.21682990533008e-12*pow(x1_B0[OPS_ACC5(0,0)], 23) + 3.83395828553926e-13*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      5.84846325117166e-11*pow(x1_B0[OPS_ACC5(0,0)], 21) - 3.79933869681278e-10*pow(x1_B0[OPS_ACC5(0,0)], 20) -
      6.7329423900684e-10*pow(x1_B0[OPS_ACC5(0,0)], 19) + 6.69953011916935e-9*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      5.41899530458238e-8*pow(x1_B0[OPS_ACC5(0,0)], 17) + 7.53741811416735e-8*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      1.18095679679628e-6*pow(x1_B0[OPS_ACC5(0,0)], 15) - 6.26878130906676e-6*pow(x1_B0[OPS_ACC5(0,0)], 14) +
      1.54981250484598e-5*pow(x1_B0[OPS_ACC5(0,0)], 13) + 0.000194792003766469*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      0.000362812287507265*pow(x1_B0[OPS_ACC5(0,0)], 11) - 0.00454247167281625*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      0.0264085802897927*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.0683336112518823*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.10715877779824*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.109002787345017*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.0702989422874367*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.0512688521906877*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.0302098296360661*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.000950967297650773*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      0.540592211622455*x1_B0[OPS_ACC5(0,0)] - 7.41810027442598e-7
)
: (
   0.999999842649273
));

    rhou1 = ((x1_B0[OPS_ACC5(0,0)] < 4.97849784978498) ? (
   -1.09003245349175e-33*pow(x1_B0[OPS_ACC5(0,0)], 50) +
      1.22963332881994e-32*pow(x1_B0[OPS_ACC5(0,0)], 49) + 2.44056217203923e-33*pow(x1_B0[OPS_ACC5(0,0)], 48) -
      2.06348934767763e-31*pow(x1_B0[OPS_ACC5(0,0)], 47) - 9.10601466407113e-31*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      4.43450005585078e-31*pow(x1_B0[OPS_ACC5(0,0)], 45) + 1.71255635507746e-29*pow(x1_B0[OPS_ACC5(0,0)], 44) +
      1.18178647035439e-28*pow(x1_B0[OPS_ACC5(0,0)], 43) + 3.97090031172534e-28*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      7.60497465512482e-30*pow(x1_B0[OPS_ACC5(0,0)], 41) - 9.27913765763701e-27*pow(x1_B0[OPS_ACC5(0,0)], 40) -
      6.76105049972417e-26*pow(x1_B0[OPS_ACC5(0,0)], 39) - 2.76516796901416e-25*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      4.30246632902277e-25*pow(x1_B0[OPS_ACC5(0,0)], 37) + 3.49816996744632e-24*pow(x1_B0[OPS_ACC5(0,0)], 36) +
      3.71169197380773e-23*pow(x1_B0[OPS_ACC5(0,0)], 35) + 1.96556719480685e-22*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      5.79996157602682e-22*pow(x1_B0[OPS_ACC5(0,0)], 33) - 4.73324926870791e-22*pow(x1_B0[OPS_ACC5(0,0)], 32) -
      1.81629120956119e-20*pow(x1_B0[OPS_ACC5(0,0)], 31) - 1.26324259145204e-19*pow(x1_B0[OPS_ACC5(0,0)], 30) -
      4.97372268384972e-19*pow(x1_B0[OPS_ACC5(0,0)], 29) - 5.33429113163157e-19*pow(x1_B0[OPS_ACC5(0,0)], 28) +
      8.70891488331194e-18*pow(x1_B0[OPS_ACC5(0,0)], 27) + 7.79951740748941e-17*pow(x1_B0[OPS_ACC5(0,0)], 26) +
      3.44944603718394e-16*pow(x1_B0[OPS_ACC5(0,0)], 25) + 4.65214979672885e-16*pow(x1_B0[OPS_ACC5(0,0)], 24) -
      5.64624825793885e-15*pow(x1_B0[OPS_ACC5(0,0)], 23) - 5.09797334093984e-14*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      1.95075014697856e-13*pow(x1_B0[OPS_ACC5(0,0)], 21) + 6.23420343314538e-14*pow(x1_B0[OPS_ACC5(0,0)], 20) +
      5.48059812866576e-12*pow(x1_B0[OPS_ACC5(0,0)], 19) + 3.09276992192946e-11*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      2.97270889213143e-11*pow(x1_B0[OPS_ACC5(0,0)], 17) - 6.52068758622014e-10*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      3.80953524026593e-9*pow(x1_B0[OPS_ACC5(0,0)], 15) + 1.38525022708385e-9*pow(x1_B0[OPS_ACC5(0,0)], 14) +
      1.01726115022539e-7*pow(x1_B0[OPS_ACC5(0,0)], 13) + 2.06324351903803e-7*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      2.25277175059587e-6*pow(x1_B0[OPS_ACC5(0,0)], 11) - 4.28641186087153e-6*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      6.14136296005458e-5*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.000200822024340446*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.000356931166795007*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.000397933947164689*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.000242958009012651*pow(x1_B0[OPS_ACC5(0,0)], 5) - 8.7518210691162e-5*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      3.27560586565153e-5*pow(x1_B0[OPS_ACC5(0,0)], 3) + 0.00057320222196052*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      2.75181955664214e-7*x1_B0[OPS_ACC5(0,0)] - 3.94641661590997e-9
)
: (
   0.00213785003134369
));

    T = ((x1_B0[OPS_ACC5(0,0)] < 4.97849784978498) ? (
   -3.99963979334487e-32*pow(x1_B0[OPS_ACC5(0,0)], 50) +
      5.26943973936009e-31*pow(x1_B0[OPS_ACC5(0,0)], 49) - 4.82857207751886e-31*pow(x1_B0[OPS_ACC5(0,0)], 48) -
      1.01007040051659e-29*pow(x1_B0[OPS_ACC5(0,0)], 47) - 2.77003126323023e-29*pow(x1_B0[OPS_ACC5(0,0)], 46) +
      8.00209158782686e-29*pow(x1_B0[OPS_ACC5(0,0)], 45) + 1.04931740177004e-27*pow(x1_B0[OPS_ACC5(0,0)], 44) +
      4.50590524315619e-27*pow(x1_B0[OPS_ACC5(0,0)], 43) + 4.52394274178731e-27*pow(x1_B0[OPS_ACC5(0,0)], 42) -
      7.58711897936253e-26*pow(x1_B0[OPS_ACC5(0,0)], 41) - 6.30279144983186e-25*pow(x1_B0[OPS_ACC5(0,0)], 40) -
      2.61050040826575e-24*pow(x1_B0[OPS_ACC5(0,0)], 39) - 3.35745693522357e-24*pow(x1_B0[OPS_ACC5(0,0)], 38) +
      3.98425505989108e-23*pow(x1_B0[OPS_ACC5(0,0)], 37) + 3.76214851049861e-22*pow(x1_B0[OPS_ACC5(0,0)], 36) +
      1.78961233273755e-21*pow(x1_B0[OPS_ACC5(0,0)], 35) + 3.84545329100199e-21*pow(x1_B0[OPS_ACC5(0,0)], 34) -
      1.664020707376e-20*pow(x1_B0[OPS_ACC5(0,0)], 33) - 2.22156669286193e-19*pow(x1_B0[OPS_ACC5(0,0)], 32) -
      1.22908916267338e-18*pow(x1_B0[OPS_ACC5(0,0)], 31) - 3.4063892799288e-18*pow(x1_B0[OPS_ACC5(0,0)], 30) +
      6.6597531611825e-18*pow(x1_B0[OPS_ACC5(0,0)], 29) + 1.3749495582018e-16*pow(x1_B0[OPS_ACC5(0,0)], 28) +
      8.24661026893089e-16*pow(x1_B0[OPS_ACC5(0,0)], 27) + 2.30607153565108e-15*pow(x1_B0[OPS_ACC5(0,0)], 26) -
      5.46419491653124e-15*pow(x1_B0[OPS_ACC5(0,0)], 25) - 9.91561004128263e-14*pow(x1_B0[OPS_ACC5(0,0)], 24) -
      5.28759645607252e-13*pow(x1_B0[OPS_ACC5(0,0)], 23) - 8.49909268447769e-13*pow(x1_B0[OPS_ACC5(0,0)], 22) +
      8.75332518473403e-12*pow(x1_B0[OPS_ACC5(0,0)], 21) + 7.70275041929402e-11*pow(x1_B0[OPS_ACC5(0,0)], 20) +
      2.1723633725296e-10*pow(x1_B0[OPS_ACC5(0,0)], 19) - 8.82383666813153e-10*pow(x1_B0[OPS_ACC5(0,0)], 18) -
      1.04572282480761e-8*pow(x1_B0[OPS_ACC5(0,0)], 17) - 2.49743253107607e-8*pow(x1_B0[OPS_ACC5(0,0)], 16) +
      1.81257712886885e-7*pow(x1_B0[OPS_ACC5(0,0)], 15) + 1.29224922693375e-6*pow(x1_B0[OPS_ACC5(0,0)], 14) -
      1.57174329246904e-6*pow(x1_B0[OPS_ACC5(0,0)], 13) - 3.65123456908424e-5*pow(x1_B0[OPS_ACC5(0,0)], 12) +
      3.6724978272315e-5*pow(x1_B0[OPS_ACC5(0,0)], 11) + 0.000861767245833591*pow(x1_B0[OPS_ACC5(0,0)], 10) -
      0.00429817425357679*pow(x1_B0[OPS_ACC5(0,0)], 9) + 0.0100831069009663*pow(x1_B0[OPS_ACC5(0,0)], 8) -
      0.0147953043462663*pow(x1_B0[OPS_ACC5(0,0)], 7) + 0.0141130192862291*pow(x1_B0[OPS_ACC5(0,0)], 6) -
      0.00610116051397934*pow(x1_B0[OPS_ACC5(0,0)], 5) + 0.00282172215667811*pow(x1_B0[OPS_ACC5(0,0)], 4) -
      0.000832096282215353*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.0381899646473647*pow(x1_B0[OPS_ACC5(0,0)], 2) -
      5.92688310761302e-6*x1_B0[OPS_ACC5(0,0)] + 1.1224249005153
)
: (
   1.00000015154315
));

   rho = 1.0/T;

   rho_B0[OPS_ACC4(0,0)] = rho;

   rhou0_B0[OPS_ACC3(0,0)] = rhou0;

   rhou1_B0[OPS_ACC1(0,0)] = rhou1;

   rhoE_B0[OPS_ACC0(0,0)] = rcinv10*rcinv8*rcinv9*T*rho + (0.5*pow(rhou0, 2) + 0.5*pow(rhou1, 2))/rho;

}

void opensbliblock00Kernel067(const double *x1_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*x1_B0[OPS_ACC0(0,4)] + 4*x1_B0[OPS_ACC0(0,1)] -
      rc12*x1_B0[OPS_ACC0(0,0)] + (rc13)*x1_B0[OPS_ACC0(0,3)] - 3*x1_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      -rc11*x1_B0[OPS_ACC0(0,-1)] + (rc14)*x1_B0[OPS_ACC0(0,1)] - rc15*x1_B0[OPS_ACC0(0,0)] +
      (rc16)*x1_B0[OPS_ACC0(0,3)] - rc7*x1_B0[OPS_ACC0(0,2)]
)
: (
   (rc16)*x1_B0[OPS_ACC0(0,-2)] -
      rc17*x1_B0[OPS_ACC0(0,-1)] + (rc17)*x1_B0[OPS_ACC0(0,1)] - rc16*x1_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel068(const double *x0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*x0_B0[OPS_ACC0(0,4)] - 3*x0_B0[OPS_ACC0(0,2)] +
      (rc13)*x0_B0[OPS_ACC0(0,3)] - rc12*x0_B0[OPS_ACC0(0,0)] + 4*x0_B0[OPS_ACC0(0,1)]
)
: ((idx[1] == 1) ? (
  
      -rc11*x0_B0[OPS_ACC0(0,-1)] - rc7*x0_B0[OPS_ACC0(0,2)] + (rc16)*x0_B0[OPS_ACC0(0,3)] - rc15*x0_B0[OPS_ACC0(0,0)] +
      (rc14)*x0_B0[OPS_ACC0(0,1)]
)
: (
   -rc17*x0_B0[OPS_ACC0(0,-1)] + (rc16)*x0_B0[OPS_ACC0(0,-2)] -
      rc16*x0_B0[OPS_ACC0(0,2)] + (rc17)*x0_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel069(const double *x0_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   (rc13)*x0_B0[OPS_ACC0(3,0)] - rc11*x0_B0[OPS_ACC0(4,0)] +
      4*x0_B0[OPS_ACC0(1,0)] - 3*x0_B0[OPS_ACC0(2,0)] - rc12*x0_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
  
      -rc11*x0_B0[OPS_ACC0(-1,0)] + (rc16)*x0_B0[OPS_ACC0(3,0)] + (rc14)*x0_B0[OPS_ACC0(1,0)] - rc7*x0_B0[OPS_ACC0(2,0)]
      - rc15*x0_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -4*x0_B0[OPS_ACC0(-1,0)] +
      3*x0_B0[OPS_ACC0(-2,0)] + (rc11)*x0_B0[OPS_ACC0(-4,0)] + (rc12)*x0_B0[OPS_ACC0(0,0)] -
      rc13*x0_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc7)*x0_B0[OPS_ACC0(-2,0)] -
      rc14*x0_B0[OPS_ACC0(-1,0)] + (rc11)*x0_B0[OPS_ACC0(1,0)] + (rc15)*x0_B0[OPS_ACC0(0,0)] -
      rc16*x0_B0[OPS_ACC0(-3,0)]
)
: (
   -rc17*x0_B0[OPS_ACC0(-1,0)] + (rc16)*x0_B0[OPS_ACC0(-2,0)] +
      (rc17)*x0_B0[OPS_ACC0(1,0)] - rc16*x0_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel070(const double *x1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   4*x1_B0[OPS_ACC0(1,0)] - rc11*x1_B0[OPS_ACC0(4,0)] +
      (rc13)*x1_B0[OPS_ACC0(3,0)] - rc12*x1_B0[OPS_ACC0(0,0)] - 3*x1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == 1) ? (
  
      (rc14)*x1_B0[OPS_ACC0(1,0)] + (rc16)*x1_B0[OPS_ACC0(3,0)] - rc11*x1_B0[OPS_ACC0(-1,0)] - rc15*x1_B0[OPS_ACC0(0,0)]
      - rc7*x1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   3*x1_B0[OPS_ACC0(-2,0)] +
      (rc11)*x1_B0[OPS_ACC0(-4,0)] - 4*x1_B0[OPS_ACC0(-1,0)] - rc13*x1_B0[OPS_ACC0(-3,0)] +
      (rc12)*x1_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc14*x1_B0[OPS_ACC0(-1,0)] +
      (rc11)*x1_B0[OPS_ACC0(1,0)] + (rc7)*x1_B0[OPS_ACC0(-2,0)] - rc16*x1_B0[OPS_ACC0(-3,0)] +
      (rc15)*x1_B0[OPS_ACC0(0,0)]
)
: (
   (rc16)*x1_B0[OPS_ACC0(-2,0)] + (rc17)*x1_B0[OPS_ACC0(1,0)] -
      rc17*x1_B0[OPS_ACC0(-1,0)] - rc16*x1_B0[OPS_ACC0(2,0)]
)))));

}

 void opensbliblock00Kernel073(const double *wk3_B0, const double *wk0_B0, const double *wk1_B0, const double *wk2_B0,
double *D00_B0, double *D01_B0, double *D11_B0, double *D10_B0, double *detJ_B0)
{
   detJ_B0[OPS_ACC8(0,0)] = wk0_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] - wk1_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)];

    D00_B0[OPS_ACC4(0,0)] = wk0_B0[OPS_ACC1(0,0)]/(wk0_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      wk1_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)]);

    D01_B0[OPS_ACC5(0,0)] = -wk1_B0[OPS_ACC2(0,0)]/(wk0_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      wk1_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)]);

    D10_B0[OPS_ACC7(0,0)] = -wk3_B0[OPS_ACC0(0,0)]/(wk0_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      wk1_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)]);

    D11_B0[OPS_ACC6(0,0)] = wk2_B0[OPS_ACC3(0,0)]/(wk0_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      wk1_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)]);

}

void opensbliblock00Kernel074(double *D00_B0, double *D01_B0, double *D11_B0, double *D10_B0, double *detJ_B0)
{
   D00_B0[OPS_ACC0(-1,0)] = D00_B0[OPS_ACC0(1,0)];

   D01_B0[OPS_ACC1(-1,0)] = D01_B0[OPS_ACC1(1,0)];

   D10_B0[OPS_ACC3(-1,0)] = D10_B0[OPS_ACC3(1,0)];

   D11_B0[OPS_ACC2(-1,0)] = D11_B0[OPS_ACC2(1,0)];

   detJ_B0[OPS_ACC4(-1,0)] = detJ_B0[OPS_ACC4(1,0)];

   D00_B0[OPS_ACC0(-2,0)] = D00_B0[OPS_ACC0(2,0)];

   D01_B0[OPS_ACC1(-2,0)] = D01_B0[OPS_ACC1(2,0)];

   D10_B0[OPS_ACC3(-2,0)] = D10_B0[OPS_ACC3(2,0)];

   D11_B0[OPS_ACC2(-2,0)] = D11_B0[OPS_ACC2(2,0)];

   detJ_B0[OPS_ACC4(-2,0)] = detJ_B0[OPS_ACC4(2,0)];

   D00_B0[OPS_ACC0(-3,0)] = D00_B0[OPS_ACC0(3,0)];

   D01_B0[OPS_ACC1(-3,0)] = D01_B0[OPS_ACC1(3,0)];

   D10_B0[OPS_ACC3(-3,0)] = D10_B0[OPS_ACC3(3,0)];

   D11_B0[OPS_ACC2(-3,0)] = D11_B0[OPS_ACC2(3,0)];

   detJ_B0[OPS_ACC4(-3,0)] = detJ_B0[OPS_ACC4(3,0)];

}

void opensbliblock00Kernel075(double *D00_B0, double *D01_B0, double *D11_B0, double *D10_B0, double *detJ_B0)
{
   D00_B0[OPS_ACC0(1,0)] = D00_B0[OPS_ACC0(-1,0)];

   D01_B0[OPS_ACC1(1,0)] = D01_B0[OPS_ACC1(-1,0)];

   D10_B0[OPS_ACC3(1,0)] = D10_B0[OPS_ACC3(-1,0)];

   D11_B0[OPS_ACC2(1,0)] = D11_B0[OPS_ACC2(-1,0)];

   detJ_B0[OPS_ACC4(1,0)] = detJ_B0[OPS_ACC4(-1,0)];

   D00_B0[OPS_ACC0(2,0)] = D00_B0[OPS_ACC0(-2,0)];

   D01_B0[OPS_ACC1(2,0)] = D01_B0[OPS_ACC1(-2,0)];

   D10_B0[OPS_ACC3(2,0)] = D10_B0[OPS_ACC3(-2,0)];

   D11_B0[OPS_ACC2(2,0)] = D11_B0[OPS_ACC2(-2,0)];

   detJ_B0[OPS_ACC4(2,0)] = detJ_B0[OPS_ACC4(-2,0)];

   D00_B0[OPS_ACC0(3,0)] = D00_B0[OPS_ACC0(-3,0)];

   D01_B0[OPS_ACC1(3,0)] = D01_B0[OPS_ACC1(-3,0)];

   D10_B0[OPS_ACC3(3,0)] = D10_B0[OPS_ACC3(-3,0)];

   D11_B0[OPS_ACC2(3,0)] = D11_B0[OPS_ACC2(-3,0)];

   detJ_B0[OPS_ACC4(3,0)] = detJ_B0[OPS_ACC4(-3,0)];

   D00_B0[OPS_ACC0(4,0)] = D00_B0[OPS_ACC0(-4,0)];

   D01_B0[OPS_ACC1(4,0)] = D01_B0[OPS_ACC1(-4,0)];

   D10_B0[OPS_ACC3(4,0)] = D10_B0[OPS_ACC3(-4,0)];

   D11_B0[OPS_ACC2(4,0)] = D11_B0[OPS_ACC2(-4,0)];

   detJ_B0[OPS_ACC4(4,0)] = detJ_B0[OPS_ACC4(-4,0)];

}

void opensbliblock00Kernel076(double *D00_B0, double *D01_B0, double *D11_B0, double *D10_B0, double *detJ_B0)
{
   D00_B0[OPS_ACC0(0,-1)] = D00_B0[OPS_ACC0(0,1)];

   D01_B0[OPS_ACC1(0,-1)] = D01_B0[OPS_ACC1(0,1)];

   D10_B0[OPS_ACC3(0,-1)] = D10_B0[OPS_ACC3(0,1)];

   D11_B0[OPS_ACC2(0,-1)] = D11_B0[OPS_ACC2(0,1)];

   detJ_B0[OPS_ACC4(0,-1)] = detJ_B0[OPS_ACC4(0,1)];

   D00_B0[OPS_ACC0(0,-2)] = D00_B0[OPS_ACC0(0,2)];

   D01_B0[OPS_ACC1(0,-2)] = D01_B0[OPS_ACC1(0,2)];

   D10_B0[OPS_ACC3(0,-2)] = D10_B0[OPS_ACC3(0,2)];

   D11_B0[OPS_ACC2(0,-2)] = D11_B0[OPS_ACC2(0,2)];

   detJ_B0[OPS_ACC4(0,-2)] = detJ_B0[OPS_ACC4(0,2)];

   D00_B0[OPS_ACC0(0,-3)] = D00_B0[OPS_ACC0(0,3)];

   D01_B0[OPS_ACC1(0,-3)] = D01_B0[OPS_ACC1(0,3)];

   D10_B0[OPS_ACC3(0,-3)] = D10_B0[OPS_ACC3(0,3)];

   D11_B0[OPS_ACC2(0,-3)] = D11_B0[OPS_ACC2(0,3)];

   detJ_B0[OPS_ACC4(0,-3)] = detJ_B0[OPS_ACC4(0,3)];

}

void opensbliblock00Kernel077(double *D00_B0, double *D01_B0, double *D11_B0, double *D10_B0, double *detJ_B0)
{
   D00_B0[OPS_ACC0(0,1)] = D00_B0[OPS_ACC0(0,-1)];

   D01_B0[OPS_ACC1(0,1)] = D01_B0[OPS_ACC1(0,-1)];

   D10_B0[OPS_ACC3(0,1)] = D10_B0[OPS_ACC3(0,-1)];

   D11_B0[OPS_ACC2(0,1)] = D11_B0[OPS_ACC2(0,-1)];

   detJ_B0[OPS_ACC4(0,1)] = detJ_B0[OPS_ACC4(0,-1)];

   D00_B0[OPS_ACC0(0,2)] = D00_B0[OPS_ACC0(0,-2)];

   D01_B0[OPS_ACC1(0,2)] = D01_B0[OPS_ACC1(0,-2)];

   D10_B0[OPS_ACC3(0,2)] = D10_B0[OPS_ACC3(0,-2)];

   D11_B0[OPS_ACC2(0,2)] = D11_B0[OPS_ACC2(0,-2)];

   detJ_B0[OPS_ACC4(0,2)] = detJ_B0[OPS_ACC4(0,-2)];

   D00_B0[OPS_ACC0(0,3)] = D00_B0[OPS_ACC0(0,-3)];

   D01_B0[OPS_ACC1(0,3)] = D01_B0[OPS_ACC1(0,-3)];

   D10_B0[OPS_ACC3(0,3)] = D10_B0[OPS_ACC3(0,-3)];

   D11_B0[OPS_ACC2(0,3)] = D11_B0[OPS_ACC2(0,-3)];

   detJ_B0[OPS_ACC4(0,3)] = detJ_B0[OPS_ACC4(0,-3)];

   D00_B0[OPS_ACC0(0,4)] = D00_B0[OPS_ACC0(0,-4)];

   D01_B0[OPS_ACC1(0,4)] = D01_B0[OPS_ACC1(0,-4)];

   D10_B0[OPS_ACC3(0,4)] = D10_B0[OPS_ACC3(0,-4)];

   D11_B0[OPS_ACC2(0,4)] = D11_B0[OPS_ACC2(0,-4)];

   detJ_B0[OPS_ACC4(0,4)] = detJ_B0[OPS_ACC4(0,-4)];

}

void opensbliblock00Kernel078(const double *D10_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*D10_B0[OPS_ACC0(0,4)] - rc12*D10_B0[OPS_ACC0(0,0)] +
      4*D10_B0[OPS_ACC0(0,1)] - 3*D10_B0[OPS_ACC0(0,2)] + (rc13)*D10_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      -rc11*D10_B0[OPS_ACC0(0,-1)] - rc15*D10_B0[OPS_ACC0(0,0)] + (rc14)*D10_B0[OPS_ACC0(0,1)] -
      rc7*D10_B0[OPS_ACC0(0,2)] + (rc16)*D10_B0[OPS_ACC0(0,3)]
)
: (
   -rc17*D10_B0[OPS_ACC0(0,-1)] +
      (rc16)*D10_B0[OPS_ACC0(0,-2)] - rc16*D10_B0[OPS_ACC0(0,2)] + (rc17)*D10_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel079(const double *D00_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*D00_B0[OPS_ACC0(0,4)] + 4*D00_B0[OPS_ACC0(0,1)] -
      rc12*D00_B0[OPS_ACC0(0,0)] + (rc13)*D00_B0[OPS_ACC0(0,3)] - 3*D00_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      -rc11*D00_B0[OPS_ACC0(0,-1)] + (rc14)*D00_B0[OPS_ACC0(0,1)] - rc15*D00_B0[OPS_ACC0(0,0)] +
      (rc16)*D00_B0[OPS_ACC0(0,3)] - rc7*D00_B0[OPS_ACC0(0,2)]
)
: (
   (rc16)*D00_B0[OPS_ACC0(0,-2)] -
      rc17*D00_B0[OPS_ACC0(0,-1)] + (rc17)*D00_B0[OPS_ACC0(0,1)] - rc16*D00_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel080(const double *D01_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*D01_B0[OPS_ACC0(0,4)] - 3*D01_B0[OPS_ACC0(0,2)] +
      (rc13)*D01_B0[OPS_ACC0(0,3)] - rc12*D01_B0[OPS_ACC0(0,0)] + 4*D01_B0[OPS_ACC0(0,1)]
)
: ((idx[1] == 1) ? (
  
      -rc11*D01_B0[OPS_ACC0(0,-1)] - rc7*D01_B0[OPS_ACC0(0,2)] + (rc16)*D01_B0[OPS_ACC0(0,3)] -
      rc15*D01_B0[OPS_ACC0(0,0)] + (rc14)*D01_B0[OPS_ACC0(0,1)]
)
: (
   -rc17*D01_B0[OPS_ACC0(0,-1)] +
      (rc16)*D01_B0[OPS_ACC0(0,-2)] - rc16*D01_B0[OPS_ACC0(0,2)] + (rc17)*D01_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel081(const double *D00_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   4*D00_B0[OPS_ACC0(1,0)] - rc11*D00_B0[OPS_ACC0(4,0)] +
      (rc13)*D00_B0[OPS_ACC0(3,0)] - rc12*D00_B0[OPS_ACC0(0,0)] - 3*D00_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == 1) ? (
  
      (rc14)*D00_B0[OPS_ACC0(1,0)] + (rc16)*D00_B0[OPS_ACC0(3,0)] - rc11*D00_B0[OPS_ACC0(-1,0)] -
      rc15*D00_B0[OPS_ACC0(0,0)] - rc7*D00_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      3*D00_B0[OPS_ACC0(-2,0)] + (rc11)*D00_B0[OPS_ACC0(-4,0)] - 4*D00_B0[OPS_ACC0(-1,0)] - rc13*D00_B0[OPS_ACC0(-3,0)]
      + (rc12)*D00_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc14*D00_B0[OPS_ACC0(-1,0)] +
      (rc11)*D00_B0[OPS_ACC0(1,0)] + (rc7)*D00_B0[OPS_ACC0(-2,0)] - rc16*D00_B0[OPS_ACC0(-3,0)] +
      (rc15)*D00_B0[OPS_ACC0(0,0)]
)
: (
   (rc16)*D00_B0[OPS_ACC0(-2,0)] + (rc17)*D00_B0[OPS_ACC0(1,0)] -
      rc17*D00_B0[OPS_ACC0(-1,0)] - rc16*D00_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel082(const double *D10_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   -rc11*D10_B0[OPS_ACC0(4,0)] + 4*D10_B0[OPS_ACC0(1,0)] +
      (rc13)*D10_B0[OPS_ACC0(3,0)] - rc12*D10_B0[OPS_ACC0(0,0)] - 3*D10_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == 1) ? (
  
      (rc14)*D10_B0[OPS_ACC0(1,0)] - rc11*D10_B0[OPS_ACC0(-1,0)] + (rc16)*D10_B0[OPS_ACC0(3,0)] -
      rc15*D10_B0[OPS_ACC0(0,0)] - rc7*D10_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc11)*D10_B0[OPS_ACC0(-4,0)] - 4*D10_B0[OPS_ACC0(-1,0)] + (rc12)*D10_B0[OPS_ACC0(0,0)] + 3*D10_B0[OPS_ACC0(-2,0)]
      - rc13*D10_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*D10_B0[OPS_ACC0(1,0)] +
      (rc7)*D10_B0[OPS_ACC0(-2,0)] + (rc15)*D10_B0[OPS_ACC0(0,0)] - rc14*D10_B0[OPS_ACC0(-1,0)] -
      rc16*D10_B0[OPS_ACC0(-3,0)]
)
: (
   (rc17)*D10_B0[OPS_ACC0(1,0)] - rc17*D10_B0[OPS_ACC0(-1,0)] +
      (rc16)*D10_B0[OPS_ACC0(-2,0)] - rc16*D10_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel083(const double *D11_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   (rc13)*D11_B0[OPS_ACC0(0,3)] - 3*D11_B0[OPS_ACC0(0,2)] +
      4*D11_B0[OPS_ACC0(0,1)] - rc12*D11_B0[OPS_ACC0(0,0)] - rc11*D11_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      (rc16)*D11_B0[OPS_ACC0(0,3)] - rc7*D11_B0[OPS_ACC0(0,2)] + (rc14)*D11_B0[OPS_ACC0(0,1)] -
      rc15*D11_B0[OPS_ACC0(0,0)] - rc11*D11_B0[OPS_ACC0(0,-1)]
)
: (
   -rc16*D11_B0[OPS_ACC0(0,2)] +
      (rc17)*D11_B0[OPS_ACC0(0,1)] - rc17*D11_B0[OPS_ACC0(0,-1)] + (rc16)*D11_B0[OPS_ACC0(0,-2)]
)));

}

void opensbliblock00Kernel084(const double *D11_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   -3*D11_B0[OPS_ACC0(2,0)] - rc12*D11_B0[OPS_ACC0(0,0)] +
      (rc13)*D11_B0[OPS_ACC0(3,0)] + 4*D11_B0[OPS_ACC0(1,0)] - rc11*D11_B0[OPS_ACC0(4,0)]
)
: ((idx[0] == 1) ? (
  
      -rc7*D11_B0[OPS_ACC0(2,0)] - rc15*D11_B0[OPS_ACC0(0,0)] + (rc16)*D11_B0[OPS_ACC0(3,0)] -
      rc11*D11_B0[OPS_ACC0(-1,0)] + (rc14)*D11_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -rc13*D11_B0[OPS_ACC0(-3,0)] + (rc11)*D11_B0[OPS_ACC0(-4,0)] - 4*D11_B0[OPS_ACC0(-1,0)] +
      (rc12)*D11_B0[OPS_ACC0(0,0)] + 3*D11_B0[OPS_ACC0(-2,0)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      -rc16*D11_B0[OPS_ACC0(-3,0)] + (rc15)*D11_B0[OPS_ACC0(0,0)] + (rc7)*D11_B0[OPS_ACC0(-2,0)] +
      (rc11)*D11_B0[OPS_ACC0(1,0)] - rc14*D11_B0[OPS_ACC0(-1,0)]
)
: (
   -rc16*D11_B0[OPS_ACC0(2,0)] -
      rc17*D11_B0[OPS_ACC0(-1,0)] + (rc17)*D11_B0[OPS_ACC0(1,0)] + (rc16)*D11_B0[OPS_ACC0(-2,0)]
)))));

}

void opensbliblock00Kernel085(const double *D01_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   (rc13)*D01_B0[OPS_ACC0(3,0)] - rc11*D01_B0[OPS_ACC0(4,0)] +
      4*D01_B0[OPS_ACC0(1,0)] - 3*D01_B0[OPS_ACC0(2,0)] - rc12*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
  
      -rc11*D01_B0[OPS_ACC0(-1,0)] + (rc16)*D01_B0[OPS_ACC0(3,0)] + (rc14)*D01_B0[OPS_ACC0(1,0)] -
      rc7*D01_B0[OPS_ACC0(2,0)] - rc15*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -4*D01_B0[OPS_ACC0(-1,0)] + 3*D01_B0[OPS_ACC0(-2,0)] + (rc11)*D01_B0[OPS_ACC0(-4,0)] +
      (rc12)*D01_B0[OPS_ACC0(0,0)] - rc13*D01_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc7)*D01_B0[OPS_ACC0(-2,0)] - rc14*D01_B0[OPS_ACC0(-1,0)] + (rc11)*D01_B0[OPS_ACC0(1,0)] +
      (rc15)*D01_B0[OPS_ACC0(0,0)] - rc16*D01_B0[OPS_ACC0(-3,0)]
)
: (
   -rc17*D01_B0[OPS_ACC0(-1,0)] +
      (rc16)*D01_B0[OPS_ACC0(-2,0)] + (rc17)*D01_B0[OPS_ACC0(1,0)] - rc16*D01_B0[OPS_ACC0(2,0)]
)))));

}

 void opensbliblock00Kernel090(const double *wk6_B0, const double *wk4_B0, const double *wk5_B0, const double *wk3_B0,
const double *wk0_B0, const double *wk1_B0, const double *wk7_B0, const double *wk2_B0, double *SD101_B0, double
*SD100_B0, double *SD000_B0, double *SD001_B0, double *SD010_B0, double *SD110_B0, double *SD111_B0, double *SD011_B0)
{
   SD000_B0[OPS_ACC10(0,0)] = wk3_B0[OPS_ACC3(0,0)];

   SD001_B0[OPS_ACC11(0,0)] = wk1_B0[OPS_ACC5(0,0)];

   SD010_B0[OPS_ACC12(0,0)] = wk7_B0[OPS_ACC6(0,0)];

   SD011_B0[OPS_ACC15(0,0)] = wk2_B0[OPS_ACC7(0,0)];

   SD100_B0[OPS_ACC9(0,0)] = wk4_B0[OPS_ACC1(0,0)];

   SD101_B0[OPS_ACC8(0,0)] = wk0_B0[OPS_ACC4(0,0)];

   SD110_B0[OPS_ACC13(0,0)] = wk6_B0[OPS_ACC0(0,0)];

   SD111_B0[OPS_ACC14(0,0)] = wk5_B0[OPS_ACC2(0,0)];

}

void opensbliblock00Kernel062(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0)
{
   rho_B0[OPS_ACC3(0,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(0,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(0,0)] = rhoE_B0[OPS_ACC1(-1,0)];

}

void opensbliblock00Kernel063(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0)
{
   rho_B0[OPS_ACC3(0,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(0,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(0,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(1,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(1,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(1,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(1,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(2,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(2,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(2,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(2,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(3,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(3,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(3,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(3,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(4,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(4,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(4,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(4,0)] = rhoE_B0[OPS_ACC1(-1,0)];

}

 void opensbliblock00Kernel064(const double *x0_B0, double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double
*rho_B0)
{
   double T3 = 0.0;
   double u13 = 0.0;
   double x0 = 0.0;
   double u03 = 0.0;
   double rho_halo_1 = 0.0;
   double rho_halo_2 = 0.0;
   double u02 = 0.0;
   double Pwall = 0.0;
   double T1 = 0.0;
   double T_above = 0.0;
   double rho_halo_3 = 0.0;
   double u11 = 0.0;
   double u12 = 0.0;
   double T2 = 0.0;
   double u01 = 0.0;
   x0 = x0_B0[OPS_ACC0(0,0)];

   rhou0_B0[OPS_ACC3(0,0)] = 0.0;

   rhou1_B0[OPS_ACC1(0,0)] = 0.0;

   rhoE_B0[OPS_ACC2(0,0)] = Twall*rcinv18*rho_B0[OPS_ACC4(0,0)]/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc7)*pow(rhou0_B0[OPS_ACC3(0,0)], 2) + (rc7)*pow(rhou1_B0[OPS_ACC1(0,0)],
      2))/rho_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC2(0,0)]);

   u01 = rhou0_B0[OPS_ACC3(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u02 = rhou0_B0[OPS_ACC3(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u03 = rhou0_B0[OPS_ACC3(0,3)]/rho_B0[OPS_ACC4(0,3)];

   u11 = rhou1_B0[OPS_ACC1(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u12 = rhou1_B0[OPS_ACC1(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u13 = rhou1_B0[OPS_ACC1(0,3)]/rho_B0[OPS_ACC4(0,3)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc7)*pow(rhou0_B0[OPS_ACC3(0,1)], 2) + (rc7)*pow(rhou1_B0[OPS_ACC1(0,1)],
      2))/rho_B0[OPS_ACC4(0,1)] + rhoE_B0[OPS_ACC2(0,1)])/rho_B0[OPS_ACC4(0,1)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u12;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv8*Pwall + (rc7)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC4(0,-3)] = rho_halo_3;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u12;

   rhou0_B0[OPS_ACC3(0,-3)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC1(0,-3)] = -rho_halo_3*u13;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv8*Pwall + (rc7)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0[OPS_ACC2(0,-3)] = rcinv8*Pwall + (rc7)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}

void opensbliblock00Kernel065(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0)
{
   rho_B0[OPS_ACC3(0,0)] = rho_B0[OPS_ACC3(0,-1)];

   rhou0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC2(0,-1)];

   rhou1_B0[OPS_ACC0(0,0)] = rhou1_B0[OPS_ACC0(0,-1)];

   rhoE_B0[OPS_ACC1(0,0)] = rhoE_B0[OPS_ACC1(0,-1)];

   rho_B0[OPS_ACC3(0,1)] = rho_B0[OPS_ACC3(0,-1)];

   rhou0_B0[OPS_ACC2(0,1)] = rhou0_B0[OPS_ACC2(0,-1)];

   rhou1_B0[OPS_ACC0(0,1)] = rhou1_B0[OPS_ACC0(0,-1)];

   rhoE_B0[OPS_ACC1(0,1)] = rhoE_B0[OPS_ACC1(0,-1)];

   rho_B0[OPS_ACC3(0,2)] = rho_B0[OPS_ACC3(0,-2)];

   rhou0_B0[OPS_ACC2(0,2)] = rhou0_B0[OPS_ACC2(0,-2)];

   rhou1_B0[OPS_ACC0(0,2)] = rhou1_B0[OPS_ACC0(0,-2)];

   rhoE_B0[OPS_ACC1(0,2)] = rhoE_B0[OPS_ACC1(0,-2)];

   rho_B0[OPS_ACC3(0,3)] = rho_B0[OPS_ACC3(0,-3)];

   rhou0_B0[OPS_ACC2(0,3)] = rhou0_B0[OPS_ACC2(0,-3)];

   rhou1_B0[OPS_ACC0(0,3)] = rhou1_B0[OPS_ACC0(0,-3)];

   rhoE_B0[OPS_ACC1(0,3)] = rhoE_B0[OPS_ACC1(0,-3)];

   rho_B0[OPS_ACC3(0,4)] = rho_B0[OPS_ACC3(0,-4)];

   rhou0_B0[OPS_ACC2(0,4)] = rhou0_B0[OPS_ACC2(0,-4)];

   rhou1_B0[OPS_ACC0(0,4)] = rhou1_B0[OPS_ACC0(0,-4)];

   rhoE_B0[OPS_ACC1(0,4)] = rhoE_B0[OPS_ACC1(0,-4)];

}

void opensbliblock00Kernel007(const double *rhou0_B0, const double *rho_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel002(const double *rhou1_B0, const double *rho_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

 void opensbliblock00Kernel008(const double *u0_B0, const double *D11_B0, const double *u1_B0, const double *D10_B0,
double *U1_B0)
{
   U1_B0[OPS_ACC4(0,0)] = D10_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC0(0,0)] + D11_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC2(0,0)];

}

 void opensbliblock00Kernel013(const double *rhoE_B0, const double *rho_B0, const double *u0_B0, const double *u1_B0,
double *p_B0)
{
    p_B0[OPS_ACC4(0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC0(0,0)] - rc7*rho_B0[OPS_ACC1(0,0)]*pow(u0_B0[OPS_ACC2(0,0)], 2) -
      rc7*rho_B0[OPS_ACC1(0,0)]*pow(u1_B0[OPS_ACC3(0,0)], 2));

}

 void opensbliblock00Kernel010(const double *D00_B0, const double *D01_B0, const double *u0_B0, const double *u1_B0,
double *U0_B0)
{
   U0_B0[OPS_ACC4(0,0)] = D00_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC2(0,0)] + D01_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC3(0,0)];

}

void opensbliblock00Kernel023(const double *rho_B0, const double *p_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

void opensbliblock00Kernel016(const double *rho_B0, const double *p_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0,0)] = sqrt(gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)]);

}

void opensbliblock00Kernel019(const double *T_B0, double *mu_B0)
{
   mu_B0[OPS_ACC1(0,0)] = (SuthT*rcinv19 + 1.0)*pow(T_B0[OPS_ACC0(0,0)], 1.5)/(SuthT*rcinv19 + T_B0[OPS_ACC0(0,0)]);

}

 void opensbliblock00Kernel000(const double *D01_B0, const double *U0_B0, const double *rhoE_B0, const double *D00_B0,
const double *rho_B0, const double *p_B0, const double *detJ_B0, const double *rhou1_B0, const double *a_B0, const
double *rhou0_B0, const double *u0_B0, const double *u1_B0, double *wk3_B0, double *wk0_B0, double *wk1_B0, double
*wk2_B0)
{
   double AVG_0_0_LEV_01 = 0.0;
   double CS_32 = 0.0;
   double omega_0 = 0.0;
   double CF_25 = 0.0;
   double max_lambda_0_22 = 0.0;
   double CF_24 = 0.0;
   double CS_33 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double max_lambda_0_33 = 0.0;
   double CF_12 = 0.0;
   double CF_35 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CS_10 = 0.0;
   double beta_0 = 0.0;
   double alpha_1 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double CS_00 = 0.0;
   double CS_11 = 0.0;
   double beta_1 = 0.0;
   double CS_01 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double inv_AVG_met_fact = 0.0;
   double CF_00 = 0.0;
   double CF_21 = 0.0;
   double CS_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_D00 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double CF_11 = 0.0;
   double CF_30 = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CS_25 = 0.0;
   double CS_34 = 0.0;
   double CF_05 = 0.0;
   double CS_35 = 0.0;
   double max_lambda_0_00 = 0.0;
   double AVG_0_rho = 0.0;
   double CF_33 = 0.0;
   double CS_24 = 0.0;
   double inv_AVG_rho = 0.0;
   double beta_2 = 0.0;
   double CS_23 = 0.0;
   double CS_03 = 0.0;
   double AVG_0_a = 0.0;
   double CF_23 = 0.0;
   double CS_14 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double CS_02 = 0.0;
   double AVG_0_u1 = 0.0;
   double CS_15 = 0.0;
   double CF_13 = 0.0;
   double omega_1 = 0.0;
   double Recon_0 = 0.0;
   double CF_14 = 0.0;
   double CF_15 = 0.0;
   double CF_34 = 0.0;
   double CF_20 = 0.0;
   double alpha_0 = 0.0;
   double CS_30 = 0.0;
   double CF_31 = 0.0;
   double AVG_0_D01 = 0.0;
   double omega_2 = 0.0;
   double CF_01 = 0.0;
   double CS_21 = 0.0;
   double Recon_3 = 0.0;
   double CS_05 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CF_04 = 0.0;
   double alpha_2 = 0.0;
   double CS_12 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CS_04 = 0.0;
   double CS_13 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double CF_03 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double Recon_2 = 0.0;
   double CF_02 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double CS_22 = 0.0;
   double CF_32 = 0.0;
   double CF_22 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double Recon_1 = 0.0;
   double max_lambda_0_11 = 0.0;
   AVG_0_u1 = (rc7)*(u1_B0[OPS_ACC11(1,0)] + u1_B0[OPS_ACC11(0,0)]);

   AVG_0_rho = (rc7)*(rho_B0[OPS_ACC4(1,0)] + rho_B0[OPS_ACC4(0,0)]);

   AVG_0_u0 = (rc7)*(u0_B0[OPS_ACC10(0,0)] + u0_B0[OPS_ACC10(1,0)]);

   AVG_0_a = (rc7)*(a_B0[OPS_ACC8(0,0)] + a_B0[OPS_ACC8(1,0)]);

   AVG_0_D01 = (rc7)*(D01_B0[OPS_ACC0(1,0)] + D01_B0[OPS_ACC0(0,0)]);

   AVG_0_D00 = (rc7)*(D00_B0[OPS_ACC3(1,0)] + D00_B0[OPS_ACC3(0,0)]);

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

   inv_AVG_met_fact = pow(pow(AVG_0_D00, 2) + pow(AVG_0_D01, 2), rc20);

    AVG_0_0_LEV_00 = -rc7*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_01 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_02 = gamma_m1*AVG_0_u1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = inv_AVG_met_fact*inv_AVG_rho*(AVG_0_D00*AVG_0_u1 - AVG_0_D01*AVG_0_u0);

   AVG_0_0_LEV_11 = AVG_0_D01*inv_AVG_met_fact*inv_AVG_rho;

   AVG_0_0_LEV_12 = -AVG_0_D00*inv_AVG_met_fact*inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_0_u0, 2) - gama*pow(AVG_0_u1, 2) +
      2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact + 2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact + pow(AVG_0_u0, 2) +
      pow(AVG_0_u1, 2));

    AVG_0_0_LEV_21 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u0 + AVG_0_D00*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u0);

    AVG_0_0_LEV_22 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u1 + AVG_0_D01*AVG_0_a*inv_AVG_met_fact +
      AVG_0_u1);

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_0_u0, 2) + gama*pow(AVG_0_u1, 2) +
      2*AVG_0_D00*AVG_0_a*AVG_0_u0*inv_AVG_met_fact + 2*AVG_0_D01*AVG_0_a*AVG_0_u1*inv_AVG_met_fact - pow(AVG_0_u0, 2) -
      pow(AVG_0_u1, 2));

    AVG_0_0_LEV_31 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u0 + AVG_0_D00*AVG_0_a*inv_AVG_met_fact -
      AVG_0_u0);

    AVG_0_0_LEV_32 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u1 + AVG_0_D01*AVG_0_a*inv_AVG_met_fact -
      AVG_0_u1);

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(-2,0)]*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(-2,0)]*rhou1_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(-2,0)]*rhoE_B0[OPS_ACC2(-2,0)])*detJ_B0[OPS_ACC6(-2,0)];

    CF_10 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(-2,0)]*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(-2,0)]*rhou1_B0[OPS_ACC7(-2,0)])*detJ_B0[OPS_ACC6(-2,0)];

    CF_20 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(-2,0)]*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(-2,0)]*rhou1_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(-2,0)]*rhoE_B0[OPS_ACC2(-2,0)])*detJ_B0[OPS_ACC6(-2,0)];

    CF_30 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(-2,0)]*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(-2,0)]*rhou1_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(-2,0)]*p_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(-2,0)]*rhoE_B0[OPS_ACC2(-2,0)])*detJ_B0[OPS_ACC6(-2,0)];

    CF_01 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(-1,0)]*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(-1,0)]*rhou1_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(-1,0)]*rhoE_B0[OPS_ACC2(-1,0)])*detJ_B0[OPS_ACC6(-1,0)];

    CF_11 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(-1,0)]*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(-1,0)]*rhou1_B0[OPS_ACC7(-1,0)])*detJ_B0[OPS_ACC6(-1,0)];

    CF_21 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(-1,0)]*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(-1,0)]*rhou1_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(-1,0)]*rhoE_B0[OPS_ACC2(-1,0)])*detJ_B0[OPS_ACC6(-1,0)];

    CF_31 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(-1,0)]*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(-1,0)]*rhou1_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(-1,0)]*p_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(-1,0)]*rhoE_B0[OPS_ACC2(-1,0)])*detJ_B0[OPS_ACC6(-1,0)];

    CF_02 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(0,0)]*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(0,0)]*rhoE_B0[OPS_ACC2(0,0)])*detJ_B0[OPS_ACC6(0,0)];

    CF_12 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(0,0)]*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(0,0)]*rhou1_B0[OPS_ACC7(0,0)])*detJ_B0[OPS_ACC6(0,0)];

    CF_22 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(0,0)]*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(0,0)]*rhoE_B0[OPS_ACC2(0,0)])*detJ_B0[OPS_ACC6(0,0)];

    CF_32 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(0,0)]*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(0,0)]*p_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(0,0)]*rhoE_B0[OPS_ACC2(0,0)])*detJ_B0[OPS_ACC6(0,0)];

    CF_03 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(1,0)]*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(1,0)]*rhou1_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(1,0)]*rhoE_B0[OPS_ACC2(1,0)])*detJ_B0[OPS_ACC6(1,0)];

    CF_13 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(1,0)]*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(1,0)]*rhou1_B0[OPS_ACC7(1,0)])*detJ_B0[OPS_ACC6(1,0)];

    CF_23 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(1,0)]*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(1,0)]*rhou1_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(1,0)]*rhoE_B0[OPS_ACC2(1,0)])*detJ_B0[OPS_ACC6(1,0)];

    CF_33 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(1,0)]*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(1,0)]*rhou1_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(1,0)]*p_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(1,0)]*rhoE_B0[OPS_ACC2(1,0)])*detJ_B0[OPS_ACC6(1,0)];

    CF_04 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(2,0)]*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(2,0)]*rhou1_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(2,0)]*rhoE_B0[OPS_ACC2(2,0)])*detJ_B0[OPS_ACC6(2,0)];

    CF_14 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(2,0)]*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(2,0)]*rhou1_B0[OPS_ACC7(2,0)])*detJ_B0[OPS_ACC6(2,0)];

    CF_24 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(2,0)]*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(2,0)]*rhou1_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(2,0)]*rhoE_B0[OPS_ACC2(2,0)])*detJ_B0[OPS_ACC6(2,0)];

    CF_34 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(2,0)]*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(2,0)]*rhou1_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(2,0)]*p_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(2,0)]*rhoE_B0[OPS_ACC2(2,0)])*detJ_B0[OPS_ACC6(2,0)];

    CF_05 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC1(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC1(3,0)]*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC0(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC1(3,0)]*rhou1_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC1(3,0)]*rhoE_B0[OPS_ACC2(3,0)])*detJ_B0[OPS_ACC6(3,0)];

    CF_15 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC1(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC1(3,0)]*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC0(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC1(3,0)]*rhou1_B0[OPS_ACC7(3,0)])*detJ_B0[OPS_ACC6(3,0)];

    CF_25 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC1(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC1(3,0)]*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC0(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC1(3,0)]*rhou1_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC1(3,0)]*rhoE_B0[OPS_ACC2(3,0)])*detJ_B0[OPS_ACC6(3,0)];

    CF_35 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC1(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC1(3,0)]*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC0(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC1(3,0)]*rhou1_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(3,0)]*p_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC1(3,0)]*rhoE_B0[OPS_ACC2(3,0)])*detJ_B0[OPS_ACC6(3,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(-2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(-2,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(-1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(-1,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(0,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(1,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(2,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC7(3,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC2(3,0)];

    CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(-2,0)];

    CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(-1,0)];

    CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(0,0)];

    CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(1,0)];

    CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(2,0)];

    CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC7(3,0)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(-2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(-2,0)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(-1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(-1,0)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(0,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(0,0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(1,0)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(2,0)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC7(3,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC2(3,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(-2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(-2,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(-1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(-1,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(0,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(1,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(2,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC7(3,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC2(3,0)];

    max_lambda_0_00 = fmax(fabs(D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC10(-2,0)] +
      D01_B0[OPS_ACC0(-2,0)]*u1_B0[OPS_ACC11(-2,0)]), fmax(fabs(D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC10(-1,0)] +
      D01_B0[OPS_ACC0(-1,0)]*u1_B0[OPS_ACC11(-1,0)]), fmax(fabs(D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC10(2,0)] +
      D01_B0[OPS_ACC0(2,0)]*u1_B0[OPS_ACC11(2,0)]), fmax(fabs(D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC10(3,0)] +
      D01_B0[OPS_ACC0(3,0)]*u1_B0[OPS_ACC11(3,0)]), fmax(fabs(D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC10(0,0)] +
      D01_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC11(0,0)]), fabs(D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC10(1,0)] +
      D01_B0[OPS_ACC0(1,0)]*u1_B0[OPS_ACC11(1,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

    max_lambda_0_22 = fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(2,0)], 2) + pow(D01_B0[OPS_ACC0(2,0)], 2))*a_B0[OPS_ACC8(2,0)]
      + D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC10(2,0)] + D01_B0[OPS_ACC0(2,0)]*u1_B0[OPS_ACC11(2,0)]),
      fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(3,0)], 2) + pow(D01_B0[OPS_ACC0(3,0)], 2))*a_B0[OPS_ACC8(3,0)] +
      D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC10(3,0)] + D01_B0[OPS_ACC0(3,0)]*u1_B0[OPS_ACC11(3,0)]),
      fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(-2,0)], 2) + pow(D01_B0[OPS_ACC0(-2,0)], 2))*a_B0[OPS_ACC8(-2,0)] +
      D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC10(-2,0)] + D01_B0[OPS_ACC0(-2,0)]*u1_B0[OPS_ACC11(-2,0)]),
      fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(0,0)], 2) + pow(D01_B0[OPS_ACC0(0,0)], 2))*a_B0[OPS_ACC8(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC10(0,0)] + D01_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC11(0,0)]),
      fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(-1,0)], 2) + pow(D01_B0[OPS_ACC0(-1,0)], 2))*a_B0[OPS_ACC8(-1,0)] +
      D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC10(-1,0)] + D01_B0[OPS_ACC0(-1,0)]*u1_B0[OPS_ACC11(-1,0)]),
      fabs(sqrt(pow(D00_B0[OPS_ACC3(1,0)], 2) + pow(D01_B0[OPS_ACC0(1,0)], 2))*a_B0[OPS_ACC8(1,0)] +
      D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC10(1,0)] + D01_B0[OPS_ACC0(1,0)]*u1_B0[OPS_ACC11(1,0)]))))));

    max_lambda_0_33 = fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(-2,0)], 2) + pow(D01_B0[OPS_ACC0(-2,0)],
      2))*a_B0[OPS_ACC8(-2,0)] + D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC10(-2,0)] +
      D01_B0[OPS_ACC0(-2,0)]*u1_B0[OPS_ACC11(-2,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(1,0)], 2) +
      pow(D01_B0[OPS_ACC0(1,0)], 2))*a_B0[OPS_ACC8(1,0)] + D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC10(1,0)] +
      D01_B0[OPS_ACC0(1,0)]*u1_B0[OPS_ACC11(1,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(0,0)], 2) +
      pow(D01_B0[OPS_ACC0(0,0)], 2))*a_B0[OPS_ACC8(0,0)] + D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC10(0,0)] +
      D01_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC11(0,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(3,0)], 2) +
      pow(D01_B0[OPS_ACC0(3,0)], 2))*a_B0[OPS_ACC8(3,0)] + D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC10(3,0)] +
      D01_B0[OPS_ACC0(3,0)]*u1_B0[OPS_ACC11(3,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(-1,0)], 2) +
      pow(D01_B0[OPS_ACC0(-1,0)], 2))*a_B0[OPS_ACC8(-1,0)] + D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC10(-1,0)] +
      D01_B0[OPS_ACC0(-1,0)]*u1_B0[OPS_ACC11(-1,0)]), fabs(-sqrt(pow(D00_B0[OPS_ACC3(2,0)], 2) +
      pow(D01_B0[OPS_ACC0(2,0)], 2))*a_B0[OPS_ACC8(2,0)] + D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC10(2,0)] +
      D01_B0[OPS_ACC0(2,0)]*u1_B0[OPS_ACC11(2,0)]))))));

    beta_0 = (rc7)*(CF_02 + CS_02*max_lambda_0_00)*((rc21)*(CF_02 + CS_02*max_lambda_0_00) - rc22*(CF_03 +
      CS_03*max_lambda_0_00) + (rc23)*(CF_04 + CS_04*max_lambda_0_00)) + (rc7)*(CF_03 +
      CS_03*max_lambda_0_00)*((rc24)*(CF_03 + CS_03*max_lambda_0_00) - rc25*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc26)*pow(CF_04 + CS_04*max_lambda_0_00, 2);

    beta_1 = (rc7)*(CF_01 + CS_01*max_lambda_0_00)*((rc17)*(CF_01 + CS_01*max_lambda_0_00) - rc27*(CF_02 +
      CS_02*max_lambda_0_00) + (rc15)*(CF_03 + CS_03*max_lambda_0_00)) + (rc7)*(CF_02 +
      CS_02*max_lambda_0_00)*((rc27)*(CF_02 + CS_02*max_lambda_0_00) - rc27*(CF_03 + CS_03*max_lambda_0_00)) +
      (rc26)*pow(CF_03 + CS_03*max_lambda_0_00, 2);

    beta_2 = (rc7)*(CF_00 + CS_00*max_lambda_0_00)*((rc17)*(CF_00 + CS_00*max_lambda_0_00) + (rc23)*(CF_02 +
      CS_02*max_lambda_0_00)) + (rc7)*(CF_01 + CS_01*max_lambda_0_00)*(-rc25*(CF_00 + CS_00*max_lambda_0_00) +
      (rc24)*(CF_01 + CS_01*max_lambda_0_00) - rc22*(CF_02 + CS_02*max_lambda_0_00)) + (rc15)*pow(CF_02 +
      CS_02*max_lambda_0_00, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc31)*(CF_02 + CS_02*max_lambda_0_00) + (rc32)*(CF_03 + CS_03*max_lambda_0_00) -
      rc16*(CF_04 + CS_04*max_lambda_0_00)) + omega_1*(-rc16*(CF_01 + CS_01*max_lambda_0_00) + (rc32)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc31)*(CF_03 + CS_03*max_lambda_0_00)) + omega_2*((rc31)*(CF_00 + CS_00*max_lambda_0_00)
      - rc33*(CF_01 + CS_01*max_lambda_0_00) + (rc34)*(CF_02 + CS_02*max_lambda_0_00));

    beta_0 = (rc7)*(CF_03 - CS_03*max_lambda_0_00)*((rc21)*(CF_03 - CS_03*max_lambda_0_00) - rc22*(CF_04 -
      CS_04*max_lambda_0_00) + (rc23)*(CF_05 - CS_05*max_lambda_0_00)) + (rc7)*(CF_04 -
      CS_04*max_lambda_0_00)*((rc24)*(CF_04 - CS_04*max_lambda_0_00) - rc25*(CF_05 - CS_05*max_lambda_0_00)) +
      (rc26)*pow(CF_05 - CS_05*max_lambda_0_00, 2);

    beta_1 = (rc7)*(CF_02 - CS_02*max_lambda_0_00)*((rc17)*(CF_02 - CS_02*max_lambda_0_00) - rc27*(CF_03 -
      CS_03*max_lambda_0_00) + (rc15)*(CF_04 - CS_04*max_lambda_0_00)) + (rc7)*(CF_03 -
      CS_03*max_lambda_0_00)*((rc27)*(CF_03 - CS_03*max_lambda_0_00) - rc27*(CF_04 - CS_04*max_lambda_0_00)) +
      (rc26)*pow(CF_04 - CS_04*max_lambda_0_00, 2);

    beta_2 = (rc7)*(CF_01 - CS_01*max_lambda_0_00)*((rc17)*(CF_01 - CS_01*max_lambda_0_00) - rc25*(CF_02 -
      CS_02*max_lambda_0_00) + (rc23)*(CF_03 - CS_03*max_lambda_0_00)) + (rc7)*(CF_02 -
      CS_02*max_lambda_0_00)*((rc24)*(CF_02 - CS_02*max_lambda_0_00) - rc22*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc15)*pow(CF_03 - CS_03*max_lambda_0_00, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc34)*(CF_03 - CS_03*max_lambda_0_00) - rc33*(CF_04 - CS_04*max_lambda_0_00) +
      (rc31)*(CF_05 - CS_05*max_lambda_0_00)) + omega_1*((rc31)*(CF_02 - CS_02*max_lambda_0_00) + (rc32)*(CF_03 -
      CS_03*max_lambda_0_00) - rc16*(CF_04 - CS_04*max_lambda_0_00)) + omega_2*(-rc16*(CF_01 - CS_01*max_lambda_0_00) +
      (rc32)*(CF_02 - CS_02*max_lambda_0_00) + (rc31)*(CF_03 - CS_03*max_lambda_0_00));

    beta_0 = (rc7)*(CF_12 + CS_12*max_lambda_0_11)*((rc21)*(CF_12 + CS_12*max_lambda_0_11) - rc22*(CF_13 +
      CS_13*max_lambda_0_11) + (rc23)*(CF_14 + CS_14*max_lambda_0_11)) + (rc7)*(CF_13 +
      CS_13*max_lambda_0_11)*((rc24)*(CF_13 + CS_13*max_lambda_0_11) - rc25*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc26)*pow(CF_14 + CS_14*max_lambda_0_11, 2);

    beta_1 = (rc7)*(CF_11 + CS_11*max_lambda_0_11)*((rc17)*(CF_11 + CS_11*max_lambda_0_11) - rc27*(CF_12 +
      CS_12*max_lambda_0_11) + (rc15)*(CF_13 + CS_13*max_lambda_0_11)) + (rc7)*(CF_12 +
      CS_12*max_lambda_0_11)*((rc27)*(CF_12 + CS_12*max_lambda_0_11) - rc27*(CF_13 + CS_13*max_lambda_0_11)) +
      (rc26)*pow(CF_13 + CS_13*max_lambda_0_11, 2);

    beta_2 = (rc7)*(CF_10 + CS_10*max_lambda_0_11)*((rc17)*(CF_10 + CS_10*max_lambda_0_11) + (rc23)*(CF_12 +
      CS_12*max_lambda_0_11)) + (rc7)*(CF_11 + CS_11*max_lambda_0_11)*(-rc25*(CF_10 + CS_10*max_lambda_0_11) +
      (rc24)*(CF_11 + CS_11*max_lambda_0_11) - rc22*(CF_12 + CS_12*max_lambda_0_11)) + (rc15)*pow(CF_12 +
      CS_12*max_lambda_0_11, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc31)*(CF_12 + CS_12*max_lambda_0_11) + (rc32)*(CF_13 + CS_13*max_lambda_0_11) -
      rc16*(CF_14 + CS_14*max_lambda_0_11)) + omega_1*(-rc16*(CF_11 + CS_11*max_lambda_0_11) + (rc32)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc31)*(CF_13 + CS_13*max_lambda_0_11)) + omega_2*((rc31)*(CF_10 + CS_10*max_lambda_0_11)
      - rc33*(CF_11 + CS_11*max_lambda_0_11) + (rc34)*(CF_12 + CS_12*max_lambda_0_11));

    beta_0 = (rc7)*(CF_13 - CS_13*max_lambda_0_11)*((rc21)*(CF_13 - CS_13*max_lambda_0_11) - rc22*(CF_14 -
      CS_14*max_lambda_0_11) + (rc23)*(CF_15 - CS_15*max_lambda_0_11)) + (rc7)*(CF_14 -
      CS_14*max_lambda_0_11)*((rc24)*(CF_14 - CS_14*max_lambda_0_11) - rc25*(CF_15 - CS_15*max_lambda_0_11)) +
      (rc26)*pow(CF_15 - CS_15*max_lambda_0_11, 2);

    beta_1 = (rc7)*(CF_12 - CS_12*max_lambda_0_11)*((rc17)*(CF_12 - CS_12*max_lambda_0_11) - rc27*(CF_13 -
      CS_13*max_lambda_0_11) + (rc15)*(CF_14 - CS_14*max_lambda_0_11)) + (rc7)*(CF_13 -
      CS_13*max_lambda_0_11)*((rc27)*(CF_13 - CS_13*max_lambda_0_11) - rc27*(CF_14 - CS_14*max_lambda_0_11)) +
      (rc26)*pow(CF_14 - CS_14*max_lambda_0_11, 2);

    beta_2 = (rc7)*(CF_11 - CS_11*max_lambda_0_11)*((rc17)*(CF_11 - CS_11*max_lambda_0_11) - rc25*(CF_12 -
      CS_12*max_lambda_0_11) + (rc23)*(CF_13 - CS_13*max_lambda_0_11)) + (rc7)*(CF_12 -
      CS_12*max_lambda_0_11)*((rc24)*(CF_12 - CS_12*max_lambda_0_11) - rc22*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc15)*pow(CF_13 - CS_13*max_lambda_0_11, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc34)*(CF_13 - CS_13*max_lambda_0_11) - rc33*(CF_14 - CS_14*max_lambda_0_11) +
      (rc31)*(CF_15 - CS_15*max_lambda_0_11)) + omega_1*((rc31)*(CF_12 - CS_12*max_lambda_0_11) + (rc32)*(CF_13 -
      CS_13*max_lambda_0_11) - rc16*(CF_14 - CS_14*max_lambda_0_11)) + omega_2*(-rc16*(CF_11 - CS_11*max_lambda_0_11) +
      (rc32)*(CF_12 - CS_12*max_lambda_0_11) + (rc31)*(CF_13 - CS_13*max_lambda_0_11));

    beta_0 = (rc7)*(CF_22 + CS_22*max_lambda_0_22)*((rc21)*(CF_22 + CS_22*max_lambda_0_22) - rc22*(CF_23 +
      CS_23*max_lambda_0_22) + (rc23)*(CF_24 + CS_24*max_lambda_0_22)) + (rc7)*(CF_23 +
      CS_23*max_lambda_0_22)*((rc24)*(CF_23 + CS_23*max_lambda_0_22) - rc25*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc26)*pow(CF_24 + CS_24*max_lambda_0_22, 2);

    beta_1 = (rc7)*(CF_21 + CS_21*max_lambda_0_22)*((rc17)*(CF_21 + CS_21*max_lambda_0_22) - rc27*(CF_22 +
      CS_22*max_lambda_0_22) + (rc15)*(CF_23 + CS_23*max_lambda_0_22)) + (rc7)*(CF_22 +
      CS_22*max_lambda_0_22)*((rc27)*(CF_22 + CS_22*max_lambda_0_22) - rc27*(CF_23 + CS_23*max_lambda_0_22)) +
      (rc26)*pow(CF_23 + CS_23*max_lambda_0_22, 2);

    beta_2 = (rc7)*(CF_20 + CS_20*max_lambda_0_22)*((rc17)*(CF_20 + CS_20*max_lambda_0_22) + (rc23)*(CF_22 +
      CS_22*max_lambda_0_22)) + (rc7)*(CF_21 + CS_21*max_lambda_0_22)*(-rc25*(CF_20 + CS_20*max_lambda_0_22) +
      (rc24)*(CF_21 + CS_21*max_lambda_0_22) - rc22*(CF_22 + CS_22*max_lambda_0_22)) + (rc15)*pow(CF_22 +
      CS_22*max_lambda_0_22, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc31)*(CF_22 + CS_22*max_lambda_0_22) + (rc32)*(CF_23 + CS_23*max_lambda_0_22) -
      rc16*(CF_24 + CS_24*max_lambda_0_22)) + omega_1*(-rc16*(CF_21 + CS_21*max_lambda_0_22) + (rc32)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc31)*(CF_23 + CS_23*max_lambda_0_22)) + omega_2*((rc31)*(CF_20 + CS_20*max_lambda_0_22)
      - rc33*(CF_21 + CS_21*max_lambda_0_22) + (rc34)*(CF_22 + CS_22*max_lambda_0_22));

    beta_0 = (rc7)*(CF_23 - CS_23*max_lambda_0_22)*((rc21)*(CF_23 - CS_23*max_lambda_0_22) - rc22*(CF_24 -
      CS_24*max_lambda_0_22) + (rc23)*(CF_25 - CS_25*max_lambda_0_22)) + (rc7)*(CF_24 -
      CS_24*max_lambda_0_22)*((rc24)*(CF_24 - CS_24*max_lambda_0_22) - rc25*(CF_25 - CS_25*max_lambda_0_22)) +
      (rc26)*pow(CF_25 - CS_25*max_lambda_0_22, 2);

    beta_1 = (rc7)*(CF_22 - CS_22*max_lambda_0_22)*((rc17)*(CF_22 - CS_22*max_lambda_0_22) - rc27*(CF_23 -
      CS_23*max_lambda_0_22) + (rc15)*(CF_24 - CS_24*max_lambda_0_22)) + (rc7)*(CF_23 -
      CS_23*max_lambda_0_22)*((rc27)*(CF_23 - CS_23*max_lambda_0_22) - rc27*(CF_24 - CS_24*max_lambda_0_22)) +
      (rc26)*pow(CF_24 - CS_24*max_lambda_0_22, 2);

    beta_2 = (rc7)*(CF_21 - CS_21*max_lambda_0_22)*((rc17)*(CF_21 - CS_21*max_lambda_0_22) - rc25*(CF_22 -
      CS_22*max_lambda_0_22) + (rc23)*(CF_23 - CS_23*max_lambda_0_22)) + (rc7)*(CF_22 -
      CS_22*max_lambda_0_22)*((rc24)*(CF_22 - CS_22*max_lambda_0_22) - rc22*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc15)*pow(CF_23 - CS_23*max_lambda_0_22, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc34)*(CF_23 - CS_23*max_lambda_0_22) - rc33*(CF_24 - CS_24*max_lambda_0_22) +
      (rc31)*(CF_25 - CS_25*max_lambda_0_22)) + omega_1*((rc31)*(CF_22 - CS_22*max_lambda_0_22) + (rc32)*(CF_23 -
      CS_23*max_lambda_0_22) - rc16*(CF_24 - CS_24*max_lambda_0_22)) + omega_2*(-rc16*(CF_21 - CS_21*max_lambda_0_22) +
      (rc32)*(CF_22 - CS_22*max_lambda_0_22) + (rc31)*(CF_23 - CS_23*max_lambda_0_22));

    beta_0 = (rc7)*(CF_32 + CS_32*max_lambda_0_33)*((rc21)*(CF_32 + CS_32*max_lambda_0_33) - rc22*(CF_33 +
      CS_33*max_lambda_0_33) + (rc23)*(CF_34 + CS_34*max_lambda_0_33)) + (rc7)*(CF_33 +
      CS_33*max_lambda_0_33)*((rc24)*(CF_33 + CS_33*max_lambda_0_33) - rc25*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc26)*pow(CF_34 + CS_34*max_lambda_0_33, 2);

    beta_1 = (rc7)*(CF_31 + CS_31*max_lambda_0_33)*((rc17)*(CF_31 + CS_31*max_lambda_0_33) - rc27*(CF_32 +
      CS_32*max_lambda_0_33) + (rc15)*(CF_33 + CS_33*max_lambda_0_33)) + (rc7)*(CF_32 +
      CS_32*max_lambda_0_33)*((rc27)*(CF_32 + CS_32*max_lambda_0_33) - rc27*(CF_33 + CS_33*max_lambda_0_33)) +
      (rc26)*pow(CF_33 + CS_33*max_lambda_0_33, 2);

    beta_2 = (rc7)*(CF_30 + CS_30*max_lambda_0_33)*((rc17)*(CF_30 + CS_30*max_lambda_0_33) + (rc23)*(CF_32 +
      CS_32*max_lambda_0_33)) + (rc7)*(CF_31 + CS_31*max_lambda_0_33)*(-rc25*(CF_30 + CS_30*max_lambda_0_33) +
      (rc24)*(CF_31 + CS_31*max_lambda_0_33) - rc22*(CF_32 + CS_32*max_lambda_0_33)) + (rc15)*pow(CF_32 +
      CS_32*max_lambda_0_33, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc31)*(CF_32 + CS_32*max_lambda_0_33) + (rc32)*(CF_33 + CS_33*max_lambda_0_33) -
      rc16*(CF_34 + CS_34*max_lambda_0_33)) + omega_1*(-rc16*(CF_31 + CS_31*max_lambda_0_33) + (rc32)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc31)*(CF_33 + CS_33*max_lambda_0_33)) + omega_2*((rc31)*(CF_30 + CS_30*max_lambda_0_33)
      - rc33*(CF_31 + CS_31*max_lambda_0_33) + (rc34)*(CF_32 + CS_32*max_lambda_0_33));

    beta_0 = (rc7)*(CF_33 - CS_33*max_lambda_0_33)*((rc21)*(CF_33 - CS_33*max_lambda_0_33) - rc22*(CF_34 -
      CS_34*max_lambda_0_33) + (rc23)*(CF_35 - CS_35*max_lambda_0_33)) + (rc7)*(CF_34 -
      CS_34*max_lambda_0_33)*((rc24)*(CF_34 - CS_34*max_lambda_0_33) - rc25*(CF_35 - CS_35*max_lambda_0_33)) +
      (rc26)*pow(CF_35 - CS_35*max_lambda_0_33, 2);

    beta_1 = (rc7)*(CF_32 - CS_32*max_lambda_0_33)*((rc17)*(CF_32 - CS_32*max_lambda_0_33) - rc27*(CF_33 -
      CS_33*max_lambda_0_33) + (rc15)*(CF_34 - CS_34*max_lambda_0_33)) + (rc7)*(CF_33 -
      CS_33*max_lambda_0_33)*((rc27)*(CF_33 - CS_33*max_lambda_0_33) - rc27*(CF_34 - CS_34*max_lambda_0_33)) +
      (rc26)*pow(CF_34 - CS_34*max_lambda_0_33, 2);

    beta_2 = (rc7)*(CF_31 - CS_31*max_lambda_0_33)*((rc17)*(CF_31 - CS_31*max_lambda_0_33) - rc25*(CF_32 -
      CS_32*max_lambda_0_33) + (rc23)*(CF_33 - CS_33*max_lambda_0_33)) + (rc7)*(CF_32 -
      CS_32*max_lambda_0_33)*((rc24)*(CF_32 - CS_32*max_lambda_0_33) - rc22*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc15)*pow(CF_33 - CS_33*max_lambda_0_33, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc34)*(CF_33 - CS_33*max_lambda_0_33) - rc33*(CF_34 - CS_34*max_lambda_0_33) +
      (rc31)*(CF_35 - CS_35*max_lambda_0_33)) + omega_1*((rc31)*(CF_32 - CS_32*max_lambda_0_33) + (rc32)*(CF_33 -
      CS_33*max_lambda_0_33) - rc16*(CF_34 - CS_34*max_lambda_0_33)) + omega_2*(-rc16*(CF_31 - CS_31*max_lambda_0_33) +
      (rc32)*(CF_32 - CS_32*max_lambda_0_33) + (rc31)*(CF_33 - CS_33*max_lambda_0_33));

    wk0_B0[OPS_ACC13(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC14(0,0)] = AVG_0_D01*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0) +
      AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC15(0,0)] = -AVG_0_D00*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1) +
      AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC12(0,0)] = AVG_0_rho*Recon_1*(-AVG_0_D00*AVG_0_u1*inv_AVG_met_fact +
      AVG_0_D01*AVG_0_u0*inv_AVG_met_fact) +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(rcinv35*((rc7)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) + AVG_0_a*(AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv35*((rc7)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) - AVG_0_a*(AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)) +
      Recon_0*((rc7)*pow(AVG_0_u0, 2) + (rc7)*pow(AVG_0_u1, 2));

}

 void opensbliblock00Kernel001(const double *U1_B0, const double *rhoE_B0, const double *rho_B0, const double *D11_B0,
const double *D10_B0, const double *detJ_B0, const double *rhou1_B0, const double *a_B0, const double *rhou0_B0, const
double *u0_B0, const double *u1_B0, const double *p_B0, double *wk6_B0, double *wk7_B0, double *wk4_B0, double
*wk5_B0)
{
   double max_lambda_1_22 = 0.0;
   double AVG_1_u1 = 0.0;
   double AVG_1_D11 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double omega_0 = 0.0;
   double CF_25 = 0.0;
   double CF_24 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double CF_12 = 0.0;
   double CF_35 = 0.0;
   double CS_10 = 0.0;
   double beta_0 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double alpha_1 = 0.0;
   double Recon_1 = 0.0;
   double CS_32 = 0.0;
   double CS_00 = 0.0;
   double CS_11 = 0.0;
   double beta_1 = 0.0;
   double CS_01 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double CF_00 = 0.0;
   double CF_21 = 0.0;
   double inv_AVG_met_fact = 0.0;
   double CS_31 = 0.0;
   double CF_11 = 0.0;
   double CF_30 = 0.0;
   double Recon_3 = 0.0;
   double Recon_2 = 0.0;
   double CS_34 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double CF_05 = 0.0;
   double CS_35 = 0.0;
   double CS_25 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double CS_33 = 0.0;
   double CS_24 = 0.0;
   double inv_AVG_rho = 0.0;
   double AVG_1_1_LEV_00 = 0.0;
   double beta_2 = 0.0;
   double CS_23 = 0.0;
   double AVG_1_D10 = 0.0;
   double AVG_1_u0 = 0.0;
   double CS_03 = 0.0;
   double CF_23 = 0.0;
   double CS_14 = 0.0;
   double CS_02 = 0.0;
   double CF_33 = 0.0;
   double CS_15 = 0.0;
   double CF_13 = 0.0;
   double omega_1 = 0.0;
   double Recon_0 = 0.0;
   double AVG_1_rho = 0.0;
   double CF_14 = 0.0;
   double max_lambda_1_11 = 0.0;
   double CF_15 = 0.0;
   double CF_34 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double CF_20 = 0.0;
   double AVG_1_a = 0.0;
   double alpha_0 = 0.0;
   double max_lambda_1_00 = 0.0;
   double CS_30 = 0.0;
   double CF_31 = 0.0;
   double omega_2 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double CF_01 = 0.0;
   double CS_21 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CS_05 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CF_04 = 0.0;
   double alpha_2 = 0.0;
   double CS_12 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_04 = 0.0;
   double CS_13 = 0.0;
   double inv_alpha_sum = 0.0;
   double CF_03 = 0.0;
   double CF_02 = 0.0;
   double max_lambda_1_33 = 0.0;
   double CS_22 = 0.0;
   double CF_32 = 0.0;
   double CF_22 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   AVG_1_u1 = (rc7)*(u1_B0[OPS_ACC10(0,0)] + u1_B0[OPS_ACC10(0,1)]);

   AVG_1_rho = (rc7)*(rho_B0[OPS_ACC2(0,0)] + rho_B0[OPS_ACC2(0,1)]);

   AVG_1_u0 = (rc7)*(u0_B0[OPS_ACC9(0,1)] + u0_B0[OPS_ACC9(0,0)]);

   AVG_1_a = (rc7)*(a_B0[OPS_ACC7(0,0)] + a_B0[OPS_ACC7(0,1)]);

   AVG_1_D11 = (rc7)*(D11_B0[OPS_ACC3(0,1)] + D11_B0[OPS_ACC3(0,0)]);

   AVG_1_D10 = (rc7)*(D10_B0[OPS_ACC4(0,0)] + D10_B0[OPS_ACC4(0,1)]);

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

   inv_AVG_met_fact = pow(pow(AVG_1_D10, 2) + pow(AVG_1_D11, 2), rc20);

    AVG_1_1_LEV_00 = -rc7*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_1_1_LEV_01 = gamma_m1*AVG_1_u0*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_02 = gamma_m1*AVG_1_u1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_10 = inv_AVG_met_fact*inv_AVG_rho*(AVG_1_D10*AVG_1_u1 - AVG_1_D11*AVG_1_u0);

   AVG_1_1_LEV_11 = AVG_1_D11*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_12 = -AVG_1_D10*inv_AVG_met_fact*inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_1_u0, 2) - gama*pow(AVG_1_u1, 2) +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact + 2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact + pow(AVG_1_u0, 2) +
      pow(AVG_1_u1, 2));

    AVG_1_1_LEV_21 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u0 + AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0);

    AVG_1_1_LEV_22 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u1 + AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1);

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_1_u0, 2) + gama*pow(AVG_1_u1, 2) +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact + 2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact - pow(AVG_1_u0, 2) -
      pow(AVG_1_u1, 2));

    AVG_1_1_LEV_31 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u0 + AVG_1_D10*AVG_1_a*inv_AVG_met_fact -
      AVG_1_u0);

    AVG_1_1_LEV_32 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u1 + AVG_1_D11*AVG_1_a*inv_AVG_met_fact -
      AVG_1_u1);

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC2(0,-2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC5(0,-2)];

    CF_10 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC2(0,-2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC6(0,-2)])*detJ_B0[OPS_ACC5(0,-2)];

    CF_20 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC2(0,-2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC5(0,-2)];

    CF_30 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC2(0,-2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC5(0,-2)];

    CF_01 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC2(0,-1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC5(0,-1)];

    CF_11 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC2(0,-1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC6(0,-1)])*detJ_B0[OPS_ACC5(0,-1)];

    CF_21 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC2(0,-1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC5(0,-1)];

    CF_31 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC2(0,-1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC5(0,-1)];

    CF_02 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC2(0,0)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC5(0,0)];

    CF_12 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC2(0,0)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC6(0,0)])*detJ_B0[OPS_ACC5(0,0)];

    CF_22 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC2(0,0)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC5(0,0)];

    CF_32 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC2(0,0)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC5(0,0)];

    CF_03 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC2(0,1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC5(0,1)];

    CF_13 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC2(0,1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC6(0,1)])*detJ_B0[OPS_ACC5(0,1)];

    CF_23 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC2(0,1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC5(0,1)];

    CF_33 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC2(0,1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC5(0,1)];

    CF_04 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC2(0,2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC5(0,2)];

    CF_14 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC2(0,2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC6(0,2)])*detJ_B0[OPS_ACC5(0,2)];

    CF_24 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC2(0,2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC5(0,2)];

    CF_34 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC2(0,2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC5(0,2)];

    CF_05 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC2(0,3)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC4(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC3(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC5(0,3)];

    CF_15 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC2(0,3)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC4(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC3(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC6(0,3)])*detJ_B0[OPS_ACC5(0,3)];

    CF_25 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC2(0,3)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC4(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC3(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC5(0,3)];

    CF_35 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC2(0,3)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC4(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC3(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC5(0,3)];

    CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,-2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-2)];

    CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,-1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-1)];

    CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,0)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,0)];

    CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,1)];

    CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,2)];

    CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC6(0,3)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,3)];

    CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,-2)];

    CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,-1)];

    CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,0)];

    CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,1)];

    CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,2)];

    CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC6(0,3)];

    CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,-2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-2)];

    CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,-1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-1)];

    CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,0)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,0)];

    CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,1)];

    CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,2)];

    CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC6(0,3)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,3)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,-2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-2)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,-1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-1)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,0)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,1)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,2)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC6(0,3)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,3)];

    max_lambda_1_00 = fmax(fabs(D10_B0[OPS_ACC4(0,-2)]*u0_B0[OPS_ACC9(0,-2)] +
      D11_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC10(0,-2)]), fmax(fabs(D10_B0[OPS_ACC4(0,1)]*u0_B0[OPS_ACC9(0,1)] +
      D11_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC10(0,1)]), fmax(fabs(D10_B0[OPS_ACC4(0,3)]*u0_B0[OPS_ACC9(0,3)] +
      D11_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC10(0,3)]), fmax(fabs(D10_B0[OPS_ACC4(0,-1)]*u0_B0[OPS_ACC9(0,-1)] +
      D11_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC10(0,-1)]), fmax(fabs(D10_B0[OPS_ACC4(0,2)]*u0_B0[OPS_ACC9(0,2)] +
      D11_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC10(0,2)]), fabs(D10_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC9(0,0)] +
      D11_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC10(0,0)]))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(sqrt(pow(D10_B0[OPS_ACC4(0,0)], 2) + pow(D11_B0[OPS_ACC3(0,0)], 2))*a_B0[OPS_ACC7(0,0)]
      + D10_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC9(0,0)] + D11_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC10(0,0)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC4(0,3)], 2) + pow(D11_B0[OPS_ACC3(0,3)], 2))*a_B0[OPS_ACC7(0,3)] +
      D10_B0[OPS_ACC4(0,3)]*u0_B0[OPS_ACC9(0,3)] + D11_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC10(0,3)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC4(0,2)], 2) + pow(D11_B0[OPS_ACC3(0,2)], 2))*a_B0[OPS_ACC7(0,2)] +
      D10_B0[OPS_ACC4(0,2)]*u0_B0[OPS_ACC9(0,2)] + D11_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC10(0,2)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC4(0,-2)], 2) + pow(D11_B0[OPS_ACC3(0,-2)], 2))*a_B0[OPS_ACC7(0,-2)] +
      D10_B0[OPS_ACC4(0,-2)]*u0_B0[OPS_ACC9(0,-2)] + D11_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC10(0,-2)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC4(0,1)], 2) + pow(D11_B0[OPS_ACC3(0,1)], 2))*a_B0[OPS_ACC7(0,1)] +
      D10_B0[OPS_ACC4(0,1)]*u0_B0[OPS_ACC9(0,1)] + D11_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC10(0,1)]),
      fabs(sqrt(pow(D10_B0[OPS_ACC4(0,-1)], 2) + pow(D11_B0[OPS_ACC3(0,-1)], 2))*a_B0[OPS_ACC7(0,-1)] +
      D10_B0[OPS_ACC4(0,-1)]*u0_B0[OPS_ACC9(0,-1)] + D11_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC10(0,-1)]))))));

    max_lambda_1_33 = fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,-2)], 2) + pow(D11_B0[OPS_ACC3(0,-2)],
      2))*a_B0[OPS_ACC7(0,-2)] + D10_B0[OPS_ACC4(0,-2)]*u0_B0[OPS_ACC9(0,-2)] +
      D11_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC10(0,-2)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,2)], 2) +
      pow(D11_B0[OPS_ACC3(0,2)], 2))*a_B0[OPS_ACC7(0,2)] + D10_B0[OPS_ACC4(0,2)]*u0_B0[OPS_ACC9(0,2)] +
      D11_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC10(0,2)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,0)], 2) +
      pow(D11_B0[OPS_ACC3(0,0)], 2))*a_B0[OPS_ACC7(0,0)] + D10_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC9(0,0)] +
      D11_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC10(0,0)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,-1)], 2) +
      pow(D11_B0[OPS_ACC3(0,-1)], 2))*a_B0[OPS_ACC7(0,-1)] + D10_B0[OPS_ACC4(0,-1)]*u0_B0[OPS_ACC9(0,-1)] +
      D11_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC10(0,-1)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,3)], 2) +
      pow(D11_B0[OPS_ACC3(0,3)], 2))*a_B0[OPS_ACC7(0,3)] + D10_B0[OPS_ACC4(0,3)]*u0_B0[OPS_ACC9(0,3)] +
      D11_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC10(0,3)]), fabs(-sqrt(pow(D10_B0[OPS_ACC4(0,1)], 2) +
      pow(D11_B0[OPS_ACC3(0,1)], 2))*a_B0[OPS_ACC7(0,1)] + D10_B0[OPS_ACC4(0,1)]*u0_B0[OPS_ACC9(0,1)] +
      D11_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC10(0,1)]))))));

    beta_0 = (rc7)*(CF_02 + CS_02*max_lambda_1_00)*((rc21)*(CF_02 + CS_02*max_lambda_1_00) - rc22*(CF_03 +
      CS_03*max_lambda_1_00) + (rc23)*(CF_04 + CS_04*max_lambda_1_00)) + (rc7)*(CF_03 +
      CS_03*max_lambda_1_00)*((rc24)*(CF_03 + CS_03*max_lambda_1_00) - rc25*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc26)*pow(CF_04 + CS_04*max_lambda_1_00, 2);

    beta_1 = (rc7)*(CF_01 + CS_01*max_lambda_1_00)*((rc17)*(CF_01 + CS_01*max_lambda_1_00) - rc27*(CF_02 +
      CS_02*max_lambda_1_00) + (rc15)*(CF_03 + CS_03*max_lambda_1_00)) + (rc7)*(CF_02 +
      CS_02*max_lambda_1_00)*((rc27)*(CF_02 + CS_02*max_lambda_1_00) - rc27*(CF_03 + CS_03*max_lambda_1_00)) +
      (rc26)*pow(CF_03 + CS_03*max_lambda_1_00, 2);

    beta_2 = (rc7)*(CF_00 + CS_00*max_lambda_1_00)*((rc17)*(CF_00 + CS_00*max_lambda_1_00) + (rc23)*(CF_02 +
      CS_02*max_lambda_1_00)) + (rc7)*(CF_01 + CS_01*max_lambda_1_00)*(-rc25*(CF_00 + CS_00*max_lambda_1_00) +
      (rc24)*(CF_01 + CS_01*max_lambda_1_00) - rc22*(CF_02 + CS_02*max_lambda_1_00)) + (rc15)*pow(CF_02 +
      CS_02*max_lambda_1_00, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc31)*(CF_02 + CS_02*max_lambda_1_00) + (rc32)*(CF_03 + CS_03*max_lambda_1_00) -
      rc16*(CF_04 + CS_04*max_lambda_1_00)) + omega_1*(-rc16*(CF_01 + CS_01*max_lambda_1_00) + (rc32)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc31)*(CF_03 + CS_03*max_lambda_1_00)) + omega_2*((rc31)*(CF_00 + CS_00*max_lambda_1_00)
      - rc33*(CF_01 + CS_01*max_lambda_1_00) + (rc34)*(CF_02 + CS_02*max_lambda_1_00));

    beta_0 = (rc7)*(CF_03 - CS_03*max_lambda_1_00)*((rc21)*(CF_03 - CS_03*max_lambda_1_00) - rc22*(CF_04 -
      CS_04*max_lambda_1_00) + (rc23)*(CF_05 - CS_05*max_lambda_1_00)) + (rc7)*(CF_04 -
      CS_04*max_lambda_1_00)*((rc24)*(CF_04 - CS_04*max_lambda_1_00) - rc25*(CF_05 - CS_05*max_lambda_1_00)) +
      (rc26)*pow(CF_05 - CS_05*max_lambda_1_00, 2);

    beta_1 = (rc7)*(CF_02 - CS_02*max_lambda_1_00)*((rc17)*(CF_02 - CS_02*max_lambda_1_00) - rc27*(CF_03 -
      CS_03*max_lambda_1_00) + (rc15)*(CF_04 - CS_04*max_lambda_1_00)) + (rc7)*(CF_03 -
      CS_03*max_lambda_1_00)*((rc27)*(CF_03 - CS_03*max_lambda_1_00) - rc27*(CF_04 - CS_04*max_lambda_1_00)) +
      (rc26)*pow(CF_04 - CS_04*max_lambda_1_00, 2);

    beta_2 = (rc7)*(CF_01 - CS_01*max_lambda_1_00)*((rc17)*(CF_01 - CS_01*max_lambda_1_00) - rc25*(CF_02 -
      CS_02*max_lambda_1_00) + (rc23)*(CF_03 - CS_03*max_lambda_1_00)) + (rc7)*(CF_02 -
      CS_02*max_lambda_1_00)*((rc24)*(CF_02 - CS_02*max_lambda_1_00) - rc22*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc15)*pow(CF_03 - CS_03*max_lambda_1_00, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc34)*(CF_03 - CS_03*max_lambda_1_00) - rc33*(CF_04 - CS_04*max_lambda_1_00) +
      (rc31)*(CF_05 - CS_05*max_lambda_1_00)) + omega_1*((rc31)*(CF_02 - CS_02*max_lambda_1_00) + (rc32)*(CF_03 -
      CS_03*max_lambda_1_00) - rc16*(CF_04 - CS_04*max_lambda_1_00)) + omega_2*(-rc16*(CF_01 - CS_01*max_lambda_1_00) +
      (rc32)*(CF_02 - CS_02*max_lambda_1_00) + (rc31)*(CF_03 - CS_03*max_lambda_1_00));

    beta_0 = (rc7)*(CF_12 + CS_12*max_lambda_1_11)*((rc21)*(CF_12 + CS_12*max_lambda_1_11) - rc22*(CF_13 +
      CS_13*max_lambda_1_11) + (rc23)*(CF_14 + CS_14*max_lambda_1_11)) + (rc7)*(CF_13 +
      CS_13*max_lambda_1_11)*((rc24)*(CF_13 + CS_13*max_lambda_1_11) - rc25*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc26)*pow(CF_14 + CS_14*max_lambda_1_11, 2);

    beta_1 = (rc7)*(CF_11 + CS_11*max_lambda_1_11)*((rc17)*(CF_11 + CS_11*max_lambda_1_11) - rc27*(CF_12 +
      CS_12*max_lambda_1_11) + (rc15)*(CF_13 + CS_13*max_lambda_1_11)) + (rc7)*(CF_12 +
      CS_12*max_lambda_1_11)*((rc27)*(CF_12 + CS_12*max_lambda_1_11) - rc27*(CF_13 + CS_13*max_lambda_1_11)) +
      (rc26)*pow(CF_13 + CS_13*max_lambda_1_11, 2);

    beta_2 = (rc7)*(CF_10 + CS_10*max_lambda_1_11)*((rc17)*(CF_10 + CS_10*max_lambda_1_11) + (rc23)*(CF_12 +
      CS_12*max_lambda_1_11)) + (rc7)*(CF_11 + CS_11*max_lambda_1_11)*(-rc25*(CF_10 + CS_10*max_lambda_1_11) +
      (rc24)*(CF_11 + CS_11*max_lambda_1_11) - rc22*(CF_12 + CS_12*max_lambda_1_11)) + (rc15)*pow(CF_12 +
      CS_12*max_lambda_1_11, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc31)*(CF_12 + CS_12*max_lambda_1_11) + (rc32)*(CF_13 + CS_13*max_lambda_1_11) -
      rc16*(CF_14 + CS_14*max_lambda_1_11)) + omega_1*(-rc16*(CF_11 + CS_11*max_lambda_1_11) + (rc32)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc31)*(CF_13 + CS_13*max_lambda_1_11)) + omega_2*((rc31)*(CF_10 + CS_10*max_lambda_1_11)
      - rc33*(CF_11 + CS_11*max_lambda_1_11) + (rc34)*(CF_12 + CS_12*max_lambda_1_11));

    beta_0 = (rc7)*(CF_13 - CS_13*max_lambda_1_11)*((rc21)*(CF_13 - CS_13*max_lambda_1_11) - rc22*(CF_14 -
      CS_14*max_lambda_1_11) + (rc23)*(CF_15 - CS_15*max_lambda_1_11)) + (rc7)*(CF_14 -
      CS_14*max_lambda_1_11)*((rc24)*(CF_14 - CS_14*max_lambda_1_11) - rc25*(CF_15 - CS_15*max_lambda_1_11)) +
      (rc26)*pow(CF_15 - CS_15*max_lambda_1_11, 2);

    beta_1 = (rc7)*(CF_12 - CS_12*max_lambda_1_11)*((rc17)*(CF_12 - CS_12*max_lambda_1_11) - rc27*(CF_13 -
      CS_13*max_lambda_1_11) + (rc15)*(CF_14 - CS_14*max_lambda_1_11)) + (rc7)*(CF_13 -
      CS_13*max_lambda_1_11)*((rc27)*(CF_13 - CS_13*max_lambda_1_11) - rc27*(CF_14 - CS_14*max_lambda_1_11)) +
      (rc26)*pow(CF_14 - CS_14*max_lambda_1_11, 2);

    beta_2 = (rc7)*(CF_11 - CS_11*max_lambda_1_11)*((rc17)*(CF_11 - CS_11*max_lambda_1_11) - rc25*(CF_12 -
      CS_12*max_lambda_1_11) + (rc23)*(CF_13 - CS_13*max_lambda_1_11)) + (rc7)*(CF_12 -
      CS_12*max_lambda_1_11)*((rc24)*(CF_12 - CS_12*max_lambda_1_11) - rc22*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc15)*pow(CF_13 - CS_13*max_lambda_1_11, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc34)*(CF_13 - CS_13*max_lambda_1_11) - rc33*(CF_14 - CS_14*max_lambda_1_11) +
      (rc31)*(CF_15 - CS_15*max_lambda_1_11)) + omega_1*((rc31)*(CF_12 - CS_12*max_lambda_1_11) + (rc32)*(CF_13 -
      CS_13*max_lambda_1_11) - rc16*(CF_14 - CS_14*max_lambda_1_11)) + omega_2*(-rc16*(CF_11 - CS_11*max_lambda_1_11) +
      (rc32)*(CF_12 - CS_12*max_lambda_1_11) + (rc31)*(CF_13 - CS_13*max_lambda_1_11));

    beta_0 = (rc7)*(CF_22 + CS_22*max_lambda_1_22)*((rc21)*(CF_22 + CS_22*max_lambda_1_22) - rc22*(CF_23 +
      CS_23*max_lambda_1_22) + (rc23)*(CF_24 + CS_24*max_lambda_1_22)) + (rc7)*(CF_23 +
      CS_23*max_lambda_1_22)*((rc24)*(CF_23 + CS_23*max_lambda_1_22) - rc25*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc26)*pow(CF_24 + CS_24*max_lambda_1_22, 2);

    beta_1 = (rc7)*(CF_21 + CS_21*max_lambda_1_22)*((rc17)*(CF_21 + CS_21*max_lambda_1_22) - rc27*(CF_22 +
      CS_22*max_lambda_1_22) + (rc15)*(CF_23 + CS_23*max_lambda_1_22)) + (rc7)*(CF_22 +
      CS_22*max_lambda_1_22)*((rc27)*(CF_22 + CS_22*max_lambda_1_22) - rc27*(CF_23 + CS_23*max_lambda_1_22)) +
      (rc26)*pow(CF_23 + CS_23*max_lambda_1_22, 2);

    beta_2 = (rc7)*(CF_20 + CS_20*max_lambda_1_22)*((rc17)*(CF_20 + CS_20*max_lambda_1_22) + (rc23)*(CF_22 +
      CS_22*max_lambda_1_22)) + (rc7)*(CF_21 + CS_21*max_lambda_1_22)*(-rc25*(CF_20 + CS_20*max_lambda_1_22) +
      (rc24)*(CF_21 + CS_21*max_lambda_1_22) - rc22*(CF_22 + CS_22*max_lambda_1_22)) + (rc15)*pow(CF_22 +
      CS_22*max_lambda_1_22, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc31)*(CF_22 + CS_22*max_lambda_1_22) + (rc32)*(CF_23 + CS_23*max_lambda_1_22) -
      rc16*(CF_24 + CS_24*max_lambda_1_22)) + omega_1*(-rc16*(CF_21 + CS_21*max_lambda_1_22) + (rc32)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc31)*(CF_23 + CS_23*max_lambda_1_22)) + omega_2*((rc31)*(CF_20 + CS_20*max_lambda_1_22)
      - rc33*(CF_21 + CS_21*max_lambda_1_22) + (rc34)*(CF_22 + CS_22*max_lambda_1_22));

    beta_0 = (rc7)*(CF_23 - CS_23*max_lambda_1_22)*((rc21)*(CF_23 - CS_23*max_lambda_1_22) - rc22*(CF_24 -
      CS_24*max_lambda_1_22) + (rc23)*(CF_25 - CS_25*max_lambda_1_22)) + (rc7)*(CF_24 -
      CS_24*max_lambda_1_22)*((rc24)*(CF_24 - CS_24*max_lambda_1_22) - rc25*(CF_25 - CS_25*max_lambda_1_22)) +
      (rc26)*pow(CF_25 - CS_25*max_lambda_1_22, 2);

    beta_1 = (rc7)*(CF_22 - CS_22*max_lambda_1_22)*((rc17)*(CF_22 - CS_22*max_lambda_1_22) - rc27*(CF_23 -
      CS_23*max_lambda_1_22) + (rc15)*(CF_24 - CS_24*max_lambda_1_22)) + (rc7)*(CF_23 -
      CS_23*max_lambda_1_22)*((rc27)*(CF_23 - CS_23*max_lambda_1_22) - rc27*(CF_24 - CS_24*max_lambda_1_22)) +
      (rc26)*pow(CF_24 - CS_24*max_lambda_1_22, 2);

    beta_2 = (rc7)*(CF_21 - CS_21*max_lambda_1_22)*((rc17)*(CF_21 - CS_21*max_lambda_1_22) - rc25*(CF_22 -
      CS_22*max_lambda_1_22) + (rc23)*(CF_23 - CS_23*max_lambda_1_22)) + (rc7)*(CF_22 -
      CS_22*max_lambda_1_22)*((rc24)*(CF_22 - CS_22*max_lambda_1_22) - rc22*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc15)*pow(CF_23 - CS_23*max_lambda_1_22, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc34)*(CF_23 - CS_23*max_lambda_1_22) - rc33*(CF_24 - CS_24*max_lambda_1_22) +
      (rc31)*(CF_25 - CS_25*max_lambda_1_22)) + omega_1*((rc31)*(CF_22 - CS_22*max_lambda_1_22) + (rc32)*(CF_23 -
      CS_23*max_lambda_1_22) - rc16*(CF_24 - CS_24*max_lambda_1_22)) + omega_2*(-rc16*(CF_21 - CS_21*max_lambda_1_22) +
      (rc32)*(CF_22 - CS_22*max_lambda_1_22) + (rc31)*(CF_23 - CS_23*max_lambda_1_22));

    beta_0 = (rc7)*(CF_32 + CS_32*max_lambda_1_33)*((rc21)*(CF_32 + CS_32*max_lambda_1_33) - rc22*(CF_33 +
      CS_33*max_lambda_1_33) + (rc23)*(CF_34 + CS_34*max_lambda_1_33)) + (rc7)*(CF_33 +
      CS_33*max_lambda_1_33)*((rc24)*(CF_33 + CS_33*max_lambda_1_33) - rc25*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc26)*pow(CF_34 + CS_34*max_lambda_1_33, 2);

    beta_1 = (rc7)*(CF_31 + CS_31*max_lambda_1_33)*((rc17)*(CF_31 + CS_31*max_lambda_1_33) - rc27*(CF_32 +
      CS_32*max_lambda_1_33) + (rc15)*(CF_33 + CS_33*max_lambda_1_33)) + (rc7)*(CF_32 +
      CS_32*max_lambda_1_33)*((rc27)*(CF_32 + CS_32*max_lambda_1_33) - rc27*(CF_33 + CS_33*max_lambda_1_33)) +
      (rc26)*pow(CF_33 + CS_33*max_lambda_1_33, 2);

    beta_2 = (rc7)*(CF_30 + CS_30*max_lambda_1_33)*((rc17)*(CF_30 + CS_30*max_lambda_1_33) + (rc23)*(CF_32 +
      CS_32*max_lambda_1_33)) + (rc7)*(CF_31 + CS_31*max_lambda_1_33)*(-rc25*(CF_30 + CS_30*max_lambda_1_33) +
      (rc24)*(CF_31 + CS_31*max_lambda_1_33) - rc22*(CF_32 + CS_32*max_lambda_1_33)) + (rc15)*pow(CF_32 +
      CS_32*max_lambda_1_33, 2);

   alpha_0 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc31)*(CF_32 + CS_32*max_lambda_1_33) + (rc32)*(CF_33 + CS_33*max_lambda_1_33) -
      rc16*(CF_34 + CS_34*max_lambda_1_33)) + omega_1*(-rc16*(CF_31 + CS_31*max_lambda_1_33) + (rc32)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc31)*(CF_33 + CS_33*max_lambda_1_33)) + omega_2*((rc31)*(CF_30 + CS_30*max_lambda_1_33)
      - rc33*(CF_31 + CS_31*max_lambda_1_33) + (rc34)*(CF_32 + CS_32*max_lambda_1_33));

    beta_0 = (rc7)*(CF_33 - CS_33*max_lambda_1_33)*((rc21)*(CF_33 - CS_33*max_lambda_1_33) - rc22*(CF_34 -
      CS_34*max_lambda_1_33) + (rc23)*(CF_35 - CS_35*max_lambda_1_33)) + (rc7)*(CF_34 -
      CS_34*max_lambda_1_33)*((rc24)*(CF_34 - CS_34*max_lambda_1_33) - rc25*(CF_35 - CS_35*max_lambda_1_33)) +
      (rc26)*pow(CF_35 - CS_35*max_lambda_1_33, 2);

    beta_1 = (rc7)*(CF_32 - CS_32*max_lambda_1_33)*((rc17)*(CF_32 - CS_32*max_lambda_1_33) - rc27*(CF_33 -
      CS_33*max_lambda_1_33) + (rc15)*(CF_34 - CS_34*max_lambda_1_33)) + (rc7)*(CF_33 -
      CS_33*max_lambda_1_33)*((rc27)*(CF_33 - CS_33*max_lambda_1_33) - rc27*(CF_34 - CS_34*max_lambda_1_33)) +
      (rc26)*pow(CF_34 - CS_34*max_lambda_1_33, 2);

    beta_2 = (rc7)*(CF_31 - CS_31*max_lambda_1_33)*((rc17)*(CF_31 - CS_31*max_lambda_1_33) - rc25*(CF_32 -
      CS_32*max_lambda_1_33) + (rc23)*(CF_33 - CS_33*max_lambda_1_33)) + (rc7)*(CF_32 -
      CS_32*max_lambda_1_33)*((rc24)*(CF_32 - CS_32*max_lambda_1_33) - rc22*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc15)*pow(CF_33 - CS_33*max_lambda_1_33, 2);

   alpha_0 = 0.1 + (rc30)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc29)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc34)*(CF_33 - CS_33*max_lambda_1_33) - rc33*(CF_34 - CS_34*max_lambda_1_33) +
      (rc31)*(CF_35 - CS_35*max_lambda_1_33)) + omega_1*((rc31)*(CF_32 - CS_32*max_lambda_1_33) + (rc32)*(CF_33 -
      CS_33*max_lambda_1_33) - rc16*(CF_34 - CS_34*max_lambda_1_33)) + omega_2*(-rc16*(CF_31 - CS_31*max_lambda_1_33) +
      (rc32)*(CF_32 - CS_32*max_lambda_1_33) + (rc31)*(CF_33 - CS_33*max_lambda_1_33));

    wk4_B0[OPS_ACC14(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    wk5_B0[OPS_ACC15(0,0)] = AVG_1_D11*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0) +
      AVG_1_u0*Recon_0;

    wk6_B0[OPS_ACC12(0,0)] = -AVG_1_D10*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1) +
      AVG_1_u1*Recon_0;

    wk7_B0[OPS_ACC13(0,0)] = AVG_1_rho*Recon_1*(-AVG_1_D10*AVG_1_u1*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u0*inv_AVG_met_fact) +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv35*((rc7)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*(AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv35*((rc7)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*(AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)) +
      Recon_0*((rc7)*pow(AVG_1_u0, 2) + (rc7)*pow(AVG_1_u1, 2));

}

 void opensbliblock00Kernel017(const double *wk6_B0, const double *wk4_B0, const double *wk5_B0, const double *wk3_B0,
const double *wk0_B0, const double *wk1_B0, const double *detJ_B0, const double *wk7_B0, const double *wk2_B0, double
*Residual3_B0, double *Residual0_B0, double *Residual2_B0, double *Residual1_B0)
{
    Residual0_B0[OPS_ACC10(0,0)] = -(inv_1*(-wk0_B0[OPS_ACC4(-1,0)] + wk0_B0[OPS_ACC4(0,0)]) +
      inv_2*(wk4_B0[OPS_ACC1(0,0)] - wk4_B0[OPS_ACC1(0,-1)]))/detJ_B0[OPS_ACC6(0,0)];

    Residual1_B0[OPS_ACC12(0,0)] = -(inv_1*(wk1_B0[OPS_ACC5(0,0)] - wk1_B0[OPS_ACC5(-1,0)]) +
      inv_2*(-wk5_B0[OPS_ACC2(0,-1)] + wk5_B0[OPS_ACC2(0,0)]))/detJ_B0[OPS_ACC6(0,0)];

    Residual2_B0[OPS_ACC11(0,0)] = -(inv_1*(wk2_B0[OPS_ACC8(0,0)] - wk2_B0[OPS_ACC8(-1,0)]) +
      inv_2*(-wk6_B0[OPS_ACC0(0,-1)] + wk6_B0[OPS_ACC0(0,0)]))/detJ_B0[OPS_ACC6(0,0)];

    Residual3_B0[OPS_ACC9(0,0)] = -(inv_1*(wk3_B0[OPS_ACC3(0,0)] - wk3_B0[OPS_ACC3(-1,0)]) +
      inv_2*(-wk7_B0[OPS_ACC7(0,-1)] + wk7_B0[OPS_ACC7(0,0)]))/detJ_B0[OPS_ACC6(0,0)];

}

void opensbliblock00Kernel028(const double *u1_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_0*((idx[0] == 0) ? (
   (rc34)*u1_B0[OPS_ACC0(4,0)] - rc36*u1_B0[OPS_ACC0(1,0)] -
      rc37*u1_B0[OPS_ACC0(3,0)] + (rc38)*u1_B0[OPS_ACC0(0,0)] + (rc39)*u1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == 1) ? (
  
      (rc7)*u1_B0[OPS_ACC0(1,0)] + (rc34)*u1_B0[OPS_ACC0(-1,0)] - rc16*u1_B0[OPS_ACC0(3,0)] - rc21*u1_B0[OPS_ACC0(0,0)]
      + (rc26)*u1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc34)*u1_B0[OPS_ACC0(-4,0)] +
      (rc38)*u1_B0[OPS_ACC0(0,0)] - rc36*u1_B0[OPS_ACC0(-1,0)] + (rc39)*u1_B0[OPS_ACC0(-2,0)] -
      rc37*u1_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc34)*u1_B0[OPS_ACC0(1,0)] +
      (rc7)*u1_B0[OPS_ACC0(-1,0)] - rc21*u1_B0[OPS_ACC0(0,0)] - rc16*u1_B0[OPS_ACC0(-3,0)] +
      (rc26)*u1_B0[OPS_ACC0(-2,0)]
)
: (
   (rc13)*u1_B0[OPS_ACC0(1,0)] - rc16*u1_B0[OPS_ACC0(-2,0)] -
      rc40*u1_B0[OPS_ACC0(0,0)] + (rc13)*u1_B0[OPS_ACC0(-1,0)] - rc16*u1_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel029(const double *T_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   (rc13)*T_B0[OPS_ACC0(3,0)] + 4*T_B0[OPS_ACC0(1,0)] -
      rc11*T_B0[OPS_ACC0(4,0)] - 3*T_B0[OPS_ACC0(2,0)] - rc12*T_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
  
      (rc16)*T_B0[OPS_ACC0(3,0)] - rc11*T_B0[OPS_ACC0(-1,0)] + (rc14)*T_B0[OPS_ACC0(1,0)] - rc7*T_B0[OPS_ACC0(2,0)] -
      rc15*T_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -4*T_B0[OPS_ACC0(-1,0)] +
      (rc11)*T_B0[OPS_ACC0(-4,0)] + (rc12)*T_B0[OPS_ACC0(0,0)] - rc13*T_B0[OPS_ACC0(-3,0)] + 3*T_B0[OPS_ACC0(-2,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc7)*T_B0[OPS_ACC0(-2,0)] + (rc11)*T_B0[OPS_ACC0(1,0)] +
      (rc15)*T_B0[OPS_ACC0(0,0)] - rc16*T_B0[OPS_ACC0(-3,0)] - rc14*T_B0[OPS_ACC0(-1,0)]
)
: (
  
      -rc17*T_B0[OPS_ACC0(-1,0)] + (rc17)*T_B0[OPS_ACC0(1,0)] - rc16*T_B0[OPS_ACC0(2,0)] +
      (rc16)*T_B0[OPS_ACC0(-2,0)]
)))));

}

void opensbliblock00Kernel042(const double *u0_B0, double *wk14_B0, const int *idx)
{
    wk14_B0[OPS_ACC1(0,0)] = inv_0*((idx[0] == 0) ? (
   (rc39)*u0_B0[OPS_ACC0(2,0)] + (rc38)*u0_B0[OPS_ACC0(0,0)] -
      rc37*u0_B0[OPS_ACC0(3,0)] - rc36*u0_B0[OPS_ACC0(1,0)] + (rc34)*u0_B0[OPS_ACC0(4,0)]
)
: ((idx[0] == 1) ? (
  
      (rc26)*u0_B0[OPS_ACC0(2,0)] - rc21*u0_B0[OPS_ACC0(0,0)] - rc16*u0_B0[OPS_ACC0(3,0)] + (rc34)*u0_B0[OPS_ACC0(-1,0)]
      + (rc7)*u0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc39)*u0_B0[OPS_ACC0(-2,0)] -
      rc37*u0_B0[OPS_ACC0(-3,0)] + (rc38)*u0_B0[OPS_ACC0(0,0)] - rc36*u0_B0[OPS_ACC0(-1,0)] +
      (rc34)*u0_B0[OPS_ACC0(-4,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc16*u0_B0[OPS_ACC0(-3,0)] -
      rc21*u0_B0[OPS_ACC0(0,0)] + (rc7)*u0_B0[OPS_ACC0(-1,0)] + (rc34)*u0_B0[OPS_ACC0(1,0)] +
      (rc26)*u0_B0[OPS_ACC0(-2,0)]
)
: (
   -rc16*u0_B0[OPS_ACC0(2,0)] - rc40*u0_B0[OPS_ACC0(0,0)] -
      rc16*u0_B0[OPS_ACC0(-2,0)] + (rc13)*u0_B0[OPS_ACC0(1,0)] + (rc13)*u0_B0[OPS_ACC0(-1,0)]
)))));

}

void opensbliblock00Kernel037(const double *T_B0, double *wk9_B0, const int *idx)
{
    wk9_B0[OPS_ACC1(0,0)] = inv_3*((idx[1] == 0) ? (
   (rc34)*T_B0[OPS_ACC0(0,4)] - rc37*T_B0[OPS_ACC0(0,3)] +
      (rc39)*T_B0[OPS_ACC0(0,2)] - rc36*T_B0[OPS_ACC0(0,1)] + (rc38)*T_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc34)*T_B0[OPS_ACC0(0,-1)] - rc16*T_B0[OPS_ACC0(0,3)] + (rc26)*T_B0[OPS_ACC0(0,2)] + (rc7)*T_B0[OPS_ACC0(0,1)] -
      rc21*T_B0[OPS_ACC0(0,0)]
)
: (
   -rc16*T_B0[OPS_ACC0(0,-2)] + (rc13)*T_B0[OPS_ACC0(0,-1)] -
      rc16*T_B0[OPS_ACC0(0,2)] + (rc13)*T_B0[OPS_ACC0(0,1)] - rc40*T_B0[OPS_ACC0(0,0)]
)));

}

void opensbliblock00Kernel033(const double *u1_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   -rc11*u1_B0[OPS_ACC0(4,0)] + 4*u1_B0[OPS_ACC0(1,0)] +
      (rc13)*u1_B0[OPS_ACC0(3,0)] - rc12*u1_B0[OPS_ACC0(0,0)] - 3*u1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == 1) ? (
  
      (rc14)*u1_B0[OPS_ACC0(1,0)] - rc11*u1_B0[OPS_ACC0(-1,0)] + (rc16)*u1_B0[OPS_ACC0(3,0)] - rc15*u1_B0[OPS_ACC0(0,0)]
      - rc7*u1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*u1_B0[OPS_ACC0(-4,0)] -
      4*u1_B0[OPS_ACC0(-1,0)] + (rc12)*u1_B0[OPS_ACC0(0,0)] + 3*u1_B0[OPS_ACC0(-2,0)] - rc13*u1_B0[OPS_ACC0(-3,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*u1_B0[OPS_ACC0(1,0)] + (rc7)*u1_B0[OPS_ACC0(-2,0)] +
      (rc15)*u1_B0[OPS_ACC0(0,0)] - rc14*u1_B0[OPS_ACC0(-1,0)] - rc16*u1_B0[OPS_ACC0(-3,0)]
)
: (
  
      (rc17)*u1_B0[OPS_ACC0(1,0)] - rc17*u1_B0[OPS_ACC0(-1,0)] + (rc16)*u1_B0[OPS_ACC0(-2,0)] -
      rc16*u1_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel044(const double *u0_B0, double *wk16_B0, const int *idx)
{
    wk16_B0[OPS_ACC1(0,0)] = inv_3*((idx[1] == 0) ? (
   -rc37*u0_B0[OPS_ACC0(0,3)] + (rc39)*u0_B0[OPS_ACC0(0,2)] -
      rc36*u0_B0[OPS_ACC0(0,1)] + (rc38)*u0_B0[OPS_ACC0(0,0)] + (rc34)*u0_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      -rc16*u0_B0[OPS_ACC0(0,3)] + (rc26)*u0_B0[OPS_ACC0(0,2)] + (rc7)*u0_B0[OPS_ACC0(0,1)] - rc21*u0_B0[OPS_ACC0(0,0)]
      + (rc34)*u0_B0[OPS_ACC0(0,-1)]
)
: (
   -rc16*u0_B0[OPS_ACC0(0,2)] + (rc13)*u0_B0[OPS_ACC0(0,1)] -
      rc40*u0_B0[OPS_ACC0(0,0)] - rc16*u0_B0[OPS_ACC0(0,-2)] + (rc13)*u0_B0[OPS_ACC0(0,-1)]
)));

}

void opensbliblock00Kernel030(const double *mu_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   -rc12*mu_B0[OPS_ACC0(0,0)] - 3*mu_B0[OPS_ACC0(2,0)] -
      rc11*mu_B0[OPS_ACC0(4,0)] + 4*mu_B0[OPS_ACC0(1,0)] + (rc13)*mu_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 1) ? (
  
      -rc15*mu_B0[OPS_ACC0(0,0)] - rc7*mu_B0[OPS_ACC0(2,0)] + (rc14)*mu_B0[OPS_ACC0(1,0)] - rc11*mu_B0[OPS_ACC0(-1,0)] +
      (rc16)*mu_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc12)*mu_B0[OPS_ACC0(0,0)] -
      rc13*mu_B0[OPS_ACC0(-3,0)] + (rc11)*mu_B0[OPS_ACC0(-4,0)] + 3*mu_B0[OPS_ACC0(-2,0)] - 4*mu_B0[OPS_ACC0(-1,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc15)*mu_B0[OPS_ACC0(0,0)] - rc16*mu_B0[OPS_ACC0(-3,0)] -
      rc14*mu_B0[OPS_ACC0(-1,0)] + (rc7)*mu_B0[OPS_ACC0(-2,0)] + (rc11)*mu_B0[OPS_ACC0(1,0)]
)
: (
  
      -rc16*mu_B0[OPS_ACC0(2,0)] + (rc16)*mu_B0[OPS_ACC0(-2,0)] - rc17*mu_B0[OPS_ACC0(-1,0)] +
      (rc17)*mu_B0[OPS_ACC0(1,0)]
)))));

}

void opensbliblock00Kernel032(const double *T_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*T_B0[OPS_ACC0(0,4)] + (rc13)*T_B0[OPS_ACC0(0,3)] -
      3*T_B0[OPS_ACC0(0,2)] + 4*T_B0[OPS_ACC0(0,1)] - rc12*T_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      -rc11*T_B0[OPS_ACC0(0,-1)] + (rc16)*T_B0[OPS_ACC0(0,3)] - rc7*T_B0[OPS_ACC0(0,2)] + (rc14)*T_B0[OPS_ACC0(0,1)] -
      rc15*T_B0[OPS_ACC0(0,0)]
)
: (
   -rc17*T_B0[OPS_ACC0(0,-1)] - rc16*T_B0[OPS_ACC0(0,2)] +
      (rc17)*T_B0[OPS_ACC0(0,1)] + (rc16)*T_B0[OPS_ACC0(0,-2)]
)));

}

void opensbliblock00Kernel038(const double *u0_B0, double *wk10_B0, const int *idx)
{
    wk10_B0[OPS_ACC1(0,0)] = inv_1*((idx[0] == 0) ? (
   -3*u0_B0[OPS_ACC0(2,0)] - rc12*u0_B0[OPS_ACC0(0,0)] +
      (rc13)*u0_B0[OPS_ACC0(3,0)] + 4*u0_B0[OPS_ACC0(1,0)] - rc11*u0_B0[OPS_ACC0(4,0)]
)
: ((idx[0] == 1) ? (
  
      -rc7*u0_B0[OPS_ACC0(2,0)] - rc15*u0_B0[OPS_ACC0(0,0)] + (rc16)*u0_B0[OPS_ACC0(3,0)] - rc11*u0_B0[OPS_ACC0(-1,0)] +
      (rc14)*u0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -rc13*u0_B0[OPS_ACC0(-3,0)] +
      (rc11)*u0_B0[OPS_ACC0(-4,0)] + (rc12)*u0_B0[OPS_ACC0(0,0)] - 4*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(-2,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   -rc16*u0_B0[OPS_ACC0(-3,0)] + (rc15)*u0_B0[OPS_ACC0(0,0)] +
      (rc7)*u0_B0[OPS_ACC0(-2,0)] + (rc11)*u0_B0[OPS_ACC0(1,0)] - rc14*u0_B0[OPS_ACC0(-1,0)]
)
: (
  
      -rc16*u0_B0[OPS_ACC0(2,0)] - rc17*u0_B0[OPS_ACC0(-1,0)] + (rc17)*u0_B0[OPS_ACC0(1,0)] +
      (rc16)*u0_B0[OPS_ACC0(-2,0)]
)))));

}

void opensbliblock00Kernel036(const double *u1_B0, double *wk8_B0, const int *idx)
{
    wk8_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*u1_B0[OPS_ACC0(0,4)] - rc12*u1_B0[OPS_ACC0(0,0)] +
      4*u1_B0[OPS_ACC0(0,1)] - 3*u1_B0[OPS_ACC0(0,2)] + (rc13)*u1_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      -rc11*u1_B0[OPS_ACC0(0,-1)] - rc15*u1_B0[OPS_ACC0(0,0)] + (rc14)*u1_B0[OPS_ACC0(0,1)] - rc7*u1_B0[OPS_ACC0(0,2)] +
      (rc16)*u1_B0[OPS_ACC0(0,3)]
)
: (
   -rc17*u1_B0[OPS_ACC0(0,-1)] + (rc16)*u1_B0[OPS_ACC0(0,-2)] -
      rc16*u1_B0[OPS_ACC0(0,2)] + (rc17)*u1_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel041(const double *mu_B0, double *wk13_B0, const int *idx)
{
    wk13_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc12*mu_B0[OPS_ACC0(0,0)] + 4*mu_B0[OPS_ACC0(0,1)] -
      3*mu_B0[OPS_ACC0(0,2)] + (rc13)*mu_B0[OPS_ACC0(0,3)] - rc11*mu_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      -rc15*mu_B0[OPS_ACC0(0,0)] + (rc14)*mu_B0[OPS_ACC0(0,1)] - rc7*mu_B0[OPS_ACC0(0,2)] + (rc16)*mu_B0[OPS_ACC0(0,3)]
      - rc11*mu_B0[OPS_ACC0(0,-1)]
)
: (
   (rc17)*mu_B0[OPS_ACC0(0,1)] - rc16*mu_B0[OPS_ACC0(0,2)] +
      (rc16)*mu_B0[OPS_ACC0(0,-2)] - rc17*mu_B0[OPS_ACC0(0,-1)]
)));

}

void opensbliblock00Kernel034(const double *u0_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   (rc13)*u0_B0[OPS_ACC0(0,3)] - 3*u0_B0[OPS_ACC0(0,2)] +
      4*u0_B0[OPS_ACC0(0,1)] - rc12*u0_B0[OPS_ACC0(0,0)] - rc11*u0_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      (rc16)*u0_B0[OPS_ACC0(0,3)] - rc7*u0_B0[OPS_ACC0(0,2)] + (rc14)*u0_B0[OPS_ACC0(0,1)] - rc15*u0_B0[OPS_ACC0(0,0)] -
      rc11*u0_B0[OPS_ACC0(0,-1)]
)
: (
   -rc16*u0_B0[OPS_ACC0(0,2)] + (rc17)*u0_B0[OPS_ACC0(0,1)] -
      rc17*u0_B0[OPS_ACC0(0,-1)] + (rc16)*u0_B0[OPS_ACC0(0,-2)]
)));

}

void opensbliblock00Kernel043(const double *u1_B0, double *wk15_B0, const int *idx)
{
    wk15_B0[OPS_ACC1(0,0)] = inv_3*((idx[1] == 0) ? (
   (rc34)*u1_B0[OPS_ACC0(0,4)] + (rc38)*u1_B0[OPS_ACC0(0,0)] -
      rc36*u1_B0[OPS_ACC0(0,1)] + (rc39)*u1_B0[OPS_ACC0(0,2)] - rc37*u1_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      (rc34)*u1_B0[OPS_ACC0(0,-1)] - rc21*u1_B0[OPS_ACC0(0,0)] + (rc7)*u1_B0[OPS_ACC0(0,1)] +
      (rc26)*u1_B0[OPS_ACC0(0,2)] - rc16*u1_B0[OPS_ACC0(0,3)]
)
: (
   (rc13)*u1_B0[OPS_ACC0(0,-1)] -
      rc16*u1_B0[OPS_ACC0(0,-2)] - rc40*u1_B0[OPS_ACC0(0,0)] + (rc13)*u1_B0[OPS_ACC0(0,1)] -
      rc16*u1_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel035(const double *T_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = inv_0*((idx[0] == 0) ? (
   -rc37*T_B0[OPS_ACC0(3,0)] - rc36*T_B0[OPS_ACC0(1,0)] +
      (rc34)*T_B0[OPS_ACC0(4,0)] + (rc39)*T_B0[OPS_ACC0(2,0)] + (rc38)*T_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
  
      -rc16*T_B0[OPS_ACC0(3,0)] + (rc34)*T_B0[OPS_ACC0(-1,0)] + (rc7)*T_B0[OPS_ACC0(1,0)] + (rc26)*T_B0[OPS_ACC0(2,0)] -
      rc21*T_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -rc36*T_B0[OPS_ACC0(-1,0)] +
      (rc34)*T_B0[OPS_ACC0(-4,0)] + (rc38)*T_B0[OPS_ACC0(0,0)] - rc37*T_B0[OPS_ACC0(-3,0)] +
      (rc39)*T_B0[OPS_ACC0(-2,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc7)*T_B0[OPS_ACC0(-1,0)] +
      (rc34)*T_B0[OPS_ACC0(1,0)] + (rc26)*T_B0[OPS_ACC0(-2,0)] - rc16*T_B0[OPS_ACC0(-3,0)] -
      rc21*T_B0[OPS_ACC0(0,0)]
)
: (
   -rc16*T_B0[OPS_ACC0(-2,0)] + (rc13)*T_B0[OPS_ACC0(1,0)] +
      (rc13)*T_B0[OPS_ACC0(-1,0)] - rc16*T_B0[OPS_ACC0(2,0)] - rc40*T_B0[OPS_ACC0(0,0)]
)))));

}

void opensbliblock00Kernel031(const double *wk1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc12*wk1_B0[OPS_ACC0(0,0)] + 4*wk1_B0[OPS_ACC0(0,1)] -
      3*wk1_B0[OPS_ACC0(0,2)] + (rc13)*wk1_B0[OPS_ACC0(0,3)] - rc11*wk1_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      -rc15*wk1_B0[OPS_ACC0(0,0)] + (rc14)*wk1_B0[OPS_ACC0(0,1)] - rc7*wk1_B0[OPS_ACC0(0,2)] +
      (rc16)*wk1_B0[OPS_ACC0(0,3)] - rc11*wk1_B0[OPS_ACC0(0,-1)]
)
: (
   (rc17)*wk1_B0[OPS_ACC0(0,1)] -
      rc16*wk1_B0[OPS_ACC0(0,2)] + (rc16)*wk1_B0[OPS_ACC0(0,-2)] - rc17*wk1_B0[OPS_ACC0(0,-1)]
)));

}

void opensbliblock00Kernel040(const double *wk10_B0, double *wk12_B0, const int *idx)
{
    wk12_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*wk10_B0[OPS_ACC0(0,4)] + (rc13)*wk10_B0[OPS_ACC0(0,3)] -
      3*wk10_B0[OPS_ACC0(0,2)] + 4*wk10_B0[OPS_ACC0(0,1)] - rc12*wk10_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      -rc11*wk10_B0[OPS_ACC0(0,-1)] + (rc16)*wk10_B0[OPS_ACC0(0,3)] - rc7*wk10_B0[OPS_ACC0(0,2)] +
      (rc14)*wk10_B0[OPS_ACC0(0,1)] - rc15*wk10_B0[OPS_ACC0(0,0)]
)
: (
   -rc17*wk10_B0[OPS_ACC0(0,-1)] -
      rc16*wk10_B0[OPS_ACC0(0,2)] + (rc17)*wk10_B0[OPS_ACC0(0,1)] + (rc16)*wk10_B0[OPS_ACC0(0,-2)]
)));

}

void opensbliblock00Kernel039(const double *wk5_B0, double *wk11_B0, const int *idx)
{
    wk11_B0[OPS_ACC1(0,0)] = inv_2*((idx[1] == 0) ? (
   -rc11*wk5_B0[OPS_ACC0(0,4)] - rc12*wk5_B0[OPS_ACC0(0,0)] +
      4*wk5_B0[OPS_ACC0(0,1)] - 3*wk5_B0[OPS_ACC0(0,2)] + (rc13)*wk5_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      -rc11*wk5_B0[OPS_ACC0(0,-1)] - rc15*wk5_B0[OPS_ACC0(0,0)] + (rc14)*wk5_B0[OPS_ACC0(0,1)] -
      rc7*wk5_B0[OPS_ACC0(0,2)] + (rc16)*wk5_B0[OPS_ACC0(0,3)]
)
: (
   -rc17*wk5_B0[OPS_ACC0(0,-1)] +
      (rc16)*wk5_B0[OPS_ACC0(0,-2)] - rc16*wk5_B0[OPS_ACC0(0,2)] + (rc17)*wk5_B0[OPS_ACC0(0,1)]
)));

}

 void opensbliblock00Kernel061(const double *SD100_B0, const double *SD000_B0, const double *wk8_B0, const double
*wk5_B0, const double *SD110_B0, const double *wk16_B0, const double *wk13_B0, const double *u0_B0, const double
*D01_B0, const double *mu_B0, const double *SD010_B0, const double *wk1_B0, const double *SD001_B0, const double
*D11_B0, const double *D10_B0, const double *SD111_B0, const double *SD011_B0, const double *wk12_B0, const double
*u1_B0, const double *SD101_B0, const double *wk14_B0, const double *wk3_B0, const double *wk0_B0, const double *D00_B0,
const double *wk10_B0, const double *wk11_B0, const double *wk6_B0, const double *wk4_B0, const double *wk15_B0, const
double *wk7_B0, const double *wk9_B0, const double *wk2_B0, double *Residual3_B0, double *Residual2_B0, double
*Residual1_B0)
{
    Residual1_B0[OPS_ACC34(0,0)] = rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk13_B0[OPS_ACC6(0,0)])*((rc13)*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] + (rc13)*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)]) + rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)]) + rcinv41*((rc13)*pow(D00_B0[OPS_ACC23(0,0)],
      2)*wk14_B0[OPS_ACC20(0,0)] + (rc26)*D00_B0[OPS_ACC23(0,0)]*D01_B0[OPS_ACC8(0,0)]*wk0_B0[OPS_ACC22(0,0)] +
      (rc42)*D00_B0[OPS_ACC23(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      (rc26)*D00_B0[OPS_ACC23(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      (rc13)*D00_B0[OPS_ACC23(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D00_B0[OPS_ACC23(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      (rc13)*D00_B0[OPS_ACC23(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D00_B0[OPS_ACC23(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D01_B0[OPS_ACC8(0,0)],
      2)*wk14_B0[OPS_ACC20(0,0)] + (rc26)*D01_B0[OPS_ACC8(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      2*D01_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D10_B0[OPS_ACC14(0,0)],
      2)*wk16_B0[OPS_ACC5(0,0)] + (rc26)*D10_B0[OPS_ACC14(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk15_B0[OPS_ACC28(0,0)] +
      (rc13)*D10_B0[OPS_ACC14(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D10_B0[OPS_ACC14(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      (rc13)*D10_B0[OPS_ACC14(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D10_B0[OPS_ACC14(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D11_B0[OPS_ACC13(0,0)],
      2)*wk16_B0[OPS_ACC5(0,0)] + D11_B0[OPS_ACC13(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk6_B0[OPS_ACC26(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      Residual1_B0[OPS_ACC34(0,0)];

    Residual2_B0[OPS_ACC33(0,0)] = rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)]) + rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(-rc17*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] - rc17*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)]) + rcinv41*(pow(D00_B0[OPS_ACC23(0,0)],
      2)*wk0_B0[OPS_ACC22(0,0)] + (rc26)*D00_B0[OPS_ACC23(0,0)]*D01_B0[OPS_ACC8(0,0)]*wk14_B0[OPS_ACC20(0,0)] +
      2*D00_B0[OPS_ACC23(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      (rc26)*D00_B0[OPS_ACC23(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D01_B0[OPS_ACC8(0,0)],
      2)*wk0_B0[OPS_ACC22(0,0)] + (rc26)*D01_B0[OPS_ACC8(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      (rc42)*D01_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk11_B0[OPS_ACC25(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk5_B0[OPS_ACC3(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D10_B0[OPS_ACC14(0,0)],
      2)*wk15_B0[OPS_ACC28(0,0)] + (rc26)*D10_B0[OPS_ACC14(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk16_B0[OPS_ACC5(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D11_B0[OPS_ACC13(0,0)],
      2)*wk15_B0[OPS_ACC28(0,0)] - rc17*D11_B0[OPS_ACC13(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC3(0,0)] -
      rc17*D11_B0[OPS_ACC13(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk8_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      Residual2_B0[OPS_ACC33(0,0)];

    Residual3_B0[OPS_ACC32(0,0)] = rcinv41*rcinv43*rcinv8*rcinv9*(D00_B0[OPS_ACC23(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk4_B0[OPS_ACC27(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk13_B0[OPS_ACC6(0,0)]) +
      rcinv41*rcinv43*rcinv8*rcinv9*(D01_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk4_B0[OPS_ACC27(0,0)])*(D01_B0[OPS_ACC8(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk13_B0[OPS_ACC6(0,0)]) + rcinv41*rcinv43*rcinv8*rcinv9*(pow(D00_B0[OPS_ACC23(0,0)],
      2)*wk7_B0[OPS_ACC29(0,0)] + 2*D00_B0[OPS_ACC23(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk3_B0[OPS_ACC21(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk4_B0[OPS_ACC27(0,0)] + pow(D01_B0[OPS_ACC8(0,0)],
      2)*wk7_B0[OPS_ACC29(0,0)] + 2*D01_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk3_B0[OPS_ACC21(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk4_B0[OPS_ACC27(0,0)] + pow(D10_B0[OPS_ACC14(0,0)],
      2)*wk9_B0[OPS_ACC30(0,0)] + D10_B0[OPS_ACC14(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk4_B0[OPS_ACC27(0,0)] + pow(D11_B0[OPS_ACC13(0,0)],
      2)*wk9_B0[OPS_ACC30(0,0)] + D11_B0[OPS_ACC13(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk1_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk4_B0[OPS_ACC27(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)])*((rc13)*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] + (rc13)*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk13_B0[OPS_ACC6(0,0)])*((rc13)*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] + (rc13)*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC7(0,0)] +
      rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)])*u1_B0[OPS_ACC18(0,0)] +
      rcinv41*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)])*mu_B0[OPS_ACC9(0,0)] +
      rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(-rc17*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] - rc17*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC18(0,0)] +
      rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk2_B0[OPS_ACC31(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk13_B0[OPS_ACC6(0,0)])*(D00_B0[OPS_ACC23(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC24(0,0)] + D10_B0[OPS_ACC14(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk6_B0[OPS_ACC26(0,0)])*u0_B0[OPS_ACC7(0,0)] +
      rcinv41*(D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)])*(-rc17*D00_B0[OPS_ACC23(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC3(0,0)] - rc17*D10_B0[OPS_ACC14(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*wk8_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC9(0,0)] + rcinv41*(pow(D00_B0[OPS_ACC23(0,0)],
      2)*wk0_B0[OPS_ACC22(0,0)] + (rc26)*D00_B0[OPS_ACC23(0,0)]*D01_B0[OPS_ACC8(0,0)]*wk14_B0[OPS_ACC20(0,0)] +
      2*D00_B0[OPS_ACC23(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      (rc26)*D00_B0[OPS_ACC23(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D00_B0[OPS_ACC23(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D01_B0[OPS_ACC8(0,0)],
      2)*wk0_B0[OPS_ACC22(0,0)] + (rc26)*D01_B0[OPS_ACC8(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      (rc42)*D01_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk11_B0[OPS_ACC25(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk5_B0[OPS_ACC3(0,0)] -
      rc17*D01_B0[OPS_ACC8(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D01_B0[OPS_ACC8(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D10_B0[OPS_ACC14(0,0)],
      2)*wk15_B0[OPS_ACC28(0,0)] + (rc26)*D10_B0[OPS_ACC14(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk16_B0[OPS_ACC5(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D10_B0[OPS_ACC14(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D11_B0[OPS_ACC13(0,0)],
      2)*wk15_B0[OPS_ACC28(0,0)] - rc17*D11_B0[OPS_ACC13(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC3(0,0)] -
      rc17*D11_B0[OPS_ACC13(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk6_B0[OPS_ACC26(0,0)] +
      (rc13)*D11_B0[OPS_ACC13(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk8_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC9(0,0)]*u1_B0[OPS_ACC18(0,0)]
      + rcinv41*((rc13)*pow(D00_B0[OPS_ACC23(0,0)], 2)*wk14_B0[OPS_ACC20(0,0)] +
      (rc26)*D00_B0[OPS_ACC23(0,0)]*D01_B0[OPS_ACC8(0,0)]*wk0_B0[OPS_ACC22(0,0)] +
      (rc42)*D00_B0[OPS_ACC23(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      (rc26)*D00_B0[OPS_ACC23(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      (rc13)*D00_B0[OPS_ACC23(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D00_B0[OPS_ACC23(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      (rc13)*D00_B0[OPS_ACC23(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D00_B0[OPS_ACC23(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D01_B0[OPS_ACC8(0,0)],
      2)*wk14_B0[OPS_ACC20(0,0)] + (rc26)*D01_B0[OPS_ACC8(0,0)]*D10_B0[OPS_ACC14(0,0)]*wk11_B0[OPS_ACC25(0,0)] +
      2*D01_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD000_B0[OPS_ACC1(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD010_B0[OPS_ACC10(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD100_B0[OPS_ACC0(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC8(0,0)]*SD110_B0[OPS_ACC4(0,0)]*wk6_B0[OPS_ACC26(0,0)] + (rc13)*pow(D10_B0[OPS_ACC14(0,0)],
      2)*wk16_B0[OPS_ACC5(0,0)] + (rc26)*D10_B0[OPS_ACC14(0,0)]*D11_B0[OPS_ACC13(0,0)]*wk15_B0[OPS_ACC28(0,0)] +
      (rc13)*D10_B0[OPS_ACC14(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk10_B0[OPS_ACC24(0,0)] -
      rc17*D10_B0[OPS_ACC14(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      (rc13)*D10_B0[OPS_ACC14(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk6_B0[OPS_ACC26(0,0)] -
      rc17*D10_B0[OPS_ACC14(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk8_B0[OPS_ACC2(0,0)] + pow(D11_B0[OPS_ACC13(0,0)],
      2)*wk16_B0[OPS_ACC5(0,0)] + D11_B0[OPS_ACC13(0,0)]*SD001_B0[OPS_ACC12(0,0)]*wk5_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD011_B0[OPS_ACC16(0,0)]*wk10_B0[OPS_ACC24(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD101_B0[OPS_ACC19(0,0)]*wk8_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC13(0,0)]*SD111_B0[OPS_ACC15(0,0)]*wk6_B0[OPS_ACC26(0,0)])*mu_B0[OPS_ACC9(0,0)]*u0_B0[OPS_ACC7(0,0)]
      + Residual3_B0[OPS_ACC32(0,0)];

}

 void opensbliblock00Kernel091(const double *Residual3_B0, const double *Residual0_B0, const double *Residual2_B0, const
double *Residual1_B0, double *tempRK_rhou0_B0, double *tempRK_rhoE_B0, double *rhoE_B0, double *rho_B0, double
*tempRK_rhou1_B0, double *rhou1_B0, double *tempRK_rho_B0, double *rhou0_B0, const double *rkA, const double *rkB)
{
   tempRK_rho_B0[OPS_ACC10(0,0)] = dt*Residual0_B0[OPS_ACC1(0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC10(0,0)];

   rho_B0[OPS_ACC7(0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC10(0,0)] + rho_B0[OPS_ACC7(0,0)];

   tempRK_rhou0_B0[OPS_ACC4(0,0)] = dt*Residual1_B0[OPS_ACC3(0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC4(0,0)];

   rhou0_B0[OPS_ACC11(0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC4(0,0)] + rhou0_B0[OPS_ACC11(0,0)];

   tempRK_rhou1_B0[OPS_ACC8(0,0)] = dt*Residual2_B0[OPS_ACC2(0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC8(0,0)];

   rhou1_B0[OPS_ACC9(0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC8(0,0)] + rhou1_B0[OPS_ACC9(0,0)];

   tempRK_rhoE_B0[OPS_ACC5(0,0)] = dt*Residual3_B0[OPS_ACC0(0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC5(0,0)];

   rhoE_B0[OPS_ACC6(0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC5(0,0)] + rhoE_B0[OPS_ACC6(0,0)];

}

#endif
