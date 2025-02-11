//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel046;
int xdim1_opensbliblock00Kernel046;
int xdim2_opensbliblock00Kernel046;
int xdim3_opensbliblock00Kernel046;
int xdim4_opensbliblock00Kernel046;
int xdim5_opensbliblock00Kernel046;

//user function
inline 
 void opensbliblock00Kernel046(const ptr_double rhoN2_B0,
  const ptr_double rhoNO_B0,
  const ptr_double rhoN_B0,
  const ptr_double rhoO2_B0,
  const ptr_double rhoO_B0,
  ptr_double yN_B0)
{
   OPS_ACC(yN_B0, 0) = OPS_ACC(rhoN_B0, 0)/(OPS_ACC(rhoN_B0, 0) + OPS_ACC(rhoO_B0, 0) + OPS_ACC(rhoN2_B0, 0) + OPS_ACC(rhoNO_B0, 0) + OPS_ACC(rhoO2_B0, 0));

}


void opensbliblock00Kernel046_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  int x_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5)
  #pragma acc loop
  #endif
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double ptr0 = {  p_a0 + n_x*1*1 };
    const ptr_double ptr1 = {  p_a1 + n_x*1*1 };
    const ptr_double ptr2 = {  p_a2 + n_x*1*1 };
    const ptr_double ptr3 = {  p_a3 + n_x*1*1 };
    const ptr_double ptr4 = {  p_a4 + n_x*1*1 };
    ptr_double ptr5 = {  p_a5 + n_x*1*1 };
    opensbliblock00Kernel046( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5);
  }
}
