//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel056(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5) {
#else
void ops_par_loop_opensbliblock00Kernel056_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  ops_arg arg5 = desc->args[5];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[6] = { arg0, arg1, arg2, arg3, arg4,
 arg5};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,6,range,17)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,17,"opensbliblock00Kernel056");
    block->instance->OPS_kernels[17].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel056");
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
  if (compute_ranges(args, 6,block, range, start, end, arg_idx) < 0) return;
  #endif


  //initialize global variable with the dimension of dats

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset/sizeof(double);
  double* rhoN2_B0_p = (double*)args[0].data_d;

  int base1 = args[1].dat->base_offset/sizeof(double);
  double* rhoNO_B0_p = (double*)args[1].data_d;

  int base2 = args[2].dat->base_offset/sizeof(double);
  double* rhoN_B0_p = (double*)args[2].data_d;

  int base3 = args[3].dat->base_offset/sizeof(double);
  double* rhoO2_B0_p = (double*)args[3].data_d;

  int base4 = args[4].dat->base_offset/sizeof(double);
  double* rhoO_B0_p = (double*)args[4].data_d;

  int base5 = args[5].dat->base_offset/sizeof(double);
  double* yN2_B0_p = (double*)args[5].data_d;



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 6);
  ops_halo_exchanges(args,6,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[17].mpi_time += __t1-__t2;
  }

  int start_0 = start[0];
  int end_0 = end[0];
  if ((end[0]-start[0])>0) {
    block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {


      cgh.parallel_for<class opensbliblock00Kernel056_kernel>(cl::sycl::nd_range<1>(cl::sycl::range<1>(
            ((end[0]-start[0]-1)/block->instance->OPS_block_size_x+1)*block->instance->OPS_block_size_x
             ),cl::sycl::range<1>(
      block->instance->OPS_block_size_x
             ))
      , [=](cl::sycl::nd_item<1> item
      ) [[intel::kernel_args_restrict]] {
        int n_x = item.get_global_id(0)+start_0;
        const ACC<double> rhoN2_B0(&rhoN2_B0_p[0] + base0 + n_x*1);
        const ACC<double> rhoNO_B0(&rhoNO_B0_p[0] + base1 + n_x*1);
        const ACC<double> rhoN_B0(&rhoN_B0_p[0] + base2 + n_x*1);
        const ACC<double> rhoO2_B0(&rhoO2_B0_p[0] + base3 + n_x*1);
        const ACC<double> rhoO_B0(&rhoO_B0_p[0] + base4 + n_x*1);
        ACC<double> yN2_B0(&yN2_B0_p[0] + base5 + n_x*1);
        //USER CODE
        if (n_x < end_0) {
          
   yN2_B0(0) = rhoN2_B0(0)/(rhoN_B0(0) + rhoO_B0(0) + rhoN2_B0(0) + rhoNO_B0(0) + rhoO2_B0(0));


        }
      });
    });
  }
  if (block->instance->OPS_diags > 1) {
    block->instance->sycl_instance->queue->wait();
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[17].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 6);
  ops_set_halo_dirtybit3(&args[5],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[17].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[17].transfer += ops_compute_transfer(dim, start, end, &arg5);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel056(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 1;
  desc->index = 17;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 17;
  for ( int i=0; i<2; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 6;
  desc->args = (ops_arg*)ops_malloc(6*sizeof(ops_arg));
  desc->args[0] = arg0;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg0.dat->index;
  desc->args[1] = arg1;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg1.dat->index;
  desc->args[2] = arg2;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg2.dat->index;
  desc->args[3] = arg3;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg3.dat->index;
  desc->args[4] = arg4;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg4.dat->index;
  desc->args[5] = arg5;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg5.dat->index;
  desc->function = ops_par_loop_opensbliblock00Kernel056_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,17,"opensbliblock00Kernel056");
  }
  ops_enqueue_kernel(desc);
}
#endif
