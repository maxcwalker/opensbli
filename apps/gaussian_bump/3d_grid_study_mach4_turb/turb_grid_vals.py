import numpy
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os
import sys


def read_file(fname):
    f = h5py.File(fname, 'r')
    group = f["opensbliblock00"]
    return f, group


def read_dataset(group, dataset):
    d_m = group["%s" % (dataset)].attrs['d_m']
    size = group["%s" % (dataset)].shape
    read_start = [abs(d) for d in d_m]
    read_end = [s-abs(d) for d, s in zip(d_m, size)]
    if len(read_end) == 2:
        read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1]]
    elif len(read_end) == 3:
        read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
    else:
        raise NotImplementedError("")
    return read_data

def extract_metrics():
    fname = sys.argv[1]
    f, group1 = read_file(fname)
    D11 = read_dataset(group1, "D11_B0")
    return D11

def extract_coordinates():
    f, group1 =  read_file(fname)
    x =  read_dataset(group1, "x0_B0")
    y =  read_dataset(group1, "x1_B0")
    z =  read_dataset(group1, "x2_B0")
    dx, dy, dz = x[0, 0, 1], y[0, 1, 0], z[1,0,0]
    print("Grid size (x,y,z)  is: (%d, %d, %d)" % (x.shape[2], x.shape[1], x.shape[0]))
    print("First grid point dx: %f, dy: %f" % (dx, dy))
    dx, dy, dz = x[0,0, -1]-x[0,0, -2], y[0,-1, 0]-y[0,-2, 0], z[-1,0, 0]-z[-2,0, 0]
    print("Last grid point dx: %f, dy: %f" % (dx, dy))
    return x, y, z

def extract_flow_variables(group):
    rho =  read_dataset(group, "rho_B0")
    rhou =  read_dataset(group, "rhou0_B0")
    rhov =  read_dataset(group, "rhou1_B0")
    rhow =  read_dataset(group, "rhou2_B0")
    rhoE =  read_dataset(group, "rhoE_B0")
    u = rhou/rho
    v = rhov/rho
    w = rhow/rho
    p = (0.4)*(rhoE - 0.5*(u**2+v**2+w**2)*rho)
    a = numpy.sqrt(1.4*p/rho)
    M = numpy.sqrt(u**2 + v**2 + w**2)/a
    T = 1.4*( Minf**2)*p/rho
    mu =  compute_viscosity(T)
    return rho, u, v, rhoE, p, T, M, mu




def compute_wall_derivative(variable):
    ny = numpy.size( y[:, 0])
    delta = Ly/(ny-1.0)
    D11 =  extract_metrics()
    D11 =  D11[0, 0:6, :]
    var = variable[0, 0:6, :]
    coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
    coeffs = coeffs.reshape([6, 1])
    dudy = sum(D11*var*coeffs)/delta
    return dudy

def compute_viscosity(T):
    mu = (T**(1.5)*(1.0+ SuthT/ RefT)/(T+ SuthT/ RefT))
    return mu

def compute_skin_friction(u, mu):
    # Wall viscosity all x points
    mu_wall = mu[0, 0, :]
    dudy =  compute_wall_derivative(u)
    tau_wall = dudy*mu_wall
    Cf = tau_wall/(0.5* Re)
    return Cf, tau_wall
    

def viscous_length_scale(fname):
    f, group1 =  read_file(fname)
    rho, u, v, rhoE, p, T, M, mu =  extract_flow_variables(group1)
    Cf, tau_wall =  compute_skin_friction(u, mu)
    # Wall viscosity all x points
    mu_wall = mu[0, 0, :]
    # print(rho[0,0,:])
    u_tau = numpy.sqrt(abs(tau_wall / rho[0,0,:])) # friction velocity
    # print(u_tau)
    dv = mu_wall / (rho[0,0,:]*u_tau)  # viscous length scale
    return dv, u_tau



Minf = 4.0
Re = 4000
RefT = 439.0
SuthT = 110.4
Tw = 1.37
Ly = 115.0
Lx = 400.0
scale = 4.959043
D11 =  extract_metrics()
Pr = 0.72

fname = sys.argv[1]
x, y, z = extract_coordinates()
dv, u_tau = viscous_length_scale(fname)
dx, dy, dz = x[0, 0, 1], y[0, 1, 0], z[1,0,0]
dx_plus, dy_plus, dz_plus = dx/ dv, dy/ dv, dz/ dv

for i, pos in enumerate(x[0, 1, :]):
    if pos >=350:
        loc = int(i)
        break
    continue

print(type(loc))
print(numpy.shape(x))

# print("index of point 350 is %f" % loc)
# print("exact position of lic is %f" % x[0,0,loc])

print(r'at x=%.1f: dx+: %f, dy+: %f, dz+: %f' % (x[0,0,loc],dx_plus[loc], dy_plus[loc], dz_plus[loc]))