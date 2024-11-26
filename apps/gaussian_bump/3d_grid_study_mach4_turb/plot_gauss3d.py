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


import matplotlib

 
# change the axis to latex font (might have to install texlive and pip install latex)
matplotlib.rcParams["text.usetex"] = True
 
# pdf plot printing
plt.rcParams.update({
"text.usetex": True,
"font.family": "serif",
"font.serif": ["Computer Modern Roman"]})


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
directory = './simulation_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)


f=h5py.File(fname, 'r')
try:
    gama = f["gama"].value
    Mref= f["Minf"].value
    Lx = f["L"].value
    Nx = f["block0np0"].value
    Ny = f["block0np1"].value
    Nz = f["block0np2"].value
    niter = f['niter'].value
    print('iterations: ',niter)
except:
    print("Using set grid variables")
    gama = 1.4
    Mref= 4.0
    Lx = 400.0
    Nx = 1500.0
    Ny = 200.0
    Nz = 200.0

# g=h5py.File("opensbli_output.h5", 'r')
x0dum=read_dataset(f,'x0_B0')
x1dum=read_dataset(f,'x1_B0')

x2dum=read_dataset(f,'x2_B0')
rdum=read_dataset(f, 'rho_B0')
# print(rdum)
rudum=read_dataset(f, 'rhou0_B0')
rvdum=read_dataset(f, 'rhou1_B0')
rwdum=read_dataset(f, 'rhou2_B0')
rEdum=read_dataset(f, 'rhoE_B0')

# print('Setting flowfield arrays')
x=x0dum[2:-2,2:-2]
y=x1dum[2:-2,2:-2]
z=x2dum[2:-2,2:-2]
rho=rdum[2:-2,2:-2]
rhou=rudum[2:-2,2:-2]
rhov=rvdum[2:-2,2:-2]
rhow=rwdum[2:-2,2:-2]
rhoE=rEdum[2:-2,2:-2]

x=x0dum
y=x1dum
z=x2dum
rho=rdum
rhou=rudum
rhov=rvdum
rhow=rwdum
rhoE=rEdum

u=rhou/rho
v=rhov/rho
w=rhow/rho
e=rhoE/rho-0.5*(u**2+v**2+w**2)
p=(gama-1.0)*rho*e
T=e*Mref**2*gama*(gama-1.0)

x=x0dum
y=x1dum
z=x2dum
rho=rdum
rhou=rudum
rhov=rvdum
rhow=rwdum
rhoE=rEdum
u=rhou/rho
v=rhov/rho
w=rhow/rho
e=rhoE/rho-0.5*(u**2+v**2+w**2)
p=(gama-1.0)*rho*e
T=e*Mref**2*gama*(gama-1.0)

a = np.sqrt(1.4*p/rho)
M = np.sqrt(u**2 + v**2 +w**2)/a

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

z_idx = [int(Nz/2)]
print("z_idx", z_idx)

# z_idx = [2,5,6,10,12,13,15]
y1, y2, x1, x2 = 0, 60, 140, 180

for idx in z_idx:
    fig1,ax=plt.subplots()
    # axins1 = zoomed_inset_axes(ax, 7,loc='lower center',bbox_to_anchor=(200,45))
    CS=ax.contourf(x[idx,:,:],y[idx,:,:],u[idx,:,:],levels=np.linspace(np.min(u[idx,:,:]), np.max(u[idx,:,:]),50),cmap=cm.jet) # cmap='gray'
    print(u[idx,:,:])
    xp1,xp2 = int(len(x[0,0,:])/Lx *x1), int(len(x[0,0,:])/Lx *x2)
    # try:
        # U = axins1.contourf(x[idx,:,:], y[idx,:,:], u[idx,:,:],levels=list(np.linspace(np.min(u[idx,y1:y2,xp1:xp2]), 0, 5)) + list(np.linspace(np.max(u[idx,y1:y2,xp1:xp2])/20,np.max(u[idx,y1:y2,x1:x2]),25)) , cmap=cm.jet) #
        # axins1.contour(x[idx,:,:], y[idx,:,:], u[idx,:,:],levels=[0],colors='black')
    # except:
        # U = axins1.contourf(x[idx,:,:], y[idx,:,:], u[idx,:,:],levels= np.linspace(np.min(u[idx,y1:y2,x1:x2]), np.max(u[idx,y1:y2,x1:x2]),40), cmap=cm.jet) #

    divider = make_axes_locatable(ax)
    cax1 = divider.append_axes("right", size=0.2,pad=0.1)
    cbar=fig1.colorbar(CS, cax=cax1 )
    cbar.set_label(r"u velocity [main plot]", fontsize=7 )
    cbar.ax.tick_params(labelsize=5)

    # mark_inset(ax, axins1, loc1=1, loc2=2, fc="none", ec="0.5")
    # axins1.set_xlim(x[idx,0,xp1],x[idx,0,xp2]) # apply the x-limits 
    # axins1.set_ylim(y[idx,y1,0],y[idx,y2,0]) # apply the y-limits 
    # axins1.tick_params(axis='both', which='major', labelsize=5)
    # ax.tick_params(axis='both', which='major', labelsize=7)
    ax.set_aspect('equal')
    # ax.set_xlim([160,200])
    # ax.set_ylim([0,10])
    # cax = inset_axes(axins1, width="90%", height=0.1, loc='lower center',borderpad=-3)
    # ubar=fig1.colorbar(U, orientation='horizontal', cax=cax, format=tkr.FormatStrFormatter('%.2g'))
    # ubar.set_label(r"u velocity [zoomed plot]", fontsize=7 )
    # ubar.ax.tick_params(labelsize=5)
    plt.savefig(directory+'contour_z%d_nozoom.pdf' % idx,bbox_inches='tight')

###################################################################################################
#                                                                                                 #
#                plan contours with zoomed inset of separation region                             #
#                                                                                                 #
###################################################################################################

y_idx=[1,20,40,60]
zoom =True

for idx in y_idx:
    ## plan view slice at y_idx point
    fig2, ax1 = plt.subplots()

    if zoom:
        axins1 = zoomed_inset_axes(ax1, 2,loc='upper center',bbox_to_anchor=(200,240))
    else:
        pass

    emphasis_level = 0
    U = ax1.contourf(x[:,idx,:], z[:,idx,:], u[:,idx,:], levels=np.linspace(np.min(u[:,idx,:]), np.max(u[:,idx,:]),50), cmap=cm.jet) #

    #finding the index for locations 100 and 200
    xp1,xp2 = int(len(x[0,0,:])/Lx *100), int(len(x[0,0,:])/Lx *200)
    if zoom:
        try:
            U = axins1.contourf(x[:,idx,:], z[:,idx,:], u[:,idx,:], levels= list(np.linspace(np.min(u[:,idx,xp1:xp2]), 0, 5))+list(np.linspace(0.001,np.max(u[:,idx,xp1:xp2]),25)), cmap=cm.jet)
            # recirc=ax1.contour(x[:,idx,:], z[:,idx,:], u[:,idx,:],levels=[0],colors='black')
            print('yes')
        except:
            U = axins1.contourf(x[:,idx,:], z[:,idx,:], u[:,idx,:],levels= list(np.linspace(np.min(u[:,idx,xp1-20:xp2+20]), np.max(u[:,idx,xp1:xp2]), 30)), cmap=cm.jet)
            print('no')
        cax1 = inset_axes(ax1, width="60%", height="30%", loc='lower center',borderpad=-3)
        ubar=fig2.colorbar(U, orientation='horizontal', cax=cax1, format=tkr.FormatStrFormatter('%.2g'))
        ubar.ax.tick_params(labelsize=5)
        ubar.set_label("u velocity [zoomed axes]" ,fontsize=5)
        ax1.set_aspect(1)

        mark_inset(ax1, axins1, loc1=3, loc2=4, fc="none", ec="0.5")
        x1, x2 = 100, 200

        axins1.set_xlim(x1,x2) # apply the x-limits 
        axins1.tick_params(axis='both', which='major', labelsize=5)
    else:
        cax1 = inset_axes(ax1, width="60%", height="30%", loc='lower center',borderpad=-3)
        ubar=fig2.colorbar(U, orientation='horizontal', cax=cax1, format=tkr.FormatStrFormatter('%.2g'))
        ubar.ax.tick_params(labelsize=5)
        ubar.set_label("u velocity" ,fontsize=5)
        ax1.set_aspect('equal')


    # plt.clabel(recirc, inline = False,fontsize=8)


    ax1.tick_params(axis='both', which='major', labelsize=5)
    # ax1.set_title('contours at y index %d'%idx)

    fig2.savefig(directory+"wall_u_vel_contours_y%d.pdf" % idx, bbox_inches='tight')

###################################################################################################
#                                                                                                 #
#                y-z plane slices                                                                 #
#                                                                                                 #
###################################################################################################

x_idx=[100]

for idx in x_idx:
    ## plan view slice at y_idx point
    fig3, ax1 = plt.subplots()
    # axins1 = zoomed_inset_axes(ax1, 2,loc='upper center',bbox_to_anchor=(200,240))
    x_loc = int(len(x[0,0,:])/Lx * idx)
    vel = np.sqrt(w[:,:,x_loc]**2 + v[:,:,x_loc]**2 )
    U=ax1.contourf(z[:,:,x_loc], y[:,:,x_loc], vel, levels=25, cmap=cm.jet) #

    cax1 = inset_axes(ax1, width="50%", height="10%", loc='lower center',borderpad=-4)
    ubar=fig3.colorbar(U, orientation='horizontal', cax=cax1, format=tkr.FormatStrFormatter('%.2g'))
    ubar.ax.tick_params(labelsize=5)
    ubar.set_label("u velocity" ,fontsize=5)

    nth =3
    ax1.quiver(z[::nth,::nth,x_loc],y[::nth,::nth,x_loc],w[::nth,::nth,x_loc],v[::nth,::nth,x_loc],pivot='mid',scale=25,units='width')
    
    ax1.set_ylim(y[0,0,x_loc],y[0,0,x_loc]+3)
    ax1.set_xlabel(r'z',fontsize=6)
    ax1.set_ylabel(r'y',fontsize=6)
    ax1.set_aspect('equal')
    # mark_inset(ax1, axins1, loc1=3, loc2=4, fc="none", ec="0.5")
    # x1, x2 = 100, 200

    # axins1.set_xlim(100,200) # apply the x-limits 
    # axins1.tick_params(axis='both', which='major', labelsize=5)
    # ax1.tick_params(axis='both', which='major', labelsize=5)

    fig3.savefig(directory+"z-y_plane_x%d.pdf" % idx, bbox_inches='tight')

#####################################################################################################

# fig3, ax2 = plt.subplots()
# ax2.plot(z[:,0,50], v[:,0,50])
# # ax2.text(1, 1.5, '20% amplitude',
# #     verticalalignment='bottom', horizontalalignment='right',
# #     transform=ax.transAxes,
# #     color='black')
# ax2.annotate(f'v={v[0, 0, 50]:.2f}', (z[0, 0, 50], v[0, 0, 50]), xytext=(20, -30),
#             textcoords='offset points', arrowprops=dict(arrowstyle="->"))
# ax2.annotate(f'v={v[99, 0, 50]:.2f}', (z[99, 0, 50], v[99, 0, 50]), xytext=(-30, 30),
#             textcoords='offset points', arrowprops=dict(arrowstyle="->"))
# ax2.set_xlabel(r'along z axis')
# ax2.set_ylabel(r'v velocity')
# ax2.set_title(r'v velocity along z axis at forcing strip location')
# ax2.grid()
# fig3.savefig(directory+'v_vel_forcing.pdf',bbox_inches='tight')
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



### boundary layer profile in the separataion region

## point 160 is a separation region, only for a grid with Nx=400. Find a better way of doing this


###################################################################################################
#                                                                                                 #
#                   separation u velocity profile                                                 #
#                                                                                                 #
###################################################################################################

fig4,ax3 = plt.subplots()
ax3.plot(u[0,:,160],y[0,:,160],color='k')
ax3.set_ylim([0,10])
# ax3.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax3.set_xlabel(r'u0',fontsize=20)
ax3.set_ylabel(r'y',fontsize=20)
ax3.set_title(r'u velocity profile in the upstream separation region')
ax3.grid()
fig4.savefig(directory+'separation_u_vel.pdf',bbox_inches='tight')

## how many points in the boundary layer at the thinnest region; roughly point 190
count=0
for i in u[0,:,195]:
    if i<= 0.98*max(u[0,:,195]):
        # print(i)
        count+=1
    else:
        break
print('points in BL = %d' % count)

# fig4,ax4 = plt.subplots()
# ax4.plot(u[0,:,195],y[0,:,195]-y[0,0,195],marker='.',markersize=0.2,color='k')
# ax4.set_ylim([0,16])
# ax4.set_xlabel(r'u0',fontsize=20)
# ax4.set_ylabel(r'y',fontsize=20)
# ax4.axhline(y = y[0,count,195]-y[0,0,195], color = 'k', linestyle = '--')
# ax4.set_title(r'u velocity at thinnest region of the BL')
# ax4.grid()
# fig4.savefig(directory+'thin_BL_region.pdf',bbox_inches='tight')

indexes = [1,20,40,60]

for index in indexes:
    print('index: %d is at height y=%.2f' % (index, y[0,index,0]))

fig5 ,ax5 = plt.subplots(1)
ax5.scatter(x0dum[100,:,:],x1dum[100,:,:])
ax5.set_aspect('equal')
fig5.savefig("x_y_plot.pdf")
# print(np.linspace(np.min(u[0,150:170,0:10]), np.max(u[0,150:170,0:10]),40))
# print(np.max(u[0,150:170,0:10]))
# plt.show()