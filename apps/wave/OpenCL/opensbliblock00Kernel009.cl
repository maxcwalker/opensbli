//
// auto-generated by ops.py
//

#ifdef OCL_FMA
#pragma OPENCL FP_CONTRACT ON
#else
#pragma OPENCL FP_CONTRACT OFF
#endif
#pragma OPENCL EXTENSION cl_khr_fp64:enable

#define OPS_1D
#define OPS_API 2
#define OPS_NO_GLOBALS
#include "ops_macros.h"
#include "ops_opencl_reduction.h"

#ifndef MIN
#define MIN(a,b) ((a<b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a,b) ((a>b) ? (a) : (b))
#endif
#ifndef SIGN
#define SIGN(a,b) ((b<0.0) ? (a*(-1)) : (a))
#endif
#define OPS_READ 0
#define OPS_WRITE 1
#define OPS_RW 2
#define OPS_INC 3
#define OPS_MIN 4
#define OPS_MAX 5

//user function

 void opensbliblock00Kernel009(const ptr_double phi_RKold_B0,
  const ptr_double Residual0_B0,
  ptr_double phi_B0,
  const double
*rknew, const double dt)
{
   OPS_ACCS(phi_B0, 0) = dt*rknew[0]*OPS_ACCS(Residual0_B0, 0) + OPS_ACCS(phi_RKold_B0, 0);

}


__kernel void ops_opensbliblock00Kernel009(
__global const double* restrict arg0,
__global const double* restrict arg1,
__global double* restrict arg2,
const double arg3,
const double dt,
const int base0,
const int base1,
const int base2,
const int size0 ){


  int idx_x = get_global_id(0);

  if (idx_x < size0) {
    const ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1] };
    const ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1] };
    ptr_double ptr2 = { &arg2[base2 + idx_x * 1*1] };
    opensbliblock00Kernel009(ptr0,
                                  ptr1,
                                  ptr2,
                                  &arg3,
                                  dt);
  }

}
