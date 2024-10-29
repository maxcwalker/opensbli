// Auto-generated at 2024-10-10 09:28:35.216542 by ops-translator legacy


//  ==================
//  Host stub function
//  ==================
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(
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
    ops_arg arg7, 
    ops_arg arg8
)
{
#else
void ops_par_loop_opensbliblock00Kernel067_execute(ops_kernel_descriptor *desc)
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
    ops_arg arg8 = desc->args[8];
#endif

//  ======
//  Timing
//  ======
    double __t1, __t2, __c1, __c2;

    ops_arg args[9];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;

#if defined(CHECKPOINTING) && !defined(OPS_LAZY)
    if (!ops_checkpointing_before(args, 9, range, 0)) return;
#endif

    if (block->instance->OPS_diags > 1) {
        ops_timing_realloc(block->instance, 0, "opensbliblock00Kernel067");
        block->instance->OPS_kernels[0].count++;
        ops_timers_core(&__c1, &__t1);
    }

#ifdef OPS_DEBUG
    ops_register_args(block->instance, args, "opensbliblock00Kernel067");
#endif


//  =================================================
//  compute locally allocated range for the sub-block
//  =================================================
    int start[3];
    int end[3];
    int arg_idx[3];

#if defined(OPS_LAZY) || !defined(OPS_MPI)
    for (int n = 0; n < 3; n++) {
        start[n] = range[2*n];
        end[n]   = range[2*n+1];
    }
#else
    if (compute_ranges(args, 9, block, range, start, end, arg_idx) < 0) return;
#endif

    int start0 = start[0];
    int end0 = end[0];
    int start1 = start[1];
    int end1 = end[1];
    int start2 = start[2];
    int end2 = end[2];

#if defined(OPS_MPI)
#if defined(OPS_LAZY)
    sub_block_list sb = OPS_sub_block_list[block->index];
    arg_idx[0] = sb->decomp_disp[0];
    arg_idx[1] = sb->decomp_disp[1];
    arg_idx[2] = sb->decomp_disp[2];
#else
    arg_idx[0] -= start[0];
    arg_idx[1] -= start[1];
    arg_idx[2] -= start[2];
#endif
#else //OPS_MPI
    arg_idx[0] = 0;
    arg_idx[1] = 0;
    arg_idx[2] = 0;
#endif //OPS_MPI

//  =====================================================
//  Initialize global variable with the dimension of dats
//  =====================================================
    int xdim0_opensbliblock00Kernel067 = args[0].dat->size[0];
    int ydim0_opensbliblock00Kernel067 = args[0].dat->size[1];
    int xdim1_opensbliblock00Kernel067 = args[1].dat->size[0];
    int ydim1_opensbliblock00Kernel067 = args[1].dat->size[1];
    int xdim2_opensbliblock00Kernel067 = args[2].dat->size[0];
    int ydim2_opensbliblock00Kernel067 = args[2].dat->size[1];
    int xdim3_opensbliblock00Kernel067 = args[3].dat->size[0];
    int ydim3_opensbliblock00Kernel067 = args[3].dat->size[1];
    int xdim4_opensbliblock00Kernel067 = args[4].dat->size[0];
    int ydim4_opensbliblock00Kernel067 = args[4].dat->size[1];
    int xdim5_opensbliblock00Kernel067 = args[5].dat->size[0];
    int ydim5_opensbliblock00Kernel067 = args[5].dat->size[1];
    int xdim6_opensbliblock00Kernel067 = args[6].dat->size[0];
    int ydim6_opensbliblock00Kernel067 = args[6].dat->size[1];
    int xdim7_opensbliblock00Kernel067 = args[7].dat->size[0];
    int ydim7_opensbliblock00Kernel067 = args[7].dat->size[1];

//  =======================================================
//  Set up initial pointers and exchange halos if necessary
//  =======================================================
    int base0 = args[0].dat->base_offset;
    double * __restrict__ rhoE_B0_p = (double *)(args[0].data_d + base0);

    int base1 = args[1].dat->base_offset;
    double * __restrict__ rho_B0_p = (double *)(args[1].data_d + base1);

    int base2 = args[2].dat->base_offset;
    double * __restrict__ rhou0_B0_p = (double *)(args[2].data_d + base2);

    int base3 = args[3].dat->base_offset;
    double * __restrict__ rhou1_B0_p = (double *)(args[3].data_d + base3);

    int base4 = args[4].dat->base_offset;
    double * __restrict__ rhou2_B0_p = (double *)(args[4].data_d + base4);

    int base5 = args[5].dat->base_offset;
    double * __restrict__ x0_B0_p = (double *)(args[5].data_d + base5);

    int base6 = args[6].dat->base_offset;
    double * __restrict__ x2_B0_p = (double *)(args[6].data_d + base6);

    int base7 = args[7].dat->base_offset;
    double * __restrict__ x1_B0_p = (double *)(args[7].data_d + base7);

#ifndef OPS_LAZY
//  ==============
//  Halo Exchanges
//  ==============
    ops_H_D_exchanges_device(args, 9);
    ops_halo_exchanges(args, 9,range);
    ops_H_D_exchanges_device(args, 9);
#endif //OPS_LAZY

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c2, &__t2);
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
    }

    #pragma omp target teams distribute parallel for collapse(3)
    for (int n_z = start2; n_z < end2; n_z++) {
        for (int n_y = start1; n_y < end1; n_y++) {
            for (int n_x = start0; n_x < end0; n_x++) {

                int idx[] = {arg_idx[0]+n_x, arg_idx[1]+n_y, arg_idx[2]+n_z};
                ACC<double> rhoE_B0(xdim0_opensbliblock00Kernel067, ydim0_opensbliblock00Kernel067, rhoE_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel067*1 + n_z * xdim0_opensbliblock00Kernel067 * ydim0_opensbliblock00Kernel067*1);

                ACC<double> rho_B0(xdim1_opensbliblock00Kernel067, ydim1_opensbliblock00Kernel067, rho_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel067*1 + n_z * xdim1_opensbliblock00Kernel067 * ydim1_opensbliblock00Kernel067*1);

                ACC<double> rhou0_B0(xdim2_opensbliblock00Kernel067, ydim2_opensbliblock00Kernel067, rhou0_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel067*1 + n_z * xdim2_opensbliblock00Kernel067 * ydim2_opensbliblock00Kernel067*1);

                ACC<double> rhou1_B0(xdim3_opensbliblock00Kernel067, ydim3_opensbliblock00Kernel067, rhou1_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel067*1 + n_z * xdim3_opensbliblock00Kernel067 * ydim3_opensbliblock00Kernel067*1);

                ACC<double> rhou2_B0(xdim4_opensbliblock00Kernel067, ydim4_opensbliblock00Kernel067, rhou2_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel067*1 + n_z * xdim4_opensbliblock00Kernel067 * ydim4_opensbliblock00Kernel067*1);

                ACC<double> x0_B0(xdim5_opensbliblock00Kernel067, ydim5_opensbliblock00Kernel067, x0_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel067*1 + n_z * xdim5_opensbliblock00Kernel067 * ydim5_opensbliblock00Kernel067*1);

                ACC<double> x2_B0(xdim6_opensbliblock00Kernel067, ydim6_opensbliblock00Kernel067, x2_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel067*1 + n_z * xdim6_opensbliblock00Kernel067 * ydim6_opensbliblock00Kernel067*1);

                ACC<double> x1_B0(xdim7_opensbliblock00Kernel067, ydim7_opensbliblock00Kernel067, x1_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel067*1 + n_z * xdim7_opensbliblock00Kernel067 * ydim7_opensbliblock00Kernel067*1);

                
   double T = 0.0;
   double rho = 0.0;
   double rhou0 = 0.0;
   double rhou1 = 0.0;
   double x1b0 = 0.0;
   x0_B0(0,0,0) = Delta0block0*idx[0];

    x1_B0(0,0,0) = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + (-(1.0/20.0)*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L +
      Delta0block0*idx[0]))*inv2a) + H)*sinh(b*invH*Delta1block0*idx[1])/sinh(b);

   x2_B0(0,0,0) = Delta2block0*idx[2];

   x1b0 = ((1.0/20.0))*H*exp(-((-(1.0/2.0)*L + Delta0block0*idx[0])*(-(1.0/2.0)*L + Delta0block0*idx[0]))*inv2a);

    rhou0 = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   -1.72749546510879e-5 + 1.51792461340404e-9*pow(-x1b0 +
      x1_B0(0,0,0), 39) + 5.27423992061459*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      0.00544468603480622*pow(-x1b0 + x1_B0(0,0,0), 21) + 0.36543058296587*pow(-x1b0 + x1_B0(0,0,0), 17) +
      3.03678298678793e-9*pow(-x1b0 + x1_B0(0,0,0), 38) + 0.00639455339465792*pow(-x1b0 + x1_B0(0,0,0), 22) +
      1.66513237916436e-7*pow(-x1b0 + x1_B0(0,0,0), 32) + 597.983674896989*pow(-x1b0 + x1_B0(0,0,0), 7) +
      1.22856508349135e-12*pow(-x1b0 + x1_B0(0,0,0), 47) + 98.9500901438903*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 50.3129873370025*pow(-x1b0 +
      x1_B0(0,0,0), 12) + 30.9488686606459*pow(-x1b0 + x1_B0(0,0,0), 11) + 9.12280637284266e-13*pow(-x1b0 +
      x1_B0(0,0,0), 45) + 8.09069249996458e-6*pow(-x1b0 + x1_B0(0,0,0), 29) + 0.534621322524354*x1_B0(0,0,0) +
      0.000136398663903241*pow(-x1b0 + x1_B0(0,0,0), 24) + 2.10876254307375e-9*pow(-x1b0 + x1_B0(0,0,0), 37) +
      0.00227720041596264*pow(-x1b0 + x1_B0(0,0,0), 23) + 4.94827815192188e-6*pow(-x1b0 + x1_B0(0,0,0), 30) +
      1.41280374633198*pow(-x1b0 + x1_B0(0,0,0), 16) + 735.508382912399*pow(-x1b0 + x1_B0(0,0,0), 9) +
      0.191621098929445*pow(-x1b0 + x1_B0(0,0,0), 15) + 2.80171921826191e-12*pow(-x1b0 + x1_B0(0,0,0), 46) +
      1.62263877443161e-6*pow(-x1b0 + x1_B0(0,0,0), 31) + 4.18385892907847e-10*pow(-x1b0 + x1_B0(0,0,0), 40) +
      5.47002468418598e-14*pow(-x1b0 + x1_B0(0,0,0), 50) - 0.0991133801027063*pow(-x1b0 + x1_B0(0,0,0), 19) -
      4.84823691462705e-14*pow(-x1b0 + x1_B0(0,0,0), 48) - 8.59088431511396*pow(-x1b0 + x1_B0(0,0,0), 13) -
      1.03833090938013e-8*pow(-x1b0 + x1_B0(0,0,0), 36) - 4.37668428629256e-11*pow(-x1b0 + x1_B0(0,0,0), 43) -
      0.0237488141559372*pow(-x1b0 + x1_B0(0,0,0), 20) - 3.70905769097297e-12*pow(-x1b0 + x1_B0(0,0,0), 41) -
      0.000295390489412819*pow(-x1b0 + x1_B0(0,0,0), 25) - 357.839089136715*pow(-x1b0 + x1_B0(0,0,0), 10) -
      0.000182970767674463*pow(-x1b0 + x1_B0(0,0,0), 26) - 0.106557576368043*pow(-x1b0 + x1_B0(0,0,0), 18) -
      8.49295264541314*pow(-x1b0 + x1_B0(0,0,0), 14) - 0.534621322524354*x1b0 - 1.27822991420825e-7*pow(-x1b0 +
      x1_B0(0,0,0), 34) - 291.622132220689*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 1.19348755725354*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))) - 7.44399595143024e-11*pow(-x1b0 + x1_B0(0,0,0), 42) - 1.22732068854371e-6*pow(-x1b0 +
      x1_B0(0,0,0), 28) - 3.00636981568856e-13*pow(-x1b0 + x1_B0(0,0,0), 49) - 1.64768972444332e-7*pow(-x1b0 +
      x1_B0(0,0,0), 33) - 24.5463006278327*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0
      + x1_B0(0,0,0))) - 828.55820239495*pow(-x1b0 + x1_B0(0,0,0), 8) - 1.2373228169489e-11*pow(-x1b0 + x1_B0(0,0,0),
      44) - 5.12258175945859e-8*pow(-x1b0 + x1_B0(0,0,0), 35) - 5.42499828519557e-5*pow(-x1b0 + x1_B0(0,0,0), 27)
)
: (

        0.999998697337244
));

    rhou1 = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   -8.17063723632105e-8 + 0.00212007746669345*pow(-x1b0 +
      x1_B0(0,0,0), 16) + 0.141284127590894*pow(-x1b0 + x1_B0(0,0,0), 12) + 0.00300483536486427*pow(-x1b0 +
      x1_B0(0,0,0), 17) + 6.97679994406743e-16*pow(-x1b0 + x1_B0(0,0,0), 50) + 6.39559855282406e-9*pow(-x1b0 +
      x1_B0(0,0,0), 32) + 1.51399608503856e-11*pow(-x1b0 + x1_B0(0,0,0), 39) + 1.77495560433781e-5*pow(-x1b0 +
      x1_B0(0,0,0), 23) + 1.42509329215086*pow(-x1b0 + x1_B0(0,0,0), 9) + 0.000616021148864015*((-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.000652953723292241*pow(-x1b0 + x1_B0(0,0,0), 18) +
      1.26951419119155e-5*x1_B0(0,0,0) + 1.61186181136595e-12*pow(-x1b0 + x1_B0(0,0,0), 41) +
      1.62362403707068e-15*pow(-x1b0 + x1_B0(0,0,0), 48) + 0.249498613417451*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 0.00412095285203932*((-x1b0
      + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 1.81959655099112e-8*pow(-x1b0 + x1_B0(0,0,0), 31)
      + 5.83681770690683e-7*pow(-x1b0 + x1_B0(0,0,0), 25) + 1.92767122797593e-14*pow(-x1b0 + x1_B0(0,0,0), 47) +
      0.0446127502844556*pow(-x1b0 + x1_B0(0,0,0), 13) + 1.58605098924975*pow(-x1b0 + x1_B0(0,0,0), 7) +
      7.59260230168585e-10*pow(-x1b0 + x1_B0(0,0,0), 33) + 1.24473845146158e-11*pow(-x1b0 + x1_B0(0,0,0), 38) +
      6.80187610073484e-6*pow(-x1b0 + x1_B0(0,0,0), 24) + 2.69722984785312e-8*pow(-x1b0 + x1_B0(0,0,0), 30) +
      1.44401018897378e-5*pow(-x1b0 + x1_B0(0,0,0), 22) + 2.74393607457179e-14*pow(-x1b0 + x1_B0(0,0,0), 46) +
      7.10250561703589e-12*pow(-x1b0 + x1_B0(0,0,0), 40) - 0.0468650299537339*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) - 3.02706624657507e-14*pow(-x1b0 + x1_B0(0,0,0), 45)
      - 5.92207293639253e-7*pow(-x1b0 + x1_B0(0,0,0), 27) - 4.8561212363574e-13*pow(-x1b0 + x1_B0(0,0,0), 43) -
      4.3596689226518e-15*pow(-x1b0 + x1_B0(0,0,0), 49) - 3.1892969133594e-13*pow(-x1b0 + x1_B0(0,0,0), 42) -
      1.10680879298031e-8*pow(-x1b0 + x1_B0(0,0,0), 29) - 2.20897351857434e-13*pow(-x1b0 + x1_B0(0,0,0), 44) -
      0.258588465001998*pow(-x1b0 + x1_B0(0,0,0), 11) - 5.32652751809113e-10*pow(-x1b0 + x1_B0(0,0,0), 35) -
      0.000291869892932767*pow(-x1b0 + x1_B0(0,0,0), 19) - 6.45605313265625e-10*pow(-x1b0 + x1_B0(0,0,0), 34) -
      4.18717403643527e-11*pow(-x1b0 + x1_B0(0,0,0), 37) - 0.789986732006658*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      1.26951419119155e-5*x1b0 - 2.17878572098823e-10*pow(-x1b0 + x1_B0(0,0,0), 36) - 0.323626437267022*pow(-x1b0 +
      x1_B0(0,0,0), 10) - 1.93430325810452e-7*pow(-x1b0 + x1_B0(0,0,0), 28) - 0.0127153083299108*pow(-x1b0 +
      x1_B0(0,0,0), 15) - 0.0264310265662573*pow(-x1b0 + x1_B0(0,0,0), 14) - 8.62044482438048e-7*pow(-x1b0 +
      x1_B0(0,0,0), 26) - 5.90688563506032e-5*pow(-x1b0 + x1_B0(0,0,0), 21) - 0.000242578791846908*pow(-x1b0 +
      x1_B0(0,0,0), 20) - 1.99735183925755*pow(-x1b0 + x1_B0(0,0,0), 8)
)
: (
   0.00404432122221376
));

    T = ((-x1b0 + x1_B0(0,0,0) < 2.44024402440244) ? (
   1.95382251996418 + 1.12129635273477e-11*pow(-x1b0 +
      x1_B0(0,0,0), 45) + 1819.43054615916*pow(-x1b0 + x1_B0(0,0,0), 7) + 7.89008996027609e-13*pow(-x1b0 + x1_B0(0,0,0),
      49) + 2.01064573871103e-5*pow(-x1b0 + x1_B0(0,0,0), 29) + 0.000405601599729808*pow(-x1b0 + x1_B0(0,0,0), 23) +
      123.754060288635*pow(-x1b0 + x1_B0(0,0,0), 11) + 0.0105170896875868*pow(-x1b0 + x1_B0(0,0,0), 22) +
      2.94966345214024*pow(-x1b0 + x1_B0(0,0,0), 16) + 4.39905014352576e-11*pow(-x1b0 + x1_B0(0,0,0), 44) +
      4.73020331929709e-5*pow(-x1b0 + x1_B0(0,0,0), 27) + 0.197016449628322*pow(-x1b0 + x1_B0(0,0,0), 17) +
      108.973301366629*pow(-x1b0 + x1_B0(0,0,0), 12) + 5.30090723936674e-8*pow(-x1b0 + x1_B0(0,0,0), 35) +
      6.30981060095481e-11*pow(-x1b0 + x1_B0(0,0,0), 43) + 1.67957468102799e-8*pow(-x1b0 + x1_B0(0,0,0), 37) +
      18.2948944789904*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) +
      2.36935914148264e-9*pow(-x1b0 + x1_B0(0,0,0), 38) + 0.00512282100754557*pow(-x1b0 + x1_B0(0,0,0), 20) +
      352.612523150284*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) + 2.6780408475796e-6*pow(-x1b0 + x1_B0(0,0,0), 30) +
      4.3736784172016e-8*pow(-x1b0 + x1_B0(0,0,0), 36) + 3.06965682190287*pow(-x1b0 + x1_B0(0,0,0), 15) +
      3.07059408802214*x1_B0(0,0,0) + 5.11844229656428e-5*pow(-x1b0 + x1_B0(0,0,0), 28) + 0.0269179683475999*pow(-x1b0 +
      x1_B0(0,0,0), 21) + 1987.58045860676*pow(-x1b0 + x1_B0(0,0,0), 9) - 3.63253412653224e-12*pow(-x1b0 + x1_B0(0,0,0),
      47) - 6.05334762344023e-13*pow(-x1b0 + x1_B0(0,0,0), 48) - 0.00149507065700942*pow(-x1b0 + x1_B0(0,0,0), 24) -
      0.000794087613653311*pow(-x1b0 + x1_B0(0,0,0), 25) - 1.53622005871689e-9*pow(-x1b0 + x1_B0(0,0,0), 39) -
      3.06175350337974e-12*pow(-x1b0 + x1_B0(0,0,0), 46) - 962.282723664029*((-x1b0 + x1_B0(0,0,0))*(-x1b0 +
      x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      16.1818227188491*pow(-x1b0 + x1_B0(0,0,0), 14) - 7.21890448602392e-8*pow(-x1b0 + x1_B0(0,0,0), 34) -
      1.32415488926547e-9*pow(-x1b0 + x1_B0(0,0,0), 40) - 963.121232620464*pow(-x1b0 + x1_B0(0,0,0), 10) -
      30.1894759831545*pow(-x1b0 + x1_B0(0,0,0), 13) - 1.84275919064868e-6*pow(-x1b0 + x1_B0(0,0,0), 31) -
      1.14355553753312e-13*pow(-x1b0 + x1_B0(0,0,0), 50) - 5.00211747220444e-10*pow(-x1b0 + x1_B0(0,0,0), 41) -
      2350.38788058623*pow(-x1b0 + x1_B0(0,0,0), 8) - 5.60006414533923e-7*pow(-x1b0 + x1_B0(0,0,0), 33) -
      0.158616678433615*pow(-x1b0 + x1_B0(0,0,0), 19) - 0.000158241329515349*pow(-x1b0 + x1_B0(0,0,0), 26) -
      90.9012946169306*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      3.07059408802214*x1b0 - 1.50405882258342e-6*pow(-x1b0 + x1_B0(0,0,0), 32) - 0.398552374641304*pow(-x1b0 +
      x1_B0(0,0,0), 18) - 6.38582156191306*((-x1b0 + x1_B0(0,0,0))*(-x1b0 + x1_B0(0,0,0))) -
      4.99793823973241e-11*pow(-x1b0 + x1_B0(0,0,0), 42)
)
: (
   1.00000130067071
));

   rho = 1.0/T;

   rho_B0(0,0,0) = rho;

   rhou0_B0(0,0,0) = rhou0;

   rhou1_B0(0,0,0) = rhou1;

   rhoE_B0(0,0,0) = (0.5*(rhou0*rhou0) + 0.5*(rhou1*rhou1))/rho + invgama*inv2Minf*inv_gamma_m1*T*rho;

   rhou2_B0(0,0,0) = 0.0;


            }
        }
    }

    if (block->instance->OPS_diags > 1) {
        ops_timers_core(&__c1, &__t1);
        block->instance->OPS_kernels[0].time += __t1 - __t2;
    }
#ifndef OPS_LAZY
    ops_set_dirtybit_device(args, 9);
    ops_set_halo_dirtybit3(&args[0], range);
    ops_set_halo_dirtybit3(&args[1], range);
    ops_set_halo_dirtybit3(&args[2], range);
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
        block->instance->OPS_kernels[0].mpi_time += __t2 - __t1;
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg0);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg1);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg2);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg3);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg4);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg5);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg6);
        block->instance->OPS_kernels[0].transfer += ops_compute_transfer(dim, start, end, &arg7);
    }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel067(
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
    ops_arg arg7,
    ops_arg arg8
)
{
    ops_arg args[9];

    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;

    create_kerneldesc_and_enque("opensbliblock00Kernel067", args, 9, 0, dim, 1, range, block, ops_par_loop_opensbliblock00Kernel067_execute);
}
#endif
