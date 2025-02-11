// Auto-generated at 2024-10-10 09:28:34.136926 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel061(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1, 
    ops_arg arg2, 
    ops_arg arg3, 
    ops_arg arg4
)
{
#else
void ops_par_loop_opensbliblock00Kernel061_execute(ops_kernel_descriptor *desc)
{
    ops_block block = desc->block;
    int dim = desc->dim;
    int *range = desc->range;
    ops_arg arg0 = desc->args[0];
    ops_arg arg1 = desc->args[1];
    ops_arg arg2 = desc->args[2];
    ops_arg arg3 = desc->args[3];
    ops_arg arg4 = desc->args[4];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[5];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 5, range, 7)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 7, "opensbliblock00Kernel061");
        block->instance->OPS_kernels[7].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel061");
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
    if (compute_ranges(args, 5, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel061 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel061 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel061 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel061 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel061 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel061 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel061 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel061 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel061 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel061 = args[4].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[0].data + base0);

    int base1 = args[1].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[1].data + base1);

    int base2 = args[2].dat->base_offset;
    double * __restrict__ rhou0_B0_p = (double *)(args[2].data + base2);

    int base3 = args[3].dat->base_offset;
    double * __restrict__ rhou1_B0_p = (double *)(args[3].data + base3);

    int base4 = args[4].dat->base_offset;
    double * __restrict__ rhou2_B0_p = (double *)(args[4].data + base4);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_host(args, 5);
    ops_halo_exchanges(args, 5,range);
    ops_H_D_exchanges_host(args, 5);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[7].mpi_time += __t2 - __t1;
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

                ACC<double> rhoE_B0(xdim0_opensbliblock00Kernel061, ydim0_opensbliblock00Kernel061, rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel061*1 + n_z * xdim0_opensbliblock00Kernel061 * ydim0_opensbliblock00Kernel061*1);

                ACC<double> rho_B0(xdim1_opensbliblock00Kernel061, ydim1_opensbliblock00Kernel061, rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel061*1 + n_z * xdim1_opensbliblock00Kernel061 * ydim1_opensbliblock00Kernel061*1);

                ACC<double> rhou0_B0(xdim2_opensbliblock00Kernel061, ydim2_opensbliblock00Kernel061, rhou0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel061*1 + n_z * xdim2_opensbliblock00Kernel061 * ydim2_opensbliblock00Kernel061*1);

                ACC<double> rhou1_B0(xdim3_opensbliblock00Kernel061, ydim3_opensbliblock00Kernel061, rhou1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel061*1 + n_z * xdim3_opensbliblock00Kernel061 * ydim3_opensbliblock00Kernel061*1);

                ACC<double> rhou2_B0(xdim4_opensbliblock00Kernel061, ydim4_opensbliblock00Kernel061, rhou2_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel061*1 + n_z * xdim4_opensbliblock00Kernel061 * ydim4_opensbliblock00Kernel061*1);

                
   rho_B0(0,0,0) = rho_B0(-1,0,0);

   rhou0_B0(0,0,0) = rhou0_B0(-1,0,0);

   rhou1_B0(0,0,0) = rhou1_B0(-1,0,0);

   rhou2_B0(0,0,0) = rhou2_B0(-1,0,0);

   rhoE_B0(0,0,0) = rhoE_B0(-1,0,0);


            }
        }
    }

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[7].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_host(args, 5);
    ops_set_halo_dirtybit3(&args[0], range);
    ops_set_halo_dirtybit3(&args[1], range);
    ops_set_halo_dirtybit3(&args[2], range);
    ops_set_halo_dirtybit3(&args[3], range);
    ops_set_halo_dirtybit3(&args[4], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[7].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[7].transfer += ops_compute_transfer(dim, start, end, &arg0);
        block->instance->OPS_kernels[7].transfer += ops_compute_transfer(dim, start, end, &arg1);
        block->instance->OPS_kernels[7].transfer += ops_compute_transfer(dim, start, end, &arg2);
        block->instance->OPS_kernels[7].transfer += ops_compute_transfer(dim, start, end, &arg3);
        block->instance->OPS_kernels[7].transfer += ops_compute_transfer(dim, start, end, &arg4);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel061(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4
)
{
    ops_arg args[5];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;

    create_kerneldesc_and_enque("opensbliblock00Kernel061", args, 5, 7, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel061_execute);
}
#endif
