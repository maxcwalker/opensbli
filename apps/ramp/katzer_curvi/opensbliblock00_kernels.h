#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel066(double *x0_B0, double *rhou1_B0, double *rho_B0, double *rhoE_B0, double *rhou0_B0,
double *x1_B0, const int *idx)
{
   double T = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   double rho = 0.0;
   x0_B0[OPS_ACC0(0,0)] = Delta0block0*idx[0];

   x1_B0[OPS_ACC5(0,0)] = Ly*sinh(Delta1block0*b*rcinv4*idx[1])/sinh(b);

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

   rho_B0[OPS_ACC2(0,0)] = rho;

   rhou0_B0[OPS_ACC4(0,0)] = rhou0;

   rhou1_B0[OPS_ACC1(0,0)] = rhou1;

   rhoE_B0[OPS_ACC3(0,0)] = rcinv5*rcinv6*rcinv7*T*rho + (0.5*pow(rhou0, 2) + 0.5*pow(rhou1, 2))/rho;

}

void opensbliblock00Kernel067(const double *x1_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -8.34657956545823e-15*x1_B0[OPS_ACC0(4,0)] +
      1.06910315192207e-15*x1_B0[OPS_ACC0(5,0)] - 1.50000000000003*x1_B0[OPS_ACC0(2,0)] +
      0.333333333333356*x1_B0[OPS_ACC0(3,0)] - 1.83333333333334*x1_B0[OPS_ACC0(0,0)] +
      3.00000000000002*x1_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*x1_B0[OPS_ACC0(-1,0)] +
      0.00571369039775442*x1_B0[OPS_ACC0(4,0)] + 0.0394168524399447*x1_B0[OPS_ACC0(2,0)] -
      0.0658051057710389*x1_B0[OPS_ACC0(3,0)] - 0.322484932882161*x1_B0[OPS_ACC0(0,0)] +
      0.719443173328855*x1_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*x1_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*x1_B0[OPS_ACC0(-1,0)] - 0.0367146847001261*x1_B0[OPS_ACC0(2,0)] -
      0.00412637789557492*x1_B0[OPS_ACC0(3,0)] + 0.197184333887745*x1_B0[OPS_ACC0(0,0)] +
      0.521455851089587*x1_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*x1_B0[OPS_ACC0(-2,0)] -
      0.727822147724592*x1_B0[OPS_ACC0(-1,0)] - 0.082033432844602*x1_B0[OPS_ACC0(2,0)] -
      0.00932597985049999*x1_B0[OPS_ACC0(-3,0)] + 0.0451033223343881*x1_B0[OPS_ACC0(0,0)] +
      0.652141084861241*x1_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -4*x1_B0[OPS_ACC0(-1,0)] +
      3*x1_B0[OPS_ACC0(-2,0)] + (rc8)*x1_B0[OPS_ACC0(-4,0)] - rc9*x1_B0[OPS_ACC0(-3,0)] +
      (rc10)*x1_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*x1_B0[OPS_ACC0(-2,0)] -
      rc12*x1_B0[OPS_ACC0(-1,0)] - rc13*x1_B0[OPS_ACC0(-3,0)] + (rc14)*x1_B0[OPS_ACC0(0,0)] +
      (rc8)*x1_B0[OPS_ACC0(1,0)]
)
: (
   -rc15*x1_B0[OPS_ACC0(-1,0)] + (rc13)*x1_B0[OPS_ACC0(-2,0)] -
      rc13*x1_B0[OPS_ACC0(2,0)] + (rc15)*x1_B0[OPS_ACC0(1,0)]
)))))));

}

void opensbliblock00Kernel068(const double *x1_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -3*x1_B0[OPS_ACC0(0,2)] + (rc9)*x1_B0[OPS_ACC0(0,3)] -
      rc10*x1_B0[OPS_ACC0(0,0)] - rc8*x1_B0[OPS_ACC0(0,4)] + 4*x1_B0[OPS_ACC0(0,1)]
)
: ((idx[1] == 1) ? (
  
      -rc8*x1_B0[OPS_ACC0(0,-1)] - rc11*x1_B0[OPS_ACC0(0,2)] + (rc13)*x1_B0[OPS_ACC0(0,3)] - rc14*x1_B0[OPS_ACC0(0,0)] +
      (rc12)*x1_B0[OPS_ACC0(0,1)]
)
: (
   -rc15*x1_B0[OPS_ACC0(0,-1)] + (rc13)*x1_B0[OPS_ACC0(0,-2)] -
      rc13*x1_B0[OPS_ACC0(0,2)] + (rc15)*x1_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel069(const double *x0_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -8.34657956545823e-15*x0_B0[OPS_ACC0(4,0)] -
      1.50000000000003*x0_B0[OPS_ACC0(2,0)] + 1.06910315192207e-15*x0_B0[OPS_ACC0(5,0)] +
      0.333333333333356*x0_B0[OPS_ACC0(3,0)] - 1.83333333333334*x0_B0[OPS_ACC0(0,0)] +
      3.00000000000002*x0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*x0_B0[OPS_ACC0(-1,0)] +
      0.00571369039775442*x0_B0[OPS_ACC0(4,0)] + 0.0394168524399447*x0_B0[OPS_ACC0(2,0)] -
      0.0658051057710389*x0_B0[OPS_ACC0(3,0)] - 0.322484932882161*x0_B0[OPS_ACC0(0,0)] +
      0.719443173328855*x0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*x0_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*x0_B0[OPS_ACC0(-1,0)] - 0.0367146847001261*x0_B0[OPS_ACC0(2,0)] -
      0.00412637789557492*x0_B0[OPS_ACC0(3,0)] + 0.197184333887745*x0_B0[OPS_ACC0(0,0)] +
      0.521455851089587*x0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*x0_B0[OPS_ACC0(-2,0)] -
      0.727822147724592*x0_B0[OPS_ACC0(-1,0)] - 0.082033432844602*x0_B0[OPS_ACC0(2,0)] +
      0.0451033223343881*x0_B0[OPS_ACC0(0,0)] - 0.00932597985049999*x0_B0[OPS_ACC0(-3,0)] +
      0.652141084861241*x0_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -4*x0_B0[OPS_ACC0(-1,0)] +
      3*x0_B0[OPS_ACC0(-2,0)] + (rc8)*x0_B0[OPS_ACC0(-4,0)] + (rc10)*x0_B0[OPS_ACC0(0,0)] -
      rc9*x0_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*x0_B0[OPS_ACC0(-2,0)] -
      rc12*x0_B0[OPS_ACC0(-1,0)] + (rc14)*x0_B0[OPS_ACC0(0,0)] - rc13*x0_B0[OPS_ACC0(-3,0)] +
      (rc8)*x0_B0[OPS_ACC0(1,0)]
)
: (
   -rc13*x0_B0[OPS_ACC0(2,0)] - rc15*x0_B0[OPS_ACC0(-1,0)] +
      (rc13)*x0_B0[OPS_ACC0(-2,0)] + (rc15)*x0_B0[OPS_ACC0(1,0)]
)))))));

}

void opensbliblock00Kernel070(const double *x0_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -3*x0_B0[OPS_ACC0(0,2)] + (rc9)*x0_B0[OPS_ACC0(0,3)] -
      rc8*x0_B0[OPS_ACC0(0,4)] - rc10*x0_B0[OPS_ACC0(0,0)] + 4*x0_B0[OPS_ACC0(0,1)]
)
: ((idx[1] == 1) ? (
  
      -rc11*x0_B0[OPS_ACC0(0,2)] - rc8*x0_B0[OPS_ACC0(0,-1)] + (rc13)*x0_B0[OPS_ACC0(0,3)] - rc14*x0_B0[OPS_ACC0(0,0)] +
      (rc12)*x0_B0[OPS_ACC0(0,1)]
)
: (
   -rc13*x0_B0[OPS_ACC0(0,2)] + (rc15)*x0_B0[OPS_ACC0(0,1)] -
      rc15*x0_B0[OPS_ACC0(0,-1)] + (rc13)*x0_B0[OPS_ACC0(0,-2)]
)));

}

 void opensbliblock00Kernel073(const double *wk3_B0, const double *wk1_B0, const double *wk0_B0, const double *wk2_B0,
double *D01_B0, double *detJ_B0, double *D10_B0, double *D00_B0, double *D11_B0)
{
   detJ_B0[OPS_ACC5(0,0)] = -wk0_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)] + wk1_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)];

    D00_B0[OPS_ACC7(0,0)] = wk1_B0[OPS_ACC1(0,0)]/(-wk0_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)] +
      wk1_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)]);

    D01_B0[OPS_ACC4(0,0)] = -wk3_B0[OPS_ACC0(0,0)]/(-wk0_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)] +
      wk1_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)]);

    D10_B0[OPS_ACC6(0,0)] = -wk0_B0[OPS_ACC2(0,0)]/(-wk0_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)] +
      wk1_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)]);

    D11_B0[OPS_ACC8(0,0)] = wk2_B0[OPS_ACC3(0,0)]/(-wk0_B0[OPS_ACC2(0,0)]*wk3_B0[OPS_ACC0(0,0)] +
      wk1_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)]);

}

void opensbliblock00Kernel074(double *detJ_B0, double *D10_B0, double *D00_B0, double *D11_B0, double *D01_B0)
{
   D00_B0[OPS_ACC2(-1,0)] = D00_B0[OPS_ACC2(1,0)];

   D01_B0[OPS_ACC4(-1,0)] = D01_B0[OPS_ACC4(1,0)];

   D10_B0[OPS_ACC1(-1,0)] = D10_B0[OPS_ACC1(1,0)];

   D11_B0[OPS_ACC3(-1,0)] = D11_B0[OPS_ACC3(1,0)];

   detJ_B0[OPS_ACC0(-1,0)] = detJ_B0[OPS_ACC0(1,0)];

   D00_B0[OPS_ACC2(-2,0)] = D00_B0[OPS_ACC2(2,0)];

   D01_B0[OPS_ACC4(-2,0)] = D01_B0[OPS_ACC4(2,0)];

   D10_B0[OPS_ACC1(-2,0)] = D10_B0[OPS_ACC1(2,0)];

   D11_B0[OPS_ACC3(-2,0)] = D11_B0[OPS_ACC3(2,0)];

   detJ_B0[OPS_ACC0(-2,0)] = detJ_B0[OPS_ACC0(2,0)];

   D00_B0[OPS_ACC2(-3,0)] = D00_B0[OPS_ACC2(3,0)];

   D01_B0[OPS_ACC4(-3,0)] = D01_B0[OPS_ACC4(3,0)];

   D10_B0[OPS_ACC1(-3,0)] = D10_B0[OPS_ACC1(3,0)];

   D11_B0[OPS_ACC3(-3,0)] = D11_B0[OPS_ACC3(3,0)];

   detJ_B0[OPS_ACC0(-3,0)] = detJ_B0[OPS_ACC0(3,0)];

}

void opensbliblock00Kernel075(double *detJ_B0, double *D10_B0, double *D00_B0, double *D11_B0, double *D01_B0)
{
   D00_B0[OPS_ACC2(1,0)] = D00_B0[OPS_ACC2(-1,0)];

   D01_B0[OPS_ACC4(1,0)] = D01_B0[OPS_ACC4(-1,0)];

   D10_B0[OPS_ACC1(1,0)] = D10_B0[OPS_ACC1(-1,0)];

   D11_B0[OPS_ACC3(1,0)] = D11_B0[OPS_ACC3(-1,0)];

   detJ_B0[OPS_ACC0(1,0)] = detJ_B0[OPS_ACC0(-1,0)];

   D00_B0[OPS_ACC2(2,0)] = D00_B0[OPS_ACC2(-2,0)];

   D01_B0[OPS_ACC4(2,0)] = D01_B0[OPS_ACC4(-2,0)];

   D10_B0[OPS_ACC1(2,0)] = D10_B0[OPS_ACC1(-2,0)];

   D11_B0[OPS_ACC3(2,0)] = D11_B0[OPS_ACC3(-2,0)];

   detJ_B0[OPS_ACC0(2,0)] = detJ_B0[OPS_ACC0(-2,0)];

   D00_B0[OPS_ACC2(3,0)] = D00_B0[OPS_ACC2(-3,0)];

   D01_B0[OPS_ACC4(3,0)] = D01_B0[OPS_ACC4(-3,0)];

   D10_B0[OPS_ACC1(3,0)] = D10_B0[OPS_ACC1(-3,0)];

   D11_B0[OPS_ACC3(3,0)] = D11_B0[OPS_ACC3(-3,0)];

   detJ_B0[OPS_ACC0(3,0)] = detJ_B0[OPS_ACC0(-3,0)];

   D00_B0[OPS_ACC2(4,0)] = D00_B0[OPS_ACC2(-4,0)];

   D01_B0[OPS_ACC4(4,0)] = D01_B0[OPS_ACC4(-4,0)];

   D10_B0[OPS_ACC1(4,0)] = D10_B0[OPS_ACC1(-4,0)];

   D11_B0[OPS_ACC3(4,0)] = D11_B0[OPS_ACC3(-4,0)];

   detJ_B0[OPS_ACC0(4,0)] = detJ_B0[OPS_ACC0(-4,0)];

}

void opensbliblock00Kernel076(double *detJ_B0, double *D10_B0, double *D00_B0, double *D11_B0, double *D01_B0)
{
   D00_B0[OPS_ACC2(0,-1)] = D00_B0[OPS_ACC2(0,1)];

   D01_B0[OPS_ACC4(0,-1)] = D01_B0[OPS_ACC4(0,1)];

   D10_B0[OPS_ACC1(0,-1)] = D10_B0[OPS_ACC1(0,1)];

   D11_B0[OPS_ACC3(0,-1)] = D11_B0[OPS_ACC3(0,1)];

   detJ_B0[OPS_ACC0(0,-1)] = detJ_B0[OPS_ACC0(0,1)];

   D00_B0[OPS_ACC2(0,-2)] = D00_B0[OPS_ACC2(0,2)];

   D01_B0[OPS_ACC4(0,-2)] = D01_B0[OPS_ACC4(0,2)];

   D10_B0[OPS_ACC1(0,-2)] = D10_B0[OPS_ACC1(0,2)];

   D11_B0[OPS_ACC3(0,-2)] = D11_B0[OPS_ACC3(0,2)];

   detJ_B0[OPS_ACC0(0,-2)] = detJ_B0[OPS_ACC0(0,2)];

   D00_B0[OPS_ACC2(0,-3)] = D00_B0[OPS_ACC2(0,3)];

   D01_B0[OPS_ACC4(0,-3)] = D01_B0[OPS_ACC4(0,3)];

   D10_B0[OPS_ACC1(0,-3)] = D10_B0[OPS_ACC1(0,3)];

   D11_B0[OPS_ACC3(0,-3)] = D11_B0[OPS_ACC3(0,3)];

   detJ_B0[OPS_ACC0(0,-3)] = detJ_B0[OPS_ACC0(0,3)];

}

void opensbliblock00Kernel077(double *detJ_B0, double *D10_B0, double *D00_B0, double *D11_B0, double *D01_B0)
{
   D00_B0[OPS_ACC2(0,1)] = D00_B0[OPS_ACC2(0,-1)];

   D01_B0[OPS_ACC4(0,1)] = D01_B0[OPS_ACC4(0,-1)];

   D10_B0[OPS_ACC1(0,1)] = D10_B0[OPS_ACC1(0,-1)];

   D11_B0[OPS_ACC3(0,1)] = D11_B0[OPS_ACC3(0,-1)];

   detJ_B0[OPS_ACC0(0,1)] = detJ_B0[OPS_ACC0(0,-1)];

   D00_B0[OPS_ACC2(0,2)] = D00_B0[OPS_ACC2(0,-2)];

   D01_B0[OPS_ACC4(0,2)] = D01_B0[OPS_ACC4(0,-2)];

   D10_B0[OPS_ACC1(0,2)] = D10_B0[OPS_ACC1(0,-2)];

   D11_B0[OPS_ACC3(0,2)] = D11_B0[OPS_ACC3(0,-2)];

   detJ_B0[OPS_ACC0(0,2)] = detJ_B0[OPS_ACC0(0,-2)];

   D00_B0[OPS_ACC2(0,3)] = D00_B0[OPS_ACC2(0,-3)];

   D01_B0[OPS_ACC4(0,3)] = D01_B0[OPS_ACC4(0,-3)];

   D10_B0[OPS_ACC1(0,3)] = D10_B0[OPS_ACC1(0,-3)];

   D11_B0[OPS_ACC3(0,3)] = D11_B0[OPS_ACC3(0,-3)];

   detJ_B0[OPS_ACC0(0,3)] = detJ_B0[OPS_ACC0(0,-3)];

   D00_B0[OPS_ACC2(0,4)] = D00_B0[OPS_ACC2(0,-4)];

   D01_B0[OPS_ACC4(0,4)] = D01_B0[OPS_ACC4(0,-4)];

   D10_B0[OPS_ACC1(0,4)] = D10_B0[OPS_ACC1(0,-4)];

   D11_B0[OPS_ACC3(0,4)] = D11_B0[OPS_ACC3(0,-4)];

   detJ_B0[OPS_ACC0(0,4)] = detJ_B0[OPS_ACC0(0,-4)];

}

void opensbliblock00Kernel078(const double *D11_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   0.333333333333356*D11_B0[OPS_ACC0(3,0)] -
      8.34657956545823e-15*D11_B0[OPS_ACC0(4,0)] - 1.50000000000003*D11_B0[OPS_ACC0(2,0)] +
      3.00000000000002*D11_B0[OPS_ACC0(1,0)] - 1.83333333333334*D11_B0[OPS_ACC0(0,0)] +
      1.06910315192207e-15*D11_B0[OPS_ACC0(5,0)]
)
: ((idx[0] == 1) ? (
   -0.0658051057710389*D11_B0[OPS_ACC0(3,0)] +
      0.00571369039775442*D11_B0[OPS_ACC0(4,0)] + 0.0394168524399447*D11_B0[OPS_ACC0(2,0)] +
      0.719443173328855*D11_B0[OPS_ACC0(1,0)] - 0.322484932882161*D11_B0[OPS_ACC0(0,0)] -
      0.376283677513354*D11_B0[OPS_ACC0(-1,0)]
)
: ((idx[0] == 2) ? (
   -0.00412637789557492*D11_B0[OPS_ACC0(3,0)] -
      0.0367146847001261*D11_B0[OPS_ACC0(2,0)] + 0.521455851089587*D11_B0[OPS_ACC0(1,0)] +
      0.197184333887745*D11_B0[OPS_ACC0(0,0)] + 0.113446470384241*D11_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*D11_B0[OPS_ACC0(-1,0)]
)
: ((idx[0] == 3) ? (
   -0.082033432844602*D11_B0[OPS_ACC0(2,0)] +
      0.652141084861241*D11_B0[OPS_ACC0(1,0)] + 0.0451033223343881*D11_B0[OPS_ACC0(0,0)] -
      0.727822147724592*D11_B0[OPS_ACC0(-1,0)] + 0.121937153224065*D11_B0[OPS_ACC0(-2,0)] -
      0.00932597985049999*D11_B0[OPS_ACC0(-3,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc10)*D11_B0[OPS_ACC0(0,0)] -
      4*D11_B0[OPS_ACC0(-1,0)] + 3*D11_B0[OPS_ACC0(-2,0)] - rc9*D11_B0[OPS_ACC0(-3,0)] +
      (rc8)*D11_B0[OPS_ACC0(-4,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc8)*D11_B0[OPS_ACC0(1,0)] +
      (rc14)*D11_B0[OPS_ACC0(0,0)] + (rc11)*D11_B0[OPS_ACC0(-2,0)] - rc12*D11_B0[OPS_ACC0(-1,0)] -
      rc13*D11_B0[OPS_ACC0(-3,0)]
)
: (
   -rc15*D11_B0[OPS_ACC0(-1,0)] + (rc15)*D11_B0[OPS_ACC0(1,0)] -
      rc13*D11_B0[OPS_ACC0(2,0)] + (rc13)*D11_B0[OPS_ACC0(-2,0)]
)))))));

}

void opensbliblock00Kernel079(const double *D01_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -rc8*D01_B0[OPS_ACC0(0,4)] + (rc9)*D01_B0[OPS_ACC0(0,3)] -
      3*D01_B0[OPS_ACC0(0,2)] + 4*D01_B0[OPS_ACC0(0,1)] - rc10*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*D01_B0[OPS_ACC0(0,3)] - rc8*D01_B0[OPS_ACC0(0,-1)] - rc11*D01_B0[OPS_ACC0(0,2)] +
      (rc12)*D01_B0[OPS_ACC0(0,1)] - rc14*D01_B0[OPS_ACC0(0,0)]
)
: (
   -rc15*D01_B0[OPS_ACC0(0,-1)] +
      (rc13)*D01_B0[OPS_ACC0(0,-2)] + (rc15)*D01_B0[OPS_ACC0(0,1)] - rc13*D01_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel080(const double *D11_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   4*D11_B0[OPS_ACC0(0,1)] - rc10*D11_B0[OPS_ACC0(0,0)] -
      rc8*D11_B0[OPS_ACC0(0,4)] + (rc9)*D11_B0[OPS_ACC0(0,3)] - 3*D11_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      (rc12)*D11_B0[OPS_ACC0(0,1)] - rc14*D11_B0[OPS_ACC0(0,0)] + (rc13)*D11_B0[OPS_ACC0(0,3)] -
      rc8*D11_B0[OPS_ACC0(0,-1)] - rc11*D11_B0[OPS_ACC0(0,2)]
)
: (
   -rc15*D11_B0[OPS_ACC0(0,-1)] +
      (rc13)*D11_B0[OPS_ACC0(0,-2)] - rc13*D11_B0[OPS_ACC0(0,2)] + (rc15)*D11_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel081(const double *D10_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   1.06910315192207e-15*D10_B0[OPS_ACC0(5,0)] -
      1.50000000000003*D10_B0[OPS_ACC0(2,0)] - 8.34657956545823e-15*D10_B0[OPS_ACC0(4,0)] +
      3.00000000000002*D10_B0[OPS_ACC0(1,0)] - 1.83333333333334*D10_B0[OPS_ACC0(0,0)] +
      0.333333333333356*D10_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 1) ? (
   0.0394168524399447*D10_B0[OPS_ACC0(2,0)] +
      0.00571369039775442*D10_B0[OPS_ACC0(4,0)] - 0.376283677513354*D10_B0[OPS_ACC0(-1,0)] +
      0.719443173328855*D10_B0[OPS_ACC0(1,0)] - 0.322484932882161*D10_B0[OPS_ACC0(0,0)] -
      0.0658051057710389*D10_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 2) ? (
   -0.0367146847001261*D10_B0[OPS_ACC0(2,0)] +
      0.113446470384241*D10_B0[OPS_ACC0(-2,0)] - 0.791245592765872*D10_B0[OPS_ACC0(-1,0)] +
      0.521455851089587*D10_B0[OPS_ACC0(1,0)] + 0.197184333887745*D10_B0[OPS_ACC0(0,0)] -
      0.00412637789557492*D10_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 3) ? (
   -0.082033432844602*D10_B0[OPS_ACC0(2,0)] -
      0.727822147724592*D10_B0[OPS_ACC0(-1,0)] + 0.121937153224065*D10_B0[OPS_ACC0(-2,0)] +
      0.652141084861241*D10_B0[OPS_ACC0(1,0)] - 0.00932597985049999*D10_B0[OPS_ACC0(-3,0)] +
      0.0451033223343881*D10_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   3*D10_B0[OPS_ACC0(-2,0)] -
      4*D10_B0[OPS_ACC0(-1,0)] - rc9*D10_B0[OPS_ACC0(-3,0)] + (rc10)*D10_B0[OPS_ACC0(0,0)] +
      (rc8)*D10_B0[OPS_ACC0(-4,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc12*D10_B0[OPS_ACC0(-1,0)] +
      (rc11)*D10_B0[OPS_ACC0(-2,0)] + (rc8)*D10_B0[OPS_ACC0(1,0)] - rc13*D10_B0[OPS_ACC0(-3,0)] +
      (rc14)*D10_B0[OPS_ACC0(0,0)]
)
: (
   (rc13)*D10_B0[OPS_ACC0(-2,0)] - rc13*D10_B0[OPS_ACC0(2,0)] +
      (rc15)*D10_B0[OPS_ACC0(1,0)] - rc15*D10_B0[OPS_ACC0(-1,0)]
)))))));

}

void opensbliblock00Kernel082(const double *D10_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   (rc9)*D10_B0[OPS_ACC0(0,3)] - 3*D10_B0[OPS_ACC0(0,2)] +
      4*D10_B0[OPS_ACC0(0,1)] - rc8*D10_B0[OPS_ACC0(0,4)] - rc10*D10_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*D10_B0[OPS_ACC0(0,3)] - rc11*D10_B0[OPS_ACC0(0,2)] - rc8*D10_B0[OPS_ACC0(0,-1)] +
      (rc12)*D10_B0[OPS_ACC0(0,1)] - rc14*D10_B0[OPS_ACC0(0,0)]
)
: (
   (rc15)*D10_B0[OPS_ACC0(0,1)] -
      rc13*D10_B0[OPS_ACC0(0,2)] + (rc13)*D10_B0[OPS_ACC0(0,-2)] - rc15*D10_B0[OPS_ACC0(0,-1)]
)));

}

void opensbliblock00Kernel083(const double *D00_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -1.83333333333334*D00_B0[OPS_ACC0(0,0)] +
      1.06910315192207e-15*D00_B0[OPS_ACC0(5,0)] - 8.34657956545823e-15*D00_B0[OPS_ACC0(4,0)] +
      0.333333333333356*D00_B0[OPS_ACC0(3,0)] - 1.50000000000003*D00_B0[OPS_ACC0(2,0)] +
      3.00000000000002*D00_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 1) ? (
   -0.322484932882161*D00_B0[OPS_ACC0(0,0)] +
      0.00571369039775442*D00_B0[OPS_ACC0(4,0)] - 0.0658051057710389*D00_B0[OPS_ACC0(3,0)] +
      0.0394168524399447*D00_B0[OPS_ACC0(2,0)] - 0.376283677513354*D00_B0[OPS_ACC0(-1,0)] +
      0.719443173328855*D00_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 2) ? (
   0.197184333887745*D00_B0[OPS_ACC0(0,0)] -
      0.791245592765872*D00_B0[OPS_ACC0(-1,0)] - 0.00412637789557492*D00_B0[OPS_ACC0(3,0)] -
      0.0367146847001261*D00_B0[OPS_ACC0(2,0)] + 0.113446470384241*D00_B0[OPS_ACC0(-2,0)] +
      0.521455851089587*D00_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*D00_B0[OPS_ACC0(-3,0)] +
      0.0451033223343881*D00_B0[OPS_ACC0(0,0)] + 0.121937153224065*D00_B0[OPS_ACC0(-2,0)] -
      0.082033432844602*D00_B0[OPS_ACC0(2,0)] - 0.727822147724592*D00_B0[OPS_ACC0(-1,0)] +
      0.652141084861241*D00_B0[OPS_ACC0(1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -rc9*D00_B0[OPS_ACC0(-3,0)] +
      (rc10)*D00_B0[OPS_ACC0(0,0)] + (rc8)*D00_B0[OPS_ACC0(-4,0)] - 4*D00_B0[OPS_ACC0(-1,0)] +
      3*D00_B0[OPS_ACC0(-2,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc13*D00_B0[OPS_ACC0(-3,0)] +
      (rc14)*D00_B0[OPS_ACC0(0,0)] + (rc11)*D00_B0[OPS_ACC0(-2,0)] - rc12*D00_B0[OPS_ACC0(-1,0)] +
      (rc8)*D00_B0[OPS_ACC0(1,0)]
)
: (
   -rc13*D00_B0[OPS_ACC0(2,0)] + (rc15)*D00_B0[OPS_ACC0(1,0)] -
      rc15*D00_B0[OPS_ACC0(-1,0)] + (rc13)*D00_B0[OPS_ACC0(-2,0)]
)))))));

}

void opensbliblock00Kernel084(const double *D00_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -rc10*D00_B0[OPS_ACC0(0,0)] + (rc9)*D00_B0[OPS_ACC0(0,3)] -
      3*D00_B0[OPS_ACC0(0,2)] + 4*D00_B0[OPS_ACC0(0,1)] - rc8*D00_B0[OPS_ACC0(0,4)]
)
: ((idx[1] == 1) ? (
  
      -rc14*D00_B0[OPS_ACC0(0,0)] - rc8*D00_B0[OPS_ACC0(0,-1)] + (rc13)*D00_B0[OPS_ACC0(0,3)] -
      rc11*D00_B0[OPS_ACC0(0,2)] + (rc12)*D00_B0[OPS_ACC0(0,1)]
)
: (
   -rc13*D00_B0[OPS_ACC0(0,2)] +
      (rc15)*D00_B0[OPS_ACC0(0,1)] + (rc13)*D00_B0[OPS_ACC0(0,-2)] - rc15*D00_B0[OPS_ACC0(0,-1)]
)));

}

void opensbliblock00Kernel085(const double *D01_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   0.333333333333356*D01_B0[OPS_ACC0(3,0)] -
      1.50000000000003*D01_B0[OPS_ACC0(2,0)] + 1.06910315192207e-15*D01_B0[OPS_ACC0(5,0)] -
      8.34657956545823e-15*D01_B0[OPS_ACC0(4,0)] + 3.00000000000002*D01_B0[OPS_ACC0(1,0)] -
      1.83333333333334*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
   -0.0658051057710389*D01_B0[OPS_ACC0(3,0)] -
      0.376283677513354*D01_B0[OPS_ACC0(-1,0)] + 0.0394168524399447*D01_B0[OPS_ACC0(2,0)] +
      0.00571369039775442*D01_B0[OPS_ACC0(4,0)] + 0.719443173328855*D01_B0[OPS_ACC0(1,0)] -
      0.322484932882161*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 2) ? (
   -0.00412637789557492*D01_B0[OPS_ACC0(3,0)] +
      0.113446470384241*D01_B0[OPS_ACC0(-2,0)] - 0.791245592765872*D01_B0[OPS_ACC0(-1,0)] -
      0.0367146847001261*D01_B0[OPS_ACC0(2,0)] + 0.521455851089587*D01_B0[OPS_ACC0(1,0)] +
      0.197184333887745*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 3) ? (
   -0.727822147724592*D01_B0[OPS_ACC0(-1,0)] +
      0.121937153224065*D01_B0[OPS_ACC0(-2,0)] - 0.082033432844602*D01_B0[OPS_ACC0(2,0)] -
      0.00932597985049999*D01_B0[OPS_ACC0(-3,0)] + 0.652141084861241*D01_B0[OPS_ACC0(1,0)] +
      0.0451033223343881*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   3*D01_B0[OPS_ACC0(-2,0)] -
      4*D01_B0[OPS_ACC0(-1,0)] - rc9*D01_B0[OPS_ACC0(-3,0)] + (rc8)*D01_B0[OPS_ACC0(-4,0)] +
      (rc10)*D01_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc12*D01_B0[OPS_ACC0(-1,0)] +
      (rc11)*D01_B0[OPS_ACC0(-2,0)] - rc13*D01_B0[OPS_ACC0(-3,0)] + (rc8)*D01_B0[OPS_ACC0(1,0)] +
      (rc14)*D01_B0[OPS_ACC0(0,0)]
)
: (
   (rc15)*D01_B0[OPS_ACC0(1,0)] + (rc13)*D01_B0[OPS_ACC0(-2,0)] -
      rc15*D01_B0[OPS_ACC0(-1,0)] - rc13*D01_B0[OPS_ACC0(2,0)]
)))))));

}

 void opensbliblock00Kernel090(const double *wk4_B0, const double *wk1_B0, const double *wk6_B0, const double *wk2_B0,
const double *wk5_B0, const double *wk7_B0, const double *wk3_B0, const double *wk0_B0, double *SD001_B0, double
*SD010_B0, double *SD101_B0, double *SD111_B0, double *SD011_B0, double *SD110_B0, double *SD100_B0, double *SD000_B0)
{
   SD000_B0[OPS_ACC15(0,0)] = wk5_B0[OPS_ACC4(0,0)];

   SD001_B0[OPS_ACC8(0,0)] = wk6_B0[OPS_ACC2(0,0)];

   SD010_B0[OPS_ACC9(0,0)] = wk7_B0[OPS_ACC5(0,0)];

   SD011_B0[OPS_ACC12(0,0)] = wk1_B0[OPS_ACC1(0,0)];

   SD100_B0[OPS_ACC14(0,0)] = wk3_B0[OPS_ACC6(0,0)];

   SD101_B0[OPS_ACC10(0,0)] = wk4_B0[OPS_ACC0(0,0)];

   SD110_B0[OPS_ACC13(0,0)] = wk0_B0[OPS_ACC7(0,0)];

   SD111_B0[OPS_ACC11(0,0)] = wk2_B0[OPS_ACC3(0,0)];

}

void opensbliblock00Kernel062(double *rhoE_B0, double *rhou0_B0, double *rho_B0, double *rhou1_B0)
{
   double ab = 0.0;
   double ub1 = 0.0;
   double ub0 = 0.0;
   double pb = 0.0;
   double rhob = 0.0;
   rhob = rho_B0[OPS_ACC2(0,0)];

   ub0 = fabs(rhou0_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC2(0,0)]);

   ub1 = fabs(rhou1_B0[OPS_ACC3(0,0)]/rho_B0[OPS_ACC2(0,0)]);

   pb = (gama - 1)*(-0.5*rhob*(pow(ub0, 2) + pow(ub1, 2)) + rhoE_B0[OPS_ACC0(0,0)]);

   ab = sqrt(gama*pb/rhob);

   rho_B0[OPS_ACC2(0,0)] = ((ub0 >= ab) ? (
   rho_B0[OPS_ACC2(-1,0)]
)
: (
   rho_B0[OPS_ACC2(0,0)]
));

   rhou0_B0[OPS_ACC1(0,0)] = ((ub0 >= ab) ? (
   rhou0_B0[OPS_ACC1(-1,0)]
)
: (
   rhou0_B0[OPS_ACC1(0,0)]
));

   rhou1_B0[OPS_ACC3(0,0)] = ((ub0 >= ab) ? (
   rhou1_B0[OPS_ACC3(-1,0)]
)
: (
   rhou1_B0[OPS_ACC3(0,0)]
));

   rhoE_B0[OPS_ACC0(0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC0(-1,0)]
)
: (
   rhoE_B0[OPS_ACC0(0,0)]
));

   rhoE_B0[OPS_ACC0(-1,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC0(-1,0)]
)
: (
   rhoE_B0[OPS_ACC0(0,0)]
));

   rhoE_B0[OPS_ACC0(-2,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC0(-2,0)]
)
: (
   rhoE_B0[OPS_ACC0(0,0)]
));

   rhoE_B0[OPS_ACC0(-3,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC0(-3,0)]
)
: (
   rhoE_B0[OPS_ACC0(0,0)]
));

}

void opensbliblock00Kernel063(double *rhoE_B0, double *rhou0_B0, double *rho_B0, double *rhou1_B0)
{
   rho_B0[OPS_ACC2(0,0)] = rho_B0[OPS_ACC2(-1,0)];

   rhou0_B0[OPS_ACC1(0,0)] = rhou0_B0[OPS_ACC1(-1,0)];

   rhou1_B0[OPS_ACC3(0,0)] = rhou1_B0[OPS_ACC3(-1,0)];

   rhoE_B0[OPS_ACC0(0,0)] = rhoE_B0[OPS_ACC0(-1,0)];

   rho_B0[OPS_ACC2(1,0)] = rho_B0[OPS_ACC2(-1,0)];

   rhou0_B0[OPS_ACC1(1,0)] = rhou0_B0[OPS_ACC1(-1,0)];

   rhou1_B0[OPS_ACC3(1,0)] = rhou1_B0[OPS_ACC3(-1,0)];

   rhoE_B0[OPS_ACC0(1,0)] = rhoE_B0[OPS_ACC0(-1,0)];

   rho_B0[OPS_ACC2(2,0)] = rho_B0[OPS_ACC2(-1,0)];

   rhou0_B0[OPS_ACC1(2,0)] = rhou0_B0[OPS_ACC1(-1,0)];

   rhou1_B0[OPS_ACC3(2,0)] = rhou1_B0[OPS_ACC3(-1,0)];

   rhoE_B0[OPS_ACC0(2,0)] = rhoE_B0[OPS_ACC0(-1,0)];

   rho_B0[OPS_ACC2(3,0)] = rho_B0[OPS_ACC2(-1,0)];

   rhou0_B0[OPS_ACC1(3,0)] = rhou0_B0[OPS_ACC1(-1,0)];

   rhou1_B0[OPS_ACC3(3,0)] = rhou1_B0[OPS_ACC3(-1,0)];

   rhoE_B0[OPS_ACC0(3,0)] = rhoE_B0[OPS_ACC0(-1,0)];

   rho_B0[OPS_ACC2(4,0)] = rho_B0[OPS_ACC2(-1,0)];

   rhou0_B0[OPS_ACC1(4,0)] = rhou0_B0[OPS_ACC1(-1,0)];

   rhou1_B0[OPS_ACC3(4,0)] = rhou1_B0[OPS_ACC3(-1,0)];

   rhoE_B0[OPS_ACC0(4,0)] = rhoE_B0[OPS_ACC0(-1,0)];

}

 void opensbliblock00Kernel064(const double *x0_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0, double
*rhou1_B0)
{
   double T_above = 0.0;
   double Pwall = 0.0;
   double rho_halo_1 = 0.0;
   double T2 = 0.0;
   double u02 = 0.0;
   double u13 = 0.0;
   double u11 = 0.0;
   double rho_halo_2 = 0.0;
   double x0 = 0.0;
   double T1 = 0.0;
   double u01 = 0.0;
   double T3 = 0.0;
   double u03 = 0.0;
   double u12 = 0.0;
   double rho_halo_3 = 0.0;
   x0 = x0_B0[OPS_ACC0(0,0)];

   rhou0_B0[OPS_ACC2(0,0)] = 0.0;

   rhou1_B0[OPS_ACC4(0,0)] = 0.0;

   rhoE_B0[OPS_ACC1(0,0)] = Twall*rcinv16*rho_B0[OPS_ACC3(0,0)]/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc11)*pow(rhou0_B0[OPS_ACC2(0,0)], 2) + (rc11)*pow(rhou1_B0[OPS_ACC4(0,0)],
      2))/rho_B0[OPS_ACC3(0,0)] + rhoE_B0[OPS_ACC1(0,0)]);

   u01 = rhou0_B0[OPS_ACC2(0,1)]/rho_B0[OPS_ACC3(0,1)];

   u02 = rhou0_B0[OPS_ACC2(0,2)]/rho_B0[OPS_ACC3(0,2)];

   u03 = rhou0_B0[OPS_ACC2(0,3)]/rho_B0[OPS_ACC3(0,3)];

   u11 = rhou1_B0[OPS_ACC4(0,1)]/rho_B0[OPS_ACC3(0,1)];

   u12 = rhou1_B0[OPS_ACC4(0,2)]/rho_B0[OPS_ACC3(0,2)];

   u13 = rhou1_B0[OPS_ACC4(0,3)]/rho_B0[OPS_ACC3(0,3)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc11)*pow(rhou0_B0[OPS_ACC2(0,1)], 2) +
      (rc11)*pow(rhou1_B0[OPS_ACC4(0,1)], 2))/rho_B0[OPS_ACC3(0,1)] + rhoE_B0[OPS_ACC1(0,1)])/rho_B0[OPS_ACC3(0,1)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC3(0,-1)] = rho_halo_1;

   rhou0_B0[OPS_ACC2(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC4(0,-1)] = -rho_halo_1*u11;

   rhoE_B0[OPS_ACC1(0,-1)] = rcinv7*Pwall + (rc11)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC3(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC3(0,-2)] = rho_halo_2;

   rhou0_B0[OPS_ACC2(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC4(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC2(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC4(0,-2)] = -rho_halo_2*u12;

   rhoE_B0[OPS_ACC1(0,-1)] = rcinv7*Pwall + (rc11)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC1(0,-2)] = rcinv7*Pwall + (rc11)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC3(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC3(0,-2)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC3(0,-3)] = rho_halo_3;

   rhou0_B0[OPS_ACC2(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC4(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC2(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC4(0,-2)] = -rho_halo_2*u12;

   rhou0_B0[OPS_ACC2(0,-3)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC4(0,-3)] = -rho_halo_3*u13;

   rhoE_B0[OPS_ACC1(0,-1)] = rcinv7*Pwall + (rc11)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC1(0,-2)] = rcinv7*Pwall + (rc11)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0[OPS_ACC1(0,-3)] = rcinv7*Pwall + (rc11)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}

void opensbliblock00Kernel065(double *rhoE_B0, double *rhou0_B0, double *rho_B0, double *rhou1_B0)
{
   rho_B0[OPS_ACC2(0,0)] = rho_B0[OPS_ACC2(0,-1)];

   rhou0_B0[OPS_ACC1(0,0)] = rhou0_B0[OPS_ACC1(0,-1)];

   rhou1_B0[OPS_ACC3(0,0)] = rhou1_B0[OPS_ACC3(0,-1)];

   rhoE_B0[OPS_ACC0(0,0)] = rhoE_B0[OPS_ACC0(0,-1)];

   rho_B0[OPS_ACC2(0,1)] = rho_B0[OPS_ACC2(0,-1)];

   rhou0_B0[OPS_ACC1(0,1)] = rhou0_B0[OPS_ACC1(0,-1)];

   rhou1_B0[OPS_ACC3(0,1)] = rhou1_B0[OPS_ACC3(0,-1)];

   rhoE_B0[OPS_ACC0(0,1)] = rhoE_B0[OPS_ACC0(0,-1)];

   rho_B0[OPS_ACC2(0,2)] = rho_B0[OPS_ACC2(0,-2)];

   rhou0_B0[OPS_ACC1(0,2)] = rhou0_B0[OPS_ACC1(0,-2)];

   rhou1_B0[OPS_ACC3(0,2)] = rhou1_B0[OPS_ACC3(0,-2)];

   rhoE_B0[OPS_ACC0(0,2)] = rhoE_B0[OPS_ACC0(0,-2)];

   rho_B0[OPS_ACC2(0,3)] = rho_B0[OPS_ACC2(0,-3)];

   rhou0_B0[OPS_ACC1(0,3)] = rhou0_B0[OPS_ACC1(0,-3)];

   rhou1_B0[OPS_ACC3(0,3)] = rhou1_B0[OPS_ACC3(0,-3)];

   rhoE_B0[OPS_ACC0(0,3)] = rhoE_B0[OPS_ACC0(0,-3)];

   rho_B0[OPS_ACC2(0,4)] = rho_B0[OPS_ACC2(0,-4)];

   rhou0_B0[OPS_ACC1(0,4)] = rhou0_B0[OPS_ACC1(0,-4)];

   rhou1_B0[OPS_ACC3(0,4)] = rhou1_B0[OPS_ACC3(0,-4)];

   rhoE_B0[OPS_ACC0(0,4)] = rhoE_B0[OPS_ACC0(0,-4)];

}

void opensbliblock00Kernel010(const double *rhou0_B0, const double *rho_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel011(const double *rho_B0, const double *rhou1_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

 void opensbliblock00Kernel005(const double *u0_B0, const double *rho_B0, const double *u1_B0, const double *rhoE_B0,
double *p_B0)
{
    p_B0[OPS_ACC4(0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC3(0,0)] - rc11*rho_B0[OPS_ACC1(0,0)]*pow(u0_B0[OPS_ACC0(0,0)], 2) -
      rc11*rho_B0[OPS_ACC1(0,0)]*pow(u1_B0[OPS_ACC2(0,0)], 2));

}

 void opensbliblock00Kernel008(const double *u0_B0, const double *D01_B0, const double *D00_B0, const double *u1_B0,
double *U0_B0)
{
   U0_B0[OPS_ACC4(0,0)] = D00_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC0(0,0)] + D01_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC3(0,0)];

}

 void opensbliblock00Kernel015(const double *u0_B0, const double *D10_B0, const double *u1_B0, const double *D11_B0,
double *U1_B0)
{
   U1_B0[OPS_ACC4(0,0)] = D10_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC0(0,0)] + D11_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC2(0,0)];

}

void opensbliblock00Kernel003(const double *p_B0, const double *rho_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0,0)] = sqrt(gama*p_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)]);

}

void opensbliblock00Kernel018(const double *p_B0, const double *rho_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel025(const double *T_B0, double *mu_B0)
{
   mu_B0[OPS_ACC1(0,0)] = (SuthT*rcinv17 + 1.0)*pow(T_B0[OPS_ACC0(0,0)], 1.5)/(SuthT*rcinv17 + T_B0[OPS_ACC0(0,0)]);

}

 void opensbliblock00Kernel000(const double *detJ_B0, const double *rhou1_B0, const double *p_B0, const double *D00_B0,
const double *rho_B0, const double *u1_B0, const double *u0_B0, const double *U0_B0, const double *rhoE_B0, const double
*D01_B0, const double *rhou0_B0, const double *a_B0, double *wk3_B0, double *wk1_B0, double *wk0_B0, double *wk2_B0)
{
   double CS_15 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_u1 = 0.0;
   double inv_AVG_met_fact = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double CF_33 = 0.0;
   double inv_AVG_rho = 0.0;
   double Recon_3 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double beta_0 = 0.0;
   double CF_15 = 0.0;
   double AVG_0_D00 = 0.0;
   double CF_24 = 0.0;
   double CS_20 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double alpha_2 = 0.0;
   double AVG_0_a = 0.0;
   double CF_31 = 0.0;
   double CF_01 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_00 = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_0_22 = 0.0;
   double CS_30 = 0.0;
   double Recon_2 = 0.0;
   double CS_01 = 0.0;
   double CF_14 = 0.0;
   double CS_13 = 0.0;
   double beta_1 = 0.0;
   double CS_33 = 0.0;
   double CF_03 = 0.0;
   double CF_22 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double Recon_0 = 0.0;
   double alpha_1 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double CF_10 = 0.0;
   double AVG_0_D01 = 0.0;
   double CF_00 = 0.0;
   double CS_05 = 0.0;
   double CS_22 = 0.0;
   double AVG_0_rho = 0.0;
   double CF_23 = 0.0;
   double CS_25 = 0.0;
   double CS_35 = 0.0;
   double omega_2 = 0.0;
   double CS_23 = 0.0;
   double CF_11 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double CF_20 = 0.0;
   double CF_32 = 0.0;
   double AVG_0_u0 = 0.0;
   double CS_34 = 0.0;
   double CF_21 = 0.0;
   double beta_2 = 0.0;
   double omega_0 = 0.0;
   double CS_11 = 0.0;
   double alpha_0 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CF_35 = 0.0;
   double CF_05 = 0.0;
   double max_lambda_0_11 = 0.0;
   double CS_24 = 0.0;
   double CF_12 = 0.0;
   double CF_34 = 0.0;
   double CS_03 = 0.0;
   double CS_10 = 0.0;
   double CF_13 = 0.0;
   double CS_04 = 0.0;
   double CS_21 = 0.0;
   double CS_12 = 0.0;
   double CF_04 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double omega_1 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double max_lambda_0_33 = 0.0;
   double CS_32 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double Recon_1 = 0.0;
   double CF_25 = 0.0;
   double CF_30 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double CF_02 = 0.0;
   double CS_31 = 0.0;
   double CS_14 = 0.0;
   double max_lambda_0_00 = 0.0;
   double CS_02 = 0.0;
   AVG_0_u0 = (rc11)*(u0_B0[OPS_ACC6(1,0)] + u0_B0[OPS_ACC6(0,0)]);

   AVG_0_u1 = (rc11)*(u1_B0[OPS_ACC5(1,0)] + u1_B0[OPS_ACC5(0,0)]);

   AVG_0_a = (rc11)*(a_B0[OPS_ACC11(1,0)] + a_B0[OPS_ACC11(0,0)]);

   AVG_0_rho = (rc11)*(rho_B0[OPS_ACC4(0,0)] + rho_B0[OPS_ACC4(1,0)]);

   AVG_0_D00 = (rc11)*(D00_B0[OPS_ACC3(0,0)] + D00_B0[OPS_ACC3(1,0)]);

   AVG_0_D01 = (rc11)*(D01_B0[OPS_ACC9(1,0)] + D01_B0[OPS_ACC9(0,0)]);

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

   inv_AVG_met_fact = pow(pow(AVG_0_D00, 2) + pow(AVG_0_D01, 2), rc18);

    AVG_0_0_LEV_00 = -rc11*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) -
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

    CF_00 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(-2,0)]*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(-2,0)]*rhou1_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(-2,0)]*rhoE_B0[OPS_ACC8(-2,0)])*detJ_B0[OPS_ACC0(-2,0)];

    CF_10 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(-2,0)]*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(-2,0)]*rhou1_B0[OPS_ACC1(-2,0)])*detJ_B0[OPS_ACC0(-2,0)];

    CF_20 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(-2,0)]*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(-2,0)]*rhou1_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(-2,0)]*rhoE_B0[OPS_ACC8(-2,0)])*detJ_B0[OPS_ACC0(-2,0)];

    CF_30 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(-2,0)]*rho_B0[OPS_ACC4(-2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(-2,0)]*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(-2,0)]*rhou1_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC2(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(-2,0)]*rhoE_B0[OPS_ACC8(-2,0)])*detJ_B0[OPS_ACC0(-2,0)];

    CF_01 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(-1,0)]*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(-1,0)]*rhou1_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(-1,0)]*rhoE_B0[OPS_ACC8(-1,0)])*detJ_B0[OPS_ACC0(-1,0)];

    CF_11 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(-1,0)]*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(-1,0)]*rhou1_B0[OPS_ACC1(-1,0)])*detJ_B0[OPS_ACC0(-1,0)];

    CF_21 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(-1,0)]*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(-1,0)]*rhou1_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(-1,0)]*rhoE_B0[OPS_ACC8(-1,0)])*detJ_B0[OPS_ACC0(-1,0)];

    CF_31 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(-1,0)]*rho_B0[OPS_ACC4(-1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(-1,0)]*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(-1,0)]*rhou1_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC2(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(-1,0)]*rhoE_B0[OPS_ACC8(-1,0)])*detJ_B0[OPS_ACC0(-1,0)];

    CF_02 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_12 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(0,0)]*rhou1_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_22 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_32 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC2(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_03 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(1,0)]*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(1,0)]*rhou1_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(1,0)]*rhoE_B0[OPS_ACC8(1,0)])*detJ_B0[OPS_ACC0(1,0)];

    CF_13 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(1,0)]*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(1,0)]*rhou1_B0[OPS_ACC1(1,0)])*detJ_B0[OPS_ACC0(1,0)];

    CF_23 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(1,0)]*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(1,0)]*rhou1_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(1,0)]*rhoE_B0[OPS_ACC8(1,0)])*detJ_B0[OPS_ACC0(1,0)];

    CF_33 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(1,0)]*rho_B0[OPS_ACC4(1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(1,0)]*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(1,0)]*rhou1_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC2(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(1,0)]*rhoE_B0[OPS_ACC8(1,0)])*detJ_B0[OPS_ACC0(1,0)];

    CF_04 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(2,0)]*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(2,0)]*rhou1_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(2,0)]*rhoE_B0[OPS_ACC8(2,0)])*detJ_B0[OPS_ACC0(2,0)];

    CF_14 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(2,0)]*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(2,0)]*rhou1_B0[OPS_ACC1(2,0)])*detJ_B0[OPS_ACC0(2,0)];

    CF_24 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(2,0)]*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(2,0)]*rhou1_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(2,0)]*rhoE_B0[OPS_ACC8(2,0)])*detJ_B0[OPS_ACC0(2,0)];

    CF_34 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(2,0)]*rho_B0[OPS_ACC4(2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(2,0)]*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(2,0)]*rhou1_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC2(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(2,0)]*rhoE_B0[OPS_ACC8(2,0)])*detJ_B0[OPS_ACC0(2,0)];

    CF_05 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC7(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC7(3,0)]*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC9(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC7(3,0)]*rhou1_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC7(3,0)]*rhoE_B0[OPS_ACC8(3,0)])*detJ_B0[OPS_ACC0(3,0)];

    CF_15 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC7(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_11*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_11*U0_B0[OPS_ACC7(3,0)]*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC9(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC7(3,0)]*rhou1_B0[OPS_ACC1(3,0)])*detJ_B0[OPS_ACC0(3,0)];

    CF_25 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC7(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC7(3,0)]*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC9(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC7(3,0)]*rhou1_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC7(3,0)]*rhoE_B0[OPS_ACC8(3,0)])*detJ_B0[OPS_ACC0(3,0)];

    CF_35 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC7(3,0)]*rho_B0[OPS_ACC4(3,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC7(3,0)]*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC9(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC7(3,0)]*rhou1_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC2(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC7(3,0)]*rhoE_B0[OPS_ACC8(3,0)])*detJ_B0[OPS_ACC0(3,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(-2,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(-1,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(1,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(2,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC8(3,0)];

    CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(-2,0)];

    CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(-1,0)];

    CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(0,0)];

    CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(1,0)];

    CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(2,0)];

    CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_11*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_12*rhou1_B0[OPS_ACC1(3,0)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(-2,0)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(-1,0)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(0,0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(1,0)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(2,0)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC8(3,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(-2,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(-1,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(1,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(2,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC10(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC8(3,0)];

    max_lambda_0_00 = fmax(fabs(D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC6(1,0)] +
      D01_B0[OPS_ACC9(1,0)]*u1_B0[OPS_ACC5(1,0)]), fmax(fabs(D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC6(-2,0)] +
      D01_B0[OPS_ACC9(-2,0)]*u1_B0[OPS_ACC5(-2,0)]), fmax(fabs(D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC6(0,0)] +
      D01_B0[OPS_ACC9(0,0)]*u1_B0[OPS_ACC5(0,0)]), fmax(fabs(D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC6(2,0)] +
      D01_B0[OPS_ACC9(2,0)]*u1_B0[OPS_ACC5(2,0)]), fmax(fabs(D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC6(-1,0)] +
      D01_B0[OPS_ACC9(-1,0)]*u1_B0[OPS_ACC5(-1,0)]), fabs(D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC6(3,0)] +
      D01_B0[OPS_ACC9(3,0)]*u1_B0[OPS_ACC5(3,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

    max_lambda_0_22 = fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(-2,0)], 2) + pow(D01_B0[OPS_ACC9(-2,0)],
      2))*a_B0[OPS_ACC11(-2,0)] + D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC6(-2,0)] +
      D01_B0[OPS_ACC9(-2,0)]*u1_B0[OPS_ACC5(-2,0)]), fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(0,0)], 2) +
      pow(D01_B0[OPS_ACC9(0,0)], 2))*a_B0[OPS_ACC11(0,0)] + D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC6(0,0)] +
      D01_B0[OPS_ACC9(0,0)]*u1_B0[OPS_ACC5(0,0)]), fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(3,0)], 2) +
      pow(D01_B0[OPS_ACC9(3,0)], 2))*a_B0[OPS_ACC11(3,0)] + D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC6(3,0)] +
      D01_B0[OPS_ACC9(3,0)]*u1_B0[OPS_ACC5(3,0)]), fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(-1,0)], 2) +
      pow(D01_B0[OPS_ACC9(-1,0)], 2))*a_B0[OPS_ACC11(-1,0)] + D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC6(-1,0)] +
      D01_B0[OPS_ACC9(-1,0)]*u1_B0[OPS_ACC5(-1,0)]), fmax(fabs(sqrt(pow(D00_B0[OPS_ACC3(1,0)], 2) +
      pow(D01_B0[OPS_ACC9(1,0)], 2))*a_B0[OPS_ACC11(1,0)] + D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC6(1,0)] +
      D01_B0[OPS_ACC9(1,0)]*u1_B0[OPS_ACC5(1,0)]), fabs(sqrt(pow(D00_B0[OPS_ACC3(2,0)], 2) + pow(D01_B0[OPS_ACC9(2,0)],
      2))*a_B0[OPS_ACC11(2,0)] + D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC6(2,0)] +
      D01_B0[OPS_ACC9(2,0)]*u1_B0[OPS_ACC5(2,0)]))))));

    max_lambda_0_33 = fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(0,0)], 2) + pow(D01_B0[OPS_ACC9(0,0)],
      2))*a_B0[OPS_ACC11(0,0)] + D00_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC6(0,0)] +
      D01_B0[OPS_ACC9(0,0)]*u1_B0[OPS_ACC5(0,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(-1,0)], 2) +
      pow(D01_B0[OPS_ACC9(-1,0)], 2))*a_B0[OPS_ACC11(-1,0)] + D00_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC6(-1,0)] +
      D01_B0[OPS_ACC9(-1,0)]*u1_B0[OPS_ACC5(-1,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(-2,0)], 2) +
      pow(D01_B0[OPS_ACC9(-2,0)], 2))*a_B0[OPS_ACC11(-2,0)] + D00_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC6(-2,0)] +
      D01_B0[OPS_ACC9(-2,0)]*u1_B0[OPS_ACC5(-2,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(3,0)], 2) +
      pow(D01_B0[OPS_ACC9(3,0)], 2))*a_B0[OPS_ACC11(3,0)] + D00_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC6(3,0)] +
      D01_B0[OPS_ACC9(3,0)]*u1_B0[OPS_ACC5(3,0)]), fmax(fabs(-sqrt(pow(D00_B0[OPS_ACC3(1,0)], 2) +
      pow(D01_B0[OPS_ACC9(1,0)], 2))*a_B0[OPS_ACC11(1,0)] + D00_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC6(1,0)] +
      D01_B0[OPS_ACC9(1,0)]*u1_B0[OPS_ACC5(1,0)]), fabs(-sqrt(pow(D00_B0[OPS_ACC3(2,0)], 2) + pow(D01_B0[OPS_ACC9(2,0)],
      2))*a_B0[OPS_ACC11(2,0)] + D00_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC6(2,0)] +
      D01_B0[OPS_ACC9(2,0)]*u1_B0[OPS_ACC5(2,0)]))))));

    beta_0 = (rc11)*(CF_02 + CS_02*max_lambda_0_00)*((rc19)*(CF_02 + CS_02*max_lambda_0_00) - rc20*(CF_03 +
      CS_03*max_lambda_0_00) + (rc21)*(CF_04 + CS_04*max_lambda_0_00)) + (rc11)*(CF_03 +
      CS_03*max_lambda_0_00)*((rc22)*(CF_03 + CS_03*max_lambda_0_00) - rc23*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc24)*pow(CF_04 + CS_04*max_lambda_0_00, 2);

    beta_1 = (rc11)*(CF_01 + CS_01*max_lambda_0_00)*((rc15)*(CF_01 + CS_01*max_lambda_0_00) - rc25*(CF_02 +
      CS_02*max_lambda_0_00) + (rc14)*(CF_03 + CS_03*max_lambda_0_00)) + (rc11)*(CF_02 +
      CS_02*max_lambda_0_00)*((rc25)*(CF_02 + CS_02*max_lambda_0_00) - rc25*(CF_03 + CS_03*max_lambda_0_00)) +
      (rc24)*pow(CF_03 + CS_03*max_lambda_0_00, 2);

    beta_2 = (rc11)*(CF_00 + CS_00*max_lambda_0_00)*((rc15)*(CF_00 + CS_00*max_lambda_0_00) + (rc21)*(CF_02 +
      CS_02*max_lambda_0_00)) + (rc11)*(CF_01 + CS_01*max_lambda_0_00)*(-rc23*(CF_00 + CS_00*max_lambda_0_00) +
      (rc22)*(CF_01 + CS_01*max_lambda_0_00) - rc20*(CF_02 + CS_02*max_lambda_0_00)) + (rc14)*pow(CF_02 +
      CS_02*max_lambda_0_00, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc29)*(CF_02 + CS_02*max_lambda_0_00) + (rc30)*(CF_03 + CS_03*max_lambda_0_00) -
      rc13*(CF_04 + CS_04*max_lambda_0_00)) + omega_1*(-rc13*(CF_01 + CS_01*max_lambda_0_00) + (rc30)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc29)*(CF_03 + CS_03*max_lambda_0_00)) + omega_2*((rc29)*(CF_00 + CS_00*max_lambda_0_00)
      - rc31*(CF_01 + CS_01*max_lambda_0_00) + (rc32)*(CF_02 + CS_02*max_lambda_0_00));

    beta_0 = (rc11)*(CF_03 - CS_03*max_lambda_0_00)*((rc19)*(CF_03 - CS_03*max_lambda_0_00) - rc20*(CF_04 -
      CS_04*max_lambda_0_00) + (rc21)*(CF_05 - CS_05*max_lambda_0_00)) + (rc11)*(CF_04 -
      CS_04*max_lambda_0_00)*((rc22)*(CF_04 - CS_04*max_lambda_0_00) - rc23*(CF_05 - CS_05*max_lambda_0_00)) +
      (rc24)*pow(CF_05 - CS_05*max_lambda_0_00, 2);

    beta_1 = (rc11)*(CF_02 - CS_02*max_lambda_0_00)*((rc15)*(CF_02 - CS_02*max_lambda_0_00) - rc25*(CF_03 -
      CS_03*max_lambda_0_00) + (rc14)*(CF_04 - CS_04*max_lambda_0_00)) + (rc11)*(CF_03 -
      CS_03*max_lambda_0_00)*((rc25)*(CF_03 - CS_03*max_lambda_0_00) - rc25*(CF_04 - CS_04*max_lambda_0_00)) +
      (rc24)*pow(CF_04 - CS_04*max_lambda_0_00, 2);

    beta_2 = (rc11)*(CF_01 - CS_01*max_lambda_0_00)*((rc15)*(CF_01 - CS_01*max_lambda_0_00) - rc23*(CF_02 -
      CS_02*max_lambda_0_00) + (rc21)*(CF_03 - CS_03*max_lambda_0_00)) + (rc11)*(CF_02 -
      CS_02*max_lambda_0_00)*((rc22)*(CF_02 - CS_02*max_lambda_0_00) - rc20*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc14)*pow(CF_03 - CS_03*max_lambda_0_00, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc32)*(CF_03 - CS_03*max_lambda_0_00) - rc31*(CF_04 - CS_04*max_lambda_0_00) +
      (rc29)*(CF_05 - CS_05*max_lambda_0_00)) + omega_1*((rc29)*(CF_02 - CS_02*max_lambda_0_00) + (rc30)*(CF_03 -
      CS_03*max_lambda_0_00) - rc13*(CF_04 - CS_04*max_lambda_0_00)) + omega_2*(-rc13*(CF_01 - CS_01*max_lambda_0_00) +
      (rc30)*(CF_02 - CS_02*max_lambda_0_00) + (rc29)*(CF_03 - CS_03*max_lambda_0_00));

    beta_0 = (rc11)*(CF_12 + CS_12*max_lambda_0_11)*((rc19)*(CF_12 + CS_12*max_lambda_0_11) - rc20*(CF_13 +
      CS_13*max_lambda_0_11) + (rc21)*(CF_14 + CS_14*max_lambda_0_11)) + (rc11)*(CF_13 +
      CS_13*max_lambda_0_11)*((rc22)*(CF_13 + CS_13*max_lambda_0_11) - rc23*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc24)*pow(CF_14 + CS_14*max_lambda_0_11, 2);

    beta_1 = (rc11)*(CF_11 + CS_11*max_lambda_0_11)*((rc15)*(CF_11 + CS_11*max_lambda_0_11) - rc25*(CF_12 +
      CS_12*max_lambda_0_11) + (rc14)*(CF_13 + CS_13*max_lambda_0_11)) + (rc11)*(CF_12 +
      CS_12*max_lambda_0_11)*((rc25)*(CF_12 + CS_12*max_lambda_0_11) - rc25*(CF_13 + CS_13*max_lambda_0_11)) +
      (rc24)*pow(CF_13 + CS_13*max_lambda_0_11, 2);

    beta_2 = (rc11)*(CF_10 + CS_10*max_lambda_0_11)*((rc15)*(CF_10 + CS_10*max_lambda_0_11) + (rc21)*(CF_12 +
      CS_12*max_lambda_0_11)) + (rc11)*(CF_11 + CS_11*max_lambda_0_11)*(-rc23*(CF_10 + CS_10*max_lambda_0_11) +
      (rc22)*(CF_11 + CS_11*max_lambda_0_11) - rc20*(CF_12 + CS_12*max_lambda_0_11)) + (rc14)*pow(CF_12 +
      CS_12*max_lambda_0_11, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc29)*(CF_12 + CS_12*max_lambda_0_11) + (rc30)*(CF_13 + CS_13*max_lambda_0_11) -
      rc13*(CF_14 + CS_14*max_lambda_0_11)) + omega_1*(-rc13*(CF_11 + CS_11*max_lambda_0_11) + (rc30)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc29)*(CF_13 + CS_13*max_lambda_0_11)) + omega_2*((rc29)*(CF_10 + CS_10*max_lambda_0_11)
      - rc31*(CF_11 + CS_11*max_lambda_0_11) + (rc32)*(CF_12 + CS_12*max_lambda_0_11));

    beta_0 = (rc11)*(CF_13 - CS_13*max_lambda_0_11)*((rc19)*(CF_13 - CS_13*max_lambda_0_11) - rc20*(CF_14 -
      CS_14*max_lambda_0_11) + (rc21)*(CF_15 - CS_15*max_lambda_0_11)) + (rc11)*(CF_14 -
      CS_14*max_lambda_0_11)*((rc22)*(CF_14 - CS_14*max_lambda_0_11) - rc23*(CF_15 - CS_15*max_lambda_0_11)) +
      (rc24)*pow(CF_15 - CS_15*max_lambda_0_11, 2);

    beta_1 = (rc11)*(CF_12 - CS_12*max_lambda_0_11)*((rc15)*(CF_12 - CS_12*max_lambda_0_11) - rc25*(CF_13 -
      CS_13*max_lambda_0_11) + (rc14)*(CF_14 - CS_14*max_lambda_0_11)) + (rc11)*(CF_13 -
      CS_13*max_lambda_0_11)*((rc25)*(CF_13 - CS_13*max_lambda_0_11) - rc25*(CF_14 - CS_14*max_lambda_0_11)) +
      (rc24)*pow(CF_14 - CS_14*max_lambda_0_11, 2);

    beta_2 = (rc11)*(CF_11 - CS_11*max_lambda_0_11)*((rc15)*(CF_11 - CS_11*max_lambda_0_11) - rc23*(CF_12 -
      CS_12*max_lambda_0_11) + (rc21)*(CF_13 - CS_13*max_lambda_0_11)) + (rc11)*(CF_12 -
      CS_12*max_lambda_0_11)*((rc22)*(CF_12 - CS_12*max_lambda_0_11) - rc20*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc14)*pow(CF_13 - CS_13*max_lambda_0_11, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc32)*(CF_13 - CS_13*max_lambda_0_11) - rc31*(CF_14 - CS_14*max_lambda_0_11) +
      (rc29)*(CF_15 - CS_15*max_lambda_0_11)) + omega_1*((rc29)*(CF_12 - CS_12*max_lambda_0_11) + (rc30)*(CF_13 -
      CS_13*max_lambda_0_11) - rc13*(CF_14 - CS_14*max_lambda_0_11)) + omega_2*(-rc13*(CF_11 - CS_11*max_lambda_0_11) +
      (rc30)*(CF_12 - CS_12*max_lambda_0_11) + (rc29)*(CF_13 - CS_13*max_lambda_0_11));

    beta_0 = (rc11)*(CF_22 + CS_22*max_lambda_0_22)*((rc19)*(CF_22 + CS_22*max_lambda_0_22) - rc20*(CF_23 +
      CS_23*max_lambda_0_22) + (rc21)*(CF_24 + CS_24*max_lambda_0_22)) + (rc11)*(CF_23 +
      CS_23*max_lambda_0_22)*((rc22)*(CF_23 + CS_23*max_lambda_0_22) - rc23*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc24)*pow(CF_24 + CS_24*max_lambda_0_22, 2);

    beta_1 = (rc11)*(CF_21 + CS_21*max_lambda_0_22)*((rc15)*(CF_21 + CS_21*max_lambda_0_22) - rc25*(CF_22 +
      CS_22*max_lambda_0_22) + (rc14)*(CF_23 + CS_23*max_lambda_0_22)) + (rc11)*(CF_22 +
      CS_22*max_lambda_0_22)*((rc25)*(CF_22 + CS_22*max_lambda_0_22) - rc25*(CF_23 + CS_23*max_lambda_0_22)) +
      (rc24)*pow(CF_23 + CS_23*max_lambda_0_22, 2);

    beta_2 = (rc11)*(CF_20 + CS_20*max_lambda_0_22)*((rc15)*(CF_20 + CS_20*max_lambda_0_22) + (rc21)*(CF_22 +
      CS_22*max_lambda_0_22)) + (rc11)*(CF_21 + CS_21*max_lambda_0_22)*(-rc23*(CF_20 + CS_20*max_lambda_0_22) +
      (rc22)*(CF_21 + CS_21*max_lambda_0_22) - rc20*(CF_22 + CS_22*max_lambda_0_22)) + (rc14)*pow(CF_22 +
      CS_22*max_lambda_0_22, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc29)*(CF_22 + CS_22*max_lambda_0_22) + (rc30)*(CF_23 + CS_23*max_lambda_0_22) -
      rc13*(CF_24 + CS_24*max_lambda_0_22)) + omega_1*(-rc13*(CF_21 + CS_21*max_lambda_0_22) + (rc30)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc29)*(CF_23 + CS_23*max_lambda_0_22)) + omega_2*((rc29)*(CF_20 + CS_20*max_lambda_0_22)
      - rc31*(CF_21 + CS_21*max_lambda_0_22) + (rc32)*(CF_22 + CS_22*max_lambda_0_22));

    beta_0 = (rc11)*(CF_23 - CS_23*max_lambda_0_22)*((rc19)*(CF_23 - CS_23*max_lambda_0_22) - rc20*(CF_24 -
      CS_24*max_lambda_0_22) + (rc21)*(CF_25 - CS_25*max_lambda_0_22)) + (rc11)*(CF_24 -
      CS_24*max_lambda_0_22)*((rc22)*(CF_24 - CS_24*max_lambda_0_22) - rc23*(CF_25 - CS_25*max_lambda_0_22)) +
      (rc24)*pow(CF_25 - CS_25*max_lambda_0_22, 2);

    beta_1 = (rc11)*(CF_22 - CS_22*max_lambda_0_22)*((rc15)*(CF_22 - CS_22*max_lambda_0_22) - rc25*(CF_23 -
      CS_23*max_lambda_0_22) + (rc14)*(CF_24 - CS_24*max_lambda_0_22)) + (rc11)*(CF_23 -
      CS_23*max_lambda_0_22)*((rc25)*(CF_23 - CS_23*max_lambda_0_22) - rc25*(CF_24 - CS_24*max_lambda_0_22)) +
      (rc24)*pow(CF_24 - CS_24*max_lambda_0_22, 2);

    beta_2 = (rc11)*(CF_21 - CS_21*max_lambda_0_22)*((rc15)*(CF_21 - CS_21*max_lambda_0_22) - rc23*(CF_22 -
      CS_22*max_lambda_0_22) + (rc21)*(CF_23 - CS_23*max_lambda_0_22)) + (rc11)*(CF_22 -
      CS_22*max_lambda_0_22)*((rc22)*(CF_22 - CS_22*max_lambda_0_22) - rc20*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc14)*pow(CF_23 - CS_23*max_lambda_0_22, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc32)*(CF_23 - CS_23*max_lambda_0_22) - rc31*(CF_24 - CS_24*max_lambda_0_22) +
      (rc29)*(CF_25 - CS_25*max_lambda_0_22)) + omega_1*((rc29)*(CF_22 - CS_22*max_lambda_0_22) + (rc30)*(CF_23 -
      CS_23*max_lambda_0_22) - rc13*(CF_24 - CS_24*max_lambda_0_22)) + omega_2*(-rc13*(CF_21 - CS_21*max_lambda_0_22) +
      (rc30)*(CF_22 - CS_22*max_lambda_0_22) + (rc29)*(CF_23 - CS_23*max_lambda_0_22));

    beta_0 = (rc11)*(CF_32 + CS_32*max_lambda_0_33)*((rc19)*(CF_32 + CS_32*max_lambda_0_33) - rc20*(CF_33 +
      CS_33*max_lambda_0_33) + (rc21)*(CF_34 + CS_34*max_lambda_0_33)) + (rc11)*(CF_33 +
      CS_33*max_lambda_0_33)*((rc22)*(CF_33 + CS_33*max_lambda_0_33) - rc23*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc24)*pow(CF_34 + CS_34*max_lambda_0_33, 2);

    beta_1 = (rc11)*(CF_31 + CS_31*max_lambda_0_33)*((rc15)*(CF_31 + CS_31*max_lambda_0_33) - rc25*(CF_32 +
      CS_32*max_lambda_0_33) + (rc14)*(CF_33 + CS_33*max_lambda_0_33)) + (rc11)*(CF_32 +
      CS_32*max_lambda_0_33)*((rc25)*(CF_32 + CS_32*max_lambda_0_33) - rc25*(CF_33 + CS_33*max_lambda_0_33)) +
      (rc24)*pow(CF_33 + CS_33*max_lambda_0_33, 2);

    beta_2 = (rc11)*(CF_30 + CS_30*max_lambda_0_33)*((rc15)*(CF_30 + CS_30*max_lambda_0_33) + (rc21)*(CF_32 +
      CS_32*max_lambda_0_33)) + (rc11)*(CF_31 + CS_31*max_lambda_0_33)*(-rc23*(CF_30 + CS_30*max_lambda_0_33) +
      (rc22)*(CF_31 + CS_31*max_lambda_0_33) - rc20*(CF_32 + CS_32*max_lambda_0_33)) + (rc14)*pow(CF_32 +
      CS_32*max_lambda_0_33, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc29)*(CF_32 + CS_32*max_lambda_0_33) + (rc30)*(CF_33 + CS_33*max_lambda_0_33) -
      rc13*(CF_34 + CS_34*max_lambda_0_33)) + omega_1*(-rc13*(CF_31 + CS_31*max_lambda_0_33) + (rc30)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc29)*(CF_33 + CS_33*max_lambda_0_33)) + omega_2*((rc29)*(CF_30 + CS_30*max_lambda_0_33)
      - rc31*(CF_31 + CS_31*max_lambda_0_33) + (rc32)*(CF_32 + CS_32*max_lambda_0_33));

    beta_0 = (rc11)*(CF_33 - CS_33*max_lambda_0_33)*((rc19)*(CF_33 - CS_33*max_lambda_0_33) - rc20*(CF_34 -
      CS_34*max_lambda_0_33) + (rc21)*(CF_35 - CS_35*max_lambda_0_33)) + (rc11)*(CF_34 -
      CS_34*max_lambda_0_33)*((rc22)*(CF_34 - CS_34*max_lambda_0_33) - rc23*(CF_35 - CS_35*max_lambda_0_33)) +
      (rc24)*pow(CF_35 - CS_35*max_lambda_0_33, 2);

    beta_1 = (rc11)*(CF_32 - CS_32*max_lambda_0_33)*((rc15)*(CF_32 - CS_32*max_lambda_0_33) - rc25*(CF_33 -
      CS_33*max_lambda_0_33) + (rc14)*(CF_34 - CS_34*max_lambda_0_33)) + (rc11)*(CF_33 -
      CS_33*max_lambda_0_33)*((rc25)*(CF_33 - CS_33*max_lambda_0_33) - rc25*(CF_34 - CS_34*max_lambda_0_33)) +
      (rc24)*pow(CF_34 - CS_34*max_lambda_0_33, 2);

    beta_2 = (rc11)*(CF_31 - CS_31*max_lambda_0_33)*((rc15)*(CF_31 - CS_31*max_lambda_0_33) - rc23*(CF_32 -
      CS_32*max_lambda_0_33) + (rc21)*(CF_33 - CS_33*max_lambda_0_33)) + (rc11)*(CF_32 -
      CS_32*max_lambda_0_33)*((rc22)*(CF_32 - CS_32*max_lambda_0_33) - rc20*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc14)*pow(CF_33 - CS_33*max_lambda_0_33, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc32)*(CF_33 - CS_33*max_lambda_0_33) - rc31*(CF_34 - CS_34*max_lambda_0_33) +
      (rc29)*(CF_35 - CS_35*max_lambda_0_33)) + omega_1*((rc29)*(CF_32 - CS_32*max_lambda_0_33) + (rc30)*(CF_33 -
      CS_33*max_lambda_0_33) - rc13*(CF_34 - CS_34*max_lambda_0_33)) + omega_2*(-rc13*(CF_31 - CS_31*max_lambda_0_33) +
      (rc30)*(CF_32 - CS_32*max_lambda_0_33) + (rc29)*(CF_33 - CS_33*max_lambda_0_33));

    wk0_B0[OPS_ACC14(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC13(0,0)] = AVG_0_D01*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_D00*AVG_0_a*inv_AVG_met_fact + AVG_0_u0) +
      AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC15(0,0)] = -AVG_0_D00*AVG_0_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_D01*AVG_0_a*inv_AVG_met_fact + AVG_0_u1) +
      AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC12(0,0)] = AVG_0_rho*Recon_1*(-AVG_0_D00*AVG_0_u1*inv_AVG_met_fact +
      AVG_0_D01*AVG_0_u0*inv_AVG_met_fact) +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(rcinv33*((rc11)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) + AVG_0_a*(AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv33*((rc11)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) - AVG_0_a*(AVG_0_D00*AVG_0_u0*inv_AVG_met_fact + AVG_0_D01*AVG_0_u1*inv_AVG_met_fact)) +
      Recon_0*((rc11)*pow(AVG_0_u0, 2) + (rc11)*pow(AVG_0_u1, 2));

}

 void opensbliblock00Kernel001(const double *detJ_B0, const double *rhou1_B0, const double *D10_B0, const double *p_B0,
const double *rho_B0, const double *D11_B0, const double *u1_B0, const double *u0_B0, const double *rhoE_B0, const
double *U1_B0, const double *rhou0_B0, const double *a_B0, double *wk7_B0, double *wk4_B0, double *wk6_B0, double
*wk5_B0)
{
   double CS_15 = 0.0;
   double inv_AVG_met_fact = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double CF_33 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double inv_AVG_rho = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double Recon_3 = 0.0;
   double beta_0 = 0.0;
   double CF_15 = 0.0;
   double CF_24 = 0.0;
   double CS_20 = 0.0;
   double alpha_2 = 0.0;
   double CF_31 = 0.0;
   double CF_01 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_00 = 0.0;
   double max_lambda_1_22 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_1_rho = 0.0;
   double CS_30 = 0.0;
   double Recon_2 = 0.0;
   double CS_01 = 0.0;
   double AVG_1_u0 = 0.0;
   double CF_14 = 0.0;
   double CS_13 = 0.0;
   double beta_1 = 0.0;
   double CS_33 = 0.0;
   double CF_03 = 0.0;
   double AVG_1_D10 = 0.0;
   double CF_22 = 0.0;
   double Recon_0 = 0.0;
   double alpha_1 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double CF_10 = 0.0;
   double CF_00 = 0.0;
   double AVG_1_a = 0.0;
   double CS_05 = 0.0;
   double CS_22 = 0.0;
   double CS_25 = 0.0;
   double CF_23 = 0.0;
   double CS_35 = 0.0;
   double omega_2 = 0.0;
   double CS_23 = 0.0;
   double AVG_1_u1 = 0.0;
   double CF_11 = 0.0;
   double CF_20 = 0.0;
   double CF_32 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double CS_34 = 0.0;
   double CF_21 = 0.0;
   double beta_2 = 0.0;
   double omega_0 = 0.0;
   double CS_11 = 0.0;
   double alpha_0 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double AVG_1_D11 = 0.0;
   double CF_35 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CF_05 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double CS_24 = 0.0;
   double max_lambda_1_00 = 0.0;
   double CF_12 = 0.0;
   double CF_34 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double CS_03 = 0.0;
   double CS_10 = 0.0;
   double CF_13 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double CS_04 = 0.0;
   double CS_21 = 0.0;
   double CS_12 = 0.0;
   double CF_04 = 0.0;
   double omega_1 = 0.0;
   double CS_32 = 0.0;
   double AVG_1_1_LEV_00 = 0.0;
   double Recon_1 = 0.0;
   double CF_25 = 0.0;
   double CF_30 = 0.0;
   double CF_02 = 0.0;
   double CS_31 = 0.0;
   double max_lambda_1_11 = 0.0;
   double max_lambda_1_33 = 0.0;
   double CS_14 = 0.0;
   double CS_02 = 0.0;
   AVG_1_u0 = (rc11)*(u0_B0[OPS_ACC7(0,0)] + u0_B0[OPS_ACC7(0,1)]);

   AVG_1_u1 = (rc11)*(u1_B0[OPS_ACC6(0,0)] + u1_B0[OPS_ACC6(0,1)]);

   AVG_1_a = (rc11)*(a_B0[OPS_ACC11(0,1)] + a_B0[OPS_ACC11(0,0)]);

   AVG_1_rho = (rc11)*(rho_B0[OPS_ACC4(0,0)] + rho_B0[OPS_ACC4(0,1)]);

   AVG_1_D10 = (rc11)*(D10_B0[OPS_ACC2(0,1)] + D10_B0[OPS_ACC2(0,0)]);

   AVG_1_D11 = (rc11)*(D11_B0[OPS_ACC5(0,1)] + D11_B0[OPS_ACC5(0,0)]);

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

   inv_AVG_met_fact = pow(pow(AVG_1_D10, 2) + pow(AVG_1_D11, 2), rc18);

    AVG_1_1_LEV_00 = -rc11*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) -
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

    CF_00 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,-2)]*rho_B0[OPS_ACC4(0,-2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,-2)]*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,-2)]*rhou1_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,-2)]*rhoE_B0[OPS_ACC8(0,-2)])*detJ_B0[OPS_ACC0(0,-2)];

    CF_10 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,-2)]*rho_B0[OPS_ACC4(0,-2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,-2)]*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,-2)]*rhou1_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC0(0,-2)];

    CF_20 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,-2)]*rho_B0[OPS_ACC4(0,-2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,-2)]*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,-2)]*rhou1_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,-2)]*rhoE_B0[OPS_ACC8(0,-2)])*detJ_B0[OPS_ACC0(0,-2)];

    CF_30 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,-2)]*rho_B0[OPS_ACC4(0,-2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,-2)]*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,-2)]*rhou1_B0[OPS_ACC1(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,-2)]*p_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,-2)]*rhoE_B0[OPS_ACC8(0,-2)])*detJ_B0[OPS_ACC0(0,-2)];

    CF_01 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,-1)]*rho_B0[OPS_ACC4(0,-1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,-1)]*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,-1)]*rhou1_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,-1)]*rhoE_B0[OPS_ACC8(0,-1)])*detJ_B0[OPS_ACC0(0,-1)];

    CF_11 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,-1)]*rho_B0[OPS_ACC4(0,-1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,-1)]*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,-1)]*rhou1_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC0(0,-1)];

    CF_21 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,-1)]*rho_B0[OPS_ACC4(0,-1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,-1)]*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,-1)]*rhou1_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,-1)]*rhoE_B0[OPS_ACC8(0,-1)])*detJ_B0[OPS_ACC0(0,-1)];

    CF_31 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,-1)]*rho_B0[OPS_ACC4(0,-1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,-1)]*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,-1)]*rhou1_B0[OPS_ACC1(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,-1)]*p_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,-1)]*rhoE_B0[OPS_ACC8(0,-1)])*detJ_B0[OPS_ACC0(0,-1)];

    CF_02 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_12 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,0)]*rhou1_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_22 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_32 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,0)]*rho_B0[OPS_ACC4(0,0)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,0)]*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,0)]*rhou1_B0[OPS_ACC1(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,0)]*p_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,0)]*rhoE_B0[OPS_ACC8(0,0)])*detJ_B0[OPS_ACC0(0,0)];

    CF_03 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,1)]*rho_B0[OPS_ACC4(0,1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,1)]*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,1)]*rhou1_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,1)]*rhoE_B0[OPS_ACC8(0,1)])*detJ_B0[OPS_ACC0(0,1)];

    CF_13 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,1)]*rho_B0[OPS_ACC4(0,1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,1)]*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,1)]*rhou1_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC0(0,1)];

    CF_23 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,1)]*rho_B0[OPS_ACC4(0,1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,1)]*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,1)]*rhou1_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,1)]*rhoE_B0[OPS_ACC8(0,1)])*detJ_B0[OPS_ACC0(0,1)];

    CF_33 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,1)]*rho_B0[OPS_ACC4(0,1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,1)]*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,1)]*rhou1_B0[OPS_ACC1(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,1)]*p_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,1)]*rhoE_B0[OPS_ACC8(0,1)])*detJ_B0[OPS_ACC0(0,1)];

    CF_04 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,2)]*rho_B0[OPS_ACC4(0,2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,2)]*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,2)]*rhou1_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,2)]*rhoE_B0[OPS_ACC8(0,2)])*detJ_B0[OPS_ACC0(0,2)];

    CF_14 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,2)]*rho_B0[OPS_ACC4(0,2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,2)]*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,2)]*rhou1_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC0(0,2)];

    CF_24 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,2)]*rho_B0[OPS_ACC4(0,2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,2)]*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,2)]*rhou1_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,2)]*rhoE_B0[OPS_ACC8(0,2)])*detJ_B0[OPS_ACC0(0,2)];

    CF_34 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,2)]*rho_B0[OPS_ACC4(0,2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,2)]*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,2)]*rhou1_B0[OPS_ACC1(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,2)]*p_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,2)]*rhoE_B0[OPS_ACC8(0,2)])*detJ_B0[OPS_ACC0(0,2)];

    CF_05 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC9(0,3)]*rho_B0[OPS_ACC4(0,3)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC9(0,3)]*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC9(0,3)]*rhou1_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC9(0,3)]*rhoE_B0[OPS_ACC8(0,3)])*detJ_B0[OPS_ACC0(0,3)];

    CF_15 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC9(0,3)]*rho_B0[OPS_ACC4(0,3)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC9(0,3)]*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_12*D11_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_12*U1_B0[OPS_ACC9(0,3)]*rhou1_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC0(0,3)];

    CF_25 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC9(0,3)]*rho_B0[OPS_ACC4(0,3)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC9(0,3)]*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC9(0,3)]*rhou1_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC9(0,3)]*rhoE_B0[OPS_ACC8(0,3)])*detJ_B0[OPS_ACC0(0,3)];

    CF_35 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC9(0,3)]*rho_B0[OPS_ACC4(0,3)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC9(0,3)]*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC9(0,3)]*rhou1_B0[OPS_ACC1(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,3)]*p_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC9(0,3)]*rhoE_B0[OPS_ACC8(0,3)])*detJ_B0[OPS_ACC0(0,3)];

    CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,-2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,-2)];

    CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,-1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,-1)];

    CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,0)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,0)];

    CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,1)];

    CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,2)];

    CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC1(0,3)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC8(0,3)];

    CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-2)];

    CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-1)];

    CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,0)];

    CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,1)];

    CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,2)];

    CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,3)];

    CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,-2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,-2)];

    CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,-1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,-1)];

    CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,0)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,0)];

    CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,1)];

    CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,2)];

    CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC1(0,3)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC8(0,3)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,-2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,-2)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,-1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,-1)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,0)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,1)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,2)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC10(0,3)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,3)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC8(0,3)];

    max_lambda_1_00 = fmax(fabs(D10_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC7(0,-2)] +
      D11_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC6(0,-2)]), fmax(fabs(D10_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC7(0,2)] +
      D11_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC6(0,2)]), fmax(fabs(D10_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC7(0,1)] +
      D11_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC6(0,1)]), fmax(fabs(D10_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC6(0,0)]), fmax(fabs(D10_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC7(0,3)] +
      D11_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC6(0,3)]), fabs(D10_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC7(0,-1)] +
      D11_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC6(0,-1)]))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(sqrt(pow(D10_B0[OPS_ACC2(0,2)], 2) + pow(D11_B0[OPS_ACC5(0,2)], 2))*a_B0[OPS_ACC11(0,2)]
      + D10_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC7(0,2)] + D11_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC6(0,2)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC2(0,1)], 2) + pow(D11_B0[OPS_ACC5(0,1)], 2))*a_B0[OPS_ACC11(0,1)] +
      D10_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC7(0,1)] + D11_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC6(0,1)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC2(0,0)], 2) + pow(D11_B0[OPS_ACC5(0,0)], 2))*a_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC7(0,0)] + D11_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC6(0,0)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC2(0,3)], 2) + pow(D11_B0[OPS_ACC5(0,3)], 2))*a_B0[OPS_ACC11(0,3)] +
      D10_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC7(0,3)] + D11_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC6(0,3)]),
      fmax(fabs(sqrt(pow(D10_B0[OPS_ACC2(0,-1)], 2) + pow(D11_B0[OPS_ACC5(0,-1)], 2))*a_B0[OPS_ACC11(0,-1)] +
      D10_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC7(0,-1)] + D11_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC6(0,-1)]),
      fabs(sqrt(pow(D10_B0[OPS_ACC2(0,-2)], 2) + pow(D11_B0[OPS_ACC5(0,-2)], 2))*a_B0[OPS_ACC11(0,-2)] +
      D10_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC7(0,-2)] + D11_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC6(0,-2)]))))));

    max_lambda_1_33 = fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,-2)], 2) + pow(D11_B0[OPS_ACC5(0,-2)],
      2))*a_B0[OPS_ACC11(0,-2)] + D10_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC7(0,-2)] +
      D11_B0[OPS_ACC5(0,-2)]*u1_B0[OPS_ACC6(0,-2)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,1)], 2) +
      pow(D11_B0[OPS_ACC5(0,1)], 2))*a_B0[OPS_ACC11(0,1)] + D10_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC7(0,1)] +
      D11_B0[OPS_ACC5(0,1)]*u1_B0[OPS_ACC6(0,1)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,2)], 2) +
      pow(D11_B0[OPS_ACC5(0,2)], 2))*a_B0[OPS_ACC11(0,2)] + D10_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC7(0,2)] +
      D11_B0[OPS_ACC5(0,2)]*u1_B0[OPS_ACC6(0,2)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,0)], 2) +
      pow(D11_B0[OPS_ACC5(0,0)], 2))*a_B0[OPS_ACC11(0,0)] + D10_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC5(0,0)]*u1_B0[OPS_ACC6(0,0)]), fmax(fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,-1)], 2) +
      pow(D11_B0[OPS_ACC5(0,-1)], 2))*a_B0[OPS_ACC11(0,-1)] + D10_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC7(0,-1)] +
      D11_B0[OPS_ACC5(0,-1)]*u1_B0[OPS_ACC6(0,-1)]), fabs(-sqrt(pow(D10_B0[OPS_ACC2(0,3)], 2) +
      pow(D11_B0[OPS_ACC5(0,3)], 2))*a_B0[OPS_ACC11(0,3)] + D10_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC7(0,3)] +
      D11_B0[OPS_ACC5(0,3)]*u1_B0[OPS_ACC6(0,3)]))))));

    beta_0 = (rc11)*(CF_02 + CS_02*max_lambda_1_00)*((rc19)*(CF_02 + CS_02*max_lambda_1_00) - rc20*(CF_03 +
      CS_03*max_lambda_1_00) + (rc21)*(CF_04 + CS_04*max_lambda_1_00)) + (rc11)*(CF_03 +
      CS_03*max_lambda_1_00)*((rc22)*(CF_03 + CS_03*max_lambda_1_00) - rc23*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc24)*pow(CF_04 + CS_04*max_lambda_1_00, 2);

    beta_1 = (rc11)*(CF_01 + CS_01*max_lambda_1_00)*((rc15)*(CF_01 + CS_01*max_lambda_1_00) - rc25*(CF_02 +
      CS_02*max_lambda_1_00) + (rc14)*(CF_03 + CS_03*max_lambda_1_00)) + (rc11)*(CF_02 +
      CS_02*max_lambda_1_00)*((rc25)*(CF_02 + CS_02*max_lambda_1_00) - rc25*(CF_03 + CS_03*max_lambda_1_00)) +
      (rc24)*pow(CF_03 + CS_03*max_lambda_1_00, 2);

    beta_2 = (rc11)*(CF_00 + CS_00*max_lambda_1_00)*((rc15)*(CF_00 + CS_00*max_lambda_1_00) + (rc21)*(CF_02 +
      CS_02*max_lambda_1_00)) + (rc11)*(CF_01 + CS_01*max_lambda_1_00)*(-rc23*(CF_00 + CS_00*max_lambda_1_00) +
      (rc22)*(CF_01 + CS_01*max_lambda_1_00) - rc20*(CF_02 + CS_02*max_lambda_1_00)) + (rc14)*pow(CF_02 +
      CS_02*max_lambda_1_00, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc29)*(CF_02 + CS_02*max_lambda_1_00) + (rc30)*(CF_03 + CS_03*max_lambda_1_00) -
      rc13*(CF_04 + CS_04*max_lambda_1_00)) + omega_1*(-rc13*(CF_01 + CS_01*max_lambda_1_00) + (rc30)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc29)*(CF_03 + CS_03*max_lambda_1_00)) + omega_2*((rc29)*(CF_00 + CS_00*max_lambda_1_00)
      - rc31*(CF_01 + CS_01*max_lambda_1_00) + (rc32)*(CF_02 + CS_02*max_lambda_1_00));

    beta_0 = (rc11)*(CF_03 - CS_03*max_lambda_1_00)*((rc19)*(CF_03 - CS_03*max_lambda_1_00) - rc20*(CF_04 -
      CS_04*max_lambda_1_00) + (rc21)*(CF_05 - CS_05*max_lambda_1_00)) + (rc11)*(CF_04 -
      CS_04*max_lambda_1_00)*((rc22)*(CF_04 - CS_04*max_lambda_1_00) - rc23*(CF_05 - CS_05*max_lambda_1_00)) +
      (rc24)*pow(CF_05 - CS_05*max_lambda_1_00, 2);

    beta_1 = (rc11)*(CF_02 - CS_02*max_lambda_1_00)*((rc15)*(CF_02 - CS_02*max_lambda_1_00) - rc25*(CF_03 -
      CS_03*max_lambda_1_00) + (rc14)*(CF_04 - CS_04*max_lambda_1_00)) + (rc11)*(CF_03 -
      CS_03*max_lambda_1_00)*((rc25)*(CF_03 - CS_03*max_lambda_1_00) - rc25*(CF_04 - CS_04*max_lambda_1_00)) +
      (rc24)*pow(CF_04 - CS_04*max_lambda_1_00, 2);

    beta_2 = (rc11)*(CF_01 - CS_01*max_lambda_1_00)*((rc15)*(CF_01 - CS_01*max_lambda_1_00) - rc23*(CF_02 -
      CS_02*max_lambda_1_00) + (rc21)*(CF_03 - CS_03*max_lambda_1_00)) + (rc11)*(CF_02 -
      CS_02*max_lambda_1_00)*((rc22)*(CF_02 - CS_02*max_lambda_1_00) - rc20*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc14)*pow(CF_03 - CS_03*max_lambda_1_00, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc32)*(CF_03 - CS_03*max_lambda_1_00) - rc31*(CF_04 - CS_04*max_lambda_1_00) +
      (rc29)*(CF_05 - CS_05*max_lambda_1_00)) + omega_1*((rc29)*(CF_02 - CS_02*max_lambda_1_00) + (rc30)*(CF_03 -
      CS_03*max_lambda_1_00) - rc13*(CF_04 - CS_04*max_lambda_1_00)) + omega_2*(-rc13*(CF_01 - CS_01*max_lambda_1_00) +
      (rc30)*(CF_02 - CS_02*max_lambda_1_00) + (rc29)*(CF_03 - CS_03*max_lambda_1_00));

    beta_0 = (rc11)*(CF_12 + CS_12*max_lambda_1_11)*((rc19)*(CF_12 + CS_12*max_lambda_1_11) - rc20*(CF_13 +
      CS_13*max_lambda_1_11) + (rc21)*(CF_14 + CS_14*max_lambda_1_11)) + (rc11)*(CF_13 +
      CS_13*max_lambda_1_11)*((rc22)*(CF_13 + CS_13*max_lambda_1_11) - rc23*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc24)*pow(CF_14 + CS_14*max_lambda_1_11, 2);

    beta_1 = (rc11)*(CF_11 + CS_11*max_lambda_1_11)*((rc15)*(CF_11 + CS_11*max_lambda_1_11) - rc25*(CF_12 +
      CS_12*max_lambda_1_11) + (rc14)*(CF_13 + CS_13*max_lambda_1_11)) + (rc11)*(CF_12 +
      CS_12*max_lambda_1_11)*((rc25)*(CF_12 + CS_12*max_lambda_1_11) - rc25*(CF_13 + CS_13*max_lambda_1_11)) +
      (rc24)*pow(CF_13 + CS_13*max_lambda_1_11, 2);

    beta_2 = (rc11)*(CF_10 + CS_10*max_lambda_1_11)*((rc15)*(CF_10 + CS_10*max_lambda_1_11) + (rc21)*(CF_12 +
      CS_12*max_lambda_1_11)) + (rc11)*(CF_11 + CS_11*max_lambda_1_11)*(-rc23*(CF_10 + CS_10*max_lambda_1_11) +
      (rc22)*(CF_11 + CS_11*max_lambda_1_11) - rc20*(CF_12 + CS_12*max_lambda_1_11)) + (rc14)*pow(CF_12 +
      CS_12*max_lambda_1_11, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc29)*(CF_12 + CS_12*max_lambda_1_11) + (rc30)*(CF_13 + CS_13*max_lambda_1_11) -
      rc13*(CF_14 + CS_14*max_lambda_1_11)) + omega_1*(-rc13*(CF_11 + CS_11*max_lambda_1_11) + (rc30)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc29)*(CF_13 + CS_13*max_lambda_1_11)) + omega_2*((rc29)*(CF_10 + CS_10*max_lambda_1_11)
      - rc31*(CF_11 + CS_11*max_lambda_1_11) + (rc32)*(CF_12 + CS_12*max_lambda_1_11));

    beta_0 = (rc11)*(CF_13 - CS_13*max_lambda_1_11)*((rc19)*(CF_13 - CS_13*max_lambda_1_11) - rc20*(CF_14 -
      CS_14*max_lambda_1_11) + (rc21)*(CF_15 - CS_15*max_lambda_1_11)) + (rc11)*(CF_14 -
      CS_14*max_lambda_1_11)*((rc22)*(CF_14 - CS_14*max_lambda_1_11) - rc23*(CF_15 - CS_15*max_lambda_1_11)) +
      (rc24)*pow(CF_15 - CS_15*max_lambda_1_11, 2);

    beta_1 = (rc11)*(CF_12 - CS_12*max_lambda_1_11)*((rc15)*(CF_12 - CS_12*max_lambda_1_11) - rc25*(CF_13 -
      CS_13*max_lambda_1_11) + (rc14)*(CF_14 - CS_14*max_lambda_1_11)) + (rc11)*(CF_13 -
      CS_13*max_lambda_1_11)*((rc25)*(CF_13 - CS_13*max_lambda_1_11) - rc25*(CF_14 - CS_14*max_lambda_1_11)) +
      (rc24)*pow(CF_14 - CS_14*max_lambda_1_11, 2);

    beta_2 = (rc11)*(CF_11 - CS_11*max_lambda_1_11)*((rc15)*(CF_11 - CS_11*max_lambda_1_11) - rc23*(CF_12 -
      CS_12*max_lambda_1_11) + (rc21)*(CF_13 - CS_13*max_lambda_1_11)) + (rc11)*(CF_12 -
      CS_12*max_lambda_1_11)*((rc22)*(CF_12 - CS_12*max_lambda_1_11) - rc20*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc14)*pow(CF_13 - CS_13*max_lambda_1_11, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc32)*(CF_13 - CS_13*max_lambda_1_11) - rc31*(CF_14 - CS_14*max_lambda_1_11) +
      (rc29)*(CF_15 - CS_15*max_lambda_1_11)) + omega_1*((rc29)*(CF_12 - CS_12*max_lambda_1_11) + (rc30)*(CF_13 -
      CS_13*max_lambda_1_11) - rc13*(CF_14 - CS_14*max_lambda_1_11)) + omega_2*(-rc13*(CF_11 - CS_11*max_lambda_1_11) +
      (rc30)*(CF_12 - CS_12*max_lambda_1_11) + (rc29)*(CF_13 - CS_13*max_lambda_1_11));

    beta_0 = (rc11)*(CF_22 + CS_22*max_lambda_1_22)*((rc19)*(CF_22 + CS_22*max_lambda_1_22) - rc20*(CF_23 +
      CS_23*max_lambda_1_22) + (rc21)*(CF_24 + CS_24*max_lambda_1_22)) + (rc11)*(CF_23 +
      CS_23*max_lambda_1_22)*((rc22)*(CF_23 + CS_23*max_lambda_1_22) - rc23*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc24)*pow(CF_24 + CS_24*max_lambda_1_22, 2);

    beta_1 = (rc11)*(CF_21 + CS_21*max_lambda_1_22)*((rc15)*(CF_21 + CS_21*max_lambda_1_22) - rc25*(CF_22 +
      CS_22*max_lambda_1_22) + (rc14)*(CF_23 + CS_23*max_lambda_1_22)) + (rc11)*(CF_22 +
      CS_22*max_lambda_1_22)*((rc25)*(CF_22 + CS_22*max_lambda_1_22) - rc25*(CF_23 + CS_23*max_lambda_1_22)) +
      (rc24)*pow(CF_23 + CS_23*max_lambda_1_22, 2);

    beta_2 = (rc11)*(CF_20 + CS_20*max_lambda_1_22)*((rc15)*(CF_20 + CS_20*max_lambda_1_22) + (rc21)*(CF_22 +
      CS_22*max_lambda_1_22)) + (rc11)*(CF_21 + CS_21*max_lambda_1_22)*(-rc23*(CF_20 + CS_20*max_lambda_1_22) +
      (rc22)*(CF_21 + CS_21*max_lambda_1_22) - rc20*(CF_22 + CS_22*max_lambda_1_22)) + (rc14)*pow(CF_22 +
      CS_22*max_lambda_1_22, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc29)*(CF_22 + CS_22*max_lambda_1_22) + (rc30)*(CF_23 + CS_23*max_lambda_1_22) -
      rc13*(CF_24 + CS_24*max_lambda_1_22)) + omega_1*(-rc13*(CF_21 + CS_21*max_lambda_1_22) + (rc30)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc29)*(CF_23 + CS_23*max_lambda_1_22)) + omega_2*((rc29)*(CF_20 + CS_20*max_lambda_1_22)
      - rc31*(CF_21 + CS_21*max_lambda_1_22) + (rc32)*(CF_22 + CS_22*max_lambda_1_22));

    beta_0 = (rc11)*(CF_23 - CS_23*max_lambda_1_22)*((rc19)*(CF_23 - CS_23*max_lambda_1_22) - rc20*(CF_24 -
      CS_24*max_lambda_1_22) + (rc21)*(CF_25 - CS_25*max_lambda_1_22)) + (rc11)*(CF_24 -
      CS_24*max_lambda_1_22)*((rc22)*(CF_24 - CS_24*max_lambda_1_22) - rc23*(CF_25 - CS_25*max_lambda_1_22)) +
      (rc24)*pow(CF_25 - CS_25*max_lambda_1_22, 2);

    beta_1 = (rc11)*(CF_22 - CS_22*max_lambda_1_22)*((rc15)*(CF_22 - CS_22*max_lambda_1_22) - rc25*(CF_23 -
      CS_23*max_lambda_1_22) + (rc14)*(CF_24 - CS_24*max_lambda_1_22)) + (rc11)*(CF_23 -
      CS_23*max_lambda_1_22)*((rc25)*(CF_23 - CS_23*max_lambda_1_22) - rc25*(CF_24 - CS_24*max_lambda_1_22)) +
      (rc24)*pow(CF_24 - CS_24*max_lambda_1_22, 2);

    beta_2 = (rc11)*(CF_21 - CS_21*max_lambda_1_22)*((rc15)*(CF_21 - CS_21*max_lambda_1_22) - rc23*(CF_22 -
      CS_22*max_lambda_1_22) + (rc21)*(CF_23 - CS_23*max_lambda_1_22)) + (rc11)*(CF_22 -
      CS_22*max_lambda_1_22)*((rc22)*(CF_22 - CS_22*max_lambda_1_22) - rc20*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc14)*pow(CF_23 - CS_23*max_lambda_1_22, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc32)*(CF_23 - CS_23*max_lambda_1_22) - rc31*(CF_24 - CS_24*max_lambda_1_22) +
      (rc29)*(CF_25 - CS_25*max_lambda_1_22)) + omega_1*((rc29)*(CF_22 - CS_22*max_lambda_1_22) + (rc30)*(CF_23 -
      CS_23*max_lambda_1_22) - rc13*(CF_24 - CS_24*max_lambda_1_22)) + omega_2*(-rc13*(CF_21 - CS_21*max_lambda_1_22) +
      (rc30)*(CF_22 - CS_22*max_lambda_1_22) + (rc29)*(CF_23 - CS_23*max_lambda_1_22));

    beta_0 = (rc11)*(CF_32 + CS_32*max_lambda_1_33)*((rc19)*(CF_32 + CS_32*max_lambda_1_33) - rc20*(CF_33 +
      CS_33*max_lambda_1_33) + (rc21)*(CF_34 + CS_34*max_lambda_1_33)) + (rc11)*(CF_33 +
      CS_33*max_lambda_1_33)*((rc22)*(CF_33 + CS_33*max_lambda_1_33) - rc23*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc24)*pow(CF_34 + CS_34*max_lambda_1_33, 2);

    beta_1 = (rc11)*(CF_31 + CS_31*max_lambda_1_33)*((rc15)*(CF_31 + CS_31*max_lambda_1_33) - rc25*(CF_32 +
      CS_32*max_lambda_1_33) + (rc14)*(CF_33 + CS_33*max_lambda_1_33)) + (rc11)*(CF_32 +
      CS_32*max_lambda_1_33)*((rc25)*(CF_32 + CS_32*max_lambda_1_33) - rc25*(CF_33 + CS_33*max_lambda_1_33)) +
      (rc24)*pow(CF_33 + CS_33*max_lambda_1_33, 2);

    beta_2 = (rc11)*(CF_30 + CS_30*max_lambda_1_33)*((rc15)*(CF_30 + CS_30*max_lambda_1_33) + (rc21)*(CF_32 +
      CS_32*max_lambda_1_33)) + (rc11)*(CF_31 + CS_31*max_lambda_1_33)*(-rc23*(CF_30 + CS_30*max_lambda_1_33) +
      (rc22)*(CF_31 + CS_31*max_lambda_1_33) - rc20*(CF_32 + CS_32*max_lambda_1_33)) + (rc14)*pow(CF_32 +
      CS_32*max_lambda_1_33, 2);

   alpha_0 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc29)*(CF_32 + CS_32*max_lambda_1_33) + (rc30)*(CF_33 + CS_33*max_lambda_1_33) -
      rc13*(CF_34 + CS_34*max_lambda_1_33)) + omega_1*(-rc13*(CF_31 + CS_31*max_lambda_1_33) + (rc30)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc29)*(CF_33 + CS_33*max_lambda_1_33)) + omega_2*((rc29)*(CF_30 + CS_30*max_lambda_1_33)
      - rc31*(CF_31 + CS_31*max_lambda_1_33) + (rc32)*(CF_32 + CS_32*max_lambda_1_33));

    beta_0 = (rc11)*(CF_33 - CS_33*max_lambda_1_33)*((rc19)*(CF_33 - CS_33*max_lambda_1_33) - rc20*(CF_34 -
      CS_34*max_lambda_1_33) + (rc21)*(CF_35 - CS_35*max_lambda_1_33)) + (rc11)*(CF_34 -
      CS_34*max_lambda_1_33)*((rc22)*(CF_34 - CS_34*max_lambda_1_33) - rc23*(CF_35 - CS_35*max_lambda_1_33)) +
      (rc24)*pow(CF_35 - CS_35*max_lambda_1_33, 2);

    beta_1 = (rc11)*(CF_32 - CS_32*max_lambda_1_33)*((rc15)*(CF_32 - CS_32*max_lambda_1_33) - rc25*(CF_33 -
      CS_33*max_lambda_1_33) + (rc14)*(CF_34 - CS_34*max_lambda_1_33)) + (rc11)*(CF_33 -
      CS_33*max_lambda_1_33)*((rc25)*(CF_33 - CS_33*max_lambda_1_33) - rc25*(CF_34 - CS_34*max_lambda_1_33)) +
      (rc24)*pow(CF_34 - CS_34*max_lambda_1_33, 2);

    beta_2 = (rc11)*(CF_31 - CS_31*max_lambda_1_33)*((rc15)*(CF_31 - CS_31*max_lambda_1_33) - rc23*(CF_32 -
      CS_32*max_lambda_1_33) + (rc21)*(CF_33 - CS_33*max_lambda_1_33)) + (rc11)*(CF_32 -
      CS_32*max_lambda_1_33)*((rc22)*(CF_32 - CS_32*max_lambda_1_33) - rc20*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc14)*pow(CF_33 - CS_33*max_lambda_1_33, 2);

   alpha_0 = 0.1 + (rc28)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_0 + 1.0e-14, 2);

   alpha_1 = 0.6 + (rc27)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_1 + 1.0e-14, 2);

   alpha_2 = 0.3 + (rc26)*pow(fabs(beta_0 - beta_2), 2)/pow(beta_2 + 1.0e-14, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc32)*(CF_33 - CS_33*max_lambda_1_33) - rc31*(CF_34 - CS_34*max_lambda_1_33) +
      (rc29)*(CF_35 - CS_35*max_lambda_1_33)) + omega_1*((rc29)*(CF_32 - CS_32*max_lambda_1_33) + (rc30)*(CF_33 -
      CS_33*max_lambda_1_33) - rc13*(CF_34 - CS_34*max_lambda_1_33)) + omega_2*(-rc13*(CF_31 - CS_31*max_lambda_1_33) +
      (rc30)*(CF_32 - CS_32*max_lambda_1_33) + (rc29)*(CF_33 - CS_33*max_lambda_1_33));

    wk4_B0[OPS_ACC13(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    wk5_B0[OPS_ACC15(0,0)] = AVG_1_D11*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_D10*AVG_1_a*inv_AVG_met_fact + AVG_1_u0) +
      AVG_1_u0*Recon_0;

    wk6_B0[OPS_ACC14(0,0)] = -AVG_1_D10*AVG_1_rho*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_D11*AVG_1_a*inv_AVG_met_fact + AVG_1_u1) +
      AVG_1_u1*Recon_0;

    wk7_B0[OPS_ACC12(0,0)] = AVG_1_rho*Recon_1*(-AVG_1_D10*AVG_1_u1*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u0*inv_AVG_met_fact) +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv33*((rc11)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*(AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv33*((rc11)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*(AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)) +
      Recon_0*((rc11)*pow(AVG_1_u0, 2) + (rc11)*pow(AVG_1_u1, 2));

}

 void opensbliblock00Kernel017(const double *wk4_B0, const double *detJ_B0, const double *wk6_B0, const double *wk2_B0,
const double *wk3_B0, const double *wk5_B0, const double *wk7_B0, const double *wk1_B0, const double *wk0_B0, double
*Residual0_B0, double *Residual2_B0, double *Residual3_B0, double *Residual1_B0)
{
    Residual0_B0[OPS_ACC9(0,0)] = -(inv_0*(wk4_B0[OPS_ACC0(0,0)] - wk4_B0[OPS_ACC0(0,-1)]) +
      inv_2*(wk0_B0[OPS_ACC8(0,0)] - wk0_B0[OPS_ACC8(-1,0)]))/detJ_B0[OPS_ACC1(0,0)];

    Residual1_B0[OPS_ACC12(0,0)] = -(inv_0*(wk5_B0[OPS_ACC5(0,0)] - wk5_B0[OPS_ACC5(0,-1)]) +
      inv_2*(-wk1_B0[OPS_ACC7(-1,0)] + wk1_B0[OPS_ACC7(0,0)]))/detJ_B0[OPS_ACC1(0,0)];

    Residual2_B0[OPS_ACC10(0,0)] = -(inv_0*(wk6_B0[OPS_ACC2(0,0)] - wk6_B0[OPS_ACC2(0,-1)]) +
      inv_2*(-wk2_B0[OPS_ACC3(-1,0)] + wk2_B0[OPS_ACC3(0,0)]))/detJ_B0[OPS_ACC1(0,0)];

    Residual3_B0[OPS_ACC11(0,0)] = -(inv_0*(-wk7_B0[OPS_ACC6(0,-1)] + wk7_B0[OPS_ACC6(0,0)]) +
      inv_2*(-wk3_B0[OPS_ACC4(-1,0)] + wk3_B0[OPS_ACC4(0,0)]))/detJ_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel028(const double *u1_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   (rc9)*u1_B0[OPS_ACC0(0,3)] - rc10*u1_B0[OPS_ACC0(0,0)] -
      rc8*u1_B0[OPS_ACC0(0,4)] + 4*u1_B0[OPS_ACC0(0,1)] - 3*u1_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*u1_B0[OPS_ACC0(0,3)] - rc8*u1_B0[OPS_ACC0(0,-1)] - rc14*u1_B0[OPS_ACC0(0,0)] + (rc12)*u1_B0[OPS_ACC0(0,1)]
      - rc11*u1_B0[OPS_ACC0(0,2)]
)
: (
   (rc13)*u1_B0[OPS_ACC0(0,-2)] - rc15*u1_B0[OPS_ACC0(0,-1)] +
      (rc15)*u1_B0[OPS_ACC0(0,1)] - rc13*u1_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel029(const double *u0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   (rc9)*u0_B0[OPS_ACC0(0,3)] - rc10*u0_B0[OPS_ACC0(0,0)] -
      rc8*u0_B0[OPS_ACC0(0,4)] + 4*u0_B0[OPS_ACC0(0,1)] - 3*u0_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*u0_B0[OPS_ACC0(0,3)] - rc8*u0_B0[OPS_ACC0(0,-1)] - rc14*u0_B0[OPS_ACC0(0,0)] + (rc12)*u0_B0[OPS_ACC0(0,1)]
      - rc11*u0_B0[OPS_ACC0(0,2)]
)
: (
   -rc15*u0_B0[OPS_ACC0(0,-1)] + (rc15)*u0_B0[OPS_ACC0(0,1)] -
      rc13*u0_B0[OPS_ACC0(0,2)] + (rc13)*u0_B0[OPS_ACC0(0,-2)]
)));

}

void opensbliblock00Kernel030(const double *u0_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = inv_1*((idx[1] == 0) ? (
   -rc34*u0_B0[OPS_ACC0(0,3)] + (rc35)*u0_B0[OPS_ACC0(0,0)] +
      (rc32)*u0_B0[OPS_ACC0(0,4)] - rc36*u0_B0[OPS_ACC0(0,1)] + (rc37)*u0_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      -rc13*u0_B0[OPS_ACC0(0,3)] + (rc32)*u0_B0[OPS_ACC0(0,-1)] - rc19*u0_B0[OPS_ACC0(0,0)] +
      (rc11)*u0_B0[OPS_ACC0(0,1)] + (rc24)*u0_B0[OPS_ACC0(0,2)]
)
: (
   -rc13*u0_B0[OPS_ACC0(0,-2)] +
      (rc9)*u0_B0[OPS_ACC0(0,-1)] - rc38*u0_B0[OPS_ACC0(0,0)] + (rc9)*u0_B0[OPS_ACC0(0,1)] -
      rc13*u0_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel031(const double *u1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = inv_1*((idx[1] == 0) ? (
   -rc34*u1_B0[OPS_ACC0(0,3)] + (rc35)*u1_B0[OPS_ACC0(0,0)] +
      (rc32)*u1_B0[OPS_ACC0(0,4)] - rc36*u1_B0[OPS_ACC0(0,1)] + (rc37)*u1_B0[OPS_ACC0(0,2)]
)
: ((idx[1] == 1) ? (
  
      -rc13*u1_B0[OPS_ACC0(0,3)] + (rc32)*u1_B0[OPS_ACC0(0,-1)] - rc19*u1_B0[OPS_ACC0(0,0)] +
      (rc11)*u1_B0[OPS_ACC0(0,1)] + (rc24)*u1_B0[OPS_ACC0(0,2)]
)
: (
   (rc9)*u1_B0[OPS_ACC0(0,-1)] -
      rc13*u1_B0[OPS_ACC0(0,-2)] - rc38*u1_B0[OPS_ACC0(0,0)] + (rc9)*u1_B0[OPS_ACC0(0,1)] -
      rc13*u1_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel033(const double *u0_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -1.83333333333334*u0_B0[OPS_ACC0(0,0)] +
      3.00000000000002*u0_B0[OPS_ACC0(1,0)] - 1.50000000000003*u0_B0[OPS_ACC0(2,0)] -
      8.34657956545823e-15*u0_B0[OPS_ACC0(4,0)] + 0.333333333333356*u0_B0[OPS_ACC0(3,0)] +
      1.06910315192207e-15*u0_B0[OPS_ACC0(5,0)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*u0_B0[OPS_ACC0(-1,0)] -
      0.322484932882161*u0_B0[OPS_ACC0(0,0)] + 0.719443173328855*u0_B0[OPS_ACC0(1,0)] +
      0.0394168524399447*u0_B0[OPS_ACC0(2,0)] + 0.00571369039775442*u0_B0[OPS_ACC0(4,0)] -
      0.0658051057710389*u0_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*u0_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*u0_B0[OPS_ACC0(-1,0)] + 0.197184333887745*u0_B0[OPS_ACC0(0,0)] +
      0.521455851089587*u0_B0[OPS_ACC0(1,0)] - 0.0367146847001261*u0_B0[OPS_ACC0(2,0)] -
      0.00412637789557492*u0_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*u0_B0[OPS_ACC0(-3,0)] +
      0.121937153224065*u0_B0[OPS_ACC0(-2,0)] - 0.727822147724592*u0_B0[OPS_ACC0(-1,0)] +
      0.0451033223343881*u0_B0[OPS_ACC0(0,0)] + 0.652141084861241*u0_B0[OPS_ACC0(1,0)] -
      0.082033432844602*u0_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc8)*u0_B0[OPS_ACC0(-4,0)] -
      rc9*u0_B0[OPS_ACC0(-3,0)] - 4*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(-2,0)] + (rc10)*u0_B0[OPS_ACC0(0,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   -rc13*u0_B0[OPS_ACC0(-3,0)] + (rc11)*u0_B0[OPS_ACC0(-2,0)] -
      rc12*u0_B0[OPS_ACC0(-1,0)] + (rc14)*u0_B0[OPS_ACC0(0,0)] + (rc8)*u0_B0[OPS_ACC0(1,0)]
)
: (
  
      (rc15)*u0_B0[OPS_ACC0(1,0)] - rc15*u0_B0[OPS_ACC0(-1,0)] - rc13*u0_B0[OPS_ACC0(2,0)] +
      (rc13)*u0_B0[OPS_ACC0(-2,0)]
)))))));

}

void opensbliblock00Kernel034(const double *u1_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -1.83333333333334*u1_B0[OPS_ACC0(0,0)] +
      3.00000000000002*u1_B0[OPS_ACC0(1,0)] - 1.50000000000003*u1_B0[OPS_ACC0(2,0)] -
      8.34657956545823e-15*u1_B0[OPS_ACC0(4,0)] + 0.333333333333356*u1_B0[OPS_ACC0(3,0)] +
      1.06910315192207e-15*u1_B0[OPS_ACC0(5,0)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*u1_B0[OPS_ACC0(-1,0)] -
      0.322484932882161*u1_B0[OPS_ACC0(0,0)] + 0.719443173328855*u1_B0[OPS_ACC0(1,0)] +
      0.0394168524399447*u1_B0[OPS_ACC0(2,0)] + 0.00571369039775442*u1_B0[OPS_ACC0(4,0)] -
      0.0658051057710389*u1_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*u1_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*u1_B0[OPS_ACC0(-1,0)] + 0.197184333887745*u1_B0[OPS_ACC0(0,0)] +
      0.521455851089587*u1_B0[OPS_ACC0(1,0)] - 0.0367146847001261*u1_B0[OPS_ACC0(2,0)] -
      0.00412637789557492*u1_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*u1_B0[OPS_ACC0(-3,0)] +
      0.121937153224065*u1_B0[OPS_ACC0(-2,0)] - 0.727822147724592*u1_B0[OPS_ACC0(-1,0)] +
      0.0451033223343881*u1_B0[OPS_ACC0(0,0)] + 0.652141084861241*u1_B0[OPS_ACC0(1,0)] -
      0.082033432844602*u1_B0[OPS_ACC0(2,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc8)*u1_B0[OPS_ACC0(-4,0)] -
      rc9*u1_B0[OPS_ACC0(-3,0)] - 4*u1_B0[OPS_ACC0(-1,0)] + 3*u1_B0[OPS_ACC0(-2,0)] + (rc10)*u1_B0[OPS_ACC0(0,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   -rc13*u1_B0[OPS_ACC0(-3,0)] + (rc11)*u1_B0[OPS_ACC0(-2,0)] -
      rc12*u1_B0[OPS_ACC0(-1,0)] + (rc14)*u1_B0[OPS_ACC0(0,0)] + (rc8)*u1_B0[OPS_ACC0(1,0)]
)
: (
  
      (rc13)*u1_B0[OPS_ACC0(-2,0)] + (rc15)*u1_B0[OPS_ACC0(1,0)] - rc15*u1_B0[OPS_ACC0(-1,0)] -
      rc13*u1_B0[OPS_ACC0(2,0)]
)))))));

}

void opensbliblock00Kernel036(const double *T_B0, double *wk8_B0, const int *idx)
{
    wk8_B0[OPS_ACC1(0,0)] = inv_3*((idx[0] == 0) ? (
   (rc35)*T_B0[OPS_ACC0(0,0)] - rc36*T_B0[OPS_ACC0(1,0)] +
      (rc37)*T_B0[OPS_ACC0(2,0)] + (rc32)*T_B0[OPS_ACC0(4,0)] - rc34*T_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 1) ? (
  
      -rc19*T_B0[OPS_ACC0(0,0)] + (rc11)*T_B0[OPS_ACC0(1,0)] + (rc24)*T_B0[OPS_ACC0(2,0)] + (rc32)*T_B0[OPS_ACC0(-1,0)]
      - rc13*T_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc35)*T_B0[OPS_ACC0(0,0)] +
      (rc32)*T_B0[OPS_ACC0(-4,0)] - rc34*T_B0[OPS_ACC0(-3,0)] - rc36*T_B0[OPS_ACC0(-1,0)] +
      (rc37)*T_B0[OPS_ACC0(-2,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   -rc19*T_B0[OPS_ACC0(0,0)] +
      (rc32)*T_B0[OPS_ACC0(1,0)] - rc13*T_B0[OPS_ACC0(-3,0)] + (rc11)*T_B0[OPS_ACC0(-1,0)] +
      (rc24)*T_B0[OPS_ACC0(-2,0)]
)
: (
   -rc38*T_B0[OPS_ACC0(0,0)] + (rc9)*T_B0[OPS_ACC0(1,0)] -
      rc13*T_B0[OPS_ACC0(2,0)] - rc13*T_B0[OPS_ACC0(-2,0)] + (rc9)*T_B0[OPS_ACC0(-1,0)]
)))));

}

void opensbliblock00Kernel037(const double *mu_B0, double *wk9_B0, const int *idx)
{
    wk9_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   1.06910315192207e-15*mu_B0[OPS_ACC0(5,0)] +
      0.333333333333356*mu_B0[OPS_ACC0(3,0)] - 8.34657956545823e-15*mu_B0[OPS_ACC0(4,0)] -
      1.50000000000003*mu_B0[OPS_ACC0(2,0)] + 3.00000000000002*mu_B0[OPS_ACC0(1,0)] -
      1.83333333333334*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*mu_B0[OPS_ACC0(-1,0)] -
      0.0658051057710389*mu_B0[OPS_ACC0(3,0)] + 0.00571369039775442*mu_B0[OPS_ACC0(4,0)] +
      0.0394168524399447*mu_B0[OPS_ACC0(2,0)] + 0.719443173328855*mu_B0[OPS_ACC0(1,0)] -
      0.322484932882161*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*mu_B0[OPS_ACC0(-2,0)] -
      0.791245592765872*mu_B0[OPS_ACC0(-1,0)] - 0.00412637789557492*mu_B0[OPS_ACC0(3,0)] -
      0.0367146847001261*mu_B0[OPS_ACC0(2,0)] + 0.521455851089587*mu_B0[OPS_ACC0(1,0)] +
      0.197184333887745*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*mu_B0[OPS_ACC0(-2,0)] -
      0.727822147724592*mu_B0[OPS_ACC0(-1,0)] - 0.00932597985049999*mu_B0[OPS_ACC0(-3,0)] -
      0.082033432844602*mu_B0[OPS_ACC0(2,0)] + 0.652141084861241*mu_B0[OPS_ACC0(1,0)] +
      0.0451033223343881*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   -4*mu_B0[OPS_ACC0(-1,0)] +
      3*mu_B0[OPS_ACC0(-2,0)] - rc9*mu_B0[OPS_ACC0(-3,0)] + (rc8)*mu_B0[OPS_ACC0(-4,0)] +
      (rc10)*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
   (rc11)*mu_B0[OPS_ACC0(-2,0)] -
      rc12*mu_B0[OPS_ACC0(-1,0)] - rc13*mu_B0[OPS_ACC0(-3,0)] + (rc8)*mu_B0[OPS_ACC0(1,0)] +
      (rc14)*mu_B0[OPS_ACC0(0,0)]
)
: (
   -rc15*mu_B0[OPS_ACC0(-1,0)] + (rc15)*mu_B0[OPS_ACC0(1,0)] -
      rc13*mu_B0[OPS_ACC0(2,0)] + (rc13)*mu_B0[OPS_ACC0(-2,0)]
)))))));

}

void opensbliblock00Kernel038(const double *T_B0, double *wk10_B0, const int *idx)
{
    wk10_B0[OPS_ACC1(0,0)] = inv_2*((idx[0] == 0) ? (
   -1.83333333333334*T_B0[OPS_ACC0(0,0)] +
      3.00000000000002*T_B0[OPS_ACC0(1,0)] - 1.50000000000003*T_B0[OPS_ACC0(2,0)] -
      8.34657956545823e-15*T_B0[OPS_ACC0(4,0)] + 0.333333333333356*T_B0[OPS_ACC0(3,0)] +
      1.06910315192207e-15*T_B0[OPS_ACC0(5,0)]
)
: ((idx[0] == 1) ? (
   -0.322484932882161*T_B0[OPS_ACC0(0,0)] +
      0.719443173328855*T_B0[OPS_ACC0(1,0)] + 0.0394168524399447*T_B0[OPS_ACC0(2,0)] +
      0.00571369039775442*T_B0[OPS_ACC0(4,0)] - 0.376283677513354*T_B0[OPS_ACC0(-1,0)] -
      0.0658051057710389*T_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 2) ? (
   0.197184333887745*T_B0[OPS_ACC0(0,0)] +
      0.521455851089587*T_B0[OPS_ACC0(1,0)] - 0.0367146847001261*T_B0[OPS_ACC0(2,0)] +
      0.113446470384241*T_B0[OPS_ACC0(-2,0)] - 0.00412637789557492*T_B0[OPS_ACC0(3,0)] -
      0.791245592765872*T_B0[OPS_ACC0(-1,0)]
)
: ((idx[0] == 3) ? (
   0.0451033223343881*T_B0[OPS_ACC0(0,0)] +
      0.652141084861241*T_B0[OPS_ACC0(1,0)] - 0.00932597985049999*T_B0[OPS_ACC0(-3,0)] -
      0.082033432844602*T_B0[OPS_ACC0(2,0)] + 0.121937153224065*T_B0[OPS_ACC0(-2,0)] -
      0.727822147724592*T_B0[OPS_ACC0(-1,0)]
)
: ((idx[0] == block0np0 - 1) ? (
   (rc10)*T_B0[OPS_ACC0(0,0)] +
      (rc8)*T_B0[OPS_ACC0(-4,0)] - rc9*T_B0[OPS_ACC0(-3,0)] - 4*T_B0[OPS_ACC0(-1,0)] + 3*T_B0[OPS_ACC0(-2,0)]
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc14)*T_B0[OPS_ACC0(0,0)] + (rc8)*T_B0[OPS_ACC0(1,0)] -
      rc13*T_B0[OPS_ACC0(-3,0)] + (rc11)*T_B0[OPS_ACC0(-2,0)] - rc12*T_B0[OPS_ACC0(-1,0)]
)
: (
  
      (rc15)*T_B0[OPS_ACC0(1,0)] - rc15*T_B0[OPS_ACC0(-1,0)] + (rc13)*T_B0[OPS_ACC0(-2,0)] -
      rc13*T_B0[OPS_ACC0(2,0)]
)))))));

}

void opensbliblock00Kernel039(const double *T_B0, double *wk11_B0, const int *idx)
{
    wk11_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -rc10*T_B0[OPS_ACC0(0,0)] - rc8*T_B0[OPS_ACC0(0,4)] +
      4*T_B0[OPS_ACC0(0,1)] - 3*T_B0[OPS_ACC0(0,2)] + (rc9)*T_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      -rc14*T_B0[OPS_ACC0(0,0)] + (rc12)*T_B0[OPS_ACC0(0,1)] - rc8*T_B0[OPS_ACC0(0,-1)] - rc11*T_B0[OPS_ACC0(0,2)] +
      (rc13)*T_B0[OPS_ACC0(0,3)]
)
: (
   -rc15*T_B0[OPS_ACC0(0,-1)] + (rc13)*T_B0[OPS_ACC0(0,-2)] +
      (rc15)*T_B0[OPS_ACC0(0,1)] - rc13*T_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel040(const double *u0_B0, double *wk12_B0, const int *idx)
{
    wk12_B0[OPS_ACC1(0,0)] = inv_3*((idx[0] == 0) ? (
   (rc35)*u0_B0[OPS_ACC0(0,0)] - rc36*u0_B0[OPS_ACC0(1,0)] +
      (rc37)*u0_B0[OPS_ACC0(2,0)] + (rc32)*u0_B0[OPS_ACC0(4,0)] - rc34*u0_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 1) ? (
  
      (rc32)*u0_B0[OPS_ACC0(-1,0)] - rc19*u0_B0[OPS_ACC0(0,0)] + (rc11)*u0_B0[OPS_ACC0(1,0)] +
      (rc24)*u0_B0[OPS_ACC0(2,0)] - rc13*u0_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc32)*u0_B0[OPS_ACC0(-4,0)] - rc34*u0_B0[OPS_ACC0(-3,0)] - rc36*u0_B0[OPS_ACC0(-1,0)] +
      (rc37)*u0_B0[OPS_ACC0(-2,0)] + (rc35)*u0_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      -rc13*u0_B0[OPS_ACC0(-3,0)] + (rc11)*u0_B0[OPS_ACC0(-1,0)] + (rc24)*u0_B0[OPS_ACC0(-2,0)] -
      rc19*u0_B0[OPS_ACC0(0,0)] + (rc32)*u0_B0[OPS_ACC0(1,0)]
)
: (
   -rc13*u0_B0[OPS_ACC0(-2,0)] +
      (rc9)*u0_B0[OPS_ACC0(-1,0)] - rc38*u0_B0[OPS_ACC0(0,0)] + (rc9)*u0_B0[OPS_ACC0(1,0)] -
      rc13*u0_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel041(const double *mu_B0, double *wk13_B0, const int *idx)
{
    wk13_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -rc8*mu_B0[OPS_ACC0(0,4)] + (rc9)*mu_B0[OPS_ACC0(0,3)] -
      3*mu_B0[OPS_ACC0(0,2)] + 4*mu_B0[OPS_ACC0(0,1)] - rc10*mu_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*mu_B0[OPS_ACC0(0,3)] - rc8*mu_B0[OPS_ACC0(0,-1)] - rc11*mu_B0[OPS_ACC0(0,2)] + (rc12)*mu_B0[OPS_ACC0(0,1)]
      - rc14*mu_B0[OPS_ACC0(0,0)]
)
: (
   -rc15*mu_B0[OPS_ACC0(0,-1)] + (rc13)*mu_B0[OPS_ACC0(0,-2)] -
      rc13*mu_B0[OPS_ACC0(0,2)] + (rc15)*mu_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel042(const double *u1_B0, double *wk14_B0, const int *idx)
{
    wk14_B0[OPS_ACC1(0,0)] = inv_3*((idx[0] == 0) ? (
   (rc35)*u1_B0[OPS_ACC0(0,0)] - rc36*u1_B0[OPS_ACC0(1,0)] +
      (rc37)*u1_B0[OPS_ACC0(2,0)] + (rc32)*u1_B0[OPS_ACC0(4,0)] - rc34*u1_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == 1) ? (
  
      (rc32)*u1_B0[OPS_ACC0(-1,0)] - rc19*u1_B0[OPS_ACC0(0,0)] + (rc11)*u1_B0[OPS_ACC0(1,0)] +
      (rc24)*u1_B0[OPS_ACC0(2,0)] - rc13*u1_B0[OPS_ACC0(3,0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc32)*u1_B0[OPS_ACC0(-4,0)] - rc34*u1_B0[OPS_ACC0(-3,0)] - rc36*u1_B0[OPS_ACC0(-1,0)] +
      (rc37)*u1_B0[OPS_ACC0(-2,0)] + (rc35)*u1_B0[OPS_ACC0(0,0)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      -rc13*u1_B0[OPS_ACC0(-3,0)] + (rc11)*u1_B0[OPS_ACC0(-1,0)] + (rc24)*u1_B0[OPS_ACC0(-2,0)] -
      rc19*u1_B0[OPS_ACC0(0,0)] + (rc32)*u1_B0[OPS_ACC0(1,0)]
)
: (
   (rc9)*u1_B0[OPS_ACC0(-1,0)] -
      rc13*u1_B0[OPS_ACC0(-2,0)] - rc38*u1_B0[OPS_ACC0(0,0)] + (rc9)*u1_B0[OPS_ACC0(1,0)] -
      rc13*u1_B0[OPS_ACC0(2,0)]
)))));

}

void opensbliblock00Kernel043(const double *T_B0, double *wk15_B0, const int *idx)
{
    wk15_B0[OPS_ACC1(0,0)] = inv_1*((idx[1] == 0) ? (
   (rc35)*T_B0[OPS_ACC0(0,0)] + (rc32)*T_B0[OPS_ACC0(0,4)] -
      rc36*T_B0[OPS_ACC0(0,1)] + (rc37)*T_B0[OPS_ACC0(0,2)] - rc34*T_B0[OPS_ACC0(0,3)]
)
: ((idx[1] == 1) ? (
  
      -rc19*T_B0[OPS_ACC0(0,0)] + (rc11)*T_B0[OPS_ACC0(0,1)] + (rc32)*T_B0[OPS_ACC0(0,-1)] + (rc24)*T_B0[OPS_ACC0(0,2)]
      - rc13*T_B0[OPS_ACC0(0,3)]
)
: (
   -rc38*T_B0[OPS_ACC0(0,0)] + (rc9)*T_B0[OPS_ACC0(0,1)] -
      rc13*T_B0[OPS_ACC0(0,-2)] + (rc9)*T_B0[OPS_ACC0(0,-1)] - rc13*T_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel032(const double *wk10_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   -rc8*wk10_B0[OPS_ACC0(0,4)] + 4*wk10_B0[OPS_ACC0(0,1)] -
      3*wk10_B0[OPS_ACC0(0,2)] + (rc9)*wk10_B0[OPS_ACC0(0,3)] - rc10*wk10_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc12)*wk10_B0[OPS_ACC0(0,1)] - rc11*wk10_B0[OPS_ACC0(0,2)] + (rc13)*wk10_B0[OPS_ACC0(0,3)] -
      rc8*wk10_B0[OPS_ACC0(0,-1)] - rc14*wk10_B0[OPS_ACC0(0,0)]
)
: (
   (rc13)*wk10_B0[OPS_ACC0(0,-2)] -
      rc15*wk10_B0[OPS_ACC0(0,-1)] + (rc15)*wk10_B0[OPS_ACC0(0,1)] - rc13*wk10_B0[OPS_ACC0(0,2)]
)));

}

void opensbliblock00Kernel035(const double *wk5_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   (rc9)*wk5_B0[OPS_ACC0(0,3)] - 3*wk5_B0[OPS_ACC0(0,2)] +
      4*wk5_B0[OPS_ACC0(0,1)] - rc8*wk5_B0[OPS_ACC0(0,4)] - rc10*wk5_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*wk5_B0[OPS_ACC0(0,3)] - rc11*wk5_B0[OPS_ACC0(0,2)] - rc8*wk5_B0[OPS_ACC0(0,-1)] +
      (rc12)*wk5_B0[OPS_ACC0(0,1)] - rc14*wk5_B0[OPS_ACC0(0,0)]
)
: (
   -rc13*wk5_B0[OPS_ACC0(0,2)] +
      (rc13)*wk5_B0[OPS_ACC0(0,-2)] - rc15*wk5_B0[OPS_ACC0(0,-1)] + (rc15)*wk5_B0[OPS_ACC0(0,1)]
)));

}

void opensbliblock00Kernel044(const double *wk6_B0, double *wk16_B0, const int *idx)
{
    wk16_B0[OPS_ACC1(0,0)] = inv_0*((idx[1] == 0) ? (
   (rc9)*wk6_B0[OPS_ACC0(0,3)] - 3*wk6_B0[OPS_ACC0(0,2)] +
      4*wk6_B0[OPS_ACC0(0,1)] - rc8*wk6_B0[OPS_ACC0(0,4)] - rc10*wk6_B0[OPS_ACC0(0,0)]
)
: ((idx[1] == 1) ? (
  
      (rc13)*wk6_B0[OPS_ACC0(0,3)] - rc11*wk6_B0[OPS_ACC0(0,2)] - rc8*wk6_B0[OPS_ACC0(0,-1)] +
      (rc12)*wk6_B0[OPS_ACC0(0,1)] - rc14*wk6_B0[OPS_ACC0(0,0)]
)
: (
   (rc15)*wk6_B0[OPS_ACC0(0,1)] -
      rc13*wk6_B0[OPS_ACC0(0,2)] + (rc13)*wk6_B0[OPS_ACC0(0,-2)] - rc15*wk6_B0[OPS_ACC0(0,-1)]
)));

}

 void opensbliblock00Kernel061(const double *wk8_B0, const double *D10_B0, const double *wk6_B0, const double *D00_B0,
const double *wk9_B0, const double *SD100_B0, const double *u1_B0, const double *wk15_B0, const double *SD001_B0, const
double *wk10_B0, const double *wk11_B0, const double *u0_B0, const double *wk1_B0, const double *wk0_B0, const double
*wk16_B0, const double *mu_B0, const double *SD010_B0, const double *wk12_B0, const double *SD111_B0, const double
*wk2_B0, const double *wk5_B0, const double *wk13_B0, const double *wk14_B0, const double *wk4_B0, const double
*SD101_B0, const double *SD011_B0, const double *D11_B0, const double *SD110_B0, const double *wk3_B0, const double
*D01_B0, const double *wk7_B0, const double *SD000_B0, double *Residual2_B0, double *Residual3_B0, double
*Residual1_B0)
{
    Residual1_B0[OPS_ACC34(0,0)] = rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk13_B0[OPS_ACC21(0,0)])*((rc9)*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] + (rc9)*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)]) + rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)]) + rcinv39*((rc9)*pow(D00_B0[OPS_ACC3(0,0)],
      2)*wk12_B0[OPS_ACC17(0,0)] + (rc24)*D00_B0[OPS_ACC3(0,0)]*D01_B0[OPS_ACC29(0,0)]*wk14_B0[OPS_ACC22(0,0)] +
      (rc40)*D00_B0[OPS_ACC3(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      (rc24)*D00_B0[OPS_ACC3(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      (rc9)*D00_B0[OPS_ACC3(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D00_B0[OPS_ACC3(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      (rc9)*D00_B0[OPS_ACC3(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D00_B0[OPS_ACC3(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D01_B0[OPS_ACC29(0,0)],
      2)*wk12_B0[OPS_ACC17(0,0)] + (rc24)*D01_B0[OPS_ACC29(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      2*D01_B0[OPS_ACC29(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D10_B0[OPS_ACC1(0,0)],
      2)*wk2_B0[OPS_ACC19(0,0)] + (rc24)*D10_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk3_B0[OPS_ACC28(0,0)] +
      (rc9)*D10_B0[OPS_ACC1(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D10_B0[OPS_ACC1(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      (rc9)*D10_B0[OPS_ACC1(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D10_B0[OPS_ACC1(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D11_B0[OPS_ACC26(0,0)],
      2)*wk2_B0[OPS_ACC19(0,0)] + D11_B0[OPS_ACC26(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC12(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      Residual1_B0[OPS_ACC34(0,0)];

    Residual2_B0[OPS_ACC32(0,0)] = rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)]) + rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(-rc15*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] - rc15*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)]) + rcinv39*(pow(D00_B0[OPS_ACC3(0,0)],
      2)*wk14_B0[OPS_ACC22(0,0)] + (rc24)*D00_B0[OPS_ACC3(0,0)]*D01_B0[OPS_ACC29(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      2*D00_B0[OPS_ACC3(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      (rc24)*D00_B0[OPS_ACC3(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D01_B0[OPS_ACC29(0,0)],
      2)*wk14_B0[OPS_ACC22(0,0)] + (rc24)*D01_B0[OPS_ACC29(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      (rc40)*D01_B0[OPS_ACC29(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk16_B0[OPS_ACC14(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk6_B0[OPS_ACC2(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D10_B0[OPS_ACC1(0,0)],
      2)*wk3_B0[OPS_ACC28(0,0)] + (rc24)*D10_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk2_B0[OPS_ACC19(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D11_B0[OPS_ACC26(0,0)],
      2)*wk3_B0[OPS_ACC28(0,0)] - rc15*D11_B0[OPS_ACC26(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk6_B0[OPS_ACC2(0,0)] -
      rc15*D11_B0[OPS_ACC26(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk0_B0[OPS_ACC13(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      Residual2_B0[OPS_ACC32(0,0)];

    Residual3_B0[OPS_ACC33(0,0)] = rcinv39*rcinv41*rcinv6*rcinv7*(D00_B0[OPS_ACC3(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk11_B0[OPS_ACC10(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk13_B0[OPS_ACC21(0,0)]) +
      rcinv39*rcinv41*rcinv6*rcinv7*(D01_B0[OPS_ACC29(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk11_B0[OPS_ACC10(0,0)])*(D01_B0[OPS_ACC29(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk13_B0[OPS_ACC21(0,0)]) + rcinv39*rcinv41*rcinv6*rcinv7*(pow(D00_B0[OPS_ACC3(0,0)],
      2)*wk8_B0[OPS_ACC0(0,0)] + 2*D00_B0[OPS_ACC3(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk4_B0[OPS_ACC23(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk11_B0[OPS_ACC10(0,0)] + pow(D01_B0[OPS_ACC29(0,0)],
      2)*wk8_B0[OPS_ACC0(0,0)] + 2*D01_B0[OPS_ACC29(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk4_B0[OPS_ACC23(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk11_B0[OPS_ACC10(0,0)] + pow(D10_B0[OPS_ACC1(0,0)],
      2)*wk15_B0[OPS_ACC7(0,0)] + D10_B0[OPS_ACC1(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk11_B0[OPS_ACC10(0,0)] + pow(D11_B0[OPS_ACC26(0,0)],
      2)*wk15_B0[OPS_ACC7(0,0)] + D11_B0[OPS_ACC26(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk10_B0[OPS_ACC9(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk11_B0[OPS_ACC10(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)])*((rc9)*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] + (rc9)*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk13_B0[OPS_ACC21(0,0)])*((rc9)*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] + (rc9)*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)])*u0_B0[OPS_ACC11(0,0)] +
      rcinv39*(D00_B0[OPS_ACC3(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)])*u1_B0[OPS_ACC6(0,0)] +
      rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)])*(-rc15*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] - rc15*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)])*mu_B0[OPS_ACC15(0,0)] +
      rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(-rc15*D00_B0[OPS_ACC3(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*wk6_B0[OPS_ACC2(0,0)] - rc15*D10_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*wk0_B0[OPS_ACC13(0,0)])*u1_B0[OPS_ACC6(0,0)] +
      rcinv39*(D01_B0[OPS_ACC29(0,0)]*wk9_B0[OPS_ACC4(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk13_B0[OPS_ACC21(0,0)])*(D00_B0[OPS_ACC3(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*wk5_B0[OPS_ACC20(0,0)] + D10_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*wk1_B0[OPS_ACC12(0,0)])*u0_B0[OPS_ACC11(0,0)] + rcinv39*((rc9)*pow(D00_B0[OPS_ACC3(0,0)],
      2)*wk12_B0[OPS_ACC17(0,0)] + (rc24)*D00_B0[OPS_ACC3(0,0)]*D01_B0[OPS_ACC29(0,0)]*wk14_B0[OPS_ACC22(0,0)] +
      (rc40)*D00_B0[OPS_ACC3(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      (rc24)*D00_B0[OPS_ACC3(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      (rc9)*D00_B0[OPS_ACC3(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D00_B0[OPS_ACC3(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      (rc9)*D00_B0[OPS_ACC3(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D00_B0[OPS_ACC3(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D01_B0[OPS_ACC29(0,0)],
      2)*wk12_B0[OPS_ACC17(0,0)] + (rc24)*D01_B0[OPS_ACC29(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      2*D01_B0[OPS_ACC29(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D01_B0[OPS_ACC29(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D10_B0[OPS_ACC1(0,0)],
      2)*wk2_B0[OPS_ACC19(0,0)] + (rc24)*D10_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk3_B0[OPS_ACC28(0,0)] +
      (rc9)*D10_B0[OPS_ACC1(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC20(0,0)] -
      rc15*D10_B0[OPS_ACC1(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      (rc9)*D10_B0[OPS_ACC1(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk1_B0[OPS_ACC12(0,0)] -
      rc15*D10_B0[OPS_ACC1(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D11_B0[OPS_ACC26(0,0)],
      2)*wk2_B0[OPS_ACC19(0,0)] + D11_B0[OPS_ACC26(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D11_B0[OPS_ACC26(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC12(0,0)])*mu_B0[OPS_ACC15(0,0)]*u0_B0[OPS_ACC11(0,0)]
      + rcinv39*(pow(D00_B0[OPS_ACC3(0,0)], 2)*wk14_B0[OPS_ACC22(0,0)] +
      (rc24)*D00_B0[OPS_ACC3(0,0)]*D01_B0[OPS_ACC29(0,0)]*wk12_B0[OPS_ACC17(0,0)] +
      2*D00_B0[OPS_ACC3(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk16_B0[OPS_ACC14(0,0)] +
      (rc24)*D00_B0[OPS_ACC3(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D00_B0[OPS_ACC3(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D01_B0[OPS_ACC29(0,0)],
      2)*wk14_B0[OPS_ACC22(0,0)] + (rc24)*D01_B0[OPS_ACC29(0,0)]*D10_B0[OPS_ACC1(0,0)]*wk7_B0[OPS_ACC30(0,0)] +
      (rc40)*D01_B0[OPS_ACC29(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk16_B0[OPS_ACC14(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*SD000_B0[OPS_ACC31(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*SD010_B0[OPS_ACC16(0,0)]*wk6_B0[OPS_ACC2(0,0)] -
      rc15*D01_B0[OPS_ACC29(0,0)]*SD100_B0[OPS_ACC5(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D01_B0[OPS_ACC29(0,0)]*SD110_B0[OPS_ACC27(0,0)]*wk0_B0[OPS_ACC13(0,0)] + pow(D10_B0[OPS_ACC1(0,0)],
      2)*wk3_B0[OPS_ACC28(0,0)] + (rc24)*D10_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC26(0,0)]*wk2_B0[OPS_ACC19(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk6_B0[OPS_ACC2(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk0_B0[OPS_ACC13(0,0)] +
      D10_B0[OPS_ACC1(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC12(0,0)] + (rc9)*pow(D11_B0[OPS_ACC26(0,0)],
      2)*wk3_B0[OPS_ACC28(0,0)] - rc15*D11_B0[OPS_ACC26(0,0)]*SD001_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC20(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*SD011_B0[OPS_ACC25(0,0)]*wk6_B0[OPS_ACC2(0,0)] -
      rc15*D11_B0[OPS_ACC26(0,0)]*SD101_B0[OPS_ACC24(0,0)]*wk1_B0[OPS_ACC12(0,0)] +
      (rc9)*D11_B0[OPS_ACC26(0,0)]*SD111_B0[OPS_ACC18(0,0)]*wk0_B0[OPS_ACC13(0,0)])*mu_B0[OPS_ACC15(0,0)]*u1_B0[OPS_ACC6(0,0)]
      + Residual3_B0[OPS_ACC33(0,0)];

}

 void opensbliblock00Kernel091(const double *Residual0_B0, const double *Residual2_B0, const double *Residual3_B0, const
double *Residual1_B0, double *rhou1_B0, double *tempRK_rhou1_B0, double *rho_B0, double *tempRK_rho_B0, double *rhoE_B0,
double *tempRK_rhou0_B0, double *rhou0_B0, double *tempRK_rhoE_B0, const double *rkB, const double *rkA)
{
   tempRK_rho_B0[OPS_ACC7(0,0)] = dt*Residual0_B0[OPS_ACC0(0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC7(0,0)];

   rho_B0[OPS_ACC6(0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC7(0,0)] + rho_B0[OPS_ACC6(0,0)];

   tempRK_rhou0_B0[OPS_ACC9(0,0)] = dt*Residual1_B0[OPS_ACC3(0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC9(0,0)];

   rhou0_B0[OPS_ACC10(0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC9(0,0)] + rhou0_B0[OPS_ACC10(0,0)];

   tempRK_rhou1_B0[OPS_ACC5(0,0)] = dt*Residual2_B0[OPS_ACC1(0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC5(0,0)];

   rhou1_B0[OPS_ACC4(0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC5(0,0)] + rhou1_B0[OPS_ACC4(0,0)];

   tempRK_rhoE_B0[OPS_ACC11(0,0)] = dt*Residual3_B0[OPS_ACC2(0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC11(0,0)];

   rhoE_B0[OPS_ACC8(0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC11(0,0)] + rhoE_B0[OPS_ACC8(0,0)];

}

#endif
