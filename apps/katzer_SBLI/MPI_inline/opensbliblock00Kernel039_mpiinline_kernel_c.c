//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel039;
int xdim1_opensbliblock00Kernel039;
int xdim2_opensbliblock00Kernel039;
int xdim3_opensbliblock00Kernel039;


//user function



void opensbliblock00Kernel039_c_wrapper(
  double * restrict rhou0_B0_p,
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhou1_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel039*1, xdim0_opensbliblock00Kernel039};
      ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel039*1, xdim1_opensbliblock00Kernel039};
      ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel039*1, xdim2_opensbliblock00Kernel039};
      ptr_double rhou1_B0 = { rhou1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel039*1, xdim3_opensbliblock00Kernel039};
      
   double x0 = 0.0;
   x0 = Delta0block0*idx[0];

   OPS_ACC(rho_B0, 0,0) = ((x0 > 40.0) ? (
   1.129734572
)
: (
   1.00000596004
));

   OPS_ACC(rhou0_B0, 0,0) = ((x0 > 40.0) ? (
   1.0921171
)
: (
   1.00000268202
));

   OPS_ACC(rhou1_B0, 0,0) = ((x0 > 40.0) ? (
   -0.058866065
)
: (
   0.00565001630205
));

   OPS_ACC(rhoE_B0, 0,0) = ((x0 > 40.0) ? (
   1.0590824
)
: (
   0.94644428042
));


    }
  }
}
