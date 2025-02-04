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



# Constants
gama = 1.4
Mref = 4.0  # Mach number
Lx = 400.0
Ly = 115.0
Re = 4000
scale = 2.779898
Pr = 0.71
Tw = 1.37
RefT = 439.0
SuthT = 110.4

print('Check: Mach number = ', Mref)

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

directory = './span_averaged_plots/'
if not os.path.exists(directory):
    os.makedirs(directory)

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

def spanaverage(variable):
    """Span-average the 3D variable over the z dimension."""
    avg_var = np.mean(variable, axis=0)  # Average over the first dimension (z)
    return avg_var

def plot_recirculation_and_inflection(u, rho, x, y, x_range):
    # Span-average the u velocity and rho density fields
    u_avg = spanaverage(u)
    rho_avg = spanaverage(rho)

    # Calculate the first and second derivatives with respect to y
    du_dy = np.gradient(u_avg, axis=1)
    d_rho_du_dy_dy = np.gradient(rho_avg * du_dy, axis=1)

    # Create the plot
    fig, ax = plt.subplots(figsize=(7, 3))

    # Plot the span-averaged velocity field
    contour = ax.contourf(x[0,:,:], y[0,:,:], u_avg, levels=np.linspace(np.min(u_avg), np.max(u_avg), 50), cmap='coolwarm', extend='both')
    cbar = fig.colorbar(contour, ax=ax, orientation='horizontal', pad=0.13, aspect=30, shrink=0.8)
    cbar.set_label(r'$u$')

    # Plot the recirculation zone where u < 0
    recirculation = ax.contour(x[0,1::,:], y[0,1::,:], u_avg[1::,:], levels=[0], colors='black', linewidths=2, linestyles='--')

    # Plot the generalized inflection points
    # inflection = ax.contour(x[0,:,:], y[0,:,:], d_rho_du_dy_dy, levels=[0], colors='blue', linewidths=1, linestyles='-')

    # Add legend for clarity
    recirc_label = plt.Line2D((0,1),(0,0), color='black', linestyle='--', linewidth=2, label='Recirculation Zone (u=0)')
    # inflection_label = plt.Line2D((0,1),(0,0), color='blue', linestyle='-', linewidth=1, label=r'Generalized Inflection point ($\frac{d}{dy}(\rho dU/dy)$)')
    # ax.legend(handles=[recirc_label, inflection_label])
    ax.legend(handles=[recirc_label])

    # # Define zoomed insets
    # vertical_offset = 0
    # axins1 = ax.inset_axes([0.1, 0.2 - vertical_offset, 0.4, 0.4])
    # axins1.contourf(x[0,:,:], y[0,:,:], u_avg, levels=np.linspace(np.min(u_avg), np.max(u_avg), 50), cmap='coolwarm', extend='both')
    # axins1.contour(x[0,:,:], y[0,:,:], u_avg, levels=[0], colors='black', linewidths=2, linestyles='--')
    # # axins1.contour(x[0,:,:], y[0,:,:], d_rho_du_dy_dy, levels=[0], colors='blue', linewidths=1, linestyles='-')
    # axins1.set_xlim(160, 180)
    # axins1.set_ylim(0, 10)
    # axins1.set_xticklabels([]) 
    # axins1.set_yticklabels([])
    # mark_inset(ax, axins1, loc1=3, loc2=4, fc="none", ec="0.5")

    # # Second zoomed inset
    # axins2 = ax.inset_axes([0.7, 0.2 - vertical_offset, 0.25, 0.25])
    # axins2.contourf(x[0,:,:], y[0,:,:], u_avg, levels=np.linspace(np.min(u_avg), np.max(u_avg), 50), cmap='coolwarm', extend='both')
    # axins2.contour(x[0,:,:], y[0,:,:], u_avg, levels=[0], colors='black', linewidths=2, linestyles='--')
    # # axins2.contour(x[0,:,:], y[0,:,:], d_rho_du_dy_dy, levels=[0], colors='blue', linewidths=1, linestyles='-')
    # axins2.set_xlim(220, 240)
    # axins2.set_ylim(0, 6)
    # axins2.set_xticklabels([])
    # axins2.set_yticklabels([])
    # mark_inset(ax, axins2, loc1=3, loc2=4, fc="none", ec="0.5")

    # ax.set_title('Recirculation Zones and Generalized Inflection Points')
    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.set_xlim(x_range)
    ax.set_ylim([0,20])
    ax.set_aspect('equal')
    plt.savefig(f'{directory}/absolute_inst.pdf', bbox_inches='tight')



u_spanavg = spanaverage(u)
rho_spanavg = spanaverage(rho)

# Define the range of x-values to plot and the increment
x_start, x_end, x_increment = 120, 180, 10
x_offsets = np.arange(x_start, x_end + x_increment, x_increment)
# x_offsets = [140,160,180]
x_offsets = [230,240,250]
# Create a 1x3 subplot figure
fig1, axes = plt.subplots(1, 3, figsize=(7, 3), sharey=True)

# Loop over the x_offsets
for i, x_target in enumerate(x_offsets):
    # Select the current axis
    ax = axes[i]

    # Find closest x-index to the target value
    x_index = np.argmin(np.abs(x[0, 0, :] - x_target))
    
    # Extract span-averaged profiles at this x location
    u_profile = u_spanavg[:, x_index]
    rho_profile = rho_spanavg[:, x_index]
    y_profile = y[0, :, x_index]

    # Find the index of y = 8
    y_index = np.argmin(np.abs(y_profile - 8))

    # Compute the integral of rho*u from the wall (cumulative integral)
    integral_rho_u = cumulative_trapezoid(rho_profile * u_profile, y_profile, initial=0)
    
    # Find all points where the integral crosses zero
    zero_crossing_indices = np.where(np.diff(np.sign(integral_rho_u)))[0]
    recirculation_boundaries = y_profile[zero_crossing_indices]  # All zero-crossing locations

    # Compute derivatives for inflection points
    du_dy = np.gradient(u_profile, y_profile, axis=0)
    d2u_dy2 = np.gradient(rho_profile * du_dy, y_profile, axis=0)
    
    # Detect zero-crossings of d²u/dy² for inflection points
    zero_crossings = np.where(np.diff(np.sign(d2u_dy2)))[0]
    inflection_points = y_profile[zero_crossings]

    # Filter inflection points where rho*u > 1
    valid_inflection_indices = [idx for idx in zero_crossings if (rho_profile[idx] * u_profile[idx]) <= 1]
    valid_inflection_points = y_profile[valid_inflection_indices]

    # Compute the displacement thickness (delta_star) for compressible flow
    delta_star = cumulative_trapezoid((1 - u_profile * rho_profile), y_profile, initial=0)[y_index]




    # Plot the velocity profile
    ax.plot(u_profile * rho_profile, y_profile/ (delta_star+y_profile[0]) - (y_profile[0]/(delta_star+y_profile[0])), color='k', linewidth=1)
    
    # Mark valid inflection points
    if len(valid_inflection_indices) > 0:
        ax.scatter(u_profile[valid_inflection_indices[0]] * rho_profile[valid_inflection_indices[0]],
                   valid_inflection_points[0]/ (delta_star+y_profile[0]) - (y_profile[0]/(delta_star+y_profile[0])) , color='red', marker='o', label=r'$y_i$')
    
    print('wall is %f'%(y_profile[0]/(delta_star+y_profile[0])))
    ax.axhline(recirculation_boundaries[-1] / (delta_star+y_profile[0]) - (y_profile[0]/(delta_star+y_profile[0])), color='gray', linestyle='--', label=f'$y_{{d}}$')
    print(recirculation_boundaries[-1])
    # Plot displacement thickness as a horizontal line
    # ax.axhline(delta_star + y_profile[0], color='orange', linestyle='-.', label=f'$\delta^*$')

    # Axis labels and title
    ax.set_xlabel(r'$\rho u$')
    # ax.set_ylim(0,2)
    ax.set_ylim(0,1.5)
    ax.set_title(f'x = {x_target}')
    # ax.grid(True)
    # Add legend to the current subplot
    ax.legend(loc='upper left')
    ax.set_xlim([-0.1,1])


# Final plot adjustments
axes[0].set_ylabel(r'$y / \delta_1$')
height, length = 1,1
fig1.tight_layout(rect=[0, 0, length, height])
# fig1.legend(loc='upper right', bbox_to_anchor=(1.1, 0.95), fontsize='small')
fig1.savefig('inflection_points_%d-%d.pdf'%(x_offsets[0],x_offsets[-1]), bbox_inches='tight')


# ax2.set_ylim([0,8])
# fig2.savefig('rho_dudy.pdf')


# Example call to the function
x_range = (130, 270)  # The range where the separation region is located
# plot_recirculation_and_inflection(u, rho, x, y, x_range)