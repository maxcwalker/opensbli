// Auto-generated at 2024-10-10 09:28:41.109297 by ops-translator legacy

//header
#define OPS_3D
#define OPS_API 2
#include "ops_lib_core.h"
#ifdef OPS_MPI
#include "ops_mpi_core.h"
#include <limits>
#endif

#include "ops_sycl_rt_support.h"
#include "ops_sycl_reduction.h"
// global constants
cl::sycl::buffer<double,1> *Delta0block0_p=nullptr;
extern double Delta0block0;
cl::sycl::buffer<double,1> *Delta1block0_p=nullptr;
extern double Delta1block0;
cl::sycl::buffer<double,1> *Delta2block0_p=nullptr;
extern double Delta2block0;
cl::sycl::buffer<double,1> *H_p=nullptr;
extern double H;
cl::sycl::buffer<int,1> *HDF5_timing_p=nullptr;
extern int HDF5_timing;
cl::sycl::buffer<double,1> *L_p=nullptr;
extern double L;
cl::sycl::buffer<double,1> *Minf_p=nullptr;
extern double Minf;
cl::sycl::buffer<double,1> *Pr_p=nullptr;
extern double Pr;
cl::sycl::buffer<double,1> *Re_p=nullptr;
extern double Re;
cl::sycl::buffer<double,1> *RefT_p=nullptr;
extern double RefT;
cl::sycl::buffer<double,1> *SuthT_p=nullptr;
extern double SuthT;
cl::sycl::buffer<double,1> *Twall_p=nullptr;
extern double Twall;
cl::sycl::buffer<double,1> *a_p=nullptr;
extern double a;
cl::sycl::buffer<double,1> *b_p=nullptr;
extern double b;
cl::sycl::buffer<double,1> *b_f_p=nullptr;
extern double b_f;
cl::sycl::buffer<double,1> *beta_0_p=nullptr;
extern double beta_0;
cl::sycl::buffer<int,1> *block0np0_p=nullptr;
extern int block0np0;
cl::sycl::buffer<int,1> *block0np1_p=nullptr;
extern int block0np1;
cl::sycl::buffer<int,1> *block0np2_p=nullptr;
extern int block0np2;
cl::sycl::buffer<double,1> *dt_p=nullptr;
extern double dt;
cl::sycl::buffer<double,1> *gama_p=nullptr;
extern double gama;
cl::sycl::buffer<double,1> *gamma_m1_p=nullptr;
extern double gamma_m1;
cl::sycl::buffer<double,1> *inv2Delta0block0_p=nullptr;
extern double inv2Delta0block0;
cl::sycl::buffer<double,1> *inv2Delta1block0_p=nullptr;
extern double inv2Delta1block0;
cl::sycl::buffer<double,1> *inv2Delta2block0_p=nullptr;
extern double inv2Delta2block0;
cl::sycl::buffer<double,1> *inv2Minf_p=nullptr;
extern double inv2Minf;
cl::sycl::buffer<double,1> *inv2a_p=nullptr;
extern double inv2a;
cl::sycl::buffer<double,1> *invDelta0block0_p=nullptr;
extern double invDelta0block0;
cl::sycl::buffer<double,1> *invDelta1block0_p=nullptr;
extern double invDelta1block0;
cl::sycl::buffer<double,1> *invDelta2block0_p=nullptr;
extern double invDelta2block0;
cl::sycl::buffer<double,1> *invH_p=nullptr;
extern double invH;
cl::sycl::buffer<double,1> *invPr_p=nullptr;
extern double invPr;
cl::sycl::buffer<double,1> *invRe_p=nullptr;
extern double invRe;
cl::sycl::buffer<double,1> *invRefT_p=nullptr;
extern double invRefT;
cl::sycl::buffer<double,1> *inv_gamma_m1_p=nullptr;
extern double inv_gamma_m1;
cl::sycl::buffer<double,1> *invgama_p=nullptr;
extern double invgama;
cl::sycl::buffer<double,1> *invgamma_m1_p=nullptr;
extern double invgamma_m1;
cl::sycl::buffer<double,1> *invnsamples_p=nullptr;
extern double invnsamples;
cl::sycl::buffer<int,1> *niter_p=nullptr;
extern int niter;
cl::sycl::buffer<int,1> *nsamples_p=nullptr;
extern int nsamples;
cl::sycl::buffer<double,1> *omega_0_p=nullptr;
extern double omega_0;
cl::sycl::buffer<double,1> *omega_1_p=nullptr;
extern double omega_1;
cl::sycl::buffer<double,1> *omega_2_p=nullptr;
extern double omega_2;
cl::sycl::buffer<double,1> *omega_3_p=nullptr;
extern double omega_3;
cl::sycl::buffer<double,1> *phi_0_p=nullptr;
extern double phi_0;
cl::sycl::buffer<double,1> *phi_1_p=nullptr;
extern double phi_1;
cl::sycl::buffer<double,1> *phi_2_p=nullptr;
extern double phi_2;
cl::sycl::buffer<double,1> *shock_filter_control_p=nullptr;
extern double shock_filter_control;
cl::sycl::buffer<double,1> *simulation_time_p=nullptr;
extern double simulation_time;
cl::sycl::buffer<int,1> *start_iter_p=nullptr;
extern int start_iter;
cl::sycl::buffer<int,1> *stat_frequency_p=nullptr;
extern int stat_frequency;
cl::sycl::buffer<double,1> *tripA_p=nullptr;
extern double tripA;
cl::sycl::buffer<int,1> *write_output_file_p=nullptr;
extern int write_output_file;
cl::sycl::buffer<int,1> *write_slices_p=nullptr;
extern int write_slices;
cl::sycl::buffer<double,1> *xts_p=nullptr;
extern double xts;

void ops_init_backend() {}

void ops_decl_const_char(OPS_instance *instance, int dim, char const * type, int size, char * dat, char const * name ) {
    if (!strcmp(name,"Delta0block0")) {
        if (Delta0block0_p == nullptr) Delta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Delta0block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Delta1block0")) {
        if (Delta1block0_p == nullptr) Delta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Delta1block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Delta2block0")) {
        if (Delta2block0_p == nullptr) Delta2block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Delta2block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"H")) {
        if (H_p == nullptr) H_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*H_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"HDF5_timing")) {
        if (HDF5_timing_p == nullptr) HDF5_timing_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*HDF5_timing_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"L")) {
        if (L_p == nullptr) L_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*L_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Minf")) {
        if (Minf_p == nullptr) Minf_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Minf_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Pr")) {
        if (Pr_p == nullptr) Pr_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Pr_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Re")) {
        if (Re_p == nullptr) Re_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Re_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"RefT")) {
        if (RefT_p == nullptr) RefT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*RefT_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"SuthT")) {
        if (SuthT_p == nullptr) SuthT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*SuthT_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"Twall")) {
        if (Twall_p == nullptr) Twall_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*Twall_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"a")) {
        if (a_p == nullptr) a_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*a_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"b")) {
        if (b_p == nullptr) b_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*b_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"b_f")) {
        if (b_f_p == nullptr) b_f_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*b_f_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"beta_0")) {
        if (beta_0_p == nullptr) beta_0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*beta_0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"block0np0")) {
        if (block0np0_p == nullptr) block0np0_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*block0np0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"block0np1")) {
        if (block0np1_p == nullptr) block0np1_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*block0np1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"block0np2")) {
        if (block0np2_p == nullptr) block0np2_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*block0np2_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"dt")) {
        if (dt_p == nullptr) dt_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*dt_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"gama")) {
        if (gama_p == nullptr) gama_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*gama_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"gamma_m1")) {
        if (gamma_m1_p == nullptr) gamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*gamma_m1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv2Delta0block0")) {
        if (inv2Delta0block0_p == nullptr) inv2Delta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv2Delta0block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv2Delta1block0")) {
        if (inv2Delta1block0_p == nullptr) inv2Delta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv2Delta1block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv2Delta2block0")) {
        if (inv2Delta2block0_p == nullptr) inv2Delta2block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv2Delta2block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv2Minf")) {
        if (inv2Minf_p == nullptr) inv2Minf_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv2Minf_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv2a")) {
        if (inv2a_p == nullptr) inv2a_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv2a_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invDelta0block0")) {
        if (invDelta0block0_p == nullptr) invDelta0block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invDelta0block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invDelta1block0")) {
        if (invDelta1block0_p == nullptr) invDelta1block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invDelta1block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invDelta2block0")) {
        if (invDelta2block0_p == nullptr) invDelta2block0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invDelta2block0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invH")) {
        if (invH_p == nullptr) invH_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invH_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invPr")) {
        if (invPr_p == nullptr) invPr_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invPr_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invRe")) {
        if (invRe_p == nullptr) invRe_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invRe_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invRefT")) {
        if (invRefT_p == nullptr) invRefT_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invRefT_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"inv_gamma_m1")) {
        if (inv_gamma_m1_p == nullptr) inv_gamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*inv_gamma_m1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invgama")) {
        if (invgama_p == nullptr) invgama_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invgama_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invgamma_m1")) {
        if (invgamma_m1_p == nullptr) invgamma_m1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invgamma_m1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"invnsamples")) {
        if (invnsamples_p == nullptr) invnsamples_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*invnsamples_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"niter")) {
        if (niter_p == nullptr) niter_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*niter_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"nsamples")) {
        if (nsamples_p == nullptr) nsamples_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*nsamples_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"omega_0")) {
        if (omega_0_p == nullptr) omega_0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*omega_0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"omega_1")) {
        if (omega_1_p == nullptr) omega_1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*omega_1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"omega_2")) {
        if (omega_2_p == nullptr) omega_2_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*omega_2_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"omega_3")) {
        if (omega_3_p == nullptr) omega_3_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*omega_3_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"phi_0")) {
        if (phi_0_p == nullptr) phi_0_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*phi_0_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"phi_1")) {
        if (phi_1_p == nullptr) phi_1_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*phi_1_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"phi_2")) {
        if (phi_2_p == nullptr) phi_2_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*phi_2_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"shock_filter_control")) {
        if (shock_filter_control_p == nullptr) shock_filter_control_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*shock_filter_control_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"simulation_time")) {
        if (simulation_time_p == nullptr) simulation_time_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*simulation_time_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"start_iter")) {
        if (start_iter_p == nullptr) start_iter_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*start_iter_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"stat_frequency")) {
        if (stat_frequency_p == nullptr) stat_frequency_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*stat_frequency_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"tripA")) {
        if (tripA_p == nullptr) tripA_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*tripA_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"write_output_file")) {
        if (write_output_file_p == nullptr) write_output_file_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*write_output_file_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"write_slices")) {
        if (write_slices_p == nullptr) write_slices_p = new cl::sycl::buffer<int,1>(cl::sycl::range<1>(dim));
        auto accessor = (*write_slices_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((int*)dat)[d];
        }
    }
    else
    if (!strcmp(name,"xts")) {
        if (xts_p == nullptr) xts_p = new cl::sycl::buffer<double,1>(cl::sycl::range<1>(dim));
        auto accessor = (*xts_p).get_access<cl::sycl::access::mode::write>();
        for (int d = 0; d < dim; d++) {
            accessor[d] = ((double*)dat)[d];
        }
    }
    else
    {
        throw OPSException(OPS_RUNTIME_ERROR, "error: unknown const name");
    }
}

//user kernel files
#include "opensbliblock00Kernel067_kernel.cpp"
#include "opensbliblock00Kernel070_kernel.cpp"
#include "opensbliblock00Kernel071_kernel.cpp"
#include "opensbliblock00Kernel072_kernel.cpp"
#include "opensbliblock00Kernel073_kernel.cpp"
#include "opensbliblock00Kernel074_kernel.cpp"
#include "opensbliblock00Kernel081_kernel.cpp"
#include "opensbliblock00Kernel061_kernel.cpp"
#include "opensbliblock00Kernel062_kernel.cpp"
#include "opensbliblock00Kernel063_kernel.cpp"
#include "opensbliblock00Kernel064_kernel.cpp"
#include "opensbliblock00Kernel006_kernel.cpp"
#include "opensbliblock00Kernel008_kernel.cpp"
#include "opensbliblock00Kernel016_kernel.cpp"
#include "opensbliblock00Kernel011_kernel.cpp"
#include "opensbliblock00Kernel012_kernel.cpp"
#include "opensbliblock00Kernel017_kernel.cpp"
#include "opensbliblock00Kernel020_kernel.cpp"
#include "opensbliblock00Kernel010_kernel.cpp"
#include "opensbliblock00Kernel027_kernel.cpp"
#include "opensbliblock00Kernel022_kernel.cpp"
#include "opensbliblock00Kernel000_kernel.cpp"
#include "opensbliblock00Kernel001_kernel.cpp"
#include "opensbliblock00Kernel002_kernel.cpp"
#include "opensbliblock00Kernel021_kernel.cpp"
#include "opensbliblock00Kernel032_kernel.cpp"
#include "opensbliblock00Kernel034_kernel.cpp"
#include "opensbliblock00Kernel036_kernel.cpp"
#include "opensbliblock00Kernel038_kernel.cpp"
#include "opensbliblock00Kernel040_kernel.cpp"
#include "opensbliblock00Kernel041_kernel.cpp"
#include "opensbliblock00Kernel042_kernel.cpp"
#include "opensbliblock00Kernel043_kernel.cpp"
#include "opensbliblock00Kernel044_kernel.cpp"
#include "opensbliblock00Kernel045_kernel.cpp"
#include "opensbliblock00Kernel046_kernel.cpp"
#include "opensbliblock00Kernel047_kernel.cpp"
#include "opensbliblock00Kernel056_kernel.cpp"
#include "opensbliblock00Kernel084_kernel.cpp"
#include "opensbliblock00Kernel082_kernel.cpp"
#include "monitor_0_p_B0_kernel.cpp"
#include "monitor_1_p_B0_kernel.cpp"
#include "monitor_2_p_B0_kernel.cpp"
#include "monitor_3_p_B0_kernel.cpp"
#include "monitor_4_p_B0_kernel.cpp"
#include "monitor_5_p_B0_kernel.cpp"
#include "monitor_6_p_B0_kernel.cpp"
#include "monitor_7_p_B0_kernel.cpp"
#include "monitor_8_p_B0_kernel.cpp"
#include "monitor_9_p_B0_kernel.cpp"
#include "monitor_10_p_B0_kernel.cpp"
#include "monitor_11_p_B0_kernel.cpp"
#include "monitor_12_p_B0_kernel.cpp"
#include "monitor_13_p_B0_kernel.cpp"
#include "monitor_14_p_B0_kernel.cpp"
#include "monitor_15_p_B0_kernel.cpp"
#include "monitor_16_p_B0_kernel.cpp"
#include "monitor_17_p_B0_kernel.cpp"
#include "monitor_18_p_B0_kernel.cpp"
#include "monitor_19_p_B0_kernel.cpp"
#include "monitor_20_p_B0_kernel.cpp"
#include "monitor_21_p_B0_kernel.cpp"
#include "monitor_22_p_B0_kernel.cpp"
#include "monitor_23_p_B0_kernel.cpp"
#include "monitor_24_p_B0_kernel.cpp"
#include "monitor_25_p_B0_kernel.cpp"
#include "monitor_26_p_B0_kernel.cpp"
#include "monitor_27_p_B0_kernel.cpp"
#include "monitor_28_p_B0_kernel.cpp"
#include "monitor_29_p_B0_kernel.cpp"
#include "monitor_30_p_B0_kernel.cpp"
#include "monitor_31_p_B0_kernel.cpp"
#include "monitor_32_p_B0_kernel.cpp"
#include "monitor_33_p_B0_kernel.cpp"
#include "monitor_34_p_B0_kernel.cpp"
#include "monitor_35_p_B0_kernel.cpp"
#include "monitor_36_p_B0_kernel.cpp"
#include "monitor_37_rhou0_B0_kernel.cpp"
#include "monitor_38_rhou0_B0_kernel.cpp"
#include "monitor_39_rhou0_B0_kernel.cpp"
#include "monitor_40_rhou0_B0_kernel.cpp"
#include "monitor_41_rhou0_B0_kernel.cpp"
#include "monitor_42_rhou0_B0_kernel.cpp"
#include "monitor_43_rhou0_B0_kernel.cpp"
#include "monitor_44_rhou0_B0_kernel.cpp"
#include "monitor_45_rhou0_B0_kernel.cpp"
#include "monitor_46_rhou0_B0_kernel.cpp"
#include "monitor_47_rhou0_B0_kernel.cpp"
#include "monitor_48_rhou0_B0_kernel.cpp"
#include "monitor_49_rhou0_B0_kernel.cpp"
#include "monitor_50_rhou0_B0_kernel.cpp"
#include "monitor_51_rhou0_B0_kernel.cpp"
#include "monitor_52_rhou0_B0_kernel.cpp"
#include "monitor_53_rhou0_B0_kernel.cpp"
#include "monitor_54_rhou0_B0_kernel.cpp"
#include "monitor_55_rhou0_B0_kernel.cpp"
#include "monitor_56_rhou0_B0_kernel.cpp"
#include "monitor_57_rhou0_B0_kernel.cpp"
#include "monitor_58_rhou0_B0_kernel.cpp"
#include "monitor_59_rhou0_B0_kernel.cpp"
#include "monitor_60_rhou0_B0_kernel.cpp"
#include "monitor_61_rhou0_B0_kernel.cpp"
#include "monitor_62_rhou0_B0_kernel.cpp"
#include "monitor_63_rhou0_B0_kernel.cpp"
#include "monitor_64_rhou0_B0_kernel.cpp"
#include "monitor_65_rhou0_B0_kernel.cpp"
#include "monitor_66_rhou0_B0_kernel.cpp"
#include "monitor_67_rhou0_B0_kernel.cpp"
#include "monitor_68_rhou0_B0_kernel.cpp"
#include "monitor_69_rhou0_B0_kernel.cpp"
#include "monitor_70_rhou0_B0_kernel.cpp"
#include "monitor_71_rhou0_B0_kernel.cpp"
#include "monitor_72_rhou0_B0_kernel.cpp"
#include "monitor_73_rhou0_B0_kernel.cpp"
#include "monitor_74_rhou2_B0_kernel.cpp"
#include "monitor_75_rhou2_B0_kernel.cpp"
#include "monitor_76_rhou2_B0_kernel.cpp"
#include "monitor_77_rhou2_B0_kernel.cpp"
#include "monitor_78_rhou2_B0_kernel.cpp"
#include "monitor_79_rhou2_B0_kernel.cpp"
#include "monitor_80_rhou2_B0_kernel.cpp"
#include "monitor_81_rhou2_B0_kernel.cpp"
#include "monitor_82_rhou2_B0_kernel.cpp"
#include "monitor_83_rhou2_B0_kernel.cpp"
#include "monitor_84_rhou2_B0_kernel.cpp"
#include "monitor_85_rhou2_B0_kernel.cpp"
#include "monitor_86_rhou2_B0_kernel.cpp"
#include "monitor_87_rhou2_B0_kernel.cpp"
#include "monitor_88_rhou2_B0_kernel.cpp"
#include "monitor_89_rhou2_B0_kernel.cpp"
#include "monitor_90_rhou2_B0_kernel.cpp"
#include "monitor_91_rhou2_B0_kernel.cpp"
#include "monitor_92_rhou2_B0_kernel.cpp"
#include "monitor_93_rhou2_B0_kernel.cpp"
#include "monitor_94_rhou2_B0_kernel.cpp"
#include "monitor_95_rhou2_B0_kernel.cpp"
#include "monitor_96_rhou2_B0_kernel.cpp"
#include "monitor_97_rhou2_B0_kernel.cpp"
#include "monitor_98_rhou2_B0_kernel.cpp"
#include "monitor_99_rhou2_B0_kernel.cpp"
#include "monitor_100_rhou2_B0_kernel.cpp"
#include "monitor_101_rhou2_B0_kernel.cpp"
#include "monitor_102_rhou2_B0_kernel.cpp"
#include "monitor_103_rhou2_B0_kernel.cpp"
#include "monitor_104_rhou2_B0_kernel.cpp"
#include "monitor_105_rhou2_B0_kernel.cpp"
#include "monitor_106_rhou2_B0_kernel.cpp"
#include "monitor_107_rhou2_B0_kernel.cpp"
#include "monitor_108_rhou2_B0_kernel.cpp"
#include "monitor_109_rhou2_B0_kernel.cpp"
#include "monitor_110_rhou2_B0_kernel.cpp"
#include "opensbliblock00Kernel083_kernel.cpp"
