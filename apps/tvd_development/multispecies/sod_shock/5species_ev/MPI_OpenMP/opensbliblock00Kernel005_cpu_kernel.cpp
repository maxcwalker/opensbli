//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel005(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11,
 ops_arg arg12, ops_arg arg13, ops_arg arg14, ops_arg arg15,
 ops_arg arg16, ops_arg arg17, ops_arg arg18, ops_arg arg19,
 ops_arg arg20, ops_arg arg21) {
#else
void ops_par_loop_opensbliblock00Kernel005_execute(ops_kernel_descriptor *desc) {
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
  ops_arg arg7 = desc->args[7];
  ops_arg arg8 = desc->args[8];
  ops_arg arg9 = desc->args[9];
  ops_arg arg10 = desc->args[10];
  ops_arg arg11 = desc->args[11];
  ops_arg arg12 = desc->args[12];
  ops_arg arg13 = desc->args[13];
  ops_arg arg14 = desc->args[14];
  ops_arg arg15 = desc->args[15];
  ops_arg arg16 = desc->args[16];
  ops_arg arg17 = desc->args[17];
  ops_arg arg18 = desc->args[18];
  ops_arg arg19 = desc->args[19];
  ops_arg arg20 = desc->args[20];
  ops_arg arg21 = desc->args[21];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[22] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,22,range,18)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,18,"opensbliblock00Kernel005");
    block->instance->OPS_kernels[18].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel005");
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
  if (compute_ranges(args, 22,block, range, start, end, arg_idx) < 0) return;
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
  double * __restrict__ wdotN2_B0_p = (double *)(args[0].data + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ wdotNO_B0_p = (double *)(args[1].data + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ wdotN_B0_p = (double *)(args[2].data + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ wdotO2_B0_p = (double *)(args[3].data + base3);

  int base4 = args[4].dat->base_offset;
  double * __restrict__ wdotO_B0_p = (double *)(args[4].data + base4);

  int base5 = args[5].dat->base_offset;
  double * __restrict__ wk0_B0_p = (double *)(args[5].data + base5);

  int base6 = args[6].dat->base_offset;
  double * __restrict__ wk1_B0_p = (double *)(args[6].data + base6);

  int base7 = args[7].dat->base_offset;
  double * __restrict__ wk2_B0_p = (double *)(args[7].data + base7);

  int base8 = args[8].dat->base_offset;
  double * __restrict__ wk3_B0_p = (double *)(args[8].data + base8);

  int base9 = args[9].dat->base_offset;
  double * __restrict__ wk4_B0_p = (double *)(args[9].data + base9);

  int base10 = args[10].dat->base_offset;
  double * __restrict__ wk5_B0_p = (double *)(args[10].data + base10);

  int base11 = args[11].dat->base_offset;
  double * __restrict__ wk6_B0_p = (double *)(args[11].data + base11);

  int base12 = args[12].dat->base_offset;
  double * __restrict__ wk7_B0_p = (double *)(args[12].data + base12);

  int base13 = args[13].dat->base_offset;
  double * __restrict__ rhoE_B0_p = (double *)(args[13].data + base13);

  int base14 = args[14].dat->base_offset;
  double * __restrict__ rhoN2_B0_p = (double *)(args[14].data + base14);

  int base15 = args[15].dat->base_offset;
  double * __restrict__ rhoNO_B0_p = (double *)(args[15].data + base15);

  int base16 = args[16].dat->base_offset;
  double * __restrict__ rhoN_B0_p = (double *)(args[16].data + base16);

  int base17 = args[17].dat->base_offset;
  double * __restrict__ rhoO2_B0_p = (double *)(args[17].data + base17);

  int base18 = args[18].dat->base_offset;
  double * __restrict__ rhoO_B0_p = (double *)(args[18].data + base18);

  int base19 = args[19].dat->base_offset;
  double * __restrict__ rhoev_B0_p = (double *)(args[19].data + base19);

  int base20 = args[20].dat->base_offset;
  double * __restrict__ rhou0_B0_p = (double *)(args[20].data + base20);




  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_host(args, 22);
  ops_halo_exchanges(args,22,range);
  ops_H_D_exchanges_host(args, 22);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[18].mpi_time += __t1-__t2;
  }

  #pragma omp parallel for
  for ( int n_x=start[0]; n_x<end[0]; n_x++ ){
    int idx[] = {arg_idx[0]+n_x};
    const ACC<double> wdotN2_B0(wdotN2_B0_p + n_x*1);
    const ACC<double> wdotNO_B0(wdotNO_B0_p + n_x*1);
    const ACC<double> wdotN_B0(wdotN_B0_p + n_x*1);
    const ACC<double> wdotO2_B0(wdotO2_B0_p + n_x*1);
    const ACC<double> wdotO_B0(wdotO_B0_p + n_x*1);
    const ACC<double> wk0_B0(wk0_B0_p + n_x*1);
    const ACC<double> wk1_B0(wk1_B0_p + n_x*1);
    const ACC<double> wk2_B0(wk2_B0_p + n_x*1);
    const ACC<double> wk3_B0(wk3_B0_p + n_x*1);
    const ACC<double> wk4_B0(wk4_B0_p + n_x*1);
    const ACC<double> wk5_B0(wk5_B0_p + n_x*1);
    const ACC<double> wk6_B0(wk6_B0_p + n_x*1);
    const ACC<double> wk7_B0(wk7_B0_p + n_x*1);
    ACC<double> rhoE_B0(rhoE_B0_p + n_x*1);
    ACC<double> rhoN2_B0(rhoN2_B0_p + n_x*1);
    ACC<double> rhoNO_B0(rhoNO_B0_p + n_x*1);
    ACC<double> rhoN_B0(rhoN_B0_p + n_x*1);
    ACC<double> rhoO2_B0(rhoO2_B0_p + n_x*1);
    ACC<double> rhoO_B0(rhoO_B0_p + n_x*1);
    ACC<double> rhoev_B0(rhoev_B0_p + n_x*1);
    ACC<double> rhou0_B0(rhou0_B0_p + n_x*1);
    
   double Grid_0 = 0.0;
   double Wall = 0.0;
   Grid_0 = idx[0];

   Wall = 1;

   rhoN2_B0(0) = (-(-wk0_B0(-1) + wk0_B0(0))*invDelta0block0 + wdotN2_B0(0))*dt + rhoN2_B0(0);

   rhoO_B0(0) = (-(-wk1_B0(-1) + wk1_B0(0))*invDelta0block0 + wdotO_B0(0))*dt + rhoO_B0(0);

   rhoO2_B0(0) = (-(-wk2_B0(-1) + wk2_B0(0))*invDelta0block0 + wdotO2_B0(0))*dt + rhoO2_B0(0);

   rhoNO_B0(0) = (-(-wk3_B0(-1) + wk3_B0(0))*invDelta0block0 + wdotNO_B0(0))*dt + rhoNO_B0(0);

   rhoN_B0(0) = (-(-wk4_B0(-1) + wk4_B0(0))*invDelta0block0 + wdotN_B0(0))*dt + rhoN_B0(0);

   rhoev_B0(0) = -(-wk5_B0(-1) + wk5_B0(0))*dt*invDelta0block0 + rhoev_B0(0);

   rhou0_B0(0) = -(-wk6_B0(-1) + wk6_B0(0))*dt*invDelta0block0 + rhou0_B0(0);

   rhoE_B0(0) = -(-wk7_B0(-1) + wk7_B0(0))*dt*invDelta0block0 + rhoE_B0(0);


  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[18].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_host(args, 22);
  ops_set_halo_dirtybit3(&args[13],range);
  ops_set_halo_dirtybit3(&args[14],range);
  ops_set_halo_dirtybit3(&args[15],range);
  ops_set_halo_dirtybit3(&args[16],range);
  ops_set_halo_dirtybit3(&args[17],range);
  ops_set_halo_dirtybit3(&args[18],range);
  ops_set_halo_dirtybit3(&args[19],range);
  ops_set_halo_dirtybit3(&args[20],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[18].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg10);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg11);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg12);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg13);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg14);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg15);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg16);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg17);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg18);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg19);
    block->instance->OPS_kernels[18].transfer += ops_compute_transfer(dim, start, end, &arg20);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel005(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11,
 ops_arg arg12, ops_arg arg13, ops_arg arg14, ops_arg arg15,
 ops_arg arg16, ops_arg arg17, ops_arg arg18, ops_arg arg19,
 ops_arg arg20, ops_arg arg21) {
  ops_arg args[22] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 22, 18, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel005_execute);
}
#endif
