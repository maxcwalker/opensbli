// Auto-generated at 2024-10-10 09:28:39.750318 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel070(
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
    ops_arg arg11
)
{
#else
void ops_par_loop_opensbliblock00Kernel070_execute(ops_kernel_descriptor *desc)
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
#endif

//  ======
//  Timing
//  ======
    double __t1,__t2,__c1,__c2;

    ops_arg args[12];

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

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args,12, range, 1)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 1, "opensbliblock00Kernel070");
        block->instance->OPS_kernels[1].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel070");
#endif

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start[3];
    int end[3];
    int arg_idx[3];
#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start[n] = range[2*n];
        end[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 12, block, range, start, end, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0];
    arg_idx[1] = sb->decomp_disp[1];
    arg_idx[2] = sb->decomp_disp[2];
#else
    arg_idx[0] -= start[0];
    arg_idx[1] -= start[1];
    arg_idx[2] -= start[2];
#endif
#else //OPS_MPI
    arg_idx[0] = 0;
    arg_idx[1] = 0;
    arg_idx[2] = 0;
#endif //OPS_MPI

//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel070 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel070 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel070 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel070 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel070 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel070 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel070 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel070 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel070 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel070 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel070 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel070 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel070 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel070 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel070 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel070 = args[7].dat->size[1];
    int xdim8_opensbliblock00Kernel070 = args[8].dat->size[0];
    int ydim8_opensbliblock00Kernel070 = args[8].dat->size[1];
    int xdim9_opensbliblock00Kernel070 = args[9].dat->size[0];
    int ydim9_opensbliblock00Kernel070 = args[9].dat->size[1];
    int xdim10_opensbliblock00Kernel070 = args[10].dat->size[0];
    int ydim10_opensbliblock00Kernel070 = args[10].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ x0_B0_p = (double *)(args[0].data_d + base0);
    int base1 = args[1].dat->base_offset;
    double * __restrict__ x1_B0_p = (double *)(args[1].data_d + base1);
    int base2 = args[2].dat->base_offset;
    double * __restrict__ D00_B0_p = (double *)(args[2].data_d + base2);
    int base3 = args[3].dat->base_offset;
    double * __restrict__ D01_B0_p = (double *)(args[3].data_d + base3);
    int base4 = args[4].dat->base_offset;
    double * __restrict__ D10_B0_p = (double *)(args[4].data_d + base4);
    int base5 = args[5].dat->base_offset;
    double * __restrict__ D11_B0_p = (double *)(args[5].data_d + base5);
    int base6 = args[6].dat->base_offset;
    double * __restrict__ detJ_B0_p = (double *)(args[6].data_d + base6);
    int base7 = args[7].dat->base_offset;
    double * __restrict__ wk0_B0_p = (double *)(args[7].data_d + base7);
    int base8 = args[8].dat->base_offset;
    double * __restrict__ wk1_B0_p = (double *)(args[8].data_d + base8);
    int base9 = args[9].dat->base_offset;
    double * __restrict__ wk3_B0_p = (double *)(args[9].data_d + base9);
    int base10 = args[10].dat->base_offset;
    double * __restrict__ wk4_B0_p = (double *)(args[10].data_d + base10);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 12);
    ops_halo_exchanges(args,12,range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[1].mpi_time += __t2 - __t1;
    }

    int start_0 = start[0];
    int end_0 = end[0];
    int arg_idx_0 = arg_idx[0];
    int start_1 = start[1];
    int end_1 = end[1];
    int arg_idx_1 = arg_idx[1];
    int start_2 = start[2];
    int end_2 = end[2];
    int arg_idx_2 = arg_idx[2];
    if ((end[0]-start[0])>0 && (end[1]-start[1])>0 && (end[2]-start[2])>0) {
        block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

          auto block0np0_sycl = (*block0np0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto invDelta0block0_sycl = (*invDelta0block0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto invDelta1block0_sycl = (*invDelta1block0_p).template get_access<cl::sycl::access::mode::read>(cgh);

          cgh.parallel_for<class opensbliblock00Kernel070_kernel>(cl::sycl::nd_range<3>(cl::sycl::range<3>(
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

              int idx[] = {arg_idx_0+n_x, arg_idx_1+n_y, arg_idx_2+n_z};

              const ACC<double> x0_B0(xdim0_opensbliblock00Kernel070, ydim0_opensbliblock00Kernel070, x0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel070*1 + n_z * xdim0_opensbliblock00Kernel070 * ydim0_opensbliblock00Kernel070*1);
              const ACC<double> x1_B0(xdim1_opensbliblock00Kernel070, ydim1_opensbliblock00Kernel070, x1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel070*1 + n_z * xdim1_opensbliblock00Kernel070 * ydim1_opensbliblock00Kernel070*1);
              ACC<double> D00_B0(xdim2_opensbliblock00Kernel070, ydim2_opensbliblock00Kernel070, D00_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel070*1 + n_z * xdim2_opensbliblock00Kernel070 * ydim2_opensbliblock00Kernel070*1);
              ACC<double> D01_B0(xdim3_opensbliblock00Kernel070, ydim3_opensbliblock00Kernel070, D01_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel070*1 + n_z * xdim3_opensbliblock00Kernel070 * ydim3_opensbliblock00Kernel070*1);
              ACC<double> D10_B0(xdim4_opensbliblock00Kernel070, ydim4_opensbliblock00Kernel070, D10_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel070*1 + n_z * xdim4_opensbliblock00Kernel070 * ydim4_opensbliblock00Kernel070*1);
              ACC<double> D11_B0(xdim5_opensbliblock00Kernel070, ydim5_opensbliblock00Kernel070, D11_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel070*1 + n_z * xdim5_opensbliblock00Kernel070 * ydim5_opensbliblock00Kernel070*1);
              ACC<double> detJ_B0(xdim6_opensbliblock00Kernel070, ydim6_opensbliblock00Kernel070, detJ_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel070*1 + n_z * xdim6_opensbliblock00Kernel070 * ydim6_opensbliblock00Kernel070*1);
              ACC<double> wk0_B0(xdim7_opensbliblock00Kernel070, ydim7_opensbliblock00Kernel070, wk0_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel070*1 + n_z * xdim7_opensbliblock00Kernel070 * ydim7_opensbliblock00Kernel070*1);
              ACC<double> wk1_B0(xdim8_opensbliblock00Kernel070, ydim8_opensbliblock00Kernel070, wk1_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel070*1 + n_z * xdim8_opensbliblock00Kernel070 * ydim8_opensbliblock00Kernel070*1);
              ACC<double> wk3_B0(xdim9_opensbliblock00Kernel070, ydim9_opensbliblock00Kernel070, wk3_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel070*1 + n_z * xdim9_opensbliblock00Kernel070 * ydim9_opensbliblock00Kernel070*1);
              ACC<double> wk4_B0(xdim10_opensbliblock00Kernel070, ydim10_opensbliblock00Kernel070, wk4_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel070*1 + n_z * xdim10_opensbliblock00Kernel070 * ydim10_opensbliblock00Kernel070*1);
//  =========
//  User code
//  =========
                if (n_x < end_0 && n_y < end_1 && n_z < end_2) {
                    
   double d1_x0_dx = 0.0;
   double d1_x0_dy = 0.0;
   double d1_x1_dx = 0.0;
   double d1_x1_dy = 0.0;
    d1_x0_dx = invDelta0block0_sycl[0]*((idx[0] == 0) ? (
   -3*x0_B0(2,0,0) + 4*x0_B0(1,0,0) - (25.0/12.0)*x0_B0(0,0,0) -
      (1.0/4.0)*x0_B0(4,0,0) + ((4.0/3.0))*x0_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0,0) -
      (1.0/2.0)*x0_B0(2,0,0) - (1.0/4.0)*x0_B0(-1,0,0) + ((1.0/12.0))*x0_B0(3,0,0) + ((3.0/2.0))*x0_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0_sycl[0]) ? (
   -4*x0_B0(-1,0,0) + 3*x0_B0(-2,0,0) - (4.0/3.0)*x0_B0(-3,0,0) +
      ((1.0/4.0))*x0_B0(-4,0,0) + ((25.0/12.0))*x0_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0_sycl[0]) ? (

      ((1.0/2.0))*x0_B0(-2,0,0) - (3.0/2.0)*x0_B0(-1,0,0) - (1.0/12.0)*x0_B0(-3,0,0) + ((1.0/4.0))*x0_B0(1,0,0) +
      ((5.0/6.0))*x0_B0(0,0,0)
)
: (
   -(2.0/3.0)*x0_B0(-1,0,0) - (1.0/12.0)*x0_B0(2,0,0) + ((1.0/12.0))*x0_B0(-2,0,0)
      + ((2.0/3.0))*x0_B0(1,0,0)
)))));

    d1_x1_dy = invDelta1block0_sycl[0]*((idx[1] == 0) ? (
   -3*x1_B0(0,2,0) + 4*x1_B0(0,1,0) - (25.0/12.0)*x1_B0(0,0,0) -
      (1.0/4.0)*x1_B0(0,4,0) + ((4.0/3.0))*x1_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0,0) -
      (1.0/2.0)*x1_B0(0,2,0) - (1.0/4.0)*x1_B0(0,-1,0) + ((1.0/12.0))*x1_B0(0,3,0) + ((3.0/2.0))*x1_B0(0,1,0)
)
: (

      -(2.0/3.0)*x1_B0(0,-1,0) - (1.0/12.0)*x1_B0(0,2,0) + ((1.0/12.0))*x1_B0(0,-2,0) + ((2.0/3.0))*x1_B0(0,1,0)
)));

    d1_x0_dy = invDelta1block0_sycl[0]*((idx[1] == 0) ? (
   -3*x0_B0(0,2,0) + 4*x0_B0(0,1,0) - (25.0/12.0)*x0_B0(0,0,0) -
      (1.0/4.0)*x0_B0(0,4,0) + ((4.0/3.0))*x0_B0(0,3,0)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*x0_B0(0,0,0) -
      (1.0/2.0)*x0_B0(0,2,0) - (1.0/4.0)*x0_B0(0,-1,0) + ((1.0/12.0))*x0_B0(0,3,0) + ((3.0/2.0))*x0_B0(0,1,0)
)
: (

      -(2.0/3.0)*x0_B0(0,-1,0) - (1.0/12.0)*x0_B0(0,2,0) + ((1.0/12.0))*x0_B0(0,-2,0) + ((2.0/3.0))*x0_B0(0,1,0)
)));

    d1_x1_dx = invDelta0block0_sycl[0]*((idx[0] == 0) ? (
   -3*x1_B0(2,0,0) + 4*x1_B0(1,0,0) - (25.0/12.0)*x1_B0(0,0,0) -
      (1.0/4.0)*x1_B0(4,0,0) + ((4.0/3.0))*x1_B0(3,0,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*x1_B0(0,0,0) -
      (1.0/2.0)*x1_B0(2,0,0) - (1.0/4.0)*x1_B0(-1,0,0) + ((1.0/12.0))*x1_B0(3,0,0) + ((3.0/2.0))*x1_B0(1,0,0)
)
:
      ((idx[0] == -1 + block0np0_sycl[0]) ? (
   -4*x1_B0(-1,0,0) + 3*x1_B0(-2,0,0) - (4.0/3.0)*x1_B0(-3,0,0) +
      ((1.0/4.0))*x1_B0(-4,0,0) + ((25.0/12.0))*x1_B0(0,0,0)
)
: ((idx[0] == -2 + block0np0_sycl[0]) ? (

      ((1.0/2.0))*x1_B0(-2,0,0) - (3.0/2.0)*x1_B0(-1,0,0) - (1.0/12.0)*x1_B0(-3,0,0) + ((1.0/4.0))*x1_B0(1,0,0) +
      ((5.0/6.0))*x1_B0(0,0,0)
)
: (
   -(2.0/3.0)*x1_B0(-1,0,0) - (1.0/12.0)*x1_B0(2,0,0) + ((1.0/12.0))*x1_B0(-2,0,0)
      + ((2.0/3.0))*x1_B0(1,0,0)
)))));

   wk0_B0(0,0,0) = d1_x0_dx;

   wk1_B0(0,0,0) = d1_x0_dy;

   wk3_B0(0,0,0) = d1_x1_dx;

   wk4_B0(0,0,0) = d1_x1_dy;

   detJ_B0(0,0,0) = d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx;

   D00_B0(0,0,0) = d1_x1_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D01_B0(0,0,0) = -d1_x0_dy/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D10_B0(0,0,0) = -d1_x1_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);

   D11_B0(0,0,0) = d1_x0_dx/(d1_x0_dx*d1_x1_dy - d1_x0_dy*d1_x1_dx);


                }
            });
        });
    }

    if (block->instance->OPS_diags > 1) {
        block->instance->sycl_instance->queue->wait();
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[1].time += __t1 -__t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 12);
    ops_set_halo_dirtybit3(&args[2], range);
    ops_set_halo_dirtybit3(&args[3], range);
    ops_set_halo_dirtybit3(&args[4], range);
    ops_set_halo_dirtybit3(&args[5], range);
    ops_set_halo_dirtybit3(&args[6], range);
    ops_set_halo_dirtybit3(&args[7], range);
    ops_set_halo_dirtybit3(&args[8], range);
    ops_set_halo_dirtybit3(&args[9], range);
    ops_set_halo_dirtybit3(&args[10], range);
#endif

    if (block->instance->OPS_diags > 1) {
//  ====================
//  Update kernel record
//  ====================
    ops_timers_core(&__c2, &__t2);
    block->instance->OPS_kernels[1].mpi_time += __t2 -__t1;
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg10);
}
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel070(
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
    ops_arg arg11
  )
{
    ops_arg args[12];

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

    create_kerneldesc_and_enque("opensbliblock00Kernel070", args, 12, 1, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel070_execute);
}
#endif
