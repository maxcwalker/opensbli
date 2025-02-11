//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel073;
int ydim0_opensbliblock00Kernel073;
int xdim1_opensbliblock00Kernel073;
int ydim1_opensbliblock00Kernel073;
int xdim2_opensbliblock00Kernel073;
int ydim2_opensbliblock00Kernel073;
int xdim3_opensbliblock00Kernel073;
int ydim3_opensbliblock00Kernel073;
int xdim4_opensbliblock00Kernel073;
int ydim4_opensbliblock00Kernel073;


//user function



void opensbliblock00Kernel073_c_wrapper(
  double * restrict detJ_B0_p,
  double * restrict D00_B0_p,
  double * restrict D11_B0_p,
  double * restrict D01_B0_p,
  double * restrict D10_B0_p,
  int x_size, int y_size, int z_size) {
  #pragma omp parallel for
  for ( int n_z=0; n_z<z_size; n_z++ ){
    for ( int n_y=0; n_y<y_size; n_y++ ){
      for ( int n_x=0; n_x<x_size; n_x++ ){
        ptr_double detJ_B0 = { detJ_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel073*1 + n_z * xdim0_opensbliblock00Kernel073 * ydim0_opensbliblock00Kernel073*1, xdim0_opensbliblock00Kernel073, ydim0_opensbliblock00Kernel073};
        ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel073*1 + n_z * xdim1_opensbliblock00Kernel073 * ydim1_opensbliblock00Kernel073*1, xdim1_opensbliblock00Kernel073, ydim1_opensbliblock00Kernel073};
        ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel073*1 + n_z * xdim2_opensbliblock00Kernel073 * ydim2_opensbliblock00Kernel073*1, xdim2_opensbliblock00Kernel073, ydim2_opensbliblock00Kernel073};
        ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel073*1 + n_z * xdim3_opensbliblock00Kernel073 * ydim3_opensbliblock00Kernel073*1, xdim3_opensbliblock00Kernel073, ydim3_opensbliblock00Kernel073};
        ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel073*1 + n_z * xdim4_opensbliblock00Kernel073 * ydim4_opensbliblock00Kernel073*1, xdim4_opensbliblock00Kernel073, ydim4_opensbliblock00Kernel073};
        
   OPS_ACC(D00_B0, 0,-1,0) = OPS_ACC(D00_B0, 0,1,0);

   OPS_ACC(D01_B0, 0,-1,0) = OPS_ACC(D01_B0, 0,1,0);

   OPS_ACC(D10_B0, 0,-1,0) = OPS_ACC(D10_B0, 0,1,0);

   OPS_ACC(D11_B0, 0,-1,0) = OPS_ACC(D11_B0, 0,1,0);

   OPS_ACC(detJ_B0, 0,-1,0) = OPS_ACC(detJ_B0, 0,1,0);

   OPS_ACC(D00_B0, 0,-2,0) = OPS_ACC(D00_B0, 0,2,0);

   OPS_ACC(D01_B0, 0,-2,0) = OPS_ACC(D01_B0, 0,2,0);

   OPS_ACC(D10_B0, 0,-2,0) = OPS_ACC(D10_B0, 0,2,0);

   OPS_ACC(D11_B0, 0,-2,0) = OPS_ACC(D11_B0, 0,2,0);

   OPS_ACC(detJ_B0, 0,-2,0) = OPS_ACC(detJ_B0, 0,2,0);

   OPS_ACC(D00_B0, 0,-3,0) = OPS_ACC(D00_B0, 0,3,0);

   OPS_ACC(D01_B0, 0,-3,0) = OPS_ACC(D01_B0, 0,3,0);

   OPS_ACC(D10_B0, 0,-3,0) = OPS_ACC(D10_B0, 0,3,0);

   OPS_ACC(D11_B0, 0,-3,0) = OPS_ACC(D11_B0, 0,3,0);

   OPS_ACC(detJ_B0, 0,-3,0) = OPS_ACC(detJ_B0, 0,3,0);


      }
    }
  }
}
