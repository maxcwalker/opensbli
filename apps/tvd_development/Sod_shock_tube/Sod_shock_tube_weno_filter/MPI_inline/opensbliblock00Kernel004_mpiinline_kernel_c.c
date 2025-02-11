//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel004;
int xdim1_opensbliblock00Kernel004;
int xdim2_opensbliblock00Kernel004;
int xdim3_opensbliblock00Kernel004;
int xdim4_opensbliblock00Kernel004;
int xdim5_opensbliblock00Kernel004;


//user function



void opensbliblock00Kernel004_c_wrapper(
  double * restrict wk0_B0_p,
  double * restrict wk1_B0_p,
  double * restrict wk2_B0_p,
  double * restrict rhoE_B0_p,
  double * restrict rho_B0_p,
  double * restrict rhou0_B0_p,
  int * restrict idx,
  int arg_idx0, 
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    int idx[] = {arg_idx0+n_x};
    const ptr_double wk0_B0 = { wk0_B0_p + n_x*1};
    const ptr_double wk1_B0 = { wk1_B0_p + n_x*1};
    const ptr_double wk2_B0 = { wk2_B0_p + n_x*1};
    ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1};
    ptr_double rho_B0 = { rho_B0_p + n_x*1};
    ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1};
    
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   OPS_ACC(rho_B0, 0) = -(-OPS_ACC(wk0_B0, -1) + OPS_ACC(wk0_B0, 0))*dt*inv_rfact0_block0 + OPS_ACC(rho_B0, 0);

   OPS_ACC(rhou0_B0, 0) = -(-OPS_ACC(wk1_B0, -1) + OPS_ACC(wk1_B0, 0))*dt*inv_rfact0_block0 + OPS_ACC(rhou0_B0, 0);

   OPS_ACC(rhoE_B0, 0) = -(-OPS_ACC(wk2_B0, -1) + OPS_ACC(wk2_B0, 0))*dt*inv_rfact0_block0 + OPS_ACC(rhoE_B0, 0);


  }
}
