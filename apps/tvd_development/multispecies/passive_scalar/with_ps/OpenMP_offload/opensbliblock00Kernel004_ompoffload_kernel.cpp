//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel004(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10) {
#else
void ops_par_loop_opensbliblock00Kernel004_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  ops_arg arg5 = desc->args[5];
  ops_arg arg6 = desc->args[6];
  ops_arg arg7 = desc->args[7];
  ops_arg arg8 = desc->args[8];
  ops_arg arg9 = desc->args[9];
  ops_arg arg10 = desc->args[10];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[11] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,11,range,10)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,10,"opensbliblock00Kernel004");
    block->instance->OPS_kernels[10].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel004");
  #endif


  //compute locally allocated range for the sub-block
  int start[1];
  int end[1];
  #if defined(OPS_MPI) && !defined(OPS_LAZY)
  int arg_idx[1];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<1; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 11,block, range, start, end, arg_idx) < 0) return;
  #endif

  int start0 = start[0];
  int end0 = end[0];


  //initialize global variable with the dimension of dats

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ a_B0_p = (double *)(args[0].data_d + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ f_B0_p = (double *)(args[1].data_d + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ rhoE_B0_p = (double *)(args[2].data_d + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ rho_B0_p = (double *)(args[3].data_d + base3);

  int base4 = args[4].dat->base_offset;
  double * __restrict__ rhof_B0_p = (double *)(args[4].data_d + base4);

  int base5 = args[5].dat->base_offset;
  double * __restrict__ rhou0_B0_p = (double *)(args[5].data_d + base5);

  int base6 = args[6].dat->base_offset;
  double * __restrict__ u0_B0_p = (double *)(args[6].data_d + base6);

  int base7 = args[7].dat->base_offset;
  double * __restrict__ wk0_B0_p = (double *)(args[7].data_d + base7);

  int base8 = args[8].dat->base_offset;
  double * __restrict__ wk1_B0_p = (double *)(args[8].data_d + base8);

  int base9 = args[9].dat->base_offset;
  double * __restrict__ wk2_B0_p = (double *)(args[9].data_d + base9);

  int base10 = args[10].dat->base_offset;
  double * __restrict__ wk3_B0_p = (double *)(args[10].data_d + base10);



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 11);
  ops_halo_exchanges(args,11,range);
  ops_H_D_exchanges_device(args, 11);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[10].mpi_time += __t1-__t2;
  }

  #pragma omp target teams distribute parallel for collapse(1)
  for ( int n_x=start0; n_x<end0; n_x++ ){
    const ACC<double> a_B0(a_B0_p + n_x*1);
    const ACC<double> f_B0(f_B0_p + n_x*1);
    const ACC<double> rhoE_B0(rhoE_B0_p + n_x*1);
    const ACC<double> rho_B0(rho_B0_p + n_x*1);
    const ACC<double> rhof_B0(rhof_B0_p + n_x*1);
    const ACC<double> rhou0_B0(rhou0_B0_p + n_x*1);
    const ACC<double> u0_B0(u0_B0_p + n_x*1);
    ACC<double> wk0_B0(wk0_B0_p + n_x*1);
    ACC<double> wk1_B0(wk1_B0_p + n_x*1);
    ACC<double> wk2_B0(wk2_B0_p + n_x*1);
    ACC<double> wk3_B0(wk3_B0_p + n_x*1);
    
   double AVG_0_0_LEV_00 = 0.0;
   double AVG_0_0_LEV_01 = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double AVG_0_0_LEV_11 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double AVG_0_0_LEV_13 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_REV_00 = 0.0;
   double AVG_0_REV_02 = 0.0;
   double AVG_0_REV_03 = 0.0;
   double AVG_0_REV_10 = 0.0;
   double AVG_0_REV_12 = 0.0;
   double AVG_0_REV_13 = 0.0;
   double AVG_0_REV_20 = 0.0;
   double AVG_0_REV_22 = 0.0;
   double AVG_0_REV_23 = 0.0;
   double AVG_0_REV_31 = 0.0;
   double AVG_0_REV_32 = 0.0;
   double AVG_0_REV_33 = 0.0;
   double AVG_0_a = 0.0;
   double AVG_0_f = 0.0;
   double AVG_0_rho = 0.0;
   double AVG_0_u0 = 0.0;
   double S = 0.0;
   double alpha_00 = 0.0;
   double alpha_01 = 0.0;
   double alpha_02 = 0.0;
   double alpha_10 = 0.0;
   double alpha_11 = 0.0;
   double alpha_12 = 0.0;
   double alpha_20 = 0.0;
   double alpha_21 = 0.0;
   double alpha_22 = 0.0;
   double alpha_30 = 0.0;
   double alpha_31 = 0.0;
   double alpha_32 = 0.0;
   double g_00 = 0.0;
   double g_01 = 0.0;
   double g_10 = 0.0;
   double g_11 = 0.0;
   double g_20 = 0.0;
   double g_21 = 0.0;
   double g_30 = 0.0;
   double g_31 = 0.0;
   double gamma_0 = 0.0;
   double gamma_1 = 0.0;
   double gamma_2 = 0.0;
   double gamma_3 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_rho = 0.0;
   double phi_0 = 0.0;
   double phi_1 = 0.0;
   double phi_2 = 0.0;
   double phi_3 = 0.0;
   double phi_star_0 = 0.0;
   double phi_star_1 = 0.0;
   double phi_star_2 = 0.0;
   double phi_star_3 = 0.0;
   double sigma_0_0 = 0.0;
   double sigma_0_1 = 0.0;
   double sigma_0_2 = 0.0;
   double sigma_0_3 = 0.0;
   double sigma_1_0 = 0.0;
   double sigma_1_1 = 0.0;
   double sigma_1_2 = 0.0;
   double sigma_1_3 = 0.0;
   double t1 = 0.0;
   double t2 = 0.0;
   double theta_0 = 0.0;
   double theta_1 = 0.0;
   double theta_2 = 0.0;
   double theta_3 = 0.0;
   double theta_hat_00 = 0.0;
   double theta_hat_01 = 0.0;
   double theta_hat_10 = 0.0;
   double theta_hat_11 = 0.0;
   double theta_hat_20 = 0.0;
   double theta_hat_21 = 0.0;
   double theta_hat_30 = 0.0;
   double theta_hat_31 = 0.0;
   double ws_lambda_00 = 0.0;
   double ws_lambda_11 = 0.0;
   double ws_lambda_22 = 0.0;
   double ws_lambda_33 = 0.0;
   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(-1));

   AVG_0_f = ((1.0/2.0))*(f_B0(0) + f_B0(-1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(-1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -1.0*(AVG_0_u0*AVG_0_u0)*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = 0.5*(AVG_0_u0*AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_02 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_12 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_13 = 1;

   AVG_0_0_LEV_20 = 0.25*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a + gama*AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.5*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_f;

   AVG_0_0_LEV_22 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_30 = -0.25*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 + AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.5*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_f;

   AVG_0_0_LEV_32 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

    alpha_00 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_00 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_02 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_01;

    alpha_10 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_10 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_12 + (-rhof_B0(-1) +
      rhof_B0(0))*AVG_0_0_LEV_13 + (-rhou0_B0(-1) + rhou0_B0(0))*AVG_0_0_LEV_11;

    alpha_20 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_20 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_22 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_21;

    alpha_30 = (-rho_B0(-1) + rho_B0(0))*AVG_0_0_LEV_30 + (-rhoE_B0(-1) + rhoE_B0(0))*AVG_0_0_LEV_32 + (-rhou0_B0(-1) +
      rhou0_B0(0))*AVG_0_0_LEV_31;

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(0) + u0_B0(1));

   AVG_0_f = ((1.0/2.0))*(f_B0(0) + f_B0(1));

   AVG_0_a = ((1.0/2.0))*(a_B0(0) + a_B0(1));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -1.0*(AVG_0_u0*AVG_0_u0)*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = 0.5*(AVG_0_u0*AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_02 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_12 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_13 = 1;

   AVG_0_0_LEV_20 = 0.25*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a + gama*AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.5*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_f;

   AVG_0_0_LEV_22 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_30 = -0.25*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 + AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.5*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_f;

   AVG_0_0_LEV_32 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

    alpha_01 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_00 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_02 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_01;

    alpha_11 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_10 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_12 + (-rhof_B0(0) +
      rhof_B0(1))*AVG_0_0_LEV_13 + (-rhou0_B0(0) + rhou0_B0(1))*AVG_0_0_LEV_11;

    alpha_21 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_20 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_22 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_21;

    alpha_31 = (-rho_B0(0) + rho_B0(1))*AVG_0_0_LEV_30 + (-rhoE_B0(0) + rhoE_B0(1))*AVG_0_0_LEV_32 + (-rhou0_B0(0) +
      rhou0_B0(1))*AVG_0_0_LEV_31;

   ws_lambda_00 = AVG_0_u0;

   ws_lambda_11 = AVG_0_u0;

   ws_lambda_22 = -AVG_0_a + AVG_0_u0;

   ws_lambda_33 = AVG_0_a + AVG_0_u0;

   AVG_0_REV_00 = 2/(AVG_0_u0*AVG_0_u0);

   printf("%.1f", AVG_0_REV_00);

   AVG_0_REV_02 = 1.0/(AVG_0_f);

   AVG_0_REV_03 = 1.0/(AVG_0_f);

   AVG_0_REV_10 = 2/AVG_0_u0;

   AVG_0_REV_12 = (-AVG_0_a + AVG_0_u0)/AVG_0_f;

   AVG_0_REV_13 = (AVG_0_a + AVG_0_u0)/AVG_0_f;

   AVG_0_REV_20 = 1;

   AVG_0_REV_22 = ((AVG_0_a*AVG_0_a) - 0.5*(AVG_0_u0*AVG_0_u0) + AVG_0_a*AVG_0_u0 + 0.5*(AVG_0_u0*AVG_0_u0)*gama -
      gama*AVG_0_a*AVG_0_u0)*invgamma_m1/AVG_0_f;

    AVG_0_REV_23 = ((AVG_0_a*AVG_0_a) - 0.5*(AVG_0_u0*AVG_0_u0) - AVG_0_a*AVG_0_u0 + 0.5*(AVG_0_u0*AVG_0_u0)*gama +
      gama*AVG_0_a*AVG_0_u0)*invgamma_m1/AVG_0_f;

   AVG_0_REV_31 = 1;

   AVG_0_REV_32 = 1;

   AVG_0_REV_33 = 1;

   AVG_0_u0 = ((1.0/2.0))*(u0_B0(1) + u0_B0(2));

   AVG_0_f = ((1.0/2.0))*(f_B0(1) + f_B0(2));

   AVG_0_a = ((1.0/2.0))*(a_B0(1) + a_B0(2));

   inv_AVG_a = 1.0/(AVG_0_a);

   inv_AVG_rho = 1.0/(AVG_0_rho);

    AVG_0_0_LEV_00 = -1.0*(AVG_0_u0*AVG_0_u0)*(-0.5 - 0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a) +
      0.25*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gama);

   AVG_0_0_LEV_01 = 0.5*(AVG_0_u0*AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_02 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1;

   AVG_0_0_LEV_10 = -0.5*(AVG_0_u0*AVG_0_u0)*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_12 = -(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_13 = 1;

   AVG_0_0_LEV_20 = 0.25*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + 2*AVG_0_a + gama*AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_21 = -0.5*(inv_AVG_a*inv_AVG_a)*(-AVG_0_u0 + gama*AVG_0_u0 + AVG_0_a)*AVG_0_f;

   AVG_0_0_LEV_22 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

   AVG_0_0_LEV_30 = -0.25*(inv_AVG_a*inv_AVG_a)*(2*AVG_0_a - gama*AVG_0_u0 + AVG_0_u0)*AVG_0_f*AVG_0_u0;

   AVG_0_0_LEV_31 = 0.5*(inv_AVG_a*inv_AVG_a)*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0)*AVG_0_f;

   AVG_0_0_LEV_32 = 0.5*(inv_AVG_a*inv_AVG_a)*gamma_m1*AVG_0_f;

    alpha_02 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_00 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_02 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_01;

    alpha_12 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_10 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_12 + (-rhof_B0(1) +
      rhof_B0(2))*AVG_0_0_LEV_13 + (-rhou0_B0(1) + rhou0_B0(2))*AVG_0_0_LEV_11;

    alpha_22 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_20 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_22 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_21;

    alpha_32 = (-rho_B0(1) + rho_B0(2))*AVG_0_0_LEV_30 + (-rhoE_B0(1) + rhoE_B0(2))*AVG_0_0_LEV_32 + (-rhou0_B0(1) +
      rhou0_B0(2))*AVG_0_0_LEV_31;

    sigma_0_0 = ((fabs(ws_lambda_00) >= delta_TVD) ? (
   fabs(ws_lambda_00)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_00*ws_lambda_00))*invdelta_TVD
));

    sigma_0_1 = ((fabs(ws_lambda_11) >= delta_TVD) ? (
   fabs(ws_lambda_11)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_11*ws_lambda_11))*invdelta_TVD
));

    sigma_0_2 = ((fabs(ws_lambda_22) >= delta_TVD) ? (
   fabs(ws_lambda_22)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_22*ws_lambda_22))*invdelta_TVD
));

    sigma_0_3 = ((fabs(ws_lambda_33) >= delta_TVD) ? (
   fabs(ws_lambda_33)
)
: (

      ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD) + (ws_lambda_33*ws_lambda_33))*invdelta_TVD
));

   S = (alpha_01 > 0) ? 1 : ((alpha_01 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_00, 2*fabs(alpha_01)));

   t2 = fmin(fabs(alpha_01), 2*S*alpha_00);

   g_00 = S*fmax(t1, t2);

   S = (alpha_11 > 0) ? 1 : ((alpha_11 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_10, 2*fabs(alpha_11)));

   t2 = fmin(fabs(alpha_11), 2*S*alpha_10);

   g_10 = S*fmax(t1, t2);

   S = (alpha_21 > 0) ? 1 : ((alpha_21 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_20, 2*fabs(alpha_21)));

   t2 = fmin(fabs(alpha_21), 2*S*alpha_20);

   g_20 = S*fmax(t1, t2);

   S = (alpha_31 > 0) ? 1 : ((alpha_31 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_30, 2*fabs(alpha_31)));

   t2 = fmin(fabs(alpha_31), 2*S*alpha_30);

   g_30 = S*fmax(t1, t2);

   S = (alpha_02 > 0) ? 1 : ((alpha_02 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_01, 2*fabs(alpha_02)));

   t2 = fmin(fabs(alpha_02), 2*S*alpha_01);

   g_01 = S*fmax(t1, t2);

   S = (alpha_12 > 0) ? 1 : ((alpha_12 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_11, 2*fabs(alpha_12)));

   t2 = fmin(fabs(alpha_12), 2*S*alpha_11);

   g_11 = S*fmax(t1, t2);

   S = (alpha_22 > 0) ? 1 : ((alpha_22 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_21, 2*fabs(alpha_22)));

   t2 = fmin(fabs(alpha_22), 2*S*alpha_21);

   g_21 = S*fmax(t1, t2);

   S = (alpha_32 > 0) ? 1 : ((alpha_32 < 0) ? -1 : 0);

   t1 = fmax(0.0, fmin(S*alpha_31, 2*fabs(alpha_32)));

   t2 = fmin(fabs(alpha_32), 2*S*alpha_31);

   g_31 = S*fmax(t1, t2);

   gamma_0 = ((alpha_01 == 0) ? (
   0
)
: (
   (-g_00 + g_01)*alpha_01*sigma_0_0/((alpha_01*alpha_01) + eps_TVD)
));

   gamma_1 = ((alpha_11 == 0) ? (
   0
)
: (
   (-g_10 + g_11)*alpha_11*sigma_0_1/((alpha_11*alpha_11) + eps_TVD)
));

   gamma_2 = ((alpha_21 == 0) ? (
   0
)
: (
   (-g_20 + g_21)*alpha_21*sigma_0_2/((alpha_21*alpha_21) + eps_TVD)
));

   gamma_3 = ((alpha_31 == 0) ? (
   0
)
: (
   (-g_30 + g_31)*alpha_31*sigma_0_3/((alpha_31*alpha_31) + eps_TVD)
));

    sigma_1_0 = ((fabs(gamma_0) >= delta_TVD) ? (
   fabs(gamma_0)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_0*gamma_0))*invdelta_TVD
));

    sigma_1_1 = ((fabs(gamma_1) >= delta_TVD) ? (
   fabs(gamma_1)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_1*gamma_1))*invdelta_TVD
));

    sigma_1_2 = ((fabs(gamma_2) >= delta_TVD) ? (
   fabs(gamma_2)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_2*gamma_2))*invdelta_TVD
));

    sigma_1_3 = ((fabs(gamma_3) >= delta_TVD) ? (
   fabs(gamma_3)
)
: (
   ((1.0/2.0))*(1.0/(invdelta_TVD*invdelta_TVD)
      + (gamma_3*gamma_3))*invdelta_TVD
));

   phi_0 = -fabs(sigma_0_0 + sigma_1_0)*alpha_01 + 0.5*(g_00 + g_01)*sigma_0_0;

   phi_1 = -fabs(sigma_0_1 + sigma_1_1)*alpha_11 + 0.5*(g_10 + g_11)*sigma_0_1;

   phi_2 = -fabs(sigma_0_2 + sigma_1_2)*alpha_21 + 0.5*(g_20 + g_21)*sigma_0_2;

   phi_3 = -fabs(sigma_0_3 + sigma_1_3)*alpha_31 + 0.5*(g_30 + g_31)*sigma_0_3;

   t1 = -fabs(alpha_00) + fabs(alpha_01);

   t2 = fabs(alpha_00) + fabs(alpha_01) + eps_TVD;

   theta_hat_00 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_10) + fabs(alpha_11);

   t2 = fabs(alpha_10) + fabs(alpha_11) + eps_TVD;

   theta_hat_10 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_20) + fabs(alpha_21);

   t2 = fabs(alpha_20) + fabs(alpha_21) + eps_TVD;

   theta_hat_20 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_30) + fabs(alpha_31);

   t2 = fabs(alpha_30) + fabs(alpha_31) + eps_TVD;

   theta_hat_30 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_01) + fabs(alpha_02);

   t2 = fabs(alpha_01) + fabs(alpha_02) + eps_TVD;

   theta_hat_01 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_11) + fabs(alpha_12);

   t2 = fabs(alpha_11) + fabs(alpha_12) + eps_TVD;

   theta_hat_11 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_21) + fabs(alpha_22);

   t2 = fabs(alpha_21) + fabs(alpha_22) + eps_TVD;

   theta_hat_21 = (fabs(t1/t2)*fabs(t1/t2));

   t1 = -fabs(alpha_31) + fabs(alpha_32);

   t2 = fabs(alpha_31) + fabs(alpha_32) + eps_TVD;

   theta_hat_31 = (fabs(t1/t2)*fabs(t1/t2));

   theta_0 = fmax(theta_hat_00, theta_hat_01);

   theta_1 = fmax(theta_hat_10, theta_hat_11);

   theta_2 = fmax(theta_hat_20, theta_hat_21);

   theta_3 = fmax(theta_hat_30, theta_hat_31);

   phi_star_0 = kappa_TVD*phi_0*theta_0;

   phi_star_1 = kappa_TVD*phi_1*theta_1;

   phi_star_2 = kappa_TVD*phi_2*theta_2;

   phi_star_3 = kappa_TVD*phi_3*theta_3;

   wk0_B0(0) = 0.5*(AVG_0_REV_00*phi_star_0 + AVG_0_REV_02*phi_star_2 + AVG_0_REV_03*phi_star_3);

   wk1_B0(0) = 0.5*(AVG_0_REV_10*phi_star_0 + AVG_0_REV_12*phi_star_2 + AVG_0_REV_13*phi_star_3);

   wk2_B0(0) = 0.5*(AVG_0_REV_20*phi_star_0 + AVG_0_REV_22*phi_star_2 + AVG_0_REV_23*phi_star_3);

   wk3_B0(0) = 0.5*(AVG_0_REV_31*phi_star_1 + AVG_0_REV_32*phi_star_2 + AVG_0_REV_33*phi_star_3);


  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[10].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 11);
  ops_set_halo_dirtybit3(&args[7],range);
  ops_set_halo_dirtybit3(&args[8],range);
  ops_set_halo_dirtybit3(&args[9],range);
  ops_set_halo_dirtybit3(&args[10],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[10].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg10);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel004(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10) {
  ops_arg args[11] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 11, 10, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel004_execute);
}
#endif
