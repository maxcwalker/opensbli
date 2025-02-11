//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel042;
int ydim0_opensbliblock00Kernel042;
int xdim1_opensbliblock00Kernel042;
int ydim1_opensbliblock00Kernel042;
int xdim2_opensbliblock00Kernel042;
int ydim2_opensbliblock00Kernel042;
int xdim3_opensbliblock00Kernel042;
int ydim3_opensbliblock00Kernel042;
int xdim4_opensbliblock00Kernel042;
int ydim4_opensbliblock00Kernel042;
int xdim5_opensbliblock00Kernel042;
int ydim5_opensbliblock00Kernel042;
int xdim6_opensbliblock00Kernel042;
int ydim6_opensbliblock00Kernel042;
int xdim7_opensbliblock00Kernel042;
int ydim7_opensbliblock00Kernel042;

//user function
inline 
 void opensbliblock00Kernel042(ptr_double rhoE_B0,
  ptr_double rho_B0,
  ptr_double rhou0_B0,
  ptr_double rhou1_B0,
  ptr_double rhou2_B0,
  ptr_double x0_B0,
  ptr_double x2_B0,
  ptr_double x1_B0,
  const int *idx)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
     double wall_0 = 0.0;
   OPS_ACC(x0_B0, 0,0,0) = Delta0block0*idx[0];

    OPS_ACC(x1_B0, 0,0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

     wall_0 =  ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a);


   OPS_ACC(x2_B0, 0,0,0) = Delta2block0*idx[2];

    rhou0 = ((OPS_ACC(x1_B0, 0,0,0) - wall_0 < 3.06430643064306) ? (
   2.98010537508574e-7 + 2.17137893910512e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 27) +
      0.0252449626304193*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 14) + 1.72288869974662e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 44) +
      30.6037023000319*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 7) + 2.12843517734356e-5*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 20) + 0.70500345124088*(OPS_ACC(x1_B0, 0,0,0) - wall_0)
      + 1.32482987815919e-15*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 42) + 4.35046042189372e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 35) +
      1.28472097728017*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 10) + 5.40448458421883*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 9) +
      7.67673035724381e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 36) + 0.000211166618419883*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 19) +
      5.2776959398151e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 24) + 1.30783741946686e-11*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 34) +
      3.99039681831242*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) + 0.000518125029896123*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 18) +
      0.133865868334425*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 13) + 6.70874505326609e-20*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 48) +
      19.9087894702914*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) +
      2.05227695456625e-11*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 33) + 6.89065718764235e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 43) +
      1.36444444761311e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 49) + 9.94338036470296e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 26) +
      2.29770520340474e-7*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 25) - 3.14685525043011e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 45) -
      5.54663857336047e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 39) - 2.50967722926707e-9*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 29) -
      3.75537943671666e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 28) - 1.2970382233701e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 38) -
      19.4490714625157*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 8) - 9.84001869224845*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) -
      1.17917798848888e-9*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 30) - 3.08824172034029e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 31) -
      1.36055618730943*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) - 0.00549316667051347*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 16) -
      29.7489710517421*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) -
      1.92048017861274e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 23) - 8.27802057742277e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 22) -
      1.0958051866497*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 11) - 0.000296044358818979*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 17) -
      8.74763938491298e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 47) - 0.0811820521446499*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 12) -
      0.0110103876402037*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 15) - 8.9227208199772e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 37) -
      2.26097375236549e-17*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 46) - 2.57705290058786e-11*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 32) -
      3.9396145861337e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 41) - 1.94065718568835e-19*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 50) -
      1.33377666289244e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 40) - 1.46567217885769e-5*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 21)
)
: (

      0.999998963470747
));

    rhou1 = ((OPS_ACC(x1_B0, 0,0,0) - wall_0 < 3.06430643064306) ? (
   -4.54052089570034e-9 + 8.1880548886519e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 15) +
      3.15590063406684e-7*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 20) +
      0.040425268842647*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) +
      2.0154496007228e-11*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 28) + 0.0242329259197411*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 10) +
      0.000291381826494586*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 14) + 6.73898204799131e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 25) +
      1.85416600135407e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 37) + 2.46346518485074e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 35) +
      3.55996755975014e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 43) + 5.96015141953445e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 34) +
      7.19961160237273e-21*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 49) + 5.11019492260991e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 26) +
      0.000271933313720515*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 13) + 1.02819050245244e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 44) +
      1.20076383298111e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 19) + 0.0802767538273824*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 8) +
      1.60952352657344e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 27) + 0.000675804420077356*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) +
      3.46646111091862e-7*(OPS_ACC(x1_B0, 0,0,0) - wall_0) + 3.95659671623606e-20*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 45) +
      0.00601485560417741*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) + 5.44509393295634e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0),
      42) + 4.56390658216947e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 33) + 5.77610054249051e-15*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 36) +
      9.37278284543165e-7*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 18) - 3.43043397023927e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 32) -
      1.97603337376184e-9*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 24) -
      0.0173159424327144*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) -
      1.08374437841993e-21*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 48) - 3.84328807722218e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 22) -
      0.00174020189862055*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) - 1.98806894410881e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 31) -
      9.78788444400239e-22*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 50) - 0.00248243956904384*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 12) -
      1.09492602247293e-19*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 46) - 7.69040185413285e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 29) -
      8.33906981903121e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 17) - 0.0687165671173466*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 7) -
      8.2833798617672e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 41) - 5.42856439731251e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 38) -
      2.9053357388848e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 39) - 0.00141134699427674*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 11) -
      8.33338364767477e-17*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 40) - 5.82577714670976e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 30) -
      1.19380225994185e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 21) - 4.82177190833371e-20*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 47) -
      0.0600438180785648*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 9) - 1.43879912982306e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 23) -
      3.04892028367409e-5*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 16)
)
: (
   0.00193194788504255
));

    T = ((OPS_ACC(x1_B0, 0,0,0) - wall_0 < 3.06430643064306) ? (
   1.36969826742154 + 0.0992963978742254*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 13) +
      2.86617027971165e-15*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 41) + 2.0268337344622*(OPS_ACC(x1_B0, 0,0,0) - wall_0) + 42.4845202774873*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 9)
      + 0.00582133304112724*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 16) + 6.64980553213925e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 22) +
      1.13879429024366e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 32) + 1.1308454106724e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 38) +
      0.00030145027063903*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 18) + 1.26189273290074e-9*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 30) +
      97.5431351348556*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 7) + 4.37375087293463e-19*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 48) +
      3.91704143820735e-6*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 23) + 1.09546598579685*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 12) +
      5.19322330244578e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 31) + 2.50553276623531e-19*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 50) +
      7.12556727621899e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 39) +
      43.2952051988253*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) +
      5.94617332276474*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) + 2.23675251451957e-14*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 40) +
      7.43073974634038e-10*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 29) + 0.00339078474382293*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 17) +
      1.26410264823667e-17*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 47) + 8.92551641671999e-7*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 24) +
      2.69256935130225e-17*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 46) - 4.43354296488102e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 27) -
      1.38796867965428e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 37) - 0.0983732879910376*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 14) -
      81.9540739658969*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 8) - 0.0214185365200827*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 15) -
      3.36981953913679*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) - 1.26838474894301e-11*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 34) -
      1.08493288242023e-7*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 26) - 8.8861672751871e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 43) -
      0.000251816345600445*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 19) - 1.86978885577543e-18*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 49) -
      17.5412907280677*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) - 8.58959654131943e-9*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 28)
      - 3.48338396716385e-8*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 25) - 1.66670032495984e-17*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 45) -
      77.8084617211988*((OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)*(OPS_ACC(x1_B0, 0,0,0) - wall_0)) -
      2.75031316978532e-16*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 44) - 10.1079111210035*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 10) -
      1.17119752904835e-15*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 42) - 1.34176860771771*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 11) -
      7.56013271459707e-13*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 33) - 6.14617333062365e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 35) -
      1.29935522041302e-5*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 21) - 1.64571857521028e-12*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 36) -
      0.00011149693097182*pow((OPS_ACC(x1_B0, 0,0,0) - wall_0), 20)
)
: (
   1.00000103348235
));

   rho = 1.0/T;

   OPS_ACC(rho_B0, 0,0,0) = rho;

   OPS_ACC(rhou0_B0, 0,0,0) = rhou0;

   OPS_ACC(rhou1_B0, 0,0,0) = rhou1;

   OPS_ACC(rhoE_B0, 0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   OPS_ACC(rhou2_B0, 0,0,0) = 0.0;

}


void opensbliblock00Kernel042_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  int *p_a8,
  int arg_idx0, int arg_idx1, int arg_idx2,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7)
  #pragma acc loop
  #endif
  for ( int n_z=0; n_z<z_size; n_z++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_y=0; n_y<y_size; n_y++ ){
      #ifdef OPS_GPU
      #pragma acc loop
      #endif
      for ( int n_x=0; n_x<x_size; n_x++ ){
        int arg_idx[] = {arg_idx0+n_x, arg_idx1+n_y, arg_idx2+n_z};
        ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel042*1*1 + n_z*xdim0_opensbliblock00Kernel042*ydim0_opensbliblock00Kernel042*1*1, xdim0_opensbliblock00Kernel042, ydim0_opensbliblock00Kernel042};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel042*1*1 + n_z*xdim1_opensbliblock00Kernel042*ydim1_opensbliblock00Kernel042*1*1, xdim1_opensbliblock00Kernel042, ydim1_opensbliblock00Kernel042};
        ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel042*1*1 + n_z*xdim2_opensbliblock00Kernel042*ydim2_opensbliblock00Kernel042*1*1, xdim2_opensbliblock00Kernel042, ydim2_opensbliblock00Kernel042};
        ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel042*1*1 + n_z*xdim3_opensbliblock00Kernel042*ydim3_opensbliblock00Kernel042*1*1, xdim3_opensbliblock00Kernel042, ydim3_opensbliblock00Kernel042};
        ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel042*1*1 + n_z*xdim4_opensbliblock00Kernel042*ydim4_opensbliblock00Kernel042*1*1, xdim4_opensbliblock00Kernel042, ydim4_opensbliblock00Kernel042};
        ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel042*1*1 + n_z*xdim5_opensbliblock00Kernel042*ydim5_opensbliblock00Kernel042*1*1, xdim5_opensbliblock00Kernel042, ydim5_opensbliblock00Kernel042};
        ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel042*1*1 + n_z*xdim6_opensbliblock00Kernel042*ydim6_opensbliblock00Kernel042*1*1, xdim6_opensbliblock00Kernel042, ydim6_opensbliblock00Kernel042};
        ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel042*1*1 + n_z*xdim7_opensbliblock00Kernel042*ydim7_opensbliblock00Kernel042*1*1, xdim7_opensbliblock00Kernel042, ydim7_opensbliblock00Kernel042};
        opensbliblock00Kernel042( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7,
          arg_idx);
      }
    }
  }
}
