import pandas as pd
import matplotlib.pyplot as plt 
from matplotlib.ticker import FormatStrFormatter
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset, inset_axes


# Read the CSV file
df = pd.read_csv('block0_monitor.log')

# # Remove columns with NaN values
df = df.dropna(axis=1, how='all')

# Delete existing columns
# df = df.drop(columns=df.columns[:])
directory_monitor = 'plots_monitor/'
if not os.path.exists(directory_monitor):
    os.makedirs(directory_monitor)
# Add new columns
# new_columns = [
#     'Iter', 'Time', 
#     'p_1', 'p_2', 'p_3', 'p_4', 'p_5', 'p_6', 'p_7', 'p_8', 'p_9', 'p_10', 'p_11', 'p_12', 'p_13', 'p_14', 'p_15', 'p_16', 'p_17', 
#     'u_1', 'u_2', 'u_3', 'u_4', 'u_5', 'u_6', 'u_7', 'u_8', 'u_9', 'u_10', 'u_11', 'u_12', 'u_13', 'u_14', 'u_15', 'u_16', 'u_17'
# ]

# new_columns = ['Iter', 'Time', 'p_50', 'p_90', 'p_100', 'p_110', 'p_120', 'p_130', 'p_140', 'p_150', 'p_160', 'p_170', 'p_180', 'p_185', 'p_190', 'p_195', 'p_200', 'p_205', 'p_210', 'p_215', 'p_220', 'p_230', 'p_240', 'p_250', 'p_260', 'p_270', 'p_280', 'p_290', 'p_300', 'p_310', 'p_320', 'p_330', 'p_340', 'p_350', 'p_360', 'p_370', 'p_380', 'p_390', 'p_399', 'u_50', 'u_90', 'u_100', 'u_110', 'u_120', 'u_130', 'u_140', 'u_150', 'u_160', 'u_170', 'u_180', 'u_185', 'u_190', 'u_195', 'u_200', 'u_205', 'u_210', 'u_215', 'u_220', 'u_230', 'u_240', 'u_250', 'u_260', 'u_270', 'u_280', 'u_290', 'u_300', 'u_310', 'u_320', 'u_330', 'u_340', 'u_350', 'u_360', 'u_370', 'u_380', 'u_390', 'u_399', 'w_50', 'w_90', 'w_100', 'w_110', 'w_120', 'w_130', 'w_140', 'w_150', 'w_160', 'w_170', 'w_180', 'w_185', 'w_190', 'w_195', 'w_200', 'w_205', 'w_210', 'w_215', 'w_220', 'w_230', 'w_240', 'w_250', 'w_260', 'w_270', 'w_280', 'w_290', 'w_300', 'w_310', 'w_320', 'w_330', 'w_340', 'w_350', 'w_360', 'w_370', 'w_380', 'w_390', 'w_399','w_150_1', 'w_150_2', 'w_150_3', 'w_150_4', 'w_150_5', 'w_150_6', 'w_150_7', 'w_150_8', 'w_150_9', 'w_150_10', 'w_150_11']
new_columns = ['Iter', 'Time', 'p_50', 'p_90', 'p_100', 'p_110', 'p_120', 'p_130', 'p_140', 'p_150', 'p_160', 'p_170', 'p_180', 'p_185', 'p_190', 'p_195', 'p_200', 'p_205', 'p_210', 'p_215', 'p_220', 'p_230', 'p_240', 'p_250', 'p_260', 'p_270', 'p_280', 'p_290', 'p_300', 'p_310', 'p_320', 'p_330', 'p_340', 'p_350', 'p_360', 'p_370', 'p_380', 'p_390', 'p_399', 'u_50', 'u_90', 'u_100', 'u_110', 'u_120', 'u_130', 'u_140', 'u_150', 'u_160', 'u_170', 'u_180', 'u_185', 'u_190', 'u_195', 'u_200', 'u_205', 'u_210', 'u_215', 'u_220', 'u_230', 'u_240', 'u_250', 'u_260', 'u_270', 'u_280', 'u_290', 'u_300', 'u_310', 'u_320', 'u_330', 'u_340', 'u_350', 'u_360', 'u_370', 'u_380', 'u_390', 'u_399', 'w_50', 'w_90', 'w_100', 'w_110', 'w_120', 'w_130', 'w_140', 'w_150', 'w_160', 'w_170', 'w_180', 'w_185', 'w_190', 'w_195', 'w_200', 'w_205', 'w_210', 'w_215', 'w_220', 'w_230', 'w_240', 'w_250', 'w_260', 'w_270', 'w_280', 'w_290', 'w_300', 'w_310', 'w_320', 'w_330', 'w_340', 'w_350', 'w_360', 'w_370', 'w_380', 'w_390', 'w_399']
df.columns = new_columns

fig1, ax1 = plt.subplots(15, 1, figsize=(6,9))
# Plot
for i, val in enumerate(new_columns[2:17]):
    ax1[i].plot(df['Time'], df[val],color='k',linewidth=0.7)  # Adjust column name as needed
    ax1[i].set_ylabel(val)

    ax1[i].yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
    ax1[i].grid(True)
    ax1[i].set_xlabel('Time')
    ax1[i].set_xlim([0,df['Time'].iloc[-1]])
    ax1[i].tick_params(labelbottom=False)
ax1[-1].tick_params(labelbottom=True)
ax1[0].set_ylim([0.0001,0.1])
fig1.savefig(directory_monitor+"monitoring_p_upstream.pdf",bbox_inches='tight')





# fig1, ax1 = plt.subplots(1, figsize=(6.5,1))
# # axins1 = zoomed_inset_axes(ax1, 2, loc='upper right')
# axins1 = zoomed_inset_axes(ax1, 3,bbox_to_anchor=(510,100))  # Adjust the zoom factor and location as needed
# ax1.plot(df['Time'], df['p_240'],color='k',linewidth=0.7)  # Adjust column name as needed
# axins1.plot(df['Time'], df['p_240'],color='k',linewidth=0.7)
# ax1.set_ylabel('p_240')
# ax1.yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
# ax1.grid(True)
# ax1.set_xlabel('Time')
# ax1.set_xlim([0,df['Time'].iloc[-1]])
# # ax1.set_xlim([500,600])
# mark_inset(ax1, axins1, loc1=2, loc2=3, fc="none", ec="0.5")
# x1, x2= 2500, 2750
# axins1.set_xlim(x1, x2) # apply the x-limits
# # axins1.set_ylim(y1, y2) # apply the y-limits 
# axins1.set_xticks([])
# axins1.set_yticks([])
# fig1.savefig(directory_monitor+"monitoring_p_zoom.pdf",bbox_inches='tight')



fig1, ax1 = plt.subplots(22, 1, figsize=(6,17))
# Plot
# indices = [9, 10] + list(range(12, 19))

for i, val in enumerate(new_columns[17:39]):
    # val = new_columns[idx]
    ax1[i].plot(df['Time'][27000::], df[val][27000::], color='k', linewidth=0.7)
    ax1[i].set_ylabel(val[2:])
    ax1[i].yaxis.set_major_formatter(FormatStrFormatter('%.3f'))
    ax1[i].grid(True)
    ax1[i].set_xlabel('Time')
    # ax1[i].set_xlim([0, df['Time'].iloc[-1]])
    ax1[i].tick_params(labelbottom=False)
ax1[-1].tick_params(labelbottom=True)
fig1.savefig(directory_monitor+"monitoring_p_downstream.pdf",bbox_inches='tight')

fig1, ax1 = plt.subplots(36, 1, figsize=(6,35))
# Plot
# indices = [9, 10] + list(range(12, 19))

# for i, val in enumerate(new_columns[76:112]):
#     # val = new_columns[idx]
#     ax1[i].plot(df['Time'], df[val], color='k', linewidth=0.7)
#     ax1[i].set_ylabel(val[2:])

#     ax1[i].grid(True)
#     ax1[i].set_ylim([-0.000000001,0.000000001])
#     ax1[i].set_xlim([0, 1000])
#     # ax1[i].set_xlim([0, df['Time'].iloc[-1]])
#     ax1[i].tick_params(labelbottom=False)
# ax1[0].ticklabel_format(style='sci', axis='y', scilimits=(-10, -10))
# # ax1[0].set_ylim([-0.0000000003,0.0000000003])

# ax1[-1].tick_params(labelbottom=True)
# ax1[-1].set_xlabel('Time')
# plt.subplots_adjust(hspace=0.5)
# fig1.savefig(directory_monitor+"monitoring_w.pdf",bbox_inches='tight')


# Extract the desired columns
w_monitors = new_columns[76:112]

# Indices to exclude
exclude_indices = {1, 3, 5, 11, 13, 15, 17, 28, 29, 30, 31, 32, 33, 34, 35}
# for concise graph
# exclude_indices = {0,1, 2, 3, 4, 5,6,  11, 13, 15, 17, 22,23,24,25,26,27,28, 29, 30, 31, 32, 33, 34, 35} 
# Create the new list excluding the specified indices
filtered_monitors = [val for i, val in enumerate(w_monitors) if i not in exclude_indices]

# Determine the number of plots
num_plots = len(filtered_monitors)

# Create subplots with 1 row and num_plots columns (horizontal layout)
fig, ax = plt.subplots(1, num_plots, figsize=(2 * num_plots, 8))  # Adjust width as needed
ax = ax.flatten()  # Flatten in case it's a 1D array

# Plot each filtered monitor with inverted axes
for i, val in enumerate(filtered_monitors):
    range1=29400
    range2=33723
    ax[i].plot(df[val], (df['Time']), color='k', linewidth=0.7)  # Swap x and y, reverse time 29400:32000
    ax[i].set_xlabel(val[2:], loc='center', labelpad=20)  # Set monitor label on x-axis at the top
    ax[i].grid(True)

    # Invert the y-axis so data is flipped vertically
    # ax[i].invert_yaxis()
    lim = 1e-9
    # ax[i].set_xlim([-lim,lim])
    # ax[i].set_ylim([df['Time']-6000,df['Time'][range2]-6000])

    # Remove y-ticks for all plots except the first
    if i > 0:
        ax[i].tick_params(labelleft=False)

# Set the y-axis label for the first plot (common for all)
ax[0].set_ylabel('Time')
# Add a common x-axis label for the entire figure
fig.text(0.5, -0.05, 'Streamwise Location', ha='center', va='center', fontsize=15)

# Adjust layout and save the figure
plt.subplots_adjust(wspace=0.4)
fig.savefig(directory_monitor + "monitoring_w.pdf", bbox_inches='tight')

# Optionally, hide any unused subplots (not likely needed here)
for i in range(len(filtered_monitors), len(ax)):
    fig.delaxes(ax[i])

exit()


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
