import numpy
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os


def contour_local(self, fig, levels0, label, variable):
    ax1 = fig.add_subplot(1, 1, 1, aspect='equal')
    ax1.set_xlabel(r"$x_0$", fontsize=20)
    ax1.set_ylabel(r"$x_1$", fontsize=20)
    # ax1.set_xlim([0, 5])
    # ax1.set_ylim([0, 5])
    CS = ax1.contourf(self.x, self.y, variable, levels=levels0, cmap=cm.jet)
    divider = make_axes_locatable(ax1)
    cax1 = divider.append_axes("right", size="5%", pad=0.05)
    ticks_at = numpy.linspace(levels0[0], levels0[-1], 10)
    cbar = plt.colorbar(CS, cax=cax1, ticks=ticks_at, format='%.3f')
    cbar.ax.set_ylabel(r"$%s$" % label, fontsize=20)
    return

def read_file(self, fname):
    f = h5py.File(fname, 'r')
    group = f["opensbliblock00"]
    return f, group

def read_dataset(self, group, dataset):
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

def load_reference_data():
    reference = numpy.loadtxt('./reference_data.txt')
    x, cf, p = reference[:, 0], reference[:, 1], reference[:, 2]
    return x, cf, p

def extract_coordinates(self, x, y, fname):
    f, group1 = self.read_file(fname)
    x = self.read_dataset(group1, "x0_B0")
    y = self.read_dataset(group1, "x1_B0")
    dx, dy = x[0, 1], y[1, 0]
    print("Grid size (x,y)  is: (%f, %f)" % (x.shape[1], x.shape[0]))
    print("First grid point dx: %f, dy: %f" % (dx, dy))
    dx, dy = x[0, -1]-x[0, -2], y[-1, 0]-y[-2, 0]
    print("Last grid point dx: %f, dy: %f" % (dx, dy))
    return x, y

def compute_viscosity(T):
    RefT = 288.0
    SuthT = 110.4
    mu = (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT))
    return mu

def compute_skin_friction(u, mu):
    # Wall viscosity all x points
    mu_wall = mu[0, :]
    dudy = self.compute_wall_derivative(u)
    tau_wall = dudy*mu_wall
    Cf = tau_wall/(0.5*self.Re)
    return Cf

def extract_flow_variables(group):
    rho = read_dataset(group, "rho_B0")
    rhou = read_dataset(group, "rhou0_B0")
    rhov = read_dataset(group, "rhou1_B0")
    rhoE = read_dataset(group, "rhoE_B0")
    Minf = 2
    u = rhou/rho
    v = rhov/rho
    p = (0.4)*(rhoE - 0.5*(u**2+v**2)*rho)
    a = numpy.sqrt(1.4*p/rho)
    M = numpy.sqrt(u**2 + v**2)/a
    T = 1.4*(Minf**2)*p/rho
    mu = compute_viscosity(T)
    return rho, u, v, rhoE, p, T, M, mu


def SBLI_comparison(self, Cf, P):
    # Skin friction plot
    x, ref_cf, ref_p = self.load_reference_data()

    fig = plt.figure()
    ax = fig.add_subplot(111)
    ax.plot(x, ref_cf, color='r', linestyle='--', marker='o', markevery=15, markersize=5, label='Reference')

    ax.plot(self.x[1, :], Cf, color='k', label='OpenSBLI')
    ax.axhline(y=0.0, linestyle='--', color='k')

    ax.set_xlabel(r'$x_0$', fontsize=20)
    ax.set_ylabel(r'$C_f$', fontsize=20)
    ax.set_ylim([-0.004, 0.004])
    # ax.set_title('Skin friction')
    plt.legend(loc="best")
    ax.ticklabel_format(style='sci', axis='y', scilimits=(0, 0))
    fig.savefig('skin_friction.pdf', bbox_inches='tight')
    fig.clf()

    plt.plot(x, ref_p, color='r', linestyle='--', marker='o', markevery=15, markersize=5, label='Reference')
    plt.plot(self.x[1, :], P[0, :]/P[0, 0], color='k', label="OpenSBLI")
    # linestyle='', marker='o',markevery=10)
    plt.xlabel(r'$x_0$', fontsize=20)
    plt.ylabel(r'$\frac{P_w}{P_1}$', fontsize=22)
    plt.title('Normalized wall pressure')
    plt.legend(loc="best")
    plt.savefig("wall_pressure.pdf", bbox_inches='tight')
    plt.clf()
    return
    
 
fnames = ["opensbli_output_kappa0.1.h5", "opensbli_output_kappa0.3.h5", "opensbli_output_kappa0.9.h5"]


for i, file in enumerate(fnames):
    f, group = funcs.read_file(file)

    # x = funcs.read_dataset(group, "x0_B0")
    # y = funcs.read_dataset(group, "x1_B0")
    x, y = extract_coordinates(x, y, file)
    rho, u, v, rhoE, p, T, M, mu = extract_flow_variables(group1)