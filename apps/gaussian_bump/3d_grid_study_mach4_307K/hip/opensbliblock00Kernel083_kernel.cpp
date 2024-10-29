// Auto-generated at 2024-10-10 09:28:38.108687 by ops-translator legacy

__constant__ int dims_opensbliblock00Kernel083 [11][2];
static int dims_opensbliblock00Kernel083_h [11][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void opensbliblock00Kernel083_gpu(ACC<double> &E_mean_B0,
  ACC<double> &rhomean_B0,
  ACC<double> &rhou0mean_B0,
  ACC<double>
&rhou0u0mean_B0,
  ACC<double> &rhou0u1mean_B0,
  ACC<double> &rhou0u2mean_B0,
  ACC<double> &rhou1mean_B0,
  ACC<double>
&rhou1u1mean_B0,
  ACC<double> &rhou1u2mean_B0,
  ACC<double> &rhou2mean_B0,
  ACC<double> &rhou2u2mean_B0)
{
   rhomean_B0(0,0,0) = invnsamples*rhomean_B0(0,0,0);

   rhou0mean_B0(0,0,0) = invnsamples*rhou0mean_B0(0,0,0);

   rhou1mean_B0(0,0,0) = invnsamples*rhou1mean_B0(0,0,0);

   rhou2mean_B0(0,0,0) = invnsamples*rhou2mean_B0(0,0,0);

   E_mean_B0(0,0,0) = invnsamples*E_mean_B0(0,0,0);

   rhou0u0mean_B0(0,0,0) = invnsamples*rhou0u0mean_B0(0,0,0);

   rhou0u1mean_B0(0,0,0) = invnsamples*rhou0u1mean_B0(0,0,0);

   rhou1u1mean_B0(0,0,0) = invnsamples*rhou1u1mean_B0(0,0,0);

   rhou0u2mean_B0(0,0,0) = invnsamples*rhou0u2mean_B0(0,0,0);

   rhou1u2mean_B0(0,0,0) = invnsamples*rhou1u2mean_B0(0,0,0);

   rhou2u2mean_B0(0,0,0) = invnsamples*rhou2u2mean_B0(0,0,0);

}


//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_opensbliblock00Kernel083(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
double* __restrict arg5,
double* __restrict arg6,
double* __restrict arg7,
double* __restrict arg8,
double* __restrict arg9,
double* __restrict arg10,
int size0,
int size1,
int size2) {
    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[0][0] * dims_opensbliblock00Kernel083[0][1];
    arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[1][0] * dims_opensbliblock00Kernel083[1][1];
    arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[2][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[2][0] * dims_opensbliblock00Kernel083[2][1];
    arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[3][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[3][0] * dims_opensbliblock00Kernel083[3][1];
    arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[4][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[4][0] * dims_opensbliblock00Kernel083[4][1];
    arg5 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[5][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[5][0] * dims_opensbliblock00Kernel083[5][1];
    arg6 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[6][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[6][0] * dims_opensbliblock00Kernel083[6][1];
    arg7 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[7][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[7][0] * dims_opensbliblock00Kernel083[7][1];
    arg8 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[8][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[8][0] * dims_opensbliblock00Kernel083[8][1];
    arg9 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[9][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[9][0] * dims_opensbliblock00Kernel083[9][1];
    arg10 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel083[10][0] + idx_z * 1*1 * dims_opensbliblock00Kernel083[10][0] * dims_opensbliblock00Kernel083[10][1];

    if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
        ACC<double> argp0(dims_opensbliblock00Kernel083[0][0], dims_opensbliblock00Kernel083[0][1], arg0);
        ACC<double> argp1(dims_opensbliblock00Kernel083[1][0], dims_opensbliblock00Kernel083[1][1], arg1);
        ACC<double> argp2(dims_opensbliblock00Kernel083[2][0], dims_opensbliblock00Kernel083[2][1], arg2);
        ACC<double> argp3(dims_opensbliblock00Kernel083[3][0], dims_opensbliblock00Kernel083[3][1], arg3);
        ACC<double> argp4(dims_opensbliblock00Kernel083[4][0], dims_opensbliblock00Kernel083[4][1], arg4);
        ACC<double> argp5(dims_opensbliblock00Kernel083[5][0], dims_opensbliblock00Kernel083[5][1], arg5);
        ACC<double> argp6(dims_opensbliblock00Kernel083[6][0], dims_opensbliblock00Kernel083[6][1], arg6);
        ACC<double> argp7(dims_opensbliblock00Kernel083[7][0], dims_opensbliblock00Kernel083[7][1], arg7);
        ACC<double> argp8(dims_opensbliblock00Kernel083[8][0], dims_opensbliblock00Kernel083[8][1], arg8);
        ACC<double> argp9(dims_opensbliblock00Kernel083[9][0], dims_opensbliblock00Kernel083[9][1], arg9);
        ACC<double> argp10(dims_opensbliblock00Kernel083[10][0], dims_opensbliblock00Kernel083[10][1], arg10);
        opensbliblock00Kernel083_gpu(
         argp0, argp1, argp2, argp3, argp4,
         argp5, argp6, argp7, argp8, argp9,
         argp10);
    }

} //End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel083(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10) {
#else
void ops_par_loop_opensbliblock00Kernel083_execute(ops_kernel_descriptor *desc) {
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

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[11];

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

#if CHECKPOINTING && !OPS_LAZY
    if (!ops_checkpointing_before(args, 11, range, 151)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 151, "opensbliblock00Kernel083");
        block->instance->OPS_kernels[151].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
#ifdef OPS_MPI
    int arg_idx[3];
#endif

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 11, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

    int xdim0 = args[0].dat->size[0];
    int ydim0 = args[0].dat->size[1];
    int xdim1 = args[1].dat->size[0];
    int ydim1 = args[1].dat->size[1];
    int xdim2 = args[2].dat->size[0];
    int ydim2 = args[2].dat->size[1];
    int xdim3 = args[3].dat->size[0];
    int ydim3 = args[3].dat->size[1];
    int xdim4 = args[4].dat->size[0];
    int ydim4 = args[4].dat->size[1];
    int xdim5 = args[5].dat->size[0];
    int ydim5 = args[5].dat->size[1];
    int xdim6 = args[6].dat->size[0];
    int ydim6 = args[6].dat->size[1];
    int xdim7 = args[7].dat->size[0];
    int ydim7 = args[7].dat->size[1];
    int xdim8 = args[8].dat->size[0];
    int ydim8 = args[8].dat->size[1];
    int xdim9 = args[9].dat->size[0];
    int ydim9 = args[9].dat->size[1];
    int xdim10 = args[10].dat->size[0];
    int ydim10 = args[10].dat->size[1];

    if (xdim0 != dims_opensbliblock00Kernel083_h[0][0] || ydim0 != dims_opensbliblock00Kernel083_h[0][1] || xdim1 != dims_opensbliblock00Kernel083_h[1][0] || ydim1 != dims_opensbliblock00Kernel083_h[1][1] || xdim2 != dims_opensbliblock00Kernel083_h[2][0] || ydim2 != dims_opensbliblock00Kernel083_h[2][1] || xdim3 != dims_opensbliblock00Kernel083_h[3][0] || ydim3 != dims_opensbliblock00Kernel083_h[3][1] || xdim4 != dims_opensbliblock00Kernel083_h[4][0] || ydim4 != dims_opensbliblock00Kernel083_h[4][1] || xdim5 != dims_opensbliblock00Kernel083_h[5][0] || ydim5 != dims_opensbliblock00Kernel083_h[5][1] || xdim6 != dims_opensbliblock00Kernel083_h[6][0] || ydim6 != dims_opensbliblock00Kernel083_h[6][1] || xdim7 != dims_opensbliblock00Kernel083_h[7][0] || ydim7 != dims_opensbliblock00Kernel083_h[7][1] || xdim8 != dims_opensbliblock00Kernel083_h[8][0] || ydim8 != dims_opensbliblock00Kernel083_h[8][1] || xdim9 != dims_opensbliblock00Kernel083_h[9][0] || ydim9 != dims_opensbliblock00Kernel083_h[9][1] || xdim10 != dims_opensbliblock00Kernel083_h[10][0] || ydim10 != dims_opensbliblock00Kernel083_h[10][1]) {
        dims_opensbliblock00Kernel083_h[0][0] = xdim0;
        dims_opensbliblock00Kernel083_h[0][1] = ydim0;
        dims_opensbliblock00Kernel083_h[1][0] = xdim1;
        dims_opensbliblock00Kernel083_h[1][1] = ydim1;
        dims_opensbliblock00Kernel083_h[2][0] = xdim2;
        dims_opensbliblock00Kernel083_h[2][1] = ydim2;
        dims_opensbliblock00Kernel083_h[3][0] = xdim3;
        dims_opensbliblock00Kernel083_h[3][1] = ydim3;
        dims_opensbliblock00Kernel083_h[4][0] = xdim4;
        dims_opensbliblock00Kernel083_h[4][1] = ydim4;
        dims_opensbliblock00Kernel083_h[5][0] = xdim5;
        dims_opensbliblock00Kernel083_h[5][1] = ydim5;
        dims_opensbliblock00Kernel083_h[6][0] = xdim6;
        dims_opensbliblock00Kernel083_h[6][1] = ydim6;
        dims_opensbliblock00Kernel083_h[7][0] = xdim7;
        dims_opensbliblock00Kernel083_h[7][1] = ydim7;
        dims_opensbliblock00Kernel083_h[8][0] = xdim8;
        dims_opensbliblock00Kernel083_h[8][1] = ydim8;
        dims_opensbliblock00Kernel083_h[9][0] = xdim9;
        dims_opensbliblock00Kernel083_h[9][1] = ydim9;
        dims_opensbliblock00Kernel083_h[10][0] = xdim10;
        dims_opensbliblock00Kernel083_h[10][1] = ydim10;

        hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel083, dims_opensbliblock00Kernel083_h, sizeof(dims_opensbliblock00Kernel083)));
    }


    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z +1);
    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
    long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
    long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
    long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
    long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);
    long long int dat6 = (block->instance->OPS_soa ? args[6].dat->type_size : args[6].dat->elem_size);
    long long int dat7 = (block->instance->OPS_soa ? args[7].dat->type_size : args[7].dat->elem_size);
    long long int dat8 = (block->instance->OPS_soa ? args[8].dat->type_size : args[8].dat->elem_size);
    long long int dat9 = (block->instance->OPS_soa ? args[9].dat->type_size : args[9].dat->elem_size);
    long long int dat10 = (block->instance->OPS_soa ? args[10].dat->type_size : args[10].dat->elem_size);

    char *p_a[11];

//  =======================
//  set up initial pointers
//  =======================
    long long int base0 = args[0].dat->base_offset + 
             dat0 * 1 * (start_indx[0] * args[0].stencil->stride[0]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                      (start_indx[1] * args[0].stencil->stride[1]);
    base0 = base0 + dat0 *
                       args[0].dat->size[0] *
                       args[0].dat->size[1] *
                      (start_indx[2] * args[0].stencil->stride[2]);
    p_a[0] = (char *)args[0].data_d + base0;

    long long int base1 = args[1].dat->base_offset + 
             dat1 * 1 * (start_indx[0] * args[1].stencil->stride[0]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                      (start_indx[1] * args[1].stencil->stride[1]);
    base1 = base1 + dat1 *
                       args[1].dat->size[0] *
                       args[1].dat->size[1] *
                      (start_indx[2] * args[1].stencil->stride[2]);
    p_a[1] = (char *)args[1].data_d + base1;

    long long int base2 = args[2].dat->base_offset + 
             dat2 * 1 * (start_indx[0] * args[2].stencil->stride[0]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                      (start_indx[1] * args[2].stencil->stride[1]);
    base2 = base2 + dat2 *
                       args[2].dat->size[0] *
                       args[2].dat->size[1] *
                      (start_indx[2] * args[2].stencil->stride[2]);
    p_a[2] = (char *)args[2].data_d + base2;

    long long int base3 = args[3].dat->base_offset + 
             dat3 * 1 * (start_indx[0] * args[3].stencil->stride[0]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                      (start_indx[1] * args[3].stencil->stride[1]);
    base3 = base3 + dat3 *
                       args[3].dat->size[0] *
                       args[3].dat->size[1] *
                      (start_indx[2] * args[3].stencil->stride[2]);
    p_a[3] = (char *)args[3].data_d + base3;

    long long int base4 = args[4].dat->base_offset + 
             dat4 * 1 * (start_indx[0] * args[4].stencil->stride[0]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                      (start_indx[1] * args[4].stencil->stride[1]);
    base4 = base4 + dat4 *
                       args[4].dat->size[0] *
                       args[4].dat->size[1] *
                      (start_indx[2] * args[4].stencil->stride[2]);
    p_a[4] = (char *)args[4].data_d + base4;

    long long int base5 = args[5].dat->base_offset + 
             dat5 * 1 * (start_indx[0] * args[5].stencil->stride[0]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                      (start_indx[1] * args[5].stencil->stride[1]);
    base5 = base5 + dat5 *
                       args[5].dat->size[0] *
                       args[5].dat->size[1] *
                      (start_indx[2] * args[5].stencil->stride[2]);
    p_a[5] = (char *)args[5].data_d + base5;

    long long int base6 = args[6].dat->base_offset + 
             dat6 * 1 * (start_indx[0] * args[6].stencil->stride[0]);
    base6 = base6 + dat6 *
                       args[6].dat->size[0] *
                      (start_indx[1] * args[6].stencil->stride[1]);
    base6 = base6 + dat6 *
                       args[6].dat->size[0] *
                       args[6].dat->size[1] *
                      (start_indx[2] * args[6].stencil->stride[2]);
    p_a[6] = (char *)args[6].data_d + base6;

    long long int base7 = args[7].dat->base_offset + 
             dat7 * 1 * (start_indx[0] * args[7].stencil->stride[0]);
    base7 = base7 + dat7 *
                       args[7].dat->size[0] *
                      (start_indx[1] * args[7].stencil->stride[1]);
    base7 = base7 + dat7 *
                       args[7].dat->size[0] *
                       args[7].dat->size[1] *
                      (start_indx[2] * args[7].stencil->stride[2]);
    p_a[7] = (char *)args[7].data_d + base7;

    long long int base8 = args[8].dat->base_offset + 
             dat8 * 1 * (start_indx[0] * args[8].stencil->stride[0]);
    base8 = base8 + dat8 *
                       args[8].dat->size[0] *
                      (start_indx[1] * args[8].stencil->stride[1]);
    base8 = base8 + dat8 *
                       args[8].dat->size[0] *
                       args[8].dat->size[1] *
                      (start_indx[2] * args[8].stencil->stride[2]);
    p_a[8] = (char *)args[8].data_d + base8;

    long long int base9 = args[9].dat->base_offset + 
             dat9 * 1 * (start_indx[0] * args[9].stencil->stride[0]);
    base9 = base9 + dat9 *
                       args[9].dat->size[0] *
                      (start_indx[1] * args[9].stencil->stride[1]);
    base9 = base9 + dat9 *
                       args[9].dat->size[0] *
                       args[9].dat->size[1] *
                      (start_indx[2] * args[9].stencil->stride[2]);
    p_a[9] = (char *)args[9].data_d + base9;

    long long int base10 = args[10].dat->base_offset + 
             dat10 * 1 * (start_indx[0] * args[10].stencil->stride[0]);
    base10 = base10 + dat10 *
                       args[10].dat->size[0] *
                      (start_indx[1] * args[10].stencil->stride[1]);
    base10 = base10 + dat10 *
                       args[10].dat->size[0] *
                       args[10].dat->size[1] *
                      (start_indx[2] * args[10].stencil->stride[2]);
    p_a[10] = (char *)args[10].data_d + base10;

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 11);
    ops_halo_exchanges(args, 11, range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[151].mpi_time += __t2 - __t1;
    }


//call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_opensbliblock00Kernel083<<<grid, tblock >>> ( 
         (double *)p_a[0], (double *)p_a[1],
         (double *)p_a[2], (double *)p_a[3],
         (double *)p_a[4], (double *)p_a[5],
         (double *)p_a[6], (double *)p_a[7],
         (double *)p_a[8], (double *)p_a[9],
         (double *)p_a[10],
        x_size, y_size, z_size);

    }

    hipSafeCall(block->instance->ostream(), hipGetLastError());

    if (block->instance->OPS_diags>1) {
        hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[151].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 11);
    ops_set_halo_dirtybit3(&args[0], range);
    ops_set_halo_dirtybit3(&args[1], range);
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
        block->instance->OPS_kernels[151].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg3);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg5);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg6);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg7);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg8);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg9);
        block->instance->OPS_kernels[151].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg10);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel083(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10)
{
    ops_arg args[11];

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

    create_kerneldesc_and_enque("opensbliblock00Kernel083", args, 11, 151, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel083_execute);
}
#endif
