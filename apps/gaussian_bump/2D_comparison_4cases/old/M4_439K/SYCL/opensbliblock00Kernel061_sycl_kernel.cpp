//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel061(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11,
 ops_arg arg12, ops_arg arg13, ops_arg arg14, ops_arg arg15,
 ops_arg arg16, ops_arg arg17, ops_arg arg18, ops_arg arg19,
 ops_arg arg20, ops_arg arg21, ops_arg arg22, ops_arg arg23,
 ops_arg arg24, ops_arg arg25, ops_arg arg26, ops_arg arg27,
 ops_arg arg28, ops_arg arg29, ops_arg arg30, ops_arg arg31,
 ops_arg arg32, ops_arg arg33, ops_arg arg34) {
#else
void ops_par_loop_opensbliblock00Kernel061_execute(ops_kernel_descriptor *desc) {
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
  ops_arg arg22 = desc->args[22];
  ops_arg arg23 = desc->args[23];
  ops_arg arg24 = desc->args[24];
  ops_arg arg25 = desc->args[25];
  ops_arg arg26 = desc->args[26];
  ops_arg arg27 = desc->args[27];
  ops_arg arg28 = desc->args[28];
  ops_arg arg29 = desc->args[29];
  ops_arg arg30 = desc->args[30];
  ops_arg arg31 = desc->args[31];
  ops_arg arg32 = desc->args[32];
  ops_arg arg33 = desc->args[33];
  ops_arg arg34 = desc->args[34];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[35] = { arg0, arg1, arg2, arg3, arg4,
 arg5, arg6, arg7, arg8, arg9,
 arg10, arg11, arg12, arg13, arg14,
 arg15, arg16, arg17, arg18, arg19,
 arg20, arg21, arg22, arg23, arg24,
 arg25, arg26, arg27, arg28, arg29,
 arg30, arg31, arg32, arg33, arg34};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,35,range,51)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,51,"opensbliblock00Kernel061");
    block->instance->OPS_kernels[51].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel061");
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
  if (compute_ranges(args, 35,block, range, start, end, arg_idx) < 0) return;
  #endif


  //initialize global variable with the dimension of dats
  int xdim0_opensbliblock00Kernel061 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel061 = args[1].dat->size[0];
  int xdim2_opensbliblock00Kernel061 = args[2].dat->size[0];
  int xdim3_opensbliblock00Kernel061 = args[3].dat->size[0];
  int xdim4_opensbliblock00Kernel061 = args[4].dat->size[0];
  int xdim5_opensbliblock00Kernel061 = args[5].dat->size[0];
  int xdim6_opensbliblock00Kernel061 = args[6].dat->size[0];
  int xdim7_opensbliblock00Kernel061 = args[7].dat->size[0];
  int xdim8_opensbliblock00Kernel061 = args[8].dat->size[0];
  int xdim9_opensbliblock00Kernel061 = args[9].dat->size[0];
  int xdim10_opensbliblock00Kernel061 = args[10].dat->size[0];
  int xdim11_opensbliblock00Kernel061 = args[11].dat->size[0];
  int xdim12_opensbliblock00Kernel061 = args[12].dat->size[0];
  int xdim13_opensbliblock00Kernel061 = args[13].dat->size[0];
  int xdim14_opensbliblock00Kernel061 = args[14].dat->size[0];
  int xdim15_opensbliblock00Kernel061 = args[15].dat->size[0];
  int xdim16_opensbliblock00Kernel061 = args[16].dat->size[0];
  int xdim17_opensbliblock00Kernel061 = args[17].dat->size[0];
  int xdim18_opensbliblock00Kernel061 = args[18].dat->size[0];
  int xdim19_opensbliblock00Kernel061 = args[19].dat->size[0];
  int xdim20_opensbliblock00Kernel061 = args[20].dat->size[0];
  int xdim21_opensbliblock00Kernel061 = args[21].dat->size[0];
  int xdim22_opensbliblock00Kernel061 = args[22].dat->size[0];
  int xdim23_opensbliblock00Kernel061 = args[23].dat->size[0];
  int xdim24_opensbliblock00Kernel061 = args[24].dat->size[0];
  int xdim25_opensbliblock00Kernel061 = args[25].dat->size[0];
  int xdim26_opensbliblock00Kernel061 = args[26].dat->size[0];
  int xdim27_opensbliblock00Kernel061 = args[27].dat->size[0];
  int xdim28_opensbliblock00Kernel061 = args[28].dat->size[0];
  int xdim29_opensbliblock00Kernel061 = args[29].dat->size[0];
  int xdim30_opensbliblock00Kernel061 = args[30].dat->size[0];
  int xdim31_opensbliblock00Kernel061 = args[31].dat->size[0];
  int xdim32_opensbliblock00Kernel061 = args[32].dat->size[0];
  int xdim33_opensbliblock00Kernel061 = args[33].dat->size[0];
  int xdim34_opensbliblock00Kernel061 = args[34].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset/sizeof(double);
  double* D00_B0_p = (double*)args[0].data_d;

  int base1 = args[1].dat->base_offset/sizeof(double);
  double* D01_B0_p = (double*)args[1].data_d;

  int base2 = args[2].dat->base_offset/sizeof(double);
  double* D10_B0_p = (double*)args[2].data_d;

  int base3 = args[3].dat->base_offset/sizeof(double);
  double* D11_B0_p = (double*)args[3].data_d;

  int base4 = args[4].dat->base_offset/sizeof(double);
  double* SD000_B0_p = (double*)args[4].data_d;

  int base5 = args[5].dat->base_offset/sizeof(double);
  double* SD001_B0_p = (double*)args[5].data_d;

  int base6 = args[6].dat->base_offset/sizeof(double);
  double* SD010_B0_p = (double*)args[6].data_d;

  int base7 = args[7].dat->base_offset/sizeof(double);
  double* SD011_B0_p = (double*)args[7].data_d;

  int base8 = args[8].dat->base_offset/sizeof(double);
  double* SD100_B0_p = (double*)args[8].data_d;

  int base9 = args[9].dat->base_offset/sizeof(double);
  double* SD101_B0_p = (double*)args[9].data_d;

  int base10 = args[10].dat->base_offset/sizeof(double);
  double* SD110_B0_p = (double*)args[10].data_d;

  int base11 = args[11].dat->base_offset/sizeof(double);
  double* SD111_B0_p = (double*)args[11].data_d;

  int base12 = args[12].dat->base_offset/sizeof(double);
  double* mu_B0_p = (double*)args[12].data_d;

  int base13 = args[13].dat->base_offset/sizeof(double);
  double* u0_B0_p = (double*)args[13].data_d;

  int base14 = args[14].dat->base_offset/sizeof(double);
  double* u1_B0_p = (double*)args[14].data_d;

  int base15 = args[15].dat->base_offset/sizeof(double);
  double* wk0_B0_p = (double*)args[15].data_d;

  int base16 = args[16].dat->base_offset/sizeof(double);
  double* wk10_B0_p = (double*)args[16].data_d;

  int base17 = args[17].dat->base_offset/sizeof(double);
  double* wk11_B0_p = (double*)args[17].data_d;

  int base18 = args[18].dat->base_offset/sizeof(double);
  double* wk12_B0_p = (double*)args[18].data_d;

  int base19 = args[19].dat->base_offset/sizeof(double);
  double* wk13_B0_p = (double*)args[19].data_d;

  int base20 = args[20].dat->base_offset/sizeof(double);
  double* wk14_B0_p = (double*)args[20].data_d;

  int base21 = args[21].dat->base_offset/sizeof(double);
  double* wk15_B0_p = (double*)args[21].data_d;

  int base22 = args[22].dat->base_offset/sizeof(double);
  double* wk16_B0_p = (double*)args[22].data_d;

  int base23 = args[23].dat->base_offset/sizeof(double);
  double* wk1_B0_p = (double*)args[23].data_d;

  int base24 = args[24].dat->base_offset/sizeof(double);
  double* wk2_B0_p = (double*)args[24].data_d;

  int base25 = args[25].dat->base_offset/sizeof(double);
  double* wk3_B0_p = (double*)args[25].data_d;

  int base26 = args[26].dat->base_offset/sizeof(double);
  double* wk4_B0_p = (double*)args[26].data_d;

  int base27 = args[27].dat->base_offset/sizeof(double);
  double* wk5_B0_p = (double*)args[27].data_d;

  int base28 = args[28].dat->base_offset/sizeof(double);
  double* wk6_B0_p = (double*)args[28].data_d;

  int base29 = args[29].dat->base_offset/sizeof(double);
  double* wk7_B0_p = (double*)args[29].data_d;

  int base30 = args[30].dat->base_offset/sizeof(double);
  double* wk8_B0_p = (double*)args[30].data_d;

  int base31 = args[31].dat->base_offset/sizeof(double);
  double* wk9_B0_p = (double*)args[31].data_d;

  int base32 = args[32].dat->base_offset/sizeof(double);
  double* Residual1_B0_p = (double*)args[32].data_d;

  int base33 = args[33].dat->base_offset/sizeof(double);
  double* Residual2_B0_p = (double*)args[33].data_d;

  int base34 = args[34].dat->base_offset/sizeof(double);
  double* Residual3_B0_p = (double*)args[34].data_d;



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_device(args, 35);
  ops_halo_exchanges(args,35,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[51].mpi_time += __t1-__t2;
  }

  int start_0 = start[0];
  int end_0 = end[0];
  int start_1 = start[1];
  int end_1 = end[1];
  if ((end[0]-start[0])>0 && (end[1]-start[1])>0) {
    block->instance->sycl_instance->queue->submit([&](cl::sycl::handler &cgh) {

      auto inv2Minf_sycl = (*inv2Minf_p).template get_access<cl::sycl::access::mode::read>(cgh);
      auto invPr_sycl = (*invPr_p).template get_access<cl::sycl::access::mode::read>(cgh);
      auto invRe_sycl = (*invRe_p).template get_access<cl::sycl::access::mode::read>(cgh);
      auto inv_gamma_m1_sycl = (*inv_gamma_m1_p).template get_access<cl::sycl::access::mode::read>(cgh);

      cgh.parallel_for<class opensbliblock00Kernel061_kernel>(cl::sycl::nd_range<2>(cl::sycl::range<2>(
           ((end[1]-start[1]-1)/block->instance->OPS_block_size_y+1)*block->instance->OPS_block_size_y,
            ((end[0]-start[0]-1)/block->instance->OPS_block_size_x+1)*block->instance->OPS_block_size_x
             ),cl::sycl::range<2>(
             block->instance->OPS_block_size_y,
      block->instance->OPS_block_size_x
             ))
      , [=](cl::sycl::nd_item<2> item
      ) [[intel::kernel_args_restrict]] {
        int n_y = item.get_global_id(0)+start_1;
        int n_x = item.get_global_id(1)+start_0;
        const ACC<double> D00_B0(xdim0_opensbliblock00Kernel061, &D00_B0_p[0] + base0 + n_x*1 + n_y * xdim0_opensbliblock00Kernel061*1);
        const ACC<double> D01_B0(xdim1_opensbliblock00Kernel061, &D01_B0_p[0] + base1 + n_x*1 + n_y * xdim1_opensbliblock00Kernel061*1);
        const ACC<double> D10_B0(xdim2_opensbliblock00Kernel061, &D10_B0_p[0] + base2 + n_x*1 + n_y * xdim2_opensbliblock00Kernel061*1);
        const ACC<double> D11_B0(xdim3_opensbliblock00Kernel061, &D11_B0_p[0] + base3 + n_x*1 + n_y * xdim3_opensbliblock00Kernel061*1);
        const ACC<double> SD000_B0(xdim4_opensbliblock00Kernel061, &SD000_B0_p[0] + base4 + n_x*1 + n_y * xdim4_opensbliblock00Kernel061*1);
        const ACC<double> SD001_B0(xdim5_opensbliblock00Kernel061, &SD001_B0_p[0] + base5 + n_x*1 + n_y * xdim5_opensbliblock00Kernel061*1);
        const ACC<double> SD010_B0(xdim6_opensbliblock00Kernel061, &SD010_B0_p[0] + base6 + n_x*1 + n_y * xdim6_opensbliblock00Kernel061*1);
        const ACC<double> SD011_B0(xdim7_opensbliblock00Kernel061, &SD011_B0_p[0] + base7 + n_x*1 + n_y * xdim7_opensbliblock00Kernel061*1);
        const ACC<double> SD100_B0(xdim8_opensbliblock00Kernel061, &SD100_B0_p[0] + base8 + n_x*1 + n_y * xdim8_opensbliblock00Kernel061*1);
        const ACC<double> SD101_B0(xdim9_opensbliblock00Kernel061, &SD101_B0_p[0] + base9 + n_x*1 + n_y * xdim9_opensbliblock00Kernel061*1);
        const ACC<double> SD110_B0(xdim10_opensbliblock00Kernel061, &SD110_B0_p[0] + base10 + n_x*1 + n_y * xdim10_opensbliblock00Kernel061*1);
        const ACC<double> SD111_B0(xdim11_opensbliblock00Kernel061, &SD111_B0_p[0] + base11 + n_x*1 + n_y * xdim11_opensbliblock00Kernel061*1);
        const ACC<double> mu_B0(xdim12_opensbliblock00Kernel061, &mu_B0_p[0] + base12 + n_x*1 + n_y * xdim12_opensbliblock00Kernel061*1);
        const ACC<double> u0_B0(xdim13_opensbliblock00Kernel061, &u0_B0_p[0] + base13 + n_x*1 + n_y * xdim13_opensbliblock00Kernel061*1);
        const ACC<double> u1_B0(xdim14_opensbliblock00Kernel061, &u1_B0_p[0] + base14 + n_x*1 + n_y * xdim14_opensbliblock00Kernel061*1);
        const ACC<double> wk0_B0(xdim15_opensbliblock00Kernel061, &wk0_B0_p[0] + base15 + n_x*1 + n_y * xdim15_opensbliblock00Kernel061*1);
        const ACC<double> wk10_B0(xdim16_opensbliblock00Kernel061, &wk10_B0_p[0] + base16 + n_x*1 + n_y * xdim16_opensbliblock00Kernel061*1);
        const ACC<double> wk11_B0(xdim17_opensbliblock00Kernel061, &wk11_B0_p[0] + base17 + n_x*1 + n_y * xdim17_opensbliblock00Kernel061*1);
        const ACC<double> wk12_B0(xdim18_opensbliblock00Kernel061, &wk12_B0_p[0] + base18 + n_x*1 + n_y * xdim18_opensbliblock00Kernel061*1);
        const ACC<double> wk13_B0(xdim19_opensbliblock00Kernel061, &wk13_B0_p[0] + base19 + n_x*1 + n_y * xdim19_opensbliblock00Kernel061*1);
        const ACC<double> wk14_B0(xdim20_opensbliblock00Kernel061, &wk14_B0_p[0] + base20 + n_x*1 + n_y * xdim20_opensbliblock00Kernel061*1);
        const ACC<double> wk15_B0(xdim21_opensbliblock00Kernel061, &wk15_B0_p[0] + base21 + n_x*1 + n_y * xdim21_opensbliblock00Kernel061*1);
        const ACC<double> wk16_B0(xdim22_opensbliblock00Kernel061, &wk16_B0_p[0] + base22 + n_x*1 + n_y * xdim22_opensbliblock00Kernel061*1);
        const ACC<double> wk1_B0(xdim23_opensbliblock00Kernel061, &wk1_B0_p[0] + base23 + n_x*1 + n_y * xdim23_opensbliblock00Kernel061*1);
        const ACC<double> wk2_B0(xdim24_opensbliblock00Kernel061, &wk2_B0_p[0] + base24 + n_x*1 + n_y * xdim24_opensbliblock00Kernel061*1);
        const ACC<double> wk3_B0(xdim25_opensbliblock00Kernel061, &wk3_B0_p[0] + base25 + n_x*1 + n_y * xdim25_opensbliblock00Kernel061*1);
        const ACC<double> wk4_B0(xdim26_opensbliblock00Kernel061, &wk4_B0_p[0] + base26 + n_x*1 + n_y * xdim26_opensbliblock00Kernel061*1);
        const ACC<double> wk5_B0(xdim27_opensbliblock00Kernel061, &wk5_B0_p[0] + base27 + n_x*1 + n_y * xdim27_opensbliblock00Kernel061*1);
        const ACC<double> wk6_B0(xdim28_opensbliblock00Kernel061, &wk6_B0_p[0] + base28 + n_x*1 + n_y * xdim28_opensbliblock00Kernel061*1);
        const ACC<double> wk7_B0(xdim29_opensbliblock00Kernel061, &wk7_B0_p[0] + base29 + n_x*1 + n_y * xdim29_opensbliblock00Kernel061*1);
        const ACC<double> wk8_B0(xdim30_opensbliblock00Kernel061, &wk8_B0_p[0] + base30 + n_x*1 + n_y * xdim30_opensbliblock00Kernel061*1);
        const ACC<double> wk9_B0(xdim31_opensbliblock00Kernel061, &wk9_B0_p[0] + base31 + n_x*1 + n_y * xdim31_opensbliblock00Kernel061*1);
        ACC<double> Residual1_B0(xdim32_opensbliblock00Kernel061, &Residual1_B0_p[0] + base32 + n_x*1 + n_y * xdim32_opensbliblock00Kernel061*1);
        ACC<double> Residual2_B0(xdim33_opensbliblock00Kernel061, &Residual2_B0_p[0] + base33 + n_x*1 + n_y * xdim33_opensbliblock00Kernel061*1);
        ACC<double> Residual3_B0(xdim34_opensbliblock00Kernel061, &Residual3_B0_p[0] + base34 + n_x*1 + n_y * xdim34_opensbliblock00Kernel061*1);
        //USER CODE
        if (n_x < end_0 && n_y < end_1) {
          
    Residual1_B0(0,0) = (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk10_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk16_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk14_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0] + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) + D01_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0] + ((D01_B0(0,0)*D01_B0(0,0))*wk1_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk8_B0(0,0) +
      ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk1_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk8_B0(0,0) +
      D01_B0(0,0)*wk7_B0(0,0)*SD110_B0(0,0) + D01_B0(0,0)*wk10_B0(0,0)*SD000_B0(0,0) +
      D01_B0(0,0)*wk14_B0(0,0)*SD010_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0)*SD100_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0)*SD111_B0(0,0) + D11_B0(0,0)*wk10_B0(0,0)*SD001_B0(0,0) +
      D11_B0(0,0)*wk14_B0(0,0)*SD011_B0(0,0) + D11_B0(0,0)*wk16_B0(0,0)*SD101_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk10_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk16_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk10_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk16_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk9_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk11_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk7_B0(0,0)*SD100_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk14_B0(0,0)*SD000_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk7_B0(0,0)*SD101_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk14_B0(0,0)*SD001_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) + Residual1_B0(0,0);

    Residual2_B0(0,0) = (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) +
      D01_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0) + D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0] + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk14_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk7_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk10_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk16_B0(0,0))*invRe_sycl[0] +
      ((D00_B0(0,0)*D00_B0(0,0))*wk9_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk11_B0(0,0) +
      ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk9_B0(0,0) + ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk11_B0(0,0) +
      D00_B0(0,0)*wk7_B0(0,0)*SD110_B0(0,0) + D00_B0(0,0)*wk10_B0(0,0)*SD000_B0(0,0) +
      D00_B0(0,0)*wk14_B0(0,0)*SD010_B0(0,0) + D00_B0(0,0)*wk16_B0(0,0)*SD100_B0(0,0) +
      D10_B0(0,0)*wk7_B0(0,0)*SD111_B0(0,0) + D10_B0(0,0)*wk10_B0(0,0)*SD001_B0(0,0) +
      D10_B0(0,0)*wk14_B0(0,0)*SD011_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0)*SD101_B0(0,0) +
      2*D00_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk7_B0(0,0)*SD100_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk14_B0(0,0)*SD000_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk7_B0(0,0)*SD101_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk14_B0(0,0)*SD001_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk1_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk8_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk10_B0(0,0)*SD010_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk16_B0(0,0)*SD110_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk10_B0(0,0)*SD011_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk16_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) + Residual2_B0(0,0);

    Residual3_B0(0,0) = (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) +
      D01_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0) + D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*u1_B0(0,0) +
      (D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk10_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk16_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk14_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*u0_B0(0,0) + (D00_B0(0,0)*wk10_B0(0,0) +
      D10_B0(0,0)*wk16_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) + D01_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) + (D00_B0(0,0)*wk14_B0(0,0) +
      D10_B0(0,0)*wk7_B0(0,0))*(-(2.0/3.0)*D01_B0(0,0)*wk10_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk16_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk14_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) +
      (D01_B0(0,0)*wk4_B0(0,0) + D11_B0(0,0)*wk0_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) + D01_B0(0,0)*wk14_B0(0,0) +
      D10_B0(0,0)*wk16_B0(0,0) + D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*u0_B0(0,0) + (D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk14_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk7_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk10_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk16_B0(0,0))*invRe_sycl[0]*u1_B0(0,0) +
      (D01_B0(0,0)*wk10_B0(0,0) + D11_B0(0,0)*wk16_B0(0,0))*(-(2.0/3.0)*D00_B0(0,0)*wk14_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk7_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk10_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk16_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) + (D01_B0(0,0)*wk14_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0))*(D00_B0(0,0)*wk10_B0(0,0) + D01_B0(0,0)*wk14_B0(0,0) + D10_B0(0,0)*wk16_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0))*invRe_sycl[0]*mu_B0(0,0) + ((D00_B0(0,0)*D00_B0(0,0))*wk9_B0(0,0) +
      (D10_B0(0,0)*D10_B0(0,0))*wk11_B0(0,0) + ((4.0/3.0))*(D01_B0(0,0)*D01_B0(0,0))*wk9_B0(0,0) +
      ((4.0/3.0))*(D11_B0(0,0)*D11_B0(0,0))*wk11_B0(0,0) + D00_B0(0,0)*wk7_B0(0,0)*SD110_B0(0,0) +
      D00_B0(0,0)*wk10_B0(0,0)*SD000_B0(0,0) + D00_B0(0,0)*wk14_B0(0,0)*SD010_B0(0,0) +
      D00_B0(0,0)*wk16_B0(0,0)*SD100_B0(0,0) + D10_B0(0,0)*wk7_B0(0,0)*SD111_B0(0,0) +
      D10_B0(0,0)*wk10_B0(0,0)*SD001_B0(0,0) + D10_B0(0,0)*wk14_B0(0,0)*SD011_B0(0,0) +
      D10_B0(0,0)*wk16_B0(0,0)*SD101_B0(0,0) + 2*D00_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) -
      (2.0/3.0)*D01_B0(0,0)*wk7_B0(0,0)*SD100_B0(0,0) - (2.0/3.0)*D01_B0(0,0)*wk14_B0(0,0)*SD000_B0(0,0) -
      (2.0/3.0)*D11_B0(0,0)*wk7_B0(0,0)*SD101_B0(0,0) - (2.0/3.0)*D11_B0(0,0)*wk14_B0(0,0)*SD001_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk1_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) +
      ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0) + ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk8_B0(0,0) +
      ((4.0/3.0))*D01_B0(0,0)*wk10_B0(0,0)*SD010_B0(0,0) + ((4.0/3.0))*D01_B0(0,0)*wk16_B0(0,0)*SD110_B0(0,0) +
      ((4.0/3.0))*D11_B0(0,0)*wk10_B0(0,0)*SD011_B0(0,0) + ((4.0/3.0))*D11_B0(0,0)*wk16_B0(0,0)*SD111_B0(0,0) +
      ((8.0/3.0))*D01_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0))*invRe_sycl[0]*mu_B0(0,0)*u1_B0(0,0) +
      ((D01_B0(0,0)*D01_B0(0,0))*wk1_B0(0,0) + (D11_B0(0,0)*D11_B0(0,0))*wk8_B0(0,0) +
      ((4.0/3.0))*(D00_B0(0,0)*D00_B0(0,0))*wk1_B0(0,0) + ((4.0/3.0))*(D10_B0(0,0)*D10_B0(0,0))*wk8_B0(0,0) +
      D01_B0(0,0)*wk7_B0(0,0)*SD110_B0(0,0) + D01_B0(0,0)*wk10_B0(0,0)*SD000_B0(0,0) +
      D01_B0(0,0)*wk14_B0(0,0)*SD010_B0(0,0) + D01_B0(0,0)*wk16_B0(0,0)*SD100_B0(0,0) +
      D11_B0(0,0)*wk7_B0(0,0)*SD111_B0(0,0) + D11_B0(0,0)*wk10_B0(0,0)*SD001_B0(0,0) +
      D11_B0(0,0)*wk14_B0(0,0)*SD011_B0(0,0) + D11_B0(0,0)*wk16_B0(0,0)*SD101_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk13_B0(0,0) - (2.0/3.0)*D00_B0(0,0)*wk10_B0(0,0)*SD010_B0(0,0) -
      (2.0/3.0)*D00_B0(0,0)*wk16_B0(0,0)*SD110_B0(0,0) - (2.0/3.0)*D10_B0(0,0)*wk10_B0(0,0)*SD011_B0(0,0) -
      (2.0/3.0)*D10_B0(0,0)*wk16_B0(0,0)*SD111_B0(0,0) + ((1.0/3.0))*D00_B0(0,0)*D01_B0(0,0)*wk9_B0(0,0) +
      ((1.0/3.0))*D00_B0(0,0)*D11_B0(0,0)*wk5_B0(0,0) + ((1.0/3.0))*D01_B0(0,0)*D10_B0(0,0)*wk5_B0(0,0) +
      ((1.0/3.0))*D10_B0(0,0)*D11_B0(0,0)*wk11_B0(0,0) + ((4.0/3.0))*D00_B0(0,0)*wk7_B0(0,0)*SD100_B0(0,0) +
      ((4.0/3.0))*D00_B0(0,0)*wk14_B0(0,0)*SD000_B0(0,0) + ((4.0/3.0))*D10_B0(0,0)*wk7_B0(0,0)*SD101_B0(0,0) +
      ((4.0/3.0))*D10_B0(0,0)*wk14_B0(0,0)*SD001_B0(0,0) +
      ((8.0/3.0))*D00_B0(0,0)*D10_B0(0,0)*wk13_B0(0,0))*invRe_sycl[0]*mu_B0(0,0)*u0_B0(0,0) + (D00_B0(0,0)*wk2_B0(0,0) +
      D10_B0(0,0)*wk15_B0(0,0))*(D00_B0(0,0)*wk4_B0(0,0) + D10_B0(0,0)*wk0_B0(0,0))*invPr_sycl[0]*invRe_sycl[0]*inv2Minf_sycl[0]*inv_gamma_m1_sycl[0] +
      (D01_B0(0,0)*wk2_B0(0,0) + D11_B0(0,0)*wk15_B0(0,0))*(D01_B0(0,0)*wk4_B0(0,0) +
      D11_B0(0,0)*wk0_B0(0,0))*invPr_sycl[0]*invRe_sycl[0]*inv2Minf_sycl[0]*inv_gamma_m1_sycl[0] + ((D00_B0(0,0)*D00_B0(0,0))*wk12_B0(0,0) +
      (D01_B0(0,0)*D01_B0(0,0))*wk12_B0(0,0) + (D10_B0(0,0)*D10_B0(0,0))*wk3_B0(0,0) +
      (D11_B0(0,0)*D11_B0(0,0))*wk3_B0(0,0) + D00_B0(0,0)*wk2_B0(0,0)*SD000_B0(0,0) +
      D00_B0(0,0)*wk15_B0(0,0)*SD100_B0(0,0) + D01_B0(0,0)*wk2_B0(0,0)*SD010_B0(0,0) +
      D01_B0(0,0)*wk15_B0(0,0)*SD110_B0(0,0) + D10_B0(0,0)*wk2_B0(0,0)*SD001_B0(0,0) +
      D10_B0(0,0)*wk15_B0(0,0)*SD101_B0(0,0) + D11_B0(0,0)*wk2_B0(0,0)*SD011_B0(0,0) +
      D11_B0(0,0)*wk15_B0(0,0)*SD111_B0(0,0) + 2*D00_B0(0,0)*D10_B0(0,0)*wk6_B0(0,0) +
      2*D01_B0(0,0)*D11_B0(0,0)*wk6_B0(0,0))*invPr_sycl[0]*invRe_sycl[0]*inv2Minf_sycl[0]*inv_gamma_m1_sycl[0]*mu_B0(0,0) + Residual3_B0(0,0);


        }
      });
    });
  }
  if (block->instance->OPS_diags > 1) {
    block->instance->sycl_instance->queue->wait();
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[51].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 35);
  ops_set_halo_dirtybit3(&args[32],range);
  ops_set_halo_dirtybit3(&args[33],range);
  ops_set_halo_dirtybit3(&args[34],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[51].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg10);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg11);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg12);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg13);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg14);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg15);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg16);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg17);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg18);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg19);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg20);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg21);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg22);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg23);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg24);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg25);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg26);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg27);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg28);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg29);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg30);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg31);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg32);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg33);
    block->instance->OPS_kernels[51].transfer += ops_compute_transfer(dim, start, end, &arg34);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel061(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11,
 ops_arg arg12, ops_arg arg13, ops_arg arg14, ops_arg arg15,
 ops_arg arg16, ops_arg arg17, ops_arg arg18, ops_arg arg19,
 ops_arg arg20, ops_arg arg21, ops_arg arg22, ops_arg arg23,
 ops_arg arg24, ops_arg arg25, ops_arg arg26, ops_arg arg27,
 ops_arg arg28, ops_arg arg29, ops_arg arg30, ops_arg arg31,
 ops_arg arg32, ops_arg arg33, ops_arg arg34) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 1;
  desc->index = 51;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 51;
  for ( int i=0; i<4; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 35;
  desc->args = (ops_arg*)ops_malloc(35*sizeof(ops_arg));
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
  desc->args[6] = arg6;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg6.dat->index;
  desc->args[7] = arg7;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg7.dat->index;
  desc->args[8] = arg8;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg8.dat->index;
  desc->args[9] = arg9;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg9.dat->index;
  desc->args[10] = arg10;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg10.dat->index;
  desc->args[11] = arg11;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg11.dat->index;
  desc->args[12] = arg12;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg12.dat->index;
  desc->args[13] = arg13;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg13.dat->index;
  desc->args[14] = arg14;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg14.dat->index;
  desc->args[15] = arg15;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg15.dat->index;
  desc->args[16] = arg16;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg16.dat->index;
  desc->args[17] = arg17;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg17.dat->index;
  desc->args[18] = arg18;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg18.dat->index;
  desc->args[19] = arg19;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg19.dat->index;
  desc->args[20] = arg20;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg20.dat->index;
  desc->args[21] = arg21;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg21.dat->index;
  desc->args[22] = arg22;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg22.dat->index;
  desc->args[23] = arg23;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg23.dat->index;
  desc->args[24] = arg24;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg24.dat->index;
  desc->args[25] = arg25;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg25.dat->index;
  desc->args[26] = arg26;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg26.dat->index;
  desc->args[27] = arg27;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg27.dat->index;
  desc->args[28] = arg28;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg28.dat->index;
  desc->args[29] = arg29;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg29.dat->index;
  desc->args[30] = arg30;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg30.dat->index;
  desc->args[31] = arg31;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg31.dat->index;
  desc->args[32] = arg32;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg32.dat->index;
  desc->args[33] = arg33;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg33.dat->index;
  desc->args[34] = arg34;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg34.dat->index;
  desc->function = ops_par_loop_opensbliblock00Kernel061_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,51,"opensbliblock00Kernel061");
  }
  ops_enqueue_kernel(desc);
}
#endif
