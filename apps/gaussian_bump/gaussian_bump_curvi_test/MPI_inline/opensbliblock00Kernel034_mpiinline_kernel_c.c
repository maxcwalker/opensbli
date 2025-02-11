//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel034;
int xdim1_opensbliblock00Kernel034;


//user function



void opensbliblock00Kernel034_c_wrapper(
  double * restrict u0_B0_p,
  double * restrict wk3_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel034*1, xdim0_opensbliblock00Kernel034};
      ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel034*1, xdim1_opensbliblock00Kernel034};
      
   if (idx[1] == 0){

       OPS_ACC(wk3_B0, 0,0) = (-3*OPS_ACC(u0_B0, 0,2) + 4*OPS_ACC(u0_B0, 0,1) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0) - (1.0/4.0)*OPS_ACC(u0_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(u0_B0, 0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       OPS_ACC(wk3_B0, 0,0) = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 0,2) - (1.0/4.0)*OPS_ACC(u0_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u0_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 0,1))*invDelta1block0;

   }

   else{

       OPS_ACC(wk3_B0, 0,0) = (-(2.0/3.0)*OPS_ACC(u0_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u0_B0, 0,2) + ((1.0/12.0))*OPS_ACC(u0_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(u0_B0, 0,1))*invDelta1block0;

   }


    }
  }
}
