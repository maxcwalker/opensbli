import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from mpl_toolkits.axes_grid1 import make_axes_locatable
from mpl_toolkits.axes_grid1.inset_locator import inset_axes
import matplotlib.ticker as tkr
import sys
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset


gama=1.4
Mref=4.0  # needs changing here whenever M changes - better to read it from the file
Lx=400.0
Ly = 115.0
Re = 4000
scale = 4.959043
Pr = 0.71
Tw = 1.37
RefT = 439.0
SuthT = 110.4

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
try:
    fname = sys.argv[1]
except:
    fname='opensbli_output.h5'
directory = './span_averaged_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)

f=h5py.File(fname, 'r')
x0dum=read_dataset(f,'x0_B0')
x1dum=read_dataset(f,'x1_B0')
x2dum=read_dataset(f,'x2_B0')
rdum=read_dataset(f, 'rho_B0')
# print(rdum)
rudum=read_dataset(f, 'rhou0_B0')
rvdum=read_dataset(f, 'rhou1_B0')
rwdum=read_dataset(f, 'rhou2_B0')
rEdum=read_dataset(f, 'rhoE_B0')

print('Setting flowfield arrays')
x=x0dum[2:-2,2:-2]
y=x1dum[2:-2,2:-2]
z=x2dum[2:-2,2:-2]
rho=rdum[2:-2,2:-2]
# print('rho = ')
# print(rho)
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
mu = (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT))

a = np.sqrt(1.4*p/rho)
M = np.sqrt(u**2 + v**2 +w**2)/a
D11 = read_dataset(f, "D11_B0")


# note that the first array index is y, the second x (python convention)
# print('Array size for plotting',rho.shape)
# print('Array size for plotting',x.shape)
# print('x range',x[5,:,:])#,x[0,-1,:])
# #print('y range',y[0,0],y[-1,0])
# print('u range',np.amax(u),np.amin(u))
# print('v range',np.amax(v),np.amin(v))
# print('w range',np.amax(w),np.amin(w))
# print('p range',np.amax(p),np.amin(p))
# print('T range',np.amax(T),np.amin(T))
#print(p[100,:])

###################################################################################################
#                                                                                                 #
#                side contours with zoomed inset of separation region                             #
#                                                                                                 #
###################################################################################################

rows, cols = len(u[0,0,:]), len(u[0,:,0])
u_avg = np.array([[0.0]*cols]*rows)

for i in range(len(u[0,0,:])):
    for j in range(len(u[0,:,0])):
        u_avg[i,j] = np.mean(u[:,j,i])
u_avg = np.transpose(u_avg)

y1, y2, x1, x2 = 0, 60, 140, 180
fig1,ax=plt.subplots()
# axins1 = zoomed_inset_axes(ax, 7,loc='lower center',bbox_to_anchor=(200,45))
CS=ax.contourf(x[0,:,:],y[0,:,:],u_avg,levels=50, cmap=cm.jet)

xp1,xp2 = int(len(x[0,0,:])/Lx *x1), int(len(x[0,0,:])/Lx *x2)
# try:
#     U = axins1.contourf(x[0,:,:], y[0,:,:], u_avg,levels=list(np.linspace(np.min(u[idx,y1:y2,xp1:xp2]), 0, 5)) + list(np.linspace(np.max(u[idx,y1:y2,xp1:xp2])/20,np.max(u[idx,y1:y2,x1:x2]),25)) , cmap=cm.jet) #
#     axins1.contour(x[0,:,:], y[0,:,:], u_avg,levels=[0],colors='black')
# except:
#     U = axins1.contourf(x[0,:,:], y[0,:,:], u_avg,levels= np.linspace(np.min(u_avg[idx,y1:y2,x1:x2]), np.max(u[idx,y1:y2,x1:x2]),40), cmap=cm.jet) #

divider = make_axes_locatable(ax)
cax1 = divider.append_axes("right", size=0.2,pad=0.1)
cbar=fig1.colorbar(CS, cax=cax1)
cbar.set_label(r"u velocity", fontsize=7 )
cbar.ax.tick_params(labelsize=5)

# mark_inset(ax, axins1, loc1=1, loc2=2, fc="none", ec="0.5")
# axins1.set_xlim(x[0,0,xp1],x[0,0,xp2]) # apply the x-limits 
# axins1.set_ylim(y[0,y1,0],y[0,y2,0]) # apply the y-limits 
# axins1.tick_params(axis='both', which='major', labelsize=5)
ax.tick_params(axis='both', which='major', labelsize=7)
ax.set_aspect('equal')
# cax = inset_axes(axins1, width="90%", height=0.1, loc='lower center',borderpad=-3)
# ubar=fig1.colorbar(U, orientation='horizontal', cax=cax, format=tkr.FormatStrFormatter('%.2g'))
# ubar.set_label(r"u velocity [zoomed plot]", fontsize=7 )
# ubar.ax.tick_params(labelsize=5)
plt.savefig(directory+'contours_side_u.pdf', bbox_inches='tight')


###################################################################################################
#                                                                                                 #
#                plan contours with zoomed inset of separation region                             #
#                                                                                                 #
###################################################################################################


def compute_wall_derivative(variable,D11):
    ny = np.size(y[:, 0])
    delta = Ly/(ny-1.0)
    D11 = D11[0, 0:6, :]

    avg_var = np.array([[0.0]*cols]*rows)
    for i in range(len(variable[0,0,:])):
        for j in range(len(variable[0,:,0])):
            avg_var[i,j] = np.mean(variable[:,j,i])
    variable = np.transpose(avg_var)

    var = variable[0:6, :]
    coeffs = np.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
    coeffs = coeffs.reshape([6, 1])
    dudy = sum(D11*var*coeffs)/delta
    return dudy

def St_Rex(mu,T):
    Rex = 0.5*(Re / scale)**2 + x[0, 1, :]*Re
    r = Pr**1/3
    dTdy = compute_wall_derivative(T,D11)
    Tr = 1+r*0.2*Mref**2
    St_act = mu[0, :] / (Pr*Re*(Tr-Tw)) * dTdy #actual St number
    return Rex, St_act

def compute_heat_flux(T,mu):
    dTdy = compute_wall_derivative(T,D11)
    mu_wall = mu[0, :]
    q = (mu_wall/(0.4*Mref**2*Pr*Re)*dTdy)
    return q

##  averaging mu
avg_var = np.array([[0.0]*cols]*rows)
for i in range(len(mu[0,0,:])):
    for j in range(len(mu[0,:,0])):
        avg_var[i,j] = np.mean(mu[:,j,i])
mu = np.transpose(avg_var)

Rex, St_acc = St_Rex(mu,T)
fig1, ax1 = plt.subplots()
# ax1.plot(Rex, St_rey_ana,label='Reynolds Analogy \nStanton Number')
ax1.plot(Rex, St_acc,color='k',label='Stanton Number\nEquation')
ax1.set_xlabel(r'$Re_x$', fontsize=20)
ax1.set_ylabel(r'$St$', fontsize=20)
# ax1.set_ylim([-0.2,3])
ax1.set_xlim([min(Rex),max(Rex)])
# ax1.legend(loc='best')
# ax1.set_title('Reynolds number vs Stanton number', fontsize=15)
fig1.savefig(directory+'Rex_St.pdf', bbox_inches='tight')


q = compute_heat_flux(T,mu)
fig, ax = plt.subplots()
ax.plot(x[0, 1, :], q, color='k') #, label='OpenSBLI'
ax.set_xlabel(r'$x_0$', fontsize=15)
ax.set_ylabel(r'$\dot{q}$', fontsize=15)
ax.set_xlim([min(x[0, 1, :]), max(x[0, 1, :])])
# ax.set_title('Wall heat flux')
# plt.legend(loc="best")
ax.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
fig.savefig(directory + 'heat_flux.pdf', bbox_inches='tight')