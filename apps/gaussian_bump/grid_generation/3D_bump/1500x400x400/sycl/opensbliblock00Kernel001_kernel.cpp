// Auto-generated at 2024-09-02 15:36:04.464780 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel001(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1, 
    ops_arg arg2, 
    ops_arg arg3, 
    ops_arg arg4, 
    ops_arg arg5, 
    ops_arg arg6, 
    ops_arg arg7, 
    ops_arg arg8, 
    ops_arg arg9, 
    ops_arg arg10, 
    ops_arg arg11, 
    ops_arg arg12, 
    ops_arg arg13, 
    ops_arg arg14, 
    ops_arg arg15, 
    ops_arg arg16, 
    ops_arg arg17, 
    ops_arg arg18
)
{
#else
void ops_par_loop_opensbliblock00Kernel001_execute(ops_kernel_descriptor *desc)
{
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
    ops_arg arg11 = desc->args[11];
    ops_arg arg12 = desc->args[12];
    ops_arg arg13 = desc->args[13];
    ops_arg arg14 = desc->args[14];
    ops_arg arg15 = desc->args[15];
    ops_arg arg16 = desc->args[16];
    ops_arg arg17 = desc->args[17];
    ops_arg arg18 = desc->args[18];
#endif

//  ======
//  Timing
//  ======
    double __t1,__t2,__c1,__c2;

    ops_arg args[19];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;
    args[9] = arg9;
    args[10] = arg10;
    args[11] = arg11;
    args[12] = arg12;
    args[13] = arg13;
    args[14] = arg14;
    args[15] = arg15;
    args[16] = arg16;
    args[17] = arg17;
    args[18] = arg18;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args,19, range, 22)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 22, "opensbliblock00Kernel001");
        block->instance->OPS_kernels[22].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel001");
#endif

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start[3];
    int end[3];
#if defined(OPS_MPI) && !defined(OPS_LAZY)
int arg_idx[3];
#endif
#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start[n] = range[2*n];
        end[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 19, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel001 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel001 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel001 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel001 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel001 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel001 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel001 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel001 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel001 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel001 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel001 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel001 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel001 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel001 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel001 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel001 = args[7].dat->size[1];
    int xdim8_opensbliblock00Kernel001 = args[8].dat->size[0];
    int ydim8_opensbliblock00Kernel001 = args[8].dat->size[1];
    int xdim9_opensbliblock00Kernel001 = args[9].dat->size[0];
    int ydim9_opensbliblock00Kernel001 = args[9].dat->size[1];
    int xdim10_opensbliblock00Kernel001 = args[10].dat->size[0];
    int ydim10_opensbliblock00Kernel001 = args[10].dat->size[1];
    int xdim11_opensbliblock00Kernel001 = args[11].dat->size[0];
    int ydim11_opensbliblock00Kernel001 = args[11].dat->size[1];
    int xdim12_opensbliblock00Kernel001 = args[12].dat->size[0];
    int ydim12_opensbliblock00Kernel001 = args[12].dat->size[1];
    int xdim13_opensbliblock00Kernel001 = args[13].dat->size[0];
    int ydim13_opensbliblock00Kernel001 = args[13].dat->size[1];
    int xdim14_opensbliblock00Kernel001 = args[14].dat->size[0];
    int ydim14_opensbliblock00Kernel001 = args[14].dat->size[1];
    int xdim15_opensbliblock00Kernel001 = args[15].dat->size[0];
    int ydim15_opensbliblock00Kernel001 = args[15].dat->size[1];
    int xdim16_opensbliblock00Kernel001 = args[16].dat->size[0];
    int ydim16_opensbliblock00Kernel001 = args[16].dat->size[1];
    int xdim17_opensbliblock00Kernel001 = args[17].dat->size[0];
    int ydim17_opensbliblock00Kernel001 = args[17].dat->size[1];
    int xdim18_opensbliblock00Kernel001 = args[18].dat->size[0];
    int ydim18_opensbliblock00Kernel001 = args[18].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ D10_B0_p = (double *)(args[0].data_d + base0);
    int base1 = args[1].dat->base_offset;
    double * __restrict__ D11_B0_p = (double *)(args[1].data_d + base1);
    int base2 = args[2].dat->base_offset;
    double * __restrict__ U1_B0_p = (double *)(args[2].data_d + base2);
    int base3 = args[3].dat->base_offset;
    double * __restrict__ a_B0_p = (double *)(args[3].data_d + base3);
    int base4 = args[4].dat->base_offset;
    double * __restrict__ detJ_B0_p = (double *)(args[4].data_d + base4);
    int base5 = args[5].dat->base_offset;
    double * __restrict__ p_B0_p = (double *)(args[5].data_d + base5);
    int base6 = args[6].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[6].data_d + base6);
    int base7 = args[7].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[7].data_d + base7);
    int base8 = args[8].dat->base_offset;
    double * __restrict__ rhou0_B0_p = (double *)(args[8].data_d + base8);
    int base9 = args[9].dat->base_offset;
    double * __restrict__ rhou1_B0_p = (double *)(args[9].data_d + base9);
    int base10 = args[10].dat->base_offset;
    double * __restrict__ rhou2_B0_p = (double *)(args[10].data_d + base10);
    int base11 = args[11].dat->base_offset;
    double * __restrict__ u0_B0_p = (double *)(args[11].data_d + base11);
    int base12 = args[12].dat->base_offset;
    double * __restrict__ u1_B0_p = (double *)(args[12].data_d + base12);
    int base13 = args[13].dat->base_offset;
    double * __restrict__ u2_B0_p = (double *)(args[13].data_d + base13);
    int base14 = args[14].dat->base_offset;
    double * __restrict__ wk5_B0_p = (double *)(args[14].data_d + base14);
    int base15 = args[15].dat->base_offset;
    double * __restrict__ wk6_B0_p = (double *)(args[15].data_d + base15);
    int base16 = args[16].dat->base_offset;
    double * __restrict__ wk7_B0_p = (double *)(args[16].data_d + base16);
    int base17 = args[17].dat->base_offset;
    double * __restrict__ wk8_B0_p = (double *)(args[17].data_d + base17);
    int base18 = args[18].dat->base_offset;
    double * __restrict__ wk9_B0_p = (double *)(args[18].data_d + base18);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 19);
    ops_halo_exchanges(args,19,range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[22].mpi_time += __t2 - __t1;
    }

    int start_0 = start[0];
    int end_0 = end[0];
    int start_1 = start[1];
    int end_1 = end[1];
    int start_2 = start[2];
    int end_2 = end[2];
    if ((end[0]-start[0])>0 && (end[1]-start[1])>0 && (end[2]-start[2])>0) {
        block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

          auto beta_0_sycl = (*beta_0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto gama_sycl = (*gama_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto gamma_m1_sycl = (*gamma_m1_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto invgamma_m1_sycl = (*invgamma_m1_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto omega_0_sycl = (*omega_0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto shock_filter_control_sycl = (*shock_filter_control_p).template get_access<cl::sycl::access::mode::read>(cgh);

          cgh.parallel_for<class opensbliblock00Kernel001_kernel>(cl::sycl::nd_range<3>(cl::sycl::range<3>(
               ((end[2]-start[2]-1)/block->instance->OPS_block_size_z+1)*block->instance->OPS_block_size_z,
               ((end[1]-start[1]-1)/block->instance->OPS_block_size_y+1)*block->instance->OPS_block_size_y,
                ((end[0]-start[0]-1)/block->instance->OPS_block_size_x+1)*block->instance->OPS_block_size_x
                 ),cl::sycl::range<3>(
                 block->instance->OPS_block_size_z,
                 block->instance->OPS_block_size_y,
          block->instance->OPS_block_size_x
                 ))
          , [=](cl::sycl::nd_item<3> item
          ) [[intel::kernel_args_restrict]] {

              int n_z = item.get_global_id()[0]+start_2;
              int n_y = item.get_global_id()[1]+start_1;
              int n_x = item.get_global_id()[2]+start_0;

              const ACC<double> D10_B0(xdim0_opensbliblock00Kernel001, ydim0_opensbliblock00Kernel001, D10_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel001*1 + n_z * xdim0_opensbliblock00Kernel001 * ydim0_opensbliblock00Kernel001*1);
              const ACC<double> D11_B0(xdim1_opensbliblock00Kernel001, ydim1_opensbliblock00Kernel001, D11_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel001*1 + n_z * xdim1_opensbliblock00Kernel001 * ydim1_opensbliblock00Kernel001*1);
              const ACC<double> U1_B0(xdim2_opensbliblock00Kernel001, ydim2_opensbliblock00Kernel001, U1_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel001*1 + n_z * xdim2_opensbliblock00Kernel001 * ydim2_opensbliblock00Kernel001*1);
              const ACC<double> a_B0(xdim3_opensbliblock00Kernel001, ydim3_opensbliblock00Kernel001, a_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel001*1 + n_z * xdim3_opensbliblock00Kernel001 * ydim3_opensbliblock00Kernel001*1);
              const ACC<double> detJ_B0(xdim4_opensbliblock00Kernel001, ydim4_opensbliblock00Kernel001, detJ_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel001*1 + n_z * xdim4_opensbliblock00Kernel001 * ydim4_opensbliblock00Kernel001*1);
              const ACC<double> p_B0(xdim5_opensbliblock00Kernel001, ydim5_opensbliblock00Kernel001, p_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel001*1 + n_z * xdim5_opensbliblock00Kernel001 * ydim5_opensbliblock00Kernel001*1);
              const ACC<double> rhoE_B0(xdim6_opensbliblock00Kernel001, ydim6_opensbliblock00Kernel001, rhoE_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel001*1 + n_z * xdim6_opensbliblock00Kernel001 * ydim6_opensbliblock00Kernel001*1);
              const ACC<double> rho_B0(xdim7_opensbliblock00Kernel001, ydim7_opensbliblock00Kernel001, rho_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel001*1 + n_z * xdim7_opensbliblock00Kernel001 * ydim7_opensbliblock00Kernel001*1);
              const ACC<double> rhou0_B0(xdim8_opensbliblock00Kernel001, ydim8_opensbliblock00Kernel001, rhou0_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel001*1 + n_z * xdim8_opensbliblock00Kernel001 * ydim8_opensbliblock00Kernel001*1);
              const ACC<double> rhou1_B0(xdim9_opensbliblock00Kernel001, ydim9_opensbliblock00Kernel001, rhou1_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel001*1 + n_z * xdim9_opensbliblock00Kernel001 * ydim9_opensbliblock00Kernel001*1);
              const ACC<double> rhou2_B0(xdim10_opensbliblock00Kernel001, ydim10_opensbliblock00Kernel001, rhou2_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel001*1 + n_z * xdim10_opensbliblock00Kernel001 * ydim10_opensbliblock00Kernel001*1);
              const ACC<double> u0_B0(xdim11_opensbliblock00Kernel001, ydim11_opensbliblock00Kernel001, u0_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel001*1 + n_z * xdim11_opensbliblock00Kernel001 * ydim11_opensbliblock00Kernel001*1);
              const ACC<double> u1_B0(xdim12_opensbliblock00Kernel001, ydim12_opensbliblock00Kernel001, u1_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel001*1 + n_z * xdim12_opensbliblock00Kernel001 * ydim12_opensbliblock00Kernel001*1);
              const ACC<double> u2_B0(xdim13_opensbliblock00Kernel001, ydim13_opensbliblock00Kernel001, u2_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel001*1 + n_z * xdim13_opensbliblock00Kernel001 * ydim13_opensbliblock00Kernel001*1);
              ACC<double> wk5_B0(xdim14_opensbliblock00Kernel001, ydim14_opensbliblock00Kernel001, wk5_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel001*1 + n_z * xdim14_opensbliblock00Kernel001 * ydim14_opensbliblock00Kernel001*1);
              ACC<double> wk6_B0(xdim15_opensbliblock00Kernel001, ydim15_opensbliblock00Kernel001, wk6_B0_p + n_x*1 + n_y * xdim15_opensbliblock00Kernel001*1 + n_z * xdim15_opensbliblock00Kernel001 * ydim15_opensbliblock00Kernel001*1);
              ACC<double> wk7_B0(xdim16_opensbliblock00Kernel001, ydim16_opensbliblock00Kernel001, wk7_B0_p + n_x*1 + n_y * xdim16_opensbliblock00Kernel001*1 + n_z * xdim16_opensbliblock00Kernel001 * ydim16_opensbliblock00Kernel001*1);
              ACC<double> wk8_B0(xdim17_opensbliblock00Kernel001, ydim17_opensbliblock00Kernel001, wk8_B0_p + n_x*1 + n_y * xdim17_opensbliblock00Kernel001*1 + n_z * xdim17_opensbliblock00Kernel001 * ydim17_opensbliblock00Kernel001*1);
              ACC<double> wk9_B0(xdim18_opensbliblock00Kernel001, ydim18_opensbliblock00Kernel001, wk9_B0_p + n_x*1 + n_y * xdim18_opensbliblock00Kernel001*1 + n_z * xdim18_opensbliblock00Kernel001 * ydim18_opensbliblock00Kernel001*1);
//  =========
//  User code
//  =========
                if (n_x < end_0 && n_y < end_1 && n_z < end_2) {
                    
   double AVG_1_1_LEV_00 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_04 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double AVG_1_1_LEV_12 = 0.0;
   double AVG_1_1_LEV_13 = 0.0;
   double AVG_1_1_LEV_14 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double AVG_1_1_LEV_34 = 0.0;
   double AVG_1_1_LEV_40 = 0.0;
   double AVG_1_1_LEV_41 = 0.0;
   double AVG_1_1_LEV_42 = 0.0;
   double AVG_1_1_LEV_43 = 0.0;
   double AVG_1_1_LEV_44 = 0.0;
   double AVG_1_D10 = 0.0;
   double AVG_1_D11 = 0.0;
   double AVG_1_a = 0.0;
   double AVG_1_detJ = 0.0;
   double AVG_1_inv_rho = 0.0;
   double AVG_1_rho = 0.0;
   double AVG_1_u0 = 0.0;
   double AVG_1_u1 = 0.0;
   double AVG_1_u2 = 0.0;
   double CF_00 = 0.0;
   double CF_01 = 0.0;
   double CF_02 = 0.0;
   double CF_03 = 0.0;
   double CF_04 = 0.0;
   double CF_05 = 0.0;
   double CF_10 = 0.0;
   double CF_11 = 0.0;
   double CF_12 = 0.0;
   double CF_13 = 0.0;
   double CF_14 = 0.0;
   double CF_15 = 0.0;
   double CF_20 = 0.0;
   double CF_21 = 0.0;
   double CF_22 = 0.0;
   double CF_23 = 0.0;
   double CF_24 = 0.0;
   double CF_25 = 0.0;
   double CF_30 = 0.0;
   double CF_31 = 0.0;
   double CF_32 = 0.0;
   double CF_33 = 0.0;
   double CF_34 = 0.0;
   double CF_35 = 0.0;
   double CF_40 = 0.0;
   double CF_41 = 0.0;
   double CF_42 = 0.0;
   double CF_43 = 0.0;
   double CF_44 = 0.0;
   double CF_45 = 0.0;
   double CS_00 = 0.0;
   double CS_01 = 0.0;
   double CS_02 = 0.0;
   double CS_03 = 0.0;
   double CS_04 = 0.0;
   double CS_05 = 0.0;
   double CS_10 = 0.0;
   double CS_11 = 0.0;
   double CS_12 = 0.0;
   double CS_13 = 0.0;
   double CS_14 = 0.0;
   double CS_15 = 0.0;
   double CS_20 = 0.0;
   double CS_21 = 0.0;
   double CS_22 = 0.0;
   double CS_23 = 0.0;
   double CS_24 = 0.0;
   double CS_25 = 0.0;
   double CS_30 = 0.0;
   double CS_31 = 0.0;
   double CS_32 = 0.0;
   double CS_33 = 0.0;
   double CS_34 = 0.0;
   double CS_35 = 0.0;
   double CS_40 = 0.0;
   double CS_41 = 0.0;
   double CS_42 = 0.0;
   double CS_43 = 0.0;
   double CS_44 = 0.0;
   double CS_45 = 0.0;
   double Recon_0 = 0.0;
   double Recon_1 = 0.0;
   double Recon_2 = 0.0;
   double Recon_3 = 0.0;
   double Recon_4 = 0.0;
   double alpha_0 = 0.0;
   double alpha_1 = 0.0;
   double alpha_2 = 0.0;
   double beta_0_sycl[0] = 0.0;
   double beta_1 = 0.0;
   double beta_2 = 0.0;
   double inv_AVG_a = 0.0;
   double inv_AVG_met_fact = 0.0;
   double inv_AVG_rho = 0.0;
   double inv_alpha_sum = 0.0;
   double max_lambda_00 = 0.0;
   double max_lambda_11 = 0.0;
   double max_lambda_22 = 0.0;
   double max_lambda_33 = 0.0;
   double max_lambda_44 = 0.0;
   double omega_0_sycl[0] = 0.0;
   double omega_1 = 0.0;
   double omega_2 = 0.0;
   AVG_1_rho = cl::sycl::sqrt(rho_B0(0,0,0)*rho_B0(0,1,0));

   AVG_1_inv_rho = 1.0/((cl::sycl::sqrt(rho_B0(0,0,0)) + cl::sycl::sqrt(rho_B0(0,1,0))));

   AVG_1_u0 = (cl::sycl::sqrt(rho_B0(0,0,0))*u0_B0(0,0,0) + cl::sycl::sqrt(rho_B0(0,1,0))*u0_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u1 = (cl::sycl::sqrt(rho_B0(0,0,0))*u1_B0(0,0,0) + cl::sycl::sqrt(rho_B0(0,1,0))*u1_B0(0,1,0))*AVG_1_inv_rho;

   AVG_1_u2 = (cl::sycl::sqrt(rho_B0(0,0,0))*u2_B0(0,0,0) + cl::sycl::sqrt(rho_B0(0,1,0))*u2_B0(0,1,0))*AVG_1_inv_rho;

    AVG_1_a = cl::sycl::sqrt((-(1.0/2.0)*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2)) + ((p_B0(0,0,0) +
      rhoE_B0(0,0,0))/cl::sycl::sqrt(rho_B0(0,0,0)) + (p_B0(0,1,0) +
      rhoE_B0(0,1,0))/cl::sycl::sqrt(rho_B0(0,1,0)))*AVG_1_inv_rho)*gamma_m1_sycl[0]);

   AVG_1_D10 = ((1.0/2.0))*(D10_B0(0,0,0) + D10_B0(0,1,0));

   AVG_1_detJ = ((1.0/2.0))*(detJ_B0(0,0,0) + detJ_B0(0,1,0));

   AVG_1_D11 = ((1.0/2.0))*(D11_B0(0,0,0) + D11_B0(0,1,0));

   inv_AVG_a = 1.0/(AVG_1_a);

   inv_AVG_rho = 1.0/(AVG_1_rho);

   inv_AVG_met_fact = pow((AVG_1_D10*AVG_1_D10) + (AVG_1_D11*AVG_1_D11), (-1.0/2.0));

    AVG_1_1_LEV_00 = -(1.0/2.0)*(-2*AVG_1_D10 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*AVG_1_D10 -
      2*AVG_1_D11*AVG_1_u2*inv_AVG_rho + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D10 +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D10 +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D10)*inv_AVG_met_fact;

   AVG_1_1_LEV_01 = (inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D10*AVG_1_u0*inv_AVG_met_fact;

   AVG_1_1_LEV_02 = (inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D10*AVG_1_u1*inv_AVG_met_fact;

    AVG_1_1_LEV_03 = (-AVG_1_D11*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_1_D10*AVG_1_u2 +
      (inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D10*AVG_1_u2)*inv_AVG_met_fact;

   AVG_1_1_LEV_04 = -(inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D10*inv_AVG_met_fact;

    AVG_1_1_LEV_10 = -(1.0/2.0)*(-2*AVG_1_D11 - (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 -
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 - (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*AVG_1_D11 +
      2*AVG_1_D10*AVG_1_u2*inv_AVG_rho + (AVG_1_u0*AVG_1_u0)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D11 +
      (AVG_1_u1*AVG_1_u1)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D11 +
      (AVG_1_u2*AVG_1_u2)*(inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D11)*inv_AVG_met_fact;

   AVG_1_1_LEV_11 = (inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D11*AVG_1_u0*inv_AVG_met_fact;

   AVG_1_1_LEV_12 = (inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D11*AVG_1_u1*inv_AVG_met_fact;

    AVG_1_1_LEV_13 = (AVG_1_D10*inv_AVG_rho - (inv_AVG_a*inv_AVG_a)*AVG_1_D11*AVG_1_u2 +
      (inv_AVG_a*inv_AVG_a)*gama_sycl[0]*AVG_1_D11*AVG_1_u2)*inv_AVG_met_fact;

   AVG_1_1_LEV_14 = -(inv_AVG_a*inv_AVG_a)*gamma_m1_sycl[0]*AVG_1_D11*inv_AVG_met_fact;

   AVG_1_1_LEV_20 = (AVG_1_D10*AVG_1_u1 - AVG_1_D11*AVG_1_u0)*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_21 = AVG_1_D11*inv_AVG_met_fact*inv_AVG_rho;

   AVG_1_1_LEV_22 = -AVG_1_D10*inv_AVG_met_fact*inv_AVG_rho;

    AVG_1_1_LEV_30 = -0.353553390593274*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2) -
      (AVG_1_u0*AVG_1_u0)*gama_sycl[0] - (AVG_1_u1*AVG_1_u1)*gama_sycl[0] - (AVG_1_u2*AVG_1_u2)*gama_sycl[0] +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_31 = 0.707106781186547*(-gama_sycl[0]*AVG_1_u0 + AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_32 = 0.707106781186547*(-gama_sycl[0]*AVG_1_u1 + AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_33 = -0.707106781186547*gamma_m1_sycl[0]*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_34 = 0.707106781186547*gamma_m1_sycl[0]*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_40 = 0.353553390593274*(-(AVG_1_u0*AVG_1_u0) - (AVG_1_u1*AVG_1_u1) - (AVG_1_u2*AVG_1_u2) +
      (AVG_1_u0*AVG_1_u0)*gama_sycl[0] + (AVG_1_u1*AVG_1_u1)*gama_sycl[0] + (AVG_1_u2*AVG_1_u2)*gama_sycl[0] +
      2*AVG_1_D10*AVG_1_a*AVG_1_u0*inv_AVG_met_fact +
      2*AVG_1_D11*AVG_1_a*AVG_1_u1*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_41 = -0.707106781186547*(-AVG_1_u0 + gama_sycl[0]*AVG_1_u0 +
      AVG_1_D10*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_42 = -0.707106781186547*(-AVG_1_u1 + gama_sycl[0]*AVG_1_u1 +
      AVG_1_D11*AVG_1_a*inv_AVG_met_fact)*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_43 = -0.707106781186547*gamma_m1_sycl[0]*AVG_1_u2*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_44 = 0.707106781186547*gamma_m1_sycl[0]*inv_AVG_a*inv_AVG_rho;

    CF_00 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_04 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_01 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_02 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_00 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_04 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_01 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_02 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_03)*detJ_B0(0,-2,0);

    CF_10 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_14 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_11 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_12 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_10 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_14 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_11 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_12 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_13)*detJ_B0(0,-2,0);

    CF_20 = (p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_21 + p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_22 +
      U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_20 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_21 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_22)*detJ_B0(0,-2,0);

    CF_30 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_34 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_31 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_32 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_30 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_34 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_31 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_32 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_33)*detJ_B0(0,-2,0);

    CF_40 = (p_B0(0,-2,0)*U1_B0(0,-2,0)*AVG_1_1_LEV_44 + p_B0(0,-2,0)*D10_B0(0,-2,0)*AVG_1_1_LEV_41 +
      p_B0(0,-2,0)*D11_B0(0,-2,0)*AVG_1_1_LEV_42 + U1_B0(0,-2,0)*rho_B0(0,-2,0)*AVG_1_1_LEV_40 +
      U1_B0(0,-2,0)*rhoE_B0(0,-2,0)*AVG_1_1_LEV_44 + U1_B0(0,-2,0)*rhou0_B0(0,-2,0)*AVG_1_1_LEV_41 +
      U1_B0(0,-2,0)*rhou1_B0(0,-2,0)*AVG_1_1_LEV_42 + U1_B0(0,-2,0)*rhou2_B0(0,-2,0)*AVG_1_1_LEV_43)*detJ_B0(0,-2,0);

    CS_00 = rho_B0(0,-2,0)*AVG_1_1_LEV_00 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_04 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_02 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_03;

    CS_10 = rho_B0(0,-2,0)*AVG_1_1_LEV_10 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_14 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_12 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_13;

   CS_20 = rho_B0(0,-2,0)*AVG_1_1_LEV_20 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_21 + rhou1_B0(0,-2,0)*AVG_1_1_LEV_22;

    CS_30 = rho_B0(0,-2,0)*AVG_1_1_LEV_30 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_34 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_32 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_33;

    CS_40 = rho_B0(0,-2,0)*AVG_1_1_LEV_40 + rhoE_B0(0,-2,0)*AVG_1_1_LEV_44 + rhou0_B0(0,-2,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,-2,0)*AVG_1_1_LEV_42 + rhou2_B0(0,-2,0)*AVG_1_1_LEV_43;

    CF_01 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_04 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_01 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_02 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_00 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_04 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_01 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_02 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_03)*detJ_B0(0,-1,0);

    CF_11 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_14 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_11 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_12 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_10 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_14 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_11 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_12 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_13)*detJ_B0(0,-1,0);

    CF_21 = (p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_21 + p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_22 +
      U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_20 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_21 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_22)*detJ_B0(0,-1,0);

    CF_31 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_34 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_31 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_32 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_30 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_34 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_31 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_32 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_33)*detJ_B0(0,-1,0);

    CF_41 = (p_B0(0,-1,0)*U1_B0(0,-1,0)*AVG_1_1_LEV_44 + p_B0(0,-1,0)*D10_B0(0,-1,0)*AVG_1_1_LEV_41 +
      p_B0(0,-1,0)*D11_B0(0,-1,0)*AVG_1_1_LEV_42 + U1_B0(0,-1,0)*rho_B0(0,-1,0)*AVG_1_1_LEV_40 +
      U1_B0(0,-1,0)*rhoE_B0(0,-1,0)*AVG_1_1_LEV_44 + U1_B0(0,-1,0)*rhou0_B0(0,-1,0)*AVG_1_1_LEV_41 +
      U1_B0(0,-1,0)*rhou1_B0(0,-1,0)*AVG_1_1_LEV_42 + U1_B0(0,-1,0)*rhou2_B0(0,-1,0)*AVG_1_1_LEV_43)*detJ_B0(0,-1,0);

    CS_01 = rho_B0(0,-1,0)*AVG_1_1_LEV_00 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_04 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_02 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_03;

    CS_11 = rho_B0(0,-1,0)*AVG_1_1_LEV_10 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_14 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_12 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_13;

   CS_21 = rho_B0(0,-1,0)*AVG_1_1_LEV_20 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_21 + rhou1_B0(0,-1,0)*AVG_1_1_LEV_22;

    CS_31 = rho_B0(0,-1,0)*AVG_1_1_LEV_30 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_34 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_32 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_33;

    CS_41 = rho_B0(0,-1,0)*AVG_1_1_LEV_40 + rhoE_B0(0,-1,0)*AVG_1_1_LEV_44 + rhou0_B0(0,-1,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,-1,0)*AVG_1_1_LEV_42 + rhou2_B0(0,-1,0)*AVG_1_1_LEV_43;

    CF_02 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_04 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_01 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_02 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_00 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_04 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_01 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_02 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_03)*detJ_B0(0,0,0);

    CF_12 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_14 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_11 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_12 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_10 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_14 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_11 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_12 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_13)*detJ_B0(0,0,0);

    CF_22 = (p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_21 + p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_22 +
      U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_20 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_21 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_22)*detJ_B0(0,0,0);

    CF_32 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_34 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_31 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_32 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_30 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_34 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_31 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_32 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_33)*detJ_B0(0,0,0);

    CF_42 = (p_B0(0,0,0)*U1_B0(0,0,0)*AVG_1_1_LEV_44 + p_B0(0,0,0)*D10_B0(0,0,0)*AVG_1_1_LEV_41 +
      p_B0(0,0,0)*D11_B0(0,0,0)*AVG_1_1_LEV_42 + U1_B0(0,0,0)*rho_B0(0,0,0)*AVG_1_1_LEV_40 +
      U1_B0(0,0,0)*rhoE_B0(0,0,0)*AVG_1_1_LEV_44 + U1_B0(0,0,0)*rhou0_B0(0,0,0)*AVG_1_1_LEV_41 +
      U1_B0(0,0,0)*rhou1_B0(0,0,0)*AVG_1_1_LEV_42 + U1_B0(0,0,0)*rhou2_B0(0,0,0)*AVG_1_1_LEV_43)*detJ_B0(0,0,0);

    CS_02 = rho_B0(0,0,0)*AVG_1_1_LEV_00 + rhoE_B0(0,0,0)*AVG_1_1_LEV_04 + rhou0_B0(0,0,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_02 + rhou2_B0(0,0,0)*AVG_1_1_LEV_03;

    CS_12 = rho_B0(0,0,0)*AVG_1_1_LEV_10 + rhoE_B0(0,0,0)*AVG_1_1_LEV_14 + rhou0_B0(0,0,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_12 + rhou2_B0(0,0,0)*AVG_1_1_LEV_13;

   CS_22 = rho_B0(0,0,0)*AVG_1_1_LEV_20 + rhou0_B0(0,0,0)*AVG_1_1_LEV_21 + rhou1_B0(0,0,0)*AVG_1_1_LEV_22;

    CS_32 = rho_B0(0,0,0)*AVG_1_1_LEV_30 + rhoE_B0(0,0,0)*AVG_1_1_LEV_34 + rhou0_B0(0,0,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_32 + rhou2_B0(0,0,0)*AVG_1_1_LEV_33;

    CS_42 = rho_B0(0,0,0)*AVG_1_1_LEV_40 + rhoE_B0(0,0,0)*AVG_1_1_LEV_44 + rhou0_B0(0,0,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,0,0)*AVG_1_1_LEV_42 + rhou2_B0(0,0,0)*AVG_1_1_LEV_43;

    CF_03 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_04 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_01 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_02 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_00 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_04 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_01 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_02 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_03)*detJ_B0(0,1,0);

    CF_13 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_14 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_11 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_12 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_10 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_14 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_11 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_12 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_13)*detJ_B0(0,1,0);

    CF_23 = (p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_21 + p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_22 +
      U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_20 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_21 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_22)*detJ_B0(0,1,0);

    CF_33 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_34 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_31 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_32 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_30 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_34 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_31 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_32 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_33)*detJ_B0(0,1,0);

    CF_43 = (p_B0(0,1,0)*U1_B0(0,1,0)*AVG_1_1_LEV_44 + p_B0(0,1,0)*D10_B0(0,1,0)*AVG_1_1_LEV_41 +
      p_B0(0,1,0)*D11_B0(0,1,0)*AVG_1_1_LEV_42 + U1_B0(0,1,0)*rho_B0(0,1,0)*AVG_1_1_LEV_40 +
      U1_B0(0,1,0)*rhoE_B0(0,1,0)*AVG_1_1_LEV_44 + U1_B0(0,1,0)*rhou0_B0(0,1,0)*AVG_1_1_LEV_41 +
      U1_B0(0,1,0)*rhou1_B0(0,1,0)*AVG_1_1_LEV_42 + U1_B0(0,1,0)*rhou2_B0(0,1,0)*AVG_1_1_LEV_43)*detJ_B0(0,1,0);

    CS_03 = rho_B0(0,1,0)*AVG_1_1_LEV_00 + rhoE_B0(0,1,0)*AVG_1_1_LEV_04 + rhou0_B0(0,1,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_02 + rhou2_B0(0,1,0)*AVG_1_1_LEV_03;

    CS_13 = rho_B0(0,1,0)*AVG_1_1_LEV_10 + rhoE_B0(0,1,0)*AVG_1_1_LEV_14 + rhou0_B0(0,1,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_12 + rhou2_B0(0,1,0)*AVG_1_1_LEV_13;

   CS_23 = rho_B0(0,1,0)*AVG_1_1_LEV_20 + rhou0_B0(0,1,0)*AVG_1_1_LEV_21 + rhou1_B0(0,1,0)*AVG_1_1_LEV_22;

    CS_33 = rho_B0(0,1,0)*AVG_1_1_LEV_30 + rhoE_B0(0,1,0)*AVG_1_1_LEV_34 + rhou0_B0(0,1,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_32 + rhou2_B0(0,1,0)*AVG_1_1_LEV_33;

    CS_43 = rho_B0(0,1,0)*AVG_1_1_LEV_40 + rhoE_B0(0,1,0)*AVG_1_1_LEV_44 + rhou0_B0(0,1,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,1,0)*AVG_1_1_LEV_42 + rhou2_B0(0,1,0)*AVG_1_1_LEV_43;

    CF_04 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_04 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_01 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_02 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_00 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_04 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_01 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_02 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_03)*detJ_B0(0,2,0);

    CF_14 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_14 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_11 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_12 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_10 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_14 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_11 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_12 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_13)*detJ_B0(0,2,0);

    CF_24 = (p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_21 + p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_22 +
      U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_20 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_21 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_22)*detJ_B0(0,2,0);

    CF_34 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_34 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_31 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_32 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_30 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_34 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_31 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_32 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_33)*detJ_B0(0,2,0);

    CF_44 = (p_B0(0,2,0)*U1_B0(0,2,0)*AVG_1_1_LEV_44 + p_B0(0,2,0)*D10_B0(0,2,0)*AVG_1_1_LEV_41 +
      p_B0(0,2,0)*D11_B0(0,2,0)*AVG_1_1_LEV_42 + U1_B0(0,2,0)*rho_B0(0,2,0)*AVG_1_1_LEV_40 +
      U1_B0(0,2,0)*rhoE_B0(0,2,0)*AVG_1_1_LEV_44 + U1_B0(0,2,0)*rhou0_B0(0,2,0)*AVG_1_1_LEV_41 +
      U1_B0(0,2,0)*rhou1_B0(0,2,0)*AVG_1_1_LEV_42 + U1_B0(0,2,0)*rhou2_B0(0,2,0)*AVG_1_1_LEV_43)*detJ_B0(0,2,0);

    CS_04 = rho_B0(0,2,0)*AVG_1_1_LEV_00 + rhoE_B0(0,2,0)*AVG_1_1_LEV_04 + rhou0_B0(0,2,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_02 + rhou2_B0(0,2,0)*AVG_1_1_LEV_03;

    CS_14 = rho_B0(0,2,0)*AVG_1_1_LEV_10 + rhoE_B0(0,2,0)*AVG_1_1_LEV_14 + rhou0_B0(0,2,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_12 + rhou2_B0(0,2,0)*AVG_1_1_LEV_13;

   CS_24 = rho_B0(0,2,0)*AVG_1_1_LEV_20 + rhou0_B0(0,2,0)*AVG_1_1_LEV_21 + rhou1_B0(0,2,0)*AVG_1_1_LEV_22;

    CS_34 = rho_B0(0,2,0)*AVG_1_1_LEV_30 + rhoE_B0(0,2,0)*AVG_1_1_LEV_34 + rhou0_B0(0,2,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_32 + rhou2_B0(0,2,0)*AVG_1_1_LEV_33;

    CS_44 = rho_B0(0,2,0)*AVG_1_1_LEV_40 + rhoE_B0(0,2,0)*AVG_1_1_LEV_44 + rhou0_B0(0,2,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,2,0)*AVG_1_1_LEV_42 + rhou2_B0(0,2,0)*AVG_1_1_LEV_43;

    CF_05 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_04 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_01 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_02 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_00 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_04 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_01 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_02 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_03)*detJ_B0(0,3,0);

    CF_15 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_14 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_11 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_12 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_10 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_14 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_11 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_12 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_13)*detJ_B0(0,3,0);

    CF_25 = (p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_21 + p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_22 +
      U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_20 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_21 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_22)*detJ_B0(0,3,0);

    CF_35 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_34 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_31 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_32 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_30 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_34 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_31 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_32 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_33)*detJ_B0(0,3,0);

    CF_45 = (p_B0(0,3,0)*U1_B0(0,3,0)*AVG_1_1_LEV_44 + p_B0(0,3,0)*D10_B0(0,3,0)*AVG_1_1_LEV_41 +
      p_B0(0,3,0)*D11_B0(0,3,0)*AVG_1_1_LEV_42 + U1_B0(0,3,0)*rho_B0(0,3,0)*AVG_1_1_LEV_40 +
      U1_B0(0,3,0)*rhoE_B0(0,3,0)*AVG_1_1_LEV_44 + U1_B0(0,3,0)*rhou0_B0(0,3,0)*AVG_1_1_LEV_41 +
      U1_B0(0,3,0)*rhou1_B0(0,3,0)*AVG_1_1_LEV_42 + U1_B0(0,3,0)*rhou2_B0(0,3,0)*AVG_1_1_LEV_43)*detJ_B0(0,3,0);

    CS_05 = rho_B0(0,3,0)*AVG_1_1_LEV_00 + rhoE_B0(0,3,0)*AVG_1_1_LEV_04 + rhou0_B0(0,3,0)*AVG_1_1_LEV_01 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_02 + rhou2_B0(0,3,0)*AVG_1_1_LEV_03;

    CS_15 = rho_B0(0,3,0)*AVG_1_1_LEV_10 + rhoE_B0(0,3,0)*AVG_1_1_LEV_14 + rhou0_B0(0,3,0)*AVG_1_1_LEV_11 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_12 + rhou2_B0(0,3,0)*AVG_1_1_LEV_13;

   CS_25 = rho_B0(0,3,0)*AVG_1_1_LEV_20 + rhou0_B0(0,3,0)*AVG_1_1_LEV_21 + rhou1_B0(0,3,0)*AVG_1_1_LEV_22;

    CS_35 = rho_B0(0,3,0)*AVG_1_1_LEV_30 + rhoE_B0(0,3,0)*AVG_1_1_LEV_34 + rhou0_B0(0,3,0)*AVG_1_1_LEV_31 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_32 + rhou2_B0(0,3,0)*AVG_1_1_LEV_33;

    CS_45 = rho_B0(0,3,0)*AVG_1_1_LEV_40 + rhoE_B0(0,3,0)*AVG_1_1_LEV_44 + rhou0_B0(0,3,0)*AVG_1_1_LEV_41 +
      rhou1_B0(0,3,0)*AVG_1_1_LEV_42 + rhou2_B0(0,3,0)*AVG_1_1_LEV_43;

    max_lambda_00 = shock_filter_control_sycl[0]*cl::sycl::fmax(cl::sycl::fabs(u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) +
      u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)), cl::sycl::fabs(u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) +
      u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

   max_lambda_11 = max_lambda_00;

   max_lambda_22 = max_lambda_00;

    max_lambda_33 = shock_filter_control_sycl[0]*cl::sycl::fmax(cl::sycl::fabs(cl::sycl::sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)),
      cl::sycl::fabs(cl::sycl::sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

    max_lambda_44 = shock_filter_control_sycl[0]*cl::sycl::fmax(cl::sycl::fabs(-cl::sycl::sqrt((D10_B0(0,1,0)*D10_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)) +
      (D11_B0(0,1,0)*D11_B0(0,1,0))*(detJ_B0(0,1,0)*detJ_B0(0,1,0)))*a_B0(0,1,0) +
      u0_B0(0,1,0)*D10_B0(0,1,0)*detJ_B0(0,1,0) + u1_B0(0,1,0)*D11_B0(0,1,0)*detJ_B0(0,1,0)),
      cl::sycl::fabs(-cl::sycl::sqrt((D10_B0(0,0,0)*D10_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)) +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*(detJ_B0(0,0,0)*detJ_B0(0,0,0)))*a_B0(0,0,0) +
      u0_B0(0,0,0)*D10_B0(0,0,0)*detJ_B0(0,0,0) + u1_B0(0,0,0)*D11_B0(0,0,0)*detJ_B0(0,0,0)));

    beta_0_sycl[0] = ((1.0/3.0))*((CS_04*max_lambda_00 + CF_04)*(CS_04*max_lambda_00 + CF_04)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_04*max_lambda_00 + CF_04) + ((25.0/6.0))*(CS_03*max_lambda_00 +
      CF_03))*(CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(CS_02*max_lambda_00 +
      CF_02)*(-(31.0/6.0)*(CS_03*max_lambda_00 + CF_03) + ((5.0/3.0))*(CS_02*max_lambda_00 + CF_02) +
      ((11.0/6.0))*(CS_04*max_lambda_00 + CF_04));

    beta_1 = ((1.0/3.0))*((CS_03*max_lambda_00 + CF_03)*(CS_03*max_lambda_00 + CF_03)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_03*max_lambda_00 + CF_03) + ((13.0/6.0))*(CS_02*max_lambda_00 +
      CF_02))*(CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(CS_01*max_lambda_00 +
      CF_01)*(-(13.0/6.0)*(CS_02*max_lambda_00 + CF_02) + ((2.0/3.0))*(CS_01*max_lambda_00 + CF_01) +
      ((5.0/6.0))*(CS_03*max_lambda_00 + CF_03));

    beta_2 = ((5.0/6.0))*((CS_02*max_lambda_00 + CF_02)*(CS_02*max_lambda_00 + CF_02)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_00*max_lambda_00 + CF_00) + ((11.0/6.0))*(CS_02*max_lambda_00 +
      CF_02))*(CS_00*max_lambda_00 + CF_00) + ((1.0/2.0))*(CS_01*max_lambda_00 +
      CF_01)*(-(31.0/6.0)*(CS_02*max_lambda_00 + CF_02) - (19.0/6.0)*(CS_00*max_lambda_00 + CF_00) +
      ((25.0/6.0))*(CS_01*max_lambda_00 + CF_01));

    alpha_0 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = (-(7.0/12.0)*(CS_01*max_lambda_00 + CF_01) + ((1.0/6.0))*(CS_00*max_lambda_00 + CF_00) +
      ((11.0/12.0))*(CS_02*max_lambda_00 + CF_02))*omega_2 + (-(1.0/12.0)*(CS_01*max_lambda_00 + CF_01) +
      ((1.0/6.0))*(CS_03*max_lambda_00 + CF_03) + ((5.0/12.0))*(CS_02*max_lambda_00 + CF_02))*omega_1 +
      (-(1.0/12.0)*(CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(CS_03*max_lambda_00 + CF_03))*omega_0_sycl[0] + Recon_0;

    beta_0_sycl[0] = ((1.0/3.0))*((-CS_05*max_lambda_00 + CF_05)*(-CS_05*max_lambda_00 + CF_05)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_05*max_lambda_00 + CF_05) + ((25.0/6.0))*(-CS_04*max_lambda_00 +
      CF_04))*(-CS_04*max_lambda_00 + CF_04) + ((1.0/2.0))*(-CS_03*max_lambda_00 +
      CF_03)*(-(31.0/6.0)*(-CS_04*max_lambda_00 + CF_04) + ((5.0/3.0))*(-CS_03*max_lambda_00 + CF_03) +
      ((11.0/6.0))*(-CS_05*max_lambda_00 + CF_05));

    beta_1 = ((1.0/3.0))*((-CS_04*max_lambda_00 + CF_04)*(-CS_04*max_lambda_00 + CF_04)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_04*max_lambda_00 + CF_04) + ((13.0/6.0))*(-CS_03*max_lambda_00 +
      CF_03))*(-CS_03*max_lambda_00 + CF_03) + ((1.0/2.0))*(-CS_02*max_lambda_00 +
      CF_02)*(-(13.0/6.0)*(-CS_03*max_lambda_00 + CF_03) + ((2.0/3.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/6.0))*(-CS_04*max_lambda_00 + CF_04));

    beta_2 = ((5.0/6.0))*((-CS_03*max_lambda_00 + CF_03)*(-CS_03*max_lambda_00 + CF_03)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_03*max_lambda_00 + CF_03) + ((25.0/6.0))*(-CS_02*max_lambda_00 +
      CF_02))*(-CS_02*max_lambda_00 + CF_02) + ((1.0/2.0))*(-CS_01*max_lambda_00 +
      CF_01)*(-(19.0/6.0)*(-CS_02*max_lambda_00 + CF_02) + ((2.0/3.0))*(-CS_01*max_lambda_00 + CF_01) +
      ((11.0/6.0))*(-CS_03*max_lambda_00 + CF_03));

    alpha_0 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_0 = (-(7.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_05*max_lambda_00 + CF_05) +
      ((11.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*omega_0_sycl[0] + (-(1.0/12.0)*(-CS_01*max_lambda_00 + CF_01) +
      ((1.0/6.0))*(-CS_03*max_lambda_00 + CF_03) + ((5.0/12.0))*(-CS_02*max_lambda_00 + CF_02))*omega_2 +
      (-(1.0/12.0)*(-CS_04*max_lambda_00 + CF_04) + ((1.0/6.0))*(-CS_02*max_lambda_00 + CF_02) +
      ((5.0/12.0))*(-CS_03*max_lambda_00 + CF_03))*omega_1 + Recon_0;

    beta_0_sycl[0] = ((1.0/3.0))*((CS_14*max_lambda_11 + CF_14)*(CS_14*max_lambda_11 + CF_14)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_14*max_lambda_11 + CF_14) + ((25.0/6.0))*(CS_13*max_lambda_11 +
      CF_13))*(CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(CS_12*max_lambda_11 +
      CF_12)*(-(31.0/6.0)*(CS_13*max_lambda_11 + CF_13) + ((5.0/3.0))*(CS_12*max_lambda_11 + CF_12) +
      ((11.0/6.0))*(CS_14*max_lambda_11 + CF_14));

    beta_1 = ((1.0/3.0))*((CS_13*max_lambda_11 + CF_13)*(CS_13*max_lambda_11 + CF_13)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_13*max_lambda_11 + CF_13) + ((13.0/6.0))*(CS_12*max_lambda_11 +
      CF_12))*(CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(CS_11*max_lambda_11 +
      CF_11)*(-(13.0/6.0)*(CS_12*max_lambda_11 + CF_12) + ((2.0/3.0))*(CS_11*max_lambda_11 + CF_11) +
      ((5.0/6.0))*(CS_13*max_lambda_11 + CF_13));

    beta_2 = ((5.0/6.0))*((CS_12*max_lambda_11 + CF_12)*(CS_12*max_lambda_11 + CF_12)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_10*max_lambda_11 + CF_10) + ((11.0/6.0))*(CS_12*max_lambda_11 +
      CF_12))*(CS_10*max_lambda_11 + CF_10) + ((1.0/2.0))*(CS_11*max_lambda_11 +
      CF_11)*(-(31.0/6.0)*(CS_12*max_lambda_11 + CF_12) - (19.0/6.0)*(CS_10*max_lambda_11 + CF_10) +
      ((25.0/6.0))*(CS_11*max_lambda_11 + CF_11));

    alpha_0 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = (-(7.0/12.0)*(CS_11*max_lambda_11 + CF_11) + ((1.0/6.0))*(CS_10*max_lambda_11 + CF_10) +
      ((11.0/12.0))*(CS_12*max_lambda_11 + CF_12))*omega_2 + (-(1.0/12.0)*(CS_11*max_lambda_11 + CF_11) +
      ((1.0/6.0))*(CS_13*max_lambda_11 + CF_13) + ((5.0/12.0))*(CS_12*max_lambda_11 + CF_12))*omega_1 +
      (-(1.0/12.0)*(CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(CS_13*max_lambda_11 + CF_13))*omega_0_sycl[0] + Recon_1;

    beta_0_sycl[0] = ((1.0/3.0))*((-CS_15*max_lambda_11 + CF_15)*(-CS_15*max_lambda_11 + CF_15)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_15*max_lambda_11 + CF_15) + ((25.0/6.0))*(-CS_14*max_lambda_11 +
      CF_14))*(-CS_14*max_lambda_11 + CF_14) + ((1.0/2.0))*(-CS_13*max_lambda_11 +
      CF_13)*(-(31.0/6.0)*(-CS_14*max_lambda_11 + CF_14) + ((5.0/3.0))*(-CS_13*max_lambda_11 + CF_13) +
      ((11.0/6.0))*(-CS_15*max_lambda_11 + CF_15));

    beta_1 = ((1.0/3.0))*((-CS_14*max_lambda_11 + CF_14)*(-CS_14*max_lambda_11 + CF_14)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_14*max_lambda_11 + CF_14) + ((13.0/6.0))*(-CS_13*max_lambda_11 +
      CF_13))*(-CS_13*max_lambda_11 + CF_13) + ((1.0/2.0))*(-CS_12*max_lambda_11 +
      CF_12)*(-(13.0/6.0)*(-CS_13*max_lambda_11 + CF_13) + ((2.0/3.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/6.0))*(-CS_14*max_lambda_11 + CF_14));

    beta_2 = ((5.0/6.0))*((-CS_13*max_lambda_11 + CF_13)*(-CS_13*max_lambda_11 + CF_13)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_13*max_lambda_11 + CF_13) + ((25.0/6.0))*(-CS_12*max_lambda_11 +
      CF_12))*(-CS_12*max_lambda_11 + CF_12) + ((1.0/2.0))*(-CS_11*max_lambda_11 +
      CF_11)*(-(19.0/6.0)*(-CS_12*max_lambda_11 + CF_12) + ((2.0/3.0))*(-CS_11*max_lambda_11 + CF_11) +
      ((11.0/6.0))*(-CS_13*max_lambda_11 + CF_13));

    alpha_0 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_1 = (-(7.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_15*max_lambda_11 + CF_15) +
      ((11.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*omega_0_sycl[0] + (-(1.0/12.0)*(-CS_11*max_lambda_11 + CF_11) +
      ((1.0/6.0))*(-CS_13*max_lambda_11 + CF_13) + ((5.0/12.0))*(-CS_12*max_lambda_11 + CF_12))*omega_2 +
      (-(1.0/12.0)*(-CS_14*max_lambda_11 + CF_14) + ((1.0/6.0))*(-CS_12*max_lambda_11 + CF_12) +
      ((5.0/12.0))*(-CS_13*max_lambda_11 + CF_13))*omega_1 + Recon_1;

    beta_0_sycl[0] = ((1.0/3.0))*((CS_24*max_lambda_22 + CF_24)*(CS_24*max_lambda_22 + CF_24)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_24*max_lambda_22 + CF_24) + ((25.0/6.0))*(CS_23*max_lambda_22 +
      CF_23))*(CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(CS_22*max_lambda_22 +
      CF_22)*(-(31.0/6.0)*(CS_23*max_lambda_22 + CF_23) + ((5.0/3.0))*(CS_22*max_lambda_22 + CF_22) +
      ((11.0/6.0))*(CS_24*max_lambda_22 + CF_24));

    beta_1 = ((1.0/3.0))*((CS_23*max_lambda_22 + CF_23)*(CS_23*max_lambda_22 + CF_23)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_23*max_lambda_22 + CF_23) + ((13.0/6.0))*(CS_22*max_lambda_22 +
      CF_22))*(CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(CS_21*max_lambda_22 +
      CF_21)*(-(13.0/6.0)*(CS_22*max_lambda_22 + CF_22) + ((2.0/3.0))*(CS_21*max_lambda_22 + CF_21) +
      ((5.0/6.0))*(CS_23*max_lambda_22 + CF_23));

    beta_2 = ((5.0/6.0))*((CS_22*max_lambda_22 + CF_22)*(CS_22*max_lambda_22 + CF_22)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_20*max_lambda_22 + CF_20) + ((11.0/6.0))*(CS_22*max_lambda_22 +
      CF_22))*(CS_20*max_lambda_22 + CF_20) + ((1.0/2.0))*(CS_21*max_lambda_22 +
      CF_21)*(-(31.0/6.0)*(CS_22*max_lambda_22 + CF_22) - (19.0/6.0)*(CS_20*max_lambda_22 + CF_20) +
      ((25.0/6.0))*(CS_21*max_lambda_22 + CF_21));

    alpha_0 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = (-(7.0/12.0)*(CS_21*max_lambda_22 + CF_21) + ((1.0/6.0))*(CS_20*max_lambda_22 + CF_20) +
      ((11.0/12.0))*(CS_22*max_lambda_22 + CF_22))*omega_2 + (-(1.0/12.0)*(CS_21*max_lambda_22 + CF_21) +
      ((1.0/6.0))*(CS_23*max_lambda_22 + CF_23) + ((5.0/12.0))*(CS_22*max_lambda_22 + CF_22))*omega_1 +
      (-(1.0/12.0)*(CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(CS_23*max_lambda_22 + CF_23))*omega_0_sycl[0] + Recon_2;

    beta_0_sycl[0] = ((1.0/3.0))*((-CS_25*max_lambda_22 + CF_25)*(-CS_25*max_lambda_22 + CF_25)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_25*max_lambda_22 + CF_25) + ((25.0/6.0))*(-CS_24*max_lambda_22 +
      CF_24))*(-CS_24*max_lambda_22 + CF_24) + ((1.0/2.0))*(-CS_23*max_lambda_22 +
      CF_23)*(-(31.0/6.0)*(-CS_24*max_lambda_22 + CF_24) + ((5.0/3.0))*(-CS_23*max_lambda_22 + CF_23) +
      ((11.0/6.0))*(-CS_25*max_lambda_22 + CF_25));

    beta_1 = ((1.0/3.0))*((-CS_24*max_lambda_22 + CF_24)*(-CS_24*max_lambda_22 + CF_24)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_24*max_lambda_22 + CF_24) + ((13.0/6.0))*(-CS_23*max_lambda_22 +
      CF_23))*(-CS_23*max_lambda_22 + CF_23) + ((1.0/2.0))*(-CS_22*max_lambda_22 +
      CF_22)*(-(13.0/6.0)*(-CS_23*max_lambda_22 + CF_23) + ((2.0/3.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/6.0))*(-CS_24*max_lambda_22 + CF_24));

    beta_2 = ((5.0/6.0))*((-CS_23*max_lambda_22 + CF_23)*(-CS_23*max_lambda_22 + CF_23)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_23*max_lambda_22 + CF_23) + ((25.0/6.0))*(-CS_22*max_lambda_22 +
      CF_22))*(-CS_22*max_lambda_22 + CF_22) + ((1.0/2.0))*(-CS_21*max_lambda_22 +
      CF_21)*(-(19.0/6.0)*(-CS_22*max_lambda_22 + CF_22) + ((2.0/3.0))*(-CS_21*max_lambda_22 + CF_21) +
      ((11.0/6.0))*(-CS_23*max_lambda_22 + CF_23));

    alpha_0 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_2 = (-(7.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_25*max_lambda_22 + CF_25) +
      ((11.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*omega_0_sycl[0] + (-(1.0/12.0)*(-CS_21*max_lambda_22 + CF_21) +
      ((1.0/6.0))*(-CS_23*max_lambda_22 + CF_23) + ((5.0/12.0))*(-CS_22*max_lambda_22 + CF_22))*omega_2 +
      (-(1.0/12.0)*(-CS_24*max_lambda_22 + CF_24) + ((1.0/6.0))*(-CS_22*max_lambda_22 + CF_22) +
      ((5.0/12.0))*(-CS_23*max_lambda_22 + CF_23))*omega_1 + Recon_2;

    beta_0_sycl[0] = ((1.0/3.0))*((CS_34*max_lambda_33 + CF_34)*(CS_34*max_lambda_33 + CF_34)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_34*max_lambda_33 + CF_34) + ((25.0/6.0))*(CS_33*max_lambda_33 +
      CF_33))*(CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(CS_32*max_lambda_33 +
      CF_32)*(-(31.0/6.0)*(CS_33*max_lambda_33 + CF_33) + ((5.0/3.0))*(CS_32*max_lambda_33 + CF_32) +
      ((11.0/6.0))*(CS_34*max_lambda_33 + CF_34));

    beta_1 = ((1.0/3.0))*((CS_33*max_lambda_33 + CF_33)*(CS_33*max_lambda_33 + CF_33)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_33*max_lambda_33 + CF_33) + ((13.0/6.0))*(CS_32*max_lambda_33 +
      CF_32))*(CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(CS_31*max_lambda_33 +
      CF_31)*(-(13.0/6.0)*(CS_32*max_lambda_33 + CF_32) + ((2.0/3.0))*(CS_31*max_lambda_33 + CF_31) +
      ((5.0/6.0))*(CS_33*max_lambda_33 + CF_33));

    beta_2 = ((5.0/6.0))*((CS_32*max_lambda_33 + CF_32)*(CS_32*max_lambda_33 + CF_32)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_30*max_lambda_33 + CF_30) + ((11.0/6.0))*(CS_32*max_lambda_33 +
      CF_32))*(CS_30*max_lambda_33 + CF_30) + ((1.0/2.0))*(CS_31*max_lambda_33 +
      CF_31)*(-(31.0/6.0)*(CS_32*max_lambda_33 + CF_32) - (19.0/6.0)*(CS_30*max_lambda_33 + CF_30) +
      ((25.0/6.0))*(CS_31*max_lambda_33 + CF_31));

    alpha_0 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = (-(7.0/12.0)*(CS_31*max_lambda_33 + CF_31) + ((1.0/6.0))*(CS_30*max_lambda_33 + CF_30) +
      ((11.0/12.0))*(CS_32*max_lambda_33 + CF_32))*omega_2 + (-(1.0/12.0)*(CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(CS_32*max_lambda_33 + CF_32))*omega_1 +
      (-(1.0/12.0)*(CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(CS_33*max_lambda_33 + CF_33))*omega_0_sycl[0] + Recon_3;

    beta_0_sycl[0] = ((1.0/3.0))*((-CS_35*max_lambda_33 + CF_35)*(-CS_35*max_lambda_33 + CF_35)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_35*max_lambda_33 + CF_35) + ((25.0/6.0))*(-CS_34*max_lambda_33 +
      CF_34))*(-CS_34*max_lambda_33 + CF_34) + ((1.0/2.0))*(-CS_33*max_lambda_33 +
      CF_33)*(-(31.0/6.0)*(-CS_34*max_lambda_33 + CF_34) + ((5.0/3.0))*(-CS_33*max_lambda_33 + CF_33) +
      ((11.0/6.0))*(-CS_35*max_lambda_33 + CF_35));

    beta_1 = ((1.0/3.0))*((-CS_34*max_lambda_33 + CF_34)*(-CS_34*max_lambda_33 + CF_34)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_34*max_lambda_33 + CF_34) + ((13.0/6.0))*(-CS_33*max_lambda_33 +
      CF_33))*(-CS_33*max_lambda_33 + CF_33) + ((1.0/2.0))*(-CS_32*max_lambda_33 +
      CF_32)*(-(13.0/6.0)*(-CS_33*max_lambda_33 + CF_33) + ((2.0/3.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/6.0))*(-CS_34*max_lambda_33 + CF_34));

    beta_2 = ((5.0/6.0))*((-CS_33*max_lambda_33 + CF_33)*(-CS_33*max_lambda_33 + CF_33)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_33*max_lambda_33 + CF_33) + ((25.0/6.0))*(-CS_32*max_lambda_33 +
      CF_32))*(-CS_32*max_lambda_33 + CF_32) + ((1.0/2.0))*(-CS_31*max_lambda_33 +
      CF_31)*(-(19.0/6.0)*(-CS_32*max_lambda_33 + CF_32) + ((2.0/3.0))*(-CS_31*max_lambda_33 + CF_31) +
      ((11.0/6.0))*(-CS_33*max_lambda_33 + CF_33));

    alpha_0 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_3 = (-(7.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_35*max_lambda_33 + CF_35) +
      ((11.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_0_sycl[0] + (-(1.0/12.0)*(-CS_31*max_lambda_33 + CF_31) +
      ((1.0/6.0))*(-CS_33*max_lambda_33 + CF_33) + ((5.0/12.0))*(-CS_32*max_lambda_33 + CF_32))*omega_2 +
      (-(1.0/12.0)*(-CS_34*max_lambda_33 + CF_34) + ((1.0/6.0))*(-CS_32*max_lambda_33 + CF_32) +
      ((5.0/12.0))*(-CS_33*max_lambda_33 + CF_33))*omega_1 + Recon_3;

    beta_0_sycl[0] = ((1.0/3.0))*((CS_44*max_lambda_44 + CF_44)*(CS_44*max_lambda_44 + CF_44)) +
      ((1.0/2.0))*(-(19.0/6.0)*(CS_44*max_lambda_44 + CF_44) + ((25.0/6.0))*(CS_43*max_lambda_44 +
      CF_43))*(CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(CS_42*max_lambda_44 +
      CF_42)*(-(31.0/6.0)*(CS_43*max_lambda_44 + CF_43) + ((5.0/3.0))*(CS_42*max_lambda_44 + CF_42) +
      ((11.0/6.0))*(CS_44*max_lambda_44 + CF_44));

    beta_1 = ((1.0/3.0))*((CS_43*max_lambda_44 + CF_43)*(CS_43*max_lambda_44 + CF_43)) +
      ((1.0/2.0))*(-(13.0/6.0)*(CS_43*max_lambda_44 + CF_43) + ((13.0/6.0))*(CS_42*max_lambda_44 +
      CF_42))*(CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(CS_41*max_lambda_44 +
      CF_41)*(-(13.0/6.0)*(CS_42*max_lambda_44 + CF_42) + ((2.0/3.0))*(CS_41*max_lambda_44 + CF_41) +
      ((5.0/6.0))*(CS_43*max_lambda_44 + CF_43));

    beta_2 = ((5.0/6.0))*((CS_42*max_lambda_44 + CF_42)*(CS_42*max_lambda_44 + CF_42)) +
      ((1.0/2.0))*(((2.0/3.0))*(CS_40*max_lambda_44 + CF_40) + ((11.0/6.0))*(CS_42*max_lambda_44 +
      CF_42))*(CS_40*max_lambda_44 + CF_40) + ((1.0/2.0))*(CS_41*max_lambda_44 +
      CF_41)*(-(31.0/6.0)*(CS_42*max_lambda_44 + CF_42) - (19.0/6.0)*(CS_40*max_lambda_44 + CF_40) +
      ((25.0/6.0))*(CS_41*max_lambda_44 + CF_41));

    alpha_0 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_4 = (-(7.0/12.0)*(CS_41*max_lambda_44 + CF_41) + ((1.0/6.0))*(CS_40*max_lambda_44 + CF_40) +
      ((11.0/12.0))*(CS_42*max_lambda_44 + CF_42))*omega_2 + (-(1.0/12.0)*(CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(CS_42*max_lambda_44 + CF_42))*omega_1 +
      (-(1.0/12.0)*(CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(CS_43*max_lambda_44 + CF_43))*omega_0_sycl[0] + Recon_4;

    beta_0_sycl[0] = ((1.0/3.0))*((-CS_45*max_lambda_44 + CF_45)*(-CS_45*max_lambda_44 + CF_45)) +
      ((1.0/2.0))*(-(19.0/6.0)*(-CS_45*max_lambda_44 + CF_45) + ((25.0/6.0))*(-CS_44*max_lambda_44 +
      CF_44))*(-CS_44*max_lambda_44 + CF_44) + ((1.0/2.0))*(-CS_43*max_lambda_44 +
      CF_43)*(-(31.0/6.0)*(-CS_44*max_lambda_44 + CF_44) + ((5.0/3.0))*(-CS_43*max_lambda_44 + CF_43) +
      ((11.0/6.0))*(-CS_45*max_lambda_44 + CF_45));

    beta_1 = ((1.0/3.0))*((-CS_44*max_lambda_44 + CF_44)*(-CS_44*max_lambda_44 + CF_44)) +
      ((1.0/2.0))*(-(13.0/6.0)*(-CS_44*max_lambda_44 + CF_44) + ((13.0/6.0))*(-CS_43*max_lambda_44 +
      CF_43))*(-CS_43*max_lambda_44 + CF_43) + ((1.0/2.0))*(-CS_42*max_lambda_44 +
      CF_42)*(-(13.0/6.0)*(-CS_43*max_lambda_44 + CF_43) + ((2.0/3.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/6.0))*(-CS_44*max_lambda_44 + CF_44));

    beta_2 = ((5.0/6.0))*((-CS_43*max_lambda_44 + CF_43)*(-CS_43*max_lambda_44 + CF_43)) +
      ((1.0/2.0))*(-(31.0/6.0)*(-CS_43*max_lambda_44 + CF_43) + ((25.0/6.0))*(-CS_42*max_lambda_44 +
      CF_42))*(-CS_42*max_lambda_44 + CF_42) + ((1.0/2.0))*(-CS_41*max_lambda_44 +
      CF_41)*(-(19.0/6.0)*(-CS_42*max_lambda_44 + CF_42) + ((2.0/3.0))*(-CS_41*max_lambda_44 + CF_41) +
      ((11.0/6.0))*(-CS_43*max_lambda_44 + CF_43));

    alpha_0 = 0.1 + ((1.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_0_sycl[0])*(1.0e-40 +
      beta_0_sycl[0]));

   alpha_1 = 0.6 + ((3.0/5.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_1)*(1.0e-40 + beta_1));

    alpha_2 = 0.3 + ((3.0/10.0))*(cl::sycl::fabs(-beta_2 + beta_0_sycl[0])*cl::sycl::fabs(-beta_2 + beta_0_sycl[0]))/((1.0e-40 + beta_2)*(1.0e-40 +
      beta_2));

   inv_alpha_sum = 1.0/((alpha_0 + alpha_1 + alpha_2));

   omega_0_sycl[0] = alpha_0*inv_alpha_sum;

   omega_1 = alpha_1*inv_alpha_sum;

   omega_2 = alpha_2*inv_alpha_sum;

    Recon_4 = (-(7.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_45*max_lambda_44 + CF_45) +
      ((11.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_0_sycl[0] + (-(1.0/12.0)*(-CS_41*max_lambda_44 + CF_41) +
      ((1.0/6.0))*(-CS_43*max_lambda_44 + CF_43) + ((5.0/12.0))*(-CS_42*max_lambda_44 + CF_42))*omega_2 +
      (-(1.0/12.0)*(-CS_44*max_lambda_44 + CF_44) + ((1.0/6.0))*(-CS_42*max_lambda_44 + CF_42) +
      ((5.0/12.0))*(-CS_43*max_lambda_44 + CF_43))*omega_1 + Recon_4;

    wk5_B0(0,0,0) = AVG_1_D10*Recon_0*inv_AVG_met_fact + AVG_1_D11*Recon_1*inv_AVG_met_fact +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*AVG_1_rho*Recon_4*inv_AVG_a;

    wk6_B0(0,0,0) = AVG_1_D10*AVG_1_u0*Recon_0*inv_AVG_met_fact + AVG_1_D11*AVG_1_rho*Recon_2*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u0*Recon_1*inv_AVG_met_fact + 0.707106781186547*(AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_1_D10*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u0)*AVG_1_rho*Recon_4*inv_AVG_a;

    wk7_B0(0,0,0) = AVG_1_D10*AVG_1_u1*Recon_0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*Recon_1*inv_AVG_met_fact -
      AVG_1_D10*AVG_1_rho*Recon_2*inv_AVG_met_fact + 0.707106781186547*(AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*AVG_1_rho*Recon_3*inv_AVG_a + 0.707106781186547*(-AVG_1_D11*AVG_1_a*inv_AVG_met_fact +
      AVG_1_u1)*AVG_1_rho*Recon_4*inv_AVG_a;

    wk8_B0(0,0,0) = (AVG_1_D10*AVG_1_rho*inv_AVG_met_fact + AVG_1_D11*AVG_1_u2*inv_AVG_met_fact)*Recon_1 +
      (AVG_1_D10*AVG_1_u2*inv_AVG_met_fact - AVG_1_D11*AVG_1_rho*inv_AVG_met_fact)*Recon_0 +
      0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_3*inv_AVG_a + 0.707106781186547*AVG_1_rho*AVG_1_u2*Recon_4*inv_AVG_a;

    wk9_B0(0,0,0) = (((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*AVG_1_D10*inv_AVG_met_fact - AVG_1_D11*AVG_1_rho*AVG_1_u2*inv_AVG_met_fact)*Recon_0 +
      (((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2))*AVG_1_D11*inv_AVG_met_fact +
      AVG_1_D10*AVG_1_rho*AVG_1_u2*inv_AVG_met_fact)*Recon_1 + (AVG_1_D11*AVG_1_u0*inv_AVG_met_fact -
      AVG_1_D10*AVG_1_u1*inv_AVG_met_fact)*AVG_1_rho*Recon_2 + 0.707106781186547*(((AVG_1_a*AVG_1_a) +
      ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) + (AVG_1_u2*AVG_1_u2))*gamma_m1_sycl[0])*invgamma_m1_sycl[0] +
      (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact + AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_3*inv_AVG_a +
      0.707106781186547*(((AVG_1_a*AVG_1_a) + ((1.0/2.0))*((AVG_1_u0*AVG_1_u0) + (AVG_1_u1*AVG_1_u1) +
      (AVG_1_u2*AVG_1_u2))*gamma_m1_sycl[0])*invgamma_m1_sycl[0] - (AVG_1_D10*AVG_1_u0*inv_AVG_met_fact +
      AVG_1_D11*AVG_1_u1*inv_AVG_met_fact)*AVG_1_a)*AVG_1_rho*Recon_4*inv_AVG_a;


                }
            });
        });
    }

    if (block->instance->OPS_diags > 1) {
        block->instance->sycl_instance->queue->wait();
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[22].time += __t1 -__t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 19);
    ops_set_halo_dirtybit3(&args[14], range);
    ops_set_halo_dirtybit3(&args[15], range);
    ops_set_halo_dirtybit3(&args[16], range);
    ops_set_halo_dirtybit3(&args[17], range);
    ops_set_halo_dirtybit3(&args[18], range);
#endif

    if (block->instance->OPS_diags > 1) {
//  ====================
//  Update kernel record
//  ====================
    ops_timers_core(&__c2, &__t2);
    block->instance->OPS_kernels[22].mpi_time += __t2 -__t1;
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg10);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg11);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg12);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg13);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg14);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg15);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg16);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg17);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg18);
}
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel001(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6,
    ops_arg arg7,
    ops_arg arg8,
    ops_arg arg9,
    ops_arg arg10,
    ops_arg arg11,
    ops_arg arg12,
    ops_arg arg13,
    ops_arg arg14,
    ops_arg arg15,
    ops_arg arg16,
    ops_arg arg17,
    ops_arg arg18
  )
{
    ops_arg args[19];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;
    args[9] = arg9;
    args[10] = arg10;
    args[11] = arg11;
    args[12] = arg12;
    args[13] = arg13;
    args[14] = arg14;
    args[15] = arg15;
    args[16] = arg16;
    args[17] = arg17;
    args[18] = arg18;

    create_kerneldesc_and_enque("opensbliblock00Kernel001", args, 19, 22, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel001_execute);
}
#endif
