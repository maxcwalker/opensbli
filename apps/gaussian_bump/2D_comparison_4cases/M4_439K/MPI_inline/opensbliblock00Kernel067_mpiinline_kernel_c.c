//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel067;
int xdim1_opensbliblock00Kernel067;


//user function



void opensbliblock00Kernel067_c_wrapper(
  double * restrict x0_B0_p,
  double * restrict wk0_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double x0_B0 = { x0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel067*1, xdim0_opensbliblock00Kernel067};
      ptr_double wk0_B0 = { wk0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel067*1, xdim1_opensbliblock00Kernel067};
      
    OPS_ACC(wk0_B0, 0,0) = invDelta1block0*((idx[1] == 0) ? (
   3.0*OPS_ACC(x0_B0, 0,1) + 0.333333333333333*OPS_ACC(x0_B0, 0,3) - 1.5*OPS_ACC(x0_B0, 0,2) -
      1.83333333333333*OPS_ACC(x0_B0, 0,0)
)
: ((idx[1] == 1) ? (
   0.0394168524399447*OPS_ACC(x0_B0, 0,2) +
      0.00571369039775442*OPS_ACC(x0_B0, 0,4) + 0.719443173328855*OPS_ACC(x0_B0, 0,1) - 0.322484932882161*OPS_ACC(x0_B0, 0,0) -
      0.0658051057710389*OPS_ACC(x0_B0, 0,3) - 0.376283677513354*OPS_ACC(x0_B0, 0,-1)
)
: ((idx[1] == 2) ? (

      0.197184333887745*OPS_ACC(x0_B0, 0,0) + 0.521455851089587*OPS_ACC(x0_B0, 0,1) + 0.113446470384241*OPS_ACC(x0_B0, 0,-2) -
      0.00412637789557492*OPS_ACC(x0_B0, 0,3) - 0.0367146847001261*OPS_ACC(x0_B0, 0,2) - 0.791245592765872*OPS_ACC(x0_B0, 0,-1)
)
: ((idx[1] == 3)
      ? (
   0.0451033223343881*OPS_ACC(x0_B0, 0,0) + 0.652141084861241*OPS_ACC(x0_B0, 0,1) + 0.121937153224065*OPS_ACC(x0_B0, 0,-2) -
      0.00932597985049999*OPS_ACC(x0_B0, 0,-3) - 0.727822147724592*OPS_ACC(x0_B0, 0,-1) - 0.082033432844602*OPS_ACC(x0_B0, 0,2)
)
: (

      -(2.0/3.0)*OPS_ACC(x0_B0, 0,-1) - (1.0/12.0)*OPS_ACC(x0_B0, 0,2) + ((1.0/12.0))*OPS_ACC(x0_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(x0_B0, 0,1)
)))));


    }
  }
}
