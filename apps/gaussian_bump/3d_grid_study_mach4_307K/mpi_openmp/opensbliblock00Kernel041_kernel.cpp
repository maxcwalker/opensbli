// Auto-generated at 2024-10-10 09:28:34.292425 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel041(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1, 
    ops_arg arg2
)
{
#else
void ops_par_loop_opensbliblock00Kernel041_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[3];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 3, range, 30)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 30, "opensbliblock00Kernel041");
        block->instance->OPS_kernels[30].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel041");
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
    if (compute_ranges(args, 3, block, range, start, end, arg_idx) < 0) return;
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
    int xdim0_opensbliblock00Kernel041 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel041 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel041 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel041 = args[1].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ u1_B0_p = (double *)(args[0].data + base0);

    int base1 = args[1].dat->base_offset;
    double * __restrict__ wk5_B0_p = (double *)(args[1].data + base1);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_host(args, 3);
    ops_halo_exchanges(args, 3,range);
    ops_H_D_exchanges_host(args, 3);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[30].mpi_time += __t2 - __t1;
    }

    #pragma omp parallel for collapse(2)
    for (int n_z = start[2]; n_z < end[2]; n_z++) {
        for (int n_y = start[1]; n_y < end[1]; n_y++) {
#ifdef __INTEL_COMPILER
            #pragma loop_count(10000)
            #pragma omp simd
#elif defined(__clang__)
            #pragma clang loop vectorize(disable)
#elif defined(__GNUC__)
            #pragma GCC ivdep
#else
            #pragma simd
#endif
            for (int n_x = start[0]; n_x < end[0]; n_x++) {

                int idx[] = {arg_idx[0]+n_x, arg_idx[1]+n_y, arg_idx[2]+n_z};
                const ACC<double> u1_B0(xdim0_opensbliblock00Kernel041, ydim0_opensbliblock00Kernel041, u1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel041*1 + n_z * xdim0_opensbliblock00Kernel041 * ydim0_opensbliblock00Kernel041*1);

                ACC<double> wk5_B0(xdim1_opensbliblock00Kernel041, ydim1_opensbliblock00Kernel041, wk5_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel041*1 + n_z * xdim1_opensbliblock00Kernel041 * ydim1_opensbliblock00Kernel041*1);

                
   if (idx[1] == 0){

       wk5_B0(0,0,0) = (-3*u1_B0(0,2,0) + 4*u1_B0(0,1,0) - (25.0/12.0)*u1_B0(0,0,0) - (1.0/4.0)*u1_B0(0,4,0) +
            ((4.0/3.0))*u1_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk5_B0(0,0,0) = (-(5.0/6.0)*u1_B0(0,0,0) - (1.0/2.0)*u1_B0(0,2,0) - (1.0/4.0)*u1_B0(0,-1,0) +
            ((1.0/12.0))*u1_B0(0,3,0) + ((3.0/2.0))*u1_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk5_B0(0,0,0) = (-(2.0/3.0)*u1_B0(0,-1,0) - (1.0/12.0)*u1_B0(0,2,0) + ((1.0/12.0))*u1_B0(0,-2,0) +
            ((2.0/3.0))*u1_B0(0,1,0))*invDelta1block0;

   }


            }
        }
    }

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[30].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_host(args, 3);
    ops_set_halo_dirtybit3(&args[1], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[30].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[30].transfer += ops_compute_transfer(dim, start, end, &arg0);
        block->instance->OPS_kernels[30].transfer += ops_compute_transfer(dim, start, end, &arg1);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel041(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2
)
{
    ops_arg args[3];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;

    create_kerneldesc_and_enque("opensbliblock00Kernel041", args, 3, 30, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel041_execute);
}
#endif
