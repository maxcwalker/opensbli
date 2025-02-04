import numpy
import numpy as np
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os.path
import sys
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset

# plt.style.use('classic')
# Set LaTeX-style fonts
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
    d_m = group["%s" % (dataset)].attrs['d_m']
    size = group["%s" % (dataset)].shape
    start = [abs(d + 2) for d in d_m]
    end = [s - abs(d + 2) for d, s in zip(d_m, size)]
    read_data = group["%s" % (dataset)][start[0]:end[0], start[1]:end[1], start[2]:end[2]]
    return read_data

def average_datasets(file_list, dataset):
    total = None
    count = 0
    for fname in file_list:
        with h5py.File(fname, 'r') as f:
            data = read_dataset(f, dataset)
            if total is None:
                total = np.zeros_like(data)
            total += data
            count += 1
    return total / count

def spanaverage(variable):
    return np.mean(variable, axis=0)

p1 = '/Volumes/SG/opensbli/apps/gaussian_bump/3d_gaussian_bump_M4_439k/grid_2000x300x200/opensbli_output_'



file_sets = {
    r'Mach4 Tw/T$\infty=1.37$': [p1+'800000.h5'],
}

labels = list(file_sets.keys())
colours = ['k', 'g', 'r', 'g']
lines = ['-', '--', '--', '-']
directory = './'

if not os.path.exists(directory):
    os.makedirs(directory)
xL, yL = 8,3
fig1, ax1 = plt.subplots(figsize=(10, 4))
fig2, ax2 = plt.subplots(figsize=(10, 4))
fig1.set_size_inches(xL, yL, forward=True)
fig2.set_size_inches(xL, yL, forward=True)


fig3, ax3 = plt.subplots(figsize=(10, 4))
fig4, ax4 = plt.subplots(figsize=(10, 4))
fig3.set_size_inches(xL, yL, forward=True)
fig4.set_size_inches(xL, yL, forward=True)





for index, label in enumerate(labels):
    file_list = file_sets[label]
    print(file_list)
    print(f'Reading and averaging files for {label} case')

    # Average only the required datasets
    print(f'Averaging rho for {label} case')
    rdum_avg = average_datasets(file_list, 'rho_B0')
    print(f'Averaging rhou for {label} case')
    rudum_avg = average_datasets(file_list, 'rhou0_B0')
    print(f'Averaging rhov for {label} case')
    rvdum_avg = average_datasets(file_list, 'rhou1_B0')
    print(f'Averaging rhow for {label} case')
    rwdum_avg = average_datasets(file_list, 'rhou2_B0')
    print(f'Averaging rhoE for {label} case')
    rEdum_avg = average_datasets(file_list, 'rhoE_B0')

    # Read constants from the first file in the list
    with h5py.File(file_list[0], 'r') as f:
        gama = f["gama"][:]
        Mref = f["Minf"][:]
        RefT = f["RefT"][:]
        SuthT = f["SuthT"][:]
        Re = f["Re"][:]
        Lx = f["L"][:]
        Ly = f["H"][:]
        Nx = f["block0np0"][:]
        Ny = f["block0np1"][:]
        Nz = f["block0np2"][:]
        niter = f['niter'][:]
        print(f'Reading constants for {label} case')

        x0dum = read_dataset(f, 'x0_B0')
        x1dum = read_dataset(f, 'x1_B0')
        x2dum = read_dataset(f, 'x2_B0')
        D11dum = read_dataset(f, 'D11_B0')

    x = x0dum[2:-2, 2:-2, 2:-2]
    y = x1dum[2:-2, 2:-2, 2:-2]
    z = x2dum[2:-2, 2:-2, 2:-2]
    D11 = D11dum[2:-2, 2:-2, 2:-2]

    rho = rdum_avg[2:-2, 2:-2, 2:-2]
    rhou = rudum_avg[2:-2, 2:-2, 2:-2]
    rhov = rvdum_avg[2:-2, 2:-2, 2:-2]
    rhow = rwdum_avg[2:-2, 2:-2, 2:-2]
    rhoE = rEdum_avg[2:-2, 2:-2, 2:-2]

    # Compute derived variables
    u = rhou / rho
    v = rhov / rho
    w = rhow / rho
    e = rhoE / rho - 0.5 * (u**2 + v**2 + w**2)
    T = e * Mref**2 * gama * (gama - 1.0)
    mu = (T**1.5 * (1.0 + SuthT / RefT) / (T + SuthT / RefT))
    p = (0.4) * (rhoE - 0.5 * (u**2 + v**2 + w**2) * rho)

    
    # fig1.set_size_inches(10, 3, forward=True)
    min_vals = np.min(u, axis=(0, 1))  # Vectorized min along first two axes
    ax1.scatter(x[0, 0, :], -min_vals*100, s=1, label=labels[index])

    # fig2.set_size_inches(10, 3, forward=True)
    max_vals = np.max(T, axis=(0, 1))  # Vectorized max along first two axes
    ax2.scatter(x[0, 0, :], max_vals * RefT, s=3, label=labels[index])

    

    delta = Ly/(Ny-1.0)
    u_avg = spanaverage(u)
    var = u_avg[0:6,:]

    D11 = D11[0, 0:6, :]
    coeffs = np.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
    coeffs = coeffs.reshape([6, 1])
    dudy = sum(D11*var*coeffs)/delta
    mu_avg = spanaverage(mu)
    mu_wall = mu_avg[0, :]
    tau_wall = dudy*mu_wall
    Cf = tau_wall/(0.5*Re)

    p_avg = spanaverage(p)

    ax3.plot(x[0, 1, :], Cf,linewidth=1,label = labels[index],color=colours[index],linestyle=lines[index])
    # axins3.plot(x[0, 1, :], Cf,linewidth=1)

    ax4.plot(x[0, 1, :], p_avg[0, :]/p_avg[0, 0],linewidth=1,label = labels[index],color=colours[index],linestyle=lines[index])
    # axins4.plot(x[0, 1, :], p_avg[0, :]/p_avg[0, 0],linewidth=1)
        # Clean up variables from memory
    del x0dum, x1dum, D11dum, x2dum, rdum_avg, rudum_avg, rvdum_avg, rwdum_avg, rEdum_avg
    del x, y, z, D11, rho, rhou, rhov, rhow, rhoE, u, v, w, e, T, mu, p



ax1.set_ylabel(r'$ u_r \ [\%]$')
ax1.set_xlabel(r'$x$')
ax1.set_xlim([0,400])
ax1.set_ylim(0)
ax1.legend()
ax1.tick_params(axis='both', which='major')  # For major ticks
ax1.grid()
fig1.savefig(directory+'min_vel.pdf',bbox_inches='tight')

ax2.set_ylabel(r'$maximum T [k]$')
ax2.set_xlabel(r'$x$')
ax2.set_xlim([0,400])
ax2.legend()
# ax.set_ylim(-0.2)
ax2.grid()
fig2.savefig(directory+'max_T.pdf',bbox_inches='tight')


ax3.axhline(y=0.0, linestyle='--', color='black')
ax3.set_xlabel(r'$x$')
ax3.set_ylabel(r'$C_f$')
# ax1.set_title('Skin friction')
ax3.set_xlim([0,400])
ax3.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax3.legend(loc='best')
ax3.tick_params(axis='both', which='major')  # For major ticks

ax3.grid()
fig3.savefig(directory+'skin_friction.pdf',bbox_inches='tight')

ax4.set_xlabel(r'$x$')
ax4.set_ylabel(r'$\frac{P_w}{P_1}$')
ax4.set_xlim([0,400])
# ax2.set_title('Normalised wall pressure')
ax4.legend(loc='best')
ax4.tick_params(axis='both', which='major')  # For major ticks

ax4.grid()
fig4.savefig(directory+"wall_pressure.pdf",bbox_inches='tight') 
