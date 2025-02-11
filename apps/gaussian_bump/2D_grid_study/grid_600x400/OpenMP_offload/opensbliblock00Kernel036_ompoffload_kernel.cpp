//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel036(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
#else
void ops_par_loop_opensbliblock00Kernel036_execute(ops_kernel_descriptor *desc) {
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
  if (!ops_checkpointing_before(args,3,range,41)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,41,"opensbliblock00Kernel036");
    block->instance->OPS_kernels[41].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel036");
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

  int start0 = start[0];
  int end0 = end[0];
  int start1 = start[1];
  int end1 = end[1];

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
  int xdim0_opensbliblock00Kernel036 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel036 = args[1].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ T_B0_p = (double *)(args[0].data_d + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ wk8_B0_p = (double *)(args[1].data_d + base1);




  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 3);
  ops_halo_exchanges(args,3,range);
  ops_H_D_exchanges_device(args, 3);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[41].mpi_time += __t1-__t2;
  }

  #pragma omp target teams distribute parallel for collapse(2)
  for ( int n_y=start1; n_y<end1; n_y++ ){
    for ( int n_x=start0; n_x<end0; n_x++ ){
      int idx[] = {arg_idx[0]+n_x, arg_idx[1]+n_y};
      const ACC<double> T_B0(xdim0_opensbliblock00Kernel036, T_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel036*1);
      ACC<double> wk8_B0(xdim1_opensbliblock00Kernel036, wk8_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel036*1);
      
    wk8_B0(0,0) = inv2Delta1block0*((idx[1] == 0) ? (
   -(26.0/3.0)*T_B0(0,1) - (14.0/3.0)*T_B0(0,3) +
      ((11.0/12.0))*T_B0(0,4) + ((19.0/2.0))*T_B0(0,2) + ((35.0/12.0))*T_B0(0,0)
)
: ((idx[1] == 1) ? (

      ((1.0/2.0))*T_B0(0,1) - (5.0/3.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,3) + ((1.0/3.0))*T_B0(0,2) +
      ((11.0/12.0))*T_B0(0,-1)
)
: (
   -(5.0/2.0)*T_B0(0,0) - (1.0/12.0)*T_B0(0,-2) - (1.0/12.0)*T_B0(0,2) +
      ((4.0/3.0))*T_B0(0,1) + ((4.0/3.0))*T_B0(0,-1)
)));


    }
  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[41].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 3);
  ops_set_halo_dirtybit3(&args[1],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[41].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[41].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[41].transfer += ops_compute_transfer(dim, start, end, &arg1);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel036(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2) {
  ops_arg args[3] = { arg0, arg1, arg2 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 3, 41, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel036_execute);
}
#endif
