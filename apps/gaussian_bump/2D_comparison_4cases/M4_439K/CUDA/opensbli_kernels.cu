//
// auto-generated by ops.py
//
//header
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
__constant__ double Delta0block0;
__constant__ double Delta1block0;
__constant__ double H;
__constant__ int HDF5_timing;
__constant__ double L;
__constant__ double Minf;
__constant__ double Pr;
__constant__ double Re;
__constant__ double RefT;
__constant__ double SuthT;
__constant__ double Twall;
__constant__ double a;
__constant__ double b;
__constant__ int block0np0;
__constant__ int block0np1;
__constant__ double dt;
__constant__ double gama;
__constant__ double gamma_m1;
__constant__ double inv2Delta0block0;
__constant__ double inv2Delta1block0;
__constant__ double inv2Minf;
__constant__ double inv2a;
__constant__ double invDelta0block0;
__constant__ double invDelta1block0;
__constant__ double invH;
__constant__ double invPr;
__constant__ double invRe;
__constant__ double invRefT;
__constant__ double inv_gamma_m1;
__constant__ double invgama;
__constant__ double invgamma_m1;
__constant__ int niter;
__constant__ double shock_filter_control;
__constant__ double simulation_time;
__constant__ int start_iter;
__constant__ int write_output_file;

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
  if (!strcmp(name,"H")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(H, dat, dim*size));
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(HDF5_timing, dat, dim*size));
  }
  else
  if (!strcmp(name,"L")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(L, dat, dim*size));
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
  if (!strcmp(name,"a")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(a, dat, dim*size));
  }
  else
  if (!strcmp(name,"b")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(b, dat, dim*size));
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
  if (!strcmp(name,"inv2Minf")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2Minf, dat, dim*size));
  }
  else
  if (!strcmp(name,"inv2a")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(inv2a, dat, dim*size));
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
  if (!strcmp(name,"invH")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invH, dat, dim*size));
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
  if (!strcmp(name,"write_output_file")) {
    cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(write_output_file, dat, dim*size));
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
#include "opensbliblock00Kernel004_cuda_kernel.cu"
#include "opensbliblock00Kernel009_cuda_kernel.cu"
#include "opensbliblock00Kernel005_cuda_kernel.cu"
#include "opensbliblock00Kernel012_cuda_kernel.cu"
#include "opensbliblock00Kernel016_cuda_kernel.cu"
#include "opensbliblock00Kernel013_cuda_kernel.cu"
#include "opensbliblock00Kernel023_cuda_kernel.cu"
#include "opensbliblock00Kernel025_cuda_kernel.cu"
#include "opensbliblock00Kernel000_cuda_kernel.cu"
#include "opensbliblock00Kernel001_cuda_kernel.cu"
#include "opensbliblock00Kernel017_cuda_kernel.cu"
#include "opensbliblock00Kernel028_cuda_kernel.cu"
#include "opensbliblock00Kernel030_cuda_kernel.cu"
#include "opensbliblock00Kernel032_cuda_kernel.cu"
#include "opensbliblock00Kernel034_cuda_kernel.cu"
#include "opensbliblock00Kernel035_cuda_kernel.cu"
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
#include "monitor_7_p_B0_cuda_kernel.cu"
#include "monitor_8_p_B0_cuda_kernel.cu"
#include "monitor_9_p_B0_cuda_kernel.cu"
#include "monitor_10_p_B0_cuda_kernel.cu"
#include "monitor_11_p_B0_cuda_kernel.cu"
#include "monitor_12_p_B0_cuda_kernel.cu"
#include "monitor_13_p_B0_cuda_kernel.cu"
#include "monitor_14_p_B0_cuda_kernel.cu"
#include "monitor_15_p_B0_cuda_kernel.cu"
#include "monitor_16_p_B0_cuda_kernel.cu"
#include "monitor_17_p_B0_cuda_kernel.cu"
#include "monitor_18_p_B0_cuda_kernel.cu"
#include "monitor_19_p_B0_cuda_kernel.cu"
#include "monitor_20_p_B0_cuda_kernel.cu"
#include "monitor_21_p_B0_cuda_kernel.cu"
#include "monitor_22_p_B0_cuda_kernel.cu"
#include "monitor_23_p_B0_cuda_kernel.cu"
#include "monitor_24_p_B0_cuda_kernel.cu"
#include "monitor_25_p_B0_cuda_kernel.cu"
#include "monitor_26_p_B0_cuda_kernel.cu"
#include "monitor_27_p_B0_cuda_kernel.cu"
#include "monitor_28_p_B0_cuda_kernel.cu"
#include "monitor_29_p_B0_cuda_kernel.cu"
#include "monitor_30_p_B0_cuda_kernel.cu"
#include "monitor_31_p_B0_cuda_kernel.cu"
#include "monitor_32_p_B0_cuda_kernel.cu"
#include "monitor_33_p_B0_cuda_kernel.cu"
#include "monitor_34_p_B0_cuda_kernel.cu"
#include "monitor_35_p_B0_cuda_kernel.cu"
#include "monitor_36_p_B0_cuda_kernel.cu"
#include "monitor_37_rhou0_B0_cuda_kernel.cu"
#include "monitor_38_rhou0_B0_cuda_kernel.cu"
#include "monitor_39_rhou0_B0_cuda_kernel.cu"
#include "monitor_40_rhou0_B0_cuda_kernel.cu"
#include "monitor_41_rhou0_B0_cuda_kernel.cu"
#include "monitor_42_rhou0_B0_cuda_kernel.cu"
#include "monitor_43_rhou0_B0_cuda_kernel.cu"
#include "monitor_44_rhou0_B0_cuda_kernel.cu"
#include "monitor_45_rhou0_B0_cuda_kernel.cu"
#include "monitor_46_rhou0_B0_cuda_kernel.cu"
#include "monitor_47_rhou0_B0_cuda_kernel.cu"
#include "monitor_48_rhou0_B0_cuda_kernel.cu"
#include "monitor_49_rhou0_B0_cuda_kernel.cu"
#include "monitor_50_rhou0_B0_cuda_kernel.cu"
#include "monitor_51_rhou0_B0_cuda_kernel.cu"
#include "monitor_52_rhou0_B0_cuda_kernel.cu"
#include "monitor_53_rhou0_B0_cuda_kernel.cu"
#include "monitor_54_rhou0_B0_cuda_kernel.cu"
#include "monitor_55_rhou0_B0_cuda_kernel.cu"
#include "monitor_56_rhou0_B0_cuda_kernel.cu"
#include "monitor_57_rhou0_B0_cuda_kernel.cu"
#include "monitor_58_rhou0_B0_cuda_kernel.cu"
#include "monitor_59_rhou0_B0_cuda_kernel.cu"
#include "monitor_60_rhou0_B0_cuda_kernel.cu"
#include "monitor_61_rhou0_B0_cuda_kernel.cu"
#include "monitor_62_rhou0_B0_cuda_kernel.cu"
#include "monitor_63_rhou0_B0_cuda_kernel.cu"
#include "monitor_64_rhou0_B0_cuda_kernel.cu"
#include "monitor_65_rhou0_B0_cuda_kernel.cu"
#include "monitor_66_rhou0_B0_cuda_kernel.cu"
#include "monitor_67_rhou0_B0_cuda_kernel.cu"
#include "monitor_68_rhou0_B0_cuda_kernel.cu"
#include "monitor_69_rhou0_B0_cuda_kernel.cu"
#include "monitor_70_rhou0_B0_cuda_kernel.cu"
#include "monitor_71_rhou0_B0_cuda_kernel.cu"
#include "monitor_72_rhou0_B0_cuda_kernel.cu"
#include "monitor_73_rhou0_B0_cuda_kernel.cu"
