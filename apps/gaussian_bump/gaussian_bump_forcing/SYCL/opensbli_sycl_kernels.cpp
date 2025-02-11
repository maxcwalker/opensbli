//
// auto-generated by ops.py
//
//header
#define OPS_2D
#define OPS_API 2
#include "ops_lib_core.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#include <limits>
#endif

#include "ops_sycl_rt_support.h"
#include "ops_sycl_reduction.h"
// global constants
cl::sycl::buffer<double,1> *Delta0block0_p=nullptr;
extern double Delta0block0;
cl::sycl::buffer<double,1> *Delta1block0_p=nullptr;
extern double Delta1block0;
cl::sycl::buffer<double,1> *H_p=nullptr;
extern double H;
cl::sycl::buffer<int,1> *HDF5_timing_p=nullptr;
extern int HDF5_timing;
cl::sycl::buffer<double,1> *L_p=nullptr;
extern double L;
cl::sycl::buffer<double,1> *Minf_p=nullptr;
extern double Minf;
cl::sycl::buffer<double,1> *Pr_p=nullptr;
extern double Pr;
cl::sycl::buffer<double,1> *Re_p=nullptr;
extern double Re;
cl::sycl::buffer<double,1> *RefT_p=nullptr;
extern double RefT;
cl::sycl::buffer<double,1> *SuthT_p=nullptr;
extern double SuthT;
cl::sycl::buffer<double,1> *Twall_p=nullptr;
extern double Twall;
cl::sycl::buffer<double,1> *a_p=nullptr;
extern double a;
cl::sycl::buffer<double,1> *b_p=nullptr;
extern double b;
cl::sycl::buffer<int,1> *block0np0_p=nullptr;
extern int block0np0;
cl::sycl::buffer<int,1> *block0np1_p=nullptr;
extern int block0np1;
cl::sycl::buffer<double,1> *dt_p=nullptr;
extern double dt;
cl::sycl::buffer<double,1> *gama_p=nullptr;
extern double gama;
cl::sycl::buffer<double,1> *gamma_m1_p=nullptr;
extern double gamma_m1;
cl::sycl::buffer<double,1> *inv2Delta0block0_p=nullptr;
extern double inv2Delta0block0;
cl::sycl::buffer<double,1> *inv2Delta1block0_p=nullptr;
extern double inv2Delta1block0;
cl::sycl::buffer<double,1> *inv2Minf_p=nullptr;
extern double inv2Minf;
cl::sycl::buffer<double,1> *inv2a_p=nullptr;
extern double inv2a;
cl::sycl::buffer<double,1> *invDelta0block0_p=nullptr;
extern double invDelta0block0;
cl::sycl::buffer<double,1> *invDelta1block0_p=nullptr;
extern double invDelta1block0;
cl::sycl::buffer<double,1> *invH_p=nullptr;
extern double invH;
cl::sycl::buffer<double,1> *invPr_p=nullptr;
extern double invPr;
cl::sycl::buffer<double,1> *invRe_p=nullptr;
extern double invRe;
cl::sycl::buffer<double,1> *invRefT_p=nullptr;
extern double invRefT;
cl::sycl::buffer<double,1> *inv_gamma_m1_p=nullptr;
extern double inv_gamma_m1;
cl::sycl::buffer<double,1> *invgama_p=nullptr;
extern double invgama;
cl::sycl::buffer<double,1> *invgamma_m1_p=nullptr;
extern double invgamma_m1;
cl::sycl::buffer<double,1> *k_0_p=nullptr;
extern double k_0;
cl::sycl::buffer<int,1> *niter_p=nullptr;
extern int niter;
cl::sycl::buffer<double,1> *omega_0_p=nullptr;
extern double omega_0;
cl::sycl::buffer<double,1> *shock_filter_control_p=nullptr;
extern double shock_filter_control;
cl::sycl::buffer<double,1> *simulation_time_p=nullptr;
extern double simulation_time;
cl::sycl::buffer<int,1> *start_iter_p=nullptr;
extern int start_iter;
cl::sycl::buffer<double,1> *tripA_p=nullptr;
extern double tripA;
cl::sycl::buffer<int,1> *write_output_file_p=nullptr;
extern int write_output_file;
cl::sycl::buffer<double,1> *xts_p=nullptr;
extern double xts;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const * type, int size, char * dat, char const * name ) {
  if (!strcmp(name,"Delta0block0")) {
    if (Delta0block0_p == nullptr) Delta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Delta0block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"Delta1block0")) {
    if (Delta1block0_p == nullptr) Delta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Delta1block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"H")) {
    if (H_p == nullptr) H_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*H_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
    if (HDF5_timing_p == nullptr) HDF5_timing_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*HDF5_timing_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"L")) {
    if (L_p == nullptr) L_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*L_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"Minf")) {
    if (Minf_p == nullptr) Minf_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Minf_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"Pr")) {
    if (Pr_p == nullptr) Pr_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Pr_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"Re")) {
    if (Re_p == nullptr) Re_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Re_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"RefT")) {
    if (RefT_p == nullptr) RefT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*RefT_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"SuthT")) {
    if (SuthT_p == nullptr) SuthT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*SuthT_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"Twall")) {
    if (Twall_p == nullptr) Twall_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*Twall_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"a")) {
    if (a_p == nullptr) a_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*a_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"b")) {
    if (b_p == nullptr) b_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*b_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"block0np0")) {
    if (block0np0_p == nullptr) block0np0_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*block0np0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"block0np1")) {
    if (block0np1_p == nullptr) block0np1_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*block0np1_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"dt")) {
    if (dt_p == nullptr) dt_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*dt_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"gama")) {
    if (gama_p == nullptr) gama_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*gama_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"gamma_m1")) {
    if (gamma_m1_p == nullptr) gamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*gamma_m1_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"inv2Delta0block0")) {
    if (inv2Delta0block0_p == nullptr) inv2Delta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*inv2Delta0block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"inv2Delta1block0")) {
    if (inv2Delta1block0_p == nullptr) inv2Delta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*inv2Delta1block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"inv2Minf")) {
    if (inv2Minf_p == nullptr) inv2Minf_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*inv2Minf_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"inv2a")) {
    if (inv2a_p == nullptr) inv2a_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*inv2a_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invDelta0block0")) {
    if (invDelta0block0_p == nullptr) invDelta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invDelta0block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invDelta1block0")) {
    if (invDelta1block0_p == nullptr) invDelta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invDelta1block0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invH")) {
    if (invH_p == nullptr) invH_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invH_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invPr")) {
    if (invPr_p == nullptr) invPr_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invPr_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invRe")) {
    if (invRe_p == nullptr) invRe_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invRe_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invRefT")) {
    if (invRefT_p == nullptr) invRefT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invRefT_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"inv_gamma_m1")) {
    if (inv_gamma_m1_p == nullptr) inv_gamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*inv_gamma_m1_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invgama")) {
    if (invgama_p == nullptr) invgama_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invgama_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"invgamma_m1")) {
    if (invgamma_m1_p == nullptr) invgamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*invgamma_m1_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"k_0")) {
    if (k_0_p == nullptr) k_0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*k_0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"niter")) {
    if (niter_p == nullptr) niter_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*niter_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"omega_0")) {
    if (omega_0_p == nullptr) omega_0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*omega_0_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"shock_filter_control")) {
    if (shock_filter_control_p == nullptr) shock_filter_control_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*shock_filter_control_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"simulation_time")) {
    if (simulation_time_p == nullptr) simulation_time_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*simulation_time_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"start_iter")) {
    if (start_iter_p == nullptr) start_iter_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*start_iter_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"tripA")) {
    if (tripA_p == nullptr) tripA_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*tripA_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"write_output_file")) {
    if (write_output_file_p == nullptr) write_output_file_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
    auto accessor = (*write_output_file_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((int*)dat)[d];
    }
  }
  else
  if (!strcmp(name,"xts")) {
    if (xts_p == nullptr) xts_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
    auto accessor = (*xts_p).get_access<cl::sycl::access::mode::write>();
    for ( int d=0; d<dim; d++ ){
      accessor[d] = ((double*)dat)[d];
    }
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
  }
}

//user kernel files
#include "opensbliblock00Kernel049_sycl_kernel.cpp"
#include "opensbliblock00Kernel052_sycl_kernel.cpp"
#include "opensbliblock00Kernel053_sycl_kernel.cpp"
#include "opensbliblock00Kernel054_sycl_kernel.cpp"
#include "opensbliblock00Kernel055_sycl_kernel.cpp"
#include "opensbliblock00Kernel056_sycl_kernel.cpp"
#include "opensbliblock00Kernel061_sycl_kernel.cpp"
#include "opensbliblock00Kernel045_sycl_kernel.cpp"
#include "opensbliblock00Kernel046_sycl_kernel.cpp"
#include "opensbliblock00Kernel047_sycl_kernel.cpp"
#include "opensbliblock00Kernel048_sycl_kernel.cpp"
#include "opensbliblock00Kernel010_sycl_kernel.cpp"
#include "opensbliblock00Kernel011_sycl_kernel.cpp"
#include "opensbliblock00Kernel002_sycl_kernel.cpp"
#include "opensbliblock00Kernel005_sycl_kernel.cpp"
#include "opensbliblock00Kernel014_sycl_kernel.cpp"
#include "opensbliblock00Kernel006_sycl_kernel.cpp"
#include "opensbliblock00Kernel021_sycl_kernel.cpp"
#include "opensbliblock00Kernel018_sycl_kernel.cpp"
#include "opensbliblock00Kernel000_sycl_kernel.cpp"
#include "opensbliblock00Kernel001_sycl_kernel.cpp"
#include "opensbliblock00Kernel017_sycl_kernel.cpp"
#include "opensbliblock00Kernel028_sycl_kernel.cpp"
#include "opensbliblock00Kernel030_sycl_kernel.cpp"
#include "opensbliblock00Kernel032_sycl_kernel.cpp"
#include "opensbliblock00Kernel034_sycl_kernel.cpp"
#include "opensbliblock00Kernel035_sycl_kernel.cpp"
#include "opensbliblock00Kernel036_sycl_kernel.cpp"
#include "opensbliblock00Kernel041_sycl_kernel.cpp"
#include "opensbliblock00Kernel062_sycl_kernel.cpp"
#include "monitor_0_p_B0_sycl_kernel.cpp"
#include "monitor_1_p_B0_sycl_kernel.cpp"
#include "monitor_2_p_B0_sycl_kernel.cpp"
#include "monitor_3_p_B0_sycl_kernel.cpp"
#include "monitor_4_p_B0_sycl_kernel.cpp"
#include "monitor_5_p_B0_sycl_kernel.cpp"
#include "monitor_6_p_B0_sycl_kernel.cpp"
