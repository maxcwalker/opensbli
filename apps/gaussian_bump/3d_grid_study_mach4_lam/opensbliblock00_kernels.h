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

    rhou0 = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   2.97797837424394e-7 + 2.12841147696471e-5*pow(-x1b0 +
      x1_B0(0,0,0), 20) + 0.133865777431029*pow(-x1b0 + x1_B0(0,0,0), 13) + 19.9088120755319*((-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      2.29767792345012e-7*pow(-x1b0 + x1_B0(0,0,0), 25) + 6.70829869657458e-20*pow(-x1b0 + x1_B0(0,0,0), 48) +
      2.1713635067128e-8*pow(-x1b0 + x1_B0(0,0,0), 27) + 1.32482654576619e-15*pow(-x1b0 + x1_B0(0,0,0), 42) +
      6.89066680571039e-16*pow(-x1b0 + x1_B0(0,0,0), 43) + 1.72287901453124e-16*pow(-x1b0 + x1_B0(0,0,0), 44) +
      9.94340921919548e-8*pow(-x1b0 + x1_B0(0,0,0), 26) + 5.27841136625796e-8*pow(-x1b0 + x1_B0(0,0,0), 24) +
      1.30784197828466e-11*pow(-x1b0 + x1_B0(0,0,0), 34) + 0.000518126290363465*pow(-x1b0 + x1_B0(0,0,0), 18) +
      4.35045599489778e-12*pow(-x1b0 + x1_B0(0,0,0), 35) + 1.28472765644157*pow(-x1b0 + x1_B0(0,0,0), 10) +
      5.40449390281845*pow(-x1b0 + x1_B0(0,0,0), 9) + 0.705003461702378*x1_B0(0,0,0) + 2.05226539144496e-11*pow(-x1b0 +
      x1_B0(0,0,0), 33) + 1.3644433640777e-18*pow(-x1b0 + x1_B0(0,0,0), 49) + 0.025245101197278*pow(-x1b0 +
      x1_B0(0,0,0), 14) + 7.67670940231515e-13*pow(-x1b0 + x1_B0(0,0,0), 36) + 0.000211166634597816*pow(-x1b0 +
      x1_B0(0,0,0), 19) + 30.6037534095377*pow(-x1b0 + x1_B0(0,0,0), 7) + 3.9903984345085*((-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 3.93959813546976e-16*pow(-x1b0 + x1_B0(0,0,0), 41) -
      1.94065501117958e-19*pow(-x1b0 + x1_B0(0,0,0), 50) - 3.1469755991578e-18*pow(-x1b0 + x1_B0(0,0,0), 45) -
      1.29703751123626e-13*pow(-x1b0 + x1_B0(0,0,0), 38) - 9.8400263910907*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 8.74762692645055e-18*pow(-x1b0 + x1_B0(0,0,0), 47)
      - 1.17917660047761e-9*pow(-x1b0 + x1_B0(0,0,0), 30) - 2.57709868821788e-11*pow(-x1b0 + x1_B0(0,0,0), 32) -
      0.0811800630027883*pow(-x1b0 + x1_B0(0,0,0), 12) - 3.08822206690413e-10*pow(-x1b0 + x1_B0(0,0,0), 31) -
      2.50967583861948e-9*pow(-x1b0 + x1_B0(0,0,0), 29) - 1.36055637787948*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) - 0.0110105534571674*pow(-x1b0 + x1_B0(0,0,0), 15) - 3.75526598635822e-10*pow(-x1b0 + x1_B0(0,0,0),
      28) - 2.2609628604477e-17*pow(-x1b0 + x1_B0(0,0,0), 46) - 1.4656727770607e-5*pow(-x1b0 + x1_B0(0,0,0), 21) -
      5.54664328608118e-14*pow(-x1b0 + x1_B0(0,0,0), 39) - 1.92046980142349e-6*pow(-x1b0 + x1_B0(0,0,0), 23) -
      8.27804006169006e-6*pow(-x1b0 + x1_B0(0,0,0), 22) - 1.09581190813925*pow(-x1b0 + x1_B0(0,0,0), 11) -
      0.000296048249872049*pow(-x1b0 + x1_B0(0,0,0), 17) - 19.4491075570494*pow(-x1b0 + x1_B0(0,0,0), 8) -
      0.00549311910867067*pow(-x1b0 + x1_B0(0,0,0), 16) - 0.705003461702378*x1b0 - 8.92276263592473e-14*pow(-x1b0 +
      x1_B0(0,0,0), 37) - 29.7490136009841*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.33376901169961e-14*pow(-x1b0 + x1_B0(0,0,0),
      40)
)
: (
   0.999998963470747
));

    rhou1 = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   -4.54110030254993e-9 + 2.46346184169831e-14*pow(-x1b0 +
      x1_B0(0,0,0), 35) + 0.000675804575582523*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      3.55999295167266e-18*pow(-x1b0 + x1_B0(0,0,0), 43) + 1.02818378121585e-18*pow(-x1b0 + x1_B0(0,0,0), 44) +
      0.00029138434927198*pow(-x1b0 + x1_B0(0,0,0), 14) + 3.46643006122271e-7*x1_B0(0,0,0) +
      3.95642617720499e-20*pow(-x1b0 + x1_B0(0,0,0), 45) + 5.96022803499807e-14*pow(-x1b0 + x1_B0(0,0,0), 34) +
      1.20076760094205e-6*pow(-x1b0 + x1_B0(0,0,0), 19) + 6.73869536811623e-10*pow(-x1b0 + x1_B0(0,0,0), 25) +
      4.56373528126002e-14*pow(-x1b0 + x1_B0(0,0,0), 33) + 9.37288719965752e-7*pow(-x1b0 + x1_B0(0,0,0), 18) +
      7.19961522095333e-21*pow(-x1b0 + x1_B0(0,0,0), 49) + 8.18632064571914e-6*pow(-x1b0 + x1_B0(0,0,0), 15) +
      5.11024164966472e-10*pow(-x1b0 + x1_B0(0,0,0), 26) + 0.000271932049239399*pow(-x1b0 + x1_B0(0,0,0), 13) +
      0.0802770512011952*pow(-x1b0 + x1_B0(0,0,0), 8) + 0.0404253985778736*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      3.15588423186177e-7*pow(-x1b0 + x1_B0(0,0,0), 20) + 1.60950777735292e-10*pow(-x1b0 + x1_B0(0,0,0), 27) +
      2.01547039319639e-11*pow(-x1b0 + x1_B0(0,0,0), 28) + 0.00601486830501638*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.0242330792865569*pow(-x1b0 + x1_B0(0,0,0), 10) +
      5.44505105140021e-18*pow(-x1b0 + x1_B0(0,0,0), 42) + 5.77608251407724e-15*pow(-x1b0 + x1_B0(0,0,0), 36) +
      1.85415467571464e-16*pow(-x1b0 + x1_B0(0,0,0), 37) - 0.0173159921567919*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      9.78788268626733e-22*pow(-x1b0 + x1_B0(0,0,0), 50) - 1.09491521738878e-19*pow(-x1b0 + x1_B0(0,0,0), 46) -
      7.69038903908677e-12*pow(-x1b0 + x1_B0(0,0,0), 29) - 3.46643006122271e-7*x1b0 - 3.43049304595293e-13*pow(-x1b0 +
      x1_B0(0,0,0), 32) - 1.975962926113e-9*pow(-x1b0 + x1_B0(0,0,0), 24) - 0.0024824313028383*pow(-x1b0 + x1_B0(0,0,0),
      12) - 1.08378265876496e-21*pow(-x1b0 + x1_B0(0,0,0), 48) - 2.90534599259213e-16*pow(-x1b0 + x1_B0(0,0,0), 39) -
      5.82577249121456e-12*pow(-x1b0 + x1_B0(0,0,0), 30) - 1.19379208053376e-8*pow(-x1b0 + x1_B0(0,0,0), 21) -
      4.82177603143052e-20*pow(-x1b0 + x1_B0(0,0,0), 47) - 3.0488665707425e-5*pow(-x1b0 + x1_B0(0,0,0), 16) -
      1.98805016869432e-12*pow(-x1b0 + x1_B0(0,0,0), 31) - 8.33916537175333e-6*pow(-x1b0 + x1_B0(0,0,0), 17) -
      0.0687168016356135*pow(-x1b0 + x1_B0(0,0,0), 7) - 8.28342252086066e-18*pow(-x1b0 + x1_B0(0,0,0), 41) -
      5.42854585520337e-16*pow(-x1b0 + x1_B0(0,0,0), 38) - 3.84331587210624e-8*pow(-x1b0 + x1_B0(0,0,0), 22) -
      0.00141140055006601*pow(-x1b0 + x1_B0(0,0,0), 11) - 8.33333163646726e-17*pow(-x1b0 + x1_B0(0,0,0), 40) -
      0.00174020388083379*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      0.0600440798707133*pow(-x1b0 + x1_B0(0,0,0), 9) - 1.43879268297813e-8*pow(-x1b0 + x1_B0(0,0,0), 23)
)
: (
  
      0.00193194788504268
));

    T = ((-x1b0 + x1_B0(0,0,0) < 3.06430643064306) ? (
   1.36969827002441 + 1.13870441354323e-10*pow(-x1b0 +
      x1_B0(0,0,0), 32) + 2.02683346502566*x1_B0(0,0,0) + 1.09536022298776*pow(-x1b0 + x1_B0(0,0,0), 12) +
      5.19258438158001e-10*pow(-x1b0 + x1_B0(0,0,0), 31) + 0.000301437266009085*pow(-x1b0 + x1_B0(0,0,0), 18) +
      8.92443014756808e-7*pow(-x1b0 + x1_B0(0,0,0), 24) + 1.13069442583559e-13*pow(-x1b0 + x1_B0(0,0,0), 38) +
      42.4813607258513*pow(-x1b0 + x1_B0(0,0,0), 9) + 43.2936208836478*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      1.26174117219366e-9*pow(-x1b0 + x1_B0(0,0,0), 30) + 0.0992947374844741*pow(-x1b0 + x1_B0(0,0,0), 13) +
      2.86592343466356e-15*pow(-x1b0 + x1_B0(0,0,0), 41) + 2.69221358552576e-17*pow(-x1b0 + x1_B0(0,0,0), 46) +
      4.37352125053876e-19*pow(-x1b0 + x1_B0(0,0,0), 48) + 3.91659372503742e-6*pow(-x1b0 + x1_B0(0,0,0), 23) +
      2.5052446551666e-19*pow(-x1b0 + x1_B0(0,0,0), 50) + 7.1247944532492e-14*pow(-x1b0 + x1_B0(0,0,0), 39) +
      5.94609768873246*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      0.00582035176858292*pow(-x1b0 + x1_B0(0,0,0), 16) + 97.5377385031795*pow(-x1b0 + x1_B0(0,0,0), 7) +
      2.23649301296563e-14*pow(-x1b0 + x1_B0(0,0,0), 40) + 7.4292945037283e-10*pow(-x1b0 + x1_B0(0,0,0), 29) +
      0.00339049568386889*pow(-x1b0 + x1_B0(0,0,0), 17) + 6.64903029526751e-6*pow(-x1b0 + x1_B0(0,0,0), 22) +
      1.26396429987778e-17*pow(-x1b0 + x1_B0(0,0,0), 47) - 77.8048554221864*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      1.26826223996787e-11*pow(-x1b0 + x1_B0(0,0,0), 34) - 8.88526057078433e-16*pow(-x1b0 + x1_B0(0,0,0), 43) -
      2.02683346502566*x1b0 - 1.38786901568812e-13*pow(-x1b0 + x1_B0(0,0,0), 37) - 10.1069983932312*pow(-x1b0 +
      x1_B0(0,0,0), 10) - 0.0983640103217269*pow(-x1b0 + x1_B0(0,0,0), 14) - 1.86957892899784e-18*pow(-x1b0 +
      x1_B0(0,0,0), 49) - 17.5408448960589*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))) - 8.58888800176311e-9*pow(-x1b0 + x1_B0(0,0,0), 28) - 2.74999027965281e-16*pow(-x1b0 +
      x1_B0(0,0,0), 44) - 0.0214163799268911*pow(-x1b0 + x1_B0(0,0,0), 15) - 1.29928471559722e-5*pow(-x1b0 +
      x1_B0(0,0,0), 21) - 1.64553851993643e-12*pow(-x1b0 + x1_B0(0,0,0), 36) - 0.000251786947657114*pow(-x1b0 +
      x1_B0(0,0,0), 19) - 3.4813274987423e-8*pow(-x1b0 + x1_B0(0,0,0), 25) - 1.66649367856402e-17*pow(-x1b0 +
      x1_B0(0,0,0), 45) - 81.9488029399609*pow(-x1b0 + x1_B0(0,0,0), 8) - 1.17103233534467e-15*pow(-x1b0 + x1_B0(0,0,0),
      42) - 1.34169776267517*pow(-x1b0 + x1_B0(0,0,0), 11) - 4.43300537757199e-8*pow(-x1b0 + x1_B0(0,0,0), 27) -
      7.54650466852186e-13*pow(-x1b0 + x1_B0(0,0,0), 33) - 3.36981263872277*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) - 6.14546960619007e-12*pow(-x1b0 + x1_B0(0,0,0), 35) - 1.08482156651957e-7*pow(-x1b0 +
      x1_B0(0,0,0), 26) - 0.00011148512787748*pow(-x1b0 + x1_B0(0,0,0), 20)
)
: (
   1.00000103348235
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

void opensbliblock00Kernel007(const ACC<double> &rho_B0, const ACC<double> &rhou2_B0, ACC<double> &u2_B0)
{
   u2_B0(0,0,0) = rhou2_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel008(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0,0) = rhou0_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel014(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0,0) = rhou1_B0(0,0,0)/rho_B0(0,0,0);

}

 void opensbliblock00Kernel009(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0,0) = u0_B0(0,0,0)*D00_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0);

}

 void opensbliblock00Kernel016(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
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

void opensbliblock00Kernel012(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0,0) = sqrt((gama*p_B0(0,0,0)/rho_B0(0,0,0)));

}

void opensbliblock00Kernel026(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0,0) = (Minf*Minf)*gama*p_B0(0,0,0)/rho_B0(0,0,0);

}

void opensbliblock00Kernel031(const ACC<double> &T_B0, ACC<double> &mu_B0)
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
   AVG_0_rho = sqrt((rho_B0(0,0,0)*rho_B0(1,0,0)));

   AVG_0_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(1,0,0))));

   AVG_0_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u0_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u1_B0(1,0,0))*AVG_0_inv_rho;

   AVG_0_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(1,0,0))*u2_B0(1,0,0))*AVG_0_inv_rho;

    AVG_0_a = sqrt(((-(1.0/2.0)*((AVG_0_u0*AVG_0_u0) + (AVG_0_u1*AVG_0_u1) + (AVG_0_u2*AVG_0_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(1,0,0) +
      rhoE_B0(1,0,0))/sqrt(rho_B0(1,0,0)))*AVG_0_inv_rho)*gamma_m1));

   AVG_0_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(1,0,0));

   AVG_0_D01 = ((1.0/2.0))*(D01_B0(0,0,0) + D01_B0(1,0,0));

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0,0) + D00_B0(1,0,0));

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

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) +
      u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)), fabs(u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) +
      u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt(((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0))))*a_B0(1,0,0) +
      u0_B0(1,0,0)*D00_B0(1,0,0)*detJ_B0(1,0,0) + u1_B0(1,0,0)*D01_B0(1,0,0)*detJ_B0(1,0,0)),
      fabs(sqrt(((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt(((D00_B0(0,0,0)*D00_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))
      + (D01_B0(0,0,0)*D01_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D00_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D01_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(-sqrt(((D00_B0(1,0,0)*D00_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0)) +
      (D01_B0(1,0,0)*D01_B0(1,0,0))*(detJ_B0(1,0,0)*detJ_B0(1,0,0))))*a_B0(1,0,0) +
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
   AVG_1_rho = sqrt((rho_B0(0,0,0)*rho_B0(0,1,0)));

   AVG_1_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(0,1,0))));

   AVG_1_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u0_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u1_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(0,1,0))*u2_B0(0,1,0))*AVG_1_inv_rho;

    AVG_1_a = sqrt(((-(1.0/2.0)*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(0,1,0) +
      rhoE_B0(0,1,0))/sqrt(rho_B0(0,1,0)))*AVG_1_inv_rho)*gamma_m1));

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0,0) + D10_B0(0,1,0));

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0,0) + D11_B0(0,1,0));

   AVG_1_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(0,1,0));

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

    max_lambda_00 = shock_filter_control*fmax(fabs(u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) +
      u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)), fabs(u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) +
      u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(sqrt(((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(sqrt(((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0))))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)));

    max_lambda_44 = shock_filter_control*fmax(fabs(-sqrt(((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))
      + (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0))))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(-sqrt(((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0))))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)));

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
   AVG_2_rho = sqrt((rho_B0(0,0,0)*rho_B0(0,0,1)));

   AVG_2_inv_rho = 1.0/((sqrt(rho_B0(0,0,0)) + sqrt(rho_B0(0,0,1))));

   AVG_2_u0 = (sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u0_B0(0,0,1))*AVG_2_inv_rho;

   AVG_2_u1 = (sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u1_B0(0,0,1))*AVG_2_inv_rho;

   AVG_2_u2 = (sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + sqrt(rho_B0(0,0,1))*u2_B0(0,0,1))*AVG_2_inv_rho;

    AVG_2_a = sqrt(((-(1.0/2.0)*((AVG_2_u0*AVG_2_u0) + (AVG_2_u1*AVG_2_u1) + (AVG_2_u2*AVG_2_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/sqrt(rho_B0(0,0,0)) + (p_B0(0,0,1) +
      rhoE_B0(0,0,1))/sqrt(rho_B0(0,0,1)))*AVG_2_inv_rho)*gamma_m1));

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

   max_lambda_00 = shock_filter_control*fmax(fabs(u2_B0(0,0,0)*detJ_B0(0,0,0)), fabs(u2_B0(0,0,1)*detJ_B0(0,0,1)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control*fmax(fabs(a_B0(0,0,0)*detJ_B0(0,0,0) + u2_B0(0,0,0)*detJ_B0(0,0,0)),
      fabs(a_B0(0,0,1)*detJ_B0(0,0,1) + u2_B0(0,0,1)*detJ_B0(0,0,1)));

    max_lambda_44 = shock_filter_control*fmax(fabs(a_B0(0,0,1)*detJ_B0(0,0,1) - u2_B0(0,0,1)*detJ_B0(0,0,1)),
      fabs(a_B0(0,0,0)*detJ_B0(0,0,0) - u2_B0(0,0,0)*detJ_B0(0,0,0)));

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
