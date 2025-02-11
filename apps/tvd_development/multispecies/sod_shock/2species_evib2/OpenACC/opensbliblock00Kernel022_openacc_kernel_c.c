//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel022;
int xdim1_opensbliblock00Kernel022;
int xdim2_opensbliblock00Kernel022;
int xdim3_opensbliblock00Kernel022;
int xdim4_opensbliblock00Kernel022;
int xdim5_opensbliblock00Kernel022;
int xdim6_opensbliblock00Kernel022;
int xdim7_opensbliblock00Kernel022;
int xdim8_opensbliblock00Kernel022;
int xdim9_opensbliblock00Kernel022;
int xdim10_opensbliblock00Kernel022;
int xdim11_opensbliblock00Kernel022;
int xdim12_opensbliblock00Kernel022;
int xdim13_opensbliblock00Kernel022;
int xdim14_opensbliblock00Kernel022;

//user function
inline 
 void opensbliblock00Kernel022(const ptr_double Residual0_B0,
  const ptr_double Residual1_B0,
  const ptr_double Residual2_B0,
  const ptr_double Residual3_B0,
  const ptr_double Residual4_B0,
  ptr_double rhoE_B0,
  ptr_double rhoE_RKold_B0,
  ptr_double rhoN2_B0,
  ptr_double rhoN2_RKold_B0,
  ptr_double rhoN_B0,
  ptr_double rhoN_RKold_B0,
  ptr_double rhoev_B0,
  ptr_double rhoev_RKold_B0,
  ptr_double rhou0_B0,
  ptr_double rhou0_RKold_B0,
  const double
*rkA,
  const double *rkB)
{
   OPS_ACC(rhoN_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoN_RKold_B0, 0) + dt*OPS_ACC(Residual0_B0, 0);

   OPS_ACC(rhoN_B0, 0) = rkB[0]*OPS_ACC(rhoN_RKold_B0, 0) + OPS_ACC(rhoN_B0, 0);

   OPS_ACC(rhoN2_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoN2_RKold_B0, 0) + dt*OPS_ACC(Residual1_B0, 0);

   OPS_ACC(rhoN2_B0, 0) = rkB[0]*OPS_ACC(rhoN2_RKold_B0, 0) + OPS_ACC(rhoN2_B0, 0);

   OPS_ACC(rhou0_RKold_B0, 0) = rkA[0]*OPS_ACC(rhou0_RKold_B0, 0) + dt*OPS_ACC(Residual2_B0, 0);

   OPS_ACC(rhou0_B0, 0) = rkB[0]*OPS_ACC(rhou0_RKold_B0, 0) + OPS_ACC(rhou0_B0, 0);

   OPS_ACC(rhoev_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoev_RKold_B0, 0) + dt*OPS_ACC(Residual3_B0, 0);

   OPS_ACC(rhoev_B0, 0) = rkB[0]*OPS_ACC(rhoev_RKold_B0, 0) + OPS_ACC(rhoev_B0, 0);

   OPS_ACC(rhoE_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoE_RKold_B0, 0) + dt*OPS_ACC(Residual4_B0, 0);

   OPS_ACC(rhoE_B0, 0) = rkB[0]*OPS_ACC(rhoE_RKold_B0, 0) + OPS_ACC(rhoE_B0, 0);

}


void opensbliblock00Kernel022_c_wrapper(
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
  double p_a15,
  double p_a16,
  int x_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9,p_a10,p_a11,p_a12,p_a13,p_a14)
  #pragma acc loop
  #endif
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double ptr0 = {  p_a0 + n_x*1*1 };
    const ptr_double ptr1 = {  p_a1 + n_x*1*1 };
    const ptr_double ptr2 = {  p_a2 + n_x*1*1 };
    const ptr_double ptr3 = {  p_a3 + n_x*1*1 };
    const ptr_double ptr4 = {  p_a4 + n_x*1*1 };
    ptr_double ptr5 = {  p_a5 + n_x*1*1 };
    ptr_double ptr6 = {  p_a6 + n_x*1*1 };
    ptr_double ptr7 = {  p_a7 + n_x*1*1 };
    ptr_double ptr8 = {  p_a8 + n_x*1*1 };
    ptr_double ptr9 = {  p_a9 + n_x*1*1 };
    ptr_double ptr10 = {  p_a10 + n_x*1*1 };
    ptr_double ptr11 = {  p_a11 + n_x*1*1 };
    ptr_double ptr12 = {  p_a12 + n_x*1*1 };
    ptr_double ptr13 = {  p_a13 + n_x*1*1 };
    ptr_double ptr14 = {  p_a14 + n_x*1*1 };
    opensbliblock00Kernel022( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7,
           ptr8, ptr9, ptr10, ptr11,
           ptr12, ptr13, ptr14, &p_a15,
           &p_a16);
  }
}
