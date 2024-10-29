// Auto-generated at 2024-10-10 09:28:39.812787 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel063(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0, 
    ops_arg arg1, 
    ops_arg arg2, 
    ops_arg arg3, 
    ops_arg arg4, 
    ops_arg arg5, 
    ops_arg arg6, 
    ops_arg arg7
)
{
#else
void ops_par_loop_opensbliblock00Kernel063_execute(ops_kernel_descriptor *desc)
{
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
#endif

//  ======
//  Timing
//  ======
    double __t1,__t2,__c1,__c2;

    ops_arg args[8];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args,8, range, 9)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 9, "opensbliblock00Kernel063");
        block->instance->OPS_kernels[9].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel063");
#endif

//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start[3];
    int end[3];
#if defined(OPS_MPI) && !defined(OPS_LAZY)
int arg_idx[3];
#endif
#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start[n] = range[2*n];
        end[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 8, block, range, start, end, arg_idx) < 0) return;
#endif


//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim1_opensbliblock00Kernel063 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel063 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel063 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel063 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel063 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel063 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel063 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel063 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel063 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel063 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel063 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel063 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel063 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel063 = args[7].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int iter_val = *(int *)args[0].data;

    int base1 = args[1].dat->base_offset;
    double * __restrict__ x0_B0_p = (double *)(args[1].data_d + base1);
    int base2 = args[2].dat->base_offset;
    double * __restrict__ x2_B0_p = (double *)(args[2].data_d + base2);
    int base3 = args[3].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[3].data_d + base3);
    int base4 = args[4].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[4].data_d + base4);
    int base5 = args[5].dat->base_offset;
    double * __restrict__ rhou0_B0_p = (double *)(args[5].data_d + base5);
    int base6 = args[6].dat->base_offset;
    double * __restrict__ rhou1_B0_p = (double *)(args[6].data_d + base6);
    int base7 = args[7].dat->base_offset;
    double * __restrict__ rhou2_B0_p = (double *)(args[7].data_d + base7);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 8);
    ops_halo_exchanges(args,8,range);
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[9].mpi_time += __t2 - __t1;
    }

    int start_0 = start[0];
    int end_0 = end[0];
    int start_1 = start[1];
    int end_1 = end[1];
    int start_2 = start[2];
    int end_2 = end[2];
    if ((end[0]-start[0])>0 && (end[1]-start[1])>0 && (end[2]-start[2])>0) {
        block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

          auto Minf_sycl = (*Minf_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto Twall_sycl = (*Twall_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto b_f_sycl = (*b_f_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto beta_0_sycl = (*beta_0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto dt_sycl = (*dt_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto gama_sycl = (*gama_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto inv2Minf_sycl = (*inv2Minf_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto inv_gamma_m1_sycl = (*inv_gamma_m1_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto omega_0_sycl = (*omega_0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto omega_1_sycl = (*omega_1_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto omega_2_sycl = (*omega_2_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto omega_3_sycl = (*omega_3_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto phi_0_sycl = (*phi_0_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto phi_1_sycl = (*phi_1_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto phi_2_sycl = (*phi_2_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto tripA_sycl = (*tripA_p).template get_access<cl::sycl::access::mode::read>(cgh);
          auto xts_sycl = (*xts_p).template get_access<cl::sycl::access::mode::read>(cgh);

          cgh.parallel_for<class opensbliblock00Kernel063_kernel>(cl::sycl::nd_range<3>(cl::sycl::range<3>(
               ((end[2]-start[2]-1)/block->instance->OPS_block_size_z+1)*block->instance->OPS_block_size_z,
               ((end[1]-start[1]-1)/block->instance->OPS_block_size_y+1)*block->instance->OPS_block_size_y,
                ((end[0]-start[0]-1)/block->instance->OPS_block_size_x+1)*block->instance->OPS_block_size_x
                 ),cl::sycl::range<3>(
                 block->instance->OPS_block_size_z,
                 block->instance->OPS_block_size_y,
          block->instance->OPS_block_size_x
                 ))
          , [=](cl::sycl::nd_item<3> item
          ) [[intel::kernel_args_restrict]] {

              int n_z = item.get_global_id()[0]+start_2;
              int n_y = item.get_global_id()[1]+start_1;
              int n_x = item.get_global_id()[2]+start_0;

              const ACC<double> x0_B0(xdim1_opensbliblock00Kernel063, ydim1_opensbliblock00Kernel063, x0_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel063*1 + n_z * xdim1_opensbliblock00Kernel063 * ydim1_opensbliblock00Kernel063*1);
              const ACC<double> x2_B0(xdim2_opensbliblock00Kernel063, ydim2_opensbliblock00Kernel063, x2_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel063*1 + n_z * xdim2_opensbliblock00Kernel063 * ydim2_opensbliblock00Kernel063*1);
              ACC<double> rhoE_B0(xdim3_opensbliblock00Kernel063, ydim3_opensbliblock00Kernel063, rhoE_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel063*1 + n_z * xdim3_opensbliblock00Kernel063 * ydim3_opensbliblock00Kernel063*1);
              ACC<double> rho_B0(xdim4_opensbliblock00Kernel063, ydim4_opensbliblock00Kernel063, rho_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel063*1 + n_z * xdim4_opensbliblock00Kernel063 * ydim4_opensbliblock00Kernel063*1);
              ACC<double> rhou0_B0(xdim5_opensbliblock00Kernel063, ydim5_opensbliblock00Kernel063, rhou0_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel063*1 + n_z * xdim5_opensbliblock00Kernel063 * ydim5_opensbliblock00Kernel063*1);
              ACC<double> rhou1_B0(xdim6_opensbliblock00Kernel063, ydim6_opensbliblock00Kernel063, rhou1_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel063*1 + n_z * xdim6_opensbliblock00Kernel063 * ydim6_opensbliblock00Kernel063*1);
              ACC<double> rhou2_B0(xdim7_opensbliblock00Kernel063, ydim7_opensbliblock00Kernel063, rhou2_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel063*1 + n_z * xdim7_opensbliblock00Kernel063 * ydim7_opensbliblock00Kernel063*1);
              const int *iter = &iter_val;
//  =========
//  User code
//  =========
                if (n_x < end_0 && n_y < end_1 && n_z < end_2) {
                    
   double Pwall = 0.0;
   double T1 = 0.0;
   double T2 = 0.0;
   double T3 = 0.0;
   double T4 = 0.0;
   double T_above = 0.0;
   double rho_halo_1 = 0.0;
   double rho_halo_2 = 0.0;
   double rho_halo_3 = 0.0;
   double rho_halo_4 = 0.0;
   double u01 = 0.0;
   double u02 = 0.0;
   double u03 = 0.0;
   double u04 = 0.0;
   double u11 = 0.0;
   double u12 = 0.0;
   double u13 = 0.0;
   double u14 = 0.0;
   double u21 = 0.0;
   double u22 = 0.0;
   double u23 = 0.0;
   double u24 = 0.0;
    rhou1_B0(0,0,0) = (cl::sycl::sin(dt_sycl[0]*omega_0_sycl[0]* *iter) + cl::sycl::sin(dt_sycl[0]*omega_1_sycl[0]* *iter + phi_0_sycl[0]) + cl::sycl::sin(dt_sycl[0]*omega_2_sycl[0]* *iter + phi_1_sycl[0]) +
      cl::sycl::sin(dt_sycl[0]*omega_3_sycl[0]* *iter + phi_2_sycl[0]))*tripA_sycl[0]*rho_B0(0,0,0)*cl::sycl::exp(-((-xts_sycl[0] + x0_B0(0,0,0))*(-xts_sycl[0] +
      x0_B0(0,0,0)))*b_f_sycl[0])*cl::sycl::sin(beta_0_sycl[0]*x2_B0(0,0,0));

   rhou0_B0(0,0,0) = 0.0;

   rhou2_B0(0,0,0) = 0.0;

   rhoE_B0(0,0,0) = Twall_sycl[0]*inv2Minf_sycl[0]*rho_B0(0,0,0)/(gama_sycl[0]*(-1.0 + gama_sycl[0]));

    Pwall = (-1 + gama_sycl[0])*(-(((1.0/2.0))*(rhou0_B0(0,0,0)*rhou0_B0(0,0,0)) + ((1.0/2.0))*(rhou1_B0(0,0,0)*rhou1_B0(0,0,0))
      + ((1.0/2.0))*(rhou2_B0(0,0,0)*rhou2_B0(0,0,0)))/rho_B0(0,0,0) + rhoE_B0(0,0,0));

   u01 = rhou0_B0(0,1,0)/rho_B0(0,1,0);

   u02 = rhou0_B0(0,2,0)/rho_B0(0,2,0);

   u03 = rhou0_B0(0,3,0)/rho_B0(0,3,0);

   u04 = rhou0_B0(0,4,0)/rho_B0(0,4,0);

   u11 = rhou1_B0(0,1,0)/rho_B0(0,1,0);

   u12 = rhou1_B0(0,2,0)/rho_B0(0,2,0);

   u13 = rhou1_B0(0,3,0)/rho_B0(0,3,0);

   u14 = rhou1_B0(0,4,0)/rho_B0(0,4,0);

   u21 = rhou2_B0(0,1,0)/rho_B0(0,1,0);

   u22 = rhou2_B0(0,2,0)/rho_B0(0,2,0);

   u23 = rhou2_B0(0,3,0)/rho_B0(0,3,0);

   u24 = rhou2_B0(0,4,0)/rho_B0(0,4,0);

    T_above = (Minf_sycl[0]*Minf_sycl[0])*(-1 + gama_sycl[0])*(-(((1.0/2.0))*(rhou0_B0(0,1,0)*rhou0_B0(0,1,0)) +
      ((1.0/2.0))*(rhou1_B0(0,1,0)*rhou1_B0(0,1,0)) + ((1.0/2.0))*(rhou2_B0(0,1,0)*rhou2_B0(0,1,0)))/rho_B0(0,1,0) +
      rhoE_B0(0,1,0))*gama_sycl[0]/rho_B0(0,1,0);

   T1 = -T_above + 2*Twall_sycl[0];

   T2 = -2*T_above + 3*Twall_sycl[0];

   T3 = -3*T_above + 4*Twall_sycl[0];

   T4 = -4*T_above + 5*Twall_sycl[0];

   rho_halo_1 = (Minf_sycl[0]*Minf_sycl[0])*gama_sycl[0]*Pwall/T1;

   rho_B0(0,-1,0) = rho_halo_1;

   rho_halo_2 = (Minf_sycl[0]*Minf_sycl[0])*gama_sycl[0]*Pwall/T2;

   rho_B0(0,-2,0) = rho_halo_2;

   rho_halo_3 = (Minf_sycl[0]*Minf_sycl[0])*gama_sycl[0]*Pwall/T3;

   rho_B0(0,-3,0) = rho_halo_3;

   rho_halo_4 = (Minf_sycl[0]*Minf_sycl[0])*gama_sycl[0]*Pwall/T4;

   rho_B0(0,-4,0) = rho_halo_4;

   rhou0_B0(0,-1,0) = -rho_halo_1*u01;

   rhou1_B0(0,-1,0) = -rho_halo_1*u11;

   rhou2_B0(0,-1,0) = -rho_halo_1*u21;

   rhou0_B0(0,-2,0) = -rho_halo_2*u02;

   rhou1_B0(0,-2,0) = -rho_halo_2*u12;

   rhou2_B0(0,-2,0) = -rho_halo_2*u22;

   rhou0_B0(0,-3,0) = -rho_halo_3*u03;

   rhou1_B0(0,-3,0) = -rho_halo_3*u13;

   rhou2_B0(0,-3,0) = -rho_halo_3*u23;

   rhou0_B0(0,-4,0) = -rho_halo_4*u04;

   rhou1_B0(0,-4,0) = -rho_halo_4*u14;

   rhou2_B0(0,-4,0) = -rho_halo_4*u24;

   rhoE_B0(0,-1,0) = inv_gamma_m1_sycl[0]*Pwall + ((1.0/2.0))*((u01*u01) + (u11*u11) + (u21*u21))*rho_halo_1;

   rhoE_B0(0,-2,0) = inv_gamma_m1_sycl[0]*Pwall + ((1.0/2.0))*((u02*u02) + (u12*u12) + (u22*u22))*rho_halo_2;

   rhoE_B0(0,-3,0) = inv_gamma_m1_sycl[0]*Pwall + ((1.0/2.0))*((u03*u03) + (u13*u13) + (u23*u23))*rho_halo_3;

   rhoE_B0(0,-4,0) = inv_gamma_m1_sycl[0]*Pwall + ((1.0/2.0))*((u04*u04) + (u14*u14) + (u24*u24))*rho_halo_4;


                }
            });
        });
    }

    if (block->instance->OPS_diags > 1) {
        block->instance->sycl_instance->queue->wait();
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[9].time += __t1 -__t2;
    }

#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 8);
    ops_set_halo_dirtybit3(&args[3], range);
    ops_set_halo_dirtybit3(&args[4], range);
    ops_set_halo_dirtybit3(&args[5], range);
    ops_set_halo_dirtybit3(&args[6], range);
    ops_set_halo_dirtybit3(&args[7], range);
#endif

    if (block->instance->OPS_diags > 1) {
//  ====================
//  Update kernel record
//  ====================
    ops_timers_core(&__c2, &__t2);
    block->instance->OPS_kernels[9].mpi_time += __t2 -__t1;
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg7);
}
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel063(
    const char *name,
    ops_block block,
    int dim,
    int* range,
    ops_arg arg0,
    ops_arg arg1,
    ops_arg arg2,
    ops_arg arg3,
    ops_arg arg4,
    ops_arg arg5,
    ops_arg arg6,
    ops_arg arg7
  )
{
    ops_arg args[8];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;

    create_kerneldesc_and_enque("opensbliblock00Kernel063", args, 8, 9, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel063_execute);
}
#endif
