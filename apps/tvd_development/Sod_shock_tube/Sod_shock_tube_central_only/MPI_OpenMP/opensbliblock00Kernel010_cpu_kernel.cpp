//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel010(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel010_execute(ops_kernel_descriptor *desc) {
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
    ops_timing_realloc(block->instance,13,"opensbliblock00Kernel010");
    block->instance->OPS_kernels[13].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel010");
  #endif


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
  arg_idx[0] = sb->decomp_disp[0];
  #else
  arg_idx[0] -= start[0];
  #endif
  #else //OPS_MPI
  arg_idx[0] = 0;
  #endif //OPS_MPI

  //initialize global variable with the dimension of dats

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ wk13_B0_p = (double *)(args[0].data + base0);

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
    block->instance->OPS_kernels[13].mpi_time += __t1-__t2;
  }

  #pragma omp parallel for
  for ( int n_x=start[0]; n_x<end[0]; n_x++ ){
    int idx[] = {arg_idx[0]+n_x};
    const ACC<double> wk13_B0(wk13_B0_p + n_x*1);
    ACC<double> wk5_B0(wk5_B0_p + n_x*1);
    
    wk5_B0(0) = inv_0*((idx[0] == 0) ? (
   3.00000000000002*wk13_B0(1) -
      8.34657956545823e-15*wk13_B0(4) - 1.83333333333334*wk13_B0(0) +
      0.333333333333356*wk13_B0(3) - 1.50000000000003*wk13_B0(2) +
      1.06910315192207e-15*wk13_B0(5)
)
: ((idx[0] == 1) ? (
   0.719443173328855*wk13_B0(1) +
      0.00571369039775442*wk13_B0(4) - 0.322484932882161*wk13_B0(0) -
      0.0658051057710389*wk13_B0(3) + 0.0394168524399447*wk13_B0(2) -
      0.376283677513354*wk13_B0(-1)
)
: ((idx[0] == 2) ? (
   0.521455851089587*wk13_B0(1) +
      0.197184333887745*wk13_B0(0) - 0.791245592765872*wk13_B0(-1) -
      0.00412637789557492*wk13_B0(3) - 0.0367146847001261*wk13_B0(2) +
      0.113446470384241*wk13_B0(-2)
)
: ((idx[0] == 3) ? (
   0.652141084861241*wk13_B0(1) -
      0.00932597985049999*wk13_B0(-3) + 0.0451033223343881*wk13_B0(0) +
      0.121937153224065*wk13_B0(-2) - 0.082033432844602*wk13_B0(2) -
      0.727822147724592*wk13_B0(-1)
)
: ((idx[0] == block0np0 - 1) ? (

      -0.333333333333356*wk13_B0(-3) + 1.83333333333334*wk13_B0(0) +
      8.34657956545823e-15*wk13_B0(-4) - 3.00000000000002*wk13_B0(-1) -
      1.06910315192207e-15*wk13_B0(-5) + 1.50000000000003*wk13_B0(-2)
)
: ((idx[0] == block0np0 - 2)
      ? (
   0.376283677513354*wk13_B0(1) + 0.0658051057710389*wk13_B0(-3) +
      0.322484932882161*wk13_B0(0) - 0.00571369039775442*wk13_B0(-4) -
      0.719443173328855*wk13_B0(-1) - 0.0394168524399447*wk13_B0(-2)
)
: ((idx[0] == block0np0 - 3)
      ? (
   0.791245592765872*wk13_B0(1) + 0.00412637789557492*wk13_B0(-3) -
      0.197184333887745*wk13_B0(0) + 0.0367146847001261*wk13_B0(-2) -
      0.113446470384241*wk13_B0(2) - 0.521455851089587*wk13_B0(-1)
)
: ((idx[0] == block0np0 - 4) ?
      (
   0.727822147724592*wk13_B0(1) - 0.0451033223343881*wk13_B0(0) +
      0.082033432844602*wk13_B0(-2) + 0.00932597985049999*wk13_B0(3) -
      0.121937153224065*wk13_B0(2) - 0.652141084861241*wk13_B0(-1)
)
: (

      (rc2)*wk13_B0(1) - rc3*wk13_B0(2) - rc2*wk13_B0(-1) +
      (rc3)*wk13_B0(-2)
)))))))));


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
void ops_par_loop_opensbliblock00Kernel010(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 0;
  desc->index = 13;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 13;
  for ( int i=0; i<2; i++ ){
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
  desc->function = ops_par_loop_opensbliblock00Kernel010_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,13,"opensbliblock00Kernel010");
  }
  ops_enqueue_kernel(desc);
}
#endif
