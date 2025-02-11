ops_dat a_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
a_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "a_B0");
}
ops_dat p_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
p_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "p_B0");
}
ops_dat q0_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
q0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "q0_B0");
}
ops_dat Residual0_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
Residual0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual0_B0");
}
ops_dat Residual1_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
Residual1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual1_B0");
}
ops_dat Residual2_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
Residual2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual2_B0");
}
ops_dat rho_B0;
{
if (restart == 1){
rho_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rho_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rho_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rho_B0");
}
}
ops_dat rho_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rho_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rho_RKold_B0");
}
ops_dat rhoE_B0;
{
if (restart == 1){
rhoE_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoE_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoE_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoE_B0");
}
}
ops_dat rhoE_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoE_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoE_RKold_B0");
}
ops_dat rhou0_B0;
{
if (restart == 1){
rhou0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhou0_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhou0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou0_B0");
}
}
ops_dat rhou0_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhou0_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou0_RKold_B0");
}
ops_dat tau00_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
tau00_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "tau00_B0");
}
ops_dat u0_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
u0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "u0_B0");
}
ops_dat wk0_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk0_B0");
}
ops_dat wk10_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk10_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk10_B0");
}
ops_dat wk11_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk11_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk11_B0");
}
ops_dat wk12_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk12_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk12_B0");
}
ops_dat wk13_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk13_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk13_B0");
}
ops_dat wk14_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk14_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk14_B0");
}
ops_dat wk15_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk15_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk15_B0");
}
ops_dat wk16_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk16_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk16_B0");
}
ops_dat wk17_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk17_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk17_B0");
}
ops_dat wk1_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk1_B0");
}
ops_dat wk2_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk2_B0");
}
ops_dat wk3_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk3_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk3_B0");
}
ops_dat wk4_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk4_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk4_B0");
}
ops_dat wk5_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk5_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk5_B0");
}
ops_dat wk6_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk6_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk6_B0");
}
ops_dat wk7_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk7_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk7_B0");
}
ops_dat wk8_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk8_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk8_B0");
}
ops_dat wk9_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wk9_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk9_B0");
}
ops_dat x0_B0;
{
if (restart == 1){
x0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "x0_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
x0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "x0_B0");
}
}
