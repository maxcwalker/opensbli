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

try:
    fname = sys.argv[1]
except:
     fname = 'opensbli_output.h5'

directory = './'

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


list = ['000001','100000', '200000', '300000', '400000', '500000', '600000', '700000', '800000', '900000', '1000000', '1100000', '1200000', '1300000', '1400000', '1500000', '1600000', '1700000']
plot_list =  ['500000', '600000', '700000', '800000', '900000', '1000000', '1100000', '1200000', '1300000', '1400000', '1500000', '1600000', '1700000']

f=h5py.File('opensbli_output_%s.h5' % list[0], 'r')
gama = f["gama"].value
Minf= f["Minf"].value
Re = f["Re"].value
dt = f["dt"].value
Lx = f["L"].value
SuthT = f["SuthT"].value
RefT = f["RefT"].value
Nx = f["block0np0"].value
Ny = f["block0np1"].value
Nz = f["block0np2"].value
H = f["H"].value
niter = f['niter'].value
print('iterations: ',niter)

fig1, ax1 = plt.subplots(1,1)
fig2, ax2 = plt.subplots(1,1)

# fig2, ax2 = plt.subplots(1,1)
line_styles = []
# line_styles = ['-', '-', '-', '-','-','-','-','-','-']

for i in range(len(list)):
    line_styles.append('-')

line_colours = ['k','k','k','k','k','k','b', 'orange','y','c','r','green','pink','slategray','lime','chocolate','k','b','orange','y']
axins1 = zoomed_inset_axes(ax1, 3, loc=2)
axins2 = zoomed_inset_axes(ax1, 3, loc=3)
axins3 = zoomed_inset_axes(ax1, 3, loc=4)

# TF = 3.75 # Initial through flows
time, Cf_mid,Cf_350  = [], [], []



TF = int(plot_list[0])*0.01/400.0 + 3.75 
for i in range(len(list)):
    print('Through flow: ', TF)
    fname = 'opensbli_output_%s.h5' % list[i]
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
    Ly = H
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

    if list[i] in plot_list:
        ax1.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = '%.2f' % TF,color=line_colours[i],linewidth=1)
        axins1.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = '%.2f' % TF,color=line_colours[i],linewidth=1)
        axins2.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = '%.2f' % TF,color=line_colours[i],linewidth=1)
        axins3.plot(x[0, 1, :], Cf, '%s'%line_styles[i],label = '%.2f' % TF,color=line_colours[i],linewidth=1)
        TF += 2.5
    time.append(float(list[i])*float(dt))
    Cf_mid.append(Cf[int(Nx/2)])
    Cf_350.append(Cf[int(7*Nx/8)])
    print('time ', time)
    print('cf ', Cf[int(Nx/2)])


mark_inset(ax1, axins1, loc1=1, loc2=4, fc="none", ec="0.5")
mark_inset(ax1, axins2, loc1=1, loc2=4, fc="none", ec="0.5")
mark_inset(ax1, axins3, loc1=2, loc2=3, fc="none", ec="0.5")
x1, x2, y1, y2 = 190, 210, 0.0017, 0.0021 # specify the limits
axins1.set_xlim(x1, x2) # apply the x-limits
axins1.set_ylim(y1, y2) # apply the y-limits 
axins1.set_xticks([])
axins1.set_yticks([])

x1, x2, y1, y2 = 80, 105, - 0.0001, 0.0001 # specify the limits
axins2.set_xlim(x1, x2) # apply the x-limits
axins2.set_ylim(y1, y2) # apply the y-limits 
axins2.set_xticks([])
axins2.set_yticks([])


x1, x2, y1, y2 = 210, 250, -0.0003, 0.0001 # specify the limits
axins3.set_xlim(x1, x2) # apply the x-limits
axins3.set_ylim(y1, y2) # apply the y-limits 
axins3.set_xticks([])
axins3.set_yticks([])

# mark_inset(ax2, axins2, loc1=1, loc2=4, fc="none", ec="0.5")
# x1, x2, y1, y2 = 185, 195, 2.4, 2.5 # specify the limits
# axins2.set_xlim(x1, x2) # apply the x-limits
# axins2.set_ylim(y1, y2) # apply the y-limits 
# axins2.set_xticks([])
# axins2.set_yticks([])


ax1.axhline(y=0.0, linestyle='--', color='black')
ax1.set_xlabel(r'$x_0$', fontsize=20)
ax1.set_ylabel(r'$C_f$', fontsize=20)
# ax1.set_title('Skin friction')
ax1.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax1.legend(loc='upper right',title='Throught flows')
ax1.grid()
fig1.savefig(directory+'skin_friction.pdf',bbox_inches='tight')


print(time)
print(Cf_mid)
ax2.plot(time, Cf_mid, color='k',label ='peak Cf')
ax2.plot(time, Cf_350, color='b',label='Cf at x=350')
ax2.set_ylabel('Cf')
ax2.set_xlabel('Time')
ax2.legend()
ax2.grid()
fig2.savefig('peak_Cf_overTime.pdf')




plt.show()
