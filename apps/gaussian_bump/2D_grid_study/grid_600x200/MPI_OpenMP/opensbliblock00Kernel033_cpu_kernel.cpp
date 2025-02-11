//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel033(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel033_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[3] = { arg0, arg1, arg2};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,3,range,38)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,38,"opensbliblock00Kernel033");
    block->instance->OPS_kernels[38].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel033");
  #endif


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
  arg_idx[0] = sb->decomp_disp[0];
  arg_idx[1] = sb->decomp_disp[1];
  #else
  arg_idx[0] -= start[0];
  arg_idx[1] -= start[1];
  #endif
  #else //OPS_MPI
  arg_idx[0] = 0;
  arg_idx[1] = 0;
  #endif //OPS_MPI

  //initialize global variable with the dimension of dats
  int xdim0_opensbliblock00Kernel033 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel033 = args[1].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ u1_B0_p = (double *)(args[0].data + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ wk5_B0_p = (double *)(args[1].data + base1);




  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_host(args, 3);
  ops_halo_exchanges(args,3,range);
  ops_H_D_exchanges_host(args, 3);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[38].mpi_time += __t1-__t2;
  }

  #pragma omp parallel for
  for ( int n_y=start[1]; n_y<end[1]; n_y++ ){
    #ifdef __INTEL_COMPILER
    #pragma loop_count(10000)
    #pragma omp simd
    #elif defined(__clang__)
    #pragma clang loop vectorize(assume_safety)
    #elif defined(__GNUC__)
    #pragma GCC ivdep
    #else
    #pragma simd
    #endif
    for ( int n_x=start[0]; n_x<end[0]; n_x++ ){
      int idx[] = {arg_idx[0]+n_x, arg_idx[1]+n_y};
      const ACC<double> u1_B0(xdim0_opensbliblock00Kernel033, u1_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel033*1);
      ACC<double> wk5_B0(xdim1_opensbliblock00Kernel033, wk5_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel033*1);
      
    wk5_B0(0,0) = inv_1*((idx[0] == 0) ? (
   -rc11*u1_B0(4,0) + 4*u1_B0(1,0) +
      (rc13)*u1_B0(3,0) - rc12*u1_B0(0,0) - 3*u1_B0(2,0)
)
: ((idx[0] == 1) ? (

      (rc14)*u1_B0(1,0) - rc11*u1_B0(-1,0) + (rc16)*u1_B0(3,0) - rc15*u1_B0(0,0)
      - rc7*u1_B0(2,0)
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*u1_B0(-4,0) -
      4*u1_B0(-1,0) + (rc12)*u1_B0(0,0) + 3*u1_B0(-2,0) - rc13*u1_B0(-3,0)
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*u1_B0(1,0) + (rc7)*u1_B0(-2,0) +
      (rc15)*u1_B0(0,0) - rc14*u1_B0(-1,0) - rc16*u1_B0(-3,0)
)
: (

      (rc17)*u1_B0(1,0) - rc17*u1_B0(-1,0) + (rc16)*u1_B0(-2,0) -
      rc16*u1_B0(2,0)
)))));


    }
  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[38].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_host(args, 3);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[38].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[38].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel033(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 0;
  desc->index = 38;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 38;
  for ( int i=0; i<4; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 3;
  desc->args = (ops_arg*)ops_malloc(3*sizeof(ops_arg));
  desc->args[0] = arg0;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg0.dat->index;
  desc->args[1] = arg1;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg1.dat->index;
  desc->args[2] = arg2;
  desc->function = ops_par_loop_opensbliblock00Kernel033_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,38,"opensbliblock00Kernel033");
  }
  ops_enqueue_kernel(desc);
}
#endif
