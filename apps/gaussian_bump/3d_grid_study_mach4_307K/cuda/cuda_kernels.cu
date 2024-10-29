// Auto-generated at 2024-10-10 09:28:37.151234 by ops-translator legacy

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
__constant__ double inv2a;
__constant__ double invDelta0block0;
__constant__ double invDelta1block0;
__constant__ double invDelta2block0;
__constant__ double invH;
__constant__ double invPr;
__constant__ double invRe;
__constant__ double invRefT;
__constant__ double inv_gamma_m1;
__constant__ double invgama;
__constant__ double invgamma_m1;
__constant__ double invnsamples;
__constant__ int niter;
__constant__ int nsamples;
__constant__ double omega_0;
__constant__ double omega_1;
__constant__ double omega_2;
__constant__ double omega_3;
__constant__ double phi_0;
__constant__ double phi_1;
__constant__ double phi_2;
__constant__ double shock_filter_control;
__constant__ double simulation_time;
__constant__ int start_iter;
__constant__ int stat_frequency;
__constant__ double tripA;
__constant__ int write_output_file;
__constant__ int write_slices;
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
  if (!strcmp(name,"invDelta2block0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invDelta2block0, dat, dim*size));
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
  if (!strcmp(name,"invnsamples")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(invnsamples, dat, dim*size));
  }
  else
  if (!strcmp(name,"niter")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(niter, dat, dim*size));
  }
  else
  if (!strcmp(name,"nsamples")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(nsamples, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(omega_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_1")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(omega_1, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_2")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(omega_2, dat, dim*size));
  }
  else
  if (!strcmp(name,"omega_3")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(omega_3, dat, dim*size));
  }
  else
  if (!strcmp(name,"phi_0")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(phi_0, dat, dim*size));
  }
  else
  if (!strcmp(name,"phi_1")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(phi_1, dat, dim*size));
  }
  else
  if (!strcmp(name,"phi_2")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(phi_2, dat, dim*size));
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
  if (!strcmp(name,"stat_frequency")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(stat_frequency, dat, dim*size));
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
  if (!strcmp(name,"write_slices")) {
      cutilSafeCall(instance->ostream(),cudaMemcpyToSymbol(write_slices, dat, dim*size));
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
#include "opensbliblock00Kernel006_kernel.cu"
#include "opensbliblock00Kernel008_kernel.cu"
#include "opensbliblock00Kernel016_kernel.cu"
#include "opensbliblock00Kernel011_kernel.cu"
#include "opensbliblock00Kernel012_kernel.cu"
#include "opensbliblock00Kernel017_kernel.cu"
#include "opensbliblock00Kernel020_kernel.cu"
#include "opensbliblock00Kernel010_kernel.cu"
#include "opensbliblock00Kernel027_kernel.cu"
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
#include "opensbliblock00Kernel084_kernel.cu"
#include "opensbliblock00Kernel082_kernel.cu"
#include "monitor_0_p_B0_kernel.cu"
#include "monitor_1_p_B0_kernel.cu"
#include "monitor_2_p_B0_kernel.cu"
#include "monitor_3_p_B0_kernel.cu"
#include "monitor_4_p_B0_kernel.cu"
#include "monitor_5_p_B0_kernel.cu"
#include "monitor_6_p_B0_kernel.cu"
#include "monitor_7_p_B0_kernel.cu"
#include "monitor_8_p_B0_kernel.cu"
#include "monitor_9_p_B0_kernel.cu"
#include "monitor_10_p_B0_kernel.cu"
#include "monitor_11_p_B0_kernel.cu"
#include "monitor_12_p_B0_kernel.cu"
#include "monitor_13_p_B0_kernel.cu"
#include "monitor_14_p_B0_kernel.cu"
#include "monitor_15_p_B0_kernel.cu"
#include "monitor_16_p_B0_kernel.cu"
#include "monitor_17_p_B0_kernel.cu"
#include "monitor_18_p_B0_kernel.cu"
#include "monitor_19_p_B0_kernel.cu"
#include "monitor_20_p_B0_kernel.cu"
#include "monitor_21_p_B0_kernel.cu"
#include "monitor_22_p_B0_kernel.cu"
#include "monitor_23_p_B0_kernel.cu"
#include "monitor_24_p_B0_kernel.cu"
#include "monitor_25_p_B0_kernel.cu"
#include "monitor_26_p_B0_kernel.cu"
#include "monitor_27_p_B0_kernel.cu"
#include "monitor_28_p_B0_kernel.cu"
#include "monitor_29_p_B0_kernel.cu"
#include "monitor_30_p_B0_kernel.cu"
#include "monitor_31_p_B0_kernel.cu"
#include "monitor_32_p_B0_kernel.cu"
#include "monitor_33_p_B0_kernel.cu"
#include "monitor_34_p_B0_kernel.cu"
#include "monitor_35_p_B0_kernel.cu"
#include "monitor_36_p_B0_kernel.cu"
#include "monitor_37_rhou0_B0_kernel.cu"
#include "monitor_38_rhou0_B0_kernel.cu"
#include "monitor_39_rhou0_B0_kernel.cu"
#include "monitor_40_rhou0_B0_kernel.cu"
#include "monitor_41_rhou0_B0_kernel.cu"
#include "monitor_42_rhou0_B0_kernel.cu"
#include "monitor_43_rhou0_B0_kernel.cu"
#include "monitor_44_rhou0_B0_kernel.cu"
#include "monitor_45_rhou0_B0_kernel.cu"
#include "monitor_46_rhou0_B0_kernel.cu"
#include "monitor_47_rhou0_B0_kernel.cu"
#include "monitor_48_rhou0_B0_kernel.cu"
#include "monitor_49_rhou0_B0_kernel.cu"
#include "monitor_50_rhou0_B0_kernel.cu"
#include "monitor_51_rhou0_B0_kernel.cu"
#include "monitor_52_rhou0_B0_kernel.cu"
#include "monitor_53_rhou0_B0_kernel.cu"
#include "monitor_54_rhou0_B0_kernel.cu"
#include "monitor_55_rhou0_B0_kernel.cu"
#include "monitor_56_rhou0_B0_kernel.cu"
#include "monitor_57_rhou0_B0_kernel.cu"
#include "monitor_58_rhou0_B0_kernel.cu"
#include "monitor_59_rhou0_B0_kernel.cu"
#include "monitor_60_rhou0_B0_kernel.cu"
#include "monitor_61_rhou0_B0_kernel.cu"
#include "monitor_62_rhou0_B0_kernel.cu"
#include "monitor_63_rhou0_B0_kernel.cu"
#include "monitor_64_rhou0_B0_kernel.cu"
#include "monitor_65_rhou0_B0_kernel.cu"
#include "monitor_66_rhou0_B0_kernel.cu"
#include "monitor_67_rhou0_B0_kernel.cu"
#include "monitor_68_rhou0_B0_kernel.cu"
#include "monitor_69_rhou0_B0_kernel.cu"
#include "monitor_70_rhou0_B0_kernel.cu"
#include "monitor_71_rhou0_B0_kernel.cu"
#include "monitor_72_rhou0_B0_kernel.cu"
#include "monitor_73_rhou0_B0_kernel.cu"
#include "monitor_74_rhou2_B0_kernel.cu"
#include "monitor_75_rhou2_B0_kernel.cu"
#include "monitor_76_rhou2_B0_kernel.cu"
#include "monitor_77_rhou2_B0_kernel.cu"
#include "monitor_78_rhou2_B0_kernel.cu"
#include "monitor_79_rhou2_B0_kernel.cu"
#include "monitor_80_rhou2_B0_kernel.cu"
#include "monitor_81_rhou2_B0_kernel.cu"
#include "monitor_82_rhou2_B0_kernel.cu"
#include "monitor_83_rhou2_B0_kernel.cu"
#include "monitor_84_rhou2_B0_kernel.cu"
#include "monitor_85_rhou2_B0_kernel.cu"
#include "monitor_86_rhou2_B0_kernel.cu"
#include "monitor_87_rhou2_B0_kernel.cu"
#include "monitor_88_rhou2_B0_kernel.cu"
#include "monitor_89_rhou2_B0_kernel.cu"
#include "monitor_90_rhou2_B0_kernel.cu"
#include "monitor_91_rhou2_B0_kernel.cu"
#include "monitor_92_rhou2_B0_kernel.cu"
#include "monitor_93_rhou2_B0_kernel.cu"
#include "monitor_94_rhou2_B0_kernel.cu"
#include "monitor_95_rhou2_B0_kernel.cu"
#include "monitor_96_rhou2_B0_kernel.cu"
#include "monitor_97_rhou2_B0_kernel.cu"
#include "monitor_98_rhou2_B0_kernel.cu"
#include "monitor_99_rhou2_B0_kernel.cu"
#include "monitor_100_rhou2_B0_kernel.cu"
#include "monitor_101_rhou2_B0_kernel.cu"
#include "monitor_102_rhou2_B0_kernel.cu"
#include "monitor_103_rhou2_B0_kernel.cu"
#include "monitor_104_rhou2_B0_kernel.cu"
#include "monitor_105_rhou2_B0_kernel.cu"
#include "monitor_106_rhou2_B0_kernel.cu"
#include "monitor_107_rhou2_B0_kernel.cu"
#include "monitor_108_rhou2_B0_kernel.cu"
#include "monitor_109_rhou2_B0_kernel.cu"
#include "monitor_110_rhou2_B0_kernel.cu"
#include "opensbliblock00Kernel083_kernel.cu"
