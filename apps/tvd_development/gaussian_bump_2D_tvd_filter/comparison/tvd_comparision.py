import numpy
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os

# plt.style.use('classic')

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


def compute_wall_derivative(variable):

    return dudy


# Constants
Minf = 2.0
SuthT = 110.4
RefT = 228.0
Re = 950.0
Ly = 115.0
Lx = 400.0

fnames = ['opensbli_output_weno_scheme.h5', 'opensbli_output_tvd_kappa0.05.h5', 'opensbli_output_tvd_kappa0.1.h5', 'opensbli_output_tvd_kappa0.3.h5'] #  
labels = ['Weno scheme', 'TVD filter (kappa=0.05)', 'TVD filter (kappa=0.1)', 'TVD filter (kappa=0.3)'] #
colours = [ 'orange', 'yellow','green', 'k']
marker = [ 'H', 'X','^', '.' ]

fig, ax = plt.subplots()
fig1, ax1 = plt.subplots()

for i, file in enumerate(fnames):
    f, group = read_file(file)

    rho = read_dataset(group, "rho_B0")
    rhou = read_dataset(group, "rhou0_B0")
    rhov = read_dataset(group, "rhou1_B0")
    rhoE = read_dataset(group, "rhoE_B0")
    u = rhou/rho
    v = rhov/rho
    p = (0.4)*(rhoE - 0.5*(u**2+v**2)*rho)
    a = numpy.sqrt(1.4*p/rho)
    M = numpy.sqrt(u**2 + v**2)/a
    T = 1.4*(Minf**2)*p/rho
    mu = (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT))

    # extract coordinates
    f, group1 = read_file(file)
    x = read_dataset(group, "x0_B0")
    y = read_dataset(group, "x1_B0")
    dx, dy = x[0, 1], y[1, 0]
    print("Grid size (x,y)  is: (%f, %f)" % (x.shape[1], x.shape[0]))
    print("First grid point dx: %f, dy: %f" % (dx, dy))
    dx, dy = x[0, -1]-x[0, -2], y[-1, 0]-y[-2, 0]
    print("Last grid point dx: %f, dy: %f" % (dx, dy))


    #extract metrics
    D11 = read_dataset(group1, "D11_B0")


    # compute skin friction
    mu_wall = mu[0, :]

    # wall derivatives
    ny = numpy.size(y[:, 0])
    Ly = Ly
    delta = Ly/(ny-1.0)
    D11 = D11[0:6, :]
    var = u[0:6, :]
    coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
    coeffs = coeffs.reshape([6, 1])
    dudy = sum(D11*var*coeffs)/delta
    tau_wall = dudy*mu_wall

    Cf = tau_wall/(0.5*Re)

    ax.plot(x[1, :], Cf, label=labels[i], color=colours[i], marker=marker[i], markevery=10)
    ax1.plot(x[1, :], p[0, :]/p[0, 0], label=labels[i], color=colours[i], marker=marker[i],markevery=5)        

ax.set_xlabel(r'$x_0$', fontsize=20)
ax.set_ylabel(r'$C_f$', fontsize=20)
ax.set_xlim([0,400])
ax.set_title('Skin friction')
ax.legend(loc="best")
ax.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
ax.grid()
fig.savefig('skin_friction.pdf', bbox_inches='tight')

ax1.set_xlabel(r'$x_0$', fontsize=20)
ax1.set_xlim(-10)
ax1.grid()
ax1.set_ylabel(r'$\frac{P_w}{P_1}$', fontsize=22)
ax1.set_title('Normalized wall pressure')
ax1.legend(loc="best")
fig1.savefig("wall_pressure.pdf", bbox_inches='tight')

plt.show()
