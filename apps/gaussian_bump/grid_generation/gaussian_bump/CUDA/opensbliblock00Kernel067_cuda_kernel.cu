//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel067 [6][2];
static int dims_opensbliblock00Kernel067_h [6][2] = {{0}};

//user function
__device__

 void opensbliblock00Kernel067_gpu(const ACC<double> &x1_B0,
  ACC<double> &rhoE_B0,
  ACC<double> &rho_B0,
  ACC<double>
&rhou0_B0,
  ACC<double> &rhou1_B0,
  ACC<double> &rhou2_B0)
{
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
    rhou0 = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   2.81010389851971e-5 + 0.000258737743233456*pow(x1_B0(0,0,0), 31) +
      4.98375780882643*pow(x1_B0(0,0,0), 17) + 46.3380290130478*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) +
      1.0333895093554e-10*pow(x1_B0(0,0,0), 50) + 4.28282939329779e-10*pow(x1_B0(0,0,0), 48) +
      5.22850584399414e-6*pow(x1_B0(0,0,0), 34) + 1.43718854519352e-8*pow(x1_B0(0,0,0), 42) +
      1.8547541840313e-9*pow(x1_B0(0,0,0), 46) + 6.72781567790938e-5*pow(x1_B0(0,0,0), 33) +
      2.22187110468707*pow(x1_B0(0,0,0), 19) +
      1147.15478094315*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) +
      2.35279475370142e-9*pow(x1_B0(0,0,0), 47) + 0.0803921016386592*pow(x1_B0(0,0,0), 24) +
      5524.3956002145*pow(x1_B0(0,0,0), 8) + 98.9277623702726*pow(x1_B0(0,0,0), 14) +
      4.00990549903238e-7*pow(x1_B0(0,0,0), 40) + 8.56758643526497*pow(x1_B0(0,0,0), 18) +
      4629.96901561542*pow(x1_B0(0,0,0), 10) + 0.0353770349616803*pow(x1_B0(0,0,0), 25) +
      1.60771345014203e-7*pow(x1_B0(0,0,0), 41) + 356.696450999847*pow(x1_B0(0,0,0), 13) +
      0.000184993148117286*pow(x1_B0(0,0,0), 32) + 0.0500445119961943*pow(x1_B0(0,0,0), 23) +
      0.227035822363302*x1_B0(0,0,0) + 0.23937525034725*(x1_B0(0,0,0)*x1_B0(0,0,0)) +
      4.67444287468597e-7*pow(x1_B0(0,0,0), 39) + 0.00388864591355403*pow(x1_B0(0,0,0), 26) -
      65.3071504106091*pow(x1_B0(0,0,0), 15) - 0.00143234489925906*pow(x1_B0(0,0,0), 29) -
      3067.46391238486*pow(x1_B0(0,0,0), 7) - 5.62506124019229e-9*pow(x1_B0(0,0,0), 45) -
      1316.18756210104*pow(x1_B0(0,0,0), 11) - 2.04355852847764e-8*pow(x1_B0(0,0,0), 44) -
      0.853133446916905*pow(x1_B0(0,0,0), 20) - 6.37366094013795e-10*pow(x1_B0(0,0,0), 49) -
      0.86439807544192*pow(x1_B0(0,0,0), 21) - 3.35744184755943e-6*pow(x1_B0(0,0,0), 37) -
      2.7539573405103e-8*pow(x1_B0(0,0,0), 43) - 0.2508740192631*pow(x1_B0(0,0,0), 22) -
      0.00399141128301512*pow(x1_B0(0,0,0), 28) - 32.9933942229683*pow(x1_B0(0,0,0), 16) -
      4.41300189027872*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) - 8.51708676941751e-6*pow(x1_B0(0,0,0), 36) -
      286.735004996588*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      7.06700139641158e-5*pow(x1_B0(0,0,0), 30) - 0.00512050445489821*pow(x1_B0(0,0,0), 27) -
      1.09743822762142e-5*pow(x1_B0(0,0,0), 35) - 6536.11090250494*pow(x1_B0(0,0,0), 9) -
      4.02401023959351e-7*pow(x1_B0(0,0,0), 38) - 508.28708953557*pow(x1_B0(0,0,0), 12)
)
: (
   0.999998734882134
));

    rhou1 = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   2.82817613340751e-7 + 3.00069748306785*pow(x1_B0(0,0,0), 13) +
      3.29634329514111e-9*pow(x1_B0(0,0,0), 39) + 6.43176358402055e-8*pow(x1_B0(0,0,0), 34) +
      0.0719328435513006*pow(x1_B0(0,0,0), 18) + 0.00306829933173168*(x1_B0(0,0,0)*x1_B0(0,0,0)) +
      1.79752669949226e-11*pow(x1_B0(0,0,0), 47) + 0.000303180500902988*pow(x1_B0(0,0,0), 25) +
      0.000303628685654251*pow(x1_B0(0,0,0), 23) + 0.000643835477160246*pow(x1_B0(0,0,0), 24) +
      1.29123738896072e-11*pow(x1_B0(0,0,0), 46) + 0.926207026116516*pow(x1_B0(0,0,0), 14) +
      0.0325816261906945*pow(x1_B0(0,0,0), 17) + 5.69161722001747e-7*pow(x1_B0(0,0,0), 33) +
      40.727215065294*pow(x1_B0(0,0,0), 10) + 1.49970339265156e-10*pow(x1_B0(0,0,0), 42) +
      0.0206848008504698*pow(x1_B0(0,0,0), 19) +
      10.7696039164977*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) +
      1.30028868737458e-9*pow(x1_B0(0,0,0), 41) + 4.32839523218191e-5*pow(x1_B0(0,0,0), 26) +
      1.47355545429578e-6*pow(x1_B0(0,0,0), 32) + 50.4891891670758*pow(x1_B0(0,0,0), 8) +
      3.09019485950549e-9*pow(x1_B0(0,0,0), 40) + 7.69023869513787e-13*pow(x1_B0(0,0,0), 50) +
      0.446266646253751*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) + 3.50287327188351e-12*pow(x1_B0(0,0,0),
      48) + 1.89880112548896e-6*pow(x1_B0(0,0,0), 31) - 4.82762092572984e-12*pow(x1_B0(0,0,0), 49) -
      6.65596417385672e-8*pow(x1_B0(0,0,0), 36) - 4.10394544994085e-9*pow(x1_B0(0,0,0), 38) -
      10.9786556789182*pow(x1_B0(0,0,0), 11) - 0.00718762652346875*pow(x1_B0(0,0,0), 21) -
      1.57870966013949e-10*pow(x1_B0(0,0,0), 44) - 0.0441395324600665*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      2.76592411395917e-8*pow(x1_B0(0,0,0), 37) - 3.21928824633068e-5*pow(x1_B0(0,0,0), 28) -
      0.532007784737155*pow(x1_B0(0,0,0), 15) - 1.09456857742777e-6*pow(x1_B0(0,0,0), 30) -
      0.00228277091663732*pow(x1_B0(0,0,0), 22) - 4.69635261820028*pow(x1_B0(0,0,0), 12) -
      0.293735370266727*pow(x1_B0(0,0,0), 16) - 3.74710670988207e-5*pow(x1_B0(0,0,0), 27) -
      7.87375429375163e-8*pow(x1_B0(0,0,0), 35) -
      2.72535329318167*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      4.60192702489543e-11*pow(x1_B0(0,0,0), 45) - 0.00617680178429212*pow(x1_B0(0,0,0), 20) -
      1.23437927185694e-5*pow(x1_B0(0,0,0), 29) - 1.99958852532155e-10*pow(x1_B0(0,0,0), 43) -
      5.35924833912234e-5*x1_B0(0,0,0) - 28.4299942223701*pow(x1_B0(0,0,0), 7) - 58.7711331658444*pow(x1_B0(0,0,0),
      9)
)
: (
   0.00614799599116637
));

    T = ((x1_B0(0,0,0) < 2.17021702170217) ? (
   3.68605089828999 + 1.80715648140096e-6*pow(x1_B0(0,0,0), 34) +
      1.92138319484046*pow(x1_B0(0,0,0), 16) + 4.63665272701483e-7*pow(x1_B0(0,0,0), 37) +
      331.618666143632*pow(x1_B0(0,0,0), 9) + 2.90091822544828e-6*pow(x1_B0(0,0,0), 35) +
      0.217301617917934*pow(x1_B0(0,0,0), 20) + 8.16251202121809e-10*pow(x1_B0(0,0,0), 45) +
      0.109977216596455*pow(x1_B0(0,0,0), 21) + 1.71710324090264e-9*pow(x1_B0(0,0,0), 42) +
      0.000131752731338234*pow(x1_B0(0,0,0), 29) + 0.0084769063463692*pow(x1_B0(0,0,0), 22) +
      4.05432815306889e-9*pow(x1_B0(0,0,0), 44) + 1.37372286203052e-10*pow(x1_B0(0,0,0), 49) +
      9.56151850489785*pow(x1_B0(0,0,0), 15) + 163.034174400889*pow(x1_B0(0,0,0), 11) +
      0.000630724424367844*pow(x1_B0(0,0,0), 28) + 0.00126741777326377*pow(x1_B0(0,0,0), 27) +
      10.7281471761936*pow(x1_B0(0,0,0), 12) + 0.000815009923807171*pow(x1_B0(0,0,0), 26) +
      1.60339491429422e-6*pow(x1_B0(0,0,0), 36) +
      0.425677490281615*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) + 6.96438006151769e-9*pow(x1_B0(0,0,0),
      43) + 63.8937461954963*pow(x1_B0(0,0,0), 7) - 5.32742143961743e-10*pow(x1_B0(0,0,0), 46) -
      41.2376244814332*pow(x1_B0(0,0,0), 13) - 2.38482023407732e-11*pow(x1_B0(0,0,0), 50) -
      0.0132079585933898*pow(x1_B0(0,0,0), 24) - 3.76567001817271e-8*pow(x1_B0(0,0,0), 38) -
      7.49525550443683e-6*pow(x1_B0(0,0,0), 33) - 6.34260724971002e-5*pow(x1_B0(0,0,0), 31) -
      4.89622112477326e-10*pow(x1_B0(0,0,0), 47) - 0.000267085153722792*x1_B0(0,0,0) -
      0.0198284052280911*pow(x1_B0(0,0,0), 23) - 8.05564185940929e-8*pow(x1_B0(0,0,0), 40) -
      191.389275870438*pow(x1_B0(0,0,0), 8) -
      0.818003904068274*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      1.6711188007954*pow(x1_B0(0,0,0), 17) - 2.50774292485242e-8*pow(x1_B0(0,0,0), 41) -
      0.00343904081280767*pow(x1_B0(0,0,0), 25) - 1.00600185518784*pow(x1_B0(0,0,0), 18) -
      3.15023994116191e-5*pow(x1_B0(0,0,0), 32) - 6.22796253473077e-11*pow(x1_B0(0,0,0), 48) -
      1.30039810614719e-7*pow(x1_B0(0,0,0), 39) - 0.573240081868493*pow(x1_B0(0,0,0), 14) -
      9.40092306564485*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0)) -
      335.239281059585*pow(x1_B0(0,0,0), 10) - 0.0208953606212575*pow(x1_B0(0,0,0), 19) -
      1.68196681552788*(x1_B0(0,0,0)*x1_B0(0,0,0)) - 5.15742912986645e-5*pow(x1_B0(0,0,0), 30) -
      0.121834013608489*(x1_B0(0,0,0)*x1_B0(0,0,0)*x1_B0(0,0,0))
)
: (
   1.00000126346731
));

   rho = 1.0/T;

   rho_B0(0,0,0) = rho;

   rhou0_B0(0,0,0) = rhou0;

   rhou1_B0(0,0,0) = rhou1;

   rhoE_B0(0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   rhou2_B0(0,0,0) = 0.0;

}



__global__ void ops_opensbliblock00Kernel067(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
double* __restrict arg5,
int size0,
int size1,
int size2 ){


  int idx_z = blockDim.z * blockIdx.z + threadIdx.z;
  int idx_y = blockDim.y * blockIdx.y + threadIdx.y;
  int idx_x = blockDim.x * blockIdx.x + threadIdx.x;

  arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[0][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[0][0] * dims_opensbliblock00Kernel067[0][1];
  arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[1][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[1][0] * dims_opensbliblock00Kernel067[1][1];
  arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[2][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[2][0] * dims_opensbliblock00Kernel067[2][1];
  arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[3][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[3][0] * dims_opensbliblock00Kernel067[3][1];
  arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[4][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[4][0] * dims_opensbliblock00Kernel067[4][1];
  arg5 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel067[5][0] + idx_z * 1*1 * dims_opensbliblock00Kernel067[5][0] * dims_opensbliblock00Kernel067[5][1];

  if (idx_x < size0 && idx_y < size1 && idx_z < size2) {
    const ACC<double> argp0(dims_opensbliblock00Kernel067[0][0], dims_opensbliblock00Kernel067[0][1], arg0);
    ACC<double> argp1(dims_opensbliblock00Kernel067[1][0], dims_opensbliblock00Kernel067[1][1], arg1);
    ACC<double> argp2(dims_opensbliblock00Kernel067[2][0], dims_opensbliblock00Kernel067[2][1], arg2);
    ACC<double> argp3(dims_opensbliblock00Kernel067[3][0], dims_opensbliblock00Kernel067[3][1], arg3);
    ACC<double> argp4(dims_opensbliblock00Kernel067[4][0], dims_opensbliblock00Kernel067[4][1], arg4);
    ACC<double> argp5(dims_opensbliblock00Kernel067[5][0], dims_opensbliblock00Kernel067[5][1], arg5);
    opensbliblock00Kernel067_gpu(
     argp0, argp1, argp2, argp3, argp4,
     argp5);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5) {
#else
void ops_par_loop_opensbliblock00Kernel067_execute(ops_kernel_descriptor *desc) {
  int dim = desc->dim;
  #if OPS_MPI
  ops_block block = desc->block;
  #endif
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  ops_arg arg5 = desc->args[5];
  #endif

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[6] = { arg0, arg1, arg2, arg3, arg4, arg5};


  #if CHECKPOINTING && !OPS_LAZY
  if (!ops_checkpointing_before(args,6,range,0)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,0,"opensbliblock00Kernel067");
    block->instance->OPS_kernels[0].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[3];
  int end[3];

  #ifdef OPS_MPI
  int arg_idx[3];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<3; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 6,block, range, start, end, arg_idx) < 0) return;
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

  if (xdim0 != dims_opensbliblock00Kernel067_h[0][0] || ydim0 != dims_opensbliblock00Kernel067_h[0][1] || xdim1 != dims_opensbliblock00Kernel067_h[1][0] || ydim1 != dims_opensbliblock00Kernel067_h[1][1] || xdim2 != dims_opensbliblock00Kernel067_h[2][0] || ydim2 != dims_opensbliblock00Kernel067_h[2][1] || xdim3 != dims_opensbliblock00Kernel067_h[3][0] || ydim3 != dims_opensbliblock00Kernel067_h[3][1] || xdim4 != dims_opensbliblock00Kernel067_h[4][0] || ydim4 != dims_opensbliblock00Kernel067_h[4][1] || xdim5 != dims_opensbliblock00Kernel067_h[5][0] || ydim5 != dims_opensbliblock00Kernel067_h[5][1]) {
    dims_opensbliblock00Kernel067_h[0][0] = xdim0;
    dims_opensbliblock00Kernel067_h[0][1] = ydim0;
    dims_opensbliblock00Kernel067_h[1][0] = xdim1;
    dims_opensbliblock00Kernel067_h[1][1] = ydim1;
    dims_opensbliblock00Kernel067_h[2][0] = xdim2;
    dims_opensbliblock00Kernel067_h[2][1] = ydim2;
    dims_opensbliblock00Kernel067_h[3][0] = xdim3;
    dims_opensbliblock00Kernel067_h[3][1] = ydim3;
    dims_opensbliblock00Kernel067_h[4][0] = xdim4;
    dims_opensbliblock00Kernel067_h[4][1] = ydim4;
    dims_opensbliblock00Kernel067_h[5][0] = xdim5;
    dims_opensbliblock00Kernel067_h[5][1] = ydim5;
    cutilSafeCall(block->instance->ostream(), cudaMemcpyToSymbol( dims_opensbliblock00Kernel067, dims_opensbliblock00Kernel067_h, sizeof(dims_opensbliblock00Kernel067)));
  }



  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);
  int z_size = MAX(0,end[2]-start[2]);

  dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, (z_size-1)/block->instance->OPS_block_size_z +1);
  dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



  long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
  long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
  long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
  long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);
  long long int dat5 = (block->instance->OPS_soa ? args[5].dat->type_size : args[5].dat->elem_size);

  char *p_a[6];

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    (start[1] * args[0].stencil->stride[1]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    args[0].dat->size[1] *
    (start[2] * args[0].stencil->stride[2]);
  p_a[0] = (char *)args[0].data_d + base0;

  long long int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    (start[1] * args[1].stencil->stride[1]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    args[1].dat->size[1] *
    (start[2] * args[1].stencil->stride[2]);
  p_a[1] = (char *)args[1].data_d + base1;

  long long int base2 = args[2].dat->base_offset + 
           dat2 * 1 * (start[0] * args[2].stencil->stride[0]);
  base2 = base2+ dat2 *
    args[2].dat->size[0] *
    (start[1] * args[2].stencil->stride[1]);
  base2 = base2+ dat2 *
    args[2].dat->size[0] *
    args[2].dat->size[1] *
    (start[2] * args[2].stencil->stride[2]);
  p_a[2] = (char *)args[2].data_d + base2;

  long long int base3 = args[3].dat->base_offset + 
           dat3 * 1 * (start[0] * args[3].stencil->stride[0]);
  base3 = base3+ dat3 *
    args[3].dat->size[0] *
    (start[1] * args[3].stencil->stride[1]);
  base3 = base3+ dat3 *
    args[3].dat->size[0] *
    args[3].dat->size[1] *
    (start[2] * args[3].stencil->stride[2]);
  p_a[3] = (char *)args[3].data_d + base3;

  long long int base4 = args[4].dat->base_offset + 
           dat4 * 1 * (start[0] * args[4].stencil->stride[0]);
  base4 = base4+ dat4 *
    args[4].dat->size[0] *
    (start[1] * args[4].stencil->stride[1]);
  base4 = base4+ dat4 *
    args[4].dat->size[0] *
    args[4].dat->size[1] *
    (start[2] * args[4].stencil->stride[2]);
  p_a[4] = (char *)args[4].data_d + base4;

  long long int base5 = args[5].dat->base_offset + 
           dat5 * 1 * (start[0] * args[5].stencil->stride[0]);
  base5 = base5+ dat5 *
    args[5].dat->size[0] *
    (start[1] * args[5].stencil->stride[1]);
  base5 = base5+ dat5 *
    args[5].dat->size[0] *
    args[5].dat->size[1] *
    (start[2] * args[5].stencil->stride[2]);
  p_a[5] = (char *)args[5].data_d + base5;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 6);
  ops_halo_exchanges(args,6,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[0].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0 && y_size > 0 && z_size > 0)
    ops_opensbliblock00Kernel067<<<grid, tblock >>> ( 
     (double *)p_a[0], (double *)p_a[1],
     (double *)p_a[2], (double *)p_a[3],
     (double *)p_a[4], (double *)p_a[5],
    x_size, y_size, z_size);

  cutilSafeCall(block->instance->ostream(), cudaGetLastError());

  if (block->instance->OPS_diags>1) {
    cutilSafeCall(block->instance->ostream(), cudaDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[0].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 6);
  ops_set_halo_dirtybit3(&args[1],range);
  ops_set_halo_dirtybit3(&args[2],range);
  ops_set_halo_dirtybit3(&args[3],range);
  ops_set_halo_dirtybit3(&args[4],range);
  ops_set_halo_dirtybit3(&args[5],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[0].mpi_time += t2-t1;
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg4);
    block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg5);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4, ops_arg arg5) {
  ops_arg args[6] = { arg0, arg1, arg2, arg3, arg4, arg5 };

  //create kernel descriptor and pass it to ops_enqueue_kernel
  create_kerneldesc_and_enque(name, args, 6, 0, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel067_execute);
}
#endif
