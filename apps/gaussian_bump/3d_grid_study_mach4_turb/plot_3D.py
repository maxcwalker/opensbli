import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
import h5py
import os
import sys
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
        d_m = group["%s" % (dataset)].attrs['d_m']
        size = group["%s" % (dataset)].shape
        read_start = [abs(d) for d in d_m]
        read_end = [s - abs(d) for d, s in zip(d_m, size)]
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
        print("Grid size (x,y,z)  is: (%d, %d, %d)" % (x.shape[2], x.shape[1], x.shape[0]))
        return x, y, z

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
        u = rhou / rho
        v = rhov / rho
        w = rhow / rho
        p = (0.4) * (rhoE - 0.5 * (u ** 2 + v ** 2 + w ** 2) * rho)
        a = np.sqrt(1.4 * p / rho)
        M = np.sqrt(u ** 2 + v ** 2 + w ** 2) / a
        return rho, M

    def plot_3d(self, x, y, z, data, label):
        fig = plt.figure(figsize=(10, 7))
        ax = fig.add_subplot(111, projection='3d')
        ax.set_xlabel('x')
        ax.set_ylabel('y')
        ax.set_zlabel('z')

        # Set the view to be rotated by 180 degrees
        ax.view_init(elev=120, azim=260)

        # Downsample data for better performance
        sample_rate = 10
        x, y, z, data = x[::sample_rate, 0, ::sample_rate], y[::sample_rate, 0, ::sample_rate], z[::sample_rate, 0, ::sample_rate], data[::sample_rate, 0, ::sample_rate]

        # Calculate the ranges for each axis
        x_range = np.max(x) - np.min(x)
        y_range = np.max(y) - np.min(y)
        z_range = np.max(z) - np.min(z)

        # Determine the maximum range
        max_range = max(x_range, y_range, z_range)

        # Set the limits of each axis to be equal
        x_center = (np.max(x) + np.min(x)) / 2
        y_center = (np.max(y) + np.min(y)) / 2
        z_center = (np.max(z) + np.min(z)) / 2

        ax.set_xlim([x_center - max_range / 2, x_center + max_range / 2])
        ax.set_ylim([y_center - max_range / 2, y_center + max_range / 2])
        ax.set_zlim([z_center - max_range / 2, z_center + max_range / 2])

        # Plotting the data
        img = ax.scatter(x.flatten(), y.flatten(), z.flatten(), c=data.flatten(), cmap='jet', marker='o', s=5)

        fig.colorbar(img)
        plt.title(f'3D Visualization of {label}')
        fig.savefig(f'3D_plot_{label}.pdf')
        plt.show()

    def main_plot(self, fname):
        f, group1 = self.read_file(fname)
        self.x, self.y, self.z = self.extract_coordinates()
        rho, M = self.extract_flow_variables(group1)
        self.plot_3d(self.x, self.y, self.z, rho, 'rho')
        self.plot_3d(self.x, self.y, self.z, M, 'M')


class slice_plots(plotFunctions):
    def __init__(self):
        pass

    def extract_coordinates(self):
        f, group1 = self.read_file(fname)
        x = self.read_dataset(group1, "x0_B0")
        y = self.read_dataset(group1, "x1_B0")
        z = self.read_dataset(group1, "x2_B0")
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
        p = (0.4) * (rhoE - 0.5 * (u ** 2 + v ** 2 + w ** 2) * rho)
        a = np.sqrt(1.4 * p / rho)
        M = np.sqrt(u ** 2 + v ** 2 + w ** 2) / a
        return rho, M



    def plot_slice(self, x, y, data, plane, idx, label):
        fig, ax = plt.subplots(figsize=(10, 7))

        # Create a contourf plot to fill the contours
        contour = ax.contourf(x, y, data, cmap='jet')
        fig.colorbar(contour, ax=ax)

        # Set equal aspect ratio and labels
        ax.set_aspect('equal')
        ax.set_title(f'{label} on {plane}-plane at index {idx}')
        ax.set_xlabel(f'{plane[0]} axis')
        ax.set_ylabel(f'{plane[1]} axis')

        # Only create an inset for the z-y slice at index 750
        if plane == "z-y" and idx == 750:
            # Create an inset axis for the scatter plot
            inset_ax = inset_axes(ax, width="30%", height="30%", loc='upper left')  # You can change loc as needed
            
            # Define limits for the inset axis (adjust these based on your data)
            inset_ax.set_xlim(35, 65)  # Example limits for zooming in
            inset_ax.set_ylim(0, 20)    # Example limits for zooming in

            # Scatter plot for the inset axis
            scatter = inset_ax.scatter(x.flatten(), y.flatten(), c=data.flatten(), cmap='jet', edgecolors='k', marker='o', s=10)
            
            # Optionally set the title and labels for the inset
            inset_ax.set_title('Zoomed In Scatter')
            inset_ax.set_xlabel(f'{plane[0]} axis')
            inset_ax.set_ylabel(f'{plane[1]} axis')

            # Highlight the zoomed area on the main plot with a rectangle
            zoom_rect = patches.Rectangle((35, 0), 30, 20, linewidth=1, edgecolor='white', facecolor='none', linestyle='--')  # Adjust dimensions if needed
            ax.add_patch(zoom_rect)

        # Save the figure
        fig.savefig(directory + f'/{label}_slice_{plane}_{idx}.pdf')

        # Close the figure to free up memory
        plt.close(fig)


        # Save the figure
        fig.savefig(directory + f'/{label}_slice_{plane}_{idx}_scatter.pdf')


    def plot_slices(self, x, y, z, data, label):
        # Random indexes for slicing (replace these with correct values)
        x_slices = [10, 20, 30]  # z-y plane
        y_slices = [5, 15, 25]   # x-z plane
        z_slices = [3, 13, 23]   # x-y plane

        # Slicing along x (z-y plane)
        for idx in x_slices:
            self.plot_slice(z[:, :, idx], y[:, :, idx], data[:, :, idx], 'z-y', idx, label)

        # Slicing along y (x-z plane)
        for idx in y_slices:
            self.plot_slice(x[:, idx, :], z[:, idx, :], data[:, idx, :], 'x-z', idx, label)

        # Slicing along z (x-y plane)
        for idx in z_slices:
            self.plot_slice(x[idx, :, :], y[idx, :, :], data[idx, :, :], 'x-y', idx, label)

    def main_slice_plot(self, fname):
        f, group1 = self.read_file(fname)
        x, y, z = self.extract_coordinates()
        rho, M = self.extract_flow_variables(group1)
        self.plot_slices(x, y, z, rho, 'rho')
        self.plot_slices(x, y, z, M, 'M')


# Parameters
fname = sys.argv[1]
directory = './simulation_plots/'

if not os.path.exists(directory):
    os.makedirs(directory)

# Call plot classes independently
plots = plots_3D()
plots.main_plot(fname)

slice_plots = slice_plots()
slice_plots.main_slice_plot(fname)
