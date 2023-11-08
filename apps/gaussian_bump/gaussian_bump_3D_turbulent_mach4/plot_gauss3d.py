import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from mpl_toolkits.axes_grid1 import make_axes_locatable
from mpl_toolkits.axes_grid1.inset_locator import inset_axes
import matplotlib.ticker as tkr


gama=1.4
Mref=1.5  # needs changing here whenever M changes - better to read it from the file
print('Check: Mach number = ',Mref)

def read_dataset(file, dataset):
    group = file["opensbliblock00"]
    d_m = group["%s" % (dataset)].attrs['d_m']
    size = group["%s" % (dataset)].shape
    start=[abs(d+2) for d in d_m]
    end=[s-abs(d+2) for d, s in zip(d_m, size)]
    read_data=group["%s" % (dataset)][start[0]:end[0],start[1]:end[1],start[2]:end[2]]
    #print('d_m', d_m, size)
    return read_data

print('Reading data')
fname='opensbli_output.h5'
f=h5py.File(fname, 'r')
x0dum=read_dataset(f,'x0_B0')
x1dum=read_dataset(f,'x1_B0')
x2dum=read_dataset(f,'x2_B0')
rdum=read_dataset(f, 'rho_B0')
rudum=read_dataset(f, 'rhou0_B0')
rvdum=read_dataset(f, 'rhou1_B0')
rwdum=read_dataset(f, 'rhou2_B0')
rEdum=read_dataset(f, 'rhoE_B0')

print('Setting flowfield arrays')
x=x0dum[2:-2,2:-2]
y=x1dum[2:-2,2:-2]
z=x2dum[2:-2,2:-2]
rho=rdum[2:-2,2:-2]
rhou=rudum[2:-2,2:-2]
rhov=rvdum[2:-2,2:-2]
rhow=rwdum[2:-2,2:-2]
rhoE=rEdum[2:-2,2:-2]
u=rhou/rho
v=rhov/rho
w=rhow/rho
e=rhoE/rho-0.5*(u**2+v**2+w**2)
p=(gama-1.0)*rho*e
T=e*Mref**2*gama*(gama-1.0)

a = np.sqrt(1.4*p/rho)
M = np.sqrt(u**2 + v**2)/a

# note that the first array index is y, the second x (python convention)
print('Array size for plotting',rho.shape)
print('Array size for plotting',x.shape)
print('x range',x[5,:,:])#,x[0,-1,:])
#print('y range',y[0,0],y[-1,0])
print('u range',np.amax(u),np.amin(u))
print('v range',np.amax(v),np.amin(v))
print('w range',np.amax(w),np.amin(w))
print('p range',np.amax(p),np.amin(p))
print('T range',np.amax(T),np.amin(T))
#print(p[100,:])

fig1,ax=plt.subplots()
CS=ax.contourf(x[50,:,:],y[50,:,:],u[50,:,:],levels=50, cmap=cm.jet)
divider = make_axes_locatable(ax)
cax = divider.append_axes("right", size=0.2,pad=0.1)
cbar=fig1.colorbar(CS, cax=cax)
# cbar.set_label("Mach Number" )
cbar.set_label("u velocity" )
ax.set_aspect('equal')
ax.set_ylim([0,100])
# ax.set_aspect(1)
# plt.show()
#ax.set_ylim([0.0,20])
plt.savefig('contour.pdf')

fig2, ax1 = plt.subplots()
U=plt.contourf(x[:,1,:], z[:,1,:], v[:,1,:],levels=25, cmap=cm.jet)
cax1 = inset_axes(ax1, width="90%", height="20%", loc='lower center',borderpad=-3)
ubar=fig2.colorbar(U, orientation='horizontal', cax=cax1, format=tkr.FormatStrFormatter('%.2g'))
ubar.set_label("v velocity" )
ax1.set_aspect(1)
fig2.savefig("wall_u_vel_contours.pdf")

fig3, ax2 = plt.subplots()
ax2.plot(z[:,0,50], v[:,0,50])
# ax2.text(1, 1.5, '20% amplitude',
#     verticalalignment='bottom', horizontalalignment='right',
#     transform=ax.transAxes,
#     color='black')
ax2.annotate(f'v={v[0, 0, 50]:.2f}', (z[0, 0, 50], v[0, 0, 50]), xytext=(20, -30),
            textcoords='offset points', arrowprops=dict(arrowstyle="->"))
ax2.annotate(f'v={v[99, 0, 50]:.2f}', (z[99, 0, 50], v[99, 0, 50]), xytext=(-30, 30),
            textcoords='offset points', arrowprops=dict(arrowstyle="->"))
ax2.set_xlabel(r'along z axis')
ax2.set_ylabel(r'v velocity')
ax2.set_title(r'v velocity along z axis at forcing strip location')
ax2.grid()
fig3.savefig('v_vel_forcing.pdf',bbox_inches='tight')
#n_levels=25
#name= "u"
#min_val = np.min(u)
#max_val = np.max(u)
#levels = np.linspace(min_val, max_val, n_levels)
#print("%s" % name)
#fig = plt.figure()
#self.contour_local(fig, levels, "%s" % name, var)
#plt.savefig("katzer_%s.pdf" % name, bbox_inches='tight')
#plt.clf()


plt.show()