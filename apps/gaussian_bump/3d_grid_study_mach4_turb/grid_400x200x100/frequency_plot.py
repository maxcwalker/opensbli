import numpy as np 
from matplotlib import pyplot as plt 
import matplotlib.cm as cm

time = np.linspace(0,75,100)
omega = [0.1, 0.2, 0.4, 1.0]
# phi = [0, np.pi/2, np.pi, np.pi*3/2]
phi = [0,1.98747,3.20543,5.4392]
# phi = [0,0,0,0]
s = []

fig,ax = plt.subplots(figsize=(10,2.5))

total = 0
for i, f in enumerate(omega):
    s = np.sin(f*time + phi[i])
    # ax.plot(time,s, linestyle='--',label = r'$\omega$ = %.2f rad' % f)
    ax.plot(time,s, linestyle='--',label = r'$\omega$ = %.2f, $\phi$ = %.4f' % (f, phi[i]))

    total += s

ax.plot(time,total, color='k',label='Total Amplitude')
# ax.set_title('Disturbance Frequencies plotted over time',fontsize=15)
ax.set_xlabel(r'Time', fontsize=20)
ax.set_ylabel(r'Amplitude', fontsize=20)
ax.grid()
ax.legend()
fig.savefig('forcing_frequencies_phase.pdf',bbox_inches='tight')