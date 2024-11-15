//
// auto-generated by ops.py
//
//header
#define OPS_2D
#define OPS_API 2
#include "ops_lib_core.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif

// global constants
extern double Delta0block0;
extern double Delta1block0;
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
extern int block0np0;
extern int block0np1;
extern double dt;
extern double gama;
extern double gamma_m1;
extern double inv2Delta0block0;
extern double inv2Delta1block0;
extern double inv2Minf;
extern double inv2a;
extern double invDelta0block0;
extern double invDelta1block0;
extern double invH;
extern double invPr;
extern double invRe;
extern double invRefT;
extern double inv_gamma_m1;
extern double invgama;
extern double invgamma_m1;
extern int niter;
extern double shock_filter_control;
extern double simulation_time;
extern int start_iter;
extern int write_output_file;

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
  if (!strcmp(name,"block0np0")) {
    #pragma omp target enter data map(to:block0np0)
  }
  else
  if (!strcmp(name,"block0np1")) {
    #pragma omp target enter data map(to:block0np1)
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
  if (!strcmp(name,"niter")) {
    #pragma omp target enter data map(to:niter)
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
  if (!strcmp(name,"write_output_file")) {
    #pragma omp target enter data map(to:write_output_file)
  }
  else
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
  }
}

//user kernel files
#include "opensbliblock00Kernel049_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel052_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel053_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel054_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel055_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel056_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel061_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel045_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel046_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel047_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel048_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel002_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel003_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel004_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel010_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel016_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel011_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel019_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel027_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel000_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel001_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel017_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel028_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel030_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel032_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel034_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel035_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel036_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel041_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel062_ompoffload_kernel.cpp"
