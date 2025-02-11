//
// auto-generated by ops.py
//
//header
#define OPS_API 2
#define OPS_1D
#include "ops_lib_core.h"

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif
// global constants
__constant__ int block0np0;
__constant__ double Delta0block0;
__constant__ int niter;
__constant__ double dt;
__constant__ double gama;
__constant__ double gamma_m1;
__constant__ double shock_filter_control;
__constant__ double sensor_theta;
__constant__ double inv_0;
__constant__ double rc1;
__constant__ double rc2;
__constant__ double rc3;
__constant__ double rc4;
__constant__ double rc5;
__constant__ double rc6;
__constant__ double rc7;
__constant__ double rc8;
__constant__ double rc9;
__constant__ double rc10;
__constant__ double rc11;
__constant__ double rc12;
__constant__ double rc13;
__constant__ double rc14;
__constant__ double rc15;
__constant__ double rc16;
__constant__ double rc17;
__constant__ double rc18;
__constant__ double rc19;
__constant__ double rc20;
__constant__ double rc21;
__constant__ double rcinv22;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type,
int size, char *dat, char const *name){
  ops_execute(instance);
  if (!strcmp(name,"block0np0")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(block0np0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta0block0")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Delta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"niter")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(niter, dat, dim*size));
  }
  else
  if (!strcmp(name,"dt")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(dt, dat, dim*size));
  }
  else
  if (!strcmp(name,"gama")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(gama, dat, dim*size));
  }
  else
  if (!strcmp(name,"gamma_m1")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(gamma_m1, dat, dim*size));
  }
  else
  if (!strcmp(name,"shock_filter_control")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(shock_filter_control, dat, dim*size));
  }
  else
  if (!strcmp(name,"sensor_theta")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(sensor_theta, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_0")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc1")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc1, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc2")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc2, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc3")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc3, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc4")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc4, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc5")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc5, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc6")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc6, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc7")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc7, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc8")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc8, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc9")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc9, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc10")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc10, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc11")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc11, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc12")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc12, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc13")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc13, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc14")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc14, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc15")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc15, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc16")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc16, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc17")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc17, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc18")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc18, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc19")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc19, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc20")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc20, dat, dim*size));
  }
  else
  if (!strcmp(name,"rc21")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rc21, dat, dim*size));
  }
  else
  if (!strcmp(name,"rcinv22")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(rcinv22, dat, dim*size));
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
  }
}


//user kernel files
#include "opensbliblock00Kernel024_cuda_kernel.cu"
#include "opensbliblock00Kernel025_cuda_kernel.cu"
#include "opensbliblock00Kernel026_cuda_kernel.cu"
#include "opensbliblock00Kernel022_cuda_kernel.cu"
#include "opensbliblock00Kernel023_cuda_kernel.cu"
#include "opensbliblock00Kernel003_cuda_kernel.cu"
#include "opensbliblock00Kernel013_cuda_kernel.cu"
#include "opensbliblock00Kernel002_cuda_kernel.cu"
#include "opensbliblock00Kernel005_cuda_kernel.cu"
#include "opensbliblock00Kernel007_cuda_kernel.cu"
#include "opensbliblock00Kernel009_cuda_kernel.cu"
#include "opensbliblock00Kernel011_cuda_kernel.cu"
#include "opensbliblock00Kernel012_cuda_kernel.cu"
#include "opensbliblock00Kernel014_cuda_kernel.cu"
#include "opensbliblock00Kernel015_cuda_kernel.cu"
#include "opensbliblock00Kernel016_cuda_kernel.cu"
#include "opensbliblock00Kernel017_cuda_kernel.cu"
#include "opensbliblock00Kernel018_cuda_kernel.cu"
#include "opensbliblock00Kernel020_cuda_kernel.cu"
#include "opensbliblock00Kernel021_cuda_kernel.cu"
#include "opensbliblock00Kernel030_cuda_kernel.cu"
#include "opensbliblock00Kernel027_cuda_kernel.cu"
#include "opensbliblock00Kernel028_cuda_kernel.cu"
#include "opensbliblock00Kernel029_cuda_kernel.cu"
