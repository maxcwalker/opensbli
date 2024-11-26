import pandas as pd
import matplotlib.pyplot as plt 
from matplotlib.ticker import FormatStrFormatter
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset, inset_axes

import matplotlib 
# Set LaTeX-style fonts
matplotlib.rcParams["text.usetex"] = True
plt.rcParams.update({
    "text.usetex": True,
    "font.family": "serif",
    "font.serif": ["Computer Modern Roman"]
})

# Read the CSV file
df = pd.read_csv('block0_monitor.log')
# df = df.iloc[15003:]

# # Remove columns with NaN values
df = df.dropna(axis=1, how='all')

# Delete existing columns
# df = df.drop(columns=df.columns[:])
directory_monitor = 'plots_monitor/'
if not os.path.exists(directory_monitor):
    os.makedirs(directory_monitor)
# Add new columns
new_columns = ['Iter', 'Time', 'p_50', 'p_90', 'p_100', 'p_110', 'p_120', 'p_130', 'p_140', 'p_150', 'p_160', 'p_170', 'p_180', 'p_185', 'p_190', 'p_195', 'p_200', 'p_205', 'p_210', 'p_215', 'p_220', 'p_230', 'p_240', 'p_250', 'p_260', 'p_270', 'p_280', 'p_290', 'p_300', 'p_310', 'p_320', 'p_330', 'p_340', 'p_350', 'p_360', 'p_370', 'p_380', 'p_390', 'p_399', 'u_50', 'u_90', 'u_100', 'u_110', 'u_120', 'u_130', 'u_140', 'u_150', 'u_160', 'u_170', 'u_180', 'u_185', 'u_190', 'u_195', 'u_200', 'u_205', 'u_210', 'u_215', 'u_220', 'u_230', 'u_240', 'u_250', 'u_260', 'u_270', 'u_280', 'u_290', 'u_300', 'u_310', 'u_320', 'u_330', 'u_340', 'u_350', 'u_360', 'u_370', 'u_380', 'u_390', 'u_399', 'w_50', 'w_90', 'w_100', 'w_110', 'w_120', 'w_130', 'w_140', 'w_150', 'w_160', 'w_170', 'w_180', 'w_185', 'w_190', 'w_195', 'w_200', 'w_205', 'w_210', 'w_215', 'w_220', 'w_230', 'w_240', 'w_250', 'w_260', 'w_270', 'w_280', 'w_290', 'w_300', 'w_310', 'w_320', 'w_330', 'w_340', 'w_350', 'w_360', 'w_370', 'w_380', 'w_390', 'w_399']
# new_columns = ['Iter', 'Time', 'p_50', 'p_96', 'p_100', 'p_175', 'p_187', 'p_191', 'p_200', 'p_213', 'p_225', 'p_240', 'p_250', 'p_275', 'p_300', 'p_325', 'p_350', 'p_375', 'p_400', 'u_50', 'u_96', 'u_100', 'u_175', 'u_187', 'u_191', 'u_200', 'u_213', 'u_225', 'u_240', 'u_250', 'u_275', 'u_300', 'u_325', 'u_350', 'u_375', 'u_400']

df.columns = new_columns

from matplotlib.ticker import ScalarFormatter
from matplotlib.ticker import FormatStrFormatter

# Create the new array
pressure_loc = new_columns[2:33]


# Select every other column
pressure_loc = pressure_loc[::2]

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
    ax.plot(df['Time'].iloc[7500::], df[val].iloc[7500::], color='k', linewidth=0.7)
    ax.set_xlim([4000,11000])
    ax.set_ylabel(val[2:])
    ax.grid(True)
    ax.tick_params(labelbottom=False)
    # Set the y-axis formatter to avoid scientific notation
    ax.yaxis.set_major_formatter(ScalarFormatter(useOffset=False))
    # Set the y-axis formatter to show 3 decimal places
    ax.yaxis.set_major_formatter(FormatStrFormatter('%.3f'))

# Enable bottom x-axis labels for the last row
for i in range(2):
    if (n % 2 != 0 and i == 1) and (n // 2 == rows - 1):
        axs[-1, 1].tick_params(labelbottom=True)
    axs[-1, 0].tick_params(labelbottom=True)
    axs[-1, 0].set_xlabel("Time")
    axs[-1, 1].tick_params(labelbottom=True)
    axs[-1, 1].set_xlabel("Time")



# Set the x-axis label for the entire figure
# fig.text(0.5, 0.04, 'Time', ha='center')

# Adjust layout and save the figure
plt.subplots_adjust(hspace=0.5, wspace=0.3)
fig.savefig(directory_monitor + "monitoring_pressure.pdf", bbox_inches='tight')


p_350 = new_columns[34]

fig, ax = plt.subplots(1,figsize=(10,0.8))
ax.plot(df['Time'],df[p_350],'k')
ax.set_ylabel('p', fontsize=12)
ax.set_xlabel('Time', fontsize=12)
ax.grid(True)

ax.set_xlim([1500,6500])

ax.yaxis.set_major_formatter(FormatStrFormatter('%.4f'))
fig.savefig(directory_monitor +'pressure_350.pdf', bbox_inches='tight')



fig1, ax1 = plt.subplots(7, 1, figsize=(6,5.5))
for i, val in enumerate(new_columns[19:26]):
    ax1[i].plot(df['Time'], df[val],color='k',linewidth=0.7)  # Adjust column name as needed
    ax1[i].set_ylabel(val)
    ax1[i].set
    ax1[i].yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
    ax1[i].grid(True)
    ax1[i].set_xlabel('Time')
    ax1[i].set_xlim([0,df['Time'].iloc[-1]])
    ax1[i].tick_params(labelbottom=False)
ax1[-1].tick_params(labelbottom=True)
    
ax1[0].set_ylim([0.0001,0.1])
fig1.savefig(directory_monitor+"monitoring_u_upstream.pdf",bbox_inches='tight')

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
