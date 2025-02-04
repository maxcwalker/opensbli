import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rcParams
from matplotlib.font_manager import FontProperties

# Update rcParams to use LaTeX fonts
rcParams.update({
    "font.family": "serif",  # Use LaTeX font family
    "mathtext.fontset": "stix",  # Use STIX math fonts (LaTeX-like)
    "pdf.use14corefonts": True  # Use PDF core fonts
})

# Function to read data from the .dat file
def read_data_from_file(filename):
    data = np.loadtxt(filename, skiprows=1)
    x = data[:, 0]
    Cf = data[:, 1]
    p_norm = data[:, 2]
    return x, Cf, p_norm

# Load data for each case
labels = ['Mach4 1.37Tw/T_\infty', 'Mach5 1.95Tw/T_\infty', 'Mach4 1.95 Tw/T_\infty', 'Mach5 1.37 Tw/T_\infty']
dat_directory = './comparison_data/'

fig1, ax1 = plt.subplots(figsize=(10, 6))
fig2, ax2 = plt.subplots(figsize=(10, 6))
fig3, ax3 = plt.subplots(figsize=(10, 6))
fig4, ax4 = plt.subplots(figsize=(10, 6))

for label in labels:
    x, Cf, p_norm = read_data_from_file(f'{dat_directory}{label}_skin_friction.dat')
    
    # Plot Skin Friction (Cf)
    ax3.plot(x, Cf, label=label)
    
    # Plot Normalized Pressure (P/P0)
    ax4.plot(x, p_norm, label=label)

# Skin Friction Plot
ax3.set_xlabel(r'$x$', fontsize=20)
ax3.set_ylabel(r'$C_f$', fontsize=20)
ax3.legend(fontsize=15)
ax3.grid()

# Normalized Pressure Plot
ax4.set_xlabel(r'$x$', fontsize=20)
ax4.set_ylabel(r'$\frac{P_w}{P_1}$', fontsize=20)
ax4.legend(fontsize=15)
ax4.grid()

# Save the plots
fig3.savefig('./local_plots/skin_friction.pdf', bbox_inches='tight')
fig4.savefig('./local_plots/wall_pressure.pdf', bbox_inches='tight')

plt.show()
