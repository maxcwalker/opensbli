//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel040(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6) {
#else
void ops_par_loop_opensbliblock00Kernel040_execute(ops_kernel_descriptor *desc) {
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
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[7] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,7,range,22)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,22,"opensbliblock00Kernel040");
    block->instance->OPS_kernels[22].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel040");
  #endif


  //compute locally allocated range for the sub-block
  int start[1];
  int end[1];
  #if defined(OPS_MPI) && !defined(OPS_LAZY)
  int arg_idx[1];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<1; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 7,block, range, start, end, arg_idx) < 0) return;
  #endif

  int start0 = start[0];
  int end0 = end[0];


  //initialize global variable with the dimension of dats

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ T_B0_p = (double *)(args[0].data_d + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ rhoN2_B0_p = (double *)(args[1].data_d + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ rhoNO_B0_p = (double *)(args[2].data_d + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ rhoN_B0_p = (double *)(args[3].data_d + base3);

  int base4 = args[4].dat->base_offset;
  double * __restrict__ rhoO2_B0_p = (double *)(args[4].data_d + base4);

  int base5 = args[5].dat->base_offset;
  double * __restrict__ rhoO_B0_p = (double *)(args[5].data_d + base5);

  int base6 = args[6].dat->base_offset;
  double * __restrict__ ptauNO_B0_p = (double *)(args[6].data_d + base6);



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 7);
  ops_halo_exchanges(args,7,range);
  ops_H_D_exchanges_device(args, 7);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[22].mpi_time += __t1-__t2;
  }

  #pragma omp target teams distribute parallel for collapse(1)
  for ( int n_x=start0; n_x<end0; n_x++ ){
    const ACC<double> T_B0(T_B0_p + n_x*1);
    const ACC<double> rhoN2_B0(rhoN2_B0_p + n_x*1);
    const ACC<double> rhoNO_B0(rhoNO_B0_p + n_x*1);
    const ACC<double> rhoN_B0(rhoN_B0_p + n_x*1);
    const ACC<double> rhoO2_B0(rhoO2_B0_p + n_x*1);
    const ACC<double> rhoO_B0(rhoO_B0_p + n_x*1);
    ACC<double> ptauNO_B0(ptauNO_B0_p + n_x*1);
    
    ptauNO_B0(0) = (6.69952094392908e-11*invMO2*rhoO2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.07234831431176e-10*invMO*rhoO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      1.18607665290378e-10*invMN*rhoN_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.04583049652578e-11*invMNO*rhoNO_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)) +
      7.28659255329465e-11*invMN2*rhoN2_B0(0)*exp(168.0*pow(T_B0(0), -0.333333333333333)))/(invMN*rhoN_B0(0) +
      invMO*rhoO_B0(0) + invMN2*rhoN2_B0(0) + invMNO*rhoNO_B0(0) + invMO2*rhoO2_B0(0));


  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[22].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 7);
  ops_set_halo_dirtybit3(&args[6],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[22].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[22].transfer += ops_compute_transfer(dim, start, end, &arg6);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel040(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6) {
  ops_arg args[7] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 7, 22, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel040_execute);
}
#endif
