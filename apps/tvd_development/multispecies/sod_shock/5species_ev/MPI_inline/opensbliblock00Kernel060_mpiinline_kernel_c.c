//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel060;
int xdim1_opensbliblock00Kernel060;
int xdim2_opensbliblock00Kernel060;
int xdim3_opensbliblock00Kernel060;
int xdim4_opensbliblock00Kernel060;
int xdim5_opensbliblock00Kernel060;
int xdim6_opensbliblock00Kernel060;
int xdim7_opensbliblock00Kernel060;
int xdim8_opensbliblock00Kernel060;
int xdim9_opensbliblock00Kernel060;
int xdim10_opensbliblock00Kernel060;
int xdim11_opensbliblock00Kernel060;
int xdim12_opensbliblock00Kernel060;
int xdim13_opensbliblock00Kernel060;
int xdim14_opensbliblock00Kernel060;
int xdim15_opensbliblock00Kernel060;
int xdim16_opensbliblock00Kernel060;
int xdim17_opensbliblock00Kernel060;
int xdim18_opensbliblock00Kernel060;
int xdim19_opensbliblock00Kernel060;
int xdim20_opensbliblock00Kernel060;
int xdim21_opensbliblock00Kernel060;
int xdim22_opensbliblock00Kernel060;
int xdim23_opensbliblock00Kernel060;


//user function



void opensbliblock00Kernel060_c_wrapper(
  double * restrict Residual0_B0_p,
  double * restrict Residual1_B0_p,
  double * restrict Residual2_B0_p,
  double * restrict Residual3_B0_p,
  double * restrict Residual4_B0_p,
  double * restrict Residual5_B0_p,
  double * restrict Residual6_B0_p,
  double * restrict Residual7_B0_p,
  double * restrict rhoE_B0_p,
  double * restrict rhoE_RKold_B0_p,
  double * restrict rhoN2_B0_p,
  double * restrict rhoN2_RKold_B0_p,
  double * restrict rhoNO_B0_p,
  double * restrict rhoNO_RKold_B0_p,
  double * restrict rhoN_B0_p,
  double * restrict rhoN_RKold_B0_p,
  double * restrict rhoO2_B0_p,
  double * restrict rhoO2_RKold_B0_p,
  double * restrict rhoO_B0_p,
  double * restrict rhoO_RKold_B0_p,
  double * restrict rhoev_B0_p,
  double * restrict rhoev_RKold_B0_p,
  double * restrict rhou0_B0_p,
  double * restrict rhou0_RKold_B0_p,
  const double * restrict rkA,
  const double * restrict rkB,
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    const ptr_double Residual0_B0 = { Residual0_B0_p + n_x*1};
    const ptr_double Residual1_B0 = { Residual1_B0_p + n_x*1};
    const ptr_double Residual2_B0 = { Residual2_B0_p + n_x*1};
    const ptr_double Residual3_B0 = { Residual3_B0_p + n_x*1};
    const ptr_double Residual4_B0 = { Residual4_B0_p + n_x*1};
    const ptr_double Residual5_B0 = { Residual5_B0_p + n_x*1};
    const ptr_double Residual6_B0 = { Residual6_B0_p + n_x*1};
    const ptr_double Residual7_B0 = { Residual7_B0_p + n_x*1};
    ptr_double rhoE_B0 = { rhoE_B0_p + n_x*1};
    ptr_double rhoE_RKold_B0 = { rhoE_RKold_B0_p + n_x*1};
    ptr_double rhoN2_B0 = { rhoN2_B0_p + n_x*1};
    ptr_double rhoN2_RKold_B0 = { rhoN2_RKold_B0_p + n_x*1};
    ptr_double rhoNO_B0 = { rhoNO_B0_p + n_x*1};
    ptr_double rhoNO_RKold_B0 = { rhoNO_RKold_B0_p + n_x*1};
    ptr_double rhoN_B0 = { rhoN_B0_p + n_x*1};
    ptr_double rhoN_RKold_B0 = { rhoN_RKold_B0_p + n_x*1};
    ptr_double rhoO2_B0 = { rhoO2_B0_p + n_x*1};
    ptr_double rhoO2_RKold_B0 = { rhoO2_RKold_B0_p + n_x*1};
    ptr_double rhoO_B0 = { rhoO_B0_p + n_x*1};
    ptr_double rhoO_RKold_B0 = { rhoO_RKold_B0_p + n_x*1};
    ptr_double rhoev_B0 = { rhoev_B0_p + n_x*1};
    ptr_double rhoev_RKold_B0 = { rhoev_RKold_B0_p + n_x*1};
    ptr_double rhou0_B0 = { rhou0_B0_p + n_x*1};
    ptr_double rhou0_RKold_B0 = { rhou0_RKold_B0_p + n_x*1};
    
   OPS_ACC(rhoN2_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoN2_RKold_B0, 0) + dt*OPS_ACC(Residual0_B0, 0);

   OPS_ACC(rhoN2_B0, 0) = rkB[0]*OPS_ACC(rhoN2_RKold_B0, 0) + OPS_ACC(rhoN2_B0, 0);

   OPS_ACC(rhoO2_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoO2_RKold_B0, 0) + dt*OPS_ACC(Residual1_B0, 0);

   OPS_ACC(rhoO2_B0, 0) = rkB[0]*OPS_ACC(rhoO2_RKold_B0, 0) + OPS_ACC(rhoO2_B0, 0);

   OPS_ACC(rhoNO_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoNO_RKold_B0, 0) + dt*OPS_ACC(Residual2_B0, 0);

   OPS_ACC(rhoNO_B0, 0) = rkB[0]*OPS_ACC(rhoNO_RKold_B0, 0) + OPS_ACC(rhoNO_B0, 0);

   OPS_ACC(rhoN_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoN_RKold_B0, 0) + dt*OPS_ACC(Residual3_B0, 0);

   OPS_ACC(rhoN_B0, 0) = rkB[0]*OPS_ACC(rhoN_RKold_B0, 0) + OPS_ACC(rhoN_B0, 0);

   OPS_ACC(rhoO_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoO_RKold_B0, 0) + dt*OPS_ACC(Residual4_B0, 0);

   OPS_ACC(rhoO_B0, 0) = rkB[0]*OPS_ACC(rhoO_RKold_B0, 0) + OPS_ACC(rhoO_B0, 0);

   OPS_ACC(rhoev_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoev_RKold_B0, 0) + dt*OPS_ACC(Residual5_B0, 0);

   OPS_ACC(rhoev_B0, 0) = rkB[0]*OPS_ACC(rhoev_RKold_B0, 0) + OPS_ACC(rhoev_B0, 0);

   OPS_ACC(rhou0_RKold_B0, 0) = rkA[0]*OPS_ACC(rhou0_RKold_B0, 0) + dt*OPS_ACC(Residual6_B0, 0);

   OPS_ACC(rhou0_B0, 0) = rkB[0]*OPS_ACC(rhou0_RKold_B0, 0) + OPS_ACC(rhou0_B0, 0);

   OPS_ACC(rhoE_RKold_B0, 0) = rkA[0]*OPS_ACC(rhoE_RKold_B0, 0) + dt*OPS_ACC(Residual7_B0, 0);

   OPS_ACC(rhoE_B0, 0) = rkB[0]*OPS_ACC(rhoE_RKold_B0, 0) + OPS_ACC(rhoE_B0, 0);


  }
}
