//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel006;
int xdim1_opensbliblock00Kernel006;
int xdim2_opensbliblock00Kernel006;
int xdim3_opensbliblock00Kernel006;
int xdim4_opensbliblock00Kernel006;
int xdim5_opensbliblock00Kernel006;
int xdim6_opensbliblock00Kernel006;
int xdim7_opensbliblock00Kernel006;
int xdim8_opensbliblock00Kernel006;
int xdim9_opensbliblock00Kernel006;
int xdim10_opensbliblock00Kernel006;
int xdim11_opensbliblock00Kernel006;


//user function



void opensbliblock00Kernel006_c_wrapper(
  double * restrict Residual0_B0_p,
  double * restrict Residual1_B0_p,
  double * restrict Residual2_B0_p,
  double * restrict Residual3_B0_p,
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk2_B0_p,
  double * restrict wk3_B0_p,
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict rhou1_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double Residual0_B0 = { Residual0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel006*1, xdim0_opensbliblock00Kernel006};
      const ptr_double Residual1_B0 = { Residual1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel006*1, xdim1_opensbliblock00Kernel006};
      const ptr_double Residual2_B0 = { Residual2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel006*1, xdim2_opensbliblock00Kernel006};
      const ptr_double Residual3_B0 = { Residual3_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel006*1, xdim3_opensbliblock00Kernel006};
      const ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel006*1, xdim4_opensbliblock00Kernel006};
      const ptr_double wk1_B0 = { wk1_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel006*1, xdim5_opensbliblock00Kernel006};
      const ptr_double wk2_B0 = { wk2_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel006*1, xdim6_opensbliblock00Kernel006};
      const ptr_double wk3_B0 = { wk3_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel006*1, xdim7_opensbliblock00Kernel006};
      ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel006*1, xdim8_opensbliblock00Kernel006};
      ptr_double rho_B0 = { rho_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel006*1, xdim9_opensbliblock00Kernel006};
      ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel006*1, xdim10_opensbliblock00Kernel006};
      ptr_double rhou1_B0 = { rhou1_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel006*1, xdim11_opensbliblock00Kernel006};
      
   double Grid_0 = 0.0;
   double Grid_1 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Grid_1 = idx[1];

   Wall = ((Grid_0 >= -6 + block0np0 || Grid_0 <= 5 || Grid_1 <= 5) ? (
   0
)
: (
   1
));

    OPS_ACC(rho_B0, 0,0) = (-(-OPS_ACC(wk0_B0, -1,0) + OPS_ACC(wk0_B0, 0,0))*inv_rfact0_block0 - (-OPS_ACC(Residual0_B0, 0,-1) +
      OPS_ACC(Residual0_B0, 0,0))*inv_rfact1_block0*Wall)*dt + OPS_ACC(rho_B0, 0,0);

    OPS_ACC(rhou0_B0, 0,0) = (-(-OPS_ACC(wk1_B0, -1,0) + OPS_ACC(wk1_B0, 0,0))*inv_rfact0_block0 - (-OPS_ACC(Residual1_B0, 0,-1) +
      OPS_ACC(Residual1_B0, 0,0))*inv_rfact1_block0*Wall)*dt + OPS_ACC(rhou0_B0, 0,0);

    OPS_ACC(rhou1_B0, 0,0) = (-(-OPS_ACC(wk2_B0, -1,0) + OPS_ACC(wk2_B0, 0,0))*inv_rfact0_block0 - (-OPS_ACC(Residual2_B0, 0,-1) +
      OPS_ACC(Residual2_B0, 0,0))*inv_rfact1_block0*Wall)*dt + OPS_ACC(rhou1_B0, 0,0);

    OPS_ACC(rhoE_B0, 0,0) = (-(-OPS_ACC(wk3_B0, -1,0) + OPS_ACC(wk3_B0, 0,0))*inv_rfact0_block0 - (-OPS_ACC(Residual3_B0, 0,-1) +
      OPS_ACC(Residual3_B0, 0,0))*inv_rfact1_block0*Wall)*dt + OPS_ACC(rhoE_B0, 0,0);


    }
  }
}
