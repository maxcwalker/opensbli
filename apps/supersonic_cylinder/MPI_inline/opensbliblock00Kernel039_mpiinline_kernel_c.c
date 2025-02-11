//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel039;
int xdim1_opensbliblock00Kernel039;
int xdim2_opensbliblock00Kernel039;
int xdim3_opensbliblock00Kernel039;
int xdim4_opensbliblock00Kernel039;
int xdim5_opensbliblock00Kernel039;
int xdim6_opensbliblock00Kernel039;
int xdim7_opensbliblock00Kernel039;
int xdim8_opensbliblock00Kernel039;
int xdim9_opensbliblock00Kernel039;
int xdim10_opensbliblock00Kernel039;
int xdim11_opensbliblock00Kernel039;


//user function



void opensbliblock00Kernel039_c_wrapper(
  double * restrict D11_B0_p,
  double * restrict D00_B0_p,
  double * restrict D10_B0_p,
  double * restrict D01_B0_p,
  double * restrict SD111_B0_p,
  double * restrict SD101_B0_p,
  double * restrict SD010_B0_p,
  double * restrict SD100_B0_p,
  double * restrict SD001_B0_p,
  double * restrict SD000_B0_p,
  double * restrict SD011_B0_p,
  double * restrict SD110_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel039*1, xdim0_opensbliblock00Kernel039};
      const ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel039*1, xdim1_opensbliblock00Kernel039};
      const ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel039*1, xdim2_opensbliblock00Kernel039};
      const ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel039*1, xdim3_opensbliblock00Kernel039};
      ptr_double SD111_B0 = { SD111_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel039*1, xdim4_opensbliblock00Kernel039};
      ptr_double SD101_B0 = { SD101_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel039*1, xdim5_opensbliblock00Kernel039};
      ptr_double SD010_B0 = { SD010_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel039*1, xdim6_opensbliblock00Kernel039};
      ptr_double SD100_B0 = { SD100_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel039*1, xdim7_opensbliblock00Kernel039};
      ptr_double SD001_B0 = { SD001_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel039*1, xdim8_opensbliblock00Kernel039};
      ptr_double SD000_B0 = { SD000_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel039*1, xdim9_opensbliblock00Kernel039};
      ptr_double SD011_B0 = { SD011_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel039*1, xdim10_opensbliblock00Kernel039};
      ptr_double SD110_B0 = { SD110_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel039*1, xdim11_opensbliblock00Kernel039};
      
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_5 = 0.0;
   double localeval_1 = 0.0;
   double localeval_3 = 0.0;
   double localeval_4 = 0.0;
   double localeval_7 = 0.0;
   double localeval_6 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_1*(1.06910315192207e-15*OPS_ACC(D10_B0, 0,5) -
      1.50000000000003*OPS_ACC(D10_B0, 0,2) + 0.333333333333356*OPS_ACC(D10_B0, 0,3) -
      1.83333333333334*OPS_ACC(D10_B0, 0,0) - 8.34657956545823e-15*OPS_ACC(D10_B0, 0,4) +
      3.00000000000002*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == 1) ? (
   inv_1*(-0.376283677513354*OPS_ACC(D10_B0, 0,-1)
      + 0.0394168524399447*OPS_ACC(D10_B0, 0,2) - 0.0658051057710389*OPS_ACC(D10_B0, 0,3) -
      0.322484932882161*OPS_ACC(D10_B0, 0,0) + 0.00571369039775442*OPS_ACC(D10_B0, 0,4) +
      0.719443173328855*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == 2) ? (
   inv_1*(0.113446470384241*OPS_ACC(D10_B0, 0,-2)
      - 0.791245592765872*OPS_ACC(D10_B0, 0,-1) - 0.0367146847001261*OPS_ACC(D10_B0, 0,2) -
      0.00412637789557492*OPS_ACC(D10_B0, 0,3) + 0.197184333887745*OPS_ACC(D10_B0, 0,0) +
      0.521455851089587*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*OPS_ACC(D10_B0, 0,-2)
      - 0.727822147724592*OPS_ACC(D10_B0, 0,-1) - 0.082033432844602*OPS_ACC(D10_B0, 0,2) +
      0.0451033223343881*OPS_ACC(D10_B0, 0,0) - 0.00932597985049999*OPS_ACC(D10_B0, 0,-3) +
      0.652141084861241*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == block0np1 - 1) ? (

      inv_1*(1.50000000000003*OPS_ACC(D10_B0, 0,-2) - 3.00000000000002*OPS_ACC(D10_B0, 0,-1) -
      1.06910315192207e-15*OPS_ACC(D10_B0, 0,-5) + 8.34657956545823e-15*OPS_ACC(D10_B0, 0,-4) +
      1.83333333333334*OPS_ACC(D10_B0, 0,0) - 0.333333333333356*OPS_ACC(D10_B0, 0,-3))
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*OPS_ACC(D10_B0, 0,-2) - 0.719443173328855*OPS_ACC(D10_B0, 0,-1) -
      0.00571369039775442*OPS_ACC(D10_B0, 0,-4) + 0.322484932882161*OPS_ACC(D10_B0, 0,0) +
      0.0658051057710389*OPS_ACC(D10_B0, 0,-3) + 0.376283677513354*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(0.0367146847001261*OPS_ACC(D10_B0, 0,-2) - 0.521455851089587*OPS_ACC(D10_B0, 0,-1) -
      0.113446470384241*OPS_ACC(D10_B0, 0,2) - 0.197184333887745*OPS_ACC(D10_B0, 0,0) +
      0.00412637789557492*OPS_ACC(D10_B0, 0,-3) + 0.791245592765872*OPS_ACC(D10_B0, 0,1))
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.082033432844602*OPS_ACC(D10_B0, 0,-2) - 0.652141084861241*OPS_ACC(D10_B0, 0,-1) -
      0.121937153224065*OPS_ACC(D10_B0, 0,2) + 0.00932597985049999*OPS_ACC(D10_B0, 0,3) -
      0.0451033223343881*OPS_ACC(D10_B0, 0,0) + 0.727822147724592*OPS_ACC(D10_B0, 0,1))
)
: (

      (rc4)*inv_1*(-8*OPS_ACC(D10_B0, 0,-1) + 8*OPS_ACC(D10_B0, 0,1) - OPS_ACC(D10_B0, 0,2) +
      OPS_ACC(D10_B0, 0,-2))
)))))))));

    localeval_1 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*OPS_ACC(D11_B0, 0,3) -
      8.34657956545823e-15*OPS_ACC(D11_B0, 0,4) - 1.83333333333334*OPS_ACC(D11_B0, 0,0) +
      1.06910315192207e-15*OPS_ACC(D11_B0, 0,5) + 3.00000000000002*OPS_ACC(D11_B0, 0,1) -
      1.50000000000003*OPS_ACC(D11_B0, 0,2))
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*OPS_ACC(D11_B0, 0,3)
      + 0.00571369039775442*OPS_ACC(D11_B0, 0,4) - 0.322484932882161*OPS_ACC(D11_B0, 0,0) -
      0.376283677513354*OPS_ACC(D11_B0, 0,-1) + 0.719443173328855*OPS_ACC(D11_B0, 0,1) +
      0.0394168524399447*OPS_ACC(D11_B0, 0,2))
)
: ((idx[1] == 2) ? (

      inv_1*(-0.00412637789557492*OPS_ACC(D11_B0, 0,3) + 0.197184333887745*OPS_ACC(D11_B0, 0,0) +
      0.113446470384241*OPS_ACC(D11_B0, 0,-2) - 0.791245592765872*OPS_ACC(D11_B0, 0,-1) +
      0.521455851089587*OPS_ACC(D11_B0, 0,1) - 0.0367146847001261*OPS_ACC(D11_B0, 0,2))
)
: ((idx[1] == 3) ? (

      inv_1*(-0.00932597985049999*OPS_ACC(D11_B0, 0,-3) + 0.0451033223343881*OPS_ACC(D11_B0, 0,0) -
      0.727822147724592*OPS_ACC(D11_B0, 0,-1) + 0.121937153224065*OPS_ACC(D11_B0, 0,-2) +
      0.652141084861241*OPS_ACC(D11_B0, 0,1) - 0.082033432844602*OPS_ACC(D11_B0, 0,2))
)
: ((idx[1] == block0np1 - 1)
      ? (
   inv_1*(-0.333333333333356*OPS_ACC(D11_B0, 0,-3) + 1.83333333333334*OPS_ACC(D11_B0, 0,0) +
      1.50000000000003*OPS_ACC(D11_B0, 0,-2) - 3.00000000000002*OPS_ACC(D11_B0, 0,-1) -
      1.06910315192207e-15*OPS_ACC(D11_B0, 0,-5) + 8.34657956545823e-15*OPS_ACC(D11_B0, 0,-4))
)
: ((idx[1] ==
      block0np1 - 2) ? (
   inv_1*(0.0658051057710389*OPS_ACC(D11_B0, 0,-3) + 0.322484932882161*OPS_ACC(D11_B0, 0,0) -
      0.0394168524399447*OPS_ACC(D11_B0, 0,-2) - 0.719443173328855*OPS_ACC(D11_B0, 0,-1) +
      0.376283677513354*OPS_ACC(D11_B0, 0,1) - 0.00571369039775442*OPS_ACC(D11_B0, 0,-4))
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(0.00412637789557492*OPS_ACC(D11_B0, 0,-3) - 0.197184333887745*OPS_ACC(D11_B0, 0,0) -
      0.521455851089587*OPS_ACC(D11_B0, 0,-1) + 0.0367146847001261*OPS_ACC(D11_B0, 0,-2) +
      0.791245592765872*OPS_ACC(D11_B0, 0,1) - 0.113446470384241*OPS_ACC(D11_B0, 0,2))
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.00932597985049999*OPS_ACC(D11_B0, 0,3) - 0.0451033223343881*OPS_ACC(D11_B0, 0,0) +
      0.082033432844602*OPS_ACC(D11_B0, 0,-2) - 0.652141084861241*OPS_ACC(D11_B0, 0,-1) +
      0.727822147724592*OPS_ACC(D11_B0, 0,1) - 0.121937153224065*OPS_ACC(D11_B0, 0,2))
)
: (

      (rc4)*inv_1*(-OPS_ACC(D11_B0, 0,2) + OPS_ACC(D11_B0, 0,-2) + 8*OPS_ACC(D11_B0, 0,1) -
      8*OPS_ACC(D11_B0, 0,-1))
)))))))));

    localeval_2 = (rc4)*inv_0*(-OPS_ACC(D11_B0, 2,0) + OPS_ACC(D11_B0, -2,0) - 8*OPS_ACC(D11_B0, -1,0) +
      8*OPS_ACC(D11_B0, 1,0));

    localeval_3 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*OPS_ACC(D01_B0, 0,1) -
      8.34657956545823e-15*OPS_ACC(D01_B0, 0,4) - 1.83333333333334*OPS_ACC(D01_B0, 0,0) +
      0.333333333333356*OPS_ACC(D01_B0, 0,3) - 1.50000000000003*OPS_ACC(D01_B0, 0,2) +
      1.06910315192207e-15*OPS_ACC(D01_B0, 0,5))
)
: ((idx[1] == 1) ? (

      inv_1*(0.719443173328855*OPS_ACC(D01_B0, 0,1) + 0.00571369039775442*OPS_ACC(D01_B0, 0,4) -
      0.322484932882161*OPS_ACC(D01_B0, 0,0) - 0.0658051057710389*OPS_ACC(D01_B0, 0,3) +
      0.0394168524399447*OPS_ACC(D01_B0, 0,2) - 0.376283677513354*OPS_ACC(D01_B0, 0,-1))
)
: ((idx[1] == 2) ? (

      inv_1*(0.521455851089587*OPS_ACC(D01_B0, 0,1) - 0.791245592765872*OPS_ACC(D01_B0, 0,-1) +
      0.197184333887745*OPS_ACC(D01_B0, 0,0) - 0.00412637789557492*OPS_ACC(D01_B0, 0,3) -
      0.0367146847001261*OPS_ACC(D01_B0, 0,2) + 0.113446470384241*OPS_ACC(D01_B0, 0,-2))
)
: ((idx[1] == 3) ? (

      inv_1*(0.652141084861241*OPS_ACC(D01_B0, 0,1) + 0.121937153224065*OPS_ACC(D01_B0, 0,-2) -
      0.00932597985049999*OPS_ACC(D01_B0, 0,-3) + 0.0451033223343881*OPS_ACC(D01_B0, 0,0) -
      0.082033432844602*OPS_ACC(D01_B0, 0,2) - 0.727822147724592*OPS_ACC(D01_B0, 0,-1))
)
: ((idx[1] == block0np1 - 1)
      ? (
   inv_1*(-3.00000000000002*OPS_ACC(D01_B0, 0,-1) - 0.333333333333356*OPS_ACC(D01_B0, 0,-3) +
      1.83333333333334*OPS_ACC(D01_B0, 0,0) + 8.34657956545823e-15*OPS_ACC(D01_B0, 0,-4) -
      1.06910315192207e-15*OPS_ACC(D01_B0, 0,-5) + 1.50000000000003*OPS_ACC(D01_B0, 0,-2))
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(0.376283677513354*OPS_ACC(D01_B0, 0,1) - 0.719443173328855*OPS_ACC(D01_B0, 0,-1) +
      0.0658051057710389*OPS_ACC(D01_B0, 0,-3) + 0.322484932882161*OPS_ACC(D01_B0, 0,0) -
      0.00571369039775442*OPS_ACC(D01_B0, 0,-4) - 0.0394168524399447*OPS_ACC(D01_B0, 0,-2))
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(0.791245592765872*OPS_ACC(D01_B0, 0,1) + 0.0367146847001261*OPS_ACC(D01_B0, 0,-2) +
      0.00412637789557492*OPS_ACC(D01_B0, 0,-3) - 0.197184333887745*OPS_ACC(D01_B0, 0,0) -
      0.113446470384241*OPS_ACC(D01_B0, 0,2) - 0.521455851089587*OPS_ACC(D01_B0, 0,-1))
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.727822147724592*OPS_ACC(D01_B0, 0,1) + 0.082033432844602*OPS_ACC(D01_B0, 0,-2) -
      0.0451033223343881*OPS_ACC(D01_B0, 0,0) + 0.00932597985049999*OPS_ACC(D01_B0, 0,3) -
      0.121937153224065*OPS_ACC(D01_B0, 0,2) - 0.652141084861241*OPS_ACC(D01_B0, 0,-1))
)
: (

      (rc4)*inv_1*(-OPS_ACC(D01_B0, 0,2) + 8*OPS_ACC(D01_B0, 0,1) + OPS_ACC(D01_B0, 0,-2) -
      8*OPS_ACC(D01_B0, 0,-1))
)))))))));

    localeval_4 = (rc4)*inv_0*(-OPS_ACC(D01_B0, 2,0) + OPS_ACC(D01_B0, -2,0) - 8*OPS_ACC(D01_B0, -1,0) +
      8*OPS_ACC(D01_B0, 1,0));

    localeval_5 = (rc4)*inv_0*(OPS_ACC(D00_B0, -2,0) - OPS_ACC(D00_B0, 2,0) + 8*OPS_ACC(D00_B0, 1,0) -
      8*OPS_ACC(D00_B0, -1,0));

    localeval_6 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*OPS_ACC(D00_B0, 0,3) -
      1.50000000000003*OPS_ACC(D00_B0, 0,2) + 1.06910315192207e-15*OPS_ACC(D00_B0, 0,5) +
      3.00000000000002*OPS_ACC(D00_B0, 0,1) - 8.34657956545823e-15*OPS_ACC(D00_B0, 0,4) -
      1.83333333333334*OPS_ACC(D00_B0, 0,0))
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*OPS_ACC(D00_B0, 0,3)
      + 0.0394168524399447*OPS_ACC(D00_B0, 0,2) - 0.376283677513354*OPS_ACC(D00_B0, 0,-1) +
      0.719443173328855*OPS_ACC(D00_B0, 0,1) + 0.00571369039775442*OPS_ACC(D00_B0, 0,4) -
      0.322484932882161*OPS_ACC(D00_B0, 0,0))
)
: ((idx[1] == 2) ? (

      inv_1*(-0.00412637789557492*OPS_ACC(D00_B0, 0,3) - 0.0367146847001261*OPS_ACC(D00_B0, 0,2) +
      0.113446470384241*OPS_ACC(D00_B0, 0,-2) + 0.521455851089587*OPS_ACC(D00_B0, 0,1) -
      0.791245592765872*OPS_ACC(D00_B0, 0,-1) + 0.197184333887745*OPS_ACC(D00_B0, 0,0))
)
: ((idx[1] == 3) ? (

      inv_1*(-0.082033432844602*OPS_ACC(D00_B0, 0,2) - 0.727822147724592*OPS_ACC(D00_B0, 0,-1) +
      0.652141084861241*OPS_ACC(D00_B0, 0,1) + 0.121937153224065*OPS_ACC(D00_B0, 0,-2) -
      0.00932597985049999*OPS_ACC(D00_B0, 0,-3) + 0.0451033223343881*OPS_ACC(D00_B0, 0,0))
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-1.06910315192207e-15*OPS_ACC(D00_B0, 0,-5) + 1.50000000000003*OPS_ACC(D00_B0, 0,-2) -
      3.00000000000002*OPS_ACC(D00_B0, 0,-1) - 0.333333333333356*OPS_ACC(D00_B0, 0,-3) +
      1.83333333333334*OPS_ACC(D00_B0, 0,0) + 8.34657956545823e-15*OPS_ACC(D00_B0, 0,-4))
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(-0.0394168524399447*OPS_ACC(D00_B0, 0,-2) + 0.376283677513354*OPS_ACC(D00_B0, 0,1) -
      0.719443173328855*OPS_ACC(D00_B0, 0,-1) + 0.0658051057710389*OPS_ACC(D00_B0, 0,-3) +
      0.322484932882161*OPS_ACC(D00_B0, 0,0) - 0.00571369039775442*OPS_ACC(D00_B0, 0,-4))
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(-0.113446470384241*OPS_ACC(D00_B0, 0,2) - 0.521455851089587*OPS_ACC(D00_B0, 0,-1) +
      0.791245592765872*OPS_ACC(D00_B0, 0,1) + 0.0367146847001261*OPS_ACC(D00_B0, 0,-2) +
      0.00412637789557492*OPS_ACC(D00_B0, 0,-3) - 0.197184333887745*OPS_ACC(D00_B0, 0,0))
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.00932597985049999*OPS_ACC(D00_B0, 0,3) - 0.121937153224065*OPS_ACC(D00_B0, 0,2) -
      0.652141084861241*OPS_ACC(D00_B0, 0,-1) + 0.727822147724592*OPS_ACC(D00_B0, 0,1) +
      0.082033432844602*OPS_ACC(D00_B0, 0,-2) - 0.0451033223343881*OPS_ACC(D00_B0, 0,0))
)
: (

      (rc4)*inv_1*(8*OPS_ACC(D00_B0, 0,1) + OPS_ACC(D00_B0, 0,-2) - OPS_ACC(D00_B0, 0,2) -
      8*OPS_ACC(D00_B0, 0,-1))
)))))))));

    localeval_7 = (rc4)*inv_0*(8*OPS_ACC(D10_B0, 1,0) - 8*OPS_ACC(D10_B0, -1,0) - OPS_ACC(D10_B0, 2,0) +
      OPS_ACC(D10_B0, -2,0));

   OPS_ACC(SD000_B0, 0,0) = localeval_5;

   OPS_ACC(SD001_B0, 0,0) = localeval_6;

   OPS_ACC(SD010_B0, 0,0) = localeval_4;

   OPS_ACC(SD011_B0, 0,0) = localeval_3;

   OPS_ACC(SD100_B0, 0,0) = localeval_7;

   OPS_ACC(SD101_B0, 0,0) = localeval_0;

   OPS_ACC(SD110_B0, 0,0) = localeval_2;

   OPS_ACC(SD111_B0, 0,0) = localeval_1;


    }
  }
}
