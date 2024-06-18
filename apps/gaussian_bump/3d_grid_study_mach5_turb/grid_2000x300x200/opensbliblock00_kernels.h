#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel067(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0, ACC<double> &x0_B0, ACC<double> &x2_B0, ACC<double> &x1_B0, const int *idx)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   double x1b0 = 0.0;
   x0_B0(0,0,0) = Delta0block0*idx[0];

    x1_B0(0,0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

   x2_B0(0,0,0) = Delta2block0*idx[2];

   x1b0 = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a);

    rhou0 = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   -1.72749546510879e-5 + 1.51792461340404e-9*pow(-x1b0 +
      x1_B0(0,0,0), 39) + 5.27423992061459*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      0.00544468603480622*pow(-x1b0 + x1_B0(0,0,0), 21) + 0.36543058296587*pow(-x1b0 + x1_B0(0,0,0), 17) +
      3.03678298678793e-9*pow(-x1b0 + x1_B0(0,0,0), 38) + 0.00639455339465792*pow(-x1b0 + x1_B0(0,0,0), 22) +
      1.66513237916436e-7*pow(-x1b0 + x1_B0(0,0,0), 32) + 597.983674896989*pow(-x1b0 + x1_B0(0,0,0), 7) +
      1.22856508349135e-12*pow(-x1b0 + x1_B0(0,0,0), 47) + 98.9500901438903*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 50.3129873370025*pow(-x1b0 +
      x1_B0(0,0,0), 12) + 30.9488686606459*pow(-x1b0 + x1_B0(0,0,0), 11) + 9.12280637284266e-13*pow(-x1b0 +
      x1_B0(0,0,0), 45) + 8.09069249996458e-6*pow(-x1b0 + x1_B0(0,0,0), 29) + 0.534621322524354*x1_B0(0,0,0) +
      0.000136398663903241*pow(-x1b0 + x1_B0(0,0,0), 24) + 2.10876254307375e-9*pow(-x1b0 + x1_B0(0,0,0), 37) +
      0.00227720041596264*pow(-x1b0 + x1_B0(0,0,0), 23) + 4.94827815192188e-6*pow(-x1b0 + x1_B0(0,0,0), 30) +
      1.41280374633198*pow(-x1b0 + x1_B0(0,0,0), 16) + 735.508382912399*pow(-x1b0 + x1_B0(0,0,0), 9) +
      0.191621098929445*pow(-x1b0 + x1_B0(0,0,0), 15) + 2.80171921826191e-12*pow(-x1b0 + x1_B0(0,0,0), 46) +
      1.62263877443161e-6*pow(-x1b0 + x1_B0(0,0,0), 31) + 4.18385892907847e-10*pow(-x1b0 + x1_B0(0,0,0), 40) +
      5.47002468418598e-14*pow(-x1b0 + x1_B0(0,0,0), 50) - 0.0991133801027063*pow(-x1b0 + x1_B0(0,0,0), 19) -
      4.84823691462705e-14*pow(-x1b0 + x1_B0(0,0,0), 48) - 8.59088431511396*pow(-x1b0 + x1_B0(0,0,0), 13) -
      1.03833090938013e-8*pow(-x1b0 + x1_B0(0,0,0), 36) - 4.37668428629256e-11*pow(-x1b0 + x1_B0(0,0,0), 43) -
      0.0237488141559372*pow(-x1b0 + x1_B0(0,0,0), 20) - 3.70905769097297e-12*pow(-x1b0 + x1_B0(0,0,0), 41) -
      0.000295390489412819*pow(-x1b0 + x1_B0(0,0,0), 25) - 357.839089136715*pow(-x1b0 + x1_B0(0,0,0), 10) -
      0.000182970767674463*pow(-x1b0 + x1_B0(0,0,0), 26) - 0.106557576368043*pow(-x1b0 + x1_B0(0,0,0), 18) -
      8.49295264541314*pow(-x1b0 + x1_B0(0,0,0), 14) - 0.534621322524354*x1b0 - 1.27822991420825e-7*pow(-x1b0 +
      x1_B0(0,0,0), 34) - 291.622132220689*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.19348755725354*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) - 7.44399595143024e-11*pow(-x1b0 + x1_B0(0,0,0), 42) - 1.22732068854371e-6*pow(-x1b0 +
      x1_B0(0,0,0), 28) - 3.00636981568856e-13*pow(-x1b0 + x1_B0(0,0,0), 49) - 1.64768972444332e-7*pow(-x1b0 +
      x1_B0(0,0,0), 33) - 24.5463006278327*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))) - 828.55820239495*pow(-x1b0 + x1_B0(0,0,0), 8) - 1.2373228169489e-11*pow(-x1b0 + x1_B0(0,0,0),
      44) - 5.12258175945859e-8*pow(-x1b0 + x1_B0(0,0,0), 35) - 5.42499828519557e-5*pow(-x1b0 + x1_B0(0,0,0), 27)
)
: (

        0.999998697337244
));

    rhou1 = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   -8.17063723632105e-8 + 0.00212007746669345*pow(-x1b0 +
      x1_B0(0,0,0), 16) + 0.141284127590894*pow(-x1b0 + x1_B0(0,0,0), 12) + 0.00300483536486427*pow(-x1b0 +
      x1_B0(0,0,0), 17) + 6.97679994406743e-16*pow(-x1b0 + x1_B0(0,0,0), 50) + 6.39559855282406e-9*pow(-x1b0 +
      x1_B0(0,0,0), 32) + 1.51399608503856e-11*pow(-x1b0 + x1_B0(0,0,0), 39) + 1.77495560433781e-5*pow(-x1b0 +
      x1_B0(0,0,0), 23) + 1.42509329215086*pow(-x1b0 + x1_B0(0,0,0), 9) + 0.000616021148864015*((-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.000652953723292241*pow(-x1b0 + x1_B0(0,0,0), 18) +
      1.26951419119155e-5*x1_B0(0,0,0) + 1.61186181136595e-12*pow(-x1b0 + x1_B0(0,0,0), 41) +
      1.62362403707068e-15*pow(-x1b0 + x1_B0(0,0,0), 48) + 0.249498613417451*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.00412095285203932*((-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 1.81959655099112e-8*pow(-x1b0 + x1_B0(0,0,0), 31)
      + 5.83681770690683e-7*pow(-x1b0 + x1_B0(0,0,0), 25) + 1.92767122797593e-14*pow(-x1b0 + x1_B0(0,0,0), 47) +
      0.0446127502844556*pow(-x1b0 + x1_B0(0,0,0), 13) + 1.58605098924975*pow(-x1b0 + x1_B0(0,0,0), 7) +
      7.59260230168585e-10*pow(-x1b0 + x1_B0(0,0,0), 33) + 1.24473845146158e-11*pow(-x1b0 + x1_B0(0,0,0), 38) +
      6.80187610073484e-6*pow(-x1b0 + x1_B0(0,0,0), 24) + 2.69722984785312e-8*pow(-x1b0 + x1_B0(0,0,0), 30) +
      1.44401018897378e-5*pow(-x1b0 + x1_B0(0,0,0), 22) + 2.74393607457179e-14*pow(-x1b0 + x1_B0(0,0,0), 46) +
      7.10250561703589e-12*pow(-x1b0 + x1_B0(0,0,0), 40) - 0.0468650299537339*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 3.02706624657507e-14*pow(-x1b0 + x1_B0(0,0,0), 45)
      - 5.92207293639253e-7*pow(-x1b0 + x1_B0(0,0,0), 27) - 4.8561212363574e-13*pow(-x1b0 + x1_B0(0,0,0), 43) -
      4.3596689226518e-15*pow(-x1b0 + x1_B0(0,0,0), 49) - 3.1892969133594e-13*pow(-x1b0 + x1_B0(0,0,0), 42) -
      1.10680879298031e-8*pow(-x1b0 + x1_B0(0,0,0), 29) - 2.20897351857434e-13*pow(-x1b0 + x1_B0(0,0,0), 44) -
      0.258588465001998*pow(-x1b0 + x1_B0(0,0,0), 11) - 5.32652751809113e-10*pow(-x1b0 + x1_B0(0,0,0), 35) -
      0.000291869892932767*pow(-x1b0 + x1_B0(0,0,0), 19) - 6.45605313265625e-10*pow(-x1b0 + x1_B0(0,0,0), 34) -
      4.18717403643527e-11*pow(-x1b0 + x1_B0(0,0,0), 37) - 0.789986732006658*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      1.26951419119155e-5*x1b0 - 2.17878572098823e-10*pow(-x1b0 + x1_B0(0,0,0), 36) - 0.323626437267022*pow(-x1b0 +
      x1_B0(0,0,0), 10) - 1.93430325810452e-7*pow(-x1b0 + x1_B0(0,0,0), 28) - 0.0127153083299108*pow(-x1b0 +
      x1_B0(0,0,0), 15) - 0.0264310265662573*pow(-x1b0 + x1_B0(0,0,0), 14) - 8.62044482438048e-7*pow(-x1b0 +
      x1_B0(0,0,0), 26) - 5.90688563506032e-5*pow(-x1b0 + x1_B0(0,0,0), 21) - 0.000242578791846908*pow(-x1b0 +
      x1_B0(0,0,0), 20) - 1.99735183925755*pow(-x1b0 + x1_B0(0,0,0), 8)
)
: (
   0.00404432122221376
));

    T = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   1.95382251996418 + 1.12129635273477e-11*pow(-x1b0 +
      x1_B0(0,0,0), 45) + 1819.43054615916*pow(-x1b0 + x1_B0(0,0,0), 7) + 7.89008996027609e-13*pow(-x1b0 + x1_B0(0,0,0),
      49) + 2.01064573871103e-5*pow(-x1b0 + x1_B0(0,0,0), 29) + 0.000405601599729808*pow(-x1b0 + x1_B0(0,0,0), 23) +
      123.754060288635*pow(-x1b0 + x1_B0(0,0,0), 11) + 0.0105170896875868*pow(-x1b0 + x1_B0(0,0,0), 22) +
      2.94966345214024*pow(-x1b0 + x1_B0(0,0,0), 16) + 4.39905014352576e-11*pow(-x1b0 + x1_B0(0,0,0), 44) +
      4.73020331929709e-5*pow(-x1b0 + x1_B0(0,0,0), 27) + 0.197016449628322*pow(-x1b0 + x1_B0(0,0,0), 17) +
      108.973301366629*pow(-x1b0 + x1_B0(0,0,0), 12) + 5.30090723936674e-8*pow(-x1b0 + x1_B0(0,0,0), 35) +
      6.30981060095481e-11*pow(-x1b0 + x1_B0(0,0,0), 43) + 1.67957468102799e-8*pow(-x1b0 + x1_B0(0,0,0), 37) +
      18.2948944789904*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      2.36935914148264e-9*pow(-x1b0 + x1_B0(0,0,0), 38) + 0.00512282100754557*pow(-x1b0 + x1_B0(0,0,0), 20) +
      352.612523150284*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 2.6780408475796e-6*pow(-x1b0 + x1_B0(0,0,0), 30) +
      4.3736784172016e-8*pow(-x1b0 + x1_B0(0,0,0), 36) + 3.06965682190287*pow(-x1b0 + x1_B0(0,0,0), 15) +
      3.07059408802214*x1_B0(0,0,0) + 5.11844229656428e-5*pow(-x1b0 + x1_B0(0,0,0), 28) + 0.0269179683475999*pow(-x1b0 +
      x1_B0(0,0,0), 21) + 1987.58045860676*pow(-x1b0 + x1_B0(0,0,0), 9) - 3.63253412653224e-12*pow(-x1b0 + x1_B0(0,0,0),
      47) - 6.05334762344023e-13*pow(-x1b0 + x1_B0(0,0,0), 48) - 0.00149507065700942*pow(-x1b0 + x1_B0(0,0,0), 24) -
      0.000794087613653311*pow(-x1b0 + x1_B0(0,0,0), 25) - 1.53622005871689e-9*pow(-x1b0 + x1_B0(0,0,0), 39) -
      3.06175350337974e-12*pow(-x1b0 + x1_B0(0,0,0), 46) - 962.282723664029*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      16.1818227188491*pow(-x1b0 + x1_B0(0,0,0), 14) - 7.21890448602392e-8*pow(-x1b0 + x1_B0(0,0,0), 34) -
      1.32415488926547e-9*pow(-x1b0 + x1_B0(0,0,0), 40) - 963.121232620464*pow(-x1b0 + x1_B0(0,0,0), 10) -
      30.1894759831545*pow(-x1b0 + x1_B0(0,0,0), 13) - 1.84275919064868e-6*pow(-x1b0 + x1_B0(0,0,0), 31) -
      1.14355553753312e-13*pow(-x1b0 + x1_B0(0,0,0), 50) - 5.00211747220444e-10*pow(-x1b0 + x1_B0(0,0,0), 41) -
      2350.38788058623*pow(-x1b0 + x1_B0(0,0,0), 8) - 5.60006414533923e-7*pow(-x1b0 + x1_B0(0,0,0), 33) -
      0.158616678433615*pow(-x1b0 + x1_B0(0,0,0), 19) - 0.000158241329515349*pow(-x1b0 + x1_B0(0,0,0), 26) -
      90.9012946169306*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      3.07059408802214*x1b0 - 1.50405882258342e-6*pow(-x1b0 + x1_B0(0,0,0), 32) - 0.398552374641304*pow(-x1b0 +
      x1_B0(0,0,0), 18) - 6.38582156191306*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      4.99793823973241e-11*pow(-x1b0 + x1_B0(0,0,0), 42)
)
: (
   1.00000130067071
));

   rho = 1.0/T;

   rho_B0(0,0,0) = rho;

   rhou0_B0(0,0,0) = rhou0;

   rhou1_B0(0,0,0) = rhou1;

   rhoE_B0(0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   rhou2_B0(0,0,0) = 0.0;

}

 void opensbliblock00Kernel070(const ACC<double> &x0_B0, const ACC<double> &x1_B0, ACC<double> &D00_B0, ACC<double>
&D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0, ACC<double> &detJ_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0,
ACC<double> &wk3_B0, ACC<double> &wk4_B0, const int *idx)
{
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
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

 void opensbliblock00Kernel071(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel072(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel073(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel074(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
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

 void opensbliblock00Kernel081(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
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

   SD000_B0(0,0,0) = d1_D00_dx;

   SD001_B0(0,0,0) = d1_D00_dy;

   SD010_B0(0,0,0) = d1_D01_dx;

   SD011_B0(0,0,0) = d1_D01_dy;

   SD100_B0(0,0,0) = d1_D10_dx;

   SD101_B0(0,0,0) = d1_D10_dy;

   SD110_B0(0,0,0) = d1_D11_dx;

   SD111_B0(0,0,0) = d1_D11_dy;

}

 void opensbliblock00Kernel061(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
ACC<double> &rhou2_B0)
{
   rho_B0(0,0,0) = rho_B0(-1,0,0);

   rhou0_B0(0,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(0,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(0,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(0,0,0) = rhoE_B0(-1,0,0);

}

 void opensbliblock00Kernel062(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
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

 void opensbliblock00Kernel063(const int *iter, const ACC<double> &x0_B0, const ACC<double> &x2_B0, ACC<double>
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

 void opensbliblock00Kernel064(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
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

void opensbliblock00Kernel006(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0,0) = rhou0_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel008(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0,0) = rhou1_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel016(const ACC<double> &rho_B0, const ACC<double> &rhou2_B0, ACC<double> &u2_B0)
{
   u2_B0(0,0,0) = rhou2_B0(0,0,0)/rho_B0(0,0,0);

}

 void opensbliblock00Kernel011(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0,0) = u0_B0(0,0,0)*D00_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0);

}

 void opensbliblock00Kernel012(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &p_B0)
{
    p_B0(0,0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0,0)*u0_B0(0,0,0))*rho_B0(0,0,0) -
      (1.0/2.0)*(u1_B0(0,0,0)*u1_B0(0,0,0))*rho_B0(0,0,0) - (1.0/2.0)*(u2_B0(0,0,0)*u2_B0(0,0,0))*rho_B0(0,0,0) +
      rhoE_B0(0,0,0));

}

 void opensbliblock00Kernel017(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U1_B0)
{
   U1_B0(0,0,0) = u0_B0(0,0,0)*D10_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0);

}

void opensbliblock00Kernel020(const ACC<double> &u2_B0, ACC<double> &U2_B0)
{
   U2_B0(0,0,0) = u2_B0(0,0,0);

}

void opensbliblock00Kernel010(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0,0) = sqrt(gama*p_B0(0,0,0)/rho_B0(0,0,0));

}

void opensbliblock00Kernel027(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0,0) = (Minf*Minf)*gama*p_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel022(const ACC<double> &T_B0, ACC<double> &mu_B0)
{
   mu_B0(0,0,0) = T_B0(0,0,0)*sqrt(T_B0(0,0,0))*(1.0 + SuthT*invRefT)/(SuthT*invRefT + T_B0(0,0,0));

}

 void opensbliblock00Kernel000(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &U0_B0, const
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double>
&rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double>
&u0_B0, const ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double>
&wk2_B0, ACC<double> &wk3_B0, ACC<double> &wk4_B0)
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
   double max_lambda_44 = 0.0;
   double omega_0 = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
   AVG_0_rho = sqrt(rho_B0(0,0,0)*rho_B0(1,0,0));

   AVG_0_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(1,0,0))));

   AVG_0_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u0_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u1_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u2_B0(1,0,0))*AVG_0_inv_rho;

    AVG_0_a = sqrt((-(1.0/2.0)*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(1,0,0) +
      rhoE_B0(1,0,0))/sqrt(rho_B0(1,0,0)))*AVG_0_inv_rho)*gamma_m1);

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0,0) + D00_B0(1,0,0));

   AVG_0_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(1,0,0));

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

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)))*a_B0(1,0,0) +
      u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) + u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)),
      fabs(sqrt((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(-sqrt((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)))*a_B0(1,0,0) +
      u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) + u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)));

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

    Recon_4 = (-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_0 + (-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*omega_2 +
      (-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_1 + Recon_4;

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
ACC<double> &a_B0, const ACC<double> &detJ_B0, const ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double>
&rho_B0, const ACC<double> &rhou0_B0, const ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double>
&u0_B0, const ACC<double> &u1_B0, const ACC<double> &u2_B0, ACC<double> &wk5_B0, ACC<double> &wk6_B0, ACC<double>
&wk7_B0, ACC<double> &wk8_B0, ACC<double> &wk9_B0)
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
   double max_lambda_44 = 0.0;
   double omega_0 = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
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

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)),
      fabs(sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)),
      fabs(-sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

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

    Recon_4 = (-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_0 + (-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*omega_2 +
      (-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_1 + Recon_4;

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
ACC<double> &p_B0, const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const ACC<double>
&rhou1_B0, const ACC<double> &rhou2_B0, const ACC<double> &u0_B0, const ACC<double> &u1_B0, const ACC<double> &u2_B0,
ACC<double> &wk10_B0, ACC<double> &wk11_B0, ACC<double> &wk12_B0, ACC<double> &wk13_B0, ACC<double> &wk14_B0)
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

    max_lambda_33 = shock_filter_control*fmax(fabs(a_B0(0,0,0)*detJ_B0(0,0,0) + u2_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(a_B0(0,0,1)*detJ_B0(0,0,1) + u2_B0(0,0,1)*detJ_B0(0,0,1)));

    max_lambda_44 = shock_filter_control*fmax(fabs(a_B0(0,0,0)*detJ_B0(0,0,0) - u2_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(a_B0(0,0,1)*detJ_B0(0,0,1) - u2_B0(0,0,1)*detJ_B0(0,0,1)));

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

    Recon_4 = (-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_0 + (-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*omega_2 +
      (-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_1 + Recon_4;

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

 void opensbliblock00Kernel021(const ACC<double> &detJ_B0, const ACC<double> &wk0_B0, const ACC<double> &wk10_B0, const
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

void opensbliblock00Kernel032(const ACC<double> &u0_B0, ACC<double> &wk0_B0, const int *idx)
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

void opensbliblock00Kernel034(const ACC<double> &u1_B0, ACC<double> &wk1_B0, const int *idx)
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

void opensbliblock00Kernel036(const ACC<double> &u2_B0, ACC<double> &wk2_B0, const int *idx)
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

void opensbliblock00Kernel038(const ACC<double> &T_B0, ACC<double> &wk3_B0, const int *idx)
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

void opensbliblock00Kernel040(const ACC<double> &u0_B0, ACC<double> &wk4_B0, const int *idx)
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

void opensbliblock00Kernel041(const ACC<double> &u1_B0, ACC<double> &wk5_B0, const int *idx)
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

void opensbliblock00Kernel042(const ACC<double> &u2_B0, ACC<double> &wk6_B0, const int *idx)
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

void opensbliblock00Kernel043(const ACC<double> &T_B0, ACC<double> &wk7_B0, const int *idx)
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

void opensbliblock00Kernel044(const ACC<double> &u0_B0, ACC<double> &wk8_B0)
{
    wk8_B0(0,0,0) = (-(2.0/3.0)*u0_B0(0,0,-1) - (1.0/12.0)*u0_B0(0,0,2) + ((1.0/12.0))*u0_B0(0,0,-2) +
      ((2.0/3.0))*u0_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel045(const ACC<double> &u1_B0, ACC<double> &wk9_B0)
{
    wk9_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,0,-1) - (1.0/12.0)*u1_B0(0,0,2) + ((1.0/12.0))*u1_B0(0,0,-2) +
      ((2.0/3.0))*u1_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel046(const ACC<double> &u2_B0, ACC<double> &wk10_B0)
{
    wk10_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,0,-1) - (1.0/12.0)*u2_B0(0,0,2) + ((1.0/12.0))*u2_B0(0,0,-2) +
      ((2.0/3.0))*u2_B0(0,0,1))*invDelta2block0;

}

void opensbliblock00Kernel047(const ACC<double> &T_B0, ACC<double> &wk11_B0)
{
    wk11_B0(0,0,0) = (-(2.0/3.0)*T_B0(0,0,-1) - (1.0/12.0)*T_B0(0,0,2) + ((1.0/12.0))*T_B0(0,0,-2) +
      ((2.0/3.0))*T_B0(0,0,1))*invDelta2block0;

}

 void opensbliblock00Kernel056(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &D10_B0, const
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

    d2_T_dz = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,0,-2) - (1.0/12.0)*T_B0(0,0,2) + ((4.0/3.0))*T_B0(0,0,1) +
      ((4.0/3.0))*T_B0(0,0,-1))*inv2Delta2block0;

    d1_mu_dz = (-(2.0/3.0)*mu_B0(0,0,-1) - (1.0/12.0)*mu_B0(0,0,2) + ((1.0/12.0))*mu_B0(0,0,-2) +
      ((2.0/3.0))*mu_B0(0,0,1))*invDelta2block0;

    d2_u0_dz = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,0,-2) - (1.0/12.0)*u0_B0(0,0,2) + ((4.0/3.0))*u0_B0(0,0,1)
      + ((4.0/3.0))*u0_B0(0,0,-1))*inv2Delta2block0;

    d2_u1_dz = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,0,-2) - (1.0/12.0)*u1_B0(0,0,2) + ((4.0/3.0))*u1_B0(0,0,1)
      + ((4.0/3.0))*u1_B0(0,0,-1))*inv2Delta2block0;

    d2_u2_dz = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,0,-2) - (1.0/12.0)*u2_B0(0,0,2) + ((4.0/3.0))*u2_B0(0,0,1)
      + ((4.0/3.0))*u2_B0(0,0,-1))*inv2Delta2block0;

    d1_wk0_dz = (-(2.0/3.0)*wk0_B0(0,0,-1) - (1.0/12.0)*wk0_B0(0,0,2) + ((1.0/12.0))*wk0_B0(0,0,-2) +
      ((2.0/3.0))*wk0_B0(0,0,1))*invDelta2block0;

    d1_wk1_dz = (-(2.0/3.0)*wk1_B0(0,0,-1) - (1.0/12.0)*wk1_B0(0,0,2) + ((1.0/12.0))*wk1_B0(0,0,-2) +
      ((2.0/3.0))*wk1_B0(0,0,1))*invDelta2block0;

    d1_wk2_dz = (-(2.0/3.0)*wk2_B0(0,0,-1) - (1.0/12.0)*wk2_B0(0,0,2) + ((1.0/12.0))*wk2_B0(0,0,-2) +
      ((2.0/3.0))*wk2_B0(0,0,1))*invDelta2block0;

    d1_wk4_dz = (-(2.0/3.0)*wk4_B0(0,0,-1) - (1.0/12.0)*wk4_B0(0,0,2) + ((1.0/12.0))*wk4_B0(0,0,-2) +
      ((2.0/3.0))*wk4_B0(0,0,1))*invDelta2block0;

    d1_wk5_dz = (-(2.0/3.0)*wk5_B0(0,0,-1) - (1.0/12.0)*wk5_B0(0,0,2) + ((1.0/12.0))*wk5_B0(0,0,-2) +
      ((2.0/3.0))*wk5_B0(0,0,1))*invDelta2block0;

    d1_wk6_dz = (-(2.0/3.0)*wk6_B0(0,0,-1) - (1.0/12.0)*wk6_B0(0,0,2) + ((1.0/12.0))*wk6_B0(0,0,-2) +
      ((2.0/3.0))*wk6_B0(0,0,1))*invDelta2block0;

    Residual1_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe + (D01_B0(0,0,0)*d1_mu_dx
      + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0)
      + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe + (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) +
      wk8_B0(0,0,0))*invRe*d1_mu_dz + ((D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk6_dz +
      ((4.0/3.0))*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + ((4.0/3.0))*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy - (2.0/3.0)*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy + ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0)
      + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((8.0/3.0))*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      d2_u0_dz)*invRe*mu_B0(0,0,0) + Residual1_B0(0,0,0);

    Residual2_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe +
      (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*d1_mu_dz +
      ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy +
      ((1.0/3.0))*D01_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D11_B0(0,0,0)*d1_wk6_dz +
      ((4.0/3.0))*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx + ((4.0/3.0))*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy +
      D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy - (2.0/3.0)*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) -
      (2.0/3.0)*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy + ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0)
      + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((8.0/3.0))*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      d2_u1_dz)*invRe*mu_B0(0,0,0) + Residual2_B0(0,0,0);

    Residual3_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*d1_mu_dz +
      (((4.0/3.0))*d2_u2_dz + (D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk0_dz + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk1_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk4_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk5_dz + D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0) + Residual3_B0(0,0,0);

    Residual4_B0(0,0,0) = (D00_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0))*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D00_B0(0,0,0)*wk1_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0))*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx +
      D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) +
      wk8_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u1_B0(0,0,0) +
      (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) +
      (D01_B0(0,0,0)*wk0_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D01_B0(0,0,0)*wk1_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0))*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0))*(D01_B0(0,0,0)*wk2_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) +
      wk9_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) +
      (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*u1_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk8_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dz +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk9_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dz +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk10_B0(0,0,0) +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dz +
      (((4.0/3.0))*d2_u2_dz + (D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk0_dz + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk1_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk4_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk5_dz + D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0)*u2_B0(0,0,0) + ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx
      + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk2_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk6_dz + ((4.0/3.0))*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx +
      ((4.0/3.0))*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy + D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) +
      D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) + D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) +
      D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) + D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) +
      D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) +
      D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy -
      (2.0/3.0)*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) -
      (2.0/3.0)*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx + ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy +
      ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy + ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) + ((4.0/3.0))*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0)
      + ((4.0/3.0))*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) +
      ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((8.0/3.0))*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      d2_u1_dz)*invRe*mu_B0(0,0,0)*u1_B0(0,0,0) + ((D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy + ((1.0/3.0))*D00_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk6_dz
      + ((4.0/3.0))*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + ((4.0/3.0))*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy - (2.0/3.0)*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy + ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0)
      + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((8.0/3.0))*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      d2_u0_dz)*invRe*mu_B0(0,0,0)*u0_B0(0,0,0) + (D00_B0(0,0,0)*wk3_B0(0,0,0) +
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

 void opensbliblock00Kernel084(const ACC<double> &Residual0_B0, const ACC<double> &Residual1_B0, const ACC<double>
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

 void opensbliblock00Kernel082(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, const
ACC<double> &rhou1_B0, const ACC<double> &rhou2_B0, ACC<double> &E_mean_B0, ACC<double> &rhomean_B0, ACC<double>
&rhou0mean_B0, ACC<double> &rhou0u0mean_B0, ACC<double> &rhou0u1mean_B0, ACC<double> &rhou0u2mean_B0, ACC<double>
&rhou1mean_B0, ACC<double> &rhou1u1mean_B0, ACC<double> &rhou1u2mean_B0, ACC<double> &rhou2mean_B0, ACC<double>
&rhou2u2mean_B0)
{
   double rhoinv = 0.0;
   rhomean_B0(0,0,0) = rho_B0(0,0,0) + rhomean_B0(0,0,0);

   rhou0mean_B0(0,0,0) = rhou0_B0(0,0,0) + rhou0mean_B0(0,0,0);

   rhou1mean_B0(0,0,0) = rhou1_B0(0,0,0) + rhou1mean_B0(0,0,0);

   rhou2mean_B0(0,0,0) = rhou2_B0(0,0,0) + rhou2mean_B0(0,0,0);

   E_mean_B0(0,0,0) = rhoE_B0(0,0,0)/rho_B0(0,0,0) + E_mean_B0(0,0,0);

   rhoinv = 1.0/rho_B0(0,0,0);

   rhou0u0mean_B0(0,0,0) = (rhou0_B0(0,0,0)*rhou0_B0(0,0,0))*rhoinv + rhou0u0mean_B0(0,0,0);

   rhou0u1mean_B0(0,0,0) = rhou0_B0(0,0,0)*rhou1_B0(0,0,0)*rhoinv + rhou0u1mean_B0(0,0,0);

   rhou1u1mean_B0(0,0,0) = (rhou1_B0(0,0,0)*rhou1_B0(0,0,0))*rhoinv + rhou1u1mean_B0(0,0,0);

   rhou0u2mean_B0(0,0,0) = rhou0_B0(0,0,0)*rhou2_B0(0,0,0)*rhoinv + rhou0u2mean_B0(0,0,0);

   rhou1u2mean_B0(0,0,0) = rhou1_B0(0,0,0)*rhou2_B0(0,0,0)*rhoinv + rhou1u2mean_B0(0,0,0);

   rhou2u2mean_B0(0,0,0) = (rhou2_B0(0,0,0)*rhou2_B0(0,0,0))*rhoinv + rhou2u2mean_B0(0,0,0);

}

 void opensbliblock00Kernel083(ACC<double> &E_mean_B0, ACC<double> &rhomean_B0, ACC<double> &rhou0mean_B0, ACC<double>
&rhou0u0mean_B0, ACC<double> &rhou0u1mean_B0, ACC<double> &rhou0u2mean_B0, ACC<double> &rhou1mean_B0, ACC<double>
&rhou1u1mean_B0, ACC<double> &rhou1u2mean_B0, ACC<double> &rhou2mean_B0, ACC<double> &rhou2u2mean_B0)
{
   rhomean_B0(0,0,0) = invnsamples*rhomean_B0(0,0,0);

   rhou0mean_B0(0,0,0) = invnsamples*rhou0mean_B0(0,0,0);

   rhou1mean_B0(0,0,0) = invnsamples*rhou1mean_B0(0,0,0);

   rhou2mean_B0(0,0,0) = invnsamples*rhou2mean_B0(0,0,0);

   E_mean_B0(0,0,0) = invnsamples*E_mean_B0(0,0,0);

   rhou0u0mean_B0(0,0,0) = invnsamples*rhou0u0mean_B0(0,0,0);

   rhou0u1mean_B0(0,0,0) = invnsamples*rhou0u1mean_B0(0,0,0);

   rhou1u1mean_B0(0,0,0) = invnsamples*rhou1u1mean_B0(0,0,0);

   rhou0u2mean_B0(0,0,0) = invnsamples*rhou0u2mean_B0(0,0,0);

   rhou1u2mean_B0(0,0,0) = invnsamples*rhou1u2mean_B0(0,0,0);

   rhou2u2mean_B0(0,0,0) = invnsamples*rhou2u2mean_B0(0,0,0);

}

#endif
