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

plt.plot(x[0,:],v[0,:])
plt.xlabel('x')
plt.ylabel('v')
plt.title('v velocity along the wall')
plt.savefig('v_vel_along_wall.pdf')


levels = 25


fig, (ax1,ax2, ax3) = plt.subplots(3,1)
fig.set_size_inches(18.5, 10.5)
T = ax1.contourf(x, y, T, levels = levels,  cmap=cm.jet) 
ax1.set_title("Contours for flow over a Gaussian bump")
plt.xlabel('x')
ax1.set_aspect(1)
ax1.set_ylabel("y")
tbar = plt.colorbar(T, ax=ax1)
tbar.set_label("Temperature [$^{\circ}$C]" ) #rotation= 270

P = ax2.contourf(x, y, p, levels = levels,  cmap=cm.jet)
ax2.set_ylabel("y")
ax2.set_aspect(1)
ax2.set_ylim([0, 5])
ax2.set_xlim([0, 5])
Pbar = plt.colorbar(P, ax=ax2)
Pbar.set_label("Pressure [Pa]" ) #rotation= 270
plt.legend

U = ax3.contourf(x, y, M, levels = levels, cmap=cm.jet)
ax3.set_ylabel("y")
ax3.set_aspect(1)
ubar = plt.colorbar(U, ax=ax3)
ubar.set_label("Mach Number") #X_Velocity [ms$^{-1}$]
plt.legend
plt.style.use('classic')
plt.savefig('shock_patern_contours.pdf')

print(numpy.shape(x))

# fig2, b1 = plt.subplots(1,1)
# x = b1.contourf(x, y, u, levels= numpy.linspace(-0.2,0.05,40), cmap=cm.jet) 
# b1.set_title("u velocity contours to show the regions of separation")
# plt.xlabel('x')
# b1.set_ylabel("y")
# ubar = plt.colorbar(x, ax=b1)
# b1.set_ylim([0,15])
# ubar.set_label("u velocity [$ms^1$]" ) #rotation= 270

fig3, c1 = plt.subplots(1,1)
z = c1.contourf(x, y, rho, levels =25, cmap=cm.jet) 
c1.set_title("density")
plt.xlabel('x')
c1.set_ylabel("y")
divider = make_axes_locatable(c1)
cax = divider.append_axes("right", size=0.2,pad=0.1)
ubar = plt.colorbar(z, ax=c1, cax=cax)
c1.set_aspect(1)
# b1.set_ylim([0,15])
ubar.set_label("density [kg/m$^3$]" ) #rotation= 270


fig2, bx1 = plt.subplots(1,1)
bx1.plot(u[:,0],y[:,0])
bx1.set_ylim([0,3])
bx1.axhline(y=1, color =  'k', linestyle ='--',  label = 'position of boundary layer comparison')
bx1.set_title('Plot to show the boundary layer thickness')
bx1.set_ylabel('nromal distance from ')
fig2.savefig('u_velocity_profile_at_inlet.pdf')
plt.show()