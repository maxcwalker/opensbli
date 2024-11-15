//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel005(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel005_execute(ops_kernel_descriptor *desc) {
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
  if (!ops_checkpointing_before(args,3,range,13)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,13,"opensbliblock00Kernel005");
    block->instance->OPS_kernels[13].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel005");
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
  int xdim0_opensbliblock00Kernel005 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel005 = args[1].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ u0_B0_p = (double *)(args[0].data + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ wk1_B0_p = (double *)(args[1].data + base1);




  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_host(args, 3);
  ops_halo_exchanges(args,3,range);
  ops_H_D_exchanges_host(args, 3);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[13].mpi_time += __t1-__t2;
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
      const ACC<double> u0_B0(xdim0_opensbliblock00Kernel005, u0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel005*1);
      ACC<double> wk1_B0(xdim1_opensbliblock00Kernel005, wk1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel005*1);
      
    wk1_B0(0,0) = ((idx[1] == 0) ? (
   inv_1*(-8.34657956545823e-15*u0_B0(0,4) +
      0.333333333333356*u0_B0(0,3) - 1.50000000000003*u0_B0(0,2) +
      3.00000000000002*u0_B0(0,1) + 1.06910315192207e-15*u0_B0(0,5) -
      1.83333333333334*u0_B0(0,0))
)
: ((idx[1] == 1) ? (
   inv_1*(0.00571369039775442*u0_B0(0,4) -
      0.0658051057710389*u0_B0(0,3) - 0.376283677513354*u0_B0(0,-1) +
      0.0394168524399447*u0_B0(0,2) + 0.719443173328855*u0_B0(0,1) -
      0.322484932882161*u0_B0(0,0))
)
: ((idx[1] == 2) ? (
   inv_1*(-0.00412637789557492*u0_B0(0,3)
      + 0.113446470384241*u0_B0(0,-2) - 0.791245592765872*u0_B0(0,-1) -
      0.0367146847001261*u0_B0(0,2) + 0.521455851089587*u0_B0(0,1) +
      0.197184333887745*u0_B0(0,0))
)
: ((idx[1] == 3) ? (
   inv_1*(0.121937153224065*u0_B0(0,-2) -
      0.727822147724592*u0_B0(0,-1) - 0.082033432844602*u0_B0(0,2) -
      0.00932597985049999*u0_B0(0,-3) + 0.652141084861241*u0_B0(0,1) +
      0.0451033223343881*u0_B0(0,0))
)
: ((idx[1] == block0np1 - 1) ? (

      inv_1*(1.50000000000003*u0_B0(0,-2) - 3.00000000000002*u0_B0(0,-1) -
      0.333333333333356*u0_B0(0,-3) + 8.34657956545823e-15*u0_B0(0,-4) -
      1.06910315192207e-15*u0_B0(0,-5) + 1.83333333333334*u0_B0(0,0))
)
: ((idx[1] == block0np1 - 2)
      ? (
   inv_1*(-0.0394168524399447*u0_B0(0,-2) - 0.719443173328855*u0_B0(0,-1) +
      0.0658051057710389*u0_B0(0,-3) + 0.376283677513354*u0_B0(0,1) -
      0.00571369039775442*u0_B0(0,-4) + 0.322484932882161*u0_B0(0,0))
)
: ((idx[1] == block0np1 - 3)
      ? (
   inv_1*(0.0367146847001261*u0_B0(0,-2) - 0.521455851089587*u0_B0(0,-1) -
      0.113446470384241*u0_B0(0,2) + 0.00412637789557492*u0_B0(0,-3) +
      0.791245592765872*u0_B0(0,1) - 0.197184333887745*u0_B0(0,0))
)
: ((idx[1] == block0np1 - 4) ?
      (
   inv_1*(0.00932597985049999*u0_B0(0,3) + 0.082033432844602*u0_B0(0,-2) -
      0.652141084861241*u0_B0(0,-1) - 0.121937153224065*u0_B0(0,2) +
      0.727822147724592*u0_B0(0,1) - 0.0451033223343881*u0_B0(0,0))
)
: (

      (rc4)*inv_1*(-8*u0_B0(0,-1) + u0_B0(0,-2) - u0_B0(0,2) +
      8*u0_B0(0,1))
)))))))));


    }
  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[13].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_host(args, 3);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[13].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[13].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[13].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel005(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 0;
  desc->index = 13;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 13;
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
  desc->function = ops_par_loop_opensbliblock00Kernel005_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,13,"opensbliblock00Kernel005");
  }
  ops_enqueue_kernel(desc);
}
#endif
