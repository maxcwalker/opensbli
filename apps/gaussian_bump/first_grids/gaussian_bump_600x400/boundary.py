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
a = np.sqrt(1.4*p/rho)
M = np.sqrt(u**2 + v**2)/a
T = 1.4*(Minf**2)*p/rho

mu = (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT))
#print(mu)
tau = mu[0,:]*(u[1,:]/y[1,:])

Cf = Cf = tau/(0.5*rho[300,:]*u[300,:])
print(len(Cf))
print('x direction = ', len(x[:,0]))
print('y direction = ',len(x[0,:]))

fig, ax = plt.subplots(figsize=(10,5))
ax.plot(x[0,:],Cf)
xl = np.linspace(0,400,20)
yl = np.zeros(len(xl))
ax.plot(xl,yl,'--')
ax.set_title('Skin Friction Coefficient')
ax.set_xlabel('X')
ax.set_ylabel('$C_f$')



# choosing the x position to plot the pressure across.
# plt.plot(x[200,:], p[200,:])
# print(numpy.shape(x))
# print(x[,:])
# print()
# print(y[:,])

plt.show()