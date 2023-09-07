#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
void opensbliblock00Kernel027(double *rhou0_B0, double *rhou1_B0, double *rho_B0, double *rhoE_B0)
{
   double u0 = 0.0;
   double r = 0.0;
   double p = 0.0;
   double u1 = 0.0;
   u0 = 1.00000000000000;

   u1 = 0.0;

   p = 1/(pow(Minf, 2)*gama);

   r = pow(Minf, 2)*gama*p;

   rho_B0[OPS_ACC2(0,0)] = r;

   rhou0_B0[OPS_ACC0(0,0)] = r*u0;

   rhou1_B0[OPS_ACC1(0,0)] = r*u1;

   rhoE_B0[OPS_ACC3(0,0)] = p/(gama - 1) + 0.5*r*(pow(u0, 2) + pow(u1, 2));

}

 void opensbliblock00Kernel030(const double *x0_B0, const double *x1_B0, double *D11_B0, double *D00_B0, double *D10_B0,
double *detJ_B0, double *D01_B0, const int *idx)
{
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_1 = 0.0;
   double localeval_3 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_1*(1.06910315192207e-15*x0_B0[OPS_ACC0(0,5)] -
      1.50000000000003*x0_B0[OPS_ACC0(0,2)] + 0.333333333333356*x0_B0[OPS_ACC0(0,3)] -
      1.83333333333334*x0_B0[OPS_ACC0(0,0)] - 8.34657956545823e-15*x0_B0[OPS_ACC0(0,4)] +
      3.00000000000002*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.376283677513354*x0_B0[OPS_ACC0(0,-1)] +
      0.0394168524399447*x0_B0[OPS_ACC0(0,2)] - 0.0658051057710389*x0_B0[OPS_ACC0(0,3)] -
      0.322484932882161*x0_B0[OPS_ACC0(0,0)] + 0.00571369039775442*x0_B0[OPS_ACC0(0,4)] +
      0.719443173328855*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.113446470384241*x0_B0[OPS_ACC0(0,-2)] -
      0.791245592765872*x0_B0[OPS_ACC0(0,-1)] - 0.0367146847001261*x0_B0[OPS_ACC0(0,2)] -
      0.00412637789557492*x0_B0[OPS_ACC0(0,3)] + 0.197184333887745*x0_B0[OPS_ACC0(0,0)] +
      0.521455851089587*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*x0_B0[OPS_ACC0(0,-2)] -
      0.727822147724592*x0_B0[OPS_ACC0(0,-1)] - 0.082033432844602*x0_B0[OPS_ACC0(0,2)] +
      0.0451033223343881*x0_B0[OPS_ACC0(0,0)] - 0.00932597985049999*x0_B0[OPS_ACC0(0,-3)] +
      0.652141084861241*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*x0_B0[OPS_ACC0(0,-2)] - 3.00000000000002*x0_B0[OPS_ACC0(0,-1)] -
      1.06910315192207e-15*x0_B0[OPS_ACC0(0,-5)] + 8.34657956545823e-15*x0_B0[OPS_ACC0(0,-4)] +
      1.83333333333334*x0_B0[OPS_ACC0(0,0)] - 0.333333333333356*x0_B0[OPS_ACC0(0,-3)])
)
: ((idx[1] == block0np1 - 2) ?
      (
   inv_1*(-0.0394168524399447*x0_B0[OPS_ACC0(0,-2)] - 0.719443173328855*x0_B0[OPS_ACC0(0,-1)] -
      0.00571369039775442*x0_B0[OPS_ACC0(0,-4)] + 0.322484932882161*x0_B0[OPS_ACC0(0,0)] +
      0.0658051057710389*x0_B0[OPS_ACC0(0,-3)] + 0.376283677513354*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.0367146847001261*x0_B0[OPS_ACC0(0,-2)] - 0.521455851089587*x0_B0[OPS_ACC0(0,-1)] -
      0.113446470384241*x0_B0[OPS_ACC0(0,2)] - 0.197184333887745*x0_B0[OPS_ACC0(0,0)] +
      0.00412637789557492*x0_B0[OPS_ACC0(0,-3)] + 0.791245592765872*x0_B0[OPS_ACC0(0,1)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(-0.652141084861241*x0_B0[OPS_ACC0(0,-1)] + 0.082033432844602*x0_B0[OPS_ACC0(0,-2)] -
      0.121937153224065*x0_B0[OPS_ACC0(0,2)] + 0.00932597985049999*x0_B0[OPS_ACC0(0,3)] -
      0.0451033223343881*x0_B0[OPS_ACC0(0,0)] + 0.727822147724592*x0_B0[OPS_ACC0(0,1)])
)
: (
  
      (rc4)*inv_1*(x0_B0[OPS_ACC0(0,-2)] - 8*x0_B0[OPS_ACC0(0,-1)] + 8*x0_B0[OPS_ACC0(0,1)] -
      x0_B0[OPS_ACC0(0,2)])
)))))))));

    localeval_1 = (rc4)*inv_0*(-8*x1_B0[OPS_ACC1(-1,0)] + 8*x1_B0[OPS_ACC1(1,0)] - x1_B0[OPS_ACC1(2,0)] +
      x1_B0[OPS_ACC1(-2,0)]);

    localeval_2 = (rc4)*inv_0*(8*x0_B0[OPS_ACC0(1,0)] - 8*x0_B0[OPS_ACC0(-1,0)] - x0_B0[OPS_ACC0(2,0)] +
      x0_B0[OPS_ACC0(-2,0)]);

    localeval_3 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*x1_B0[OPS_ACC1(0,3)] -
      1.83333333333334*x1_B0[OPS_ACC1(0,0)] - 8.34657956545823e-15*x1_B0[OPS_ACC1(0,4)] +
      3.00000000000002*x1_B0[OPS_ACC1(0,1)] + 1.06910315192207e-15*x1_B0[OPS_ACC1(0,5)] -
      1.50000000000003*x1_B0[OPS_ACC1(0,2)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*x1_B0[OPS_ACC1(0,3)] -
      0.376283677513354*x1_B0[OPS_ACC1(0,-1)] - 0.322484932882161*x1_B0[OPS_ACC1(0,0)] +
      0.00571369039775442*x1_B0[OPS_ACC1(0,4)] + 0.719443173328855*x1_B0[OPS_ACC1(0,1)] +
      0.0394168524399447*x1_B0[OPS_ACC1(0,2)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*x1_B0[OPS_ACC1(0,3)] + 0.113446470384241*x1_B0[OPS_ACC1(0,-2)] -
      0.791245592765872*x1_B0[OPS_ACC1(0,-1)] + 0.197184333887745*x1_B0[OPS_ACC1(0,0)] +
      0.521455851089587*x1_B0[OPS_ACC1(0,1)] - 0.0367146847001261*x1_B0[OPS_ACC1(0,2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.00932597985049999*x1_B0[OPS_ACC1(0,-3)] + 0.121937153224065*x1_B0[OPS_ACC1(0,-2)] -
      0.727822147724592*x1_B0[OPS_ACC1(0,-1)] + 0.0451033223343881*x1_B0[OPS_ACC1(0,0)] +
      0.652141084861241*x1_B0[OPS_ACC1(0,1)] - 0.082033432844602*x1_B0[OPS_ACC1(0,2)])
)
: ((idx[1] == block0np1 - 1) ?
      (
   inv_1*(-0.333333333333356*x1_B0[OPS_ACC1(0,-3)] + 1.50000000000003*x1_B0[OPS_ACC1(0,-2)] -
      3.00000000000002*x1_B0[OPS_ACC1(0,-1)] - 1.06910315192207e-15*x1_B0[OPS_ACC1(0,-5)] +
      1.83333333333334*x1_B0[OPS_ACC1(0,0)] + 8.34657956545823e-15*x1_B0[OPS_ACC1(0,-4)])
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(0.0658051057710389*x1_B0[OPS_ACC1(0,-3)] - 0.0394168524399447*x1_B0[OPS_ACC1(0,-2)] -
      0.719443173328855*x1_B0[OPS_ACC1(0,-1)] + 0.322484932882161*x1_B0[OPS_ACC1(0,0)] +
      0.376283677513354*x1_B0[OPS_ACC1(0,1)] - 0.00571369039775442*x1_B0[OPS_ACC1(0,-4)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.00412637789557492*x1_B0[OPS_ACC1(0,-3)] + 0.0367146847001261*x1_B0[OPS_ACC1(0,-2)] -
      0.521455851089587*x1_B0[OPS_ACC1(0,-1)] - 0.197184333887745*x1_B0[OPS_ACC1(0,0)] +
      0.791245592765872*x1_B0[OPS_ACC1(0,1)] - 0.113446470384241*x1_B0[OPS_ACC1(0,2)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.00932597985049999*x1_B0[OPS_ACC1(0,3)] + 0.082033432844602*x1_B0[OPS_ACC1(0,-2)] -
      0.652141084861241*x1_B0[OPS_ACC1(0,-1)] - 0.0451033223343881*x1_B0[OPS_ACC1(0,0)] +
      0.727822147724592*x1_B0[OPS_ACC1(0,1)] - 0.121937153224065*x1_B0[OPS_ACC1(0,2)])
)
: (
  
      (rc4)*inv_1*(-8*x1_B0[OPS_ACC1(0,-1)] - x1_B0[OPS_ACC1(0,2)] + x1_B0[OPS_ACC1(0,-2)] +
      8*x1_B0[OPS_ACC1(0,1)])
)))))))));

   detJ_B0[OPS_ACC5(0,0)] = -localeval_0*localeval_1 + localeval_2*localeval_3;

   D00_B0[OPS_ACC3(0,0)] = localeval_3/(-localeval_0*localeval_1 + localeval_2*localeval_3);

   D01_B0[OPS_ACC6(0,0)] = -localeval_0/(-localeval_0*localeval_1 + localeval_2*localeval_3);

   D10_B0[OPS_ACC4(0,0)] = -localeval_1/(-localeval_0*localeval_1 + localeval_2*localeval_3);

   D11_B0[OPS_ACC2(0,0)] = localeval_2/(-localeval_0*localeval_1 + localeval_2*localeval_3);

}

void opensbliblock00Kernel033(double *D11_B0, double *D00_B0, double *detJ_B0, double *D10_B0, double *D01_B0)
{
   D00_B0[OPS_ACC1(0,-1)] = D00_B0[OPS_ACC1(0,1)];

   D01_B0[OPS_ACC4(0,-1)] = D01_B0[OPS_ACC4(0,1)];

   D10_B0[OPS_ACC3(0,-1)] = D10_B0[OPS_ACC3(0,1)];

   D11_B0[OPS_ACC0(0,-1)] = D11_B0[OPS_ACC0(0,1)];

   detJ_B0[OPS_ACC2(0,-1)] = detJ_B0[OPS_ACC2(0,1)];

   D00_B0[OPS_ACC1(0,-2)] = D00_B0[OPS_ACC1(0,2)];

   D01_B0[OPS_ACC4(0,-2)] = D01_B0[OPS_ACC4(0,2)];

   D10_B0[OPS_ACC3(0,-2)] = D10_B0[OPS_ACC3(0,2)];

   D11_B0[OPS_ACC0(0,-2)] = D11_B0[OPS_ACC0(0,2)];

   detJ_B0[OPS_ACC2(0,-2)] = detJ_B0[OPS_ACC2(0,2)];

   D00_B0[OPS_ACC1(0,-3)] = D00_B0[OPS_ACC1(0,3)];

   D01_B0[OPS_ACC4(0,-3)] = D01_B0[OPS_ACC4(0,3)];

   D10_B0[OPS_ACC3(0,-3)] = D10_B0[OPS_ACC3(0,3)];

   D11_B0[OPS_ACC0(0,-3)] = D11_B0[OPS_ACC0(0,3)];

   detJ_B0[OPS_ACC2(0,-3)] = detJ_B0[OPS_ACC2(0,3)];

}

void opensbliblock00Kernel034(double *D11_B0, double *D00_B0, double *detJ_B0, double *D10_B0, double *D01_B0)
{
   D00_B0[OPS_ACC1(0,1)] = D00_B0[OPS_ACC1(0,-1)];

   D01_B0[OPS_ACC4(0,1)] = D01_B0[OPS_ACC4(0,-1)];

   D10_B0[OPS_ACC3(0,1)] = D10_B0[OPS_ACC3(0,-1)];

   D11_B0[OPS_ACC0(0,1)] = D11_B0[OPS_ACC0(0,-1)];

   detJ_B0[OPS_ACC2(0,1)] = detJ_B0[OPS_ACC2(0,-1)];

   D00_B0[OPS_ACC1(0,2)] = D00_B0[OPS_ACC1(0,-2)];

   D01_B0[OPS_ACC4(0,2)] = D01_B0[OPS_ACC4(0,-2)];

   D10_B0[OPS_ACC3(0,2)] = D10_B0[OPS_ACC3(0,-2)];

   D11_B0[OPS_ACC0(0,2)] = D11_B0[OPS_ACC0(0,-2)];

   detJ_B0[OPS_ACC2(0,2)] = detJ_B0[OPS_ACC2(0,-2)];

   D00_B0[OPS_ACC1(0,3)] = D00_B0[OPS_ACC1(0,-3)];

   D01_B0[OPS_ACC4(0,3)] = D01_B0[OPS_ACC4(0,-3)];

   D10_B0[OPS_ACC3(0,3)] = D10_B0[OPS_ACC3(0,-3)];

   D11_B0[OPS_ACC0(0,3)] = D11_B0[OPS_ACC0(0,-3)];

   detJ_B0[OPS_ACC2(0,3)] = detJ_B0[OPS_ACC2(0,-3)];

   D00_B0[OPS_ACC1(0,4)] = D00_B0[OPS_ACC1(0,-4)];

   D01_B0[OPS_ACC4(0,4)] = D01_B0[OPS_ACC4(0,-4)];

   D10_B0[OPS_ACC3(0,4)] = D10_B0[OPS_ACC3(0,-4)];

   D11_B0[OPS_ACC0(0,4)] = D11_B0[OPS_ACC0(0,-4)];

   detJ_B0[OPS_ACC2(0,4)] = detJ_B0[OPS_ACC2(0,-4)];

}

 void opensbliblock00Kernel039(const double *D11_B0, const double *D00_B0, const double *D10_B0, const double *D01_B0,
double *SD111_B0, double *SD101_B0, double *SD010_B0, double *SD100_B0, double *SD001_B0, double *SD000_B0, double
*SD011_B0, double *SD110_B0, const int *idx)
{
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_5 = 0.0;
   double localeval_1 = 0.0;
   double localeval_3 = 0.0;
   double localeval_4 = 0.0;
   double localeval_7 = 0.0;
   double localeval_6 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_1*(1.06910315192207e-15*D10_B0[OPS_ACC2(0,5)] -
      1.50000000000003*D10_B0[OPS_ACC2(0,2)] + 0.333333333333356*D10_B0[OPS_ACC2(0,3)] -
      1.83333333333334*D10_B0[OPS_ACC2(0,0)] - 8.34657956545823e-15*D10_B0[OPS_ACC2(0,4)] +
      3.00000000000002*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.376283677513354*D10_B0[OPS_ACC2(0,-1)]
      + 0.0394168524399447*D10_B0[OPS_ACC2(0,2)] - 0.0658051057710389*D10_B0[OPS_ACC2(0,3)] -
      0.322484932882161*D10_B0[OPS_ACC2(0,0)] + 0.00571369039775442*D10_B0[OPS_ACC2(0,4)] +
      0.719443173328855*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.113446470384241*D10_B0[OPS_ACC2(0,-2)]
      - 0.791245592765872*D10_B0[OPS_ACC2(0,-1)] - 0.0367146847001261*D10_B0[OPS_ACC2(0,2)] -
      0.00412637789557492*D10_B0[OPS_ACC2(0,3)] + 0.197184333887745*D10_B0[OPS_ACC2(0,0)] +
      0.521455851089587*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*D10_B0[OPS_ACC2(0,-2)]
      - 0.727822147724592*D10_B0[OPS_ACC2(0,-1)] - 0.082033432844602*D10_B0[OPS_ACC2(0,2)] +
      0.0451033223343881*D10_B0[OPS_ACC2(0,0)] - 0.00932597985049999*D10_B0[OPS_ACC2(0,-3)] +
      0.652141084861241*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*D10_B0[OPS_ACC2(0,-2)] - 3.00000000000002*D10_B0[OPS_ACC2(0,-1)] -
      1.06910315192207e-15*D10_B0[OPS_ACC2(0,-5)] + 8.34657956545823e-15*D10_B0[OPS_ACC2(0,-4)] +
      1.83333333333334*D10_B0[OPS_ACC2(0,0)] - 0.333333333333356*D10_B0[OPS_ACC2(0,-3)])
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*D10_B0[OPS_ACC2(0,-2)] - 0.719443173328855*D10_B0[OPS_ACC2(0,-1)] -
      0.00571369039775442*D10_B0[OPS_ACC2(0,-4)] + 0.322484932882161*D10_B0[OPS_ACC2(0,0)] +
      0.0658051057710389*D10_B0[OPS_ACC2(0,-3)] + 0.376283677513354*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(0.0367146847001261*D10_B0[OPS_ACC2(0,-2)] - 0.521455851089587*D10_B0[OPS_ACC2(0,-1)] -
      0.113446470384241*D10_B0[OPS_ACC2(0,2)] - 0.197184333887745*D10_B0[OPS_ACC2(0,0)] +
      0.00412637789557492*D10_B0[OPS_ACC2(0,-3)] + 0.791245592765872*D10_B0[OPS_ACC2(0,1)])
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.082033432844602*D10_B0[OPS_ACC2(0,-2)] - 0.652141084861241*D10_B0[OPS_ACC2(0,-1)] -
      0.121937153224065*D10_B0[OPS_ACC2(0,2)] + 0.00932597985049999*D10_B0[OPS_ACC2(0,3)] -
      0.0451033223343881*D10_B0[OPS_ACC2(0,0)] + 0.727822147724592*D10_B0[OPS_ACC2(0,1)])
)
: (
  
      (rc4)*inv_1*(-8*D10_B0[OPS_ACC2(0,-1)] + 8*D10_B0[OPS_ACC2(0,1)] - D10_B0[OPS_ACC2(0,2)] +
      D10_B0[OPS_ACC2(0,-2)])
)))))))));

    localeval_1 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*D11_B0[OPS_ACC0(0,3)] -
      8.34657956545823e-15*D11_B0[OPS_ACC0(0,4)] - 1.83333333333334*D11_B0[OPS_ACC0(0,0)] +
      1.06910315192207e-15*D11_B0[OPS_ACC0(0,5)] + 3.00000000000002*D11_B0[OPS_ACC0(0,1)] -
      1.50000000000003*D11_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*D11_B0[OPS_ACC0(0,3)]
      + 0.00571369039775442*D11_B0[OPS_ACC0(0,4)] - 0.322484932882161*D11_B0[OPS_ACC0(0,0)] -
      0.376283677513354*D11_B0[OPS_ACC0(0,-1)] + 0.719443173328855*D11_B0[OPS_ACC0(0,1)] +
      0.0394168524399447*D11_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*D11_B0[OPS_ACC0(0,3)] + 0.197184333887745*D11_B0[OPS_ACC0(0,0)] +
      0.113446470384241*D11_B0[OPS_ACC0(0,-2)] - 0.791245592765872*D11_B0[OPS_ACC0(0,-1)] +
      0.521455851089587*D11_B0[OPS_ACC0(0,1)] - 0.0367146847001261*D11_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.00932597985049999*D11_B0[OPS_ACC0(0,-3)] + 0.0451033223343881*D11_B0[OPS_ACC0(0,0)] -
      0.727822147724592*D11_B0[OPS_ACC0(0,-1)] + 0.121937153224065*D11_B0[OPS_ACC0(0,-2)] +
      0.652141084861241*D11_B0[OPS_ACC0(0,1)] - 0.082033432844602*D11_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 - 1)
      ? (
   inv_1*(-0.333333333333356*D11_B0[OPS_ACC0(0,-3)] + 1.83333333333334*D11_B0[OPS_ACC0(0,0)] +
      1.50000000000003*D11_B0[OPS_ACC0(0,-2)] - 3.00000000000002*D11_B0[OPS_ACC0(0,-1)] -
      1.06910315192207e-15*D11_B0[OPS_ACC0(0,-5)] + 8.34657956545823e-15*D11_B0[OPS_ACC0(0,-4)])
)
: ((idx[1] ==
      block0np1 - 2) ? (
   inv_1*(0.0658051057710389*D11_B0[OPS_ACC0(0,-3)] + 0.322484932882161*D11_B0[OPS_ACC0(0,0)] -
      0.0394168524399447*D11_B0[OPS_ACC0(0,-2)] - 0.719443173328855*D11_B0[OPS_ACC0(0,-1)] +
      0.376283677513354*D11_B0[OPS_ACC0(0,1)] - 0.00571369039775442*D11_B0[OPS_ACC0(0,-4)])
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(0.00412637789557492*D11_B0[OPS_ACC0(0,-3)] - 0.197184333887745*D11_B0[OPS_ACC0(0,0)] -
      0.521455851089587*D11_B0[OPS_ACC0(0,-1)] + 0.0367146847001261*D11_B0[OPS_ACC0(0,-2)] +
      0.791245592765872*D11_B0[OPS_ACC0(0,1)] - 0.113446470384241*D11_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.00932597985049999*D11_B0[OPS_ACC0(0,3)] - 0.0451033223343881*D11_B0[OPS_ACC0(0,0)] +
      0.082033432844602*D11_B0[OPS_ACC0(0,-2)] - 0.652141084861241*D11_B0[OPS_ACC0(0,-1)] +
      0.727822147724592*D11_B0[OPS_ACC0(0,1)] - 0.121937153224065*D11_B0[OPS_ACC0(0,2)])
)
: (
  
      (rc4)*inv_1*(-D11_B0[OPS_ACC0(0,2)] + D11_B0[OPS_ACC0(0,-2)] + 8*D11_B0[OPS_ACC0(0,1)] -
      8*D11_B0[OPS_ACC0(0,-1)])
)))))))));

    localeval_2 = (rc4)*inv_0*(-D11_B0[OPS_ACC0(2,0)] + D11_B0[OPS_ACC0(-2,0)] - 8*D11_B0[OPS_ACC0(-1,0)] +
      8*D11_B0[OPS_ACC0(1,0)]);

    localeval_3 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*D01_B0[OPS_ACC3(0,1)] -
      8.34657956545823e-15*D01_B0[OPS_ACC3(0,4)] - 1.83333333333334*D01_B0[OPS_ACC3(0,0)] +
      0.333333333333356*D01_B0[OPS_ACC3(0,3)] - 1.50000000000003*D01_B0[OPS_ACC3(0,2)] +
      1.06910315192207e-15*D01_B0[OPS_ACC3(0,5)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.719443173328855*D01_B0[OPS_ACC3(0,1)] + 0.00571369039775442*D01_B0[OPS_ACC3(0,4)] -
      0.322484932882161*D01_B0[OPS_ACC3(0,0)] - 0.0658051057710389*D01_B0[OPS_ACC3(0,3)] +
      0.0394168524399447*D01_B0[OPS_ACC3(0,2)] - 0.376283677513354*D01_B0[OPS_ACC3(0,-1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.521455851089587*D01_B0[OPS_ACC3(0,1)] - 0.791245592765872*D01_B0[OPS_ACC3(0,-1)] +
      0.197184333887745*D01_B0[OPS_ACC3(0,0)] - 0.00412637789557492*D01_B0[OPS_ACC3(0,3)] -
      0.0367146847001261*D01_B0[OPS_ACC3(0,2)] + 0.113446470384241*D01_B0[OPS_ACC3(0,-2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.652141084861241*D01_B0[OPS_ACC3(0,1)] + 0.121937153224065*D01_B0[OPS_ACC3(0,-2)] -
      0.00932597985049999*D01_B0[OPS_ACC3(0,-3)] + 0.0451033223343881*D01_B0[OPS_ACC3(0,0)] -
      0.082033432844602*D01_B0[OPS_ACC3(0,2)] - 0.727822147724592*D01_B0[OPS_ACC3(0,-1)])
)
: ((idx[1] == block0np1 - 1)
      ? (
   inv_1*(-3.00000000000002*D01_B0[OPS_ACC3(0,-1)] - 0.333333333333356*D01_B0[OPS_ACC3(0,-3)] +
      1.83333333333334*D01_B0[OPS_ACC3(0,0)] + 8.34657956545823e-15*D01_B0[OPS_ACC3(0,-4)] -
      1.06910315192207e-15*D01_B0[OPS_ACC3(0,-5)] + 1.50000000000003*D01_B0[OPS_ACC3(0,-2)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(0.376283677513354*D01_B0[OPS_ACC3(0,1)] - 0.719443173328855*D01_B0[OPS_ACC3(0,-1)] +
      0.0658051057710389*D01_B0[OPS_ACC3(0,-3)] + 0.322484932882161*D01_B0[OPS_ACC3(0,0)] -
      0.00571369039775442*D01_B0[OPS_ACC3(0,-4)] - 0.0394168524399447*D01_B0[OPS_ACC3(0,-2)])
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(0.791245592765872*D01_B0[OPS_ACC3(0,1)] + 0.0367146847001261*D01_B0[OPS_ACC3(0,-2)] +
      0.00412637789557492*D01_B0[OPS_ACC3(0,-3)] - 0.197184333887745*D01_B0[OPS_ACC3(0,0)] -
      0.113446470384241*D01_B0[OPS_ACC3(0,2)] - 0.521455851089587*D01_B0[OPS_ACC3(0,-1)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.727822147724592*D01_B0[OPS_ACC3(0,1)] + 0.082033432844602*D01_B0[OPS_ACC3(0,-2)] -
      0.0451033223343881*D01_B0[OPS_ACC3(0,0)] + 0.00932597985049999*D01_B0[OPS_ACC3(0,3)] -
      0.121937153224065*D01_B0[OPS_ACC3(0,2)] - 0.652141084861241*D01_B0[OPS_ACC3(0,-1)])
)
: (
  
      (rc4)*inv_1*(-D01_B0[OPS_ACC3(0,2)] + 8*D01_B0[OPS_ACC3(0,1)] + D01_B0[OPS_ACC3(0,-2)] -
      8*D01_B0[OPS_ACC3(0,-1)])
)))))))));

    localeval_4 = (rc4)*inv_0*(-D01_B0[OPS_ACC3(2,0)] + D01_B0[OPS_ACC3(-2,0)] - 8*D01_B0[OPS_ACC3(-1,0)] +
      8*D01_B0[OPS_ACC3(1,0)]);

    localeval_5 = (rc4)*inv_0*(D00_B0[OPS_ACC1(-2,0)] - D00_B0[OPS_ACC1(2,0)] + 8*D00_B0[OPS_ACC1(1,0)] -
      8*D00_B0[OPS_ACC1(-1,0)]);

    localeval_6 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*D00_B0[OPS_ACC1(0,3)] -
      1.50000000000003*D00_B0[OPS_ACC1(0,2)] + 1.06910315192207e-15*D00_B0[OPS_ACC1(0,5)] +
      3.00000000000002*D00_B0[OPS_ACC1(0,1)] - 8.34657956545823e-15*D00_B0[OPS_ACC1(0,4)] -
      1.83333333333334*D00_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*D00_B0[OPS_ACC1(0,3)]
      + 0.0394168524399447*D00_B0[OPS_ACC1(0,2)] - 0.376283677513354*D00_B0[OPS_ACC1(0,-1)] +
      0.719443173328855*D00_B0[OPS_ACC1(0,1)] + 0.00571369039775442*D00_B0[OPS_ACC1(0,4)] -
      0.322484932882161*D00_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*D00_B0[OPS_ACC1(0,3)] - 0.0367146847001261*D00_B0[OPS_ACC1(0,2)] +
      0.113446470384241*D00_B0[OPS_ACC1(0,-2)] + 0.521455851089587*D00_B0[OPS_ACC1(0,1)] -
      0.791245592765872*D00_B0[OPS_ACC1(0,-1)] + 0.197184333887745*D00_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*D00_B0[OPS_ACC1(0,2)] - 0.727822147724592*D00_B0[OPS_ACC1(0,-1)] +
      0.652141084861241*D00_B0[OPS_ACC1(0,1)] + 0.121937153224065*D00_B0[OPS_ACC1(0,-2)] -
      0.00932597985049999*D00_B0[OPS_ACC1(0,-3)] + 0.0451033223343881*D00_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-1.06910315192207e-15*D00_B0[OPS_ACC1(0,-5)] + 1.50000000000003*D00_B0[OPS_ACC1(0,-2)] -
      3.00000000000002*D00_B0[OPS_ACC1(0,-1)] - 0.333333333333356*D00_B0[OPS_ACC1(0,-3)] +
      1.83333333333334*D00_B0[OPS_ACC1(0,0)] + 8.34657956545823e-15*D00_B0[OPS_ACC1(0,-4)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(-0.0394168524399447*D00_B0[OPS_ACC1(0,-2)] + 0.376283677513354*D00_B0[OPS_ACC1(0,1)] -
      0.719443173328855*D00_B0[OPS_ACC1(0,-1)] + 0.0658051057710389*D00_B0[OPS_ACC1(0,-3)] +
      0.322484932882161*D00_B0[OPS_ACC1(0,0)] - 0.00571369039775442*D00_B0[OPS_ACC1(0,-4)])
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(-0.113446470384241*D00_B0[OPS_ACC1(0,2)] - 0.521455851089587*D00_B0[OPS_ACC1(0,-1)] +
      0.791245592765872*D00_B0[OPS_ACC1(0,1)] + 0.0367146847001261*D00_B0[OPS_ACC1(0,-2)] +
      0.00412637789557492*D00_B0[OPS_ACC1(0,-3)] - 0.197184333887745*D00_B0[OPS_ACC1(0,0)])
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.00932597985049999*D00_B0[OPS_ACC1(0,3)] - 0.121937153224065*D00_B0[OPS_ACC1(0,2)] -
      0.652141084861241*D00_B0[OPS_ACC1(0,-1)] + 0.727822147724592*D00_B0[OPS_ACC1(0,1)] +
      0.082033432844602*D00_B0[OPS_ACC1(0,-2)] - 0.0451033223343881*D00_B0[OPS_ACC1(0,0)])
)
: (
  
      (rc4)*inv_1*(8*D00_B0[OPS_ACC1(0,1)] + D00_B0[OPS_ACC1(0,-2)] - D00_B0[OPS_ACC1(0,2)] -
      8*D00_B0[OPS_ACC1(0,-1)])
)))))))));

    localeval_7 = (rc4)*inv_0*(8*D10_B0[OPS_ACC2(1,0)] - 8*D10_B0[OPS_ACC2(-1,0)] - D10_B0[OPS_ACC2(2,0)] +
      D10_B0[OPS_ACC2(-2,0)]);

   SD000_B0[OPS_ACC9(0,0)] = localeval_5;

   SD001_B0[OPS_ACC8(0,0)] = localeval_6;

   SD010_B0[OPS_ACC6(0,0)] = localeval_4;

   SD011_B0[OPS_ACC10(0,0)] = localeval_3;

   SD100_B0[OPS_ACC7(0,0)] = localeval_7;

   SD101_B0[OPS_ACC5(0,0)] = localeval_0;

   SD110_B0[OPS_ACC11(0,0)] = localeval_2;

   SD111_B0[OPS_ACC4(0,0)] = localeval_1;

}

 void opensbliblock00Kernel025(const double *x0_B0, double *rhou0_B0, double *rhoE_B0, double *rhou1_B0, double
*rho_B0)
{
   double T_above = 0.0;
   double u13 = 0.0;
   double u01 = 0.0;
   double T1 = 0.0;
   double Pwall = 0.0;
   double rho_halo_3 = 0.0;
   double u11 = 0.0;
   double rho_halo_1 = 0.0;
   double T3 = 0.0;
   double x0 = 0.0;
   double u12 = 0.0;
   double u03 = 0.0;
   double T2 = 0.0;
   double u02 = 0.0;
   double rho_halo_2 = 0.0;
   x0 = x0_B0[OPS_ACC0(0,0)];

   rhou0_B0[OPS_ACC1(0,0)] = 0.0;

   rhou1_B0[OPS_ACC3(0,0)] = 0.0;

   rhoE_B0[OPS_ACC2(0,0)] = Twall*rcinv5*rcinv6*rho_B0[OPS_ACC4(0,0)]/(gama - 1);

    Pwall = (gama - 1)*(-((rc7)*pow(rhou0_B0[OPS_ACC1(0,0)], 2) + (rc7)*pow(rhou1_B0[OPS_ACC3(0,0)],
      2))/rho_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC2(0,0)]);

   u01 = rhou0_B0[OPS_ACC1(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u02 = rhou0_B0[OPS_ACC1(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u03 = rhou0_B0[OPS_ACC1(0,3)]/rho_B0[OPS_ACC4(0,3)];

   u11 = rhou1_B0[OPS_ACC3(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u12 = rhou1_B0[OPS_ACC3(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u13 = rhou1_B0[OPS_ACC3(0,3)]/rho_B0[OPS_ACC4(0,3)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc7)*pow(rhou0_B0[OPS_ACC1(0,1)], 2) + (rc7)*pow(rhou1_B0[OPS_ACC3(0,1)],
      2))/rho_B0[OPS_ACC4(0,1)] + rhoE_B0[OPS_ACC2(0,1)])/rho_B0[OPS_ACC4(0,1)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u12;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv8*Pwall + (rc7)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC4(0,-3)] = rho_halo_3;

   rhou0_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u12;

   rhou0_B0[OPS_ACC1(0,-3)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC3(0,-3)] = -rho_halo_3*u13;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv8*Pwall + (rc7)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv8*Pwall + (rc7)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0[OPS_ACC2(0,-3)] = rcinv8*Pwall + (rc7)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}

void opensbliblock00Kernel026(double *rhou0_B0, double *rhou1_B0, double *rho_B0, double *rhoE_B0)
{
   double u0 = 0.0;
   double r = 0.0;
   double p = 0.0;
   double u1 = 0.0;
   u0 = 1.00000000000000;

   u1 = 0.0;

   p = 1/(pow(Minf, 2)*gama);

   r = pow(Minf, 2)*gama*p;

   rho_B0[OPS_ACC2(0,0)] = r;

   rhou0_B0[OPS_ACC0(0,0)] = r*u0;

   rhou1_B0[OPS_ACC1(0,0)] = r*u1;

   rhoE_B0[OPS_ACC3(0,0)] = p/(gama - 1) + 0.5*r*(pow(u0, 2) + pow(u1, 2));

}

void opensbliblock00Kernel004(const double *rhou0_B0, const double *rho_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel007(const double *rhou1_B0, const double *rho_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

 void opensbliblock00Kernel015(const double *u1_B0, const double *u0_B0, const double *rho_B0, const double *rhoE_B0,
double *p_B0)
{
    p_B0[OPS_ACC4(0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC3(0,0)] - rc7*rho_B0[OPS_ACC2(0,0)]*pow(u0_B0[OPS_ACC1(0,0)], 2) -
      rc7*rho_B0[OPS_ACC2(0,0)]*pow(u1_B0[OPS_ACC0(0,0)], 2));

}

void opensbliblock00Kernel010(const double *rho_B0, const double *p_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

void opensbliblock00Kernel017(const double *T_B0, double *mu_B0)
{
   mu_B0[OPS_ACC1(0,0)] = pow(T_B0[OPS_ACC0(0,0)], 0.7);

}

void opensbliblock00Kernel003(const double *u0_B0, double *wk0_B0)
{
    wk0_B0[OPS_ACC1(0,0)] = (rc4)*inv_0*(-8*u0_B0[OPS_ACC0(-1,0)] + 8*u0_B0[OPS_ACC0(1,0)] + u0_B0[OPS_ACC0(-2,0)] -
      u0_B0[OPS_ACC0(2,0)]);

}

void opensbliblock00Kernel005(const double *u0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_1*(-8.34657956545823e-15*u0_B0[OPS_ACC0(0,4)] +
      0.333333333333356*u0_B0[OPS_ACC0(0,3)] - 1.50000000000003*u0_B0[OPS_ACC0(0,2)] +
      3.00000000000002*u0_B0[OPS_ACC0(0,1)] + 1.06910315192207e-15*u0_B0[OPS_ACC0(0,5)] -
      1.83333333333334*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.00571369039775442*u0_B0[OPS_ACC0(0,4)] -
      0.0658051057710389*u0_B0[OPS_ACC0(0,3)] - 0.376283677513354*u0_B0[OPS_ACC0(0,-1)] +
      0.0394168524399447*u0_B0[OPS_ACC0(0,2)] + 0.719443173328855*u0_B0[OPS_ACC0(0,1)] -
      0.322484932882161*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 2) ? (
   inv_1*(-0.00412637789557492*u0_B0[OPS_ACC0(0,3)]
      + 0.113446470384241*u0_B0[OPS_ACC0(0,-2)] - 0.791245592765872*u0_B0[OPS_ACC0(0,-1)] -
      0.0367146847001261*u0_B0[OPS_ACC0(0,2)] + 0.521455851089587*u0_B0[OPS_ACC0(0,1)] +
      0.197184333887745*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*u0_B0[OPS_ACC0(0,-2)] -
      0.727822147724592*u0_B0[OPS_ACC0(0,-1)] - 0.082033432844602*u0_B0[OPS_ACC0(0,2)] -
      0.00932597985049999*u0_B0[OPS_ACC0(0,-3)] + 0.652141084861241*u0_B0[OPS_ACC0(0,1)] +
      0.0451033223343881*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*u0_B0[OPS_ACC0(0,-2)] - 3.00000000000002*u0_B0[OPS_ACC0(0,-1)] -
      0.333333333333356*u0_B0[OPS_ACC0(0,-3)] + 8.34657956545823e-15*u0_B0[OPS_ACC0(0,-4)] -
      1.06910315192207e-15*u0_B0[OPS_ACC0(0,-5)] + 1.83333333333334*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*u0_B0[OPS_ACC0(0,-2)] - 0.719443173328855*u0_B0[OPS_ACC0(0,-1)] +
      0.0658051057710389*u0_B0[OPS_ACC0(0,-3)] + 0.376283677513354*u0_B0[OPS_ACC0(0,1)] -
      0.00571369039775442*u0_B0[OPS_ACC0(0,-4)] + 0.322484932882161*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.0367146847001261*u0_B0[OPS_ACC0(0,-2)] - 0.521455851089587*u0_B0[OPS_ACC0(0,-1)] -
      0.113446470384241*u0_B0[OPS_ACC0(0,2)] + 0.00412637789557492*u0_B0[OPS_ACC0(0,-3)] +
      0.791245592765872*u0_B0[OPS_ACC0(0,1)] - 0.197184333887745*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.00932597985049999*u0_B0[OPS_ACC0(0,3)] + 0.082033432844602*u0_B0[OPS_ACC0(0,-2)] -
      0.652141084861241*u0_B0[OPS_ACC0(0,-1)] - 0.121937153224065*u0_B0[OPS_ACC0(0,2)] +
      0.727822147724592*u0_B0[OPS_ACC0(0,1)] - 0.0451033223343881*u0_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc4)*inv_1*(-8*u0_B0[OPS_ACC0(0,-1)] + u0_B0[OPS_ACC0(0,-2)] - u0_B0[OPS_ACC0(0,2)] +
      8*u0_B0[OPS_ACC0(0,1)])
)))))))));

}

void opensbliblock00Kernel006(const double *u1_B0, double *wk2_B0)
{
    wk2_B0[OPS_ACC1(0,0)] = (rc4)*inv_0*(-u1_B0[OPS_ACC0(2,0)] + u1_B0[OPS_ACC0(-2,0)] + 8*u1_B0[OPS_ACC0(1,0)] -
      8*u1_B0[OPS_ACC0(-1,0)]);

}

void opensbliblock00Kernel008(const double *u1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*u1_B0[OPS_ACC0(0,1)] -
      1.50000000000003*u1_B0[OPS_ACC0(0,2)] + 0.333333333333356*u1_B0[OPS_ACC0(0,3)] -
      8.34657956545823e-15*u1_B0[OPS_ACC0(0,4)] - 1.83333333333334*u1_B0[OPS_ACC0(0,0)] +
      1.06910315192207e-15*u1_B0[OPS_ACC0(0,5)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.719443173328855*u1_B0[OPS_ACC0(0,1)]
      + 0.0394168524399447*u1_B0[OPS_ACC0(0,2)] - 0.0658051057710389*u1_B0[OPS_ACC0(0,3)] +
      0.00571369039775442*u1_B0[OPS_ACC0(0,4)] - 0.322484932882161*u1_B0[OPS_ACC0(0,0)] -
      0.376283677513354*u1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.521455851089587*u1_B0[OPS_ACC0(0,1)] -
      0.791245592765872*u1_B0[OPS_ACC0(0,-1)] - 0.0367146847001261*u1_B0[OPS_ACC0(0,2)] -
      0.00412637789557492*u1_B0[OPS_ACC0(0,3)] + 0.197184333887745*u1_B0[OPS_ACC0(0,0)] +
      0.113446470384241*u1_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.652141084861241*u1_B0[OPS_ACC0(0,1)] +
      0.121937153224065*u1_B0[OPS_ACC0(0,-2)] - 0.082033432844602*u1_B0[OPS_ACC0(0,2)] -
      0.00932597985049999*u1_B0[OPS_ACC0(0,-3)] + 0.0451033223343881*u1_B0[OPS_ACC0(0,0)] -
      0.727822147724592*u1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-3.00000000000002*u1_B0[OPS_ACC0(0,-1)] - 1.06910315192207e-15*u1_B0[OPS_ACC0(0,-5)] +
      8.34657956545823e-15*u1_B0[OPS_ACC0(0,-4)] - 0.333333333333356*u1_B0[OPS_ACC0(0,-3)] +
      1.83333333333334*u1_B0[OPS_ACC0(0,0)] + 1.50000000000003*u1_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 2) ?
      (
   inv_1*(0.376283677513354*u1_B0[OPS_ACC0(0,1)] - 0.719443173328855*u1_B0[OPS_ACC0(0,-1)] -
      0.00571369039775442*u1_B0[OPS_ACC0(0,-4)] + 0.0658051057710389*u1_B0[OPS_ACC0(0,-3)] +
      0.322484932882161*u1_B0[OPS_ACC0(0,0)] - 0.0394168524399447*u1_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.791245592765872*u1_B0[OPS_ACC0(0,1)] + 0.0367146847001261*u1_B0[OPS_ACC0(0,-2)] -
      0.113446470384241*u1_B0[OPS_ACC0(0,2)] + 0.00412637789557492*u1_B0[OPS_ACC0(0,-3)] -
      0.197184333887745*u1_B0[OPS_ACC0(0,0)] - 0.521455851089587*u1_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.727822147724592*u1_B0[OPS_ACC0(0,1)] + 0.082033432844602*u1_B0[OPS_ACC0(0,-2)] -
      0.121937153224065*u1_B0[OPS_ACC0(0,2)] + 0.00932597985049999*u1_B0[OPS_ACC0(0,3)] -
      0.0451033223343881*u1_B0[OPS_ACC0(0,0)] - 0.652141084861241*u1_B0[OPS_ACC0(0,-1)])
)
: (
  
      (rc4)*inv_1*(8*u1_B0[OPS_ACC0(0,1)] - u1_B0[OPS_ACC0(0,2)] + u1_B0[OPS_ACC0(0,-2)] -
      8*u1_B0[OPS_ACC0(0,-1)])
)))))))));

}

void opensbliblock00Kernel009(const double *T_B0, double *wk4_B0)
{
    wk4_B0[OPS_ACC1(0,0)] = (rc4)*inv_0*(T_B0[OPS_ACC0(-2,0)] - T_B0[OPS_ACC0(2,0)] + 8*T_B0[OPS_ACC0(1,0)] -
      8*T_B0[OPS_ACC0(-1,0)]);

}

void opensbliblock00Kernel011(const double *T_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*T_B0[OPS_ACC0(0,1)] -
      8.34657956545823e-15*T_B0[OPS_ACC0(0,4)] - 1.83333333333334*T_B0[OPS_ACC0(0,0)] +
      0.333333333333356*T_B0[OPS_ACC0(0,3)] - 1.50000000000003*T_B0[OPS_ACC0(0,2)] +
      1.06910315192207e-15*T_B0[OPS_ACC0(0,5)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.719443173328855*T_B0[OPS_ACC0(0,1)] +
      0.00571369039775442*T_B0[OPS_ACC0(0,4)] - 0.322484932882161*T_B0[OPS_ACC0(0,0)] -
      0.0658051057710389*T_B0[OPS_ACC0(0,3)] + 0.0394168524399447*T_B0[OPS_ACC0(0,2)] -
      0.376283677513354*T_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.521455851089587*T_B0[OPS_ACC0(0,1)] +
      0.197184333887745*T_B0[OPS_ACC0(0,0)] - 0.00412637789557492*T_B0[OPS_ACC0(0,3)] -
      0.0367146847001261*T_B0[OPS_ACC0(0,2)] - 0.791245592765872*T_B0[OPS_ACC0(0,-1)] +
      0.113446470384241*T_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.652141084861241*T_B0[OPS_ACC0(0,1)] -
      0.00932597985049999*T_B0[OPS_ACC0(0,-3)] + 0.0451033223343881*T_B0[OPS_ACC0(0,0)] -
      0.082033432844602*T_B0[OPS_ACC0(0,2)] + 0.121937153224065*T_B0[OPS_ACC0(0,-2)] -
      0.727822147724592*T_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-0.333333333333356*T_B0[OPS_ACC0(0,-3)] + 1.83333333333334*T_B0[OPS_ACC0(0,0)] +
      8.34657956545823e-15*T_B0[OPS_ACC0(0,-4)] - 1.06910315192207e-15*T_B0[OPS_ACC0(0,-5)] -
      3.00000000000002*T_B0[OPS_ACC0(0,-1)] + 1.50000000000003*T_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (

        inv_1*(0.376283677513354*T_B0[OPS_ACC0(0,1)] + 0.0658051057710389*T_B0[OPS_ACC0(0,-3)] +
      0.322484932882161*T_B0[OPS_ACC0(0,0)] - 0.00571369039775442*T_B0[OPS_ACC0(0,-4)] -
      0.719443173328855*T_B0[OPS_ACC0(0,-1)] - 0.0394168524399447*T_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 3) ?
      (
   inv_1*(0.791245592765872*T_B0[OPS_ACC0(0,1)] + 0.00412637789557492*T_B0[OPS_ACC0(0,-3)] -
      0.197184333887745*T_B0[OPS_ACC0(0,0)] - 0.113446470384241*T_B0[OPS_ACC0(0,2)] +
      0.0367146847001261*T_B0[OPS_ACC0(0,-2)] - 0.521455851089587*T_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.727822147724592*T_B0[OPS_ACC0(0,1)] - 0.0451033223343881*T_B0[OPS_ACC0(0,0)] +
      0.00932597985049999*T_B0[OPS_ACC0(0,3)] - 0.121937153224065*T_B0[OPS_ACC0(0,2)] +
      0.082033432844602*T_B0[OPS_ACC0(0,-2)] - 0.652141084861241*T_B0[OPS_ACC0(0,-1)])
)
: (
  
      (rc4)*inv_1*(8*T_B0[OPS_ACC0(0,1)] - T_B0[OPS_ACC0(0,2)] + T_B0[OPS_ACC0(0,-2)] -
      8*T_B0[OPS_ACC0(0,-1)])
)))))))));

}

 void opensbliblock00Kernel021(const double *rhoE_B0, const double *D11_B0, const double *rho_B0, const double *D00_B0,
const double *D10_B0, const double *wk0_B0, const double *rhou0_B0, const double *wk1_B0, const double *rhou1_B0, const
double *wk3_B0, const double *D01_B0, const double *wk2_B0, const double *u0_B0, const double *u1_B0, const double
*p_B0, double *Residual1_B0, double *Residual0_B0, double *Residual3_B0, double *Residual2_B0, const int *idx)
{
   double localeval_16 = 0.0;
   double localeval_29 = 0.0;
   double localeval_11 = 0.0;
   double localeval_8 = 0.0;
   double localeval_15 = 0.0;
   double localeval_19 = 0.0;
   double localeval_6 = 0.0;
   double localeval_3 = 0.0;
   double localeval_4 = 0.0;
   double localeval_17 = 0.0;
   double localeval_21 = 0.0;
   double localeval_24 = 0.0;
   double localeval_25 = 0.0;
   double localeval_9 = 0.0;
   double localeval_10 = 0.0;
   double localeval_13 = 0.0;
   double localeval_2 = 0.0;
   double localeval_20 = 0.0;
   double localeval_22 = 0.0;
   double localeval_0 = 0.0;
   double localeval_5 = 0.0;
   double localeval_1 = 0.0;
   double localeval_27 = 0.0;
   double localeval_18 = 0.0;
   double localeval_23 = 0.0;
   double localeval_12 = 0.0;
   double localeval_7 = 0.0;
   double localeval_26 = 0.0;
   double localeval_28 = 0.0;
   double localeval_14 = 0.0;
    localeval_0 = (rc4)*inv_0*(-8*rhoE_B0[OPS_ACC0(-1,0)] + 8*rhoE_B0[OPS_ACC0(1,0)] - rhoE_B0[OPS_ACC0(2,0)] +
      rhoE_B0[OPS_ACC0(-2,0)]);

    localeval_1 = (rc4)*inv_0*(-rhou1_B0[OPS_ACC8(2,0)] + rhou1_B0[OPS_ACC8(-2,0)] - 8*rhou1_B0[OPS_ACC8(-1,0)] +
      8*rhou1_B0[OPS_ACC8(1,0)]);

    localeval_2 = (rc4)*inv_0*(-8*rhou0_B0[OPS_ACC6(-1,0)] + 8*rhou0_B0[OPS_ACC6(1,0)] + rhou0_B0[OPS_ACC6(-2,0)] -
      rhou0_B0[OPS_ACC6(2,0)]);

    localeval_3 = (rc4)*inv_0*(p_B0[OPS_ACC14(-2,0)]*u0_B0[OPS_ACC12(-2,0)] -
      8*p_B0[OPS_ACC14(-1,0)]*u0_B0[OPS_ACC12(-1,0)] - p_B0[OPS_ACC14(2,0)]*u0_B0[OPS_ACC12(2,0)] +
      8*p_B0[OPS_ACC14(1,0)]*u0_B0[OPS_ACC12(1,0)]);

    localeval_4 = (rc4)*inv_0*(-rhoE_B0[OPS_ACC0(2,0)]*u0_B0[OPS_ACC12(2,0)] +
      8*rhoE_B0[OPS_ACC0(1,0)]*u0_B0[OPS_ACC12(1,0)] + rhoE_B0[OPS_ACC0(-2,0)]*u0_B0[OPS_ACC12(-2,0)] -
      8*rhoE_B0[OPS_ACC0(-1,0)]*u0_B0[OPS_ACC12(-1,0)]);

    localeval_5 = (rc4)*inv_0*(-8*p_B0[OPS_ACC14(-1,0)] + 8*p_B0[OPS_ACC14(1,0)] - p_B0[OPS_ACC14(2,0)] +
      p_B0[OPS_ACC14(-2,0)]);

    localeval_6 = (rc4)*inv_0*(-rho_B0[OPS_ACC2(2,0)]*u1_B0[OPS_ACC13(2,0)] +
      rho_B0[OPS_ACC2(-2,0)]*u1_B0[OPS_ACC13(-2,0)] - 8*rho_B0[OPS_ACC2(-1,0)]*u1_B0[OPS_ACC13(-1,0)] +
      8*rho_B0[OPS_ACC2(1,0)]*u1_B0[OPS_ACC13(1,0)]);

    localeval_7 = (rc4)*inv_0*(-rho_B0[OPS_ACC2(2,0)] + 8*rho_B0[OPS_ACC2(1,0)] + rho_B0[OPS_ACC2(-2,0)] -
      8*rho_B0[OPS_ACC2(-1,0)]);

    localeval_8 = (rc4)*inv_0*(rhou0_B0[OPS_ACC6(-2,0)]*u1_B0[OPS_ACC13(-2,0)] -
      8*rhou0_B0[OPS_ACC6(-1,0)]*u1_B0[OPS_ACC13(-1,0)] - rhou0_B0[OPS_ACC6(2,0)]*u1_B0[OPS_ACC13(2,0)] +
      8*rhou0_B0[OPS_ACC6(1,0)]*u1_B0[OPS_ACC13(1,0)]);

    localeval_9 = (rc4)*inv_0*(-rhoE_B0[OPS_ACC0(2,0)]*u1_B0[OPS_ACC13(2,0)] +
      8*rhoE_B0[OPS_ACC0(1,0)]*u1_B0[OPS_ACC13(1,0)] + rhoE_B0[OPS_ACC0(-2,0)]*u1_B0[OPS_ACC13(-2,0)] -
      8*rhoE_B0[OPS_ACC0(-1,0)]*u1_B0[OPS_ACC13(-1,0)]);

    localeval_10 = (rc4)*inv_0*(rhou1_B0[OPS_ACC8(-2,0)]*u0_B0[OPS_ACC12(-2,0)] -
      8*rhou1_B0[OPS_ACC8(-1,0)]*u0_B0[OPS_ACC12(-1,0)] - rhou1_B0[OPS_ACC8(2,0)]*u0_B0[OPS_ACC12(2,0)] +
      8*rhou1_B0[OPS_ACC8(1,0)]*u0_B0[OPS_ACC12(1,0)]);

    localeval_11 = (rc4)*inv_0*(rhou0_B0[OPS_ACC6(-2,0)]*u0_B0[OPS_ACC12(-2,0)] -
      8*rhou0_B0[OPS_ACC6(-1,0)]*u0_B0[OPS_ACC12(-1,0)] - rhou0_B0[OPS_ACC6(2,0)]*u0_B0[OPS_ACC12(2,0)] +
      8*rhou0_B0[OPS_ACC6(1,0)]*u0_B0[OPS_ACC12(1,0)]);

    localeval_12 = (rc4)*inv_0*(p_B0[OPS_ACC14(-2,0)]*u1_B0[OPS_ACC13(-2,0)] -
      8*p_B0[OPS_ACC14(-1,0)]*u1_B0[OPS_ACC13(-1,0)] - p_B0[OPS_ACC14(2,0)]*u1_B0[OPS_ACC13(2,0)] +
      8*p_B0[OPS_ACC14(1,0)]*u1_B0[OPS_ACC13(1,0)]);

    localeval_13 = (rc4)*inv_0*(-rho_B0[OPS_ACC2(2,0)]*u0_B0[OPS_ACC12(2,0)] +
      rho_B0[OPS_ACC2(-2,0)]*u0_B0[OPS_ACC12(-2,0)] - 8*rho_B0[OPS_ACC2(-1,0)]*u0_B0[OPS_ACC12(-1,0)] +
      8*rho_B0[OPS_ACC2(1,0)]*u0_B0[OPS_ACC12(1,0)]);

    localeval_14 = (rc4)*inv_0*(rhou1_B0[OPS_ACC8(-2,0)]*u1_B0[OPS_ACC13(-2,0)] -
      8*rhou1_B0[OPS_ACC8(-1,0)]*u1_B0[OPS_ACC13(-1,0)] - rhou1_B0[OPS_ACC8(2,0)]*u1_B0[OPS_ACC13(2,0)] +
      8*rhou1_B0[OPS_ACC8(1,0)]*u1_B0[OPS_ACC13(1,0)]);

    localeval_15 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.333333333333356*rhou1_B0[OPS_ACC8(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      1.83333333333334*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,5)]*u0_B0[OPS_ACC12(0,5)] +
      3.00000000000002*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] -
      0.376283677513354*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,3)]*u0_B0[OPS_ACC12(0,3)] +
      0.00571369039775442*rhou1_B0[OPS_ACC8(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      0.322484932882161*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.719443173328855*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.0367146847001261*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.113446470384241*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.791245592765872*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.00412637789557492*rhou1_B0[OPS_ACC8(0,3)]*u0_B0[OPS_ACC12(0,3)] +
      0.197184333887745*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.521455851089587*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.121937153224065*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.727822147724592*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.00932597985049999*rhou1_B0[OPS_ACC8(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.652141084861241*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      3.00000000000002*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.333333333333356*rhou1_B0[OPS_ACC8(0,-3)]*u0_B0[OPS_ACC12(0,-3)] -
      1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,-5)]*u0_B0[OPS_ACC12(0,-5)] +
      1.83333333333334*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,-4)]*u0_B0[OPS_ACC12(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.719443173328855*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.322484932882161*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00571369039775442*rhou1_B0[OPS_ACC8(0,-4)]*u0_B0[OPS_ACC12(0,-4)] +
      0.376283677513354*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.0367146847001261*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.521455851089587*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.197184333887745*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.791245592765872*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.00412637789557492*rhou1_B0[OPS_ACC8(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(-0.121937153224065*rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.082033432844602*rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.652141084861241*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.00932597985049999*rhou1_B0[OPS_ACC8(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.727822147724592*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: (
  
      (rc4)*inv_1*(-rhou1_B0[OPS_ACC8(0,2)]*u0_B0[OPS_ACC12(0,2)] + rhou1_B0[OPS_ACC8(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      8*rhou1_B0[OPS_ACC8(0,-1)]*u0_B0[OPS_ACC12(0,-1)] + 8*rhou1_B0[OPS_ACC8(0,1)]*u0_B0[OPS_ACC12(0,1)])
)))))))));

    localeval_16 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou1_B0[OPS_ACC8(0,2)] +
      0.333333333333356*rhou1_B0[OPS_ACC8(0,3)] - 8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,4)] -
      1.83333333333334*rhou1_B0[OPS_ACC8(0,0)] + 1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,5)] +
      3.00000000000002*rhou1_B0[OPS_ACC8(0,1)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou1_B0[OPS_ACC8(0,2)] - 0.376283677513354*rhou1_B0[OPS_ACC8(0,-1)] -
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,3)] + 0.00571369039775442*rhou1_B0[OPS_ACC8(0,4)] -
      0.322484932882161*rhou1_B0[OPS_ACC8(0,0)] + 0.719443173328855*rhou1_B0[OPS_ACC8(0,1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.0367146847001261*rhou1_B0[OPS_ACC8(0,2)] + 0.113446470384241*rhou1_B0[OPS_ACC8(0,-2)] -
      0.791245592765872*rhou1_B0[OPS_ACC8(0,-1)] - 0.00412637789557492*rhou1_B0[OPS_ACC8(0,3)] +
      0.197184333887745*rhou1_B0[OPS_ACC8(0,0)] + 0.521455851089587*rhou1_B0[OPS_ACC8(0,1)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou1_B0[OPS_ACC8(0,2)] - 0.727822147724592*rhou1_B0[OPS_ACC8(0,-1)] +
      0.121937153224065*rhou1_B0[OPS_ACC8(0,-2)] + 0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)] +
      0.652141084861241*rhou1_B0[OPS_ACC8(0,1)] - 0.00932597985049999*rhou1_B0[OPS_ACC8(0,-3)])
)
: ((idx[1] ==
      block0np1 - 1) ? (
   inv_1*(1.50000000000003*rhou1_B0[OPS_ACC8(0,-2)] - 3.00000000000002*rhou1_B0[OPS_ACC8(0,-1)]
      - 1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,-5)] + 1.83333333333334*rhou1_B0[OPS_ACC8(0,0)] +
      8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,-4)] - 0.333333333333356*rhou1_B0[OPS_ACC8(0,-3)])
)
: ((idx[1] ==
      block0np1 - 2) ? (
   inv_1*(-0.0394168524399447*rhou1_B0[OPS_ACC8(0,-2)] -
      0.719443173328855*rhou1_B0[OPS_ACC8(0,-1)] + 0.322484932882161*rhou1_B0[OPS_ACC8(0,0)] -
      0.00571369039775442*rhou1_B0[OPS_ACC8(0,-4)] + 0.376283677513354*rhou1_B0[OPS_ACC8(0,1)] +
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,-3)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rhou1_B0[OPS_ACC8(0,2)] - 0.521455851089587*rhou1_B0[OPS_ACC8(0,-1)] +
      0.0367146847001261*rhou1_B0[OPS_ACC8(0,-2)] - 0.197184333887745*rhou1_B0[OPS_ACC8(0,0)] +
      0.791245592765872*rhou1_B0[OPS_ACC8(0,1)] + 0.00412637789557492*rhou1_B0[OPS_ACC8(0,-3)])
)
: ((idx[1] ==
      block0np1 - 4) ? (
   inv_1*(-0.121937153224065*rhou1_B0[OPS_ACC8(0,2)] +
      0.082033432844602*rhou1_B0[OPS_ACC8(0,-2)] - 0.652141084861241*rhou1_B0[OPS_ACC8(0,-1)] +
      0.00932597985049999*rhou1_B0[OPS_ACC8(0,3)] - 0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)] +
      0.727822147724592*rhou1_B0[OPS_ACC8(0,1)])
)
: (
   (rc4)*inv_1*(-rhou1_B0[OPS_ACC8(0,2)] +
      rhou1_B0[OPS_ACC8(0,-2)] + 8*rhou1_B0[OPS_ACC8(0,1)] - 8*rhou1_B0[OPS_ACC8(0,-1)])
)))))))));

    localeval_17 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      3.00000000000002*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,5)]*u0_B0[OPS_ACC12(0,5)] -
      1.83333333333334*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,4)]*u0_B0[OPS_ACC12(0,4)] +
      0.333333333333356*rhou0_B0[OPS_ACC6(0,3)]*u0_B0[OPS_ACC12(0,3)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.719443173328855*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.376283677513354*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.322484932882161*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00571369039775442*rhou0_B0[OPS_ACC6(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      0.0658051057710389*rhou0_B0[OPS_ACC6(0,3)]*u0_B0[OPS_ACC12(0,3)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.0367146847001261*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.521455851089587*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.113446470384241*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.791245592765872*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00412637789557492*rhou0_B0[OPS_ACC6(0,3)]*u0_B0[OPS_ACC12(0,3)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.652141084861241*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.121937153224065*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.727822147724592*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00932597985049999*rhou0_B0[OPS_ACC6(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,-4)]*u0_B0[OPS_ACC12(0,-4)] -
      1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,-5)]*u0_B0[OPS_ACC12(0,-5)] +
      1.50000000000003*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      3.00000000000002*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      1.83333333333334*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.333333333333356*rhou0_B0[OPS_ACC6(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.00571369039775442*rhou0_B0[OPS_ACC6(0,-4)]*u0_B0[OPS_ACC12(0,-4)] +
      0.376283677513354*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.0394168524399447*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.719443173328855*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.322484932882161*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.0658051057710389*rhou0_B0[OPS_ACC6(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.791245592765872*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.0367146847001261*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.521455851089587*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00412637789557492*rhou0_B0[OPS_ACC6(0,-3)]*u0_B0[OPS_ACC12(0,-3)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(-0.121937153224065*rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.727822147724592*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.082033432844602*rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.652141084861241*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00932597985049999*rhou0_B0[OPS_ACC6(0,3)]*u0_B0[OPS_ACC12(0,3)])
)
: (
  
      (rc4)*inv_1*(-rhou0_B0[OPS_ACC6(0,2)]*u0_B0[OPS_ACC12(0,2)] + 8*rhou0_B0[OPS_ACC6(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      rhou0_B0[OPS_ACC6(0,-2)]*u0_B0[OPS_ACC12(0,-2)] - 8*rhou0_B0[OPS_ACC6(0,-1)]*u0_B0[OPS_ACC12(0,-1)])
)))))))));

    localeval_18 = ((idx[1] == 0) ? (
   inv_1*(1.06910315192207e-15*p_B0[OPS_ACC14(0,5)]*u1_B0[OPS_ACC13(0,5)] -
      1.50000000000003*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.333333333333356*p_B0[OPS_ACC14(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      1.83333333333334*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      8.34657956545823e-15*p_B0[OPS_ACC14(0,4)]*u1_B0[OPS_ACC13(0,4)] +
      3.00000000000002*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(-0.376283677513354*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0394168524399447*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      0.0658051057710389*p_B0[OPS_ACC14(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.322484932882161*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00571369039775442*p_B0[OPS_ACC14(0,4)]*u1_B0[OPS_ACC13(0,4)] +
      0.719443173328855*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.113446470384241*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.791245592765872*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.0367146847001261*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      0.00412637789557492*p_B0[OPS_ACC14(0,3)]*u1_B0[OPS_ACC13(0,3)] +
      0.197184333887745*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.521455851089587*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.121937153224065*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.727822147724592*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.082033432844602*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.0451033223343881*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00932597985049999*p_B0[OPS_ACC14(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.652141084861241*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      3.00000000000002*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      1.06910315192207e-15*p_B0[OPS_ACC14(0,-5)]*u1_B0[OPS_ACC13(0,-5)] +
      8.34657956545823e-15*p_B0[OPS_ACC14(0,-4)]*u1_B0[OPS_ACC13(0,-4)] +
      1.83333333333334*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.333333333333356*p_B0[OPS_ACC14(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.719443173328855*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.00571369039775442*p_B0[OPS_ACC14(0,-4)]*u1_B0[OPS_ACC13(0,-4)] +
      0.322484932882161*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.0658051057710389*p_B0[OPS_ACC14(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.376283677513354*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(0.0367146847001261*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.521455851089587*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.113446470384241*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      0.197184333887745*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00412637789557492*p_B0[OPS_ACC14(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.791245592765872*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.082033432844602*p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.652141084861241*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.121937153224065*p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.00932597985049999*p_B0[OPS_ACC14(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.0451033223343881*p_B0[OPS_ACC14(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.727822147724592*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: (
  
      (rc4)*inv_1*(p_B0[OPS_ACC14(0,-2)]*u1_B0[OPS_ACC13(0,-2)] - 8*p_B0[OPS_ACC14(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      p_B0[OPS_ACC14(0,2)]*u1_B0[OPS_ACC13(0,2)] + 8*p_B0[OPS_ACC14(0,1)]*u1_B0[OPS_ACC13(0,1)])
)))))))));

    localeval_19 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*rhoE_B0[OPS_ACC0(0,1)] +
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,5)] - 1.83333333333334*rhoE_B0[OPS_ACC0(0,0)] -
      8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,4)] + 0.333333333333356*rhoE_B0[OPS_ACC0(0,3)] -
      1.50000000000003*rhoE_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.719443173328855*rhoE_B0[OPS_ACC0(0,1)]
      - 0.322484932882161*rhoE_B0[OPS_ACC0(0,0)] + 0.00571369039775442*rhoE_B0[OPS_ACC0(0,4)] -
      0.0658051057710389*rhoE_B0[OPS_ACC0(0,3)] - 0.376283677513354*rhoE_B0[OPS_ACC0(0,-1)] +
      0.0394168524399447*rhoE_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.521455851089587*rhoE_B0[OPS_ACC0(0,1)] + 0.197184333887745*rhoE_B0[OPS_ACC0(0,0)] -
      0.00412637789557492*rhoE_B0[OPS_ACC0(0,3)] - 0.791245592765872*rhoE_B0[OPS_ACC0(0,-1)] +
      0.113446470384241*rhoE_B0[OPS_ACC0(0,-2)] - 0.0367146847001261*rhoE_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.00932597985049999*rhoE_B0[OPS_ACC0(0,-3)] + 0.652141084861241*rhoE_B0[OPS_ACC0(0,1)] +
      0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)] - 0.727822147724592*rhoE_B0[OPS_ACC0(0,-1)] +
      0.121937153224065*rhoE_B0[OPS_ACC0(0,-2)] - 0.082033432844602*rhoE_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-0.333333333333356*rhoE_B0[OPS_ACC0(0,-3)] + 8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,-4)] -
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,-5)] + 1.83333333333334*rhoE_B0[OPS_ACC0(0,0)] -
      3.00000000000002*rhoE_B0[OPS_ACC0(0,-1)] + 1.50000000000003*rhoE_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(0.0658051057710389*rhoE_B0[OPS_ACC0(0,-3)] + 0.376283677513354*rhoE_B0[OPS_ACC0(0,1)] -
      0.00571369039775442*rhoE_B0[OPS_ACC0(0,-4)] + 0.322484932882161*rhoE_B0[OPS_ACC0(0,0)] -
      0.719443173328855*rhoE_B0[OPS_ACC0(0,-1)] - 0.0394168524399447*rhoE_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(0.00412637789557492*rhoE_B0[OPS_ACC0(0,-3)] + 0.791245592765872*rhoE_B0[OPS_ACC0(0,1)] -
      0.197184333887745*rhoE_B0[OPS_ACC0(0,0)] - 0.521455851089587*rhoE_B0[OPS_ACC0(0,-1)] +
      0.0367146847001261*rhoE_B0[OPS_ACC0(0,-2)] - 0.113446470384241*rhoE_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.727822147724592*rhoE_B0[OPS_ACC0(0,1)] - 0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)] -
      0.652141084861241*rhoE_B0[OPS_ACC0(0,-1)] + 0.00932597985049999*rhoE_B0[OPS_ACC0(0,3)] +
      0.082033432844602*rhoE_B0[OPS_ACC0(0,-2)] - 0.121937153224065*rhoE_B0[OPS_ACC0(0,2)])
)
: (
  
      (rc4)*inv_1*(-8*rhoE_B0[OPS_ACC0(0,-1)] + rhoE_B0[OPS_ACC0(0,-2)] - rhoE_B0[OPS_ACC0(0,2)] +
      8*rhoE_B0[OPS_ACC0(0,1)])
)))))))));

    localeval_20 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      3.00000000000002*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,5)]*u1_B0[OPS_ACC13(0,5)] -
      1.83333333333334*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,4)]*u1_B0[OPS_ACC13(0,4)] +
      0.333333333333356*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC13(0,3)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.719443173328855*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.376283677513354*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.322484932882161*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00571369039775442*rhou0_B0[OPS_ACC6(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      0.0658051057710389*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC13(0,3)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.0367146847001261*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.521455851089587*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.113446470384241*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.791245592765872*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00412637789557492*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC13(0,3)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.652141084861241*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.121937153224065*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.727822147724592*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00932597985049999*rhou0_B0[OPS_ACC6(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,-4)]*u1_B0[OPS_ACC13(0,-4)] -
      1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,-5)]*u1_B0[OPS_ACC13(0,-5)] +
      1.50000000000003*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      3.00000000000002*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      1.83333333333334*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.333333333333356*rhou0_B0[OPS_ACC6(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.00571369039775442*rhou0_B0[OPS_ACC6(0,-4)]*u1_B0[OPS_ACC13(0,-4)] +
      0.376283677513354*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.0394168524399447*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.719443173328855*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.322484932882161*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.0658051057710389*rhou0_B0[OPS_ACC6(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.791245592765872*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.0367146847001261*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.521455851089587*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00412637789557492*rhou0_B0[OPS_ACC6(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(-0.121937153224065*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.727822147724592*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.082033432844602*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.652141084861241*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00932597985049999*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC13(0,3)])
)
: (
  
      (rc4)*inv_1*(-rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC13(0,2)] + 8*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC13(0,-2)] - 8*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC13(0,-1)])
)))))))));

    localeval_21 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,5)]*u1_B0[OPS_ACC13(0,5)] -
      1.50000000000003*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      1.83333333333334*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.333333333333356*rhoE_B0[OPS_ACC0(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,4)]*u1_B0[OPS_ACC13(0,4)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.719443173328855*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.322484932882161*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00571369039775442*rhoE_B0[OPS_ACC0(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      0.0658051057710389*rhoE_B0[OPS_ACC0(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.376283677513354*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0394168524399447*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.521455851089587*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.197184333887745*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00412637789557492*rhoE_B0[OPS_ACC0(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.791245592765872*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.113446470384241*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.0367146847001261*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.00932597985049999*rhoE_B0[OPS_ACC0(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.652141084861241*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.727822147724592*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.121937153224065*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.082033432844602*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-0.333333333333356*rhoE_B0[OPS_ACC0(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,-4)]*u1_B0[OPS_ACC13(0,-4)] -
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,-5)]*u1_B0[OPS_ACC13(0,-5)] +
      1.83333333333334*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      3.00000000000002*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      1.50000000000003*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(0.0658051057710389*rhoE_B0[OPS_ACC0(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.376283677513354*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.00571369039775442*rhoE_B0[OPS_ACC0(0,-4)]*u1_B0[OPS_ACC13(0,-4)] +
      0.322484932882161*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.719443173328855*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.0394168524399447*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(0.00412637789557492*rhoE_B0[OPS_ACC0(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.791245592765872*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.197184333887745*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.521455851089587*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0367146847001261*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.113446470384241*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.727822147724592*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.00932597985049999*rhoE_B0[OPS_ACC0(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.652141084861241*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.082033432844602*rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.121937153224065*rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)
: (
  
      (rc4)*inv_1*(8*rhoE_B0[OPS_ACC0(0,1)]*u1_B0[OPS_ACC13(0,1)] - 8*rhoE_B0[OPS_ACC0(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      rhoE_B0[OPS_ACC0(0,-2)]*u1_B0[OPS_ACC13(0,-2)] - rhoE_B0[OPS_ACC0(0,2)]*u1_B0[OPS_ACC13(0,2)])
)))))))));

    localeval_22 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*rho_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      1.50000000000003*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      1.06910315192207e-15*rho_B0[OPS_ACC2(0,5)]*u0_B0[OPS_ACC12(0,5)] +
      3.00000000000002*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      8.34657956545823e-15*rho_B0[OPS_ACC2(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      1.83333333333334*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(-0.0658051057710389*rho_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC12(0,3)] +
      0.0394168524399447*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] -
      0.376283677513354*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.719443173328855*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.00571369039775442*rho_B0[OPS_ACC2(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      0.322484932882161*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*rho_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.0367146847001261*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.113446470384241*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] +
      0.521455851089587*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.791245592765872*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.197184333887745*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.121937153224065*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] +
      0.652141084861241*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.727822147724592*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.00932597985049999*rho_B0[OPS_ACC2(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.0451033223343881*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-1.06910315192207e-15*rho_B0[OPS_ACC2(0,-5)]*u0_B0[OPS_ACC12(0,-5)] +
      1.50000000000003*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      3.00000000000002*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.333333333333356*rho_B0[OPS_ACC2(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      1.83333333333334*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      8.34657956545823e-15*rho_B0[OPS_ACC2(0,-4)]*u0_B0[OPS_ACC12(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] +
      0.376283677513354*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.719443173328855*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.0658051057710389*rho_B0[OPS_ACC2(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.322484932882161*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00571369039775442*rho_B0[OPS_ACC2(0,-4)]*u0_B0[OPS_ACC12(0,-4)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.0367146847001261*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] +
      0.791245592765872*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.521455851089587*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.00412637789557492*rho_B0[OPS_ACC2(0,-3)]*u0_B0[OPS_ACC12(0,-3)] -
      0.197184333887745*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.00932597985049999*rho_B0[OPS_ACC2(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.121937153224065*rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.082033432844602*rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] +
      0.727822147724592*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.652141084861241*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.0451033223343881*rho_B0[OPS_ACC2(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: (
  
      (rc4)*inv_1*(-rho_B0[OPS_ACC2(0,2)]*u0_B0[OPS_ACC12(0,2)] + rho_B0[OPS_ACC2(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      8*rho_B0[OPS_ACC2(0,-1)]*u0_B0[OPS_ACC12(0,-1)] + 8*rho_B0[OPS_ACC2(0,1)]*u0_B0[OPS_ACC12(0,1)])
)))))))));

    localeval_23 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou0_B0[OPS_ACC6(0,2)] +
      3.00000000000002*rhou0_B0[OPS_ACC6(0,1)] + 1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,5)] -
      1.83333333333334*rhou0_B0[OPS_ACC6(0,0)] - 8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,4)] +
      0.333333333333356*rhou0_B0[OPS_ACC6(0,3)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou0_B0[OPS_ACC6(0,2)] + 0.719443173328855*rhou0_B0[OPS_ACC6(0,1)] -
      0.376283677513354*rhou0_B0[OPS_ACC6(0,-1)] - 0.322484932882161*rhou0_B0[OPS_ACC6(0,0)] +
      0.00571369039775442*rhou0_B0[OPS_ACC6(0,4)] - 0.0658051057710389*rhou0_B0[OPS_ACC6(0,3)])
)
: ((idx[1] == 2) ? (
 
       inv_1*(-0.0367146847001261*rhou0_B0[OPS_ACC6(0,2)] + 0.521455851089587*rhou0_B0[OPS_ACC6(0,1)] +
      0.113446470384241*rhou0_B0[OPS_ACC6(0,-2)] - 0.791245592765872*rhou0_B0[OPS_ACC6(0,-1)] +
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)] - 0.00412637789557492*rhou0_B0[OPS_ACC6(0,3)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou0_B0[OPS_ACC6(0,2)] + 0.652141084861241*rhou0_B0[OPS_ACC6(0,1)] +
      0.121937153224065*rhou0_B0[OPS_ACC6(0,-2)] - 0.727822147724592*rhou0_B0[OPS_ACC6(0,-1)] +
      0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)] - 0.00932597985049999*rhou0_B0[OPS_ACC6(0,-3)])
)
: ((idx[1] ==
      block0np1 - 1) ? (
   inv_1*(8.34657956545823e-15*rhou0_B0[OPS_ACC6(0,-4)] -
      1.06910315192207e-15*rhou0_B0[OPS_ACC6(0,-5)] + 1.50000000000003*rhou0_B0[OPS_ACC6(0,-2)] -
      3.00000000000002*rhou0_B0[OPS_ACC6(0,-1)] + 1.83333333333334*rhou0_B0[OPS_ACC6(0,0)] -
      0.333333333333356*rhou0_B0[OPS_ACC6(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.00571369039775442*rhou0_B0[OPS_ACC6(0,-4)] + 0.376283677513354*rhou0_B0[OPS_ACC6(0,1)] -
      0.0394168524399447*rhou0_B0[OPS_ACC6(0,-2)] - 0.719443173328855*rhou0_B0[OPS_ACC6(0,-1)] +
      0.322484932882161*rhou0_B0[OPS_ACC6(0,0)] + 0.0658051057710389*rhou0_B0[OPS_ACC6(0,-3)])
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(-0.113446470384241*rhou0_B0[OPS_ACC6(0,2)] + 0.791245592765872*rhou0_B0[OPS_ACC6(0,1)] +
      0.0367146847001261*rhou0_B0[OPS_ACC6(0,-2)] - 0.521455851089587*rhou0_B0[OPS_ACC6(0,-1)] -
      0.197184333887745*rhou0_B0[OPS_ACC6(0,0)] + 0.00412637789557492*rhou0_B0[OPS_ACC6(0,-3)])
)
: ((idx[1] ==
      block0np1 - 4) ? (
   inv_1*(-0.121937153224065*rhou0_B0[OPS_ACC6(0,2)] +
      0.727822147724592*rhou0_B0[OPS_ACC6(0,1)] + 0.082033432844602*rhou0_B0[OPS_ACC6(0,-2)] -
      0.652141084861241*rhou0_B0[OPS_ACC6(0,-1)] - 0.0451033223343881*rhou0_B0[OPS_ACC6(0,0)] +
      0.00932597985049999*rhou0_B0[OPS_ACC6(0,3)])
)
: (
   (rc4)*inv_1*(-8*rhou0_B0[OPS_ACC6(0,-1)] +
      rhou0_B0[OPS_ACC6(0,-2)] - rhou0_B0[OPS_ACC6(0,2)] + 8*rhou0_B0[OPS_ACC6(0,1)])
)))))))));

    localeval_24 = ((idx[1] == 0) ? (
   inv_1*(-1.50000000000003*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.333333333333356*rhou1_B0[OPS_ACC8(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      1.83333333333334*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,5)]*u1_B0[OPS_ACC13(0,5)] +
      3.00000000000002*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.0394168524399447*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      0.376283677513354*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,3)]*u1_B0[OPS_ACC13(0,3)] +
      0.00571369039775442*rhou1_B0[OPS_ACC8(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      0.322484932882161*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.719443173328855*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.0367146847001261*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.113446470384241*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.791245592765872*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.00412637789557492*rhou1_B0[OPS_ACC8(0,3)]*u1_B0[OPS_ACC13(0,3)] +
      0.197184333887745*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.521455851089587*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.121937153224065*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.727822147724592*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.652141084861241*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.00932597985049999*rhou1_B0[OPS_ACC8(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      3.00000000000002*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      1.06910315192207e-15*rhou1_B0[OPS_ACC8(0,-5)]*u1_B0[OPS_ACC13(0,-5)] +
      1.83333333333334*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      8.34657956545823e-15*rhou1_B0[OPS_ACC8(0,-4)]*u1_B0[OPS_ACC13(0,-4)] -
      0.333333333333356*rhou1_B0[OPS_ACC8(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.719443173328855*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.322484932882161*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00571369039775442*rhou1_B0[OPS_ACC8(0,-4)]*u1_B0[OPS_ACC13(0,-4)] +
      0.376283677513354*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.0658051057710389*rhou1_B0[OPS_ACC8(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.0367146847001261*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.521455851089587*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.197184333887745*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.791245592765872*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.00412637789557492*rhou1_B0[OPS_ACC8(0,-3)]*u1_B0[OPS_ACC13(0,-3)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(-0.121937153224065*rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.082033432844602*rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      0.652141084861241*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.00932597985049999*rhou1_B0[OPS_ACC8(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.0451033223343881*rhou1_B0[OPS_ACC8(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      0.727822147724592*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)])
)
: (
  
      (rc4)*inv_1*(-rhou1_B0[OPS_ACC8(0,2)]*u1_B0[OPS_ACC13(0,2)] + rhou1_B0[OPS_ACC8(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      8*rhou1_B0[OPS_ACC8(0,-1)]*u1_B0[OPS_ACC13(0,-1)] + 8*rhou1_B0[OPS_ACC8(0,1)]*u1_B0[OPS_ACC13(0,1)])
)))))))));

    localeval_25 = ((idx[1] == 0) ? (
   inv_1*(-8.34657956545823e-15*p_B0[OPS_ACC14(0,4)]*u0_B0[OPS_ACC12(0,4)] +
      1.06910315192207e-15*p_B0[OPS_ACC14(0,5)]*u0_B0[OPS_ACC12(0,5)] -
      1.50000000000003*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.333333333333356*p_B0[OPS_ACC14(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      1.83333333333334*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      3.00000000000002*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(-0.376283677513354*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.0394168524399447*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] -
      0.0658051057710389*p_B0[OPS_ACC14(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.322484932882161*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00571369039775442*p_B0[OPS_ACC14(0,4)]*u0_B0[OPS_ACC12(0,4)] +
      0.719443173328855*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.113446470384241*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.791245592765872*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.0367146847001261*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] -
      0.00412637789557492*p_B0[OPS_ACC14(0,3)]*u0_B0[OPS_ACC12(0,3)] +
      0.197184333887745*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.521455851089587*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.121937153224065*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.727822147724592*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.082033432844602*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.0451033223343881*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00932597985049999*p_B0[OPS_ACC14(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.652141084861241*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      3.00000000000002*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      1.06910315192207e-15*p_B0[OPS_ACC14(0,-5)]*u0_B0[OPS_ACC12(0,-5)] -
      0.333333333333356*p_B0[OPS_ACC14(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      8.34657956545823e-15*p_B0[OPS_ACC14(0,-4)]*u0_B0[OPS_ACC12(0,-4)] +
      1.83333333333334*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.719443173328855*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.00571369039775442*p_B0[OPS_ACC14(0,-4)]*u0_B0[OPS_ACC12(0,-4)] +
      0.322484932882161*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.0658051057710389*p_B0[OPS_ACC14(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.376283677513354*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(0.0367146847001261*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.521455851089587*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.113446470384241*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] -
      0.197184333887745*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00412637789557492*p_B0[OPS_ACC14(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.791245592765872*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.082033432844602*p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.652141084861241*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.121937153224065*p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] +
      0.00932597985049999*p_B0[OPS_ACC14(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.0451033223343881*p_B0[OPS_ACC14(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.727822147724592*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)
: (
  
      (rc4)*inv_1*(p_B0[OPS_ACC14(0,-2)]*u0_B0[OPS_ACC12(0,-2)] - 8*p_B0[OPS_ACC14(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      p_B0[OPS_ACC14(0,2)]*u0_B0[OPS_ACC12(0,2)] + 8*p_B0[OPS_ACC14(0,1)]*u0_B0[OPS_ACC12(0,1)])
)))))))));

    localeval_26 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,5)]*u0_B0[OPS_ACC12(0,5)] -
      1.83333333333334*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,4)]*u0_B0[OPS_ACC12(0,4)] +
      0.333333333333356*rhoE_B0[OPS_ACC0(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      1.50000000000003*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.719443173328855*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.322484932882161*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00571369039775442*rhoE_B0[OPS_ACC0(0,4)]*u0_B0[OPS_ACC12(0,4)] -
      0.0658051057710389*rhoE_B0[OPS_ACC0(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.376283677513354*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.0394168524399447*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.521455851089587*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.197184333887745*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.00412637789557492*rhoE_B0[OPS_ACC0(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.791245592765872*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.113446470384241*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.0367146847001261*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.00932597985049999*rhoE_B0[OPS_ACC0(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.652141084861241*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] +
      0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.727822147724592*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.121937153224065*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.082033432844602*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-0.333333333333356*rhoE_B0[OPS_ACC0(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      8.34657956545823e-15*rhoE_B0[OPS_ACC0(0,-4)]*u0_B0[OPS_ACC12(0,-4)] -
      1.06910315192207e-15*rhoE_B0[OPS_ACC0(0,-5)]*u0_B0[OPS_ACC12(0,-5)] +
      1.83333333333334*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      3.00000000000002*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      1.50000000000003*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(0.0658051057710389*rhoE_B0[OPS_ACC0(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.376283677513354*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.00571369039775442*rhoE_B0[OPS_ACC0(0,-4)]*u0_B0[OPS_ACC12(0,-4)] +
      0.322484932882161*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.719443173328855*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] -
      0.0394168524399447*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(0.00412637789557492*rhoE_B0[OPS_ACC0(0,-3)]*u0_B0[OPS_ACC12(0,-3)] +
      0.791245592765872*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.197184333887745*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] -
      0.521455851089587*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.0367146847001261*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.113446470384241*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.727822147724592*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] -
      0.0451033223343881*rhoE_B0[OPS_ACC0(0,0)]*u0_B0[OPS_ACC12(0,0)] +
      0.00932597985049999*rhoE_B0[OPS_ACC0(0,3)]*u0_B0[OPS_ACC12(0,3)] -
      0.652141084861241*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      0.082033432844602*rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)] -
      0.121937153224065*rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)
: (
  
      (rc4)*inv_1*(8*rhoE_B0[OPS_ACC0(0,1)]*u0_B0[OPS_ACC12(0,1)] - 8*rhoE_B0[OPS_ACC0(0,-1)]*u0_B0[OPS_ACC12(0,-1)] +
      rhoE_B0[OPS_ACC0(0,-2)]*u0_B0[OPS_ACC12(0,-2)] - rhoE_B0[OPS_ACC0(0,2)]*u0_B0[OPS_ACC12(0,2)])
)))))))));

    localeval_27 = ((idx[1] == 0) ? (
   inv_1*(1.06910315192207e-15*p_B0[OPS_ACC14(0,5)] -
      1.50000000000003*p_B0[OPS_ACC14(0,2)] + 0.333333333333356*p_B0[OPS_ACC14(0,3)] -
      1.83333333333334*p_B0[OPS_ACC14(0,0)] - 8.34657956545823e-15*p_B0[OPS_ACC14(0,4)] +
      3.00000000000002*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.376283677513354*p_B0[OPS_ACC14(0,-1)] +
      0.0394168524399447*p_B0[OPS_ACC14(0,2)] - 0.0658051057710389*p_B0[OPS_ACC14(0,3)] -
      0.322484932882161*p_B0[OPS_ACC14(0,0)] + 0.00571369039775442*p_B0[OPS_ACC14(0,4)] +
      0.719443173328855*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.113446470384241*p_B0[OPS_ACC14(0,-2)] -
      0.791245592765872*p_B0[OPS_ACC14(0,-1)] - 0.0367146847001261*p_B0[OPS_ACC14(0,2)] -
      0.00412637789557492*p_B0[OPS_ACC14(0,3)] + 0.197184333887745*p_B0[OPS_ACC14(0,0)] +
      0.521455851089587*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*p_B0[OPS_ACC14(0,-2)] -
      0.727822147724592*p_B0[OPS_ACC14(0,-1)] - 0.082033432844602*p_B0[OPS_ACC14(0,2)] +
      0.0451033223343881*p_B0[OPS_ACC14(0,0)] - 0.00932597985049999*p_B0[OPS_ACC14(0,-3)] +
      0.652141084861241*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*p_B0[OPS_ACC14(0,-2)] - 3.00000000000002*p_B0[OPS_ACC14(0,-1)] -
      1.06910315192207e-15*p_B0[OPS_ACC14(0,-5)] + 8.34657956545823e-15*p_B0[OPS_ACC14(0,-4)] +
      1.83333333333334*p_B0[OPS_ACC14(0,0)] - 0.333333333333356*p_B0[OPS_ACC14(0,-3)])
)
: ((idx[1] == block0np1 - 2) ?
      (
   inv_1*(-0.0394168524399447*p_B0[OPS_ACC14(0,-2)] - 0.719443173328855*p_B0[OPS_ACC14(0,-1)] -
      0.00571369039775442*p_B0[OPS_ACC14(0,-4)] + 0.322484932882161*p_B0[OPS_ACC14(0,0)] +
      0.0658051057710389*p_B0[OPS_ACC14(0,-3)] + 0.376283677513354*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.0367146847001261*p_B0[OPS_ACC14(0,-2)] - 0.521455851089587*p_B0[OPS_ACC14(0,-1)] -
      0.113446470384241*p_B0[OPS_ACC14(0,2)] - 0.197184333887745*p_B0[OPS_ACC14(0,0)] +
      0.00412637789557492*p_B0[OPS_ACC14(0,-3)] + 0.791245592765872*p_B0[OPS_ACC14(0,1)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.082033432844602*p_B0[OPS_ACC14(0,-2)] - 0.652141084861241*p_B0[OPS_ACC14(0,-1)] -
      0.121937153224065*p_B0[OPS_ACC14(0,2)] + 0.00932597985049999*p_B0[OPS_ACC14(0,3)] -
      0.0451033223343881*p_B0[OPS_ACC14(0,0)] + 0.727822147724592*p_B0[OPS_ACC14(0,1)])
)
: (
  
      (rc4)*inv_1*(-8*p_B0[OPS_ACC14(0,-1)] - p_B0[OPS_ACC14(0,2)] + p_B0[OPS_ACC14(0,-2)] +
      8*p_B0[OPS_ACC14(0,1)])
)))))))));

    localeval_28 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*rho_B0[OPS_ACC2(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      1.50000000000003*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      1.06910315192207e-15*rho_B0[OPS_ACC2(0,5)]*u1_B0[OPS_ACC13(0,5)] +
      3.00000000000002*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      8.34657956545823e-15*rho_B0[OPS_ACC2(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      1.83333333333334*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(-0.0658051057710389*rho_B0[OPS_ACC2(0,3)]*u1_B0[OPS_ACC13(0,3)] +
      0.0394168524399447*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] -
      0.376283677513354*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.719443173328855*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] +
      0.00571369039775442*rho_B0[OPS_ACC2(0,4)]*u1_B0[OPS_ACC13(0,4)] -
      0.322484932882161*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*rho_B0[OPS_ACC2(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.0367146847001261*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.113446470384241*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] +
      0.521455851089587*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.791245592765872*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.197184333887745*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.121937153224065*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] +
      0.652141084861241*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.727822147724592*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.00932597985049999*rho_B0[OPS_ACC2(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.0451033223343881*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-1.06910315192207e-15*rho_B0[OPS_ACC2(0,-5)]*u1_B0[OPS_ACC13(0,-5)] +
      1.50000000000003*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      3.00000000000002*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.333333333333356*rho_B0[OPS_ACC2(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      1.83333333333334*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)] +
      8.34657956545823e-15*rho_B0[OPS_ACC2(0,-4)]*u1_B0[OPS_ACC13(0,-4)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      inv_1*(-0.0394168524399447*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] +
      0.376283677513354*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.719443173328855*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.0658051057710389*rho_B0[OPS_ACC2(0,-3)]*u1_B0[OPS_ACC13(0,-3)] +
      0.322484932882161*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)] -
      0.00571369039775442*rho_B0[OPS_ACC2(0,-4)]*u1_B0[OPS_ACC13(0,-4)])
)
: ((idx[1] == block0np1 - 3) ? (
  
      inv_1*(-0.113446470384241*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.0367146847001261*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] +
      0.791245592765872*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.521455851089587*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] +
      0.00412637789557492*rho_B0[OPS_ACC2(0,-3)]*u1_B0[OPS_ACC13(0,-3)] -
      0.197184333887745*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: ((idx[1] == block0np1 - 4) ? (
  
      inv_1*(0.00932597985049999*rho_B0[OPS_ACC2(0,3)]*u1_B0[OPS_ACC13(0,3)] -
      0.121937153224065*rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] +
      0.082033432844602*rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] +
      0.727822147724592*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)] -
      0.652141084861241*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] -
      0.0451033223343881*rho_B0[OPS_ACC2(0,0)]*u1_B0[OPS_ACC13(0,0)])
)
: (
  
      (rc4)*inv_1*(-rho_B0[OPS_ACC2(0,2)]*u1_B0[OPS_ACC13(0,2)] + rho_B0[OPS_ACC2(0,-2)]*u1_B0[OPS_ACC13(0,-2)] -
      8*rho_B0[OPS_ACC2(0,-1)]*u1_B0[OPS_ACC13(0,-1)] + 8*rho_B0[OPS_ACC2(0,1)]*u1_B0[OPS_ACC13(0,1)])
)))))))));

    localeval_29 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*rho_B0[OPS_ACC2(0,3)] -
      1.50000000000003*rho_B0[OPS_ACC2(0,2)] + 1.06910315192207e-15*rho_B0[OPS_ACC2(0,5)] +
      3.00000000000002*rho_B0[OPS_ACC2(0,1)] - 8.34657956545823e-15*rho_B0[OPS_ACC2(0,4)] -
      1.83333333333334*rho_B0[OPS_ACC2(0,0)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*rho_B0[OPS_ACC2(0,3)]
      + 0.0394168524399447*rho_B0[OPS_ACC2(0,2)] - 0.376283677513354*rho_B0[OPS_ACC2(0,-1)] +
      0.719443173328855*rho_B0[OPS_ACC2(0,1)] + 0.00571369039775442*rho_B0[OPS_ACC2(0,4)] -
      0.322484932882161*rho_B0[OPS_ACC2(0,0)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(-0.00412637789557492*rho_B0[OPS_ACC2(0,3)] - 0.0367146847001261*rho_B0[OPS_ACC2(0,2)] +
      0.113446470384241*rho_B0[OPS_ACC2(0,-2)] + 0.521455851089587*rho_B0[OPS_ACC2(0,1)] -
      0.791245592765872*rho_B0[OPS_ACC2(0,-1)] + 0.197184333887745*rho_B0[OPS_ACC2(0,0)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(-0.082033432844602*rho_B0[OPS_ACC2(0,2)] - 0.727822147724592*rho_B0[OPS_ACC2(0,-1)] +
      0.652141084861241*rho_B0[OPS_ACC2(0,1)] + 0.121937153224065*rho_B0[OPS_ACC2(0,-2)] -
      0.00932597985049999*rho_B0[OPS_ACC2(0,-3)] + 0.0451033223343881*rho_B0[OPS_ACC2(0,0)])
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-1.06910315192207e-15*rho_B0[OPS_ACC2(0,-5)] + 1.50000000000003*rho_B0[OPS_ACC2(0,-2)] -
      3.00000000000002*rho_B0[OPS_ACC2(0,-1)] - 0.333333333333356*rho_B0[OPS_ACC2(0,-3)] +
      1.83333333333334*rho_B0[OPS_ACC2(0,0)] + 8.34657956545823e-15*rho_B0[OPS_ACC2(0,-4)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(-0.0394168524399447*rho_B0[OPS_ACC2(0,-2)] + 0.376283677513354*rho_B0[OPS_ACC2(0,1)] -
      0.719443173328855*rho_B0[OPS_ACC2(0,-1)] + 0.0658051057710389*rho_B0[OPS_ACC2(0,-3)] +
      0.322484932882161*rho_B0[OPS_ACC2(0,0)] - 0.00571369039775442*rho_B0[OPS_ACC2(0,-4)])
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(-0.113446470384241*rho_B0[OPS_ACC2(0,2)] - 0.521455851089587*rho_B0[OPS_ACC2(0,-1)] +
      0.791245592765872*rho_B0[OPS_ACC2(0,1)] + 0.0367146847001261*rho_B0[OPS_ACC2(0,-2)] +
      0.00412637789557492*rho_B0[OPS_ACC2(0,-3)] - 0.197184333887745*rho_B0[OPS_ACC2(0,0)])
)
: ((idx[1] == block0np1 -
      4) ? (
   inv_1*(0.00932597985049999*rho_B0[OPS_ACC2(0,3)] - 0.121937153224065*rho_B0[OPS_ACC2(0,2)] -
      0.652141084861241*rho_B0[OPS_ACC2(0,-1)] + 0.727822147724592*rho_B0[OPS_ACC2(0,1)] +
      0.082033432844602*rho_B0[OPS_ACC2(0,-2)] - 0.0451033223343881*rho_B0[OPS_ACC2(0,0)])
)
: (
  
      (rc4)*inv_1*(8*rho_B0[OPS_ACC2(0,1)] - rho_B0[OPS_ACC2(0,2)] + rho_B0[OPS_ACC2(0,-2)] -
      8*rho_B0[OPS_ACC2(0,-1)])
)))))))));

    Residual0_B0[OPS_ACC16(0,0)] = -rc7*localeval_13*D00_B0[OPS_ACC3(0,0)] - rc7*localeval_22*D10_B0[OPS_ACC4(0,0)] -
      rc7*localeval_28*D11_B0[OPS_ACC1(0,0)] - rc7*localeval_6*D01_B0[OPS_ACC10(0,0)] -
      rc7*(localeval_29*D10_B0[OPS_ACC4(0,0)] + localeval_7*D00_B0[OPS_ACC3(0,0)])*u0_B0[OPS_ACC12(0,0)] -
      rc7*(localeval_29*D11_B0[OPS_ACC1(0,0)] + localeval_7*D01_B0[OPS_ACC10(0,0)])*u1_B0[OPS_ACC13(0,0)] -
      rc7*(D00_B0[OPS_ACC3(0,0)]*wk0_B0[OPS_ACC5(0,0)] + D01_B0[OPS_ACC10(0,0)]*wk2_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC4(0,0)]*wk1_B0[OPS_ACC7(0,0)] + D11_B0[OPS_ACC1(0,0)]*wk3_B0[OPS_ACC9(0,0)])*rho_B0[OPS_ACC2(0,0)];

    Residual1_B0[OPS_ACC15(0,0)] = -rc7*localeval_11*D00_B0[OPS_ACC3(0,0)] - rc7*localeval_17*D10_B0[OPS_ACC4(0,0)] -
      rc7*localeval_20*D11_B0[OPS_ACC1(0,0)] - localeval_27*D10_B0[OPS_ACC4(0,0)] - localeval_5*D00_B0[OPS_ACC3(0,0)] -
      rc7*localeval_8*D01_B0[OPS_ACC10(0,0)] - rc7*(localeval_2*D00_B0[OPS_ACC3(0,0)] +
      localeval_23*D10_B0[OPS_ACC4(0,0)])*u0_B0[OPS_ACC12(0,0)] - rc7*(localeval_2*D01_B0[OPS_ACC10(0,0)] +
      localeval_23*D11_B0[OPS_ACC1(0,0)])*u1_B0[OPS_ACC13(0,0)] - rc7*(D00_B0[OPS_ACC3(0,0)]*wk0_B0[OPS_ACC5(0,0)] +
      D01_B0[OPS_ACC10(0,0)]*wk2_B0[OPS_ACC11(0,0)] + D10_B0[OPS_ACC4(0,0)]*wk1_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC1(0,0)]*wk3_B0[OPS_ACC9(0,0)])*rhou0_B0[OPS_ACC6(0,0)];

    Residual2_B0[OPS_ACC18(0,0)] = -rc7*localeval_10*D00_B0[OPS_ACC3(0,0)] - rc7*localeval_14*D01_B0[OPS_ACC10(0,0)] -
      rc7*localeval_15*D10_B0[OPS_ACC4(0,0)] - rc7*localeval_24*D11_B0[OPS_ACC1(0,0)] -
      localeval_27*D11_B0[OPS_ACC1(0,0)] - localeval_5*D01_B0[OPS_ACC10(0,0)] - rc7*(localeval_1*D00_B0[OPS_ACC3(0,0)] +
      localeval_16*D10_B0[OPS_ACC4(0,0)])*u0_B0[OPS_ACC12(0,0)] - rc7*(localeval_1*D01_B0[OPS_ACC10(0,0)] +
      localeval_16*D11_B0[OPS_ACC1(0,0)])*u1_B0[OPS_ACC13(0,0)] - rc7*(D00_B0[OPS_ACC3(0,0)]*wk0_B0[OPS_ACC5(0,0)] +
      D01_B0[OPS_ACC10(0,0)]*wk2_B0[OPS_ACC11(0,0)] + D10_B0[OPS_ACC4(0,0)]*wk1_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC1(0,0)]*wk3_B0[OPS_ACC9(0,0)])*rhou1_B0[OPS_ACC8(0,0)];

    Residual3_B0[OPS_ACC17(0,0)] = -localeval_12*D01_B0[OPS_ACC10(0,0)] - localeval_18*D11_B0[OPS_ACC1(0,0)] -
      rc7*localeval_21*D11_B0[OPS_ACC1(0,0)] - localeval_25*D10_B0[OPS_ACC4(0,0)] -
      rc7*localeval_26*D10_B0[OPS_ACC4(0,0)] - localeval_3*D00_B0[OPS_ACC3(0,0)] - rc7*localeval_4*D00_B0[OPS_ACC3(0,0)]
      - rc7*localeval_9*D01_B0[OPS_ACC10(0,0)] - rc7*(localeval_0*D00_B0[OPS_ACC3(0,0)] +
      localeval_19*D10_B0[OPS_ACC4(0,0)])*u0_B0[OPS_ACC12(0,0)] - rc7*(localeval_0*D01_B0[OPS_ACC10(0,0)] +
      localeval_19*D11_B0[OPS_ACC1(0,0)])*u1_B0[OPS_ACC13(0,0)] - rc7*(D00_B0[OPS_ACC3(0,0)]*wk0_B0[OPS_ACC5(0,0)] +
      D01_B0[OPS_ACC10(0,0)]*wk2_B0[OPS_ACC11(0,0)] + D10_B0[OPS_ACC4(0,0)]*wk1_B0[OPS_ACC7(0,0)] +
      D11_B0[OPS_ACC1(0,0)]*wk3_B0[OPS_ACC9(0,0)])*rhoE_B0[OPS_ACC0(0,0)];

}

 void opensbliblock00Kernel022(const double *D11_B0, const double *D00_B0, const double *wk1_B0, const double *wk2_B0,
const double *u0_B0, const double *SD011_B0, const double *u1_B0, const double *mu_B0, const double *D10_B0, const
double *SD111_B0, const double *SD101_B0, const double *wk3_B0, const double *SD010_B0, const double *D01_B0, const
double *SD100_B0, const double *SD001_B0, const double *SD000_B0, const double *T_B0, const double *SD110_B0, const
double *wk0_B0, const double *wk4_B0, const double *wk5_B0, double *Residual1_B0, double *Residual3_B0, double
*Residual2_B0, const int *idx)
{
   double localeval_3 = 0.0;
   double localeval_4 = 0.0;
   double localeval_9 = 0.0;
   double localeval_10 = 0.0;
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_5 = 0.0;
   double localeval_1 = 0.0;
   double localeval_8 = 0.0;
   double localeval_7 = 0.0;
   double localeval_6 = 0.0;
    localeval_0 = (rc4)*inv_2*(16*T_B0[OPS_ACC17(1,0)] - 30*T_B0[OPS_ACC17(0,0)] - T_B0[OPS_ACC17(2,0)] +
      16*T_B0[OPS_ACC17(-1,0)] - T_B0[OPS_ACC17(-2,0)]);

    localeval_1 = ((idx[1] == 0) ? (
   (rc4)*inv_3*(-104*T_B0[OPS_ACC17(0,1)] + 11*T_B0[OPS_ACC17(0,4)] +
      35*T_B0[OPS_ACC17(0,0)] - 56*T_B0[OPS_ACC17(0,3)] + 114*T_B0[OPS_ACC17(0,2)])
)
: ((idx[1] == 1) ? (
  
      (rc4)*inv_3*(6*T_B0[OPS_ACC17(0,1)] - 20*T_B0[OPS_ACC17(0,0)] - T_B0[OPS_ACC17(0,3)] + 4*T_B0[OPS_ACC17(0,2)] +
      11*T_B0[OPS_ACC17(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc4)*inv_3*(-56*T_B0[OPS_ACC17(0,-3)] +
      35*T_B0[OPS_ACC17(0,0)] + 11*T_B0[OPS_ACC17(0,-4)] - 104*T_B0[OPS_ACC17(0,-1)] + 114*T_B0[OPS_ACC17(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc4)*inv_3*(11*T_B0[OPS_ACC17(0,1)] - T_B0[OPS_ACC17(0,-3)] -
      20*T_B0[OPS_ACC17(0,0)] + 4*T_B0[OPS_ACC17(0,-2)] + 6*T_B0[OPS_ACC17(0,-1)])
)
: (
  
      (rc4)*inv_3*(16*T_B0[OPS_ACC17(0,1)] - 30*T_B0[OPS_ACC17(0,0)] - T_B0[OPS_ACC17(0,2)] - T_B0[OPS_ACC17(0,-2)] +
      16*T_B0[OPS_ACC17(0,-1)])
)))));

    localeval_2 = (rc4)*inv_0*(mu_B0[OPS_ACC7(-2,0)] - mu_B0[OPS_ACC7(2,0)] - 8*mu_B0[OPS_ACC7(-1,0)] +
      8*mu_B0[OPS_ACC7(1,0)]);

    localeval_3 = ((idx[1] == 0) ? (
   inv_1*(0.333333333333356*mu_B0[OPS_ACC7(0,3)] -
      1.50000000000003*mu_B0[OPS_ACC7(0,2)] + 1.06910315192207e-15*mu_B0[OPS_ACC7(0,5)] +
      3.00000000000002*mu_B0[OPS_ACC7(0,1)] - 8.34657956545823e-15*mu_B0[OPS_ACC7(0,4)] -
      1.83333333333334*mu_B0[OPS_ACC7(0,0)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.0658051057710389*mu_B0[OPS_ACC7(0,3)] +
      0.0394168524399447*mu_B0[OPS_ACC7(0,2)] - 0.376283677513354*mu_B0[OPS_ACC7(0,-1)] +
      0.719443173328855*mu_B0[OPS_ACC7(0,1)] + 0.00571369039775442*mu_B0[OPS_ACC7(0,4)] -
      0.322484932882161*mu_B0[OPS_ACC7(0,0)])
)
: ((idx[1] == 2) ? (
   inv_1*(-0.00412637789557492*mu_B0[OPS_ACC7(0,3)]
      - 0.0367146847001261*mu_B0[OPS_ACC7(0,2)] + 0.113446470384241*mu_B0[OPS_ACC7(0,-2)] -
      0.791245592765872*mu_B0[OPS_ACC7(0,-1)] + 0.521455851089587*mu_B0[OPS_ACC7(0,1)] +
      0.197184333887745*mu_B0[OPS_ACC7(0,0)])
)
: ((idx[1] == 3) ? (
   inv_1*(-0.082033432844602*mu_B0[OPS_ACC7(0,2)] -
      0.727822147724592*mu_B0[OPS_ACC7(0,-1)] + 0.121937153224065*mu_B0[OPS_ACC7(0,-2)] +
      0.652141084861241*mu_B0[OPS_ACC7(0,1)] - 0.00932597985049999*mu_B0[OPS_ACC7(0,-3)] +
      0.0451033223343881*mu_B0[OPS_ACC7(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-1.06910315192207e-15*mu_B0[OPS_ACC7(0,-5)] + 1.50000000000003*mu_B0[OPS_ACC7(0,-2)] -
      3.00000000000002*mu_B0[OPS_ACC7(0,-1)] - 0.333333333333356*mu_B0[OPS_ACC7(0,-3)] +
      1.83333333333334*mu_B0[OPS_ACC7(0,0)] + 8.34657956545823e-15*mu_B0[OPS_ACC7(0,-4)])
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*mu_B0[OPS_ACC7(0,-2)] - 0.719443173328855*mu_B0[OPS_ACC7(0,-1)] +
      0.376283677513354*mu_B0[OPS_ACC7(0,1)] + 0.0658051057710389*mu_B0[OPS_ACC7(0,-3)] +
      0.322484932882161*mu_B0[OPS_ACC7(0,0)] - 0.00571369039775442*mu_B0[OPS_ACC7(0,-4)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(-0.113446470384241*mu_B0[OPS_ACC7(0,2)] - 0.521455851089587*mu_B0[OPS_ACC7(0,-1)] +
      0.0367146847001261*mu_B0[OPS_ACC7(0,-2)] + 0.791245592765872*mu_B0[OPS_ACC7(0,1)] +
      0.00412637789557492*mu_B0[OPS_ACC7(0,-3)] - 0.197184333887745*mu_B0[OPS_ACC7(0,0)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(0.00932597985049999*mu_B0[OPS_ACC7(0,3)] - 0.121937153224065*mu_B0[OPS_ACC7(0,2)] +
      0.082033432844602*mu_B0[OPS_ACC7(0,-2)] - 0.652141084861241*mu_B0[OPS_ACC7(0,-1)] +
      0.727822147724592*mu_B0[OPS_ACC7(0,1)] - 0.0451033223343881*mu_B0[OPS_ACC7(0,0)])
)
: (
  
      (rc4)*inv_1*(-mu_B0[OPS_ACC7(0,2)] + 8*mu_B0[OPS_ACC7(0,1)] + mu_B0[OPS_ACC7(0,-2)] -
      8*mu_B0[OPS_ACC7(0,-1)])
)))))))));

    localeval_4 = (rc4)*inv_2*(-u0_B0[OPS_ACC4(-2,0)] + 16*u0_B0[OPS_ACC4(-1,0)] - u0_B0[OPS_ACC4(2,0)] +
      16*u0_B0[OPS_ACC4(1,0)] - 30*u0_B0[OPS_ACC4(0,0)]);

    localeval_5 = ((idx[1] == 0) ? (
   (rc4)*inv_3*(11*u0_B0[OPS_ACC4(0,4)] - 56*u0_B0[OPS_ACC4(0,3)] +
      114*u0_B0[OPS_ACC4(0,2)] - 104*u0_B0[OPS_ACC4(0,1)] + 35*u0_B0[OPS_ACC4(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc4)*inv_3*(-u0_B0[OPS_ACC4(0,3)] + 11*u0_B0[OPS_ACC4(0,-1)] + 4*u0_B0[OPS_ACC4(0,2)] + 6*u0_B0[OPS_ACC4(0,1)] -
      20*u0_B0[OPS_ACC4(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc4)*inv_3*(-104*u0_B0[OPS_ACC4(0,-1)] +
      114*u0_B0[OPS_ACC4(0,-2)] - 56*u0_B0[OPS_ACC4(0,-3)] + 11*u0_B0[OPS_ACC4(0,-4)] + 35*u0_B0[OPS_ACC4(0,0)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc4)*inv_3*(4*u0_B0[OPS_ACC4(0,-2)] + 6*u0_B0[OPS_ACC4(0,-1)] -
      u0_B0[OPS_ACC4(0,-3)] + 11*u0_B0[OPS_ACC4(0,1)] - 20*u0_B0[OPS_ACC4(0,0)])
)
: (
  
      (rc4)*inv_3*(-u0_B0[OPS_ACC4(0,-2)] + 16*u0_B0[OPS_ACC4(0,-1)] - u0_B0[OPS_ACC4(0,2)] + 16*u0_B0[OPS_ACC4(0,1)] -
      30*u0_B0[OPS_ACC4(0,0)])
)))));

    localeval_6 = ((idx[1] == 0) ? (
   (rc4)*inv_3*(-104*u1_B0[OPS_ACC6(0,1)] + 114*u1_B0[OPS_ACC6(0,2)] -
      56*u1_B0[OPS_ACC6(0,3)] + 11*u1_B0[OPS_ACC6(0,4)] + 35*u1_B0[OPS_ACC6(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc4)*inv_3*(6*u1_B0[OPS_ACC6(0,1)] + 4*u1_B0[OPS_ACC6(0,2)] - u1_B0[OPS_ACC6(0,3)] - 20*u1_B0[OPS_ACC6(0,0)] +
      11*u1_B0[OPS_ACC6(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc4)*inv_3*(-104*u1_B0[OPS_ACC6(0,-1)] +
      11*u1_B0[OPS_ACC6(0,-4)] - 56*u1_B0[OPS_ACC6(0,-3)] + 35*u1_B0[OPS_ACC6(0,0)] + 114*u1_B0[OPS_ACC6(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc4)*inv_3*(11*u1_B0[OPS_ACC6(0,1)] + 4*u1_B0[OPS_ACC6(0,-2)] -
      u1_B0[OPS_ACC6(0,-3)] - 20*u1_B0[OPS_ACC6(0,0)] + 6*u1_B0[OPS_ACC6(0,-1)])
)
: (
  
      (rc4)*inv_3*(16*u1_B0[OPS_ACC6(0,1)] - u1_B0[OPS_ACC6(0,-2)] - u1_B0[OPS_ACC6(0,2)] - 30*u1_B0[OPS_ACC6(0,0)] +
      16*u1_B0[OPS_ACC6(0,-1)])
)))));

    localeval_7 = (rc4)*inv_2*(-u1_B0[OPS_ACC6(2,0)] - u1_B0[OPS_ACC6(-2,0)] - 30*u1_B0[OPS_ACC6(0,0)] +
      16*u1_B0[OPS_ACC6(1,0)] + 16*u1_B0[OPS_ACC6(-1,0)]);

    localeval_8 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*wk0_B0[OPS_ACC19(0,1)] -
      1.50000000000003*wk0_B0[OPS_ACC19(0,2)] + 0.333333333333356*wk0_B0[OPS_ACC19(0,3)] -
      8.34657956545823e-15*wk0_B0[OPS_ACC19(0,4)] - 1.83333333333334*wk0_B0[OPS_ACC19(0,0)] +
      1.06910315192207e-15*wk0_B0[OPS_ACC19(0,5)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(0.719443173328855*wk0_B0[OPS_ACC19(0,1)] + 0.0394168524399447*wk0_B0[OPS_ACC19(0,2)] -
      0.0658051057710389*wk0_B0[OPS_ACC19(0,3)] + 0.00571369039775442*wk0_B0[OPS_ACC19(0,4)] -
      0.322484932882161*wk0_B0[OPS_ACC19(0,0)] - 0.376283677513354*wk0_B0[OPS_ACC19(0,-1)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.521455851089587*wk0_B0[OPS_ACC19(0,1)] - 0.0367146847001261*wk0_B0[OPS_ACC19(0,2)] -
      0.00412637789557492*wk0_B0[OPS_ACC19(0,3)] + 0.197184333887745*wk0_B0[OPS_ACC19(0,0)] -
      0.791245592765872*wk0_B0[OPS_ACC19(0,-1)] + 0.113446470384241*wk0_B0[OPS_ACC19(0,-2)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.652141084861241*wk0_B0[OPS_ACC19(0,1)] - 0.082033432844602*wk0_B0[OPS_ACC19(0,2)] -
      0.00932597985049999*wk0_B0[OPS_ACC19(0,-3)] + 0.0451033223343881*wk0_B0[OPS_ACC19(0,0)] -
      0.727822147724592*wk0_B0[OPS_ACC19(0,-1)] + 0.121937153224065*wk0_B0[OPS_ACC19(0,-2)])
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-1.06910315192207e-15*wk0_B0[OPS_ACC19(0,-5)] + 8.34657956545823e-15*wk0_B0[OPS_ACC19(0,-4)] -
      0.333333333333356*wk0_B0[OPS_ACC19(0,-3)] + 1.83333333333334*wk0_B0[OPS_ACC19(0,0)] -
      3.00000000000002*wk0_B0[OPS_ACC19(0,-1)] + 1.50000000000003*wk0_B0[OPS_ACC19(0,-2)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(0.376283677513354*wk0_B0[OPS_ACC19(0,1)] - 0.00571369039775442*wk0_B0[OPS_ACC19(0,-4)] +
      0.0658051057710389*wk0_B0[OPS_ACC19(0,-3)] + 0.322484932882161*wk0_B0[OPS_ACC19(0,0)] -
      0.719443173328855*wk0_B0[OPS_ACC19(0,-1)] - 0.0394168524399447*wk0_B0[OPS_ACC19(0,-2)])
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(0.791245592765872*wk0_B0[OPS_ACC19(0,1)] - 0.113446470384241*wk0_B0[OPS_ACC19(0,2)] +
      0.00412637789557492*wk0_B0[OPS_ACC19(0,-3)] - 0.197184333887745*wk0_B0[OPS_ACC19(0,0)] -
      0.521455851089587*wk0_B0[OPS_ACC19(0,-1)] + 0.0367146847001261*wk0_B0[OPS_ACC19(0,-2)])
)
: ((idx[1] == block0np1
      - 4) ? (
   inv_1*(0.727822147724592*wk0_B0[OPS_ACC19(0,1)] - 0.121937153224065*wk0_B0[OPS_ACC19(0,2)] +
      0.00932597985049999*wk0_B0[OPS_ACC19(0,3)] - 0.0451033223343881*wk0_B0[OPS_ACC19(0,0)] +
      0.082033432844602*wk0_B0[OPS_ACC19(0,-2)] - 0.652141084861241*wk0_B0[OPS_ACC19(0,-1)])
)
: (
  
      (rc4)*inv_1*(wk0_B0[OPS_ACC19(0,-2)] + 8*wk0_B0[OPS_ACC19(0,1)] - wk0_B0[OPS_ACC19(0,2)] -
      8*wk0_B0[OPS_ACC19(0,-1)])
)))))))));

    localeval_9 = ((idx[1] == 0) ? (
   inv_1*(-1.83333333333334*wk2_B0[OPS_ACC3(0,0)] -
      8.34657956545823e-15*wk2_B0[OPS_ACC3(0,4)] + 3.00000000000002*wk2_B0[OPS_ACC3(0,1)] +
      1.06910315192207e-15*wk2_B0[OPS_ACC3(0,5)] - 1.50000000000003*wk2_B0[OPS_ACC3(0,2)] +
      0.333333333333356*wk2_B0[OPS_ACC3(0,3)])
)
: ((idx[1] == 1) ? (
   inv_1*(-0.322484932882161*wk2_B0[OPS_ACC3(0,0)]
      + 0.00571369039775442*wk2_B0[OPS_ACC3(0,4)] + 0.719443173328855*wk2_B0[OPS_ACC3(0,1)] -
      0.376283677513354*wk2_B0[OPS_ACC3(0,-1)] + 0.0394168524399447*wk2_B0[OPS_ACC3(0,2)] -
      0.0658051057710389*wk2_B0[OPS_ACC3(0,3)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.197184333887745*wk2_B0[OPS_ACC3(0,0)]
      + 0.521455851089587*wk2_B0[OPS_ACC3(0,1)] + 0.113446470384241*wk2_B0[OPS_ACC3(0,-2)] -
      0.791245592765872*wk2_B0[OPS_ACC3(0,-1)] - 0.0367146847001261*wk2_B0[OPS_ACC3(0,2)] -
      0.00412637789557492*wk2_B0[OPS_ACC3(0,3)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.0451033223343881*wk2_B0[OPS_ACC3(0,0)] - 0.00932597985049999*wk2_B0[OPS_ACC3(0,-3)] +
      0.652141084861241*wk2_B0[OPS_ACC3(0,1)] + 0.121937153224065*wk2_B0[OPS_ACC3(0,-2)] -
      0.727822147724592*wk2_B0[OPS_ACC3(0,-1)] - 0.082033432844602*wk2_B0[OPS_ACC3(0,2)])
)
: ((idx[1] == block0np1 - 1)
      ? (
   inv_1*(8.34657956545823e-15*wk2_B0[OPS_ACC3(0,-4)] + 1.83333333333334*wk2_B0[OPS_ACC3(0,0)] -
      0.333333333333356*wk2_B0[OPS_ACC3(0,-3)] + 1.50000000000003*wk2_B0[OPS_ACC3(0,-2)] -
      3.00000000000002*wk2_B0[OPS_ACC3(0,-1)] - 1.06910315192207e-15*wk2_B0[OPS_ACC3(0,-5)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(-0.00571369039775442*wk2_B0[OPS_ACC3(0,-4)] + 0.322484932882161*wk2_B0[OPS_ACC3(0,0)] +
      0.0658051057710389*wk2_B0[OPS_ACC3(0,-3)] + 0.376283677513354*wk2_B0[OPS_ACC3(0,1)] -
      0.0394168524399447*wk2_B0[OPS_ACC3(0,-2)] - 0.719443173328855*wk2_B0[OPS_ACC3(0,-1)])
)
: ((idx[1] == block0np1 -
      3) ? (
   inv_1*(-0.197184333887745*wk2_B0[OPS_ACC3(0,0)] + 0.00412637789557492*wk2_B0[OPS_ACC3(0,-3)] +
      0.791245592765872*wk2_B0[OPS_ACC3(0,1)] + 0.0367146847001261*wk2_B0[OPS_ACC3(0,-2)] -
      0.521455851089587*wk2_B0[OPS_ACC3(0,-1)] - 0.113446470384241*wk2_B0[OPS_ACC3(0,2)])
)
: ((idx[1] == block0np1 - 4)
      ? (
   inv_1*(-0.0451033223343881*wk2_B0[OPS_ACC3(0,0)] + 0.727822147724592*wk2_B0[OPS_ACC3(0,1)] +
      0.082033432844602*wk2_B0[OPS_ACC3(0,-2)] - 0.652141084861241*wk2_B0[OPS_ACC3(0,-1)] -
      0.121937153224065*wk2_B0[OPS_ACC3(0,2)] + 0.00932597985049999*wk2_B0[OPS_ACC3(0,3)])
)
: (
  
      (rc4)*inv_1*(-8*wk2_B0[OPS_ACC3(0,-1)] + wk2_B0[OPS_ACC3(0,-2)] - wk2_B0[OPS_ACC3(0,2)] +
      8*wk2_B0[OPS_ACC3(0,1)])
)))))))));

    localeval_10 = ((idx[1] == 0) ? (
   inv_1*(-1.83333333333334*wk4_B0[OPS_ACC20(0,0)] +
      1.06910315192207e-15*wk4_B0[OPS_ACC20(0,5)] + 3.00000000000002*wk4_B0[OPS_ACC20(0,1)] -
      1.50000000000003*wk4_B0[OPS_ACC20(0,2)] + 0.333333333333356*wk4_B0[OPS_ACC20(0,3)] -
      8.34657956545823e-15*wk4_B0[OPS_ACC20(0,4)])
)
: ((idx[1] == 1) ? (
  
      inv_1*(-0.322484932882161*wk4_B0[OPS_ACC20(0,0)] + 0.719443173328855*wk4_B0[OPS_ACC20(0,1)] +
      0.0394168524399447*wk4_B0[OPS_ACC20(0,2)] - 0.376283677513354*wk4_B0[OPS_ACC20(0,-1)] -
      0.0658051057710389*wk4_B0[OPS_ACC20(0,3)] + 0.00571369039775442*wk4_B0[OPS_ACC20(0,4)])
)
: ((idx[1] == 2) ? (
  
      inv_1*(0.197184333887745*wk4_B0[OPS_ACC20(0,0)] + 0.521455851089587*wk4_B0[OPS_ACC20(0,1)] -
      0.0367146847001261*wk4_B0[OPS_ACC20(0,2)] + 0.113446470384241*wk4_B0[OPS_ACC20(0,-2)] -
      0.791245592765872*wk4_B0[OPS_ACC20(0,-1)] - 0.00412637789557492*wk4_B0[OPS_ACC20(0,3)])
)
: ((idx[1] == 3) ? (
  
      inv_1*(0.0451033223343881*wk4_B0[OPS_ACC20(0,0)] + 0.652141084861241*wk4_B0[OPS_ACC20(0,1)] -
      0.00932597985049999*wk4_B0[OPS_ACC20(0,-3)] - 0.082033432844602*wk4_B0[OPS_ACC20(0,2)] -
      0.727822147724592*wk4_B0[OPS_ACC20(0,-1)] + 0.121937153224065*wk4_B0[OPS_ACC20(0,-2)])
)
: ((idx[1] == block0np1 -
      1) ? (
   inv_1*(-1.06910315192207e-15*wk4_B0[OPS_ACC20(0,-5)] + 1.83333333333334*wk4_B0[OPS_ACC20(0,0)] +
      8.34657956545823e-15*wk4_B0[OPS_ACC20(0,-4)] - 0.333333333333356*wk4_B0[OPS_ACC20(0,-3)] +
      1.50000000000003*wk4_B0[OPS_ACC20(0,-2)] - 3.00000000000002*wk4_B0[OPS_ACC20(0,-1)])
)
: ((idx[1] == block0np1 -
      2) ? (
   inv_1*(0.322484932882161*wk4_B0[OPS_ACC20(0,0)] - 0.00571369039775442*wk4_B0[OPS_ACC20(0,-4)] +
      0.376283677513354*wk4_B0[OPS_ACC20(0,1)] + 0.0658051057710389*wk4_B0[OPS_ACC20(0,-3)] -
      0.0394168524399447*wk4_B0[OPS_ACC20(0,-2)] - 0.719443173328855*wk4_B0[OPS_ACC20(0,-1)])
)
: ((idx[1] == block0np1
      - 3) ? (
   inv_1*(-0.197184333887745*wk4_B0[OPS_ACC20(0,0)] + 0.791245592765872*wk4_B0[OPS_ACC20(0,1)] +
      0.00412637789557492*wk4_B0[OPS_ACC20(0,-3)] - 0.113446470384241*wk4_B0[OPS_ACC20(0,2)] -
      0.521455851089587*wk4_B0[OPS_ACC20(0,-1)] + 0.0367146847001261*wk4_B0[OPS_ACC20(0,-2)])
)
: ((idx[1] == block0np1
      - 4) ? (
   inv_1*(-0.0451033223343881*wk4_B0[OPS_ACC20(0,0)] + 0.727822147724592*wk4_B0[OPS_ACC20(0,1)] -
      0.121937153224065*wk4_B0[OPS_ACC20(0,2)] - 0.652141084861241*wk4_B0[OPS_ACC20(0,-1)] +
      0.082033432844602*wk4_B0[OPS_ACC20(0,-2)] + 0.00932597985049999*wk4_B0[OPS_ACC20(0,3)])
)
: (
  
      (rc4)*inv_1*(-wk4_B0[OPS_ACC20(0,2)] + wk4_B0[OPS_ACC20(0,-2)] + 8*wk4_B0[OPS_ACC20(0,1)] -
      8*wk4_B0[OPS_ACC20(0,-1)])
)))))))));

    Residual1_B0[OPS_ACC22(0,0)] = rcinv9*(localeval_2*D00_B0[OPS_ACC1(0,0)] +
      localeval_3*D10_B0[OPS_ACC8(0,0)])*((rc10)*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] + (rc10)*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)]) + rcinv9*(localeval_2*D01_B0[OPS_ACC13(0,0)] +
      localeval_3*D11_B0[OPS_ACC0(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)]) + rcinv9*((rc10)*localeval_4*pow(D00_B0[OPS_ACC1(0,0)], 2) +
      localeval_4*pow(D01_B0[OPS_ACC13(0,0)], 2) + (rc10)*localeval_5*pow(D10_B0[OPS_ACC8(0,0)], 2) +
      localeval_5*pow(D11_B0[OPS_ACC0(0,0)], 2) + (rc12)*localeval_6*D10_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_7*D00_B0[OPS_ACC1(0,0)]*D01_B0[OPS_ACC13(0,0)] +
      (rc13)*localeval_8*D00_B0[OPS_ACC1(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      2*localeval_8*D01_B0[OPS_ACC13(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_9*D00_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_9*D01_B0[OPS_ACC13(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      (rc10)*D00_B0[OPS_ACC1(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D00_B0[OPS_ACC1(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*D00_B0[OPS_ACC1(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D00_B0[OPS_ACC1(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D10_B0[OPS_ACC8(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D10_B0[OPS_ACC8(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*D10_B0[OPS_ACC8(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D10_B0[OPS_ACC8(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk1_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      Residual1_B0[OPS_ACC22(0,0)];

    Residual2_B0[OPS_ACC24(0,0)] = rcinv9*(localeval_2*D00_B0[OPS_ACC1(0,0)] +
      localeval_3*D10_B0[OPS_ACC8(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)]) + rcinv9*(localeval_2*D01_B0[OPS_ACC13(0,0)] +
      localeval_3*D11_B0[OPS_ACC0(0,0)])*(-rc11*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] - rc11*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)]) +
      rcinv9*((rc12)*localeval_4*D00_B0[OPS_ACC1(0,0)]*D01_B0[OPS_ACC13(0,0)] +
      (rc12)*localeval_5*D10_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC0(0,0)] + localeval_6*pow(D10_B0[OPS_ACC8(0,0)], 2) +
      (rc10)*localeval_6*pow(D11_B0[OPS_ACC0(0,0)], 2) + localeval_7*pow(D00_B0[OPS_ACC1(0,0)], 2) +
      (rc10)*localeval_7*pow(D01_B0[OPS_ACC13(0,0)], 2) + (rc12)*localeval_8*D00_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC0(0,0)]
      + (rc12)*localeval_8*D01_B0[OPS_ACC13(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      2*localeval_9*D00_B0[OPS_ACC1(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      (rc13)*localeval_9*D01_B0[OPS_ACC13(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk3_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      Residual2_B0[OPS_ACC24(0,0)];

    Residual3_B0[OPS_ACC23(0,0)] = rcinv14*rcinv15*rcinv8*rcinv9*(localeval_2*D00_B0[OPS_ACC1(0,0)] +
      localeval_3*D10_B0[OPS_ACC8(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*wk5_B0[OPS_ACC21(0,0)]) + rcinv14*rcinv15*rcinv8*rcinv9*(localeval_2*D01_B0[OPS_ACC13(0,0)]
      + localeval_3*D11_B0[OPS_ACC0(0,0)])*(D01_B0[OPS_ACC13(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk5_B0[OPS_ACC21(0,0)]) +
      rcinv14*rcinv15*rcinv8*rcinv9*(localeval_0*pow(D00_B0[OPS_ACC1(0,0)], 2) + localeval_0*pow(D01_B0[OPS_ACC13(0,0)],
      2) + localeval_1*pow(D10_B0[OPS_ACC8(0,0)], 2) + localeval_1*pow(D11_B0[OPS_ACC0(0,0)], 2) +
      2*localeval_10*D00_B0[OPS_ACC1(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      2*localeval_10*D01_B0[OPS_ACC13(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk5_B0[OPS_ACC21(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk5_B0[OPS_ACC21(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk5_B0[OPS_ACC21(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk4_B0[OPS_ACC20(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk5_B0[OPS_ACC21(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      rcinv9*(localeval_2*D00_B0[OPS_ACC1(0,0)] +
      localeval_3*D10_B0[OPS_ACC8(0,0)])*((rc10)*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] + (rc10)*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)])*u0_B0[OPS_ACC4(0,0)] +
      rcinv9*(localeval_2*D00_B0[OPS_ACC1(0,0)] +
      localeval_3*D10_B0[OPS_ACC8(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC6(0,0)] + rcinv9*(localeval_2*D01_B0[OPS_ACC13(0,0)] +
      localeval_3*D11_B0[OPS_ACC0(0,0)])*(-rc11*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] - rc11*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)])*u1_B0[OPS_ACC6(0,0)] +
      rcinv9*(localeval_2*D01_B0[OPS_ACC13(0,0)] +
      localeval_3*D11_B0[OPS_ACC0(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC4(0,0)] +
      rcinv9*(D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)])*((rc10)*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] + (rc10)*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      rcinv9*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      rcinv9*(D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)])*(D00_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*wk0_B0[OPS_ACC19(0,0)] + D10_B0[OPS_ACC8(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk1_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      rcinv9*(D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)])*(-rc11*D00_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*wk2_B0[OPS_ACC3(0,0)] - rc11*D10_B0[OPS_ACC8(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*wk3_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC7(0,0)] +
      rcinv9*((rc10)*localeval_4*pow(D00_B0[OPS_ACC1(0,0)], 2) + localeval_4*pow(D01_B0[OPS_ACC13(0,0)], 2) +
      (rc10)*localeval_5*pow(D10_B0[OPS_ACC8(0,0)], 2) + localeval_5*pow(D11_B0[OPS_ACC0(0,0)], 2) +
      (rc12)*localeval_6*D10_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_7*D00_B0[OPS_ACC1(0,0)]*D01_B0[OPS_ACC13(0,0)] +
      (rc13)*localeval_8*D00_B0[OPS_ACC1(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      2*localeval_8*D01_B0[OPS_ACC13(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_9*D00_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      (rc12)*localeval_9*D01_B0[OPS_ACC13(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      (rc10)*D00_B0[OPS_ACC1(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D00_B0[OPS_ACC1(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*D00_B0[OPS_ACC1(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D00_B0[OPS_ACC1(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D01_B0[OPS_ACC13(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D10_B0[OPS_ACC8(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk0_B0[OPS_ACC19(0,0)] -
      rc11*D10_B0[OPS_ACC8(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      (rc10)*D10_B0[OPS_ACC8(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D10_B0[OPS_ACC8(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D11_B0[OPS_ACC0(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk1_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC7(0,0)]*u0_B0[OPS_ACC4(0,0)] +
      rcinv9*((rc12)*localeval_4*D00_B0[OPS_ACC1(0,0)]*D01_B0[OPS_ACC13(0,0)] +
      (rc12)*localeval_5*D10_B0[OPS_ACC8(0,0)]*D11_B0[OPS_ACC0(0,0)] + localeval_6*pow(D10_B0[OPS_ACC8(0,0)], 2) +
      (rc10)*localeval_6*pow(D11_B0[OPS_ACC0(0,0)], 2) + localeval_7*pow(D00_B0[OPS_ACC1(0,0)], 2) +
      (rc10)*localeval_7*pow(D01_B0[OPS_ACC13(0,0)], 2) + (rc12)*localeval_8*D00_B0[OPS_ACC1(0,0)]*D11_B0[OPS_ACC0(0,0)]
      + (rc12)*localeval_8*D01_B0[OPS_ACC13(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      2*localeval_9*D00_B0[OPS_ACC1(0,0)]*D10_B0[OPS_ACC8(0,0)] +
      (rc13)*localeval_9*D01_B0[OPS_ACC13(0,0)]*D11_B0[OPS_ACC0(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D00_B0[OPS_ACC1(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*SD000_B0[OPS_ACC16(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*SD010_B0[OPS_ACC12(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc11*D01_B0[OPS_ACC13(0,0)]*SD100_B0[OPS_ACC14(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D01_B0[OPS_ACC13(0,0)]*SD110_B0[OPS_ACC18(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk2_B0[OPS_ACC3(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk3_B0[OPS_ACC11(0,0)] +
      D10_B0[OPS_ACC8(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk1_B0[OPS_ACC2(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*SD001_B0[OPS_ACC15(0,0)]*wk0_B0[OPS_ACC19(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*SD011_B0[OPS_ACC5(0,0)]*wk2_B0[OPS_ACC3(0,0)] -
      rc11*D11_B0[OPS_ACC0(0,0)]*SD101_B0[OPS_ACC10(0,0)]*wk1_B0[OPS_ACC2(0,0)] +
      (rc10)*D11_B0[OPS_ACC0(0,0)]*SD111_B0[OPS_ACC9(0,0)]*wk3_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC7(0,0)]*u1_B0[OPS_ACC6(0,0)]
      + Residual3_B0[OPS_ACC23(0,0)];

}

 void opensbliblock00Kernel048(const double *Residual1_B0, const double *Residual0_B0, const double *Residual3_B0, const
double *Residual2_B0, double *tempRK_rhoE_B0, double *rhoE_B0, double *rho_B0, double *rhou0_B0, double *rhou1_B0,
double *tempRK_rhou0_B0, double *tempRK_rho_B0, double *tempRK_rhou1_B0, const double *rkA, const double *rkB)
{
   tempRK_rho_B0[OPS_ACC10(0,0)] = dt*Residual0_B0[OPS_ACC1(0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC10(0,0)];

   rho_B0[OPS_ACC6(0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC10(0,0)] + rho_B0[OPS_ACC6(0,0)];

   tempRK_rhou0_B0[OPS_ACC9(0,0)] = dt*Residual1_B0[OPS_ACC0(0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC9(0,0)];

   rhou0_B0[OPS_ACC7(0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC9(0,0)] + rhou0_B0[OPS_ACC7(0,0)];

   tempRK_rhou1_B0[OPS_ACC11(0,0)] = dt*Residual2_B0[OPS_ACC3(0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC11(0,0)];

   rhou1_B0[OPS_ACC8(0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC11(0,0)] + rhou1_B0[OPS_ACC8(0,0)];

   tempRK_rhoE_B0[OPS_ACC4(0,0)] = dt*Residual3_B0[OPS_ACC2(0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC4(0,0)];

   rhoE_B0[OPS_ACC5(0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC5(0,0)];

}

 void opensbliblock00Kernel040(const double *rhoE_B0, const double *D11_B0, const double *rho_B0, const double *D10_B0,
const double *D00_B0, const double *rhou0_B0, const double *rhou1_B0, const double *D01_B0, double *a_B0, double *U1_B0,
double *U0_B0, double *Mach_sensor_B0, double *u1_B0, double *u0_B0, double *p_B0)
{
   double inv_a = 0.0;
   double inv_rho = 0.0;
   double p = 0.0;
   double M = 0.0;
   double u0 = 0.0;
   double u1 = 0.0;
   inv_rho = 1.0/rho_B0[OPS_ACC2(0,0)];

   u0_B0[OPS_ACC13(0,0)] = inv_rho*rhou0_B0[OPS_ACC5(0,0)];

   u1_B0[OPS_ACC12(0,0)] = inv_rho*rhou1_B0[OPS_ACC6(0,0)];

    p_B0[OPS_ACC14(0,0)] = (gama - 1)*(-inv_rho*(0.5*pow(rhou0_B0[OPS_ACC5(0,0)], 2) + 0.5*pow(rhou1_B0[OPS_ACC6(0,0)],
      2)) + rhoE_B0[OPS_ACC0(0,0)]);

   a_B0[OPS_ACC8(0,0)] = sqrt(gama*inv_rho*p_B0[OPS_ACC14(0,0)]);

   U0_B0[OPS_ACC10(0,0)] = D00_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC13(0,0)] + D01_B0[OPS_ACC7(0,0)]*u1_B0[OPS_ACC12(0,0)];

   U1_B0[OPS_ACC9(0,0)] = D10_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC13(0,0)] + D11_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC12(0,0)];

   inv_rho = 1.0/rho_B0[OPS_ACC2(0,0)];

   u0 = inv_rho*rhou0_B0[OPS_ACC5(0,0)];

   u1 = inv_rho*rhou1_B0[OPS_ACC6(0,0)];

    p = (gama - 1)*(-inv_rho*(0.5*pow(rhou0_B0[OPS_ACC5(0,0)], 2) + 0.5*pow(rhou1_B0[OPS_ACC6(0,0)], 2)) +
      rhoE_B0[OPS_ACC0(0,0)]);

   inv_a = 1.0/sqrt(gama*inv_rho*p);

   M = inv_a*sqrt(pow(u0, 2) + pow(u1, 2));

   Mach_sensor_B0[OPS_ACC11(0,0)] = fmin(1, 0.5*pow(M, 2)*sqrt(pow(-pow(M, 2) + 1, 2) + 4)/(pow(M, 2) + 1));

}

 void opensbliblock00Kernel041(const double *rhoE_B0, const double *rho_B0, const double *D00_B0, const double *U0_B0,
const double *detJ_B0, const double *rhou0_B0, const double *rhou1_B0, const double *D01_B0, const double *a_B0, const
double *u0_B0, const double *u1_B0, const double *p_B0, double *wk0_B0, double *wk3_B0, double *wk1_B0, double
*wk2_B0)
{
   double AVG_0_u1 = 0.0;
   double alpha_2 = 0.0;
   double CF_23 = 0.0;
   double CF_11 = 0.0;
   double CF_33 = 0.0;
   double CS_13 = 0.0;
   double CF_12 = 0.0;
   double CF_31 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double CS_23 = 0.0;
   double CS_31 = 0.0;
   double rj1 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_a = 0.0;
   double omega_2 = 0.0;
   double max_lambda_0_00 = 0.0;
   double CF_30 = 0.0;
   double alpha_1 = 0.0;
   double CF_03 = 0.0;
   double CS_35 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double CS_25 = 0.0;
   double CS_12 = 0.0;
   double CS_30 = 0.0;
   double CS_32 = 0.0;
   double Recon_2 = 0.0;
   double CS_21 = 0.0;
   double CF_05 = 0.0;
   double AVG_0_u0 = 0.0;
   double CS_11 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CF_10 = 0.0;
   double CF_01 = 0.0;
   double CF_20 = 0.0;
   double CF_02 = 0.0;
   double CF_15 = 0.0;
   double CS_03 = 0.0;
   double AVG_0_rho = 0.0;
   double CS_10 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_01 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CS_33 = 0.0;
   double CF_32 = 0.0;
   double CS_02 = 0.0;
   double beta_1 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double CF_14 = 0.0;
   double CS_04 = 0.0;
   double CS_22 = 0.0;
   double omega_0 = 0.0;
   double rj0 = 0.0;
   double CF_04 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double CS_00 = 0.0;
   double CF_13 = 0.0;
   double CF_24 = 0.0;
   double CS_05 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double max_lambda_0_22 = 0.0;
   double inv_AVG_rho = 0.0;
   double CS_14 = 0.0;
   double Recon_3 = 0.0;
   double beta_0 = 0.0;
   double CF_25 = 0.0;
   double alpha_0 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double CS_20 = 0.0;
   double beta_2 = 0.0;
   double CF_00 = 0.0;
   double omega_1 = 0.0;
   double CS_15 = 0.0;
   double Recon_0 = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double CF_35 = 0.0;
   double max_lambda_0_33 = 0.0;
   double CF_34 = 0.0;
   double max_lambda_0_11 = 0.0;
   double CF_21 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double rj2 = 0.0;
   double CF_22 = 0.0;
   double Recon_1 = 0.0;
   double CS_24 = 0.0;
   double CS_34 = 0.0;
   double rj3 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   AVG_0_u1 = (rc7)*(u1_B0[OPS_ACC10(0,0)] + u1_B0[OPS_ACC10(1,0)]);

   AVG_0_a = (rc7)*(a_B0[OPS_ACC8(1,0)] + a_B0[OPS_ACC8(0,0)]);

   AVG_0_rho = (rc7)*(rho_B0[OPS_ACC1(0,0)] + rho_B0[OPS_ACC1(1,0)]);

   AVG_0_u0 = (rc7)*(u0_B0[OPS_ACC9(1,0)] + u0_B0[OPS_ACC9(0,0)]);

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

    AVG_0_0_LEV_00 = -rc7*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_01 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_02 = gamma_m1*AVG_0_u1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_0_u0, 2) - gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 + pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2));

   AVG_0_0_LEV_21 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0);

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_0_u0, 2) + gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 - pow(AVG_0_u0, 2) - pow(AVG_0_u1, 2));

   AVG_0_0_LEV_31 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u0 + AVG_0_a - AVG_0_u0);

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(-2,0)]*rho_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(-2,0)]*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(-2,0)]*rhou1_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(-2,0)]*rhoE_B0[OPS_ACC0(-2,0)])*detJ_B0[OPS_ACC4(-2,0)];

    CF_10 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(-2,0)]*rho_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(-2,0)]*rhou1_B0[OPS_ACC6(-2,0)])*detJ_B0[OPS_ACC4(-2,0)];

    CF_20 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(-2,0)]*rho_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(-2,0)]*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(-2,0)]*rhou1_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(-2,0)]*rhoE_B0[OPS_ACC0(-2,0)])*detJ_B0[OPS_ACC4(-2,0)];

    CF_30 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(-2,0)]*rho_B0[OPS_ACC1(-2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(-2,0)]*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(-2,0)]*rhou1_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(-2,0)]*p_B0[OPS_ACC11(-2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(-2,0)]*rhoE_B0[OPS_ACC0(-2,0)])*detJ_B0[OPS_ACC4(-2,0)];

    CF_01 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(-1,0)]*rho_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(-1,0)]*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(-1,0)]*rhou1_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(-1,0)]*rhoE_B0[OPS_ACC0(-1,0)])*detJ_B0[OPS_ACC4(-1,0)];

    CF_11 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(-1,0)]*rho_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(-1,0)]*rhou1_B0[OPS_ACC6(-1,0)])*detJ_B0[OPS_ACC4(-1,0)];

    CF_21 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(-1,0)]*rho_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(-1,0)]*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(-1,0)]*rhou1_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(-1,0)]*rhoE_B0[OPS_ACC0(-1,0)])*detJ_B0[OPS_ACC4(-1,0)];

    CF_31 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(-1,0)]*rho_B0[OPS_ACC1(-1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(-1,0)]*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(-1,0)]*rhou1_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(-1,0)]*p_B0[OPS_ACC11(-1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(-1,0)]*rhoE_B0[OPS_ACC0(-1,0)])*detJ_B0[OPS_ACC4(-1,0)];

    CF_02 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(0,0)]*rho_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(0,0)]*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(0,0)]*rhoE_B0[OPS_ACC0(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_12 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(0,0)]*rho_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(0,0)]*rhou1_B0[OPS_ACC6(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_22 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(0,0)]*rho_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(0,0)]*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(0,0)]*rhoE_B0[OPS_ACC0(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_32 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(0,0)]*rho_B0[OPS_ACC1(0,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(0,0)]*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(0,0)]*rhou1_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(0,0)]*rhoE_B0[OPS_ACC0(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_03 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(1,0)]*rho_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(1,0)]*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(1,0)]*rhou1_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(1,0)]*rhoE_B0[OPS_ACC0(1,0)])*detJ_B0[OPS_ACC4(1,0)];

    CF_13 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(1,0)]*rho_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(1,0)]*rhou1_B0[OPS_ACC6(1,0)])*detJ_B0[OPS_ACC4(1,0)];

    CF_23 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(1,0)]*rho_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(1,0)]*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(1,0)]*rhou1_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(1,0)]*rhoE_B0[OPS_ACC0(1,0)])*detJ_B0[OPS_ACC4(1,0)];

    CF_33 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(1,0)]*rho_B0[OPS_ACC1(1,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(1,0)]*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(1,0)]*rhou1_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(1,0)]*p_B0[OPS_ACC11(1,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(1,0)]*rhoE_B0[OPS_ACC0(1,0)])*detJ_B0[OPS_ACC4(1,0)];

    CF_04 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(2,0)]*rho_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(2,0)]*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(2,0)]*rhou1_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(2,0)]*rhoE_B0[OPS_ACC0(2,0)])*detJ_B0[OPS_ACC4(2,0)];

    CF_14 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(2,0)]*rho_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(2,0)]*rhou1_B0[OPS_ACC6(2,0)])*detJ_B0[OPS_ACC4(2,0)];

    CF_24 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(2,0)]*rho_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(2,0)]*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(2,0)]*rhou1_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(2,0)]*rhoE_B0[OPS_ACC0(2,0)])*detJ_B0[OPS_ACC4(2,0)];

    CF_34 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(2,0)]*rho_B0[OPS_ACC1(2,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(2,0)]*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(2,0)]*rhou1_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(2,0)]*p_B0[OPS_ACC11(2,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(2,0)]*rhoE_B0[OPS_ACC0(2,0)])*detJ_B0[OPS_ACC4(2,0)];

    CF_05 = (AVG_0_0_LEV_00*U0_B0[OPS_ACC3(3,0)]*rho_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_01*D00_B0[OPS_ACC2(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_01*U0_B0[OPS_ACC3(3,0)]*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_02*D01_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_02*U0_B0[OPS_ACC3(3,0)]*rhou1_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_03*U0_B0[OPS_ACC3(3,0)]*rhoE_B0[OPS_ACC0(3,0)])*detJ_B0[OPS_ACC4(3,0)];

    CF_15 = (AVG_0_0_LEV_10*U0_B0[OPS_ACC3(3,0)]*rho_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_12*D01_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_12*U0_B0[OPS_ACC3(3,0)]*rhou1_B0[OPS_ACC6(3,0)])*detJ_B0[OPS_ACC4(3,0)];

    CF_25 = (AVG_0_0_LEV_20*U0_B0[OPS_ACC3(3,0)]*rho_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_21*D00_B0[OPS_ACC2(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_21*U0_B0[OPS_ACC3(3,0)]*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_22*D01_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_22*U0_B0[OPS_ACC3(3,0)]*rhou1_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_23*U0_B0[OPS_ACC3(3,0)]*rhoE_B0[OPS_ACC0(3,0)])*detJ_B0[OPS_ACC4(3,0)];

    CF_35 = (AVG_0_0_LEV_30*U0_B0[OPS_ACC3(3,0)]*rho_B0[OPS_ACC1(3,0)] +
      AVG_0_0_LEV_31*D00_B0[OPS_ACC2(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_31*U0_B0[OPS_ACC3(3,0)]*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_32*D01_B0[OPS_ACC7(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_32*U0_B0[OPS_ACC3(3,0)]*rhou1_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(3,0)]*p_B0[OPS_ACC11(3,0)] +
      AVG_0_0_LEV_33*U0_B0[OPS_ACC3(3,0)]*rhoE_B0[OPS_ACC0(3,0)])*detJ_B0[OPS_ACC4(3,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(-2,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(-1,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(1,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(2,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC0(3,0)];

   CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(-2,0)];

   CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(-1,0)];

   CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(0,0)];

   CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(1,0)];

   CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(2,0)];

   CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC6(3,0)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(-2,0)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(-1,0)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(0,0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(1,0)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(2,0)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC0(3,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(-2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(-2,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(-1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(-1,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(1,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(2,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC1(3,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC5(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC0(3,0)];

    max_lambda_0_00 = fmax(fabs(u0_B0[OPS_ACC9(-2,0)]), fmax(fabs(u0_B0[OPS_ACC9(-1,0)]),
      fmax(fabs(u0_B0[OPS_ACC9(0,0)]), fmax(fabs(u0_B0[OPS_ACC9(3,0)]), fmax(fabs(u0_B0[OPS_ACC9(1,0)]),
      fabs(u0_B0[OPS_ACC9(2,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

    max_lambda_0_22 = fmax(fabs(a_B0[OPS_ACC8(-2,0)] + u0_B0[OPS_ACC9(-2,0)]), fmax(fabs(a_B0[OPS_ACC8(3,0)] +
      u0_B0[OPS_ACC9(3,0)]), fmax(fabs(a_B0[OPS_ACC8(-1,0)] + u0_B0[OPS_ACC9(-1,0)]), fmax(fabs(a_B0[OPS_ACC8(1,0)] +
      u0_B0[OPS_ACC9(1,0)]), fmax(fabs(a_B0[OPS_ACC8(0,0)] + u0_B0[OPS_ACC9(0,0)]), fabs(a_B0[OPS_ACC8(2,0)] +
      u0_B0[OPS_ACC9(2,0)]))))));

    max_lambda_0_33 = fmax(fabs(a_B0[OPS_ACC8(3,0)] - u0_B0[OPS_ACC9(3,0)]), fmax(fabs(a_B0[OPS_ACC8(2,0)] -
      u0_B0[OPS_ACC9(2,0)]), fmax(fabs(a_B0[OPS_ACC8(-1,0)] - u0_B0[OPS_ACC9(-1,0)]), fmax(fabs(a_B0[OPS_ACC8(-2,0)] -
      u0_B0[OPS_ACC9(-2,0)]), fmax(fabs(a_B0[OPS_ACC8(0,0)] - u0_B0[OPS_ACC9(0,0)]), fabs(a_B0[OPS_ACC8(1,0)] -
      u0_B0[OPS_ACC9(1,0)]))))));

    beta_0 = (rc7)*(CF_02 + CS_02*max_lambda_0_00)*((rc16)*(CF_02 + CS_02*max_lambda_0_00) - rc17*(CF_03 +
      CS_03*max_lambda_0_00) + (rc18)*(CF_04 + CS_04*max_lambda_0_00)) + (rc7)*(CF_03 +
      CS_03*max_lambda_0_00)*((rc19)*(CF_03 + CS_03*max_lambda_0_00) - rc20*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc12)*pow(CF_04 + CS_04*max_lambda_0_00, 2);

    beta_1 = (rc7)*(CF_01 + CS_01*max_lambda_0_00)*((rc11)*(CF_01 + CS_01*max_lambda_0_00) - rc21*(CF_02 +
      CS_02*max_lambda_0_00) + (rc22)*(CF_03 + CS_03*max_lambda_0_00)) + (rc7)*(CF_02 +
      CS_02*max_lambda_0_00)*((rc21)*(CF_02 + CS_02*max_lambda_0_00) - rc21*(CF_03 + CS_03*max_lambda_0_00)) +
      (rc12)*pow(CF_03 + CS_03*max_lambda_0_00, 2);

    beta_2 = (rc7)*(CF_00 + CS_00*max_lambda_0_00)*((rc11)*(CF_00 + CS_00*max_lambda_0_00) + (rc18)*(CF_02 +
      CS_02*max_lambda_0_00)) + (rc7)*(CF_01 + CS_01*max_lambda_0_00)*(-rc20*(CF_00 + CS_00*max_lambda_0_00) +
      (rc19)*(CF_01 + CS_01*max_lambda_0_00) - rc17*(CF_02 + CS_02*max_lambda_0_00)) + (rc22)*pow(CF_02 +
      CS_02*max_lambda_0_00, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc26)*(CF_02 + CS_02*max_lambda_0_00) + (rc27)*(CF_03 + CS_03*max_lambda_0_00) -
      rc4*(CF_04 + CS_04*max_lambda_0_00)) + omega_1*(-rc4*(CF_01 + CS_01*max_lambda_0_00) + (rc27)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc26)*(CF_03 + CS_03*max_lambda_0_00)) + omega_2*((rc26)*(CF_00 + CS_00*max_lambda_0_00)
      - rc28*(CF_01 + CS_01*max_lambda_0_00) + (rc29)*(CF_02 + CS_02*max_lambda_0_00));

    rj0 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_03 - CS_03*max_lambda_0_00)*((rc16)*(CF_03 - CS_03*max_lambda_0_00) - rc17*(CF_04 -
      CS_04*max_lambda_0_00) + (rc18)*(CF_05 - CS_05*max_lambda_0_00)) + (rc7)*(CF_04 -
      CS_04*max_lambda_0_00)*((rc19)*(CF_04 - CS_04*max_lambda_0_00) - rc20*(CF_05 - CS_05*max_lambda_0_00)) +
      (rc12)*pow(CF_05 - CS_05*max_lambda_0_00, 2);

    beta_1 = (rc7)*(CF_02 - CS_02*max_lambda_0_00)*((rc11)*(CF_02 - CS_02*max_lambda_0_00) - rc21*(CF_03 -
      CS_03*max_lambda_0_00) + (rc22)*(CF_04 - CS_04*max_lambda_0_00)) + (rc7)*(CF_03 -
      CS_03*max_lambda_0_00)*((rc21)*(CF_03 - CS_03*max_lambda_0_00) - rc21*(CF_04 - CS_04*max_lambda_0_00)) +
      (rc12)*pow(CF_04 - CS_04*max_lambda_0_00, 2);

    beta_2 = (rc7)*(CF_01 - CS_01*max_lambda_0_00)*((rc11)*(CF_01 - CS_01*max_lambda_0_00) - rc20*(CF_02 -
      CS_02*max_lambda_0_00) + (rc18)*(CF_03 - CS_03*max_lambda_0_00)) + (rc7)*(CF_02 -
      CS_02*max_lambda_0_00)*((rc19)*(CF_02 - CS_02*max_lambda_0_00) - rc17*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc22)*pow(CF_03 - CS_03*max_lambda_0_00, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc29)*(CF_03 - CS_03*max_lambda_0_00) - rc28*(CF_04 - CS_04*max_lambda_0_00) +
      (rc26)*(CF_05 - CS_05*max_lambda_0_00)) + omega_1*((rc26)*(CF_02 - CS_02*max_lambda_0_00) + (rc27)*(CF_03 -
      CS_03*max_lambda_0_00) - rc4*(CF_04 - CS_04*max_lambda_0_00)) + omega_2*(-rc4*(CF_01 - CS_01*max_lambda_0_00) +
      (rc27)*(CF_02 - CS_02*max_lambda_0_00) + (rc26)*(CF_03 - CS_03*max_lambda_0_00));

    rj0 = fmax(rj0, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_12 + CS_12*max_lambda_0_11)*((rc16)*(CF_12 + CS_12*max_lambda_0_11) - rc17*(CF_13 +
      CS_13*max_lambda_0_11) + (rc18)*(CF_14 + CS_14*max_lambda_0_11)) + (rc7)*(CF_13 +
      CS_13*max_lambda_0_11)*((rc19)*(CF_13 + CS_13*max_lambda_0_11) - rc20*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc12)*pow(CF_14 + CS_14*max_lambda_0_11, 2);

    beta_1 = (rc7)*(CF_11 + CS_11*max_lambda_0_11)*((rc11)*(CF_11 + CS_11*max_lambda_0_11) - rc21*(CF_12 +
      CS_12*max_lambda_0_11) + (rc22)*(CF_13 + CS_13*max_lambda_0_11)) + (rc7)*(CF_12 +
      CS_12*max_lambda_0_11)*((rc21)*(CF_12 + CS_12*max_lambda_0_11) - rc21*(CF_13 + CS_13*max_lambda_0_11)) +
      (rc12)*pow(CF_13 + CS_13*max_lambda_0_11, 2);

    beta_2 = (rc7)*(CF_10 + CS_10*max_lambda_0_11)*((rc11)*(CF_10 + CS_10*max_lambda_0_11) + (rc18)*(CF_12 +
      CS_12*max_lambda_0_11)) + (rc7)*(CF_11 + CS_11*max_lambda_0_11)*(-rc20*(CF_10 + CS_10*max_lambda_0_11) +
      (rc19)*(CF_11 + CS_11*max_lambda_0_11) - rc17*(CF_12 + CS_12*max_lambda_0_11)) + (rc22)*pow(CF_12 +
      CS_12*max_lambda_0_11, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc26)*(CF_12 + CS_12*max_lambda_0_11) + (rc27)*(CF_13 + CS_13*max_lambda_0_11) -
      rc4*(CF_14 + CS_14*max_lambda_0_11)) + omega_1*(-rc4*(CF_11 + CS_11*max_lambda_0_11) + (rc27)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc26)*(CF_13 + CS_13*max_lambda_0_11)) + omega_2*((rc26)*(CF_10 + CS_10*max_lambda_0_11)
      - rc28*(CF_11 + CS_11*max_lambda_0_11) + (rc29)*(CF_12 + CS_12*max_lambda_0_11));

    rj1 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_13 - CS_13*max_lambda_0_11)*((rc16)*(CF_13 - CS_13*max_lambda_0_11) - rc17*(CF_14 -
      CS_14*max_lambda_0_11) + (rc18)*(CF_15 - CS_15*max_lambda_0_11)) + (rc7)*(CF_14 -
      CS_14*max_lambda_0_11)*((rc19)*(CF_14 - CS_14*max_lambda_0_11) - rc20*(CF_15 - CS_15*max_lambda_0_11)) +
      (rc12)*pow(CF_15 - CS_15*max_lambda_0_11, 2);

    beta_1 = (rc7)*(CF_12 - CS_12*max_lambda_0_11)*((rc11)*(CF_12 - CS_12*max_lambda_0_11) - rc21*(CF_13 -
      CS_13*max_lambda_0_11) + (rc22)*(CF_14 - CS_14*max_lambda_0_11)) + (rc7)*(CF_13 -
      CS_13*max_lambda_0_11)*((rc21)*(CF_13 - CS_13*max_lambda_0_11) - rc21*(CF_14 - CS_14*max_lambda_0_11)) +
      (rc12)*pow(CF_14 - CS_14*max_lambda_0_11, 2);

    beta_2 = (rc7)*(CF_11 - CS_11*max_lambda_0_11)*((rc11)*(CF_11 - CS_11*max_lambda_0_11) - rc20*(CF_12 -
      CS_12*max_lambda_0_11) + (rc18)*(CF_13 - CS_13*max_lambda_0_11)) + (rc7)*(CF_12 -
      CS_12*max_lambda_0_11)*((rc19)*(CF_12 - CS_12*max_lambda_0_11) - rc17*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc22)*pow(CF_13 - CS_13*max_lambda_0_11, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc29)*(CF_13 - CS_13*max_lambda_0_11) - rc28*(CF_14 - CS_14*max_lambda_0_11) +
      (rc26)*(CF_15 - CS_15*max_lambda_0_11)) + omega_1*((rc26)*(CF_12 - CS_12*max_lambda_0_11) + (rc27)*(CF_13 -
      CS_13*max_lambda_0_11) - rc4*(CF_14 - CS_14*max_lambda_0_11)) + omega_2*(-rc4*(CF_11 - CS_11*max_lambda_0_11) +
      (rc27)*(CF_12 - CS_12*max_lambda_0_11) + (rc26)*(CF_13 - CS_13*max_lambda_0_11));

    rj1 = fmax(rj1, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_22 + CS_22*max_lambda_0_22)*((rc16)*(CF_22 + CS_22*max_lambda_0_22) - rc17*(CF_23 +
      CS_23*max_lambda_0_22) + (rc18)*(CF_24 + CS_24*max_lambda_0_22)) + (rc7)*(CF_23 +
      CS_23*max_lambda_0_22)*((rc19)*(CF_23 + CS_23*max_lambda_0_22) - rc20*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc12)*pow(CF_24 + CS_24*max_lambda_0_22, 2);

    beta_1 = (rc7)*(CF_21 + CS_21*max_lambda_0_22)*((rc11)*(CF_21 + CS_21*max_lambda_0_22) - rc21*(CF_22 +
      CS_22*max_lambda_0_22) + (rc22)*(CF_23 + CS_23*max_lambda_0_22)) + (rc7)*(CF_22 +
      CS_22*max_lambda_0_22)*((rc21)*(CF_22 + CS_22*max_lambda_0_22) - rc21*(CF_23 + CS_23*max_lambda_0_22)) +
      (rc12)*pow(CF_23 + CS_23*max_lambda_0_22, 2);

    beta_2 = (rc7)*(CF_20 + CS_20*max_lambda_0_22)*((rc11)*(CF_20 + CS_20*max_lambda_0_22) + (rc18)*(CF_22 +
      CS_22*max_lambda_0_22)) + (rc7)*(CF_21 + CS_21*max_lambda_0_22)*(-rc20*(CF_20 + CS_20*max_lambda_0_22) +
      (rc19)*(CF_21 + CS_21*max_lambda_0_22) - rc17*(CF_22 + CS_22*max_lambda_0_22)) + (rc22)*pow(CF_22 +
      CS_22*max_lambda_0_22, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc26)*(CF_22 + CS_22*max_lambda_0_22) + (rc27)*(CF_23 + CS_23*max_lambda_0_22) -
      rc4*(CF_24 + CS_24*max_lambda_0_22)) + omega_1*(-rc4*(CF_21 + CS_21*max_lambda_0_22) + (rc27)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc26)*(CF_23 + CS_23*max_lambda_0_22)) + omega_2*((rc26)*(CF_20 + CS_20*max_lambda_0_22)
      - rc28*(CF_21 + CS_21*max_lambda_0_22) + (rc29)*(CF_22 + CS_22*max_lambda_0_22));

    rj2 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_23 - CS_23*max_lambda_0_22)*((rc16)*(CF_23 - CS_23*max_lambda_0_22) - rc17*(CF_24 -
      CS_24*max_lambda_0_22) + (rc18)*(CF_25 - CS_25*max_lambda_0_22)) + (rc7)*(CF_24 -
      CS_24*max_lambda_0_22)*((rc19)*(CF_24 - CS_24*max_lambda_0_22) - rc20*(CF_25 - CS_25*max_lambda_0_22)) +
      (rc12)*pow(CF_25 - CS_25*max_lambda_0_22, 2);

    beta_1 = (rc7)*(CF_22 - CS_22*max_lambda_0_22)*((rc11)*(CF_22 - CS_22*max_lambda_0_22) - rc21*(CF_23 -
      CS_23*max_lambda_0_22) + (rc22)*(CF_24 - CS_24*max_lambda_0_22)) + (rc7)*(CF_23 -
      CS_23*max_lambda_0_22)*((rc21)*(CF_23 - CS_23*max_lambda_0_22) - rc21*(CF_24 - CS_24*max_lambda_0_22)) +
      (rc12)*pow(CF_24 - CS_24*max_lambda_0_22, 2);

    beta_2 = (rc7)*(CF_21 - CS_21*max_lambda_0_22)*((rc11)*(CF_21 - CS_21*max_lambda_0_22) - rc20*(CF_22 -
      CS_22*max_lambda_0_22) + (rc18)*(CF_23 - CS_23*max_lambda_0_22)) + (rc7)*(CF_22 -
      CS_22*max_lambda_0_22)*((rc19)*(CF_22 - CS_22*max_lambda_0_22) - rc17*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc22)*pow(CF_23 - CS_23*max_lambda_0_22, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc29)*(CF_23 - CS_23*max_lambda_0_22) - rc28*(CF_24 - CS_24*max_lambda_0_22) +
      (rc26)*(CF_25 - CS_25*max_lambda_0_22)) + omega_1*((rc26)*(CF_22 - CS_22*max_lambda_0_22) + (rc27)*(CF_23 -
      CS_23*max_lambda_0_22) - rc4*(CF_24 - CS_24*max_lambda_0_22)) + omega_2*(-rc4*(CF_21 - CS_21*max_lambda_0_22) +
      (rc27)*(CF_22 - CS_22*max_lambda_0_22) + (rc26)*(CF_23 - CS_23*max_lambda_0_22));

    rj2 = fmax(rj2, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_32 + CS_32*max_lambda_0_33)*((rc16)*(CF_32 + CS_32*max_lambda_0_33) - rc17*(CF_33 +
      CS_33*max_lambda_0_33) + (rc18)*(CF_34 + CS_34*max_lambda_0_33)) + (rc7)*(CF_33 +
      CS_33*max_lambda_0_33)*((rc19)*(CF_33 + CS_33*max_lambda_0_33) - rc20*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc12)*pow(CF_34 + CS_34*max_lambda_0_33, 2);

    beta_1 = (rc7)*(CF_31 + CS_31*max_lambda_0_33)*((rc11)*(CF_31 + CS_31*max_lambda_0_33) - rc21*(CF_32 +
      CS_32*max_lambda_0_33) + (rc22)*(CF_33 + CS_33*max_lambda_0_33)) + (rc7)*(CF_32 +
      CS_32*max_lambda_0_33)*((rc21)*(CF_32 + CS_32*max_lambda_0_33) - rc21*(CF_33 + CS_33*max_lambda_0_33)) +
      (rc12)*pow(CF_33 + CS_33*max_lambda_0_33, 2);

    beta_2 = (rc7)*(CF_30 + CS_30*max_lambda_0_33)*((rc11)*(CF_30 + CS_30*max_lambda_0_33) + (rc18)*(CF_32 +
      CS_32*max_lambda_0_33)) + (rc7)*(CF_31 + CS_31*max_lambda_0_33)*(-rc20*(CF_30 + CS_30*max_lambda_0_33) +
      (rc19)*(CF_31 + CS_31*max_lambda_0_33) - rc17*(CF_32 + CS_32*max_lambda_0_33)) + (rc22)*pow(CF_32 +
      CS_32*max_lambda_0_33, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc26)*(CF_32 + CS_32*max_lambda_0_33) + (rc27)*(CF_33 + CS_33*max_lambda_0_33) -
      rc4*(CF_34 + CS_34*max_lambda_0_33)) + omega_1*(-rc4*(CF_31 + CS_31*max_lambda_0_33) + (rc27)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc26)*(CF_33 + CS_33*max_lambda_0_33)) + omega_2*((rc26)*(CF_30 + CS_30*max_lambda_0_33)
      - rc28*(CF_31 + CS_31*max_lambda_0_33) + (rc29)*(CF_32 + CS_32*max_lambda_0_33));

    rj3 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_33 - CS_33*max_lambda_0_33)*((rc16)*(CF_33 - CS_33*max_lambda_0_33) - rc17*(CF_34 -
      CS_34*max_lambda_0_33) + (rc18)*(CF_35 - CS_35*max_lambda_0_33)) + (rc7)*(CF_34 -
      CS_34*max_lambda_0_33)*((rc19)*(CF_34 - CS_34*max_lambda_0_33) - rc20*(CF_35 - CS_35*max_lambda_0_33)) +
      (rc12)*pow(CF_35 - CS_35*max_lambda_0_33, 2);

    beta_1 = (rc7)*(CF_32 - CS_32*max_lambda_0_33)*((rc11)*(CF_32 - CS_32*max_lambda_0_33) - rc21*(CF_33 -
      CS_33*max_lambda_0_33) + (rc22)*(CF_34 - CS_34*max_lambda_0_33)) + (rc7)*(CF_33 -
      CS_33*max_lambda_0_33)*((rc21)*(CF_33 - CS_33*max_lambda_0_33) - rc21*(CF_34 - CS_34*max_lambda_0_33)) +
      (rc12)*pow(CF_34 - CS_34*max_lambda_0_33, 2);

    beta_2 = (rc7)*(CF_31 - CS_31*max_lambda_0_33)*((rc11)*(CF_31 - CS_31*max_lambda_0_33) - rc20*(CF_32 -
      CS_32*max_lambda_0_33) + (rc18)*(CF_33 - CS_33*max_lambda_0_33)) + (rc7)*(CF_32 -
      CS_32*max_lambda_0_33)*((rc19)*(CF_32 - CS_32*max_lambda_0_33) - rc17*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc22)*pow(CF_33 - CS_33*max_lambda_0_33, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc29)*(CF_33 - CS_33*max_lambda_0_33) - rc28*(CF_34 - CS_34*max_lambda_0_33) +
      (rc26)*(CF_35 - CS_35*max_lambda_0_33)) + omega_1*((rc26)*(CF_32 - CS_32*max_lambda_0_33) + (rc27)*(CF_33 -
      CS_33*max_lambda_0_33) - rc4*(CF_34 - CS_34*max_lambda_0_33)) + omega_2*(-rc4*(CF_31 - CS_31*max_lambda_0_33) +
      (rc27)*(CF_32 - CS_32*max_lambda_0_33) + (rc26)*(CF_33 - CS_33*max_lambda_0_33));

    rj3 = fmax(rj3, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

   Recon_0 = rj0*(Recon_0 - rc31*(CF_00 - 8*CF_01 + 37*CF_02 + 37*CF_03 - 8*CF_04 + CF_05));

   Recon_1 = rj1*(Recon_1 - rc31*(CF_10 - 8*CF_11 + 37*CF_12 + 37*CF_13 - 8*CF_14 + CF_15));

   Recon_2 = rj2*(Recon_2 - rc31*(CF_20 - 8*CF_21 + 37*CF_22 + 37*CF_23 - 8*CF_24 + CF_25));

   Recon_3 = rj3*(Recon_3 - rc31*(CF_30 - 8*CF_31 + 37*CF_32 + 37*CF_33 - 8*CF_34 + CF_35));

    wk0_B0[OPS_ACC12(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC14(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_a + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_a + AVG_0_u0) + AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC15(0,0)] = 0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_3*inv_AVG_a - AVG_0_rho*Recon_1 + AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC13(0,0)] = -AVG_0_rho*AVG_0_u1*Recon_1 +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(rcinv32*((rc7)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) + AVG_0_a*AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv32*((rc7)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) - AVG_0_a*AVG_0_u0) + Recon_0*((rc7)*pow(AVG_0_u0, 2) + (rc7)*pow(AVG_0_u1, 2));

}

 void opensbliblock00Kernel042(const double *U1_B0, const double *rhoE_B0, const double *D11_B0, const double *rho_B0,
const double *detJ_B0, const double *D10_B0, const double *rhou0_B0, const double *rhou1_B0, const double *a_B0, const
double *u0_B0, const double *u1_B0, const double *p_B0, double *wk7_B0, double *wk4_B0, double *wk6_B0, double
*wk5_B0)
{
   double alpha_2 = 0.0;
   double CF_23 = 0.0;
   double CF_11 = 0.0;
   double max_lambda_1_11 = 0.0;
   double CF_33 = 0.0;
   double CS_13 = 0.0;
   double CF_12 = 0.0;
   double CF_31 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double max_lambda_1_22 = 0.0;
   double CS_23 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double CS_31 = 0.0;
   double rj1 = 0.0;
   double omega_2 = 0.0;
   double CF_30 = 0.0;
   double alpha_1 = 0.0;
   double CF_03 = 0.0;
   double CS_35 = 0.0;
   double CS_25 = 0.0;
   double CS_12 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double CS_30 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CS_32 = 0.0;
   double Recon_2 = 0.0;
   double CS_21 = 0.0;
   double CF_05 = 0.0;
   double CS_11 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double CF_01 = 0.0;
   double CF_10 = 0.0;
   double CF_02 = 0.0;
   double AVG_1_u0 = 0.0;
   double CF_20 = 0.0;
   double CF_15 = 0.0;
   double AVG_1_a = 0.0;
   double CS_03 = 0.0;
   double CS_10 = 0.0;
   double inv_AVG_a = 0.0;
   double CS_01 = 0.0;
   double CS_33 = 0.0;
   double CF_32 = 0.0;
   double CS_02 = 0.0;
   double beta_1 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double CF_14 = 0.0;
   double CS_04 = 0.0;
   double CS_22 = 0.0;
   double omega_0 = 0.0;
   double rj0 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double CF_04 = 0.0;
   double CS_00 = 0.0;
   double CF_13 = 0.0;
   double CF_24 = 0.0;
   double CS_05 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double inv_AVG_rho = 0.0;
   double CS_14 = 0.0;
   double Recon_3 = 0.0;
   double beta_0 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double CF_25 = 0.0;
   double alpha_0 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double max_lambda_1_00 = 0.0;
   double CS_20 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double beta_2 = 0.0;
   double CF_00 = 0.0;
   double omega_1 = 0.0;
   double CS_15 = 0.0;
   double AVG_1_u1 = 0.0;
   double Recon_0 = 0.0;
   double CF_35 = 0.0;
   double CF_34 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_rho = 0.0;
   double CF_21 = 0.0;
   double rj2 = 0.0;
   double CF_22 = 0.0;
   double Recon_1 = 0.0;
   double CS_24 = 0.0;
   double AVG_1_1_LEV_00 = 0.0;
   double CS_34 = 0.0;
   double rj3 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double max_lambda_1_33 = 0.0;
   AVG_1_u1 = (rc7)*(u1_B0[OPS_ACC10(0,0)] + u1_B0[OPS_ACC10(0,1)]);

   AVG_1_a = (rc7)*(a_B0[OPS_ACC8(0,1)] + a_B0[OPS_ACC8(0,0)]);

   AVG_1_rho = (rc7)*(rho_B0[OPS_ACC3(0,1)] + rho_B0[OPS_ACC3(0,0)]);

   AVG_1_u0 = (rc7)*(u0_B0[OPS_ACC9(0,1)] + u0_B0[OPS_ACC9(0,0)]);

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

    AVG_1_1_LEV_00 = -rc7*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_1_1_LEV_01 = gamma_m1*AVG_1_u0*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_02 = gamma_m1*AVG_1_u1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_1_u0, 2) - gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 + pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2));

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1);

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_1_u0, 2) + gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 - pow(AVG_1_u0, 2) - pow(AVG_1_u1, 2));

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u1 + AVG_1_a - AVG_1_u1);

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC7(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC4(0,-2)];

    CF_10 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC6(0,-2)])*detJ_B0[OPS_ACC4(0,-2)];

    CF_20 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC7(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC4(0,-2)];

    CF_30 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,-2)]*rho_B0[OPS_ACC3(0,-2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,-2)]*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,-2)]*rhou1_B0[OPS_ACC7(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-2)]*p_B0[OPS_ACC11(0,-2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-2)]*rhoE_B0[OPS_ACC1(0,-2)])*detJ_B0[OPS_ACC4(0,-2)];

    CF_01 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC7(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC4(0,-1)];

    CF_11 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC6(0,-1)])*detJ_B0[OPS_ACC4(0,-1)];

    CF_21 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC7(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC4(0,-1)];

    CF_31 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,-1)]*rho_B0[OPS_ACC3(0,-1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,-1)]*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,-1)]*rhou1_B0[OPS_ACC7(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-1)]*p_B0[OPS_ACC11(0,-1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,-1)]*rhoE_B0[OPS_ACC1(0,-1)])*detJ_B0[OPS_ACC4(0,-1)];

    CF_02 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_12 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC6(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_22 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_32 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,0)]*rho_B0[OPS_ACC3(0,0)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,0)]*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,0)]*rhou1_B0[OPS_ACC7(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,0)]*p_B0[OPS_ACC11(0,0)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,0)]*rhoE_B0[OPS_ACC1(0,0)])*detJ_B0[OPS_ACC4(0,0)];

    CF_03 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC7(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC4(0,1)];

    CF_13 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC6(0,1)])*detJ_B0[OPS_ACC4(0,1)];

    CF_23 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC7(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC4(0,1)];

    CF_33 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,1)]*rho_B0[OPS_ACC3(0,1)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,1)]*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,1)]*rhou1_B0[OPS_ACC7(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,1)]*p_B0[OPS_ACC11(0,1)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,1)]*rhoE_B0[OPS_ACC1(0,1)])*detJ_B0[OPS_ACC4(0,1)];

    CF_04 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC7(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC4(0,2)];

    CF_14 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC6(0,2)])*detJ_B0[OPS_ACC4(0,2)];

    CF_24 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC7(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC4(0,2)];

    CF_34 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,2)]*rho_B0[OPS_ACC3(0,2)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,2)]*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,2)]*rhou1_B0[OPS_ACC7(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,2)]*p_B0[OPS_ACC11(0,2)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,2)]*rhoE_B0[OPS_ACC1(0,2)])*detJ_B0[OPS_ACC4(0,2)];

    CF_05 = (AVG_1_1_LEV_00*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_01*D10_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_01*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_02*D11_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_02*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC7(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_03*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC4(0,3)];

    CF_15 = (AVG_1_1_LEV_10*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_11*D10_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_11*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC6(0,3)])*detJ_B0[OPS_ACC4(0,3)];

    CF_25 = (AVG_1_1_LEV_20*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_21*D10_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_21*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_22*D11_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_22*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC7(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_23*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC4(0,3)];

    CF_35 = (AVG_1_1_LEV_30*U1_B0[OPS_ACC0(0,3)]*rho_B0[OPS_ACC3(0,3)] +
      AVG_1_1_LEV_31*D10_B0[OPS_ACC5(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_31*U1_B0[OPS_ACC0(0,3)]*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_32*D11_B0[OPS_ACC2(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_32*U1_B0[OPS_ACC0(0,3)]*rhou1_B0[OPS_ACC7(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,3)]*p_B0[OPS_ACC11(0,3)] +
      AVG_1_1_LEV_33*U1_B0[OPS_ACC0(0,3)]*rhoE_B0[OPS_ACC1(0,3)])*detJ_B0[OPS_ACC4(0,3)];

    CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,-2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-2)];

    CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,-1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-1)];

    CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,0)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,0)];

    CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,1)];

    CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,2)];

    CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC7(0,3)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,3)];

   CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-2)];

   CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-1)];

   CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,0)];

   CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,1)];

   CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,2)];

   CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,3)];

    CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,-2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-2)];

    CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,-1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-1)];

    CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,0)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,0)];

    CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,1)];

    CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,2)];

    CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC7(0,3)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,3)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,-2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-2)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,-1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-1)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,0)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,1)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,2)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC7(0,3)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,3)];

    max_lambda_1_00 = fmax(fabs(u1_B0[OPS_ACC10(0,1)]), fmax(fabs(u1_B0[OPS_ACC10(0,2)]),
      fmax(fabs(u1_B0[OPS_ACC10(0,-2)]), fmax(fabs(u1_B0[OPS_ACC10(0,3)]), fmax(fabs(u1_B0[OPS_ACC10(0,-1)]),
      fabs(u1_B0[OPS_ACC10(0,0)]))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(a_B0[OPS_ACC8(0,-2)] + u1_B0[OPS_ACC10(0,-2)]), fmax(fabs(a_B0[OPS_ACC8(0,-1)] +
      u1_B0[OPS_ACC10(0,-1)]), fmax(fabs(a_B0[OPS_ACC8(0,3)] + u1_B0[OPS_ACC10(0,3)]), fmax(fabs(a_B0[OPS_ACC8(0,0)] +
      u1_B0[OPS_ACC10(0,0)]), fmax(fabs(a_B0[OPS_ACC8(0,1)] + u1_B0[OPS_ACC10(0,1)]), fabs(a_B0[OPS_ACC8(0,2)] +
      u1_B0[OPS_ACC10(0,2)]))))));

    max_lambda_1_33 = fmax(fabs(a_B0[OPS_ACC8(0,3)] - u1_B0[OPS_ACC10(0,3)]), fmax(fabs(a_B0[OPS_ACC8(0,-1)] -
      u1_B0[OPS_ACC10(0,-1)]), fmax(fabs(a_B0[OPS_ACC8(0,2)] - u1_B0[OPS_ACC10(0,2)]), fmax(fabs(a_B0[OPS_ACC8(0,1)] -
      u1_B0[OPS_ACC10(0,1)]), fmax(fabs(a_B0[OPS_ACC8(0,-2)] - u1_B0[OPS_ACC10(0,-2)]), fabs(a_B0[OPS_ACC8(0,0)] -
      u1_B0[OPS_ACC10(0,0)]))))));

    beta_0 = (rc7)*(CF_02 + CS_02*max_lambda_1_00)*((rc16)*(CF_02 + CS_02*max_lambda_1_00) - rc17*(CF_03 +
      CS_03*max_lambda_1_00) + (rc18)*(CF_04 + CS_04*max_lambda_1_00)) + (rc7)*(CF_03 +
      CS_03*max_lambda_1_00)*((rc19)*(CF_03 + CS_03*max_lambda_1_00) - rc20*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc12)*pow(CF_04 + CS_04*max_lambda_1_00, 2);

    beta_1 = (rc7)*(CF_01 + CS_01*max_lambda_1_00)*((rc11)*(CF_01 + CS_01*max_lambda_1_00) - rc21*(CF_02 +
      CS_02*max_lambda_1_00) + (rc22)*(CF_03 + CS_03*max_lambda_1_00)) + (rc7)*(CF_02 +
      CS_02*max_lambda_1_00)*((rc21)*(CF_02 + CS_02*max_lambda_1_00) - rc21*(CF_03 + CS_03*max_lambda_1_00)) +
      (rc12)*pow(CF_03 + CS_03*max_lambda_1_00, 2);

    beta_2 = (rc7)*(CF_00 + CS_00*max_lambda_1_00)*((rc11)*(CF_00 + CS_00*max_lambda_1_00) + (rc18)*(CF_02 +
      CS_02*max_lambda_1_00)) + (rc7)*(CF_01 + CS_01*max_lambda_1_00)*(-rc20*(CF_00 + CS_00*max_lambda_1_00) +
      (rc19)*(CF_01 + CS_01*max_lambda_1_00) - rc17*(CF_02 + CS_02*max_lambda_1_00)) + (rc22)*pow(CF_02 +
      CS_02*max_lambda_1_00, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc26)*(CF_02 + CS_02*max_lambda_1_00) + (rc27)*(CF_03 + CS_03*max_lambda_1_00) -
      rc4*(CF_04 + CS_04*max_lambda_1_00)) + omega_1*(-rc4*(CF_01 + CS_01*max_lambda_1_00) + (rc27)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc26)*(CF_03 + CS_03*max_lambda_1_00)) + omega_2*((rc26)*(CF_00 + CS_00*max_lambda_1_00)
      - rc28*(CF_01 + CS_01*max_lambda_1_00) + (rc29)*(CF_02 + CS_02*max_lambda_1_00));

    rj0 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_03 - CS_03*max_lambda_1_00)*((rc16)*(CF_03 - CS_03*max_lambda_1_00) - rc17*(CF_04 -
      CS_04*max_lambda_1_00) + (rc18)*(CF_05 - CS_05*max_lambda_1_00)) + (rc7)*(CF_04 -
      CS_04*max_lambda_1_00)*((rc19)*(CF_04 - CS_04*max_lambda_1_00) - rc20*(CF_05 - CS_05*max_lambda_1_00)) +
      (rc12)*pow(CF_05 - CS_05*max_lambda_1_00, 2);

    beta_1 = (rc7)*(CF_02 - CS_02*max_lambda_1_00)*((rc11)*(CF_02 - CS_02*max_lambda_1_00) - rc21*(CF_03 -
      CS_03*max_lambda_1_00) + (rc22)*(CF_04 - CS_04*max_lambda_1_00)) + (rc7)*(CF_03 -
      CS_03*max_lambda_1_00)*((rc21)*(CF_03 - CS_03*max_lambda_1_00) - rc21*(CF_04 - CS_04*max_lambda_1_00)) +
      (rc12)*pow(CF_04 - CS_04*max_lambda_1_00, 2);

    beta_2 = (rc7)*(CF_01 - CS_01*max_lambda_1_00)*((rc11)*(CF_01 - CS_01*max_lambda_1_00) - rc20*(CF_02 -
      CS_02*max_lambda_1_00) + (rc18)*(CF_03 - CS_03*max_lambda_1_00)) + (rc7)*(CF_02 -
      CS_02*max_lambda_1_00)*((rc19)*(CF_02 - CS_02*max_lambda_1_00) - rc17*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc22)*pow(CF_03 - CS_03*max_lambda_1_00, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = Recon_0 + omega_0*((rc29)*(CF_03 - CS_03*max_lambda_1_00) - rc28*(CF_04 - CS_04*max_lambda_1_00) +
      (rc26)*(CF_05 - CS_05*max_lambda_1_00)) + omega_1*((rc26)*(CF_02 - CS_02*max_lambda_1_00) + (rc27)*(CF_03 -
      CS_03*max_lambda_1_00) - rc4*(CF_04 - CS_04*max_lambda_1_00)) + omega_2*(-rc4*(CF_01 - CS_01*max_lambda_1_00) +
      (rc27)*(CF_02 - CS_02*max_lambda_1_00) + (rc26)*(CF_03 - CS_03*max_lambda_1_00));

    rj0 = fmax(rj0, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_12 + CS_12*max_lambda_1_11)*((rc16)*(CF_12 + CS_12*max_lambda_1_11) - rc17*(CF_13 +
      CS_13*max_lambda_1_11) + (rc18)*(CF_14 + CS_14*max_lambda_1_11)) + (rc7)*(CF_13 +
      CS_13*max_lambda_1_11)*((rc19)*(CF_13 + CS_13*max_lambda_1_11) - rc20*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc12)*pow(CF_14 + CS_14*max_lambda_1_11, 2);

    beta_1 = (rc7)*(CF_11 + CS_11*max_lambda_1_11)*((rc11)*(CF_11 + CS_11*max_lambda_1_11) - rc21*(CF_12 +
      CS_12*max_lambda_1_11) + (rc22)*(CF_13 + CS_13*max_lambda_1_11)) + (rc7)*(CF_12 +
      CS_12*max_lambda_1_11)*((rc21)*(CF_12 + CS_12*max_lambda_1_11) - rc21*(CF_13 + CS_13*max_lambda_1_11)) +
      (rc12)*pow(CF_13 + CS_13*max_lambda_1_11, 2);

    beta_2 = (rc7)*(CF_10 + CS_10*max_lambda_1_11)*((rc11)*(CF_10 + CS_10*max_lambda_1_11) + (rc18)*(CF_12 +
      CS_12*max_lambda_1_11)) + (rc7)*(CF_11 + CS_11*max_lambda_1_11)*(-rc20*(CF_10 + CS_10*max_lambda_1_11) +
      (rc19)*(CF_11 + CS_11*max_lambda_1_11) - rc17*(CF_12 + CS_12*max_lambda_1_11)) + (rc22)*pow(CF_12 +
      CS_12*max_lambda_1_11, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc26)*(CF_12 + CS_12*max_lambda_1_11) + (rc27)*(CF_13 + CS_13*max_lambda_1_11) -
      rc4*(CF_14 + CS_14*max_lambda_1_11)) + omega_1*(-rc4*(CF_11 + CS_11*max_lambda_1_11) + (rc27)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc26)*(CF_13 + CS_13*max_lambda_1_11)) + omega_2*((rc26)*(CF_10 + CS_10*max_lambda_1_11)
      - rc28*(CF_11 + CS_11*max_lambda_1_11) + (rc29)*(CF_12 + CS_12*max_lambda_1_11));

    rj1 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_13 - CS_13*max_lambda_1_11)*((rc16)*(CF_13 - CS_13*max_lambda_1_11) - rc17*(CF_14 -
      CS_14*max_lambda_1_11) + (rc18)*(CF_15 - CS_15*max_lambda_1_11)) + (rc7)*(CF_14 -
      CS_14*max_lambda_1_11)*((rc19)*(CF_14 - CS_14*max_lambda_1_11) - rc20*(CF_15 - CS_15*max_lambda_1_11)) +
      (rc12)*pow(CF_15 - CS_15*max_lambda_1_11, 2);

    beta_1 = (rc7)*(CF_12 - CS_12*max_lambda_1_11)*((rc11)*(CF_12 - CS_12*max_lambda_1_11) - rc21*(CF_13 -
      CS_13*max_lambda_1_11) + (rc22)*(CF_14 - CS_14*max_lambda_1_11)) + (rc7)*(CF_13 -
      CS_13*max_lambda_1_11)*((rc21)*(CF_13 - CS_13*max_lambda_1_11) - rc21*(CF_14 - CS_14*max_lambda_1_11)) +
      (rc12)*pow(CF_14 - CS_14*max_lambda_1_11, 2);

    beta_2 = (rc7)*(CF_11 - CS_11*max_lambda_1_11)*((rc11)*(CF_11 - CS_11*max_lambda_1_11) - rc20*(CF_12 -
      CS_12*max_lambda_1_11) + (rc18)*(CF_13 - CS_13*max_lambda_1_11)) + (rc7)*(CF_12 -
      CS_12*max_lambda_1_11)*((rc19)*(CF_12 - CS_12*max_lambda_1_11) - rc17*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc22)*pow(CF_13 - CS_13*max_lambda_1_11, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = Recon_1 + omega_0*((rc29)*(CF_13 - CS_13*max_lambda_1_11) - rc28*(CF_14 - CS_14*max_lambda_1_11) +
      (rc26)*(CF_15 - CS_15*max_lambda_1_11)) + omega_1*((rc26)*(CF_12 - CS_12*max_lambda_1_11) + (rc27)*(CF_13 -
      CS_13*max_lambda_1_11) - rc4*(CF_14 - CS_14*max_lambda_1_11)) + omega_2*(-rc4*(CF_11 - CS_11*max_lambda_1_11) +
      (rc27)*(CF_12 - CS_12*max_lambda_1_11) + (rc26)*(CF_13 - CS_13*max_lambda_1_11));

    rj1 = fmax(rj1, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_22 + CS_22*max_lambda_1_22)*((rc16)*(CF_22 + CS_22*max_lambda_1_22) - rc17*(CF_23 +
      CS_23*max_lambda_1_22) + (rc18)*(CF_24 + CS_24*max_lambda_1_22)) + (rc7)*(CF_23 +
      CS_23*max_lambda_1_22)*((rc19)*(CF_23 + CS_23*max_lambda_1_22) - rc20*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc12)*pow(CF_24 + CS_24*max_lambda_1_22, 2);

    beta_1 = (rc7)*(CF_21 + CS_21*max_lambda_1_22)*((rc11)*(CF_21 + CS_21*max_lambda_1_22) - rc21*(CF_22 +
      CS_22*max_lambda_1_22) + (rc22)*(CF_23 + CS_23*max_lambda_1_22)) + (rc7)*(CF_22 +
      CS_22*max_lambda_1_22)*((rc21)*(CF_22 + CS_22*max_lambda_1_22) - rc21*(CF_23 + CS_23*max_lambda_1_22)) +
      (rc12)*pow(CF_23 + CS_23*max_lambda_1_22, 2);

    beta_2 = (rc7)*(CF_20 + CS_20*max_lambda_1_22)*((rc11)*(CF_20 + CS_20*max_lambda_1_22) + (rc18)*(CF_22 +
      CS_22*max_lambda_1_22)) + (rc7)*(CF_21 + CS_21*max_lambda_1_22)*(-rc20*(CF_20 + CS_20*max_lambda_1_22) +
      (rc19)*(CF_21 + CS_21*max_lambda_1_22) - rc17*(CF_22 + CS_22*max_lambda_1_22)) + (rc22)*pow(CF_22 +
      CS_22*max_lambda_1_22, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc26)*(CF_22 + CS_22*max_lambda_1_22) + (rc27)*(CF_23 + CS_23*max_lambda_1_22) -
      rc4*(CF_24 + CS_24*max_lambda_1_22)) + omega_1*(-rc4*(CF_21 + CS_21*max_lambda_1_22) + (rc27)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc26)*(CF_23 + CS_23*max_lambda_1_22)) + omega_2*((rc26)*(CF_20 + CS_20*max_lambda_1_22)
      - rc28*(CF_21 + CS_21*max_lambda_1_22) + (rc29)*(CF_22 + CS_22*max_lambda_1_22));

    rj2 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_23 - CS_23*max_lambda_1_22)*((rc16)*(CF_23 - CS_23*max_lambda_1_22) - rc17*(CF_24 -
      CS_24*max_lambda_1_22) + (rc18)*(CF_25 - CS_25*max_lambda_1_22)) + (rc7)*(CF_24 -
      CS_24*max_lambda_1_22)*((rc19)*(CF_24 - CS_24*max_lambda_1_22) - rc20*(CF_25 - CS_25*max_lambda_1_22)) +
      (rc12)*pow(CF_25 - CS_25*max_lambda_1_22, 2);

    beta_1 = (rc7)*(CF_22 - CS_22*max_lambda_1_22)*((rc11)*(CF_22 - CS_22*max_lambda_1_22) - rc21*(CF_23 -
      CS_23*max_lambda_1_22) + (rc22)*(CF_24 - CS_24*max_lambda_1_22)) + (rc7)*(CF_23 -
      CS_23*max_lambda_1_22)*((rc21)*(CF_23 - CS_23*max_lambda_1_22) - rc21*(CF_24 - CS_24*max_lambda_1_22)) +
      (rc12)*pow(CF_24 - CS_24*max_lambda_1_22, 2);

    beta_2 = (rc7)*(CF_21 - CS_21*max_lambda_1_22)*((rc11)*(CF_21 - CS_21*max_lambda_1_22) - rc20*(CF_22 -
      CS_22*max_lambda_1_22) + (rc18)*(CF_23 - CS_23*max_lambda_1_22)) + (rc7)*(CF_22 -
      CS_22*max_lambda_1_22)*((rc19)*(CF_22 - CS_22*max_lambda_1_22) - rc17*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc22)*pow(CF_23 - CS_23*max_lambda_1_22, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = Recon_2 + omega_0*((rc29)*(CF_23 - CS_23*max_lambda_1_22) - rc28*(CF_24 - CS_24*max_lambda_1_22) +
      (rc26)*(CF_25 - CS_25*max_lambda_1_22)) + omega_1*((rc26)*(CF_22 - CS_22*max_lambda_1_22) + (rc27)*(CF_23 -
      CS_23*max_lambda_1_22) - rc4*(CF_24 - CS_24*max_lambda_1_22)) + omega_2*(-rc4*(CF_21 - CS_21*max_lambda_1_22) +
      (rc27)*(CF_22 - CS_22*max_lambda_1_22) + (rc26)*(CF_23 - CS_23*max_lambda_1_22));

    rj2 = fmax(rj2, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

    beta_0 = (rc7)*(CF_32 + CS_32*max_lambda_1_33)*((rc16)*(CF_32 + CS_32*max_lambda_1_33) - rc17*(CF_33 +
      CS_33*max_lambda_1_33) + (rc18)*(CF_34 + CS_34*max_lambda_1_33)) + (rc7)*(CF_33 +
      CS_33*max_lambda_1_33)*((rc19)*(CF_33 + CS_33*max_lambda_1_33) - rc20*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc12)*pow(CF_34 + CS_34*max_lambda_1_33, 2);

    beta_1 = (rc7)*(CF_31 + CS_31*max_lambda_1_33)*((rc11)*(CF_31 + CS_31*max_lambda_1_33) - rc21*(CF_32 +
      CS_32*max_lambda_1_33) + (rc22)*(CF_33 + CS_33*max_lambda_1_33)) + (rc7)*(CF_32 +
      CS_32*max_lambda_1_33)*((rc21)*(CF_32 + CS_32*max_lambda_1_33) - rc21*(CF_33 + CS_33*max_lambda_1_33)) +
      (rc12)*pow(CF_33 + CS_33*max_lambda_1_33, 2);

    beta_2 = (rc7)*(CF_30 + CS_30*max_lambda_1_33)*((rc11)*(CF_30 + CS_30*max_lambda_1_33) + (rc18)*(CF_32 +
      CS_32*max_lambda_1_33)) + (rc7)*(CF_31 + CS_31*max_lambda_1_33)*(-rc20*(CF_30 + CS_30*max_lambda_1_33) +
      (rc19)*(CF_31 + CS_31*max_lambda_1_33) - rc17*(CF_32 + CS_32*max_lambda_1_33)) + (rc22)*pow(CF_32 +
      CS_32*max_lambda_1_33, 2);

   alpha_0 = (rc23)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc25)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc26)*(CF_32 + CS_32*max_lambda_1_33) + (rc27)*(CF_33 + CS_33*max_lambda_1_33) -
      rc4*(CF_34 + CS_34*max_lambda_1_33)) + omega_1*(-rc4*(CF_31 + CS_31*max_lambda_1_33) + (rc27)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc26)*(CF_33 + CS_33*max_lambda_1_33)) + omega_2*((rc26)*(CF_30 + CS_30*max_lambda_1_33)
      - rc28*(CF_31 + CS_31*max_lambda_1_33) + (rc29)*(CF_32 + CS_32*max_lambda_1_33));

    rj3 = (pow(fabs((rc30)*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs(10*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2);

    beta_0 = (rc7)*(CF_33 - CS_33*max_lambda_1_33)*((rc16)*(CF_33 - CS_33*max_lambda_1_33) - rc17*(CF_34 -
      CS_34*max_lambda_1_33) + (rc18)*(CF_35 - CS_35*max_lambda_1_33)) + (rc7)*(CF_34 -
      CS_34*max_lambda_1_33)*((rc19)*(CF_34 - CS_34*max_lambda_1_33) - rc20*(CF_35 - CS_35*max_lambda_1_33)) +
      (rc12)*pow(CF_35 - CS_35*max_lambda_1_33, 2);

    beta_1 = (rc7)*(CF_32 - CS_32*max_lambda_1_33)*((rc11)*(CF_32 - CS_32*max_lambda_1_33) - rc21*(CF_33 -
      CS_33*max_lambda_1_33) + (rc22)*(CF_34 - CS_34*max_lambda_1_33)) + (rc7)*(CF_33 -
      CS_33*max_lambda_1_33)*((rc21)*(CF_33 - CS_33*max_lambda_1_33) - rc21*(CF_34 - CS_34*max_lambda_1_33)) +
      (rc12)*pow(CF_34 - CS_34*max_lambda_1_33, 2);

    beta_2 = (rc7)*(CF_31 - CS_31*max_lambda_1_33)*((rc11)*(CF_31 - CS_31*max_lambda_1_33) - rc20*(CF_32 -
      CS_32*max_lambda_1_33) + (rc18)*(CF_33 - CS_33*max_lambda_1_33)) + (rc7)*(CF_32 -
      CS_32*max_lambda_1_33)*((rc19)*(CF_32 - CS_32*max_lambda_1_33) - rc17*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc22)*pow(CF_33 - CS_33*max_lambda_1_33, 2);

   alpha_0 = (rc25)/pow(beta_0 + 1.0e-6, 2);

   alpha_1 = (rc24)/pow(beta_1 + 1.0e-6, 2);

   alpha_2 = (rc23)/pow(beta_2 + 1.0e-6, 2);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   omega_0 = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = Recon_3 + omega_0*((rc29)*(CF_33 - CS_33*max_lambda_1_33) - rc28*(CF_34 - CS_34*max_lambda_1_33) +
      (rc26)*(CF_35 - CS_35*max_lambda_1_33)) + omega_1*((rc26)*(CF_32 - CS_32*max_lambda_1_33) + (rc27)*(CF_33 -
      CS_33*max_lambda_1_33) - rc4*(CF_34 - CS_34*max_lambda_1_33)) + omega_2*(-rc4*(CF_31 - CS_31*max_lambda_1_33) +
      (rc27)*(CF_32 - CS_32*max_lambda_1_33) + (rc26)*(CF_33 - CS_33*max_lambda_1_33));

    rj3 = fmax(rj3, (pow(fabs(10*omega_0 - 1.0), sensor_theta) + pow(fabs((rc16)*omega_1 - 1.0), sensor_theta) +
      pow(fabs((rc30)*omega_2 - 1.0), sensor_theta))/(pow(9.0, sensor_theta) + 2));

   Recon_0 = rj0*(Recon_0 - rc31*(CF_00 - 8*CF_01 + 37*CF_02 + 37*CF_03 - 8*CF_04 + CF_05));

   Recon_1 = rj1*(Recon_1 - rc31*(CF_10 - 8*CF_11 + 37*CF_12 + 37*CF_13 - 8*CF_14 + CF_15));

   Recon_2 = rj2*(Recon_2 - rc31*(CF_20 - 8*CF_21 + 37*CF_22 + 37*CF_23 - 8*CF_24 + CF_25));

   Recon_3 = rj3*(Recon_3 - rc31*(CF_30 - 8*CF_31 + 37*CF_32 + 37*CF_33 - 8*CF_34 + CF_35));

    wk4_B0[OPS_ACC13(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    wk5_B0[OPS_ACC15(0,0)] = 0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_3*inv_AVG_a + AVG_1_rho*Recon_1 + AVG_1_u0*Recon_0;

    wk6_B0[OPS_ACC14(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_a + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_a + AVG_1_u1) + AVG_1_u1*Recon_0;

    wk7_B0[OPS_ACC12(0,0)] = AVG_1_rho*AVG_1_u0*Recon_1 +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv32*((rc7)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv32*((rc7)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*AVG_1_u1) + Recon_0*((rc7)*pow(AVG_1_u0, 2) + (rc7)*pow(AVG_1_u1, 2));

}

 void opensbliblock00Kernel045(const double *u0_B0, const double *D11_B0, const double *D00_B0, const double *D10_B0,
const double *Mach_sensor_B0, const double *u1_B0, const double *D01_B0, double *kappa_B0, const int *idx)
{
   double localeval_2 = 0.0;
   double localeval_0 = 0.0;
   double localeval_1 = 0.0;
   double localeval_3 = 0.0;
    localeval_0 = (rc4)*inv_0*(-u1_B0[OPS_ACC5(2,0)] + u1_B0[OPS_ACC5(-2,0)] + 8*u1_B0[OPS_ACC5(1,0)] -
      8*u1_B0[OPS_ACC5(-1,0)]);

    localeval_1 = ((idx[1] == 0) ? (
   inv_1*(-8.34657956545823e-15*u0_B0[OPS_ACC0(0,4)] +
      0.333333333333356*u0_B0[OPS_ACC0(0,3)] - 1.50000000000003*u0_B0[OPS_ACC0(0,2)] +
      3.00000000000002*u0_B0[OPS_ACC0(0,1)] + 1.06910315192207e-15*u0_B0[OPS_ACC0(0,5)] -
      1.83333333333334*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.00571369039775442*u0_B0[OPS_ACC0(0,4)] -
      0.0658051057710389*u0_B0[OPS_ACC0(0,3)] - 0.376283677513354*u0_B0[OPS_ACC0(0,-1)] +
      0.0394168524399447*u0_B0[OPS_ACC0(0,2)] + 0.719443173328855*u0_B0[OPS_ACC0(0,1)] -
      0.322484932882161*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 2) ? (
   inv_1*(-0.00412637789557492*u0_B0[OPS_ACC0(0,3)]
      + 0.113446470384241*u0_B0[OPS_ACC0(0,-2)] - 0.791245592765872*u0_B0[OPS_ACC0(0,-1)] -
      0.0367146847001261*u0_B0[OPS_ACC0(0,2)] + 0.521455851089587*u0_B0[OPS_ACC0(0,1)] +
      0.197184333887745*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*u0_B0[OPS_ACC0(0,-2)] -
      0.727822147724592*u0_B0[OPS_ACC0(0,-1)] - 0.082033432844602*u0_B0[OPS_ACC0(0,2)] -
      0.00932597985049999*u0_B0[OPS_ACC0(0,-3)] + 0.652141084861241*u0_B0[OPS_ACC0(0,1)] +
      0.0451033223343881*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(1.50000000000003*u0_B0[OPS_ACC0(0,-2)] - 3.00000000000002*u0_B0[OPS_ACC0(0,-1)] -
      0.333333333333356*u0_B0[OPS_ACC0(0,-3)] + 8.34657956545823e-15*u0_B0[OPS_ACC0(0,-4)] -
      1.06910315192207e-15*u0_B0[OPS_ACC0(0,-5)] + 1.83333333333334*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*u0_B0[OPS_ACC0(0,-2)] - 0.719443173328855*u0_B0[OPS_ACC0(0,-1)] +
      0.0658051057710389*u0_B0[OPS_ACC0(0,-3)] + 0.376283677513354*u0_B0[OPS_ACC0(0,1)] -
      0.00571369039775442*u0_B0[OPS_ACC0(0,-4)] + 0.322484932882161*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.0367146847001261*u0_B0[OPS_ACC0(0,-2)] - 0.521455851089587*u0_B0[OPS_ACC0(0,-1)] -
      0.113446470384241*u0_B0[OPS_ACC0(0,2)] + 0.00412637789557492*u0_B0[OPS_ACC0(0,-3)] +
      0.791245592765872*u0_B0[OPS_ACC0(0,1)] - 0.197184333887745*u0_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.00932597985049999*u0_B0[OPS_ACC0(0,3)] + 0.082033432844602*u0_B0[OPS_ACC0(0,-2)] -
      0.652141084861241*u0_B0[OPS_ACC0(0,-1)] - 0.121937153224065*u0_B0[OPS_ACC0(0,2)] +
      0.727822147724592*u0_B0[OPS_ACC0(0,1)] - 0.0451033223343881*u0_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc4)*inv_1*(-8*u0_B0[OPS_ACC0(0,-1)] + u0_B0[OPS_ACC0(0,-2)] - u0_B0[OPS_ACC0(0,2)] +
      8*u0_B0[OPS_ACC0(0,1)])
)))))))));

    localeval_2 = ((idx[1] == 0) ? (
   inv_1*(3.00000000000002*u1_B0[OPS_ACC5(0,1)] -
      1.50000000000003*u1_B0[OPS_ACC5(0,2)] + 0.333333333333356*u1_B0[OPS_ACC5(0,3)] -
      8.34657956545823e-15*u1_B0[OPS_ACC5(0,4)] - 1.83333333333334*u1_B0[OPS_ACC5(0,0)] +
      1.06910315192207e-15*u1_B0[OPS_ACC5(0,5)])
)
: ((idx[1] == 1) ? (
   inv_1*(0.719443173328855*u1_B0[OPS_ACC5(0,1)]
      + 0.0394168524399447*u1_B0[OPS_ACC5(0,2)] - 0.0658051057710389*u1_B0[OPS_ACC5(0,3)] +
      0.00571369039775442*u1_B0[OPS_ACC5(0,4)] - 0.322484932882161*u1_B0[OPS_ACC5(0,0)] -
      0.376283677513354*u1_B0[OPS_ACC5(0,-1)])
)
: ((idx[1] == 2) ? (
   inv_1*(0.521455851089587*u1_B0[OPS_ACC5(0,1)] -
      0.791245592765872*u1_B0[OPS_ACC5(0,-1)] - 0.0367146847001261*u1_B0[OPS_ACC5(0,2)] -
      0.00412637789557492*u1_B0[OPS_ACC5(0,3)] + 0.197184333887745*u1_B0[OPS_ACC5(0,0)] +
      0.113446470384241*u1_B0[OPS_ACC5(0,-2)])
)
: ((idx[1] == 3) ? (
   inv_1*(0.652141084861241*u1_B0[OPS_ACC5(0,1)] +
      0.121937153224065*u1_B0[OPS_ACC5(0,-2)] - 0.082033432844602*u1_B0[OPS_ACC5(0,2)] -
      0.00932597985049999*u1_B0[OPS_ACC5(0,-3)] + 0.0451033223343881*u1_B0[OPS_ACC5(0,0)] -
      0.727822147724592*u1_B0[OPS_ACC5(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_1*(-3.00000000000002*u1_B0[OPS_ACC5(0,-1)] - 1.06910315192207e-15*u1_B0[OPS_ACC5(0,-5)] +
      8.34657956545823e-15*u1_B0[OPS_ACC5(0,-4)] - 0.333333333333356*u1_B0[OPS_ACC5(0,-3)] +
      1.83333333333334*u1_B0[OPS_ACC5(0,0)] + 1.50000000000003*u1_B0[OPS_ACC5(0,-2)])
)
: ((idx[1] == block0np1 - 2) ?
      (
   inv_1*(0.376283677513354*u1_B0[OPS_ACC5(0,1)] - 0.719443173328855*u1_B0[OPS_ACC5(0,-1)] -
      0.00571369039775442*u1_B0[OPS_ACC5(0,-4)] + 0.0658051057710389*u1_B0[OPS_ACC5(0,-3)] +
      0.322484932882161*u1_B0[OPS_ACC5(0,0)] - 0.0394168524399447*u1_B0[OPS_ACC5(0,-2)])
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.791245592765872*u1_B0[OPS_ACC5(0,1)] + 0.0367146847001261*u1_B0[OPS_ACC5(0,-2)] -
      0.113446470384241*u1_B0[OPS_ACC5(0,2)] + 0.00412637789557492*u1_B0[OPS_ACC5(0,-3)] -
      0.197184333887745*u1_B0[OPS_ACC5(0,0)] - 0.521455851089587*u1_B0[OPS_ACC5(0,-1)])
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.727822147724592*u1_B0[OPS_ACC5(0,1)] + 0.082033432844602*u1_B0[OPS_ACC5(0,-2)] -
      0.121937153224065*u1_B0[OPS_ACC5(0,2)] + 0.00932597985049999*u1_B0[OPS_ACC5(0,3)] -
      0.0451033223343881*u1_B0[OPS_ACC5(0,0)] - 0.652141084861241*u1_B0[OPS_ACC5(0,-1)])
)
: (
  
      (rc4)*inv_1*(8*u1_B0[OPS_ACC5(0,1)] - u1_B0[OPS_ACC5(0,2)] + u1_B0[OPS_ACC5(0,-2)] -
      8*u1_B0[OPS_ACC5(0,-1)])
)))))))));

    localeval_3 = (rc4)*inv_0*(-8*u0_B0[OPS_ACC0(-1,0)] + 8*u0_B0[OPS_ACC0(1,0)] + u0_B0[OPS_ACC0(-2,0)] -
      u0_B0[OPS_ACC0(2,0)]);

    kappa_B0[OPS_ACC7(0,0)] = (-rc7*tanh(250.0*localeval_0*D01_B0[OPS_ACC6(0,0)] +
      250.0*localeval_1*D10_B0[OPS_ACC3(0,0)] + 250.0*localeval_2*D11_B0[OPS_ACC1(0,0)] +
      250.0*localeval_3*D00_B0[OPS_ACC2(0,0)] + 2.5) + rc7)*pow(localeval_0*D01_B0[OPS_ACC6(0,0)] +
      localeval_1*D10_B0[OPS_ACC3(0,0)] + localeval_2*D11_B0[OPS_ACC1(0,0)] + localeval_3*D00_B0[OPS_ACC2(0,0)],
      2)*Mach_sensor_B0[OPS_ACC4(0,0)]/(epsilon + pow(localeval_0*D00_B0[OPS_ACC2(0,0)] -
      localeval_1*D11_B0[OPS_ACC1(0,0)] + localeval_2*D10_B0[OPS_ACC3(0,0)] - localeval_3*D01_B0[OPS_ACC6(0,0)], 2) +
      pow(localeval_0*D01_B0[OPS_ACC6(0,0)] + localeval_1*D10_B0[OPS_ACC3(0,0)] + localeval_2*D11_B0[OPS_ACC1(0,0)] +
      localeval_3*D00_B0[OPS_ACC2(0,0)], 2));

}

 void opensbliblock00Kernel046(const double *wk4_B0, const double *detJ_B0, const double *wk3_B0, const double *wk1_B0,
const double *wk7_B0, const double *wk2_B0, const double *kappa_B0, const double *wk0_B0, const double *wk6_B0, const
double *wk5_B0, double *rhou0_B0, double *rhou1_B0, double *rho_B0, double *rhoE_B0, const int *idx)
{
   double Wall = 0.0;
   double kappa_max = 0.0;
   double Grid_1 = 0.0;
   double Grid_0 = 0.0;
    kappa_max = fmax(kappa_B0[OPS_ACC6(0,2)], fmax(kappa_B0[OPS_ACC6(-1,0)], fmax(kappa_B0[OPS_ACC6(0,1)],
      fmax(kappa_B0[OPS_ACC6(-2,0)], fmax(kappa_B0[OPS_ACC6(1,0)], fmax(kappa_B0[OPS_ACC6(0,-2)],
      fmax(kappa_B0[OPS_ACC6(0,-1)], fmax(kappa_B0[OPS_ACC6(0,0)], kappa_B0[OPS_ACC6(2,0)]))))))));

   Grid_0 = idx[0];

   Grid_1 = idx[1];

   Wall = ((Grid_1 <= 5) ? (
   0
)
: (
   1
));

    rho_B0[OPS_ACC12(0,0)] = -dt*shock_filter_control*Wall*kappa_max*(inv_0*(wk0_B0[OPS_ACC7(0,0)] -
      wk0_B0[OPS_ACC7(-1,0)]) + inv_1*(wk4_B0[OPS_ACC0(0,0)] - wk4_B0[OPS_ACC0(0,-1)]))/detJ_B0[OPS_ACC1(0,0)] +
      rho_B0[OPS_ACC12(0,0)];

    rhou0_B0[OPS_ACC10(0,0)] = -dt*shock_filter_control*Wall*kappa_max*(inv_0*(wk1_B0[OPS_ACC3(0,0)] -
      wk1_B0[OPS_ACC3(-1,0)]) + inv_1*(wk5_B0[OPS_ACC9(0,0)] - wk5_B0[OPS_ACC9(0,-1)]))/detJ_B0[OPS_ACC1(0,0)] +
      rhou0_B0[OPS_ACC10(0,0)];

    rhou1_B0[OPS_ACC11(0,0)] = -dt*shock_filter_control*Wall*kappa_max*(inv_0*(-wk2_B0[OPS_ACC5(-1,0)] +
      wk2_B0[OPS_ACC5(0,0)]) + inv_1*(wk6_B0[OPS_ACC8(0,0)] - wk6_B0[OPS_ACC8(0,-1)]))/detJ_B0[OPS_ACC1(0,0)] +
      rhou1_B0[OPS_ACC11(0,0)];

    rhoE_B0[OPS_ACC13(0,0)] = -dt*shock_filter_control*Wall*kappa_max*(inv_0*(-wk3_B0[OPS_ACC2(-1,0)] +
      wk3_B0[OPS_ACC2(0,0)]) + inv_1*(wk7_B0[OPS_ACC4(0,0)] - wk7_B0[OPS_ACC4(0,-1)]))/detJ_B0[OPS_ACC1(0,0)] +
      rhoE_B0[OPS_ACC13(0,0)];

}

void opensbliblock00Kernel047(double *rhou0_B0, double *rhou1_B0, double *rho_B0, double *rhoE_B0, const int *idx)
{
   double rho_filtered = 0.0;
   double rhou0_yfiltered = 0.0;
   double rhou0_filtered = 0.0;
   double rhou1_yfiltered = 0.0;
   double rhoE_filtered = 0.0;
   double rhou1_xfiltered = 0.0;
   double rhoE_xfiltered = 0.0;
   double rho_xfiltered = 0.0;
   double rho_yfiltered = 0.0;
   double rhoE_yfiltered = 0.0;
   double rhou1_filtered = 0.0;
   double rhou0_xfiltered = 0.0;
    rho_xfiltered = 0.0009765625*rho_B0[OPS_ACC2(5,0)] + 0.1171875*rho_B0[OPS_ACC2(2,0)] +
      0.009765625*rho_B0[OPS_ACC2(4,0)] + 0.1171875*rho_B0[OPS_ACC2(-2,0)] + 0.205078125*rho_B0[OPS_ACC2(-1,0)] +
      0.205078125*rho_B0[OPS_ACC2(1,0)] + 0.0009765625*rho_B0[OPS_ACC2(-5,0)] + 0.0439453125*rho_B0[OPS_ACC2(-3,0)] +
      0.24609375*rho_B0[OPS_ACC2(0,0)] + 0.009765625*rho_B0[OPS_ACC2(-4,0)] + 0.0439453125*rho_B0[OPS_ACC2(3,0)];

    rhou0_xfiltered = 0.0009765625*rhou0_B0[OPS_ACC0(5,0)] + 0.0439453125*rhou0_B0[OPS_ACC0(3,0)] +
      0.1171875*rhou0_B0[OPS_ACC0(-2,0)] + 0.205078125*rhou0_B0[OPS_ACC0(-1,0)] + 0.009765625*rhou0_B0[OPS_ACC0(4,0)] +
      0.1171875*rhou0_B0[OPS_ACC0(2,0)] + 0.0439453125*rhou0_B0[OPS_ACC0(-3,0)] + 0.0009765625*rhou0_B0[OPS_ACC0(-5,0)]
      + 0.205078125*rhou0_B0[OPS_ACC0(1,0)] + 0.009765625*rhou0_B0[OPS_ACC0(-4,0)] +
      0.24609375*rhou0_B0[OPS_ACC0(0,0)];

    rhou1_xfiltered = 0.1171875*rhou1_B0[OPS_ACC1(-2,0)] + 0.205078125*rhou1_B0[OPS_ACC1(-1,0)] +
      0.009765625*rhou1_B0[OPS_ACC1(4,0)] + 0.1171875*rhou1_B0[OPS_ACC1(2,0)] + 0.0009765625*rhou1_B0[OPS_ACC1(5,0)] +
      0.0439453125*rhou1_B0[OPS_ACC1(3,0)] + 0.009765625*rhou1_B0[OPS_ACC1(-4,0)] + 0.24609375*rhou1_B0[OPS_ACC1(0,0)] +
      0.0439453125*rhou1_B0[OPS_ACC1(-3,0)] + 0.0009765625*rhou1_B0[OPS_ACC1(-5,0)] +
      0.205078125*rhou1_B0[OPS_ACC1(1,0)];

    rhoE_xfiltered = 0.0439453125*rhoE_B0[OPS_ACC3(3,0)] + 0.009765625*rhoE_B0[OPS_ACC3(4,0)] +
      0.1171875*rhoE_B0[OPS_ACC3(2,0)] + 0.205078125*rhoE_B0[OPS_ACC3(1,0)] + 0.24609375*rhoE_B0[OPS_ACC3(0,0)] +
      0.1171875*rhoE_B0[OPS_ACC3(-2,0)] + 0.205078125*rhoE_B0[OPS_ACC3(-1,0)] + 0.0439453125*rhoE_B0[OPS_ACC3(-3,0)] +
      0.0009765625*rhoE_B0[OPS_ACC3(-5,0)] + 0.009765625*rhoE_B0[OPS_ACC3(-4,0)] + 0.0009765625*rhoE_B0[OPS_ACC3(5,0)];

    rho_yfiltered = 0.0439453125*rho_B0[OPS_ACC2(0,3)] + 0.0009765625*rho_B0[OPS_ACC2(0,-5)] +
      0.1171875*rho_B0[OPS_ACC2(0,2)] + 0.0009765625*rho_B0[OPS_ACC2(0,5)] + 0.1171875*rho_B0[OPS_ACC2(0,-2)] +
      0.205078125*rho_B0[OPS_ACC2(0,1)] + 0.205078125*rho_B0[OPS_ACC2(0,-1)] + 0.0439453125*rho_B0[OPS_ACC2(0,-3)] +
      0.009765625*rho_B0[OPS_ACC2(0,4)] + 0.24609375*rho_B0[OPS_ACC2(0,0)] + 0.009765625*rho_B0[OPS_ACC2(0,-4)];

    rhou0_yfiltered = 0.009765625*rhou0_B0[OPS_ACC0(0,-4)] + 0.0009765625*rhou0_B0[OPS_ACC0(0,-5)] +
      0.1171875*rhou0_B0[OPS_ACC0(0,2)] + 0.205078125*rhou0_B0[OPS_ACC0(0,1)] + 0.1171875*rhou0_B0[OPS_ACC0(0,-2)] +
      0.0009765625*rhou0_B0[OPS_ACC0(0,5)] + 0.205078125*rhou0_B0[OPS_ACC0(0,-1)] + 0.24609375*rhou0_B0[OPS_ACC0(0,0)] +
      0.0439453125*rhou0_B0[OPS_ACC0(0,-3)] + 0.009765625*rhou0_B0[OPS_ACC0(0,4)] +
      0.0439453125*rhou0_B0[OPS_ACC0(0,3)];

    rhou1_yfiltered = 0.1171875*rhou1_B0[OPS_ACC1(0,2)] + 0.1171875*rhou1_B0[OPS_ACC1(0,-2)] +
      0.205078125*rhou1_B0[OPS_ACC1(0,-1)] + 0.0439453125*rhou1_B0[OPS_ACC1(0,3)] + 0.009765625*rhou1_B0[OPS_ACC1(0,4)]
      + 0.0009765625*rhou1_B0[OPS_ACC1(0,-5)] + 0.24609375*rhou1_B0[OPS_ACC1(0,0)] +
      0.009765625*rhou1_B0[OPS_ACC1(0,-4)] + 0.0009765625*rhou1_B0[OPS_ACC1(0,5)] + 0.205078125*rhou1_B0[OPS_ACC1(0,1)]
      + 0.0439453125*rhou1_B0[OPS_ACC1(0,-3)];

    rhoE_yfiltered = 0.0439453125*rhoE_B0[OPS_ACC3(0,-3)] + 0.205078125*rhoE_B0[OPS_ACC3(0,1)] +
      0.0009765625*rhoE_B0[OPS_ACC3(0,5)] + 0.009765625*rhoE_B0[OPS_ACC3(0,-4)] + 0.0009765625*rhoE_B0[OPS_ACC3(0,-5)] +
      0.24609375*rhoE_B0[OPS_ACC3(0,0)] + 0.009765625*rhoE_B0[OPS_ACC3(0,4)] + 0.0439453125*rhoE_B0[OPS_ACC3(0,3)] +
      0.205078125*rhoE_B0[OPS_ACC3(0,-1)] + 0.1171875*rhoE_B0[OPS_ACC3(0,-2)] + 0.1171875*rhoE_B0[OPS_ACC3(0,2)];

   rho_filtered = 0.5*rho_xfiltered + 0.5*rho_yfiltered;

   rhou0_filtered = 0.5*rhou0_xfiltered + 0.5*rhou0_yfiltered;

   rhou1_filtered = 0.5*rhou1_xfiltered + 0.5*rhou1_yfiltered;

   rhoE_filtered = 0.5*rhoE_xfiltered + 0.5*rhoE_yfiltered;

    rho_B0[OPS_ACC2(0,0)] = ((idx[1] >= 169) ? (
   sigma_filt*rho_filtered + (-sigma_filt +
      1)*rho_B0[OPS_ACC2(0,0)]
)
: (
   rho_B0[OPS_ACC2(0,0)]
));

    rhou0_B0[OPS_ACC0(0,0)] = ((idx[1] >= 169) ? (
   sigma_filt*rhou0_filtered + (-sigma_filt +
      1)*rhou0_B0[OPS_ACC0(0,0)]
)
: (
   rhou0_B0[OPS_ACC0(0,0)]
));

    rhou1_B0[OPS_ACC1(0,0)] = ((idx[1] >= 169) ? (
   sigma_filt*rhou1_filtered + (-sigma_filt +
      1)*rhou1_B0[OPS_ACC1(0,0)]
)
: (
   rhou1_B0[OPS_ACC1(0,0)]
));

    rhoE_B0[OPS_ACC3(0,0)] = ((idx[1] >= 169) ? (
   sigma_filt*rhoE_filtered + (-sigma_filt +
      1)*rhoE_B0[OPS_ACC3(0,0)]
)
: (
   rhoE_B0[OPS_ACC3(0,0)]
));

}

#endif
