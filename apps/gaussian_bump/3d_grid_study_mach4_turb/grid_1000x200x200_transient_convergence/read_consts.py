import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from mpl_toolkits.axes_grid1 import make_axes_locatable
from mpl_toolkits.axes_grid1.inset_locator import inset_axes
import matplotlib.ticker as tkr
import sys
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset




def read_dataset(file, dataset):
    group = file["opensbliblock00"]
    d_m = group["%s" % (dataset)].attrs['d_m']
    size = group["%s" % (dataset)].shape
    start=[abs(d+2) for d in d_m]
    end=[s-abs(d+2) for d, s in zip(d_m, size)]
    read_data=group["%s" % (dataset)][start[0]:end[0],start[1]:end[1],start[2]:end[2]]
    #print('d_m', d_m, size)
    return read_data

print('Reading data')
try:
    fname = sys.argv[1]
except:
    fname='opensbli_output.h5'
directory = './simulation_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)

f=h5py.File(fname, 'r')
gama = f["gama"].value
Mref= f["Minf"].value
Lx = f["L"].value
Nx = f["block0np0"].value
Ny = f["block0np1"].value
Nz = f["block0np2"].value
niter = f['niter'].value
dt = f['dt'].value
print('iterations: ',niter)
print('dt: ',dt)

x0dum=read_dataset(f,'x0_B0')
x1dum=read_dataset(f,'x1_B0')
x2dum=read_dataset(f,'x2_B0')
rdum=read_dataset(f, 'rho_B0')
# print(rdum)
rudum=read_dataset(f, 'rhou0_B0')
rvdum=read_dataset(f, 'rhou1_B0')
rwdum=read_dataset(f, 'rhou2_B0')
rEdum=read_dataset(f, 'rhoE_B0')

# print('Setting flowfield arrays')
x=x0dum[2:-2,2:-2]
y=x1dum[2:-2,2:-2]
z=x2dum[2:-2,2:-2]
rho=rdum[2:-2,2:-2]
# print('rho = ')
# print(rho)
rhou=rudum[2:-2,2:-2]
rhov=rvdum[2:-2,2:-2]
rhow=rwdum[2:-2,2:-2]
rhoE=rEdum[2:-2,2:-2]
u=rhou/rho
v=rhov/rho
w=rhow/rho
e=rhoE/rho-0.5*(u**2+v**2+w**2)
p=(gama-1.0)*rho*e
T=e*Mref**2*gama*(gama-1.0)

a = np.sqrt(1.4*p/rho)
M = np.sqrt(u**2 + v**2 +w**2)/a

# note that the first array index is y, the second x (python conventio