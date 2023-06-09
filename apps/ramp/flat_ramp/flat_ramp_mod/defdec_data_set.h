ops_dat a_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
a_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "a_B0");
}
ops_dat D00_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
D00_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "D00_B0");
}
ops_dat D01_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
D01_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "D01_B0");
}
ops_dat D10_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
D10_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "D10_B0");
}
ops_dat D11_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
D11_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "D11_B0", "restart.h5");
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
p_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "p_B0", "restart.h5");
}
ops_dat Residual0_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual0_B0");
}
ops_dat Residual1_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual1_B0");
}
ops_dat Residual2_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual2_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual2_B0");
}
ops_dat Residual3_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
Residual3_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "Residual3_B0");
}
ops_dat rho_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rho_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rho_B0", "restart.h5");
}
ops_dat rhoE_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhoE_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhoE_B0", "restart.h5");
}
ops_dat rhou0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhou0_B0", "restart.h5");
}
ops_dat rhou1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
rhou1_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "rhou1_B0", "restart.h5");
}
ops_dat SD000_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD000_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD000_B0");
}
ops_dat SD001_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD001_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD001_B0");
}
ops_dat SD010_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD010_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD010_B0");
}
ops_dat SD011_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD011_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD011_B0");
}
ops_dat SD100_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD100_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD100_B0");
}
ops_dat SD101_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD101_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD101_B0");
}
ops_dat SD110_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
SD110_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "SD110_B0");
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
ops_dat tempRK_rho_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
tempRK_rho_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "tempRK_rho_B0");
}
ops_dat tempRK_rhoE_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
tempRK_rhoE_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "tempRK_rhoE_B0");
}
ops_dat tempRK_rhou0_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
tempRK_rhou0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "tempRK_rhou0_B0");
}
ops_dat tempRK_rhou1_B0;
{
int halo_p[] = {0, 0};
int halo_m[] = {0, 0};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
tempRK_rhou1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "tempRK_rhou1_B0");
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
ops_dat U0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
U0_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "U0_B0");
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
ops_dat U1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
U1_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "U1_B0");
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
ops_dat wk10_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk10_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk10_B0");
}
ops_dat wk11_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk11_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk11_B0");
}
ops_dat wk12_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk12_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk12_B0");
}
ops_dat wk13_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk13_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk13_B0");
}
ops_dat wk14_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk14_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk14_B0");
}
ops_dat wk15_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk15_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk15_B0");
}
ops_dat wk16_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk16_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk16_B0");
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
ops_dat wk6_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk6_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk6_B0");
}
ops_dat wk7_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk7_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk7_B0");
}
ops_dat wk8_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk8_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk8_B0");
}
ops_dat wk9_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
wk9_B0 = ops_decl_dat(opensbliblock00, 1, size, base, halo_m, halo_p, value, "double", "wk9_B0");
}
ops_dat x0_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
x0_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "x0_B0", "restart.h5");
}
ops_dat x1_B0;
{
int halo_p[] = {5, 5};
int halo_m[] = {-5, -5};
int size[] = {block0np0, block0np1};
int base[] = {0, 0};
double* value = NULL;
x1_B0 = ops_decl_dat_hdf5(opensbliblock00, 1, "double", "x1_B0", "restart.h5");
}