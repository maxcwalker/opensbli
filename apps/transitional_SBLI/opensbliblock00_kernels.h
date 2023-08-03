#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel052(double *rhou1_B0, double *rhoE_B0, double *x2_B0, double *rhou2_B0, double *rho_B0,
double *rhou0_B0, double *x0_B0, double *x1_B0, const int *idx)
{
   double rhou0 = 0.0;
   double T = 0.0;
   double rhou1 = 0.0;
   double rho = 0.0;
   x0_B0[OPS_ACC6(0,0,0)] = Delta0block0*idx[0];

   x1_B0[OPS_ACC7(0,0,0)] = Lx1*sinh(Delta1block0*by*rcinv6*idx[1])/sinh(by);

   x2_B0[OPS_ACC2(0,0,0)] = Delta2block0*idx[2];

    rhou0 = ((x1_B0[OPS_ACC7(0,0,0)] < 4.05240524052405) ? (
   -2.54861361809895e-26*pow(x1_B0[OPS_ACC7(0,0,0)], 50) +
      2.76801660146617e-25*pow(x1_B0[OPS_ACC7(0,0,0)], 49) - 2.2051975868159e-25*pow(x1_B0[OPS_ACC7(0,0,0)], 48) -
      3.55652756727668e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 47) - 7.76009187415227e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 46) +
      1.96570015098977e-23*pow(x1_B0[OPS_ACC7(0,0,0)], 45) + 2.02123258475699e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 44) +
      6.97258091143325e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 43) + 5.23983208680705e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 42) -
      8.08165934038121e-21*pow(x1_B0[OPS_ACC7(0,0,0)], 41) - 5.38209174674689e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 40) -
      1.80163004529253e-19*pow(x1_B0[OPS_ACC7(0,0,0)], 39) - 1.82855676261698e-19*pow(x1_B0[OPS_ACC7(0,0,0)], 38) +
      1.86470585748318e-18*pow(x1_B0[OPS_ACC7(0,0,0)], 37) + 1.42291943167447e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 36) +
      5.51566210508961e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 35) + 9.75240804732079e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 34) -
      3.33110513859923e-16*pow(x1_B0[OPS_ACC7(0,0,0)], 33) - 3.68204680067301e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 32) -
      1.67705484028816e-14*pow(x1_B0[OPS_ACC7(0,0,0)], 31) - 3.89466759999405e-14*pow(x1_B0[OPS_ACC7(0,0,0)], 30) +
      5.24253376160636e-14*pow(x1_B0[OPS_ACC7(0,0,0)], 29) + 9.84735701890517e-13*pow(x1_B0[OPS_ACC7(0,0,0)], 28) +
      4.93708436063018e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 27) + 1.18532663845528e-11*pow(x1_B0[OPS_ACC7(0,0,0)], 26) -
      1.75103772166251e-11*pow(x1_B0[OPS_ACC7(0,0,0)], 25) - 3.06264943224662e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 24) -
      1.39107098017273e-9*pow(x1_B0[OPS_ACC7(0,0,0)], 23) - 2.12850589790556e-9*pow(x1_B0[OPS_ACC7(0,0,0)], 22) +
      1.33629951279955e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 21) + 1.0460125039404e-7*pow(x1_B0[OPS_ACC7(0,0,0)], 20) +
      2.64074394210584e-7*pow(x1_B0[OPS_ACC7(0,0,0)], 19) - 6.59770131144144e-7*pow(x1_B0[OPS_ACC7(0,0,0)], 18) -
      7.40336054417118e-6*pow(x1_B0[OPS_ACC7(0,0,0)], 17) - 1.6168685791258e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 16) +
      7.72207490967366e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 15) + 0.000489549377000976*pow(x1_B0[OPS_ACC7(0,0,0)], 14) -
      0.000385957912876542*pow(x1_B0[OPS_ACC7(0,0,0)], 13) - 0.00884689473380043*pow(x1_B0[OPS_ACC7(0,0,0)], 12) +
      0.00730865196308702*pow(x1_B0[OPS_ACC7(0,0,0)], 11) + 0.138419552710598*pow(x1_B0[OPS_ACC7(0,0,0)], 10) -
      0.596526047314657*pow(x1_B0[OPS_ACC7(0,0,0)], 9) + 1.23074091364597*pow(x1_B0[OPS_ACC7(0,0,0)], 8) -
      1.54502541636442*pow(x1_B0[OPS_ACC7(0,0,0)], 7) + 1.24847584714703*pow(x1_B0[OPS_ACC7(0,0,0)], 6) -
      0.658288336566558*pow(x1_B0[OPS_ACC7(0,0,0)], 5) + 0.200501460352601*pow(x1_B0[OPS_ACC7(0,0,0)], 4) +
      0.0158988449181383*pow(x1_B0[OPS_ACC7(0,0,0)], 3) + 0.00500448949508662*pow(x1_B0[OPS_ACC7(0,0,0)], 2) +
      0.478292199084249*x1_B0[OPS_ACC7(0,0,0)] + 2.60365803497059e-6
)
: (
   0.999999608209009
));

    rhou1 = ((x1_B0[OPS_ACC7(0,0,0)] < 4.05240524052405) ? (
   2.13651806947955e-29*pow(x1_B0[OPS_ACC7(0,0,0)], 50) +
      3.15892907942849e-29*pow(x1_B0[OPS_ACC7(0,0,0)], 49) - 1.38569130585683e-27*pow(x1_B0[OPS_ACC7(0,0,0)], 48) -
      2.94790885015747e-27*pow(x1_B0[OPS_ACC7(0,0,0)], 47) + 1.55702842725208e-26*pow(x1_B0[OPS_ACC7(0,0,0)], 46) +
      1.25476777128163e-25*pow(x1_B0[OPS_ACC7(0,0,0)], 45) + 3.64020918771678e-25*pow(x1_B0[OPS_ACC7(0,0,0)], 44) -
      2.4309875454479e-25*pow(x1_B0[OPS_ACC7(0,0,0)], 43) - 7.89598460258439e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 42) -
      4.26584416104398e-23*pow(x1_B0[OPS_ACC7(0,0,0)], 41) - 1.19383328413715e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 40) +
      1.9036242460021e-23*pow(x1_B0[OPS_ACC7(0,0,0)], 39) + 2.24264563234552e-21*pow(x1_B0[OPS_ACC7(0,0,0)], 38) +
      1.38567892312664e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 37) + 4.83247536895053e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 36) +
      6.19937696385168e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 35) - 4.65519514728219e-19*pow(x1_B0[OPS_ACC7(0,0,0)], 34) -
      4.0926576705141e-18*pow(x1_B0[OPS_ACC7(0,0,0)], 33) - 1.78635922344585e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 32) -
      4.05893632232813e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 31) + 6.31711943401715e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 30) +
      1.12920177029756e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 29) + 5.92765014595664e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 28) +
      1.63184946573755e-14*pow(x1_B0[OPS_ACC7(0,0,0)], 27) - 7.45416819573356e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 26) -
      3.4072406030743e-13*pow(x1_B0[OPS_ACC7(0,0,0)], 25) - 1.88084972573422e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 24) -
      4.69482058677457e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 23) + 7.7634743308053e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 22) +
      1.28069085206457e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 21) + 5.32992044196304e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 20) +
      3.43326734627907e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 19) - 8.09527409335406e-9*pow(x1_B0[OPS_ACC7(0,0,0)], 18) -
      4.20235067360577e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 17) - 2.17593296219109e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 16) +
      6.84672428761309e-7*pow(x1_B0[OPS_ACC7(0,0,0)], 15) + 2.42363152598662e-6*pow(x1_B0[OPS_ACC7(0,0,0)], 14) -
      6.7975989465329e-6*pow(x1_B0[OPS_ACC7(0,0,0)], 13) - 5.23964333480823e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 12) +
      0.000105616145176089*pow(x1_B0[OPS_ACC7(0,0,0)], 11) + 0.000788160939822665*pow(x1_B0[OPS_ACC7(0,0,0)], 10) -
      0.00419146599768322*pow(x1_B0[OPS_ACC7(0,0,0)], 9) + 0.00953301426625922*pow(x1_B0[OPS_ACC7(0,0,0)], 8) -
      0.0128435224269508*pow(x1_B0[OPS_ACC7(0,0,0)], 7) + 0.0110385988844177*pow(x1_B0[OPS_ACC7(0,0,0)], 6) -
      0.0062190807629197*pow(x1_B0[OPS_ACC7(0,0,0)], 5) + 0.00237707320662426*pow(x1_B0[OPS_ACC7(0,0,0)], 4) -
      0.000456056746270344*pow(x1_B0[OPS_ACC7(0,0,0)], 3) + 0.001168030651337*pow(x1_B0[OPS_ACC7(0,0,0)], 2) -
      2.48549874974677e-6*x1_B0[OPS_ACC7(0,0,0)] + 2.86110562740022e-8
)
: (
   0.00466654002421207
));

    T = ((x1_B0[OPS_ACC7(0,0,0)] < 4.05240524052405) ? (
   9.06766475728836e-27*pow(x1_B0[OPS_ACC7(0,0,0)], 50) -
      9.30463323388438e-26*pow(x1_B0[OPS_ACC7(0,0,0)], 49) + 4.60939376752553e-26*pow(x1_B0[OPS_ACC7(0,0,0)], 48) +
      1.14320817455816e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 47) + 2.94754926272356e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 46) -
      4.07216000219289e-24*pow(x1_B0[OPS_ACC7(0,0,0)], 45) - 6.09412375541687e-23*pow(x1_B0[OPS_ACC7(0,0,0)], 44) -
      2.41081623595278e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 43) - 3.39788207651198e-22*pow(x1_B0[OPS_ACC7(0,0,0)], 42) +
      1.85998691697788e-21*pow(x1_B0[OPS_ACC7(0,0,0)], 41) + 1.57758027779938e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 40) +
      6.14242745909628e-20*pow(x1_B0[OPS_ACC7(0,0,0)], 39) + 1.08044415895908e-19*pow(x1_B0[OPS_ACC7(0,0,0)], 38) -
      3.47211430015044e-19*pow(x1_B0[OPS_ACC7(0,0,0)], 37) - 3.8306308008063e-18*pow(x1_B0[OPS_ACC7(0,0,0)], 36) -
      1.74305440843629e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 35) - 4.2660782008798e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 34) +
      2.8835080715448e-17*pow(x1_B0[OPS_ACC7(0,0,0)], 33) + 8.82474140851873e-16*pow(x1_B0[OPS_ACC7(0,0,0)], 32) +
      4.86181823415379e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 31) + 1.45477549718552e-14*pow(x1_B0[OPS_ACC7(0,0,0)], 30) +
      5.50823820965592e-15*pow(x1_B0[OPS_ACC7(0,0,0)], 29) - 2.1263160871894e-13*pow(x1_B0[OPS_ACC7(0,0,0)], 28) -
      1.3447464952035e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 27) - 4.20288690170919e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 26) -
      1.13655345777147e-12*pow(x1_B0[OPS_ACC7(0,0,0)], 25) + 6.541618168777e-11*pow(x1_B0[OPS_ACC7(0,0,0)], 24) +
      3.78381926992058e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 23) + 8.97292164018418e-10*pow(x1_B0[OPS_ACC7(0,0,0)], 22) -
      1.86866069086151e-9*pow(x1_B0[OPS_ACC7(0,0,0)], 21) - 2.46879228752466e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 20) -
      8.42182541680786e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 19) + 5.1280022956165e-8*pow(x1_B0[OPS_ACC7(0,0,0)], 18) +
      1.65228140884596e-6*pow(x1_B0[OPS_ACC7(0,0,0)], 17) + 5.19759356854887e-6*pow(x1_B0[OPS_ACC7(0,0,0)], 16) -
      1.14844619616265e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 15) - 0.000117114689484142*pow(x1_B0[OPS_ACC7(0,0,0)], 14) -
      2.5320318352312e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 13) + 0.00189888845737746*pow(x1_B0[OPS_ACC7(0,0,0)], 12) -
      1.78490393740717e-5*pow(x1_B0[OPS_ACC7(0,0,0)], 11) - 0.0302097549262449*pow(x1_B0[OPS_ACC7(0,0,0)], 10) +
      0.110219850222902*pow(x1_B0[OPS_ACC7(0,0,0)], 9) - 0.206617873923526*pow(x1_B0[OPS_ACC7(0,0,0)], 8) +
      0.23980294836792*pow(x1_B0[OPS_ACC7(0,0,0)], 7) - 0.180300526936381*pow(x1_B0[OPS_ACC7(0,0,0)], 6) +
      0.101425837547139*pow(x1_B0[OPS_ACC7(0,0,0)], 5) - 0.0355924717328917*pow(x1_B0[OPS_ACC7(0,0,0)], 4) +
      0.00530113950585329*pow(x1_B0[OPS_ACC7(0,0,0)], 3) - 0.142030955757705*pow(x1_B0[OPS_ACC7(0,0,0)], 2) +
      2.31336001018867e-5*x1_B0[OPS_ACC7(0,0,0)] + 1.3809970902223
)
: (
   1.00000038735047
));

   rho = 1.0/T;

   rho_B0[OPS_ACC4(0,0,0)] = rho;

   rhou0_B0[OPS_ACC5(0,0,0)] = rhou0;

   rhou1_B0[OPS_ACC0(0,0,0)] = rhou1;

   rhoE_B0[OPS_ACC1(0,0,0)] = rcinv7*rcinv8*rcinv9*T*rho + (0.5*pow(rhou0, 2) + 0.5*pow(rhou1, 2))/rho;

   rhou2_B0[OPS_ACC3(0,0,0)] = 0.0;

}

void opensbliblock00Kernel054(const double *x1_B0, double *detJ_B0, double *D11_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc10*x1_B0[OPS_ACC0(0,0,0)] + 4*x1_B0[OPS_ACC0(0,1,0)] -
      3*x1_B0[OPS_ACC0(0,2,0)] + (rc11)*x1_B0[OPS_ACC0(0,3,0)] - rc12*x1_B0[OPS_ACC0(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-10*x1_B0[OPS_ACC0(0,0,0)] + 18*x1_B0[OPS_ACC0(0,1,0)] - 3*x1_B0[OPS_ACC0(0,-1,0)] -
      6*x1_B0[OPS_ACC0(0,2,0)] + x1_B0[OPS_ACC0(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc12)*x1_B0[OPS_ACC0(0,-4,0)] + (rc10)*x1_B0[OPS_ACC0(0,0,0)] - rc11*x1_B0[OPS_ACC0(0,-3,0)] +
      3*x1_B0[OPS_ACC0(0,-2,0)] - 4*x1_B0[OPS_ACC0(0,-1,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(10*x1_B0[OPS_ACC0(0,0,0)] - x1_B0[OPS_ACC0(0,-3,0)] + 3*x1_B0[OPS_ACC0(0,1,0)] +
      6*x1_B0[OPS_ACC0(0,-2,0)] - 18*x1_B0[OPS_ACC0(0,-1,0)])
)
: (
   (rc13)*inv_0*(x1_B0[OPS_ACC0(0,-2,0)] -
      x1_B0[OPS_ACC0(0,2,0)] + 8*x1_B0[OPS_ACC0(0,1,0)] - 8*x1_B0[OPS_ACC0(0,-1,0)])
)))));

   detJ_B0[OPS_ACC1(0,0,0)] = localeval_0;

   D11_B0[OPS_ACC2(0,0,0)] = 1.0/localeval_0;

}

void opensbliblock00Kernel055(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(-1,0,0)] = D11_B0[OPS_ACC0(1,0,0)];

   detJ_B0[OPS_ACC1(-1,0,0)] = detJ_B0[OPS_ACC1(1,0,0)];

   D11_B0[OPS_ACC0(-2,0,0)] = D11_B0[OPS_ACC0(2,0,0)];

   detJ_B0[OPS_ACC1(-2,0,0)] = detJ_B0[OPS_ACC1(2,0,0)];

   D11_B0[OPS_ACC0(-3,0,0)] = D11_B0[OPS_ACC0(3,0,0)];

   detJ_B0[OPS_ACC1(-3,0,0)] = detJ_B0[OPS_ACC1(3,0,0)];

}

void opensbliblock00Kernel056(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(1,0,0)] = D11_B0[OPS_ACC0(-1,0,0)];

   detJ_B0[OPS_ACC1(1,0,0)] = detJ_B0[OPS_ACC1(-1,0,0)];

   D11_B0[OPS_ACC0(2,0,0)] = D11_B0[OPS_ACC0(-2,0,0)];

   detJ_B0[OPS_ACC1(2,0,0)] = detJ_B0[OPS_ACC1(-2,0,0)];

   D11_B0[OPS_ACC0(3,0,0)] = D11_B0[OPS_ACC0(-3,0,0)];

   detJ_B0[OPS_ACC1(3,0,0)] = detJ_B0[OPS_ACC1(-3,0,0)];

   D11_B0[OPS_ACC0(4,0,0)] = D11_B0[OPS_ACC0(-4,0,0)];

   detJ_B0[OPS_ACC1(4,0,0)] = detJ_B0[OPS_ACC1(-4,0,0)];

}

void opensbliblock00Kernel057(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,-1,0)] = D11_B0[OPS_ACC0(0,1,0)];

   detJ_B0[OPS_ACC1(0,-1,0)] = detJ_B0[OPS_ACC1(0,1,0)];

   D11_B0[OPS_ACC0(0,-2,0)] = D11_B0[OPS_ACC0(0,2,0)];

   detJ_B0[OPS_ACC1(0,-2,0)] = detJ_B0[OPS_ACC1(0,2,0)];

   D11_B0[OPS_ACC0(0,-3,0)] = D11_B0[OPS_ACC0(0,3,0)];

   detJ_B0[OPS_ACC1(0,-3,0)] = detJ_B0[OPS_ACC1(0,3,0)];

}

void opensbliblock00Kernel058(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,1,0)] = D11_B0[OPS_ACC0(0,-1,0)];

   detJ_B0[OPS_ACC1(0,1,0)] = detJ_B0[OPS_ACC1(0,-1,0)];

   D11_B0[OPS_ACC0(0,2,0)] = D11_B0[OPS_ACC0(0,-2,0)];

   detJ_B0[OPS_ACC1(0,2,0)] = detJ_B0[OPS_ACC1(0,-2,0)];

   D11_B0[OPS_ACC0(0,3,0)] = D11_B0[OPS_ACC0(0,-3,0)];

   detJ_B0[OPS_ACC1(0,3,0)] = detJ_B0[OPS_ACC1(0,-3,0)];

   D11_B0[OPS_ACC0(0,4,0)] = D11_B0[OPS_ACC0(0,-4,0)];

   detJ_B0[OPS_ACC1(0,4,0)] = detJ_B0[OPS_ACC1(0,-4,0)];

}

void opensbliblock00Kernel062(const double *D11_B0, double *SD111_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*((rc11)*D11_B0[OPS_ACC0(0,3,0)] - rc12*D11_B0[OPS_ACC0(0,4,0)] -
      3*D11_B0[OPS_ACC0(0,2,0)] + 4*D11_B0[OPS_ACC0(0,1,0)] - rc10*D11_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(D11_B0[OPS_ACC0(0,3,0)] - 3*D11_B0[OPS_ACC0(0,-1,0)] - 6*D11_B0[OPS_ACC0(0,2,0)] +
      18*D11_B0[OPS_ACC0(0,1,0)] - 10*D11_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(-4*D11_B0[OPS_ACC0(0,-1,0)] + 3*D11_B0[OPS_ACC0(0,-2,0)] - rc11*D11_B0[OPS_ACC0(0,-3,0)] +
      (rc12)*D11_B0[OPS_ACC0(0,-4,0)] + (rc10)*D11_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(-18*D11_B0[OPS_ACC0(0,-1,0)] + 6*D11_B0[OPS_ACC0(0,-2,0)] - D11_B0[OPS_ACC0(0,-3,0)] +
      3*D11_B0[OPS_ACC0(0,1,0)] + 10*D11_B0[OPS_ACC0(0,0,0)])
)
: (
   (rc13)*inv_0*(-8*D11_B0[OPS_ACC0(0,-1,0)] +
      8*D11_B0[OPS_ACC0(0,1,0)] - D11_B0[OPS_ACC0(0,2,0)] + D11_B0[OPS_ACC0(0,-2,0)])
)))));

   SD111_B0[OPS_ACC1(0,0,0)] = localeval_0;

}

void opensbliblock00Kernel046(double *rhou1_B0, double *rhoE_B0, double *rhou2_B0, double *rho_B0, double *rhou0_B0)
{
   double pb = 0.0;
   double ub1 = 0.0;
   double ub2 = 0.0;
   double rhob = 0.0;
   double ub0 = 0.0;
   double ab = 0.0;
   rhob = rho_B0[OPS_ACC3(0,0,0)];

   ub0 = fabs(rhou0_B0[OPS_ACC4(0,0,0)]/rho_B0[OPS_ACC3(0,0,0)]);

   ub1 = fabs(rhou1_B0[OPS_ACC0(0,0,0)]/rho_B0[OPS_ACC3(0,0,0)]);

   ub2 = fabs(rhou2_B0[OPS_ACC2(0,0,0)]/rho_B0[OPS_ACC3(0,0,0)]);

   pb = (gama - 1)*(-0.5*rhob*(pow(ub0, 2) + pow(ub1, 2) + pow(ub2, 2)) + rhoE_B0[OPS_ACC1(0,0,0)]);

   ab = sqrt(gama*pb/rhob);

   rho_B0[OPS_ACC3(0,0,0)] = ((ub0 >= ab) ? (
   rho_B0[OPS_ACC3(-1,0,0)]
)
: (
   rho_B0[OPS_ACC3(0,0,0)]
));

   rhou0_B0[OPS_ACC4(0,0,0)] = ((ub0 >= ab) ? (
   rhou0_B0[OPS_ACC4(-1,0,0)]
)
: (
   rhou0_B0[OPS_ACC4(0,0,0)]
));

   rhou1_B0[OPS_ACC0(0,0,0)] = ((ub0 >= ab) ? (
   rhou1_B0[OPS_ACC0(-1,0,0)]
)
: (
   rhou1_B0[OPS_ACC0(0,0,0)]
));

   rhou2_B0[OPS_ACC2(0,0,0)] = ((ub0 >= ab) ? (
   rhou2_B0[OPS_ACC2(-1,0,0)]
)
: (
   rhou2_B0[OPS_ACC2(0,0,0)]
));

   rhoE_B0[OPS_ACC1(0,0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0,0)]
));

   rhoE_B0[OPS_ACC1(-1,0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0,0)]
));

   rhoE_B0[OPS_ACC1(-2,0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-2,0,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0,0)]
));

   rhoE_B0[OPS_ACC1(-3,0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-3,0,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0,0)]
));

}

void opensbliblock00Kernel047(double *rhou1_B0, double *rhoE_B0, double *rhou2_B0, double *rho_B0, double *rhou0_B0)
{
   rho_B0[OPS_ACC3(0,0,0)] = rho_B0[OPS_ACC3(-1,0,0)];

   rhou0_B0[OPS_ACC4(0,0,0)] = rhou0_B0[OPS_ACC4(-1,0,0)];

   rhou1_B0[OPS_ACC0(0,0,0)] = rhou1_B0[OPS_ACC0(-1,0,0)];

   rhou2_B0[OPS_ACC2(0,0,0)] = rhou2_B0[OPS_ACC2(-1,0,0)];

   rhoE_B0[OPS_ACC1(0,0,0)] = rhoE_B0[OPS_ACC1(-1,0,0)];

   rho_B0[OPS_ACC3(1,0,0)] = rho_B0[OPS_ACC3(-1,0,0)];

   rhou0_B0[OPS_ACC4(1,0,0)] = rhou0_B0[OPS_ACC4(-1,0,0)];

   rhou1_B0[OPS_ACC0(1,0,0)] = rhou1_B0[OPS_ACC0(-1,0,0)];

   rhou2_B0[OPS_ACC2(1,0,0)] = rhou2_B0[OPS_ACC2(-1,0,0)];

   rhoE_B0[OPS_ACC1(1,0,0)] = rhoE_B0[OPS_ACC1(-1,0,0)];

   rho_B0[OPS_ACC3(2,0,0)] = rho_B0[OPS_ACC3(-1,0,0)];

   rhou0_B0[OPS_ACC4(2,0,0)] = rhou0_B0[OPS_ACC4(-1,0,0)];

   rhou1_B0[OPS_ACC0(2,0,0)] = rhou1_B0[OPS_ACC0(-1,0,0)];

   rhou2_B0[OPS_ACC2(2,0,0)] = rhou2_B0[OPS_ACC2(-1,0,0)];

   rhoE_B0[OPS_ACC1(2,0,0)] = rhoE_B0[OPS_ACC1(-1,0,0)];

   rho_B0[OPS_ACC3(3,0,0)] = rho_B0[OPS_ACC3(-1,0,0)];

   rhou0_B0[OPS_ACC4(3,0,0)] = rhou0_B0[OPS_ACC4(-1,0,0)];

   rhou1_B0[OPS_ACC0(3,0,0)] = rhou1_B0[OPS_ACC0(-1,0,0)];

   rhou2_B0[OPS_ACC2(3,0,0)] = rhou2_B0[OPS_ACC2(-1,0,0)];

   rhoE_B0[OPS_ACC1(3,0,0)] = rhoE_B0[OPS_ACC1(-1,0,0)];

   rho_B0[OPS_ACC3(4,0,0)] = rho_B0[OPS_ACC3(-1,0,0)];

   rhou0_B0[OPS_ACC4(4,0,0)] = rhou0_B0[OPS_ACC4(-1,0,0)];

   rhou1_B0[OPS_ACC0(4,0,0)] = rhou1_B0[OPS_ACC0(-1,0,0)];

   rhou2_B0[OPS_ACC2(4,0,0)] = rhou2_B0[OPS_ACC2(-1,0,0)];

   rhoE_B0[OPS_ACC1(4,0,0)] = rhoE_B0[OPS_ACC1(-1,0,0)];

}

 void opensbliblock00Kernel048(const double *x0_B0, double *rhou1_B0, double *rhoE_B0, double *rhou2_B0, double *rho_B0,
double *rhou0_B0)
{
   double Pwall = 0.0;
   double u21 = 0.0;
   double u11 = 0.0;
   double T1 = 0.0;
   double rho_halo_3 = 0.0;
   double u23 = 0.0;
   double u22 = 0.0;
   double u02 = 0.0;
   double u01 = 0.0;
   double x0 = 0.0;
   double u13 = 0.0;
   double rho_halo_1 = 0.0;
   double u12 = 0.0;
   double T_above = 0.0;
   double T2 = 0.0;
   double u03 = 0.0;
   double rho_halo_2 = 0.0;
   double T3 = 0.0;
   x0 = x0_B0[OPS_ACC0(0,0,0)];

   rhou0_B0[OPS_ACC5(0,0,0)] = 0.0;

   rhou1_B0[OPS_ACC1(0,0,0)] = 0.0;

   rhou2_B0[OPS_ACC3(0,0,0)] = 0.0;

   rhoE_B0[OPS_ACC2(0,0,0)] = pow(Minf, -2.0)*Twall*rho_B0[OPS_ACC4(0,0,0)]/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc14)*pow(rhou0_B0[OPS_ACC5(0,0,0)], 2) + (rc14)*pow(rhou1_B0[OPS_ACC1(0,0,0)], 2) +
      (rc14)*pow(rhou2_B0[OPS_ACC3(0,0,0)], 2))/rho_B0[OPS_ACC4(0,0,0)] + rhoE_B0[OPS_ACC2(0,0,0)]);

   u01 = rhou0_B0[OPS_ACC5(0,1,0)]/rho_B0[OPS_ACC4(0,1,0)];

   u02 = rhou0_B0[OPS_ACC5(0,2,0)]/rho_B0[OPS_ACC4(0,2,0)];

   u03 = rhou0_B0[OPS_ACC5(0,3,0)]/rho_B0[OPS_ACC4(0,3,0)];

   u11 = rhou1_B0[OPS_ACC1(0,1,0)]/rho_B0[OPS_ACC4(0,1,0)];

   u12 = rhou1_B0[OPS_ACC1(0,2,0)]/rho_B0[OPS_ACC4(0,2,0)];

   u13 = rhou1_B0[OPS_ACC1(0,3,0)]/rho_B0[OPS_ACC4(0,3,0)];

   u21 = rhou2_B0[OPS_ACC3(0,1,0)]/rho_B0[OPS_ACC4(0,1,0)];

   u22 = rhou2_B0[OPS_ACC3(0,2,0)]/rho_B0[OPS_ACC4(0,2,0)];

   u23 = rhou2_B0[OPS_ACC3(0,3,0)]/rho_B0[OPS_ACC4(0,3,0)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc14)*pow(rhou0_B0[OPS_ACC5(0,1,0)], 2) +
      (rc14)*pow(rhou1_B0[OPS_ACC1(0,1,0)], 2) + (rc14)*pow(rhou2_B0[OPS_ACC3(0,1,0)], 2))/rho_B0[OPS_ACC4(0,1,0)] +
      rhoE_B0[OPS_ACC2(0,1,0)])/rho_B0[OPS_ACC4(0,1,0)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1,0)] = rho_halo_1;

   rhou0_B0[OPS_ACC5(0,-1,0)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1,0)] = -rho_halo_1*u11;

   rhou2_B0[OPS_ACC3(0,-1,0)] = -rho_halo_1*u21;

   rhoE_B0[OPS_ACC2(0,-1,0)] = rcinv7*Pwall + (rc14)*rho_halo_1*(pow(u01, 2) + pow(u11, 2) + pow(u21, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1,0)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2,0)] = rho_halo_2;

   rhou0_B0[OPS_ACC5(0,-1,0)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1,0)] = -rho_halo_1*u11;

   rhou2_B0[OPS_ACC3(0,-1,0)] = -rho_halo_1*u21;

   rhou0_B0[OPS_ACC5(0,-2,0)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2,0)] = -rho_halo_2*u12;

   rhou2_B0[OPS_ACC3(0,-2,0)] = -rho_halo_2*u22;

   rhoE_B0[OPS_ACC2(0,-1,0)] = rcinv7*Pwall + (rc14)*rho_halo_1*(pow(u01, 2) + pow(u11, 2) + pow(u21, 2));

   rhoE_B0[OPS_ACC2(0,-2,0)] = rcinv7*Pwall + (rc14)*rho_halo_2*(pow(u02, 2) + pow(u12, 2) + pow(u22, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1,0)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2,0)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC4(0,-3,0)] = rho_halo_3;

   rhou0_B0[OPS_ACC5(0,-1,0)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1,0)] = -rho_halo_1*u11;

   rhou2_B0[OPS_ACC3(0,-1,0)] = -rho_halo_1*u21;

   rhou0_B0[OPS_ACC5(0,-2,0)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2,0)] = -rho_halo_2*u12;

   rhou2_B0[OPS_ACC3(0,-2,0)] = -rho_halo_2*u22;

   rhou0_B0[OPS_ACC5(0,-3,0)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC1(0,-3,0)] = -rho_halo_3*u13;

   rhou2_B0[OPS_ACC3(0,-3,0)] = -rho_halo_3*u23;

   rhoE_B0[OPS_ACC2(0,-1,0)] = rcinv7*Pwall + (rc14)*rho_halo_1*(pow(u01, 2) + pow(u11, 2) + pow(u21, 2));

   rhoE_B0[OPS_ACC2(0,-2,0)] = rcinv7*Pwall + (rc14)*rho_halo_2*(pow(u02, 2) + pow(u12, 2) + pow(u22, 2));

   rhoE_B0[OPS_ACC2(0,-3,0)] = rcinv7*Pwall + (rc14)*rho_halo_3*(pow(u03, 2) + pow(u13, 2) + pow(u23, 2));

}

 void opensbliblock00Kernel049(const double *rhou2_B0, const double *x0_B0, double *rhoE_B0, double *rhou1_B0, double
*rhou0_B0, double *rho_B0)
{
   rho_B0[OPS_ACC5(0,0,0)] = ((x0_B0[OPS_ACC1(0,0,0)] > 20.0) ? (
   1.091364590640748
)
: (
   1.0
));

   rhou0_B0[OPS_ACC4(0,0,0)] = ((x0_B0[OPS_ACC1(0,0,0)] > 20.0) ? (
   1.046223246979973
)
: (
   1.0
));

    rhou1_B0[OPS_ACC3(0,0,0)] = ((x0_B0[OPS_ACC1(0,0,0)] > 20.0) ? (
   -0.045679092340368
)
: (
  
      0.004666540532088
));

    rhoE_B0[OPS_ACC2(0,0,0)] = ((x0_B0[OPS_ACC1(0,0,0)] > 20.0) ? (
   1.399487006243074 +
      0.5*pow(rhou2_B0[OPS_ACC0(0,0,0)], 2)/rho_B0[OPS_ACC5(0,0,0)]
)
: (
   1.293661681951063 +
      0.5*pow(rhou2_B0[OPS_ACC0(0,0,0)], 2)/rho_B0[OPS_ACC5(0,0,0)]
));

}

void opensbliblock00Kernel007(const double *rho_B0, const double *rhou0_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0,0)] = rhou0_B0[OPS_ACC1(0,0,0)]/rho_B0[OPS_ACC0(0,0,0)];

}

void opensbliblock00Kernel014(const double *rho_B0, const double *rhou2_B0, double *u2_B0)
{
   u2_B0[OPS_ACC2(0,0,0)] = rhou2_B0[OPS_ACC1(0,0,0)]/rho_B0[OPS_ACC0(0,0,0)];

}

void opensbliblock00Kernel016(const double *rho_B0, const double *rhou1_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0,0)] = rhou1_B0[OPS_ACC1(0,0,0)]/rho_B0[OPS_ACC0(0,0,0)];

}

 void opensbliblock00Kernel019(const double *x1_B0, const double *x2_B0, const double *x0_B0, double *BF_B0, const int
*iter)
{
    BF_B0[OPS_ACC3(0,0,0)] = A*exp(-pow(-xF + x0_B0[OPS_ACC2(0,0,0)], 2) - pow(-yF + x1_B0[OPS_ACC0(0,0,0)],
      2))*sin(dt*omega* *iter)*cos(bta*x2_B0[OPS_ACC1(0,0,0)]);

}

 void opensbliblock00Kernel011(const double *u0_B0, const double *u1_B0, const double *rhoE_B0, const double *u2_B0,
const double *rho_B0, double *p_B0)
{
    p_B0[OPS_ACC5(0,0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC2(0,0,0)] -
      rc14*rho_B0[OPS_ACC4(0,0,0)]*pow(u0_B0[OPS_ACC0(0,0,0)], 2) -
      rc14*rho_B0[OPS_ACC4(0,0,0)]*pow(u1_B0[OPS_ACC1(0,0,0)], 2) -
      rc14*rho_B0[OPS_ACC4(0,0,0)]*pow(u2_B0[OPS_ACC3(0,0,0)], 2));

}

 void opensbliblock00Kernel003(const double *u0_B0, const double *u2_B0, const double *D11_B0, const double *u1_B0,
double *theta_B0, const int *idx)
{
   double localeval_7 = 0.0;
   double localeval_3 = 0.0;
   double localeval_0 = 0.0;
   double localeval_8 = 0.0;
   double localeval_4 = 0.0;
   double localeval_1 = 0.0;
   double localeval_2 = 0.0;
   double localeval_5 = 0.0;
   double localeval_6 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc10*u2_B0[OPS_ACC1(0,0,0)] + 4*u2_B0[OPS_ACC1(0,1,0)] -
      3*u2_B0[OPS_ACC1(0,2,0)] + (rc11)*u2_B0[OPS_ACC1(0,3,0)] - rc12*u2_B0[OPS_ACC1(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-10*u2_B0[OPS_ACC1(0,0,0)] + 18*u2_B0[OPS_ACC1(0,1,0)] - 3*u2_B0[OPS_ACC1(0,-1,0)] -
      6*u2_B0[OPS_ACC1(0,2,0)] + u2_B0[OPS_ACC1(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc12)*u2_B0[OPS_ACC1(0,-4,0)] + (rc10)*u2_B0[OPS_ACC1(0,0,0)] - rc11*u2_B0[OPS_ACC1(0,-3,0)] +
      3*u2_B0[OPS_ACC1(0,-2,0)] - 4*u2_B0[OPS_ACC1(0,-1,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(10*u2_B0[OPS_ACC1(0,0,0)] - u2_B0[OPS_ACC1(0,-3,0)] + 3*u2_B0[OPS_ACC1(0,1,0)] +
      6*u2_B0[OPS_ACC1(0,-2,0)] - 18*u2_B0[OPS_ACC1(0,-1,0)])
)
: (
   (rc13)*inv_0*(-u2_B0[OPS_ACC1(0,2,0)] +
      u2_B0[OPS_ACC1(0,-2,0)] + 8*u2_B0[OPS_ACC1(0,1,0)] - 8*u2_B0[OPS_ACC1(0,-1,0)])
)))));

    localeval_1 = ((idx[0] == 0) ? (
   inv_1*(4*u1_B0[OPS_ACC3(1,0,0)] - 3*u1_B0[OPS_ACC3(2,0,0)] -
      rc12*u1_B0[OPS_ACC3(4,0,0)] + (rc11)*u1_B0[OPS_ACC3(3,0,0)] - rc10*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[0] == 1) ? (

        (rc13)*inv_1*(18*u1_B0[OPS_ACC3(1,0,0)] - 6*u1_B0[OPS_ACC3(2,0,0)] + u1_B0[OPS_ACC3(3,0,0)] -
      3*u1_B0[OPS_ACC3(-1,0,0)] - 10*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*(3*u1_B0[OPS_ACC3(-2,0,0)] + (rc12)*u1_B0[OPS_ACC3(-4,0,0)] - rc11*u1_B0[OPS_ACC3(-3,0,0)] -
      4*u1_B0[OPS_ACC3(-1,0,0)] + (rc10)*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(3*u1_B0[OPS_ACC3(1,0,0)] + 10*u1_B0[OPS_ACC3(0,0,0)] - u1_B0[OPS_ACC3(-3,0,0)] -
      18*u1_B0[OPS_ACC3(-1,0,0)] + 6*u1_B0[OPS_ACC3(-2,0,0)])
)
: (
   (rc13)*inv_1*(8*u1_B0[OPS_ACC3(1,0,0)] -
      8*u1_B0[OPS_ACC3(-1,0,0)] + u1_B0[OPS_ACC3(-2,0,0)] - u1_B0[OPS_ACC3(2,0,0)])
)))));

    localeval_2 = (rc13)*inv_2*(8*u2_B0[OPS_ACC1(0,0,1)] - u2_B0[OPS_ACC1(0,0,2)] + u2_B0[OPS_ACC1(0,0,-2)] -
      8*u2_B0[OPS_ACC1(0,0,-1)]);

    localeval_3 = (rc13)*inv_2*(-u0_B0[OPS_ACC0(0,0,2)] + 8*u0_B0[OPS_ACC0(0,0,1)] - 8*u0_B0[OPS_ACC0(0,0,-1)] +
      u0_B0[OPS_ACC0(0,0,-2)]);

    localeval_4 = ((idx[0] == 0) ? (
   inv_1*(-rc12*u0_B0[OPS_ACC0(4,0,0)] - 3*u0_B0[OPS_ACC0(2,0,0)] +
      (rc11)*u0_B0[OPS_ACC0(3,0,0)] - rc10*u0_B0[OPS_ACC0(0,0,0)] + 4*u0_B0[OPS_ACC0(1,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-3*u0_B0[OPS_ACC0(-1,0,0)] - 6*u0_B0[OPS_ACC0(2,0,0)] + u0_B0[OPS_ACC0(3,0,0)] -
      10*u0_B0[OPS_ACC0(0,0,0)] + 18*u0_B0[OPS_ACC0(1,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*(-4*u0_B0[OPS_ACC0(-1,0,0)] + 3*u0_B0[OPS_ACC0(-2,0,0)] + (rc12)*u0_B0[OPS_ACC0(-4,0,0)] +
      (rc10)*u0_B0[OPS_ACC0(0,0,0)] - rc11*u0_B0[OPS_ACC0(-3,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(-18*u0_B0[OPS_ACC0(-1,0,0)] + 6*u0_B0[OPS_ACC0(-2,0,0)] + 10*u0_B0[OPS_ACC0(0,0,0)] -
      u0_B0[OPS_ACC0(-3,0,0)] + 3*u0_B0[OPS_ACC0(1,0,0)])
)
: (
   (rc13)*inv_1*(-u0_B0[OPS_ACC0(2,0,0)] -
      8*u0_B0[OPS_ACC0(-1,0,0)] + u0_B0[OPS_ACC0(-2,0,0)] + 8*u0_B0[OPS_ACC0(1,0,0)])
)))));

    localeval_5 = ((idx[1] == 0) ? (
   inv_0*(4*u1_B0[OPS_ACC3(0,1,0)] - 3*u1_B0[OPS_ACC3(0,2,0)] -
      rc12*u1_B0[OPS_ACC3(0,4,0)] + (rc11)*u1_B0[OPS_ACC3(0,3,0)] - rc10*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[1] == 1) ? (

        (rc13)*inv_0*(18*u1_B0[OPS_ACC3(0,1,0)] - 6*u1_B0[OPS_ACC3(0,2,0)] + u1_B0[OPS_ACC3(0,3,0)] -
      3*u1_B0[OPS_ACC3(0,-1,0)] - 10*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(3*u1_B0[OPS_ACC3(0,-2,0)] + (rc12)*u1_B0[OPS_ACC3(0,-4,0)] - rc11*u1_B0[OPS_ACC3(0,-3,0)] -
      4*u1_B0[OPS_ACC3(0,-1,0)] + (rc10)*u1_B0[OPS_ACC3(0,0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(3*u1_B0[OPS_ACC3(0,1,0)] + 10*u1_B0[OPS_ACC3(0,0,0)] - u1_B0[OPS_ACC3(0,-3,0)] -
      18*u1_B0[OPS_ACC3(0,-1,0)] + 6*u1_B0[OPS_ACC3(0,-2,0)])
)
: (
   (rc13)*inv_0*(8*u1_B0[OPS_ACC3(0,1,0)] -
      8*u1_B0[OPS_ACC3(0,-1,0)] + u1_B0[OPS_ACC3(0,-2,0)] - u1_B0[OPS_ACC3(0,2,0)])
)))));

    localeval_6 = ((idx[0] == 0) ? (
   inv_1*(-rc10*u2_B0[OPS_ACC1(0,0,0)] + 4*u2_B0[OPS_ACC1(1,0,0)] -
      3*u2_B0[OPS_ACC1(2,0,0)] + (rc11)*u2_B0[OPS_ACC1(3,0,0)] - rc12*u2_B0[OPS_ACC1(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-10*u2_B0[OPS_ACC1(0,0,0)] + 18*u2_B0[OPS_ACC1(1,0,0)] - 3*u2_B0[OPS_ACC1(-1,0,0)] -
      6*u2_B0[OPS_ACC1(2,0,0)] + u2_B0[OPS_ACC1(3,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc12)*u2_B0[OPS_ACC1(-4,0,0)] + (rc10)*u2_B0[OPS_ACC1(0,0,0)] - rc11*u2_B0[OPS_ACC1(-3,0,0)] +
      3*u2_B0[OPS_ACC1(-2,0,0)] - 4*u2_B0[OPS_ACC1(-1,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(10*u2_B0[OPS_ACC1(0,0,0)] - u2_B0[OPS_ACC1(-3,0,0)] + 3*u2_B0[OPS_ACC1(1,0,0)] +
      6*u2_B0[OPS_ACC1(-2,0,0)] - 18*u2_B0[OPS_ACC1(-1,0,0)])
)
: (
   (rc13)*inv_1*(-u2_B0[OPS_ACC1(2,0,0)] +
      u2_B0[OPS_ACC1(-2,0,0)] + 8*u2_B0[OPS_ACC1(1,0,0)] - 8*u2_B0[OPS_ACC1(-1,0,0)])
)))));

    localeval_7 = (rc13)*inv_2*(-8*u1_B0[OPS_ACC3(0,0,-1)] + u1_B0[OPS_ACC3(0,0,-2)] + 8*u1_B0[OPS_ACC3(0,0,1)] -
      u1_B0[OPS_ACC3(0,0,2)]);

    localeval_8 = ((idx[1] == 0) ? (
   inv_0*(-rc12*u0_B0[OPS_ACC0(0,4,0)] - 3*u0_B0[OPS_ACC0(0,2,0)] +
      (rc11)*u0_B0[OPS_ACC0(0,3,0)] - rc10*u0_B0[OPS_ACC0(0,0,0)] + 4*u0_B0[OPS_ACC0(0,1,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-3*u0_B0[OPS_ACC0(0,-1,0)] - 6*u0_B0[OPS_ACC0(0,2,0)] + u0_B0[OPS_ACC0(0,3,0)] -
      10*u0_B0[OPS_ACC0(0,0,0)] + 18*u0_B0[OPS_ACC0(0,1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(-4*u0_B0[OPS_ACC0(0,-1,0)] + 3*u0_B0[OPS_ACC0(0,-2,0)] + (rc12)*u0_B0[OPS_ACC0(0,-4,0)] +
      (rc10)*u0_B0[OPS_ACC0(0,0,0)] - rc11*u0_B0[OPS_ACC0(0,-3,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(-18*u0_B0[OPS_ACC0(0,-1,0)] + 6*u0_B0[OPS_ACC0(0,-2,0)] + 10*u0_B0[OPS_ACC0(0,0,0)] -
      u0_B0[OPS_ACC0(0,-3,0)] + 3*u0_B0[OPS_ACC0(0,1,0)])
)
: (
   (rc13)*inv_0*(-u0_B0[OPS_ACC0(0,2,0)] -
      8*u0_B0[OPS_ACC0(0,-1,0)] + u0_B0[OPS_ACC0(0,-2,0)] + 8*u0_B0[OPS_ACC0(0,1,0)])
)))));

    theta_B0[OPS_ACC4(0,0,0)] = (-rc14*tanh(250.0*localeval_2 + 250.0*localeval_4 +
      250.0*localeval_5*D11_B0[OPS_ACC2(0,0,0)] + 2.5) + rc14)*pow(localeval_2 + localeval_4 +
      localeval_5*D11_B0[OPS_ACC2(0,0,0)], 2)/(epsilon + pow(localeval_1 - localeval_8*D11_B0[OPS_ACC2(0,0,0)], 2) +
      pow(localeval_3 - localeval_6, 2) + pow(localeval_0*D11_B0[OPS_ACC2(0,0,0)] - localeval_7, 2) + pow(localeval_2 +
      localeval_4 + localeval_5*D11_B0[OPS_ACC2(0,0,0)], 2));

}

void opensbliblock00Kernel010(const double *rho_B0, const double *p_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0,0,0)] = sqrt(gama*p_B0[OPS_ACC1(0,0,0)]/rho_B0[OPS_ACC0(0,0,0)]);

}

void opensbliblock00Kernel021(const double *rho_B0, const double *p_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC1(0,0,0)]/rho_B0[OPS_ACC0(0,0,0)];

}

void opensbliblock00Kernel022(const double *T_B0, double *mu_B0)
{
    mu_B0[OPS_ACC1(0,0,0)] = (SuthT*rcinv15 + 1.0)*pow(T_B0[OPS_ACC0(0,0,0)], 1.5)/(SuthT*rcinv15 +
      T_B0[OPS_ACC0(0,0,0)]);

}

 void opensbliblock00Kernel004(const double *u0_B0, const double *rhou1_B0, const double *a_B0, const double *p_B0,
const double *rhoE_B0, const double *rhou2_B0, const double *u1_B0, const double *u2_B0, const double *rho_B0, const
double *rhou0_B0, const double *theta_B0, double *TENO_B0, double *wk0_B0, double *wk1_B0, double *wk3_B0, double
*wk4_B0, double *wk2_B0)
{
   double Recon_4 = 0.0;
   double CS_00 = 0.0;
   double CS_03 = 0.0;
   double TENO_CT = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CF_03 = 0.0;
   double CS_30 = 0.0;
   double delta_0 = 0.0;
   double CF_12 = 0.0;
   double max_lambda_0_44 = 0.0;
   double Recon_3 = 0.0;
   double CS_25 = 0.0;
   double CS_32 = 0.0;
   double CF_14 = 0.0;
   double alpha_3 = 0.0;
   double delta_3 = 0.0;
   double AVG_0_0_LEV_44 = 0.0;
   double delta_2 = 0.0;
   double CS_14 = 0.0;
   double CS_45 = 0.0;
   double CS_05 = 0.0;
   double AVG_0_u2 = 0.0;
   double AVG_0_u1 = 0.0;
   double AVG_0_0_LEV_41 = 0.0;
   double CF_01 = 0.0;
   double CF_45 = 0.0;
   double CS_12 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double beta_3 = 0.0;
   double alpha_2 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CF_02 = 0.0;
   double CS_01 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_0_0_LEV_43 = 0.0;
   double AVG_0_inv_rho = 0.0;
   double CS_11 = 0.0;
   double max_lambda_0_22 = 0.0;
   double AVG_0_0_LEV_42 = 0.0;
   double CF_11 = 0.0;
   double CF_42 = 0.0;
   double CS_34 = 0.0;
   double CS_10 = 0.0;
   double CF_34 = 0.0;
   double CS_43 = 0.0;
   double CS_21 = 0.0;
   double AVG_0_rho = 0.0;
   double CF_32 = 0.0;
   double CF_04 = 0.0;
   double CS_42 = 0.0;
   double inv_omega_sum = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double alpha_1 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_40 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double CS_24 = 0.0;
   double CF_41 = 0.0;
   double AVG_0_0_LEV_34 = 0.0;
   double CS_35 = 0.0;
   double CF_44 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double AVG_0_0_LEV_04 = 0.0;
   double CF_40 = 0.0;
   double CF_00 = 0.0;
   double CS_31 = 0.0;
   double CF_23 = 0.0;
   double Recon_0 = 0.0;
   double CF_30 = 0.0;
   double CS_23 = 0.0;
   double CS_44 = 0.0;
   double alpha_0 = 0.0;
   double max_lambda_0_00 = 0.0;
   double CF_13 = 0.0;
   double AVG_0_u0 = 0.0;
   double CS_15 = 0.0;
   double max_lambda_0_33 = 0.0;
   double beta_1 = 0.0;
   double CS_13 = 0.0;
   double Recon_2 = 0.0;
   double CF_24 = 0.0;
   double CF_33 = 0.0;
   double Recon_1 = 0.0;
   double CF_22 = 0.0;
   double CS_22 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_a = 0.0;
   double delta_1 = 0.0;
   double CF_31 = 0.0;
   double CF_21 = 0.0;
   double beta_2 = 0.0;
   double CS_41 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double CF_25 = 0.0;
   double max_lambda_0_11 = 0.0;
   double CF_43 = 0.0;
   double CS_02 = 0.0;
   double inv_AVG_rho = 0.0;
   double CS_04 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CS_40 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double CF_20 = 0.0;
   double CF_05 = 0.0;
   double CF_15 = 0.0;
   double CS_33 = 0.0;
   double inv_alpha_sum = 0.0;
   double CF_35 = 0.0;
   double beta_0 = 0.0;
   AVG_0_rho = sqrt(rho_B0[OPS_ACC8(0,0,0)]*rho_B0[OPS_ACC8(1,0,0)]);

   AVG_0_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC8(1,0,0)]) + sqrt(rho_B0[OPS_ACC8(0,0,0)]));

    AVG_0_u0 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC8(1,0,0)])*u0_B0[OPS_ACC0(1,0,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u0_B0[OPS_ACC0(0,0,0)]);

    AVG_0_u1 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC8(1,0,0)])*u1_B0[OPS_ACC6(1,0,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u1_B0[OPS_ACC6(0,0,0)]);

    AVG_0_u2 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,0,0)])*u2_B0[OPS_ACC7(0,0,0)] +
      sqrt(rho_B0[OPS_ACC8(1,0,0)])*u2_B0[OPS_ACC7(1,0,0)]);

    AVG_0_a = sqrt(gamma_m1*(AVG_0_inv_rho*((p_B0[OPS_ACC3(1,0,0)] +
      rhoE_B0[OPS_ACC4(1,0,0)])/sqrt(rho_B0[OPS_ACC8(1,0,0)]) + (p_B0[OPS_ACC3(0,0,0)] +
      rhoE_B0[OPS_ACC4(0,0,0)])/sqrt(rho_B0[OPS_ACC8(0,0,0)])) - rc14*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2) +
      pow(AVG_0_u2, 2))));

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

    AVG_0_0_LEV_00 = -rc14*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) +
      gama*pow(AVG_0_u2, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2)
      - pow(AVG_0_u2, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_01 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_02 = gamma_m1*AVG_0_u1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_03 = gamma_m1*AVG_0_u2*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_04 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = -AVG_0_u2*inv_AVG_rho;

   AVG_0_0_LEV_13 = inv_AVG_rho;

   AVG_0_0_LEV_20 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_22 = -inv_AVG_rho;

    AVG_0_0_LEV_30 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_0_u0, 2) - gama*pow(AVG_0_u1, 2) -
      gama*pow(AVG_0_u2, 2) + 2*AVG_0_a*AVG_0_u0 + pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2) + pow(AVG_0_u2, 2));

   AVG_0_0_LEV_31 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0);

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_40 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_0_u0, 2) + gama*pow(AVG_0_u1, 2) +
      gama*pow(AVG_0_u2, 2) + 2*AVG_0_a*AVG_0_u0 - pow(AVG_0_u0, 2) - pow(AVG_0_u1, 2) - pow(AVG_0_u2, 2));

   AVG_0_0_LEV_41 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u0 + AVG_0_a - AVG_0_u0);

   AVG_0_0_LEV_42 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_43 = -0.707106781186547*gamma_m1*AVG_0_u2*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(-2,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(-2,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)];

    CF_10 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(-2,0,0)] +
      AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)];

    CF_20 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(-2,0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)];

    CF_30 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(-2,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(-2,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)];

    CF_40 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(-2,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(-2,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(-2,0,0)]*u0_B0[OPS_ACC0(-2,0,0)];

    CF_01 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(-1,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(-1,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)];

    CF_11 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(-1,0,0)] +
      AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)];

    CF_21 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(-1,0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)];

    CF_31 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(-1,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(-1,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)];

    CF_41 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(-1,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(-1,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(-1,0,0)]*u0_B0[OPS_ACC0(-1,0,0)];

    CF_02 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(0,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(0,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)];

   CF_12 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(0,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)];

   CF_22 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(0,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)];

    CF_32 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(0,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(0,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)];

    CF_42 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(0,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(0,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)]*u0_B0[OPS_ACC0(0,0,0)];

    CF_03 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(1,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(1,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)];

   CF_13 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(1,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)];

   CF_23 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(1,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)];

    CF_33 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(1,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(1,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)];

    CF_43 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(1,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(1,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(1,0,0)]*u0_B0[OPS_ACC0(1,0,0)];

    CF_04 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(2,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(2,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)];

   CF_14 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(2,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)];

   CF_24 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(2,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)];

    CF_34 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(2,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(2,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)];

    CF_44 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(2,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(2,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(2,0,0)]*u0_B0[OPS_ACC0(2,0,0)];

    CF_05 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC9(3,0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(3,0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_04*p_B0[OPS_ACC3(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)];

   CF_15 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC9(3,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)];

   CF_25 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC9(3,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)];

    CF_35 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC9(3,0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(3,0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_34*p_B0[OPS_ACC3(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)];

    CF_45 = AVG_0_0_LEV_40*rhou0_B0[OPS_ACC9(3,0,0)] + AVG_0_0_LEV_41*p_B0[OPS_ACC3(3,0,0)] +
      AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_44*p_B0[OPS_ACC3(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(3,0,0)]*u0_B0[OPS_ACC0(3,0,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(-2,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-2,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-2,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(-2,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(-2,0,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(-1,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(-1,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(-1,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(-1,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(-1,0,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(0,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(1,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(1,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(1,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(1,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(1,0,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(2,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(2,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(2,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(2,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(2,0,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC8(3,0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC9(3,0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC1(3,0,0)] + AVG_0_0_LEV_03*rhou2_B0[OPS_ACC5(3,0,0)] +
      AVG_0_0_LEV_04*rhoE_B0[OPS_ACC4(3,0,0)];

   CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(-2,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(-2,0,0)];

   CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(-1,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(-1,0,0)];

   CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(0,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(0,0,0)];

   CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(1,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(1,0,0)];

   CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(2,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(2,0,0)];

   CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC8(3,0,0)] + AVG_0_0_LEV_13*rhou2_B0[OPS_ACC5(3,0,0)];

   CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(-2,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-2,0,0)];

   CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(-1,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(-1,0,0)];

   CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(0,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(0,0,0)];

   CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(1,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(1,0,0)];

   CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(2,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(2,0,0)];

   CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC8(3,0,0)] + AVG_0_0_LEV_22*rhou1_B0[OPS_ACC1(3,0,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(-2,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-2,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-2,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(-2,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(-2,0,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(-1,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(-1,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(-1,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(-1,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(-1,0,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(0,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(1,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(1,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(1,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(1,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(1,0,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(2,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(2,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(2,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(2,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(2,0,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC8(3,0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC9(3,0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC1(3,0,0)] + AVG_0_0_LEV_33*rhou2_B0[OPS_ACC5(3,0,0)] +
      AVG_0_0_LEV_34*rhoE_B0[OPS_ACC4(3,0,0)];

    CS_40 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(-2,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(-2,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(-2,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(-2,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(-2,0,0)];

    CS_41 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(-1,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(-1,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(-1,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(-1,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(-1,0,0)];

    CS_42 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(0,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_43 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(1,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(1,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(1,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(1,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(1,0,0)];

    CS_44 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(2,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(2,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(2,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(2,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(2,0,0)];

    CS_45 = AVG_0_0_LEV_40*rho_B0[OPS_ACC8(3,0,0)] + AVG_0_0_LEV_41*rhou0_B0[OPS_ACC9(3,0,0)] +
      AVG_0_0_LEV_42*rhou1_B0[OPS_ACC1(3,0,0)] + AVG_0_0_LEV_43*rhou2_B0[OPS_ACC5(3,0,0)] +
      AVG_0_0_LEV_44*rhoE_B0[OPS_ACC4(3,0,0)];

    max_lambda_0_00 = fmax(fabs(u0_B0[OPS_ACC0(2,0,0)]), fmax(fabs(u0_B0[OPS_ACC0(0,0,0)]),
      fmax(fabs(u0_B0[OPS_ACC0(-2,0,0)]), fmax(fabs(u0_B0[OPS_ACC0(3,0,0)]), fmax(fabs(u0_B0[OPS_ACC0(1,0,0)]),
      fabs(u0_B0[OPS_ACC0(-1,0,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

   max_lambda_0_22 = max_lambda_0_00;

    max_lambda_0_33 = fmax(fabs(a_B0[OPS_ACC2(2,0,0)] + u0_B0[OPS_ACC0(2,0,0)]), fmax(fabs(a_B0[OPS_ACC2(0,0,0)] +
      u0_B0[OPS_ACC0(0,0,0)]), fmax(fabs(a_B0[OPS_ACC2(3,0,0)] + u0_B0[OPS_ACC0(3,0,0)]),
      fmax(fabs(a_B0[OPS_ACC2(1,0,0)] + u0_B0[OPS_ACC0(1,0,0)]), fmax(fabs(a_B0[OPS_ACC2(-2,0,0)] +
      u0_B0[OPS_ACC0(-2,0,0)]), fabs(a_B0[OPS_ACC2(-1,0,0)] + u0_B0[OPS_ACC0(-1,0,0)]))))));

    max_lambda_0_44 = fmax(fabs(a_B0[OPS_ACC2(-1,0,0)] - u0_B0[OPS_ACC0(-1,0,0)]), fmax(fabs(a_B0[OPS_ACC2(-2,0,0)] -
      u0_B0[OPS_ACC0(-2,0,0)]), fmax(fabs(a_B0[OPS_ACC2(1,0,0)] - u0_B0[OPS_ACC0(1,0,0)]),
      fmax(fabs(a_B0[OPS_ACC2(2,0,0)] - u0_B0[OPS_ACC0(2,0,0)]), fmax(fabs(a_B0[OPS_ACC2(0,0,0)] -
      u0_B0[OPS_ACC0(0,0,0)]), fabs(a_B0[OPS_ACC2(3,0,0)] - u0_B0[OPS_ACC0(3,0,0)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC10(0,0,0)] + 1, 4)*(4*theta_B0[OPS_ACC10(0,0,0)]
      + 1) + 1)));

   TENO_B0[OPS_ACC11(0,0,0)] = TENO_CT;

    beta_0 = (rc12)*pow((rc14)*(CF_01 + CS_01*max_lambda_0_00) - rc14*(CF_03 + CS_03*max_lambda_0_00), 2) +
      (rc16)*pow((rc14)*(CF_01 + CS_01*max_lambda_0_00) - (CF_02 + CS_02*max_lambda_0_00) + (rc14)*(CF_03 +
      CS_03*max_lambda_0_00), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_02 + CS_02*max_lambda_0_00) - (CF_03 + CS_03*max_lambda_0_00) + (rc14)*(CF_04 +
      CS_04*max_lambda_0_00), 2) + (rc12)*pow((rc17)*(CF_02 + CS_02*max_lambda_0_00) - 2*(CF_03 + CS_03*max_lambda_0_00)
      + (rc14)*(CF_04 + CS_04*max_lambda_0_00), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_00 + CS_00*max_lambda_0_00) - 2*(CF_01 + CS_01*max_lambda_0_00) + (rc17)*(CF_02 +
      CS_02*max_lambda_0_00), 2) + (rc16)*pow((rc14)*(CF_00 + CS_00*max_lambda_0_00) - (CF_01 + CS_01*max_lambda_0_00) +
      (rc14)*(CF_02 + CS_02*max_lambda_0_00), 2);

    beta_3 = -rc18*(CF_02 + CS_02*max_lambda_0_00) + (rc19)*(CF_03 + CS_03*max_lambda_0_00) - rc19*(CF_04 +
      CS_04*max_lambda_0_00) + (rc18)*(CF_05 + CS_05*max_lambda_0_00) + (rc16)*pow(CF_02 + CS_02*max_lambda_0_00 -
      rc20*(CF_03 + CS_03*max_lambda_0_00) + 2*(CF_04 + CS_04*max_lambda_0_00) - rc14*(CF_05 + CS_05*max_lambda_0_00),
      2) + (rc21)*pow(CF_05 + CS_05*max_lambda_0_00 - rc22*(CF_02 + CS_02*max_lambda_0_00) + 9*(CF_03 +
      CS_03*max_lambda_0_00) - rc23*(CF_04 + CS_04*max_lambda_0_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_01 + CS_01*max_lambda_0_00) + (rc30)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc24)*(CF_03 + CS_03*max_lambda_0_00)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc30)*(CF_03 + CS_03*max_lambda_0_00) - rc13*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_00 + CS_00*max_lambda_0_00) - rc31*(CF_01 + CS_01*max_lambda_0_00) +
      (rc32)*(CF_02 + CS_02*max_lambda_0_00)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_02 + CS_02*max_lambda_0_00) +
      (rc34)*(CF_03 + CS_03*max_lambda_0_00) - rc35*(CF_04 + CS_04*max_lambda_0_00) + (rc36)*(CF_05 +
      CS_05*max_lambda_0_00));

    beta_0 = (rc12)*pow((rc14)*(CF_02 - CS_02*max_lambda_0_00) - rc14*(CF_04 - CS_04*max_lambda_0_00), 2) +
      (rc16)*pow((rc14)*(CF_02 - CS_02*max_lambda_0_00) - (CF_03 - CS_03*max_lambda_0_00) + (rc14)*(CF_04 -
      CS_04*max_lambda_0_00), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_01 - CS_01*max_lambda_0_00) - 2*(CF_02 - CS_02*max_lambda_0_00) + (rc17)*(CF_03 -
      CS_03*max_lambda_0_00), 2) + (rc16)*pow((rc14)*(CF_01 - CS_01*max_lambda_0_00) - (CF_02 - CS_02*max_lambda_0_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_0_00), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_03 - CS_03*max_lambda_0_00) - (CF_04 - CS_04*max_lambda_0_00) + (rc14)*(CF_05 -
      CS_05*max_lambda_0_00), 2) + (rc12)*pow((rc17)*(CF_03 - CS_03*max_lambda_0_00) - 2*(CF_04 - CS_04*max_lambda_0_00)
      + (rc14)*(CF_05 - CS_05*max_lambda_0_00), 2);

    beta_3 = (rc21)*pow(-(CF_00 - CS_00*max_lambda_0_00) + (rc23)*(CF_01 - CS_01*max_lambda_0_00) - 9*(CF_02 -
      CS_02*max_lambda_0_00) + (rc22)*(CF_03 - CS_03*max_lambda_0_00), 2) + (rc37)*pow(-rc14*(CF_00 -
      CS_00*max_lambda_0_00) + (rc17)*(CF_01 - CS_01*max_lambda_0_00) - rc17*(CF_02 - CS_02*max_lambda_0_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_0_00), 2) + (rc16)*pow(CF_03 - CS_03*max_lambda_0_00 - rc14*(CF_00 -
      CS_00*max_lambda_0_00) + 2*(CF_01 - CS_01*max_lambda_0_00) - rc20*(CF_02 - CS_02*max_lambda_0_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_02 - CS_02*max_lambda_0_00) + (rc30)*(CF_03 -
      CS_03*max_lambda_0_00) - rc13*(CF_04 - CS_04*max_lambda_0_00)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_01 -
      CS_01*max_lambda_0_00) + (rc30)*(CF_02 - CS_02*max_lambda_0_00) + (rc24)*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_03 - CS_03*max_lambda_0_00) - rc31*(CF_04 - CS_04*max_lambda_0_00) +
      (rc24)*(CF_05 - CS_05*max_lambda_0_00)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_00 - CS_00*max_lambda_0_00) -
      rc35*(CF_01 - CS_01*max_lambda_0_00) + (rc34)*(CF_02 - CS_02*max_lambda_0_00) + (rc33)*(CF_03 -
      CS_03*max_lambda_0_00));

    beta_0 = (rc12)*pow((rc14)*(CF_11 + CS_11*max_lambda_0_11) - rc14*(CF_13 + CS_13*max_lambda_0_11), 2) +
      (rc16)*pow((rc14)*(CF_11 + CS_11*max_lambda_0_11) - (CF_12 + CS_12*max_lambda_0_11) + (rc14)*(CF_13 +
      CS_13*max_lambda_0_11), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_12 + CS_12*max_lambda_0_11) - (CF_13 + CS_13*max_lambda_0_11) + (rc14)*(CF_14 +
      CS_14*max_lambda_0_11), 2) + (rc12)*pow((rc17)*(CF_12 + CS_12*max_lambda_0_11) - 2*(CF_13 + CS_13*max_lambda_0_11)
      + (rc14)*(CF_14 + CS_14*max_lambda_0_11), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_10 + CS_10*max_lambda_0_11) - 2*(CF_11 + CS_11*max_lambda_0_11) + (rc17)*(CF_12 +
      CS_12*max_lambda_0_11), 2) + (rc16)*pow((rc14)*(CF_10 + CS_10*max_lambda_0_11) - (CF_11 + CS_11*max_lambda_0_11) +
      (rc14)*(CF_12 + CS_12*max_lambda_0_11), 2);

    beta_3 = -rc18*(CF_12 + CS_12*max_lambda_0_11) + (rc19)*(CF_13 + CS_13*max_lambda_0_11) - rc19*(CF_14 +
      CS_14*max_lambda_0_11) + (rc18)*(CF_15 + CS_15*max_lambda_0_11) + (rc16)*pow(CF_12 + CS_12*max_lambda_0_11 -
      rc20*(CF_13 + CS_13*max_lambda_0_11) + 2*(CF_14 + CS_14*max_lambda_0_11) - rc14*(CF_15 + CS_15*max_lambda_0_11),
      2) + (rc21)*pow(CF_15 + CS_15*max_lambda_0_11 - rc22*(CF_12 + CS_12*max_lambda_0_11) + 9*(CF_13 +
      CS_13*max_lambda_0_11) - rc23*(CF_14 + CS_14*max_lambda_0_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_11 + CS_11*max_lambda_0_11) + (rc30)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc24)*(CF_13 + CS_13*max_lambda_0_11)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc30)*(CF_13 + CS_13*max_lambda_0_11) - rc13*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_10 + CS_10*max_lambda_0_11) - rc31*(CF_11 + CS_11*max_lambda_0_11) +
      (rc32)*(CF_12 + CS_12*max_lambda_0_11)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_12 + CS_12*max_lambda_0_11) +
      (rc34)*(CF_13 + CS_13*max_lambda_0_11) - rc35*(CF_14 + CS_14*max_lambda_0_11) + (rc36)*(CF_15 +
      CS_15*max_lambda_0_11));

    beta_0 = (rc12)*pow((rc14)*(CF_12 - CS_12*max_lambda_0_11) - rc14*(CF_14 - CS_14*max_lambda_0_11), 2) +
      (rc16)*pow((rc14)*(CF_12 - CS_12*max_lambda_0_11) - (CF_13 - CS_13*max_lambda_0_11) + (rc14)*(CF_14 -
      CS_14*max_lambda_0_11), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_11 - CS_11*max_lambda_0_11) - 2*(CF_12 - CS_12*max_lambda_0_11) + (rc17)*(CF_13 -
      CS_13*max_lambda_0_11), 2) + (rc16)*pow((rc14)*(CF_11 - CS_11*max_lambda_0_11) - (CF_12 - CS_12*max_lambda_0_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_0_11), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_13 - CS_13*max_lambda_0_11) - (CF_14 - CS_14*max_lambda_0_11) + (rc14)*(CF_15 -
      CS_15*max_lambda_0_11), 2) + (rc12)*pow((rc17)*(CF_13 - CS_13*max_lambda_0_11) - 2*(CF_14 - CS_14*max_lambda_0_11)
      + (rc14)*(CF_15 - CS_15*max_lambda_0_11), 2);

    beta_3 = (rc21)*pow(-(CF_10 - CS_10*max_lambda_0_11) + (rc23)*(CF_11 - CS_11*max_lambda_0_11) - 9*(CF_12 -
      CS_12*max_lambda_0_11) + (rc22)*(CF_13 - CS_13*max_lambda_0_11), 2) + (rc37)*pow(-rc14*(CF_10 -
      CS_10*max_lambda_0_11) + (rc17)*(CF_11 - CS_11*max_lambda_0_11) - rc17*(CF_12 - CS_12*max_lambda_0_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_0_11), 2) + (rc16)*pow(CF_13 - CS_13*max_lambda_0_11 - rc14*(CF_10 -
      CS_10*max_lambda_0_11) + 2*(CF_11 - CS_11*max_lambda_0_11) - rc20*(CF_12 - CS_12*max_lambda_0_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_12 - CS_12*max_lambda_0_11) + (rc30)*(CF_13 -
      CS_13*max_lambda_0_11) - rc13*(CF_14 - CS_14*max_lambda_0_11)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_11 -
      CS_11*max_lambda_0_11) + (rc30)*(CF_12 - CS_12*max_lambda_0_11) + (rc24)*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_13 - CS_13*max_lambda_0_11) - rc31*(CF_14 - CS_14*max_lambda_0_11) +
      (rc24)*(CF_15 - CS_15*max_lambda_0_11)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_10 - CS_10*max_lambda_0_11) -
      rc35*(CF_11 - CS_11*max_lambda_0_11) + (rc34)*(CF_12 - CS_12*max_lambda_0_11) + (rc33)*(CF_13 -
      CS_13*max_lambda_0_11));

    beta_0 = (rc12)*pow((rc14)*(CF_21 + CS_21*max_lambda_0_22) - rc14*(CF_23 + CS_23*max_lambda_0_22), 2) +
      (rc16)*pow((rc14)*(CF_21 + CS_21*max_lambda_0_22) - (CF_22 + CS_22*max_lambda_0_22) + (rc14)*(CF_23 +
      CS_23*max_lambda_0_22), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_22 + CS_22*max_lambda_0_22) - (CF_23 + CS_23*max_lambda_0_22) + (rc14)*(CF_24 +
      CS_24*max_lambda_0_22), 2) + (rc12)*pow((rc17)*(CF_22 + CS_22*max_lambda_0_22) - 2*(CF_23 + CS_23*max_lambda_0_22)
      + (rc14)*(CF_24 + CS_24*max_lambda_0_22), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_20 + CS_20*max_lambda_0_22) - 2*(CF_21 + CS_21*max_lambda_0_22) + (rc17)*(CF_22 +
      CS_22*max_lambda_0_22), 2) + (rc16)*pow((rc14)*(CF_20 + CS_20*max_lambda_0_22) - (CF_21 + CS_21*max_lambda_0_22) +
      (rc14)*(CF_22 + CS_22*max_lambda_0_22), 2);

    beta_3 = -rc18*(CF_22 + CS_22*max_lambda_0_22) + (rc19)*(CF_23 + CS_23*max_lambda_0_22) - rc19*(CF_24 +
      CS_24*max_lambda_0_22) + (rc18)*(CF_25 + CS_25*max_lambda_0_22) + (rc16)*pow(CF_22 + CS_22*max_lambda_0_22 -
      rc20*(CF_23 + CS_23*max_lambda_0_22) + 2*(CF_24 + CS_24*max_lambda_0_22) - rc14*(CF_25 + CS_25*max_lambda_0_22),
      2) + (rc21)*pow(CF_25 + CS_25*max_lambda_0_22 - rc22*(CF_22 + CS_22*max_lambda_0_22) + 9*(CF_23 +
      CS_23*max_lambda_0_22) - rc23*(CF_24 + CS_24*max_lambda_0_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_21 + CS_21*max_lambda_0_22) + (rc30)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc24)*(CF_23 + CS_23*max_lambda_0_22)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc30)*(CF_23 + CS_23*max_lambda_0_22) - rc13*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_20 + CS_20*max_lambda_0_22) - rc31*(CF_21 + CS_21*max_lambda_0_22) +
      (rc32)*(CF_22 + CS_22*max_lambda_0_22)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_22 + CS_22*max_lambda_0_22) +
      (rc34)*(CF_23 + CS_23*max_lambda_0_22) - rc35*(CF_24 + CS_24*max_lambda_0_22) + (rc36)*(CF_25 +
      CS_25*max_lambda_0_22));

    beta_0 = (rc12)*pow((rc14)*(CF_22 - CS_22*max_lambda_0_22) - rc14*(CF_24 - CS_24*max_lambda_0_22), 2) +
      (rc16)*pow((rc14)*(CF_22 - CS_22*max_lambda_0_22) - (CF_23 - CS_23*max_lambda_0_22) + (rc14)*(CF_24 -
      CS_24*max_lambda_0_22), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_21 - CS_21*max_lambda_0_22) - 2*(CF_22 - CS_22*max_lambda_0_22) + (rc17)*(CF_23 -
      CS_23*max_lambda_0_22), 2) + (rc16)*pow((rc14)*(CF_21 - CS_21*max_lambda_0_22) - (CF_22 - CS_22*max_lambda_0_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_0_22), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_23 - CS_23*max_lambda_0_22) - (CF_24 - CS_24*max_lambda_0_22) + (rc14)*(CF_25 -
      CS_25*max_lambda_0_22), 2) + (rc12)*pow((rc17)*(CF_23 - CS_23*max_lambda_0_22) - 2*(CF_24 - CS_24*max_lambda_0_22)
      + (rc14)*(CF_25 - CS_25*max_lambda_0_22), 2);

    beta_3 = (rc21)*pow(-(CF_20 - CS_20*max_lambda_0_22) + (rc23)*(CF_21 - CS_21*max_lambda_0_22) - 9*(CF_22 -
      CS_22*max_lambda_0_22) + (rc22)*(CF_23 - CS_23*max_lambda_0_22), 2) + (rc37)*pow(-rc14*(CF_20 -
      CS_20*max_lambda_0_22) + (rc17)*(CF_21 - CS_21*max_lambda_0_22) - rc17*(CF_22 - CS_22*max_lambda_0_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_0_22), 2) + (rc16)*pow(CF_23 - CS_23*max_lambda_0_22 - rc14*(CF_20 -
      CS_20*max_lambda_0_22) + 2*(CF_21 - CS_21*max_lambda_0_22) - rc20*(CF_22 - CS_22*max_lambda_0_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_22 - CS_22*max_lambda_0_22) + (rc30)*(CF_23 -
      CS_23*max_lambda_0_22) - rc13*(CF_24 - CS_24*max_lambda_0_22)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_21 -
      CS_21*max_lambda_0_22) + (rc30)*(CF_22 - CS_22*max_lambda_0_22) + (rc24)*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_23 - CS_23*max_lambda_0_22) - rc31*(CF_24 - CS_24*max_lambda_0_22) +
      (rc24)*(CF_25 - CS_25*max_lambda_0_22)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_20 - CS_20*max_lambda_0_22) -
      rc35*(CF_21 - CS_21*max_lambda_0_22) + (rc34)*(CF_22 - CS_22*max_lambda_0_22) + (rc33)*(CF_23 -
      CS_23*max_lambda_0_22));

    beta_0 = (rc12)*pow((rc14)*(CF_31 + CS_31*max_lambda_0_33) - rc14*(CF_33 + CS_33*max_lambda_0_33), 2) +
      (rc16)*pow((rc14)*(CF_31 + CS_31*max_lambda_0_33) - (CF_32 + CS_32*max_lambda_0_33) + (rc14)*(CF_33 +
      CS_33*max_lambda_0_33), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_32 + CS_32*max_lambda_0_33) - (CF_33 + CS_33*max_lambda_0_33) + (rc14)*(CF_34 +
      CS_34*max_lambda_0_33), 2) + (rc12)*pow((rc17)*(CF_32 + CS_32*max_lambda_0_33) - 2*(CF_33 + CS_33*max_lambda_0_33)
      + (rc14)*(CF_34 + CS_34*max_lambda_0_33), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_30 + CS_30*max_lambda_0_33) - 2*(CF_31 + CS_31*max_lambda_0_33) + (rc17)*(CF_32 +
      CS_32*max_lambda_0_33), 2) + (rc16)*pow((rc14)*(CF_30 + CS_30*max_lambda_0_33) - (CF_31 + CS_31*max_lambda_0_33) +
      (rc14)*(CF_32 + CS_32*max_lambda_0_33), 2);

    beta_3 = -rc18*(CF_32 + CS_32*max_lambda_0_33) + (rc19)*(CF_33 + CS_33*max_lambda_0_33) - rc19*(CF_34 +
      CS_34*max_lambda_0_33) + (rc18)*(CF_35 + CS_35*max_lambda_0_33) + (rc16)*pow(CF_32 + CS_32*max_lambda_0_33 -
      rc20*(CF_33 + CS_33*max_lambda_0_33) + 2*(CF_34 + CS_34*max_lambda_0_33) - rc14*(CF_35 + CS_35*max_lambda_0_33),
      2) + (rc21)*pow(CF_35 + CS_35*max_lambda_0_33 - rc22*(CF_32 + CS_32*max_lambda_0_33) + 9*(CF_33 +
      CS_33*max_lambda_0_33) - rc23*(CF_34 + CS_34*max_lambda_0_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_31 + CS_31*max_lambda_0_33) + (rc30)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc24)*(CF_33 + CS_33*max_lambda_0_33)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc30)*(CF_33 + CS_33*max_lambda_0_33) - rc13*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_30 + CS_30*max_lambda_0_33) - rc31*(CF_31 + CS_31*max_lambda_0_33) +
      (rc32)*(CF_32 + CS_32*max_lambda_0_33)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_32 + CS_32*max_lambda_0_33) +
      (rc34)*(CF_33 + CS_33*max_lambda_0_33) - rc35*(CF_34 + CS_34*max_lambda_0_33) + (rc36)*(CF_35 +
      CS_35*max_lambda_0_33));

    beta_0 = (rc12)*pow((rc14)*(CF_32 - CS_32*max_lambda_0_33) - rc14*(CF_34 - CS_34*max_lambda_0_33), 2) +
      (rc16)*pow((rc14)*(CF_32 - CS_32*max_lambda_0_33) - (CF_33 - CS_33*max_lambda_0_33) + (rc14)*(CF_34 -
      CS_34*max_lambda_0_33), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_31 - CS_31*max_lambda_0_33) - 2*(CF_32 - CS_32*max_lambda_0_33) + (rc17)*(CF_33 -
      CS_33*max_lambda_0_33), 2) + (rc16)*pow((rc14)*(CF_31 - CS_31*max_lambda_0_33) - (CF_32 - CS_32*max_lambda_0_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_0_33), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_33 - CS_33*max_lambda_0_33) - (CF_34 - CS_34*max_lambda_0_33) + (rc14)*(CF_35 -
      CS_35*max_lambda_0_33), 2) + (rc12)*pow((rc17)*(CF_33 - CS_33*max_lambda_0_33) - 2*(CF_34 - CS_34*max_lambda_0_33)
      + (rc14)*(CF_35 - CS_35*max_lambda_0_33), 2);

    beta_3 = (rc21)*pow(-(CF_30 - CS_30*max_lambda_0_33) + (rc23)*(CF_31 - CS_31*max_lambda_0_33) - 9*(CF_32 -
      CS_32*max_lambda_0_33) + (rc22)*(CF_33 - CS_33*max_lambda_0_33), 2) + (rc37)*pow(-rc14*(CF_30 -
      CS_30*max_lambda_0_33) + (rc17)*(CF_31 - CS_31*max_lambda_0_33) - rc17*(CF_32 - CS_32*max_lambda_0_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_0_33), 2) + (rc16)*pow(CF_33 - CS_33*max_lambda_0_33 - rc14*(CF_30 -
      CS_30*max_lambda_0_33) + 2*(CF_31 - CS_31*max_lambda_0_33) - rc20*(CF_32 - CS_32*max_lambda_0_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_32 - CS_32*max_lambda_0_33) + (rc30)*(CF_33 -
      CS_33*max_lambda_0_33) - rc13*(CF_34 - CS_34*max_lambda_0_33)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_31 -
      CS_31*max_lambda_0_33) + (rc30)*(CF_32 - CS_32*max_lambda_0_33) + (rc24)*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_33 - CS_33*max_lambda_0_33) - rc31*(CF_34 - CS_34*max_lambda_0_33) +
      (rc24)*(CF_35 - CS_35*max_lambda_0_33)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_30 - CS_30*max_lambda_0_33) -
      rc35*(CF_31 - CS_31*max_lambda_0_33) + (rc34)*(CF_32 - CS_32*max_lambda_0_33) + (rc33)*(CF_33 -
      CS_33*max_lambda_0_33));

    beta_0 = (rc12)*pow((rc14)*(CF_41 + CS_41*max_lambda_0_44) - rc14*(CF_43 + CS_43*max_lambda_0_44), 2) +
      (rc16)*pow((rc14)*(CF_41 + CS_41*max_lambda_0_44) - (CF_42 + CS_42*max_lambda_0_44) + (rc14)*(CF_43 +
      CS_43*max_lambda_0_44), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_42 + CS_42*max_lambda_0_44) - (CF_43 + CS_43*max_lambda_0_44) + (rc14)*(CF_44 +
      CS_44*max_lambda_0_44), 2) + (rc12)*pow((rc17)*(CF_42 + CS_42*max_lambda_0_44) - 2*(CF_43 + CS_43*max_lambda_0_44)
      + (rc14)*(CF_44 + CS_44*max_lambda_0_44), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_40 + CS_40*max_lambda_0_44) - 2*(CF_41 + CS_41*max_lambda_0_44) + (rc17)*(CF_42 +
      CS_42*max_lambda_0_44), 2) + (rc16)*pow((rc14)*(CF_40 + CS_40*max_lambda_0_44) - (CF_41 + CS_41*max_lambda_0_44) +
      (rc14)*(CF_42 + CS_42*max_lambda_0_44), 2);

    beta_3 = -rc18*(CF_42 + CS_42*max_lambda_0_44) + (rc19)*(CF_43 + CS_43*max_lambda_0_44) - rc19*(CF_44 +
      CS_44*max_lambda_0_44) + (rc18)*(CF_45 + CS_45*max_lambda_0_44) + (rc16)*pow(CF_42 + CS_42*max_lambda_0_44 -
      rc20*(CF_43 + CS_43*max_lambda_0_44) + 2*(CF_44 + CS_44*max_lambda_0_44) - rc14*(CF_45 + CS_45*max_lambda_0_44),
      2) + (rc21)*pow(CF_45 + CS_45*max_lambda_0_44 - rc22*(CF_42 + CS_42*max_lambda_0_44) + 9*(CF_43 +
      CS_43*max_lambda_0_44) - rc23*(CF_44 + CS_44*max_lambda_0_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_41 + CS_41*max_lambda_0_44) + (rc30)*(CF_42 +
      CS_42*max_lambda_0_44) + (rc24)*(CF_43 + CS_43*max_lambda_0_44)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_42 +
      CS_42*max_lambda_0_44) + (rc30)*(CF_43 + CS_43*max_lambda_0_44) - rc13*(CF_44 + CS_44*max_lambda_0_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_40 + CS_40*max_lambda_0_44) - rc31*(CF_41 + CS_41*max_lambda_0_44) +
      (rc32)*(CF_42 + CS_42*max_lambda_0_44)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_42 + CS_42*max_lambda_0_44) +
      (rc34)*(CF_43 + CS_43*max_lambda_0_44) - rc35*(CF_44 + CS_44*max_lambda_0_44) + (rc36)*(CF_45 +
      CS_45*max_lambda_0_44));

    beta_0 = (rc12)*pow((rc14)*(CF_42 - CS_42*max_lambda_0_44) - rc14*(CF_44 - CS_44*max_lambda_0_44), 2) +
      (rc16)*pow((rc14)*(CF_42 - CS_42*max_lambda_0_44) - (CF_43 - CS_43*max_lambda_0_44) + (rc14)*(CF_44 -
      CS_44*max_lambda_0_44), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_41 - CS_41*max_lambda_0_44) - 2*(CF_42 - CS_42*max_lambda_0_44) + (rc17)*(CF_43 -
      CS_43*max_lambda_0_44), 2) + (rc16)*pow((rc14)*(CF_41 - CS_41*max_lambda_0_44) - (CF_42 - CS_42*max_lambda_0_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_0_44), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_43 - CS_43*max_lambda_0_44) - (CF_44 - CS_44*max_lambda_0_44) + (rc14)*(CF_45 -
      CS_45*max_lambda_0_44), 2) + (rc12)*pow((rc17)*(CF_43 - CS_43*max_lambda_0_44) - 2*(CF_44 - CS_44*max_lambda_0_44)
      + (rc14)*(CF_45 - CS_45*max_lambda_0_44), 2);

    beta_3 = (rc21)*pow(-(CF_40 - CS_40*max_lambda_0_44) + (rc23)*(CF_41 - CS_41*max_lambda_0_44) - 9*(CF_42 -
      CS_42*max_lambda_0_44) + (rc22)*(CF_43 - CS_43*max_lambda_0_44), 2) + (rc37)*pow(-rc14*(CF_40 -
      CS_40*max_lambda_0_44) + (rc17)*(CF_41 - CS_41*max_lambda_0_44) - rc17*(CF_42 - CS_42*max_lambda_0_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_0_44), 2) + (rc16)*pow(CF_43 - CS_43*max_lambda_0_44 - rc14*(CF_40 -
      CS_40*max_lambda_0_44) + 2*(CF_41 - CS_41*max_lambda_0_44) - rc20*(CF_42 - CS_42*max_lambda_0_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_42 - CS_42*max_lambda_0_44) + (rc30)*(CF_43 -
      CS_43*max_lambda_0_44) - rc13*(CF_44 - CS_44*max_lambda_0_44)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_41 -
      CS_41*max_lambda_0_44) + (rc30)*(CF_42 - CS_42*max_lambda_0_44) + (rc24)*(CF_43 - CS_43*max_lambda_0_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_43 - CS_43*max_lambda_0_44) - rc31*(CF_44 - CS_44*max_lambda_0_44) +
      (rc24)*(CF_45 - CS_45*max_lambda_0_44)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_40 - CS_40*max_lambda_0_44) -
      rc35*(CF_41 - CS_41*max_lambda_0_44) + (rc34)*(CF_42 - CS_42*max_lambda_0_44) + (rc33)*(CF_43 -
      CS_43*max_lambda_0_44));

    wk0_B0[OPS_ACC12(0,0,0)] = 0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_4*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC13(0,0,0)] = 0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(AVG_0_a + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_4*inv_AVG_a*(-AVG_0_a + AVG_0_u0) + AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC16(0,0,0)] = 0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_4*inv_AVG_a - AVG_0_rho*Recon_2 + AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC14(0,0,0)] = 0.707106781186547*AVG_0_rho*AVG_0_u2*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_0_rho*AVG_0_u2*Recon_4*inv_AVG_a + AVG_0_rho*Recon_1 + AVG_0_u2*Recon_0;

    wk4_B0[OPS_ACC15(0,0,0)] = -AVG_0_rho*AVG_0_u1*Recon_2 + AVG_0_rho*AVG_0_u2*Recon_1 +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2) +
      pow(AVG_0_u2, 2)) + pow(AVG_0_a, 2)) + AVG_0_a*AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_4*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2) +
      pow(AVG_0_u2, 2)) + pow(AVG_0_a, 2)) - AVG_0_a*AVG_0_u0) + Recon_0*((rc14)*pow(AVG_0_u0, 2) + (rc14)*pow(AVG_0_u1,
      2) + (rc14)*pow(AVG_0_u2, 2));

}

 void opensbliblock00Kernel005(const double *u0_B0, const double *rhou1_B0, const double *a_B0, const double *p_B0,
const double *rhoE_B0, const double *rhou2_B0, const double *u1_B0, const double *u2_B0, const double *rho_B0, const
double *rhou0_B0, const double *theta_B0, double *wk7_B0, double *wk8_B0, double *wk6_B0, double *wk5_B0, double
*wk9_B0)
{
   double Recon_4 = 0.0;
   double CS_00 = 0.0;
   double CS_03 = 0.0;
   double max_lambda_1_33 = 0.0;
   double TENO_CT = 0.0;
   double CF_03 = 0.0;
   double CS_30 = 0.0;
   double delta_0 = 0.0;
   double AVG_1_1_LEV_00 = 0.0;
   double CF_12 = 0.0;
   double Recon_3 = 0.0;
   double AVG_1_u2 = 0.0;
   double AVG_1_1_LEV_13 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double CS_25 = 0.0;
   double CS_32 = 0.0;
   double CF_14 = 0.0;
   double alpha_3 = 0.0;
   double delta_3 = 0.0;
   double delta_2 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CS_14 = 0.0;
   double CS_45 = 0.0;
   double CS_05 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double CF_01 = 0.0;
   double CF_45 = 0.0;
   double CS_12 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_42 = 0.0;
   double AVG_1_1_LEV_41 = 0.0;
   double beta_3 = 0.0;
   double alpha_2 = 0.0;
   double CF_02 = 0.0;
   double CS_01 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_11 = 0.0;
   double CF_42 = 0.0;
   double CF_11 = 0.0;
   double CS_34 = 0.0;
   double CS_10 = 0.0;
   double CF_34 = 0.0;
   double CS_43 = 0.0;
   double CS_21 = 0.0;
   double max_lambda_1_44 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double CF_32 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double CF_04 = 0.0;
   double CS_42 = 0.0;
   double inv_omega_sum = 0.0;
   double AVG_1_1_LEV_14 = 0.0;
   double max_lambda_1_00 = 0.0;
   double alpha_1 = 0.0;
   double AVG_1_a = 0.0;
   double CS_24 = 0.0;
   double CF_41 = 0.0;
   double CS_35 = 0.0;
   double CF_44 = 0.0;
   double CF_40 = 0.0;
   double CS_31 = 0.0;
   double CF_00 = 0.0;
   double max_lambda_1_22 = 0.0;
   double CF_23 = 0.0;
   double AVG_1_1_LEV_40 = 0.0;
   double Recon_0 = 0.0;
   double CF_30 = 0.0;
   double AVG_1_u0 = 0.0;
   double CS_23 = 0.0;
   double CS_44 = 0.0;
   double alpha_0 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double CF_13 = 0.0;
   double AVG_1_u1 = 0.0;
   double CS_15 = 0.0;
   double AVG_1_1_LEV_34 = 0.0;
   double max_lambda_1_11 = 0.0;
   double beta_1 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double CS_13 = 0.0;
   double CF_24 = 0.0;
   double Recon_2 = 0.0;
   double CF_33 = 0.0;
   double Recon_1 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double CF_22 = 0.0;
   double CS_22 = 0.0;
   double delta_1 = 0.0;
   double CF_31 = 0.0;
   double CF_21 = 0.0;
   double beta_2 = 0.0;
   double AVG_1_1_LEV_43 = 0.0;
   double CS_41 = 0.0;
   double CF_25 = 0.0;
   double AVG_1_inv_rho = 0.0;
   double CF_43 = 0.0;
   double CS_02 = 0.0;
   double inv_AVG_rho = 0.0;
   double CS_04 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CS_40 = 0.0;
   double AVG_1_1_LEV_44 = 0.0;
   double CF_20 = 0.0;
   double CF_05 = 0.0;
   double CF_15 = 0.0;
   double CS_33 = 0.0;
   double AVG_1_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double CF_35 = 0.0;
   double beta_0 = 0.0;
   AVG_1_rho = sqrt(rho_B0[OPS_ACC8(0,0,0)]*rho_B0[OPS_ACC8(0,1,0)]);

   AVG_1_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC8(0,1,0)]) + sqrt(rho_B0[OPS_ACC8(0,0,0)]));

    AVG_1_u0 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,1,0)])*u0_B0[OPS_ACC0(0,1,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u0_B0[OPS_ACC0(0,0,0)]);

    AVG_1_u1 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,1,0)])*u1_B0[OPS_ACC6(0,1,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u1_B0[OPS_ACC6(0,0,0)]);

    AVG_1_u2 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,1,0)])*u2_B0[OPS_ACC7(0,1,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u2_B0[OPS_ACC7(0,0,0)]);

    AVG_1_a = sqrt(gamma_m1*(AVG_1_inv_rho*((p_B0[OPS_ACC3(0,1,0)] +
      rhoE_B0[OPS_ACC4(0,1,0)])/sqrt(rho_B0[OPS_ACC8(0,1,0)]) + (p_B0[OPS_ACC3(0,0,0)] +
      rhoE_B0[OPS_ACC4(0,0,0)])/sqrt(rho_B0[OPS_ACC8(0,0,0)])) - rc14*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2) +
      pow(AVG_1_u2, 2))));

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

   AVG_1_1_LEV_00 = AVG_1_u2*inv_AVG_rho;

   AVG_1_1_LEV_03 = -inv_AVG_rho;

    AVG_1_1_LEV_10 = -rc14*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) +
      gama*pow(AVG_1_u2, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2)
      - pow(AVG_1_u2, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_1_1_LEV_11 = gamma_m1*AVG_1_u0*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_12 = gamma_m1*AVG_1_u1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_13 = gamma_m1*AVG_1_u2*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_14 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_20 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_21 = inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_1_u0, 2) - gama*pow(AVG_1_u1, 2) -
      gama*pow(AVG_1_u2, 2) + 2*AVG_1_a*AVG_1_u1 + pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2) + pow(AVG_1_u2, 2));

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1);

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_1_u0, 2) + gama*pow(AVG_1_u1, 2) +
      gama*pow(AVG_1_u2, 2) + 2*AVG_1_a*AVG_1_u1 - pow(AVG_1_u0, 2) - pow(AVG_1_u1, 2) - pow(AVG_1_u2, 2));

   AVG_1_1_LEV_41 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_42 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u1 + AVG_1_a - AVG_1_u1);

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,-2,0)] +
      AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)];

    CF_10 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,-2,0)] +
      AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] + AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,-2,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)];

    CF_20 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,-2,0)] +
      AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)];

    CF_30 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,-2,0)] +
      AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] + AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,-2,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)];

    CF_40 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,-2,0)] +
      AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] + AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,-2,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,-2,0)]*u1_B0[OPS_ACC6(0,-2,0)];

    CF_01 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,-1,0)] +
      AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)];

    CF_11 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,-1,0)] +
      AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] + AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,-1,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)];

    CF_21 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,-1,0)] +
      AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)];

    CF_31 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,-1,0)] +
      AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] + AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,-1,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)];

    CF_41 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,-1,0)] +
      AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] + AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,-1,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,-1,0)]*u1_B0[OPS_ACC6(0,-1,0)];

   CF_02 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)];

    CF_12 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,0,0)] + AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)];

   CF_22 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)];

    CF_32 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,0,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)];

    CF_42 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,0,0)] + AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)]*u1_B0[OPS_ACC6(0,0,0)];

   CF_03 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)];

    CF_13 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,1,0)] + AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)];

   CF_23 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)];

    CF_33 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,1,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)];

    CF_43 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,1,0)] + AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,1,0)]*u1_B0[OPS_ACC6(0,1,0)];

   CF_04 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)];

    CF_14 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,2,0)] + AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)];

   CF_24 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)];

    CF_34 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,2,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)];

    CF_44 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,2,0)] + AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,2,0)]*u1_B0[OPS_ACC6(0,2,0)];

   CF_05 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)];

    CF_15 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_12*p_B0[OPS_ACC3(0,3,0)] + AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_14*p_B0[OPS_ACC3(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)];

   CF_25 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)];

    CF_35 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,3,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_34*p_B0[OPS_ACC3(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)];

    CF_45 = AVG_1_1_LEV_40*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_42*p_B0[OPS_ACC3(0,3,0)] + AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_44*p_B0[OPS_ACC3(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,3,0)]*u1_B0[OPS_ACC6(0,3,0)];

   CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,-2,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,-2,0)];

   CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,-1,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,-1,0)];

   CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,0,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,0,0)];

   CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,1,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,1,0)];

   CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,2,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,2,0)];

   CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC8(0,3,0)] + AVG_1_1_LEV_03*rhou2_B0[OPS_ACC5(0,3,0)];

    CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,-2,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,-2,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-2,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,-2,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,-2,0)];

    CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,-1,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,-1,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,-1,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,-1,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,-1,0)];

    CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,1,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,1,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,1,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,1,0)];

    CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,2,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,2,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,2,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,2,0)];

    CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC8(0,3,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC9(0,3,0)] +
      AVG_1_1_LEV_12*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_13*rhou2_B0[OPS_ACC5(0,3,0)] +
      AVG_1_1_LEV_14*rhoE_B0[OPS_ACC4(0,3,0)];

   CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,-2,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,-2,0)];

   CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,-1,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,-1,0)];

   CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,0,0)];

   CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,1,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,1,0)];

   CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,2,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,2,0)];

   CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC8(0,3,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC9(0,3,0)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,-2,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,-2,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-2,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,-2,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,-2,0)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,-1,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,-1,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,-1,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,-1,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,-1,0)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,1,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,1,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,1,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,1,0)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,2,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,2,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,2,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,2,0)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC8(0,3,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC9(0,3,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_33*rhou2_B0[OPS_ACC5(0,3,0)] +
      AVG_1_1_LEV_34*rhoE_B0[OPS_ACC4(0,3,0)];

    CS_40 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,-2,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,-2,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,-2,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,-2,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,-2,0)];

    CS_41 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,-1,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,-1,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,-1,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,-1,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,-1,0)];

    CS_42 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,0,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_43 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,1,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,1,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,1,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,1,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,1,0)];

    CS_44 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,2,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,2,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,2,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,2,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,2,0)];

    CS_45 = AVG_1_1_LEV_40*rho_B0[OPS_ACC8(0,3,0)] + AVG_1_1_LEV_41*rhou0_B0[OPS_ACC9(0,3,0)] +
      AVG_1_1_LEV_42*rhou1_B0[OPS_ACC1(0,3,0)] + AVG_1_1_LEV_43*rhou2_B0[OPS_ACC5(0,3,0)] +
      AVG_1_1_LEV_44*rhoE_B0[OPS_ACC4(0,3,0)];

    max_lambda_1_00 = fmax(fabs(u1_B0[OPS_ACC6(0,0,0)]), fmax(fabs(u1_B0[OPS_ACC6(0,2,0)]),
      fmax(fabs(u1_B0[OPS_ACC6(0,-2,0)]), fmax(fabs(u1_B0[OPS_ACC6(0,1,0)]), fmax(fabs(u1_B0[OPS_ACC6(0,3,0)]),
      fabs(u1_B0[OPS_ACC6(0,-1,0)]))))));

   max_lambda_1_11 = max_lambda_1_00;

   max_lambda_1_22 = max_lambda_1_00;

    max_lambda_1_33 = fmax(fabs(a_B0[OPS_ACC2(0,3,0)] + u1_B0[OPS_ACC6(0,3,0)]), fmax(fabs(a_B0[OPS_ACC2(0,0,0)] +
      u1_B0[OPS_ACC6(0,0,0)]), fmax(fabs(a_B0[OPS_ACC2(0,-1,0)] + u1_B0[OPS_ACC6(0,-1,0)]),
      fmax(fabs(a_B0[OPS_ACC2(0,-2,0)] + u1_B0[OPS_ACC6(0,-2,0)]), fmax(fabs(a_B0[OPS_ACC2(0,2,0)] +
      u1_B0[OPS_ACC6(0,2,0)]), fabs(a_B0[OPS_ACC2(0,1,0)] + u1_B0[OPS_ACC6(0,1,0)]))))));

    max_lambda_1_44 = fmax(fabs(a_B0[OPS_ACC2(0,0,0)] - u1_B0[OPS_ACC6(0,0,0)]), fmax(fabs(a_B0[OPS_ACC2(0,3,0)] -
      u1_B0[OPS_ACC6(0,3,0)]), fmax(fabs(a_B0[OPS_ACC2(0,2,0)] - u1_B0[OPS_ACC6(0,2,0)]),
      fmax(fabs(a_B0[OPS_ACC2(0,-1,0)] - u1_B0[OPS_ACC6(0,-1,0)]), fmax(fabs(a_B0[OPS_ACC2(0,1,0)] -
      u1_B0[OPS_ACC6(0,1,0)]), fabs(a_B0[OPS_ACC2(0,-2,0)] - u1_B0[OPS_ACC6(0,-2,0)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC10(0,0,0)] + 1, 4)*(4*theta_B0[OPS_ACC10(0,0,0)]
      + 1) + 1)));

    beta_0 = (rc12)*pow((rc14)*(CF_01 + CS_01*max_lambda_1_00) - rc14*(CF_03 + CS_03*max_lambda_1_00), 2) +
      (rc16)*pow((rc14)*(CF_01 + CS_01*max_lambda_1_00) - (CF_02 + CS_02*max_lambda_1_00) + (rc14)*(CF_03 +
      CS_03*max_lambda_1_00), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_02 + CS_02*max_lambda_1_00) - (CF_03 + CS_03*max_lambda_1_00) + (rc14)*(CF_04 +
      CS_04*max_lambda_1_00), 2) + (rc12)*pow((rc17)*(CF_02 + CS_02*max_lambda_1_00) - 2*(CF_03 + CS_03*max_lambda_1_00)
      + (rc14)*(CF_04 + CS_04*max_lambda_1_00), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_00 + CS_00*max_lambda_1_00) - 2*(CF_01 + CS_01*max_lambda_1_00) + (rc17)*(CF_02 +
      CS_02*max_lambda_1_00), 2) + (rc16)*pow((rc14)*(CF_00 + CS_00*max_lambda_1_00) - (CF_01 + CS_01*max_lambda_1_00) +
      (rc14)*(CF_02 + CS_02*max_lambda_1_00), 2);

    beta_3 = -rc18*(CF_02 + CS_02*max_lambda_1_00) + (rc19)*(CF_03 + CS_03*max_lambda_1_00) - rc19*(CF_04 +
      CS_04*max_lambda_1_00) + (rc18)*(CF_05 + CS_05*max_lambda_1_00) + (rc16)*pow(CF_02 + CS_02*max_lambda_1_00 -
      rc20*(CF_03 + CS_03*max_lambda_1_00) + 2*(CF_04 + CS_04*max_lambda_1_00) - rc14*(CF_05 + CS_05*max_lambda_1_00),
      2) + (rc21)*pow(CF_05 + CS_05*max_lambda_1_00 - rc22*(CF_02 + CS_02*max_lambda_1_00) + 9*(CF_03 +
      CS_03*max_lambda_1_00) - rc23*(CF_04 + CS_04*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_01 + CS_01*max_lambda_1_00) + (rc30)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc24)*(CF_03 + CS_03*max_lambda_1_00)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc30)*(CF_03 + CS_03*max_lambda_1_00) - rc13*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_00 + CS_00*max_lambda_1_00) - rc31*(CF_01 + CS_01*max_lambda_1_00) +
      (rc32)*(CF_02 + CS_02*max_lambda_1_00)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_02 + CS_02*max_lambda_1_00) +
      (rc34)*(CF_03 + CS_03*max_lambda_1_00) - rc35*(CF_04 + CS_04*max_lambda_1_00) + (rc36)*(CF_05 +
      CS_05*max_lambda_1_00));

    beta_0 = (rc12)*pow((rc14)*(CF_02 - CS_02*max_lambda_1_00) - rc14*(CF_04 - CS_04*max_lambda_1_00), 2) +
      (rc16)*pow((rc14)*(CF_02 - CS_02*max_lambda_1_00) - (CF_03 - CS_03*max_lambda_1_00) + (rc14)*(CF_04 -
      CS_04*max_lambda_1_00), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_01 - CS_01*max_lambda_1_00) - 2*(CF_02 - CS_02*max_lambda_1_00) + (rc17)*(CF_03 -
      CS_03*max_lambda_1_00), 2) + (rc16)*pow((rc14)*(CF_01 - CS_01*max_lambda_1_00) - (CF_02 - CS_02*max_lambda_1_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_1_00), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_03 - CS_03*max_lambda_1_00) - (CF_04 - CS_04*max_lambda_1_00) + (rc14)*(CF_05 -
      CS_05*max_lambda_1_00), 2) + (rc12)*pow((rc17)*(CF_03 - CS_03*max_lambda_1_00) - 2*(CF_04 - CS_04*max_lambda_1_00)
      + (rc14)*(CF_05 - CS_05*max_lambda_1_00), 2);

    beta_3 = (rc21)*pow(-(CF_00 - CS_00*max_lambda_1_00) + (rc23)*(CF_01 - CS_01*max_lambda_1_00) - 9*(CF_02 -
      CS_02*max_lambda_1_00) + (rc22)*(CF_03 - CS_03*max_lambda_1_00), 2) + (rc37)*pow(-rc14*(CF_00 -
      CS_00*max_lambda_1_00) + (rc17)*(CF_01 - CS_01*max_lambda_1_00) - rc17*(CF_02 - CS_02*max_lambda_1_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_1_00), 2) + (rc16)*pow(CF_03 - CS_03*max_lambda_1_00 - rc14*(CF_00 -
      CS_00*max_lambda_1_00) + 2*(CF_01 - CS_01*max_lambda_1_00) - rc20*(CF_02 - CS_02*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_02 - CS_02*max_lambda_1_00) + (rc30)*(CF_03 -
      CS_03*max_lambda_1_00) - rc13*(CF_04 - CS_04*max_lambda_1_00)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_01 -
      CS_01*max_lambda_1_00) + (rc30)*(CF_02 - CS_02*max_lambda_1_00) + (rc24)*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_03 - CS_03*max_lambda_1_00) - rc31*(CF_04 - CS_04*max_lambda_1_00) +
      (rc24)*(CF_05 - CS_05*max_lambda_1_00)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_00 - CS_00*max_lambda_1_00) -
      rc35*(CF_01 - CS_01*max_lambda_1_00) + (rc34)*(CF_02 - CS_02*max_lambda_1_00) + (rc33)*(CF_03 -
      CS_03*max_lambda_1_00));

    beta_0 = (rc12)*pow((rc14)*(CF_11 + CS_11*max_lambda_1_11) - rc14*(CF_13 + CS_13*max_lambda_1_11), 2) +
      (rc16)*pow((rc14)*(CF_11 + CS_11*max_lambda_1_11) - (CF_12 + CS_12*max_lambda_1_11) + (rc14)*(CF_13 +
      CS_13*max_lambda_1_11), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_12 + CS_12*max_lambda_1_11) - (CF_13 + CS_13*max_lambda_1_11) + (rc14)*(CF_14 +
      CS_14*max_lambda_1_11), 2) + (rc12)*pow((rc17)*(CF_12 + CS_12*max_lambda_1_11) - 2*(CF_13 + CS_13*max_lambda_1_11)
      + (rc14)*(CF_14 + CS_14*max_lambda_1_11), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_10 + CS_10*max_lambda_1_11) - 2*(CF_11 + CS_11*max_lambda_1_11) + (rc17)*(CF_12 +
      CS_12*max_lambda_1_11), 2) + (rc16)*pow((rc14)*(CF_10 + CS_10*max_lambda_1_11) - (CF_11 + CS_11*max_lambda_1_11) +
      (rc14)*(CF_12 + CS_12*max_lambda_1_11), 2);

    beta_3 = -rc18*(CF_12 + CS_12*max_lambda_1_11) + (rc19)*(CF_13 + CS_13*max_lambda_1_11) - rc19*(CF_14 +
      CS_14*max_lambda_1_11) + (rc18)*(CF_15 + CS_15*max_lambda_1_11) + (rc16)*pow(CF_12 + CS_12*max_lambda_1_11 -
      rc20*(CF_13 + CS_13*max_lambda_1_11) + 2*(CF_14 + CS_14*max_lambda_1_11) - rc14*(CF_15 + CS_15*max_lambda_1_11),
      2) + (rc21)*pow(CF_15 + CS_15*max_lambda_1_11 - rc22*(CF_12 + CS_12*max_lambda_1_11) + 9*(CF_13 +
      CS_13*max_lambda_1_11) - rc23*(CF_14 + CS_14*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_11 + CS_11*max_lambda_1_11) + (rc30)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc24)*(CF_13 + CS_13*max_lambda_1_11)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc30)*(CF_13 + CS_13*max_lambda_1_11) - rc13*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_10 + CS_10*max_lambda_1_11) - rc31*(CF_11 + CS_11*max_lambda_1_11) +
      (rc32)*(CF_12 + CS_12*max_lambda_1_11)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_12 + CS_12*max_lambda_1_11) +
      (rc34)*(CF_13 + CS_13*max_lambda_1_11) - rc35*(CF_14 + CS_14*max_lambda_1_11) + (rc36)*(CF_15 +
      CS_15*max_lambda_1_11));

    beta_0 = (rc12)*pow((rc14)*(CF_12 - CS_12*max_lambda_1_11) - rc14*(CF_14 - CS_14*max_lambda_1_11), 2) +
      (rc16)*pow((rc14)*(CF_12 - CS_12*max_lambda_1_11) - (CF_13 - CS_13*max_lambda_1_11) + (rc14)*(CF_14 -
      CS_14*max_lambda_1_11), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_11 - CS_11*max_lambda_1_11) - 2*(CF_12 - CS_12*max_lambda_1_11) + (rc17)*(CF_13 -
      CS_13*max_lambda_1_11), 2) + (rc16)*pow((rc14)*(CF_11 - CS_11*max_lambda_1_11) - (CF_12 - CS_12*max_lambda_1_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_1_11), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_13 - CS_13*max_lambda_1_11) - (CF_14 - CS_14*max_lambda_1_11) + (rc14)*(CF_15 -
      CS_15*max_lambda_1_11), 2) + (rc12)*pow((rc17)*(CF_13 - CS_13*max_lambda_1_11) - 2*(CF_14 - CS_14*max_lambda_1_11)
      + (rc14)*(CF_15 - CS_15*max_lambda_1_11), 2);

    beta_3 = (rc21)*pow(-(CF_10 - CS_10*max_lambda_1_11) + (rc23)*(CF_11 - CS_11*max_lambda_1_11) - 9*(CF_12 -
      CS_12*max_lambda_1_11) + (rc22)*(CF_13 - CS_13*max_lambda_1_11), 2) + (rc37)*pow(-rc14*(CF_10 -
      CS_10*max_lambda_1_11) + (rc17)*(CF_11 - CS_11*max_lambda_1_11) - rc17*(CF_12 - CS_12*max_lambda_1_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_1_11), 2) + (rc16)*pow(CF_13 - CS_13*max_lambda_1_11 - rc14*(CF_10 -
      CS_10*max_lambda_1_11) + 2*(CF_11 - CS_11*max_lambda_1_11) - rc20*(CF_12 - CS_12*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_12 - CS_12*max_lambda_1_11) + (rc30)*(CF_13 -
      CS_13*max_lambda_1_11) - rc13*(CF_14 - CS_14*max_lambda_1_11)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_11 -
      CS_11*max_lambda_1_11) + (rc30)*(CF_12 - CS_12*max_lambda_1_11) + (rc24)*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_13 - CS_13*max_lambda_1_11) - rc31*(CF_14 - CS_14*max_lambda_1_11) +
      (rc24)*(CF_15 - CS_15*max_lambda_1_11)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_10 - CS_10*max_lambda_1_11) -
      rc35*(CF_11 - CS_11*max_lambda_1_11) + (rc34)*(CF_12 - CS_12*max_lambda_1_11) + (rc33)*(CF_13 -
      CS_13*max_lambda_1_11));

    beta_0 = (rc12)*pow((rc14)*(CF_21 + CS_21*max_lambda_1_22) - rc14*(CF_23 + CS_23*max_lambda_1_22), 2) +
      (rc16)*pow((rc14)*(CF_21 + CS_21*max_lambda_1_22) - (CF_22 + CS_22*max_lambda_1_22) + (rc14)*(CF_23 +
      CS_23*max_lambda_1_22), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_22 + CS_22*max_lambda_1_22) - (CF_23 + CS_23*max_lambda_1_22) + (rc14)*(CF_24 +
      CS_24*max_lambda_1_22), 2) + (rc12)*pow((rc17)*(CF_22 + CS_22*max_lambda_1_22) - 2*(CF_23 + CS_23*max_lambda_1_22)
      + (rc14)*(CF_24 + CS_24*max_lambda_1_22), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_20 + CS_20*max_lambda_1_22) - 2*(CF_21 + CS_21*max_lambda_1_22) + (rc17)*(CF_22 +
      CS_22*max_lambda_1_22), 2) + (rc16)*pow((rc14)*(CF_20 + CS_20*max_lambda_1_22) - (CF_21 + CS_21*max_lambda_1_22) +
      (rc14)*(CF_22 + CS_22*max_lambda_1_22), 2);

    beta_3 = -rc18*(CF_22 + CS_22*max_lambda_1_22) + (rc19)*(CF_23 + CS_23*max_lambda_1_22) - rc19*(CF_24 +
      CS_24*max_lambda_1_22) + (rc18)*(CF_25 + CS_25*max_lambda_1_22) + (rc16)*pow(CF_22 + CS_22*max_lambda_1_22 -
      rc20*(CF_23 + CS_23*max_lambda_1_22) + 2*(CF_24 + CS_24*max_lambda_1_22) - rc14*(CF_25 + CS_25*max_lambda_1_22),
      2) + (rc21)*pow(CF_25 + CS_25*max_lambda_1_22 - rc22*(CF_22 + CS_22*max_lambda_1_22) + 9*(CF_23 +
      CS_23*max_lambda_1_22) - rc23*(CF_24 + CS_24*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_21 + CS_21*max_lambda_1_22) + (rc30)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc24)*(CF_23 + CS_23*max_lambda_1_22)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc30)*(CF_23 + CS_23*max_lambda_1_22) - rc13*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_20 + CS_20*max_lambda_1_22) - rc31*(CF_21 + CS_21*max_lambda_1_22) +
      (rc32)*(CF_22 + CS_22*max_lambda_1_22)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_22 + CS_22*max_lambda_1_22) +
      (rc34)*(CF_23 + CS_23*max_lambda_1_22) - rc35*(CF_24 + CS_24*max_lambda_1_22) + (rc36)*(CF_25 +
      CS_25*max_lambda_1_22));

    beta_0 = (rc12)*pow((rc14)*(CF_22 - CS_22*max_lambda_1_22) - rc14*(CF_24 - CS_24*max_lambda_1_22), 2) +
      (rc16)*pow((rc14)*(CF_22 - CS_22*max_lambda_1_22) - (CF_23 - CS_23*max_lambda_1_22) + (rc14)*(CF_24 -
      CS_24*max_lambda_1_22), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_21 - CS_21*max_lambda_1_22) - 2*(CF_22 - CS_22*max_lambda_1_22) + (rc17)*(CF_23 -
      CS_23*max_lambda_1_22), 2) + (rc16)*pow((rc14)*(CF_21 - CS_21*max_lambda_1_22) - (CF_22 - CS_22*max_lambda_1_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_1_22), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_23 - CS_23*max_lambda_1_22) - (CF_24 - CS_24*max_lambda_1_22) + (rc14)*(CF_25 -
      CS_25*max_lambda_1_22), 2) + (rc12)*pow((rc17)*(CF_23 - CS_23*max_lambda_1_22) - 2*(CF_24 - CS_24*max_lambda_1_22)
      + (rc14)*(CF_25 - CS_25*max_lambda_1_22), 2);

    beta_3 = (rc21)*pow(-(CF_20 - CS_20*max_lambda_1_22) + (rc23)*(CF_21 - CS_21*max_lambda_1_22) - 9*(CF_22 -
      CS_22*max_lambda_1_22) + (rc22)*(CF_23 - CS_23*max_lambda_1_22), 2) + (rc37)*pow(-rc14*(CF_20 -
      CS_20*max_lambda_1_22) + (rc17)*(CF_21 - CS_21*max_lambda_1_22) - rc17*(CF_22 - CS_22*max_lambda_1_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_1_22), 2) + (rc16)*pow(CF_23 - CS_23*max_lambda_1_22 - rc14*(CF_20 -
      CS_20*max_lambda_1_22) + 2*(CF_21 - CS_21*max_lambda_1_22) - rc20*(CF_22 - CS_22*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_22 - CS_22*max_lambda_1_22) + (rc30)*(CF_23 -
      CS_23*max_lambda_1_22) - rc13*(CF_24 - CS_24*max_lambda_1_22)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_21 -
      CS_21*max_lambda_1_22) + (rc30)*(CF_22 - CS_22*max_lambda_1_22) + (rc24)*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_23 - CS_23*max_lambda_1_22) - rc31*(CF_24 - CS_24*max_lambda_1_22) +
      (rc24)*(CF_25 - CS_25*max_lambda_1_22)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_20 - CS_20*max_lambda_1_22) -
      rc35*(CF_21 - CS_21*max_lambda_1_22) + (rc34)*(CF_22 - CS_22*max_lambda_1_22) + (rc33)*(CF_23 -
      CS_23*max_lambda_1_22));

    beta_0 = (rc12)*pow((rc14)*(CF_31 + CS_31*max_lambda_1_33) - rc14*(CF_33 + CS_33*max_lambda_1_33), 2) +
      (rc16)*pow((rc14)*(CF_31 + CS_31*max_lambda_1_33) - (CF_32 + CS_32*max_lambda_1_33) + (rc14)*(CF_33 +
      CS_33*max_lambda_1_33), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_32 + CS_32*max_lambda_1_33) - (CF_33 + CS_33*max_lambda_1_33) + (rc14)*(CF_34 +
      CS_34*max_lambda_1_33), 2) + (rc12)*pow((rc17)*(CF_32 + CS_32*max_lambda_1_33) - 2*(CF_33 + CS_33*max_lambda_1_33)
      + (rc14)*(CF_34 + CS_34*max_lambda_1_33), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_30 + CS_30*max_lambda_1_33) - 2*(CF_31 + CS_31*max_lambda_1_33) + (rc17)*(CF_32 +
      CS_32*max_lambda_1_33), 2) + (rc16)*pow((rc14)*(CF_30 + CS_30*max_lambda_1_33) - (CF_31 + CS_31*max_lambda_1_33) +
      (rc14)*(CF_32 + CS_32*max_lambda_1_33), 2);

    beta_3 = -rc18*(CF_32 + CS_32*max_lambda_1_33) + (rc19)*(CF_33 + CS_33*max_lambda_1_33) - rc19*(CF_34 +
      CS_34*max_lambda_1_33) + (rc18)*(CF_35 + CS_35*max_lambda_1_33) + (rc16)*pow(CF_32 + CS_32*max_lambda_1_33 -
      rc20*(CF_33 + CS_33*max_lambda_1_33) + 2*(CF_34 + CS_34*max_lambda_1_33) - rc14*(CF_35 + CS_35*max_lambda_1_33),
      2) + (rc21)*pow(CF_35 + CS_35*max_lambda_1_33 - rc22*(CF_32 + CS_32*max_lambda_1_33) + 9*(CF_33 +
      CS_33*max_lambda_1_33) - rc23*(CF_34 + CS_34*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_31 + CS_31*max_lambda_1_33) + (rc30)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc24)*(CF_33 + CS_33*max_lambda_1_33)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc30)*(CF_33 + CS_33*max_lambda_1_33) - rc13*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_30 + CS_30*max_lambda_1_33) - rc31*(CF_31 + CS_31*max_lambda_1_33) +
      (rc32)*(CF_32 + CS_32*max_lambda_1_33)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_32 + CS_32*max_lambda_1_33) +
      (rc34)*(CF_33 + CS_33*max_lambda_1_33) - rc35*(CF_34 + CS_34*max_lambda_1_33) + (rc36)*(CF_35 +
      CS_35*max_lambda_1_33));

    beta_0 = (rc12)*pow((rc14)*(CF_32 - CS_32*max_lambda_1_33) - rc14*(CF_34 - CS_34*max_lambda_1_33), 2) +
      (rc16)*pow((rc14)*(CF_32 - CS_32*max_lambda_1_33) - (CF_33 - CS_33*max_lambda_1_33) + (rc14)*(CF_34 -
      CS_34*max_lambda_1_33), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_31 - CS_31*max_lambda_1_33) - 2*(CF_32 - CS_32*max_lambda_1_33) + (rc17)*(CF_33 -
      CS_33*max_lambda_1_33), 2) + (rc16)*pow((rc14)*(CF_31 - CS_31*max_lambda_1_33) - (CF_32 - CS_32*max_lambda_1_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_1_33), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_33 - CS_33*max_lambda_1_33) - (CF_34 - CS_34*max_lambda_1_33) + (rc14)*(CF_35 -
      CS_35*max_lambda_1_33), 2) + (rc12)*pow((rc17)*(CF_33 - CS_33*max_lambda_1_33) - 2*(CF_34 - CS_34*max_lambda_1_33)
      + (rc14)*(CF_35 - CS_35*max_lambda_1_33), 2);

    beta_3 = (rc21)*pow(-(CF_30 - CS_30*max_lambda_1_33) + (rc23)*(CF_31 - CS_31*max_lambda_1_33) - 9*(CF_32 -
      CS_32*max_lambda_1_33) + (rc22)*(CF_33 - CS_33*max_lambda_1_33), 2) + (rc37)*pow(-rc14*(CF_30 -
      CS_30*max_lambda_1_33) + (rc17)*(CF_31 - CS_31*max_lambda_1_33) - rc17*(CF_32 - CS_32*max_lambda_1_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_1_33), 2) + (rc16)*pow(CF_33 - CS_33*max_lambda_1_33 - rc14*(CF_30 -
      CS_30*max_lambda_1_33) + 2*(CF_31 - CS_31*max_lambda_1_33) - rc20*(CF_32 - CS_32*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_32 - CS_32*max_lambda_1_33) + (rc30)*(CF_33 -
      CS_33*max_lambda_1_33) - rc13*(CF_34 - CS_34*max_lambda_1_33)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_31 -
      CS_31*max_lambda_1_33) + (rc30)*(CF_32 - CS_32*max_lambda_1_33) + (rc24)*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_33 - CS_33*max_lambda_1_33) - rc31*(CF_34 - CS_34*max_lambda_1_33) +
      (rc24)*(CF_35 - CS_35*max_lambda_1_33)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_30 - CS_30*max_lambda_1_33) -
      rc35*(CF_31 - CS_31*max_lambda_1_33) + (rc34)*(CF_32 - CS_32*max_lambda_1_33) + (rc33)*(CF_33 -
      CS_33*max_lambda_1_33));

    beta_0 = (rc12)*pow((rc14)*(CF_41 + CS_41*max_lambda_1_44) - rc14*(CF_43 + CS_43*max_lambda_1_44), 2) +
      (rc16)*pow((rc14)*(CF_41 + CS_41*max_lambda_1_44) - (CF_42 + CS_42*max_lambda_1_44) + (rc14)*(CF_43 +
      CS_43*max_lambda_1_44), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_42 + CS_42*max_lambda_1_44) - (CF_43 + CS_43*max_lambda_1_44) + (rc14)*(CF_44 +
      CS_44*max_lambda_1_44), 2) + (rc12)*pow((rc17)*(CF_42 + CS_42*max_lambda_1_44) - 2*(CF_43 + CS_43*max_lambda_1_44)
      + (rc14)*(CF_44 + CS_44*max_lambda_1_44), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_40 + CS_40*max_lambda_1_44) - 2*(CF_41 + CS_41*max_lambda_1_44) + (rc17)*(CF_42 +
      CS_42*max_lambda_1_44), 2) + (rc16)*pow((rc14)*(CF_40 + CS_40*max_lambda_1_44) - (CF_41 + CS_41*max_lambda_1_44) +
      (rc14)*(CF_42 + CS_42*max_lambda_1_44), 2);

    beta_3 = -rc18*(CF_42 + CS_42*max_lambda_1_44) + (rc19)*(CF_43 + CS_43*max_lambda_1_44) - rc19*(CF_44 +
      CS_44*max_lambda_1_44) + (rc18)*(CF_45 + CS_45*max_lambda_1_44) + (rc16)*pow(CF_42 + CS_42*max_lambda_1_44 -
      rc20*(CF_43 + CS_43*max_lambda_1_44) + 2*(CF_44 + CS_44*max_lambda_1_44) - rc14*(CF_45 + CS_45*max_lambda_1_44),
      2) + (rc21)*pow(CF_45 + CS_45*max_lambda_1_44 - rc22*(CF_42 + CS_42*max_lambda_1_44) + 9*(CF_43 +
      CS_43*max_lambda_1_44) - rc23*(CF_44 + CS_44*max_lambda_1_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_41 + CS_41*max_lambda_1_44) + (rc30)*(CF_42 +
      CS_42*max_lambda_1_44) + (rc24)*(CF_43 + CS_43*max_lambda_1_44)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_42 +
      CS_42*max_lambda_1_44) + (rc30)*(CF_43 + CS_43*max_lambda_1_44) - rc13*(CF_44 + CS_44*max_lambda_1_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_40 + CS_40*max_lambda_1_44) - rc31*(CF_41 + CS_41*max_lambda_1_44) +
      (rc32)*(CF_42 + CS_42*max_lambda_1_44)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_42 + CS_42*max_lambda_1_44) +
      (rc34)*(CF_43 + CS_43*max_lambda_1_44) - rc35*(CF_44 + CS_44*max_lambda_1_44) + (rc36)*(CF_45 +
      CS_45*max_lambda_1_44));

    beta_0 = (rc12)*pow((rc14)*(CF_42 - CS_42*max_lambda_1_44) - rc14*(CF_44 - CS_44*max_lambda_1_44), 2) +
      (rc16)*pow((rc14)*(CF_42 - CS_42*max_lambda_1_44) - (CF_43 - CS_43*max_lambda_1_44) + (rc14)*(CF_44 -
      CS_44*max_lambda_1_44), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_41 - CS_41*max_lambda_1_44) - 2*(CF_42 - CS_42*max_lambda_1_44) + (rc17)*(CF_43 -
      CS_43*max_lambda_1_44), 2) + (rc16)*pow((rc14)*(CF_41 - CS_41*max_lambda_1_44) - (CF_42 - CS_42*max_lambda_1_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_1_44), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_43 - CS_43*max_lambda_1_44) - (CF_44 - CS_44*max_lambda_1_44) + (rc14)*(CF_45 -
      CS_45*max_lambda_1_44), 2) + (rc12)*pow((rc17)*(CF_43 - CS_43*max_lambda_1_44) - 2*(CF_44 - CS_44*max_lambda_1_44)
      + (rc14)*(CF_45 - CS_45*max_lambda_1_44), 2);

    beta_3 = (rc21)*pow(-(CF_40 - CS_40*max_lambda_1_44) + (rc23)*(CF_41 - CS_41*max_lambda_1_44) - 9*(CF_42 -
      CS_42*max_lambda_1_44) + (rc22)*(CF_43 - CS_43*max_lambda_1_44), 2) + (rc37)*pow(-rc14*(CF_40 -
      CS_40*max_lambda_1_44) + (rc17)*(CF_41 - CS_41*max_lambda_1_44) - rc17*(CF_42 - CS_42*max_lambda_1_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_1_44), 2) + (rc16)*pow(CF_43 - CS_43*max_lambda_1_44 - rc14*(CF_40 -
      CS_40*max_lambda_1_44) + 2*(CF_41 - CS_41*max_lambda_1_44) - rc20*(CF_42 - CS_42*max_lambda_1_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_42 - CS_42*max_lambda_1_44) + (rc30)*(CF_43 -
      CS_43*max_lambda_1_44) - rc13*(CF_44 - CS_44*max_lambda_1_44)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_41 -
      CS_41*max_lambda_1_44) + (rc30)*(CF_42 - CS_42*max_lambda_1_44) + (rc24)*(CF_43 - CS_43*max_lambda_1_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_43 - CS_43*max_lambda_1_44) - rc31*(CF_44 - CS_44*max_lambda_1_44) +
      (rc24)*(CF_45 - CS_45*max_lambda_1_44)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_40 - CS_40*max_lambda_1_44) -
      rc35*(CF_41 - CS_41*max_lambda_1_44) + (rc34)*(CF_42 - CS_42*max_lambda_1_44) + (rc33)*(CF_43 -
      CS_43*max_lambda_1_44));

    wk5_B0[OPS_ACC14(0,0,0)] = 0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_4*inv_AVG_a + Recon_1;

    wk6_B0[OPS_ACC13(0,0,0)] = 0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_4*inv_AVG_a + AVG_1_rho*Recon_2 + AVG_1_u0*Recon_1;

    wk7_B0[OPS_ACC11(0,0,0)] = 0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(AVG_1_a + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_4*inv_AVG_a*(-AVG_1_a + AVG_1_u1) + AVG_1_u1*Recon_1;

    wk8_B0[OPS_ACC12(0,0,0)] = 0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_4*inv_AVG_a - AVG_1_rho*Recon_0 + AVG_1_u2*Recon_1;

    wk9_B0[OPS_ACC15(0,0,0)] = AVG_1_rho*AVG_1_u0*Recon_2 - AVG_1_rho*AVG_1_u2*Recon_0 +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2) +
      pow(AVG_1_u2, 2)) + pow(AVG_1_a, 2)) + AVG_1_a*AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_4*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2) +
      pow(AVG_1_u2, 2)) + pow(AVG_1_a, 2)) - AVG_1_a*AVG_1_u1) + Recon_1*((rc14)*pow(AVG_1_u0, 2) + (rc14)*pow(AVG_1_u1,
      2) + (rc14)*pow(AVG_1_u2, 2));

}

 void opensbliblock00Kernel006(const double *u0_B0, const double *rhou1_B0, const double *a_B0, const double *p_B0,
const double *rhoE_B0, const double *rhou2_B0, const double *u1_B0, const double *u2_B0, const double *rho_B0, const
double *rhou0_B0, const double *theta_B0, double *wk13_B0, double *wk11_B0, double *wk12_B0, double *wk14_B0, double
*wk10_B0)
{
   double Recon_4 = 0.0;
   double CS_00 = 0.0;
   double CS_03 = 0.0;
   double max_lambda_2_44 = 0.0;
   double TENO_CT = 0.0;
   double CF_03 = 0.0;
   double CS_30 = 0.0;
   double delta_0 = 0.0;
   double CF_12 = 0.0;
   double Recon_3 = 0.0;
   double max_lambda_2_22 = 0.0;
   double CS_25 = 0.0;
   double max_lambda_2_00 = 0.0;
   double CS_32 = 0.0;
   double CF_14 = 0.0;
   double alpha_3 = 0.0;
   double delta_3 = 0.0;
   double delta_2 = 0.0;
   double CS_14 = 0.0;
   double CS_45 = 0.0;
   double AVG_2_2_LEV_41 = 0.0;
   double AVG_2_2_LEV_10 = 0.0;
   double AVG_2_2_LEV_44 = 0.0;
   double CS_05 = 0.0;
   double CF_01 = 0.0;
   double CF_45 = 0.0;
   double CS_12 = 0.0;
   double beta_3 = 0.0;
   double alpha_2 = 0.0;
   double CF_02 = 0.0;
   double CS_01 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_2_2_LEV_31 = 0.0;
   double CS_11 = 0.0;
   double CF_42 = 0.0;
   double CF_11 = 0.0;
   double CS_34 = 0.0;
   double CS_10 = 0.0;
   double CF_34 = 0.0;
   double CS_43 = 0.0;
   double CS_21 = 0.0;
   double CF_32 = 0.0;
   double AVG_2_a = 0.0;
   double CF_04 = 0.0;
   double CS_42 = 0.0;
   double inv_omega_sum = 0.0;
   double AVG_2_2_LEV_24 = 0.0;
   double alpha_1 = 0.0;
   double AVG_2_2_LEV_11 = 0.0;
   double AVG_2_2_LEV_02 = 0.0;
   double CS_24 = 0.0;
   double AVG_2_2_LEV_23 = 0.0;
   double CF_41 = 0.0;
   double CS_35 = 0.0;
   double AVG_2_u1 = 0.0;
   double max_lambda_2_33 = 0.0;
   double CF_44 = 0.0;
   double CF_40 = 0.0;
   double CS_31 = 0.0;
   double CF_00 = 0.0;
   double Recon_0 = 0.0;
   double CF_23 = 0.0;
   double AVG_2_rho = 0.0;
   double AVG_2_2_LEV_21 = 0.0;
   double CF_30 = 0.0;
   double CS_23 = 0.0;
   double CS_44 = 0.0;
   double alpha_0 = 0.0;
   double AVG_2_2_LEV_32 = 0.0;
   double AVG_2_2_LEV_40 = 0.0;
   double CF_13 = 0.0;
   double CS_15 = 0.0;
   double beta_1 = 0.0;
   double CS_13 = 0.0;
   double Recon_2 = 0.0;
   double CF_24 = 0.0;
   double CF_33 = 0.0;
   double Recon_1 = 0.0;
   double CF_22 = 0.0;
   double CS_22 = 0.0;
   double AVG_2_u0 = 0.0;
   double AVG_2_2_LEV_33 = 0.0;
   double delta_1 = 0.0;
   double AVG_2_2_LEV_20 = 0.0;
   double AVG_2_2_LEV_42 = 0.0;
   double AVG_2_2_LEV_43 = 0.0;
   double CF_21 = 0.0;
   double CF_31 = 0.0;
   double AVG_2_2_LEV_00 = 0.0;
   double max_lambda_2_11 = 0.0;
   double beta_2 = 0.0;
   double CS_41 = 0.0;
   double CF_25 = 0.0;
   double CF_43 = 0.0;
   double CS_02 = 0.0;
   double inv_AVG_rho = 0.0;
   double AVG_2_2_LEV_22 = 0.0;
   double CS_04 = 0.0;
   double CF_10 = 0.0;
   double AVG_2_u2 = 0.0;
   double CS_20 = 0.0;
   double CS_40 = 0.0;
   double AVG_2_2_LEV_30 = 0.0;
   double CF_20 = 0.0;
   double AVG_2_2_LEV_34 = 0.0;
   double CF_05 = 0.0;
   double CF_15 = 0.0;
   double CS_33 = 0.0;
   double inv_alpha_sum = 0.0;
   double CF_35 = 0.0;
   double beta_0 = 0.0;
   double AVG_2_inv_rho = 0.0;
   AVG_2_rho = sqrt(rho_B0[OPS_ACC8(0,0,0)]*rho_B0[OPS_ACC8(0,0,1)]);

   AVG_2_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC8(0,0,1)]) + sqrt(rho_B0[OPS_ACC8(0,0,0)]));

    AVG_2_u0 = AVG_2_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,0,1)])*u0_B0[OPS_ACC0(0,0,1)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u0_B0[OPS_ACC0(0,0,0)]);

    AVG_2_u1 = AVG_2_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,0,0)])*u1_B0[OPS_ACC6(0,0,0)] +
      sqrt(rho_B0[OPS_ACC8(0,0,1)])*u1_B0[OPS_ACC6(0,0,1)]);

    AVG_2_u2 = AVG_2_inv_rho*(sqrt(rho_B0[OPS_ACC8(0,0,1)])*u2_B0[OPS_ACC7(0,0,1)] +
      sqrt(rho_B0[OPS_ACC8(0,0,0)])*u2_B0[OPS_ACC7(0,0,0)]);

    AVG_2_a = sqrt(gamma_m1*(AVG_2_inv_rho*((p_B0[OPS_ACC3(0,0,1)] +
      rhoE_B0[OPS_ACC4(0,0,1)])/sqrt(rho_B0[OPS_ACC8(0,0,1)]) + (p_B0[OPS_ACC3(0,0,0)] +
      rhoE_B0[OPS_ACC4(0,0,0)])/sqrt(rho_B0[OPS_ACC8(0,0,0)])) - rc14*(pow(AVG_2_u0, 2) + pow(AVG_2_u1, 2) +
      pow(AVG_2_u2, 2))));

   inv_AVG_a = 1.0/AVG_2_a;

   inv_AVG_rho = 1.0/AVG_2_rho;

   AVG_2_2_LEV_00 = -AVG_2_u1*inv_AVG_rho;

   AVG_2_2_LEV_02 = inv_AVG_rho;

   AVG_2_2_LEV_10 = AVG_2_u0*inv_AVG_rho;

   AVG_2_2_LEV_11 = -inv_AVG_rho;

    AVG_2_2_LEV_20 = -rc14*(gama*pow(AVG_2_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_2_u1, 2)*pow(inv_AVG_a, 2) +
      gama*pow(AVG_2_u2, 2)*pow(inv_AVG_a, 2) - pow(AVG_2_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_2_u1, 2)*pow(inv_AVG_a, 2)
      - pow(AVG_2_u2, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_2_2_LEV_21 = gamma_m1*AVG_2_u0*pow(inv_AVG_a, 2);

   AVG_2_2_LEV_22 = gamma_m1*AVG_2_u1*pow(inv_AVG_a, 2);

   AVG_2_2_LEV_23 = gamma_m1*AVG_2_u2*pow(inv_AVG_a, 2);

   AVG_2_2_LEV_24 = -gamma_m1*pow(inv_AVG_a, 2);

    AVG_2_2_LEV_30 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_2_u0, 2) - gama*pow(AVG_2_u1, 2) -
      gama*pow(AVG_2_u2, 2) + 2*AVG_2_a*AVG_2_u2 + pow(AVG_2_u0, 2) + pow(AVG_2_u1, 2) + pow(AVG_2_u2, 2));

   AVG_2_2_LEV_31 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_32 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_33 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_2_u2 + AVG_2_a + AVG_2_u2);

   AVG_2_2_LEV_34 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_2_2_LEV_40 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_2_u0, 2) + gama*pow(AVG_2_u1, 2) +
      gama*pow(AVG_2_u2, 2) + 2*AVG_2_a*AVG_2_u2 - pow(AVG_2_u0, 2) - pow(AVG_2_u1, 2) - pow(AVG_2_u2, 2));

   AVG_2_2_LEV_41 = -0.707106781186547*gamma_m1*AVG_2_u0*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_42 = -0.707106781186547*gamma_m1*AVG_2_u1*inv_AVG_a*inv_AVG_rho;

   AVG_2_2_LEV_43 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_2_u2 + AVG_2_a - AVG_2_u2);

   AVG_2_2_LEV_44 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)];

    CF_10 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)];

    CF_20 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,-2)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)];

    CF_30 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,-2)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)];

    CF_40 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,-2)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,-2)]*u2_B0[OPS_ACC7(0,0,-2)];

    CF_01 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)];

    CF_11 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)];

    CF_21 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,-1)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)];

    CF_31 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,-1)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)];

    CF_41 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,-1)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,-1)]*u2_B0[OPS_ACC7(0,0,-1)];

   CF_02 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,0)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)];

   CF_12 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,0)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)];

    CF_22 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,0)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,0)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)];

    CF_32 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,0)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,0)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)];

    CF_42 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,0)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,0)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)]*u2_B0[OPS_ACC7(0,0,0)];

   CF_03 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,1)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)];

   CF_13 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,1)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)];

    CF_23 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,1)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,1)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)];

    CF_33 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,1)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,1)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)];

    CF_43 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,1)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,1)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,1)]*u2_B0[OPS_ACC7(0,0,1)];

   CF_04 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,2)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)];

   CF_14 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,2)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)];

    CF_24 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,2)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,2)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)];

    CF_34 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,2)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,2)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)];

    CF_44 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,2)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,2)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,2)]*u2_B0[OPS_ACC7(0,0,2)];

   CF_05 = AVG_2_2_LEV_00*rhou2_B0[OPS_ACC5(0,0,3)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)];

   CF_15 = AVG_2_2_LEV_10*rhou2_B0[OPS_ACC5(0,0,3)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)];

    CF_25 = AVG_2_2_LEV_20*rhou2_B0[OPS_ACC5(0,0,3)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] + AVG_2_2_LEV_23*p_B0[OPS_ACC3(0,0,3)] +
      AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_24*p_B0[OPS_ACC3(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)];

    CF_35 = AVG_2_2_LEV_30*rhou2_B0[OPS_ACC5(0,0,3)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] + AVG_2_2_LEV_33*p_B0[OPS_ACC3(0,0,3)] +
      AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_34*p_B0[OPS_ACC3(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)];

    CF_45 = AVG_2_2_LEV_40*rhou2_B0[OPS_ACC5(0,0,3)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] + AVG_2_2_LEV_43*p_B0[OPS_ACC3(0,0,3)] +
      AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_44*p_B0[OPS_ACC3(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,3)]*u2_B0[OPS_ACC7(0,0,3)];

   CS_00 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,-2)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,-2)];

   CS_01 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,-1)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,-1)];

   CS_02 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,0)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,0)];

   CS_03 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,1)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,1)];

   CS_04 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,2)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,2)];

   CS_05 = AVG_2_2_LEV_00*rho_B0[OPS_ACC8(0,0,3)] + AVG_2_2_LEV_02*rhou1_B0[OPS_ACC1(0,0,3)];

   CS_10 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,-2)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,-2)];

   CS_11 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,-1)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,-1)];

   CS_12 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,0)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,0)];

   CS_13 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,1)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,1)];

   CS_14 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,2)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,2)];

   CS_15 = AVG_2_2_LEV_10*rho_B0[OPS_ACC8(0,0,3)] + AVG_2_2_LEV_11*rhou0_B0[OPS_ACC9(0,0,3)];

    CS_20 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,-2)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,-2)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,-2)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,-2)];

    CS_21 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,-1)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,-1)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,-1)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,-1)];

    CS_22 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,0)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_23 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,1)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,1)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,1)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,1)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,1)];

    CS_24 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,2)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,2)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,2)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,2)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,2)];

    CS_25 = AVG_2_2_LEV_20*rho_B0[OPS_ACC8(0,0,3)] + AVG_2_2_LEV_21*rhou0_B0[OPS_ACC9(0,0,3)] +
      AVG_2_2_LEV_22*rhou1_B0[OPS_ACC1(0,0,3)] + AVG_2_2_LEV_23*rhou2_B0[OPS_ACC5(0,0,3)] +
      AVG_2_2_LEV_24*rhoE_B0[OPS_ACC4(0,0,3)];

    CS_30 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,-2)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,-2)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,-2)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,-2)];

    CS_31 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,-1)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,-1)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,-1)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,-1)];

    CS_32 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,0)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_33 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,1)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,1)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,1)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,1)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,1)];

    CS_34 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,2)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,2)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,2)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,2)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,2)];

    CS_35 = AVG_2_2_LEV_30*rho_B0[OPS_ACC8(0,0,3)] + AVG_2_2_LEV_31*rhou0_B0[OPS_ACC9(0,0,3)] +
      AVG_2_2_LEV_32*rhou1_B0[OPS_ACC1(0,0,3)] + AVG_2_2_LEV_33*rhou2_B0[OPS_ACC5(0,0,3)] +
      AVG_2_2_LEV_34*rhoE_B0[OPS_ACC4(0,0,3)];

    CS_40 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,-2)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,-2)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,-2)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,-2)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,-2)];

    CS_41 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,-1)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,-1)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,-1)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,-1)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,-1)];

    CS_42 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,0)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,0)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,0)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,0)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,0)];

    CS_43 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,1)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,1)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,1)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,1)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,1)];

    CS_44 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,2)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,2)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,2)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,2)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,2)];

    CS_45 = AVG_2_2_LEV_40*rho_B0[OPS_ACC8(0,0,3)] + AVG_2_2_LEV_41*rhou0_B0[OPS_ACC9(0,0,3)] +
      AVG_2_2_LEV_42*rhou1_B0[OPS_ACC1(0,0,3)] + AVG_2_2_LEV_43*rhou2_B0[OPS_ACC5(0,0,3)] +
      AVG_2_2_LEV_44*rhoE_B0[OPS_ACC4(0,0,3)];

    max_lambda_2_00 = fmax(fabs(u2_B0[OPS_ACC7(0,0,0)]), fmax(fabs(u2_B0[OPS_ACC7(0,0,-1)]),
      fmax(fabs(u2_B0[OPS_ACC7(0,0,3)]), fmax(fabs(u2_B0[OPS_ACC7(0,0,2)]), fmax(fabs(u2_B0[OPS_ACC7(0,0,1)]),
      fabs(u2_B0[OPS_ACC7(0,0,-2)]))))));

   max_lambda_2_11 = max_lambda_2_00;

   max_lambda_2_22 = max_lambda_2_00;

    max_lambda_2_33 = fmax(fabs(a_B0[OPS_ACC2(0,0,2)] + u2_B0[OPS_ACC7(0,0,2)]), fmax(fabs(a_B0[OPS_ACC2(0,0,0)] +
      u2_B0[OPS_ACC7(0,0,0)]), fmax(fabs(a_B0[OPS_ACC2(0,0,-1)] + u2_B0[OPS_ACC7(0,0,-1)]),
      fmax(fabs(a_B0[OPS_ACC2(0,0,-2)] + u2_B0[OPS_ACC7(0,0,-2)]), fmax(fabs(a_B0[OPS_ACC2(0,0,1)] +
      u2_B0[OPS_ACC7(0,0,1)]), fabs(a_B0[OPS_ACC2(0,0,3)] + u2_B0[OPS_ACC7(0,0,3)]))))));

    max_lambda_2_44 = fmax(fabs(a_B0[OPS_ACC2(0,0,2)] - u2_B0[OPS_ACC7(0,0,2)]), fmax(fabs(a_B0[OPS_ACC2(0,0,-2)] -
      u2_B0[OPS_ACC7(0,0,-2)]), fmax(fabs(a_B0[OPS_ACC2(0,0,0)] - u2_B0[OPS_ACC7(0,0,0)]),
      fmax(fabs(a_B0[OPS_ACC2(0,0,1)] - u2_B0[OPS_ACC7(0,0,1)]), fmax(fabs(a_B0[OPS_ACC2(0,0,-1)] -
      u2_B0[OPS_ACC7(0,0,-1)]), fabs(a_B0[OPS_ACC2(0,0,3)] - u2_B0[OPS_ACC7(0,0,3)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC10(0,0,0)] + 1, 4)*(4*theta_B0[OPS_ACC10(0,0,0)]
      + 1) + 1)));

    beta_0 = (rc12)*pow((rc14)*(CF_01 + CS_01*max_lambda_2_00) - rc14*(CF_03 + CS_03*max_lambda_2_00), 2) +
      (rc16)*pow((rc14)*(CF_01 + CS_01*max_lambda_2_00) - (CF_02 + CS_02*max_lambda_2_00) + (rc14)*(CF_03 +
      CS_03*max_lambda_2_00), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_02 + CS_02*max_lambda_2_00) - (CF_03 + CS_03*max_lambda_2_00) + (rc14)*(CF_04 +
      CS_04*max_lambda_2_00), 2) + (rc12)*pow((rc17)*(CF_02 + CS_02*max_lambda_2_00) - 2*(CF_03 + CS_03*max_lambda_2_00)
      + (rc14)*(CF_04 + CS_04*max_lambda_2_00), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_00 + CS_00*max_lambda_2_00) - 2*(CF_01 + CS_01*max_lambda_2_00) + (rc17)*(CF_02 +
      CS_02*max_lambda_2_00), 2) + (rc16)*pow((rc14)*(CF_00 + CS_00*max_lambda_2_00) - (CF_01 + CS_01*max_lambda_2_00) +
      (rc14)*(CF_02 + CS_02*max_lambda_2_00), 2);

    beta_3 = -rc18*(CF_02 + CS_02*max_lambda_2_00) + (rc19)*(CF_03 + CS_03*max_lambda_2_00) - rc19*(CF_04 +
      CS_04*max_lambda_2_00) + (rc18)*(CF_05 + CS_05*max_lambda_2_00) + (rc16)*pow(CF_02 + CS_02*max_lambda_2_00 -
      rc20*(CF_03 + CS_03*max_lambda_2_00) + 2*(CF_04 + CS_04*max_lambda_2_00) - rc14*(CF_05 + CS_05*max_lambda_2_00),
      2) + (rc21)*pow(CF_05 + CS_05*max_lambda_2_00 - rc22*(CF_02 + CS_02*max_lambda_2_00) + 9*(CF_03 +
      CS_03*max_lambda_2_00) - rc23*(CF_04 + CS_04*max_lambda_2_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_01 + CS_01*max_lambda_2_00) + (rc30)*(CF_02 +
      CS_02*max_lambda_2_00) + (rc24)*(CF_03 + CS_03*max_lambda_2_00)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_02 +
      CS_02*max_lambda_2_00) + (rc30)*(CF_03 + CS_03*max_lambda_2_00) - rc13*(CF_04 + CS_04*max_lambda_2_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_00 + CS_00*max_lambda_2_00) - rc31*(CF_01 + CS_01*max_lambda_2_00) +
      (rc32)*(CF_02 + CS_02*max_lambda_2_00)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_02 + CS_02*max_lambda_2_00) +
      (rc34)*(CF_03 + CS_03*max_lambda_2_00) - rc35*(CF_04 + CS_04*max_lambda_2_00) + (rc36)*(CF_05 +
      CS_05*max_lambda_2_00));

    beta_0 = (rc12)*pow((rc14)*(CF_02 - CS_02*max_lambda_2_00) - rc14*(CF_04 - CS_04*max_lambda_2_00), 2) +
      (rc16)*pow((rc14)*(CF_02 - CS_02*max_lambda_2_00) - (CF_03 - CS_03*max_lambda_2_00) + (rc14)*(CF_04 -
      CS_04*max_lambda_2_00), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_01 - CS_01*max_lambda_2_00) - 2*(CF_02 - CS_02*max_lambda_2_00) + (rc17)*(CF_03 -
      CS_03*max_lambda_2_00), 2) + (rc16)*pow((rc14)*(CF_01 - CS_01*max_lambda_2_00) - (CF_02 - CS_02*max_lambda_2_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_2_00), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_03 - CS_03*max_lambda_2_00) - (CF_04 - CS_04*max_lambda_2_00) + (rc14)*(CF_05 -
      CS_05*max_lambda_2_00), 2) + (rc12)*pow((rc17)*(CF_03 - CS_03*max_lambda_2_00) - 2*(CF_04 - CS_04*max_lambda_2_00)
      + (rc14)*(CF_05 - CS_05*max_lambda_2_00), 2);

    beta_3 = (rc21)*pow(-(CF_00 - CS_00*max_lambda_2_00) + (rc23)*(CF_01 - CS_01*max_lambda_2_00) - 9*(CF_02 -
      CS_02*max_lambda_2_00) + (rc22)*(CF_03 - CS_03*max_lambda_2_00), 2) + (rc37)*pow(-rc14*(CF_00 -
      CS_00*max_lambda_2_00) + (rc17)*(CF_01 - CS_01*max_lambda_2_00) - rc17*(CF_02 - CS_02*max_lambda_2_00) +
      (rc14)*(CF_03 - CS_03*max_lambda_2_00), 2) + (rc16)*pow(CF_03 - CS_03*max_lambda_2_00 - rc14*(CF_00 -
      CS_00*max_lambda_2_00) + 2*(CF_01 - CS_01*max_lambda_2_00) - rc20*(CF_02 - CS_02*max_lambda_2_00), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_0 = Recon_0 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_02 - CS_02*max_lambda_2_00) + (rc30)*(CF_03 -
      CS_03*max_lambda_2_00) - rc13*(CF_04 - CS_04*max_lambda_2_00)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_01 -
      CS_01*max_lambda_2_00) + (rc30)*(CF_02 - CS_02*max_lambda_2_00) + (rc24)*(CF_03 - CS_03*max_lambda_2_00)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_03 - CS_03*max_lambda_2_00) - rc31*(CF_04 - CS_04*max_lambda_2_00) +
      (rc24)*(CF_05 - CS_05*max_lambda_2_00)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_00 - CS_00*max_lambda_2_00) -
      rc35*(CF_01 - CS_01*max_lambda_2_00) + (rc34)*(CF_02 - CS_02*max_lambda_2_00) + (rc33)*(CF_03 -
      CS_03*max_lambda_2_00));

    beta_0 = (rc12)*pow((rc14)*(CF_11 + CS_11*max_lambda_2_11) - rc14*(CF_13 + CS_13*max_lambda_2_11), 2) +
      (rc16)*pow((rc14)*(CF_11 + CS_11*max_lambda_2_11) - (CF_12 + CS_12*max_lambda_2_11) + (rc14)*(CF_13 +
      CS_13*max_lambda_2_11), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_12 + CS_12*max_lambda_2_11) - (CF_13 + CS_13*max_lambda_2_11) + (rc14)*(CF_14 +
      CS_14*max_lambda_2_11), 2) + (rc12)*pow((rc17)*(CF_12 + CS_12*max_lambda_2_11) - 2*(CF_13 + CS_13*max_lambda_2_11)
      + (rc14)*(CF_14 + CS_14*max_lambda_2_11), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_10 + CS_10*max_lambda_2_11) - 2*(CF_11 + CS_11*max_lambda_2_11) + (rc17)*(CF_12 +
      CS_12*max_lambda_2_11), 2) + (rc16)*pow((rc14)*(CF_10 + CS_10*max_lambda_2_11) - (CF_11 + CS_11*max_lambda_2_11) +
      (rc14)*(CF_12 + CS_12*max_lambda_2_11), 2);

    beta_3 = -rc18*(CF_12 + CS_12*max_lambda_2_11) + (rc19)*(CF_13 + CS_13*max_lambda_2_11) - rc19*(CF_14 +
      CS_14*max_lambda_2_11) + (rc18)*(CF_15 + CS_15*max_lambda_2_11) + (rc16)*pow(CF_12 + CS_12*max_lambda_2_11 -
      rc20*(CF_13 + CS_13*max_lambda_2_11) + 2*(CF_14 + CS_14*max_lambda_2_11) - rc14*(CF_15 + CS_15*max_lambda_2_11),
      2) + (rc21)*pow(CF_15 + CS_15*max_lambda_2_11 - rc22*(CF_12 + CS_12*max_lambda_2_11) + 9*(CF_13 +
      CS_13*max_lambda_2_11) - rc23*(CF_14 + CS_14*max_lambda_2_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_11 + CS_11*max_lambda_2_11) + (rc30)*(CF_12 +
      CS_12*max_lambda_2_11) + (rc24)*(CF_13 + CS_13*max_lambda_2_11)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_12 +
      CS_12*max_lambda_2_11) + (rc30)*(CF_13 + CS_13*max_lambda_2_11) - rc13*(CF_14 + CS_14*max_lambda_2_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_10 + CS_10*max_lambda_2_11) - rc31*(CF_11 + CS_11*max_lambda_2_11) +
      (rc32)*(CF_12 + CS_12*max_lambda_2_11)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_12 + CS_12*max_lambda_2_11) +
      (rc34)*(CF_13 + CS_13*max_lambda_2_11) - rc35*(CF_14 + CS_14*max_lambda_2_11) + (rc36)*(CF_15 +
      CS_15*max_lambda_2_11));

    beta_0 = (rc12)*pow((rc14)*(CF_12 - CS_12*max_lambda_2_11) - rc14*(CF_14 - CS_14*max_lambda_2_11), 2) +
      (rc16)*pow((rc14)*(CF_12 - CS_12*max_lambda_2_11) - (CF_13 - CS_13*max_lambda_2_11) + (rc14)*(CF_14 -
      CS_14*max_lambda_2_11), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_11 - CS_11*max_lambda_2_11) - 2*(CF_12 - CS_12*max_lambda_2_11) + (rc17)*(CF_13 -
      CS_13*max_lambda_2_11), 2) + (rc16)*pow((rc14)*(CF_11 - CS_11*max_lambda_2_11) - (CF_12 - CS_12*max_lambda_2_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_2_11), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_13 - CS_13*max_lambda_2_11) - (CF_14 - CS_14*max_lambda_2_11) + (rc14)*(CF_15 -
      CS_15*max_lambda_2_11), 2) + (rc12)*pow((rc17)*(CF_13 - CS_13*max_lambda_2_11) - 2*(CF_14 - CS_14*max_lambda_2_11)
      + (rc14)*(CF_15 - CS_15*max_lambda_2_11), 2);

    beta_3 = (rc21)*pow(-(CF_10 - CS_10*max_lambda_2_11) + (rc23)*(CF_11 - CS_11*max_lambda_2_11) - 9*(CF_12 -
      CS_12*max_lambda_2_11) + (rc22)*(CF_13 - CS_13*max_lambda_2_11), 2) + (rc37)*pow(-rc14*(CF_10 -
      CS_10*max_lambda_2_11) + (rc17)*(CF_11 - CS_11*max_lambda_2_11) - rc17*(CF_12 - CS_12*max_lambda_2_11) +
      (rc14)*(CF_13 - CS_13*max_lambda_2_11), 2) + (rc16)*pow(CF_13 - CS_13*max_lambda_2_11 - rc14*(CF_10 -
      CS_10*max_lambda_2_11) + 2*(CF_11 - CS_11*max_lambda_2_11) - rc20*(CF_12 - CS_12*max_lambda_2_11), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_1 = Recon_1 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_12 - CS_12*max_lambda_2_11) + (rc30)*(CF_13 -
      CS_13*max_lambda_2_11) - rc13*(CF_14 - CS_14*max_lambda_2_11)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_11 -
      CS_11*max_lambda_2_11) + (rc30)*(CF_12 - CS_12*max_lambda_2_11) + (rc24)*(CF_13 - CS_13*max_lambda_2_11)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_13 - CS_13*max_lambda_2_11) - rc31*(CF_14 - CS_14*max_lambda_2_11) +
      (rc24)*(CF_15 - CS_15*max_lambda_2_11)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_10 - CS_10*max_lambda_2_11) -
      rc35*(CF_11 - CS_11*max_lambda_2_11) + (rc34)*(CF_12 - CS_12*max_lambda_2_11) + (rc33)*(CF_13 -
      CS_13*max_lambda_2_11));

    beta_0 = (rc12)*pow((rc14)*(CF_21 + CS_21*max_lambda_2_22) - rc14*(CF_23 + CS_23*max_lambda_2_22), 2) +
      (rc16)*pow((rc14)*(CF_21 + CS_21*max_lambda_2_22) - (CF_22 + CS_22*max_lambda_2_22) + (rc14)*(CF_23 +
      CS_23*max_lambda_2_22), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_22 + CS_22*max_lambda_2_22) - (CF_23 + CS_23*max_lambda_2_22) + (rc14)*(CF_24 +
      CS_24*max_lambda_2_22), 2) + (rc12)*pow((rc17)*(CF_22 + CS_22*max_lambda_2_22) - 2*(CF_23 + CS_23*max_lambda_2_22)
      + (rc14)*(CF_24 + CS_24*max_lambda_2_22), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_20 + CS_20*max_lambda_2_22) - 2*(CF_21 + CS_21*max_lambda_2_22) + (rc17)*(CF_22 +
      CS_22*max_lambda_2_22), 2) + (rc16)*pow((rc14)*(CF_20 + CS_20*max_lambda_2_22) - (CF_21 + CS_21*max_lambda_2_22) +
      (rc14)*(CF_22 + CS_22*max_lambda_2_22), 2);

    beta_3 = -rc18*(CF_22 + CS_22*max_lambda_2_22) + (rc19)*(CF_23 + CS_23*max_lambda_2_22) - rc19*(CF_24 +
      CS_24*max_lambda_2_22) + (rc18)*(CF_25 + CS_25*max_lambda_2_22) + (rc16)*pow(CF_22 + CS_22*max_lambda_2_22 -
      rc20*(CF_23 + CS_23*max_lambda_2_22) + 2*(CF_24 + CS_24*max_lambda_2_22) - rc14*(CF_25 + CS_25*max_lambda_2_22),
      2) + (rc21)*pow(CF_25 + CS_25*max_lambda_2_22 - rc22*(CF_22 + CS_22*max_lambda_2_22) + 9*(CF_23 +
      CS_23*max_lambda_2_22) - rc23*(CF_24 + CS_24*max_lambda_2_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_21 + CS_21*max_lambda_2_22) + (rc30)*(CF_22 +
      CS_22*max_lambda_2_22) + (rc24)*(CF_23 + CS_23*max_lambda_2_22)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_22 +
      CS_22*max_lambda_2_22) + (rc30)*(CF_23 + CS_23*max_lambda_2_22) - rc13*(CF_24 + CS_24*max_lambda_2_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_20 + CS_20*max_lambda_2_22) - rc31*(CF_21 + CS_21*max_lambda_2_22) +
      (rc32)*(CF_22 + CS_22*max_lambda_2_22)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_22 + CS_22*max_lambda_2_22) +
      (rc34)*(CF_23 + CS_23*max_lambda_2_22) - rc35*(CF_24 + CS_24*max_lambda_2_22) + (rc36)*(CF_25 +
      CS_25*max_lambda_2_22));

    beta_0 = (rc12)*pow((rc14)*(CF_22 - CS_22*max_lambda_2_22) - rc14*(CF_24 - CS_24*max_lambda_2_22), 2) +
      (rc16)*pow((rc14)*(CF_22 - CS_22*max_lambda_2_22) - (CF_23 - CS_23*max_lambda_2_22) + (rc14)*(CF_24 -
      CS_24*max_lambda_2_22), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_21 - CS_21*max_lambda_2_22) - 2*(CF_22 - CS_22*max_lambda_2_22) + (rc17)*(CF_23 -
      CS_23*max_lambda_2_22), 2) + (rc16)*pow((rc14)*(CF_21 - CS_21*max_lambda_2_22) - (CF_22 - CS_22*max_lambda_2_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_2_22), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_23 - CS_23*max_lambda_2_22) - (CF_24 - CS_24*max_lambda_2_22) + (rc14)*(CF_25 -
      CS_25*max_lambda_2_22), 2) + (rc12)*pow((rc17)*(CF_23 - CS_23*max_lambda_2_22) - 2*(CF_24 - CS_24*max_lambda_2_22)
      + (rc14)*(CF_25 - CS_25*max_lambda_2_22), 2);

    beta_3 = (rc21)*pow(-(CF_20 - CS_20*max_lambda_2_22) + (rc23)*(CF_21 - CS_21*max_lambda_2_22) - 9*(CF_22 -
      CS_22*max_lambda_2_22) + (rc22)*(CF_23 - CS_23*max_lambda_2_22), 2) + (rc37)*pow(-rc14*(CF_20 -
      CS_20*max_lambda_2_22) + (rc17)*(CF_21 - CS_21*max_lambda_2_22) - rc17*(CF_22 - CS_22*max_lambda_2_22) +
      (rc14)*(CF_23 - CS_23*max_lambda_2_22), 2) + (rc16)*pow(CF_23 - CS_23*max_lambda_2_22 - rc14*(CF_20 -
      CS_20*max_lambda_2_22) + 2*(CF_21 - CS_21*max_lambda_2_22) - rc20*(CF_22 - CS_22*max_lambda_2_22), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_2 = Recon_2 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_22 - CS_22*max_lambda_2_22) + (rc30)*(CF_23 -
      CS_23*max_lambda_2_22) - rc13*(CF_24 - CS_24*max_lambda_2_22)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_21 -
      CS_21*max_lambda_2_22) + (rc30)*(CF_22 - CS_22*max_lambda_2_22) + (rc24)*(CF_23 - CS_23*max_lambda_2_22)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_23 - CS_23*max_lambda_2_22) - rc31*(CF_24 - CS_24*max_lambda_2_22) +
      (rc24)*(CF_25 - CS_25*max_lambda_2_22)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_20 - CS_20*max_lambda_2_22) -
      rc35*(CF_21 - CS_21*max_lambda_2_22) + (rc34)*(CF_22 - CS_22*max_lambda_2_22) + (rc33)*(CF_23 -
      CS_23*max_lambda_2_22));

    beta_0 = (rc12)*pow((rc14)*(CF_31 + CS_31*max_lambda_2_33) - rc14*(CF_33 + CS_33*max_lambda_2_33), 2) +
      (rc16)*pow((rc14)*(CF_31 + CS_31*max_lambda_2_33) - (CF_32 + CS_32*max_lambda_2_33) + (rc14)*(CF_33 +
      CS_33*max_lambda_2_33), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_32 + CS_32*max_lambda_2_33) - (CF_33 + CS_33*max_lambda_2_33) + (rc14)*(CF_34 +
      CS_34*max_lambda_2_33), 2) + (rc12)*pow((rc17)*(CF_32 + CS_32*max_lambda_2_33) - 2*(CF_33 + CS_33*max_lambda_2_33)
      + (rc14)*(CF_34 + CS_34*max_lambda_2_33), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_30 + CS_30*max_lambda_2_33) - 2*(CF_31 + CS_31*max_lambda_2_33) + (rc17)*(CF_32 +
      CS_32*max_lambda_2_33), 2) + (rc16)*pow((rc14)*(CF_30 + CS_30*max_lambda_2_33) - (CF_31 + CS_31*max_lambda_2_33) +
      (rc14)*(CF_32 + CS_32*max_lambda_2_33), 2);

    beta_3 = -rc18*(CF_32 + CS_32*max_lambda_2_33) + (rc19)*(CF_33 + CS_33*max_lambda_2_33) - rc19*(CF_34 +
      CS_34*max_lambda_2_33) + (rc18)*(CF_35 + CS_35*max_lambda_2_33) + (rc16)*pow(CF_32 + CS_32*max_lambda_2_33 -
      rc20*(CF_33 + CS_33*max_lambda_2_33) + 2*(CF_34 + CS_34*max_lambda_2_33) - rc14*(CF_35 + CS_35*max_lambda_2_33),
      2) + (rc21)*pow(CF_35 + CS_35*max_lambda_2_33 - rc22*(CF_32 + CS_32*max_lambda_2_33) + 9*(CF_33 +
      CS_33*max_lambda_2_33) - rc23*(CF_34 + CS_34*max_lambda_2_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_31 + CS_31*max_lambda_2_33) + (rc30)*(CF_32 +
      CS_32*max_lambda_2_33) + (rc24)*(CF_33 + CS_33*max_lambda_2_33)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_32 +
      CS_32*max_lambda_2_33) + (rc30)*(CF_33 + CS_33*max_lambda_2_33) - rc13*(CF_34 + CS_34*max_lambda_2_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_30 + CS_30*max_lambda_2_33) - rc31*(CF_31 + CS_31*max_lambda_2_33) +
      (rc32)*(CF_32 + CS_32*max_lambda_2_33)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_32 + CS_32*max_lambda_2_33) +
      (rc34)*(CF_33 + CS_33*max_lambda_2_33) - rc35*(CF_34 + CS_34*max_lambda_2_33) + (rc36)*(CF_35 +
      CS_35*max_lambda_2_33));

    beta_0 = (rc12)*pow((rc14)*(CF_32 - CS_32*max_lambda_2_33) - rc14*(CF_34 - CS_34*max_lambda_2_33), 2) +
      (rc16)*pow((rc14)*(CF_32 - CS_32*max_lambda_2_33) - (CF_33 - CS_33*max_lambda_2_33) + (rc14)*(CF_34 -
      CS_34*max_lambda_2_33), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_31 - CS_31*max_lambda_2_33) - 2*(CF_32 - CS_32*max_lambda_2_33) + (rc17)*(CF_33 -
      CS_33*max_lambda_2_33), 2) + (rc16)*pow((rc14)*(CF_31 - CS_31*max_lambda_2_33) - (CF_32 - CS_32*max_lambda_2_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_2_33), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_33 - CS_33*max_lambda_2_33) - (CF_34 - CS_34*max_lambda_2_33) + (rc14)*(CF_35 -
      CS_35*max_lambda_2_33), 2) + (rc12)*pow((rc17)*(CF_33 - CS_33*max_lambda_2_33) - 2*(CF_34 - CS_34*max_lambda_2_33)
      + (rc14)*(CF_35 - CS_35*max_lambda_2_33), 2);

    beta_3 = (rc21)*pow(-(CF_30 - CS_30*max_lambda_2_33) + (rc23)*(CF_31 - CS_31*max_lambda_2_33) - 9*(CF_32 -
      CS_32*max_lambda_2_33) + (rc22)*(CF_33 - CS_33*max_lambda_2_33), 2) + (rc37)*pow(-rc14*(CF_30 -
      CS_30*max_lambda_2_33) + (rc17)*(CF_31 - CS_31*max_lambda_2_33) - rc17*(CF_32 - CS_32*max_lambda_2_33) +
      (rc14)*(CF_33 - CS_33*max_lambda_2_33), 2) + (rc16)*pow(CF_33 - CS_33*max_lambda_2_33 - rc14*(CF_30 -
      CS_30*max_lambda_2_33) + 2*(CF_31 - CS_31*max_lambda_2_33) - rc20*(CF_32 - CS_32*max_lambda_2_33), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_3 = Recon_3 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_32 - CS_32*max_lambda_2_33) + (rc30)*(CF_33 -
      CS_33*max_lambda_2_33) - rc13*(CF_34 - CS_34*max_lambda_2_33)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_31 -
      CS_31*max_lambda_2_33) + (rc30)*(CF_32 - CS_32*max_lambda_2_33) + (rc24)*(CF_33 - CS_33*max_lambda_2_33)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_33 - CS_33*max_lambda_2_33) - rc31*(CF_34 - CS_34*max_lambda_2_33) +
      (rc24)*(CF_35 - CS_35*max_lambda_2_33)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_30 - CS_30*max_lambda_2_33) -
      rc35*(CF_31 - CS_31*max_lambda_2_33) + (rc34)*(CF_32 - CS_32*max_lambda_2_33) + (rc33)*(CF_33 -
      CS_33*max_lambda_2_33));

    beta_0 = (rc12)*pow((rc14)*(CF_41 + CS_41*max_lambda_2_44) - rc14*(CF_43 + CS_43*max_lambda_2_44), 2) +
      (rc16)*pow((rc14)*(CF_41 + CS_41*max_lambda_2_44) - (CF_42 + CS_42*max_lambda_2_44) + (rc14)*(CF_43 +
      CS_43*max_lambda_2_44), 2);

    beta_1 = (rc16)*pow((rc14)*(CF_42 + CS_42*max_lambda_2_44) - (CF_43 + CS_43*max_lambda_2_44) + (rc14)*(CF_44 +
      CS_44*max_lambda_2_44), 2) + (rc12)*pow((rc17)*(CF_42 + CS_42*max_lambda_2_44) - 2*(CF_43 + CS_43*max_lambda_2_44)
      + (rc14)*(CF_44 + CS_44*max_lambda_2_44), 2);

    beta_2 = (rc12)*pow((rc14)*(CF_40 + CS_40*max_lambda_2_44) - 2*(CF_41 + CS_41*max_lambda_2_44) + (rc17)*(CF_42 +
      CS_42*max_lambda_2_44), 2) + (rc16)*pow((rc14)*(CF_40 + CS_40*max_lambda_2_44) - (CF_41 + CS_41*max_lambda_2_44) +
      (rc14)*(CF_42 + CS_42*max_lambda_2_44), 2);

    beta_3 = -rc18*(CF_42 + CS_42*max_lambda_2_44) + (rc19)*(CF_43 + CS_43*max_lambda_2_44) - rc19*(CF_44 +
      CS_44*max_lambda_2_44) + (rc18)*(CF_45 + CS_45*max_lambda_2_44) + (rc16)*pow(CF_42 + CS_42*max_lambda_2_44 -
      rc20*(CF_43 + CS_43*max_lambda_2_44) + 2*(CF_44 + CS_44*max_lambda_2_44) - rc14*(CF_45 + CS_45*max_lambda_2_44),
      2) + (rc21)*pow(CF_45 + CS_45*max_lambda_2_44 - rc22*(CF_42 + CS_42*max_lambda_2_44) + 9*(CF_43 +
      CS_43*max_lambda_2_44) - rc23*(CF_44 + CS_44*max_lambda_2_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*(-rc13*(CF_41 + CS_41*max_lambda_2_44) + (rc30)*(CF_42 +
      CS_42*max_lambda_2_44) + (rc24)*(CF_43 + CS_43*max_lambda_2_44)) + (rc27)*delta_1*inv_omega_sum*((rc24)*(CF_42 +
      CS_42*max_lambda_2_44) + (rc30)*(CF_43 + CS_43*max_lambda_2_44) - rc13*(CF_44 + CS_44*max_lambda_2_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc24)*(CF_40 + CS_40*max_lambda_2_44) - rc31*(CF_41 + CS_41*max_lambda_2_44) +
      (rc32)*(CF_42 + CS_42*max_lambda_2_44)) + (rc29)*delta_3*inv_omega_sum*((rc33)*(CF_42 + CS_42*max_lambda_2_44) +
      (rc34)*(CF_43 + CS_43*max_lambda_2_44) - rc35*(CF_44 + CS_44*max_lambda_2_44) + (rc36)*(CF_45 +
      CS_45*max_lambda_2_44));

    beta_0 = (rc12)*pow((rc14)*(CF_42 - CS_42*max_lambda_2_44) - rc14*(CF_44 - CS_44*max_lambda_2_44), 2) +
      (rc16)*pow((rc14)*(CF_42 - CS_42*max_lambda_2_44) - (CF_43 - CS_43*max_lambda_2_44) + (rc14)*(CF_44 -
      CS_44*max_lambda_2_44), 2);

    beta_1 = (rc12)*pow((rc14)*(CF_41 - CS_41*max_lambda_2_44) - 2*(CF_42 - CS_42*max_lambda_2_44) + (rc17)*(CF_43 -
      CS_43*max_lambda_2_44), 2) + (rc16)*pow((rc14)*(CF_41 - CS_41*max_lambda_2_44) - (CF_42 - CS_42*max_lambda_2_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_2_44), 2);

    beta_2 = (rc16)*pow((rc14)*(CF_43 - CS_43*max_lambda_2_44) - (CF_44 - CS_44*max_lambda_2_44) + (rc14)*(CF_45 -
      CS_45*max_lambda_2_44), 2) + (rc12)*pow((rc17)*(CF_43 - CS_43*max_lambda_2_44) - 2*(CF_44 - CS_44*max_lambda_2_44)
      + (rc14)*(CF_45 - CS_45*max_lambda_2_44), 2);

    beta_3 = (rc21)*pow(-(CF_40 - CS_40*max_lambda_2_44) + (rc23)*(CF_41 - CS_41*max_lambda_2_44) - 9*(CF_42 -
      CS_42*max_lambda_2_44) + (rc22)*(CF_43 - CS_43*max_lambda_2_44), 2) + (rc37)*pow(-rc14*(CF_40 -
      CS_40*max_lambda_2_44) + (rc17)*(CF_41 - CS_41*max_lambda_2_44) - rc17*(CF_42 - CS_42*max_lambda_2_44) +
      (rc14)*(CF_43 - CS_43*max_lambda_2_44), 2) + (rc16)*pow(CF_43 - CS_43*max_lambda_2_44 - rc14*(CF_40 -
      CS_40*max_lambda_2_44) + 2*(CF_41 - CS_41*max_lambda_2_44) - rc20*(CF_42 - CS_42*max_lambda_2_44), 2);

   alpha_0 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_2), 6);

   alpha_3 = pow(1 + fabs((rc24)*beta_0 - rc25*beta_1 + (rc24)*beta_2 - beta_3)/(eps + beta_3), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2 + alpha_3);

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

   inv_omega_sum = 1.0/((rc26)*delta_0 + (rc27)*delta_1 + (rc28)*delta_2 + (rc29)*delta_3);

    Recon_4 = Recon_4 + (rc26)*delta_0*inv_omega_sum*((rc24)*(CF_42 - CS_42*max_lambda_2_44) + (rc30)*(CF_43 -
      CS_43*max_lambda_2_44) - rc13*(CF_44 - CS_44*max_lambda_2_44)) + (rc27)*delta_1*inv_omega_sum*(-rc13*(CF_41 -
      CS_41*max_lambda_2_44) + (rc30)*(CF_42 - CS_42*max_lambda_2_44) + (rc24)*(CF_43 - CS_43*max_lambda_2_44)) +
      (rc28)*delta_2*inv_omega_sum*((rc32)*(CF_43 - CS_43*max_lambda_2_44) - rc31*(CF_44 - CS_44*max_lambda_2_44) +
      (rc24)*(CF_45 - CS_45*max_lambda_2_44)) + (rc29)*delta_3*inv_omega_sum*((rc36)*(CF_40 - CS_40*max_lambda_2_44) -
      rc35*(CF_41 - CS_41*max_lambda_2_44) + (rc34)*(CF_42 - CS_42*max_lambda_2_44) + (rc33)*(CF_43 -
      CS_43*max_lambda_2_44));

    wk10_B0[OPS_ACC15(0,0,0)] = 0.707106781186547*AVG_2_rho*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_2_rho*Recon_4*inv_AVG_a + Recon_2;

    wk11_B0[OPS_ACC12(0,0,0)] = 0.707106781186547*AVG_2_rho*AVG_2_u0*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_2_rho*AVG_2_u0*Recon_4*inv_AVG_a - AVG_2_rho*Recon_1 + AVG_2_u0*Recon_2;

    wk12_B0[OPS_ACC13(0,0,0)] = 0.707106781186547*AVG_2_rho*AVG_2_u1*Recon_3*inv_AVG_a +
      0.707106781186547*AVG_2_rho*AVG_2_u1*Recon_4*inv_AVG_a + AVG_2_rho*Recon_0 + AVG_2_u1*Recon_2;

    wk13_B0[OPS_ACC11(0,0,0)] = 0.707106781186547*AVG_2_rho*Recon_3*inv_AVG_a*(AVG_2_a + AVG_2_u2) +
      0.707106781186547*AVG_2_rho*Recon_4*inv_AVG_a*(-AVG_2_a + AVG_2_u2) + AVG_2_u2*Recon_2;

    wk14_B0[OPS_ACC14(0,0,0)] = -AVG_2_rho*AVG_2_u0*Recon_1 + AVG_2_rho*AVG_2_u1*Recon_0 +
      0.707106781186547*AVG_2_rho*Recon_3*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_2_u0, 2) + pow(AVG_2_u1, 2) +
      pow(AVG_2_u2, 2)) + pow(AVG_2_a, 2)) + AVG_2_a*AVG_2_u2) +
      0.707106781186547*AVG_2_rho*Recon_4*inv_AVG_a*(rcinv38*((rc14)*gamma_m1*(pow(AVG_2_u0, 2) + pow(AVG_2_u1, 2) +
      pow(AVG_2_u2, 2)) + pow(AVG_2_a, 2)) - AVG_2_a*AVG_2_u2) + Recon_2*((rc14)*pow(AVG_2_u0, 2) + (rc14)*pow(AVG_2_u1,
      2) + (rc14)*pow(AVG_2_u2, 2));

}

 void opensbliblock00Kernel018(const double *wk8_B0, const double *wk2_B0, const double *wk5_B0, const double *wk14_B0,
const double *wk9_B0, const double *wk13_B0, const double *wk1_B0, const double *wk3_B0, const double *wk12_B0, const
double *BF_B0, const double *wk7_B0, const double *wk0_B0, const double *wk11_B0, const double *wk6_B0, const double
*wk4_B0, const double *D11_B0, const double *wk10_B0, double *Residual0_B0, double *Residual3_B0, double *Residual1_B0,
double *Residual2_B0, double *Residual4_B0)
{
    Residual0_B0[OPS_ACC17(0,0,0)] = -inv_0*(-wk5_B0[OPS_ACC2(0,-1,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*D11_B0[OPS_ACC15(0,0,0)] - inv_1*(-wk0_B0[OPS_ACC11(-1,0,0)] + wk0_B0[OPS_ACC11(0,0,0)])
      - inv_2*(wk10_B0[OPS_ACC16(0,0,0)] - wk10_B0[OPS_ACC16(0,0,-1)]) + BF_B0[OPS_ACC9(0,0,0)];

    Residual1_B0[OPS_ACC19(0,0,0)] = -inv_0*(wk6_B0[OPS_ACC13(0,0,0)] -
      wk6_B0[OPS_ACC13(0,-1,0)])*D11_B0[OPS_ACC15(0,0,0)] - inv_1*(-wk1_B0[OPS_ACC6(-1,0,0)] + wk1_B0[OPS_ACC6(0,0,0)])
      - inv_2*(wk11_B0[OPS_ACC12(0,0,0)] - wk11_B0[OPS_ACC12(0,0,-1)]);

    Residual2_B0[OPS_ACC20(0,0,0)] = -inv_0*(wk7_B0[OPS_ACC10(0,0,0)] -
      wk7_B0[OPS_ACC10(0,-1,0)])*D11_B0[OPS_ACC15(0,0,0)] - inv_1*(-wk2_B0[OPS_ACC1(-1,0,0)] + wk2_B0[OPS_ACC1(0,0,0)])
      - inv_2*(-wk12_B0[OPS_ACC8(0,0,-1)] + wk12_B0[OPS_ACC8(0,0,0)]);

    Residual3_B0[OPS_ACC18(0,0,0)] = -inv_0*(wk8_B0[OPS_ACC0(0,0,0)] -
      wk8_B0[OPS_ACC0(0,-1,0)])*D11_B0[OPS_ACC15(0,0,0)] - inv_1*(wk3_B0[OPS_ACC7(0,0,0)] - wk3_B0[OPS_ACC7(-1,0,0)]) -
      inv_2*(wk13_B0[OPS_ACC5(0,0,0)] - wk13_B0[OPS_ACC5(0,0,-1)]);

    Residual4_B0[OPS_ACC21(0,0,0)] = -inv_0*(-wk9_B0[OPS_ACC4(0,-1,0)] +
      wk9_B0[OPS_ACC4(0,0,0)])*D11_B0[OPS_ACC15(0,0,0)] - inv_1*(wk4_B0[OPS_ACC14(0,0,0)] - wk4_B0[OPS_ACC14(-1,0,0)]) -
      inv_2*(-wk14_B0[OPS_ACC3(0,0,-1)] + wk14_B0[OPS_ACC3(0,0,0)]);

}

void opensbliblock00Kernel024(const double *u0_B0, double *wk0_B0)
{
    wk0_B0[OPS_ACC1(0,0,0)] = (rc13)*inv_2*(-u0_B0[OPS_ACC0(0,0,2)] + 8*u0_B0[OPS_ACC0(0,0,1)] -
      8*u0_B0[OPS_ACC0(0,0,-1)] + u0_B0[OPS_ACC0(0,0,-2)]);

}

void opensbliblock00Kernel026(const double *u0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0,0)] = ((idx[1] == 0) ? (
   inv_0*(-rc12*u0_B0[OPS_ACC0(0,4,0)] - 3*u0_B0[OPS_ACC0(0,2,0)] +
      (rc11)*u0_B0[OPS_ACC0(0,3,0)] - rc10*u0_B0[OPS_ACC0(0,0,0)] + 4*u0_B0[OPS_ACC0(0,1,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-3*u0_B0[OPS_ACC0(0,-1,0)] - 6*u0_B0[OPS_ACC0(0,2,0)] + u0_B0[OPS_ACC0(0,3,0)] -
      10*u0_B0[OPS_ACC0(0,0,0)] + 18*u0_B0[OPS_ACC0(0,1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(-4*u0_B0[OPS_ACC0(0,-1,0)] + 3*u0_B0[OPS_ACC0(0,-2,0)] + (rc12)*u0_B0[OPS_ACC0(0,-4,0)] +
      (rc10)*u0_B0[OPS_ACC0(0,0,0)] - rc11*u0_B0[OPS_ACC0(0,-3,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(-18*u0_B0[OPS_ACC0(0,-1,0)] + 6*u0_B0[OPS_ACC0(0,-2,0)] + 10*u0_B0[OPS_ACC0(0,0,0)] -
      u0_B0[OPS_ACC0(0,-3,0)] + 3*u0_B0[OPS_ACC0(0,1,0)])
)
: (
   (rc13)*inv_0*(-u0_B0[OPS_ACC0(0,2,0)] -
      8*u0_B0[OPS_ACC0(0,-1,0)] + u0_B0[OPS_ACC0(0,-2,0)] + 8*u0_B0[OPS_ACC0(0,1,0)])
)))));

}

void opensbliblock00Kernel027(const double *u0_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc12*u0_B0[OPS_ACC0(4,0,0)] - 3*u0_B0[OPS_ACC0(2,0,0)] +
      (rc11)*u0_B0[OPS_ACC0(3,0,0)] - rc10*u0_B0[OPS_ACC0(0,0,0)] + 4*u0_B0[OPS_ACC0(1,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-3*u0_B0[OPS_ACC0(-1,0,0)] - 6*u0_B0[OPS_ACC0(2,0,0)] + u0_B0[OPS_ACC0(3,0,0)] -
      10*u0_B0[OPS_ACC0(0,0,0)] + 18*u0_B0[OPS_ACC0(1,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*(-4*u0_B0[OPS_ACC0(-1,0,0)] + 3*u0_B0[OPS_ACC0(-2,0,0)] + (rc12)*u0_B0[OPS_ACC0(-4,0,0)] +
      (rc10)*u0_B0[OPS_ACC0(0,0,0)] - rc11*u0_B0[OPS_ACC0(-3,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(-18*u0_B0[OPS_ACC0(-1,0,0)] + 6*u0_B0[OPS_ACC0(-2,0,0)] + 10*u0_B0[OPS_ACC0(0,0,0)] -
      u0_B0[OPS_ACC0(-3,0,0)] + 3*u0_B0[OPS_ACC0(1,0,0)])
)
: (
   (rc13)*inv_1*(-u0_B0[OPS_ACC0(2,0,0)] -
      8*u0_B0[OPS_ACC0(-1,0,0)] + u0_B0[OPS_ACC0(-2,0,0)] + 8*u0_B0[OPS_ACC0(1,0,0)])
)))));

}

void opensbliblock00Kernel028(const double *u1_B0, double *wk3_B0)
{
    wk3_B0[OPS_ACC1(0,0,0)] = (rc13)*inv_2*(-8*u1_B0[OPS_ACC0(0,0,-1)] + u1_B0[OPS_ACC0(0,0,-2)] +
      8*u1_B0[OPS_ACC0(0,0,1)] - u1_B0[OPS_ACC0(0,0,2)]);

}

void opensbliblock00Kernel030(const double *u1_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0,0)] = ((idx[1] == 0) ? (
   inv_0*(4*u1_B0[OPS_ACC0(0,1,0)] - 3*u1_B0[OPS_ACC0(0,2,0)] -
      rc12*u1_B0[OPS_ACC0(0,4,0)] + (rc11)*u1_B0[OPS_ACC0(0,3,0)] - rc10*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == 1) ? (

        (rc13)*inv_0*(18*u1_B0[OPS_ACC0(0,1,0)] - 6*u1_B0[OPS_ACC0(0,2,0)] + u1_B0[OPS_ACC0(0,3,0)] -
      3*u1_B0[OPS_ACC0(0,-1,0)] - 10*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(3*u1_B0[OPS_ACC0(0,-2,0)] + (rc12)*u1_B0[OPS_ACC0(0,-4,0)] - rc11*u1_B0[OPS_ACC0(0,-3,0)] -
      4*u1_B0[OPS_ACC0(0,-1,0)] + (rc10)*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(3*u1_B0[OPS_ACC0(0,1,0)] + 10*u1_B0[OPS_ACC0(0,0,0)] - u1_B0[OPS_ACC0(0,-3,0)] -
      18*u1_B0[OPS_ACC0(0,-1,0)] + 6*u1_B0[OPS_ACC0(0,-2,0)])
)
: (
   (rc13)*inv_0*(8*u1_B0[OPS_ACC0(0,1,0)] -
      8*u1_B0[OPS_ACC0(0,-1,0)] + u1_B0[OPS_ACC0(0,-2,0)] - u1_B0[OPS_ACC0(0,2,0)])
)))));

}

void opensbliblock00Kernel031(const double *u1_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0,0)] = ((idx[0] == 0) ? (
   inv_1*(4*u1_B0[OPS_ACC0(1,0,0)] - 3*u1_B0[OPS_ACC0(2,0,0)] -
      rc12*u1_B0[OPS_ACC0(4,0,0)] + (rc11)*u1_B0[OPS_ACC0(3,0,0)] - rc10*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[0] == 1) ? (

        (rc13)*inv_1*(18*u1_B0[OPS_ACC0(1,0,0)] - 6*u1_B0[OPS_ACC0(2,0,0)] + u1_B0[OPS_ACC0(3,0,0)] -
      3*u1_B0[OPS_ACC0(-1,0,0)] - 10*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*(3*u1_B0[OPS_ACC0(-2,0,0)] + (rc12)*u1_B0[OPS_ACC0(-4,0,0)] - rc11*u1_B0[OPS_ACC0(-3,0,0)] -
      4*u1_B0[OPS_ACC0(-1,0,0)] + (rc10)*u1_B0[OPS_ACC0(0,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(3*u1_B0[OPS_ACC0(1,0,0)] + 10*u1_B0[OPS_ACC0(0,0,0)] - u1_B0[OPS_ACC0(-3,0,0)] -
      18*u1_B0[OPS_ACC0(-1,0,0)] + 6*u1_B0[OPS_ACC0(-2,0,0)])
)
: (
   (rc13)*inv_1*(8*u1_B0[OPS_ACC0(1,0,0)] -
      8*u1_B0[OPS_ACC0(-1,0,0)] + u1_B0[OPS_ACC0(-2,0,0)] - u1_B0[OPS_ACC0(2,0,0)])
)))));

}

void opensbliblock00Kernel032(const double *u2_B0, double *wk6_B0)
{
    wk6_B0[OPS_ACC1(0,0,0)] = (rc13)*inv_2*(8*u2_B0[OPS_ACC0(0,0,1)] - u2_B0[OPS_ACC0(0,0,2)] + u2_B0[OPS_ACC0(0,0,-2)]
      - 8*u2_B0[OPS_ACC0(0,0,-1)]);

}

void opensbliblock00Kernel034(const double *u2_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0,0)] = ((idx[1] == 0) ? (
   inv_0*(-rc10*u2_B0[OPS_ACC0(0,0,0)] + 4*u2_B0[OPS_ACC0(0,1,0)] -
      3*u2_B0[OPS_ACC0(0,2,0)] + (rc11)*u2_B0[OPS_ACC0(0,3,0)] - rc12*u2_B0[OPS_ACC0(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-10*u2_B0[OPS_ACC0(0,0,0)] + 18*u2_B0[OPS_ACC0(0,1,0)] - 3*u2_B0[OPS_ACC0(0,-1,0)] -
      6*u2_B0[OPS_ACC0(0,2,0)] + u2_B0[OPS_ACC0(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc12)*u2_B0[OPS_ACC0(0,-4,0)] + (rc10)*u2_B0[OPS_ACC0(0,0,0)] - rc11*u2_B0[OPS_ACC0(0,-3,0)] +
      3*u2_B0[OPS_ACC0(0,-2,0)] - 4*u2_B0[OPS_ACC0(0,-1,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(10*u2_B0[OPS_ACC0(0,0,0)] - u2_B0[OPS_ACC0(0,-3,0)] + 3*u2_B0[OPS_ACC0(0,1,0)] +
      6*u2_B0[OPS_ACC0(0,-2,0)] - 18*u2_B0[OPS_ACC0(0,-1,0)])
)
: (
   (rc13)*inv_0*(-u2_B0[OPS_ACC0(0,2,0)] +
      u2_B0[OPS_ACC0(0,-2,0)] + 8*u2_B0[OPS_ACC0(0,1,0)] - 8*u2_B0[OPS_ACC0(0,-1,0)])
)))));

}

void opensbliblock00Kernel035(const double *u2_B0, double *wk8_B0, const int *idx)
{
    wk8_B0[OPS_ACC1(0,0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc10*u2_B0[OPS_ACC0(0,0,0)] + 4*u2_B0[OPS_ACC0(1,0,0)] -
      3*u2_B0[OPS_ACC0(2,0,0)] + (rc11)*u2_B0[OPS_ACC0(3,0,0)] - rc12*u2_B0[OPS_ACC0(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-10*u2_B0[OPS_ACC0(0,0,0)] + 18*u2_B0[OPS_ACC0(1,0,0)] - 3*u2_B0[OPS_ACC0(-1,0,0)] -
      6*u2_B0[OPS_ACC0(2,0,0)] + u2_B0[OPS_ACC0(3,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc12)*u2_B0[OPS_ACC0(-4,0,0)] + (rc10)*u2_B0[OPS_ACC0(0,0,0)] - rc11*u2_B0[OPS_ACC0(-3,0,0)] +
      3*u2_B0[OPS_ACC0(-2,0,0)] - 4*u2_B0[OPS_ACC0(-1,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(10*u2_B0[OPS_ACC0(0,0,0)] - u2_B0[OPS_ACC0(-3,0,0)] + 3*u2_B0[OPS_ACC0(1,0,0)] +
      6*u2_B0[OPS_ACC0(-2,0,0)] - 18*u2_B0[OPS_ACC0(-1,0,0)])
)
: (
   (rc13)*inv_1*(-u2_B0[OPS_ACC0(2,0,0)] +
      u2_B0[OPS_ACC0(-2,0,0)] + 8*u2_B0[OPS_ACC0(1,0,0)] - 8*u2_B0[OPS_ACC0(-1,0,0)])
)))));

}

 void opensbliblock00Kernel043(const double *wk8_B0, const double *wk2_B0, const double *wk5_B0, const double *wk1_B0,
const double *u2_B0, const double *mu_B0, const double *wk3_B0, const double *T_B0, const double *u0_B0, const double
*wk7_B0, const double *wk0_B0, const double *u1_B0, const double *wk6_B0, const double *wk4_B0, const double *D11_B0,
const double *SD111_B0, double *Residual1_B0, double *Residual2_B0, double *Residual4_B0, double *Residual3_B0, const
int *idx)
{
   double localeval_18 = 0.0;
   double localeval_7 = 0.0;
   double localeval_11 = 0.0;
   double localeval_14 = 0.0;
   double localeval_2 = 0.0;
   double localeval_5 = 0.0;
   double localeval_22 = 0.0;
   double localeval_3 = 0.0;
   double localeval_0 = 0.0;
   double localeval_1 = 0.0;
   double localeval_10 = 0.0;
   double localeval_17 = 0.0;
   double localeval_19 = 0.0;
   double localeval_16 = 0.0;
   double localeval_4 = 0.0;
   double localeval_21 = 0.0;
   double localeval_23 = 0.0;
   double localeval_20 = 0.0;
   double localeval_15 = 0.0;
   double localeval_12 = 0.0;
   double localeval_9 = 0.0;
   double localeval_13 = 0.0;
   double localeval_8 = 0.0;
   double localeval_6 = 0.0;
    localeval_0 = (rc13)*inv_2*(8*T_B0[OPS_ACC7(0,0,1)] - T_B0[OPS_ACC7(0,0,2)] - 8*T_B0[OPS_ACC7(0,0,-1)] +
      T_B0[OPS_ACC7(0,0,-2)]);

    localeval_1 = ((idx[1] == 0) ? (
   (rc13)*inv_3*(35*T_B0[OPS_ACC7(0,0,0)] - 104*T_B0[OPS_ACC7(0,1,0)] +
      114*T_B0[OPS_ACC7(0,2,0)] - 56*T_B0[OPS_ACC7(0,3,0)] + 11*T_B0[OPS_ACC7(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_3*(-20*T_B0[OPS_ACC7(0,0,0)] + 6*T_B0[OPS_ACC7(0,1,0)] + 11*T_B0[OPS_ACC7(0,-1,0)] +
      4*T_B0[OPS_ACC7(0,2,0)] - T_B0[OPS_ACC7(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc13)*inv_3*(11*T_B0[OPS_ACC7(0,-4,0)] + 35*T_B0[OPS_ACC7(0,0,0)] - 56*T_B0[OPS_ACC7(0,-3,0)] -
      104*T_B0[OPS_ACC7(0,-1,0)] + 114*T_B0[OPS_ACC7(0,-2,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_3*(-20*T_B0[OPS_ACC7(0,0,0)] - T_B0[OPS_ACC7(0,-3,0)] + 11*T_B0[OPS_ACC7(0,1,0)] +
      4*T_B0[OPS_ACC7(0,-2,0)] + 6*T_B0[OPS_ACC7(0,-1,0)])
)
: (
   (rc13)*inv_3*(-30*T_B0[OPS_ACC7(0,0,0)] +
      16*T_B0[OPS_ACC7(0,1,0)] - T_B0[OPS_ACC7(0,-2,0)] + 16*T_B0[OPS_ACC7(0,-1,0)] - T_B0[OPS_ACC7(0,2,0)])
)))));

    localeval_2 = ((idx[0] == 0) ? (
   (rc13)*inv_4*(35*T_B0[OPS_ACC7(0,0,0)] - 104*T_B0[OPS_ACC7(1,0,0)] +
      114*T_B0[OPS_ACC7(2,0,0)] - 56*T_B0[OPS_ACC7(3,0,0)] + 11*T_B0[OPS_ACC7(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_4*(-20*T_B0[OPS_ACC7(0,0,0)] + 6*T_B0[OPS_ACC7(1,0,0)] + 11*T_B0[OPS_ACC7(-1,0,0)] +
      4*T_B0[OPS_ACC7(2,0,0)] - T_B0[OPS_ACC7(3,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc13)*inv_4*(11*T_B0[OPS_ACC7(-4,0,0)] + 35*T_B0[OPS_ACC7(0,0,0)] - 56*T_B0[OPS_ACC7(-3,0,0)] -
      104*T_B0[OPS_ACC7(-1,0,0)] + 114*T_B0[OPS_ACC7(-2,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_4*(-20*T_B0[OPS_ACC7(0,0,0)] - T_B0[OPS_ACC7(-3,0,0)] + 11*T_B0[OPS_ACC7(1,0,0)] +
      4*T_B0[OPS_ACC7(-2,0,0)] + 6*T_B0[OPS_ACC7(-1,0,0)])
)
: (
   (rc13)*inv_4*(-30*T_B0[OPS_ACC7(0,0,0)] +
      16*T_B0[OPS_ACC7(1,0,0)] - T_B0[OPS_ACC7(-2,0,0)] + 16*T_B0[OPS_ACC7(-1,0,0)] - T_B0[OPS_ACC7(2,0,0)])
)))));

    localeval_3 = (rc13)*inv_5*(-30*T_B0[OPS_ACC7(0,0,0)] - T_B0[OPS_ACC7(0,0,-2)] + 16*T_B0[OPS_ACC7(0,0,-1)] +
      16*T_B0[OPS_ACC7(0,0,1)] - T_B0[OPS_ACC7(0,0,2)]);

    localeval_4 = ((idx[1] == 0) ? (
   inv_0*(-rc10*T_B0[OPS_ACC7(0,0,0)] + 4*T_B0[OPS_ACC7(0,1,0)] -
      3*T_B0[OPS_ACC7(0,2,0)] + (rc11)*T_B0[OPS_ACC7(0,3,0)] - rc12*T_B0[OPS_ACC7(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-10*T_B0[OPS_ACC7(0,0,0)] + 18*T_B0[OPS_ACC7(0,1,0)] - 3*T_B0[OPS_ACC7(0,-1,0)] -
      6*T_B0[OPS_ACC7(0,2,0)] + T_B0[OPS_ACC7(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc12)*T_B0[OPS_ACC7(0,-4,0)] + (rc10)*T_B0[OPS_ACC7(0,0,0)] - rc11*T_B0[OPS_ACC7(0,-3,0)] -
      4*T_B0[OPS_ACC7(0,-1,0)] + 3*T_B0[OPS_ACC7(0,-2,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(10*T_B0[OPS_ACC7(0,0,0)] - T_B0[OPS_ACC7(0,-3,0)] + 3*T_B0[OPS_ACC7(0,1,0)] -
      18*T_B0[OPS_ACC7(0,-1,0)] + 6*T_B0[OPS_ACC7(0,-2,0)])
)
: (
   (rc13)*inv_0*(-T_B0[OPS_ACC7(0,2,0)] +
      8*T_B0[OPS_ACC7(0,1,0)] - 8*T_B0[OPS_ACC7(0,-1,0)] + T_B0[OPS_ACC7(0,-2,0)])
)))));

    localeval_5 = ((idx[0] == 0) ? (
   inv_1*(-rc10*T_B0[OPS_ACC7(0,0,0)] + 4*T_B0[OPS_ACC7(1,0,0)] -
      3*T_B0[OPS_ACC7(2,0,0)] + (rc11)*T_B0[OPS_ACC7(3,0,0)] - rc12*T_B0[OPS_ACC7(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-10*T_B0[OPS_ACC7(0,0,0)] + 18*T_B0[OPS_ACC7(1,0,0)] - 3*T_B0[OPS_ACC7(-1,0,0)] -
      6*T_B0[OPS_ACC7(2,0,0)] + T_B0[OPS_ACC7(3,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc12)*T_B0[OPS_ACC7(-4,0,0)] + (rc10)*T_B0[OPS_ACC7(0,0,0)] - rc11*T_B0[OPS_ACC7(-3,0,0)] -
      4*T_B0[OPS_ACC7(-1,0,0)] + 3*T_B0[OPS_ACC7(-2,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(10*T_B0[OPS_ACC7(0,0,0)] - T_B0[OPS_ACC7(-3,0,0)] + 3*T_B0[OPS_ACC7(1,0,0)] -
      18*T_B0[OPS_ACC7(-1,0,0)] + 6*T_B0[OPS_ACC7(-2,0,0)])
)
: (
   (rc13)*inv_1*(-T_B0[OPS_ACC7(2,0,0)] +
      8*T_B0[OPS_ACC7(1,0,0)] - 8*T_B0[OPS_ACC7(-1,0,0)] + T_B0[OPS_ACC7(-2,0,0)])
)))));

    localeval_6 = ((idx[0] == 0) ? (
   inv_1*(-3*mu_B0[OPS_ACC5(2,0,0)] + (rc11)*mu_B0[OPS_ACC5(3,0,0)] -
      rc10*mu_B0[OPS_ACC5(0,0,0)] + 4*mu_B0[OPS_ACC5(1,0,0)] - rc12*mu_B0[OPS_ACC5(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_1*(-6*mu_B0[OPS_ACC5(2,0,0)] + mu_B0[OPS_ACC5(3,0,0)] - 10*mu_B0[OPS_ACC5(0,0,0)] -
      3*mu_B0[OPS_ACC5(-1,0,0)] + 18*mu_B0[OPS_ACC5(1,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc10)*mu_B0[OPS_ACC5(0,0,0)] + 3*mu_B0[OPS_ACC5(-2,0,0)] - 4*mu_B0[OPS_ACC5(-1,0,0)] +
      (rc12)*mu_B0[OPS_ACC5(-4,0,0)] - rc11*mu_B0[OPS_ACC5(-3,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_1*(10*mu_B0[OPS_ACC5(0,0,0)] + 6*mu_B0[OPS_ACC5(-2,0,0)] - 18*mu_B0[OPS_ACC5(-1,0,0)] +
      3*mu_B0[OPS_ACC5(1,0,0)] - mu_B0[OPS_ACC5(-3,0,0)])
)
: (
   (rc13)*inv_1*(-mu_B0[OPS_ACC5(2,0,0)] -
      8*mu_B0[OPS_ACC5(-1,0,0)] + mu_B0[OPS_ACC5(-2,0,0)] + 8*mu_B0[OPS_ACC5(1,0,0)])
)))));

    localeval_7 = (rc13)*inv_2*(-mu_B0[OPS_ACC5(0,0,2)] + 8*mu_B0[OPS_ACC5(0,0,1)] - 8*mu_B0[OPS_ACC5(0,0,-1)] +
      mu_B0[OPS_ACC5(0,0,-2)]);

    localeval_8 = ((idx[1] == 0) ? (
   inv_0*(-3*mu_B0[OPS_ACC5(0,2,0)] + (rc11)*mu_B0[OPS_ACC5(0,3,0)] -
      rc10*mu_B0[OPS_ACC5(0,0,0)] + 4*mu_B0[OPS_ACC5(0,1,0)] - rc12*mu_B0[OPS_ACC5(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_0*(-6*mu_B0[OPS_ACC5(0,2,0)] + mu_B0[OPS_ACC5(0,3,0)] - 10*mu_B0[OPS_ACC5(0,0,0)] -
      3*mu_B0[OPS_ACC5(0,-1,0)] + 18*mu_B0[OPS_ACC5(0,1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc10)*mu_B0[OPS_ACC5(0,0,0)] + 3*mu_B0[OPS_ACC5(0,-2,0)] - 4*mu_B0[OPS_ACC5(0,-1,0)] +
      (rc12)*mu_B0[OPS_ACC5(0,-4,0)] - rc11*mu_B0[OPS_ACC5(0,-3,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(10*mu_B0[OPS_ACC5(0,0,0)] + 6*mu_B0[OPS_ACC5(0,-2,0)] - 18*mu_B0[OPS_ACC5(0,-1,0)] +
      3*mu_B0[OPS_ACC5(0,1,0)] - mu_B0[OPS_ACC5(0,-3,0)])
)
: (
   (rc13)*inv_0*(-mu_B0[OPS_ACC5(0,2,0)] -
      8*mu_B0[OPS_ACC5(0,-1,0)] + mu_B0[OPS_ACC5(0,-2,0)] + 8*mu_B0[OPS_ACC5(0,1,0)])
)))));

    localeval_9 = ((idx[0] == 0) ? (
   (rc13)*inv_4*(11*u0_B0[OPS_ACC8(4,0,0)] + 114*u0_B0[OPS_ACC8(2,0,0)] -
      56*u0_B0[OPS_ACC8(3,0,0)] + 35*u0_B0[OPS_ACC8(0,0,0)] - 104*u0_B0[OPS_ACC8(1,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_4*(11*u0_B0[OPS_ACC8(-1,0,0)] + 4*u0_B0[OPS_ACC8(2,0,0)] - u0_B0[OPS_ACC8(3,0,0)] -
      20*u0_B0[OPS_ACC8(0,0,0)] + 6*u0_B0[OPS_ACC8(1,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc13)*inv_4*(-104*u0_B0[OPS_ACC8(-1,0,0)] + 114*u0_B0[OPS_ACC8(-2,0,0)] + 11*u0_B0[OPS_ACC8(-4,0,0)] +
      35*u0_B0[OPS_ACC8(0,0,0)] - 56*u0_B0[OPS_ACC8(-3,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_4*(4*u0_B0[OPS_ACC8(-2,0,0)] + 6*u0_B0[OPS_ACC8(-1,0,0)] - 20*u0_B0[OPS_ACC8(0,0,0)] -
      u0_B0[OPS_ACC8(-3,0,0)] + 11*u0_B0[OPS_ACC8(1,0,0)])
)
: (
   (rc13)*inv_4*(-u0_B0[OPS_ACC8(-2,0,0)] +
      16*u0_B0[OPS_ACC8(-1,0,0)] - u0_B0[OPS_ACC8(2,0,0)] - 30*u0_B0[OPS_ACC8(0,0,0)] +
      16*u0_B0[OPS_ACC8(1,0,0)])
)))));

    localeval_10 = (rc13)*inv_5*(-u0_B0[OPS_ACC8(0,0,2)] - u0_B0[OPS_ACC8(0,0,-2)] + 16*u0_B0[OPS_ACC8(0,0,-1)] -
      30*u0_B0[OPS_ACC8(0,0,0)] + 16*u0_B0[OPS_ACC8(0,0,1)]);

    localeval_11 = ((idx[1] == 0) ? (
   (rc13)*inv_3*(11*u0_B0[OPS_ACC8(0,4,0)] + 114*u0_B0[OPS_ACC8(0,2,0)] -
      56*u0_B0[OPS_ACC8(0,3,0)] + 35*u0_B0[OPS_ACC8(0,0,0)] - 104*u0_B0[OPS_ACC8(0,1,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_3*(11*u0_B0[OPS_ACC8(0,-1,0)] + 4*u0_B0[OPS_ACC8(0,2,0)] - u0_B0[OPS_ACC8(0,3,0)] -
      20*u0_B0[OPS_ACC8(0,0,0)] + 6*u0_B0[OPS_ACC8(0,1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc13)*inv_3*(-104*u0_B0[OPS_ACC8(0,-1,0)] + 114*u0_B0[OPS_ACC8(0,-2,0)] + 11*u0_B0[OPS_ACC8(0,-4,0)] +
      35*u0_B0[OPS_ACC8(0,0,0)] - 56*u0_B0[OPS_ACC8(0,-3,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_3*(4*u0_B0[OPS_ACC8(0,-2,0)] + 6*u0_B0[OPS_ACC8(0,-1,0)] - 20*u0_B0[OPS_ACC8(0,0,0)] -
      u0_B0[OPS_ACC8(0,-3,0)] + 11*u0_B0[OPS_ACC8(0,1,0)])
)
: (
   (rc13)*inv_3*(-u0_B0[OPS_ACC8(0,-2,0)] +
      16*u0_B0[OPS_ACC8(0,-1,0)] - u0_B0[OPS_ACC8(0,2,0)] - 30*u0_B0[OPS_ACC8(0,0,0)] +
      16*u0_B0[OPS_ACC8(0,1,0)])
)))));

    localeval_12 = ((idx[1] == 0) ? (
   (rc13)*inv_3*(-104*u1_B0[OPS_ACC11(0,1,0)] + 114*u1_B0[OPS_ACC11(0,2,0)] +
      11*u1_B0[OPS_ACC11(0,4,0)] - 56*u1_B0[OPS_ACC11(0,3,0)] + 35*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_3*(6*u1_B0[OPS_ACC11(0,1,0)] + 4*u1_B0[OPS_ACC11(0,2,0)] - u1_B0[OPS_ACC11(0,3,0)] +
      11*u1_B0[OPS_ACC11(0,-1,0)] - 20*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc13)*inv_3*(114*u1_B0[OPS_ACC11(0,-2,0)] + 11*u1_B0[OPS_ACC11(0,-4,0)] - 56*u1_B0[OPS_ACC11(0,-3,0)] -
      104*u1_B0[OPS_ACC11(0,-1,0)] + 35*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_3*(11*u1_B0[OPS_ACC11(0,1,0)] - 20*u1_B0[OPS_ACC11(0,0,0)] - u1_B0[OPS_ACC11(0,-3,0)] +
      6*u1_B0[OPS_ACC11(0,-1,0)] + 4*u1_B0[OPS_ACC11(0,-2,0)])
)
: (
   (rc13)*inv_3*(16*u1_B0[OPS_ACC11(0,1,0)] -
      30*u1_B0[OPS_ACC11(0,0,0)] - u1_B0[OPS_ACC11(0,2,0)] + 16*u1_B0[OPS_ACC11(0,-1,0)] -
      u1_B0[OPS_ACC11(0,-2,0)])
)))));

    localeval_13 = ((idx[0] == 0) ? (
   (rc13)*inv_4*(-104*u1_B0[OPS_ACC11(1,0,0)] + 114*u1_B0[OPS_ACC11(2,0,0)] +
      11*u1_B0[OPS_ACC11(4,0,0)] - 56*u1_B0[OPS_ACC11(3,0,0)] + 35*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_4*(6*u1_B0[OPS_ACC11(1,0,0)] + 4*u1_B0[OPS_ACC11(2,0,0)] - u1_B0[OPS_ACC11(3,0,0)] +
      11*u1_B0[OPS_ACC11(-1,0,0)] - 20*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc13)*inv_4*(114*u1_B0[OPS_ACC11(-2,0,0)] + 11*u1_B0[OPS_ACC11(-4,0,0)] - 56*u1_B0[OPS_ACC11(-3,0,0)] -
      104*u1_B0[OPS_ACC11(-1,0,0)] + 35*u1_B0[OPS_ACC11(0,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_4*(11*u1_B0[OPS_ACC11(1,0,0)] - 20*u1_B0[OPS_ACC11(0,0,0)] - u1_B0[OPS_ACC11(-3,0,0)] +
      6*u1_B0[OPS_ACC11(-1,0,0)] + 4*u1_B0[OPS_ACC11(-2,0,0)])
)
: (
   (rc13)*inv_4*(16*u1_B0[OPS_ACC11(1,0,0)] -
      30*u1_B0[OPS_ACC11(0,0,0)] - u1_B0[OPS_ACC11(2,0,0)] + 16*u1_B0[OPS_ACC11(-1,0,0)] -
      u1_B0[OPS_ACC11(-2,0,0)])
)))));

    localeval_14 = (rc13)*inv_5*(-30*u1_B0[OPS_ACC11(0,0,0)] + 16*u1_B0[OPS_ACC11(0,0,1)] - u1_B0[OPS_ACC11(0,0,2)] +
      16*u1_B0[OPS_ACC11(0,0,-1)] - u1_B0[OPS_ACC11(0,0,-2)]);

    localeval_15 = ((idx[1] == 0) ? (
   (rc13)*inv_3*(35*u2_B0[OPS_ACC4(0,0,0)] - 104*u2_B0[OPS_ACC4(0,1,0)] +
      114*u2_B0[OPS_ACC4(0,2,0)] - 56*u2_B0[OPS_ACC4(0,3,0)] + 11*u2_B0[OPS_ACC4(0,4,0)])
)
: ((idx[1] == 1) ? (
  
      (rc13)*inv_3*(-20*u2_B0[OPS_ACC4(0,0,0)] + 6*u2_B0[OPS_ACC4(0,1,0)] + 11*u2_B0[OPS_ACC4(0,-1,0)] +
      4*u2_B0[OPS_ACC4(0,2,0)] - u2_B0[OPS_ACC4(0,3,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc13)*inv_3*(11*u2_B0[OPS_ACC4(0,-4,0)] + 35*u2_B0[OPS_ACC4(0,0,0)] - 56*u2_B0[OPS_ACC4(0,-3,0)] +
      114*u2_B0[OPS_ACC4(0,-2,0)] - 104*u2_B0[OPS_ACC4(0,-1,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_3*(-20*u2_B0[OPS_ACC4(0,0,0)] - u2_B0[OPS_ACC4(0,-3,0)] + 11*u2_B0[OPS_ACC4(0,1,0)] +
      6*u2_B0[OPS_ACC4(0,-1,0)] + 4*u2_B0[OPS_ACC4(0,-2,0)])
)
: (
   (rc13)*inv_3*(-30*u2_B0[OPS_ACC4(0,0,0)] +
      16*u2_B0[OPS_ACC4(0,1,0)] + 16*u2_B0[OPS_ACC4(0,-1,0)] - u2_B0[OPS_ACC4(0,-2,0)] - u2_B0[OPS_ACC4(0,2,0)])
)))));

    localeval_16 = ((idx[0] == 0) ? (
   (rc13)*inv_4*(35*u2_B0[OPS_ACC4(0,0,0)] - 104*u2_B0[OPS_ACC4(1,0,0)] +
      114*u2_B0[OPS_ACC4(2,0,0)] - 56*u2_B0[OPS_ACC4(3,0,0)] + 11*u2_B0[OPS_ACC4(4,0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc13)*inv_4*(-20*u2_B0[OPS_ACC4(0,0,0)] + 6*u2_B0[OPS_ACC4(1,0,0)] + 11*u2_B0[OPS_ACC4(-1,0,0)] +
      4*u2_B0[OPS_ACC4(2,0,0)] - u2_B0[OPS_ACC4(3,0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc13)*inv_4*(11*u2_B0[OPS_ACC4(-4,0,0)] + 35*u2_B0[OPS_ACC4(0,0,0)] - 56*u2_B0[OPS_ACC4(-3,0,0)] +
      114*u2_B0[OPS_ACC4(-2,0,0)] - 104*u2_B0[OPS_ACC4(-1,0,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc13)*inv_4*(-20*u2_B0[OPS_ACC4(0,0,0)] - u2_B0[OPS_ACC4(-3,0,0)] + 11*u2_B0[OPS_ACC4(1,0,0)] +
      6*u2_B0[OPS_ACC4(-1,0,0)] + 4*u2_B0[OPS_ACC4(-2,0,0)])
)
: (
   (rc13)*inv_4*(-30*u2_B0[OPS_ACC4(0,0,0)] +
      16*u2_B0[OPS_ACC4(1,0,0)] + 16*u2_B0[OPS_ACC4(-1,0,0)] - u2_B0[OPS_ACC4(-2,0,0)] - u2_B0[OPS_ACC4(2,0,0)])
)))));

    localeval_17 = (rc13)*inv_5*(-30*u2_B0[OPS_ACC4(0,0,0)] + 16*u2_B0[OPS_ACC4(0,0,-1)] - u2_B0[OPS_ACC4(0,0,-2)] +
      16*u2_B0[OPS_ACC4(0,0,1)] - u2_B0[OPS_ACC4(0,0,2)]);

    localeval_18 = ((idx[1] == 0) ? (
   inv_0*(-rc12*wk2_B0[OPS_ACC1(0,4,0)] - 3*wk2_B0[OPS_ACC1(0,2,0)] +
      (rc11)*wk2_B0[OPS_ACC1(0,3,0)] - rc10*wk2_B0[OPS_ACC1(0,0,0)] + 4*wk2_B0[OPS_ACC1(0,1,0)])
)
: ((idx[1] == 1) ? (

        (rc13)*inv_0*(-3*wk2_B0[OPS_ACC1(0,-1,0)] - 6*wk2_B0[OPS_ACC1(0,2,0)] + wk2_B0[OPS_ACC1(0,3,0)] -
      10*wk2_B0[OPS_ACC1(0,0,0)] + 18*wk2_B0[OPS_ACC1(0,1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(-4*wk2_B0[OPS_ACC1(0,-1,0)] + 3*wk2_B0[OPS_ACC1(0,-2,0)] + (rc12)*wk2_B0[OPS_ACC1(0,-4,0)] -
      rc11*wk2_B0[OPS_ACC1(0,-3,0)] + (rc10)*wk2_B0[OPS_ACC1(0,0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(-18*wk2_B0[OPS_ACC1(0,-1,0)] + 6*wk2_B0[OPS_ACC1(0,-2,0)] - wk2_B0[OPS_ACC1(0,-3,0)] +
      10*wk2_B0[OPS_ACC1(0,0,0)] + 3*wk2_B0[OPS_ACC1(0,1,0)])
)
: (
   (rc13)*inv_0*(-8*wk2_B0[OPS_ACC1(0,-1,0)] +
      8*wk2_B0[OPS_ACC1(0,1,0)] - wk2_B0[OPS_ACC1(0,2,0)] + wk2_B0[OPS_ACC1(0,-2,0)])
)))));

    localeval_19 = (rc13)*inv_2*(-8*wk2_B0[OPS_ACC1(0,0,-1)] + wk2_B0[OPS_ACC1(0,0,-2)] - wk2_B0[OPS_ACC1(0,0,2)] +
      8*wk2_B0[OPS_ACC1(0,0,1)]);

    localeval_20 = (rc13)*inv_2*(wk4_B0[OPS_ACC13(0,0,-2)] + 8*wk4_B0[OPS_ACC13(0,0,1)] - wk4_B0[OPS_ACC13(0,0,2)] -
      8*wk4_B0[OPS_ACC13(0,0,-1)]);

    localeval_21 = ((idx[1] == 0) ? (
   inv_0*(4*wk5_B0[OPS_ACC2(0,1,0)] - rc10*wk5_B0[OPS_ACC2(0,0,0)] +
      (rc11)*wk5_B0[OPS_ACC2(0,3,0)] - 3*wk5_B0[OPS_ACC2(0,2,0)] - rc12*wk5_B0[OPS_ACC2(0,4,0)])
)
: ((idx[1] == 1) ? (

        (rc13)*inv_0*(18*wk5_B0[OPS_ACC2(0,1,0)] - 10*wk5_B0[OPS_ACC2(0,0,0)] + wk5_B0[OPS_ACC2(0,3,0)] -
      6*wk5_B0[OPS_ACC2(0,2,0)] - 3*wk5_B0[OPS_ACC2(0,-1,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc10)*wk5_B0[OPS_ACC2(0,0,0)] - rc11*wk5_B0[OPS_ACC2(0,-3,0)] + (rc12)*wk5_B0[OPS_ACC2(0,-4,0)] +
      3*wk5_B0[OPS_ACC2(0,-2,0)] - 4*wk5_B0[OPS_ACC2(0,-1,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc13)*inv_0*(3*wk5_B0[OPS_ACC2(0,1,0)] + 10*wk5_B0[OPS_ACC2(0,0,0)] - wk5_B0[OPS_ACC2(0,-3,0)] +
      6*wk5_B0[OPS_ACC2(0,-2,0)] - 18*wk5_B0[OPS_ACC2(0,-1,0)])
)
: (
   (rc13)*inv_0*(8*wk5_B0[OPS_ACC2(0,1,0)] -
      8*wk5_B0[OPS_ACC2(0,-1,0)] + wk5_B0[OPS_ACC2(0,-2,0)] - wk5_B0[OPS_ACC2(0,2,0)])
)))));

    localeval_22 = (rc13)*inv_2*(8*wk7_B0[OPS_ACC9(0,0,1)] - wk7_B0[OPS_ACC9(0,0,2)] + wk7_B0[OPS_ACC9(0,0,-2)] -
      8*wk7_B0[OPS_ACC9(0,0,-1)]);

    localeval_23 = (rc13)*inv_2*(8*wk8_B0[OPS_ACC0(0,0,1)] - wk8_B0[OPS_ACC0(0,0,2)] + wk8_B0[OPS_ACC0(0,0,-2)] -
      8*wk8_B0[OPS_ACC0(0,0,-1)]);

    Residual1_B0[OPS_ACC16(0,0,0)] = rcinv39*localeval_6*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] +
      (rc11)*wk2_B0[OPS_ACC1(0,0,0)] - rc25*wk6_B0[OPS_ACC12(0,0,0)]) + rcinv39*localeval_7*(wk0_B0[OPS_ACC10(0,0,0)] +
      wk8_B0[OPS_ACC0(0,0,0)]) + rcinv39*localeval_8*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)] + rcinv39*(localeval_10 +
      localeval_11*pow(D11_B0[OPS_ACC14(0,0,0)], 2) + (rc40)*localeval_21*D11_B0[OPS_ACC14(0,0,0)] + (rc40)*localeval_23
      + (rc11)*localeval_9 +
      D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)] +
      Residual1_B0[OPS_ACC16(0,0,0)];

    Residual2_B0[OPS_ACC17(0,0,0)] = rcinv39*localeval_6*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)]) + rcinv39*localeval_7*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)]) + rcinv39*localeval_8*((rc11)*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] -
      rc25*wk2_B0[OPS_ACC1(0,0,0)] - rc25*wk6_B0[OPS_ACC12(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)] +
      rcinv39*((rc11)*localeval_12*pow(D11_B0[OPS_ACC14(0,0,0)], 2) + localeval_13 + localeval_14 +
      (rc40)*localeval_18*D11_B0[OPS_ACC14(0,0,0)] + (rc40)*localeval_22*D11_B0[OPS_ACC14(0,0,0)] +
      (rc11)*D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)] +
      Residual2_B0[OPS_ACC17(0,0,0)];

    Residual3_B0[OPS_ACC19(0,0,0)] = rcinv39*localeval_6*(wk0_B0[OPS_ACC10(0,0,0)] + wk8_B0[OPS_ACC0(0,0,0)]) +
      rcinv39*localeval_7*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] - rc25*wk2_B0[OPS_ACC1(0,0,0)] +
      (rc11)*wk6_B0[OPS_ACC12(0,0,0)]) + rcinv39*localeval_8*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)] + rcinv39*(localeval_15*pow(D11_B0[OPS_ACC14(0,0,0)], 2) +
      localeval_16 + (rc11)*localeval_17 + (rc40)*localeval_19 + (rc40)*localeval_20*D11_B0[OPS_ACC14(0,0,0)] +
      D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)] +
      Residual3_B0[OPS_ACC19(0,0,0)];

    Residual4_B0[OPS_ACC18(0,0,0)] = rcinv39*rcinv41*rcinv7*rcinv8*localeval_0*localeval_7 +
      rcinv39*rcinv41*rcinv7*rcinv8*localeval_4*localeval_8*pow(D11_B0[OPS_ACC14(0,0,0)], 2) +
      rcinv39*rcinv41*rcinv7*rcinv8*localeval_5*localeval_6 +
      rcinv39*rcinv41*rcinv7*rcinv8*(localeval_1*pow(D11_B0[OPS_ACC14(0,0,0)], 2) + localeval_2 + localeval_3 +
      localeval_4*D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)] +
      rcinv39*localeval_6*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*u1_B0[OPS_ACC11(0,0,0)] + rcinv39*localeval_6*(wk0_B0[OPS_ACC10(0,0,0)] +
      wk8_B0[OPS_ACC0(0,0,0)])*u2_B0[OPS_ACC4(0,0,0)] +
      rcinv39*localeval_6*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] + (rc11)*wk2_B0[OPS_ACC1(0,0,0)] -
      rc25*wk6_B0[OPS_ACC12(0,0,0)])*u0_B0[OPS_ACC8(0,0,0)] +
      rcinv39*localeval_7*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)])*u1_B0[OPS_ACC11(0,0,0)] + rcinv39*localeval_7*(wk0_B0[OPS_ACC10(0,0,0)] +
      wk8_B0[OPS_ACC0(0,0,0)])*u0_B0[OPS_ACC8(0,0,0)] +
      rcinv39*localeval_7*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] - rc25*wk2_B0[OPS_ACC1(0,0,0)] +
      (rc11)*wk6_B0[OPS_ACC12(0,0,0)])*u2_B0[OPS_ACC4(0,0,0)] +
      rcinv39*localeval_8*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*u0_B0[OPS_ACC8(0,0,0)] +
      rcinv39*localeval_8*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*u2_B0[OPS_ACC4(0,0,0)] +
      rcinv39*localeval_8*((rc11)*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] - rc25*wk2_B0[OPS_ACC1(0,0,0)] -
      rc25*wk6_B0[OPS_ACC12(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*u1_B0[OPS_ACC11(0,0,0)] +
      rcinv39*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*mu_B0[OPS_ACC5(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      rcinv39*(D11_B0[OPS_ACC14(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)] +
      wk5_B0[OPS_ACC2(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk5_B0[OPS_ACC2(0,0,0)] +
      rcinv39*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*mu_B0[OPS_ACC5(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      rcinv39*(D11_B0[OPS_ACC14(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)] +
      wk3_B0[OPS_ACC6(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk3_B0[OPS_ACC6(0,0,0)] + rcinv39*(wk0_B0[OPS_ACC10(0,0,0)] +
      wk8_B0[OPS_ACC0(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk0_B0[OPS_ACC10(0,0,0)] + rcinv39*(wk0_B0[OPS_ACC10(0,0,0)] +
      wk8_B0[OPS_ACC0(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk8_B0[OPS_ACC0(0,0,0)] +
      rcinv39*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] - rc25*wk2_B0[OPS_ACC1(0,0,0)] +
      (rc11)*wk6_B0[OPS_ACC12(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk6_B0[OPS_ACC12(0,0,0)] +
      rcinv39*(-rc25*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] + (rc11)*wk2_B0[OPS_ACC1(0,0,0)] -
      rc25*wk6_B0[OPS_ACC12(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*wk2_B0[OPS_ACC1(0,0,0)] +
      rcinv39*((rc11)*D11_B0[OPS_ACC14(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] - rc25*wk2_B0[OPS_ACC1(0,0,0)] -
      rc25*wk6_B0[OPS_ACC12(0,0,0)])*D11_B0[OPS_ACC14(0,0,0)]*mu_B0[OPS_ACC5(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)] +
      rcinv39*(localeval_10 + localeval_11*pow(D11_B0[OPS_ACC14(0,0,0)], 2) +
      (rc40)*localeval_21*D11_B0[OPS_ACC14(0,0,0)] + (rc40)*localeval_23 + (rc11)*localeval_9 +
      D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk1_B0[OPS_ACC3(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*u0_B0[OPS_ACC8(0,0,0)]
      + rcinv39*((rc11)*localeval_12*pow(D11_B0[OPS_ACC14(0,0,0)], 2) + localeval_13 + localeval_14 +
      (rc40)*localeval_18*D11_B0[OPS_ACC14(0,0,0)] + (rc40)*localeval_22*D11_B0[OPS_ACC14(0,0,0)] +
      (rc11)*D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk4_B0[OPS_ACC13(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*u1_B0[OPS_ACC11(0,0,0)]
      + rcinv39*(localeval_15*pow(D11_B0[OPS_ACC14(0,0,0)], 2) + localeval_16 + (rc11)*localeval_17 +
      (rc40)*localeval_19 + (rc40)*localeval_20*D11_B0[OPS_ACC14(0,0,0)] +
      D11_B0[OPS_ACC14(0,0,0)]*SD111_B0[OPS_ACC15(0,0,0)]*wk7_B0[OPS_ACC9(0,0,0)])*mu_B0[OPS_ACC5(0,0,0)]*u2_B0[OPS_ACC4(0,0,0)]
      + Residual4_B0[OPS_ACC18(0,0,0)];

}

 void opensbliblock00Kernel065(const double *Residual0_B0, const double *Residual1_B0, const double *Residual2_B0, const
double *Residual3_B0, const double *Residual4_B0, double *rhou1_B0, double *tempRK_rhou2_B0, double *rhoE_B0, double
*tempRK_rhou1_B0, double *tempRK_rhou0_B0, double *rhou2_B0, double *rho_B0, double *tempRK_rhoE_B0, double *rhou0_B0,
double *tempRK_rho_B0, const double *rkA, const double *rkB)
{
   tempRK_rho_B0[OPS_ACC14(0,0,0)] = dt*Residual0_B0[OPS_ACC0(0,0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC14(0,0,0)];

   rho_B0[OPS_ACC11(0,0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC14(0,0,0)] + rho_B0[OPS_ACC11(0,0,0)];

   tempRK_rhou0_B0[OPS_ACC9(0,0,0)] = dt*Residual1_B0[OPS_ACC1(0,0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC9(0,0,0)];

   rhou0_B0[OPS_ACC13(0,0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC9(0,0,0)] + rhou0_B0[OPS_ACC13(0,0,0)];

   tempRK_rhou1_B0[OPS_ACC8(0,0,0)] = dt*Residual2_B0[OPS_ACC2(0,0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC8(0,0,0)];

   rhou1_B0[OPS_ACC5(0,0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC8(0,0,0)] + rhou1_B0[OPS_ACC5(0,0,0)];

   tempRK_rhou2_B0[OPS_ACC6(0,0,0)] = dt*Residual3_B0[OPS_ACC3(0,0,0)] + rkA[0]*tempRK_rhou2_B0[OPS_ACC6(0,0,0)];

   rhou2_B0[OPS_ACC10(0,0,0)] = rkB[0]*tempRK_rhou2_B0[OPS_ACC6(0,0,0)] + rhou2_B0[OPS_ACC10(0,0,0)];

   tempRK_rhoE_B0[OPS_ACC12(0,0,0)] = dt*Residual4_B0[OPS_ACC4(0,0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC12(0,0,0)];

   rhoE_B0[OPS_ACC7(0,0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC12(0,0,0)] + rhoE_B0[OPS_ACC7(0,0,0)];

}

 void opensbliblock00Kernel063(const double *rhou1_B0, const double *rhoE_B0, const double *rhou2_B0, const double
*rho_B0, const double *rhou0_B0, double *rhou2_mean_B0, double *rhou0_mean_B0, double *rhou0u0_mean_B0, double
*rhou2u2_mean_B0, double *rho_mean_B0, double *rhoE_mean_B0, double *rhou1_mean_B0, double *rhou1u1_mean_B0, double
*rhou0u2_mean_B0, double *rhou0u1_mean_B0, double *rhou1u2_mean_B0)
{
   double rho_inv = 0.0;
   rho_mean_B0[OPS_ACC9(0,0,0)] = rho_B0[OPS_ACC3(0,0,0)] + rho_mean_B0[OPS_ACC9(0,0,0)];

   rhou0_mean_B0[OPS_ACC6(0,0,0)] = rhou0_B0[OPS_ACC4(0,0,0)] + rhou0_mean_B0[OPS_ACC6(0,0,0)];

   rhou1_mean_B0[OPS_ACC11(0,0,0)] = rhou1_B0[OPS_ACC0(0,0,0)] + rhou1_mean_B0[OPS_ACC11(0,0,0)];

   rhou2_mean_B0[OPS_ACC5(0,0,0)] = rhou2_B0[OPS_ACC2(0,0,0)] + rhou2_mean_B0[OPS_ACC5(0,0,0)];

   rhoE_mean_B0[OPS_ACC10(0,0,0)] = rhoE_B0[OPS_ACC1(0,0,0)] + rhoE_mean_B0[OPS_ACC10(0,0,0)];

   rho_inv = 1.0/rho_B0[OPS_ACC3(0,0,0)];

   rhou0u0_mean_B0[OPS_ACC7(0,0,0)] = rho_inv*pow(rhou0_B0[OPS_ACC4(0,0,0)], 2) + rhou0u0_mean_B0[OPS_ACC7(0,0,0)];

   rhou1u1_mean_B0[OPS_ACC12(0,0,0)] = rho_inv*pow(rhou1_B0[OPS_ACC0(0,0,0)], 2) + rhou1u1_mean_B0[OPS_ACC12(0,0,0)];

   rhou2u2_mean_B0[OPS_ACC8(0,0,0)] = rho_inv*pow(rhou2_B0[OPS_ACC2(0,0,0)], 2) + rhou2u2_mean_B0[OPS_ACC8(0,0,0)];

    rhou0u1_mean_B0[OPS_ACC14(0,0,0)] = rho_inv*rhou0_B0[OPS_ACC4(0,0,0)]*rhou1_B0[OPS_ACC0(0,0,0)] +
      rhou0u1_mean_B0[OPS_ACC14(0,0,0)];

    rhou1u2_mean_B0[OPS_ACC15(0,0,0)] = rho_inv*rhou1_B0[OPS_ACC0(0,0,0)]*rhou2_B0[OPS_ACC2(0,0,0)] +
      rhou1u2_mean_B0[OPS_ACC15(0,0,0)];

    rhou0u2_mean_B0[OPS_ACC13(0,0,0)] = rho_inv*rhou0_B0[OPS_ACC4(0,0,0)]*rhou2_B0[OPS_ACC2(0,0,0)] +
      rhou0u2_mean_B0[OPS_ACC13(0,0,0)];

}

 void opensbliblock00Kernel064(double *rhou2_mean_B0, double *rhou0_mean_B0, double *rhou0u0_mean_B0, double
*rhou2u2_mean_B0, double *rho_mean_B0, double *rhoE_mean_B0, double *rhou1_mean_B0, double *rhou1u1_mean_B0, double
*rhou0u2_mean_B0, double *rhou0u1_mean_B0, double *rhou1u2_mean_B0)
{
   rho_mean_B0[OPS_ACC4(0,0,0)] = rcinv42*rho_mean_B0[OPS_ACC4(0,0,0)];

   rhou0_mean_B0[OPS_ACC1(0,0,0)] = rcinv42*rhou0_mean_B0[OPS_ACC1(0,0,0)];

   rhou1_mean_B0[OPS_ACC6(0,0,0)] = rcinv42*rhou1_mean_B0[OPS_ACC6(0,0,0)];

   rhou2_mean_B0[OPS_ACC0(0,0,0)] = rcinv42*rhou2_mean_B0[OPS_ACC0(0,0,0)];

   rhoE_mean_B0[OPS_ACC5(0,0,0)] = rcinv42*rhoE_mean_B0[OPS_ACC5(0,0,0)];

   rhou0u0_mean_B0[OPS_ACC2(0,0,0)] = rcinv42*rhou0u0_mean_B0[OPS_ACC2(0,0,0)];

   rhou1u1_mean_B0[OPS_ACC7(0,0,0)] = rcinv42*rhou1u1_mean_B0[OPS_ACC7(0,0,0)];

   rhou2u2_mean_B0[OPS_ACC3(0,0,0)] = rcinv42*rhou2u2_mean_B0[OPS_ACC3(0,0,0)];

   rhou0u1_mean_B0[OPS_ACC9(0,0,0)] = rcinv42*rhou0u1_mean_B0[OPS_ACC9(0,0,0)];

   rhou1u2_mean_B0[OPS_ACC10(0,0,0)] = rcinv42*rhou1u2_mean_B0[OPS_ACC10(0,0,0)];

   rhou0u2_mean_B0[OPS_ACC8(0,0,0)] = rcinv42*rhou0u2_mean_B0[OPS_ACC8(0,0,0)];

}

#endif
