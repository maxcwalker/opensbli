// Auto-generated at 2024-10-10 09:28:39.860309 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel012(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1, 
    ops_arg arg2, 
    ops_arg arg3, 
    ops_arg arg4, 
    ops_arg arg5
)
{
#else
void ops_par_loop_opensbliblock00Kernel012_execute(ops_kernel_descriptor *desc)
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
#endif

//  ======
//  Timing
//  ======
    double __t1,__t2,__c1,__c2;

    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args,6, range, 15)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 15, "opensbliblock00Kernel012");
        block->instance->OPS_kernels[15].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel012");
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
    if (compute_ranges(args, 6, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel012 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel012 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel012 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel012 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel012 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel012 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel012 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel012 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel012 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel012 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel012 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel012 = args[5].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[0].data_d + base0);
    int base1 = args[1].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[1].data_d + base1);
    int base2 = args[2].dat->base_offset;
    double * __restrict__ u0_B0_p = (double *)(args[2].data_d + base2);
    int base3 = args[3].dat->base_offset;
    double * __restrict__ u1_B0_p = (double *)(args[3].data_d + base3);
    int base4 = args[4].dat->base_offset;
    double * __restrict__ u2_B0_p = (double *)(args[4].data_d + base4);
    int base5 = args[5].dat->base_offset;
    double * __restrict__ p_B0_p = (double *)(args[5].data_d + base5);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 6);
    ops_halo_exchanges(args,6,range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[15].mpi_time += __t2 - __t1;
    }

    int start_0 = start[0];
    int end_0 = end[0];
    int start_1 = start[1];
    int end_1 = end[1];
    int start_2 = start[2];
    int end_2 = end[2];
    if ((end[0]-start[0])>0 && (end[1]-start[1])>0 && (end[2]-start[2])>0) {
        block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

          auto gama_sycl = (*gama_p).template get_access<cl::sycl::access::mode::read>(cgh);

          cgh.parallel_for<class opensbliblock00Kernel012_kernel>(cl::sycl::nd_range<3>(cl::sycl::range<3>(
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

              const ACC<double> rhoE_B0(xdim0_opensbliblock00Kernel012, ydim0_opensbliblock00Kernel012, rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel012*1 + n_z * xdim0_opensbliblock00Kernel012 * ydim0_opensbliblock00Kernel012*1);
              const ACC<double> rho_B0(xdim1_opensbliblock00Kernel012, ydim1_opensbliblock00Kernel012, rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel012*1 + n_z * xdim1_opensbliblock00Kernel012 * ydim1_opensbliblock00Kernel012*1);
              const ACC<double> u0_B0(xdim2_opensbliblock00Kernel012, ydim2_opensbliblock00Kernel012, u0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel012*1 + n_z * xdim2_opensbliblock00Kernel012 * ydim2_opensbliblock00Kernel012*1);
              const ACC<double> u1_B0(xdim3_opensbliblock00Kernel012, ydim3_opensbliblock00Kernel012, u1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel012*1 + n_z * xdim3_opensbliblock00Kernel012 * ydim3_opensbliblock00Kernel012*1);
              const ACC<double> u2_B0(xdim4_opensbliblock00Kernel012, ydim4_opensbliblock00Kernel012, u2_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel012*1 + n_z * xdim4_opensbliblock00Kernel012 * ydim4_opensbliblock00Kernel012*1);
              ACC<double> p_B0(xdim5_opensbliblock00Kernel012, ydim5_opensbliblock00Kernel012, p_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel012*1 + n_z * xdim5_opensbliblock00Kernel012 * ydim5_opensbliblock00Kernel012*1);
//  =========
//  User code
//  =========
                if (n_x < end_0 && n_y < end_1 && n_z < end_2) {
                    
    p_B0(0,0,0) = (-1 + gama_sycl[0])*(-(1.0/2.0)*(u0_B0(0,0,0)*u0_B0(0,0,0))*rho_B0(0,0,0) -
      (1.0/2.0)*(u1_B0(0,0,0)*u1_B0(0,0,0))*rho_B0(0,0,0) - (1.0/2.0)*(u2_B0(0,0,0)*u2_B0(0,0,0))*rho_B0(0,0,0) +
      rhoE_B0(0,0,0));


                }
            });
        });
    }

    if (block->instance->OPS_diags > 1) {
        block->instance->sycl_instance->queue->wait();
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[15].time += __t1 -__t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 6);
    ops_set_halo_dirtybit3(&args[5], range);
#endif

    if (block->instance->OPS_diags > 1) {
//  ====================
//  Update kernel record
//  ====================
    ops_timers_core(&__c2, &__t2);
    block->instance->OPS_kernels[15].mpi_time += __t2 -__t1;
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[15].transfer += ops_compute_transfer(dim, start, end, &arg5);
}
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel012(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5
  )
{
    ops_arg args[6];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;

    create_kerneldesc_and_enque("opensbliblock00Kernel012", args, 6, 15, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel012_execute);
}
#endif
