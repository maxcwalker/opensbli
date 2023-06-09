//
// auto-generated by ops.py//

//header
#include <cuda.h>
#define OPS_API 2
#define OPS_2D
#include "ops_lib_core.h"

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif
// global constants
__constant__ int niter;
__constant__ double dt;
__constant__ int block0np0;
__constant__ int block0np1;
__constant__ double Delta0block0;
__constant__ double Delta1block0;
__constant__ double Twall;
__constant__ double Minf;
__constant__ double gama;
__constant__ double RefT;
__constant__ double SuthT;
__constant__ double Re;
__constant__ double Pr;
__constant__ double gamma_m1;
__constant__ double inv_0;
__constant__ double inv_1;
__constant__ double inv_2;
__constant__ double inv_3;
__constant__ double tripA;
__constant__ double xts;
__constant__ double k_0;
__constant__ double omega_0;
__constant__ double H;
__constant__ double L;
__constant__ double a;
__constant__ double b;
__constant__ double rcinv4;
__constant__ double rcinv5;
__constant__ double rc6;
__constant__ double rc7;
__constant__ double rcinv8;
__constant__ double rcinv9;
__constant__ double rcinv10;
__constant__ double rc11;
__constant__ double rc12;
__constant__ double rc13;
__constant__ double rc14;
__constant__ double rcinv15;
__constant__ double rcinv16;
__constant__ double rc17;
__constant__ double rc18;
__constant__ double rc19;
__constant__ double rc20;
__constant__ double rc21;
__constant__ double rc22;
__constant__ double rc23;
__constant__ double rc24;
__constant__ double rc25;
__constant__ double rc26;
__constant__ double rc27;
__constant__ double rc28;
__constant__ double rc29;
__constant__ double rc30;
__constant__ double rc31;
__constant__ double rc32;
__constant__ double rc33;
__constant__ double rcinv34;
__constant__ double rcinv35;
__constant__ double rc36;
__constant__ double rcinv37;

void ops_init_backend() {}

void ops_decl_const_char(int dim, char const *type,
int size, char *dat, char const *name){
  ops_execute(OPS_instance::getOPSInstance());
  if (!strcmp(name,"niter")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(niter, dat, dim*size));
  }
  else
  if (!strcmp(name,"dt")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(dt, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(block0np0, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np1")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(block0np1, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta0block0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Delta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta1block0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Delta1block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Twall")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Twall, dat, dim*size));
  }
  else
  if (!strcmp(name,"Minf")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Minf, dat, dim*size));
  }
  else
  if (!strcmp(name,"gama")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(gama, dat, dim*size));
  }
  else
  if (!strcmp(name,"RefT")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(RefT, dat, dim*size));
  }
  else
  if (!strcmp(name,"SuthT")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(SuthT, dat, dim*size));
  }
  else
  if (!strcmp(name,"Re")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Re, dat, dim*size));
  }
  else
  if (!strcmp(name,"Pr")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(Pr, dat, dim*size));
  }
  else
  if (!strcmp(name,"gamma_m1")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(gamma_m1, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(inv_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_1")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(inv_1, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_2")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(inv_2, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_3")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(inv_3, dat, dim*size));
  }
  else
  if (!strcmp(name,"tripA")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(tripA, dat, dim*size));
  }
  else
  if (!strcmp(name,"xts")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(xts, dat, dim*size));
  }
  else
  if (!strcmp(name,"k_0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(k_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_0")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(omega_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"H")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(H, dat, dim*size));
  }
  else
  if (!strcmp(name,"L")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(L, dat, dim*size));
  }
  else
  if (!strcmp(name,"a")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(a, dat, dim*size));
  }
  else
  if (!strcmp(name,"b")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(b, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv4")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv4, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv5")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv5, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc6")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc6, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc7")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc7, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv8")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv8, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv9")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv9, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv10")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv10, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc11")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc11, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc12")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc12, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc13")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc13, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc14")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc14, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv15")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv15, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv16")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv16, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc17")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc17, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc18")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc18, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc19")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc19, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc20")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc20, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc21")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc21, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc22")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc22, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc23")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc23, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc24")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc24, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc25")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc25, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc26")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc26, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc27")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc27, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc28")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc28, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc29")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc29, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc30")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc30, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc31")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc31, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc32")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc32, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc33")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc33, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv34")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv34, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv35")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv35, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc36")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rc36, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv37")) {
    cutilSafeCall(OPS_instance::getOPSInstance()->ostream(),cudaMemcpyToSymbol(rcinv37, dat, dim*size));
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
  }
}


//user kernel files
#include "opensbliblock00Kernel049_cuda_kernel.cu"
#include "opensbliblock00Kernel052_cuda_kernel.cu"
#include "opensbliblock00Kernel053_cuda_kernel.cu"
#include "opensbliblock00Kernel054_cuda_kernel.cu"
#include "opensbliblock00Kernel055_cuda_kernel.cu"
#include "opensbliblock00Kernel056_cuda_kernel.cu"
#include "opensbliblock00Kernel061_cuda_kernel.cu"
#include "opensbliblock00Kernel045_cuda_kernel.cu"
#include "opensbliblock00Kernel046_cuda_kernel.cu"
#include "opensbliblock00Kernel047_cuda_kernel.cu"
#include "opensbliblock00Kernel048_cuda_kernel.cu"
#include "opensbliblock00Kernel003_cuda_kernel.cu"
#include "opensbliblock00Kernel013_cuda_kernel.cu"
#include "opensbliblock00Kernel008_cuda_kernel.cu"
#include "opensbliblock00Kernel009_cuda_kernel.cu"
#include "opensbliblock00Kernel015_cuda_kernel.cu"
#include "opensbliblock00Kernel012_cuda_kernel.cu"
#include "opensbliblock00Kernel019_cuda_kernel.cu"
#include "opensbliblock00Kernel020_cuda_kernel.cu"
#include "opensbliblock00Kernel000_cuda_kernel.cu"
#include "opensbliblock00Kernel001_cuda_kernel.cu"
#include "opensbliblock00Kernel017_cuda_kernel.cu"
#include "opensbliblock00Kernel028_cuda_kernel.cu"
#include "opensbliblock00Kernel030_cuda_kernel.cu"
#include "opensbliblock00Kernel031_cuda_kernel.cu"
#include "opensbliblock00Kernel033_cuda_kernel.cu"
#include "opensbliblock00Kernel034_cuda_kernel.cu"
#include "opensbliblock00Kernel036_cuda_kernel.cu"
#include "opensbliblock00Kernel041_cuda_kernel.cu"
#include "opensbliblock00Kernel062_cuda_kernel.cu"
#include "monitor_0_p_B0_cuda_kernel.cu"
#include "monitor_1_p_B0_cuda_kernel.cu"
#include "monitor_2_p_B0_cuda_kernel.cu"
#include "monitor_3_p_B0_cuda_kernel.cu"
#include "monitor_4_p_B0_cuda_kernel.cu"
#include "monitor_5_p_B0_cuda_kernel.cu"
#include "monitor_6_p_B0_cuda_kernel.cu"
