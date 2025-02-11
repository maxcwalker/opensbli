#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel066(ACC<double> &rhoE_B0, ACC<double> &rho_B0, ACC<double> &rhou0_B0, ACC<double> &rhou1_B0,
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

    rhou0 = ((x1_B0(0,0) < 3.47434743474347) ? (
   -9.41967207151553e-7 + 0.000613828400710496*pow(x1_B0(0,0), 16) +
      3.37722054657068*pow(x1_B0(0,0), 9) + 8.56002881776995e-18*pow(x1_B0(0,0), 41) +
      3.23932608424406e-7*pow(x1_B0(0,0), 22) + 1.94024691559566e-8*pow(x1_B0(0,0), 24) +
      1.04940578786992e-12*pow(x1_B0(0,0), 32) + 4.91129010741448*pow(x1_B0(0,0), 7) +
      1.24982177727222*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 5.56132977621397e-22*pow(x1_B0(0,0),
      48) + 0.000176987525519087*pow(x1_B0(0,0), 17) + 1.24222622336016e-7*pow(x1_B0(0,0), 23) +
      0.137515271370201*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 2.3555492777611e-22*pow(x1_B0(0,0), 50) +
      0.0357543185172109*pow(x1_B0(0,0), 11) + 5.37598576202624e-16*pow(x1_B0(0,0), 38) +
      1.76772429782625e-11*pow(x1_B0(0,0), 30) + 2.86638559964255e-16*pow(x1_B0(0,0), 39) +
      1.89469495194353e-11*pow(x1_B0(0,0), 29) + 1.76715088906924e-20*pow(x1_B0(0,0), 47) +
      7.78516249047705e-17*pow(x1_B0(0,0), 40) + 0.0952129739882658*pow(x1_B0(0,0), 12) +
      4.27794832987129e-20*pow(x1_B0(0,0), 46) + 5.89366906826062e-12*pow(x1_B0(0,0), 31) + 0.423487432074122*x1_B0(0,0)
      - 9.50677069522702e-15*pow(x1_B0(0,0), 36) -
      3.05403724529565*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      6.1354732571988e-6*pow(x1_B0(0,0), 18) - 1.62564132709003e-5*pow(x1_B0(0,0), 19) -
      0.000526665419777598*pow(x1_B0(0,0), 15) - 2.65168942457028e-9*pow(x1_B0(0,0), 26) -
      1.19128651698976e-10*pow(x1_B0(0,0), 28) - 0.00843666727267235*pow(x1_B0(0,0), 14) -
      2.00935744152354e-21*pow(x1_B0(0,0), 49) - 5.1654697631693*pow(x1_B0(0,0), 8) -
      5.69010318695979e-19*pow(x1_B0(0,0), 44) - 6.17393007973971e-16*pow(x1_B0(0,0), 37) -
      4.1822231440021e-14*pow(x1_B0(0,0), 35) - 0.00594411137351235*pow(x1_B0(0,0), 13) -
      8.29563232382128e-10*pow(x1_B0(0,0), 27) - 1.10429555878606e-7*pow(x1_B0(0,0), 21) -
      3.04089545826647e-20*pow(x1_B0(0,0), 45) - 1.15749221486844*pow(x1_B0(0,0), 10) -
      4.43734433122466e-6*pow(x1_B0(0,0), 20) - 2.10089699572831e-18*pow(x1_B0(0,0), 43) -
      3.79864274570734e-14*pow(x1_B0(0,0), 33) - 0.340808475086283*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      2.75186414593423e-9*pow(x1_B0(0,0), 25) - 1.03685516151979e-13*pow(x1_B0(0,0), 34) -
      3.20005903751066e-18*pow(x1_B0(0,0), 42) - 0.00379046822573778*(x1_B0(0,0)*x1_B0(0,0))
)
: (
  
      0.999999408078923
));

    rhou1 = ((x1_B0(0,0) < 3.47434743474347) ? (
   -3.82450180851277e-8 + 6.186794363468e-6*pow(x1_B0(0,0), 16) +
      1.25484845288117e-14*pow(x1_B0(0,0), 32) + 2.24954058629723e-6*pow(x1_B0(0,0), 17) +
      4.14968990285729e-6*x1_B0(0,0) + 0.00117421078362464*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) +
      0.00122012071977175*pow(x1_B0(0,0), 12) + 7.95670170515972e-14*pow(x1_B0(0,0), 29) +
      1.61679245607276e-13*pow(x1_B0(0,0), 30) + 3.31890292562878e-16*pow(x1_B0(0,0), 33) +
      0.024436212767697*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 7.69181334189621e-24*pow(x1_B0(0,0),
      48) + 2.1576554647756e-24*pow(x1_B0(0,0), 50) + 0.0824513961294015*pow(x1_B0(0,0), 7) +
      1.70508557930283e-22*pow(x1_B0(0,0), 47) + 1.06166392982356e-19*pow(x1_B0(0,0), 41) +
      6.20640928953035e-8*pow(x1_B0(0,0), 18) + 6.10502841760137e-14*pow(x1_B0(0,0), 31) +
      0.00108918117998653*(x1_B0(0,0)*x1_B0(0,0)) + 2.61425094167977e-10*pow(x1_B0(0,0), 24) +
      4.2441030519992e-18*pow(x1_B0(0,0), 38) + 1.35337138459532e-9*pow(x1_B0(0,0), 23) +
      0.0478146724255516*pow(x1_B0(0,0), 9) + 2.89302203645917e-9*pow(x1_B0(0,0), 22) +
      2.69802948259641e-18*pow(x1_B0(0,0), 39) + 3.81787677195739e-22*pow(x1_B0(0,0), 46) +
      7.95413538795197e-19*pow(x1_B0(0,0), 40) - 8.90831291175122e-16*pow(x1_B0(0,0), 34) -
      5.701951447644e-21*pow(x1_B0(0,0), 44) - 8.98719899571629e-12*pow(x1_B0(0,0), 27) -
      0.0798999852889223*pow(x1_B0(0,0), 8) - 1.89236971654899e-23*pow(x1_B0(0,0), 49) -
      1.95832488013046e-20*pow(x1_B0(0,0), 43) - 1.02493206120451e-17*pow(x1_B0(0,0), 37) -
      1.03415796927838e-11*pow(x1_B0(0,0), 25) - 1.58893176488887e-12*pow(x1_B0(0,0), 28) -
      0.0554884389398171*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      4.10569601727487e-16*pow(x1_B0(0,0), 35) - 0.0144728051769681*pow(x1_B0(0,0), 10) -
      4.2602950246167e-22*pow(x1_B0(0,0), 45) - 4.20732843390409e-9*pow(x1_B0(0,0), 21) -
      1.63186840482375e-7*pow(x1_B0(0,0), 19) - 0.000174695037124041*pow(x1_B0(0,0), 11) -
      1.13934957271094e-5*pow(x1_B0(0,0), 15) - 1.22892507043693e-5*pow(x1_B0(0,0), 13) -
      0.000100760511123402*pow(x1_B0(0,0), 14) - 0.00654597240521947*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) -
      2.49618557647004e-11*pow(x1_B0(0,0), 26) - 5.39312821816524e-8*pow(x1_B0(0,0), 20) -
      2.46383361869256e-20*pow(x1_B0(0,0), 42) - 1.03115993611505e-16*pow(x1_B0(0,0), 36)
)
: (
  
      0.00564964364741575
));

    T = ((x1_B0(0,0) < 3.47434743474347) ? (
   1.67619323517671 + 0.000546556514231602*pow(x1_B0(0,0), 14) +
      2.84082766458035e-14*pow(x1_B0(0,0), 33) + 9.62144378408451e-10*pow(x1_B0(0,0), 25) +
      0.0513779963692559*pow(x1_B0(0,0), 10) + 0.00248793100317704*pow(x1_B0(0,0), 13) +
      7.52115337522613e-20*pow(x1_B0(0,0), 44) + 6.59237386827232e-19*pow(x1_B0(0,0), 42) +
      8.91073005719208e-11*pow(x1_B0(0,0), 27) +
      0.274555059341105*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) + 1.01293721678769e-15*pow(x1_B0(0,0),
      36) + 5.85606755194866e-15*pow(x1_B0(0,0), 35) + 2.00313598822224e-22*pow(x1_B0(0,0), 45) +
      0.486109994170276*pow(x1_B0(0,0), 7) + 0.016295290641699*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) +
      2.68015550395405e-7*pow(x1_B0(0,0), 20) + 2.20028500618131e-6*pow(x1_B0(0,0), 19) + 7.47704449521701e-5*x1_B0(0,0)
      + 0.0387069194356651*pow(x1_B0(0,0), 9) + 1.86796743416999e-14*pow(x1_B0(0,0), 34) +
      5.26405704077908e-6*pow(x1_B0(0,0), 18) + 3.02359004140933e-22*pow(x1_B0(0,0), 49) +
      3.24393929242347e-19*pow(x1_B0(0,0), 43) + 2.76991168496541e-12*pow(x1_B0(0,0), 28) +
      4.12951994238752e-10*pow(x1_B0(0,0), 26) - 2.53606686749876e-21*pow(x1_B0(0,0), 47) -
      4.86363354044092e-19*pow(x1_B0(0,0), 41) - 0.284700199848964*pow(x1_B0(0,0), 8) -
      2.8876553711809e-12*pow(x1_B0(0,0), 30) - 4.86888191265591e-17*pow(x1_B0(0,0), 37) -
      7.11708893366916e-21*pow(x1_B0(0,0), 46) - 8.18097963380289e-5*pow(x1_B0(0,0), 16) -
      4.36436982884742e-17*pow(x1_B0(0,0), 39) - 9.40870600134967e-8*pow(x1_B0(0,0), 21) -
      1.30815868835258e-8*pow(x1_B0(0,0), 23) - 6.87033316645359e-6*pow(x1_B0(0,0), 17) -
      5.63174875122123e-8*pow(x1_B0(0,0), 22) - 1.08161915263698e-16*pow(x1_B0(0,0), 38) -
      7.07249669257882e-24*pow(x1_B0(0,0), 48) - 0.291761620917306*(x1_B0(0,0)*x1_B0(0,0)) -
      0.000150182995287043*pow(x1_B0(0,0), 15) - 7.36876583429846e-14*pow(x1_B0(0,0), 32) -
      3.19671297599922e-10*pow(x1_B0(0,0), 24) - 3.73061876952194e-23*pow(x1_B0(0,0), 50) -
      9.84138178764639e-18*pow(x1_B0(0,0), 40) - 0.0233427405115097*pow(x1_B0(0,0), 11) -
      7.2458403897293e-13*pow(x1_B0(0,0), 31) - 0.00313487325891606*pow(x1_B0(0,0), 12) -
      0.10530401015664*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)) - 6.23242767688354e-12*pow(x1_B0(0,0), 29) -
      0.4425160760866*(x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0)*x1_B0(0,0))
)
: (
   1.00000058834432
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

void opensbliblock00Kernel068(const ACC<double> &x1_B0, ACC<double> &wk1_B0, const int *idx)
{
    wk1_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel070(const ACC<double> &x0_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

 void opensbliblock00Kernel073(ACC<double> &D00_B0, ACC<double> &D01_B0, ACC<double> &D10_B0, ACC<double> &D11_B0,
ACC<double> &detJ_B0, ACC<double> &wk0_B0, ACC<double> &wk1_B0, ACC<double> &wk2_B0, ACC<double> &wk3_B0)
{
   wk0_B0(0,0) = wk2_B0(0,0);

   wk1_B0(0,0) = wk3_B0(0,0);

   wk2_B0(0,0) = wk1_B0(0,0);

   wk3_B0(0,0) = wk0_B0(0,0);

   detJ_B0(0,0) = wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0);

   D00_B0(0,0) = wk0_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

   D01_B0(0,0) = -wk3_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

   D10_B0(0,0) = -wk1_B0(0,0)/(wk0_B0(0,0)*wk2_B0(0,0) - wk1_B0(0,0)*wk3_B0(0,0));

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

void opensbliblock00Kernel078(const ACC<double> &D10_B0, ACC<double> &wk0_B0, const int *idx)
{
    wk0_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel080(const ACC<double> &D00_B0, ACC<double> &wk2_B0, const int *idx)
{
    wk2_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel081(const ACC<double> &D01_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel082(const ACC<double> &D11_B0, ACC<double> &wk4_B0, const int *idx)
{
    wk4_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel084(const ACC<double> &D01_B0, ACC<double> &wk6_B0, const int *idx)
{
    wk6_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel085(const ACC<double> &D00_B0, ACC<double> &wk7_B0, const int *idx)
{
    wk7_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

 void opensbliblock00Kernel090(const ACC<double> &wk0_B0, const ACC<double> &wk1_B0, const ACC<double> &wk2_B0, const
ACC<double> &wk3_B0, const ACC<double> &wk4_B0, const ACC<double> &wk5_B0, const ACC<double> &wk6_B0, const ACC<double>
&wk7_B0, ACC<double> &SD000_B0, ACC<double> &SD001_B0, ACC<double> &SD010_B0, ACC<double> &SD011_B0, ACC<double>
&SD100_B0, ACC<double> &SD101_B0, ACC<double> &SD110_B0, ACC<double> &SD111_B0)
{
   SD000_B0(0,0) = wk7_B0(0,0);

   SD001_B0(0,0) = wk2_B0(0,0);

   SD010_B0(0,0) = wk6_B0(0,0);

   SD011_B0(0,0) = wk3_B0(0,0);

   SD100_B0(0,0) = wk0_B0(0,0);

   SD101_B0(0,0) = wk1_B0(0,0);

   SD110_B0(0,0) = wk4_B0(0,0);

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

void opensbliblock00Kernel003(const ACC<double> &rho_B0, const ACC<double> &rhou1_B0, ACC<double> &u1_B0)
{
   u1_B0(0,0) = rhou1_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel010(const ACC<double> &rho_B0, const ACC<double> &rhou0_B0, ACC<double> &u0_B0)
{
   u0_B0(0,0) = rhou0_B0(0,0)/rho_B0(0,0);

}

 void opensbliblock00Kernel005(const ACC<double> &rhoE_B0, const ACC<double> &rho_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &p_B0)
{
    p_B0(0,0) = (-1 + gama)*(-(1.0/2.0)*(u0_B0(0,0)*u0_B0(0,0))*rho_B0(0,0) -
      (1.0/2.0)*(u1_B0(0,0)*u1_B0(0,0))*rho_B0(0,0) + rhoE_B0(0,0));

}

 void opensbliblock00Kernel006(const ACC<double> &D00_B0, const ACC<double> &D01_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U0_B0)
{
   U0_B0(0,0) = u0_B0(0,0)*D00_B0(0,0) + u1_B0(0,0)*D01_B0(0,0);

}

 void opensbliblock00Kernel015(const ACC<double> &D10_B0, const ACC<double> &D11_B0, const ACC<double> &u0_B0, const
ACC<double> &u1_B0, ACC<double> &U1_B0)
{
   U1_B0(0,0) = u0_B0(0,0)*D10_B0(0,0) + u1_B0(0,0)*D11_B0(0,0);

}

void opensbliblock00Kernel012(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &a_B0)
{
   a_B0(0,0) = sqrt(gama*p_B0(0,0)/rho_B0(0,0));

}

void opensbliblock00Kernel020(const ACC<double> &p_B0, const ACC<double> &rho_B0, ACC<double> &T_B0)
{
   T_B0(0,0) = (Minf*Minf)*gama*p_B0(0,0)/rho_B0(0,0);

}

void opensbliblock00Kernel018(const ACC<double> &T_B0, ACC<double> &mu_B0)
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
   AVG_0_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(1,0));

   AVG_0_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(1,0));

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(1,0));

   AVG_0_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(1,0));

   AVG_0_D01 = ((1.0/2.0))*(D01_B0(0,0) + D01_B0(1,0));

   AVG_0_detJ = ((1.0/2.0))*(detJ_B0(0,0) + detJ_B0(1,0));

   AVG_0_D00 = ((1.0/2.0))*(D00_B0(0,0) + D00_B0(1,0));

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

    max_lambda_22 = shock_filter_control*fmax(fabs(sqrt((D00_B0(1,0)*D00_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)) +
      (D01_B0(1,0)*D01_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)))*a_B0(1,0) + u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)), fabs(sqrt((D00_B0(0,0)*D00_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D01_B0(0,0)*D01_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)));

    max_lambda_33 = shock_filter_control*fmax(fabs(-sqrt((D00_B0(1,0)*D00_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)) +
      (D01_B0(1,0)*D01_B0(1,0))*(detJ_B0(1,0)*detJ_B0(1,0)))*a_B0(1,0) + u0_B0(1,0)*D00_B0(1,0)*detJ_B0(1,0) +
      u1_B0(1,0)*D01_B0(1,0)*detJ_B0(1,0)), fabs(-sqrt((D00_B0(0,0)*D00_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)) +
      (D01_B0(0,0)*D01_B0(0,0))*(detJ_B0(0,0)*detJ_B0(0,0)))*a_B0(0,0) + u0_B0(0,0)*D00_B0(0,0)*detJ_B0(0,0) +
      u1_B0(0,0)*D01_B0(0,0)*detJ_B0(0,0)));

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
   AVG_1_u1 = ((1.0/2.0))*(u1_B0(0,0) + u1_B0(0,1));

   AVG_1_rho = ((1.0/2.0))*(rho_B0(0,0) + rho_B0(0,1));

   AVG_1_u0 = ((1.0/2.0))*(u0_B0(0,0) + u0_B0(0,1));

   AVG_1_a = ((1.0/2.0))*(a_B0(0,0) + a_B0(0,1));

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0) + D10_B0(0,1));

   AVG_1_detJ = ((1.0/2.0))*(detJ_B0(0,0) + detJ_B0(0,1));

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0) + D11_B0(0,1));

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

void opensbliblock00Kernel028(const ACC<double> &u1_B0, ACC<double> &wk0_B0, const int *idx)
{
    wk0_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel029(const ACC<double> &u0_B0, ACC<double> &wk1_B0, const int *idx)
{
    wk1_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel031(const ACC<double> &T_B0, ACC<double> &wk3_B0, const int *idx)
{
    wk3_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel032(const ACC<double> &u1_B0, ACC<double> &wk4_B0, const int *idx)
{
    wk4_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel033(const ACC<double> &u0_B0, ACC<double> &wk5_B0, const int *idx)
{
    wk5_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel036(const ACC<double> &mu_B0, ACC<double> &wk8_B0, const int *idx)
{
    wk8_B0(0,0) = invDelta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel037(const ACC<double> &u1_B0, ACC<double> &wk9_B0, const int *idx)
{
    wk9_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel038(const ACC<double> &T_B0, ACC<double> &wk10_B0, const int *idx)
{
    wk10_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel039(const ACC<double> &T_B0, ACC<double> &wk11_B0, const int *idx)
{
    wk11_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel040(const ACC<double> &T_B0, ACC<double> &wk12_B0, const int *idx)
{
    wk12_B0(0,0) = inv2Delta0block0*((idx[0] == 0) ? (
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

void opensbliblock00Kernel041(const ACC<double> &mu_B0, ACC<double> &wk13_B0, const int *idx)
{
    wk13_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel042(const ACC<double> &u1_B0, ACC<double> &wk14_B0, const int *idx)
{
    wk14_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel043(const ACC<double> &u0_B0, ACC<double> &wk15_B0, const int *idx)
{
    wk15_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel044(const ACC<double> &u0_B0, ACC<double> &wk16_B0, const int *idx)
{
    wk16_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
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

void opensbliblock00Kernel030(const ACC<double> &wk5_B0, ACC<double> &wk2_B0, const int *idx)
{
    wk2_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk5_B0(0,2) + 4*wk5_B0(0,1) - (25.0/12.0)*wk5_B0(0,0) -
      (1.0/4.0)*wk5_B0(0,4) + ((4.0/3.0))*wk5_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk5_B0(0,0) -
      (1.0/2.0)*wk5_B0(0,2) - (1.0/4.0)*wk5_B0(0,-1) + ((1.0/12.0))*wk5_B0(0,3) + ((3.0/2.0))*wk5_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk5_B0(0,-1) - (1.0/12.0)*wk5_B0(0,2) + ((1.0/12.0))*wk5_B0(0,-2) + ((2.0/3.0))*wk5_B0(0,1)
)));

}

void opensbliblock00Kernel034(const ACC<double> &wk0_B0, ACC<double> &wk6_B0, const int *idx)
{
    wk6_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk0_B0(0,2) + 4*wk0_B0(0,1) - (25.0/12.0)*wk0_B0(0,0) -
      (1.0/4.0)*wk0_B0(0,4) + ((4.0/3.0))*wk0_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk0_B0(0,0) -
      (1.0/2.0)*wk0_B0(0,2) - (1.0/4.0)*wk0_B0(0,-1) + ((1.0/12.0))*wk0_B0(0,3) + ((3.0/2.0))*wk0_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk0_B0(0,-1) - (1.0/12.0)*wk0_B0(0,2) + ((1.0/12.0))*wk0_B0(0,-2) + ((2.0/3.0))*wk0_B0(0,1)
)));

}

void opensbliblock00Kernel035(const ACC<double> &wk3_B0, ACC<double> &wk7_B0, const int *idx)
{
    wk7_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   -3*wk3_B0(0,2) + 4*wk3_B0(0,1) - (25.0/12.0)*wk3_B0(0,0) -
      (1.0/4.0)*wk3_B0(0,4) + ((4.0/3.0))*wk3_B0(0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*wk3_B0(0,0) -
      (1.0/2.0)*wk3_B0(0,2) - (1.0/4.0)*wk3_B0(0,-1) + ((1.0/12.0))*wk3_B0(0,3) + ((3.0/2.0))*wk3_B0(0,1)
)
: (
  
      -(2.0/3.0)*wk3_B0(0,-1) - (1.0/12.0)*wk3_B0(0,2) + ((1.0/12.0))*wk3_B0(0,-2) + ((2.0/3.0))*wk3_B0(0,1)
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
    Residual1_B0(0,0) = (D00_B0(0,0)*wk8_B0(0,0) + D10_B0(0,0)*wk13_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk0_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk4_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk5_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk15_B0(0,0))*invRe + (D01_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk13_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) + D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0))*invRe + ((D01_B0(0,0)*D01_B0(0,0))*wk1_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk16_B0(0,0)
      + ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk1_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk16_B0(0,0) +
      D01_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) + D01_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) +
      D01_B0(0,0)*wk5_B0(0,0)*SD010_B0(0,0) + D01_B0(0,0)*wk15_B0(0,0)*SD110_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) + D11_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) +
      D11_B0(0,0)*wk5_B0(0,0)*SD011_B0(0,0) + D11_B0(0,0)*wk15_B0(0,0)*SD111_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk2_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk9_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk6_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk6_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk14_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk5_B0(0,0)*SD000_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk15_B0(0,0)*SD100_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk5_B0(0,0)*SD001_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk15_B0(0,0)*SD101_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk2_B0(0,0))*invRe*mu_B0(0,0) + Residual1_B0(0,0);

    Residual2_B0(0,0) = (D00_B0(0,0)*wk8_B0(0,0) + D10_B0(0,0)*wk13_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) +
      D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk15_B0(0,0))*invRe + (D01_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk13_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk5_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk15_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk0_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk4_B0(0,0))*invRe +
      ((D00_B0(0,0)*D00_B0(0,0))*wk9_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk14_B0(0,0) +
      ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk9_B0(0,0) + ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk14_B0(0,0) +
      D00_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) + D00_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) +
      D00_B0(0,0)*wk5_B0(0,0)*SD010_B0(0,0) + D00_B0(0,0)*wk15_B0(0,0)*SD110_B0(0,0) +
      D10_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) +
      D10_B0(0,0)*wk5_B0(0,0)*SD011_B0(0,0) + D10_B0(0,0)*wk15_B0(0,0)*SD111_B0(0,0) +
      2*D00_B0(0,0)*D10_B0(0,0)*wk6_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk5_B0(0,0)*SD000_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk15_B0(0,0)*SD100_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk5_B0(0,0)*SD001_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk15_B0(0,0)*SD101_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk1_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk2_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk2_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk16_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk6_B0(0,0))*invRe*mu_B0(0,0) + Residual2_B0(0,0);

    Residual3_B0(0,0) = (D00_B0(0,0)*wk0_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) +
      D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk15_B0(0,0))*invRe*mu_B0(0,0) +
      (D00_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk15_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk0_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk4_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk5_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk15_B0(0,0))*invRe*mu_B0(0,0) + (D00_B0(0,0)*wk8_B0(0,0) +
      D10_B0(0,0)*wk13_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) + D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0))*invRe*u1_B0(0,0) + (D00_B0(0,0)*wk8_B0(0,0) +
      D10_B0(0,0)*wk13_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk0_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk4_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk5_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk15_B0(0,0))*invRe*u0_B0(0,0) +
      (D01_B0(0,0)*wk0_B0(0,0) + D11_B0(0,0)*wk4_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk5_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk15_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk0_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk4_B0(0,0))*invRe*mu_B0(0,0) + (D01_B0(0,0)*wk5_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) + D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0))*invRe*mu_B0(0,0) + (D01_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk13_B0(0,0))*(D00_B0(0,0)*wk0_B0(0,0) + D01_B0(0,0)*wk5_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0))*invRe*u0_B0(0,0) + (D01_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk13_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk5_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk15_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk0_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk4_B0(0,0))*invRe*u1_B0(0,0) +
      ((D00_B0(0,0)*D00_B0(0,0))*wk9_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk14_B0(0,0) +
      ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk9_B0(0,0) + ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk14_B0(0,0) +
      D00_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) + D00_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) +
      D00_B0(0,0)*wk5_B0(0,0)*SD010_B0(0,0) + D00_B0(0,0)*wk15_B0(0,0)*SD110_B0(0,0) +
      D10_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) + D10_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) +
      D10_B0(0,0)*wk5_B0(0,0)*SD011_B0(0,0) + D10_B0(0,0)*wk15_B0(0,0)*SD111_B0(0,0) +
      2*D00_B0(0,0)*D10_B0(0,0)*wk6_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk5_B0(0,0)*SD000_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk15_B0(0,0)*SD100_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk5_B0(0,0)*SD001_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk15_B0(0,0)*SD101_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk1_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk2_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk2_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk16_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk6_B0(0,0))*invRe*mu_B0(0,0)*u1_B0(0,0) +
      ((D01_B0(0,0)*D01_B0(0,0))*wk1_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk16_B0(0,0) +
      ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk1_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk16_B0(0,0) +
      D01_B0(0,0)*wk0_B0(0,0)*SD000_B0(0,0) + D01_B0(0,0)*wk4_B0(0,0)*SD100_B0(0,0) +
      D01_B0(0,0)*wk5_B0(0,0)*SD010_B0(0,0) + D01_B0(0,0)*wk15_B0(0,0)*SD110_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0)*SD001_B0(0,0) + D11_B0(0,0)*wk4_B0(0,0)*SD101_B0(0,0) +
      D11_B0(0,0)*wk5_B0(0,0)*SD011_B0(0,0) + D11_B0(0,0)*wk15_B0(0,0)*SD111_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk2_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk0_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk4_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk0_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk4_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk9_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk6_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk6_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk14_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk5_B0(0,0)*SD000_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk15_B0(0,0)*SD100_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk5_B0(0,0)*SD001_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk15_B0(0,0)*SD101_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk2_B0(0,0))*invRe*mu_B0(0,0)*u0_B0(0,0) + (D00_B0(0,0)*wk3_B0(0,0) +
      D10_B0(0,0)*wk10_B0(0,0))*(D00_B0(0,0)*wk8_B0(0,0) + D10_B0(0,0)*wk13_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1 +
      (D01_B0(0,0)*wk3_B0(0,0) + D11_B0(0,0)*wk10_B0(0,0))*(D01_B0(0,0)*wk8_B0(0,0) +
      D11_B0(0,0)*wk13_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1 + ((D00_B0(0,0)*D00_B0(0,0))*wk12_B0(0,0) +
      (D01_B0(0,0)*D01_B0(0,0))*wk12_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk11_B0(0,0) +
      (D11_B0(0,0)*D11_B0(0,0))*wk11_B0(0,0) + D00_B0(0,0)*wk3_B0(0,0)*SD000_B0(0,0) +
      D00_B0(0,0)*wk10_B0(0,0)*SD100_B0(0,0) + D01_B0(0,0)*wk3_B0(0,0)*SD010_B0(0,0) +
      D01_B0(0,0)*wk10_B0(0,0)*SD110_B0(0,0) + D10_B0(0,0)*wk3_B0(0,0)*SD001_B0(0,0) +
      D10_B0(0,0)*wk10_B0(0,0)*SD101_B0(0,0) + D11_B0(0,0)*wk3_B0(0,0)*SD011_B0(0,0) +
      D11_B0(0,0)*wk10_B0(0,0)*SD111_B0(0,0) + 2*D00_B0(0,0)*D10_B0(0,0)*wk7_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk7_B0(0,0))*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0) + Residual3_B0(0,0);

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
