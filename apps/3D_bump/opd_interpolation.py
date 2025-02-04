import numpy as np
from scipy.interpolate import griddata
from scipy.integrate import cumtrapz
import matplotlib.pyplot as plt
import h5py
import sys
import os


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
        print("Grid size (z,y,x):", x.shape)
        return x, y, z

    def extract_flow_variables(self, group):
        rho = self.read_dataset(group, "rho_B0")
        rhou = self.read_dataset(group, "rhou0_B0")
        rhov = self.read_dataset(group, "rhou1_B0")
        rhow = self.read_dataset(group, "rhou2_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        u = rhou / rho
        v = rhov / rho
        w = rhow / rho
        p = 0.4 * (rhoE - 0.5 * rho * (u**2 + v**2 + w**2))
        return rho, u, v, p

    def OPD_integration(self):
        # Load data from the file
        f, group1 = self.read_file(self.fname)
        x, y, z = self.extract_coordinates()
        rho, u, v, p = self.extract_flow_variables(group1)

        # Constants for refractive index calculation
        K_GD = 0.000293  # Gladstone-Dale constant

        # Define the OPD array
        OPD_contour = np.zeros((z.shape[0], y.shape[1]))

        # Loop over z and y locations
        for iz in range(z.shape[0]):
            for iy in range(y.shape[1]):
                # Extract x and rho values for this z, y location
                x_vals = x[iz, iy, :]
                rho_vals = rho[iz, iy, :]

                # Clip x and rho to x ≤ 58
                mask = x_vals <= 58
                x_vals = x_vals[mask]
                rho_vals = rho_vals[mask]

                # Compute refractive index profile
                n_vals = 1 + K_GD * rho_vals

                # Interpolate to a uniform x grid for integration
                x_min, x_max = np.min(x_vals), np.max(x_vals)
                x_uniform = np.linspace(x_min, x_max, 500)
                n_uniform = griddata(x_vals, n_vals, x_uniform, method='cubic')

                # Perform integration along x (upstream)
                OPL = cumtrapz(n_uniform, x=x_uniform, initial=0)
                OPL_free = cumtrapz(np.ones_like(x_uniform), x=x_uniform, initial=0)  # Free stream OPL
                OPD = OPL - OPL_free

                # Save the OPD value at the end of the integration
                OPD_contour[iz, iy] = OPD[-1] if x_max <= 58 else 0
        return OPD_contour
    

    def visualize_OPD(self, OPD_contour, y, z):
        # Create a z-y grid for plotting
        z_grid, y_grid = np.meshgrid(z[:, 0, 0], y[0, :, 0])

        # Plot the OPD contour
        plt.figure(figsize=(8, 6))
        plt.contourf(z_grid, y_grid, OPD_contour.T, levels=50, cmap='viridis')
        plt.colorbar(label='OPD')
        plt.xlabel('z')
        plt.ylabel('y')
        plt.title('Optical Path Difference (OPD)')
        plt.ylim([0, 10])
        plt.aspect('equal')
        plt.savefig("OPD.pdf", bbox_inches="tight")
        plt.show()

class plots_3D_check(plotFunctions):
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
        print("Grid size (z,y,x):", x.shape)
        return x, y, z

    def extract_flow_variables(self, group):
        rho = self.read_dataset(group, "rho_B0")
        rhou = self.read_dataset(group, "rhou0_B0")
        rhov = self.read_dataset(group, "rhou1_B0")
        rhow = self.read_dataset(group, "rhou2_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        u = rhou / rho
        v = rhov / rho
        w = rhow / rho
        p = 0.4 * (rhoE - 0.5 * rho * (u**2 + v**2 + w**2))
        return rho, u, v, p

    def check_straightness(self, x, y):
        # Mask for x ≤ 58
        mask = x <= 58
        x_clipped = x[mask]
        y_clipped = y[mask]

        # Remove duplicates
        unique_x, unique_indices = np.unique(x_clipped, return_index=True)
        unique_y = y_clipped[unique_indices]

        # Uniform x grid and interpolation
        x_uniform = np.linspace(unique_x.min(), unique_x.max(), 500)
        y_interpolated = griddata(unique_x, unique_y, x_uniform, method='linear')

        # Ideal straight line for comparison
        y_straight = np.linspace(y_interpolated.min(), y_interpolated.max(), len(x_uniform))

        # Deviation analysis
        deviation = np.abs(y_interpolated - y_straight)
        max_deviation = deviation.max()

        # Plot deviations
        plt.figure(figsize=(10, 6))
        plt.plot(x_uniform, y_interpolated, color="red", label="Interpolated Line")
        plt.plot(x_uniform, y_straight, color="blue", linestyle="--", label="Ideal Straight Line")
        plt.fill_between(x_uniform, y_interpolated, y_straight, color="gray", alpha=0.3, label="Deviation")
        plt.xlabel("x")
        plt.ylabel("y")
        plt.title(f"x-y Line Straightness Check\nMax Deviation: {max_deviation:.2f}")
        plt.legend()
        plt.savefig("straightness_check_updated.pdf", bbox_inches="tight")
        plt.show()

        print(f"Maximum deviation from the straight line: {max_deviation:.2f}")
        plt.savefig("check_Straight.pdf",bbox_inches="tight")



if __name__ == "__main__":
    fname = sys.argv[1]
    plots = plots_3D_check(fname)

    # Load coordinates and density
    x, y, z = plots.extract_coordinates()
    f, group = plots.read_file(fname)
    rho, _, _, _ = plots.extract_flow_variables(group)

    # Perform the straightness check
    plots.check_straightness(x, y)

    plots = plots_3D(fname)

    # Compute OPD
    OPD_contour = plots.OPD_integration()

    # Load coordinates for visualization
    x, y, z = plots.extract_coordinates()

    # Visualize OPD as a z-y plot
    plots.visualize_OPD(OPD_contour, y, z)

