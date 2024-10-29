// Auto-generated at 2024-10-10 09:28:37.168210 by ops-translator legacy

__constant__ int dims_opensbliblock00Kernel071 [5][2];
static int dims_opensbliblock00Kernel071_h [5][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void opensbliblock00Kernel071_gpu(ACC<double> &D00_B0,
  ACC<double> &D01_B0,
  ACC<double> &D10_B0,
  ACC<double> &D11_B0,
  ACC<double> &detJ_B0)
{
   D00_B0(-1,0,0) = D00_B0(1,0,0);

   D01_B0(-1,0,0) = D01_B0(1,0,0);

   D10_B0(-1,0,0) = D10_B0(1,0,0);

   D11_B0(-1,0,0) = D11_B0(1,0,0);

   detJ_B0(-1,0,0) = detJ_B0(1,0,0);

   D00_B0(-2,0,0) = D00_B0(2,0,0);

   D01_B0(-2,0,0) = D01_B0(2,0,0);

   D10_B0(-2,0,0) = D10_B0(2,0,0);

   D11_B0(-2,0,0) = D11_B0(2,0,0);

   detJ_B0(-2,0,0) = detJ_B0(2,0,0);

   D00_B0(-3,0,0) = D00_B0(3,0,0);

   D01_B0(-3,0,0) = D01_B0(3,0,0);

   D10_B0(-3,0,0) = D10_B0(3,0,0);

   D11_B0(-3,0,0) = D11_B0(3,0,0);

   detJ_B0(-3,0,0) = detJ_B0(3,0,0);

   D00_B0(-4,0,0) = D00_B0(4,0,0);

   D01_B0(-4,0,0) = D01_B0(4,0,0);

   D10_B0(-4,0,0) = D10_B0(4,0,0);

   D11_B0(-4,0,0) = D11_B0(4,0,0);

   detJ_B0(-4,0,0) = detJ_B0(4,0,0);

}


//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_opensbliblock00Kernel071(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
int size0,
int size1,
int size2) {
    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel071[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel071[0][0] * dims_opensbliblock00Kernel071[0][1];
    arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel071[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel071[1][0] * dims_opensbliblock00Kernel071[1][1];
    arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel071[2][0] + idx_z * 1*1 * dims_opensbliblock00Kernel071[2][0] * dims_opensbliblock00Kernel071[2][1];
    arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel071[3][0] + idx_z * 1*1 * dims_opensbliblock00Kernel071[3][0] * dims_opensbliblock00Kernel071[3][1];
    arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel071[4][0] + idx_z * 1*1 * dims_opensbliblock00Kernel071[4][0] * dims_opensbliblock00Kernel071[4][1];

    if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
        ACC<double> argp0(dims_opensbliblock00Kernel071[0][0], dims_opensbliblock00Kernel071[0][1], arg0);
        ACC<double> argp1(dims_opensbliblock00Kernel071[1][0], dims_opensbliblock00Kernel071[1][1], arg1);
        ACC<double> argp2(dims_opensbliblock00Kernel071[2][0], dims_opensbliblock00Kernel071[2][1], arg2);
        ACC<double> argp3(dims_opensbliblock00Kernel071[3][0], dims_opensbliblock00Kernel071[3][1], arg3);
        ACC<double> argp4(dims_opensbliblock00Kernel071[4][0], dims_opensbliblock00Kernel071[4][1], arg4);
        opensbliblock00Kernel071_gpu(
         argp0, argp1, argp2, argp3, argp4);
    }

} //End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel071(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4) {
#else
void ops_par_loop_opensbliblock00Kernel071_execute(ops_kernel_descriptor *desc) {
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

#if CHECKPOINTING && !OPS_LAZY
    if (!ops_checkpointing_before(args, 5, range, 2)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 2, "opensbliblock00Kernel071");
        block->instance->OPS_kernels[2].count++;
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
    if (compute_ranges(args, 5, block, range, start_indx, end_indx, arg_idx) < 0) return;
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

    if (xdim0 != dims_opensbliblock00Kernel071_h[0][0] || ydim0 != dims_opensbliblock00Kernel071_h[0][1] || xdim1 != dims_opensbliblock00Kernel071_h[1][0] || ydim1 != dims_opensbliblock00Kernel071_h[1][1] || xdim2 != dims_opensbliblock00Kernel071_h[2][0] || ydim2 != dims_opensbliblock00Kernel071_h[2][1] || xdim3 != dims_opensbliblock00Kernel071_h[3][0] || ydim3 != dims_opensbliblock00Kernel071_h[3][1] || xdim4 != dims_opensbliblock00Kernel071_h[4][0] || ydim4 != dims_opensbliblock00Kernel071_h[4][1]) {
        dims_opensbliblock00Kernel071_h[0][0] = xdim0;
        dims_opensbliblock00Kernel071_h[0][1] = ydim0;
        dims_opensbliblock00Kernel071_h[1][0] = xdim1;
        dims_opensbliblock00Kernel071_h[1][1] = ydim1;
        dims_opensbliblock00Kernel071_h[2][0] = xdim2;
        dims_opensbliblock00Kernel071_h[2][1] = ydim2;
        dims_opensbliblock00Kernel071_h[3][0] = xdim3;
        dims_opensbliblock00Kernel071_h[3][1] = ydim3;
        dims_opensbliblock00Kernel071_h[4][0] = xdim4;
        dims_opensbliblock00Kernel071_h[4][1] = ydim4;

        hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel071, dims_opensbliblock00Kernel071_h, sizeof(dims_opensbliblock00Kernel071)));
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

    char *p_a[5];

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

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 5);
    ops_halo_exchanges(args, 5, range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[2].mpi_time += __t2 - __t1;
    }


//call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_opensbliblock00Kernel071<<<grid, tblock >>> ( 
         (double *)p_a[0], (double *)p_a[1],
         (double *)p_a[2], (double *)p_a[3],
         (double *)p_a[4],
        x_size, y_size, z_size);

    }

    hipSafeCall(block->instance->ostream(), hipGetLastError());

    if (block->instance->OPS_diags>1) {
        hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[2].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 5);
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
        block->instance->OPS_kernels[2].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[2].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[2].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
        block->instance->OPS_kernels[2].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg2);
        block->instance->OPS_kernels[2].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg3);
        block->instance->OPS_kernels[2].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg4);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel071(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4)
{
    ops_arg args[5];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;

    create_kerneldesc_and_enque("opensbliblock00Kernel071", args, 5, 2, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel071_execute);
}
#endif
