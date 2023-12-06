import numpy as np
import matplotlib.pyplot as plt
plt.style.use('classic')


plt.rcParams['font.size'] = 14

def extract_data(path, delimiter):
    f = open(path, "r")
    data = np.genfromtxt(f, skip_header=1, delimiter=delimiter, usecols=(0, 1, 2, 3))
    return data


input_names = ['64', '128', '256', '384']
# input_names = ['768']
colors = ['b', 'g', 'r', 'm', 'k', 'c', 'k', 'y', 'orange']
linestyles = ['-', '-','-','-','-','-','-', '-', '-']
data = []
for name in input_names:
    output = extract_data('./OpenSBLI_WF5_N%s_M125_Re1600.dat' % name, delimiter=' ')
    data.append([output, name])

output = extract_data('./OpenSBLI_reference2048_M125_Re1600.dat', delimiter=' ')
data.append([output, 'Reference'])
input_names += ['Reference']

output = extract_data('./OpenSBLI_TVD_kappa0.9.dat', delimiter=',')
data.append([output, 'TVD filter 0.9', ])
input_names += ['TVD filter 0.9']

output = extract_data('./OpenSBLI_TVD_kappa0.3.dat', delimiter=',')
data.append([output, 'TVD filter 0.3', ])
input_names += ['TVD filter 0.3']

output = extract_data('./OpenSBLI_TVD_kappa0.02.dat', delimiter=',')
data.append([output, 'TVD filter 0.02', ])
input_names += ['TVD filter 0.02']

output = extract_data('./OpenSBLI_TVD_kappa0.3_256cubed.dat', delimiter=',')
data.append([output, 'TVD filter 0.3', ])
input_names += ['TVD filter 0.3 256cubed']

# output = extract_data('./OpenSBLI_TVD_kappa0.9_256cubed.dat', delimiter=',')
# data.append([output, 'TVD filter 0.9', ])
# input_names += ['TVD filter 0.9 256cubed']

# KE plot
plt.clf()
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
fig, ax = plt.subplots() # create a new figure with a default 111 subplot
axins = zoomed_inset_axes(ax, 2.7, loc=3) # zoom-factor: 2.5, location: upper-left

for i, name in enumerate(input_names):
    if name == 'Reference':
        label = r'Reference: $2048^3$'
    elif name == 'TVD filter 0.9':
        label = r'TVD filter (kappa=0.9): $64^3$'
    elif name == 'TVD filter 0.3':
        label = r'TVD filter (kappa=0.3): $64^3$'
    elif name == 'TVD filter 0.02':
        label = r'TVD filter (kappa=0.02): $64^3$'
    elif name == 'TVD filter 0.3 256cubed':
        label = r'TVD filter (kappa=0.3): $256^3$'
    # elif name == 'TVD filter 0.9 256cubed':
    #     label = r'TVD filter (kappa=0.9): $256^3$'
    else:
        label = r'WENO5-filter: $%s^3$' % name
    ax.plot(data[i][0][:,0], data[i][0][:,1], color=colors[i], linestyle = linestyles[i], linewidth=1.5, label=label)
    axins.plot(data[i][0][:,0], data[i][0][:,1], color=colors[i], linewidth=1.5,linestyle = linestyles[i], label=label)

x1, x2, y1, y2 = 9, 12, 0.07, 0.095 # specify the limits
axins.set_xlim(x1, x2) # apply the x-limits
axins.set_ylim(y1, y2) # apply the y-limits
plt.xticks(visible=False)
plt.yticks(visible=False)
from mpl_toolkits.axes_grid1.inset_locator import mark_inset
mark_inset(ax, axins, loc1=2, loc2=4, fc="none", ec="0.5")
ax.set_xlabel(r'Time')
ax.set_ylabel(r'Kinetic Energy')
ax.legend(loc='upper right', fontsize=12)
ax.grid()
# ax.text(-0.11, 0.95, '(a)',
#     verticalalignment='bottom', horizontalalignment='right',
#     transform=ax.transAxes,
#     color='black')
plt.savefig('WF5_compare_KE.pdf', bbox_inches='tight')
plt.clf()


# Solenoidal plot
plt.clf()
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
fig, ax = plt.subplots() # create a new figure with a default 111 subplot
axins = zoomed_inset_axes(ax, 2.7, loc=1) # zoom-factor: 2.5, location: upper-left

for i, name in enumerate(input_names):
    if name == 'Reference':
        label = r'Reference: $2048^3$'
    elif name == 'TVD filter 0.9':
        label = r'TVD filter (kappa=0.9): $64^3$'
    elif name == 'TVD filter 0.3':
        label = r'TVD filter (kappa=0.3): $64^3$'
    elif name == 'TVD filter 0.02':
        label = r'TVD filter (kappa=0.02): $64^3$'
    elif name == 'TVD filter 0.3 256cubed':
        label = r'TVD filter (kappa=0.3): $256^3$'
    # elif name == 'TVD filter 0.9 256cubed':
    #     label = r'TVD filter (kappa=0.9): $256^3$'
    else:
        label = r'WENO5-filter: $%s^3$' % name
    axins.plot(data[i][0][:,0], data[i][0][:,2], color=colors[i], linewidth=1.5,linestyle = linestyles[i], label=label)
    ax.plot(data[i][0][:,0], data[i][0][:,2], color=colors[i], linewidth=1.5, linestyle = linestyles[i], label=label)

x1, x2, y1, y2 = 10.75, 12.75, 0.0095, 0.011 # specify the limits
axins.set_xlim(x1, x2) # apply the x-limits
axins.set_ylim(y1, y2) # apply the y-limits
plt.xticks(visible=False)
plt.yticks(visible=False)
from mpl_toolkits.axes_grid1.inset_locator import mark_inset
mark_inset(ax, axins, loc1=2, loc2=3, fc="none", ec="0.5")
ax.set_xlabel(r'Time')
ax.set_ylabel(r'Solenoidal Dissipation')
ax.legend(loc='upper left', fontsize=12)
ax.grid()
ax.text(-0.11, 0.95, '(b)',
    verticalalignment='bottom', horizontalalignment='right',
    transform=ax.transAxes,
    color='black')
plt.savefig('WF5_compare_Solenoidal.pdf', bbox_inches='tight')
plt.clf()







# Dilatational plot
for i, name in enumerate(input_names):
    if name == 'Reference':
        label = r'Reference: $2048^3$'
    elif name == 'TVD filter 0.9':
        label = r'TVD filter (kappa=0.9): $64^3$'
    elif name == 'TVD filter 0.3':
        label = r'TVD filter (kappa=0.3): $64^3$'
    elif name == 'TVD filter 0.02':
        label = r'TVD filter (kappa=0.02): $64^3$'
    elif name == 'TVD filter 0.3 256cubed':
        label = r'TVD filter (kappa=0.3): $256^3$'
    # elif name == 'TVD filter 0.9 256cubed':
    #     label = r'TVD filter (kappa=0.9): $256^3$'
    else:
        label = r'WENO5-filter: $%s^3$' % name
    plt.plot(data[i][0][:,0], data[i][0][:,3], color=colors[i], linestyle = linestyles[i], linewidth=1.5, label=label)

plt.xlabel(r'Time')
plt.ylabel(r'Dilatational Dissipation')
plt.legend(loc='best', fontsize=12)
plt.grid()
plt.savefig('WF5_compare_Dilatational.pdf', bbox_inches='tight')
plt.clf()

# Total plot
for i, name in enumerate(input_names):
    if name == 'Reference':
        label = r'Reference: $2048^3$'
    elif name == 'TVD filter 0.9':
        label = r'TVD filter (kappa=0.9): $64^3$'
    elif name == 'TVD filter 0.3':
        label = r'TVD filter (kappa=0.3): $64^3$'
    elif name == 'TVD filter 0.02':
        label = r'TVD filter (kappa=0.02): $64^3$'
    elif name == 'TVD filter 0.3 256cubed':
        label = r'TVD filter (kappa=0.3): $256^3$'
    # elif name == 'TVD filter 0.9 256cubed':
        # label = r'TVD filter (kappa=0.9): $256^3$'
    else:
        label = r'WENO5-filter: $%s^3$' % name
    plt.plot(data[i][0][:,0], data[i][0][:,2]+data[i][0][:,3], color=colors[i], linestyle = linestyles[i], linewidth=1.5, label=label)

plt.xlabel(r'Time')
plt.ylabel(r'Total Dissipation')
plt.legend(loc='best', fontsize=12)
plt.grid()
plt.savefig('WF5_compare_Total.pdf', bbox_inches='tight')
plt.clf()
