//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel005;
int xdim1_opensbliblock00Kernel005;
int xdim2_opensbliblock00Kernel005;
int xdim3_opensbliblock00Kernel005;
int xdim4_opensbliblock00Kernel005;
int xdim5_opensbliblock00Kernel005;
int xdim6_opensbliblock00Kernel005;
int xdim7_opensbliblock00Kernel005;
int xdim8_opensbliblock00Kernel005;
int xdim9_opensbliblock00Kernel005;
int xdim10_opensbliblock00Kernel005;
int xdim11_opensbliblock00Kernel005;
int xdim12_opensbliblock00Kernel005;
int xdim13_opensbliblock00Kernel005;
int xdim14_opensbliblock00Kernel005;
int xdim15_opensbliblock00Kernel005;

//user function
inline 
 void opensbliblock00Kernel005(const ptr_double wk0_B0,
  const ptr_double wk1_B0,
  const ptr_double wk2_B0,
  const
ptr_double wk3_B0,
  const ptr_double wk4_B0,
  const ptr_double wk5_B0,
  const ptr_double wk6_B0,
  const ptr_double wk7_B0,
  ptr_double rhoE_B0,
  ptr_double rhoN2_B0,
  ptr_double rhoNO_B0,
  ptr_double rhoN_B0,
  ptr_double rhoO2_B0,
  ptr_double rhoO_B0,
  ptr_double rhoev_B0,
  ptr_double rhou0_B0,
  const int *idx)
{
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   OPS_ACC(rhoO_B0, 0) = -(-OPS_ACC(wk0_B0, -1) + OPS_ACC(wk0_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoO_B0, 0);

   OPS_ACC(rhoO2_B0, 0) = -(-OPS_ACC(wk1_B0, -1) + OPS_ACC(wk1_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoO2_B0, 0);

   OPS_ACC(rhoN_B0, 0) = -(-OPS_ACC(wk2_B0, -1) + OPS_ACC(wk2_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoN_B0, 0);

   OPS_ACC(rhoN2_B0, 0) = -(-OPS_ACC(wk3_B0, -1) + OPS_ACC(wk3_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoN2_B0, 0);

   OPS_ACC(rhoNO_B0, 0) = -(-OPS_ACC(wk4_B0, -1) + OPS_ACC(wk4_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoNO_B0, 0);

   OPS_ACC(rhou0_B0, 0) = -(-OPS_ACC(wk5_B0, -1) + OPS_ACC(wk5_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhou0_B0, 0);

   OPS_ACC(rhoev_B0, 0) = -(-OPS_ACC(wk6_B0, -1) + OPS_ACC(wk6_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoev_B0, 0);

   OPS_ACC(rhoE_B0, 0) = -(-OPS_ACC(wk7_B0, -1) + OPS_ACC(wk7_B0, 0))*dt*invDelta0block0 + OPS_ACC(rhoE_B0, 0);

}


void opensbliblock00Kernel005_c_wrapper(
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
  double *p_a11,
  double *p_a12,
  double *p_a13,
  double *p_a14,
  double *p_a15,
  int *p_a16,
  int arg_idx0,
  int x_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9,p_a10,p_a11,p_a12,p_a13,p_a14,p_a15)
  #pragma acc loop
  #endif
  for ( int n_x=0; n_x<x_size; n_x++ ){
    int arg_idx[] = {arg_idx0+n_x};
    const ptr_double ptr0 = {  p_a0 + n_x*1*1 };
    const ptr_double ptr1 = {  p_a1 + n_x*1*1 };
    const ptr_double ptr2 = {  p_a2 + n_x*1*1 };
    const ptr_double ptr3 = {  p_a3 + n_x*1*1 };
    const ptr_double ptr4 = {  p_a4 + n_x*1*1 };
    const ptr_double ptr5 = {  p_a5 + n_x*1*1 };
    const ptr_double ptr6 = {  p_a6 + n_x*1*1 };
    const ptr_double ptr7 = {  p_a7 + n_x*1*1 };
    ptr_double ptr8 = {  p_a8 + n_x*1*1 };
    ptr_double ptr9 = {  p_a9 + n_x*1*1 };
    ptr_double ptr10 = {  p_a10 + n_x*1*1 };
    ptr_double ptr11 = {  p_a11 + n_x*1*1 };
    ptr_double ptr12 = {  p_a12 + n_x*1*1 };
    ptr_double ptr13 = {  p_a13 + n_x*1*1 };
    ptr_double ptr14 = {  p_a14 + n_x*1*1 };
    ptr_double ptr15 = {  p_a15 + n_x*1*1 };
    opensbliblock00Kernel005( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7,
           ptr8, ptr9, ptr10, ptr11,
           ptr12, ptr13, ptr14, ptr15,
          arg_idx);
  }
}
