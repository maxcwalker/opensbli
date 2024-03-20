ops_dat a_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
a_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "a_B0");
}
ops_dat ev_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
ev_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "ev_B0");
}
ops_dat eveqN2_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
eveqN2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "eveqN2_B0");
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
ops_dat ptauN2_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
ptauN2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "ptauN2_B0");
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
ops_dat Residual3_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
Residual3_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual3_B0");
}
ops_dat Residual4_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
Residual4_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual4_B0");
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
ops_dat rhoev_B0;
{
if (restart == 1){
rhoev_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoev_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoev_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoev_B0");
}
}
ops_dat rhoev_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoev_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoev_RKold_B0");
}
ops_dat rhoN2_B0;
{
if (restart == 1){
rhoN2_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoN2_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoN2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoN2_B0");
}
}
ops_dat rhoN2_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoN2_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoN2_RKold_B0");
}
ops_dat rhoN_B0;
{
if (restart == 1){
rhoN_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoN_B0", "restart.h5");
}
else {
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoN_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoN_B0");
}
}
ops_dat rhoN_RKold_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
rhoN_RKold_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "rhoN_RKold_B0");
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
ops_dat T_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
T_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "T_B0");
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
ops_dat wdotN2_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wdotN2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wdotN2_B0");
}
ops_dat wdotN_B0;
{
int halo_p[] = {5};
int halo_m[] = {-5};
int size[] = {block0np0};
int base[] = {0};
double* value = NULL;
wdotN_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wdotN_B0");
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
