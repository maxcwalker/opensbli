import numpy as np
import h5py
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes, mark_inset
import os
import sys
import matplotlib.cm as cm
from scipy.integrate import cumulative_trapezoid

import matplotlib
matplotlib.rcParams.update({
    "text.usetex": True,
    "font.family": "serif",
    "font.serif": ["Computer Modern Roman"],
    "font.size": 8,  # Match Overleaf's body font size
    "axes.titlesize": 8,
    "axes.labelsize": 8,
    "xtick.labelsize": 6,
    "ytick.labelsize": 6,
    "legend.fontsize": 8,
    "figure.titlesize": 8,
})

def read_dataset(file, dataset):
    group = file["opensbliblock00"]
    d_m = group[dataset].attrs['d_m']
    size = group[dataset].shape
    start = [abs(d + 2) for d in d_m]
    end = [s - abs(d + 2) for d, s in zip(d_m, size)]
    read_data = group[dataset][start[0]:end[0], start[1]:end[1], start[2]:end[2]]
    return read_data

print('Reading data')
try:
    fname = sys.argv[1]
except IndexError:
    fname = 'opensbli_output.h5'

with h5py.File(fname, 'r') as f:
    gama = f["gama"][:]
    Mref = f["Minf"][:]
    RefT = f["RefT"][:]
    SuthT = f["SuthT"][:]
    Re = f["Re"][:]
    Nx = f["block0np0"][:]
    Ny = f["block0np1"][:]
    Nz = f["block0np2"][:]
    niter = f['niter'][:]
print('Check: Mach number = ', Mref)

# Open the HDF5 file and read datasets
f = h5py.File(fname, 'r')
x0dum = read_dataset(f, 'x0_B0')  # x-coordinates
x1dum = read_dataset(f, 'x1_B0')  # y-coordinates
x2dum = read_dataset(f, 'x2_B0')  # z-coordinates
rdum = read_dataset(f, 'rho_B0')   # density
rudum = read_dataset(f, 'rhou0_B0') # x-momentum
rvdum = read_dataset(f, 'rhou1_B0') # y-momentum
rwdum = read_dataset(f, 'rhou2_B0') # z-momentum
rEdum = read_dataset(f, 'rhoE_B0')  # total energy

print('Setting flowfield arrays')
# Extract 3D data, shape is [z, y, x]
x = x0dum[2:-2, 2:-2]  # spanwise coordinate (x-coordinates)
y = x1dum[2:-2, 2:-2]  # wall-normal coordinate (y-coordinates)
z = x2dum[2:-2, 2:-2]  # streamwise coordinate (z-coordinates)
rho = rdum[2:-2, 2:-2]
rhou = rudum[2:-2, 2:-2]
rhov = rvdum[2:-2, 2:-2]
rhow = rwdum[2:-2, 2:-2]
rhoE = rEdum[2:-2, 2:-2]

# Calculate flow field properties
u = rhou / rho  # x-velocity
v = rhov / rho  # y-velocity
w = rhow / rho  # z-velocity
e = rhoE / rho - 0.5 * (u ** 2 + v ** 2 + w ** 2)  # specific internal energy
p = (gama - 1.0) * rho * e  # pressure
T = e * Mref ** 2 * gama * (gama - 1.0)  # temperature
mu = (T ** (1.5) * (1.0 + SuthT / RefT) / (T + SuthT / RefT))  # dynamic viscosity

# Define the speed of sound and Mach number
a = np.sqrt(1.4 * p / rho)
M = np.sqrt(u ** 2 + v ** 2 + w ** 2) / a
