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


try:
    fname = sys.argv[1]
except:
     fname = 'opensbli_output.h5'

directory = './comparison_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)

def read_file(fname):
    f = h5py.File(fname, 'r')
    group = f["opensbliblock00"]
    return f, group

def read_dataset(group, dataset):
        d_m = group["%s" % (dataset)].attrs['d_m']
        size = group["%s" % (dataset)].shape
        read_start = [abs(d) for d in d_m]
        read_end = [s-abs(d) for d, s in zip(d_m, size)]
        if len(read_end) == 2:
            read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1]]
        elif len(read_end) == 3:
            read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
        else:
            raise NotImplementedError("")
        return read_data


# values
Minf = 4.0
Re = 4000.0
RefT = 439.0
SuthT = 110.4
Ly = 115.0
Lx = 400.0
scale = 4.959043

list = ['400x200x100','1000x200x100', '1000x200x200','1000x300x200','1500x200x200','1500x300x200']
# list = ['1000x200x100', '1000x200x200']
fig1, ax1 = plt.subplots(figsize=(10, 4))
fig2, ax2 = plt.subplots(figsize=(10, 4))

line_styles = ['-', '-', '-', '-','-', '-']
line_colours = ['k','b', 'orange','y','green','c']
axins1 = zoomed_inset_axes(ax1, 5, loc=2)
axins2 = zoomed_inset_axes(ax2, 5, loc=2)

for i in range(len(list)):

    fname = 'grid_%s/opensbli_output_750000.h5' % list[i]
    f, group1 = read_file(fname)

    D11 = read_dataset(group1, "D11_B0")
    x = read_dataset(group1, "x0_B0")
    y = read_dataset(group1, "x1_B0")
    z = read_dataset(group1, "x2_B0")
    rho = read_dataset(group1, "rho_B0")
    rhou = read_dataset(group1, "rhou0_B0")
    rhov = read_dataset(group1, "rhou1_B0")
    rhow = read_dataset(group1, "rhou2_B0")
    rhoE = read_dataset(group1, "rhoE_B0")
    u = rhou/rho
    v = rhov/rho
    w = rhow/rho
    p = (0.4)*(rhoE - 0.5*(u**2+v**2+w**2)*rho)
    a = numpy.sqrt(1.4*p/rho)
    M = numpy.sqrt(u**2 + v**2 + w**2)/a
    T = 1.4*(Minf**2)*p/rho

    ny = numpy.size(y[0,:, 0])
    Ly = Ly
    delta = Ly/(ny-1.0)
    D11 = D11[0, 0:6, :]

    rows, cols = len(u[0,0,:]), len(u[0,:,0])
    u_avg = np.array([[0.0]*cols]*rows)
    for m in range(len(u[0,0,:])):
        for n in range(len(u[0,:,0])):
            u_avg[m,n] = np.mean(u[:,n,m])
    u_avg = np.transpose(u_avg)

    var = u_avg[0:6, :]
    coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
    coeffs = coeffs.reshape([6, 1])
    dudy = sum(D11*var*coeffs)/delta
    mu = (T**1.5*(1.0+SuthT/RefT)/(T+SuthT/RefT))

    rows, cols = len(mu[0,0,:]), len(mu[0,:,0])
    mu_avg = np.array([[0.0]*cols]*rows)
    for m in range(len(mu[0,0,:])):
        for n in range(len(mu[0,:,0])):
            mu_avg[m,n] = np.mean(mu[:,n,m])
    mu_avg = np.transpose(mu_avg)

    mu_wall = mu_avg[0, :]
    tau_wall = dudy*mu_wall
    Cf = tau_wall/(0.5*Re)

    rows, cols = len(p[0,0,:]), len(p[0,:,0])
    p_avg = np.array([[0.0]*cols]*rows)
    for m in range(len(p[0,0,:])):
        for n in range(len(p[0,:,0])):
            p_avg[m,n] = np.mean(p[:,n,m])
    p_avg = np.transpose(p_avg)    


    ax1.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = 'grid_%s' % list[i],color=line_colours[i],linewidth=1)
    axins1.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = 'grid_%s' % list[i],color=line_colours[i],linewidth=1)

    ax2.plot(x[0, 1, :], p_avg[0, :]/p_avg[0, 0], '%s'%line_styles[i],color=line_colours[i], label='grid_%s' % list[i],linewidth=1)
    axins2.plot(x[0, 1, :], p_avg[0, :]/p_avg[0, 0], '%s'%line_styles[i],color=line_colours[i], label='grid_%s' % list[i],linewidth=1)


mark_inset(ax1, axins1, loc1=1, loc2=4, fc="none", ec="0.5")
x1, x2, y1, y2 = 190, 210, 0.00175, 0.00201 # specify the limits
axins1.set_xlim(x1, x2) # apply the x-limits
axins1.set_ylim(y1, y2) # apply the y-limits 
axins1.set_xticks([])
axins1.set_yticks([])

mark_inset(ax2, axins2, loc1=1, loc2=4, fc="none", ec="0.5")
x1, x2, y1, y2 = 185, 200, 1.65,1.81 # specify the limits
axins2.set_xlim(x1, x2) # apply the x-limits
axins2.set_ylim(y1, y2) # apply the y-limits 
axins2.set_xticks([])
axins2.set_yticks([])


ax1.axhline(y=0.0, linestyle='--', color='black')
ax1.set_xlabel(r'$x_0$')
ax1.set_ylabel(r'$C_f$')
# ax1.set_title('Skin friction')
ax1.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax1.legend(loc='upper right')
ax1.grid()
fig1.savefig(directory+'skin_friction.pdf',bbox_inches='tight')

ax2.set_xlabel(r'$x_0$')
ax2.set_ylabel(r'$\frac{P_w}{P_1}$')
# ax2.set_title('Normalised wall pressure')
ax2.legend(loc='best')
ax2.grid()
fig2.savefig(directory+"wall_pressure.pdf",bbox_inches='tight') 

plt.show()
