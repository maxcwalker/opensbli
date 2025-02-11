//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel064;
int ydim0_opensbliblock00Kernel064;
int xdim1_opensbliblock00Kernel064;
int ydim1_opensbliblock00Kernel064;
int xdim2_opensbliblock00Kernel064;
int ydim2_opensbliblock00Kernel064;
int xdim3_opensbliblock00Kernel064;
int ydim3_opensbliblock00Kernel064;
int xdim4_opensbliblock00Kernel064;
int ydim4_opensbliblock00Kernel064;

//user function
inline 
 void opensbliblock00Kernel064(ptr_double rhoE_B0,
  ptr_double rho_B0,
  ptr_double rhou0_B0,
  ptr_double rhou1_B0,
  ptr_double rhou2_B0)
{
   OPS_ACC(rho_B0, 0,0,0) = OPS_ACC(rho_B0, 0,-1,0);

   OPS_ACC(rhou0_B0, 0,0,0) = OPS_ACC(rhou0_B0, 0,-1,0);

   OPS_ACC(rhou1_B0, 0,0,0) = OPS_ACC(rhou1_B0, 0,-1,0);

   OPS_ACC(rhou2_B0, 0,0,0) = OPS_ACC(rhou2_B0, 0,-1,0);

   OPS_ACC(rhoE_B0, 0,0,0) = OPS_ACC(rhoE_B0, 0,-1,0);

   OPS_ACC(rho_B0, 0,1,0) = OPS_ACC(rho_B0, 0,-1,0);

   OPS_ACC(rhou0_B0, 0,1,0) = OPS_ACC(rhou0_B0, 0,-1,0);

   OPS_ACC(rhou1_B0, 0,1,0) = OPS_ACC(rhou1_B0, 0,-1,0);

   OPS_ACC(rhou2_B0, 0,1,0) = OPS_ACC(rhou2_B0, 0,-1,0);

   OPS_ACC(rhoE_B0, 0,1,0) = OPS_ACC(rhoE_B0, 0,-1,0);

   OPS_ACC(rho_B0, 0,2,0) = OPS_ACC(rho_B0, 0,-2,0);

   OPS_ACC(rhou0_B0, 0,2,0) = OPS_ACC(rhou0_B0, 0,-2,0);

   OPS_ACC(rhou1_B0, 0,2,0) = OPS_ACC(rhou1_B0, 0,-2,0);

   OPS_ACC(rhou2_B0, 0,2,0) = OPS_ACC(rhou2_B0, 0,-2,0);

   OPS_ACC(rhoE_B0, 0,2,0) = OPS_ACC(rhoE_B0, 0,-2,0);

   OPS_ACC(rho_B0, 0,3,0) = OPS_ACC(rho_B0, 0,-3,0);

   OPS_ACC(rhou0_B0, 0,3,0) = OPS_ACC(rhou0_B0, 0,-3,0);

   OPS_ACC(rhou1_B0, 0,3,0) = OPS_ACC(rhou1_B0, 0,-3,0);

   OPS_ACC(rhou2_B0, 0,3,0) = OPS_ACC(rhou2_B0, 0,-3,0);

   OPS_ACC(rhoE_B0, 0,3,0) = OPS_ACC(rhoE_B0, 0,-3,0);

   OPS_ACC(rho_B0, 0,4,0) = OPS_ACC(rho_B0, 0,-4,0);

   OPS_ACC(rhou0_B0, 0,4,0) = OPS_ACC(rhou0_B0, 0,-4,0);

   OPS_ACC(rhou1_B0, 0,4,0) = OPS_ACC(rhou1_B0, 0,-4,0);

   OPS_ACC(rhou2_B0, 0,4,0) = OPS_ACC(rhou2_B0, 0,-4,0);

   OPS_ACC(rhoE_B0, 0,4,0) = OPS_ACC(rhoE_B0, 0,-4,0);

}


void opensbliblock00Kernel064_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4)
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
        ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel064*1*1 + n_z*xdim0_opensbliblock00Kernel064*ydim0_opensbliblock00Kernel064*1*1, xdim0_opensbliblock00Kernel064, ydim0_opensbliblock00Kernel064};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel064*1*1 + n_z*xdim1_opensbliblock00Kernel064*ydim1_opensbliblock00Kernel064*1*1, xdim1_opensbliblock00Kernel064, ydim1_opensbliblock00Kernel064};
        ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel064*1*1 + n_z*xdim2_opensbliblock00Kernel064*ydim2_opensbliblock00Kernel064*1*1, xdim2_opensbliblock00Kernel064, ydim2_opensbliblock00Kernel064};
        ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel064*1*1 + n_z*xdim3_opensbliblock00Kernel064*ydim3_opensbliblock00Kernel064*1*1, xdim3_opensbliblock00Kernel064, ydim3_opensbliblock00Kernel064};
        ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel064*1*1 + n_z*xdim4_opensbliblock00Kernel064*ydim4_opensbliblock00Kernel064*1*1, xdim4_opensbliblock00Kernel064, ydim4_opensbliblock00Kernel064};
        opensbliblock00Kernel064( ptr0,
          ptr1,
          ptr2,
          ptr3,
          ptr4 );

      }
    }
  }
}
