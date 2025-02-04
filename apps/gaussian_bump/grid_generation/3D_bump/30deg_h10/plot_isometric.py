import numpy as np
import matplotlib.pyplot as plt
import h5py
import os
import sys
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

    def extract_coordinates(self, fname):
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



    def plot_isometric_contours(self, x, y, z, data, label, directory, num_slices=5):
        fig = plt.figure(figsize=(12, 8))
        ax = fig.add_subplot(111, projection='3d')

        # Ensure the directory exists
        os.makedirs(directory, exist_ok=True)

        # Define specific slice indices for consistent testing
        slice_indices = [300, 500, 700, 900, 1100]

        for i, idx in enumerate(slice_indices):
            # Extract the full z-y slice at the given x index
            z_slice = z[:, :, idx]
            y_slice = y[:, :, idx]
            data_slice = data[:, :, idx]

            # Offset position along the x-axis (make sure it's positioned correctly)
            x_offset = x[0, 0, idx]

            # Add the contour slice directly into 3D space
            ax.contourf(
                z_slice, y_slice, data_slice, 
                cmap='jet', levels=20, alpha=0.8, offset=x_offset
            )

        # Add a colorbar
        mappable = plt.cm.ScalarMappable(cmap='jet')
        mappable.set_array(data)
        fig.colorbar(mappable, ax=ax, shrink=0.5, aspect=10)

        # Set axis labels
        ax.set_zlabel('x')
        ax.set_xlabel('z')
        ax.set_ylabel('y')

        # Calculate the maximum range of the data across all axes
        x_range = np.max(z) - np.min(z)
        y_range = np.max(y) - np.min(y)
        z_range = np.max(x) - np.min(x)

        # Find the maximum range to make all axes proportional
        max_range = max(x_range, y_range, z_range)

        # Optionally, set custom limits (modify these as needed)
        x_min, x_max = np.min(z), np.min(z) + max_range
        y_min, y_max = np.min(y), np.min(y) + max_range
        z_min, z_max = np.min(x), np.min(x) + max_range

        # ax.view_init(elev=30, azim=45)  # Adjust these values as needed

        # ax.view_init(elev=-60, azim=100)  
        # Set the view so you're looking directly down the z-axis, then tilt upwards
        # ax.view_init(elev=-65, azim=90)  
        ax.view_init(elev=-65, azim=80)  

        # Set the axis limits for each axis
        ax.set_xlim(0, 80)
        ax.set_ylim(0, 60)
        ax.set_zlim(x[0, 0, slice_indices[0]], x[0, 0, slice_indices[-1]])

        # Ensure equal aspect ratio for all axes
        ax.set_box_aspect([80/30, y_range/30, 200/50]) # z is the x axis, x is z 



        # Save the plot
        output_path = os.path.join(directory, f'{label}_isometric_contours.pdf')
        fig.savefig(output_path)

        # Display the figure
        plt.show()
        print(f"Saved isometric contour plot as: {output_path}")


    def main_isometric_plot(self, fname, directory):
        f, group1 = self.read_file(fname)
        x, y, z = self.extract_coordinates(fname)
        rho, M = self.extract_flow_variables(group1)

        # Create isometric contour plots for Mach number
        self.plot_isometric_contours(x, y, z, M, 'Mach_number', directory)


# Initialize the plotting class and call the main function
if __name__ == "__main__":
    # Parameters
    fname = sys.argv[1]

    directory = './simulation_plots/'

    if not os.path.exists(directory):
        os.makedirs(directory)

    slice_plots = plotFunctions()
    slice_plots.main_isometric_plot(fname, directory)
