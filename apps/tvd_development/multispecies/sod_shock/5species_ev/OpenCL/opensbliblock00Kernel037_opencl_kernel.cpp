//
// auto-generated by ops.py
//

    #ifdef OCL_FMA_SWITCH_ON
    #define OCL_FMA 1
    #else
    #define OCL_FMA 0
    #endif


    static bool isbuilt_opensbliblock00Kernel037 = false;

    void buildOpenCLKernels_opensbliblock00Kernel037(OPS_instance *instance, int xdim0, int xdim1, int xdim2, int xdim3, int xdim4, int xdim5, int xdim6, int xdim7, int xdim8, int xdim9, int xdim10, int xdim11, int xdim12, int xdim13, int xdim14, int xdim15, int xdim16, int xdim17, int xdim18, int xdim19, int xdim20) {

      //int ocl_fma = OCL_FMA;
      if(!isbuilt_opensbliblock00Kernel037) {
        buildOpenCLKernels(instance);
        //clSafeCall( clUnloadCompiler() );
        cl_int ret;
        char* source_filename[1] = {(char*)"./OpenCL/opensbliblock00Kernel037.cl"};

        // Load the kernel source code into the array source_str
        FILE *fid;
        char *source_str[1] = {NULL};
        size_t source_size[1];

        for(int i=0; i<1; i++) {
          fid = fopen(source_filename[i], "r");
          if (!fid) {
            OPSException e(OPS_RUNTIME_ERROR, "Can't open the kernel source file: ");
            e << source_filename[i] << "\n";
            throw e;
          }

          source_str[i] = (char*)malloc(4*0x1000000);
          source_size[i] = fread(source_str[i], 1, 4*0x1000000, fid);
          if(source_size[i] != 4*0x1000000) {
            if (ferror(fid)) {
              OPSException e(OPS_RUNTIME_ERROR, "Error while reading kernel source file ");
              e << source_filename[i] << "\n";
              throw e;
            }
            if (feof(fid))
              instance->ostream() << "Kernel source file "<< source_filename[i] <<" succesfully read.\n";
          }
          fclose(fid);
        }

        instance->ostream() <<"Compiling opensbliblock00Kernel037 "<<OCL_FMA<<" source -- start \n";

          // Create a program from the source
          instance->opencl_instance->OPS_opencl_core.program = clCreateProgramWithSource(instance->opencl_instance->OPS_opencl_core.context, 1, (const char **) &source_str, (const size_t *) &source_size, &ret);
          clSafeCall( ret );

          // Build the program
          char buildOpts[512*22];
          char* pPath = NULL;
          pPath = getenv ("OPS_INSTALL_PATH");
          if (pPath!=NULL)
            if(OCL_FMA)
              sprintf(buildOpts,"-cl-mad-enable -DOCL_FMA -I%s/include -DOPS_WARPSIZE=%d  -Dxdim0_opensbliblock00Kernel037=%d  -Dxdim1_opensbliblock00Kernel037=%d  -Dxdim2_opensbliblock00Kernel037=%d  -Dxdim3_opensbliblock00Kernel037=%d  -Dxdim4_opensbliblock00Kernel037=%d  -Dxdim5_opensbliblock00Kernel037=%d  -Dxdim6_opensbliblock00Kernel037=%d  -Dxdim7_opensbliblock00Kernel037=%d  -Dxdim8_opensbliblock00Kernel037=%d  -Dxdim9_opensbliblock00Kernel037=%d  -Dxdim10_opensbliblock00Kernel037=%d  -Dxdim11_opensbliblock00Kernel037=%d  -Dxdim12_opensbliblock00Kernel037=%d  -Dxdim13_opensbliblock00Kernel037=%d  -Dxdim14_opensbliblock00Kernel037=%d  -Dxdim15_opensbliblock00Kernel037=%d  -Dxdim16_opensbliblock00Kernel037=%d  -Dxdim17_opensbliblock00Kernel037=%d  -Dxdim18_opensbliblock00Kernel037=%d  -Dxdim19_opensbliblock00Kernel037=%d  -Dxdim20_opensbliblock00Kernel037=%d ", pPath, 32,xdim0,xdim1,xdim2,xdim3,xdim4,xdim5,xdim6,xdim7,xdim8,xdim9,xdim10,xdim11,xdim12,xdim13,xdim14,xdim15,xdim16,xdim17,xdim18,xdim19,xdim20);
            else
              sprintf(buildOpts,"-cl-mad-enable -I%s/include -DOPS_WARPSIZE=%d  -Dxdim0_opensbliblock00Kernel037=%d  -Dxdim1_opensbliblock00Kernel037=%d  -Dxdim2_opensbliblock00Kernel037=%d  -Dxdim3_opensbliblock00Kernel037=%d  -Dxdim4_opensbliblock00Kernel037=%d  -Dxdim5_opensbliblock00Kernel037=%d  -Dxdim6_opensbliblock00Kernel037=%d  -Dxdim7_opensbliblock00Kernel037=%d  -Dxdim8_opensbliblock00Kernel037=%d  -Dxdim9_opensbliblock00Kernel037=%d  -Dxdim10_opensbliblock00Kernel037=%d  -Dxdim11_opensbliblock00Kernel037=%d  -Dxdim12_opensbliblock00Kernel037=%d  -Dxdim13_opensbliblock00Kernel037=%d  -Dxdim14_opensbliblock00Kernel037=%d  -Dxdim15_opensbliblock00Kernel037=%d  -Dxdim16_opensbliblock00Kernel037=%d  -Dxdim17_opensbliblock00Kernel037=%d  -Dxdim18_opensbliblock00Kernel037=%d  -Dxdim19_opensbliblock00Kernel037=%d  -Dxdim20_opensbliblock00Kernel037=%d ", pPath, 32,xdim0,xdim1,xdim2,xdim3,xdim4,xdim5,xdim6,xdim7,xdim8,xdim9,xdim10,xdim11,xdim12,xdim13,xdim14,xdim15,xdim16,xdim17,xdim18,xdim19,xdim20);
          else {
            sprintf((char*)"Incorrect OPS_INSTALL_PATH %s\n",pPath);
            exit(EXIT_FAILURE);
          }

          #ifdef OPS_SOA
          sprintf(buildOpts, "%s -DOPS_SOA", buildOpts);
          #endif
          sprintf(buildOpts, "%s -I%s/c/include", buildOpts, pPath);
          ret = clBuildProgram(instance->opencl_instance->OPS_opencl_core.program, 1, &instance->opencl_instance->OPS_opencl_core.device_id, buildOpts, NULL, NULL);

          if(ret != CL_SUCCESS) {
            char* build_log;
            size_t log_size;
            clSafeCall( clGetProgramBuildInfo(instance->opencl_instance->OPS_opencl_core.program, instance->opencl_instance->OPS_opencl_core.device_id, CL_PROGRAM_BUILD_LOG, 0, NULL, &log_size) );
            build_log = (char*) malloc(log_size+1);
            clSafeCall( clGetProgramBuildInfo(instance->opencl_instance->OPS_opencl_core.program, instance->opencl_instance->OPS_opencl_core.device_id, CL_PROGRAM_BUILD_LOG, log_size, build_log, NULL) );
            build_log[log_size] = '\0';
            instance->ostream() << "=============== OpenCL Program Build Info ================\n\n" << build_log;
            instance->ostream() << "\n========================================================= \n";
            free(build_log);
            exit(EXIT_FAILURE);
          }
          instance->ostream() << "compiling opensbliblock00Kernel037 -- done\n";

        // Create the OpenCL kernel
        instance->opencl_instance->OPS_opencl_core.kernel[44] = clCreateKernel(instance->opencl_instance->OPS_opencl_core.program, "ops_opensbliblock00Kernel037", &ret);
        clSafeCall( ret );

        isbuilt_opensbliblock00Kernel037 = true;
        free(source_str[0]);
      }

    }

    
// host stub function
void ops_par_loop_opensbliblock00Kernel037(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11,
 ops_arg arg12, ops_arg arg13, ops_arg arg14, ops_arg arg15,
 ops_arg arg16, ops_arg arg17, ops_arg arg18, ops_arg arg19,
 ops_arg arg20, ops_arg arg21) {

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[22] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21};


  #ifdef CHECKPOINTING
  if (!ops_checkpointing_before(args,22,range,44)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,44,"opensbliblock00Kernel037");
    block->instance->OPS_kernels[44].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[1];
  int end[1];
  #ifdef OPS_MPI
  sub_block_list sb = OPS_sub_block_list[block->index];
  if (!sb->owned) return;
  for ( int n=0; n<1; n++ ){
    start[n] = sb->decomp_disp[n];end[n] = sb->decomp_disp[n]+sb->decomp_size[n];
    if (start[n] >= range[2*n]) {
      start[n] = 0;
    }
    else {
      start[n] = range[2*n] - start[n];
    }
    if (sb->id_m[n]==MPI_PROC_NULL && range[2*n] < 0) start[n] = range[2*n];
    if (end[n] >= range[2*n+1]) {
      end[n] = range[2*n+1] - sb->decomp_disp[n];
    }
    else {
      end[n] = sb->decomp_size[n];
    }
    if (sb->id_p[n]==MPI_PROC_NULL && (range[2*n+1] > sb->decomp_disp[n]+sb->decomp_size[n]))
      end[n] += (range[2*n+1]-sb->decomp_disp[n]-sb->decomp_size[n]);
  }
  #else
  for ( int n=0; n<1; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #endif

  int x_size = MAX(0,end[0]-start[0]);

  int arg_idx[1];
  #ifdef OPS_MPI
  arg_idx[0] = sb->decomp_disp[0]+start[0];
  #else
  arg_idx[0] = start[0];
  #endif

  int xdim0 = args[0].dat->size[0];
  int xdim1 = args[1].dat->size[0];
  int xdim2 = args[2].dat->size[0];
  int xdim3 = args[3].dat->size[0];
  int xdim4 = args[4].dat->size[0];
  int xdim5 = args[5].dat->size[0];
  int xdim6 = args[6].dat->size[0];
  int xdim7 = args[7].dat->size[0];
  int xdim8 = args[8].dat->size[0];
  int xdim9 = args[9].dat->size[0];
  int xdim10 = args[10].dat->size[0];
  int xdim11 = args[11].dat->size[0];
  int xdim12 = args[12].dat->size[0];
  int xdim13 = args[13].dat->size[0];
  int xdim14 = args[14].dat->size[0];
  int xdim15 = args[15].dat->size[0];
  int xdim16 = args[16].dat->size[0];
  int xdim17 = args[17].dat->size[0];
  int xdim18 = args[18].dat->size[0];
  int xdim19 = args[19].dat->size[0];
  int xdim20 = args[20].dat->size[0];

  //build opencl kernel if not already built

  buildOpenCLKernels_opensbliblock00Kernel037(block->instance,
  xdim0,xdim1,xdim2,xdim3,xdim4,xdim5,xdim6,xdim7,xdim8,xdim9,xdim10,xdim11,xdim12,xdim13,xdim14,xdim15,xdim16,xdim17,xdim18,xdim19,xdim20);

  //set up OpenCL thread blocks
  size_t globalWorkSize[3] = {static_cast<size_t>(((x_size-1)/block->instance->OPS_block_size_x+ 1)*block->instance->OPS_block_size_x), static_cast<size_t>(1), static_cast<size_t>(1)};
  size_t localWorkSize[3] =  {static_cast<size_t>(block->instance->OPS_block_size_x),static_cast<size_t>(1),static_cast<size_t>(1)};






  //set up initial pointers
  int d_m[OPS_MAX_DIM];
  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[0].dat->d_m[d] + OPS_sub_dat_list[args[0].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[0].dat->d_m[d];
  #endif
  int base0 = 1 *1*
  (start[0] * args[0].stencil->stride[0] - args[0].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[1].dat->d_m[d] + OPS_sub_dat_list[args[1].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[1].dat->d_m[d];
  #endif
  int base1 = 1 *1*
  (start[0] * args[1].stencil->stride[0] - args[1].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[2].dat->d_m[d] + OPS_sub_dat_list[args[2].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[2].dat->d_m[d];
  #endif
  int base2 = 1 *1*
  (start[0] * args[2].stencil->stride[0] - args[2].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[3].dat->d_m[d] + OPS_sub_dat_list[args[3].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[3].dat->d_m[d];
  #endif
  int base3 = 1 *1*
  (start[0] * args[3].stencil->stride[0] - args[3].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[4].dat->d_m[d] + OPS_sub_dat_list[args[4].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[4].dat->d_m[d];
  #endif
  int base4 = 1 *1*
  (start[0] * args[4].stencil->stride[0] - args[4].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[5].dat->d_m[d] + OPS_sub_dat_list[args[5].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[5].dat->d_m[d];
  #endif
  int base5 = 1 *1*
  (start[0] * args[5].stencil->stride[0] - args[5].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[6].dat->d_m[d] + OPS_sub_dat_list[args[6].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[6].dat->d_m[d];
  #endif
  int base6 = 1 *1*
  (start[0] * args[6].stencil->stride[0] - args[6].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[7].dat->d_m[d] + OPS_sub_dat_list[args[7].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[7].dat->d_m[d];
  #endif
  int base7 = 1 *1*
  (start[0] * args[7].stencil->stride[0] - args[7].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[8].dat->d_m[d] + OPS_sub_dat_list[args[8].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[8].dat->d_m[d];
  #endif
  int base8 = 1 *1*
  (start[0] * args[8].stencil->stride[0] - args[8].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[9].dat->d_m[d] + OPS_sub_dat_list[args[9].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[9].dat->d_m[d];
  #endif
  int base9 = 1 *1*
  (start[0] * args[9].stencil->stride[0] - args[9].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[10].dat->d_m[d] + OPS_sub_dat_list[args[10].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[10].dat->d_m[d];
  #endif
  int base10 = 1 *1*
  (start[0] * args[10].stencil->stride[0] - args[10].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[11].dat->d_m[d] + OPS_sub_dat_list[args[11].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[11].dat->d_m[d];
  #endif
  int base11 = 1 *1*
  (start[0] * args[11].stencil->stride[0] - args[11].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[12].dat->d_m[d] + OPS_sub_dat_list[args[12].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[12].dat->d_m[d];
  #endif
  int base12 = 1 *1*
  (start[0] * args[12].stencil->stride[0] - args[12].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[13].dat->d_m[d] + OPS_sub_dat_list[args[13].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[13].dat->d_m[d];
  #endif
  int base13 = 1 *1*
  (start[0] * args[13].stencil->stride[0] - args[13].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[14].dat->d_m[d] + OPS_sub_dat_list[args[14].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[14].dat->d_m[d];
  #endif
  int base14 = 1 *1*
  (start[0] * args[14].stencil->stride[0] - args[14].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[15].dat->d_m[d] + OPS_sub_dat_list[args[15].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[15].dat->d_m[d];
  #endif
  int base15 = 1 *1*
  (start[0] * args[15].stencil->stride[0] - args[15].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[16].dat->d_m[d] + OPS_sub_dat_list[args[16].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[16].dat->d_m[d];
  #endif
  int base16 = 1 *1*
  (start[0] * args[16].stencil->stride[0] - args[16].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[17].dat->d_m[d] + OPS_sub_dat_list[args[17].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[17].dat->d_m[d];
  #endif
  int base17 = 1 *1*
  (start[0] * args[17].stencil->stride[0] - args[17].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[18].dat->d_m[d] + OPS_sub_dat_list[args[18].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[18].dat->d_m[d];
  #endif
  int base18 = 1 *1*
  (start[0] * args[18].stencil->stride[0] - args[18].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[19].dat->d_m[d] + OPS_sub_dat_list[args[19].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[19].dat->d_m[d];
  #endif
  int base19 = 1 *1*
  (start[0] * args[19].stencil->stride[0] - args[19].dat->base[0] - d_m[0]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[20].dat->d_m[d] + OPS_sub_dat_list[args[20].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[20].dat->d_m[d];
  #endif
  int base20 = 1 *1*
  (start[0] * args[20].stencil->stride[0] - args[20].dat->base[0] - d_m[0]);


  ops_H_D_exchanges_device(args, 22);
  ops_halo_exchanges(args,22,range);
  ops_H_D_exchanges_device(args, 22);

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[44].mpi_time += t2-t1;
  }

  if (globalWorkSize[0]>0 && globalWorkSize[1]>0 && globalWorkSize[2]>0) {

    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 0, sizeof(cl_mem), (void*) &arg0.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 1, sizeof(cl_mem), (void*) &arg1.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 2, sizeof(cl_mem), (void*) &arg2.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 3, sizeof(cl_mem), (void*) &arg3.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 4, sizeof(cl_mem), (void*) &arg4.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 5, sizeof(cl_mem), (void*) &arg5.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 6, sizeof(cl_mem), (void*) &arg6.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 7, sizeof(cl_mem), (void*) &arg7.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 8, sizeof(cl_mem), (void*) &arg8.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 9, sizeof(cl_mem), (void*) &arg9.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 10, sizeof(cl_mem), (void*) &arg10.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 11, sizeof(cl_mem), (void*) &arg11.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 12, sizeof(cl_mem), (void*) &arg12.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 13, sizeof(cl_mem), (void*) &arg13.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 14, sizeof(cl_mem), (void*) &arg14.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 15, sizeof(cl_mem), (void*) &arg15.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 16, sizeof(cl_mem), (void*) &arg16.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 17, sizeof(cl_mem), (void*) &arg17.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 18, sizeof(cl_mem), (void*) &arg18.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 19, sizeof(cl_mem), (void*) &arg19.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 20, sizeof(cl_mem), (void*) &arg20.data_d ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 21, sizeof(cl_int), (void*) &block0np0 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 22, sizeof(cl_double), (void*) &inv2Delta0block0 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 23, sizeof(cl_double), (void*) &invDelta0block0 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 24, sizeof(cl_double), (void*) &invRe ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 25, sizeof(cl_double), (void*) &invSc ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 26, sizeof(cl_int), (void*) &base0 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 27, sizeof(cl_int), (void*) &base1 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 28, sizeof(cl_int), (void*) &base2 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 29, sizeof(cl_int), (void*) &base3 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 30, sizeof(cl_int), (void*) &base4 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 31, sizeof(cl_int), (void*) &base5 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 32, sizeof(cl_int), (void*) &base6 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 33, sizeof(cl_int), (void*) &base7 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 34, sizeof(cl_int), (void*) &base8 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 35, sizeof(cl_int), (void*) &base9 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 36, sizeof(cl_int), (void*) &base10 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 37, sizeof(cl_int), (void*) &base11 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 38, sizeof(cl_int), (void*) &base12 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 39, sizeof(cl_int), (void*) &base13 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 40, sizeof(cl_int), (void*) &base14 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 41, sizeof(cl_int), (void*) &base15 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 42, sizeof(cl_int), (void*) &base16 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 43, sizeof(cl_int), (void*) &base17 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 44, sizeof(cl_int), (void*) &base18 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 45, sizeof(cl_int), (void*) &base19 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 46, sizeof(cl_int), (void*) &base20 ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 47, sizeof(cl_int), (void*) &arg_idx[0] ));
    clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[44], 48, sizeof(cl_int), (void*) &x_size ));

    //call/enqueue opencl kernel wrapper function
    clSafeCall( clEnqueueNDRangeKernel(block->instance->opencl_instance->OPS_opencl_core.command_queue, block->instance->opencl_instance->OPS_opencl_core.kernel[44], 3, NULL, globalWorkSize, localWorkSize, 0, NULL, NULL) );
  }
  if (block->instance->OPS_diags>1) {
    clSafeCall( clFinish(block->instance->opencl_instance->OPS_opencl_core.command_queue) );
  }

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[44].time += t1-t2;
  }

  ops_set_dirtybit_device(args, 22);
  ops_set_halo_dirtybit3(&args[13],range);
  ops_set_halo_dirtybit3(&args[14],range);
  ops_set_halo_dirtybit3(&args[15],range);
  ops_set_halo_dirtybit3(&args[16],range);
  ops_set_halo_dirtybit3(&args[17],range);
  ops_set_halo_dirtybit3(&args[18],range);
  ops_set_halo_dirtybit3(&args[19],range);
  ops_set_halo_dirtybit3(&args[20],range);

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[44].mpi_time += t2-t1;
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg5);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg6);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg7);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg8);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg9);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg10);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg11);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg12);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg13);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg14);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg15);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg16);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg17);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg18);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg19);
    block->instance->OPS_kernels[44].transfer += ops_compute_transfer(dim, start, end, &arg20);
  }
}
