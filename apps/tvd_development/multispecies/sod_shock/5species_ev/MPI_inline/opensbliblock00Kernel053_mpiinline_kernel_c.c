//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel053;
int xdim1_opensbliblock00Kernel053;


//user function



void opensbliblock00Kernel053_c_wrapper(
  double * restrict T_B0_p,
  double * restrict eveqN2_B0_p,
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double T_B0 = { T_B0_p + n_x*1};
    ptr_double eveqN2_B0 = { eveqN2_B0_p + n_x*1};
    
   OPS_ACC(eveqN2_B0, 0) = Rhat*invMN2*thetavN2/(-1.0 + exp(thetavN2/OPS_ACC(T_B0, 0)));


  }
}
