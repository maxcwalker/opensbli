//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel019;
int ydim0_opensbliblock00Kernel019;
int xdim1_opensbliblock00Kernel019;
int ydim1_opensbliblock00Kernel019;
int xdim2_opensbliblock00Kernel019;
int ydim2_opensbliblock00Kernel019;
int xdim3_opensbliblock00Kernel019;
int ydim3_opensbliblock00Kernel019;
int xdim4_opensbliblock00Kernel019;
int ydim4_opensbliblock00Kernel019;
int xdim5_opensbliblock00Kernel019;
int ydim5_opensbliblock00Kernel019;
int xdim6_opensbliblock00Kernel019;
int ydim6_opensbliblock00Kernel019;


//user function



void opensbliblock00Kernel019_c_wrapper(
  double * restrict D10_B0_p,
  double * restrict D11_B0_p,
  double * restrict D12_B0_p,
  double * restrict u0_B0_p,
  double * restrict u1_B0_p,
  double * restrict u2_B0_p,
  double * restrict U1_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        const ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel019*1 + n_z * xdim0_opensbliblock00Kernel019 * ydim0_opensbliblock00Kernel019*1, xdim0_opensbliblock00Kernel019, ydim0_opensbliblock00Kernel019};
        const ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel019*1 + n_z * xdim1_opensbliblock00Kernel019 * ydim1_opensbliblock00Kernel019*1, xdim1_opensbliblock00Kernel019, ydim1_opensbliblock00Kernel019};
        const ptr_double D12_B0 = { D12_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel019*1 + n_z * xdim2_opensbliblock00Kernel019 * ydim2_opensbliblock00Kernel019*1, xdim2_opensbliblock00Kernel019, ydim2_opensbliblock00Kernel019};
        const ptr_double u0_B0 = { u0_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel019*1 + n_z * xdim3_opensbliblock00Kernel019 * ydim3_opensbliblock00Kernel019*1, xdim3_opensbliblock00Kernel019, ydim3_opensbliblock00Kernel019};
        const ptr_double u1_B0 = { u1_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel019*1 + n_z * xdim4_opensbliblock00Kernel019 * ydim4_opensbliblock00Kernel019*1, xdim4_opensbliblock00Kernel019, ydim4_opensbliblock00Kernel019};
        const ptr_double u2_B0 = { u2_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel019*1 + n_z * xdim5_opensbliblock00Kernel019 * ydim5_opensbliblock00Kernel019*1, xdim5_opensbliblock00Kernel019, ydim5_opensbliblock00Kernel019};
        ptr_double U1_B0 = { U1_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel019*1 + n_z * xdim6_opensbliblock00Kernel019 * ydim6_opensbliblock00Kernel019*1, xdim6_opensbliblock00Kernel019, ydim6_opensbliblock00Kernel019};
        
   OPS_ACC(U1_B0, 0,0,0) = OPS_ACC(u0_B0, 0,0,0)*OPS_ACC(D10_B0, 0,0,0) + OPS_ACC(u1_B0, 0,0,0)*OPS_ACC(D11_B0, 0,0,0) + OPS_ACC(u2_B0, 0,0,0)*OPS_ACC(D12_B0, 0,0,0);


      }
    }
  }
}
