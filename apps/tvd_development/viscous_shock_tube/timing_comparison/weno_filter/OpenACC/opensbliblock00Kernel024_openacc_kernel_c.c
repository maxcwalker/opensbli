//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel024;
int xdim1_opensbliblock00Kernel024;
int xdim2_opensbliblock00Kernel024;
int xdim3_opensbliblock00Kernel024;
int xdim4_opensbliblock00Kernel024;
int xdim5_opensbliblock00Kernel024;
int xdim6_opensbliblock00Kernel024;
int xdim7_opensbliblock00Kernel024;
int xdim8_opensbliblock00Kernel024;
int xdim9_opensbliblock00Kernel024;
int xdim10_opensbliblock00Kernel024;
int xdim11_opensbliblock00Kernel024;
int xdim12_opensbliblock00Kernel024;
int xdim13_opensbliblock00Kernel024;
int xdim14_opensbliblock00Kernel024;

//user function
inline 
 void opensbliblock00Kernel024(const ptr_double p_B0,
  const ptr_double rhoE_B0,
  const ptr_double rho_B0,
  const
ptr_double rhou0_B0,
  const ptr_double rhou1_B0,
  const ptr_double u0_B0,
  const ptr_double u1_B0,
  const
ptr_double wk0_B0,
  const ptr_double wk1_B0,
  const ptr_double wk3_B0,
  const ptr_double wk4_B0,
  ptr_double Residual0_B0,
  ptr_double Residual1_B0,
  ptr_double Residual2_B0,
  ptr_double Residual3_B0,
  const int *idx)
{
   double d1_inv_rhoErho_dx = 0.0;
   double d1_inv_rhoErho_dy = 0.0;
   double d1_p_dx = 0.0;
   double d1_p_dy = 0.0;
   double d1_pu0_dx = 0.0;
   double d1_pu1_dy = 0.0;
   double d1_rhoEu0_dx = 0.0;
   double d1_rhoEu1_dy = 0.0;
   double d1_rhou0_dx = 0.0;
   double d1_rhou0u0_dx = 0.0;
   double d1_rhou0u1_dy = 0.0;
   double d1_rhou1_dy = 0.0;
   double d1_rhou1u0_dx = 0.0;
   double d1_rhou1u1_dy = 0.0;
   if (idx[0] == 0){

       d1_p_dx = (-3*OPS_ACC(p_B0, 2,0) + 4*OPS_ACC(p_B0, 1,0) - (25.0/12.0)*OPS_ACC(p_B0, 0,0) - (1.0/4.0)*OPS_ACC(p_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(p_B0, 3,0))*invDelta0block0;

       d1_pu0_dx = (-3*OPS_ACC(p_B0, 2,0)*OPS_ACC(u0_B0, 2,0) + 4*OPS_ACC(p_B0, 1,0)*OPS_ACC(u0_B0, 1,0) - (25.0/12.0)*OPS_ACC(p_B0, 0,0)*OPS_ACC(u0_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(p_B0, 4,0)*OPS_ACC(u0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(p_B0, 3,0)*OPS_ACC(u0_B0, 3,0))*invDelta0block0;

       d1_rhoEu0_dx = (-3*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhoE_B0, 2,0) + 4*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhoE_B0, 1,0) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, 4,0)*OPS_ACC(rhoE_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhoE_B0, 3,0))*invDelta0block0;

       d1_inv_rhoErho_dx = (-3*OPS_ACC(rhoE_B0, 2,0)/OPS_ACC(rho_B0, 2,0) + 4*OPS_ACC(rhoE_B0, 1,0)/OPS_ACC(rho_B0, 1,0) -
            (25.0/12.0)*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhoE_B0, 4,0)/OPS_ACC(rho_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(rhoE_B0, 3,0)/OPS_ACC(rho_B0, 3,0))*invDelta0block0;

       d1_rhou0_dx = (-3*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou0_B0, 4,0) +
            ((4.0/3.0))*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_rhou0u0_dx = (-3*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) + 4*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u0_B0, 4,0)*OPS_ACC(rhou0_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0))*invDelta0block0;

       d1_rhou1u0_dx = (-3*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou1_B0, 2,0) + 4*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou1_B0, 1,0) - (25.0/12.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u0_B0, 4,0)*OPS_ACC(rhou1_B0, 4,0) + ((4.0/3.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou1_B0, 3,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_p_dx = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 2,0) - (1.0/4.0)*OPS_ACC(p_B0, -1,0) + ((1.0/12.0))*OPS_ACC(p_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(p_B0, 1,0))*invDelta0block0;

       d1_pu0_dx = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0)*OPS_ACC(u0_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 2,0)*OPS_ACC(u0_B0, 2,0) - (1.0/4.0)*OPS_ACC(p_B0, -1,0)*OPS_ACC(u0_B0, -1,0)
            + ((1.0/12.0))*OPS_ACC(p_B0, 3,0)*OPS_ACC(u0_B0, 3,0) + ((3.0/2.0))*OPS_ACC(p_B0, 1,0)*OPS_ACC(u0_B0, 1,0))*invDelta0block0;

       d1_rhoEu0_dx = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhoE_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhoE_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhoE_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhoE_B0, 1,0))*invDelta0block0;

       d1_inv_rhoErho_dx = (-(5.0/6.0)*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhoE_B0, 2,0)/OPS_ACC(rho_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(rhoE_B0, -1,0)/OPS_ACC(rho_B0, -1,0) + ((1.0/12.0))*OPS_ACC(rhoE_B0, 3,0)/OPS_ACC(rho_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(rhoE_B0, 1,0)/OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_rhou0_dx = (-(5.0/6.0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou0_B0, 2,0) - (1.0/4.0)*OPS_ACC(rhou0_B0, -1,0) +
            ((1.0/12.0))*OPS_ACC(rhou0_B0, 3,0) + ((3.0/2.0))*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u0_dx = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou0_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou1u0_dx = (-(5.0/6.0)*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou1_B0, 2,0) -
            (1.0/4.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou1_B0, -1,0) + ((1.0/12.0))*OPS_ACC(u0_B0, 3,0)*OPS_ACC(rhou1_B0, 3,0) +
            ((3.0/2.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou1_B0, 1,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_p_dx = (-4*OPS_ACC(p_B0, -1,0) + 3*OPS_ACC(p_B0, -2,0) - (4.0/3.0)*OPS_ACC(p_B0, -3,0) + ((1.0/4.0))*OPS_ACC(p_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(p_B0, 0,0))*invDelta0block0;

       d1_pu0_dx = (-4*OPS_ACC(p_B0, -1,0)*OPS_ACC(u0_B0, -1,0) + 3*OPS_ACC(p_B0, -2,0)*OPS_ACC(u0_B0, -2,0) - (4.0/3.0)*OPS_ACC(p_B0, -3,0)*OPS_ACC(u0_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(p_B0, -4,0)*OPS_ACC(u0_B0, -4,0) + ((25.0/12.0))*OPS_ACC(p_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*invDelta0block0;

       d1_rhoEu0_dx = (-4*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhoE_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhoE_B0, -2,0) - (4.0/3.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhoE_B0, -3,0)
            + ((1.0/4.0))*OPS_ACC(u0_B0, -4,0)*OPS_ACC(rhoE_B0, -4,0) + ((25.0/12.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0))*invDelta0block0;

       d1_inv_rhoErho_dx = (-4*OPS_ACC(rhoE_B0, -1,0)/OPS_ACC(rho_B0, -1,0) + 3*OPS_ACC(rhoE_B0, -2,0)/OPS_ACC(rho_B0, -2,0) -
            (4.0/3.0)*OPS_ACC(rhoE_B0, -3,0)/OPS_ACC(rho_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rhoE_B0, -4,0)/OPS_ACC(rho_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_rhou0_dx = (-4*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(rhou0_B0, -2,0) - (4.0/3.0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rhou0_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u0_dx = (-4*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) -
            (4.0/3.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, -4,0)*OPS_ACC(rhou0_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou1u0_dx = (-4*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou1_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou1_B0, -2,0) -
            (4.0/3.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, -4,0)*OPS_ACC(rhou1_B0, -4,0) +
            ((25.0/12.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_p_dx = (((1.0/2.0))*OPS_ACC(p_B0, -2,0) - (3.0/2.0)*OPS_ACC(p_B0, -1,0) - (1.0/12.0)*OPS_ACC(p_B0, -3,0) + ((1.0/4.0))*OPS_ACC(p_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(p_B0, 0,0))*invDelta0block0;

       d1_pu0_dx = (((1.0/2.0))*OPS_ACC(p_B0, -2,0)*OPS_ACC(u0_B0, -2,0) - (3.0/2.0)*OPS_ACC(p_B0, -1,0)*OPS_ACC(u0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(p_B0, -3,0)*OPS_ACC(u0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(p_B0, 1,0)*OPS_ACC(u0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(p_B0, 0,0)*OPS_ACC(u0_B0, 0,0))*invDelta0block0;

       d1_rhoEu0_dx = (((1.0/2.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhoE_B0, -2,0) - (3.0/2.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhoE_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhoE_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhoE_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0))*invDelta0block0;

       d1_inv_rhoErho_dx = (((1.0/2.0))*OPS_ACC(rhoE_B0, -2,0)/OPS_ACC(rho_B0, -2,0) - (3.0/2.0)*OPS_ACC(rhoE_B0, -1,0)/OPS_ACC(rho_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(rhoE_B0, -3,0)/OPS_ACC(rho_B0, -3,0) + ((1.0/4.0))*OPS_ACC(rhoE_B0, 1,0)/OPS_ACC(rho_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0))*invDelta0block0;

       d1_rhou0_dx = (((1.0/2.0))*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou0_B0, -3,0) +
            ((1.0/4.0))*OPS_ACC(rhou0_B0, 1,0) + ((5.0/6.0))*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou0u0_dx = (((1.0/2.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) - (3.0/2.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou0_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0))*invDelta0block0;

       d1_rhou1u0_dx = (((1.0/2.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou1_B0, -2,0) - (3.0/2.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou1_B0, -1,0) -
            (1.0/12.0)*OPS_ACC(u0_B0, -3,0)*OPS_ACC(rhou1_B0, -3,0) + ((1.0/4.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou1_B0, 1,0) +
            ((5.0/6.0))*OPS_ACC(u0_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0))*invDelta0block0;

   }

   else{

       d1_p_dx = (-(2.0/3.0)*OPS_ACC(p_B0, -1,0) - (1.0/12.0)*OPS_ACC(p_B0, 2,0) + ((1.0/12.0))*OPS_ACC(p_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(p_B0, 1,0))*invDelta0block0;

       d1_pu0_dx = (-(2.0/3.0)*OPS_ACC(p_B0, -1,0)*OPS_ACC(u0_B0, -1,0) - (1.0/12.0)*OPS_ACC(p_B0, 2,0)*OPS_ACC(u0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(p_B0, -2,0)*OPS_ACC(u0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(p_B0, 1,0)*OPS_ACC(u0_B0, 1,0))*invDelta0block0;

       d1_rhoEu0_dx = (-(2.0/3.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhoE_B0, -1,0) - (1.0/12.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhoE_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhoE_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhoE_B0, 1,0))*invDelta0block0;

       d1_inv_rhoErho_dx = (-(2.0/3.0)*OPS_ACC(rhoE_B0, -1,0)/OPS_ACC(rho_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhoE_B0, 2,0)/OPS_ACC(rho_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(rhoE_B0, -2,0)/OPS_ACC(rho_B0, -2,0) + ((2.0/3.0))*OPS_ACC(rhoE_B0, 1,0)/OPS_ACC(rho_B0, 1,0))*invDelta0block0;

       d1_rhou0_dx = (-(2.0/3.0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(rhou0_B0, 2,0) + ((1.0/12.0))*OPS_ACC(rhou0_B0, -2,0) +
            ((2.0/3.0))*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou0u0_dx = (-(2.0/3.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou0_B0, -1,0) - (1.0/12.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou0_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou0_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou0_B0, 1,0))*invDelta0block0;

       d1_rhou1u0_dx = (-(2.0/3.0)*OPS_ACC(u0_B0, -1,0)*OPS_ACC(rhou1_B0, -1,0) - (1.0/12.0)*OPS_ACC(u0_B0, 2,0)*OPS_ACC(rhou1_B0, 2,0) +
            ((1.0/12.0))*OPS_ACC(u0_B0, -2,0)*OPS_ACC(rhou1_B0, -2,0) + ((2.0/3.0))*OPS_ACC(u0_B0, 1,0)*OPS_ACC(rhou1_B0, 1,0))*invDelta0block0;

   }

   if (idx[1] == 0){

       d1_p_dy = (-3*OPS_ACC(p_B0, 0,2) + 4*OPS_ACC(p_B0, 0,1) - (25.0/12.0)*OPS_ACC(p_B0, 0,0) - (1.0/4.0)*OPS_ACC(p_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(p_B0, 0,3))*invDelta1block0;

       d1_pu1_dy = (-3*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) + 4*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1) - (25.0/12.0)*OPS_ACC(p_B0, 0,0)*OPS_ACC(u1_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(p_B0, 0,4)*OPS_ACC(u1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(p_B0, 0,3)*OPS_ACC(u1_B0, 0,3))*invDelta1block0;

       d1_rhoEu1_dy = (-3*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhoE_B0, 0,2) + 4*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhoE_B0, 0,1) - (25.0/12.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0) -
            (1.0/4.0)*OPS_ACC(u1_B0, 0,4)*OPS_ACC(rhoE_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhoE_B0, 0,3))*invDelta1block0;

       d1_inv_rhoErho_dy = (-3*OPS_ACC(rhoE_B0, 0,2)/OPS_ACC(rho_B0, 0,2) + 4*OPS_ACC(rhoE_B0, 0,1)/OPS_ACC(rho_B0, 0,1) -
            (25.0/12.0)*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhoE_B0, 0,4)/OPS_ACC(rho_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(rhoE_B0, 0,3)/OPS_ACC(rho_B0, 0,3))*invDelta1block0;

       d1_rhou0u1_dy = (-3*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou0_B0, 0,2) + 4*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou0_B0, 0,1) - (25.0/12.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u1_B0, 0,4)*OPS_ACC(rhou0_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou0_B0, 0,3))*invDelta1block0;

       d1_rhou1_dy = (-3*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/4.0)*OPS_ACC(rhou1_B0, 0,4) +
            ((4.0/3.0))*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

       d1_rhou1u1_dy = (-3*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) + 4*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1) - (25.0/12.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0)
            - (1.0/4.0)*OPS_ACC(u1_B0, 0,4)*OPS_ACC(rhou1_B0, 0,4) + ((4.0/3.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_p_dy = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 0,2) - (1.0/4.0)*OPS_ACC(p_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(p_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(p_B0, 0,1))*invDelta1block0;

       d1_pu1_dy = (-(5.0/6.0)*OPS_ACC(p_B0, 0,0)*OPS_ACC(u1_B0, 0,0) - (1.0/2.0)*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) - (1.0/4.0)*OPS_ACC(p_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1)
            + ((1.0/12.0))*OPS_ACC(p_B0, 0,3)*OPS_ACC(u1_B0, 0,3) + ((3.0/2.0))*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_rhoEu1_dy = (-(5.0/6.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhoE_B0, 0,0) - (1.0/2.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhoE_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhoE_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhoE_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhoE_B0, 0,1))*invDelta1block0;

       d1_inv_rhoErho_dy = (-(5.0/6.0)*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhoE_B0, 0,2)/OPS_ACC(rho_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(rhoE_B0, 0,-1)/OPS_ACC(rho_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(rhoE_B0, 0,3)/OPS_ACC(rho_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(rhoE_B0, 0,1)/OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_rhou0u1_dy = (-(5.0/6.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou0_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou0_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou0_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou0_B0, 0,1))*invDelta1block0;

       d1_rhou1_dy = (-(5.0/6.0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(rhou1_B0, 0,2) - (1.0/4.0)*OPS_ACC(rhou1_B0, 0,-1) +
            ((1.0/12.0))*OPS_ACC(rhou1_B0, 0,3) + ((3.0/2.0))*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u1_dy = (-(5.0/6.0)*OPS_ACC(u1_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0) - (1.0/2.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) -
            (1.0/4.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(u1_B0, 0,3)*OPS_ACC(rhou1_B0, 0,3) +
            ((3.0/2.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

   }

   else{

       d1_p_dy = (-(2.0/3.0)*OPS_ACC(p_B0, 0,-1) - (1.0/12.0)*OPS_ACC(p_B0, 0,2) + ((1.0/12.0))*OPS_ACC(p_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(p_B0, 0,1))*invDelta1block0;

       d1_pu1_dy = (-(2.0/3.0)*OPS_ACC(p_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(p_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1))*invDelta1block0;

       d1_rhoEu1_dy = (-(2.0/3.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhoE_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhoE_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u1_B0, 0,-2)*OPS_ACC(rhoE_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhoE_B0, 0,1))*invDelta1block0;

       d1_inv_rhoErho_dy = (-(2.0/3.0)*OPS_ACC(rhoE_B0, 0,-1)/OPS_ACC(rho_B0, 0,-1) - (1.0/12.0)*OPS_ACC(rhoE_B0, 0,2)/OPS_ACC(rho_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(rhoE_B0, 0,-2)/OPS_ACC(rho_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(rhoE_B0, 0,1)/OPS_ACC(rho_B0, 0,1))*invDelta1block0;

       d1_rhou0u1_dy = (-(2.0/3.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou0_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou0_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u1_B0, 0,-2)*OPS_ACC(rhou0_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou0_B0, 0,1))*invDelta1block0;

       d1_rhou1_dy = (-(2.0/3.0)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(rhou1_B0, 0,2) + ((1.0/12.0))*OPS_ACC(rhou1_B0, 0,-2) +
            ((2.0/3.0))*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

       d1_rhou1u1_dy = (-(2.0/3.0)*OPS_ACC(u1_B0, 0,-1)*OPS_ACC(rhou1_B0, 0,-1) - (1.0/12.0)*OPS_ACC(u1_B0, 0,2)*OPS_ACC(rhou1_B0, 0,2) +
            ((1.0/12.0))*OPS_ACC(u1_B0, 0,-2)*OPS_ACC(rhou1_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(u1_B0, 0,1)*OPS_ACC(rhou1_B0, 0,1))*invDelta1block0;

   }

   OPS_ACC(Residual0_B0, 0,0) = -d1_rhou0_dx - d1_rhou1_dy;

    OPS_ACC(Residual1_B0, 0,0) = -d1_p_dx - (1.0/2.0)*d1_rhou0u0_dx - (1.0/2.0)*d1_rhou0u1_dy - (1.0/2.0)*OPS_ACC(u0_B0, 0,0)*d1_rhou0_dx
      - (1.0/2.0)*OPS_ACC(u0_B0, 0,0)*d1_rhou1_dy - (1.0/2.0)*OPS_ACC(wk0_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(wk3_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0);

    OPS_ACC(Residual2_B0, 0,0) = -d1_p_dy - (1.0/2.0)*d1_rhou1u0_dx - (1.0/2.0)*d1_rhou1u1_dy - (1.0/2.0)*(d1_rhou0_dx +
      d1_rhou1_dy)*OPS_ACC(u1_B0, 0,0) - (1.0/2.0)*OPS_ACC(wk1_B0, 0,0)*OPS_ACC(rhou0_B0, 0,0) - (1.0/2.0)*OPS_ACC(wk4_B0, 0,0)*OPS_ACC(rhou1_B0, 0,0);

    OPS_ACC(Residual3_B0, 0,0) = -d1_pu0_dx - d1_pu1_dy - (1.0/2.0)*d1_rhoEu0_dx - (1.0/2.0)*d1_rhoEu1_dy -
      (1.0/2.0)*OPS_ACC(rhou0_B0, 0,0)*d1_inv_rhoErho_dx - (1.0/2.0)*OPS_ACC(rhou1_B0, 0,0)*d1_inv_rhoErho_dy - (1.0/2.0)*(d1_rhou0_dx +
      d1_rhou1_dy)*OPS_ACC(rhoE_B0, 0,0)/OPS_ACC(rho_B0, 0,0);

}


void opensbliblock00Kernel024_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  double *p_a9,
  double *p_a10,
  double *p_a11,
  double *p_a12,
  double *p_a13,
  double *p_a14,
  int *p_a15,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9,p_a10,p_a11,p_a12,p_a13,p_a14)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int arg_idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel024*1*1, xdim0_opensbliblock00Kernel024};
      const ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel024*1*1, xdim1_opensbliblock00Kernel024};
      const ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel024*1*1, xdim2_opensbliblock00Kernel024};
      const ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel024*1*1, xdim3_opensbliblock00Kernel024};
      const ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel024*1*1, xdim4_opensbliblock00Kernel024};
      const ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel024*1*1, xdim5_opensbliblock00Kernel024};
      const ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel024*1*1, xdim6_opensbliblock00Kernel024};
      const ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel024*1*1, xdim7_opensbliblock00Kernel024};
      const ptr_double ptr8 = {  p_a8 + n_x*1*1 + n_y*xdim8_opensbliblock00Kernel024*1*1, xdim8_opensbliblock00Kernel024};
      const ptr_double ptr9 = {  p_a9 + n_x*1*1 + n_y*xdim9_opensbliblock00Kernel024*1*1, xdim9_opensbliblock00Kernel024};
      const ptr_double ptr10 = {  p_a10 + n_x*1*1 + n_y*xdim10_opensbliblock00Kernel024*1*1, xdim10_opensbliblock00Kernel024};
      ptr_double ptr11 = {  p_a11 + n_x*1*1 + n_y*xdim11_opensbliblock00Kernel024*1*1, xdim11_opensbliblock00Kernel024};
      ptr_double ptr12 = {  p_a12 + n_x*1*1 + n_y*xdim12_opensbliblock00Kernel024*1*1, xdim12_opensbliblock00Kernel024};
      ptr_double ptr13 = {  p_a13 + n_x*1*1 + n_y*xdim13_opensbliblock00Kernel024*1*1, xdim13_opensbliblock00Kernel024};
      ptr_double ptr14 = {  p_a14 + n_x*1*1 + n_y*xdim14_opensbliblock00Kernel024*1*1, xdim14_opensbliblock00Kernel024};
      opensbliblock00Kernel024( ptr0, ptr1, ptr2, ptr3,
           ptr4, ptr5, ptr6, ptr7,
           ptr8, ptr9, ptr10, ptr11,
           ptr12, ptr13, ptr14,arg_idx);
    }
  }
}
