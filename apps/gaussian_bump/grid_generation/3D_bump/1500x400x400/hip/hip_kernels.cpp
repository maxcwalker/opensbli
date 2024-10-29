// Auto-generated at 2024-09-02 15:36:03.579150 by ops-translator legacy

//header
#define OPS_API 2
#define OPS_3D
#include "ops_lib_core.h"

#include "ops_hip_rt_support.h"
#include "ops_hip_reduction.h"


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
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Delta0block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta1block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Delta1block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"Delta2block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Delta2block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(HDF5_timing), dat, dim*size));
  }
  else
  if (!strcmp(name,"Minf")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Minf), dat, dim*size));
  }
  else
  if (!strcmp(name,"Pr")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Pr), dat, dim*size));
  }
  else
  if (!strcmp(name,"Re")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Re), dat, dim*size));
  }
  else
  if (!strcmp(name,"RefT")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(RefT), dat, dim*size));
  }
  else
  if (!strcmp(name,"SuthT")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(SuthT), dat, dim*size));
  }
  else
  if (!strcmp(name,"Twall")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(Twall), dat, dim*size));
  }
  else
  if (!strcmp(name,"b_f")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(b_f), dat, dim*size));
  }
  else
  if (!strcmp(name,"beta_0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(beta_0), dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(block0np0), dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np1")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(block0np1), dat, dim*size));
  }
  else
  if (!strcmp(name,"block0np2")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(block0np2), dat, dim*size));
  }
  else
  if (!strcmp(name,"dt")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(dt), dat, dim*size));
  }
  else
  if (!strcmp(name,"gama")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(gama), dat, dim*size));
  }
  else
  if (!strcmp(name,"gamma_m1")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(gamma_m1), dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Delta0block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(inv2Delta0block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Delta1block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(inv2Delta1block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Delta2block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(inv2Delta2block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2Minf")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(inv2Minf), dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta0block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invDelta0block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta1block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invDelta1block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"invDelta2block0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invDelta2block0), dat, dim*size));
  }
  else
  if (!strcmp(name,"invPr")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invPr), dat, dim*size));
  }
  else
  if (!strcmp(name,"invRe")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invRe), dat, dim*size));
  }
  else
  if (!strcmp(name,"invRefT")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invRefT), dat, dim*size));
  }
  else
  if (!strcmp(name,"inv_gamma_m1")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(inv_gamma_m1), dat, dim*size));
  }
  else
  if (!strcmp(name,"invgama")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invgama), dat, dim*size));
  }
  else
  if (!strcmp(name,"invgamma_m1")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(invgamma_m1), dat, dim*size));
  }
  else
  if (!strcmp(name,"niter")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(niter), dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_0")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(omega_0), dat, dim*size));
  }
  else
  if (!strcmp(name,"shock_filter_control")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(shock_filter_control), dat, dim*size));
  }
  else
  if (!strcmp(name,"simulation_time")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(simulation_time), dat, dim*size));
  }
  else
  if (!strcmp(name,"start_iter")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(start_iter), dat, dim*size));
  }
  else
  if (!strcmp(name,"tripA")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(tripA), dat, dim*size));
  }
  else
  if (!strcmp(name,"write_output_file")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(write_output_file), dat, dim*size));
  }
  else
  if (!strcmp(name,"xts")) {
      hipSafeCall(instance->ostream(),hipMemcpyToSymbol(HIP_SYMBOL(xts), dat, dim*size));
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
}
}


//user kernel files
#include "opensbliblock00Kernel067_kernel.cpp"
#include "opensbliblock00Kernel070_kernel.cpp"
#include "opensbliblock00Kernel071_kernel.cpp"
#include "opensbliblock00Kernel072_kernel.cpp"
#include "opensbliblock00Kernel073_kernel.cpp"
#include "opensbliblock00Kernel074_kernel.cpp"
#include "opensbliblock00Kernel081_kernel.cpp"
#include "opensbliblock00Kernel061_kernel.cpp"
#include "opensbliblock00Kernel062_kernel.cpp"
#include "opensbliblock00Kernel063_kernel.cpp"
#include "opensbliblock00Kernel064_kernel.cpp"
#include "opensbliblock00Kernel003_kernel.cpp"
#include "opensbliblock00Kernel007_kernel.cpp"
#include "opensbliblock00Kernel012_kernel.cpp"
#include "opensbliblock00Kernel004_kernel.cpp"
#include "opensbliblock00Kernel009_kernel.cpp"
#include "opensbliblock00Kernel018_kernel.cpp"
#include "opensbliblock00Kernel020_kernel.cpp"
#include "opensbliblock00Kernel011_kernel.cpp"
#include "opensbliblock00Kernel030_kernel.cpp"
#include "opensbliblock00Kernel022_kernel.cpp"
#include "opensbliblock00Kernel000_kernel.cpp"
#include "opensbliblock00Kernel001_kernel.cpp"
#include "opensbliblock00Kernel002_kernel.cpp"
#include "opensbliblock00Kernel021_kernel.cpp"
#include "opensbliblock00Kernel032_kernel.cpp"
#include "opensbliblock00Kernel034_kernel.cpp"
#include "opensbliblock00Kernel036_kernel.cpp"
#include "opensbliblock00Kernel038_kernel.cpp"
#include "opensbliblock00Kernel040_kernel.cpp"
#include "opensbliblock00Kernel041_kernel.cpp"
#include "opensbliblock00Kernel042_kernel.cpp"
#include "opensbliblock00Kernel043_kernel.cpp"
#include "opensbliblock00Kernel044_kernel.cpp"
#include "opensbliblock00Kernel045_kernel.cpp"
#include "opensbliblock00Kernel046_kernel.cpp"
#include "opensbliblock00Kernel047_kernel.cpp"
#include "opensbliblock00Kernel056_kernel.cpp"
#include "opensbliblock00Kernel082_kernel.cpp"
