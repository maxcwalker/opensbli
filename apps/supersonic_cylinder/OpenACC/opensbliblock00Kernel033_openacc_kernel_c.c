//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel033;
int xdim1_opensbliblock00Kernel033;
int xdim2_opensbliblock00Kernel033;
int xdim3_opensbliblock00Kernel033;
int xdim4_opensbliblock00Kernel033;

//user function
inline 
void opensbliblock00Kernel033(ptr_double D11_B0,
  ptr_double D00_B0,
  ptr_double detJ_B0,
  ptr_double D10_B0,
  ptr_double D01_B0)
{
   OPS_ACC(D00_B0, 0,-1) = OPS_ACC(D00_B0, 0,1);

   OPS_ACC(D01_B0, 0,-1) = OPS_ACC(D01_B0, 0,1);

   OPS_ACC(D10_B0, 0,-1) = OPS_ACC(D10_B0, 0,1);

   OPS_ACC(D11_B0, 0,-1) = OPS_ACC(D11_B0, 0,1);

   OPS_ACC(detJ_B0, 0,-1) = OPS_ACC(detJ_B0, 0,1);

   OPS_ACC(D00_B0, 0,-2) = OPS_ACC(D00_B0, 0,2);

   OPS_ACC(D01_B0, 0,-2) = OPS_ACC(D01_B0, 0,2);

   OPS_ACC(D10_B0, 0,-2) = OPS_ACC(D10_B0, 0,2);

   OPS_ACC(D11_B0, 0,-2) = OPS_ACC(D11_B0, 0,2);

   OPS_ACC(detJ_B0, 0,-2) = OPS_ACC(detJ_B0, 0,2);

   OPS_ACC(D00_B0, 0,-3) = OPS_ACC(D00_B0, 0,3);

   OPS_ACC(D01_B0, 0,-3) = OPS_ACC(D01_B0, 0,3);

   OPS_ACC(D10_B0, 0,-3) = OPS_ACC(D10_B0, 0,3);

   OPS_ACC(D11_B0, 0,-3) = OPS_ACC(D11_B0, 0,3);

   OPS_ACC(detJ_B0, 0,-3) = OPS_ACC(detJ_B0, 0,3);

}


void opensbliblock00Kernel033_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel033*1*1, xdim0_opensbliblock00Kernel033};
      ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel033*1*1, xdim1_opensbliblock00Kernel033};
      ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel033*1*1, xdim2_opensbliblock00Kernel033};
      ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel033*1*1, xdim3_opensbliblock00Kernel033};
      ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel033*1*1, xdim4_opensbliblock00Kernel033};
      opensbliblock00Kernel033( ptr0,
          ptr1,ptr2,
          ptr3,ptr4 );

    }
  }
}
