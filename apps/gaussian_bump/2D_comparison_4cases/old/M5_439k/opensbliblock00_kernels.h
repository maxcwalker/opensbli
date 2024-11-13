#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel066(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &x0_B0, ACC<double> &x1_B0, const int *idx)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   double x1b0 = 0.0;
   x0_B0(0,0) = Delta0block0*idx[0];

    x1_B0(0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a)
      + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a) +
      H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

    rhou0 = ((-x1b0 + x1_B0(0,0) < 2.70827082708271) ? (
   5.59800088138435e-5 + 3.56490845924309e-17*pow(-x1b0 +
      x1_B0(0,0), 50) + 13.1812570620691*pow(-x1b0 + x1_B0(0,0), 10) + 0.000188480742322351*pow(-x1b0 + x1_B0(0,0), 21)
      + 3.59310883618136e-9*pow(-x1b0 + x1_B0(0,0), 30) + 6.23537054922269e-8*pow(-x1b0 + x1_B0(0,0), 29) +
      2.60430712568574e-7*pow(-x1b0 + x1_B0(0,0), 26) + 1.04754760632322e-12*pow(-x1b0 + x1_B0(0,0), 39) +
      11.1580420863346*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) + 2.75333726019698e-15*pow(-x1b0
      + x1_B0(0,0), 46) + 0.0975531168644489*pow(-x1b0 + x1_B0(0,0), 13) + 6.08502702609729e-15*pow(-x1b0 + x1_B0(0,0),
      45) + 2.49326649366505e-11*pow(-x1b0 + x1_B0(0,0), 37) + 4.46491784751775e-16*pow(-x1b0 + x1_B0(0,0), 47) +
      7.64063932774416e-12*pow(-x1b0 + x1_B0(0,0), 38) + 5.04959191061084e-7*pow(-x1b0 + x1_B0(0,0), 27) +
      67.9858771894905*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))) + 0.289481577614567*pow(-x1b0 + x1_B0(0,0), 14) + 0.00115176284028465*pow(-x1b0 + x1_B0(0,0), 19) +
      79.3596165038087*pow(-x1b0 + x1_B0(0,0), 7) + 2.60587988663396e-15*pow(-x1b0 + x1_B0(0,0), 44) +
      0.000763540592756491*pow(-x1b0 + x1_B0(0,0), 20) + 0.0507786812924906*pow(-x1b0 + x1_B0(0,0), 15) +
      0.822526005703101*x1_B0(0,0) + 4.96845228620574e-11*pow(-x1b0 + x1_B0(0,0), 36) + 2.51764616528813e-11*pow(-x1b0 +
      x1_B0(0,0), 35) + 2.35938065788415e-7*pow(-x1b0 + x1_B0(0,0), 28) - 28.3655409910307*pow(-x1b0 + x1_B0(0,0), 8) -
      1.2169873224312e-5*pow(-x1b0 + x1_B0(0,0), 22) - 6.08754028617237e-9*pow(-x1b0 + x1_B0(0,0), 31) -
      2.71097296483174e-10*pow(-x1b0 + x1_B0(0,0), 34) - 1.37060232692835e-9*pow(-x1b0 + x1_B0(0,0), 33) -
      0.0252178865820257*pow(-x1b0 + x1_B0(0,0), 16) - 3.03172105799093e-5*pow(-x1b0 + x1_B0(0,0), 23) -
      32.6240252753122*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) -
      3.38396645409102e-14*pow(-x1b0 + x1_B0(0,0), 43) - 10.8862924372949*pow(-x1b0 + x1_B0(0,0), 9) -
      2.83733417413169*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) - 3.75624122461967e-13*pow(-x1b0 + x1_B0(0,0), 41) -
      4.19643692916183e-13*pow(-x1b0 + x1_B0(0,0), 40) - 2.29554069155202e-16*pow(-x1b0 + x1_B0(0,0), 48) -
      3.85510712268958e-9*pow(-x1b0 + x1_B0(0,0), 32) - 0.00211498499743855*pow(-x1b0 + x1_B0(0,0), 18) -
      1.53383931566316e-13*pow(-x1b0 + x1_B0(0,0), 42) - 1.41927642209322*pow(-x1b0 + x1_B0(0,0), 11) -
      1.58705652211188e-16*pow(-x1b0 + x1_B0(0,0), 49) - 94.3923731001063*((-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) -
      2.84736907402416e-6*pow(-x1b0 + x1_B0(0,0), 25) - 0.822526005703101*x1b0 - 1.33866295477141e-5*pow(-x1b0 +
      x1_B0(0,0), 24) - 0.0150432513679413*pow(-x1b0 + x1_B0(0,0), 17) - 1.94197803024459*pow(-x1b0 + x1_B0(0,0),
      12)
)
: (
   0.999998689797178
));

    rhou1 = ((-x1b0 + x1_B0(0,0) < 2.70827082708271) ? (
   3.4645915499786e-7 + 0.103939851099054*pow(-x1b0 +
      x1_B0(0,0), 11) + 1.79428496480778*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) + 3.16044965053944e-18*pow(-x1b0 + x1_B0(0,0), 47) +
      1.67052041281173e-16*pow(-x1b0 + x1_B0(0,0), 45) + 7.32637239123339e-9*pow(-x1b0 + x1_B0(0,0), 28) +
      1.70572599156816e-5*pow(-x1b0 + x1_B0(0,0), 19) + 1.95170898627401e-14*pow(-x1b0 + x1_B0(0,0), 39) +
      4.24721502170294e-5*x1b0 + 6.36739994811181e-19*pow(-x1b0 + x1_B0(0,0), 50) + 0.00614737558629653*((-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) + 1.83610452303085e-10*pow(-x1b0 + x1_B0(0,0), 30) +
      1.48931596594516e-12*pow(-x1b0 + x1_B0(0,0), 36) + 0.00340062767636229*pow(-x1b0 + x1_B0(0,0), 15) +
      8.60691735495673e-13*pow(-x1b0 + x1_B0(0,0), 35) + 5.65101863491658e-17*pow(-x1b0 + x1_B0(0,0), 46) +
      7.99410562859721e-6*pow(-x1b0 + x1_B0(0,0), 21) + 0.535568555084916*pow(-x1b0 + x1_B0(0,0), 10) +
      2.09345956002545e-9*pow(-x1b0 + x1_B0(0,0), 29) + 0.00885902655822167*pow(-x1b0 + x1_B0(0,0), 14) +
      3.0793365258967*pow(-x1b0 + x1_B0(0,0), 8) + 7.11897414452842e-13*pow(-x1b0 + x1_B0(0,0), 37) +
      2.41026647943106e-5*pow(-x1b0 + x1_B0(0,0), 20) + 1.76359904600906e-16*pow(-x1b0 + x1_B0(0,0), 44) +
      0.203970842202248*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) +
      2.01676339817824e-13*pow(-x1b0 + x1_B0(0,0), 38) + 1.38658587401987e-8*pow(-x1b0 + x1_B0(0,0), 27) +
      4.74158539866041e-7*pow(-x1b0 + x1_B0(0,0), 22) - 4.39119382257518e-7*pow(-x1b0 + x1_B0(0,0), 24) -
      0.000312012954950393*pow(-x1b0 + x1_B0(0,0), 16) - 6.10950211660174e-16*pow(-x1b0 + x1_B0(0,0), 43) -
      1.07564802814882e-14*pow(-x1b0 + x1_B0(0,0), 41) - 3.79611751355693e-15*pow(-x1b0 + x1_B0(0,0), 42) -
      6.23602492397839e-18*pow(-x1b0 + x1_B0(0,0), 48) - 1.14187894717322e-10*pow(-x1b0 + x1_B0(0,0), 32) -
      1.52277896693869e-14*pow(-x1b0 + x1_B0(0,0), 40) - 4.24721502170294e-5*x1_B0(0,0) - 1.13506260416419e-7*pow(-x1b0
      + x1_B0(0,0), 25) - 1.94795242468879*pow(-x1b0 + x1_B0(0,0), 9) - 0.000526621227490082*pow(-x1b0 + x1_B0(0,0), 17)
      - 7.94046280064965e-12*pow(-x1b0 + x1_B0(0,0), 34) - 0.000136029020938644*pow(-x1b0 + x1_B0(0,0), 18) -
      1.0563463093678e-9*pow(-x1b0 + x1_B0(0,0), 26) - 0.0380122761004003*((-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) - 0.0803322754231823*pow(-x1b0 + x1_B0(0,0), 12) -
      2.33846426757128e-18*pow(-x1b0 + x1_B0(0,0), 49) - 4.10043346616468e-11*pow(-x1b0 + x1_B0(0,0), 33) -
      1.67465348903257e-10*pow(-x1b0 + x1_B0(0,0), 31) - 2.91496131445793*pow(-x1b0 + x1_B0(0,0), 7) -
      0.736581357118892*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))) - 7.96873491378164e-7*pow(-x1b0 + x1_B0(0,0), 23) - 0.0140219636384427*pow(-x1b0 + x1_B0(0,0),
      13)
)
: (
   0.0119488941813784
));

    T = ((-x1b0 + x1_B0(0,0) < 2.70827082708271) ? (
   1.36960784989958 + 4.81298119980965e-5*pow(-x1b0 + x1_B0(0,0),
      24) + 12.5594480250143*pow(-x1b0 + x1_B0(0,0), 12) + 0.120343695088882*pow(-x1b0 + x1_B0(0,0), 16) +
      8.13125757151512e-12*pow(-x1b0 + x1_B0(0,0), 40) + 2.8771489469438e-11*pow(-x1b0 + x1_B0(0,0), 38) +
      1.65004678348363e-8*pow(-x1b0 + x1_B0(0,0), 32) + 5.08338106851875e-16*pow(-x1b0 + x1_B0(0,0), 48) +
      0.0743526356281037*pow(-x1b0 + x1_B0(0,0), 17) + 1.89928947785192e-14*pow(-x1b0 + x1_B0(0,0), 46) +
      1.29682296523223e-12*pow(-x1b0 + x1_B0(0,0), 41) + 3.40507325461474e-10*pow(-x1b0 + x1_B0(0,0), 33) +
      1.04817753742946e-14*pow(-x1b0 + x1_B0(0,0), 47) + 1.05005643828757*pow(-x1b0 + x1_B0(0,0), 13) +
      6.35028239373474e-8*pow(-x1b0 + x1_B0(0,0), 31) + 556.072730019486*pow(-x1b0 + x1_B0(0,0), 7) +
      1.31477432241377e-7*pow(-x1b0 + x1_B0(0,0), 30) + 0.000273155599506684*pow(-x1b0 + x1_B0(0,0), 22) +
      319.296341366451*pow(-x1b0 + x1_B0(0,0), 9) + 2.91306912212827e-16*pow(-x1b0 + x1_B0(0,0), 50) +
      22.3432182938848*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) + 0.000183163494059215*pow(-x1b0
      + x1_B0(0,0), 23) + 2.2086461850727e-11*pow(-x1b0 + x1_B0(0,0), 39) + 198.085255351288*((-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) +
      5.11164792441438e-8*pow(-x1b0 + x1_B0(0,0), 29) + 0.00682294326284353*pow(-x1b0 + x1_B0(0,0), 18) +
      3.93385148071025*x1_B0(0,0) - 90.1892671235081*pow(-x1b0 + x1_B0(0,0), 10) - 1.421127280135e-6*pow(-x1b0 +
      x1_B0(0,0), 25) - 3.76833846031799e-10*pow(-x1b0 + x1_B0(0,0), 36) - 7.73333461473062e-7*pow(-x1b0 + x1_B0(0,0),
      28) - 73.5476994299948*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) -
      4.31779545562197e-11*pow(-x1b0 + x1_B0(0,0), 37) - 1.4937470377197*pow(-x1b0 + x1_B0(0,0), 14) -
      3.37340996223726e-6*pow(-x1b0 + x1_B0(0,0), 27) - 1.33559224148094e-14*pow(-x1b0 + x1_B0(0,0), 45) -
      4.45084195470169e-13*pow(-x1b0 + x1_B0(0,0), 43) - 532.922356867556*pow(-x1b0 + x1_B0(0,0), 8) -
      4.75603752575018e-13*pow(-x1b0 + x1_B0(0,0), 42) - 8.660740496895*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) -
      1.95315876370986e-15*pow(-x1b0 + x1_B0(0,0), 49) - 2.07642567036769e-9*pow(-x1b0 + x1_B0(0,0), 34) -
      1.19606331111057e-9*pow(-x1b0 + x1_B0(0,0), 35) - 0.340761271470816*pow(-x1b0 + x1_B0(0,0), 15) -
      1.61328584656652e-13*pow(-x1b0 + x1_B0(0,0), 44) - 11.6078601333753*pow(-x1b0 + x1_B0(0,0), 11) -
      394.319421974632*((-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 + x1_B0(0,0))*(-x1b0 +
      x1_B0(0,0))*(-x1b0 + x1_B0(0,0))) - 0.00359895040137741*pow(-x1b0 + x1_B0(0,0), 20) -
      7.10740413071407e-6*pow(-x1b0 + x1_B0(0,0), 26) - 0.00732466136908977*pow(-x1b0 + x1_B0(0,0), 19) -
      0.000473277090540868*pow(-x1b0 + x1_B0(0,0), 21) - 3.93385148071025*x1b0
)
: (
   1.00000130767725
));

   rho = 1.0/T;

   rho_B0(0,0) = rho;

   rhou0_B0(0,0) = rhou0;

   rhou1_B0(0,0) = rhou1;

   rhoE_B0(0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

}

void opensbliblock00Kernel067(const ACC<double> &x1_B0, ACC<double> &wk0_B0, const int *idx)
{
    wk0_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel068(const ACC<double> &x0_B0, ACC<double> &wk1_B0, const int *idx)
{
    wk1_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel069(const ACC<double> &x0_B0, ACC<double> &wk2_B0, const int *idx)
{
    wk2_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel070(const ACC<double> &x1_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

 void opensbliblock00Kernel073(const ACC<double> &wk1_B0, ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0,
ACC<double> &D11_B0, ACC<double> &detJ_B0, ACC<double> &wk0_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   wk0_B0(0,0) = wk2_B0(0,0);

   wk2_B0(0,0) = wk3_B0(0,0);

   wk3_B0(0,0) = wk0_B0(0,0);

   detJ_B0(0,0) = wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0);

   D00_B0(0,0) = wk0_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

   D01_B0(0,0) = -wk1_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

   D10_B0(0,0) = -wk3_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

   D11_B0(0,0) = wk2_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

}

 void opensbliblock00Kernel074(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel075(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel076(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel077(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

void opensbliblock00Kernel078(const ACC<double> &D01_B0, ACC<double> &wk0_B0, const int *idx)
{
    wk0_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel079(const ACC<double> &D10_B0, ACC<double> &wk1_B0, const int *idx)
{
    wk1_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel080(const ACC<double> &D01_B0, ACC<double> &wk2_B0, const int *idx)
{
    wk2_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel081(const ACC<double> &D00_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel082(const ACC<double> &D00_B0, ACC<double> &wk4_B0, const int *idx)
{
    wk4_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel083(const ACC<double> &D11_B0, ACC<double> &wk5_B0, const int *idx)
{
    wk5_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel084(const ACC<double> &D11_B0, ACC<double> &wk6_B0, const int *idx)
{
    wk6_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel085(const ACC<double> &D10_B0, ACC<double> &wk7_B0, const int *idx)
{
    wk7_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

 void opensbliblock00Kernel090(const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const
ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double> &wk6_B0, const ACC<double>
&wk7_B0, ACC<double> &SD000_B0, ACC<double> &SD001_B0, ACC<double> &SD010_B0, ACC<double> &SD011_B0, ACC<double>
&SD100_B0, ACC<double> &SD101_B0, ACC<double> &SD110_B0, ACC<double> &SD111_B0)
{
   SD000_B0(0,0) = wk4_B0(0,0);

   SD001_B0(0,0) = wk3_B0(0,0);

   SD010_B0(0,0) = wk2_B0(0,0);

   SD011_B0(0,0) = wk0_B0(0,0);

   SD100_B0(0,0) = wk7_B0(0,0);

   SD101_B0(0,0) = wk1_B0(0,0);

   SD110_B0(0,0) = wk6_B0(0,0);

   SD111_B0(0,0) = wk5_B0(0,0);

}

void opensbliblock00Kernel062(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
{
   rho_B0(0,0) = rho_B0(-1,0);

   rhou0_B0(0,0) = rhou0_B0(-1,0);

   rhou1_B0(0,0) = rhou1_B0(-1,0);

   rhoE_B0(0,0) = rhoE_B0(-1,0);

}

void opensbliblock00Kernel063(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel064(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel065(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0)
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

void opensbliblock00Kernel005(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0) = rhou1_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel007(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0) = rhou0_B0(0,0)/rho_B0(0,0);

}

 void opensbliblock00Kernel003(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0) = u0_B0(0,0)*D00_B0(0,0) + u1_B0(0,0)*D01_B0(0,0);

}

 void opensbliblock00Kernel008(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &p_B0)
{
    p_B0(0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0)*u0_B0(0,0))*rho_B0(0,0) -
      (1.0/2.0)*(u1_B0(0,0)*u1_B0(0,0))*rho_B0(0,0) + rhoE_B0(0,0));

}

 void opensbliblock00Kernel014(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U1_B0)
{
   U1_B0(0,0) = u0_B0(0,0)*D10_B0(0,0) + u1_B0(0,0)*D11_B0(0,0);

}

void opensbliblock00Kernel011(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0) = sqrt(gama*p_B0(0,0)/rho_B0(0,0));

}

void opensbliblock00Kernel024(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0) = (Minf*Minf)*gama*p_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel020(const ACC<double> &T_B0, ACC<double> &mu_B0)
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
   double AVG_0_inv_rho = 0.0;
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
   AVG_0_rho = sqrt(rho_B0(0,0)*rho_B0(1,0));

   AVG_0_inv_rho = 1.0/((sqrt(rho_B0(0,0)) + sqrt(rho_B0(1,0))));

   AVG_0_u0 = (sqrt(rho_B0(0,0))*u0_B0(0,0) + sqrt(rho_B0(1,0))*u0_B0(1,0))*AVG_0_inv_rho;

   AVG_0_u1 = (sqrt(rho_B0(0,0))*u1_B0(0,0) + sqrt(rho_B0(1,0))*u1_B0(1,0))*AVG_0_inv_rho;

    AVG_0_a = sqrt((-(1.0/2.0)*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1)) + ((p_B0(0,0) +
      rhoE_B0(0,0))/sqrt(rho_B0(0,0)) + (p_B0(1,0) + rhoE_B0(1,0))/sqrt(rho_B0(1,0)))*AVG_0_inv_rho)*gamma_m1);

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0) + D00_B0(1,0));

   AVG_0_D01 = ((1.0/2.0))*(D01_B0(0,0) + D01_B0(1,0));

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

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)), fabs(u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)));

   max_lambda_11 = max_lambda_00;

    max_lambda_22 = shock_filter_control*fmax(fabs(sqrt((D00_B0(0,0)*D00_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D01_B0(0,0)*D01_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)), fabs(sqrt((D00_B0(1,0)*D00_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)) +
      (D01_B0(1,0)*D01_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)))*a_B0(1,0) + u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)));

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
   double AVG_1_inv_rho = 0.0;
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
   AVG_1_rho = sqrt(rho_B0(0,0)*rho_B0(0,1));

   AVG_1_inv_rho = 1.0/((sqrt(rho_B0(0,0)) + sqrt(rho_B0(0,1))));

   AVG_1_u0 = (sqrt(rho_B0(0,0))*u0_B0(0,0) + sqrt(rho_B0(0,1))*u0_B0(0,1))*AVG_1_inv_rho;

   AVG_1_u1 = (sqrt(rho_B0(0,0))*u1_B0(0,0) + sqrt(rho_B0(0,1))*u1_B0(0,1))*AVG_1_inv_rho;

    AVG_1_a = sqrt((-(1.0/2.0)*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1)) + ((p_B0(0,0) +
      rhoE_B0(0,0))/sqrt(rho_B0(0,0)) + (p_B0(0,1) + rhoE_B0(0,1))/sqrt(rho_B0(0,1)))*AVG_1_inv_rho)*gamma_m1);

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0) + D10_B0(0,1));

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0) + D11_B0(0,1));

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

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)), fabs(u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)));

   max_lambda_11 = max_lambda_00;

    max_lambda_22 = shock_filter_control*fmax(fabs(sqrt((D10_B0(0,0)*D10_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D11_B0(0,0)*D11_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)), fabs(sqrt((D10_B0(0,1)*D10_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)) +
      (D11_B0(0,1)*D11_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)))*a_B0(0,1) + u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)));

    max_lambda_33 = shock_filter_control*fmax(fabs(-sqrt((D10_B0(0,0)*D10_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D11_B0(0,0)*D11_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D10_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D11_B0(0,0)*detJ_B0(0,0)), fabs(-sqrt((D10_B0(0,1)*D10_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)) +
      (D11_B0(0,1)*D11_B0(0,1))*(detJ_B0(0,1)*detJ_B0(0,1)))*a_B0(0,1) + u0_B0(0,1)*D10_B0(0,1)*detJ_B0(0,1) +
      u1_B0(0,1)*D11_B0(0,1)*detJ_B0(0,1)));

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

void opensbliblock00Kernel028(const ACC<double> &mu_B0, ACC<double> &wk0_B0, const int *idx)
{
    wk0_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*mu_B0(0,2) + 4*mu_B0(0,1) - (25.0/12.0)*mu_B0(0,0) -
      (1.0/4.0)*mu_B0(0,4) + ((4.0/3.0))*mu_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*mu_B0(0,0) -
      (1.0/2.0)*mu_B0(0,2) - (1.0/4.0)*mu_B0(0,-1) + ((1.0/12.0))*mu_B0(0,3) + ((3.0/2.0))*mu_B0(0,1)
)
: (
  
      -(2.0/3.0)*mu_B0(0,-1) - (1.0/12.0)*mu_B0(0,2) + ((1.0/12.0))*mu_B0(0,-2) + ((2.0/3.0))*mu_B0(0,1)
)));

}

void opensbliblock00Kernel029(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
{
    wk1_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel030(const ACC<double> &u0_B0, ACC<double> &wk2_B0, const int *idx)
{
    wk2_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel031(const ACC<double> &T_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
   -(26.0/3.0)*T_B0(0,1) - (14.0/3.0)*T_B0(0,3) +
      ((11.0/12.0))*T_B0(0,4) + ((19.0/2.0))*T_B0(0,2) + ((35.0/12.0))*T_B0(0,0)
)
: ((idx[1] == 1) ? (
  
      ((1.0/2.0))*T_B0(0,1) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,3) + ((1.0/3.0))*T_B0(0,2) +
      ((11.0/12.0))*T_B0(0,-1)
)
: (
   -(5.0/2.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,-2) - (1.0/12.0)*T_B0(0,2) +
      ((4.0/3.0))*T_B0(0,1) + ((4.0/3.0))*T_B0(0,-1)
)));

}

void opensbliblock00Kernel032(const ACC<double> &mu_B0, ACC<double> &wk4_B0, const int *idx)
{
    wk4_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
   -3*mu_B0(2,0) + 4*mu_B0(1,0) - (25.0/12.0)*mu_B0(0,0) -
      (1.0/4.0)*mu_B0(4,0) + ((4.0/3.0))*mu_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*mu_B0(0,0) -
      (1.0/2.0)*mu_B0(2,0) - (1.0/4.0)*mu_B0(-1,0) + ((1.0/12.0))*mu_B0(3,0) + ((3.0/2.0))*mu_B0(1,0)
)
: ((idx[0] == -1
      + block0np0) ? (
   -4*mu_B0(-1,0) + 3*mu_B0(-2,0) - (4.0/3.0)*mu_B0(-3,0) + ((1.0/4.0))*mu_B0(-4,0) +
      ((25.0/12.0))*mu_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*mu_B0(-2,0) - (3.0/2.0)*mu_B0(-1,0) -
      (1.0/12.0)*mu_B0(-3,0) + ((1.0/4.0))*mu_B0(1,0) + ((5.0/6.0))*mu_B0(0,0)
)
: (
   -(2.0/3.0)*mu_B0(-1,0) -
      (1.0/12.0)*mu_B0(2,0) + ((1.0/12.0))*mu_B0(-2,0) + ((2.0/3.0))*mu_B0(1,0)
)))));

}

void opensbliblock00Kernel034(const ACC<double> &u1_B0, ACC<double> &wk6_B0, const int *idx)
{
    wk6_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
   -(26.0/3.0)*u1_B0(1,0) - (14.0/3.0)*u1_B0(3,0) +
      ((11.0/12.0))*u1_B0(4,0) + ((19.0/2.0))*u1_B0(2,0) + ((35.0/12.0))*u1_B0(0,0)
)
: ((idx[0] == 1) ? (
  
      ((1.0/2.0))*u1_B0(1,0) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(3,0) + ((1.0/3.0))*u1_B0(2,0) +
      ((11.0/12.0))*u1_B0(-1,0)
)
: ((idx[0] == -1 + block0np0) ? (
   -(26.0/3.0)*u1_B0(-1,0) - (14.0/3.0)*u1_B0(-3,0)
      + ((11.0/12.0))*u1_B0(-4,0) + ((19.0/2.0))*u1_B0(-2,0) + ((35.0/12.0))*u1_B0(0,0)
)
: ((idx[0] == -2 + block0np0)
      ? (
   ((1.0/2.0))*u1_B0(-1,0) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(-3,0) + ((1.0/3.0))*u1_B0(-2,0) +
      ((11.0/12.0))*u1_B0(1,0)
)
: (
   -(5.0/2.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(-2,0) - (1.0/12.0)*u1_B0(2,0) +
      ((4.0/3.0))*u1_B0(1,0) + ((4.0/3.0))*u1_B0(-1,0)
)))));

}

void opensbliblock00Kernel035(const ACC<double> &T_B0, ACC<double> &wk7_B0, const int *idx)
{
    wk7_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*T_B0(0,2) + 4*T_B0(0,1) - (25.0/12.0)*T_B0(0,0) -
      (1.0/4.0)*T_B0(0,4) + ((4.0/3.0))*T_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*T_B0(0,0) - (1.0/2.0)*T_B0(0,2) -
      (1.0/4.0)*T_B0(0,-1) + ((1.0/12.0))*T_B0(0,3) + ((3.0/2.0))*T_B0(0,1)
)
: (
   -(2.0/3.0)*T_B0(0,-1) -
      (1.0/12.0)*T_B0(0,2) + ((1.0/12.0))*T_B0(0,-2) + ((2.0/3.0))*T_B0(0,1)
)));

}

void opensbliblock00Kernel036(const ACC<double> &u1_B0, ACC<double> &wk8_B0, const int *idx)
{
    wk8_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

}

void opensbliblock00Kernel037(const ACC<double> &u1_B0, ACC<double> &wk9_B0, const int *idx)
{
    wk9_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
   -(26.0/3.0)*u1_B0(0,1) - (14.0/3.0)*u1_B0(0,3) +
      ((11.0/12.0))*u1_B0(0,4) + ((19.0/2.0))*u1_B0(0,2) + ((35.0/12.0))*u1_B0(0,0)
)
: ((idx[1] == 1) ? (
  
      ((1.0/2.0))*u1_B0(0,1) - (5.0/3.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(0,3) + ((1.0/3.0))*u1_B0(0,2) +
      ((11.0/12.0))*u1_B0(0,-1)
)
: (
   -(5.0/2.0)*u1_B0(0,0) - (1.0/12.0)*u1_B0(0,-2) - (1.0/12.0)*u1_B0(0,2) +
      ((4.0/3.0))*u1_B0(0,1) + ((4.0/3.0))*u1_B0(0,-1)
)));

}

void opensbliblock00Kernel038(const ACC<double> &T_B0, ACC<double> &wk10_B0, const int *idx)
{
    wk10_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
   -(26.0/3.0)*T_B0(1,0) - (14.0/3.0)*T_B0(3,0) +
      ((11.0/12.0))*T_B0(4,0) + ((19.0/2.0))*T_B0(2,0) + ((35.0/12.0))*T_B0(0,0)
)
: ((idx[0] == 1) ? (
  
      ((1.0/2.0))*T_B0(1,0) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(3,0) + ((1.0/3.0))*T_B0(2,0) +
      ((11.0/12.0))*T_B0(-1,0)
)
: ((idx[0] == -1 + block0np0) ? (
   -(26.0/3.0)*T_B0(-1,0) - (14.0/3.0)*T_B0(-3,0) +
      ((11.0/12.0))*T_B0(-4,0) + ((19.0/2.0))*T_B0(-2,0) + ((35.0/12.0))*T_B0(0,0)
)
: ((idx[0] == -2 + block0np0) ? (
 
       ((1.0/2.0))*T_B0(-1,0) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(-3,0) + ((1.0/3.0))*T_B0(-2,0) +
      ((11.0/12.0))*T_B0(1,0)
)
: (
   -(5.0/2.0)*T_B0(0,0) - (1.0/12.0)*T_B0(-2,0) - (1.0/12.0)*T_B0(2,0) +
      ((4.0/3.0))*T_B0(1,0) + ((4.0/3.0))*T_B0(-1,0)
)))));

}

void opensbliblock00Kernel040(const ACC<double> &u0_B0, ACC<double> &wk12_B0, const int *idx)
{
    wk12_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
   -(26.0/3.0)*u0_B0(1,0) - (14.0/3.0)*u0_B0(3,0) +
      ((11.0/12.0))*u0_B0(4,0) + ((19.0/2.0))*u0_B0(2,0) + ((35.0/12.0))*u0_B0(0,0)
)
: ((idx[0] == 1) ? (
  
      ((1.0/2.0))*u0_B0(1,0) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(3,0) + ((1.0/3.0))*u0_B0(2,0) +
      ((11.0/12.0))*u0_B0(-1,0)
)
: ((idx[0] == -1 + block0np0) ? (
   -(26.0/3.0)*u0_B0(-1,0) - (14.0/3.0)*u0_B0(-3,0)
      + ((11.0/12.0))*u0_B0(-4,0) + ((19.0/2.0))*u0_B0(-2,0) + ((35.0/12.0))*u0_B0(0,0)
)
: ((idx[0] == -2 + block0np0)
      ? (
   ((1.0/2.0))*u0_B0(-1,0) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(-3,0) + ((1.0/3.0))*u0_B0(-2,0) +
      ((11.0/12.0))*u0_B0(1,0)
)
: (
   -(5.0/2.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(-2,0) - (1.0/12.0)*u0_B0(2,0) +
      ((4.0/3.0))*u0_B0(1,0) + ((4.0/3.0))*u0_B0(-1,0)
)))));

}

void opensbliblock00Kernel042(const ACC<double> &T_B0, ACC<double> &wk14_B0, const int *idx)
{
    wk14_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
   -3*T_B0(2,0) + 4*T_B0(1,0) - (25.0/12.0)*T_B0(0,0) -
      (1.0/4.0)*T_B0(4,0) + ((4.0/3.0))*T_B0(3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*T_B0(0,0) - (1.0/2.0)*T_B0(2,0) -
      (1.0/4.0)*T_B0(-1,0) + ((1.0/12.0))*T_B0(3,0) + ((3.0/2.0))*T_B0(1,0)
)
: ((idx[0] == -1 + block0np0) ? (
  
      -4*T_B0(-1,0) + 3*T_B0(-2,0) - (4.0/3.0)*T_B0(-3,0) + ((1.0/4.0))*T_B0(-4,0) + ((25.0/12.0))*T_B0(0,0)
)
:
      ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*T_B0(-2,0) - (3.0/2.0)*T_B0(-1,0) - (1.0/12.0)*T_B0(-3,0) +
      ((1.0/4.0))*T_B0(1,0) + ((5.0/6.0))*T_B0(0,0)
)
: (
   -(2.0/3.0)*T_B0(-1,0) - (1.0/12.0)*T_B0(2,0) +
      ((1.0/12.0))*T_B0(-2,0) + ((2.0/3.0))*T_B0(1,0)
)))));

}

void opensbliblock00Kernel043(const ACC<double> &u0_B0, ACC<double> &wk15_B0, const int *idx)
{
    wk15_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
   -(26.0/3.0)*u0_B0(0,1) - (14.0/3.0)*u0_B0(0,3) +
      ((11.0/12.0))*u0_B0(0,4) + ((19.0/2.0))*u0_B0(0,2) + ((35.0/12.0))*u0_B0(0,0)
)
: ((idx[1] == 1) ? (
  
      ((1.0/2.0))*u0_B0(0,1) - (5.0/3.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(0,3) + ((1.0/3.0))*u0_B0(0,2) +
      ((11.0/12.0))*u0_B0(0,-1)
)
: (
   -(5.0/2.0)*u0_B0(0,0) - (1.0/12.0)*u0_B0(0,-2) - (1.0/12.0)*u0_B0(0,2) +
      ((4.0/3.0))*u0_B0(0,1) + ((4.0/3.0))*u0_B0(0,-1)
)));

}

void opensbliblock00Kernel044(const ACC<double> &u0_B0, ACC<double> &wk16_B0, const int *idx)
{
    wk16_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

}

void opensbliblock00Kernel033(const ACC<double> &wk16_B0, ACC<double> &wk5_B0, const int *idx)
{
    wk5_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk16_B0(0,2) + 4*wk16_B0(0,1) - (25.0/12.0)*wk16_B0(0,0) -
      (1.0/4.0)*wk16_B0(0,4) + ((4.0/3.0))*wk16_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk16_B0(0,0) -
      (1.0/2.0)*wk16_B0(0,2) - (1.0/4.0)*wk16_B0(0,-1) + ((1.0/12.0))*wk16_B0(0,3) + ((3.0/2.0))*wk16_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk16_B0(0,-1) - (1.0/12.0)*wk16_B0(0,2) + ((1.0/12.0))*wk16_B0(0,-2) + ((2.0/3.0))*wk16_B0(0,1)
)));

}

void opensbliblock00Kernel039(const ACC<double> &wk14_B0, ACC<double> &wk11_B0, const int *idx)
{
    wk11_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk14_B0(0,2) + 4*wk14_B0(0,1) - (25.0/12.0)*wk14_B0(0,0) -
      (1.0/4.0)*wk14_B0(0,4) + ((4.0/3.0))*wk14_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk14_B0(0,0) -
      (1.0/2.0)*wk14_B0(0,2) - (1.0/4.0)*wk14_B0(0,-1) + ((1.0/12.0))*wk14_B0(0,3) + ((3.0/2.0))*wk14_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk14_B0(0,-1) - (1.0/12.0)*wk14_B0(0,2) + ((1.0/12.0))*wk14_B0(0,-2) + ((2.0/3.0))*wk14_B0(0,1)
)));

}

void opensbliblock00Kernel041(const ACC<double> &wk1_B0, ACC<double> &wk13_B0, const int *idx)
{
    wk13_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk1_B0(0,2) + 4*wk1_B0(0,1) - (25.0/12.0)*wk1_B0(0,0) -
      (1.0/4.0)*wk1_B0(0,4) + ((4.0/3.0))*wk1_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk1_B0(0,0) -
      (1.0/2.0)*wk1_B0(0,2) - (1.0/4.0)*wk1_B0(0,-1) + ((1.0/12.0))*wk1_B0(0,3) + ((3.0/2.0))*wk1_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk1_B0(0,-1) - (1.0/12.0)*wk1_B0(0,2) + ((1.0/12.0))*wk1_B0(0,-2) + ((2.0/3.0))*wk1_B0(0,1)
)));

}

 void opensbliblock00Kernel061(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
ACC<double> &D11_B0, const ACC<double> &SD000_B0, const ACC<double> &SD001_B0, const ACC<double> &SD010_B0, const
ACC<double> &SD011_B0, const ACC<double> &SD100_B0, const ACC<double> &SD101_B0, const ACC<double> &SD110_B0, const
ACC<double> &SD111_B0, const ACC<double> &mu_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const ACC<double>
&wk0_B0, const ACC<double> &wk10_B0, const ACC<double> &wk11_B0, const ACC<double> &wk12_B0, const ACC<double> &wk13_B0,
const ACC<double> &wk14_B0, const ACC<double> &wk15_B0, const ACC<double> &wk16_B0, const ACC<double> &wk1_B0, const
ACC<double> &wk2_B0, const ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double>
&wk6_B0, const ACC<double> &wk7_B0, const ACC<double> &wk8_B0, const ACC<double> &wk9_B0, ACC<double> &Residual1_B0,
ACC<double> &Residual2_B0, ACC<double> &Residual3_B0)
{
    Residual1_B0(0,0) = (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk1_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk8_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk16_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk2_B0(0,0))*invRe + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0) + D10_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk2_B0(0,0))*invRe + ((D01_B0(0,0)*D01_B0(0,0))*wk12_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk15_B0(0,0)
      + ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk12_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk15_B0(0,0) +
      D01_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + D01_B0(0,0)*wk2_B0(0,0)*SD110_B0(0,0) +
      D01_B0(0,0)*wk8_B0(0,0)*SD100_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0)*SD010_B0(0,0) +
      D11_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0)*SD111_B0(0,0) +
      D11_B0(0,0)*wk8_B0(0,0)*SD101_B0(0,0) + D11_B0(0,0)*wk16_B0(0,0)*SD011_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk8_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk8_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk6_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk9_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk2_B0(0,0)*SD100_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk16_B0(0,0)*SD000_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk2_B0(0,0)*SD101_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk16_B0(0,0)*SD001_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0))*invRe*mu_B0(0,0) + Residual1_B0(0,0);

    Residual2_B0(0,0) = (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) +
      D01_B0(0,0)*wk16_B0(0,0) + D10_B0(0,0)*wk8_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*invRe + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk16_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk2_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk1_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk8_B0(0,0))*invRe +
      ((D00_B0(0,0)*D00_B0(0,0))*wk6_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk9_B0(0,0) +
      ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk6_B0(0,0) + ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk9_B0(0,0) +
      D00_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + D00_B0(0,0)*wk2_B0(0,0)*SD110_B0(0,0) +
      D00_B0(0,0)*wk8_B0(0,0)*SD100_B0(0,0) + D00_B0(0,0)*wk16_B0(0,0)*SD010_B0(0,0) +
      D10_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + D10_B0(0,0)*wk2_B0(0,0)*SD111_B0(0,0) +
      D10_B0(0,0)*wk8_B0(0,0)*SD101_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0)*SD011_B0(0,0) +
      2*D00_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk2_B0(0,0)*SD100_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk16_B0(0,0)*SD000_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk2_B0(0,0)*SD101_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk16_B0(0,0)*SD001_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk12_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk15_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk8_B0(0,0)*SD110_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk8_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0))*invRe*mu_B0(0,0) + Residual2_B0(0,0);

    Residual3_B0(0,0) = (D00_B0(0,0)*wk1_B0(0,0) + D10_B0(0,0)*wk8_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) +
      D01_B0(0,0)*wk16_B0(0,0) + D10_B0(0,0)*wk8_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*invRe*mu_B0(0,0) +
      (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0) +
      D10_B0(0,0)*wk8_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*invRe*u1_B0(0,0) + (D00_B0(0,0)*wk4_B0(0,0) +
      D10_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk1_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk8_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk16_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk2_B0(0,0))*invRe*u0_B0(0,0) +
      (D00_B0(0,0)*wk16_B0(0,0) + D10_B0(0,0)*wk2_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk1_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk8_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk16_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk2_B0(0,0))*invRe*mu_B0(0,0) + (D01_B0(0,0)*wk1_B0(0,0) +
      D11_B0(0,0)*wk8_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk16_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk2_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk1_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk8_B0(0,0))*invRe*mu_B0(0,0) +
      (D01_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0) +
      D10_B0(0,0)*wk8_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*invRe*u0_B0(0,0) + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk16_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk2_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk1_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk8_B0(0,0))*invRe*u1_B0(0,0) +
      (D01_B0(0,0)*wk16_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*(D00_B0(0,0)*wk1_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0) +
      D10_B0(0,0)*wk8_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0))*invRe*mu_B0(0,0) + ((D00_B0(0,0)*D00_B0(0,0))*wk6_B0(0,0) +
      (D10_B0(0,0)*D10_B0(0,0))*wk9_B0(0,0) + ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk6_B0(0,0) +
      ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk9_B0(0,0) + D00_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) +
      D00_B0(0,0)*wk2_B0(0,0)*SD110_B0(0,0) + D00_B0(0,0)*wk8_B0(0,0)*SD100_B0(0,0) +
      D00_B0(0,0)*wk16_B0(0,0)*SD010_B0(0,0) + D10_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) +
      D10_B0(0,0)*wk2_B0(0,0)*SD111_B0(0,0) + D10_B0(0,0)*wk8_B0(0,0)*SD101_B0(0,0) +
      D10_B0(0,0)*wk16_B0(0,0)*SD011_B0(0,0) + 2*D00_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk2_B0(0,0)*SD100_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk16_B0(0,0)*SD000_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk2_B0(0,0)*SD101_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk16_B0(0,0)*SD001_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk12_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) +
      ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) + ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk15_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk8_B0(0,0)*SD110_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk8_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0))*invRe*mu_B0(0,0)*u1_B0(0,0) +
      ((D01_B0(0,0)*D01_B0(0,0))*wk12_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk15_B0(0,0) +
      ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk12_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk15_B0(0,0) +
      D01_B0(0,0)*wk1_B0(0,0)*SD000_B0(0,0) + D01_B0(0,0)*wk2_B0(0,0)*SD110_B0(0,0) +
      D01_B0(0,0)*wk8_B0(0,0)*SD100_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0)*SD010_B0(0,0) +
      D11_B0(0,0)*wk1_B0(0,0)*SD001_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0)*SD111_B0(0,0) +
      D11_B0(0,0)*wk8_B0(0,0)*SD101_B0(0,0) + D11_B0(0,0)*wk16_B0(0,0)*SD011_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk1_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk8_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk1_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk8_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk6_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk9_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk2_B0(0,0)*SD100_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk16_B0(0,0)*SD000_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk2_B0(0,0)*SD101_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk16_B0(0,0)*SD001_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0))*invRe*mu_B0(0,0)*u0_B0(0,0) + (D00_B0(0,0)*wk4_B0(0,0) +
      D10_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk7_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1 +
      (D01_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk0_B0(0,0))*(D01_B0(0,0)*wk14_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1 + ((D00_B0(0,0)*D00_B0(0,0))*wk10_B0(0,0) +
      (D01_B0(0,0)*D01_B0(0,0))*wk10_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk3_B0(0,0) +
      (D11_B0(0,0)*D11_B0(0,0))*wk3_B0(0,0) + D00_B0(0,0)*wk7_B0(0,0)*SD100_B0(0,0) +
      D00_B0(0,0)*wk14_B0(0,0)*SD000_B0(0,0) + D01_B0(0,0)*wk7_B0(0,0)*SD110_B0(0,0) +
      D01_B0(0,0)*wk14_B0(0,0)*SD010_B0(0,0) + D10_B0(0,0)*wk7_B0(0,0)*SD101_B0(0,0) +
      D10_B0(0,0)*wk14_B0(0,0)*SD001_B0(0,0) + D11_B0(0,0)*wk7_B0(0,0)*SD111_B0(0,0) +
      D11_B0(0,0)*wk14_B0(0,0)*SD011_B0(0,0) + 2*D00_B0(0,0)*D10_B0(0,0)*wk11_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk11_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0) + Residual3_B0(0,0);

}

 void opensbliblock00Kernel091(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
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
