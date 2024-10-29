// Auto-generated at 2024-10-10 09:28:35.469706 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel084(
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
    ops_arg arg16
)
{
#else
void ops_par_loop_opensbliblock00Kernel084_execute(ops_kernel_descriptor *desc)
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
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[17];

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

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 17, range, 38)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 38, "opensbliblock00Kernel084");
        block->instance->OPS_kernels[38].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel084");
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
    if (compute_ranges(args, 17, block, range, start, end, arg_idx) < 0) return;
#endif

    int start0 = start[0];
    int end0 = end[0];
    int start1 = start[1];
    int end1 = end[1];
    int start2 = start[2];
    int end2 = end[2];

    //  =====================================================
    //  Initialize global variable with the dimension of dats
    //  =====================================================
    int xdim0_opensbliblock00Kernel084 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel084 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel084 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel084 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel084 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel084 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel084 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel084 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel084 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel084 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel084 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel084 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel084 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel084 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel084 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel084 = args[7].dat->size[1];
    int xdim8_opensbliblock00Kernel084 = args[8].dat->size[0];
    int ydim8_opensbliblock00Kernel084 = args[8].dat->size[1];
    int xdim9_opensbliblock00Kernel084 = args[9].dat->size[0];
    int ydim9_opensbliblock00Kernel084 = args[9].dat->size[1];
    int xdim10_opensbliblock00Kernel084 = args[10].dat->size[0];
    int ydim10_opensbliblock00Kernel084 = args[10].dat->size[1];
    int xdim11_opensbliblock00Kernel084 = args[11].dat->size[0];
    int ydim11_opensbliblock00Kernel084 = args[11].dat->size[1];
    int xdim12_opensbliblock00Kernel084 = args[12].dat->size[0];
    int ydim12_opensbliblock00Kernel084 = args[12].dat->size[1];
    int xdim13_opensbliblock00Kernel084 = args[13].dat->size[0];
    int ydim13_opensbliblock00Kernel084 = args[13].dat->size[1];
    int xdim14_opensbliblock00Kernel084 = args[14].dat->size[0];
    int ydim14_opensbliblock00Kernel084 = args[14].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ Residual0_B0_p = (double *)(args[0].data_d + base0);

    int base1 = args[1].dat->base_offset;
    double * __restrict__ Residual1_B0_p = (double *)(args[1].data_d + base1);

    int base2 = args[2].dat->base_offset;
    double * __restrict__ Residual2_B0_p = (double *)(args[2].data_d + base2);

    int base3 = args[3].dat->base_offset;
    double * __restrict__ Residual3_B0_p = (double *)(args[3].data_d + base3);

    int base4 = args[4].dat->base_offset;
    double * __restrict__ Residual4_B0_p = (double *)(args[4].data_d + base4);

    int base5 = args[5].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[5].data_d + base5);

    int base6 = args[6].dat->base_offset;
    double * __restrict__ rhoE_RKold_B0_p = (double *)(args[6].data_d + base6);

    int base7 = args[7].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[7].data_d + base7);

    int base8 = args[8].dat->base_offset;
    double * __restrict__ rho_RKold_B0_p = (double *)(args[8].data_d + base8);

    int base9 = args[9].dat->base_offset;
    double * __restrict__ rhou0_B0_p = (double *)(args[9].data_d + base9);

    int base10 = args[10].dat->base_offset;
    double * __restrict__ rhou0_RKold_B0_p = (double *)(args[10].data_d + base10);

    int base11 = args[11].dat->base_offset;
    double * __restrict__ rhou1_B0_p = (double *)(args[11].data_d + base11);

    int base12 = args[12].dat->base_offset;
    double * __restrict__ rhou1_RKold_B0_p = (double *)(args[12].data_d + base12);

    int base13 = args[13].dat->base_offset;
    double * __restrict__ rhou2_B0_p = (double *)(args[13].data_d + base13);

    int base14 = args[14].dat->base_offset;
    double * __restrict__ rhou2_RKold_B0_p = (double *)(args[14].data_d + base14);




    int consts_bytes = 0;

    double *arg15h = (double *)args[15].data;
    consts_bytes += ROUND_UP(args[15].dim*sizeof(double));
    double *arg16h = (double *)args[16].data;
    consts_bytes += ROUND_UP(args[16].dim*sizeof(double));

    reallocConstArrays(block->instance,consts_bytes);
    consts_bytes = 0;

    args[15].data = block->instance->OPS_consts_h + consts_bytes;
    args[15].data_d = block->instance->OPS_consts_d + consts_bytes;
    for (int d = 0; d < args[15].dim; d++) {
        ((double *)args[15].data)[d] = arg15h[d];
    }
    consts_bytes += ROUND_UP(args[15].dim*sizeof(double));

    args[16].data = block->instance->OPS_consts_h + consts_bytes;
    args[16].data_d = block->instance->OPS_consts_d + consts_bytes;
    for (int d = 0; d < args[16].dim; d++) {
        ((double *)args[16].data)[d] = arg16h[d];
    }
    consts_bytes += ROUND_UP(args[16].dim*sizeof(double));

    mvConstArraysToDevice(block->instance,consts_bytes);

    double * __restrict__ rkA = (double *)args[15].data_d;
    double * __restrict__ rkB = (double *)args[16].data_d;

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 17);
    ops_halo_exchanges(args, 17,range);
    ops_H_D_exchanges_device(args, 17);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[38].mpi_time += __t2 - __t1;
    }

    #pragma omp target teams distribute parallel for collapse(3)
    for (int n_z = start2; n_z < end2; n_z++) {
        for (int n_y = start1; n_y < end1; n_y++) {
            for (int n_x = start0; n_x < end0; n_x++) {

                const ACC<double> Residual0_B0(xdim0_opensbliblock00Kernel084, ydim0_opensbliblock00Kernel084, Residual0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel084*1 + n_z * xdim0_opensbliblock00Kernel084 * ydim0_opensbliblock00Kernel084*1);

                const ACC<double> Residual1_B0(xdim1_opensbliblock00Kernel084, ydim1_opensbliblock00Kernel084, Residual1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel084*1 + n_z * xdim1_opensbliblock00Kernel084 * ydim1_opensbliblock00Kernel084*1);

                const ACC<double> Residual2_B0(xdim2_opensbliblock00Kernel084, ydim2_opensbliblock00Kernel084, Residual2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel084*1 + n_z * xdim2_opensbliblock00Kernel084 * ydim2_opensbliblock00Kernel084*1);

                const ACC<double> Residual3_B0(xdim3_opensbliblock00Kernel084, ydim3_opensbliblock00Kernel084, Residual3_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel084*1 + n_z * xdim3_opensbliblock00Kernel084 * ydim3_opensbliblock00Kernel084*1);

                const ACC<double> Residual4_B0(xdim4_opensbliblock00Kernel084, ydim4_opensbliblock00Kernel084, Residual4_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel084*1 + n_z * xdim4_opensbliblock00Kernel084 * ydim4_opensbliblock00Kernel084*1);

                ACC<double> rhoE_B0(xdim5_opensbliblock00Kernel084, ydim5_opensbliblock00Kernel084, rhoE_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel084*1 + n_z * xdim5_opensbliblock00Kernel084 * ydim5_opensbliblock00Kernel084*1);

                ACC<double> rhoE_RKold_B0(xdim6_opensbliblock00Kernel084, ydim6_opensbliblock00Kernel084, rhoE_RKold_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel084*1 + n_z * xdim6_opensbliblock00Kernel084 * ydim6_opensbliblock00Kernel084*1);

                ACC<double> rho_B0(xdim7_opensbliblock00Kernel084, ydim7_opensbliblock00Kernel084, rho_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel084*1 + n_z * xdim7_opensbliblock00Kernel084 * ydim7_opensbliblock00Kernel084*1);

                ACC<double> rho_RKold_B0(xdim8_opensbliblock00Kernel084, ydim8_opensbliblock00Kernel084, rho_RKold_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel084*1 + n_z * xdim8_opensbliblock00Kernel084 * ydim8_opensbliblock00Kernel084*1);

                ACC<double> rhou0_B0(xdim9_opensbliblock00Kernel084, ydim9_opensbliblock00Kernel084, rhou0_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel084*1 + n_z * xdim9_opensbliblock00Kernel084 * ydim9_opensbliblock00Kernel084*1);

                ACC<double> rhou0_RKold_B0(xdim10_opensbliblock00Kernel084, ydim10_opensbliblock00Kernel084, rhou0_RKold_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel084*1 + n_z * xdim10_opensbliblock00Kernel084 * ydim10_opensbliblock00Kernel084*1);

                ACC<double> rhou1_B0(xdim11_opensbliblock00Kernel084, ydim11_opensbliblock00Kernel084, rhou1_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel084*1 + n_z * xdim11_opensbliblock00Kernel084 * ydim11_opensbliblock00Kernel084*1);

                ACC<double> rhou1_RKold_B0(xdim12_opensbliblock00Kernel084, ydim12_opensbliblock00Kernel084, rhou1_RKold_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel084*1 + n_z * xdim12_opensbliblock00Kernel084 * ydim12_opensbliblock00Kernel084*1);

                ACC<double> rhou2_B0(xdim13_opensbliblock00Kernel084, ydim13_opensbliblock00Kernel084, rhou2_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel084*1 + n_z * xdim13_opensbliblock00Kernel084 * ydim13_opensbliblock00Kernel084*1);

                ACC<double> rhou2_RKold_B0(xdim14_opensbliblock00Kernel084, ydim14_opensbliblock00Kernel084, rhou2_RKold_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel084*1 + n_z * xdim14_opensbliblock00Kernel084 * ydim14_opensbliblock00Kernel084*1);

                
   rho_RKold_B0(0,0,0) = rkA[0]*rho_RKold_B0(0,0,0) + dt*Residual0_B0(0,0,0);

   rho_B0(0,0,0) = rkB[0]*rho_RKold_B0(0,0,0) + rho_B0(0,0,0);

   rhou0_RKold_B0(0,0,0) = rkA[0]*rhou0_RKold_B0(0,0,0) + dt*Residual1_B0(0,0,0);

   rhou0_B0(0,0,0) = rkB[0]*rhou0_RKold_B0(0,0,0) + rhou0_B0(0,0,0);

   rhou1_RKold_B0(0,0,0) = rkA[0]*rhou1_RKold_B0(0,0,0) + dt*Residual2_B0(0,0,0);

   rhou1_B0(0,0,0) = rkB[0]*rhou1_RKold_B0(0,0,0) + rhou1_B0(0,0,0);

   rhou2_RKold_B0(0,0,0) = rkA[0]*rhou2_RKold_B0(0,0,0) + dt*Residual3_B0(0,0,0);

   rhou2_B0(0,0,0) = rkB[0]*rhou2_RKold_B0(0,0,0) + rhou2_B0(0,0,0);

   rhoE_RKold_B0(0,0,0) = rkA[0]*rhoE_RKold_B0(0,0,0) + dt*Residual4_B0(0,0,0);

   rhoE_B0(0,0,0) = rkB[0]*rhoE_RKold_B0(0,0,0) + rhoE_B0(0,0,0);


            }
        }
    }

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[38].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 17);
    ops_set_halo_dirtybit3(&args[5], range);
    ops_set_halo_dirtybit3(&args[6], range);
    ops_set_halo_dirtybit3(&args[7], range);
    ops_set_halo_dirtybit3(&args[8], range);
    ops_set_halo_dirtybit3(&args[9], range);
    ops_set_halo_dirtybit3(&args[10], range);
    ops_set_halo_dirtybit3(&args[11], range);
    ops_set_halo_dirtybit3(&args[12], range);
    ops_set_halo_dirtybit3(&args[13], range);
    ops_set_halo_dirtybit3(&args[14], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[38].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg0);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg1);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg2);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg3);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg4);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg5);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg6);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg7);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg8);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg9);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg10);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg11);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg12);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg13);
        block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg14);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel084(
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
    ops_arg arg16
)
{
    ops_arg args[17];

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

    create_kerneldesc_and_enque("opensbliblock00Kernel084", args, 17, 38, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel084_execute);
}
#endif
