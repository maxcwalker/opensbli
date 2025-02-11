//
// auto-generated by ops.py
//

#define OPS_GPU

extern int xdim0_monitor_49_rhou0_B0;
int xdim0_monitor_49_rhou0_B0_h = -1;
extern int ydim0_monitor_49_rhou0_B0;
int ydim0_monitor_49_rhou0_B0_h = -1;

#ifdef __cplusplus
extern "C" {
#endif
void monitor_49_rhou0_B0_c_wrapper(
  double *p_a0,
  double *p_a1,
  int x_size, int y_size, int z_size);

#ifdef __cplusplus
}
#endif

// host stub function
void ops_par_loop_monitor_49_rhou0_B0(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1) {

  //Timing
  double t1,t2,c1,c2;
  ops_arg args[2] = { arg0, arg1};


  #ifdef CHECKPOINTING
  if (!ops_checkpointing_before(args,2,range,88)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,88,"monitor_49_rhou0_B0");
    block->instance->OPS_kernels[88].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block

  int start[3];
  int end[3];

  int arg_idx[3];
  int arg_idx_base[3];
  #ifdef OPS_MPI
  if (compute_ranges(args, 2,block, range, start, end, arg_idx) < 0) return;
  #else //OPS_MPI
  for ( int n=0; n<3; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
    arg_idx[n] = start[n];
  }
  #endif
  for ( int n=0; n<3; n++ ){
    arg_idx_base[n] = arg_idx[n];
  }

  int dat0 = args[0].dat->elem_size;

  #ifdef OPS_MPI
  double *arg1h = (double *)(((ops_reduction)args[1].data)->data + ((ops_reduction)args[1].data)->size * block->index);
  #else
  double *arg1h = (double *)(((ops_reduction)args[1].data)->data);
  #endif

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + (long long int)(block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size) * start[0] * args[0].stencil->stride[0];
  base0 = base0 + (long long int)(block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size) *
    args[0].dat->size[0] *
    start[1] * args[0].stencil->stride[1];
  base0 = base0 + (long long int)(block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size) *
    args[0].dat->size[0] *
    args[0].dat->size[1] *
    start[2] * args[0].stencil->stride[2];
  #ifdef OPS_GPU
  double *p_a0 = (double *)((char *)args[0].data_d + base0);
  #else
  double *p_a0 = (double *)((char *)args[0].data + base0);
  #endif

  double *p_a1 = arg1h;

  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);
  int z_size = MAX(0,end[2]-start[2]);

  //initialize global variable with the dimension of dats
  int xdim0 = args[0].dat->size[0];
  int ydim0 = args[0].dat->size[1];
  if (xdim0 != xdim0_monitor_49_rhou0_B0_h || ydim0 != ydim0_monitor_49_rhou0_B0_h) {
    xdim0_monitor_49_rhou0_B0 = xdim0;
    xdim0_monitor_49_rhou0_B0_h = xdim0;
    ydim0_monitor_49_rhou0_B0 = ydim0;
    ydim0_monitor_49_rhou0_B0_h = ydim0;
  }

  //Halo Exchanges

  #ifdef OPS_GPU
  ops_H_D_exchanges_device(args, 2);
  #else
  ops_H_D_exchanges_host(args, 2);
  #endif
  ops_halo_exchanges(args,2,range);

  #ifdef OPS_GPU
  ops_H_D_exchanges_device(args, 2);
  #else
  ops_H_D_exchanges_host(args, 2);
  #endif
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[88].mpi_time += t2-t1;
  }

  monitor_49_rhou0_B0_c_wrapper(
    p_a0,
    p_a1,
    x_size, y_size, z_size);

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[88].time += t1-t2;
  }
  #ifdef OPS_GPU
  ops_set_dirtybit_device(args, 2);
  #else
  ops_set_dirtybit_host(args, 2);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[88].mpi_time += t2-t1;
    block->instance->OPS_kernels[88].transfer += ops_compute_transfer(dim, start, end, &arg0);
  }
}
