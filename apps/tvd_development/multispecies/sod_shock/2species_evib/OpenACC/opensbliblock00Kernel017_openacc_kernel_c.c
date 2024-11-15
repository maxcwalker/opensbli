//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel017;
int xdim1_opensbliblock00Kernel017;

//user function
inline 
void opensbliblock00Kernel017(const ptr_double T_B0,
  ptr_double Residual4_B0,
  const int *idx)
{
   double d2_T_dx = 0.0;
   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*OPS_ACC(T_B0, 1) - (14.0/3.0)*OPS_ACC(T_B0, 3) + ((11.0/12.0))*OPS_ACC(T_B0, 4) + ((19.0/2.0))*OPS_ACC(T_B0, 2) +
            ((35.0/12.0))*OPS_ACC(T_B0, 0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*OPS_ACC(T_B0, 1) - (5.0/3.0)*OPS_ACC(T_B0, 0) - (1.0/12.0)*OPS_ACC(T_B0, 3) + ((1.0/3.0))*OPS_ACC(T_B0, 2) +
            ((11.0/12.0))*OPS_ACC(T_B0, -1))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*OPS_ACC(T_B0, -1) - (14.0/3.0)*OPS_ACC(T_B0, -3) + ((11.0/12.0))*OPS_ACC(T_B0, -4) + ((19.0/2.0))*OPS_ACC(T_B0, -2) +
            ((35.0/12.0))*OPS_ACC(T_B0, 0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*OPS_ACC(T_B0, -1) - (5.0/3.0)*OPS_ACC(T_B0, 0) - (1.0/12.0)*OPS_ACC(T_B0, -3) + ((1.0/3.0))*OPS_ACC(T_B0, -2) +
            ((11.0/12.0))*OPS_ACC(T_B0, 1))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*OPS_ACC(T_B0, 0) - (1.0/12.0)*OPS_ACC(T_B0, -2) - (1.0/12.0)*OPS_ACC(T_B0, 2) + ((4.0/3.0))*OPS_ACC(T_B0, 1) +
            ((4.0/3.0))*OPS_ACC(T_B0, -1))*inv2Delta0block0;

   }

   OPS_ACC(Residual4_B0, 0) = invRe*kappa*d2_T_dx + OPS_ACC(Residual4_B0, 0);

}


void opensbliblock00Kernel017_c_wrapper(
  double *p_a0,
  double *p_a1,
  int *p_a2,
  int arg_idx0,
  int x_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1)
  #pragma acc loop
  #endif
  for ( int n_x=0; n_x<x_size; n_x++ ){
    int arg_idx[] = {arg_idx0+n_x};
    const ptr_double ptr0 = {  p_a0 + n_x*1*1 };
    ptr_double ptr1 = {  p_a1 + n_x*1*1 };
    opensbliblock00Kernel017( ptr0, ptr1,arg_idx);
  }
}
