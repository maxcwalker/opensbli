import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm
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
#fname='opensbli_output.h5'
fname='opensbli_output2.h5'
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
CS=ax.contourf(x[99,:,:],y[99,:,:],u[99,:,:],levels=100,cmap=cm.jet)
ax.set_aspect('equal')
ax.set_ylim([0,100])
# ax.set_aspect(1)
cbar=fig1.colorbar(CS)
# plt.show()
#ax.set_ylim([0.0,20])
plt.savefig('ooutput_plot_260000.pdf')

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
