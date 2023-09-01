#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
void opensbliblock00Kernel000(double *phi_B0, double *x0_B0, const int *idx)
{
   x0_B0[OPS_ACC1(0)] = Delta0block0*idx[0];

   phi_B0[OPS_ACC0(0)] = sin(2.0*M_PI*x0_B0[OPS_ACC1(0)]);

}

void opensbliblock00Kernel007(const double *phi_B0, double *phi_RKold_B0)
{
   phi_RKold_B0[OPS_ACC1(0)] = phi_B0[OPS_ACC0(0)];

}

void opensbliblock00Kernel003(const double *phi_B0, double *wk0_B0)
{
    wk0_B0[OPS_ACC1(0)] = inv_0*((rc1)*phi_B0[OPS_ACC0(-2)] + (rc2)*phi_B0[OPS_ACC0(1)] - rc2*phi_B0[OPS_ACC0(-1)] -
      rc1*phi_B0[OPS_ACC0(2)]);

}

void opensbliblock00Kernel004(const double *wk0_B0, double *Residual0_B0)
{
   Residual0_B0[OPS_ACC1(0)] = -c0*wk0_B0[OPS_ACC0(0)];

}

 void opensbliblock00Kernel009(const double *phi_RKold_B0, const double *Residual0_B0, double *phi_B0, const double
*rknew)
{
   phi_B0[OPS_ACC2(0)] = dt*rknew[0]*Residual0_B0[OPS_ACC1(0)] + phi_RKold_B0[OPS_ACC0(0)];

}

void opensbliblock00Kernel008(const double *Residual0_B0, double *phi_RKold_B0, const double *rkold)
{
   phi_RKold_B0[OPS_ACC1(0)] = dt*rkold[0]*Residual0_B0[OPS_ACC0(0)] + phi_RKold_B0[OPS_ACC1(0)];

}

#endif
