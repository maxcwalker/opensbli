import numpy as np
import matplotlib.pyplot as plt
import matplotlib
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset

# Set LaTeX-style fonts
matplotlib.rcParams["text.usetex"] = True
plt.rcParams.update({
    "text.usetex": True,
    "font.family": "serif",
    "font.serif": ["Computer Modern Roman"]
})

# Directory containing the .dat files
directory = './'

# Define colors and line styles from the original script
line_colors = ['r', 'g', 'r', 'g', 'green', 'c']
line_styles = ['-', '--', '--', '-', '-', '--']
legend_names = [r'Mach4 1.37Tw/T$\infty$', r'Mach5 1.95Tw/T$\infty$', r'Mach4 1.95Tw/T$\infty$', r'Mach5 1.37Tw/T$\infty$']


# Plot Skin Friction
def plot_skin_friction():
    data = np.loadtxt(directory + "skin_friction.dat", comments="#")
    fig, ax = plt.subplots(figsize=(10, 4))
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(data)):
        if data[i, 0] < data[i - 1, 0]:  # Detect new grid
            ax.plot(data[start_idx:i, 0], data[start_idx:i, 1],
                    line_styles[legend_idx % len(line_styles)],
                    color=line_colors[legend_idx % len(line_colors)],
                    label=legend_names[legend_idx % len(legend_names)])
            start_idx = i
            legend_idx += 1

    # Plot the last segment
    ax.plot(data[start_idx:, 0], data[start_idx:, 1],
            line_styles[legend_idx % len(line_styles)],
            color=line_colors[legend_idx % len(line_colors)],
            label=legend_names[legend_idx % len(legend_names)])

    ax.set_xlabel(r"$x$", fontsize=14)
    ax.set_ylabel(r"$C_f$", fontsize=14)
    ax.legend(fontsize=12, loc="lower right")
    ax.set_xlim([0,400])
    ax.grid()
    # fig.tight_layout()
    fig.savefig(directory + "skin_friction.pdf", bbox_inches="tight")
    plt.close(fig)

# Plot Wall Pressure
def plot_wall_pressure():
    data = np.loadtxt(directory + "wall_pressure.dat", comments="#")
    fig, ax = plt.subplots(figsize=(10, 4))
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(data)):
        if data[i, 0] < data[i - 1, 0]:  # Detect new grid
            ax.plot(data[start_idx:i, 0], data[start_idx:i, 1],
                    line_styles[legend_idx % len(line_styles)],
                    color=line_colors[legend_idx % len(line_colors)],
                    label=legend_names[legend_idx % len(legend_names)])
            start_idx = i
            legend_idx += 1

    # Plot the last segment
    ax.plot(data[start_idx:, 0], data[start_idx:, 1],
            line_styles[legend_idx % len(line_styles)],
            color=line_colors[legend_idx % len(line_colors)],
            label=legend_names[legend_idx % len(legend_names)])

    ax.set_xlabel(r"$x$", fontsize=14)
    ax.set_ylabel(r"$P_w / P_1$", fontsize=14)
    ax.legend(fontsize=12, loc="best")
    ax.set_xlim([0,400])
    ax.grid()
    fig.savefig(directory + "wall_pressure.pdf", bbox_inches="tight")
    plt.close(fig)



# Plot Minimum Velocity
def plot_min_velocity():
    data = np.loadtxt(directory + "min_vel.dat", comments="#")
    fig, ax = plt.subplots(figsize=(10, 3))
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(data)):
        if data[i, 0] < data[i - 1, 0]:  # Detect new grid
            ax.plot(data[start_idx:i, 0], data[start_idx:i, 1],
                    line_styles[legend_idx % len(line_styles)],
                    color=line_colors[legend_idx % len(line_colors)],
                    label=legend_names[legend_idx % len(legend_names)])
            start_idx = i
            legend_idx += 1

    # Plot the last segment
    ax.plot(data[start_idx:, 0], data[start_idx:, 1],
            line_styles[legend_idx % len(line_styles)],
            color=line_colors[legend_idx % len(line_colors)],
            label=legend_names[legend_idx % len(legend_names)])
    ax.set_ylim(0)
    ax.set_xlabel(r"$x$", fontsize=14)
    ax.set_ylabel(r"$u_r \ [\%]$", fontsize=14)
    ax.legend(fontsize=12, loc="lower right")
    ax.set_xlim([0, 400])
    ax.grid()
    fig.savefig(directory + "min_velocity.pdf", bbox_inches="tight")
    plt.close(fig)

# Generate all plots
plot_skin_friction()
plot_wall_pressure()
plot_min_velocity()

