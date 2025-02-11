//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel028(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3) {
#else
void ops_par_loop_opensbliblock00Kernel028_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[4] = { arg0, arg1, arg2, arg3};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,4,range,3)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,3,"opensbliblock00Kernel028");
    block->instance->OPS_kernels[3].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel028");
  #endif


  //compute locally allocated range for the sub-block
  int start[2];
  int end[2];
  #if defined(OPS_MPI) && !defined(OPS_LAZY)
  int arg_idx[2];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<2; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 4,block, range, start, end, arg_idx) < 0) return;
  #endif

  int start0 = start[0];
  int end0 = end[0];
  int start1 = start[1];
  int end1 = end[1];


  //initialize global variable with the dimension of dats
  int xdim0_opensbliblock00Kernel028 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel028 = args[1].dat->size[0];
  int xdim2_opensbliblock00Kernel028 = args[2].dat->size[0];
  int xdim3_opensbliblock00Kernel028 = args[3].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ rhoE_B0_p = (double *)(args[0].data_d + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ rho_B0_p = (double *)(args[1].data_d + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ rhou0_B0_p = (double *)(args[2].data_d + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ rhou1_B0_p = (double *)(args[3].data_d + base3);



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 4);
  ops_halo_exchanges(args,4,range);
  ops_H_D_exchanges_device(args, 4);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[3].mpi_time += __t1-__t2;
  }

  #pragma omp target teams distribute parallel for collapse(2)
  for ( int n_y=start1; n_y<end1; n_y++ ){
    for ( int n_x=start0; n_x<end0; n_x++ ){
      ACC<double> rhoE_B0(xdim0_opensbliblock00Kernel028, rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel028*1);
      ACC<double> rho_B0(xdim1_opensbliblock00Kernel028, rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel028*1);
      ACC<double> rhou0_B0(xdim2_opensbliblock00Kernel028, rhou0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel028*1);
      ACC<double> rhou1_B0(xdim3_opensbliblock00Kernel028, rhou1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel028*1);
      
   rho_B0(0,-1) = rho_B0(0,1);

   rho_B0(0,-2) = rho_B0(0,2);

   rho_B0(0,-3) = rho_B0(0,3);

   rho_B0(0,-4) = rho_B0(0,4);

   rhou0_B0(0,0) = 0;

   rhou1_B0(0,0) = 0;

   rhou0_B0(0,-1) = -rhou0_B0(0,1);

   rhou1_B0(0,-1) = -rhou1_B0(0,1);

   rhou0_B0(0,-2) = -rhou0_B0(0,2);

   rhou1_B0(0,-2) = -rhou1_B0(0,2);

   rhou0_B0(0,-3) = -rhou0_B0(0,3);

   rhou1_B0(0,-3) = -rhou1_B0(0,3);

   rhou0_B0(0,-4) = -rhou0_B0(0,4);

   rhou1_B0(0,-4) = -rhou1_B0(0,4);

    rhoE_B0(0,0) = (-(9.0/11.0)*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,2)*rhou0_B0(0,2)) +
      ((1.0/2.0))*(rhou1_B0(0,2)*rhou1_B0(0,2)))/rho_B0(0,2) + rhoE_B0(0,2))*gama/(inv2Minf*rho_B0(0,2)) +
      ((2.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,3)*rhou0_B0(0,3)) +
      ((1.0/2.0))*(rhou1_B0(0,3)*rhou1_B0(0,3)))/rho_B0(0,3) + rhoE_B0(0,3))*gama/(inv2Minf*rho_B0(0,3)) +
      ((18.0/11.0))*(-1 + gama)*(-(((1.0/2.0))*(rhou0_B0(0,1)*rhou0_B0(0,1)) +
      ((1.0/2.0))*(rhou1_B0(0,1)*rhou1_B0(0,1)))/rho_B0(0,1) +
      rhoE_B0(0,1))*gama/(inv2Minf*rho_B0(0,1)))*invgama*inv2Minf*inv_gamma_m1*rho_B0(0,0);

   rhoE_B0(0,-1) = rhoE_B0(0,1);

   rhoE_B0(0,-2) = rhoE_B0(0,2);

   rhoE_B0(0,-3) = rhoE_B0(0,3);

   rhoE_B0(0,-4) = rhoE_B0(0,4);


    }
  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[3].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 4);
  ops_set_halo_dirtybit3(&args[0],range);
  ops_set_halo_dirtybit3(&args[1],range);
  ops_set_halo_dirtybit3(&args[2],range);
  ops_set_halo_dirtybit3(&args[3],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[3].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[3].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[3].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[3].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[3].transfer += ops_compute_transfer(dim, start, end, &arg3);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel028(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3) {
  ops_arg args[4] = { arg0, arg1, arg2, arg3 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 4, 3, dim, 0, range, block, ops_par_loop_opensbliblock00Kernel028_execute);
}
#endif
