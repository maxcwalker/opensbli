#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel040(double *rhou0_B0, double *rho_B0, double *rhoE_B0, double *rhou1_B0, double *x0_B0,
double *x1_B0, const int *idx)
{
   double rhou1 = 0.0;
   double rhou0 = 0.0;
   double rho = 0.0;
   double T = 0.0;
   x0_B0[OPS_ACC4(0,0)] = Delta0block0*idx[0];

   x1_B0[OPS_ACC5(0,0)] = Lx1*sinh(Delta1block0*by*rcinv4*idx[1])/sinh(by);

    rhou0 = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   2.3555492777611e-22*pow(x1_B0[OPS_ACC5(0,0)], 50) -
      2.00935744152354e-21*pow(x1_B0[OPS_ACC5(0,0)], 49) + 5.56132977621397e-22*pow(x1_B0[OPS_ACC5(0,0)], 48) +
      1.76715088906924e-20*pow(x1_B0[OPS_ACC5(0,0)], 47) + 4.27794832987129e-20*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      3.04089545826647e-20*pow(x1_B0[OPS_ACC5(0,0)], 45) - 5.69010318695979e-19*pow(x1_B0[OPS_ACC5(0,0)], 44) -
      2.10089699572831e-18*pow(x1_B0[OPS_ACC5(0,0)], 43) - 3.20005903751066e-18*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      8.56002881776995e-18*pow(x1_B0[OPS_ACC5(0,0)], 41) + 7.78516249047705e-17*pow(x1_B0[OPS_ACC5(0,0)], 40) +
      2.86638559964255e-16*pow(x1_B0[OPS_ACC5(0,0)], 39) + 5.37598576202624e-16*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      6.17393007973971e-16*pow(x1_B0[OPS_ACC5(0,0)], 37) - 9.50677069522702e-15*pow(x1_B0[OPS_ACC5(0,0)], 36) -
      4.1822231440021e-14*pow(x1_B0[OPS_ACC5(0,0)], 35) - 1.03685516151979e-13*pow(x1_B0[OPS_ACC5(0,0)], 34) -
      3.79864274570734e-14*pow(x1_B0[OPS_ACC5(0,0)], 33) + 1.04940578786992e-12*pow(x1_B0[OPS_ACC5(0,0)], 32) +
      5.89366906826062e-12*pow(x1_B0[OPS_ACC5(0,0)], 31) + 1.76772429782625e-11*pow(x1_B0[OPS_ACC5(0,0)], 30) +
      1.89469495194353e-11*pow(x1_B0[OPS_ACC5(0,0)], 29) - 1.19128651698976e-10*pow(x1_B0[OPS_ACC5(0,0)], 28) -
      8.29563232382128e-10*pow(x1_B0[OPS_ACC5(0,0)], 27) - 2.65168942457028e-9*pow(x1_B0[OPS_ACC5(0,0)], 26) -
      2.75186414593423e-9*pow(x1_B0[OPS_ACC5(0,0)], 25) + 1.94024691559566e-8*pow(x1_B0[OPS_ACC5(0,0)], 24) +
      1.24222622336016e-7*pow(x1_B0[OPS_ACC5(0,0)], 23) + 3.23932608424406e-7*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      1.10429555878606e-7*pow(x1_B0[OPS_ACC5(0,0)], 21) - 4.43734433122466e-6*pow(x1_B0[OPS_ACC5(0,0)], 20) -
      1.62564132709003e-5*pow(x1_B0[OPS_ACC5(0,0)], 19) - 6.1354732571988e-6*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      0.000176987525519087*pow(x1_B0[OPS_ACC5(0,0)], 17) + 0.000613828400710496*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      0.000526665419777598*pow(x1_B0[OPS_ACC5(0,0)], 15) - 0.00843666727267235*pow(x1_B0[OPS_ACC5(0,0)], 14) -
      0.00594411137351235*pow(x1_B0[OPS_ACC5(0,0)], 13) + 0.0952129739882658*pow(x1_B0[OPS_ACC5(0,0)], 12) +
      0.0357543185172109*pow(x1_B0[OPS_ACC5(0,0)], 11) - 1.15749221486844*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      3.37722054657068*pow(x1_B0[OPS_ACC5(0,0)], 9) - 5.1654697631693*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      4.91129010741448*pow(x1_B0[OPS_ACC5(0,0)], 7) - 3.05403724529565*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      1.24982177727222*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.340808475086283*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.137515271370201*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.00379046822573778*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      0.423487432074122*x1_B0[OPS_ACC5(0,0)] - 9.41967207151553e-7
)
: (
   0.999999408078923
));

    rhou1 = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   2.1576554647756e-24*pow(x1_B0[OPS_ACC5(0,0)], 50) -
      1.89236971654899e-23*pow(x1_B0[OPS_ACC5(0,0)], 49) + 7.69181334189621e-24*pow(x1_B0[OPS_ACC5(0,0)], 48) +
      1.70508557930283e-22*pow(x1_B0[OPS_ACC5(0,0)], 47) + 3.81787677195739e-22*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      4.2602950246167e-22*pow(x1_B0[OPS_ACC5(0,0)], 45) - 5.701951447644e-21*pow(x1_B0[OPS_ACC5(0,0)], 44) -
      1.95832488013046e-20*pow(x1_B0[OPS_ACC5(0,0)], 43) - 2.46383361869256e-20*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      1.06166392982356e-19*pow(x1_B0[OPS_ACC5(0,0)], 41) + 7.95413538795197e-19*pow(x1_B0[OPS_ACC5(0,0)], 40) +
      2.69802948259641e-18*pow(x1_B0[OPS_ACC5(0,0)], 39) + 4.2441030519992e-18*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      1.02493206120451e-17*pow(x1_B0[OPS_ACC5(0,0)], 37) - 1.03115993611505e-16*pow(x1_B0[OPS_ACC5(0,0)], 36) -
      4.10569601727487e-16*pow(x1_B0[OPS_ACC5(0,0)], 35) - 8.90831291175122e-16*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      3.31890292562878e-16*pow(x1_B0[OPS_ACC5(0,0)], 33) + 1.25484845288117e-14*pow(x1_B0[OPS_ACC5(0,0)], 32) +
      6.10502841760137e-14*pow(x1_B0[OPS_ACC5(0,0)], 31) + 1.61679245607276e-13*pow(x1_B0[OPS_ACC5(0,0)], 30) +
      7.95670170515972e-14*pow(x1_B0[OPS_ACC5(0,0)], 29) - 1.58893176488887e-12*pow(x1_B0[OPS_ACC5(0,0)], 28) -
      8.98719899571629e-12*pow(x1_B0[OPS_ACC5(0,0)], 27) - 2.49618557647004e-11*pow(x1_B0[OPS_ACC5(0,0)], 26) -
      1.03415796927838e-11*pow(x1_B0[OPS_ACC5(0,0)], 25) + 2.61425094167977e-10*pow(x1_B0[OPS_ACC5(0,0)], 24) +
      1.35337138459532e-9*pow(x1_B0[OPS_ACC5(0,0)], 23) + 2.89302203645917e-9*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      4.20732843390409e-9*pow(x1_B0[OPS_ACC5(0,0)], 21) - 5.39312821816524e-8*pow(x1_B0[OPS_ACC5(0,0)], 20) -
      1.63186840482375e-7*pow(x1_B0[OPS_ACC5(0,0)], 19) + 6.20640928953035e-8*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      2.24954058629723e-6*pow(x1_B0[OPS_ACC5(0,0)], 17) + 6.186794363468e-6*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      1.13934957271094e-5*pow(x1_B0[OPS_ACC5(0,0)], 15) - 0.000100760511123402*pow(x1_B0[OPS_ACC5(0,0)], 14) -
      1.22892507043693e-5*pow(x1_B0[OPS_ACC5(0,0)], 13) + 0.00122012071977175*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      0.000174695037124041*pow(x1_B0[OPS_ACC5(0,0)], 11) - 0.0144728051769681*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      0.0478146724255516*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.0798999852889223*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.0824513961294015*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.0554884389398171*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.024436212767697*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.00654597240521947*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.00117421078362464*pow(x1_B0[OPS_ACC5(0,0)], 3) + 0.00108918117998653*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      4.14968990285729e-6*x1_B0[OPS_ACC5(0,0)] - 3.82450180851277e-8
)
: (
   0.00564964364741575
));

    T = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   -3.73061876952194e-23*pow(x1_B0[OPS_ACC5(0,0)], 50) +
      3.02359004140933e-22*pow(x1_B0[OPS_ACC5(0,0)], 49) - 7.07249669257882e-24*pow(x1_B0[OPS_ACC5(0,0)], 48) -
      2.53606686749876e-21*pow(x1_B0[OPS_ACC5(0,0)], 47) - 7.11708893366916e-21*pow(x1_B0[OPS_ACC5(0,0)], 46) +
      2.00313598822224e-22*pow(x1_B0[OPS_ACC5(0,0)], 45) + 7.52115337522613e-20*pow(x1_B0[OPS_ACC5(0,0)], 44) +
      3.24393929242347e-19*pow(x1_B0[OPS_ACC5(0,0)], 43) + 6.59237386827232e-19*pow(x1_B0[OPS_ACC5(0,0)], 42) -
      4.86363354044092e-19*pow(x1_B0[OPS_ACC5(0,0)], 41) - 9.84138178764639e-18*pow(x1_B0[OPS_ACC5(0,0)], 40) -
      4.36436982884742e-17*pow(x1_B0[OPS_ACC5(0,0)], 39) - 1.08161915263698e-16*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      4.86888191265591e-17*pow(x1_B0[OPS_ACC5(0,0)], 37) + 1.01293721678769e-15*pow(x1_B0[OPS_ACC5(0,0)], 36) +
      5.85606755194866e-15*pow(x1_B0[OPS_ACC5(0,0)], 35) + 1.86796743416999e-14*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      2.84082766458035e-14*pow(x1_B0[OPS_ACC5(0,0)], 33) - 7.36876583429846e-14*pow(x1_B0[OPS_ACC5(0,0)], 32) -
      7.2458403897293e-13*pow(x1_B0[OPS_ACC5(0,0)], 31) - 2.8876553711809e-12*pow(x1_B0[OPS_ACC5(0,0)], 30) -
      6.23242767688354e-12*pow(x1_B0[OPS_ACC5(0,0)], 29) + 2.76991168496541e-12*pow(x1_B0[OPS_ACC5(0,0)], 28) +
      8.91073005719208e-11*pow(x1_B0[OPS_ACC5(0,0)], 27) + 4.12951994238752e-10*pow(x1_B0[OPS_ACC5(0,0)], 26) +
      9.62144378408451e-10*pow(x1_B0[OPS_ACC5(0,0)], 25) - 3.19671297599922e-10*pow(x1_B0[OPS_ACC5(0,0)], 24) -
      1.30815868835258e-8*pow(x1_B0[OPS_ACC5(0,0)], 23) - 5.63174875122123e-8*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      9.40870600134967e-8*pow(x1_B0[OPS_ACC5(0,0)], 21) + 2.68015550395405e-7*pow(x1_B0[OPS_ACC5(0,0)], 20) +
      2.20028500618131e-6*pow(x1_B0[OPS_ACC5(0,0)], 19) + 5.26405704077908e-6*pow(x1_B0[OPS_ACC5(0,0)], 18) -
      6.87033316645359e-6*pow(x1_B0[OPS_ACC5(0,0)], 17) - 8.18097963380289e-5*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      0.000150182995287043*pow(x1_B0[OPS_ACC5(0,0)], 15) + 0.000546556514231602*pow(x1_B0[OPS_ACC5(0,0)], 14) +
      0.00248793100317704*pow(x1_B0[OPS_ACC5(0,0)], 13) - 0.00313487325891606*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      0.0233427405115097*pow(x1_B0[OPS_ACC5(0,0)], 11) + 0.0513779963692559*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      0.0387069194356651*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.284700199848964*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.486109994170276*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.4425160760866*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.274555059341105*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.10530401015664*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.016295290641699*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.291761620917306*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      7.47704449521701e-5*x1_B0[OPS_ACC5(0,0)] + 1.67619323517671
)
: (
   1.00000058834432
));

   rho = 1.0/T;

   rho_B0[OPS_ACC1(0,0)] = rho;

   rhou0_B0[OPS_ACC0(0,0)] = rhou0;

   rhou1_B0[OPS_ACC3(0,0)] = rhou1;

   rhoE_B0[OPS_ACC2(0,0)] = rcinv5*rcinv6*rcinv7*T*rho + (0.5*pow(rhou0, 2) + 0.5*pow(rhou1, 2))/rho;

}

void opensbliblock00Kernel042(const double *x1_B0, double *D11_B0, double *detJ_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-3*x1_B0[OPS_ACC0(0,2)] + 4*x1_B0[OPS_ACC0(0,1)] -
      rc8*x1_B0[OPS_ACC0(0,4)] - rc9*x1_B0[OPS_ACC0(0,0)] + (rc10)*x1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-6*x1_B0[OPS_ACC0(0,2)] + 18*x1_B0[OPS_ACC0(0,1)] - 10*x1_B0[OPS_ACC0(0,0)] -
      3*x1_B0[OPS_ACC0(0,-1)] + x1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc8)*x1_B0[OPS_ACC0(0,-4)] + (rc9)*x1_B0[OPS_ACC0(0,0)] + 3*x1_B0[OPS_ACC0(0,-2)] -
      4*x1_B0[OPS_ACC0(0,-1)] - rc10*x1_B0[OPS_ACC0(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(3*x1_B0[OPS_ACC0(0,1)] + 10*x1_B0[OPS_ACC0(0,0)] + 6*x1_B0[OPS_ACC0(0,-2)] -
      18*x1_B0[OPS_ACC0(0,-1)] - x1_B0[OPS_ACC0(0,-3)])
)
: (
   (rc11)*inv_0*(-x1_B0[OPS_ACC0(0,2)] +
      8*x1_B0[OPS_ACC0(0,1)] + x1_B0[OPS_ACC0(0,-2)] - 8*x1_B0[OPS_ACC0(0,-1)])
)))));

   detJ_B0[OPS_ACC2(0,0)] = localeval_0;

   D11_B0[OPS_ACC1(0,0)] = 1.0/localeval_0;

}

void opensbliblock00Kernel043(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(-1,0)] = D11_B0[OPS_ACC0(1,0)];

   detJ_B0[OPS_ACC1(-1,0)] = detJ_B0[OPS_ACC1(1,0)];

   D11_B0[OPS_ACC0(-2,0)] = D11_B0[OPS_ACC0(2,0)];

   detJ_B0[OPS_ACC1(-2,0)] = detJ_B0[OPS_ACC1(2,0)];

   D11_B0[OPS_ACC0(-3,0)] = D11_B0[OPS_ACC0(3,0)];

   detJ_B0[OPS_ACC1(-3,0)] = detJ_B0[OPS_ACC1(3,0)];

}

void opensbliblock00Kernel044(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(1,0)] = D11_B0[OPS_ACC0(-1,0)];

   detJ_B0[OPS_ACC1(1,0)] = detJ_B0[OPS_ACC1(-1,0)];

   D11_B0[OPS_ACC0(2,0)] = D11_B0[OPS_ACC0(-2,0)];

   detJ_B0[OPS_ACC1(2,0)] = detJ_B0[OPS_ACC1(-2,0)];

   D11_B0[OPS_ACC0(3,0)] = D11_B0[OPS_ACC0(-3,0)];

   detJ_B0[OPS_ACC1(3,0)] = detJ_B0[OPS_ACC1(-3,0)];

   D11_B0[OPS_ACC0(4,0)] = D11_B0[OPS_ACC0(-4,0)];

   detJ_B0[OPS_ACC1(4,0)] = detJ_B0[OPS_ACC1(-4,0)];

}

void opensbliblock00Kernel045(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,-1)] = D11_B0[OPS_ACC0(0,1)];

   detJ_B0[OPS_ACC1(0,-1)] = detJ_B0[OPS_ACC1(0,1)];

   D11_B0[OPS_ACC0(0,-2)] = D11_B0[OPS_ACC0(0,2)];

   detJ_B0[OPS_ACC1(0,-2)] = detJ_B0[OPS_ACC1(0,2)];

   D11_B0[OPS_ACC0(0,-3)] = D11_B0[OPS_ACC0(0,3)];

   detJ_B0[OPS_ACC1(0,-3)] = detJ_B0[OPS_ACC1(0,3)];

}

void opensbliblock00Kernel046(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,1)] = D11_B0[OPS_ACC0(0,-1)];

   detJ_B0[OPS_ACC1(0,1)] = detJ_B0[OPS_ACC1(0,-1)];

   D11_B0[OPS_ACC0(0,2)] = D11_B0[OPS_ACC0(0,-2)];

   detJ_B0[OPS_ACC1(0,2)] = detJ_B0[OPS_ACC1(0,-2)];

   D11_B0[OPS_ACC0(0,3)] = D11_B0[OPS_ACC0(0,-3)];

   detJ_B0[OPS_ACC1(0,3)] = detJ_B0[OPS_ACC1(0,-3)];

   D11_B0[OPS_ACC0(0,4)] = D11_B0[OPS_ACC0(0,-4)];

   detJ_B0[OPS_ACC1(0,4)] = detJ_B0[OPS_ACC1(0,-4)];

}

void opensbliblock00Kernel048(const double *D11_B0, double *SD111_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-3*D11_B0[OPS_ACC0(0,2)] + (rc10)*D11_B0[OPS_ACC0(0,3)] -
      rc8*D11_B0[OPS_ACC0(0,4)] - rc9*D11_B0[OPS_ACC0(0,0)] + 4*D11_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-6*D11_B0[OPS_ACC0(0,2)] - 3*D11_B0[OPS_ACC0(0,-1)] + D11_B0[OPS_ACC0(0,3)] -
      10*D11_B0[OPS_ACC0(0,0)] + 18*D11_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(-4*D11_B0[OPS_ACC0(0,-1)] + 3*D11_B0[OPS_ACC0(0,-2)] + (rc9)*D11_B0[OPS_ACC0(0,0)] +
      (rc8)*D11_B0[OPS_ACC0(0,-4)] - rc10*D11_B0[OPS_ACC0(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(-18*D11_B0[OPS_ACC0(0,-1)] + 6*D11_B0[OPS_ACC0(0,-2)] + 10*D11_B0[OPS_ACC0(0,0)] +
      3*D11_B0[OPS_ACC0(0,1)] - D11_B0[OPS_ACC0(0,-3)])
)
: (
   (rc11)*inv_0*(8*D11_B0[OPS_ACC0(0,1)] -
      D11_B0[OPS_ACC0(0,2)] - 8*D11_B0[OPS_ACC0(0,-1)] + D11_B0[OPS_ACC0(0,-2)])
)))));

   SD111_B0[OPS_ACC1(0,0)] = localeval_0;

}

void opensbliblock00Kernel036(double *rhou0_B0, double *rhoE_B0, double *rhou1_B0, double *rho_B0)
{
   double ub0 = 0.0;
   double ab = 0.0;
   double ub1 = 0.0;
   double rhob = 0.0;
   double pb = 0.0;
   rhob = rho_B0[OPS_ACC3(0,0)];

   ub0 = fabs(rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC3(0,0)]);

   ub1 = fabs(rhou1_B0[OPS_ACC2(0,0)]/rho_B0[OPS_ACC3(0,0)]);

   pb = (gama - 1)*(-0.5*rhob*(pow(ub0, 2) + pow(ub1, 2)) + rhoE_B0[OPS_ACC1(0,0)]);

   ab = sqrt(gama*pb/rhob);

   rho_B0[OPS_ACC3(0,0)] = ((ub0 >= ab) ? (
   rho_B0[OPS_ACC3(-1,0)]
)
: (
   rho_B0[OPS_ACC3(0,0)]
));

   rhou0_B0[OPS_ACC0(0,0)] = ((ub0 >= ab) ? (
   rhou0_B0[OPS_ACC0(-1,0)]
)
: (
   rhou0_B0[OPS_ACC0(0,0)]
));

   rhou1_B0[OPS_ACC2(0,0)] = ((ub0 >= ab) ? (
   rhou1_B0[OPS_ACC2(-1,0)]
)
: (
   rhou1_B0[OPS_ACC2(0,0)]
));

   rhoE_B0[OPS_ACC1(0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-1,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-2,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-2,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-3,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-3,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

}

void opensbliblock00Kernel037(double *rhou0_B0, double *rhoE_B0, double *rhou1_B0, double *rho_B0)
{
   rho_B0[OPS_ACC3(0,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC0(0,0)] = rhou0_B0[OPS_ACC0(-1,0)];

   rhou1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC2(-1,0)];

   rhoE_B0[OPS_ACC1(0,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(1,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC0(1,0)] = rhou0_B0[OPS_ACC0(-1,0)];

   rhou1_B0[OPS_ACC2(1,0)] = rhou1_B0[OPS_ACC2(-1,0)];

   rhoE_B0[OPS_ACC1(1,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(2,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC0(2,0)] = rhou0_B0[OPS_ACC0(-1,0)];

   rhou1_B0[OPS_ACC2(2,0)] = rhou1_B0[OPS_ACC2(-1,0)];

   rhoE_B0[OPS_ACC1(2,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(3,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC0(3,0)] = rhou0_B0[OPS_ACC0(-1,0)];

   rhou1_B0[OPS_ACC2(3,0)] = rhou1_B0[OPS_ACC2(-1,0)];

   rhoE_B0[OPS_ACC1(3,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(4,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC0(4,0)] = rhou0_B0[OPS_ACC0(-1,0)];

   rhou1_B0[OPS_ACC2(4,0)] = rhou1_B0[OPS_ACC2(-1,0)];

   rhoE_B0[OPS_ACC1(4,0)] = rhoE_B0[OPS_ACC1(-1,0)];

}

 void opensbliblock00Kernel038(const double *x0_B0, double *rhou0_B0, double *rhoE_B0, double *rhou1_B0, double
*rho_B0)
{
   double x0 = 0.0;
   double u12 = 0.0;
   double T_above = 0.0;
   double rho_halo_1 = 0.0;
   double u13 = 0.0;
   double T1 = 0.0;
   double rho_halo_2 = 0.0;
   double u01 = 0.0;
   double u11 = 0.0;
   double T2 = 0.0;
   double u02 = 0.0;
   double u03 = 0.0;
   double Pwall = 0.0;
   double rho_halo_3 = 0.0;
   double T3 = 0.0;
   x0 = x0_B0[OPS_ACC0(0,0)];

   rhou0_B0[OPS_ACC1(0,0)] = 0.0;

   rhou1_B0[OPS_ACC3(0,0)] = 0.0;

   rhoE_B0[OPS_ACC2(0,0)] = Twall*rcinv12*rho_B0[OPS_ACC4(0,0)]/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc13)*pow(rhou0_B0[OPS_ACC1(0,0)], 2) + (rc13)*pow(rhou1_B0[OPS_ACC3(0,0)],
      2))/rho_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC2(0,0)]);

   u01 = rhou0_B0[OPS_ACC1(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u02 = rhou0_B0[OPS_ACC1(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u03 = rhou0_B0[OPS_ACC1(0,3)]/rho_B0[OPS_ACC4(0,3)];

   u11 = rhou1_B0[OPS_ACC3(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u12 = rhou1_B0[OPS_ACC3(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u13 = rhou1_B0[OPS_ACC3(0,3)]/rho_B0[OPS_ACC4(0,3)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc13)*pow(rhou0_B0[OPS_ACC1(0,1)], 2) +
      (rc13)*pow(rhou1_B0[OPS_ACC3(0,1)], 2))/rho_B0[OPS_ACC4(0,1)] + rhoE_B0[OPS_ACC2(0,1)])/rho_B0[OPS_ACC4(0,1)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u12;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC4(0,-3)] = rho_halo_3;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u12;

   rhou0_B0[OPS_ACC1(0,-3)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC3(0,-3)] = -rho_halo_3*u13;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0[OPS_ACC2(0,-3)] = rcinv5*Pwall + (rc13)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}

void opensbliblock00Kernel039(double *rhou0_B0, double *rhoE_B0, double *rho_B0, double *rhou1_B0, const int *idx)
{
   double x0 = 0.0;
   x0 = Delta0block0*idx[0];

   rho_B0[OPS_ACC2(0,0)] = ((x0 > 40.0) ? (
   1.129734572
)
: (
   1.00000596004
));

   rhou0_B0[OPS_ACC0(0,0)] = ((x0 > 40.0) ? (
   1.0921171
)
: (
   1.00000268202
));

   rhou1_B0[OPS_ACC3(0,0)] = ((x0 > 40.0) ? (
   -0.058866065
)
: (
   0.00565001630205
));

   rhoE_B0[OPS_ACC1(0,0)] = ((x0 > 40.0) ? (
   1.0590824
)
: (
   0.94644428042
));

}

void opensbliblock00Kernel007(const double *rhou0_B0, const double *rho_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel011(const double *rho_B0, const double *rhou1_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

 void opensbliblock00Kernel009(const double *rhoE_B0, const double *rho_B0, const double *u0_B0, const double *u1_B0,
double *p_B0)
{
    p_B0[OPS_ACC4(0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC0(0,0)] - rc13*rho_B0[OPS_ACC1(0,0)]*pow(u0_B0[OPS_ACC2(0,0)], 2) -
      rc13*rho_B0[OPS_ACC1(0,0)]*pow(u1_B0[OPS_ACC3(0,0)], 2));

}

 void opensbliblock00Kernel002(const double *D11_B0, const double *u0_B0, const double *u1_B0, double *theta_B0, const
int *idx)
{
   double localeval_1 = 0.0;
   double localeval_0 = 0.0;
   double localeval_3 = 0.0;
   double localeval_2 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc9*u1_B0[OPS_ACC2(0,0)] - rc8*u1_B0[OPS_ACC2(0,4)] +
      4*u1_B0[OPS_ACC2(0,1)] - 3*u1_B0[OPS_ACC2(0,2)] + (rc10)*u1_B0[OPS_ACC2(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-10*u1_B0[OPS_ACC2(0,0)] + 18*u1_B0[OPS_ACC2(0,1)] - 3*u1_B0[OPS_ACC2(0,-1)] -
      6*u1_B0[OPS_ACC2(0,2)] + u1_B0[OPS_ACC2(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc8)*u1_B0[OPS_ACC2(0,-4)] + (rc9)*u1_B0[OPS_ACC2(0,0)] - rc10*u1_B0[OPS_ACC2(0,-3)] +
      3*u1_B0[OPS_ACC2(0,-2)] - 4*u1_B0[OPS_ACC2(0,-1)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(10*u1_B0[OPS_ACC2(0,0)] - u1_B0[OPS_ACC2(0,-3)] + 3*u1_B0[OPS_ACC2(0,1)] - 18*u1_B0[OPS_ACC2(0,-1)]
      + 6*u1_B0[OPS_ACC2(0,-2)])
)
: (
   (rc11)*inv_0*(u1_B0[OPS_ACC2(0,-2)] - 8*u1_B0[OPS_ACC2(0,-1)] +
      8*u1_B0[OPS_ACC2(0,1)] - u1_B0[OPS_ACC2(0,2)])
)))));

    localeval_1 = ((idx[0] == 0) ? (
   inv_1*(-rc8*u0_B0[OPS_ACC1(4,0)] + (rc10)*u0_B0[OPS_ACC1(3,0)] -
      3*u0_B0[OPS_ACC1(2,0)] + 4*u0_B0[OPS_ACC1(1,0)] - rc9*u0_B0[OPS_ACC1(0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-3*u0_B0[OPS_ACC1(-1,0)] + u0_B0[OPS_ACC1(3,0)] - 6*u0_B0[OPS_ACC1(2,0)] + 18*u0_B0[OPS_ACC1(1,0)] -
      10*u0_B0[OPS_ACC1(0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-4*u0_B0[OPS_ACC1(-1,0)] +
      3*u0_B0[OPS_ACC1(-2,0)] - rc10*u0_B0[OPS_ACC1(-3,0)] + (rc8)*u0_B0[OPS_ACC1(-4,0)] +
      (rc9)*u0_B0[OPS_ACC1(0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(6*u0_B0[OPS_ACC1(-2,0)] -
      18*u0_B0[OPS_ACC1(-1,0)] - u0_B0[OPS_ACC1(-3,0)] + 3*u0_B0[OPS_ACC1(1,0)] + 10*u0_B0[OPS_ACC1(0,0)])
)
: (
  
      (rc11)*inv_1*(u0_B0[OPS_ACC1(-2,0)] - u0_B0[OPS_ACC1(2,0)] - 8*u0_B0[OPS_ACC1(-1,0)] +
      8*u0_B0[OPS_ACC1(1,0)])
)))));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(-rc9*u1_B0[OPS_ACC2(0,0)] + 4*u1_B0[OPS_ACC2(1,0)] -
      3*u1_B0[OPS_ACC2(2,0)] - rc8*u1_B0[OPS_ACC2(4,0)] + (rc10)*u1_B0[OPS_ACC2(3,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-10*u1_B0[OPS_ACC2(0,0)] + 18*u1_B0[OPS_ACC2(1,0)] - 6*u1_B0[OPS_ACC2(2,0)] -
      3*u1_B0[OPS_ACC2(-1,0)] + u1_B0[OPS_ACC2(3,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc9)*u1_B0[OPS_ACC2(0,0)] + (rc8)*u1_B0[OPS_ACC2(-4,0)] - rc10*u1_B0[OPS_ACC2(-3,0)] +
      3*u1_B0[OPS_ACC2(-2,0)] - 4*u1_B0[OPS_ACC2(-1,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc11)*inv_1*(10*u1_B0[OPS_ACC2(0,0)] + 3*u1_B0[OPS_ACC2(1,0)] - u1_B0[OPS_ACC2(-3,0)] - 18*u1_B0[OPS_ACC2(-1,0)]
      + 6*u1_B0[OPS_ACC2(-2,0)])
)
: (
   (rc11)*inv_1*(8*u1_B0[OPS_ACC2(1,0)] - 8*u1_B0[OPS_ACC2(-1,0)] +
      u1_B0[OPS_ACC2(-2,0)] - u1_B0[OPS_ACC2(2,0)])
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*((rc10)*u0_B0[OPS_ACC1(0,3)] - 3*u0_B0[OPS_ACC1(0,2)] +
      4*u0_B0[OPS_ACC1(0,1)] - rc8*u0_B0[OPS_ACC1(0,4)] - rc9*u0_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(u0_B0[OPS_ACC1(0,3)] - 6*u0_B0[OPS_ACC1(0,2)] - 3*u0_B0[OPS_ACC1(0,-1)] + 18*u0_B0[OPS_ACC1(0,1)] -
      10*u0_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-4*u0_B0[OPS_ACC1(0,-1)] +
      3*u0_B0[OPS_ACC1(0,-2)] - rc10*u0_B0[OPS_ACC1(0,-3)] + (rc9)*u0_B0[OPS_ACC1(0,0)] +
      (rc8)*u0_B0[OPS_ACC1(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-18*u0_B0[OPS_ACC1(0,-1)] +
      6*u0_B0[OPS_ACC1(0,-2)] + 3*u0_B0[OPS_ACC1(0,1)] - u0_B0[OPS_ACC1(0,-3)] + 10*u0_B0[OPS_ACC1(0,0)])
)
: (
  
      (rc11)*inv_0*(-u0_B0[OPS_ACC1(0,2)] + 8*u0_B0[OPS_ACC1(0,1)] - 8*u0_B0[OPS_ACC1(0,-1)] +
      u0_B0[OPS_ACC1(0,-2)])
)))));

    theta_B0[OPS_ACC3(0,0)] = pow(localeval_0*D11_B0[OPS_ACC0(0,0)] + localeval_1,
      2)*(-rc13*tanh(250.0*localeval_0*D11_B0[OPS_ACC0(0,0)] + 250.0*localeval_1 + 2.5) + rc13)/(epsilon +
      pow(localeval_2 - localeval_3*D11_B0[OPS_ACC0(0,0)], 2) + pow(localeval_0*D11_B0[OPS_ACC0(0,0)] + localeval_1,
      2));

}

void opensbliblock00Kernel008(const double *rho_B0, const double *p_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0,0)] = sqrt(gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)]);

}

void opensbliblock00Kernel018(const double *rho_B0, const double *p_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

void opensbliblock00Kernel015(const double *T_B0, double *mu_B0)
{
   mu_B0[OPS_ACC1(0,0)] = (SuthT*rcinv14 + 1.0)*pow(T_B0[OPS_ACC0(0,0)], 1.5)/(SuthT*rcinv14 + T_B0[OPS_ACC0(0,0)]);

}

 void opensbliblock00Kernel003(const double *a_B0, const double *rhou0_B0, const double *rho_B0, const double *rhoE_B0,
const double *p_B0, const double *rhou1_B0, const double *theta_B0, const double *u0_B0, const double *u1_B0, double
*wk3_B0, double *wk0_B0, double *wk1_B0, double *TENO_B0, double *wk2_B0)
{
   double CF_00 = 0.0;
   double Recon_1 = 0.0;
   double CS_22 = 0.0;
   double CS_15 = 0.0;
   double AVG_0_u1 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double CF_33 = 0.0;
   double alpha_2 = 0.0;
   double delta_0 = 0.0;
   double CS_11 = 0.0;
   double alpha_0 = 0.0;
   double CF_23 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CF_32 = 0.0;
   double CS_21 = 0.0;
   double CS_01 = 0.0;
   double inv_alpha_sum = 0.0;
   double inv_AVG_rho = 0.0;
   double beta_0 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double CS_12 = 0.0;
   double max_lambda_0_33 = 0.0;
   double CS_25 = 0.0;
   double CF_10 = 0.0;
   double CS_03 = 0.0;
   double CF_02 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CS_14 = 0.0;
   double AVG_0_inv_rho = 0.0;
   double CF_25 = 0.0;
   double CF_35 = 0.0;
   double beta_1 = 0.0;
   double CS_02 = 0.0;
   double CS_05 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double delta_1 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double CF_13 = 0.0;
   double delta_2 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double CF_30 = 0.0;
   double CF_01 = 0.0;
   double TENO_CT = 0.0;
   double CF_11 = 0.0;
   double AVG_0_a = 0.0;
   double CS_33 = 0.0;
   double CF_14 = 0.0;
   double CS_34 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double CS_24 = 0.0;
   double CS_30 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double CF_21 = 0.0;
   double CF_03 = 0.0;
   double CF_04 = 0.0;
   double CS_31 = 0.0;
   double beta_2 = 0.0;
   double AVG_0_rho = 0.0;
   double alpha_1 = 0.0;
   double Recon_0 = 0.0;
   double Recon_2 = 0.0;
   double CS_20 = 0.0;
   double CS_35 = 0.0;
   double max_lambda_0_11 = 0.0;
   double Recon_3 = 0.0;
   double CF_05 = 0.0;
   double CS_23 = 0.0;
   double CS_10 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double CS_00 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_13 = 0.0;
   double inv_omega_sum = 0.0;
   double CF_20 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_u0 = 0.0;
   double max_lambda_0_22 = 0.0;
   double CF_22 = 0.0;
   double CF_34 = 0.0;
   double CF_15 = 0.0;
   double CF_31 = 0.0;
   double CS_04 = 0.0;
   double CS_32 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CF_24 = 0.0;
   double max_lambda_0_00 = 0.0;
   double CF_12 = 0.0;
   AVG_0_rho = sqrt(rho_B0[OPS_ACC2(0,0)]*rho_B0[OPS_ACC2(1,0)]);

   AVG_0_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC2(0,0)]) + sqrt(rho_B0[OPS_ACC2(1,0)]));

    AVG_0_u0 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC7(0,0)] +
      sqrt(rho_B0[OPS_ACC2(1,0)])*u0_B0[OPS_ACC7(1,0)]);

    AVG_0_u1 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC8(0,0)] +
      sqrt(rho_B0[OPS_ACC2(1,0)])*u1_B0[OPS_ACC8(1,0)]);

    AVG_0_a = sqrt(gamma_m1*(AVG_0_inv_rho*((p_B0[OPS_ACC4(1,0)] + rhoE_B0[OPS_ACC3(1,0)])/sqrt(rho_B0[OPS_ACC2(1,0)]) +
      (p_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC3(0,0)])/sqrt(rho_B0[OPS_ACC2(0,0)])) - rc13*(pow(AVG_0_u0, 2) +
      pow(AVG_0_u1, 2))));

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

    AVG_0_0_LEV_00 = -rc13*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_01 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_02 = gamma_m1*AVG_0_u1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_0_u0, 2) - gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 + pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2));

   AVG_0_0_LEV_21 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0);

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_0_u0, 2) + gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 - pow(AVG_0_u0, 2) - pow(AVG_0_u1, 2));

   AVG_0_0_LEV_31 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u0 + AVG_0_a - AVG_0_u0);

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

   CF_10 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_20 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_30 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_01 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

   CF_11 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_21 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_31 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_02 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)];

   CF_12 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_22 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_32 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_03 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)];

   CF_13 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_23 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_33 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_04 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)];

   CF_14 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_24 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_34 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_05 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)];

   CF_15 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CF_25 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CF_35 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(-2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(-2,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(-1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(-1,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(0,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(1,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(2,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC5(3,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC3(3,0)];

   CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(-2,0)];

   CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(-1,0)];

   CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(0,0)];

   CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(1,0)];

   CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(2,0)];

   CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC5(3,0)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(-2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(-2,0)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(-1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(-1,0)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(0,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(0,0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(1,0)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(2,0)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC5(3,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC3(3,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(-2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(-2,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(-1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(-1,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(0,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(1,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(2,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC5(3,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC3(3,0)];

    max_lambda_0_00 = fmax(fabs(u0_B0[OPS_ACC7(-2,0)]), fmax(fabs(u0_B0[OPS_ACC7(-1,0)]),
      fmax(fabs(u0_B0[OPS_ACC7(2,0)]), fmax(fabs(u0_B0[OPS_ACC7(0,0)]), fmax(fabs(u0_B0[OPS_ACC7(3,0)]),
      fabs(u0_B0[OPS_ACC7(1,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

    max_lambda_0_22 = fmax(fabs(a_B0[OPS_ACC0(-2,0)] + u0_B0[OPS_ACC7(-2,0)]), fmax(fabs(a_B0[OPS_ACC0(0,0)] +
      u0_B0[OPS_ACC7(0,0)]), fmax(fabs(a_B0[OPS_ACC0(3,0)] + u0_B0[OPS_ACC7(3,0)]), fmax(fabs(a_B0[OPS_ACC0(1,0)] +
      u0_B0[OPS_ACC7(1,0)]), fmax(fabs(a_B0[OPS_ACC0(-1,0)] + u0_B0[OPS_ACC7(-1,0)]), fabs(a_B0[OPS_ACC0(2,0)] +
      u0_B0[OPS_ACC7(2,0)]))))));

    max_lambda_0_33 = fmax(fabs(a_B0[OPS_ACC0(1,0)] - u0_B0[OPS_ACC7(1,0)]), fmax(fabs(a_B0[OPS_ACC0(3,0)] -
      u0_B0[OPS_ACC7(3,0)]), fmax(fabs(a_B0[OPS_ACC0(0,0)] - u0_B0[OPS_ACC7(0,0)]), fmax(fabs(a_B0[OPS_ACC0(-1,0)] -
      u0_B0[OPS_ACC7(-1,0)]), fmax(fabs(a_B0[OPS_ACC0(2,0)] - u0_B0[OPS_ACC7(2,0)]), fabs(a_B0[OPS_ACC0(-2,0)] -
      u0_B0[OPS_ACC7(-2,0)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC6(0,0)] + 1, 4)*(4*theta_B0[OPS_ACC6(0,0)] + 1)
      + 1)));

   TENO_B0[OPS_ACC12(0,0)] = TENO_CT;

    beta_0 = (rc8)*pow((rc13)*(CF_01 + CS_01*max_lambda_0_00) - rc13*(CF_03 + CS_03*max_lambda_0_00), 2) +
      (rc15)*pow((rc13)*(CF_01 + CS_01*max_lambda_0_00) - (CF_02 + CS_02*max_lambda_0_00) + (rc13)*(CF_03 +
      CS_03*max_lambda_0_00), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_02 + CS_02*max_lambda_0_00) - (CF_03 + CS_03*max_lambda_0_00) + (rc13)*(CF_04 +
      CS_04*max_lambda_0_00), 2) + (rc8)*pow((rc16)*(CF_02 + CS_02*max_lambda_0_00) - 2*(CF_03 + CS_03*max_lambda_0_00)
      + (rc13)*(CF_04 + CS_04*max_lambda_0_00), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_00 + CS_00*max_lambda_0_00) - 2*(CF_01 + CS_01*max_lambda_0_00) + (rc16)*(CF_02 +
      CS_02*max_lambda_0_00), 2) + (rc15)*pow((rc13)*(CF_00 + CS_00*max_lambda_0_00) - (CF_01 + CS_01*max_lambda_0_00) +
      (rc13)*(CF_02 + CS_02*max_lambda_0_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_01 + CS_01*max_lambda_0_00) + (rc20)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc21)*(CF_03 + CS_03*max_lambda_0_00)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc20)*(CF_03 + CS_03*max_lambda_0_00) - rc11*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_00 + CS_00*max_lambda_0_00) - rc22*(CF_01 + CS_01*max_lambda_0_00) +
      (rc23)*(CF_02 + CS_02*max_lambda_0_00));

    beta_0 = (rc8)*pow((rc13)*(CF_02 - CS_02*max_lambda_0_00) - rc13*(CF_04 - CS_04*max_lambda_0_00), 2) +
      (rc15)*pow((rc13)*(CF_02 - CS_02*max_lambda_0_00) - (CF_03 - CS_03*max_lambda_0_00) + (rc13)*(CF_04 -
      CS_04*max_lambda_0_00), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_01 - CS_01*max_lambda_0_00) - 2*(CF_02 - CS_02*max_lambda_0_00) + (rc16)*(CF_03 -
      CS_03*max_lambda_0_00), 2) + (rc15)*pow((rc13)*(CF_01 - CS_01*max_lambda_0_00) - (CF_02 - CS_02*max_lambda_0_00) +
      (rc13)*(CF_03 - CS_03*max_lambda_0_00), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_03 - CS_03*max_lambda_0_00) - (CF_04 - CS_04*max_lambda_0_00) + (rc13)*(CF_05 -
      CS_05*max_lambda_0_00), 2) + (rc8)*pow((rc16)*(CF_03 - CS_03*max_lambda_0_00) - 2*(CF_04 - CS_04*max_lambda_0_00)
      + (rc13)*(CF_05 - CS_05*max_lambda_0_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_02 - CS_02*max_lambda_0_00) + (rc20)*(CF_03 -
      CS_03*max_lambda_0_00) - rc11*(CF_04 - CS_04*max_lambda_0_00)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_01 -
      CS_01*max_lambda_0_00) + (rc20)*(CF_02 - CS_02*max_lambda_0_00) + (rc21)*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_03 - CS_03*max_lambda_0_00) - rc22*(CF_04 - CS_04*max_lambda_0_00) +
      (rc21)*(CF_05 - CS_05*max_lambda_0_00));

    beta_0 = (rc8)*pow((rc13)*(CF_11 + CS_11*max_lambda_0_11) - rc13*(CF_13 + CS_13*max_lambda_0_11), 2) +
      (rc15)*pow((rc13)*(CF_11 + CS_11*max_lambda_0_11) - (CF_12 + CS_12*max_lambda_0_11) + (rc13)*(CF_13 +
      CS_13*max_lambda_0_11), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_12 + CS_12*max_lambda_0_11) - (CF_13 + CS_13*max_lambda_0_11) + (rc13)*(CF_14 +
      CS_14*max_lambda_0_11), 2) + (rc8)*pow((rc16)*(CF_12 + CS_12*max_lambda_0_11) - 2*(CF_13 + CS_13*max_lambda_0_11)
      + (rc13)*(CF_14 + CS_14*max_lambda_0_11), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_10 + CS_10*max_lambda_0_11) - 2*(CF_11 + CS_11*max_lambda_0_11) + (rc16)*(CF_12 +
      CS_12*max_lambda_0_11), 2) + (rc15)*pow((rc13)*(CF_10 + CS_10*max_lambda_0_11) - (CF_11 + CS_11*max_lambda_0_11) +
      (rc13)*(CF_12 + CS_12*max_lambda_0_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_11 + CS_11*max_lambda_0_11) + (rc20)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc21)*(CF_13 + CS_13*max_lambda_0_11)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc20)*(CF_13 + CS_13*max_lambda_0_11) - rc11*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_10 + CS_10*max_lambda_0_11) - rc22*(CF_11 + CS_11*max_lambda_0_11) +
      (rc23)*(CF_12 + CS_12*max_lambda_0_11));

    beta_0 = (rc8)*pow((rc13)*(CF_12 - CS_12*max_lambda_0_11) - rc13*(CF_14 - CS_14*max_lambda_0_11), 2) +
      (rc15)*pow((rc13)*(CF_12 - CS_12*max_lambda_0_11) - (CF_13 - CS_13*max_lambda_0_11) + (rc13)*(CF_14 -
      CS_14*max_lambda_0_11), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_11 - CS_11*max_lambda_0_11) - 2*(CF_12 - CS_12*max_lambda_0_11) + (rc16)*(CF_13 -
      CS_13*max_lambda_0_11), 2) + (rc15)*pow((rc13)*(CF_11 - CS_11*max_lambda_0_11) - (CF_12 - CS_12*max_lambda_0_11) +
      (rc13)*(CF_13 - CS_13*max_lambda_0_11), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_13 - CS_13*max_lambda_0_11) - (CF_14 - CS_14*max_lambda_0_11) + (rc13)*(CF_15 -
      CS_15*max_lambda_0_11), 2) + (rc8)*pow((rc16)*(CF_13 - CS_13*max_lambda_0_11) - 2*(CF_14 - CS_14*max_lambda_0_11)
      + (rc13)*(CF_15 - CS_15*max_lambda_0_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_12 - CS_12*max_lambda_0_11) + (rc20)*(CF_13 -
      CS_13*max_lambda_0_11) - rc11*(CF_14 - CS_14*max_lambda_0_11)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_11 -
      CS_11*max_lambda_0_11) + (rc20)*(CF_12 - CS_12*max_lambda_0_11) + (rc21)*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_13 - CS_13*max_lambda_0_11) - rc22*(CF_14 - CS_14*max_lambda_0_11) +
      (rc21)*(CF_15 - CS_15*max_lambda_0_11));

    beta_0 = (rc8)*pow((rc13)*(CF_21 + CS_21*max_lambda_0_22) - rc13*(CF_23 + CS_23*max_lambda_0_22), 2) +
      (rc15)*pow((rc13)*(CF_21 + CS_21*max_lambda_0_22) - (CF_22 + CS_22*max_lambda_0_22) + (rc13)*(CF_23 +
      CS_23*max_lambda_0_22), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_22 + CS_22*max_lambda_0_22) - (CF_23 + CS_23*max_lambda_0_22) + (rc13)*(CF_24 +
      CS_24*max_lambda_0_22), 2) + (rc8)*pow((rc16)*(CF_22 + CS_22*max_lambda_0_22) - 2*(CF_23 + CS_23*max_lambda_0_22)
      + (rc13)*(CF_24 + CS_24*max_lambda_0_22), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_20 + CS_20*max_lambda_0_22) - 2*(CF_21 + CS_21*max_lambda_0_22) + (rc16)*(CF_22 +
      CS_22*max_lambda_0_22), 2) + (rc15)*pow((rc13)*(CF_20 + CS_20*max_lambda_0_22) - (CF_21 + CS_21*max_lambda_0_22) +
      (rc13)*(CF_22 + CS_22*max_lambda_0_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_21 + CS_21*max_lambda_0_22) + (rc20)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc21)*(CF_23 + CS_23*max_lambda_0_22)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc20)*(CF_23 + CS_23*max_lambda_0_22) - rc11*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_20 + CS_20*max_lambda_0_22) - rc22*(CF_21 + CS_21*max_lambda_0_22) +
      (rc23)*(CF_22 + CS_22*max_lambda_0_22));

    beta_0 = (rc8)*pow((rc13)*(CF_22 - CS_22*max_lambda_0_22) - rc13*(CF_24 - CS_24*max_lambda_0_22), 2) +
      (rc15)*pow((rc13)*(CF_22 - CS_22*max_lambda_0_22) - (CF_23 - CS_23*max_lambda_0_22) + (rc13)*(CF_24 -
      CS_24*max_lambda_0_22), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_21 - CS_21*max_lambda_0_22) - 2*(CF_22 - CS_22*max_lambda_0_22) + (rc16)*(CF_23 -
      CS_23*max_lambda_0_22), 2) + (rc15)*pow((rc13)*(CF_21 - CS_21*max_lambda_0_22) - (CF_22 - CS_22*max_lambda_0_22) +
      (rc13)*(CF_23 - CS_23*max_lambda_0_22), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_23 - CS_23*max_lambda_0_22) - (CF_24 - CS_24*max_lambda_0_22) + (rc13)*(CF_25 -
      CS_25*max_lambda_0_22), 2) + (rc8)*pow((rc16)*(CF_23 - CS_23*max_lambda_0_22) - 2*(CF_24 - CS_24*max_lambda_0_22)
      + (rc13)*(CF_25 - CS_25*max_lambda_0_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_22 - CS_22*max_lambda_0_22) + (rc20)*(CF_23 -
      CS_23*max_lambda_0_22) - rc11*(CF_24 - CS_24*max_lambda_0_22)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_21 -
      CS_21*max_lambda_0_22) + (rc20)*(CF_22 - CS_22*max_lambda_0_22) + (rc21)*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_23 - CS_23*max_lambda_0_22) - rc22*(CF_24 - CS_24*max_lambda_0_22) +
      (rc21)*(CF_25 - CS_25*max_lambda_0_22));

    beta_0 = (rc8)*pow((rc13)*(CF_31 + CS_31*max_lambda_0_33) - rc13*(CF_33 + CS_33*max_lambda_0_33), 2) +
      (rc15)*pow((rc13)*(CF_31 + CS_31*max_lambda_0_33) - (CF_32 + CS_32*max_lambda_0_33) + (rc13)*(CF_33 +
      CS_33*max_lambda_0_33), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_32 + CS_32*max_lambda_0_33) - (CF_33 + CS_33*max_lambda_0_33) + (rc13)*(CF_34 +
      CS_34*max_lambda_0_33), 2) + (rc8)*pow((rc16)*(CF_32 + CS_32*max_lambda_0_33) - 2*(CF_33 + CS_33*max_lambda_0_33)
      + (rc13)*(CF_34 + CS_34*max_lambda_0_33), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_30 + CS_30*max_lambda_0_33) - 2*(CF_31 + CS_31*max_lambda_0_33) + (rc16)*(CF_32 +
      CS_32*max_lambda_0_33), 2) + (rc15)*pow((rc13)*(CF_30 + CS_30*max_lambda_0_33) - (CF_31 + CS_31*max_lambda_0_33) +
      (rc13)*(CF_32 + CS_32*max_lambda_0_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_31 + CS_31*max_lambda_0_33) + (rc20)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc21)*(CF_33 + CS_33*max_lambda_0_33)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc20)*(CF_33 + CS_33*max_lambda_0_33) - rc11*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_30 + CS_30*max_lambda_0_33) - rc22*(CF_31 + CS_31*max_lambda_0_33) +
      (rc23)*(CF_32 + CS_32*max_lambda_0_33));

    beta_0 = (rc8)*pow((rc13)*(CF_32 - CS_32*max_lambda_0_33) - rc13*(CF_34 - CS_34*max_lambda_0_33), 2) +
      (rc15)*pow((rc13)*(CF_32 - CS_32*max_lambda_0_33) - (CF_33 - CS_33*max_lambda_0_33) + (rc13)*(CF_34 -
      CS_34*max_lambda_0_33), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_31 - CS_31*max_lambda_0_33) - 2*(CF_32 - CS_32*max_lambda_0_33) + (rc16)*(CF_33 -
      CS_33*max_lambda_0_33), 2) + (rc15)*pow((rc13)*(CF_31 - CS_31*max_lambda_0_33) - (CF_32 - CS_32*max_lambda_0_33) +
      (rc13)*(CF_33 - CS_33*max_lambda_0_33), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_33 - CS_33*max_lambda_0_33) - (CF_34 - CS_34*max_lambda_0_33) + (rc13)*(CF_35 -
      CS_35*max_lambda_0_33), 2) + (rc8)*pow((rc16)*(CF_33 - CS_33*max_lambda_0_33) - 2*(CF_34 - CS_34*max_lambda_0_33)
      + (rc13)*(CF_35 - CS_35*max_lambda_0_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_32 - CS_32*max_lambda_0_33) + (rc20)*(CF_33 -
      CS_33*max_lambda_0_33) - rc11*(CF_34 - CS_34*max_lambda_0_33)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_31 -
      CS_31*max_lambda_0_33) + (rc20)*(CF_32 - CS_32*max_lambda_0_33) + (rc21)*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_33 - CS_33*max_lambda_0_33) - rc22*(CF_34 - CS_34*max_lambda_0_33) +
      (rc21)*(CF_35 - CS_35*max_lambda_0_33));

    wk0_B0[OPS_ACC10(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC11(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_a + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_a + AVG_0_u0) + AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC13(0,0)] = 0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_3*inv_AVG_a - AVG_0_rho*Recon_1 + AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC9(0,0)] = -AVG_0_rho*AVG_0_u1*Recon_1 +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) + AVG_0_a*AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) - AVG_0_a*AVG_0_u0) + Recon_0*((rc13)*pow(AVG_0_u0, 2) + (rc13)*pow(AVG_0_u1, 2));

}

 void opensbliblock00Kernel004(const double *a_B0, const double *rhou0_B0, const double *rho_B0, const double *rhoE_B0,
const double *p_B0, const double *rhou1_B0, const double *theta_B0, const double *u0_B0, const double *u1_B0, double
*wk7_B0, double *wk4_B0, double *wk6_B0, double *wk5_B0)
{
   double AVG_1_1_LEV_00 = 0.0;
   double CF_00 = 0.0;
   double Recon_1 = 0.0;
   double CS_22 = 0.0;
   double CS_15 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double CF_33 = 0.0;
   double alpha_2 = 0.0;
   double delta_0 = 0.0;
   double CS_11 = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double alpha_0 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double CF_23 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CF_32 = 0.0;
   double CS_21 = 0.0;
   double CS_01 = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_1_11 = 0.0;
   double inv_AVG_rho = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double beta_0 = 0.0;
   double CS_12 = 0.0;
   double AVG_1_a = 0.0;
   double CS_25 = 0.0;
   double max_lambda_1_00 = 0.0;
   double CF_10 = 0.0;
   double CS_03 = 0.0;
   double CF_02 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double max_lambda_1_33 = 0.0;
   double AVG_1_u0 = 0.0;
   double CS_14 = 0.0;
   double CF_25 = 0.0;
   double CF_35 = 0.0;
   double beta_1 = 0.0;
   double AVG_1_inv_rho = 0.0;
   double CS_02 = 0.0;
   double CS_05 = 0.0;
   double delta_1 = 0.0;
   double CF_13 = 0.0;
   double delta_2 = 0.0;
   double CF_30 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double CF_01 = 0.0;
   double TENO_CT = 0.0;
   double CF_11 = 0.0;
   double CS_33 = 0.0;
   double CF_14 = 0.0;
   double CS_34 = 0.0;
   double AVG_1_u1 = 0.0;
   double CS_24 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double CS_30 = 0.0;
   double CF_21 = 0.0;
   double CF_04 = 0.0;
   double CF_03 = 0.0;
   double Recon_2 = 0.0;
   double CS_31 = 0.0;
   double beta_2 = 0.0;
   double alpha_1 = 0.0;
   double Recon_0 = 0.0;
   double CS_20 = 0.0;
   double CS_35 = 0.0;
   double Recon_3 = 0.0;
   double CF_05 = 0.0;
   double CS_23 = 0.0;
   double CS_10 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double max_lambda_1_22 = 0.0;
   double CS_00 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double CS_13 = 0.0;
   double inv_omega_sum = 0.0;
   double CF_20 = 0.0;
   double CF_22 = 0.0;
   double CF_34 = 0.0;
   double CF_15 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double CF_31 = 0.0;
   double CS_04 = 0.0;
   double CS_32 = 0.0;
   double CF_24 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double CF_12 = 0.0;
   AVG_1_rho = sqrt(rho_B0[OPS_ACC2(0,0)]*rho_B0[OPS_ACC2(0,1)]);

   AVG_1_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC2(0,1)]) + sqrt(rho_B0[OPS_ACC2(0,0)]));

    AVG_1_u0 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,1)])*u0_B0[OPS_ACC7(0,1)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC7(0,0)]);

    AVG_1_u1 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,1)])*u1_B0[OPS_ACC8(0,1)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC8(0,0)]);

    AVG_1_a = sqrt(gamma_m1*(AVG_1_inv_rho*((p_B0[OPS_ACC4(0,1)] + rhoE_B0[OPS_ACC3(0,1)])/sqrt(rho_B0[OPS_ACC2(0,1)]) +
      (p_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC3(0,0)])/sqrt(rho_B0[OPS_ACC2(0,0)])) - rc13*(pow(AVG_1_u0, 2) +
      pow(AVG_1_u1, 2))));

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

    AVG_1_1_LEV_00 = -rc13*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_1_1_LEV_01 = gamma_m1*AVG_1_u0*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_02 = gamma_m1*AVG_1_u1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_1_u0, 2) - gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 + pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2));

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1);

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_1_u0, 2) + gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 - pow(AVG_1_u0, 2) - pow(AVG_1_u1, 2));

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u1 + AVG_1_a - AVG_1_u1);

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

   CF_10 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_20 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_30 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_01 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

   CF_11 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_21 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_31 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_02 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)];

   CF_12 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_22 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_32 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_03 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)];

   CF_13 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_23 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_33 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_04 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)];

   CF_14 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_24 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_34 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_05 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)];

   CF_15 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CF_25 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CF_35 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,-2)];

    CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,-1)];

    CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,0)];

    CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,1)];

    CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,2)];

    CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC3(0,3)];

   CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,-2)];

   CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,-1)];

   CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,0)];

   CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,1)];

   CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,2)];

   CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC1(0,3)];

    CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,-2)];

    CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,-1)];

    CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,0)];

    CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,1)];

    CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,2)];

    CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC3(0,3)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,-2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,-2)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,-1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,-1)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,0)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,1)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,2)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC5(0,3)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC3(0,3)];

    max_lambda_1_00 = fmax(fabs(u1_B0[OPS_ACC8(0,-2)]), fmax(fabs(u1_B0[OPS_ACC8(0,3)]),
      fmax(fabs(u1_B0[OPS_ACC8(0,-1)]), fmax(fabs(u1_B0[OPS_ACC8(0,0)]), fmax(fabs(u1_B0[OPS_ACC8(0,1)]),
      fabs(u1_B0[OPS_ACC8(0,2)]))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(a_B0[OPS_ACC0(0,2)] + u1_B0[OPS_ACC8(0,2)]), fmax(fabs(a_B0[OPS_ACC0(0,1)] +
      u1_B0[OPS_ACC8(0,1)]), fmax(fabs(a_B0[OPS_ACC0(0,-2)] + u1_B0[OPS_ACC8(0,-2)]), fmax(fabs(a_B0[OPS_ACC0(0,-1)] +
      u1_B0[OPS_ACC8(0,-1)]), fmax(fabs(a_B0[OPS_ACC0(0,3)] + u1_B0[OPS_ACC8(0,3)]), fabs(a_B0[OPS_ACC0(0,0)] +
      u1_B0[OPS_ACC8(0,0)]))))));

    max_lambda_1_33 = fmax(fabs(a_B0[OPS_ACC0(0,1)] - u1_B0[OPS_ACC8(0,1)]), fmax(fabs(a_B0[OPS_ACC0(0,2)] -
      u1_B0[OPS_ACC8(0,2)]), fmax(fabs(a_B0[OPS_ACC0(0,-2)] - u1_B0[OPS_ACC8(0,-2)]), fmax(fabs(a_B0[OPS_ACC0(0,-1)] -
      u1_B0[OPS_ACC8(0,-1)]), fmax(fabs(a_B0[OPS_ACC0(0,3)] - u1_B0[OPS_ACC8(0,3)]), fabs(a_B0[OPS_ACC0(0,0)] -
      u1_B0[OPS_ACC8(0,0)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC6(0,0)] + 1, 4)*(4*theta_B0[OPS_ACC6(0,0)] + 1)
      + 1)));

    beta_0 = (rc8)*pow((rc13)*(CF_01 + CS_01*max_lambda_1_00) - rc13*(CF_03 + CS_03*max_lambda_1_00), 2) +
      (rc15)*pow((rc13)*(CF_01 + CS_01*max_lambda_1_00) - (CF_02 + CS_02*max_lambda_1_00) + (rc13)*(CF_03 +
      CS_03*max_lambda_1_00), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_02 + CS_02*max_lambda_1_00) - (CF_03 + CS_03*max_lambda_1_00) + (rc13)*(CF_04 +
      CS_04*max_lambda_1_00), 2) + (rc8)*pow((rc16)*(CF_02 + CS_02*max_lambda_1_00) - 2*(CF_03 + CS_03*max_lambda_1_00)
      + (rc13)*(CF_04 + CS_04*max_lambda_1_00), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_00 + CS_00*max_lambda_1_00) - 2*(CF_01 + CS_01*max_lambda_1_00) + (rc16)*(CF_02 +
      CS_02*max_lambda_1_00), 2) + (rc15)*pow((rc13)*(CF_00 + CS_00*max_lambda_1_00) - (CF_01 + CS_01*max_lambda_1_00) +
      (rc13)*(CF_02 + CS_02*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_01 + CS_01*max_lambda_1_00) + (rc20)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc21)*(CF_03 + CS_03*max_lambda_1_00)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc20)*(CF_03 + CS_03*max_lambda_1_00) - rc11*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_00 + CS_00*max_lambda_1_00) - rc22*(CF_01 + CS_01*max_lambda_1_00) +
      (rc23)*(CF_02 + CS_02*max_lambda_1_00));

    beta_0 = (rc8)*pow((rc13)*(CF_02 - CS_02*max_lambda_1_00) - rc13*(CF_04 - CS_04*max_lambda_1_00), 2) +
      (rc15)*pow((rc13)*(CF_02 - CS_02*max_lambda_1_00) - (CF_03 - CS_03*max_lambda_1_00) + (rc13)*(CF_04 -
      CS_04*max_lambda_1_00), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_01 - CS_01*max_lambda_1_00) - 2*(CF_02 - CS_02*max_lambda_1_00) + (rc16)*(CF_03 -
      CS_03*max_lambda_1_00), 2) + (rc15)*pow((rc13)*(CF_01 - CS_01*max_lambda_1_00) - (CF_02 - CS_02*max_lambda_1_00) +
      (rc13)*(CF_03 - CS_03*max_lambda_1_00), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_03 - CS_03*max_lambda_1_00) - (CF_04 - CS_04*max_lambda_1_00) + (rc13)*(CF_05 -
      CS_05*max_lambda_1_00), 2) + (rc8)*pow((rc16)*(CF_03 - CS_03*max_lambda_1_00) - 2*(CF_04 - CS_04*max_lambda_1_00)
      + (rc13)*(CF_05 - CS_05*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_02 - CS_02*max_lambda_1_00) + (rc20)*(CF_03 -
      CS_03*max_lambda_1_00) - rc11*(CF_04 - CS_04*max_lambda_1_00)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_01 -
      CS_01*max_lambda_1_00) + (rc20)*(CF_02 - CS_02*max_lambda_1_00) + (rc21)*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_03 - CS_03*max_lambda_1_00) - rc22*(CF_04 - CS_04*max_lambda_1_00) +
      (rc21)*(CF_05 - CS_05*max_lambda_1_00));

    beta_0 = (rc8)*pow((rc13)*(CF_11 + CS_11*max_lambda_1_11) - rc13*(CF_13 + CS_13*max_lambda_1_11), 2) +
      (rc15)*pow((rc13)*(CF_11 + CS_11*max_lambda_1_11) - (CF_12 + CS_12*max_lambda_1_11) + (rc13)*(CF_13 +
      CS_13*max_lambda_1_11), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_12 + CS_12*max_lambda_1_11) - (CF_13 + CS_13*max_lambda_1_11) + (rc13)*(CF_14 +
      CS_14*max_lambda_1_11), 2) + (rc8)*pow((rc16)*(CF_12 + CS_12*max_lambda_1_11) - 2*(CF_13 + CS_13*max_lambda_1_11)
      + (rc13)*(CF_14 + CS_14*max_lambda_1_11), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_10 + CS_10*max_lambda_1_11) - 2*(CF_11 + CS_11*max_lambda_1_11) + (rc16)*(CF_12 +
      CS_12*max_lambda_1_11), 2) + (rc15)*pow((rc13)*(CF_10 + CS_10*max_lambda_1_11) - (CF_11 + CS_11*max_lambda_1_11) +
      (rc13)*(CF_12 + CS_12*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_11 + CS_11*max_lambda_1_11) + (rc20)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc21)*(CF_13 + CS_13*max_lambda_1_11)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc20)*(CF_13 + CS_13*max_lambda_1_11) - rc11*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_10 + CS_10*max_lambda_1_11) - rc22*(CF_11 + CS_11*max_lambda_1_11) +
      (rc23)*(CF_12 + CS_12*max_lambda_1_11));

    beta_0 = (rc8)*pow((rc13)*(CF_12 - CS_12*max_lambda_1_11) - rc13*(CF_14 - CS_14*max_lambda_1_11), 2) +
      (rc15)*pow((rc13)*(CF_12 - CS_12*max_lambda_1_11) - (CF_13 - CS_13*max_lambda_1_11) + (rc13)*(CF_14 -
      CS_14*max_lambda_1_11), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_11 - CS_11*max_lambda_1_11) - 2*(CF_12 - CS_12*max_lambda_1_11) + (rc16)*(CF_13 -
      CS_13*max_lambda_1_11), 2) + (rc15)*pow((rc13)*(CF_11 - CS_11*max_lambda_1_11) - (CF_12 - CS_12*max_lambda_1_11) +
      (rc13)*(CF_13 - CS_13*max_lambda_1_11), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_13 - CS_13*max_lambda_1_11) - (CF_14 - CS_14*max_lambda_1_11) + (rc13)*(CF_15 -
      CS_15*max_lambda_1_11), 2) + (rc8)*pow((rc16)*(CF_13 - CS_13*max_lambda_1_11) - 2*(CF_14 - CS_14*max_lambda_1_11)
      + (rc13)*(CF_15 - CS_15*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_12 - CS_12*max_lambda_1_11) + (rc20)*(CF_13 -
      CS_13*max_lambda_1_11) - rc11*(CF_14 - CS_14*max_lambda_1_11)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_11 -
      CS_11*max_lambda_1_11) + (rc20)*(CF_12 - CS_12*max_lambda_1_11) + (rc21)*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_13 - CS_13*max_lambda_1_11) - rc22*(CF_14 - CS_14*max_lambda_1_11) +
      (rc21)*(CF_15 - CS_15*max_lambda_1_11));

    beta_0 = (rc8)*pow((rc13)*(CF_21 + CS_21*max_lambda_1_22) - rc13*(CF_23 + CS_23*max_lambda_1_22), 2) +
      (rc15)*pow((rc13)*(CF_21 + CS_21*max_lambda_1_22) - (CF_22 + CS_22*max_lambda_1_22) + (rc13)*(CF_23 +
      CS_23*max_lambda_1_22), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_22 + CS_22*max_lambda_1_22) - (CF_23 + CS_23*max_lambda_1_22) + (rc13)*(CF_24 +
      CS_24*max_lambda_1_22), 2) + (rc8)*pow((rc16)*(CF_22 + CS_22*max_lambda_1_22) - 2*(CF_23 + CS_23*max_lambda_1_22)
      + (rc13)*(CF_24 + CS_24*max_lambda_1_22), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_20 + CS_20*max_lambda_1_22) - 2*(CF_21 + CS_21*max_lambda_1_22) + (rc16)*(CF_22 +
      CS_22*max_lambda_1_22), 2) + (rc15)*pow((rc13)*(CF_20 + CS_20*max_lambda_1_22) - (CF_21 + CS_21*max_lambda_1_22) +
      (rc13)*(CF_22 + CS_22*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_21 + CS_21*max_lambda_1_22) + (rc20)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc21)*(CF_23 + CS_23*max_lambda_1_22)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc20)*(CF_23 + CS_23*max_lambda_1_22) - rc11*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_20 + CS_20*max_lambda_1_22) - rc22*(CF_21 + CS_21*max_lambda_1_22) +
      (rc23)*(CF_22 + CS_22*max_lambda_1_22));

    beta_0 = (rc8)*pow((rc13)*(CF_22 - CS_22*max_lambda_1_22) - rc13*(CF_24 - CS_24*max_lambda_1_22), 2) +
      (rc15)*pow((rc13)*(CF_22 - CS_22*max_lambda_1_22) - (CF_23 - CS_23*max_lambda_1_22) + (rc13)*(CF_24 -
      CS_24*max_lambda_1_22), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_21 - CS_21*max_lambda_1_22) - 2*(CF_22 - CS_22*max_lambda_1_22) + (rc16)*(CF_23 -
      CS_23*max_lambda_1_22), 2) + (rc15)*pow((rc13)*(CF_21 - CS_21*max_lambda_1_22) - (CF_22 - CS_22*max_lambda_1_22) +
      (rc13)*(CF_23 - CS_23*max_lambda_1_22), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_23 - CS_23*max_lambda_1_22) - (CF_24 - CS_24*max_lambda_1_22) + (rc13)*(CF_25 -
      CS_25*max_lambda_1_22), 2) + (rc8)*pow((rc16)*(CF_23 - CS_23*max_lambda_1_22) - 2*(CF_24 - CS_24*max_lambda_1_22)
      + (rc13)*(CF_25 - CS_25*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_22 - CS_22*max_lambda_1_22) + (rc20)*(CF_23 -
      CS_23*max_lambda_1_22) - rc11*(CF_24 - CS_24*max_lambda_1_22)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_21 -
      CS_21*max_lambda_1_22) + (rc20)*(CF_22 - CS_22*max_lambda_1_22) + (rc21)*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_23 - CS_23*max_lambda_1_22) - rc22*(CF_24 - CS_24*max_lambda_1_22) +
      (rc21)*(CF_25 - CS_25*max_lambda_1_22));

    beta_0 = (rc8)*pow((rc13)*(CF_31 + CS_31*max_lambda_1_33) - rc13*(CF_33 + CS_33*max_lambda_1_33), 2) +
      (rc15)*pow((rc13)*(CF_31 + CS_31*max_lambda_1_33) - (CF_32 + CS_32*max_lambda_1_33) + (rc13)*(CF_33 +
      CS_33*max_lambda_1_33), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_32 + CS_32*max_lambda_1_33) - (CF_33 + CS_33*max_lambda_1_33) + (rc13)*(CF_34 +
      CS_34*max_lambda_1_33), 2) + (rc8)*pow((rc16)*(CF_32 + CS_32*max_lambda_1_33) - 2*(CF_33 + CS_33*max_lambda_1_33)
      + (rc13)*(CF_34 + CS_34*max_lambda_1_33), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_30 + CS_30*max_lambda_1_33) - 2*(CF_31 + CS_31*max_lambda_1_33) + (rc16)*(CF_32 +
      CS_32*max_lambda_1_33), 2) + (rc15)*pow((rc13)*(CF_30 + CS_30*max_lambda_1_33) - (CF_31 + CS_31*max_lambda_1_33) +
      (rc13)*(CF_32 + CS_32*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_31 + CS_31*max_lambda_1_33) + (rc20)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc21)*(CF_33 + CS_33*max_lambda_1_33)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc20)*(CF_33 + CS_33*max_lambda_1_33) - rc11*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_30 + CS_30*max_lambda_1_33) - rc22*(CF_31 + CS_31*max_lambda_1_33) +
      (rc23)*(CF_32 + CS_32*max_lambda_1_33));

    beta_0 = (rc8)*pow((rc13)*(CF_32 - CS_32*max_lambda_1_33) - rc13*(CF_34 - CS_34*max_lambda_1_33), 2) +
      (rc15)*pow((rc13)*(CF_32 - CS_32*max_lambda_1_33) - (CF_33 - CS_33*max_lambda_1_33) + (rc13)*(CF_34 -
      CS_34*max_lambda_1_33), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_31 - CS_31*max_lambda_1_33) - 2*(CF_32 - CS_32*max_lambda_1_33) + (rc16)*(CF_33 -
      CS_33*max_lambda_1_33), 2) + (rc15)*pow((rc13)*(CF_31 - CS_31*max_lambda_1_33) - (CF_32 - CS_32*max_lambda_1_33) +
      (rc13)*(CF_33 - CS_33*max_lambda_1_33), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_33 - CS_33*max_lambda_1_33) - (CF_34 - CS_34*max_lambda_1_33) + (rc13)*(CF_35 -
      CS_35*max_lambda_1_33), 2) + (rc8)*pow((rc16)*(CF_33 - CS_33*max_lambda_1_33) - 2*(CF_34 - CS_34*max_lambda_1_33)
      + (rc13)*(CF_35 - CS_35*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

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

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_32 - CS_32*max_lambda_1_33) + (rc20)*(CF_33 -
      CS_33*max_lambda_1_33) - rc11*(CF_34 - CS_34*max_lambda_1_33)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_31 -
      CS_31*max_lambda_1_33) + (rc20)*(CF_32 - CS_32*max_lambda_1_33) + (rc21)*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_33 - CS_33*max_lambda_1_33) - rc22*(CF_34 - CS_34*max_lambda_1_33) +
      (rc21)*(CF_35 - CS_35*max_lambda_1_33));

    wk4_B0[OPS_ACC10(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    wk5_B0[OPS_ACC12(0,0)] = 0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_3*inv_AVG_a + AVG_1_rho*Recon_1 + AVG_1_u0*Recon_0;

    wk6_B0[OPS_ACC11(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_a + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_a + AVG_1_u1) + AVG_1_u1*Recon_0;

    wk7_B0[OPS_ACC9(0,0)] = AVG_1_rho*AVG_1_u0*Recon_1 +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*AVG_1_u1) + Recon_0*((rc13)*pow(AVG_1_u0, 2) + (rc13)*pow(AVG_1_u1, 2));

}

 void opensbliblock00Kernel014(const double *wk0_B0, const double *wk5_B0, const double *wk6_B0, const double *wk2_B0,
const double *wk3_B0, const double *wk4_B0, const double *wk1_B0, const double *D11_B0, const double *wk7_B0, double
*Residual1_B0, double *Residual3_B0, double *Residual2_B0, double *Residual0_B0)
{
    Residual0_B0[OPS_ACC12(0,0)] = -inv_0*(-wk4_B0[OPS_ACC5(0,-1)] + wk4_B0[OPS_ACC5(0,0)])*D11_B0[OPS_ACC7(0,0)] -
      inv_1*(wk0_B0[OPS_ACC0(0,0)] - wk0_B0[OPS_ACC0(-1,0)]);

    Residual1_B0[OPS_ACC9(0,0)] = -inv_0*(wk5_B0[OPS_ACC1(0,0)] - wk5_B0[OPS_ACC1(0,-1)])*D11_B0[OPS_ACC7(0,0)] -
      inv_1*(wk1_B0[OPS_ACC6(0,0)] - wk1_B0[OPS_ACC6(-1,0)]);

    Residual2_B0[OPS_ACC11(0,0)] = -inv_0*(-wk6_B0[OPS_ACC2(0,-1)] + wk6_B0[OPS_ACC2(0,0)])*D11_B0[OPS_ACC7(0,0)] -
      inv_1*(wk2_B0[OPS_ACC3(0,0)] - wk2_B0[OPS_ACC3(-1,0)]);

    Residual3_B0[OPS_ACC10(0,0)] = -inv_0*(wk7_B0[OPS_ACC8(0,0)] - wk7_B0[OPS_ACC8(0,-1)])*D11_B0[OPS_ACC7(0,0)] -
      inv_1*(wk3_B0[OPS_ACC4(0,0)] - wk3_B0[OPS_ACC4(-1,0)]);

}

void opensbliblock00Kernel019(const double *u0_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*((rc10)*u0_B0[OPS_ACC0(0,3)] - 3*u0_B0[OPS_ACC0(0,2)] +
      4*u0_B0[OPS_ACC0(0,1)] - rc8*u0_B0[OPS_ACC0(0,4)] - rc9*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(u0_B0[OPS_ACC0(0,3)] - 6*u0_B0[OPS_ACC0(0,2)] - 3*u0_B0[OPS_ACC0(0,-1)] + 18*u0_B0[OPS_ACC0(0,1)] -
      10*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-4*u0_B0[OPS_ACC0(0,-1)] +
      3*u0_B0[OPS_ACC0(0,-2)] - rc10*u0_B0[OPS_ACC0(0,-3)] + (rc9)*u0_B0[OPS_ACC0(0,0)] +
      (rc8)*u0_B0[OPS_ACC0(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-18*u0_B0[OPS_ACC0(0,-1)] +
      6*u0_B0[OPS_ACC0(0,-2)] + 3*u0_B0[OPS_ACC0(0,1)] - u0_B0[OPS_ACC0(0,-3)] + 10*u0_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_0*(-u0_B0[OPS_ACC0(0,2)] + 8*u0_B0[OPS_ACC0(0,1)] - 8*u0_B0[OPS_ACC0(0,-1)] +
      u0_B0[OPS_ACC0(0,-2)])
)))));

}

void opensbliblock00Kernel021(const double *u0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc8*u0_B0[OPS_ACC0(4,0)] + (rc10)*u0_B0[OPS_ACC0(3,0)] -
      3*u0_B0[OPS_ACC0(2,0)] + 4*u0_B0[OPS_ACC0(1,0)] - rc9*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-3*u0_B0[OPS_ACC0(-1,0)] + u0_B0[OPS_ACC0(3,0)] - 6*u0_B0[OPS_ACC0(2,0)] + 18*u0_B0[OPS_ACC0(1,0)] -
      10*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-4*u0_B0[OPS_ACC0(-1,0)] +
      3*u0_B0[OPS_ACC0(-2,0)] - rc10*u0_B0[OPS_ACC0(-3,0)] + (rc8)*u0_B0[OPS_ACC0(-4,0)] +
      (rc9)*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(6*u0_B0[OPS_ACC0(-2,0)] -
      18*u0_B0[OPS_ACC0(-1,0)] - u0_B0[OPS_ACC0(-3,0)] + 3*u0_B0[OPS_ACC0(1,0)] + 10*u0_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_1*(u0_B0[OPS_ACC0(-2,0)] - u0_B0[OPS_ACC0(2,0)] - 8*u0_B0[OPS_ACC0(-1,0)] +
      8*u0_B0[OPS_ACC0(1,0)])
)))));

}

void opensbliblock00Kernel022(const double *u1_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(-rc9*u1_B0[OPS_ACC0(0,0)] - rc8*u1_B0[OPS_ACC0(0,4)] +
      4*u1_B0[OPS_ACC0(0,1)] - 3*u1_B0[OPS_ACC0(0,2)] + (rc10)*u1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-10*u1_B0[OPS_ACC0(0,0)] + 18*u1_B0[OPS_ACC0(0,1)] - 3*u1_B0[OPS_ACC0(0,-1)] -
      6*u1_B0[OPS_ACC0(0,2)] + u1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc8)*u1_B0[OPS_ACC0(0,-4)] + (rc9)*u1_B0[OPS_ACC0(0,0)] - rc10*u1_B0[OPS_ACC0(0,-3)] +
      3*u1_B0[OPS_ACC0(0,-2)] - 4*u1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(10*u1_B0[OPS_ACC0(0,0)] - u1_B0[OPS_ACC0(0,-3)] + 3*u1_B0[OPS_ACC0(0,1)] - 18*u1_B0[OPS_ACC0(0,-1)]
      + 6*u1_B0[OPS_ACC0(0,-2)])
)
: (
   (rc11)*inv_0*(u1_B0[OPS_ACC0(0,-2)] - 8*u1_B0[OPS_ACC0(0,-1)] +
      8*u1_B0[OPS_ACC0(0,1)] - u1_B0[OPS_ACC0(0,2)])
)))));

}

void opensbliblock00Kernel024(const double *u1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc9*u1_B0[OPS_ACC0(0,0)] + 4*u1_B0[OPS_ACC0(1,0)] -
      3*u1_B0[OPS_ACC0(2,0)] - rc8*u1_B0[OPS_ACC0(4,0)] + (rc10)*u1_B0[OPS_ACC0(3,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-10*u1_B0[OPS_ACC0(0,0)] + 18*u1_B0[OPS_ACC0(1,0)] - 6*u1_B0[OPS_ACC0(2,0)] -
      3*u1_B0[OPS_ACC0(-1,0)] + u1_B0[OPS_ACC0(3,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc9)*u1_B0[OPS_ACC0(0,0)] + (rc8)*u1_B0[OPS_ACC0(-4,0)] - rc10*u1_B0[OPS_ACC0(-3,0)] +
      3*u1_B0[OPS_ACC0(-2,0)] - 4*u1_B0[OPS_ACC0(-1,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc11)*inv_1*(10*u1_B0[OPS_ACC0(0,0)] + 3*u1_B0[OPS_ACC0(1,0)] - u1_B0[OPS_ACC0(-3,0)] - 18*u1_B0[OPS_ACC0(-1,0)]
      + 6*u1_B0[OPS_ACC0(-2,0)])
)
: (
   (rc11)*inv_1*(8*u1_B0[OPS_ACC0(1,0)] - 8*u1_B0[OPS_ACC0(-1,0)] +
      u1_B0[OPS_ACC0(-2,0)] - u1_B0[OPS_ACC0(2,0)])
)))));

}

void opensbliblock00Kernel025(const double *u2_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(4*u2_B0[OPS_ACC0(0,1)] - rc9*u2_B0[OPS_ACC0(0,0)] -
      rc8*u2_B0[OPS_ACC0(0,4)] + (rc10)*u2_B0[OPS_ACC0(0,3)] - 3*u2_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(18*u2_B0[OPS_ACC0(0,1)] - 10*u2_B0[OPS_ACC0(0,0)] + u2_B0[OPS_ACC0(0,3)] - 3*u2_B0[OPS_ACC0(0,-1)] -
      6*u2_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-rc10*u2_B0[OPS_ACC0(0,-3)] +
      (rc8)*u2_B0[OPS_ACC0(0,-4)] + (rc9)*u2_B0[OPS_ACC0(0,0)] - 4*u2_B0[OPS_ACC0(0,-1)] + 3*u2_B0[OPS_ACC0(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-u2_B0[OPS_ACC0(0,-3)] + 3*u2_B0[OPS_ACC0(0,1)] +
      10*u2_B0[OPS_ACC0(0,0)] - 18*u2_B0[OPS_ACC0(0,-1)] + 6*u2_B0[OPS_ACC0(0,-2)])
)
: (
  
      (rc11)*inv_0*(u2_B0[OPS_ACC0(0,-2)] - 8*u2_B0[OPS_ACC0(0,-1)] + 8*u2_B0[OPS_ACC0(0,1)] -
      u2_B0[OPS_ACC0(0,2)])
)))));

}

void opensbliblock00Kernel027(const double *u2_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc8*u2_B0[OPS_ACC0(4,0)] + 4*u2_B0[OPS_ACC0(1,0)] -
      rc9*u2_B0[OPS_ACC0(0,0)] + (rc10)*u2_B0[OPS_ACC0(3,0)] - 3*u2_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(18*u2_B0[OPS_ACC0(1,0)] - 10*u2_B0[OPS_ACC0(0,0)] + u2_B0[OPS_ACC0(3,0)] - 3*u2_B0[OPS_ACC0(-1,0)] -
      6*u2_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*u2_B0[OPS_ACC0(-3,0)] +
      (rc8)*u2_B0[OPS_ACC0(-4,0)] + (rc9)*u2_B0[OPS_ACC0(0,0)] + 3*u2_B0[OPS_ACC0(-2,0)] - 4*u2_B0[OPS_ACC0(-1,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-u2_B0[OPS_ACC0(-3,0)] + 3*u2_B0[OPS_ACC0(1,0)] +
      10*u2_B0[OPS_ACC0(0,0)] + 6*u2_B0[OPS_ACC0(-2,0)] - 18*u2_B0[OPS_ACC0(-1,0)])
)
: (
  
      (rc11)*inv_1*(8*u2_B0[OPS_ACC0(1,0)] - 8*u2_B0[OPS_ACC0(-1,0)] + u2_B0[OPS_ACC0(-2,0)] -
      u2_B0[OPS_ACC0(2,0)])
)))));

}

void opensbliblock00Kernel028(const double *T_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(-3*T_B0[OPS_ACC0(0,2)] + 4*T_B0[OPS_ACC0(0,1)] -
      rc9*T_B0[OPS_ACC0(0,0)] - rc8*T_B0[OPS_ACC0(0,4)] + (rc10)*T_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-6*T_B0[OPS_ACC0(0,2)] + 18*T_B0[OPS_ACC0(0,1)] - 3*T_B0[OPS_ACC0(0,-1)] - 10*T_B0[OPS_ACC0(0,0)] +
      T_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc8)*T_B0[OPS_ACC0(0,-4)] -
      4*T_B0[OPS_ACC0(0,-1)] + 3*T_B0[OPS_ACC0(0,-2)] + (rc9)*T_B0[OPS_ACC0(0,0)] - rc10*T_B0[OPS_ACC0(0,-3)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*T_B0[OPS_ACC0(0,1)] - 18*T_B0[OPS_ACC0(0,-1)] +
      6*T_B0[OPS_ACC0(0,-2)] + 10*T_B0[OPS_ACC0(0,0)] - T_B0[OPS_ACC0(0,-3)])
)
: (
  
      (rc11)*inv_0*(T_B0[OPS_ACC0(0,-2)] - 8*T_B0[OPS_ACC0(0,-1)] + 8*T_B0[OPS_ACC0(0,1)] - T_B0[OPS_ACC0(0,2)])
)))));

}

void opensbliblock00Kernel030(const double *T_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc8*T_B0[OPS_ACC0(4,0)] + 4*T_B0[OPS_ACC0(1,0)] -
      rc9*T_B0[OPS_ACC0(0,0)] + (rc10)*T_B0[OPS_ACC0(3,0)] - 3*T_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-3*T_B0[OPS_ACC0(-1,0)] + 18*T_B0[OPS_ACC0(1,0)] - 10*T_B0[OPS_ACC0(0,0)] + T_B0[OPS_ACC0(3,0)] -
      6*T_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc8)*T_B0[OPS_ACC0(-4,0)] -
      4*T_B0[OPS_ACC0(-1,0)] + 3*T_B0[OPS_ACC0(-2,0)] + (rc9)*T_B0[OPS_ACC0(0,0)] - rc10*T_B0[OPS_ACC0(-3,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-18*T_B0[OPS_ACC0(-1,0)] + 6*T_B0[OPS_ACC0(-2,0)] +
      3*T_B0[OPS_ACC0(1,0)] + 10*T_B0[OPS_ACC0(0,0)] - T_B0[OPS_ACC0(-3,0)])
)
: (
  
      (rc11)*inv_1*(8*T_B0[OPS_ACC0(1,0)] - 8*T_B0[OPS_ACC0(-1,0)] + T_B0[OPS_ACC0(-2,0)] - T_B0[OPS_ACC0(2,0)])
)))));

}

 void opensbliblock00Kernel034(const double *wk1_B0, const double *wk0_B0, const double *wk6_B0, const double *wk2_B0,
const double *mu_B0, const double *u0_B0, const double *wk3_B0, const double *D11_B0, const double *T_B0, const double
*SD111_B0, const double *wk7_B0, const double *u1_B0, double *Residual1_B0, double *Residual3_B0, double *Residual2_B0,
const int *idx)
{
   double localeval_1 = 0.0;
   double localeval_8 = 0.0;
   double localeval_5 = 0.0;
   double localeval_6 = 0.0;
   double localeval_4 = 0.0;
   double localeval_9 = 0.0;
   double localeval_3 = 0.0;
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_7 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   (rc11)*inv_2*(114*T_B0[OPS_ACC8(0,2)] - 104*T_B0[OPS_ACC8(0,1)] +
      35*T_B0[OPS_ACC8(0,0)] + 11*T_B0[OPS_ACC8(0,4)] - 56*T_B0[OPS_ACC8(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_2*(4*T_B0[OPS_ACC8(0,2)] + 6*T_B0[OPS_ACC8(0,1)] + 11*T_B0[OPS_ACC8(0,-1)] - 20*T_B0[OPS_ACC8(0,0)] -
      T_B0[OPS_ACC8(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc11)*inv_2*(11*T_B0[OPS_ACC8(0,-4)] -
      104*T_B0[OPS_ACC8(0,-1)] + 114*T_B0[OPS_ACC8(0,-2)] + 35*T_B0[OPS_ACC8(0,0)] - 56*T_B0[OPS_ACC8(0,-3)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_2*(11*T_B0[OPS_ACC8(0,1)] + 4*T_B0[OPS_ACC8(0,-2)] +
      6*T_B0[OPS_ACC8(0,-1)] - 20*T_B0[OPS_ACC8(0,0)] - T_B0[OPS_ACC8(0,-3)])
)
: (
  
      (rc11)*inv_2*(-T_B0[OPS_ACC8(0,2)] + 16*T_B0[OPS_ACC8(0,1)] + 16*T_B0[OPS_ACC8(0,-1)] - T_B0[OPS_ACC8(0,-2)] -
      30*T_B0[OPS_ACC8(0,0)])
)))));

    localeval_1 = ((idx[0] == 0) ? (
   (rc11)*inv_3*(11*T_B0[OPS_ACC8(4,0)] - 104*T_B0[OPS_ACC8(1,0)] +
      35*T_B0[OPS_ACC8(0,0)] - 56*T_B0[OPS_ACC8(3,0)] + 114*T_B0[OPS_ACC8(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_3*(11*T_B0[OPS_ACC8(-1,0)] + 6*T_B0[OPS_ACC8(1,0)] - 20*T_B0[OPS_ACC8(0,0)] - T_B0[OPS_ACC8(3,0)] +
      4*T_B0[OPS_ACC8(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*inv_3*(11*T_B0[OPS_ACC8(-4,0)] +
      114*T_B0[OPS_ACC8(-2,0)] - 104*T_B0[OPS_ACC8(-1,0)] + 35*T_B0[OPS_ACC8(0,0)] - 56*T_B0[OPS_ACC8(-3,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_3*(6*T_B0[OPS_ACC8(-1,0)] + 4*T_B0[OPS_ACC8(-2,0)] +
      11*T_B0[OPS_ACC8(1,0)] - 20*T_B0[OPS_ACC8(0,0)] - T_B0[OPS_ACC8(-3,0)])
)
: (
  
      (rc11)*inv_3*(16*T_B0[OPS_ACC8(-1,0)] - T_B0[OPS_ACC8(-2,0)] + 16*T_B0[OPS_ACC8(1,0)] - 30*T_B0[OPS_ACC8(0,0)] -
      T_B0[OPS_ACC8(2,0)])
)))));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(4*mu_B0[OPS_ACC4(1,0)] - rc9*mu_B0[OPS_ACC4(0,0)] +
      (rc10)*mu_B0[OPS_ACC4(3,0)] - rc8*mu_B0[OPS_ACC4(4,0)] - 3*mu_B0[OPS_ACC4(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(18*mu_B0[OPS_ACC4(1,0)] - 10*mu_B0[OPS_ACC4(0,0)] + mu_B0[OPS_ACC4(3,0)] - 3*mu_B0[OPS_ACC4(-1,0)] -
      6*mu_B0[OPS_ACC4(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc8)*mu_B0[OPS_ACC4(-4,0)] +
      (rc9)*mu_B0[OPS_ACC4(0,0)] + 3*mu_B0[OPS_ACC4(-2,0)] - 4*mu_B0[OPS_ACC4(-1,0)] - rc10*mu_B0[OPS_ACC4(-3,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(3*mu_B0[OPS_ACC4(1,0)] + 10*mu_B0[OPS_ACC4(0,0)] +
      6*mu_B0[OPS_ACC4(-2,0)] - 18*mu_B0[OPS_ACC4(-1,0)] - mu_B0[OPS_ACC4(-3,0)])
)
: (
  
      (rc11)*inv_1*(-8*mu_B0[OPS_ACC4(-1,0)] + 8*mu_B0[OPS_ACC4(1,0)] + mu_B0[OPS_ACC4(-2,0)] -
      mu_B0[OPS_ACC4(2,0)])
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*(-rc9*mu_B0[OPS_ACC4(0,0)] - rc8*mu_B0[OPS_ACC4(0,4)] +
      (rc10)*mu_B0[OPS_ACC4(0,3)] - 3*mu_B0[OPS_ACC4(0,2)] + 4*mu_B0[OPS_ACC4(0,1)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-3*mu_B0[OPS_ACC4(0,-1)] - 10*mu_B0[OPS_ACC4(0,0)] + mu_B0[OPS_ACC4(0,3)] - 6*mu_B0[OPS_ACC4(0,2)] +
      18*mu_B0[OPS_ACC4(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-4*mu_B0[OPS_ACC4(0,-1)] +
      3*mu_B0[OPS_ACC4(0,-2)] + (rc9)*mu_B0[OPS_ACC4(0,0)] - rc10*mu_B0[OPS_ACC4(0,-3)] +
      (rc8)*mu_B0[OPS_ACC4(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-18*mu_B0[OPS_ACC4(0,-1)] +
      6*mu_B0[OPS_ACC4(0,-2)] + 10*mu_B0[OPS_ACC4(0,0)] - mu_B0[OPS_ACC4(0,-3)] + 3*mu_B0[OPS_ACC4(0,1)])
)
: (
  
      (rc11)*inv_0*(-8*mu_B0[OPS_ACC4(0,-1)] - mu_B0[OPS_ACC4(0,2)] + 8*mu_B0[OPS_ACC4(0,1)] +
      mu_B0[OPS_ACC4(0,-2)])
)))));

    localeval_4 = ((idx[0] == 0) ? (
   (rc11)*inv_3*(11*u0_B0[OPS_ACC5(4,0)] - 56*u0_B0[OPS_ACC5(3,0)] +
      114*u0_B0[OPS_ACC5(2,0)] - 104*u0_B0[OPS_ACC5(1,0)] + 35*u0_B0[OPS_ACC5(0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_3*(11*u0_B0[OPS_ACC5(-1,0)] - u0_B0[OPS_ACC5(3,0)] + 4*u0_B0[OPS_ACC5(2,0)] + 6*u0_B0[OPS_ACC5(1,0)] -
      20*u0_B0[OPS_ACC5(0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*inv_3*(-104*u0_B0[OPS_ACC5(-1,0)] +
      114*u0_B0[OPS_ACC5(-2,0)] - 56*u0_B0[OPS_ACC5(-3,0)] + 11*u0_B0[OPS_ACC5(-4,0)] + 35*u0_B0[OPS_ACC5(0,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_3*(4*u0_B0[OPS_ACC5(-2,0)] + 6*u0_B0[OPS_ACC5(-1,0)] -
      u0_B0[OPS_ACC5(-3,0)] + 11*u0_B0[OPS_ACC5(1,0)] - 20*u0_B0[OPS_ACC5(0,0)])
)
: (
  
      (rc11)*inv_3*(16*u0_B0[OPS_ACC5(-1,0)] - u0_B0[OPS_ACC5(-2,0)] - u0_B0[OPS_ACC5(2,0)] + 16*u0_B0[OPS_ACC5(1,0)] -
      30*u0_B0[OPS_ACC5(0,0)])
)))));

    localeval_5 = ((idx[1] == 0) ? (
   (rc11)*inv_2*(-56*u0_B0[OPS_ACC5(0,3)] + 114*u0_B0[OPS_ACC5(0,2)] -
      104*u0_B0[OPS_ACC5(0,1)] + 11*u0_B0[OPS_ACC5(0,4)] + 35*u0_B0[OPS_ACC5(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_2*(-u0_B0[OPS_ACC5(0,3)] + 4*u0_B0[OPS_ACC5(0,2)] + 11*u0_B0[OPS_ACC5(0,-1)] + 6*u0_B0[OPS_ACC5(0,1)] -
      20*u0_B0[OPS_ACC5(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc11)*inv_2*(114*u0_B0[OPS_ACC5(0,-2)] -
      104*u0_B0[OPS_ACC5(0,-1)] - 56*u0_B0[OPS_ACC5(0,-3)] + 35*u0_B0[OPS_ACC5(0,0)] + 11*u0_B0[OPS_ACC5(0,-4)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_2*(4*u0_B0[OPS_ACC5(0,-2)] + 6*u0_B0[OPS_ACC5(0,-1)] +
      11*u0_B0[OPS_ACC5(0,1)] - u0_B0[OPS_ACC5(0,-3)] - 20*u0_B0[OPS_ACC5(0,0)])
)
: (
  
      (rc11)*inv_2*(-u0_B0[OPS_ACC5(0,2)] - u0_B0[OPS_ACC5(0,-2)] + 16*u0_B0[OPS_ACC5(0,-1)] + 16*u0_B0[OPS_ACC5(0,1)] -
      30*u0_B0[OPS_ACC5(0,0)])
)))));

    localeval_6 = ((idx[0] == 0) ? (
   (rc11)*inv_3*(35*u1_B0[OPS_ACC11(0,0)] - 104*u1_B0[OPS_ACC11(1,0)] +
      114*u1_B0[OPS_ACC11(2,0)] + 11*u1_B0[OPS_ACC11(4,0)] - 56*u1_B0[OPS_ACC11(3,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_3*(-20*u1_B0[OPS_ACC11(0,0)] + 6*u1_B0[OPS_ACC11(1,0)] + 4*u1_B0[OPS_ACC11(2,0)] +
      11*u1_B0[OPS_ACC11(-1,0)] - u1_B0[OPS_ACC11(3,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc11)*inv_3*(35*u1_B0[OPS_ACC11(0,0)] + 11*u1_B0[OPS_ACC11(-4,0)] - 56*u1_B0[OPS_ACC11(-3,0)] +
      114*u1_B0[OPS_ACC11(-2,0)] - 104*u1_B0[OPS_ACC11(-1,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc11)*inv_3*(-20*u1_B0[OPS_ACC11(0,0)] + 11*u1_B0[OPS_ACC11(1,0)] - u1_B0[OPS_ACC11(-3,0)] +
      6*u1_B0[OPS_ACC11(-1,0)] + 4*u1_B0[OPS_ACC11(-2,0)])
)
: (
   (rc11)*inv_3*(-30*u1_B0[OPS_ACC11(0,0)] +
      16*u1_B0[OPS_ACC11(1,0)] - u1_B0[OPS_ACC11(2,0)] - u1_B0[OPS_ACC11(-2,0)] + 16*u1_B0[OPS_ACC11(-1,0)])
)))));

    localeval_7 = ((idx[1] == 0) ? (
   (rc11)*inv_2*(35*u1_B0[OPS_ACC11(0,0)] + 11*u1_B0[OPS_ACC11(0,4)] -
      104*u1_B0[OPS_ACC11(0,1)] + 114*u1_B0[OPS_ACC11(0,2)] - 56*u1_B0[OPS_ACC11(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_2*(-20*u1_B0[OPS_ACC11(0,0)] + 6*u1_B0[OPS_ACC11(0,1)] + 11*u1_B0[OPS_ACC11(0,-1)] +
      4*u1_B0[OPS_ACC11(0,2)] - u1_B0[OPS_ACC11(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc11)*inv_2*(11*u1_B0[OPS_ACC11(0,-4)] + 35*u1_B0[OPS_ACC11(0,0)] - 56*u1_B0[OPS_ACC11(0,-3)] -
      104*u1_B0[OPS_ACC11(0,-1)] + 114*u1_B0[OPS_ACC11(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_2*(-20*u1_B0[OPS_ACC11(0,0)] - u1_B0[OPS_ACC11(0,-3)] + 11*u1_B0[OPS_ACC11(0,1)] +
      4*u1_B0[OPS_ACC11(0,-2)] + 6*u1_B0[OPS_ACC11(0,-1)])
)
: (
   (rc11)*inv_2*(-30*u1_B0[OPS_ACC11(0,0)] +
      16*u1_B0[OPS_ACC11(0,1)] + 16*u1_B0[OPS_ACC11(0,-1)] - u1_B0[OPS_ACC11(0,-2)] - u1_B0[OPS_ACC11(0,2)])
)))));

    localeval_8 = ((idx[1] == 0) ? (
   inv_0*(4*wk1_B0[OPS_ACC0(0,1)] - 3*wk1_B0[OPS_ACC0(0,2)] +
      (rc10)*wk1_B0[OPS_ACC0(0,3)] - rc8*wk1_B0[OPS_ACC0(0,4)] - rc9*wk1_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(18*wk1_B0[OPS_ACC0(0,1)] - 6*wk1_B0[OPS_ACC0(0,2)] + wk1_B0[OPS_ACC0(0,3)] -
      10*wk1_B0[OPS_ACC0(0,0)] - 3*wk1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(3*wk1_B0[OPS_ACC0(0,-2)] + (rc8)*wk1_B0[OPS_ACC0(0,-4)] - rc10*wk1_B0[OPS_ACC0(0,-3)] +
      (rc9)*wk1_B0[OPS_ACC0(0,0)] - 4*wk1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(3*wk1_B0[OPS_ACC0(0,1)] - 18*wk1_B0[OPS_ACC0(0,-1)] - wk1_B0[OPS_ACC0(0,-3)] +
      10*wk1_B0[OPS_ACC0(0,0)] + 6*wk1_B0[OPS_ACC0(0,-2)])
)
: (
   (rc11)*inv_0*(-wk1_B0[OPS_ACC0(0,2)] +
      8*wk1_B0[OPS_ACC0(0,1)] - 8*wk1_B0[OPS_ACC0(0,-1)] + wk1_B0[OPS_ACC0(0,-2)])
)))));

    localeval_9 = ((idx[1] == 0) ? (
   inv_0*(4*wk3_B0[OPS_ACC6(0,1)] - 3*wk3_B0[OPS_ACC6(0,2)] +
      (rc10)*wk3_B0[OPS_ACC6(0,3)] - rc8*wk3_B0[OPS_ACC6(0,4)] - rc9*wk3_B0[OPS_ACC6(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(18*wk3_B0[OPS_ACC6(0,1)] - 6*wk3_B0[OPS_ACC6(0,2)] + wk3_B0[OPS_ACC6(0,3)] -
      10*wk3_B0[OPS_ACC6(0,0)] - 3*wk3_B0[OPS_ACC6(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(3*wk3_B0[OPS_ACC6(0,-2)] + (rc8)*wk3_B0[OPS_ACC6(0,-4)] - rc10*wk3_B0[OPS_ACC6(0,-3)] +
      (rc9)*wk3_B0[OPS_ACC6(0,0)] - 4*wk3_B0[OPS_ACC6(0,-1)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(3*wk3_B0[OPS_ACC6(0,1)] + 6*wk3_B0[OPS_ACC6(0,-2)] - wk3_B0[OPS_ACC6(0,-3)] +
      10*wk3_B0[OPS_ACC6(0,0)] - 18*wk3_B0[OPS_ACC6(0,-1)])
)
: (
   (rc11)*inv_0*(-wk3_B0[OPS_ACC6(0,2)] +
      8*wk3_B0[OPS_ACC6(0,1)] - 8*wk3_B0[OPS_ACC6(0,-1)] + wk3_B0[OPS_ACC6(0,-2)])
)))));

    Residual1_B0[OPS_ACC12(0,0)] = rcinv25*localeval_2*(-rc26*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*wk1_B0[OPS_ACC0(0,0)]) + rcinv25*localeval_3*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      wk3_B0[OPS_ACC6(0,0)])*D11_B0[OPS_ACC7(0,0)] + rcinv25*((rc10)*localeval_4 +
      localeval_5*pow(D11_B0[OPS_ACC7(0,0)], 2) + (rc27)*localeval_9*D11_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC7(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk0_B0[OPS_ACC1(0,0)])*mu_B0[OPS_ACC4(0,0)] +
      Residual1_B0[OPS_ACC12(0,0)];

    Residual2_B0[OPS_ACC14(0,0)] = rcinv25*localeval_2*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      wk3_B0[OPS_ACC6(0,0)]) + rcinv25*localeval_3*((rc10)*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc26*wk1_B0[OPS_ACC0(0,0)])*D11_B0[OPS_ACC7(0,0)] + rcinv25*(localeval_6 +
      (rc10)*localeval_7*pow(D11_B0[OPS_ACC7(0,0)], 2) + (rc27)*localeval_8*D11_B0[OPS_ACC7(0,0)] +
      (rc10)*D11_B0[OPS_ACC7(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk2_B0[OPS_ACC3(0,0)])*mu_B0[OPS_ACC4(0,0)] +
      Residual2_B0[OPS_ACC14(0,0)];

    Residual3_B0[OPS_ACC13(0,0)] = rcinv25*rcinv28*rcinv5*rcinv7*localeval_2*wk7_B0[OPS_ACC10(0,0)] +
      rcinv25*rcinv28*rcinv5*rcinv7*localeval_3*pow(D11_B0[OPS_ACC7(0,0)], 2)*wk6_B0[OPS_ACC2(0,0)] +
      rcinv25*rcinv28*rcinv5*rcinv7*(localeval_0*pow(D11_B0[OPS_ACC7(0,0)], 2) + localeval_1 +
      D11_B0[OPS_ACC7(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk6_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC4(0,0)] +
      rcinv25*localeval_2*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] + wk3_B0[OPS_ACC6(0,0)])*u1_B0[OPS_ACC11(0,0)] +
      rcinv25*localeval_2*(-rc26*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*wk1_B0[OPS_ACC0(0,0)])*u0_B0[OPS_ACC5(0,0)] +
      rcinv25*localeval_3*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      wk3_B0[OPS_ACC6(0,0)])*D11_B0[OPS_ACC7(0,0)]*u0_B0[OPS_ACC5(0,0)] +
      rcinv25*localeval_3*((rc10)*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc26*wk1_B0[OPS_ACC0(0,0)])*D11_B0[OPS_ACC7(0,0)]*u1_B0[OPS_ACC11(0,0)] +
      rcinv25*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      wk3_B0[OPS_ACC6(0,0)])*D11_B0[OPS_ACC7(0,0)]*mu_B0[OPS_ACC4(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      rcinv25*(D11_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC1(0,0)] +
      wk3_B0[OPS_ACC6(0,0)])*mu_B0[OPS_ACC4(0,0)]*wk3_B0[OPS_ACC6(0,0)] +
      rcinv25*(-rc26*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*wk1_B0[OPS_ACC0(0,0)])*mu_B0[OPS_ACC4(0,0)]*wk1_B0[OPS_ACC0(0,0)] +
      rcinv25*((rc10)*D11_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc26*wk1_B0[OPS_ACC0(0,0)])*D11_B0[OPS_ACC7(0,0)]*mu_B0[OPS_ACC4(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      rcinv25*((rc10)*localeval_4 + localeval_5*pow(D11_B0[OPS_ACC7(0,0)], 2) + (rc27)*localeval_9*D11_B0[OPS_ACC7(0,0)]
      + D11_B0[OPS_ACC7(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk0_B0[OPS_ACC1(0,0)])*mu_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC5(0,0)] +
      rcinv25*(localeval_6 + (rc10)*localeval_7*pow(D11_B0[OPS_ACC7(0,0)], 2) + (rc27)*localeval_8*D11_B0[OPS_ACC7(0,0)]
      +
      (rc10)*D11_B0[OPS_ACC7(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk2_B0[OPS_ACC3(0,0)])*mu_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC11(0,0)]
      + Residual3_B0[OPS_ACC13(0,0)];

}

 void opensbliblock00Kernel049(const double *Residual1_B0, const double *Residual3_B0, const double *Residual2_B0, const
double *Residual0_B0, double *tempRK_rhou1_B0, double *tempRK_rhou0_B0, double *tempRK_rhoE_B0, double *rhou0_B0, double
*rho_B0, double *tempRK_rho_B0, double *rhoE_B0, double *rhou1_B0, const double *rkB, const double *rkA)
{
   tempRK_rho_B0[OPS_ACC9(0,0)] = dt*Residual0_B0[OPS_ACC3(0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC9(0,0)];

   rho_B0[OPS_ACC8(0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC9(0,0)] + rho_B0[OPS_ACC8(0,0)];

   tempRK_rhou0_B0[OPS_ACC5(0,0)] = dt*Residual1_B0[OPS_ACC0(0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC5(0,0)];

   rhou0_B0[OPS_ACC7(0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC5(0,0)] + rhou0_B0[OPS_ACC7(0,0)];

   tempRK_rhou1_B0[OPS_ACC4(0,0)] = dt*Residual2_B0[OPS_ACC2(0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC4(0,0)];

   rhou1_B0[OPS_ACC11(0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC4(0,0)] + rhou1_B0[OPS_ACC11(0,0)];

   tempRK_rhoE_B0[OPS_ACC6(0,0)] = dt*Residual3_B0[OPS_ACC1(0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC6(0,0)];

   rhoE_B0[OPS_ACC10(0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC6(0,0)] + rhoE_B0[OPS_ACC10(0,0)];

}

#endif
