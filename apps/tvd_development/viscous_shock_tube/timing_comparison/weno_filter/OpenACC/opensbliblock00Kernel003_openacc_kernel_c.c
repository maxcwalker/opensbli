//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel003;
int xdim1_opensbliblock00Kernel003;
int xdim2_opensbliblock00Kernel003;
int xdim3_opensbliblock00Kernel003;
int xdim4_opensbliblock00Kernel003;
int xdim5_opensbliblock00Kernel003;
int xdim6_opensbliblock00Kernel003;
int xdim7_opensbliblock00Kernel003;

//user function
inline 
 void opensbliblock00Kernel003(ptr_double Residual0_B0,
  ptr_double Residual1_B0,
  ptr_double Residual2_B0,
  ptr_double Residual3_B0,
  ptr_double wk0_B0,
  ptr_double wk1_B0,
  ptr_double wk2_B0,
  ptr_double wk3_B0)
{
   OPS_ACC(wk0_B0, 0,0) = 0.0;

   OPS_ACC(wk1_B0, 0,0) = 0.0;

   OPS_ACC(wk2_B0, 0,0) = 0.0;

   OPS_ACC(wk3_B0, 0,0) = 0.0;

   OPS_ACC(Residual0_B0, 0,0) = 0.0;

   OPS_ACC(Residual1_B0, 0,0) = 0.0;

   OPS_ACC(Residual2_B0, 0,0) = 0.0;

   OPS_ACC(Residual3_B0, 0,0) = 0.0;

}


void opensbliblock00Kernel003_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel003*1*1, xdim0_opensbliblock00Kernel003};
      ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel003*1*1, xdim1_opensbliblock00Kernel003};
      ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel003*1*1, xdim2_opensbliblock00Kernel003};
      ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel003*1*1, xdim3_opensbliblock00Kernel003};
      ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel003*1*1, xdim4_opensbliblock00Kernel003};
      ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel003*1*1, xdim5_opensbliblock00Kernel003};
      ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel003*1*1, xdim6_opensbliblock00Kernel003};
      ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel003*1*1, xdim7_opensbliblock00Kernel003};
      opensbliblock00Kernel003( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7);
    }
  }
}
