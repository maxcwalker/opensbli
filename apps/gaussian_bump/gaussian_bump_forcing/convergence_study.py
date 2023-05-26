#!bin/python3
# --------------------------------------------------------------------------------------------------------------------------------------------
# convergence_study
#   convvergence study for opensbli simulations
#
# version. i
# author. gnsa1e21, 2022
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------
import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib
# from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.cm as cm

# plot features
matplotlib.rcParams["text.usetex"] = True

gama=1.4
mref=0.6  # needs changing here whenever M changes - better to read it from the file
print('---------------------------------------------------------------- Check: Mach number = ',mref)

def read_com(filename):
    data = np.genfromtxt(filename, 
                     skip_header=1,
                     delimiter=',')
    return data


data00 = read_com('monitor.log')

iter00, time00 = data00[:, 0], data00[:, 1]

# probe locations
pb0_001, pb0_002, pb0_003, pb0_004, pb0_005, pb0_006 = data00[:, 2], data00[:, 3], data00[:, 4], data00[:, 5], data00[:, 6], data00[:, 7]

font = {'size': 4}
matplotlib.rc('font', **font)

fig02, axs02 = plt.subplots(2,3)

# axs02[0,0].title.set_text('Temperature vs x1')
axs02[0,0].set_xlabel('$time$')
axs02[0,0].set_ylabel('$p_B0 (178, 45)$')

axs02[0,1].set_xlabel('$time$')
axs02[0,1].set_ylabel('$p_B0 (178, 72)$')

axs02[0,2].set_xlabel('$time$')
axs02[0,2].set_ylabel('$p_B0 (178, 96)$')

axs02[1,0].set_xlabel('$time$')
axs02[1,0].set_ylabel('$p_B0 (178, 118)$')

# axs02[1,0].title.set_text('Velocity vs x1')
axs02[1,1].set_xlabel('$time$')
axs02[1,1].set_ylabel('$p_B0 (178, 139)$')

axs02[1,2].set_xlabel('$time$')
axs02[1,2].set_ylabel('$p_B0 (178, 160)$')

marker_size = 1

axs02[0,0].plot(time00, pb0_001, 'x', markersize=marker_size, c='navy')
axs02[0,1].plot(time00, pb0_002, 'x', markersize=marker_size, c='navy')
axs02[0,2].plot(time00, pb0_003, 'x', markersize=marker_size, c='navy')

axs02[1,0].plot(time00, pb0_004, 'x', markersize=marker_size, c='navy')
axs02[1,1].plot(time00, pb0_005, 'x', markersize=marker_size, c='navy')
axs02[1,2].plot(time00, pb0_006, 'x', markersize=marker_size, c='navy')

fig02.suptitle('cylctl01 convergence')

#fig02.tight_layout()
#fig02.savefig('cylctl00_probes.pdf', format='pdf', transparent=True)


plt.show()