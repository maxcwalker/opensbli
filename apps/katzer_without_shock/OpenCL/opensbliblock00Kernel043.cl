//
// auto-generated by ops.py
//

#ifdef OCL_FMA
#pragma OPENCL FP_CONTRACT ON
#else
#pragma OPENCL FP_CONTRACT OFF
#endif
#pragma OPENCL EXTENSION cl_khr_fp64:enable

#define OPS_2D
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

void opensbliblock00Kernel043(ptr_double D11_B0,
  ptr_double detJ_B0)
{
   OPS_ACCS(D11_B0, -1,0) = OPS_ACCS(D11_B0, 1,0);

   OPS_ACCS(detJ_B0, -1,0) = OPS_ACCS(detJ_B0, 1,0);

   OPS_ACCS(D11_B0, -2,0) = OPS_ACCS(D11_B0, 2,0);

   OPS_ACCS(detJ_B0, -2,0) = OPS_ACCS(detJ_B0, 2,0);

   OPS_ACCS(D11_B0, -3,0) = OPS_ACCS(D11_B0, 3,0);

   OPS_ACCS(detJ_B0, -3,0) = OPS_ACCS(detJ_B0, 3,0);

}


__kernel void ops_opensbliblock00Kernel043(
__global double* restrict arg0,
__global double* restrict arg1,
const int base0,
const int base1,
const int size0,
const int size1 ){


  int idx_y = get_global_id(1);
  int idx_x = get_global_id(0);

  if (idx_x < size0 && idx_y < size1) {
    ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_opensbliblock00Kernel043], xdim0_opensbliblock00Kernel043};
    ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_opensbliblock00Kernel043], xdim1_opensbliblock00Kernel043};
    opensbliblock00Kernel043(ptr0,
                                  ptr1);
  }

}
