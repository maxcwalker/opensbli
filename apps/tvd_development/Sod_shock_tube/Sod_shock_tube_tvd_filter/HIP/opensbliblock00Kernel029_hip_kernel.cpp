//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel029 [8][1];
static int dims_opensbliblock00Kernel029_h [8][1] = {{0}};

//user function
__device__

 void opensbliblock00Kernel029_gpu(const ACC<double> &wk0_B0,
  const ACC<double> &Mach_sensor_B0,
  const ACC<double> &wk2_B0,
  const ACC<double>
&wk1_B0,
  ACC<double> &rho_B0,
  ACC<double> &rhou0_B0,
  ACC<double> &rhoE_B0,
  const int *idx)
{


   rho_B0(0) = rho_B0(0) - dt*inv_0*(wk0_B0(0) - wk0_B0(-1));
   rhou0_B0(0) = rhou0_B0(0) - dt*inv_0*(wk1_B0(0) - wk1_B0(-1));
   rhoE_B0(0) = rhoE_B0(0) - dt*inv_0*(wk2_B0(0) - wk2_B0(-1));





}



__global__ void ops_opensbliblock00Kernel029(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
double* __restrict arg5,
double* __restrict arg6,
int arg_idx0,
int size0 ){


  int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

  int arg_idx[1];
  arg_idx[0] = arg_idx0+idx_x;
  arg0 += idx_x * 1*1;
  arg1 += idx_x * 1*1;
  arg2 += idx_x * 1*1;
  arg3 += idx_x * 1*1;
  arg4 += idx_x * 1*1;
  arg5 += idx_x * 1*1;
  arg6 += idx_x * 1*1;

  if (idx_x < size0) {
    const ACC<double> argp0(arg0);
    const ACC<double> argp1(arg1);
    const ACC<double> argp2(arg2);
    const ACC<double> argp3(arg3);
    ACC<double> argp4(arg4);
    ACC<double> argp5(arg5);
    ACC<double> argp6(arg6);
    opensbliblock00Kernel029_gpu(
     argp0, argp1, argp2, argp3, argp4,
     argp5, argp6, arg_idx);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel029(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7) {
#else
void ops_par_loop_opensbliblock00Kernel029_execute(ops_kernel_descriptor *desc) {
  int dim = desc->dim;
  #if OPS_MPI
  ops_block block = desc->block;
  #endif
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  ops_arg arg5 = desc->args[5];
  ops_arg arg6 = desc->args[6];
  ops_arg arg7 = desc->args[7];
  #endif

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[8] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7};


  #if CHECKPOINTING && !OPS_LAZY
  if (!ops_checkpointing_before(args,8,range,23)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,23,"opensbliblock00Kernel029");
    block->instance->OPS_kernels[23].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[1];
  int end[1];

  int arg_idx[1];
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<1; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 8,block, range, start, end, arg_idx) < 0) return;
  #endif

  #if defined(OPS_MPI)
  #if defined(OPS_LAZY)
  sub_block_list sb = OPS_sub_block_list[block->index];
  arg_idx[0] = sb->decomp_disp[0]+start[0];
  #endif
  #else //OPS_MPI
  arg_idx[0] = start[0];
  #endif //OPS_MPI
  int xdim0 = args[0].dat->size[0];
  int xdim1 = args[1].dat->size[0];
  int xdim2 = args[2].dat->size[0];
  int xdim3 = args[3].dat->size[0];
  int xdim4 = args[4].dat->size[0];
  int xdim5 = args[5].dat->size[0];
  int xdim6 = args[6].dat->size[0];

  if (xdim0 != dims_opensbliblock00Kernel029_h[0][0] || xdim1 != dims_opensbliblock00Kernel029_h[1][0] || xdim2 != dims_opensbliblock00Kernel029_h[2][0] || xdim3 != dims_opensbliblock00Kernel029_h[3][0] || xdim4 != dims_opensbliblock00Kernel029_h[4][0] || xdim5 != dims_opensbliblock00Kernel029_h[5][0] || xdim6 != dims_opensbliblock00Kernel029_h[6][0]) {
    dims_opensbliblock00Kernel029_h[0][0] = xdim0;
    dims_opensbliblock00Kernel029_h[1][0] = xdim1;
    dims_opensbliblock00Kernel029_h[2][0] = xdim2;
    dims_opensbliblock00Kernel029_h[3][0] = xdim3;
    dims_opensbliblock00Kernel029_h[4][0] = xdim4;
    dims_opensbliblock00Kernel029_h[5][0] = xdim5;
    dims_opensbliblock00Kernel029_h[6][0] = xdim6;
    hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel029, dims_opensbliblock00Kernel029_h, sizeof(dims_opensbliblock00Kernel029)));
  }



  int x_size = MAX(0,end[0]-start[0]);

  dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, 1, 1);
  dim3 tblock(block->instance->OPS_block_size_x,1,1);



  long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
  long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
  long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
  long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
  long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);
  long long int dat6 = (block->instance->OPS_soa ? args[6].dat->type_size : args[6].dat->elem_size);

  char *p_a[8];

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  p_a[0] = (char *)args[0].data_d + base0;

  long long int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  p_a[1] = (char *)args[1].data_d + base1;

  long long int base2 = args[2].dat->base_offset + 
           dat2 * 1 * (start[0] * args[2].stencil->stride[0]);
  p_a[2] = (char *)args[2].data_d + base2;

  long long int base3 = args[3].dat->base_offset + 
           dat3 * 1 * (start[0] * args[3].stencil->stride[0]);
  p_a[3] = (char *)args[3].data_d + base3;

  long long int base4 = args[4].dat->base_offset + 
           dat4 * 1 * (start[0] * args[4].stencil->stride[0]);
  p_a[4] = (char *)args[4].data_d + base4;

  long long int base5 = args[5].dat->base_offset + 
           dat5 * 1 * (start[0] * args[5].stencil->stride[0]);
  p_a[5] = (char *)args[5].data_d + base5;

  long long int base6 = args[6].dat->base_offset + 
           dat6 * 1 * (start[0] * args[6].stencil->stride[0]);
  p_a[6] = (char *)args[6].data_d + base6;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 8);
  ops_halo_exchanges(args,8,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[23].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0)
    ops_opensbliblock00Kernel029<<<grid, tblock >>> ( 
     (double *)p_a[0], (double *)p_a[1],
     (double *)p_a[2], (double *)p_a[3],
     (double *)p_a[4], (double *)p_a[5],
     (double *)p_a[6], arg_idx[0],
    x_size);

  hipSafeCall(block->instance->ostream(), hipGetLastError());

  if (block->instance->OPS_diags>1) {
    hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[23].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 8);
  ops_set_halo_dirtybit3(&args[4],range);
  ops_set_halo_dirtybit3(&args[5],range);
  ops_set_halo_dirtybit3(&args[6],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[23].mpi_time += t2-t1;
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[23].transfer += ops_compute_transfer(dim, start, end, &arg6);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel029(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7) {
  ops_arg args[8] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 8, 23, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel029_execute);
}
#endif
