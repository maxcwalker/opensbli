// Auto-generated at 2024-10-10 09:28:37.158082 by ops-translator legacy

__constant__ int dims_opensbliblock00Kernel067 [9][2];
static int dims_opensbliblock00Kernel067_h [9][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void opensbliblock00Kernel067_gpu(ACC<double> &rhoE_B0,
  ACC<double> &rho_B0,
  ACC<double> &rhou0_B0,
  ACC<double> &rhou1_B0,
  ACC<double> &rhou2_B0,
  ACC<double> &x0_B0,
  ACC<double> &x2_B0,
  ACC<double> &x1_B0,
  const int *idx)
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


//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_opensbliblock00Kernel067(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
double* __restrict arg5,
double* __restrict arg6,
double* __restrict arg7,
int arg_idx0, int arg_idx1, int arg_idx2,
int size0,
int size1,
int size2) {
    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[3];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;
    arg_idx[2] = arg_idx2+idx_z;

    arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[0][0] * dims_opensbliblock00Kernel067[0][1];
    arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[1][0] * dims_opensbliblock00Kernel067[1][1];
    arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[2][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[2][0] * dims_opensbliblock00Kernel067[2][1];
    arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[3][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[3][0] * dims_opensbliblock00Kernel067[3][1];
    arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[4][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[4][0] * dims_opensbliblock00Kernel067[4][1];
    arg5 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[5][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[5][0] * dims_opensbliblock00Kernel067[5][1];
    arg6 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[6][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[6][0] * dims_opensbliblock00Kernel067[6][1];
    arg7 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[7][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[7][0] * dims_opensbliblock00Kernel067[7][1];

    if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
        ACC<double> argp0(dims_opensbliblock00Kernel067[0][0], dims_opensbliblock00Kernel067[0][1], arg0);
        ACC<double> argp1(dims_opensbliblock00Kernel067[1][0], dims_opensbliblock00Kernel067[1][1], arg1);
        ACC<double> argp2(dims_opensbliblock00Kernel067[2][0], dims_opensbliblock00Kernel067[2][1], arg2);
        ACC<double> argp3(dims_opensbliblock00Kernel067[3][0], dims_opensbliblock00Kernel067[3][1], arg3);
        ACC<double> argp4(dims_opensbliblock00Kernel067[4][0], dims_opensbliblock00Kernel067[4][1], arg4);
        ACC<double> argp5(dims_opensbliblock00Kernel067[5][0], dims_opensbliblock00Kernel067[5][1], arg5);
        ACC<double> argp6(dims_opensbliblock00Kernel067[6][0], dims_opensbliblock00Kernel067[6][1], arg6);
        ACC<double> argp7(dims_opensbliblock00Kernel067[7][0], dims_opensbliblock00Kernel067[7][1], arg7);
        opensbliblock00Kernel067_gpu(
         argp0, argp1, argp2, argp3, argp4,
         argp5, argp6, argp7, arg_idx);
    }

} //End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8) {
#else
void ops_par_loop_opensbliblock00Kernel067_execute(ops_kernel_descriptor *desc) {
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
    ops_arg arg5 = desc->args[5];
    ops_arg arg6 = desc->args[6];
    ops_arg arg7 = desc->args[7];
    ops_arg arg8 = desc->args[8];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[9];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;

#if CHECKPOINTING && !OPS_LAZY
    if (!ops_checkpointing_before(args, 9, range, 0)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 0, "opensbliblock00Kernel067");
        block->instance->OPS_kernels[0].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
    int arg_idx[3];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 9, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0]+start_indx[0];
    arg_idx[1] = sb->decomp_disp[1]+start_indx[1];
    arg_idx[2] = sb->decomp_disp[2]+start_indx[2];
#endif //OPS_LAZY
#else //OPS_MPI
    arg_idx[0] = start_indx[0];
    arg_idx[1] = start_indx[1];
    arg_idx[2] = start_indx[2];
#endif //OPS_MPI

    int xdim0 = args[0].dat->size[0];
    int ydim0 = args[0].dat->size[1];
    int xdim1 = args[1].dat->size[0];
    int ydim1 = args[1].dat->size[1];
    int xdim2 = args[2].dat->size[0];
    int ydim2 = args[2].dat->size[1];
    int xdim3 = args[3].dat->size[0];
    int ydim3 = args[3].dat->size[1];
    int xdim4 = args[4].dat->size[0];
    int ydim4 = args[4].dat->size[1];
    int xdim5 = args[5].dat->size[0];
    int ydim5 = args[5].dat->size[1];
    int xdim6 = args[6].dat->size[0];
    int ydim6 = args[6].dat->size[1];
    int xdim7 = args[7].dat->size[0];
    int ydim7 = args[7].dat->size[1];

    if (xdim0 != dims_opensbliblock00Kernel067_h[0][0] || ydim0 != dims_opensbliblock00Kernel067_h[0][1] || xdim1 != dims_opensbliblock00Kernel067_h[1][0] || ydim1 != dims_opensbliblock00Kernel067_h[1][1] || xdim2 != dims_opensbliblock00Kernel067_h[2][0] || ydim2 != dims_opensbliblock00Kernel067_h[2][1] || xdim3 != dims_opensbliblock00Kernel067_h[3][0] || ydim3 != dims_opensbliblock00Kernel067_h[3][1] || xdim4 != dims_opensbliblock00Kernel067_h[4][0] || ydim4 != dims_opensbliblock00Kernel067_h[4][1] || xdim5 != dims_opensbliblock00Kernel067_h[5][0] || ydim5 != dims_opensbliblock00Kernel067_h[5][1] || xdim6 != dims_opensbliblock00Kernel067_h[6][0] || ydim6 != dims_opensbliblock00Kernel067_h[6][1] || xdim7 != dims_opensbliblock00Kernel067_h[7][0] || ydim7 != dims_opensbliblock00Kernel067_h[7][1]) {
        dims_opensbliblock00Kernel067_h[0][0] = xdim0;
        dims_opensbliblock00Kernel067_h[0][1] = ydim0;
        dims_opensbliblock00Kernel067_h[1][0] = xdim1;
        dims_opensbliblock00Kernel067_h[1][1] = ydim1;
        dims_opensbliblock00Kernel067_h[2][0] = xdim2;
        dims_opensbliblock00Kernel067_h[2][1] = ydim2;
        dims_opensbliblock00Kernel067_h[3][0] = xdim3;
        dims_opensbliblock00Kernel067_h[3][1] = ydim3;
        dims_opensbliblock00Kernel067_h[4][0] = xdim4;
        dims_opensbliblock00Kernel067_h[4][1] = ydim4;
        dims_opensbliblock00Kernel067_h[5][0] = xdim5;
        dims_opensbliblock00Kernel067_h[5][1] = ydim5;
        dims_opensbliblock00Kernel067_h[6][0] = xdim6;
        dims_opensbliblock00Kernel067_h[6][1] = ydim6;
        dims_opensbliblock00Kernel067_h[7][0] = xdim7;
        dims_opensbliblock00Kernel067_h[7][1] = ydim7;

        hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel067, dims_opensbliblock00Kernel067_h, sizeof(dims_opensbliblock00Kernel067)));
    }


    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z +1);
    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
    long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
    long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
    long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
    long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);
    long long int dat6 = (block->instance->OPS_soa ? args[6].dat->type_size : args[6].dat->elem_size);
    long long int dat7 = (block->instance->OPS_soa ? args[7].dat->type_size : args[7].dat->elem_size);

    char *p_a[9];

//  =======================
//  set up initial pointers
//  =======================
    long long int base0 = args[0].dat->base_offset + 
             dat0 * 1 * (start_indx[0] * args[0].stencil->stride[0]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                      (start_indx[1] * args[0].stencil->stride[1]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                       args[0].dat->size[1] *
                      (start_indx[2] * args[0].stencil->stride[2]);
    p_a[0] = (char *)args[0].data_d + base0;

    long long int base1 = args[1].dat->base_offset + 
             dat1 * 1 * (start_indx[0] * args[1].stencil->stride[0]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                      (start_indx[1] * args[1].stencil->stride[1]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                       args[1].dat->size[1] *
                      (start_indx[2] * args[1].stencil->stride[2]);
    p_a[1] = (char *)args[1].data_d + base1;

    long long int base2 = args[2].dat->base_offset + 
             dat2 * 1 * (start_indx[0] * args[2].stencil->stride[0]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                      (start_indx[1] * args[2].stencil->stride[1]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                       args[2].dat->size[1] *
                      (start_indx[2] * args[2].stencil->stride[2]);
    p_a[2] = (char *)args[2].data_d + base2;

    long long int base3 = args[3].dat->base_offset + 
             dat3 * 1 * (start_indx[0] * args[3].stencil->stride[0]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                      (start_indx[1] * args[3].stencil->stride[1]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                       args[3].dat->size[1] *
                      (start_indx[2] * args[3].stencil->stride[2]);
    p_a[3] = (char *)args[3].data_d + base3;

    long long int base4 = args[4].dat->base_offset + 
             dat4 * 1 * (start_indx[0] * args[4].stencil->stride[0]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                      (start_indx[1] * args[4].stencil->stride[1]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                       args[4].dat->size[1] *
                      (start_indx[2] * args[4].stencil->stride[2]);
    p_a[4] = (char *)args[4].data_d + base4;

    long long int base5 = args[5].dat->base_offset + 
             dat5 * 1 * (start_indx[0] * args[5].stencil->stride[0]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                      (start_indx[1] * args[5].stencil->stride[1]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                       args[5].dat->size[1] *
                      (start_indx[2] * args[5].stencil->stride[2]);
    p_a[5] = (char *)args[5].data_d + base5;

    long long int base6 = args[6].dat->base_offset + 
             dat6 * 1 * (start_indx[0] * args[6].stencil->stride[0]);
    base6 = base6 + dat6 *
                       args[6].dat->size[0] *
                      (start_indx[1] * args[6].stencil->stride[1]);
    base6 = base6 + dat6 *
                       args[6].dat->size[0] *
                       args[6].dat->size[1] *
                      (start_indx[2] * args[6].stencil->stride[2]);
    p_a[6] = (char *)args[6].data_d + base6;

    long long int base7 = args[7].dat->base_offset + 
             dat7 * 1 * (start_indx[0] * args[7].stencil->stride[0]);
    base7 = base7 + dat7 *
                       args[7].dat->size[0] *
                      (start_indx[1] * args[7].stencil->stride[1]);
    base7 = base7 + dat7 *
                       args[7].dat->size[0] *
                       args[7].dat->size[1] *
                      (start_indx[2] * args[7].stencil->stride[2]);
    p_a[7] = (char *)args[7].data_d + base7;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 9);
    ops_halo_exchanges(args, 9, range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
    }


//call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_opensbliblock00Kernel067<<<grid, tblock >>> ( 
         (double *)p_a[0], (double *)p_a[1],
         (double *)p_a[2], (double *)p_a[3],
         (double *)p_a[4], (double *)p_a[5],
         (double *)p_a[6], (double *)p_a[7],
         arg_idx[0], arg_idx[1], arg_idx[2],
        x_size, y_size, z_size);

    }

    hipSafeCall(block->instance->ostream(), hipGetLastError());

    if (block->instance->OPS_diags>1) {
        hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[0].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 9);
    ops_set_halo_dirtybit3(&args[0], range);
    ops_set_halo_dirtybit3(&args[1], range);
    ops_set_halo_dirtybit3(&args[2], range);
    ops_set_halo_dirtybit3(&args[3], range);
    ops_set_halo_dirtybit3(&args[4], range);
    ops_set_halo_dirtybit3(&args[5], range);
    ops_set_halo_dirtybit3(&args[6], range);
    ops_set_halo_dirtybit3(&args[7], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg3);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg5);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg6);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg7);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8)
{
    ops_arg args[9];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;

    create_kerneldesc_and_enque("opensbliblock00Kernel067", args, 9, 0, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel067_execute);
}
#endif
