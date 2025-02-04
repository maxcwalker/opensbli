import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import h5py
import os
import sys
from mpl_toolkits.axes_grid1 import make_axes_locatable
from mpl_toolkits.axes_grid1.inset_locator import inset_axes
import matplotlib.patches as patches


class plotFunctions(object):
    def __init__(self):
        return

    def read_file(self, fname):
        f = h5py.File(fname, 'r')
        group = f["opensbliblock00"]
        return f, group

    def read_dataset(self, group, dataset):
        d_m = group[f"{dataset}"].attrs['d_m']
        size = group[f"{dataset}"].shape
        read_start = [abs(d) for d in d_m]
        read_end = [s - abs(d) for d, s in zip(d_m, size)]
        if len(read_end) == 2:
            read_data = group[f"{dataset}"][read_start[0]:read_end[0], read_start[1]:read_end[1]]
        elif len(read_end) == 3:
            read_data = group[f"{dataset}"][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
        else:
            raise NotImplementedError("Unsupported dataset dimensionality.")
        return read_data


class plots_3D(plotFunctions):
    def __init__(self, fname):
        super().__init__()
        self.fname = fname
        with h5py.File(fname, 'r') as f:
            self.gama = f["gama"][:]
            self.Minf = f["Minf"][:]
            self.RefT = f["RefT"][:]
            self.SuthT = f["SuthT"][:]
            self.Re = f["Re"][:]
        print("Initialized with file:", fname)

    def extract_coordinates(self):
        f, group1 = self.read_file(self.fname)
        x = self.read_dataset(group1, "x0_B0")
        y = self.read_dataset(group1, "x1_B0")
        z = self.read_dataset(group1, "x2_B0")
        print("Grid size (x,y,z):", x.shape)
        return x, y, z

    def extract_flow_variables(self, group, span_locs):
        rho = self.read_dataset(group, "rho_B0")[span_locs, :, :]
        rhou = self.read_dataset(group, "rhou0_B0")[span_locs, :, :]
        rhov = self.read_dataset(group, "rhou1_B0")[span_locs, :, :]
        rhow = self.read_dataset(group, "rhou2_B0")[span_locs, :, :]
        rhoE = self.read_dataset(group, "rhoE_B0")[span_locs, :, :]
        u = rhou / rho
        v = rhov / rho
        w = rhow / rho
        p = 0.4 * (rhoE - 0.5 * rho * (u**2 + v**2 + w**2))
        return rho, u, v, p

    def compute_skin_friction(self, u, mu):
        mu_wall = mu[:, 0, :]
        dudy = np.gradient(u, axis=1)[:, 0, :]
        tau_wall = mu_wall * dudy
        Cf = tau_wall / (0.5 * self.Re)
        return Cf

    def plot_skin_friction_and_pressure(self, x, Cf, p, span_idx):
        plt.figure(figsize=(8,4))
        plt.plot(x[span_idx, 0, :], Cf[span_idx, :], label=f"Span {span_idx}",color="k")
        plt.axhline(y=0, color='black', linestyle='--', linewidth=1)
        plt.xlabel(r"$x$")
        plt.ylabel(r"$C_f$")
        plt.xlim([min(x[0,0,:]),max(x[0,0,:])])
        # plt.title("Skin Friction")
        plt.legend()
        plt.savefig(f"skin_friction_span_{span_idx}.pdf",bbox_inches='tight')
        plt.clf()

        plt.figure(figsize=(8,4))
        plt.plot(x[span_idx, 0, :], p[span_idx, 0, :] / p[span_idx, 0, 0], label=f"Span {span_idx}",color="k")
        plt.xlabel(r"$x$")
        plt.ylabel(r"$p/p_0$")
        plt.xlim([min(x[0,0,:]),max(x[0,0,:])])
        # plt.title("Wall Pressure")
        plt.legend()
        plt.savefig(f"wall_pressure_span_{span_idx}.pdf",bbox_inches='tight')
        plt.clf()

    def main_plot(self, span_locs):
        f, group1 = self.read_file(self.fname)
        x, y, z = self.extract_coordinates()
        rho, u, v, p = self.extract_flow_variables(group1, span_locs)
        mu = (self.RefT**1.5) * (1 + self.SuthT / self.RefT) / (rho * self.SuthT / self.RefT)
        Cf = self.compute_skin_friction(u, mu)

        for idx, span_idx in enumerate(span_locs):
            self.plot_skin_friction_and_pressure(x, Cf, p, idx)


# Example usage
if __name__ == "__main__":
    fname = sys.argv[1]
    directory = "./simulation_plots/"

    if not os.path.exists(directory):
        os.makedirs(directory)

    span_locs = [100]  # Example spanwise location indices
    plots = plots_3D(fname)
    plots.main_plot(span_locs)
