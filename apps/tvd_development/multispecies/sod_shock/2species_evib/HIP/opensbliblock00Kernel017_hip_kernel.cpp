//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel017 [3][1];
static int dims_opensbliblock00Kernel017_h [3][1] = {{0}};

//user function
__device__

void opensbliblock00Kernel017_gpu(const ACC<double> &T_B0,
  ACC<double> &Residual4_B0,
  const int *idx)
{
   double d2_T_dx = 0.0;
   if (idx[0] == 0){

       d2_T_dx = (-(26.0/3.0)*T_B0(1) - (14.0/3.0)*T_B0(3) + ((11.0/12.0))*T_B0(4) + ((19.0/2.0))*T_B0(2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == 1){

       d2_T_dx = (((1.0/2.0))*T_B0(1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(3) + ((1.0/3.0))*T_B0(2) +
            ((11.0/12.0))*T_B0(-1))*inv2Delta0block0;

   }

   else if (idx[0] == -1 + block0np0){

       d2_T_dx = (-(26.0/3.0)*T_B0(-1) - (14.0/3.0)*T_B0(-3) + ((11.0/12.0))*T_B0(-4) + ((19.0/2.0))*T_B0(-2) +
            ((35.0/12.0))*T_B0(0))*inv2Delta0block0;

   }

   else if (idx[0] == -2 + block0np0){

       d2_T_dx = (((1.0/2.0))*T_B0(-1) - (5.0/3.0)*T_B0(0) - (1.0/12.0)*T_B0(-3) + ((1.0/3.0))*T_B0(-2) +
            ((11.0/12.0))*T_B0(1))*inv2Delta0block0;

   }

   else{

       d2_T_dx = (-(5.0/2.0)*T_B0(0) - (1.0/12.0)*T_B0(-2) - (1.0/12.0)*T_B0(2) + ((4.0/3.0))*T_B0(1) +
            ((4.0/3.0))*T_B0(-1))*inv2Delta0block0;

   }

   Residual4_B0(0) = invRe*kappa*d2_T_dx + Residual4_B0(0);

}



__global__ void ops_opensbliblock00Kernel017(
double* __restrict arg0,
double* __restrict arg1,
int arg_idx0,
int size0 ){


  int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

  int arg_idx[1];
  arg_idx[0] = arg_idx0+idx_x;
  arg0 += idx_x * 1*1;
  arg1 += idx_x * 1*1;

  if (idx_x < size0) {
    const ACC<double> argp0(arg0);
    ACC<double> argp1(arg1);
    opensbliblock00Kernel017_gpu(
     argp0, argp1, arg_idx);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel017(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel017_execute(ops_kernel_descriptor *desc) {
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
  if (!ops_checkpointing_before(args,3,range,10)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,10,"opensbliblock00Kernel017");
    block->instance->OPS_kernels[10].count++;
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
  if (compute_ranges(args, 3,block, range, start, end, arg_idx) < 0) return;
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

  if (xdim0 != dims_opensbliblock00Kernel017_h[0][0] || xdim1 != dims_opensbliblock00Kernel017_h[1][0]) {
    dims_opensbliblock00Kernel017_h[0][0] = xdim0;
    dims_opensbliblock00Kernel017_h[1][0] = xdim1;
    hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol( dims_opensbliblock00Kernel017, dims_opensbliblock00Kernel017_h, sizeof(dims_opensbliblock00Kernel017)));
  }



  int x_size = MAX(0,end[0]-start[0]);

  dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, 1, 1);
  dim3 tblock(block->instance->OPS_block_size_x,1,1);



  long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);

  char *p_a[3];

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  p_a[0] = (char *)args[0].data_d + base0;

  long long int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  p_a[1] = (char *)args[1].data_d + base1;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 3);
  ops_halo_exchanges(args,3,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[10].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0)
    ops_opensbliblock00Kernel017<<<grid, tblock >>> ( 
     (double *)p_a[0], (double *)p_a[1],
     arg_idx[0],
    x_size);

  hipSafeCall(block->instance->ostream(), hipGetLastError());

  if (block->instance->OPS_diags>1) {
    hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[10].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 3);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[10].mpi_time += t2-t1;
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[10].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel017(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_arg args[3] = { arg0, arg1, arg2 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 3, 10, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel017_execute);
}
#endif
