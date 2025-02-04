import pandas as pd
import matplotlib.pyplot as plt 
from matplotlib.ticker import FormatStrFormatter
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset, inset_axes


# Read the CSV file
df = pd.read_csv('block0_monitor.log')

# Remove columns with NaN values
df = df.dropna(axis=1, how='all')

# Delete existing columns
# df = df.drop(columns=df.columns[2:])
directory_monitor = 'plots_monitor/'
if not os.path.exists(directory_monitor):
    os.makedirs(directory_monitor)
# Add new columns
new_columns = ['Iter', 'Time', 'p_50', 'p_96', 'p_100', 'p_175', 'p_187', 'p_191', 'p_200', 'p_213', 'p_225', 'p_240', 'p_250', 'p_275', 'p_300', 'p_325', 'p_350', 'p_375', 'p_400', 'u_50', 'u_96', 'u_100', 'u_175', 'u_187', 'u_191', 'u_200', 'u_213', 'u_225', 'u_240', 'u_250', 'u_275', 'u_300', 'u_325', 'u_350', 'u_375', 'u_400']

df.columns = new_columns
fig1, ax1 = plt.subplots(7, 1, figsize=(6,5.5))
# Plot

import matplotlib
matplotlib.rcParams.update({
    "text.usetex": True,
    "font.family": "serif",
    "font.serif": ["Computer Modern Roman"],
    "font.size": 8,  # Match Overleaf's body font size
    "axes.titlesize": 8,
    "axes.labelsize": 8,
    "xtick.labelsize": 6,
    "ytick.labelsize": 3,
    "legend.fontsize": 8,
    "figure.titlesize": 8,
})

from matplotlib.ticker import ScalarFormatter
from matplotlib.ticker import FormatStrFormatter

# Create the new array
pressure_loc = new_columns[2:16]

# Select every other column
# pressure_loc = pressure_loc[::2]

# Determine the number of rows needed
n = len(pressure_loc)
rows = (n + 1) // 2

# Create the figure and axes
fig, axs = plt.subplots(rows, 2, figsize=(16, rows))

# Plotting each column in the specified layout
for i, val in enumerate(pressure_loc):
    row = i % rows
    col = i // rows
    ax = axs[row, col]
    ax.plot(df['Time'], df[val], color='k', linewidth=0.7)
    ax.set_xlim([0,df['Time'].iloc[-1]])
    ax.set_ylabel('x=%s'%val[2:])
    ax.grid(True)
    ax.tick_params(labelbottom=False)
    # Set the y-axis formatter to avoid scientific notation
    ax.yaxis.set_major_formatter(ScalarFormatter(useOffset=False))
    # Set the y-axis formatter to show 3 decimal places
    ax.yaxis.set_major_formatter(FormatStrFormatter('%.4f'))

# Enable bottom x-axis labels for the last row
for i in range(2):
    if (n % 2 != 0 and i == 1) and (n // 2 == rows - 1):
        axs[-1, 1].tick_params(labelbottom=True)
    axs[-1, 0].tick_params(labelbottom=True)
    axs[-1, 0].set_xlabel("Time")
    axs[-1, 1].tick_params(labelbottom=True)
    axs[-1, 1].set_xlabel("Time")
    axs[0,0].set_ylim([0.0425,0.0455])
    axs[-1,1].set_ylim([0.037,0.05])
    axs[-2,1].set_ylim([0.037,0.05])
    axs[-3,1].set_ylim([0.037,0.048])

plt.subplots_adjust(hspace=0.5, wspace=0.2)
fig.savefig(directory_monitor + "monitoring_pressure.pdf", bbox_inches='tight')

fig1, ax1 = plt.subplots(10, 1, figsize=(7,6))
for i, val in enumerate(new_columns[9:19]):

    ax1[i].plot(df['Time'], df[val],color='k',linewidth=1)  # Adjust column name as needed
    ax1[i].set_ylabel(r'%s'%val[2:])
    ax1[i].set
    ax1[i].yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
    ax1[i].grid(True)
    ax1[i].set_xlabel('Time')
    ax1[i].set_xlim([0,df['Time'].iloc[-1]])
    ax1[i].tick_params(labelbottom=False)
ax1[-1].tick_params(labelbottom=True)
    
# ax1[0].set_ylim([0.0001,0.1])
fig1.savefig(directory_monitor+"monitoring_pressure_downstream.pdf",bbox_inches='tight')



fig1, ax1 = plt.subplots(10, 1, figsize=(6,8))
# Plot
for i, val in enumerate(new_columns[26:36]):
    ax1[i].plot(df['Time'], df[val],color='k',linewidth=0.7)  # Adjust column name as needed
    ax1[i].set_ylabel(val)
    ax1[i].set
    ax1[i].yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
    ax1[i].grid(True)
    ax1[i].set_xlabel('Time')
    ax1[i].set_xlim([0,df['Time'].iloc[-1]])
    ax1[i].tick_params(labelbottom=False)
ax1[-1].tick_params(labelbottom=True)
fig1.savefig(directory_monitor+"monitoring_u_downstream.pdf",bbox_inches='tight')

fig1.savefig(directory_monitor+"monitoring_p_upstream.pdf",bbox_inches='tight')
fig1, ax1 = plt.subplots(1, figsize=(6.5,1))
# axins1 = zoomed_inset_axes(ax1, 2, loc='upper right')
axins1 = zoomed_inset_axes(ax1, 3,bbox_to_anchor=(510,100))  # Adjust the zoom factor and location as needed
ax1.plot(df['Time'], df['p_240'],color='k',linewidth=0.7)  # Adjust column name as needed
axins1.plot(df['Time'], df['p_240'],color='k',linewidth=0.7)
ax1.set_ylabel('p_240')
ax1.yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
ax1.grid(True)
ax1.set_xlabel('Time')
ax1.set_xlim([0,df['Time'].iloc[-1]])
# ax1.set_xlim([500,600])
mark_inset(ax1, axins1, loc1=2, loc2=3, fc="none", ec="0.5")
x1, x2= 2500, 2750
axins1.set_xlim(x1, x2) # apply the x-limits
# axins1.set_ylim(y1, y2) # apply the y-limits 
axins1.set_xticks([])
axins1.set_yticks([])



fig1.savefig(directory_monitor+"monitoring_p_zoom.pdf",bbox_inches='tight')

