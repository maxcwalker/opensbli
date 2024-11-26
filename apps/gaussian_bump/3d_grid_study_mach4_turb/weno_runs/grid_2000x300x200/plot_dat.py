import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from mpl_toolkits.axes_grid1 import make_axes_locatable
import os
import sys


import matplotlib

 
# change the axis to latex font (might have to install texlive and pip install latex)
matplotlib.rcParams["text.usetex"] = True
 
# pdf plot printing
plt.rcParams.update({
"text.usetex": True,
"font.family": "serif",
"font.serif": ["Computer Modern Roman"]})


# Directory where .dat file is saved
directory = './'

# File path to the saved contour data .dat file
dat_file = directory + 'contour_data.dat'

# Check if the .dat file exists
if not os.path.exists(dat_file):
    print(f"Error: The file {dat_file} does not exist.")
    sys.exit(1)

# Read the data from the .dat file
data = np.loadtxt(dat_file, comments="#")

# Extract x, y, and variable data
x = data[:, 0]
y = data[:, 1]
var = data[:, 2]

# Find the number of times x resets to 0 (this indicates rows in the grid)
# We assume that x resets to 0 whenever a new row starts, so we count the occurrences of x=0
x_zeros = np.where(np.diff(x) < 0)[0] + 1  # Index positions where x resets (i.e., drops below 0)

# The number of rows (ny) is the number of times x resets to 0 plus 1 for the first row
ny = len(x_zeros) + 1

# The number of points per row (nx) is the total number of points divided by ny
nx = len(x) // ny

# Reshape the data into 2D arrays based on nx and ny
x_grid = x.reshape(ny, nx)
y_grid = y.reshape(ny, nx)
var_grid = var.reshape(ny, nx)

# Contour plot
n_levels = 20
levels = np.linspace(np.min(var_grid), np.max(var_grid), n_levels)

# Create the plot
fig1, ax = plt.subplots()
CS = ax.contourf(x_grid, y_grid, var_grid, levels=levels, cmap=cm.jet)

# Add colorbar
divider = make_axes_locatable(ax)
cax1 = divider.append_axes("right", size=0.2, pad=0.1)
cbar = fig1.colorbar(CS, cax=cax1, format='%.3f')
cbar.set_label(r"p", fontsize=12)  # Label for the variable in contour
cbar.ax.tick_params(labelsize=9)

# Save the plot to a PDF file
plt.rcParams['font.family'] = 'Liberation Sans'
ax.set_xlabel(r'$x$', fontsize=12, fontweight='light')
ax.set_ylabel(r'$y$', fontsize=12)
ax.set_aspect('equal')
plt.savefig(directory + 'contours_side_P.pdf', bbox_inches='tight', format='pdf')

# Show the plot
plt.show()
