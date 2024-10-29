// Auto-generated at 2024-10-10 09:28:34.504871 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_monitor_12_p_B0(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1
)
{
#else
void ops_par_loop_monitor_12_p_B0_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[2];

    args[0] = arg0;
    args[1] = arg1;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 2, range, 52)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 52, "monitor_12_p_B0");
        block->instance->OPS_kernels[52].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "monitor_12_p_B0");
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
    if (compute_ranges(args, 2, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_monitor_12_p_B0 = args[0].dat->size[0];
    int ydim0_monitor_12_p_B0 = args[0].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ p_B0_p = (double *)(args[0].data + base0);

#ifdef OPS_MPI
    double * __restrict__ p_a1 = (double *)(((ops_reduction)args[1].data)->data + ((ops_reduction)args[1].data)->size * block->index);
#else //OPS_MPI
    double * __restrict__ p_a1 = (double *)((ops_reduction)args[1].data)->data;
#endif //OPS_MPI

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_host(args, 2);
    ops_halo_exchanges(args, 2,range);
    ops_H_D_exchanges_host(args, 2);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[52].mpi_time += __t2 - __t1;
    }

    double p_a1_0 = p_a1[0];
    #pragma omp parallel for reduction(+:p_a1_0)
    for (int n_z = start[2]; n_z < end[2]; n_z++) {
        for (int n_y = start[1]; n_y < end[1]; n_y++) {
#ifdef __INTEL_COMPILER
            #pragma loop_count(10000)
            #pragma omp simd reduction(+:p_a1_0)
#elif defined(__clang__)
            #pragma clang loop vectorize(disable)
#elif defined(__GNUC__)
            #pragma GCC ivdep
#else
            #pragma simd
#endif
            for (int n_x = start[0]; n_x < end[0]; n_x++) {

                const ACC<double> p_B0(xdim0_monitor_12_p_B0, ydim0_monitor_12_p_B0, p_B0_p + n_x*1 + n_y * xdim0_monitor_12_p_B0*1 + n_z * xdim0_monitor_12_p_B0 * ydim0_monitor_12_p_B0*1);

                double reduce_12_p_B0[1];
                reduce_12_p_B0[0] = ZERO_double;

                
*reduce_12_p_B0 = p_B0(0,0,0);

                p_a1_0 +=reduce_12_p_B0[0];
            }
        }
    }

    p_a1[0] = p_a1_0;

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[52].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_host(args, 2);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[52].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[52].transfer += ops_compute_transfer(dim, start, end, &arg0);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_monitor_12_p_B0(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1
)
{
    ops_arg args[2];

    args[0] = arg0;
    args[1] = arg1;

    create_kerneldesc_and_enque("monitor_12_p_B0", args, 2, 52, dim, 0, range, block, ops_par_loop_monitor_12_p_B0_execute);
}
#endif
