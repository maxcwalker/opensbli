// Auto-generated at 2024-10-10 09:28:38.151031 by ops-translator legacy


    #ifdef OCL_FMA_SWITCH_ON
    #define OCL_FMA 1
    #else
    #define OCL_FMA 0
    #endif


    static bool isbuilt_opensbliblock00Kernel070 = false;

    void buildOpenCLKernels_opensbliblock00Kernel070(OPS_instance *instance, int xdim0, int ydim0, int xdim1, int ydim1, int xdim2, int ydim2, int xdim3, int ydim3, int xdim4, int ydim4, int xdim5, int ydim5, int xdim6, int ydim6, int xdim7, int ydim7, int xdim8, int ydim8, int xdim9, int ydim9, int xdim10, int ydim10) {

      //int ocl_fma = OCL_FMA;
      if(!isbuilt_opensbliblock00Kernel070) {
        buildOpenCLKernels(instance);
        //clSafeCall( clUnloadCompiler() );
        cl_int ret;
        char* source_filename[1] = {(char*)"./opencl/opensbliblock00Kernel070.cl"};

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

        instance->ostream() <<"Compiling opensbliblock00Kernel070 "<<OCL_FMA<<" source -- start \n";

          // Create a program from the source
          instance->opencl_instance->OPS_opencl_core.program = clCreateProgramWithSource(instance->opencl_instance->OPS_opencl_core.context, 1, (const char **) &source_str, (const size_t *) &source_size, &ret);
          clSafeCall( ret );

          // Build the program
          char buildOpts[512*12];
          char* pPath = NULL;
          pPath = getenv ("OPS_INSTALL_PATH");
          if (pPath!=NULL)
            if(OCL_FMA)
              sprintf(buildOpts,"-cl-mad-enable -DOCL_FMA -I%s/include -DOPS_WARPSIZE=%d  -Dxdim0_opensbliblock00Kernel070=%d  -Dydim0_opensbliblock00Kernel070=%d  -Dxdim1_opensbliblock00Kernel070=%d  -Dydim1_opensbliblock00Kernel070=%d  -Dxdim2_opensbliblock00Kernel070=%d  -Dydim2_opensbliblock00Kernel070=%d  -Dxdim3_opensbliblock00Kernel070=%d  -Dydim3_opensbliblock00Kernel070=%d  -Dxdim4_opensbliblock00Kernel070=%d  -Dydim4_opensbliblock00Kernel070=%d  -Dxdim5_opensbliblock00Kernel070=%d  -Dydim5_opensbliblock00Kernel070=%d  -Dxdim6_opensbliblock00Kernel070=%d  -Dydim6_opensbliblock00Kernel070=%d  -Dxdim7_opensbliblock00Kernel070=%d  -Dydim7_opensbliblock00Kernel070=%d  -Dxdim8_opensbliblock00Kernel070=%d  -Dydim8_opensbliblock00Kernel070=%d  -Dxdim9_opensbliblock00Kernel070=%d  -Dydim9_opensbliblock00Kernel070=%d  -Dxdim10_opensbliblock00Kernel070=%d  -Dydim10_opensbliblock00Kernel070=%d ", pPath, 32,xdim0,ydim0,xdim1,ydim1,xdim2,ydim2,xdim3,ydim3,xdim4,ydim4,xdim5,ydim5,xdim6,ydim6,xdim7,ydim7,xdim8,ydim8,xdim9,ydim9,xdim10,ydim10);
            else
              sprintf(buildOpts,"-cl-mad-enable -I%s/include -DOPS_WARPSIZE=%d  -Dxdim0_opensbliblock00Kernel070=%d  -Dydim0_opensbliblock00Kernel070=%d  -Dxdim1_opensbliblock00Kernel070=%d  -Dydim1_opensbliblock00Kernel070=%d  -Dxdim2_opensbliblock00Kernel070=%d  -Dydim2_opensbliblock00Kernel070=%d  -Dxdim3_opensbliblock00Kernel070=%d  -Dydim3_opensbliblock00Kernel070=%d  -Dxdim4_opensbliblock00Kernel070=%d  -Dydim4_opensbliblock00Kernel070=%d  -Dxdim5_opensbliblock00Kernel070=%d  -Dydim5_opensbliblock00Kernel070=%d  -Dxdim6_opensbliblock00Kernel070=%d  -Dydim6_opensbliblock00Kernel070=%d  -Dxdim7_opensbliblock00Kernel070=%d  -Dydim7_opensbliblock00Kernel070=%d  -Dxdim8_opensbliblock00Kernel070=%d  -Dydim8_opensbliblock00Kernel070=%d  -Dxdim9_opensbliblock00Kernel070=%d  -Dydim9_opensbliblock00Kernel070=%d  -Dxdim10_opensbliblock00Kernel070=%d  -Dydim10_opensbliblock00Kernel070=%d ", pPath, 32,xdim0,ydim0,xdim1,ydim1,xdim2,ydim2,xdim3,ydim3,xdim4,ydim4,xdim5,ydim5,xdim6,ydim6,xdim7,ydim7,xdim8,ydim8,xdim9,ydim9,xdim10,ydim10);
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
          instance->ostream() << "compiling opensbliblock00Kernel070 -- done\n";

        // Create the OpenCL kernel
        instance->opencl_instance->OPS_opencl_core.kernel[1] = clCreateKernel(instance->opencl_instance->OPS_opencl_core.program, "ops_opensbliblock00Kernel070", &ret);
        clSafeCall( ret );

        isbuilt_opensbliblock00Kernel070 = true;
        free(source_str[0]);
      }

    }

    
// host stub function
void ops_par_loop_opensbliblock00Kernel070(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5, ops_arg arg6, ops_arg arg7,
 ops_arg arg8, ops_arg arg9, ops_arg arg10, ops_arg arg11) {

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[12] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11};


  #ifdef CHECKPOINTING
  if (!ops_checkpointing_before(args,12,range,1)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
      ops_timing_realloc(block->instance,1,"opensbliblock00Kernel070");
      block->instance->OPS_kernels[1].count++;
      ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[3];
  int end[3];
  #ifdef OPS_MPI
  sub_block_list sb = OPS_sub_block_list[block->index];
  if (!sb->owned) return;
  for (int n = 0; n < 3; n++) {
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
  for (int n = 0; n < 3; n++) {
      start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #endif

  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);
  int z_size = MAX(0,end[2]-start[2]);

  int arg_idx[3];
  #ifdef OPS_MPI
  arg_idx[0] = sb->decomp_disp[0]+start[0];
  arg_idx[1] = sb->decomp_disp[1]+start[1];
  arg_idx[2] = sb->decomp_disp[2]+start[2];
  #else
  arg_idx[0] = start[0];
  arg_idx[1] = start[1];
  arg_idx[2] = start[2];
  #endif

  int xdim0 = args[0].dat->size[0];
  int ydim0 = args[0].dat->size[1];
  int xdim1 = args[1].dat->size[0];
  int ydim1 = args[1].dat->size[1];
  int xdim2 = args[2].dat->size[0];
  int ydim2 = args[2].dat->size[1];
  int xdim3 = args[3].dat->size[0];
  int ydim3 = args[3].dat->size[1];
  int xdim4 = args[4].dat->size[0];
  int ydim4 = args[4].dat->size[1];
  int xdim5 = args[5].dat->size[0];
  int ydim5 = args[5].dat->size[1];
  int xdim6 = args[6].dat->size[0];
  int ydim6 = args[6].dat->size[1];
  int xdim7 = args[7].dat->size[0];
  int ydim7 = args[7].dat->size[1];
  int xdim8 = args[8].dat->size[0];
  int ydim8 = args[8].dat->size[1];
  int xdim9 = args[9].dat->size[0];
  int ydim9 = args[9].dat->size[1];
  int xdim10 = args[10].dat->size[0];
  int ydim10 = args[10].dat->size[1];

  //build opencl kernel if not already built

  buildOpenCLKernels_opensbliblock00Kernel070(block->instance,
  xdim0,ydim0,xdim1,ydim1,xdim2,ydim2,xdim3,ydim3,xdim4,ydim4,xdim5,ydim5,xdim6,ydim6,xdim7,ydim7,xdim8,ydim8,xdim9,ydim9,xdim10,ydim10);

  //set up OpenCL thread blocks
  size_t globalWorkSize[3] = {static_cast<size_t>(((x_size-1)/block->instance->OPS_block_size_x+ 1)*block->instance->OPS_block_size_x), static_cast<size_t>(((y_size-1)/block->instance->OPS_block_size_y + 1)*block->instance->OPS_block_size_y), static_cast<size_t>(((z_size-1)/block->instance->OPS_block_size_z+ 1)*block->instance->OPS_block_size_z)};
  size_t localWorkSize[3] =  {static_cast<size_t>(block->instance->OPS_block_size_x),static_cast<size_t>(block->instance->OPS_block_size_y),static_cast<size_t>(block->instance->OPS_block_size_z)};






  //set up initial pointers
  int d_m[OPS_MAX_DIM];
  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[0].dat->d_m[d] + OPS_sub_dat_list[args[0].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[0].dat->d_m[d];
  #endif
  int base0 = 1 *1*
  (start[0] * args[0].stencil->stride[0] - args[0].dat->base[0] - d_m[0]);
  base0 = base0 + args[0].dat->size[0] *1*
  (start[1] * args[0].stencil->stride[1] - args[0].dat->base[1] - d_m[1]);
  base0 = base0 + args[0].dat->size[0] *1*  args[0].dat->size[1] *1*
  (start[2] * args[0].stencil->stride[2] - args[0].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[1].dat->d_m[d] + OPS_sub_dat_list[args[1].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[1].dat->d_m[d];
  #endif
  int base1 = 1 *1*
  (start[0] * args[1].stencil->stride[0] - args[1].dat->base[0] - d_m[0]);
  base1 = base1 + args[1].dat->size[0] *1*
  (start[1] * args[1].stencil->stride[1] - args[1].dat->base[1] - d_m[1]);
  base1 = base1 + args[1].dat->size[0] *1*  args[1].dat->size[1] *1*
  (start[2] * args[1].stencil->stride[2] - args[1].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[2].dat->d_m[d] + OPS_sub_dat_list[args[2].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[2].dat->d_m[d];
  #endif
  int base2 = 1 *1*
  (start[0] * args[2].stencil->stride[0] - args[2].dat->base[0] - d_m[0]);
  base2 = base2 + args[2].dat->size[0] *1*
  (start[1] * args[2].stencil->stride[1] - args[2].dat->base[1] - d_m[1]);
  base2 = base2 + args[2].dat->size[0] *1*  args[2].dat->size[1] *1*
  (start[2] * args[2].stencil->stride[2] - args[2].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[3].dat->d_m[d] + OPS_sub_dat_list[args[3].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[3].dat->d_m[d];
  #endif
  int base3 = 1 *1*
  (start[0] * args[3].stencil->stride[0] - args[3].dat->base[0] - d_m[0]);
  base3 = base3 + args[3].dat->size[0] *1*
  (start[1] * args[3].stencil->stride[1] - args[3].dat->base[1] - d_m[1]);
  base3 = base3 + args[3].dat->size[0] *1*  args[3].dat->size[1] *1*
  (start[2] * args[3].stencil->stride[2] - args[3].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[4].dat->d_m[d] + OPS_sub_dat_list[args[4].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[4].dat->d_m[d];
  #endif
  int base4 = 1 *1*
  (start[0] * args[4].stencil->stride[0] - args[4].dat->base[0] - d_m[0]);
  base4 = base4 + args[4].dat->size[0] *1*
  (start[1] * args[4].stencil->stride[1] - args[4].dat->base[1] - d_m[1]);
  base4 = base4 + args[4].dat->size[0] *1*  args[4].dat->size[1] *1*
  (start[2] * args[4].stencil->stride[2] - args[4].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[5].dat->d_m[d] + OPS_sub_dat_list[args[5].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[5].dat->d_m[d];
  #endif
  int base5 = 1 *1*
  (start[0] * args[5].stencil->stride[0] - args[5].dat->base[0] - d_m[0]);
  base5 = base5 + args[5].dat->size[0] *1*
  (start[1] * args[5].stencil->stride[1] - args[5].dat->base[1] - d_m[1]);
  base5 = base5 + args[5].dat->size[0] *1*  args[5].dat->size[1] *1*
  (start[2] * args[5].stencil->stride[2] - args[5].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[6].dat->d_m[d] + OPS_sub_dat_list[args[6].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[6].dat->d_m[d];
  #endif
  int base6 = 1 *1*
  (start[0] * args[6].stencil->stride[0] - args[6].dat->base[0] - d_m[0]);
  base6 = base6 + args[6].dat->size[0] *1*
  (start[1] * args[6].stencil->stride[1] - args[6].dat->base[1] - d_m[1]);
  base6 = base6 + args[6].dat->size[0] *1*  args[6].dat->size[1] *1*
  (start[2] * args[6].stencil->stride[2] - args[6].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[7].dat->d_m[d] + OPS_sub_dat_list[args[7].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[7].dat->d_m[d];
  #endif
  int base7 = 1 *1*
  (start[0] * args[7].stencil->stride[0] - args[7].dat->base[0] - d_m[0]);
  base7 = base7 + args[7].dat->size[0] *1*
  (start[1] * args[7].stencil->stride[1] - args[7].dat->base[1] - d_m[1]);
  base7 = base7 + args[7].dat->size[0] *1*  args[7].dat->size[1] *1*
  (start[2] * args[7].stencil->stride[2] - args[7].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[8].dat->d_m[d] + OPS_sub_dat_list[args[8].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[8].dat->d_m[d];
  #endif
  int base8 = 1 *1*
  (start[0] * args[8].stencil->stride[0] - args[8].dat->base[0] - d_m[0]);
  base8 = base8 + args[8].dat->size[0] *1*
  (start[1] * args[8].stencil->stride[1] - args[8].dat->base[1] - d_m[1]);
  base8 = base8 + args[8].dat->size[0] *1*  args[8].dat->size[1] *1*
  (start[2] * args[8].stencil->stride[2] - args[8].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[9].dat->d_m[d] + OPS_sub_dat_list[args[9].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[9].dat->d_m[d];
  #endif
  int base9 = 1 *1*
  (start[0] * args[9].stencil->stride[0] - args[9].dat->base[0] - d_m[0]);
  base9 = base9 + args[9].dat->size[0] *1*
  (start[1] * args[9].stencil->stride[1] - args[9].dat->base[1] - d_m[1]);
  base9 = base9 + args[9].dat->size[0] *1*  args[9].dat->size[1] *1*
  (start[2] * args[9].stencil->stride[2] - args[9].dat->base[2] - d_m[2]);

  #ifdef OPS_MPI
  for (int d = 0; d < dim; d++) d_m[d] = args[10].dat->d_m[d] + OPS_sub_dat_list[args[10].dat->index]->d_im[d];
  #else
  for (int d = 0; d < dim; d++) d_m[d] = args[10].dat->d_m[d];
  #endif
  int base10 = 1 *1*
  (start[0] * args[10].stencil->stride[0] - args[10].dat->base[0] - d_m[0]);
  base10 = base10 + args[10].dat->size[0] *1*
  (start[1] * args[10].stencil->stride[1] - args[10].dat->base[1] - d_m[1]);
  base10 = base10 + args[10].dat->size[0] *1*  args[10].dat->size[1] *1*
  (start[2] * args[10].stencil->stride[2] - args[10].dat->base[2] - d_m[2]);


  ops_H_D_exchanges_device(args, 12);
  ops_halo_exchanges(args,12,range);
  ops_H_D_exchanges_device(args, 12);

  if (block->instance->OPS_diags > 1) {
      ops_timers_core(&c2,&t2);
      block->instance->OPS_kernels[1].mpi_time += t2-t1;
  }

  if (globalWorkSize[0]>0 && globalWorkSize[1]>0 && globalWorkSize[2]>0) {

      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 0, sizeof(cl_mem), (void*) &arg0.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 1, sizeof(cl_mem), (void*) &arg1.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 2, sizeof(cl_mem), (void*) &arg2.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 3, sizeof(cl_mem), (void*) &arg3.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 4, sizeof(cl_mem), (void*) &arg4.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 5, sizeof(cl_mem), (void*) &arg5.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 6, sizeof(cl_mem), (void*) &arg6.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 7, sizeof(cl_mem), (void*) &arg7.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 8, sizeof(cl_mem), (void*) &arg8.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 9, sizeof(cl_mem), (void*) &arg9.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 10, sizeof(cl_mem), (void*) &arg10.data_d ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 11, sizeof(cl_int), (void*) &block0np0 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 12, sizeof(cl_double), (void*) &invDelta0block0 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 13, sizeof(cl_double), (void*) &invDelta1block0 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 14, sizeof(cl_int), (void*) &base0 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 15, sizeof(cl_int), (void*) &base1 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 16, sizeof(cl_int), (void*) &base2 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 17, sizeof(cl_int), (void*) &base3 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 18, sizeof(cl_int), (void*) &base4 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 19, sizeof(cl_int), (void*) &base5 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 20, sizeof(cl_int), (void*) &base6 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 21, sizeof(cl_int), (void*) &base7 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 22, sizeof(cl_int), (void*) &base8 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 23, sizeof(cl_int), (void*) &base9 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 24, sizeof(cl_int), (void*) &base10 ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 25, sizeof(cl_int), (void*) &arg_idx[0] ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 26, sizeof(cl_int), (void*) &arg_idx[1] ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 27, sizeof(cl_int), (void*) &arg_idx[2] ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 28, sizeof(cl_int), (void*) &x_size ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 29, sizeof(cl_int), (void*) &y_size ));
      clSafeCall( clSetKernelArg(block->instance->opencl_instance->OPS_opencl_core.kernel[1], 30, sizeof(cl_int), (void*) &z_size ));

      //call/enqueue opencl kernel wrapper function
      clSafeCall( clEnqueueNDRangeKernel(block->instance->opencl_instance->OPS_opencl_core.command_queue, block->instance->opencl_instance->OPS_opencl_core.kernel[1], 3, NULL, globalWorkSize, localWorkSize, 0, NULL, NULL) );
  }
  if (block->instance->OPS_diags>1) {
      clSafeCall( clFinish(block->instance->opencl_instance->OPS_opencl_core.command_queue) );
  }

  if (block->instance->OPS_diags > 1) {
      ops_timers_core(&c1,&t1);
      block->instance->OPS_kernels[1].time += t1-t2;
  }

  ops_set_dirtybit_device(args, 12);
  ops_set_halo_dirtybit3(&args[2],range);
  ops_set_halo_dirtybit3(&args[3],range);
  ops_set_halo_dirtybit3(&args[4],range);
  ops_set_halo_dirtybit3(&args[5],range);
  ops_set_halo_dirtybit3(&args[6],range);
  ops_set_halo_dirtybit3(&args[7],range);
  ops_set_halo_dirtybit3(&args[8],range);
  ops_set_halo_dirtybit3(&args[9],range);
  ops_set_halo_dirtybit3(&args[10],range);

  if (block->instance->OPS_diags > 1) {
      //Update kernel record
      ops_timers_core(&c2,&t2);
      block->instance->OPS_kernels[1].mpi_time += t2-t1;
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg0);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg1);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg2);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg3);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg4);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg5);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg6);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg7);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg8);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg9);
      block->instance->OPS_kernels[1].transfer += ops_compute_transfer(dim, start, end, &arg10);
  }
}
