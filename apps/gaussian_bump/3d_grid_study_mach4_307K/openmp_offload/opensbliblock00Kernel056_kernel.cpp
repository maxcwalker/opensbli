// Auto-generated at 2024-10-10 09:28:35.464801 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel056(
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
    ops_arg arg20, 
    ops_arg arg21, 
    ops_arg arg22, 
    ops_arg arg23, 
    ops_arg arg24, 
    ops_arg arg25, 
    ops_arg arg26, 
    ops_arg arg27, 
    ops_arg arg28, 
    ops_arg arg29, 
    ops_arg arg30, 
    ops_arg arg31, 
    ops_arg arg32, 
    ops_arg arg33
)
{
#else
void ops_par_loop_opensbliblock00Kernel056_execute(ops_kernel_descriptor *desc)
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
    ops_arg arg21 = desc->args[21];
    ops_arg arg22 = desc->args[22];
    ops_arg arg23 = desc->args[23];
    ops_arg arg24 = desc->args[24];
    ops_arg arg25 = desc->args[25];
    ops_arg arg26 = desc->args[26];
    ops_arg arg27 = desc->args[27];
    ops_arg arg28 = desc->args[28];
    ops_arg arg29 = desc->args[29];
    ops_arg arg30 = desc->args[30];
    ops_arg arg31 = desc->args[31];
    ops_arg arg32 = desc->args[32];
    ops_arg arg33 = desc->args[33];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[34];

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
    args[21] = arg21;
    args[22] = arg22;
    args[23] = arg23;
    args[24] = arg24;
    args[25] = arg25;
    args[26] = arg26;
    args[27] = arg27;
    args[28] = arg28;
    args[29] = arg29;
    args[30] = arg30;
    args[31] = arg31;
    args[32] = arg32;
    args[33] = arg33;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 34, range, 37)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 37, "opensbliblock00Kernel056");
        block->instance->OPS_kernels[37].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel056");
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
    if (compute_ranges(args, 34, block, range, start, end, arg_idx) < 0) return;
#endif

    int start0 = start[0];
    int end0 = end[0];
    int start1 = start[1];
    int end1 = end[1];
    int start2 = start[2];
    int end2 = end[2];

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
    int xdim0_opensbliblock00Kernel056 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel056 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel056 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel056 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel056 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel056 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel056 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel056 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel056 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel056 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel056 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel056 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel056 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel056 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel056 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel056 = args[7].dat->size[1];
    int xdim8_opensbliblock00Kernel056 = args[8].dat->size[0];
    int ydim8_opensbliblock00Kernel056 = args[8].dat->size[1];
    int xdim9_opensbliblock00Kernel056 = args[9].dat->size[0];
    int ydim9_opensbliblock00Kernel056 = args[9].dat->size[1];
    int xdim10_opensbliblock00Kernel056 = args[10].dat->size[0];
    int ydim10_opensbliblock00Kernel056 = args[10].dat->size[1];
    int xdim11_opensbliblock00Kernel056 = args[11].dat->size[0];
    int ydim11_opensbliblock00Kernel056 = args[11].dat->size[1];
    int xdim12_opensbliblock00Kernel056 = args[12].dat->size[0];
    int ydim12_opensbliblock00Kernel056 = args[12].dat->size[1];
    int xdim13_opensbliblock00Kernel056 = args[13].dat->size[0];
    int ydim13_opensbliblock00Kernel056 = args[13].dat->size[1];
    int xdim14_opensbliblock00Kernel056 = args[14].dat->size[0];
    int ydim14_opensbliblock00Kernel056 = args[14].dat->size[1];
    int xdim15_opensbliblock00Kernel056 = args[15].dat->size[0];
    int ydim15_opensbliblock00Kernel056 = args[15].dat->size[1];
    int xdim16_opensbliblock00Kernel056 = args[16].dat->size[0];
    int ydim16_opensbliblock00Kernel056 = args[16].dat->size[1];
    int xdim17_opensbliblock00Kernel056 = args[17].dat->size[0];
    int ydim17_opensbliblock00Kernel056 = args[17].dat->size[1];
    int xdim18_opensbliblock00Kernel056 = args[18].dat->size[0];
    int ydim18_opensbliblock00Kernel056 = args[18].dat->size[1];
    int xdim19_opensbliblock00Kernel056 = args[19].dat->size[0];
    int ydim19_opensbliblock00Kernel056 = args[19].dat->size[1];
    int xdim20_opensbliblock00Kernel056 = args[20].dat->size[0];
    int ydim20_opensbliblock00Kernel056 = args[20].dat->size[1];
    int xdim21_opensbliblock00Kernel056 = args[21].dat->size[0];
    int ydim21_opensbliblock00Kernel056 = args[21].dat->size[1];
    int xdim22_opensbliblock00Kernel056 = args[22].dat->size[0];
    int ydim22_opensbliblock00Kernel056 = args[22].dat->size[1];
    int xdim23_opensbliblock00Kernel056 = args[23].dat->size[0];
    int ydim23_opensbliblock00Kernel056 = args[23].dat->size[1];
    int xdim24_opensbliblock00Kernel056 = args[24].dat->size[0];
    int ydim24_opensbliblock00Kernel056 = args[24].dat->size[1];
    int xdim25_opensbliblock00Kernel056 = args[25].dat->size[0];
    int ydim25_opensbliblock00Kernel056 = args[25].dat->size[1];
    int xdim26_opensbliblock00Kernel056 = args[26].dat->size[0];
    int ydim26_opensbliblock00Kernel056 = args[26].dat->size[1];
    int xdim27_opensbliblock00Kernel056 = args[27].dat->size[0];
    int ydim27_opensbliblock00Kernel056 = args[27].dat->size[1];
    int xdim28_opensbliblock00Kernel056 = args[28].dat->size[0];
    int ydim28_opensbliblock00Kernel056 = args[28].dat->size[1];
    int xdim29_opensbliblock00Kernel056 = args[29].dat->size[0];
    int ydim29_opensbliblock00Kernel056 = args[29].dat->size[1];
    int xdim30_opensbliblock00Kernel056 = args[30].dat->size[0];
    int ydim30_opensbliblock00Kernel056 = args[30].dat->size[1];
    int xdim31_opensbliblock00Kernel056 = args[31].dat->size[0];
    int ydim31_opensbliblock00Kernel056 = args[31].dat->size[1];
    int xdim32_opensbliblock00Kernel056 = args[32].dat->size[0];
    int ydim32_opensbliblock00Kernel056 = args[32].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ D00_B0_p = (double *)(args[0].data_d + base0);

    int base1 = args[1].dat->base_offset;
    double * __restrict__ D01_B0_p = (double *)(args[1].data_d + base1);

    int base2 = args[2].dat->base_offset;
    double * __restrict__ D10_B0_p = (double *)(args[2].data_d + base2);

    int base3 = args[3].dat->base_offset;
    double * __restrict__ D11_B0_p = (double *)(args[3].data_d + base3);

    int base4 = args[4].dat->base_offset;
    double * __restrict__ SD000_B0_p = (double *)(args[4].data_d + base4);

    int base5 = args[5].dat->base_offset;
    double * __restrict__ SD001_B0_p = (double *)(args[5].data_d + base5);

    int base6 = args[6].dat->base_offset;
    double * __restrict__ SD010_B0_p = (double *)(args[6].data_d + base6);

    int base7 = args[7].dat->base_offset;
    double * __restrict__ SD011_B0_p = (double *)(args[7].data_d + base7);

    int base8 = args[8].dat->base_offset;
    double * __restrict__ SD100_B0_p = (double *)(args[8].data_d + base8);

    int base9 = args[9].dat->base_offset;
    double * __restrict__ SD101_B0_p = (double *)(args[9].data_d + base9);

    int base10 = args[10].dat->base_offset;
    double * __restrict__ SD110_B0_p = (double *)(args[10].data_d + base10);

    int base11 = args[11].dat->base_offset;
    double * __restrict__ SD111_B0_p = (double *)(args[11].data_d + base11);

    int base12 = args[12].dat->base_offset;
    double * __restrict__ T_B0_p = (double *)(args[12].data_d + base12);

    int base13 = args[13].dat->base_offset;
    double * __restrict__ mu_B0_p = (double *)(args[13].data_d + base13);

    int base14 = args[14].dat->base_offset;
    double * __restrict__ u0_B0_p = (double *)(args[14].data_d + base14);

    int base15 = args[15].dat->base_offset;
    double * __restrict__ u1_B0_p = (double *)(args[15].data_d + base15);

    int base16 = args[16].dat->base_offset;
    double * __restrict__ u2_B0_p = (double *)(args[16].data_d + base16);

    int base17 = args[17].dat->base_offset;
    double * __restrict__ wk0_B0_p = (double *)(args[17].data_d + base17);

    int base18 = args[18].dat->base_offset;
    double * __restrict__ wk10_B0_p = (double *)(args[18].data_d + base18);

    int base19 = args[19].dat->base_offset;
    double * __restrict__ wk11_B0_p = (double *)(args[19].data_d + base19);

    int base20 = args[20].dat->base_offset;
    double * __restrict__ wk1_B0_p = (double *)(args[20].data_d + base20);

    int base21 = args[21].dat->base_offset;
    double * __restrict__ wk2_B0_p = (double *)(args[21].data_d + base21);

    int base22 = args[22].dat->base_offset;
    double * __restrict__ wk3_B0_p = (double *)(args[22].data_d + base22);

    int base23 = args[23].dat->base_offset;
    double * __restrict__ wk4_B0_p = (double *)(args[23].data_d + base23);

    int base24 = args[24].dat->base_offset;
    double * __restrict__ wk5_B0_p = (double *)(args[24].data_d + base24);

    int base25 = args[25].dat->base_offset;
    double * __restrict__ wk6_B0_p = (double *)(args[25].data_d + base25);

    int base26 = args[26].dat->base_offset;
    double * __restrict__ wk7_B0_p = (double *)(args[26].data_d + base26);

    int base27 = args[27].dat->base_offset;
    double * __restrict__ wk8_B0_p = (double *)(args[27].data_d + base27);

    int base28 = args[28].dat->base_offset;
    double * __restrict__ wk9_B0_p = (double *)(args[28].data_d + base28);

    int base29 = args[29].dat->base_offset;
    double * __restrict__ Residual1_B0_p = (double *)(args[29].data_d + base29);

    int base30 = args[30].dat->base_offset;
    double * __restrict__ Residual2_B0_p = (double *)(args[30].data_d + base30);

    int base31 = args[31].dat->base_offset;
    double * __restrict__ Residual3_B0_p = (double *)(args[31].data_d + base31);

    int base32 = args[32].dat->base_offset;
    double * __restrict__ Residual4_B0_p = (double *)(args[32].data_d + base32);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 34);
    ops_halo_exchanges(args, 34,range);
    ops_H_D_exchanges_device(args, 34);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[37].mpi_time += __t2 - __t1;
    }

    #pragma omp target teams distribute parallel for collapse(3)
    for (int n_z = start2; n_z < end2; n_z++) {
        for (int n_y = start1; n_y < end1; n_y++) {
            for (int n_x = start0; n_x < end0; n_x++) {

                int idx[] = {arg_idx[0]+n_x, arg_idx[1]+n_y, arg_idx[2]+n_z};
                const ACC<double> D00_B0(xdim0_opensbliblock00Kernel056, ydim0_opensbliblock00Kernel056, D00_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel056*1 + n_z * xdim0_opensbliblock00Kernel056 * ydim0_opensbliblock00Kernel056*1);

                const ACC<double> D01_B0(xdim1_opensbliblock00Kernel056, ydim1_opensbliblock00Kernel056, D01_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel056*1 + n_z * xdim1_opensbliblock00Kernel056 * ydim1_opensbliblock00Kernel056*1);

                const ACC<double> D10_B0(xdim2_opensbliblock00Kernel056, ydim2_opensbliblock00Kernel056, D10_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel056*1 + n_z * xdim2_opensbliblock00Kernel056 * ydim2_opensbliblock00Kernel056*1);

                const ACC<double> D11_B0(xdim3_opensbliblock00Kernel056, ydim3_opensbliblock00Kernel056, D11_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel056*1 + n_z * xdim3_opensbliblock00Kernel056 * ydim3_opensbliblock00Kernel056*1);

                const ACC<double> SD000_B0(xdim4_opensbliblock00Kernel056, ydim4_opensbliblock00Kernel056, SD000_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel056*1 + n_z * xdim4_opensbliblock00Kernel056 * ydim4_opensbliblock00Kernel056*1);

                const ACC<double> SD001_B0(xdim5_opensbliblock00Kernel056, ydim5_opensbliblock00Kernel056, SD001_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel056*1 + n_z * xdim5_opensbliblock00Kernel056 * ydim5_opensbliblock00Kernel056*1);

                const ACC<double> SD010_B0(xdim6_opensbliblock00Kernel056, ydim6_opensbliblock00Kernel056, SD010_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel056*1 + n_z * xdim6_opensbliblock00Kernel056 * ydim6_opensbliblock00Kernel056*1);

                const ACC<double> SD011_B0(xdim7_opensbliblock00Kernel056, ydim7_opensbliblock00Kernel056, SD011_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel056*1 + n_z * xdim7_opensbliblock00Kernel056 * ydim7_opensbliblock00Kernel056*1);

                const ACC<double> SD100_B0(xdim8_opensbliblock00Kernel056, ydim8_opensbliblock00Kernel056, SD100_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel056*1 + n_z * xdim8_opensbliblock00Kernel056 * ydim8_opensbliblock00Kernel056*1);

                const ACC<double> SD101_B0(xdim9_opensbliblock00Kernel056, ydim9_opensbliblock00Kernel056, SD101_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel056*1 + n_z * xdim9_opensbliblock00Kernel056 * ydim9_opensbliblock00Kernel056*1);

                const ACC<double> SD110_B0(xdim10_opensbliblock00Kernel056, ydim10_opensbliblock00Kernel056, SD110_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel056*1 + n_z * xdim10_opensbliblock00Kernel056 * ydim10_opensbliblock00Kernel056*1);

                const ACC<double> SD111_B0(xdim11_opensbliblock00Kernel056, ydim11_opensbliblock00Kernel056, SD111_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel056*1 + n_z * xdim11_opensbliblock00Kernel056 * ydim11_opensbliblock00Kernel056*1);

                const ACC<double> T_B0(xdim12_opensbliblock00Kernel056, ydim12_opensbliblock00Kernel056, T_B0_p + n_x*1 + n_y * xdim12_opensbliblock00Kernel056*1 + n_z * xdim12_opensbliblock00Kernel056 * ydim12_opensbliblock00Kernel056*1);

                const ACC<double> mu_B0(xdim13_opensbliblock00Kernel056, ydim13_opensbliblock00Kernel056, mu_B0_p + n_x*1 + n_y * xdim13_opensbliblock00Kernel056*1 + n_z * xdim13_opensbliblock00Kernel056 * ydim13_opensbliblock00Kernel056*1);

                const ACC<double> u0_B0(xdim14_opensbliblock00Kernel056, ydim14_opensbliblock00Kernel056, u0_B0_p + n_x*1 + n_y * xdim14_opensbliblock00Kernel056*1 + n_z * xdim14_opensbliblock00Kernel056 * ydim14_opensbliblock00Kernel056*1);

                const ACC<double> u1_B0(xdim15_opensbliblock00Kernel056, ydim15_opensbliblock00Kernel056, u1_B0_p + n_x*1 + n_y * xdim15_opensbliblock00Kernel056*1 + n_z * xdim15_opensbliblock00Kernel056 * ydim15_opensbliblock00Kernel056*1);

                const ACC<double> u2_B0(xdim16_opensbliblock00Kernel056, ydim16_opensbliblock00Kernel056, u2_B0_p + n_x*1 + n_y * xdim16_opensbliblock00Kernel056*1 + n_z * xdim16_opensbliblock00Kernel056 * ydim16_opensbliblock00Kernel056*1);

                const ACC<double> wk0_B0(xdim17_opensbliblock00Kernel056, ydim17_opensbliblock00Kernel056, wk0_B0_p + n_x*1 + n_y * xdim17_opensbliblock00Kernel056*1 + n_z * xdim17_opensbliblock00Kernel056 * ydim17_opensbliblock00Kernel056*1);

                const ACC<double> wk10_B0(xdim18_opensbliblock00Kernel056, ydim18_opensbliblock00Kernel056, wk10_B0_p + n_x*1 + n_y * xdim18_opensbliblock00Kernel056*1 + n_z * xdim18_opensbliblock00Kernel056 * ydim18_opensbliblock00Kernel056*1);

                const ACC<double> wk11_B0(xdim19_opensbliblock00Kernel056, ydim19_opensbliblock00Kernel056, wk11_B0_p + n_x*1 + n_y * xdim19_opensbliblock00Kernel056*1 + n_z * xdim19_opensbliblock00Kernel056 * ydim19_opensbliblock00Kernel056*1);

                const ACC<double> wk1_B0(xdim20_opensbliblock00Kernel056, ydim20_opensbliblock00Kernel056, wk1_B0_p + n_x*1 + n_y * xdim20_opensbliblock00Kernel056*1 + n_z * xdim20_opensbliblock00Kernel056 * ydim20_opensbliblock00Kernel056*1);

                const ACC<double> wk2_B0(xdim21_opensbliblock00Kernel056, ydim21_opensbliblock00Kernel056, wk2_B0_p + n_x*1 + n_y * xdim21_opensbliblock00Kernel056*1 + n_z * xdim21_opensbliblock00Kernel056 * ydim21_opensbliblock00Kernel056*1);

                const ACC<double> wk3_B0(xdim22_opensbliblock00Kernel056, ydim22_opensbliblock00Kernel056, wk3_B0_p + n_x*1 + n_y * xdim22_opensbliblock00Kernel056*1 + n_z * xdim22_opensbliblock00Kernel056 * ydim22_opensbliblock00Kernel056*1);

                const ACC<double> wk4_B0(xdim23_opensbliblock00Kernel056, ydim23_opensbliblock00Kernel056, wk4_B0_p + n_x*1 + n_y * xdim23_opensbliblock00Kernel056*1 + n_z * xdim23_opensbliblock00Kernel056 * ydim23_opensbliblock00Kernel056*1);

                const ACC<double> wk5_B0(xdim24_opensbliblock00Kernel056, ydim24_opensbliblock00Kernel056, wk5_B0_p + n_x*1 + n_y * xdim24_opensbliblock00Kernel056*1 + n_z * xdim24_opensbliblock00Kernel056 * ydim24_opensbliblock00Kernel056*1);

                const ACC<double> wk6_B0(xdim25_opensbliblock00Kernel056, ydim25_opensbliblock00Kernel056, wk6_B0_p + n_x*1 + n_y * xdim25_opensbliblock00Kernel056*1 + n_z * xdim25_opensbliblock00Kernel056 * ydim25_opensbliblock00Kernel056*1);

                const ACC<double> wk7_B0(xdim26_opensbliblock00Kernel056, ydim26_opensbliblock00Kernel056, wk7_B0_p + n_x*1 + n_y * xdim26_opensbliblock00Kernel056*1 + n_z * xdim26_opensbliblock00Kernel056 * ydim26_opensbliblock00Kernel056*1);

                const ACC<double> wk8_B0(xdim27_opensbliblock00Kernel056, ydim27_opensbliblock00Kernel056, wk8_B0_p + n_x*1 + n_y * xdim27_opensbliblock00Kernel056*1 + n_z * xdim27_opensbliblock00Kernel056 * ydim27_opensbliblock00Kernel056*1);

                const ACC<double> wk9_B0(xdim28_opensbliblock00Kernel056, ydim28_opensbliblock00Kernel056, wk9_B0_p + n_x*1 + n_y * xdim28_opensbliblock00Kernel056*1 + n_z * xdim28_opensbliblock00Kernel056 * ydim28_opensbliblock00Kernel056*1);

                ACC<double> Residual1_B0(xdim29_opensbliblock00Kernel056, ydim29_opensbliblock00Kernel056, Residual1_B0_p + n_x*1 + n_y * xdim29_opensbliblock00Kernel056*1 + n_z * xdim29_opensbliblock00Kernel056 * ydim29_opensbliblock00Kernel056*1);

                ACC<double> Residual2_B0(xdim30_opensbliblock00Kernel056, ydim30_opensbliblock00Kernel056, Residual2_B0_p + n_x*1 + n_y * xdim30_opensbliblock00Kernel056*1 + n_z * xdim30_opensbliblock00Kernel056 * ydim30_opensbliblock00Kernel056*1);

                ACC<double> Residual3_B0(xdim31_opensbliblock00Kernel056, ydim31_opensbliblock00Kernel056, Residual3_B0_p + n_x*1 + n_y * xdim31_opensbliblock00Kernel056*1 + n_z * xdim31_opensbliblock00Kernel056 * ydim31_opensbliblock00Kernel056*1);

                ACC<double> Residual4_B0(xdim32_opensbliblock00Kernel056, ydim32_opensbliblock00Kernel056, Residual4_B0_p + n_x*1 + n_y * xdim32_opensbliblock00Kernel056*1 + n_z * xdim32_opensbliblock00Kernel056 * ydim32_opensbliblock00Kernel056*1);

                
   double d1_mu_dx = 0.0;
   double d1_mu_dy = 0.0;
   double d1_mu_dz = 0.0;
   double d1_wk0_dy = 0.0;
   double d1_wk0_dz = 0.0;
   double d1_wk1_dy = 0.0;
   double d1_wk1_dz = 0.0;
   double d1_wk2_dy = 0.0;
   double d1_wk2_dz = 0.0;
   double d1_wk3_dy = 0.0;
   double d1_wk4_dz = 0.0;
   double d1_wk5_dz = 0.0;
   double d1_wk6_dz = 0.0;
   double d2_T_dx = 0.0;
   double d2_T_dy = 0.0;
   double d2_T_dz = 0.0;
   double d2_u0_dx = 0.0;
   double d2_u0_dy = 0.0;
   double d2_u0_dz = 0.0;
   double d2_u1_dx = 0.0;
   double d2_u1_dy = 0.0;
   double d2_u1_dz = 0.0;
   double d2_u2_dx = 0.0;
   double d2_u2_dy = 0.0;
   double d2_u2_dz = 0.0;
   if (idx[0] == 0){

       d1_mu_dx = (-3*mu_B0(2,0,0) + 4*mu_B0(1,0,0) - (25.0/12.0)*mu_B0(0,0,0) - (1.0/4.0)*mu_B0(4,0,0) +
            ((4.0/3.0))*mu_B0(3,0,0))*invDelta0block0;

   }

   else if (idx[0] == 1){

       d1_mu_dx = (-(5.0/6.0)*mu_B0(0,0,0) - (1.0/2.0)*mu_B0(2,0,0) - (1.0/4.0)*mu_B0(-1,0,0) +
            ((1.0/12.0))*mu_B0(3,0,0) + ((3.0/2.0))*mu_B0(1,0,0))*invDelta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d1_mu_dx = (-4*mu_B0(-1,0,0) + 3*mu_B0(-2,0,0) - (4.0/3.0)*mu_B0(-3,0,0) + ((1.0/4.0))*mu_B0(-4,0,0) +
            ((25.0/12.0))*mu_B0(0,0,0))*invDelta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d1_mu_dx = (((1.0/2.0))*mu_B0(-2,0,0) - (3.0/2.0)*mu_B0(-1,0,0) - (1.0/12.0)*mu_B0(-3,0,0) +
            ((1.0/4.0))*mu_B0(1,0,0) + ((5.0/6.0))*mu_B0(0,0,0))*invDelta0block0;

   }

   else{

       d1_mu_dx = (-(2.0/3.0)*mu_B0(-1,0,0) - (1.0/12.0)*mu_B0(2,0,0) + ((1.0/12.0))*mu_B0(-2,0,0) +
            ((2.0/3.0))*mu_B0(1,0,0))*invDelta0block0;

   }

   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1,0,0) - (14.0/3.0)*T_B0(3,0,0) + ((11.0/12.0))*T_B0(4,0,0) +
            ((19.0/2.0))*T_B0(2,0,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(1,0,0) - (14.0/3.0)*u0_B0(3,0,0) + ((11.0/12.0))*u0_B0(4,0,0) +
            ((19.0/2.0))*u0_B0(2,0,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(1,0,0) - (14.0/3.0)*u1_B0(3,0,0) + ((11.0/12.0))*u1_B0(4,0,0) +
            ((19.0/2.0))*u1_B0(2,0,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(26.0/3.0)*u2_B0(1,0,0) - (14.0/3.0)*u2_B0(3,0,0) + ((11.0/12.0))*u2_B0(4,0,0) +
            ((19.0/2.0))*u2_B0(2,0,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1,0,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(3,0,0) + ((1.0/3.0))*T_B0(2,0,0) +
            ((11.0/12.0))*T_B0(-1,0,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(1,0,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(3,0,0) +
            ((1.0/3.0))*u0_B0(2,0,0) + ((11.0/12.0))*u0_B0(-1,0,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(1,0,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(3,0,0) +
            ((1.0/3.0))*u1_B0(2,0,0) + ((11.0/12.0))*u1_B0(-1,0,0))*inv2Delta0block0;

       d2_u2_dx = (((1.0/2.0))*u2_B0(1,0,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(3,0,0) +
            ((1.0/3.0))*u2_B0(2,0,0) + ((11.0/12.0))*u2_B0(-1,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1,0,0) - (14.0/3.0)*T_B0(-3,0,0) + ((11.0/12.0))*T_B0(-4,0,0) +
            ((19.0/2.0))*T_B0(-2,0,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(26.0/3.0)*u0_B0(-1,0,0) - (14.0/3.0)*u0_B0(-3,0,0) + ((11.0/12.0))*u0_B0(-4,0,0) +
            ((19.0/2.0))*u0_B0(-2,0,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(26.0/3.0)*u1_B0(-1,0,0) - (14.0/3.0)*u1_B0(-3,0,0) + ((11.0/12.0))*u1_B0(-4,0,0) +
            ((19.0/2.0))*u1_B0(-2,0,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(26.0/3.0)*u2_B0(-1,0,0) - (14.0/3.0)*u2_B0(-3,0,0) + ((11.0/12.0))*u2_B0(-4,0,0) +
            ((19.0/2.0))*u2_B0(-2,0,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1,0,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(-3,0,0) + ((1.0/3.0))*T_B0(-2,0,0)
            + ((11.0/12.0))*T_B0(1,0,0))*inv2Delta0block0;

       d2_u0_dx = (((1.0/2.0))*u0_B0(-1,0,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(-3,0,0) +
            ((1.0/3.0))*u0_B0(-2,0,0) + ((11.0/12.0))*u0_B0(1,0,0))*inv2Delta0block0;

       d2_u1_dx = (((1.0/2.0))*u1_B0(-1,0,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(-3,0,0) +
            ((1.0/3.0))*u1_B0(-2,0,0) + ((11.0/12.0))*u1_B0(1,0,0))*inv2Delta0block0;

       d2_u2_dx = (((1.0/2.0))*u2_B0(-1,0,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(-3,0,0) +
            ((1.0/3.0))*u2_B0(-2,0,0) + ((11.0/12.0))*u2_B0(1,0,0))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(-2,0,0) - (1.0/12.0)*T_B0(2,0,0) + ((4.0/3.0))*T_B0(1,0,0) +
            ((4.0/3.0))*T_B0(-1,0,0))*inv2Delta0block0;

       d2_u0_dx = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(-2,0,0) - (1.0/12.0)*u0_B0(2,0,0) +
            ((4.0/3.0))*u0_B0(1,0,0) + ((4.0/3.0))*u0_B0(-1,0,0))*inv2Delta0block0;

       d2_u1_dx = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(-2,0,0) - (1.0/12.0)*u1_B0(2,0,0) +
            ((4.0/3.0))*u1_B0(1,0,0) + ((4.0/3.0))*u1_B0(-1,0,0))*inv2Delta0block0;

       d2_u2_dx = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(-2,0,0) - (1.0/12.0)*u2_B0(2,0,0) +
            ((4.0/3.0))*u2_B0(1,0,0) + ((4.0/3.0))*u2_B0(-1,0,0))*inv2Delta0block0;

   }

   if (idx[1] == 0){

       d1_mu_dy = (-3*mu_B0(0,2,0) + 4*mu_B0(0,1,0) - (25.0/12.0)*mu_B0(0,0,0) - (1.0/4.0)*mu_B0(0,4,0) +
            ((4.0/3.0))*mu_B0(0,3,0))*invDelta1block0;

       d1_wk0_dy = (-3*wk0_B0(0,2,0) + 4*wk0_B0(0,1,0) - (25.0/12.0)*wk0_B0(0,0,0) - (1.0/4.0)*wk0_B0(0,4,0) +
            ((4.0/3.0))*wk0_B0(0,3,0))*invDelta1block0;

       d1_wk1_dy = (-3*wk1_B0(0,2,0) + 4*wk1_B0(0,1,0) - (25.0/12.0)*wk1_B0(0,0,0) - (1.0/4.0)*wk1_B0(0,4,0) +
            ((4.0/3.0))*wk1_B0(0,3,0))*invDelta1block0;

       d1_wk2_dy = (-3*wk2_B0(0,2,0) + 4*wk2_B0(0,1,0) - (25.0/12.0)*wk2_B0(0,0,0) - (1.0/4.0)*wk2_B0(0,4,0) +
            ((4.0/3.0))*wk2_B0(0,3,0))*invDelta1block0;

       d1_wk3_dy = (-3*wk3_B0(0,2,0) + 4*wk3_B0(0,1,0) - (25.0/12.0)*wk3_B0(0,0,0) - (1.0/4.0)*wk3_B0(0,4,0) +
            ((4.0/3.0))*wk3_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       d1_mu_dy = (-(5.0/6.0)*mu_B0(0,0,0) - (1.0/2.0)*mu_B0(0,2,0) - (1.0/4.0)*mu_B0(0,-1,0) +
            ((1.0/12.0))*mu_B0(0,3,0) + ((3.0/2.0))*mu_B0(0,1,0))*invDelta1block0;

       d1_wk0_dy = (-(5.0/6.0)*wk0_B0(0,0,0) - (1.0/2.0)*wk0_B0(0,2,0) - (1.0/4.0)*wk0_B0(0,-1,0) +
            ((1.0/12.0))*wk0_B0(0,3,0) + ((3.0/2.0))*wk0_B0(0,1,0))*invDelta1block0;

       d1_wk1_dy = (-(5.0/6.0)*wk1_B0(0,0,0) - (1.0/2.0)*wk1_B0(0,2,0) - (1.0/4.0)*wk1_B0(0,-1,0) +
            ((1.0/12.0))*wk1_B0(0,3,0) + ((3.0/2.0))*wk1_B0(0,1,0))*invDelta1block0;

       d1_wk2_dy = (-(5.0/6.0)*wk2_B0(0,0,0) - (1.0/2.0)*wk2_B0(0,2,0) - (1.0/4.0)*wk2_B0(0,-1,0) +
            ((1.0/12.0))*wk2_B0(0,3,0) + ((3.0/2.0))*wk2_B0(0,1,0))*invDelta1block0;

       d1_wk3_dy = (-(5.0/6.0)*wk3_B0(0,0,0) - (1.0/2.0)*wk3_B0(0,2,0) - (1.0/4.0)*wk3_B0(0,-1,0) +
            ((1.0/12.0))*wk3_B0(0,3,0) + ((3.0/2.0))*wk3_B0(0,1,0))*invDelta1block0;

   }

   else{

       d1_mu_dy = (-(2.0/3.0)*mu_B0(0,-1,0) - (1.0/12.0)*mu_B0(0,2,0) + ((1.0/12.0))*mu_B0(0,-2,0) +
            ((2.0/3.0))*mu_B0(0,1,0))*invDelta1block0;

       d1_wk0_dy = (-(2.0/3.0)*wk0_B0(0,-1,0) - (1.0/12.0)*wk0_B0(0,2,0) + ((1.0/12.0))*wk0_B0(0,-2,0) +
            ((2.0/3.0))*wk0_B0(0,1,0))*invDelta1block0;

       d1_wk1_dy = (-(2.0/3.0)*wk1_B0(0,-1,0) - (1.0/12.0)*wk1_B0(0,2,0) + ((1.0/12.0))*wk1_B0(0,-2,0) +
            ((2.0/3.0))*wk1_B0(0,1,0))*invDelta1block0;

       d1_wk2_dy = (-(2.0/3.0)*wk2_B0(0,-1,0) - (1.0/12.0)*wk2_B0(0,2,0) + ((1.0/12.0))*wk2_B0(0,-2,0) +
            ((2.0/3.0))*wk2_B0(0,1,0))*invDelta1block0;

       d1_wk3_dy = (-(2.0/3.0)*wk3_B0(0,-1,0) - (1.0/12.0)*wk3_B0(0,2,0) + ((1.0/12.0))*wk3_B0(0,-2,0) +
            ((2.0/3.0))*wk3_B0(0,1,0))*invDelta1block0;

   }

   if (idx[1] == 0){

       d2_T_dy = (-(26.0/3.0)*T_B0(0,1,0) - (14.0/3.0)*T_B0(0,3,0) + ((11.0/12.0))*T_B0(0,4,0) +
            ((19.0/2.0))*T_B0(0,2,0) + ((35.0/12.0))*T_B0(0,0,0))*inv2Delta1block0;

       d2_u0_dy = (-(26.0/3.0)*u0_B0(0,1,0) - (14.0/3.0)*u0_B0(0,3,0) + ((11.0/12.0))*u0_B0(0,4,0) +
            ((19.0/2.0))*u0_B0(0,2,0) + ((35.0/12.0))*u0_B0(0,0,0))*inv2Delta1block0;

       d2_u1_dy = (-(26.0/3.0)*u1_B0(0,1,0) - (14.0/3.0)*u1_B0(0,3,0) + ((11.0/12.0))*u1_B0(0,4,0) +
            ((19.0/2.0))*u1_B0(0,2,0) + ((35.0/12.0))*u1_B0(0,0,0))*inv2Delta1block0;

       d2_u2_dy = (-(26.0/3.0)*u2_B0(0,1,0) - (14.0/3.0)*u2_B0(0,3,0) + ((11.0/12.0))*u2_B0(0,4,0) +
            ((19.0/2.0))*u2_B0(0,2,0) + ((35.0/12.0))*u2_B0(0,0,0))*inv2Delta1block0;

   }

   else if (idx[1] == 1){

       d2_T_dy = (((1.0/2.0))*T_B0(0,1,0) - (5.0/3.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,3,0) + ((1.0/3.0))*T_B0(0,2,0) +
            ((11.0/12.0))*T_B0(0,-1,0))*inv2Delta1block0;

       d2_u0_dy = (((1.0/2.0))*u0_B0(0,1,0) - (5.0/3.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,3,0) +
            ((1.0/3.0))*u0_B0(0,2,0) + ((11.0/12.0))*u0_B0(0,-1,0))*inv2Delta1block0;

       d2_u1_dy = (((1.0/2.0))*u1_B0(0,1,0) - (5.0/3.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,3,0) +
            ((1.0/3.0))*u1_B0(0,2,0) + ((11.0/12.0))*u1_B0(0,-1,0))*inv2Delta1block0;

       d2_u2_dy = (((1.0/2.0))*u2_B0(0,1,0) - (5.0/3.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,3,0) +
            ((1.0/3.0))*u2_B0(0,2,0) + ((11.0/12.0))*u2_B0(0,-1,0))*inv2Delta1block0;

   }

   else{

       d2_T_dy = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,-2,0) - (1.0/12.0)*T_B0(0,2,0) + ((4.0/3.0))*T_B0(0,1,0) +
            ((4.0/3.0))*T_B0(0,-1,0))*inv2Delta1block0;

       d2_u0_dy = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,-2,0) - (1.0/12.0)*u0_B0(0,2,0) +
            ((4.0/3.0))*u0_B0(0,1,0) + ((4.0/3.0))*u0_B0(0,-1,0))*inv2Delta1block0;

       d2_u1_dy = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,-2,0) - (1.0/12.0)*u1_B0(0,2,0) +
            ((4.0/3.0))*u1_B0(0,1,0) + ((4.0/3.0))*u1_B0(0,-1,0))*inv2Delta1block0;

       d2_u2_dy = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,-2,0) - (1.0/12.0)*u2_B0(0,2,0) +
            ((4.0/3.0))*u2_B0(0,1,0) + ((4.0/3.0))*u2_B0(0,-1,0))*inv2Delta1block0;

   }

    d2_T_dz = (-(5.0/2.0)*T_B0(0,0,0) - (1.0/12.0)*T_B0(0,0,-2) - (1.0/12.0)*T_B0(0,0,2) + ((4.0/3.0))*T_B0(0,0,1) +
      ((4.0/3.0))*T_B0(0,0,-1))*inv2Delta2block0;

    d1_mu_dz = (-(2.0/3.0)*mu_B0(0,0,-1) - (1.0/12.0)*mu_B0(0,0,2) + ((1.0/12.0))*mu_B0(0,0,-2) +
      ((2.0/3.0))*mu_B0(0,0,1))*invDelta2block0;

    d2_u0_dz = (-(5.0/2.0)*u0_B0(0,0,0) - (1.0/12.0)*u0_B0(0,0,-2) - (1.0/12.0)*u0_B0(0,0,2) + ((4.0/3.0))*u0_B0(0,0,1)
      + ((4.0/3.0))*u0_B0(0,0,-1))*inv2Delta2block0;

    d2_u1_dz = (-(5.0/2.0)*u1_B0(0,0,0) - (1.0/12.0)*u1_B0(0,0,-2) - (1.0/12.0)*u1_B0(0,0,2) + ((4.0/3.0))*u1_B0(0,0,1)
      + ((4.0/3.0))*u1_B0(0,0,-1))*inv2Delta2block0;

    d2_u2_dz = (-(5.0/2.0)*u2_B0(0,0,0) - (1.0/12.0)*u2_B0(0,0,-2) - (1.0/12.0)*u2_B0(0,0,2) + ((4.0/3.0))*u2_B0(0,0,1)
      + ((4.0/3.0))*u2_B0(0,0,-1))*inv2Delta2block0;

    d1_wk0_dz = (-(2.0/3.0)*wk0_B0(0,0,-1) - (1.0/12.0)*wk0_B0(0,0,2) + ((1.0/12.0))*wk0_B0(0,0,-2) +
      ((2.0/3.0))*wk0_B0(0,0,1))*invDelta2block0;

    d1_wk1_dz = (-(2.0/3.0)*wk1_B0(0,0,-1) - (1.0/12.0)*wk1_B0(0,0,2) + ((1.0/12.0))*wk1_B0(0,0,-2) +
      ((2.0/3.0))*wk1_B0(0,0,1))*invDelta2block0;

    d1_wk2_dz = (-(2.0/3.0)*wk2_B0(0,0,-1) - (1.0/12.0)*wk2_B0(0,0,2) + ((1.0/12.0))*wk2_B0(0,0,-2) +
      ((2.0/3.0))*wk2_B0(0,0,1))*invDelta2block0;

    d1_wk4_dz = (-(2.0/3.0)*wk4_B0(0,0,-1) - (1.0/12.0)*wk4_B0(0,0,2) + ((1.0/12.0))*wk4_B0(0,0,-2) +
      ((2.0/3.0))*wk4_B0(0,0,1))*invDelta2block0;

    d1_wk5_dz = (-(2.0/3.0)*wk5_B0(0,0,-1) - (1.0/12.0)*wk5_B0(0,0,2) + ((1.0/12.0))*wk5_B0(0,0,-2) +
      ((2.0/3.0))*wk5_B0(0,0,1))*invDelta2block0;

    d1_wk6_dz = (-(2.0/3.0)*wk6_B0(0,0,-1) - (1.0/12.0)*wk6_B0(0,0,2) + ((1.0/12.0))*wk6_B0(0,0,-2) +
      ((2.0/3.0))*wk6_B0(0,0,1))*invDelta2block0;

    Residual1_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe + (D01_B0(0,0,0)*d1_mu_dx
      + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0)
      + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe + (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) +
      wk8_B0(0,0,0))*invRe*d1_mu_dz + ((D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk6_dz +
      ((4.0/3.0))*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + ((4.0/3.0))*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy - (2.0/3.0)*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy + ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0)
      + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((8.0/3.0))*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      d2_u0_dz)*invRe*mu_B0(0,0,0) + Residual1_B0(0,0,0);

    Residual2_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe +
      (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*d1_mu_dz +
      ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy +
      ((1.0/3.0))*D01_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D11_B0(0,0,0)*d1_wk6_dz +
      ((4.0/3.0))*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx + ((4.0/3.0))*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy +
      D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy - (2.0/3.0)*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) -
      (2.0/3.0)*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy + ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0)
      + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((8.0/3.0))*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      d2_u1_dz)*invRe*mu_B0(0,0,0) + Residual2_B0(0,0,0);

    Residual3_B0(0,0,0) = (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*d1_mu_dz +
      (((4.0/3.0))*d2_u2_dz + (D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk0_dz + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk1_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk4_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk5_dz + D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0) + Residual3_B0(0,0,0);

    Residual4_B0(0,0,0) = (D00_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0))*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D00_B0(0,0,0)*wk1_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0))*(D00_B0(0,0,0)*wk2_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx +
      D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) +
      wk8_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u1_B0(0,0,0) +
      (D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) +
      (D01_B0(0,0,0)*wk0_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*(D00_B0(0,0,0)*wk1_B0(0,0,0) +
      D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D01_B0(0,0,0)*wk1_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0))*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*mu_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0))*(D01_B0(0,0,0)*wk2_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*(D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) +
      wk9_B0(0,0,0))*invRe*u2_B0(0,0,0) + (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(D00_B0(0,0,0)*wk1_B0(0,0,0)
      + D01_B0(0,0,0)*wk0_B0(0,0,0) + D10_B0(0,0,0)*wk5_B0(0,0,0) + D11_B0(0,0,0)*wk4_B0(0,0,0))*invRe*u0_B0(0,0,0) +
      (D01_B0(0,0,0)*d1_mu_dx + D11_B0(0,0,0)*d1_mu_dy)*(-(2.0/3.0)*wk10_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0) + ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*u1_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk8_B0(0,0,0) +
      (D00_B0(0,0,0)*wk2_B0(0,0,0) + D10_B0(0,0,0)*wk6_B0(0,0,0) + wk8_B0(0,0,0))*invRe*u0_B0(0,0,0)*d1_mu_dz +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk9_B0(0,0,0) +
      (D01_B0(0,0,0)*wk2_B0(0,0,0) + D11_B0(0,0,0)*wk6_B0(0,0,0) + wk9_B0(0,0,0))*invRe*u1_B0(0,0,0)*d1_mu_dz +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*mu_B0(0,0,0)*wk10_B0(0,0,0) +
      (((4.0/3.0))*wk10_B0(0,0,0) - (2.0/3.0)*D00_B0(0,0,0)*wk0_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk1_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk4_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk5_B0(0,0,0))*invRe*u2_B0(0,0,0)*d1_mu_dz +
      (((4.0/3.0))*d2_u2_dz + (D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u2_dx + (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u2_dx +
      (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u2_dy + (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u2_dy +
      ((1.0/3.0))*D00_B0(0,0,0)*d1_wk0_dz + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk1_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk4_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk5_dz + D00_B0(0,0,0)*wk2_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk6_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk2_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk6_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk2_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk6_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk2_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk6_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk2_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk2_dy)*invRe*mu_B0(0,0,0)*u2_B0(0,0,0) + ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u1_dx
      + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u1_dy + ((1.0/3.0))*D01_B0(0,0,0)*d1_wk2_dz +
      ((1.0/3.0))*D11_B0(0,0,0)*d1_wk6_dz + ((4.0/3.0))*(D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u1_dx +
      ((4.0/3.0))*(D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u1_dy + D00_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) +
      D00_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) + D00_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) +
      D00_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) + D10_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) +
      D10_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) + D10_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) +
      D10_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy -
      (2.0/3.0)*D01_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) - (2.0/3.0)*D01_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) -
      (2.0/3.0)*D11_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0) - (2.0/3.0)*D11_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) +
      ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u0_dx + ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy +
      ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy + ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u0_dy +
      ((4.0/3.0))*D01_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) + ((4.0/3.0))*D01_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0)
      + ((4.0/3.0))*D11_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) +
      ((4.0/3.0))*D11_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((8.0/3.0))*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy +
      d2_u1_dz)*invRe*mu_B0(0,0,0)*u1_B0(0,0,0) + ((D01_B0(0,0,0)*D01_B0(0,0,0))*d2_u0_dx +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_u0_dy + ((1.0/3.0))*D00_B0(0,0,0)*d1_wk2_dz + ((1.0/3.0))*D10_B0(0,0,0)*d1_wk6_dz
      + ((4.0/3.0))*(D00_B0(0,0,0)*D00_B0(0,0,0))*d2_u0_dx + ((4.0/3.0))*(D10_B0(0,0,0)*D10_B0(0,0,0))*d2_u0_dy +
      D01_B0(0,0,0)*wk0_B0(0,0,0)*SD010_B0(0,0,0) + D01_B0(0,0,0)*wk1_B0(0,0,0)*SD000_B0(0,0,0) +
      D01_B0(0,0,0)*wk4_B0(0,0,0)*SD110_B0(0,0,0) + D01_B0(0,0,0)*wk5_B0(0,0,0)*SD100_B0(0,0,0) +
      D11_B0(0,0,0)*wk0_B0(0,0,0)*SD011_B0(0,0,0) + D11_B0(0,0,0)*wk1_B0(0,0,0)*SD001_B0(0,0,0) +
      D11_B0(0,0,0)*wk4_B0(0,0,0)*SD111_B0(0,0,0) + D11_B0(0,0,0)*wk5_B0(0,0,0)*SD101_B0(0,0,0) +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk0_dy - (2.0/3.0)*D00_B0(0,0,0)*wk1_B0(0,0,0)*SD010_B0(0,0,0) -
      (2.0/3.0)*D00_B0(0,0,0)*wk5_B0(0,0,0)*SD110_B0(0,0,0) - (2.0/3.0)*D10_B0(0,0,0)*wk1_B0(0,0,0)*SD011_B0(0,0,0) -
      (2.0/3.0)*D10_B0(0,0,0)*wk5_B0(0,0,0)*SD111_B0(0,0,0) + ((1.0/3.0))*D00_B0(0,0,0)*D01_B0(0,0,0)*d2_u1_dx +
      ((1.0/3.0))*D00_B0(0,0,0)*D11_B0(0,0,0)*d1_wk1_dy + ((1.0/3.0))*D01_B0(0,0,0)*D10_B0(0,0,0)*d1_wk1_dy +
      ((1.0/3.0))*D10_B0(0,0,0)*D11_B0(0,0,0)*d2_u1_dy + ((4.0/3.0))*D00_B0(0,0,0)*wk0_B0(0,0,0)*SD000_B0(0,0,0) +
      ((4.0/3.0))*D00_B0(0,0,0)*wk4_B0(0,0,0)*SD100_B0(0,0,0) + ((4.0/3.0))*D10_B0(0,0,0)*wk0_B0(0,0,0)*SD001_B0(0,0,0)
      + ((4.0/3.0))*D10_B0(0,0,0)*wk4_B0(0,0,0)*SD101_B0(0,0,0) + ((8.0/3.0))*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk0_dy +
      d2_u0_dz)*invRe*mu_B0(0,0,0)*u0_B0(0,0,0) + (D00_B0(0,0,0)*wk3_B0(0,0,0) +
      D10_B0(0,0,0)*wk7_B0(0,0,0))*(D00_B0(0,0,0)*d1_mu_dx + D10_B0(0,0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 +
      (D01_B0(0,0,0)*wk3_B0(0,0,0) + D11_B0(0,0,0)*wk7_B0(0,0,0))*(D01_B0(0,0,0)*d1_mu_dx +
      D11_B0(0,0,0)*d1_mu_dy)*invPr*invRe*inv2Minf*inv_gamma_m1 + ((D00_B0(0,0,0)*D00_B0(0,0,0))*d2_T_dx +
      (D01_B0(0,0,0)*D01_B0(0,0,0))*d2_T_dx + (D10_B0(0,0,0)*D10_B0(0,0,0))*d2_T_dy +
      (D11_B0(0,0,0)*D11_B0(0,0,0))*d2_T_dy + D00_B0(0,0,0)*wk3_B0(0,0,0)*SD000_B0(0,0,0) +
      D00_B0(0,0,0)*wk7_B0(0,0,0)*SD100_B0(0,0,0) + D01_B0(0,0,0)*wk3_B0(0,0,0)*SD010_B0(0,0,0) +
      D01_B0(0,0,0)*wk7_B0(0,0,0)*SD110_B0(0,0,0) + D10_B0(0,0,0)*wk3_B0(0,0,0)*SD001_B0(0,0,0) +
      D10_B0(0,0,0)*wk7_B0(0,0,0)*SD101_B0(0,0,0) + D11_B0(0,0,0)*wk3_B0(0,0,0)*SD011_B0(0,0,0) +
      D11_B0(0,0,0)*wk7_B0(0,0,0)*SD111_B0(0,0,0) + 2*D00_B0(0,0,0)*D10_B0(0,0,0)*d1_wk3_dy +
      2*D01_B0(0,0,0)*D11_B0(0,0,0)*d1_wk3_dy + d2_T_dz)*invPr*invRe*inv2Minf*inv_gamma_m1*mu_B0(0,0,0) +
      invPr*invRe*inv2Minf*inv_gamma_m1*wk11_B0(0,0,0)*d1_mu_dz + Residual4_B0(0,0,0);


            }
        }
    }

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[37].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 34);
    ops_set_halo_dirtybit3(&args[29], range);
    ops_set_halo_dirtybit3(&args[30], range);
    ops_set_halo_dirtybit3(&args[31], range);
    ops_set_halo_dirtybit3(&args[32], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[37].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg0);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg1);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg2);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg3);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg4);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg5);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg6);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg7);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg8);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg9);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg10);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg11);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg12);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg13);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg14);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg15);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg16);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg17);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg18);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg19);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg20);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg21);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg22);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg23);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg24);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg25);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg26);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg27);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg28);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg29);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg30);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg31);
        block->instance->OPS_kernels[37].transfer += ops_compute_transfer(dim, start, end, &arg32);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel056(
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
    ops_arg arg20,
    ops_arg arg21,
    ops_arg arg22,
    ops_arg arg23,
    ops_arg arg24,
    ops_arg arg25,
    ops_arg arg26,
    ops_arg arg27,
    ops_arg arg28,
    ops_arg arg29,
    ops_arg arg30,
    ops_arg arg31,
    ops_arg arg32,
    ops_arg arg33
)
{
    ops_arg args[34];

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
    args[21] = arg21;
    args[22] = arg22;
    args[23] = arg23;
    args[24] = arg24;
    args[25] = arg25;
    args[26] = arg26;
    args[27] = arg27;
    args[28] = arg28;
    args[29] = arg29;
    args[30] = arg30;
    args[31] = arg31;
    args[32] = arg32;
    args[33] = arg33;

    create_kerneldesc_and_enque("opensbliblock00Kernel056", args, 34, 37, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel056_execute);
}
#endif
