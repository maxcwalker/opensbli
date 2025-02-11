//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel015;
int xdim1_opensbliblock00Kernel015;


//user function



void opensbliblock00Kernel015_c_wrapper(
  double * restrict tau00_B0_p,
  double * restrict wk8_B0_p,
  int * restrict idx,
  int arg_idx0, 
  int x_size) {
  #pragma omp parallel for
  for ( int n_x=0; n_x<x_size; n_x++ ){
    int idx[] = {arg_idx0+n_x};
    const ptr_double tau00_B0 = { tau00_B0_p + n_x*1};
    ptr_double wk8_B0 = { wk8_B0_p + n_x*1};
    
    OPS_ACC(wk8_B0, 0) = inv_0*((idx[0] == 0) ? (
   -8.34657956545823e-15*OPS_ACC(tau00_B0, 4) +
      3.00000000000002*OPS_ACC(tau00_B0, 1) + 1.06910315192207e-15*OPS_ACC(tau00_B0, 5) -
      1.50000000000003*OPS_ACC(tau00_B0, 2) + 0.333333333333356*OPS_ACC(tau00_B0, 3) -
      1.83333333333334*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == 1) ? (
   0.00571369039775442*OPS_ACC(tau00_B0, 4) +
      0.719443173328855*OPS_ACC(tau00_B0, 1) + 0.0394168524399447*OPS_ACC(tau00_B0, 2) -
      0.0658051057710389*OPS_ACC(tau00_B0, 3) - 0.376283677513354*OPS_ACC(tau00_B0, -1) -
      0.322484932882161*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == 2) ? (
   -0.791245592765872*OPS_ACC(tau00_B0, -1) +
      0.521455851089587*OPS_ACC(tau00_B0, 1) - 0.0367146847001261*OPS_ACC(tau00_B0, 2) -
      0.00412637789557492*OPS_ACC(tau00_B0, 3) + 0.113446470384241*OPS_ACC(tau00_B0, -2) +
      0.197184333887745*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == 3) ? (
   -0.727822147724592*OPS_ACC(tau00_B0, -1) +
      0.652141084861241*OPS_ACC(tau00_B0, 1) - 0.082033432844602*OPS_ACC(tau00_B0, 2) -
      0.00932597985049999*OPS_ACC(tau00_B0, -3) + 0.121937153224065*OPS_ACC(tau00_B0, -2) +
      0.0451033223343881*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == block0np0 - 1) ? (

      -3.00000000000002*OPS_ACC(tau00_B0, -1) + 8.34657956545823e-15*OPS_ACC(tau00_B0, -4) -
      0.333333333333356*OPS_ACC(tau00_B0, -3) + 1.50000000000003*OPS_ACC(tau00_B0, -2) -
      1.06910315192207e-15*OPS_ACC(tau00_B0, -5) + 1.83333333333334*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == block0np0 -
      2) ? (
   -0.719443173328855*OPS_ACC(tau00_B0, -1) + 0.376283677513354*OPS_ACC(tau00_B0, 1) -
      0.00571369039775442*OPS_ACC(tau00_B0, -4) + 0.0658051057710389*OPS_ACC(tau00_B0, -3) -
      0.0394168524399447*OPS_ACC(tau00_B0, -2) + 0.322484932882161*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == block0np0 - 3)
      ? (
   -0.521455851089587*OPS_ACC(tau00_B0, -1) + 0.791245592765872*OPS_ACC(tau00_B0, 1) -
      0.113446470384241*OPS_ACC(tau00_B0, 2) + 0.00412637789557492*OPS_ACC(tau00_B0, -3) +
      0.0367146847001261*OPS_ACC(tau00_B0, -2) - 0.197184333887745*OPS_ACC(tau00_B0, 0)
)
: ((idx[0] == block0np0 - 4)
      ? (
   -0.652141084861241*OPS_ACC(tau00_B0, -1) + 0.727822147724592*OPS_ACC(tau00_B0, 1) -
      0.121937153224065*OPS_ACC(tau00_B0, 2) + 0.00932597985049999*OPS_ACC(tau00_B0, 3) +
      0.082033432844602*OPS_ACC(tau00_B0, -2) - 0.0451033223343881*OPS_ACC(tau00_B0, 0)
)
: (

      -rc2*OPS_ACC(tau00_B0, -1) + (rc3)*OPS_ACC(tau00_B0, -2) - rc3*OPS_ACC(tau00_B0, 2) +
      (rc2)*OPS_ACC(tau00_B0, 1)
)))))))));


  }
}
