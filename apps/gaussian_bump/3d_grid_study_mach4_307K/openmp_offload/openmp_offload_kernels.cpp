// Auto-generated at 2024-10-10 09:28:36.165407 by ops-translator legacy

//header
#define OPS_3D
#define OPS_API 2
#include "ops_lib_core.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif

// global constants
extern double Delta0block0;
extern double Delta1block0;
extern double Delta2block0;
extern double H;
extern int HDF5_timing;
extern double L;
extern double Minf;
extern double Pr;
extern double Re;
extern double RefT;
extern double SuthT;
extern double Twall;
extern double a;
extern double b;
extern double b_f;
extern double beta_0;
extern int block0np0;
extern int block0np1;
extern int block0np2;
extern double dt;
extern double gama;
extern double gamma_m1;
extern double inv2Delta0block0;
extern double inv2Delta1block0;
extern double inv2Delta2block0;
extern double inv2Minf;
extern double inv2a;
extern double invDelta0block0;
extern double invDelta1block0;
extern double invDelta2block0;
extern double invH;
extern double invPr;
extern double invRe;
extern double invRefT;
extern double inv_gamma_m1;
extern double invgama;
extern double invgamma_m1;
extern double invnsamples;
extern int niter;
extern int nsamples;
extern double omega_0;
extern double omega_1;
extern double omega_2;
extern double omega_3;
extern double phi_0;
extern double phi_1;
extern double phi_2;
extern double shock_filter_control;
extern double simulation_time;
extern int start_iter;
extern int stat_frequency;
extern double tripA;
extern int write_output_file;
extern int write_slices;
extern double xts;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type,
int size, char *dat, char const *name){
  ops_execute(instance);
  if (!strcmp(name,"Delta0block0")) {
      #pragma omp target enter data map(to:Delta0block0)
  }
  else
  if (!strcmp(name,"Delta1block0")) {
      #pragma omp target enter data map(to:Delta1block0)
  }
  else
  if (!strcmp(name,"Delta2block0")) {
      #pragma omp target enter data map(to:Delta2block0)
  }
  else
  if (!strcmp(name,"H")) {
      #pragma omp target enter data map(to:H)
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
      #pragma omp target enter data map(to:HDF5_timing)
  }
  else
  if (!strcmp(name,"L")) {
      #pragma omp target enter data map(to:L)
  }
  else
  if (!strcmp(name,"Minf")) {
      #pragma omp target enter data map(to:Minf)
  }
  else
  if (!strcmp(name,"Pr")) {
      #pragma omp target enter data map(to:Pr)
  }
  else
  if (!strcmp(name,"Re")) {
      #pragma omp target enter data map(to:Re)
  }
  else
  if (!strcmp(name,"RefT")) {
      #pragma omp target enter data map(to:RefT)
  }
  else
  if (!strcmp(name,"SuthT")) {
      #pragma omp target enter data map(to:SuthT)
  }
  else
  if (!strcmp(name,"Twall")) {
      #pragma omp target enter data map(to:Twall)
  }
  else
  if (!strcmp(name,"a")) {
      #pragma omp target enter data map(to:a)
  }
  else
  if (!strcmp(name,"b")) {
      #pragma omp target enter data map(to:b)
  }
  else
  if (!strcmp(name,"b_f")) {
      #pragma omp target enter data map(to:b_f)
  }
  else
  if (!strcmp(name,"beta_0")) {
      #pragma omp target enter data map(to:beta_0)
  }
  else
  if (!strcmp(name,"block0np0")) {
      #pragma omp target enter data map(to:block0np0)
  }
  else
  if (!strcmp(name,"block0np1")) {
      #pragma omp target enter data map(to:block0np1)
  }
  else
  if (!strcmp(name,"block0np2")) {
      #pragma omp target enter data map(to:block0np2)
  }
  else
  if (!strcmp(name,"dt")) {
      #pragma omp target enter data map(to:dt)
  }
  else
  if (!strcmp(name,"gama")) {
      #pragma omp target enter data map(to:gama)
  }
  else
  if (!strcmp(name,"gamma_m1")) {
      #pragma omp target enter data map(to:gamma_m1)
  }
  else
  if (!strcmp(name,"inv2Delta0block0")) {
      #pragma omp target enter data map(to:inv2Delta0block0)
  }
  else
  if (!strcmp(name,"inv2Delta1block0")) {
      #pragma omp target enter data map(to:inv2Delta1block0)
  }
  else
  if (!strcmp(name,"inv2Delta2block0")) {
      #pragma omp target enter data map(to:inv2Delta2block0)
  }
  else
  if (!strcmp(name,"inv2Minf")) {
      #pragma omp target enter data map(to:inv2Minf)
  }
  else
  if (!strcmp(name,"inv2a")) {
      #pragma omp target enter data map(to:inv2a)
  }
  else
  if (!strcmp(name,"invDelta0block0")) {
      #pragma omp target enter data map(to:invDelta0block0)
  }
  else
  if (!strcmp(name,"invDelta1block0")) {
      #pragma omp target enter data map(to:invDelta1block0)
  }
  else
  if (!strcmp(name,"invDelta2block0")) {
      #pragma omp target enter data map(to:invDelta2block0)
  }
  else
  if (!strcmp(name,"invH")) {
      #pragma omp target enter data map(to:invH)
  }
  else
  if (!strcmp(name,"invPr")) {
      #pragma omp target enter data map(to:invPr)
  }
  else
  if (!strcmp(name,"invRe")) {
      #pragma omp target enter data map(to:invRe)
  }
  else
  if (!strcmp(name,"invRefT")) {
      #pragma omp target enter data map(to:invRefT)
  }
  else
  if (!strcmp(name,"inv_gamma_m1")) {
      #pragma omp target enter data map(to:inv_gamma_m1)
  }
  else
  if (!strcmp(name,"invgama")) {
      #pragma omp target enter data map(to:invgama)
  }
  else
  if (!strcmp(name,"invgamma_m1")) {
      #pragma omp target enter data map(to:invgamma_m1)
  }
  else
  if (!strcmp(name,"invnsamples")) {
      #pragma omp target enter data map(to:invnsamples)
  }
  else
  if (!strcmp(name,"niter")) {
      #pragma omp target enter data map(to:niter)
  }
  else
  if (!strcmp(name,"nsamples")) {
      #pragma omp target enter data map(to:nsamples)
  }
  else
  if (!strcmp(name,"omega_0")) {
      #pragma omp target enter data map(to:omega_0)
  }
  else
  if (!strcmp(name,"omega_1")) {
      #pragma omp target enter data map(to:omega_1)
  }
  else
  if (!strcmp(name,"omega_2")) {
      #pragma omp target enter data map(to:omega_2)
  }
  else
  if (!strcmp(name,"omega_3")) {
      #pragma omp target enter data map(to:omega_3)
  }
  else
  if (!strcmp(name,"phi_0")) {
      #pragma omp target enter data map(to:phi_0)
  }
  else
  if (!strcmp(name,"phi_1")) {
      #pragma omp target enter data map(to:phi_1)
  }
  else
  if (!strcmp(name,"phi_2")) {
      #pragma omp target enter data map(to:phi_2)
  }
  else
  if (!strcmp(name,"shock_filter_control")) {
      #pragma omp target enter data map(to:shock_filter_control)
  }
  else
  if (!strcmp(name,"simulation_time")) {
      #pragma omp target enter data map(to:simulation_time)
  }
  else
  if (!strcmp(name,"start_iter")) {
      #pragma omp target enter data map(to:start_iter)
  }
  else
  if (!strcmp(name,"stat_frequency")) {
      #pragma omp target enter data map(to:stat_frequency)
  }
  else
  if (!strcmp(name,"tripA")) {
      #pragma omp target enter data map(to:tripA)
  }
  else
  if (!strcmp(name,"write_output_file")) {
      #pragma omp target enter data map(to:write_output_file)
  }
  else
  if (!strcmp(name,"write_slices")) {
      #pragma omp target enter data map(to:write_slices)
  }
  else
  if (!strcmp(name,"xts")) {
      #pragma omp target enter data map(to:xts)
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
#include "opensbliblock00Kernel006_kernel.cpp"
#include "opensbliblock00Kernel008_kernel.cpp"
#include "opensbliblock00Kernel016_kernel.cpp"
#include "opensbliblock00Kernel011_kernel.cpp"
#include "opensbliblock00Kernel012_kernel.cpp"
#include "opensbliblock00Kernel017_kernel.cpp"
#include "opensbliblock00Kernel020_kernel.cpp"
#include "opensbliblock00Kernel010_kernel.cpp"
#include "opensbliblock00Kernel027_kernel.cpp"
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
#include "opensbliblock00Kernel084_kernel.cpp"
#include "opensbliblock00Kernel082_kernel.cpp"
#include "monitor_0_p_B0_kernel.cpp"
#include "monitor_1_p_B0_kernel.cpp"
#include "monitor_2_p_B0_kernel.cpp"
#include "monitor_3_p_B0_kernel.cpp"
#include "monitor_4_p_B0_kernel.cpp"
#include "monitor_5_p_B0_kernel.cpp"
#include "monitor_6_p_B0_kernel.cpp"
#include "monitor_7_p_B0_kernel.cpp"
#include "monitor_8_p_B0_kernel.cpp"
#include "monitor_9_p_B0_kernel.cpp"
#include "monitor_10_p_B0_kernel.cpp"
#include "monitor_11_p_B0_kernel.cpp"
#include "monitor_12_p_B0_kernel.cpp"
#include "monitor_13_p_B0_kernel.cpp"
#include "monitor_14_p_B0_kernel.cpp"
#include "monitor_15_p_B0_kernel.cpp"
#include "monitor_16_p_B0_kernel.cpp"
#include "monitor_17_p_B0_kernel.cpp"
#include "monitor_18_p_B0_kernel.cpp"
#include "monitor_19_p_B0_kernel.cpp"
#include "monitor_20_p_B0_kernel.cpp"
#include "monitor_21_p_B0_kernel.cpp"
#include "monitor_22_p_B0_kernel.cpp"
#include "monitor_23_p_B0_kernel.cpp"
#include "monitor_24_p_B0_kernel.cpp"
#include "monitor_25_p_B0_kernel.cpp"
#include "monitor_26_p_B0_kernel.cpp"
#include "monitor_27_p_B0_kernel.cpp"
#include "monitor_28_p_B0_kernel.cpp"
#include "monitor_29_p_B0_kernel.cpp"
#include "monitor_30_p_B0_kernel.cpp"
#include "monitor_31_p_B0_kernel.cpp"
#include "monitor_32_p_B0_kernel.cpp"
#include "monitor_33_p_B0_kernel.cpp"
#include "monitor_34_p_B0_kernel.cpp"
#include "monitor_35_p_B0_kernel.cpp"
#include "monitor_36_p_B0_kernel.cpp"
#include "monitor_37_rhou0_B0_kernel.cpp"
#include "monitor_38_rhou0_B0_kernel.cpp"
#include "monitor_39_rhou0_B0_kernel.cpp"
#include "monitor_40_rhou0_B0_kernel.cpp"
#include "monitor_41_rhou0_B0_kernel.cpp"
#include "monitor_42_rhou0_B0_kernel.cpp"
#include "monitor_43_rhou0_B0_kernel.cpp"
#include "monitor_44_rhou0_B0_kernel.cpp"
#include "monitor_45_rhou0_B0_kernel.cpp"
#include "monitor_46_rhou0_B0_kernel.cpp"
#include "monitor_47_rhou0_B0_kernel.cpp"
#include "monitor_48_rhou0_B0_kernel.cpp"
#include "monitor_49_rhou0_B0_kernel.cpp"
#include "monitor_50_rhou0_B0_kernel.cpp"
#include "monitor_51_rhou0_B0_kernel.cpp"
#include "monitor_52_rhou0_B0_kernel.cpp"
#include "monitor_53_rhou0_B0_kernel.cpp"
#include "monitor_54_rhou0_B0_kernel.cpp"
#include "monitor_55_rhou0_B0_kernel.cpp"
#include "monitor_56_rhou0_B0_kernel.cpp"
#include "monitor_57_rhou0_B0_kernel.cpp"
#include "monitor_58_rhou0_B0_kernel.cpp"
#include "monitor_59_rhou0_B0_kernel.cpp"
#include "monitor_60_rhou0_B0_kernel.cpp"
#include "monitor_61_rhou0_B0_kernel.cpp"
#include "monitor_62_rhou0_B0_kernel.cpp"
#include "monitor_63_rhou0_B0_kernel.cpp"
#include "monitor_64_rhou0_B0_kernel.cpp"
#include "monitor_65_rhou0_B0_kernel.cpp"
#include "monitor_66_rhou0_B0_kernel.cpp"
#include "monitor_67_rhou0_B0_kernel.cpp"
#include "monitor_68_rhou0_B0_kernel.cpp"
#include "monitor_69_rhou0_B0_kernel.cpp"
#include "monitor_70_rhou0_B0_kernel.cpp"
#include "monitor_71_rhou0_B0_kernel.cpp"
#include "monitor_72_rhou0_B0_kernel.cpp"
#include "monitor_73_rhou0_B0_kernel.cpp"
#include "monitor_74_rhou2_B0_kernel.cpp"
#include "monitor_75_rhou2_B0_kernel.cpp"
#include "monitor_76_rhou2_B0_kernel.cpp"
#include "monitor_77_rhou2_B0_kernel.cpp"
#include "monitor_78_rhou2_B0_kernel.cpp"
#include "monitor_79_rhou2_B0_kernel.cpp"
#include "monitor_80_rhou2_B0_kernel.cpp"
#include "monitor_81_rhou2_B0_kernel.cpp"
#include "monitor_82_rhou2_B0_kernel.cpp"
#include "monitor_83_rhou2_B0_kernel.cpp"
#include "monitor_84_rhou2_B0_kernel.cpp"
#include "monitor_85_rhou2_B0_kernel.cpp"
#include "monitor_86_rhou2_B0_kernel.cpp"
#include "monitor_87_rhou2_B0_kernel.cpp"
#include "monitor_88_rhou2_B0_kernel.cpp"
#include "monitor_89_rhou2_B0_kernel.cpp"
#include "monitor_90_rhou2_B0_kernel.cpp"
#include "monitor_91_rhou2_B0_kernel.cpp"
#include "monitor_92_rhou2_B0_kernel.cpp"
#include "monitor_93_rhou2_B0_kernel.cpp"
#include "monitor_94_rhou2_B0_kernel.cpp"
#include "monitor_95_rhou2_B0_kernel.cpp"
#include "monitor_96_rhou2_B0_kernel.cpp"
#include "monitor_97_rhou2_B0_kernel.cpp"
#include "monitor_98_rhou2_B0_kernel.cpp"
#include "monitor_99_rhou2_B0_kernel.cpp"
#include "monitor_100_rhou2_B0_kernel.cpp"
#include "monitor_101_rhou2_B0_kernel.cpp"
#include "monitor_102_rhou2_B0_kernel.cpp"
#include "monitor_103_rhou2_B0_kernel.cpp"
#include "monitor_104_rhou2_B0_kernel.cpp"
#include "monitor_105_rhou2_B0_kernel.cpp"
#include "monitor_106_rhou2_B0_kernel.cpp"
#include "monitor_107_rhou2_B0_kernel.cpp"
#include "monitor_108_rhou2_B0_kernel.cpp"
#include "monitor_109_rhou2_B0_kernel.cpp"
#include "monitor_110_rhou2_B0_kernel.cpp"
#include "opensbliblock00Kernel083_kernel.cpp"
