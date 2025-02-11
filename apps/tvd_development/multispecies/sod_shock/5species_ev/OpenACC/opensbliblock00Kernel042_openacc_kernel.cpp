//
// auto-generated by ops.py
//

#define OPS_GPU

extern int xdim0_opensbliblock00Kernel042;
int xdim0_opensbliblock00Kernel042_h = -1;

#ifdef __cplusplus
extern "C" {
#endif
void opensbliblock00Kernel042_c_wrapper(
  double *p_a0,
  int x_size);

#ifdef __cplusplus
}
#endif

// host stub function
void ops_par_loop_opensbliblock00Kernel042(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0) {

  //Timing
  double t1,t2,c1,c2;
  ops_arg args[1] = { arg0};


  #ifdef CHECKPOINTING
  if (!ops_checkpointing_before(args,1,range,9)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,9,"opensbliblock00Kernel042");
    block->instance->OPS_kernels[9].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block

  int start[1];
  int end[1];

  int arg_idx[1];
  int arg_idx_base[1];
  #ifdef OPS_MPI
  if (compute_ranges(args, 1,block, range, start, end, arg_idx) < 0) return;
  #else //OPS_MPI
  for ( int n=0; n<1; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
    arg_idx[n] = start[n];
  }
  #endif
  for ( int n=0; n<1; n++ ){
    arg_idx_base[n] = arg_idx[n];
  }

  int dat0 = args[0].dat->elem_size;


  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + (long long int)(block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size) * start[0] * args[0].stencil->stride[0];
  #ifdef OPS_GPU
  double *p_a0 = (double *)((char *)args[0].data_d + base0);
  #else
  double *p_a0 = (double *)((char *)args[0].data + base0);
  #endif


  int x_size = MAX(0,end[0]-start[0]);

  //initialize global variable with the dimension of dats
  int xdim0 = args[0].dat->size[0];
  if (xdim0 != xdim0_opensbliblock00Kernel042_h) {
    xdim0_opensbliblock00Kernel042 = xdim0;
    xdim0_opensbliblock00Kernel042_h = xdim0;
  }

  //Halo Exchanges

  #ifdef OPS_GPU
  ops_H_D_exchanges_device(args, 1);
  #else
  ops_H_D_exchanges_host(args, 1);
  #endif
  ops_halo_exchanges(args,1,range);

  #ifdef OPS_GPU
  ops_H_D_exchanges_device(args, 1);
  #else
  ops_H_D_exchanges_host(args, 1);
  #endif
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[9].mpi_time += t2-t1;
  }

  opensbliblock00Kernel042_c_wrapper(
    p_a0,
    x_size);

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[9].time += t1-t2;
  }
  #ifdef OPS_GPU
  ops_set_dirtybit_device(args, 1);
  #else
  ops_set_dirtybit_host(args, 1);
  #endif
  ops_set_halo_dirtybit3(&args[0],range);

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[9].mpi_time += t2-t1;
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg0);
  }
}
