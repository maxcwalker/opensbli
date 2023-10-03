import numpy
import numpy as np
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os

plt.style.use('classic')

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


# values
Minf = 2.0
Re = 950
RefT = 288.0
SuthT = 110.4
Ly = 115.0
Lx = 400.0
scale = 2.31669259


#list = ['100x100', '200x100', '400x100', '600x100', '800x100']
list = ['600x100', '600x200', '600x400', '600x600']

fig1, ax1 = plt.subplots(1,1)
fig2, ax2 = plt.subplots(1,1)

line_styles = ['-.', '.', '-', '-','-']

for i in range(len(list)):

    fname = 'grid_%s/opensbli_output.h5' % list[i]
    f, group1 = read_file(fname)

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


    
    ax1.plot(x[1, :], Cf, '%s'%line_styles[i],label = 'grid_%s' % list[i])
    ax2.plot(x[1, :], p[0, :]/p[0, 0], '%s'%line_styles[i], label='grid_%s' % list[i])


ax1.axhline(y=0.0, linestyle='--', color='black')
ax1.set_xlabel(r'$x_0$', fontsize=20)
ax1.set_ylabel(r'$C_f$', fontsize=20)
ax1.set_title('Skin friction')
ax1.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax1.legend()
ax1.grid()
fig1.savefig('skin_friction.pdf')

ax2.set_xlabel(r'$x_0$', fontsize=20)
ax2.set_ylabel(r'$\frac{P_w}{P_1}$', fontsize=22)
ax2.set_title('Normalised wall pressure')
ax2.legend()
ax2.grid()
fig2.savefig("wall_pressure.pdf") 

plt.show()
