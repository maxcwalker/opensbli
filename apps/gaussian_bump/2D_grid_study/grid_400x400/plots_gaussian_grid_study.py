import numpy
import numpy as np
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os

# plt.style.use('classic')

fname = 'opensbli_output.h5'

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

f, group1 = read_file(fname)

# values
Minf = 2.0
Re = 950
RefT = 288.0
SuthT = 110.4
Ly = 115.0
Lx = 400.0
scale = 2.31669259


D11 = read_dataset(group1, "D11_B0")
x = read_dataset(group1, "x0_B0")
y = read_dataset(group1, "x1_B0")
rho = read_dataset(group1, "rho_B0")
rhou = read_dataset(group1, "rhou0_B0")
rhov = read_dataset(group1, "rhou1_B0")
rhoE = read_dataset(group1, "rhoE_B0")
u = rhou/rho
v = rhov/rho
p = (0.4)*(rhoE - 0.5*(u**2+v**2)*rho)
a = numpy.sqrt(1.4*p/rho)
M = numpy.sqrt(u**2 + v**2)/a
T = 1.4*(Minf**2)*p/rho

# plt.plot(x[0,:],v[0,:])
# plt.xlabel('x')
# plt.ylabel('v')
# plt.title('v velocity along the wall')
# plt.savefig('v_vel_along_wall.pdf')
levels =25

fig, (ax1,ax2, ax3) = plt.subplots(3,1)
fig.set_size_inches(18.5, 10.5)
Tconts = ax1.contourf(x, y, T, levels = levels) 
ax1.set_title("Contours for flow over a Gaussian bump")
plt.xlabel('x')
ax1.set_ylabel("y")
tbar = plt.colorbar(Tconts, ax=ax1)
tbar.set_label("Temperature [$^{\circ}$C]" ) #rotation= 270

Pconts = ax2.contourf(x, y, p, levels = levels)
ax2.set_ylabel("y")
Pbar = plt.colorbar(Pconts, ax=ax2)
Pbar.set_label("Pressure [Pa]" ) #rotation= 270
plt.legend

Uconts = ax3.contourf(x, y, M, levels = levels)
ax3.set_ylabel("y")
ubar = plt.colorbar(Uconts, ax=ax3)
ubar.set_label("Mach Number") #X_Velocity [ms$^{-1}$]
plt.legend
plt.style.use('classic')
plt.savefig('Gaussian_bump_contours.pdf')



fig2, b1 = plt.subplots(1,1)
conts2 = b1.contourf(x, y, u, levels= numpy.linspace(-0.2,0.05,40), cmap=cm.jet) 
b1.set_title("u velocity contours to show the regions of separation")
plt.xlabel('x')
b1.set_ylabel("y")
ubar = plt.colorbar(conts2, ax=b1)
ubar.set_label("u velocity [$ms^1$]" ) #rotation= 270


ny = numpy.size(y[:, 0])
Ly = Ly
delta = Ly/(ny-1.0)
D11 = D11[0:6, :]
var = u[0:6, :]
coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
coeffs = coeffs.reshape([6, 1])
dudy = sum(D11*var*coeffs)/delta



mu = (T**1.5*(1.0+SuthT/RefT)/(T+SuthT/RefT))


mu_wall = mu[0, :]
tau_wall = dudy*mu_wall
Cf = tau_wall/(0.5*Re)


fig3, (d1,d2) = plt.subplots(1,2)
fig3.set_size_inches(15, 6.0, forward=True)
d1.plot(x[1, :], Cf, color='black')
d1.axhline(y=0.0, linestyle='--', color='k')
d1.set_xlabel(r'$x_0$', fontsize=20)
d1.set_ylabel(r'$C_f$', fontsize=20)
d1.set_title('Skin friction')
d1.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))



d2.plot(x[1, :], p[0, :]/p[0, 0], color='k', label="OpenSBLI")
# linestyle='', marker='o',markevery=10)
d2.set_xlabel(r'$x_0$', fontsize=20)
d2.set_ylabel(r'$\frac{P_w}{P_1}$', fontsize=22)
d2.set_title('Normalised wall pressure')
fig3.savefig("wall_plots.pdf") 




plt.show()
