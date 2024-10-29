// Auto-generated at 2024-09-02 15:36:04.538423 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel021(
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
    ops_arg arg18, 
    ops_arg arg19, 
    ops_arg arg20
)
{
#else
void ops_par_loop_opensbliblock00Kernel021_execute(ops_kernel_descriptor *desc)
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
    ops_arg arg19 = desc->args[19];
    ops_arg arg20 = desc->args[20];
#endif

//  ======
//  Timing
//  ======
    double __t1,__t2,__c1,__c2;

    ops_arg args[21];

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
    args[19] = arg19;
    args[20] = arg20;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args,21, range, 24)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 24, "opensbliblock00Kernel021");
        block->instance->OPS_kernels[24].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel021");
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
    if (compute_ranges(args, 21, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel021 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel021 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel021 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel021 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel021 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel021 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel021 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel021 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel021 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel021 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel021 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel021 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel021 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel021 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel021 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel021 = args[7].dat->size[1];
    int xdim8_opensbliblock00Kernel021 = args[8].dat->size[0];
    int ydim8_opensbliblock00Kernel021 = args[8].dat->size[1];
    int xdim9_opensbliblock00Kernel021 = args[9].dat->size[0];
    int ydim9_opensbliblock00Kernel021 = args[9].dat->size[1];
    int xdim10_opensbliblock00Kernel021 = args[10].dat->size[0];
    int ydim10_opensbliblock00Kernel021 = args[10].dat->size[1];
    int xdim11_opensbliblock00Kernel021 = args[11].dat->size[0];
    int ydim11_opensbliblock00Kernel021 = args[11].dat->size[1];
    int xdim12_opensbliblock00Kernel021 = args[12].dat->size[0];
    int ydim12_opensbliblock00Kernel021 = args[12].dat->size[1];
    int xdim13_opensbliblock00Kernel021 = args[13].dat->size[0];
    int ydim13_opensbliblock00Kernel021 = args[13].dat->size[1];
    int xdim14_opensbliblock00Kernel021 = args[14].dat->size[0];
    int ydim14_opensbliblock00Kernel021 = args[14].dat->size[1];
    int xdim15_opensbliblock00Kernel021 = args[15].dat->size[0];
    int ydim15_opensbliblock00Kernel021 = args[15].dat->size[1];
    int xdim16_opensbliblock00Kernel021 = args[16].dat->size[0];
    int ydim16_opensbliblock00Kernel021 = args[16].dat->size[1];
    int xdim17_opensbliblock00Kernel021 = args[17].dat->size[0];
    int ydim17_opensbliblock00Kernel021 = args[17].dat->size[1];
    int xdim18_opensbliblock00Kernel021 = args[18].dat->size[0];
    int ydim18_opensbliblock00Kernel021 = args[18].dat->size[1];
    int xdim19_opensbliblock00Kernel021 = args[19].dat->size[0];
    int ydim19_opensbliblock00Kernel021 = args[19].dat->size[1];
    int xdim20_opensbliblock00Kernel021 = args[20].dat->size[0];
    int ydim20_opensbliblock00Kernel021 = args[20].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ detJ_B0_p = (double *)(args[0].data_d + base0);
    int base1 = args[1].dat->base_offset;
    double * __restrict__ wk0_B0_p = (double *)(args[1].data_d + base1);
    int base2 = args[2].dat->base_offset;
    double * __restrict__ wk10_B0_p = (double *)(args[2].data_d + base2);
    int base3 = args[3].dat->base_offset;
    double * __restrict__ wk11_B0_p = (double *)(args[3].data_d + base3);
    int base4 = args[4].dat->base_offset;
    double * __restrict__ wk12_B0_p = (double *)(args[4].data_d + base4);
    int base5 = args[5].dat->base_offset;
    double * __restrict__ wk13_B0_p = (double *)(args[5].data_d + base5);
    int base6 = args[6].dat->base_offset;
    double * __restrict__ wk14_B0_p = (double *)(args[6].data_d + base6);
    int base7 = args[7].dat->base_offset;
    double * __restrict__ wk1_B0_p = (double *)(args[7].data_d + base7);
    int base8 = args[8].dat->base_offset;
    double * __restrict__ wk2_B0_p = (double *)(args[8].data_d + base8);
    int base9 = args[9].dat->base_offset;
    double * __restrict__ wk3_B0_p = (double *)(args[9].data_d + base9);
    int base10 = args[10].dat->base_offset;
    double * __restrict__ wk4_B0_p = (double *)(args[10].data_d + base10);
    int base11 = args[11].dat->base_offset;
    double * __restrict__ wk5_B0_p = (double *)(args[11].data_d + base11);
    int base12 = args[12].dat->base_offset;
    double * __restrict__ wk6_B0_p = (double *)(args[12].data_d + base12);
    int base13 = args[13].dat->base_offset;
    double * __restrict__ wk7_B0_p = (double *)(args[13].data_d + base13);
    int base14 = args[14].dat->base_offset;
    double * __restrict__ wk8_B0_p = (double *)(args[14].data_d + base14);
    int base15 = args[15].dat->base_offset;
    double * __restrict__ wk9_B0_p = (double *)(args[15].data_d + base15);
    int base16 = args[16].dat->base_offset;
    double * __restrict__ Residual0_B0_p = (double *)(args[16].data_d + base16);
    int base17 = args[17].dat->base_offset;
    double * __restrict__ Residual1_B0_p = (double *)(args[17].data_d + base17);
    int base18 = args[18].dat->base_offset;
    double * __restrict__ Residual2_B0_p = (double *)(args[18].data_d + base18);
    int base19 = args[19].dat->base_offset;
    double * __restrict__ Residual3_B0_p = (double *)(args[19].data_d + base19);
    int base20 = args[20].dat->base_offset;
    double * __restrict__ Residual4_B0_p = (double *)(args[20].data_d + base20);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 21);
    ops_halo_exchanges(args,21,range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[24].mpi_time += __t2 - __t1;
    }

    int start_0 = start[0];
    int end_0 = end[0];
    int start_1 = start[1];
    int end_1 = end[1];
    int start_2 = start[2];
    int end_2 = end[2];
    if ((end[0]-start[0])>0 && (end[1]-start[1])>0 && (end[2]-start[2])>0) {
        block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

          auto invDelta0block0_sycl = (*invDelta0block0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto invDelta1block0_sycl = (*invDelta1block0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto invDelta2block0_sycl = (*invDelta2block0_p).template get_access<cl::sycl::access::mode::read>(cgh);

          cgh.parallel_for<class opensbliblock00Kernel021_kernel>(cl::sycl::nd_range<3>(cl::sycl::range<3>(
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

              const ACC<double> detJ_B0(xdim0_opensbliblock00Kernel021, ydim0_opensbliblock00Kernel021, detJ_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel021*1 + n_z * xdim0_opensbliblock00Kernel021 * ydim0_opensbliblock00Kernel021*1);
              const ACC<double> wk0_B0(xdim1_opensbliblock00Kernel021, ydim1_opensbliblock00Kernel021, wk0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel021*1 + n_z * xdim1_opensbliblock00Kernel021 * ydim1_opensbliblock00Kernel021*1);
              const ACC<double> wk10_B0(xdim2_opensbliblock00Kernel021, ydim2_opensbliblock00Kernel021, wk10_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel021*1 + n_z * xdim2_opensbliblock00Kernel021 * ydim2_opensbliblock00Kernel021*1);
              const ACC<double> wk11_B0(xdim3_opensbliblock00Kernel021, ydim3_opensbliblock00Kernel021, wk11_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel021*1 + n_z * xdim3_opensbliblock00Kernel021 * ydim3_opensbliblock00Kernel021*1);
              const ACC<double> wk12_B0(xdim4_opensbliblock00Kernel021, ydim4_opensbliblock00Kernel021, wk12_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel021*1 + n_z * xdim4_opensbliblock00Kernel021 * ydim4_opensbliblock00Kernel021*1);
              const ACC<double> wk13_B0(xdim5_opensbliblock00Kernel021, ydim5_opensbliblock00Kernel021, wk13_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel021*1 + n_z * xdim5_opensbliblock00Kernel021 * ydim5_opensbliblock00Kernel021*1);
              const ACC<double> wk14_B0(xdim6_opensbliblock00Kernel021, ydim6_opensbliblock00Kernel021, wk14_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel021*1 + n_z * xdim6_opensbliblock00Kernel021 * ydim6_opensbliblock00Kernel021*1);
              const ACC<double> wk1_B0(xdim7_opensbliblock00Kernel021, ydim7_opensbliblock00Kernel021, wk1_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel021*1 + n_z * xdim7_opensbliblock00Kernel021 * ydim7_opensbliblock00Kernel021*1);
              const ACC<double> wk2_B0(xdim8_opensbliblock00Kernel021, ydim8_opensbliblock00Kernel021, wk2_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel021*1 + n_z * xdim8_opensbliblock00Kernel021 * ydim8_opensbliblock00Kernel021*1);
              const ACC<double> wk3_B0(xdim9_opensbliblock00Kernel021, ydim9_opensbliblock00Kernel021, wk3_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel021*1 + n_z * xdim9_opensbliblock00Kernel021 * ydim9_opensbliblock00Kernel021*1);
              const ACC<double> wk4_B0(xdim10_opensbliblock00Kernel021, ydim10_opensbliblock00Kernel021, wk4_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel021*1 + n_z * xdim10_opensbliblock00Kernel021 * ydim10_opensbliblock00Kernel021*1);
              const ACC<double> wk5_B0(xdim11_opensbliblock00Kernel021, ydim11_opensbliblock00Kernel021, wk5_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel021*1 + n_z * xdim11_opensbliblock00Kernel021 * ydim11_opensbliblock00Kernel021*1);
              const ACC<double> wk6_B0(xdim12_opensbliblock00Kernel021, ydim12_opensbliblock00Kernel021, wk6_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel021*1 + n_z * xdim12_opensbliblock00Kernel021 * ydim12_opensbliblock00Kernel021*1);
              const ACC<double> wk7_B0(xdim13_opensbliblock00Kernel021, ydim13_opensbliblock00Kernel021, wk7_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel021*1 + n_z * xdim13_opensbliblock00Kernel021 * ydim13_opensbliblock00Kernel021*1);
              const ACC<double> wk8_B0(xdim14_opensbliblock00Kernel021, ydim14_opensbliblock00Kernel021, wk8_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel021*1 + n_z * xdim14_opensbliblock00Kernel021 * ydim14_opensbliblock00Kernel021*1);
              const ACC<double> wk9_B0(xdim15_opensbliblock00Kernel021, ydim15_opensbliblock00Kernel021, wk9_B0_p + n_x*1 + n_y * xdim15_opensbliblock00Kernel021*1 + n_z * xdim15_opensbliblock00Kernel021 * ydim15_opensbliblock00Kernel021*1);
              ACC<double> Residual0_B0(xdim16_opensbliblock00Kernel021, ydim16_opensbliblock00Kernel021, Residual0_B0_p + n_x*1 + n_y * xdim16_opensbliblock00Kernel021*1 + n_z * xdim16_opensbliblock00Kernel021 * ydim16_opensbliblock00Kernel021*1);
              ACC<double> Residual1_B0(xdim17_opensbliblock00Kernel021, ydim17_opensbliblock00Kernel021, Residual1_B0_p + n_x*1 + n_y * xdim17_opensbliblock00Kernel021*1 + n_z * xdim17_opensbliblock00Kernel021 * ydim17_opensbliblock00Kernel021*1);
              ACC<double> Residual2_B0(xdim18_opensbliblock00Kernel021, ydim18_opensbliblock00Kernel021, Residual2_B0_p + n_x*1 + n_y * xdim18_opensbliblock00Kernel021*1 + n_z * xdim18_opensbliblock00Kernel021 * ydim18_opensbliblock00Kernel021*1);
              ACC<double> Residual3_B0(xdim19_opensbliblock00Kernel021, ydim19_opensbliblock00Kernel021, Residual3_B0_p + n_x*1 + n_y * xdim19_opensbliblock00Kernel021*1 + n_z * xdim19_opensbliblock00Kernel021 * ydim19_opensbliblock00Kernel021*1);
              ACC<double> Residual4_B0(xdim20_opensbliblock00Kernel021, ydim20_opensbliblock00Kernel021, Residual4_B0_p + n_x*1 + n_y * xdim20_opensbliblock00Kernel021*1 + n_z * xdim20_opensbliblock00Kernel021 * ydim20_opensbliblock00Kernel021*1);
//  =========
//  User code
//  =========
                if (n_x < end_0 && n_y < end_1 && n_z < end_2) {
                    
    Residual0_B0(0,0,0) = -((-wk0_B0(-1,0,0) + wk0_B0(0,0,0))*invDelta0block0_sycl[0] + (-wk5_B0(0,-1,0) +
      wk5_B0(0,0,0))*invDelta1block0_sycl[0] + (-wk10_B0(0,0,-1) + wk10_B0(0,0,0))*invDelta2block0_sycl[0])/detJ_B0(0,0,0);

    Residual1_B0(0,0,0) = -((-wk1_B0(-1,0,0) + wk1_B0(0,0,0))*invDelta0block0_sycl[0] + (-wk6_B0(0,-1,0) +
      wk6_B0(0,0,0))*invDelta1block0_sycl[0] + (-wk11_B0(0,0,-1) + wk11_B0(0,0,0))*invDelta2block0_sycl[0])/detJ_B0(0,0,0);

    Residual2_B0(0,0,0) = -((-wk2_B0(-1,0,0) + wk2_B0(0,0,0))*invDelta0block0_sycl[0] + (-wk7_B0(0,-1,0) +
      wk7_B0(0,0,0))*invDelta1block0_sycl[0] + (-wk12_B0(0,0,-1) + wk12_B0(0,0,0))*invDelta2block0_sycl[0])/detJ_B0(0,0,0);

    Residual3_B0(0,0,0) = -((-wk3_B0(-1,0,0) + wk3_B0(0,0,0))*invDelta0block0_sycl[0] + (-wk8_B0(0,-1,0) +
      wk8_B0(0,0,0))*invDelta1block0_sycl[0] + (-wk13_B0(0,0,-1) + wk13_B0(0,0,0))*invDelta2block0_sycl[0])/detJ_B0(0,0,0);

    Residual4_B0(0,0,0) = -((-wk4_B0(-1,0,0) + wk4_B0(0,0,0))*invDelta0block0_sycl[0] + (-wk9_B0(0,-1,0) +
      wk9_B0(0,0,0))*invDelta1block0_sycl[0] + (-wk14_B0(0,0,-1) + wk14_B0(0,0,0))*invDelta2block0_sycl[0])/detJ_B0(0,0,0);


                }
            });
        });
    }

    if (block->instance->OPS_diags > 1) {
        block->instance->sycl_instance->queue->wait();
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[24].time += __t1 -__t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 21);
    ops_set_halo_dirtybit3(&args[16], range);
    ops_set_halo_dirtybit3(&args[17], range);
    ops_set_halo_dirtybit3(&args[18], range);
    ops_set_halo_dirtybit3(&args[19], range);
    ops_set_halo_dirtybit3(&args[20], range);
#endif

    if (block->instance->OPS_diags > 1) {
//  ====================
//  Update kernel record
//  ====================
    ops_timers_core(&__c2, &__t2);
    block->instance->OPS_kernels[24].mpi_time += __t2 -__t1;
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg10);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg11);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg12);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg13);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg14);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg15);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg16);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg17);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg18);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg19);
    block->instance->OPS_kernels[24].transfer += ops_compute_transfer(dim, start, end, &arg20);
}
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel021(
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
    ops_arg arg18,
    ops_arg arg19,
    ops_arg arg20
  )
{
    ops_arg args[21];

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
    args[19] = arg19;
    args[20] = arg20;

    create_kerneldesc_and_enque("opensbliblock00Kernel021", args, 21, 24, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel021_execute);
}
#endif
