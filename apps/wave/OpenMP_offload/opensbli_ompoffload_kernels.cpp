//
// auto-generated by ops.py
//
//header
#define OPS_1D
#define OPS_API 2
#include "ops_lib_core.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#endif

// global constants
extern double Delta0block0;
extern int HDF5_timing;
extern int block0np0;
extern double c0;
extern double dt;
extern double invDelta0block0;
extern int niter;
extern double simulation_time;
extern int start_iter;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const *type,
int size, char *dat, char const *name){
  ops_execute(instance);
  if (!strcmp(name,"Delta0block0")) {
    #pragma omp target enter data map(to:Delta0block0)
  }
  else
  if (!strcmp(name,"HDF5_timing")) {
    #pragma omp target enter data map(to:HDF5_timing)
  }
  else
  if (!strcmp(name,"block0np0")) {
    #pragma omp target enter data map(to:block0np0)
  }
  else
  if (!strcmp(name,"c0")) {
    #pragma omp target enter data map(to:c0)
  }
  else
  if (!strcmp(name,"dt")) {
    #pragma omp target enter data map(to:dt)
  }
  else
  if (!strcmp(name,"invDelta0block0")) {
    #pragma omp target enter data map(to:invDelta0block0)
  }
  else
  if (!strcmp(name,"niter")) {
    #pragma omp target enter data map(to:niter)
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
  {
    throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
  }
}

//user kernel files
#include "opensbliblock00Kernel000_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel007_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel003_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel004_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel009_ompoffload_kernel.cpp"
#include "opensbliblock00Kernel008_ompoffload_kernel.cpp"
