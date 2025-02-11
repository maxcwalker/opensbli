//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel036;
int ydim0_opensbliblock00Kernel036;
int xdim1_opensbliblock00Kernel036;
int ydim1_opensbliblock00Kernel036;

//user function
inline 
void opensbliblock00Kernel036(const ptr_double u1_B0,
  ptr_double wk3_B0,
  const int *idx)
{
    OPS_ACC(wk3_B0, 0,0,0) = ((idx[1] == 0) ? (
   inv_0*(4*OPS_ACC(u1_B0, 0,1,0) - rc13*OPS_ACC(u1_B0, 0,0,0) +
      (rc14)*OPS_ACC(u1_B0, 0,3,0) - 3*OPS_ACC(u1_B0, 0,2,0) - rc15*OPS_ACC(u1_B0, 0,4,0))
)
: ((idx[1] == 1) ? (

      (rc16)*inv_0*(18*OPS_ACC(u1_B0, 0,1,0) - 10*OPS_ACC(u1_B0, 0,0,0) + OPS_ACC(u1_B0, 0,3,0) -
      6*OPS_ACC(u1_B0, 0,2,0) - 3*OPS_ACC(u1_B0, 0,-1,0))
)
: (
   (rc16)*inv_0*(OPS_ACC(u1_B0, 0,-2,0) -
      OPS_ACC(u1_B0, 0,2,0) + 8*OPS_ACC(u1_B0, 0,1,0) - 8*OPS_ACC(u1_B0, 0,-1,0))
)));

}


void opensbliblock00Kernel036_c_wrapper(
  double *p_a0,
  double *p_a1,
  int *p_a2,
  int arg_idx0, int arg_idx1, int arg_idx2,
  int x_size, int y_size, int z_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1)
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
        const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel036*1*1 + n_z*xdim0_opensbliblock00Kernel036*ydim0_opensbliblock00Kernel036*1*1, xdim0_opensbliblock00Kernel036, ydim0_opensbliblock00Kernel036};
        ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel036*1*1 + n_z*xdim1_opensbliblock00Kernel036*ydim1_opensbliblock00Kernel036*1*1, xdim1_opensbliblock00Kernel036, ydim1_opensbliblock00Kernel036};
        opensbliblock00Kernel036( ptr0,
          ptr1,
          arg_idx );

      }
    }
  }
}
