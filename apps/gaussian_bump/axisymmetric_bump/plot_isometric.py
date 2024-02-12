import numpy
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os
import sys
from matplotlib.colors import Normalize


class plotFunctions(object):
    def __init__(self):
        f=h5py.File(sys.argv[1], 'r')
        self.gama = f["gama"].value
        self.Mref= f["Minf"].value
        self.Lx = f["L"].value
        self.Nx = f["block0np0"].value
        self.Ny = f["block0np1"].value
        self.Nz = f["block0np2"].value
        return

    def contour_local(self, fig, levels0, label, variable):
        
        fig = plt.figure()
        ax = fig.add_subplot(111, projection='3d')

        # Set labels
        ax.set_xlabel(r"$x_0$", fontsize=15)
        ax.set_ylabel(r"$x_2$", fontsize=15)
        ax.set_zlabel(r"$x_1$", fontsize=15)
        x1, x2 = 150,250
        x1,x2= int(len(variable[0,0,:])/self.Lx *x1), int(len(variable[0,0,:])/self.Lx *x2)
        # Set plot limits
        # ax.set_xlim([x, 250])
        ax.set_zlim([0, 20])

        i = 20
        
        # Create a ScalarMappable to map colors
        norm = Normalize(variable[:, i, x1:x2].min(), variable[:, i, x1:x2].max())
        sm = plt.cm.ScalarMappable(cmap=cm.jet,norm=norm) #, norm=norm
        sm.set_array([])

        # Plot the surface with color based on density

        CS = ax.plot_surface(self.x[:, i, x1:x2], self.z[:, i, x1:x2], self.y[:, i, x1:x2], facecolors=cm.jet(norm(variable[:, i, x1:x2])), shade=True) #cividis
        ax.set_aspect('auto')

        # Add colorbar
        cbar = fig.colorbar(sm, shrink=0.5, aspect=8, pad=0.15)
        cbar.set_label(r"$%s$" % label, fontsize=10)
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


class plots_3D(plotFunctions):
    def __init__(self):
        self.Minf = 4.0
        self.Re = 4000
        self.RefT = 439.0
        self.SuthT = 110.4
        self.Tw = 1.37
        self.Ly = 115.0
        self.Lx = 400.0
        self.scale = 4.959043
        self.D11 = self.extract_metrics()
        self.Pr = 0.72

    def extract_coordinates(self):
        f, group1 = self.read_file(fname)
        x = self.read_dataset(group1, "x0_B0")
        y = self.read_dataset(group1, "x1_B0")
        z = self.read_dataset(group1, "x2_B0")
        dx, dy, dz = x[0, 0, 1], y[0, 1, 0], z[1,0,0]
        print("Grid size (x,y,z)  is: (%d, %d, %d)" % (x.shape[2], x.shape[1], x.shape[0]))
        print("First grid point dx: %f, dy: %f" % (dx, dy))
        dx, dy, dz = x[0,0, -1]-x[0,0, -2], y[0,-1, 0]-y[0,-2, 0], z[-1,0, 0]-z[-2,0, 0]
        print("Last grid point dx: %f, dy: %f" % (dx, dy))
        return x, y, z

    def viscous_length_scale(self, fname):
        f, group1 = self.read_file(fname)
        rho, u, v, rhoE, p, T, M, mu = self.extract_flow_variables(group1)
        Cf, tau_wall = self.compute_skin_friction(u, mu)
        # Wall viscosity all x points
        mu_wall = mu[0, 0, :]
        # print(rho[0,0,:])
        u_tau = numpy.sqrt(abs(tau_wall / rho[0,0,:])) # friction velocity
        # print(u_tau)
        dv = mu_wall / (rho[0,0,:]*u_tau)  # viscous length scale
        return dv, u_tau

    def extract_metrics(self):
        fname = sys.argv[1]
        f, group1 = self.read_file(fname)
        D11 = self.read_dataset(group1, "D11_B0")
        return D11

    def extract_flow_variables(self, group):
        rho = self.read_dataset(group, "rho_B0")
        rhou = self.read_dataset(group, "rhou0_B0")
        rhov = self.read_dataset(group, "rhou1_B0")
        rhow = self.read_dataset(group, "rhou2_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        u = rhou/rho
        v = rhov/rho
        w = rhow/rho
        p = (0.4)*(rhoE - 0.5*(u**2+v**2+w**2)*rho)
        a = numpy.sqrt(1.4*p/rho)
        M = numpy.sqrt(u**2 + v**2 + w**2)/a
        T = 1.4*(self.Minf**2)*p/rho
        mu = self.compute_viscosity(T)
        return rho, u, v, rhoE, p, T, M, mu

    def compute_wall_derivative(self, variable):
        ny = numpy.size(self.y[:, 0])
        Ly = self.Ly
        delta = Ly/(ny-1.0)
        D11 = self.D11[0, 0:6, :]
        var = variable[0, 0:6, :]
        coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
        coeffs = coeffs.reshape([6, 1])
        dudy = sum(D11*var*coeffs)/delta
        return dudy

    def compute_viscosity(self, T):
        mu = (T**(1.5)*(1.0+self.SuthT/self.RefT)/(T+self.SuthT/self.RefT))
        return mu


    def main_plot(self, fname, n_levels):
        f, group1 = self.read_file(fname)

        self.x, self.y, self.z = self.extract_coordinates()
        rho, u, v, rhoE, p, T, M, mu = self.extract_flow_variables(group1)

        variables = [rho, u, v, rhoE, p, M, T, mu]
        names = ["rho", "u", "v", "rhoE", "P", "M", "T", "mu"]
        # variables = [rho]
        # names = ["rho"]

        # Contour plots
        for var, name in zip(variables, names):
            min_val = numpy.min(var)
            max_val = numpy.max(var)
            levels = numpy.linspace(min_val, max_val, n_levels)
            print("%s" % name)
            print(levels)
            fig = plt.figure()
            self.contour_local(fig, levels, "%s" % name, var)
            plt.savefig(directory + "axisymmetric_bump_%s.pdf" % name, bbox_inches='tight')
            plt.clf()



fname = sys.argv[1]
n_contour_levels = 25
directory = './simulation_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)

plots = plots_3D()
plots.main_plot(fname, n_contour_levels)
