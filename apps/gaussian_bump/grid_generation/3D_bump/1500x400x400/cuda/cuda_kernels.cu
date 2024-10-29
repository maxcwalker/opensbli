// Auto-generated at 2024-09-02 15:36:03.363180 by ops-translator legacy

//header
#define OPS_API 2
#define OPS_3D
#include "ops_lib_core.h"

#include "ops_cuda_rt_support.h"
#include "ops_cuda_reduction.h"

#include <cuComplex.h>

#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif
// global constants
__constant__ double Delta0block0;
__constant__ double Delta1block0;
__constant__ double Delta2block0;
__constant__ int HDF5_timing;
__constant__ double Minf;
__constant__ double Pr;
__constant__ double Re;
__constant__ double RefT;
__constant__ double SuthT;
__constant__ double Twall;
__constant__ double b_f;
__constant__ double beta_0;
__constant__ int block0np0;
__constant__ int block0np1;
__constant__ int block0np2;
__constant__ double dt;
__constant__ double gama;
__constant__ double gamma_m1;
__constant__ double inv2Delta0block0;
__constant__ double inv2Delta1block0;
__constant__ double inv2Delta2block0;
__constant__ double inv2Minf;
__constant__ double invDelta0block0;
__constant__ double invDelta1block0;
__constant__ double invDelta2block0;
__constant__ double invPr;
__constant__ double invRe;
__constant__ double invRefT;
__constant__ double inv_gamma_m1;
__constant__ double invgama;
__constant__ double invgamma_m1;
__constant__ int niter;
__constant__ double omega_0;
__constant__ double shock_filter_control;
__constant__ double simulation_time;
__constant__ int start_iter;
__constant__ double tripA;
__constant__ int write_output_file;
__constant__ double xts;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type,
int size, char *dat, char const *name){
  ops_execute(instance);
  if (!strcmp(name,"Delta0block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Delta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta1block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Delta1block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta2block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Delta2block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(HDF5_timing, dat, dim*size));
  }
  else
  if (!strcmp(name,"Minf")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Minf, dat, dim*size));
  }
  else
  if (!strcmp(name,"Pr")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Pr, dat, dim*size));
  }
  else
  if (!strcmp(name,"Re")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Re, dat, dim*size));
  }
  else
  if (!strcmp(name,"RefT")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(RefT, dat, dim*size));
  }
  else
  if (!strcmp(name,"SuthT")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(SuthT, dat, dim*size));
  }
  else
  if (!strcmp(name,"Twall")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(Twall, dat, dim*size));
  }
  else
  if (!strcmp(name,"b_f")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(b_f, dat, dim*size));
  }
  else
  if (!strcmp(name,"beta_0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(beta_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(block0np0, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np1")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(block0np1, dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np2")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(block0np2, dat, dim*size));
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
  if (!strcmp(name,"inv2Delta0block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2Delta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Delta1block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2Delta1block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Delta2block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2Delta2block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Minf")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2Minf, dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta0block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invDelta0block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta1block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invDelta1block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta2block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invDelta2block0, dat, dim*size));
  }
  else
  if (!strcmp(name,"invPr")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invPr, dat, dim*size));
  }
  else
  if (!strcmp(name,"invRe")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invRe, dat, dim*size));
  }
  else
  if (!strcmp(name,"invRefT")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invRefT, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_gamma_m1")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv_gamma_m1, dat, dim*size));
  }
  else
  if (!strcmp(name,"invgama")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invgama, dat, dim*size));
  }
  else
  if (!strcmp(name,"invgamma_m1")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invgamma_m1, dat, dim*size));
  }
  else
  if (!strcmp(name,"niter")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(niter, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(omega_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"shock_filter_control")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(shock_filter_control, dat, dim*size));
  }
  else
  if (!strcmp(name,"simulation_time")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(simulation_time, dat, dim*size));
  }
  else
  if (!strcmp(name,"start_iter")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(start_iter, dat, dim*size));
  }
  else
  if (!strcmp(name,"tripA")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(tripA, dat, dim*size));
  }
  else
  if (!strcmp(name,"write_output_file")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(write_output_file, dat, dim*size));
  }
  else
  if (!strcmp(name,"xts")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(xts, dat, dim*size));
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
}
}


//user kernel files
#include "opensbliblock00Kernel067_kernel.cu"
#include "opensbliblock00Kernel070_kernel.cu"
#include "opensbliblock00Kernel071_kernel.cu"
#include "opensbliblock00Kernel072_kernel.cu"
#include "opensbliblock00Kernel073_kernel.cu"
#include "opensbliblock00Kernel074_kernel.cu"
#include "opensbliblock00Kernel081_kernel.cu"
#include "opensbliblock00Kernel061_kernel.cu"
#include "opensbliblock00Kernel062_kernel.cu"
#include "opensbliblock00Kernel063_kernel.cu"
#include "opensbliblock00Kernel064_kernel.cu"
#include "opensbliblock00Kernel003_kernel.cu"
#include "opensbliblock00Kernel007_kernel.cu"
#include "opensbliblock00Kernel012_kernel.cu"
#include "opensbliblock00Kernel004_kernel.cu"
#include "opensbliblock00Kernel009_kernel.cu"
#include "opensbliblock00Kernel018_kernel.cu"
#include "opensbliblock00Kernel020_kernel.cu"
#include "opensbliblock00Kernel011_kernel.cu"
#include "opensbliblock00Kernel030_kernel.cu"
#include "opensbliblock00Kernel022_kernel.cu"
#include "opensbliblock00Kernel000_kernel.cu"
#include "opensbliblock00Kernel001_kernel.cu"
#include "opensbliblock00Kernel002_kernel.cu"
#include "opensbliblock00Kernel021_kernel.cu"
#include "opensbliblock00Kernel032_kernel.cu"
#include "opensbliblock00Kernel034_kernel.cu"
#include "opensbliblock00Kernel036_kernel.cu"
#include "opensbliblock00Kernel038_kernel.cu"
#include "opensbliblock00Kernel040_kernel.cu"
#include "opensbliblock00Kernel041_kernel.cu"
#include "opensbliblock00Kernel042_kernel.cu"
#include "opensbliblock00Kernel043_kernel.cu"
#include "opensbliblock00Kernel044_kernel.cu"
#include "opensbliblock00Kernel045_kernel.cu"
#include "opensbliblock00Kernel046_kernel.cu"
#include "opensbliblock00Kernel047_kernel.cu"
#include "opensbliblock00Kernel056_kernel.cu"
#include "opensbliblock00Kernel082_kernel.cu"
