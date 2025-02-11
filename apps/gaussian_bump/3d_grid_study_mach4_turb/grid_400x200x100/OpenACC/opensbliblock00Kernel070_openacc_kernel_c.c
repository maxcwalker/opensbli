//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel070;
int ydim0_opensbliblock00Kernel070;
int xdim1_opensbliblock00Kernel070;
int ydim1_opensbliblock00Kernel070;
int xdim2_opensbliblock00Kernel070;
int ydim2_opensbliblock00Kernel070;
int xdim3_opensbliblock00Kernel070;
int ydim3_opensbliblock00Kernel070;
int xdim4_opensbliblock00Kernel070;
int ydim4_opensbliblock00Kernel070;
int xdim5_opensbliblock00Kernel070;
int ydim5_opensbliblock00Kernel070;
int xdim6_opensbliblock00Kernel070;
int ydim6_opensbliblock00Kernel070;
int xdim7_opensbliblock00Kernel070;
int ydim7_opensbliblock00Kernel070;
int xdim8_opensbliblock00Kernel070;
int ydim8_opensbliblock00Kernel070;
int xdim9_opensbliblock00Kernel070;
int ydim9_opensbliblock00Kernel070;
int xdim10_opensbliblock00Kernel070;
int ydim10_opensbliblock00Kernel070;

//user function
inline 
 void opensbliblock00Kernel070(const ptr_double x0_B0,
  const ptr_double x1_B0,
  ptr_double D00_B0,
  ptr_double D01_B0,
  ptr_double D10_B0,
  ptr_double D11_B0,
  ptr_double detJ_B0,
  ptr_double wk0_B0,
  ptr_double wk1_B0,
  ptr_double wk3_B0,
  ptr_double wk4_B0,
  const int *idx)
{
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
    d1_x1_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x1_B0, 2,0,0) + 4*OPS_ACC(x1_B0, 1,0,0) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 4,0,0) + ((4.0/3.0))*OPS_ACC(x1_B0, 3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 2,0,0) - (1.0/4.0)*OPS_ACC(x1_B0, -1,0,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 3,0,0) + ((3.0/2.0))*OPS_ACC(x1_B0, 1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*OPS_ACC(x1_B0, -1,0,0) + 3*OPS_ACC(x1_B0, -2,0,0) - (4.0/3.0)*OPS_ACC(x1_B0, -3,0,0) +
      ((1.0/4.0))*OPS_ACC(x1_B0, -4,0,0) + ((25.0/12.0))*OPS_ACC(x1_B0, 0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (

      ((1.0/2.0))*OPS_ACC(x1_B0, -2,0,0) - (3.0/2.0)*OPS_ACC(x1_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x1_B0, -3,0,0) + ((1.0/4.0))*OPS_ACC(x1_B0, 1,0,0) +
      ((5.0/6.0))*OPS_ACC(x1_B0, 0,0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x1_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x1_B0, 2,0,0) + ((1.0/12.0))*OPS_ACC(x1_B0, -2,0,0)
      + ((2.0/3.0))*OPS_ACC(x1_B0, 1,0,0)
)))));

    d1_x0_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x0_B0, 0,2,0) + 4*OPS_ACC(x0_B0, 0,1,0) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 0,4,0) + ((4.0/3.0))*OPS_ACC(x0_B0, 0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 0,2,0) - (1.0/4.0)*OPS_ACC(x0_B0, 0,-1,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,3,0) + ((3.0/2.0))*OPS_ACC(x0_B0, 0,1,0)
)
: (

      -(2.0/3.0)*OPS_ACC(x0_B0, 0,-1,0) - (1.0/12.0)*OPS_ACC(x0_B0, 0,2,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,-2,0) + ((2.0/3.0))*OPS_ACC(x0_B0, 0,1,0)
)));

    d1_x1_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(x1_B0, 0,2,0) + 4*OPS_ACC(x1_B0, 0,1,0) - (25.0/12.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x1_B0, 0,4,0) + ((4.0/3.0))*OPS_ACC(x1_B0, 0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x1_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x1_B0, 0,2,0) - (1.0/4.0)*OPS_ACC(x1_B0, 0,-1,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,3,0) + ((3.0/2.0))*OPS_ACC(x1_B0, 0,1,0)
)
: (

      -(2.0/3.0)*OPS_ACC(x1_B0, 0,-1,0) - (1.0/12.0)*OPS_ACC(x1_B0, 0,2,0) + ((1.0/12.0))*OPS_ACC(x1_B0, 0,-2,0) + ((2.0/3.0))*OPS_ACC(x1_B0, 0,1,0)
)));

    d1_x0_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(x0_B0, 2,0,0) + 4*OPS_ACC(x0_B0, 1,0,0) - (25.0/12.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/4.0)*OPS_ACC(x0_B0, 4,0,0) + ((4.0/3.0))*OPS_ACC(x0_B0, 3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(x0_B0, 0,0,0) -
      (1.0/2.0)*OPS_ACC(x0_B0, 2,0,0) - (1.0/4.0)*OPS_ACC(x0_B0, -1,0,0) + ((1.0/12.0))*OPS_ACC(x0_B0, 3,0,0) + ((3.0/2.0))*OPS_ACC(x0_B0, 1,0,0)
)
:
      ((idx[0] == -1 + block0np0) ? (
   -4*OPS_ACC(x0_B0, -1,0,0) + 3*OPS_ACC(x0_B0, -2,0,0) - (4.0/3.0)*OPS_ACC(x0_B0, -3,0,0) +
      ((1.0/4.0))*OPS_ACC(x0_B0, -4,0,0) + ((25.0/12.0))*OPS_ACC(x0_B0, 0,0,0)
)
: ((idx[0] == -2 + block0np0) ? (

      ((1.0/2.0))*OPS_ACC(x0_B0, -2,0,0) - (3.0/2.0)*OPS_ACC(x0_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x0_B0, -3,0,0) + ((1.0/4.0))*OPS_ACC(x0_B0, 1,0,0) +
      ((5.0/6.0))*OPS_ACC(x0_B0, 0,0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(x0_B0, -1,0,0) - (1.0/12.0)*OPS_ACC(x0_B0, 2,0,0) + ((1.0/12.0))*OPS_ACC(x0_B0, -2,0,0)
      + ((2.0/3.0))*OPS_ACC(x0_B0, 1,0,0)
)))));

   OPS_ACC(wk0_B0, 0,0,0) = d1_x0_dx;

   OPS_ACC(wk1_B0, 0,0,0) = d1_x0_dy;

   OPS_ACC(wk3_B0, 0,0,0) = d1_x1_dx;

   OPS_ACC(wk4_B0, 0,0,0) = d1_x1_dy;

   OPS_ACC(detJ_B0, 0,0,0) = d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx;

   OPS_ACC(D00_B0, 0,0,0) = d1_x1_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D01_B0, 0,0,0) = -d1_x0_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D10_B0, 0,0,0) = -d1_x1_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   OPS_ACC(D11_B0, 0,0,0) = d1_x0_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

}


void opensbliblock00Kernel070_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  double *p_a9,
  double *p_a10,
  int *p_a11,
  int arg_idx0, int arg_idx1, int arg_idx2,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9,p_a10)
  #pragma acc loop
  #endif
  for ( int n_z=0; n_z<z_size; n_z++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_y=0; n_y<y_size; n_y++ ){
      #ifdef OPS_GPU
      #pragma acc loop
      #endif
      for ( int n_x=0; n_x<x_size; n_x++ ){
        int arg_idx[] = {arg_idx0+n_x, arg_idx1+n_y, arg_idx2+n_z};
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel070*1*1 + n_z*xdim0_opensbliblock00Kernel070*ydim0_opensbliblock00Kernel070*1*1, xdim0_opensbliblock00Kernel070, ydim0_opensbliblock00Kernel070};
        const ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel070*1*1 + n_z*xdim1_opensbliblock00Kernel070*ydim1_opensbliblock00Kernel070*1*1, xdim1_opensbliblock00Kernel070, ydim1_opensbliblock00Kernel070};
        ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel070*1*1 + n_z*xdim2_opensbliblock00Kernel070*ydim2_opensbliblock00Kernel070*1*1, xdim2_opensbliblock00Kernel070, ydim2_opensbliblock00Kernel070};
        ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel070*1*1 + n_z*xdim3_opensbliblock00Kernel070*ydim3_opensbliblock00Kernel070*1*1, xdim3_opensbliblock00Kernel070, ydim3_opensbliblock00Kernel070};
        ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel070*1*1 + n_z*xdim4_opensbliblock00Kernel070*ydim4_opensbliblock00Kernel070*1*1, xdim4_opensbliblock00Kernel070, ydim4_opensbliblock00Kernel070};
        ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel070*1*1 + n_z*xdim5_opensbliblock00Kernel070*ydim5_opensbliblock00Kernel070*1*1, xdim5_opensbliblock00Kernel070, ydim5_opensbliblock00Kernel070};
        ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel070*1*1 + n_z*xdim6_opensbliblock00Kernel070*ydim6_opensbliblock00Kernel070*1*1, xdim6_opensbliblock00Kernel070, ydim6_opensbliblock00Kernel070};
        ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel070*1*1 + n_z*xdim7_opensbliblock00Kernel070*ydim7_opensbliblock00Kernel070*1*1, xdim7_opensbliblock00Kernel070, ydim7_opensbliblock00Kernel070};
        ptr_double ptr8 = {  p_a8 + n_x*1*1 + n_y*xdim8_opensbliblock00Kernel070*1*1 + n_z*xdim8_opensbliblock00Kernel070*ydim8_opensbliblock00Kernel070*1*1, xdim8_opensbliblock00Kernel070, ydim8_opensbliblock00Kernel070};
        ptr_double ptr9 = {  p_a9 + n_x*1*1 + n_y*xdim9_opensbliblock00Kernel070*1*1 + n_z*xdim9_opensbliblock00Kernel070*ydim9_opensbliblock00Kernel070*1*1, xdim9_opensbliblock00Kernel070, ydim9_opensbliblock00Kernel070};
        ptr_double ptr10 = {  p_a10 + n_x*1*1 + n_y*xdim10_opensbliblock00Kernel070*1*1 + n_z*xdim10_opensbliblock00Kernel070*ydim10_opensbliblock00Kernel070*1*1, xdim10_opensbliblock00Kernel070, ydim10_opensbliblock00Kernel070};
        opensbliblock00Kernel070( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7,
           ptr8, ptr9, ptr10,arg_idx);
      }
    }
  }
}
