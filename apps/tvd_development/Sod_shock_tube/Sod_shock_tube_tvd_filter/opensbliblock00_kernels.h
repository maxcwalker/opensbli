#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H


// double fmax(double a,double b,double c);

// double fmax(double a,double b,double c) {
//    double ans = 0.0;
//    a>b ? ans = a : ans = b;
//    c > ans ? ans = c : ans =  ans;
//    return ans;
// }

// double sgn(double x);

// double sgn(double x) {
//    double ans = 0.0;
//    (x<0) ? ans = -1 :((x=0) ? (ans = 0.0): (ans=1));
//    return ans;
// }



void opensbliblock00Kernel024(double *rho_B0, double *rhou0_B0, double *rhoE_B0, double *x0_B0, const int *idx)
{
   double p = 0.0;
   double d = 0.0;
   double u0 = 0.0;
   x0_B0[OPS_ACC3(0)] = Delta0block0*idx[0];

   u0 = 0;

   p = ((x0_B0[OPS_ACC3(0)] < 0.5) ? (
   1.0
)
: (
   0.1
));

   d = ((x0_B0[OPS_ACC3(0)] < 0.5) ? (
   1.0
)
: (
   0.125
));

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC1(0)] = d*u0;

   rhoE_B0[OPS_ACC2(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel025(double *detJ_B0)
{
   detJ_B0[OPS_ACC0(-1)] = detJ_B0[OPS_ACC0(1)];

   detJ_B0[OPS_ACC0(-2)] = detJ_B0[OPS_ACC0(2)];

   detJ_B0[OPS_ACC0(-3)] = detJ_B0[OPS_ACC0(3)];

}

void opensbliblock00Kernel026(double *detJ_B0)
{
   detJ_B0[OPS_ACC0(1)] = detJ_B0[OPS_ACC0(-1)];

   detJ_B0[OPS_ACC0(2)] = detJ_B0[OPS_ACC0(-2)];

   detJ_B0[OPS_ACC0(3)] = detJ_B0[OPS_ACC0(-3)];

   detJ_B0[OPS_ACC0(4)] = detJ_B0[OPS_ACC0(-4)];

}

void opensbliblock00Kernel022(double *rho_B0, double *rhou0_B0, double *rhoE_B0)
{
   double p = 0.0;
   double d = 0.0;
   double u0 = 0.0;
   d = 1.00000000000000;

   u0 = 0.0;

   p = 1.00000000000000;

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC1(0)] = d*u0;

   rhoE_B0[OPS_ACC2(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel023(double *rho_B0, double *rhou0_B0, double *rhoE_B0)
{
   double p = 0.0;
   double d = 0.0;
   double u0 = 0.0;
   d = 0.125000000000000;

   u0 = 0.0;

   p = 0.100000000000000;

   rho_B0[OPS_ACC0(0)] = d;

   rhou0_B0[OPS_ACC1(0)] = d*u0;

   rhoE_B0[OPS_ACC2(0)] = 0.5*d*pow(u0, 2.0) + p/(gama - 1.0);

}

void opensbliblock00Kernel003(const double *rho_B0, const double *rhou0_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0)] = rhou0_B0[OPS_ACC1(0)]/rho_B0[OPS_ACC0(0)];

}

void opensbliblock00Kernel013(const double *rho_B0, const double *u0_B0, const double *rhoE_B0, double *p_B0)
{
   p_B0[OPS_ACC3(0)] = (gama - 1)*(rhoE_B0[OPS_ACC2(0)] - rc1*rho_B0[OPS_ACC0(0)]*pow(u0_B0[OPS_ACC1(0)], 2));

}

 void opensbliblock00Kernel002(const double *rhoE_B0, const double *p_B0, const double *rho_B0, const double *rhou0_B0,
const double *u0_B0, double *wk16_B0, double *wk14_B0, double *wk17_B0, double *wk15_B0)
{
   wk14_B0[OPS_ACC6(0)] = rhoE_B0[OPS_ACC0(0)]*u0_B0[OPS_ACC4(0)];

   wk15_B0[OPS_ACC8(0)] = rho_B0[OPS_ACC2(0)]*u0_B0[OPS_ACC4(0)];

   wk16_B0[OPS_ACC5(0)] = rhou0_B0[OPS_ACC3(0)]*u0_B0[OPS_ACC4(0)];

   wk17_B0[OPS_ACC7(0)] = p_B0[OPS_ACC1(0)]*u0_B0[OPS_ACC4(0)];

}

void opensbliblock00Kernel005(const double *wk14_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   -8.34657956545823e-15*wk14_B0[OPS_ACC0(4)] -
      1.83333333333334*wk14_B0[OPS_ACC0(0)] + 1.06910315192207e-15*wk14_B0[OPS_ACC0(5)] +
      3.00000000000002*wk14_B0[OPS_ACC0(1)] - 1.50000000000003*wk14_B0[OPS_ACC0(2)] +
      0.333333333333356*wk14_B0[OPS_ACC0(3)]
)
: ((idx[0] == 1) ? (
   0.00571369039775442*wk14_B0[OPS_ACC0(4)] -
      0.322484932882161*wk14_B0[OPS_ACC0(0)] - 0.376283677513354*wk14_B0[OPS_ACC0(-1)] +
      0.719443173328855*wk14_B0[OPS_ACC0(1)] + 0.0394168524399447*wk14_B0[OPS_ACC0(2)] -
      0.0658051057710389*wk14_B0[OPS_ACC0(3)]
)
: ((idx[0] == 2) ? (
   0.197184333887745*wk14_B0[OPS_ACC0(0)] +
      0.113446470384241*wk14_B0[OPS_ACC0(-2)] - 0.791245592765872*wk14_B0[OPS_ACC0(-1)] +
      0.521455851089587*wk14_B0[OPS_ACC0(1)] - 0.0367146847001261*wk14_B0[OPS_ACC0(2)] -
      0.00412637789557492*wk14_B0[OPS_ACC0(3)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*wk14_B0[OPS_ACC0(-3)] +
      0.0451033223343881*wk14_B0[OPS_ACC0(0)] + 0.121937153224065*wk14_B0[OPS_ACC0(-2)] -
      0.727822147724592*wk14_B0[OPS_ACC0(-1)] + 0.652141084861241*wk14_B0[OPS_ACC0(1)] -
      0.082033432844602*wk14_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -0.333333333333356*wk14_B0[OPS_ACC0(-3)] + 1.83333333333334*wk14_B0[OPS_ACC0(0)] +
      1.50000000000003*wk14_B0[OPS_ACC0(-2)] - 3.00000000000002*wk14_B0[OPS_ACC0(-1)] -
      1.06910315192207e-15*wk14_B0[OPS_ACC0(-5)] + 8.34657956545823e-15*wk14_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0
      - 2) ? (
   0.0658051057710389*wk14_B0[OPS_ACC0(-3)] + 0.322484932882161*wk14_B0[OPS_ACC0(0)] -
      0.0394168524399447*wk14_B0[OPS_ACC0(-2)] - 0.719443173328855*wk14_B0[OPS_ACC0(-1)] +
      0.376283677513354*wk14_B0[OPS_ACC0(1)] - 0.00571369039775442*wk14_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.00412637789557492*wk14_B0[OPS_ACC0(-3)] - 0.197184333887745*wk14_B0[OPS_ACC0(0)] +
      0.0367146847001261*wk14_B0[OPS_ACC0(-2)] - 0.521455851089587*wk14_B0[OPS_ACC0(-1)] +
      0.791245592765872*wk14_B0[OPS_ACC0(1)] - 0.113446470384241*wk14_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 4) ?
      (
   -0.0451033223343881*wk14_B0[OPS_ACC0(0)] + 0.082033432844602*wk14_B0[OPS_ACC0(-2)] -
      0.652141084861241*wk14_B0[OPS_ACC0(-1)] + 0.727822147724592*wk14_B0[OPS_ACC0(1)] -
      0.121937153224065*wk14_B0[OPS_ACC0(2)] + 0.00932597985049999*wk14_B0[OPS_ACC0(3)]
)
: (
  
      -rc2*wk14_B0[OPS_ACC0(2)] + (rc3)*wk14_B0[OPS_ACC0(1)] - rc3*wk14_B0[OPS_ACC0(-1)] +
      (rc2)*wk14_B0[OPS_ACC0(-2)]
)))))))));

}

void opensbliblock00Kernel007(const double *q0_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   0.333333333333356*q0_B0[OPS_ACC0(3)] -
      8.34657956545823e-15*q0_B0[OPS_ACC0(4)] - 1.83333333333334*q0_B0[OPS_ACC0(0)] +
      1.06910315192207e-15*q0_B0[OPS_ACC0(5)] + 3.00000000000002*q0_B0[OPS_ACC0(1)] -
      1.50000000000003*q0_B0[OPS_ACC0(2)]
)
: ((idx[0] == 1) ? (
   -0.0658051057710389*q0_B0[OPS_ACC0(3)] +
      0.00571369039775442*q0_B0[OPS_ACC0(4)] - 0.322484932882161*q0_B0[OPS_ACC0(0)] -
      0.376283677513354*q0_B0[OPS_ACC0(-1)] + 0.719443173328855*q0_B0[OPS_ACC0(1)] +
      0.0394168524399447*q0_B0[OPS_ACC0(2)]
)
: ((idx[0] == 2) ? (
   -0.00412637789557492*q0_B0[OPS_ACC0(3)] +
      0.197184333887745*q0_B0[OPS_ACC0(0)] + 0.113446470384241*q0_B0[OPS_ACC0(-2)] +
      0.521455851089587*q0_B0[OPS_ACC0(1)] - 0.791245592765872*q0_B0[OPS_ACC0(-1)] -
      0.0367146847001261*q0_B0[OPS_ACC0(2)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*q0_B0[OPS_ACC0(-3)] +
      0.0451033223343881*q0_B0[OPS_ACC0(0)] - 0.727822147724592*q0_B0[OPS_ACC0(-1)] +
      0.121937153224065*q0_B0[OPS_ACC0(-2)] + 0.652141084861241*q0_B0[OPS_ACC0(1)] -
      0.082033432844602*q0_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 1) ? (
   -0.333333333333356*q0_B0[OPS_ACC0(-3)]
      + 1.83333333333334*q0_B0[OPS_ACC0(0)] + 1.50000000000003*q0_B0[OPS_ACC0(-2)] -
      3.00000000000002*q0_B0[OPS_ACC0(-1)] - 1.06910315192207e-15*q0_B0[OPS_ACC0(-5)] +
      8.34657956545823e-15*q0_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      0.0658051057710389*q0_B0[OPS_ACC0(-3)] + 0.322484932882161*q0_B0[OPS_ACC0(0)] -
      0.0394168524399447*q0_B0[OPS_ACC0(-2)] + 0.376283677513354*q0_B0[OPS_ACC0(1)] -
      0.719443173328855*q0_B0[OPS_ACC0(-1)] - 0.00571369039775442*q0_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0 - 3) ?
      (
   0.00412637789557492*q0_B0[OPS_ACC0(-3)] - 0.197184333887745*q0_B0[OPS_ACC0(0)] -
      0.521455851089587*q0_B0[OPS_ACC0(-1)] + 0.0367146847001261*q0_B0[OPS_ACC0(-2)] +
      0.791245592765872*q0_B0[OPS_ACC0(1)] - 0.113446470384241*q0_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 4) ? (
  
      0.00932597985049999*q0_B0[OPS_ACC0(3)] - 0.0451033223343881*q0_B0[OPS_ACC0(0)] -
      0.652141084861241*q0_B0[OPS_ACC0(-1)] + 0.082033432844602*q0_B0[OPS_ACC0(-2)] +
      0.727822147724592*q0_B0[OPS_ACC0(1)] - 0.121937153224065*q0_B0[OPS_ACC0(2)]
)
: (
   (rc2)*q0_B0[OPS_ACC0(-2)] -
      rc2*q0_B0[OPS_ACC0(2)] - rc3*q0_B0[OPS_ACC0(-1)] + (rc3)*q0_B0[OPS_ACC0(1)]
)))))))));

}

void opensbliblock00Kernel009(const double *wk15_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   0.333333333333356*wk15_B0[OPS_ACC0(3)] -
      1.83333333333334*wk15_B0[OPS_ACC0(0)] - 8.34657956545823e-15*wk15_B0[OPS_ACC0(4)] +
      3.00000000000002*wk15_B0[OPS_ACC0(1)] + 1.06910315192207e-15*wk15_B0[OPS_ACC0(5)] -
      1.50000000000003*wk15_B0[OPS_ACC0(2)]
)
: ((idx[0] == 1) ? (
   -0.0658051057710389*wk15_B0[OPS_ACC0(3)] -
      0.376283677513354*wk15_B0[OPS_ACC0(-1)] - 0.322484932882161*wk15_B0[OPS_ACC0(0)] +
      0.00571369039775442*wk15_B0[OPS_ACC0(4)] + 0.719443173328855*wk15_B0[OPS_ACC0(1)] +
      0.0394168524399447*wk15_B0[OPS_ACC0(2)]
)
: ((idx[0] == 2) ? (
   -0.00412637789557492*wk15_B0[OPS_ACC0(3)] +
      0.113446470384241*wk15_B0[OPS_ACC0(-2)] - 0.791245592765872*wk15_B0[OPS_ACC0(-1)] +
      0.197184333887745*wk15_B0[OPS_ACC0(0)] + 0.521455851089587*wk15_B0[OPS_ACC0(1)] -
      0.0367146847001261*wk15_B0[OPS_ACC0(2)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*wk15_B0[OPS_ACC0(-2)] -
      0.727822147724592*wk15_B0[OPS_ACC0(-1)] + 0.0451033223343881*wk15_B0[OPS_ACC0(0)] +
      0.652141084861241*wk15_B0[OPS_ACC0(1)] - 0.082033432844602*wk15_B0[OPS_ACC0(2)] -
      0.00932597985049999*wk15_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      1.50000000000003*wk15_B0[OPS_ACC0(-2)] - 3.00000000000002*wk15_B0[OPS_ACC0(-1)] +
      1.83333333333334*wk15_B0[OPS_ACC0(0)] - 1.06910315192207e-15*wk15_B0[OPS_ACC0(-5)] +
      8.34657956545823e-15*wk15_B0[OPS_ACC0(-4)] - 0.333333333333356*wk15_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 -
      2) ? (
   -0.0394168524399447*wk15_B0[OPS_ACC0(-2)] - 0.719443173328855*wk15_B0[OPS_ACC0(-1)] +
      0.322484932882161*wk15_B0[OPS_ACC0(0)] + 0.376283677513354*wk15_B0[OPS_ACC0(1)] -
      0.00571369039775442*wk15_B0[OPS_ACC0(-4)] + 0.0658051057710389*wk15_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 -
      3) ? (
   0.0367146847001261*wk15_B0[OPS_ACC0(-2)] - 0.521455851089587*wk15_B0[OPS_ACC0(-1)] -
      0.197184333887745*wk15_B0[OPS_ACC0(0)] + 0.791245592765872*wk15_B0[OPS_ACC0(1)] -
      0.113446470384241*wk15_B0[OPS_ACC0(2)] + 0.00412637789557492*wk15_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 4)
      ? (
   0.00932597985049999*wk15_B0[OPS_ACC0(3)] + 0.082033432844602*wk15_B0[OPS_ACC0(-2)] -
      0.652141084861241*wk15_B0[OPS_ACC0(-1)] - 0.0451033223343881*wk15_B0[OPS_ACC0(0)] +
      0.727822147724592*wk15_B0[OPS_ACC0(1)] - 0.121937153224065*wk15_B0[OPS_ACC0(2)]
)
: (
  
      -rc3*wk15_B0[OPS_ACC0(-1)] + (rc3)*wk15_B0[OPS_ACC0(1)] - rc2*wk15_B0[OPS_ACC0(2)] +
      (rc2)*wk15_B0[OPS_ACC0(-2)]
)))))))));

}

void opensbliblock00Kernel011(const double *wk16_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   3.00000000000002*wk16_B0[OPS_ACC0(1)] -
      8.34657956545823e-15*wk16_B0[OPS_ACC0(4)] - 1.83333333333334*wk16_B0[OPS_ACC0(0)] +
      0.333333333333356*wk16_B0[OPS_ACC0(3)] - 1.50000000000003*wk16_B0[OPS_ACC0(2)] +
      1.06910315192207e-15*wk16_B0[OPS_ACC0(5)]
)
: ((idx[0] == 1) ? (
   0.719443173328855*wk16_B0[OPS_ACC0(1)] +
      0.00571369039775442*wk16_B0[OPS_ACC0(4)] - 0.322484932882161*wk16_B0[OPS_ACC0(0)] -
      0.0658051057710389*wk16_B0[OPS_ACC0(3)] + 0.0394168524399447*wk16_B0[OPS_ACC0(2)] -
      0.376283677513354*wk16_B0[OPS_ACC0(-1)]
)
: ((idx[0] == 2) ? (
   0.521455851089587*wk16_B0[OPS_ACC0(1)] +
      0.197184333887745*wk16_B0[OPS_ACC0(0)] - 0.00412637789557492*wk16_B0[OPS_ACC0(3)] -
      0.0367146847001261*wk16_B0[OPS_ACC0(2)] - 0.791245592765872*wk16_B0[OPS_ACC0(-1)] +
      0.113446470384241*wk16_B0[OPS_ACC0(-2)]
)
: ((idx[0] == 3) ? (
   0.652141084861241*wk16_B0[OPS_ACC0(1)] -
      0.00932597985049999*wk16_B0[OPS_ACC0(-3)] + 0.0451033223343881*wk16_B0[OPS_ACC0(0)] -
      0.082033432844602*wk16_B0[OPS_ACC0(2)] + 0.121937153224065*wk16_B0[OPS_ACC0(-2)] -
      0.727822147724592*wk16_B0[OPS_ACC0(-1)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -0.333333333333356*wk16_B0[OPS_ACC0(-3)] + 1.83333333333334*wk16_B0[OPS_ACC0(0)] +
      8.34657956545823e-15*wk16_B0[OPS_ACC0(-4)] - 1.06910315192207e-15*wk16_B0[OPS_ACC0(-5)] -
      3.00000000000002*wk16_B0[OPS_ACC0(-1)] + 1.50000000000003*wk16_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 2) ?
      (
   0.376283677513354*wk16_B0[OPS_ACC0(1)] + 0.0658051057710389*wk16_B0[OPS_ACC0(-3)] +
      0.322484932882161*wk16_B0[OPS_ACC0(0)] - 0.00571369039775442*wk16_B0[OPS_ACC0(-4)] -
      0.719443173328855*wk16_B0[OPS_ACC0(-1)] - 0.0394168524399447*wk16_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.791245592765872*wk16_B0[OPS_ACC0(1)] + 0.00412637789557492*wk16_B0[OPS_ACC0(-3)] -
      0.197184333887745*wk16_B0[OPS_ACC0(0)] - 0.113446470384241*wk16_B0[OPS_ACC0(2)] +
      0.0367146847001261*wk16_B0[OPS_ACC0(-2)] - 0.521455851089587*wk16_B0[OPS_ACC0(-1)]
)
: ((idx[0] == block0np0 - 4)
      ? (
   0.727822147724592*wk16_B0[OPS_ACC0(1)] - 0.0451033223343881*wk16_B0[OPS_ACC0(0)] +
      0.00932597985049999*wk16_B0[OPS_ACC0(3)] - 0.121937153224065*wk16_B0[OPS_ACC0(2)] -
      0.652141084861241*wk16_B0[OPS_ACC0(-1)] + 0.082033432844602*wk16_B0[OPS_ACC0(-2)]
)
: (
  
      (rc3)*wk16_B0[OPS_ACC0(1)] + (rc2)*wk16_B0[OPS_ACC0(-2)] - rc3*wk16_B0[OPS_ACC0(-1)] -
      rc2*wk16_B0[OPS_ACC0(2)]
)))))))));

}

void opensbliblock00Kernel012(const double *rhoE_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   1.06910315192207e-15*rhoE_B0[OPS_ACC0(5)] -
      1.50000000000003*rhoE_B0[OPS_ACC0(2)] + 0.333333333333356*rhoE_B0[OPS_ACC0(3)] -
      1.83333333333334*rhoE_B0[OPS_ACC0(0)] - 8.34657956545823e-15*rhoE_B0[OPS_ACC0(4)] +
      3.00000000000002*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == 1) ? (
   -0.376283677513354*rhoE_B0[OPS_ACC0(-1)] +
      0.0394168524399447*rhoE_B0[OPS_ACC0(2)] - 0.0658051057710389*rhoE_B0[OPS_ACC0(3)] -
      0.322484932882161*rhoE_B0[OPS_ACC0(0)] + 0.00571369039775442*rhoE_B0[OPS_ACC0(4)] +
      0.719443173328855*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == 2) ? (
   0.113446470384241*rhoE_B0[OPS_ACC0(-2)] -
      0.791245592765872*rhoE_B0[OPS_ACC0(-1)] - 0.0367146847001261*rhoE_B0[OPS_ACC0(2)] -
      0.00412637789557492*rhoE_B0[OPS_ACC0(3)] + 0.197184333887745*rhoE_B0[OPS_ACC0(0)] +
      0.521455851089587*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*rhoE_B0[OPS_ACC0(-2)] -
      0.727822147724592*rhoE_B0[OPS_ACC0(-1)] - 0.082033432844602*rhoE_B0[OPS_ACC0(2)] +
      0.0451033223343881*rhoE_B0[OPS_ACC0(0)] - 0.00932597985049999*rhoE_B0[OPS_ACC0(-3)] +
      0.652141084861241*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      1.50000000000003*rhoE_B0[OPS_ACC0(-2)] - 3.00000000000002*rhoE_B0[OPS_ACC0(-1)] -
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(-5)] + 8.34657956545823e-15*rhoE_B0[OPS_ACC0(-4)] +
      1.83333333333334*rhoE_B0[OPS_ACC0(0)] - 0.333333333333356*rhoE_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 2) ?
      (
   -0.0394168524399447*rhoE_B0[OPS_ACC0(-2)] - 0.719443173328855*rhoE_B0[OPS_ACC0(-1)] -
      0.00571369039775442*rhoE_B0[OPS_ACC0(-4)] + 0.322484932882161*rhoE_B0[OPS_ACC0(0)] +
      0.0658051057710389*rhoE_B0[OPS_ACC0(-3)] + 0.376283677513354*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 3) ?
      (
   0.0367146847001261*rhoE_B0[OPS_ACC0(-2)] - 0.521455851089587*rhoE_B0[OPS_ACC0(-1)] -
      0.113446470384241*rhoE_B0[OPS_ACC0(2)] - 0.197184333887745*rhoE_B0[OPS_ACC0(0)] +
      0.00412637789557492*rhoE_B0[OPS_ACC0(-3)] + 0.791245592765872*rhoE_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 4)
      ? (
   0.082033432844602*rhoE_B0[OPS_ACC0(-2)] - 0.652141084861241*rhoE_B0[OPS_ACC0(-1)] -
      0.121937153224065*rhoE_B0[OPS_ACC0(2)] + 0.00932597985049999*rhoE_B0[OPS_ACC0(3)] -
      0.0451033223343881*rhoE_B0[OPS_ACC0(0)] + 0.727822147724592*rhoE_B0[OPS_ACC0(1)]
)
: (
  
      -rc3*rhoE_B0[OPS_ACC0(-1)] + (rc2)*rhoE_B0[OPS_ACC0(-2)] - rc2*rhoE_B0[OPS_ACC0(2)] +
      (rc3)*rhoE_B0[OPS_ACC0(1)]
)))))))));

}

void opensbliblock00Kernel014(const double *wk17_B0, double *wk8_B0, const int *idx)
{
    wk8_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   3.00000000000002*wk17_B0[OPS_ACC0(1)] +
      1.06910315192207e-15*wk17_B0[OPS_ACC0(5)] - 1.83333333333334*wk17_B0[OPS_ACC0(0)] -
      8.34657956545823e-15*wk17_B0[OPS_ACC0(4)] + 0.333333333333356*wk17_B0[OPS_ACC0(3)] -
      1.50000000000003*wk17_B0[OPS_ACC0(2)]
)
: ((idx[0] == 1) ? (
   0.719443173328855*wk17_B0[OPS_ACC0(1)] -
      0.322484932882161*wk17_B0[OPS_ACC0(0)] + 0.00571369039775442*wk17_B0[OPS_ACC0(4)] -
      0.0658051057710389*wk17_B0[OPS_ACC0(3)] - 0.376283677513354*wk17_B0[OPS_ACC0(-1)] +
      0.0394168524399447*wk17_B0[OPS_ACC0(2)]
)
: ((idx[0] == 2) ? (
   0.521455851089587*wk17_B0[OPS_ACC0(1)] +
      0.197184333887745*wk17_B0[OPS_ACC0(0)] - 0.791245592765872*wk17_B0[OPS_ACC0(-1)] -
      0.00412637789557492*wk17_B0[OPS_ACC0(3)] + 0.113446470384241*wk17_B0[OPS_ACC0(-2)] -
      0.0367146847001261*wk17_B0[OPS_ACC0(2)]
)
: ((idx[0] == 3) ? (
   -0.00932597985049999*wk17_B0[OPS_ACC0(-3)] +
      0.652141084861241*wk17_B0[OPS_ACC0(1)] + 0.0451033223343881*wk17_B0[OPS_ACC0(0)] -
      0.727822147724592*wk17_B0[OPS_ACC0(-1)] + 0.121937153224065*wk17_B0[OPS_ACC0(-2)] -
      0.082033432844602*wk17_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -0.333333333333356*wk17_B0[OPS_ACC0(-3)] + 8.34657956545823e-15*wk17_B0[OPS_ACC0(-4)] +
      1.83333333333334*wk17_B0[OPS_ACC0(0)] - 3.00000000000002*wk17_B0[OPS_ACC0(-1)] -
      1.06910315192207e-15*wk17_B0[OPS_ACC0(-5)] + 1.50000000000003*wk17_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 2)
      ? (
   0.0658051057710389*wk17_B0[OPS_ACC0(-3)] + 0.376283677513354*wk17_B0[OPS_ACC0(1)] -
      0.00571369039775442*wk17_B0[OPS_ACC0(-4)] + 0.322484932882161*wk17_B0[OPS_ACC0(0)] -
      0.719443173328855*wk17_B0[OPS_ACC0(-1)] - 0.0394168524399447*wk17_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.00412637789557492*wk17_B0[OPS_ACC0(-3)] + 0.791245592765872*wk17_B0[OPS_ACC0(1)] -
      0.197184333887745*wk17_B0[OPS_ACC0(0)] - 0.521455851089587*wk17_B0[OPS_ACC0(-1)] +
      0.0367146847001261*wk17_B0[OPS_ACC0(-2)] - 0.113446470384241*wk17_B0[OPS_ACC0(2)]
)
: ((idx[0] == block0np0 - 4) ?
      (
   0.727822147724592*wk17_B0[OPS_ACC0(1)] - 0.0451033223343881*wk17_B0[OPS_ACC0(0)] -
      0.652141084861241*wk17_B0[OPS_ACC0(-1)] + 0.00932597985049999*wk17_B0[OPS_ACC0(3)] +
      0.082033432844602*wk17_B0[OPS_ACC0(-2)] - 0.121937153224065*wk17_B0[OPS_ACC0(2)]
)
: (
  
      -rc3*wk17_B0[OPS_ACC0(-1)] + (rc2)*wk17_B0[OPS_ACC0(-2)] - rc2*wk17_B0[OPS_ACC0(2)] +
      (rc3)*wk17_B0[OPS_ACC0(1)]
)))))))));

}

void opensbliblock00Kernel015(const double *p_B0, double *wk9_B0, const int *idx)
{
    wk9_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   -1.83333333333334*p_B0[OPS_ACC0(0)] +
      1.06910315192207e-15*p_B0[OPS_ACC0(5)] + 3.00000000000002*p_B0[OPS_ACC0(1)] - 1.50000000000003*p_B0[OPS_ACC0(2)] +
      0.333333333333356*p_B0[OPS_ACC0(3)] - 8.34657956545823e-15*p_B0[OPS_ACC0(4)]
)
: ((idx[0] == 1) ? (
  
      -0.322484932882161*p_B0[OPS_ACC0(0)] + 0.719443173328855*p_B0[OPS_ACC0(1)] + 0.0394168524399447*p_B0[OPS_ACC0(2)]
      - 0.376283677513354*p_B0[OPS_ACC0(-1)] - 0.0658051057710389*p_B0[OPS_ACC0(3)] +
      0.00571369039775442*p_B0[OPS_ACC0(4)]
)
: ((idx[0] == 2) ? (
   0.197184333887745*p_B0[OPS_ACC0(0)] +
      0.521455851089587*p_B0[OPS_ACC0(1)] - 0.0367146847001261*p_B0[OPS_ACC0(2)] + 0.113446470384241*p_B0[OPS_ACC0(-2)]
      - 0.791245592765872*p_B0[OPS_ACC0(-1)] - 0.00412637789557492*p_B0[OPS_ACC0(3)]
)
: ((idx[0] == 3) ? (
  
      0.0451033223343881*p_B0[OPS_ACC0(0)] + 0.652141084861241*p_B0[OPS_ACC0(1)] -
      0.00932597985049999*p_B0[OPS_ACC0(-3)] - 0.082033432844602*p_B0[OPS_ACC0(2)] -
      0.727822147724592*p_B0[OPS_ACC0(-1)] + 0.121937153224065*p_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      1.83333333333334*p_B0[OPS_ACC0(0)] - 1.06910315192207e-15*p_B0[OPS_ACC0(-5)] +
      8.34657956545823e-15*p_B0[OPS_ACC0(-4)] - 0.333333333333356*p_B0[OPS_ACC0(-3)] +
      1.50000000000003*p_B0[OPS_ACC0(-2)] - 3.00000000000002*p_B0[OPS_ACC0(-1)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      0.322484932882161*p_B0[OPS_ACC0(0)] - 0.00571369039775442*p_B0[OPS_ACC0(-4)] + 0.376283677513354*p_B0[OPS_ACC0(1)]
      + 0.0658051057710389*p_B0[OPS_ACC0(-3)] - 0.0394168524399447*p_B0[OPS_ACC0(-2)] -
      0.719443173328855*p_B0[OPS_ACC0(-1)]
)
: ((idx[0] == block0np0 - 3) ? (
   -0.197184333887745*p_B0[OPS_ACC0(0)] +
      0.791245592765872*p_B0[OPS_ACC0(1)] + 0.00412637789557492*p_B0[OPS_ACC0(-3)] - 0.113446470384241*p_B0[OPS_ACC0(2)]
      - 0.521455851089587*p_B0[OPS_ACC0(-1)] + 0.0367146847001261*p_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 4) ? (

        -0.0451033223343881*p_B0[OPS_ACC0(0)] + 0.727822147724592*p_B0[OPS_ACC0(1)] -
      0.121937153224065*p_B0[OPS_ACC0(2)] - 0.652141084861241*p_B0[OPS_ACC0(-1)] + 0.082033432844602*p_B0[OPS_ACC0(-2)]
      + 0.00932597985049999*p_B0[OPS_ACC0(3)]
)
: (
   -rc2*p_B0[OPS_ACC0(2)] + (rc3)*p_B0[OPS_ACC0(1)] -
      rc3*p_B0[OPS_ACC0(-1)] + (rc2)*p_B0[OPS_ACC0(-2)]
)))))))));

}

void opensbliblock00Kernel016(const double *rho_B0, double *wk10_B0, const int *idx)
{
    wk10_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   0.333333333333356*rho_B0[OPS_ACC0(3)] -
      1.50000000000003*rho_B0[OPS_ACC0(2)] + 1.06910315192207e-15*rho_B0[OPS_ACC0(5)] +
      3.00000000000002*rho_B0[OPS_ACC0(1)] - 8.34657956545823e-15*rho_B0[OPS_ACC0(4)] -
      1.83333333333334*rho_B0[OPS_ACC0(0)]
)
: ((idx[0] == 1) ? (
   -0.0658051057710389*rho_B0[OPS_ACC0(3)] +
      0.0394168524399447*rho_B0[OPS_ACC0(2)] - 0.376283677513354*rho_B0[OPS_ACC0(-1)] +
      0.719443173328855*rho_B0[OPS_ACC0(1)] + 0.00571369039775442*rho_B0[OPS_ACC0(4)] -
      0.322484932882161*rho_B0[OPS_ACC0(0)]
)
: ((idx[0] == 2) ? (
   -0.00412637789557492*rho_B0[OPS_ACC0(3)] -
      0.0367146847001261*rho_B0[OPS_ACC0(2)] + 0.113446470384241*rho_B0[OPS_ACC0(-2)] -
      0.791245592765872*rho_B0[OPS_ACC0(-1)] + 0.521455851089587*rho_B0[OPS_ACC0(1)] +
      0.197184333887745*rho_B0[OPS_ACC0(0)]
)
: ((idx[0] == 3) ? (
   -0.082033432844602*rho_B0[OPS_ACC0(2)] +
      0.121937153224065*rho_B0[OPS_ACC0(-2)] - 0.727822147724592*rho_B0[OPS_ACC0(-1)] +
      0.652141084861241*rho_B0[OPS_ACC0(1)] - 0.00932597985049999*rho_B0[OPS_ACC0(-3)] +
      0.0451033223343881*rho_B0[OPS_ACC0(0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -1.06910315192207e-15*rho_B0[OPS_ACC0(-5)] + 1.50000000000003*rho_B0[OPS_ACC0(-2)] -
      3.00000000000002*rho_B0[OPS_ACC0(-1)] - 0.333333333333356*rho_B0[OPS_ACC0(-3)] +
      1.83333333333334*rho_B0[OPS_ACC0(0)] + 8.34657956545823e-15*rho_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0 - 2) ?
      (
   -0.0394168524399447*rho_B0[OPS_ACC0(-2)] - 0.719443173328855*rho_B0[OPS_ACC0(-1)] +
      0.376283677513354*rho_B0[OPS_ACC0(1)] + 0.0658051057710389*rho_B0[OPS_ACC0(-3)] +
      0.322484932882161*rho_B0[OPS_ACC0(0)] - 0.00571369039775442*rho_B0[OPS_ACC0(-4)]
)
: ((idx[0] == block0np0 - 3) ?
      (
   -0.113446470384241*rho_B0[OPS_ACC0(2)] + 0.0367146847001261*rho_B0[OPS_ACC0(-2)] -
      0.521455851089587*rho_B0[OPS_ACC0(-1)] + 0.791245592765872*rho_B0[OPS_ACC0(1)] +
      0.00412637789557492*rho_B0[OPS_ACC0(-3)] - 0.197184333887745*rho_B0[OPS_ACC0(0)]
)
: ((idx[0] == block0np0 - 4) ?
      (
   0.00932597985049999*rho_B0[OPS_ACC0(3)] - 0.121937153224065*rho_B0[OPS_ACC0(2)] +
      0.082033432844602*rho_B0[OPS_ACC0(-2)] - 0.652141084861241*rho_B0[OPS_ACC0(-1)] +
      0.727822147724592*rho_B0[OPS_ACC0(1)] - 0.0451033223343881*rho_B0[OPS_ACC0(0)]
)
: (
   (rc3)*rho_B0[OPS_ACC0(1)]
      - rc3*rho_B0[OPS_ACC0(-1)] + (rc2)*rho_B0[OPS_ACC0(-2)] - rc2*rho_B0[OPS_ACC0(2)]
)))))))));

}

void opensbliblock00Kernel017(const double *rhou0_B0, double *wk11_B0, const int *idx)
{
    wk11_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   -8.34657956545823e-15*rhou0_B0[OPS_ACC0(4)] +
      3.00000000000002*rhou0_B0[OPS_ACC0(1)] + 1.06910315192207e-15*rhou0_B0[OPS_ACC0(5)] -
      1.50000000000003*rhou0_B0[OPS_ACC0(2)] + 0.333333333333356*rhou0_B0[OPS_ACC0(3)] -
      1.83333333333334*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == 1) ? (
   0.00571369039775442*rhou0_B0[OPS_ACC0(4)] +
      0.719443173328855*rhou0_B0[OPS_ACC0(1)] + 0.0394168524399447*rhou0_B0[OPS_ACC0(2)] -
      0.0658051057710389*rhou0_B0[OPS_ACC0(3)] - 0.376283677513354*rhou0_B0[OPS_ACC0(-1)] -
      0.322484932882161*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == 2) ? (
   0.521455851089587*rhou0_B0[OPS_ACC0(1)] -
      0.0367146847001261*rhou0_B0[OPS_ACC0(2)] - 0.791245592765872*rhou0_B0[OPS_ACC0(-1)] -
      0.00412637789557492*rhou0_B0[OPS_ACC0(3)] + 0.113446470384241*rhou0_B0[OPS_ACC0(-2)] +
      0.197184333887745*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == 3) ? (
   0.652141084861241*rhou0_B0[OPS_ACC0(1)] -
      0.082033432844602*rhou0_B0[OPS_ACC0(2)] - 0.00932597985049999*rhou0_B0[OPS_ACC0(-3)] +
      0.121937153224065*rhou0_B0[OPS_ACC0(-2)] - 0.727822147724592*rhou0_B0[OPS_ACC0(-1)] +
      0.0451033223343881*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      8.34657956545823e-15*rhou0_B0[OPS_ACC0(-4)] - 0.333333333333356*rhou0_B0[OPS_ACC0(-3)] -
      3.00000000000002*rhou0_B0[OPS_ACC0(-1)] + 1.50000000000003*rhou0_B0[OPS_ACC0(-2)] +
      1.83333333333334*rhou0_B0[OPS_ACC0(0)] - 1.06910315192207e-15*rhou0_B0[OPS_ACC0(-5)]
)
: ((idx[0] == block0np0 -
      2) ? (
   0.376283677513354*rhou0_B0[OPS_ACC0(1)] - 0.00571369039775442*rhou0_B0[OPS_ACC0(-4)] +
      0.0658051057710389*rhou0_B0[OPS_ACC0(-3)] - 0.719443173328855*rhou0_B0[OPS_ACC0(-1)] -
      0.0394168524399447*rhou0_B0[OPS_ACC0(-2)] + 0.322484932882161*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.791245592765872*rhou0_B0[OPS_ACC0(1)] - 0.113446470384241*rhou0_B0[OPS_ACC0(2)] +
      0.00412637789557492*rhou0_B0[OPS_ACC0(-3)] + 0.0367146847001261*rhou0_B0[OPS_ACC0(-2)] -
      0.521455851089587*rhou0_B0[OPS_ACC0(-1)] - 0.197184333887745*rhou0_B0[OPS_ACC0(0)]
)
: ((idx[0] == block0np0 - 4)
      ? (
   0.727822147724592*rhou0_B0[OPS_ACC0(1)] - 0.121937153224065*rhou0_B0[OPS_ACC0(2)] +
      0.082033432844602*rhou0_B0[OPS_ACC0(-2)] + 0.00932597985049999*rhou0_B0[OPS_ACC0(3)] -
      0.652141084861241*rhou0_B0[OPS_ACC0(-1)] - 0.0451033223343881*rhou0_B0[OPS_ACC0(0)]
)
: (
  
      (rc2)*rhou0_B0[OPS_ACC0(-2)] - rc3*rhou0_B0[OPS_ACC0(-1)] + (rc3)*rhou0_B0[OPS_ACC0(1)] -
      rc2*rhou0_B0[OPS_ACC0(2)]
)))))))));

}

void opensbliblock00Kernel018(const double *u0_B0, double *wk12_B0, const int *idx)
{
    wk12_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   -1.50000000000003*u0_B0[OPS_ACC0(2)] +
      3.00000000000002*u0_B0[OPS_ACC0(1)] + 1.06910315192207e-15*u0_B0[OPS_ACC0(5)] -
      1.83333333333334*u0_B0[OPS_ACC0(0)] - 8.34657956545823e-15*u0_B0[OPS_ACC0(4)] +
      0.333333333333356*u0_B0[OPS_ACC0(3)]
)
: ((idx[0] == 1) ? (
   0.0394168524399447*u0_B0[OPS_ACC0(2)] +
      0.719443173328855*u0_B0[OPS_ACC0(1)] - 0.376283677513354*u0_B0[OPS_ACC0(-1)] -
      0.322484932882161*u0_B0[OPS_ACC0(0)] + 0.00571369039775442*u0_B0[OPS_ACC0(4)] -
      0.0658051057710389*u0_B0[OPS_ACC0(3)]
)
: ((idx[0] == 2) ? (
   -0.0367146847001261*u0_B0[OPS_ACC0(2)] +
      0.521455851089587*u0_B0[OPS_ACC0(1)] + 0.113446470384241*u0_B0[OPS_ACC0(-2)] -
      0.791245592765872*u0_B0[OPS_ACC0(-1)] + 0.197184333887745*u0_B0[OPS_ACC0(0)] -
      0.00412637789557492*u0_B0[OPS_ACC0(3)]
)
: ((idx[0] == 3) ? (
   -0.082033432844602*u0_B0[OPS_ACC0(2)] +
      0.652141084861241*u0_B0[OPS_ACC0(1)] - 0.727822147724592*u0_B0[OPS_ACC0(-1)] +
      0.121937153224065*u0_B0[OPS_ACC0(-2)] + 0.0451033223343881*u0_B0[OPS_ACC0(0)] -
      0.00932597985049999*u0_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      8.34657956545823e-15*u0_B0[OPS_ACC0(-4)] - 1.06910315192207e-15*u0_B0[OPS_ACC0(-5)] +
      1.50000000000003*u0_B0[OPS_ACC0(-2)] - 3.00000000000002*u0_B0[OPS_ACC0(-1)] + 1.83333333333334*u0_B0[OPS_ACC0(0)]
      - 0.333333333333356*u0_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 2) ? (
  
      -0.00571369039775442*u0_B0[OPS_ACC0(-4)] + 0.376283677513354*u0_B0[OPS_ACC0(1)] -
      0.0394168524399447*u0_B0[OPS_ACC0(-2)] - 0.719443173328855*u0_B0[OPS_ACC0(-1)] +
      0.322484932882161*u0_B0[OPS_ACC0(0)] + 0.0658051057710389*u0_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 3) ? (
 
       -0.113446470384241*u0_B0[OPS_ACC0(2)] + 0.791245592765872*u0_B0[OPS_ACC0(1)] -
      0.521455851089587*u0_B0[OPS_ACC0(-1)] + 0.0367146847001261*u0_B0[OPS_ACC0(-2)] -
      0.197184333887745*u0_B0[OPS_ACC0(0)] + 0.00412637789557492*u0_B0[OPS_ACC0(-3)]
)
: ((idx[0] == block0np0 - 4) ? (

        -0.121937153224065*u0_B0[OPS_ACC0(2)] + 0.727822147724592*u0_B0[OPS_ACC0(1)] -
      0.652141084861241*u0_B0[OPS_ACC0(-1)] + 0.082033432844602*u0_B0[OPS_ACC0(-2)] -
      0.0451033223343881*u0_B0[OPS_ACC0(0)] + 0.00932597985049999*u0_B0[OPS_ACC0(3)]
)
: (
   (rc2)*u0_B0[OPS_ACC0(-2)]
      - rc2*u0_B0[OPS_ACC0(2)] + (rc3)*u0_B0[OPS_ACC0(1)] - rc3*u0_B0[OPS_ACC0(-1)]
)))))))));

}

void opensbliblock00Kernel020(const double *tau00_B0, double *wk13_B0, const int *idx)
{
    wk13_B0[OPS_ACC1(0)] = inv_0*((idx[0] == 0) ? (
   -1.50000000000003*tau00_B0[OPS_ACC0(2)] +
      0.333333333333356*tau00_B0[OPS_ACC0(3)] - 8.34657956545823e-15*tau00_B0[OPS_ACC0(4)] -
      1.83333333333334*tau00_B0[OPS_ACC0(0)] + 1.06910315192207e-15*tau00_B0[OPS_ACC0(5)] +
      3.00000000000002*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == 1) ? (
   0.0394168524399447*tau00_B0[OPS_ACC0(2)] -
      0.0658051057710389*tau00_B0[OPS_ACC0(3)] + 0.00571369039775442*tau00_B0[OPS_ACC0(4)] -
      0.322484932882161*tau00_B0[OPS_ACC0(0)] - 0.376283677513354*tau00_B0[OPS_ACC0(-1)] +
      0.719443173328855*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == 2) ? (
   -0.791245592765872*tau00_B0[OPS_ACC0(-1)] -
      0.0367146847001261*tau00_B0[OPS_ACC0(2)] - 0.00412637789557492*tau00_B0[OPS_ACC0(3)] +
      0.197184333887745*tau00_B0[OPS_ACC0(0)] + 0.113446470384241*tau00_B0[OPS_ACC0(-2)] +
      0.521455851089587*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == 3) ? (
   0.121937153224065*tau00_B0[OPS_ACC0(-2)] -
      0.082033432844602*tau00_B0[OPS_ACC0(2)] - 0.00932597985049999*tau00_B0[OPS_ACC0(-3)] +
      0.0451033223343881*tau00_B0[OPS_ACC0(0)] - 0.727822147724592*tau00_B0[OPS_ACC0(-1)] +
      0.652141084861241*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 1) ? (
  
      -3.00000000000002*tau00_B0[OPS_ACC0(-1)] - 1.06910315192207e-15*tau00_B0[OPS_ACC0(-5)] +
      8.34657956545823e-15*tau00_B0[OPS_ACC0(-4)] - 0.333333333333356*tau00_B0[OPS_ACC0(-3)] +
      1.83333333333334*tau00_B0[OPS_ACC0(0)] + 1.50000000000003*tau00_B0[OPS_ACC0(-2)]
)
: ((idx[0] == block0np0 - 2) ?
      (
   -0.719443173328855*tau00_B0[OPS_ACC0(-1)] - 0.00571369039775442*tau00_B0[OPS_ACC0(-4)] +
      0.0658051057710389*tau00_B0[OPS_ACC0(-3)] + 0.322484932882161*tau00_B0[OPS_ACC0(0)] -
      0.0394168524399447*tau00_B0[OPS_ACC0(-2)] + 0.376283677513354*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.0367146847001261*tau00_B0[OPS_ACC0(-2)] - 0.113446470384241*tau00_B0[OPS_ACC0(2)] +
      0.00412637789557492*tau00_B0[OPS_ACC0(-3)] - 0.197184333887745*tau00_B0[OPS_ACC0(0)] -
      0.521455851089587*tau00_B0[OPS_ACC0(-1)] + 0.791245592765872*tau00_B0[OPS_ACC0(1)]
)
: ((idx[0] == block0np0 - 4)
      ? (
   0.082033432844602*tau00_B0[OPS_ACC0(-2)] - 0.121937153224065*tau00_B0[OPS_ACC0(2)] +
      0.00932597985049999*tau00_B0[OPS_ACC0(3)] - 0.0451033223343881*tau00_B0[OPS_ACC0(0)] -
      0.652141084861241*tau00_B0[OPS_ACC0(-1)] + 0.727822147724592*tau00_B0[OPS_ACC0(1)]
)
: (
  
      -rc2*tau00_B0[OPS_ACC0(2)] + (rc3)*tau00_B0[OPS_ACC0(1)] - rc3*tau00_B0[OPS_ACC0(-1)] +
      (rc2)*tau00_B0[OPS_ACC0(-2)]
)))))))));

}

 void opensbliblock00Kernel021(const double *wk5_B0, const double *rhou0_B0, const double *wk3_B0, const double
*rhoE_B0, const double *wk11_B0, const double *wk13_B0, const double *wk6_B0, const double *tau00_B0, const double
*rho_B0, const double *wk10_B0, const double *u0_B0, const double *wk12_B0, const double *wk7_B0, const double *wk4_B0,
const double *wk8_B0, const double *wk9_B0, double *Residual0_B0, double *Residual1_B0, double *Residual2_B0)
{
    Residual0_B0[OPS_ACC16(0)] = -rc1*rho_B0[OPS_ACC8(0)]*wk12_B0[OPS_ACC11(0)] -
      rc1*u0_B0[OPS_ACC10(0)]*wk10_B0[OPS_ACC9(0)] - rc1*wk5_B0[OPS_ACC0(0)];

    Residual1_B0[OPS_ACC17(0)] = -rc1*rhou0_B0[OPS_ACC1(0)]*wk12_B0[OPS_ACC11(0)] -
      rc1*u0_B0[OPS_ACC10(0)]*wk11_B0[OPS_ACC4(0)] + wk13_B0[OPS_ACC5(0)] - rc1*wk6_B0[OPS_ACC6(0)] -
      wk9_B0[OPS_ACC15(0)];

    Residual2_B0[OPS_ACC18(0)] = -rc1*rhoE_B0[OPS_ACC3(0)]*wk12_B0[OPS_ACC11(0)] +
      tau00_B0[OPS_ACC7(0)]*wk12_B0[OPS_ACC11(0)] + u0_B0[OPS_ACC10(0)]*wk13_B0[OPS_ACC5(0)] -
      rc1*u0_B0[OPS_ACC10(0)]*wk7_B0[OPS_ACC12(0)] - rc1*wk3_B0[OPS_ACC2(0)] + wk4_B0[OPS_ACC13(0)] -
      wk8_B0[OPS_ACC14(0)];

}

 void opensbliblock00Kernel030(const double *Residual1_B0, const double *Residual2_B0, const double *Residual0_B0,
double *tempRK_rho_B0, double *tempRK_rhoE_B0, double *rho_B0, double *rhou0_B0, double *tempRK_rhou0_B0, double
*rhoE_B0, const double *rkB, const double *rkA)
{
   tempRK_rho_B0[OPS_ACC3(0)] = dt*Residual0_B0[OPS_ACC2(0)] + rkA[0]*tempRK_rho_B0[OPS_ACC3(0)];

   rho_B0[OPS_ACC5(0)] = rkB[0]*tempRK_rho_B0[OPS_ACC3(0)] + rho_B0[OPS_ACC5(0)];

   tempRK_rhou0_B0[OPS_ACC7(0)] = dt*Residual1_B0[OPS_ACC0(0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC7(0)];

   rhou0_B0[OPS_ACC6(0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC7(0)] + rhou0_B0[OPS_ACC6(0)];

   tempRK_rhoE_B0[OPS_ACC4(0)] = dt*Residual2_B0[OPS_ACC1(0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC4(0)];

   rhoE_B0[OPS_ACC8(0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC4(0)] + rhoE_B0[OPS_ACC8(0)];

}

 void opensbliblock00Kernel027(const double *rho_B0, const double *rhou0_B0, const double *rhoE_B0, double
*Mach_sensor_B0, double *u0_B0, double *a_B0, double *p_B0)
{
   double M = 0.0;
   double p = 0.0;
   double inv_rho = 0.0;
   double inv_a = 0.0;
   double u0 = 0.0;
   inv_rho = 1.0/rho_B0[OPS_ACC0(0)];

   u0_B0[OPS_ACC4(0)] = inv_rho*rhou0_B0[OPS_ACC1(0)];

   p_B0[OPS_ACC6(0)] = (gama - 1)*(-0.5*inv_rho*pow(rhou0_B0[OPS_ACC1(0)], 2) + rhoE_B0[OPS_ACC2(0)]);

   a_B0[OPS_ACC5(0)] = sqrt(gama*inv_rho*p_B0[OPS_ACC6(0)]);

   inv_rho = 1.0/rho_B0[OPS_ACC0(0)];

   u0 = inv_rho*rhou0_B0[OPS_ACC1(0)];

   p = (gama - 1)*(-0.5*inv_rho*pow(rhou0_B0[OPS_ACC1(0)], 2) + rhoE_B0[OPS_ACC2(0)]);

   inv_a = 1.0/sqrt(gama*inv_rho*p);

   M = inv_a*sqrt(pow(u0, 2));

   Mach_sensor_B0[OPS_ACC3(0)] = fmin(1, 0.5*pow(M, 2)*sqrt(pow(-pow(M, 2) + 1, 2) + 4)/(pow(M, 2) + 1));

}

 void opensbliblock00Kernel028(const double *rhoE_B0, const double *p_B0, const double *rho_B0, const double *rhou0_B0,
const double *u0_B0, const double *a_B0, double *wk0_B0, double *wk2_B0, double *wk1_B0)
{
   
   double AVG_0_a = 0.0;
   double AVG_0_u0 = 0.0;
   double inv_AVG_a = 0.0;
   // double inv_AVG_rho = 0.0;
   // double AVG_0_rho = 0.0;


   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;

   //            NEW VARIABLES               //
   double kappa = 1.5;
   double AVG_0_0_REV_00 = 0.0;
   double AVG_0_0_REV_01 = 0.0;
   double AVG_0_0_REV_02 = 0.0;
   double AVG_0_0_REV_10 = 0.0;
   double AVG_0_0_REV_11 = 0.0;
   double AVG_0_0_REV_12 = 0.0;
   double AVG_0_0_REV_20 = 0.0;
   double AVG_0_0_REV_21 = 0.0;
   double AVG_0_0_REV_22 = 0.0;

   double ws_0 = 0.0;
   double ws_1 = 0.0;
   double ws_2 = 0.0;

   double du_0 = 0.0;
   double du_1 = 0.0;
   double du_2 = 0.0;

   double alpha_00 = 0.0;
   double alpha_10 = 0.0;
   double alpha_20 = 0.0;
   double alpha_01 = 0.0;
   double alpha_11 = 0.0;
   double alpha_21 = 0.0;
   double alpha_02 = 0.0;
   double alpha_12 = 0.0;
   double alpha_22 = 0.0;

   double lambda = 0.0;
   double sigma_0 = 0.0;
   double sigma_1 = 0.0;
   double sigma_2 = 0.0;
   double sigma_3=0.0;
   double sigma_4=0.0;
   double sigma_5=0.0;

   double S = 0.0;
   double g_00 = 0.0;
   double g_10 = 0.0;
   double g_20 = 0.0;
   double g_01 = 0.0;
   double g_11 = 0.0;
   double g_21 = 0.0;

   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;

   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;

   double theta_hat_00 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;

   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;

   double eps = 0.0000000001;
   double delta = 0.5; // taken from SBLI code TVD

   // To find alpha values at j-1/2 point
   AVG_0_a = (rc1)*(a_B0[OPS_ACC5(-1)] + a_B0[OPS_ACC5(0)]);
   // printf("AVG_0_a: %f\n",AVG_0_a);
   AVG_0_u0 = (rc1)*(u0_B0[OPS_ACC4(-1)] + u0_B0[OPS_ACC4(0)]);
   // printf("%f \n",a_B0[OPS_ACC5(-1)]);
   inv_AVG_a = 1.0/AVG_0_a;

   AVG_0_0_LEV_00 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) + 2);

   AVG_0_0_LEV_01 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) + 1);

   AVG_0_0_LEV_02 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = -rc1*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_11 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_12 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_20 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) - 2);

   AVG_0_0_LEV_21 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - 1);

   AVG_0_0_LEV_22 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

      

   // Finding the deltas of the conserved variables u = {rho, rho*u, rho*e}^T. calling this vector du 
   du_0 = rho_B0[OPS_ACC2(0)] - rho_B0[OPS_ACC2(-1)];
   du_1 = rhou0_B0[OPS_ACC3(0)] - rhou0_B0[OPS_ACC3(-1)];
   du_2 = rhoE_B0[OPS_ACC0(0)] - rhoE_B0[OPS_ACC0(-1)];
   // printf("%f \n",rho_B0[OPS_ACC2(-1)]);
   // Working out the alpha which is alpha = R^-1 *(u_{i+1} - u_i)
   alpha_00 = AVG_0_0_LEV_00*du_0 + AVG_0_0_LEV_01*du_1 + AVG_0_0_LEV_02*du_2;
   alpha_10 = AVG_0_0_LEV_10*du_0 + AVG_0_0_LEV_11*du_1 + AVG_0_0_LEV_12*du_2;
   alpha_20 = AVG_0_0_LEV_20*du_0 + AVG_0_0_LEV_21*du_1 + AVG_0_0_LEV_22*du_2;
   // printf("alpha_00: %f\n",alpha_00);

   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // To find alpha values at j+1/2 point
   AVG_0_a = (rc1)*(a_B0[OPS_ACC5(0)] + a_B0[OPS_ACC5(1)]);

   AVG_0_u0 = (rc1)*(u0_B0[OPS_ACC4(0)] + u0_B0[OPS_ACC4(1)]);

   inv_AVG_a = 1.0/AVG_0_a;

   // inv_AVG_rho = 1.0/AVG_0_rho;

   AVG_0_0_LEV_00 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) + 2);

   AVG_0_0_LEV_01 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) + 1);

   AVG_0_0_LEV_02 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = -rc1*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_11 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_12 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_20 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) - 2);

   AVG_0_0_LEV_21 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - 1);

   AVG_0_0_LEV_22 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

   du_0 = rho_B0[OPS_ACC2(1)] - rho_B0[OPS_ACC2(0)];
   du_1 = rhou0_B0[OPS_ACC3(1)] - rhou0_B0[OPS_ACC3(0)];
   du_2 = rhoE_B0[OPS_ACC0(1)] - rhoE_B0[OPS_ACC0(0)];

   alpha_01 = AVG_0_0_LEV_00*du_0 + AVG_0_0_LEV_01*du_1 + AVG_0_0_LEV_02*du_2;
   alpha_11 = AVG_0_0_LEV_10*du_0 + AVG_0_0_LEV_11*du_1 + AVG_0_0_LEV_12*du_2;
   alpha_21 = AVG_0_0_LEV_20*du_0 + AVG_0_0_LEV_21*du_1 + AVG_0_0_LEV_22*du_2;


   // Right Eigenvector matrix for the reconstruction later. Only R_{j+1/2} is required
   AVG_0_0_REV_00 = 1;
   AVG_0_0_REV_01 = 1;
   AVG_0_0_REV_02 = 1;
   AVG_0_0_REV_10 = AVG_0_u0-inv_AVG_a;
   AVG_0_0_REV_11 = AVG_0_u0;
   AVG_0_0_REV_12 = AVG_0_u0+inv_AVG_a;
   AVG_0_0_REV_20 = pow(AVG_0_a,2) / gamma_m1 + 0.5*pow(AVG_0_u0,2) - AVG_0_u0*AVG_0_a;
   AVG_0_0_REV_21 = 0.5*pow(AVG_0_u0,2);
   AVG_0_0_REV_22 = pow(AVG_0_a,2)*(1/gamma_m1+ AVG_0_u0*inv_AVG_a);

   // 'a' values which are the characteristic wave speeds at j+1/2 going to call the vector ws

   ws_0 = AVG_0_u0 - AVG_0_a;
   ws_1 = AVG_0_u0;
   ws_2 = AVG_0_u0 + AVG_0_a;
   // printf("%f \n",ws_0);
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // To find alpha values at j+3/2 point
   AVG_0_a = (rc1)*(a_B0[OPS_ACC5(1)] + a_B0[OPS_ACC5(2)]);

   AVG_0_u0 = (rc1)*(u0_B0[OPS_ACC4(1)] + u0_B0[OPS_ACC4(2)]);

   inv_AVG_a = 1.0/AVG_0_a;

   // inv_AVG_rho = 1.0/AVG_0_rho;

   AVG_0_0_LEV_00 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) + 2);

   AVG_0_0_LEV_01 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) + 1);

   AVG_0_0_LEV_02 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = -rc1*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_11 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_12 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_20 = (rc4)*AVG_0_u0*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a,
      2) - 2);

   AVG_0_0_LEV_21 = -rc1*inv_AVG_a*(gama*AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - AVG_0_a*AVG_0_u0*pow(inv_AVG_a, 2) - 1);

   AVG_0_0_LEV_22 = (rc1)*gamma_m1*pow(inv_AVG_a, 2);

   du_0 = rho_B0[OPS_ACC2(2)] - rho_B0[OPS_ACC2(1)];
   du_1 = rhou0_B0[OPS_ACC3(2)] - rhou0_B0[OPS_ACC3(1)];
   du_2 = rhoE_B0[OPS_ACC0(2)] - rhoE_B0[OPS_ACC0(1)];
   
   alpha_02 = AVG_0_0_LEV_00*du_0 + AVG_0_0_LEV_01*du_1 + AVG_0_0_LEV_02*du_2;
   alpha_12 = AVG_0_0_LEV_10*du_0 + AVG_0_0_LEV_11*du_1 + AVG_0_0_LEV_12*du_2;
   alpha_22 = AVG_0_0_LEV_20*du_0 + AVG_0_0_LEV_21*du_1 + AVG_0_0_LEV_22*du_2;
   // printf("alpha_02: %f \n",alpha_02);

   //////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////

   // sigma values which go into the phi equation

   // sigma from Yee et al 1999 (which is used in the fortran code)
   // sigma_0 = fabs(alpha_01) >= delta ? fabs(alpha_01) : (pow(alpha_01,2) + pow(delta,2)) / (2*delta);
   // sigma_1 = fabs(alpha_11) >= delta ? fabs(alpha_11) : (pow(alpha_11,2) + pow(delta,2)) / (2*delta);
   // sigma_2 = fabs(alpha_21) >= delta ? fabs(alpha_21) : (pow(alpha_21,2) + pow(delta,2)) / (2*delta);

   // sigma from Yee et al 1999 (which is used in the fortran code)
   sigma_0 = fabs(ws_0) >= delta ? fabs(ws_0) : (pow(ws_0,2) + pow(delta,2)) / (2*delta);
   sigma_1 = fabs(ws_1) >= delta ? fabs(ws_1) : (pow(ws_1,2) + pow(delta,2)) / (2*delta);
   sigma_2 = fabs(ws_2) >= delta ? fabs(ws_2) : (pow(ws_2,2) + pow(delta,2)) / (2*delta);


   // printf("sigma_0: %f\n",sigma_0);
   // g values at half node point which are the upwind limiter functions

   // at point j
   S = alpha_01 < 0 ? -1 : (alpha_01 > 0 ? 1 : 0);
   g_00 = S*fmax(fmax(0,fmin(2*fabs(alpha_01), S*alpha_00)),fmin(fabs(alpha_01),2*S*alpha_00));

   S = alpha_11 < 0 ? -1 : (alpha_11 > 0 ? 1 : 0);
   g_10 = S*fmax(fmax(0,fmin(2*fabs(alpha_11), S*alpha_10)),fmin(fabs(alpha_11),2*S*alpha_10));

   S = alpha_21 < 0 ? -1 : (alpha_21 > 0 ? 1 : 0);
   g_20 = S*fmax(fmax(0,fmin(2*fabs(alpha_21), S*alpha_20)),fmin(fabs(alpha_21),2*S*alpha_20)); 


   // at points j+1
   S = alpha_02 < 0 ? -1 : (alpha_02 > 0 ? 1 : 0);
   g_01 = S*fmax(fmax(0,fmin(2*fabs(alpha_02), S*alpha_01)),fmin(fabs(alpha_02),2*S*alpha_01));

   S = alpha_12 < 0 ? -1 : (alpha_12 > 0 ? 1 : 0);
   g_11 = S*fmax(fmax(0,fmin(2*fabs(alpha_12), S*alpha_11)),fmin(fabs(alpha_12),2*S*alpha_11));

   S = alpha_22 < 0 ? -1 : (alpha_22 > 0 ? 1 : 0);
   g_21 = S*fmax(fmax(0,fmin(2*fabs(alpha_22), S*alpha_21)),fmin(fabs(alpha_22),2*S*alpha_21));
   
   
   // printf("g_21: %f\n",g_21);


   // gamma 
   // printf("alpha_00 = %.25f\n",alpha_00);
   gamma_0 = (alpha_01 == 0) ? 0 : 0.5*sigma_0*alpha_01*(g_01 - g_00) / (pow(alpha_01,2)+eps);
   gamma_1 = (alpha_11 == 0) ? 0 : 0.5*sigma_1*alpha_11*(g_11 - g_10) / (pow(alpha_11,2)+eps);
   gamma_2 = (alpha_12 == 0) ? 0 : 0.5*sigma_2*alpha_21*(g_21 - g_20) / (pow(alpha_21,2)+eps);

   // sigma as a function of gamma for the phi equation
   sigma_3 = fabs(gamma_0) >= delta ? fabs(gamma_0) : (pow((gamma_0),2) + pow(delta,2)) / (2*delta);
   sigma_4 = fabs(gamma_1) >= delta ? fabs(gamma_1) : (pow((gamma_1),2) + pow(delta,2)) / (2*delta);
   sigma_5 = fabs(gamma_2) >= delta ? fabs(gamma_2) : (pow((gamma_2),2) + pow(delta,2)) / (2*delta);


   // printf("gamma_0: %.1f \n", gamma_0);
   // printf("------------------------------------\n");

   // elements for phi_{j+1/2}

   // phi_0 = -sigma_0*(g_01 + g_00) + (fabs(ws_0 + gamma_0) - lambda*pow(ws_0,2))*alpha_01;
   // phi_1 = -sigma_1*(g_11 + g_10) + (fabs(ws_1 + gamma_1) - lambda*pow(ws_1,2))*alpha_11;
   // phi_2 = -sigma_2*(g_21 + g_20) + (fabs(ws_2 + gamma_2) - lambda*pow(ws_2,2))*alpha_21;

   phi_0 = 0.5*sigma_0*(g_01 + g_00) - (sigma_3+sigma_0)*alpha_01;
   phi_1 = 0.5*sigma_1*(g_11 + g_10) - (sigma_4+sigma_1)*alpha_11;
   phi_2 = 0.5*sigma_2*(g_21 + g_20) - (sigma_5+sigma_2)*alpha_21;
   // printf("phi_0: %f \n", phi_0);

   // the limiter now requires a switch to control its significance on the dissipation. The Harten switch is used as theta
   // (eqns 2.22 and 2.23 in Yee et al. 1999)
   double power = 3.0;
   // thata hat at point j
   theta_hat_00 = pow(fabs((fabs(alpha_01) - fabs(alpha_00)) / (fabs(alpha_01) + fabs(alpha_00)+eps)),power);
   theta_hat_10 = pow(fabs((fabs(alpha_11) - fabs(alpha_10)) / (fabs(alpha_11) + fabs(alpha_10)+eps)),power);
   theta_hat_20 = pow(fabs((fabs(alpha_21) - fabs(alpha_20)) / (fabs(alpha_21) + fabs(alpha_20)+eps)),power);
   // printf("%f \n", theta_hat_00);
   // theta hat at point j+1
   theta_hat_01 = pow(fabs((fabs(alpha_02) - fabs(alpha_01)) / (fabs(alpha_02) + fabs(alpha_01)+eps)),power);
   theta_hat_11 = pow(fabs((fabs(alpha_12) - fabs(alpha_11)) / (fabs(alpha_12) + fabs(alpha_11)+eps)),power);
   theta_hat_21 = pow(fabs((fabs(alpha_22) - fabs(alpha_21)) / (fabs(alpha_22) + fabs(alpha_21)+eps)),power); 
   
   // theta at point j+1/2
   theta_0 =fmax(theta_hat_00, theta_hat_01);
   theta_1 =fmax(theta_hat_10, theta_hat_11);
   theta_2 =fmax(theta_hat_20, theta_hat_21);
   // printf("%f \n", theta_0);
   // value to find he filter numerical flux

   // at point j+1/2
   phi_star_0 = kappa*theta_0*phi_0;
   phi_star_1 = kappa*theta_1*phi_1;
   phi_star_2 = kappa*theta_2*phi_2;
   // printf("phi_star_0: %f\n", phi_star_0);

   // creating the filter numerical flux (eq. 2.2 in Yee et al. 1999)

   // at i+1/2
   wk0_B0[OPS_ACC6(0)] = 0.5*(AVG_0_0_REV_00*phi_star_0 + AVG_0_0_REV_01*phi_star_1 + AVG_0_0_REV_02*phi_star_2);
   wk1_B0[OPS_ACC8(0)] = 0.5*(AVG_0_0_REV_10*phi_star_0 + AVG_0_0_REV_11*phi_star_1 + AVG_0_0_REV_12*phi_star_2);
   wk2_B0[OPS_ACC7(0)] = 0.5*(AVG_0_0_REV_20*phi_star_0 + AVG_0_0_REV_21*phi_star_1 + AVG_0_0_REV_22*phi_star_2);
   // printf("F_star{i+1/2}: %f\n",wk0_B0[OPS_ACC6(0)]);

}

// non-linear filter application
 void opensbliblock00Kernel029(const double *wk0_B0, const double *Mach_sensor_B0, const double *wk2_B0, const double
*wk1_B0, double *rho_B0, double *rhou0_B0, double *rhoE_B0, const int *idx)
{
   // Now we have the filter numerical flux, time to find the filter operator, Lf

   rho_B0[OPS_ACC4(0)] = rho_B0[OPS_ACC4(0)] - dt*inv_0*(wk0_B0[OPS_ACC0(0)] - wk0_B0[OPS_ACC0(-1)]);
   rhou0_B0[OPS_ACC5(0)] = rhou0_B0[OPS_ACC5(0)] - dt*inv_0*(wk1_B0[OPS_ACC3(0)] - wk1_B0[OPS_ACC3(-1)]);
   rhoE_B0[OPS_ACC6(0)] = rhoE_B0[OPS_ACC6(0)] - dt*inv_0*(wk2_B0[OPS_ACC2(0)] - wk2_B0[OPS_ACC2(-1)]);

   // printf("added flux: %f\n", wk0_B0[OPS_ACC0(0)]);
   // printf("rho_B0: %f\n",rho_B0[OPS_ACC4(0)]);
   // printf("-------------------------------------------------------");

}


#endif
