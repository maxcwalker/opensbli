//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel036;
int xdim1_opensbliblock00Kernel036;


//user function



void opensbliblock00Kernel036_c_wrapper(
  double * restrict T_B0_p,
  double * restrict wk8_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double T_B0 = { T_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel036*1, xdim0_opensbliblock00Kernel036};
      ptr_double wk8_B0 = { wk8_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel036*1, xdim1_opensbliblock00Kernel036};
      
    OPS_ACC(wk8_B0, 0,0) = inv2Delta1block0*((idx[1] == 0) ? (
   -(26.0/3.0)*OPS_ACC(T_B0, 0,1) - (14.0/3.0)*OPS_ACC(T_B0, 0,3) +
      ((11.0/12.0))*OPS_ACC(T_B0, 0,4) + ((19.0/2.0))*OPS_ACC(T_B0, 0,2) + ((35.0/12.0))*OPS_ACC(T_B0, 0,0)
)
: ((idx[1] == 1) ? (

      ((1.0/2.0))*OPS_ACC(T_B0, 0,1) - (5.0/3.0)*OPS_ACC(T_B0, 0,0) - (1.0/12.0)*OPS_ACC(T_B0, 0,3) + ((1.0/3.0))*OPS_ACC(T_B0, 0,2) +
      ((11.0/12.0))*OPS_ACC(T_B0, 0,-1)
)
: (
   -(5.0/2.0)*OPS_ACC(T_B0, 0,0) - (1.0/12.0)*OPS_ACC(T_B0, 0,-2) - (1.0/12.0)*OPS_ACC(T_B0, 0,2) +
      ((4.0/3.0))*OPS_ACC(T_B0, 0,1) + ((4.0/3.0))*OPS_ACC(T_B0, 0,-1)
)));


    }
  }
}
