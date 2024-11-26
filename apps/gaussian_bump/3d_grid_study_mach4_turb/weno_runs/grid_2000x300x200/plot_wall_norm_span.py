import numpy as np
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from matplotlib.ticker import FormatStrFormatter
import matplotlib.ticker as tkr
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes, mark_inset, inset_axes


# import matplotlib

 
# # change the axis to latex font (might have to install texlive and pip install latex)
# matplotlib.rcParams["text.usetex"] = True
 
# # pdf plot printing
# plt.rcParams.update({
# "text.usetex": True,
# "font.family": "serif",
# "font.serif": ["Computer Modern Roman"]})


# Function to plot the contour data from .dat files
def plot_contours_from_data(directory='./contour_data/', zoom=True):
    # Read the .dat files for contour data
    y_idx = [1, 20, 40, 60]  # Same y indices used for extraction
    for idx in y_idx:
        filename = f"{directory}/contour_data_y{idx}.dat"
        data = np.loadtxt(filename, skiprows=1)

        x_data = data[:, 0]
        z_data = data[:, 1]
        u_data = data[:, 2]

        # Find the number of times x resets to 0 (this indicates rows in the grid)
        x_zeros = np.where(np.diff(x_data) < 0)[0] + 1  # Index positions where x resets (i.e., drops below 0)
        nz = len(x_zeros) + 1
        nx = len(x_data) // nz

        u_grid = u_data.reshape(nz, nx)

        # Create the contour plot
        fig, ax = plt.subplots(figsize=(10, 6))

        contour = ax.contourf(x_data.reshape(nz, nx), z_data.reshape(nz, nx), u_grid, levels=50, cmap=cm.jet)
        ax.set_xlabel('x',fontsize=12)
        ax.set_ylabel('z',fontsize=12)

        if zoom:
            axins1 = zoomed_inset_axes(ax, 2,loc='upper center',bbox_to_anchor=(270,320))
        else:
            pass

        if zoom:
            # Finding the index for locations 100 and 200 (you may need to adjust these values based on your data)
            xp1, xp2 = int(nx / 400 * 100), int(nx / 400 * 200)
            try:
                zoom_contour = axins1.contourf(x_data.reshape(nz, nx), z_data.reshape(nz, nx),
                                               u_grid, levels=list(np.linspace(np.min(u_data[:,xp1:xp2]), 0, 5)) +
                                               list(np.linspace(0.001, np.max(u_data[:,xp1:xp2])+0.1, 25)), cmap=cm.jet)
                recirc = ax.contour(x_data.reshape(nz, nx), z_data.reshape(nz, nx), u_grid, levels=[0], colors='white', linewidths=0.5)
            except:
                zoom_contour = axins1.contourf(x_data.reshape(nz, nx), z_data.reshape(nz, nx),
                                               u_grid, levels=np.linspace(np.min(u_data), np.max(u_data), 30), cmap=cm.jet)
            
            axins1.set_xlim(x_data[xp1], x_data[xp2])  # Apply the x-limits for zoomed-in region
            axins1.set_ylim(np.min(z_data), np.max(z_data))
            axins1.tick_params(axis='both', which='major')

            cax1 = inset_axes(ax, width="60%", height="30%", loc='lower center',borderpad=-4)
            ubar=fig.colorbar(contour, orientation='horizontal', cax=cax1, format=tkr.FormatStrFormatter('%.2g'))
            ubar.ax.tick_params(labelsize=5)
            ubar.set_label("u velocity [zoomed axes]" ,fontsize=5)
            ax.set_aspect(1)

            mark_inset(ax, axins1, loc1=3, loc2=4, fc="none", ec="0.5")
            x1, x2 = 100, 200

            axins1.set_xlim(x1,x2) # apply the x-limits 
            axins1.tick_params(axis='both', which='major')

        else:
            cax1 = inset_axes(ax, width="60%", height="30%", loc='lower center', borderpad=-4)
            ubar = fig.colorbar(contour, orientation='horizontal', cax=cax1, format=FormatStrFormatter('%.2g'))
            ubar.ax.tick_params()
            ubar.set_label("u velocity")
            ax.set_aspect('equal')

        # Save the plot as an image
        plt.savefig(f"{directory}/contour_plot_y{idx}.pdf", bbox_inches='tight')
        plt.close()

    print("Contour plots saved as images.")

# Usage
plot_contours_from_data('./contour_data/')
