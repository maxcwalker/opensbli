//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel031 [3][1];
static int dims_opensbliblock00Kernel031_h [3][1] = {{0}};

//user function
__device__

void opensbliblock00Kernel031_gpu(const ACC<double> &T_B0,
  ACC<double> &wk3_B0,
  const int *idx)
{
    wk3_B0(0,0) = invDelta1block0*((idx[1] == 0) ? (
   3.0*T_B0(0,1) + 0.333333333333333*T_B0(0,3) - 1.5*T_B0(0,2) -
      1.83333333333333*T_B0(0,0)
)
: ((idx[1] == 1) ? (
   0.0394168524399447*T_B0(0,2) + 0.00571369039775442*T_B0(0,4)
      + 0.719443173328855*T_B0(0,1) - 0.322484932882161*T_B0(0,0) - 0.0658051057710389*T_B0(0,3) -
      0.376283677513354*T_B0(0,-1)
)
: ((idx[1] == 2) ? (
   0.197184333887745*T_B0(0,0) + 0.521455851089587*T_B0(0,1) +
      0.113446470384241*T_B0(0,-2) - 0.00412637789557492*T_B0(0,3) - 0.0367146847001261*T_B0(0,2) -
      0.791245592765872*T_B0(0,-1)
)
: ((idx[1] == 3) ? (
   0.0451033223343881*T_B0(0,0) + 0.652141084861241*T_B0(0,1)
      + 0.121937153224065*T_B0(0,-2) - 0.00932597985049999*T_B0(0,-3) - 0.727822147724592*T_B0(0,-1) -
      0.082033432844602*T_B0(0,2)
)
: (
   -(2.0/3.0)*T_B0(0,-1) - (1.0/12.0)*T_B0(0,2) + ((1.0/12.0))*T_B0(0,-2) +
      ((2.0/3.0))*T_B0(0,1)
)))));

}



__global__ void ops_opensbliblock00Kernel031(
double* __restrict arg0,
double* __restrict arg1,
int arg_idx0, int arg_idx1,
int size0,
int size1 ){


  int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
  int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

  int arg_idx[2];
  arg_idx[0] = arg_idx0+idx_x;
  arg_idx[1] = arg_idx1+idx_y;
  arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel031[0][0];
  arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel031[1][0];

  if (idx_x < size0 && idx_y < size1) {
    const ACC<double> argp0(dims_opensbliblock00Kernel031[0][0], arg0);
    ACC<double> argp1(dims_opensbliblock00Kernel031[1][0], arg1);
    opensbliblock00Kernel031_gpu(
     argp0, argp1, arg_idx);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel031(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel031_execute(ops_kernel_descriptor *desc) {
  int dim = desc->dim;
  #if OPS_MPI
  ops_block block = desc->block;
  #endif
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  #endif

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[3] = { arg0, arg1, arg2};


  #if CHECKPOINTING && !OPS_LAZY
  if (!ops_checkpointing_before(args,3,range,36)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,36,"opensbliblock00Kernel031");
    block->instance->OPS_kernels[36].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[2];
  int end[2];

  int arg_idx[2];
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<2; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 3,block, range, start, end, arg_idx) < 0) return;
  #endif

  #if defined(OPS_MPI)
  #if defined(OPS_LAZY)
  sub_block_list sb = OPS_sub_block_list[block->index];
  arg_idx[0] = sb->decomp_disp[0]+start[0];
  arg_idx[1] = sb->decomp_disp[1]+start[1];
  #endif
  #else //OPS_MPI
  arg_idx[0] = start[0];
  arg_idx[1] = start[1];
  #endif //OPS_MPI
  int xdim0 = args[0].dat->size[0];
  int xdim1 = args[1].dat->size[0];

  if (xdim0 != dims_opensbliblock00Kernel031_h[0][0] || xdim1 != dims_opensbliblock00Kernel031_h[1][0]) {
    dims_opensbliblock00Kernel031_h[0][0] = xdim0;
    dims_opensbliblock00Kernel031_h[1][0] = xdim1;
    cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_opensbliblock00Kernel031, dims_opensbliblock00Kernel031_h, sizeof(dims_opensbliblock00Kernel031)));
  }



  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);

  dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);
  dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



  long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);

  char *p_a[3];

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    (start[1] * args[0].stencil->stride[1]);
  p_a[0] = (char *)args[0].data_d + base0;

  long long int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    (start[1] * args[1].stencil->stride[1]);
  p_a[1] = (char *)args[1].data_d + base1;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 3);
  ops_halo_exchanges(args,3,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[36].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0 && y_size > 0)
    ops_opensbliblock00Kernel031<<<grid, tblock >>> ( 
     (double *)p_a[0], (double *)p_a[1],
     arg_idx[0], arg_idx[1],
    x_size, y_size);

  cutilSafeCall(block->instance->ostream(), cudaGetLastError());

  if (block->instance->OPS_diags>1) {
    cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[36].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 3);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[36].mpi_time += t2-t1;
    block->instance->OPS_kernels[36].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[36].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel031(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_arg args[3] = { arg0, arg1, arg2 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 3, 36, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel031_execute);
}
#endif
