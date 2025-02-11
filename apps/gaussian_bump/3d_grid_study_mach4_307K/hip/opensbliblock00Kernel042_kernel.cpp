// Auto-generated at 2024-10-10 09:28:37.395857 by ops-translator legacy

__constant__ int dims_opensbliblock00Kernel042 [3][2];
static int dims_opensbliblock00Kernel042_h [3][2] = {{0}};

//  =============
//  User function
//  =============
__device__ void opensbliblock00Kernel042_gpu(const ACC<double> &u2_B0,
  ACC<double> &wk6_B0,
  const int *idx)
{
   if (idx[1] == 0){

       wk6_B0(0,0,0) = (-3*u2_B0(0,2,0) + 4*u2_B0(0,1,0) - (25.0/12.0)*u2_B0(0,0,0) - (1.0/4.0)*u2_B0(0,4,0) +
            ((4.0/3.0))*u2_B0(0,3,0))*invDelta1block0;

   }

   else if (idx[1] == 1){

       wk6_B0(0,0,0) = (-(5.0/6.0)*u2_B0(0,0,0) - (1.0/2.0)*u2_B0(0,2,0) - (1.0/4.0)*u2_B0(0,-1,0) +
            ((1.0/12.0))*u2_B0(0,3,0) + ((3.0/2.0))*u2_B0(0,1,0))*invDelta1block0;

   }

   else{

       wk6_B0(0,0,0) = (-(2.0/3.0)*u2_B0(0,-1,0) - (1.0/12.0)*u2_B0(0,2,0) + ((1.0/12.0))*u2_B0(0,-2,0) +
            ((2.0/3.0))*u2_B0(0,1,0))*invDelta1block0;

   }

}


//  ============================
//  Cuda kernel wrapper function
//  ============================
__global__ void ops_opensbliblock00Kernel042(
double* __restrict arg0,
double* __restrict arg1,
int arg_idx0, int arg_idx1, int arg_idx2,
int size0,
int size1,
int size2) {
    int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
    int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
    int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

    int arg_idx[3];
    arg_idx[0] = arg_idx0+idx_x;
    arg_idx[1] = arg_idx1+idx_y;
    arg_idx[2] = arg_idx2+idx_z;

    arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel042[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel042[0][0] * dims_opensbliblock00Kernel042[0][1];
    arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel042[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel042[1][0] * dims_opensbliblock00Kernel042[1][1];

    if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
        const ACC<double> argp0(dims_opensbliblock00Kernel042[0][0], dims_opensbliblock00Kernel042[0][1], arg0);
        ACC<double> argp1(dims_opensbliblock00Kernel042[1][0], dims_opensbliblock00Kernel042[1][1], arg1);
        opensbliblock00Kernel042_gpu(
         argp0, argp1, arg_idx);
    }

} //End of cuda kernel wrapper function

//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel042(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel042_execute(ops_kernel_descriptor *desc) {
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

#if CHECKPOINTING && !OPS_LAZY
    if (!ops_checkpointing_before(args, 3, range, 31)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 31, "opensbliblock00Kernel042");
        block->instance->OPS_kernels[31].count++;
        ops_timers_core(&__c1, &__t1);
    }

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start_indx[3];
    int end_indx[3];
    int arg_idx[3];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start_indx[n] = range[2*n];
        end_indx[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 3, block, range, start_indx, end_indx, arg_idx) < 0) return;
#endif

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0]+start_indx[0];
    arg_idx[1] = sb->decomp_disp[1]+start_indx[1];
    arg_idx[2] = sb->decomp_disp[2]+start_indx[2];
#endif //OPS_LAZY
#else //OPS_MPI
    arg_idx[0] = start_indx[0];
    arg_idx[1] = start_indx[1];
    arg_idx[2] = start_indx[2];
#endif //OPS_MPI

    int xdim0 = args[0].dat->size[0];
    int ydim0 = args[0].dat->size[1];
    int xdim1 = args[1].dat->size[0];
    int ydim1 = args[1].dat->size[1];

    if (xdim0 != dims_opensbliblock00Kernel042_h[0][0] || ydim0 != dims_opensbliblock00Kernel042_h[0][1] || xdim1 != dims_opensbliblock00Kernel042_h[1][0] || ydim1 != dims_opensbliblock00Kernel042_h[1][1]) {
        dims_opensbliblock00Kernel042_h[0][0] = xdim0;
        dims_opensbliblock00Kernel042_h[0][1] = ydim0;
        dims_opensbliblock00Kernel042_h[1][0] = xdim1;
        dims_opensbliblock00Kernel042_h[1][1] = ydim1;

        hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel042, dims_opensbliblock00Kernel042_h, sizeof(dims_opensbliblock00Kernel042)));
    }


    int x_size = MAX(0,end_indx[0]-start_indx[0]);
    int y_size = MAX(0,end_indx[1]-start_indx[1]);
    int z_size = MAX(0,end_indx[2]-start_indx[2]);

    dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z +1);
    dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



    long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
    long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);

    char *p_a[3];

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

//  =============
//  Halo exchange
//  =============
#ifndef OPS_LAZY
    ops_H_D_exchanges_device(args, 3);
    ops_halo_exchanges(args, 3, range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[31].mpi_time += __t2 - __t1;
    }


//call kernel wrapper function, passing in pointers to data
    if (x_size > 0 && y_size > 0 && z_size > 0) {

        ops_opensbliblock00Kernel042<<<grid, tblock >>> ( 
         (double *)p_a[0], (double *)p_a[1],
         arg_idx[0], arg_idx[1], arg_idx[2],
        x_size, y_size, z_size);

    }

    hipSafeCall(block->instance->ostream(), hipGetLastError());

    if (block->instance->OPS_diags>1) {
        hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[31].time += __t1 - __t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 3);
    ops_set_halo_dirtybit3(&args[1], range);
#endif

    if (block->instance->OPS_diags > 1) {
        //  ====================
        //  Update kernel record
        //  ====================
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[31].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[31].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg0);
        block->instance->OPS_kernels[31].transfer += ops_compute_transfer(dim, start_indx, end_indx, &arg1);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel042(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2)
{
    ops_arg args[3];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;

    create_kerneldesc_and_enque("opensbliblock00Kernel042", args, 3, 31, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel042_execute);
}
#endif
