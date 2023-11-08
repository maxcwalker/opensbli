ops_dat D11_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
D11_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "D11_B0");
}
ops_dat detJ_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
detJ_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "detJ_B0");
}
ops_dat mu_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
mu_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "mu_B0");
}
ops_dat p_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
p_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "p_B0");
}
ops_dat Residual0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual0_B0");
}
ops_dat Residual1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual1_B0");
}
ops_dat Residual2_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual2_B0");
}
ops_dat Residual3_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual3_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual3_B0");
}
ops_dat rho_B0;
{
if (restart == 1){
rho_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rho_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rho_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rho_B0");
}
}
ops_dat rho_RKold_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rho_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rho_RKold_B0");
}
ops_dat rhoE_B0;
{
if (restart == 1){
rhoE_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoE_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhoE_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoE_B0");
}
}
ops_dat rhoE_RKold_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhoE_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoE_RKold_B0");
}
ops_dat rhou0_B0;
{
if (restart == 1){
rhou0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhou0_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou0_B0");
}
}
ops_dat rhou0_RKold_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou0_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou0_RKold_B0");
}
ops_dat rhou1_B0;
{
if (restart == 1){
rhou1_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhou1_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou1_B0");
}
}
ops_dat rhou1_RKold_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou1_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhou1_RKold_B0");
}
ops_dat SD111_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD111_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD111_B0");
}
ops_dat T_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
T_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "T_B0");
}
ops_dat u0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
u0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "u0_B0");
}
ops_dat u1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
u1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "u1_B0");
}
ops_dat wk0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk0_B0");
}
ops_dat wk1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk1_B0");
}
ops_dat wk2_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk2_B0");
}
ops_dat wk3_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk3_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk3_B0");
}
ops_dat wk4_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk4_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk4_B0");
}
ops_dat wk5_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk5_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk5_B0");
}
ops_dat x0_B0;
{
if (restart == 1){
x0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "x0_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
x0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "x0_B0");
}
}
ops_dat x1_B0;
{
if (restart == 1){
x1_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "x1_B0", "restart.h5");
}
else {
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
x1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "x1_B0");
}
}
