void write_constants(const char* filename){
ops_write_const_hdf5("Delta0block0", 1, "double", (char*)&Delta0block0, filename);
ops_write_const_hdf5("HDF5_timing", 1, "int", (char*)&HDF5_timing, filename);
ops_write_const_hdf5("Lref", 1, "double", (char*)&Lref, filename);
ops_write_const_hdf5("MN", 1, "double", (char*)&MN, filename);
ops_write_const_hdf5("MN2", 1, "double", (char*)&MN2, filename);
ops_write_const_hdf5("Re", 1, "double", (char*)&Re, filename);
ops_write_const_hdf5("Rhat", 1, "double", (char*)&Rhat, filename);
ops_write_const_hdf5("block0np0", 1, "int", (char*)&block0np0, filename);
ops_write_const_hdf5("cN", 1, "double", (char*)&cN, filename);
ops_write_const_hdf5("cN2", 1, "double", (char*)&cN2, filename);
ops_write_const_hdf5("delta_TVD", 1, "double", (char*)&delta_TVD, filename);
ops_write_const_hdf5("dt", 1, "double", (char*)&dt, filename);
ops_write_const_hdf5("eps_TVD", 1, "double", (char*)&eps_TVD, filename);
ops_write_const_hdf5("gama", 1, "double", (char*)&gama, filename);
ops_write_const_hdf5("gamma_m1", 1, "double", (char*)&gamma_m1, filename);
ops_write_const_hdf5("kappa", 1, "double", (char*)&kappa, filename);
ops_write_const_hdf5("kappa_TVD", 1, "double", (char*)&kappa_TVD, filename);
ops_write_const_hdf5("niter", 1, "int", (char*)&niter, filename);
ops_write_const_hdf5("simulation_time", 1, "double", (char*)&simulation_time, filename);
ops_write_const_hdf5("start_iter", 1, "int", (char*)&start_iter, filename);
ops_write_const_hdf5("thetavN2", 1, "double", (char*)&thetavN2, filename);
ops_write_const_hdf5("uref", 1, "double", (char*)&uref, filename);
ops_write_const_hdf5("iter", 1, "int", (char*)&iter, filename);
}

void HDF5_IO_Write_0_opensbliblock00(ops_block& opensbliblock00, ops_dat& rhoN_B0, ops_dat& rhoN2_B0, ops_dat& rhou0_B0, ops_dat& rhoev_B0, ops_dat& rhoE_B0, ops_dat& x0_B0, ops_dat& T_B0, ops_dat& p_B0, int HDF5_timing){
double cpu_start0, elapsed_start0;
if (HDF5_timing == 1){
ops_timers(&cpu_start0, &elapsed_start0);
}
// Writing OPS datasets
char name0[80];
sprintf(name0, "opensbli_output.h5");
ops_fetch_block_hdf5_file(opensbliblock00, name0);
ops_fetch_dat_hdf5_file(rhoN_B0, name0);
ops_fetch_dat_hdf5_file(rhoN2_B0, name0);
ops_fetch_dat_hdf5_file(rhou0_B0, name0);
ops_fetch_dat_hdf5_file(rhoev_B0, name0);
ops_fetch_dat_hdf5_file(rhoE_B0, name0);
ops_fetch_dat_hdf5_file(x0_B0, name0);
ops_fetch_dat_hdf5_file(T_B0, name0);
ops_fetch_dat_hdf5_file(p_B0, name0);
// Writing simulation constants
write_constants(name0);
if (HDF5_timing == 1){
double cpu_end0, elapsed_end0;
ops_timers(&cpu_end0, &elapsed_end0);
ops_printf("-----------------------------------------\n");
ops_printf("Time to write HDF5 file: %s: %lf\n", name0, elapsed_end0-elapsed_start0);
ops_printf("-----------------------------------------\n");
fflush(stdout);
}
}

