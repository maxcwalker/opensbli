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
line_colors = ['k', 'b', 'orange', 'y', 'green', 'c']
line_styles = ['-', '--', '-.', ':', '-', '--']
legend_names = ['1000x200x100', '1000x200x200', '1500x200x200', '1500x300x200', '2000x300x200']


# Plot Skin Friction
def plot_skin_friction():
    data = np.loadtxt(directory + "skin_friction.dat", comments="#")
    fig, ax = plt.subplots(figsize=(10, 4))
    axins1 = zoomed_inset_axes(ax, 5, loc=2)
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(data)):
        if data[i, 0] < data[i - 1, 0]:  # Detect new grid
            ax.plot(data[start_idx:i, 0], data[start_idx:i, 1],
                    line_styles[legend_idx % len(line_styles)],
                    color=line_colors[legend_idx % len(line_colors)],
                    label=legend_names[legend_idx % len(legend_names)])
            axins1.plot(data[start_idx:i, 0], data[start_idx:i, 1],
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
    axins1.plot(data[start_idx:, 0], data[start_idx:, 1],
            line_styles[legend_idx % len(line_styles)],
            color=line_colors[legend_idx % len(line_colors)],
            label=legend_names[legend_idx % len(legend_names)])



    mark_inset(ax, axins1, loc1=1, loc2=4, fc="none", ec="0.5")
    x1, x2, y1, y2 = 190, 210, 0.00175, 0.00201 # specify the limits
    axins1.set_xlim(x1, x2) # apply the x-limits
    axins1.set_ylim(y1, y2) # apply the y-limits 
    axins1.set_xticks([])
    axins1.set_yticks([])

    ax.set_xlabel(r"$x$", fontsize=14)
    ax.set_ylabel(r"$C_f$", fontsize=14)
    ax.legend(fontsize=12, loc="lower right")
    ax.ticklabel_format(style='sci', axis='y', scilimits=(0,0))
    ax.set_xlim([0,400])
    ax.grid()
    # fig.tight_layout()
    fig.savefig(directory + "skin_friction.pdf", bbox_inches="tight")
    plt.close(fig)

# Plot Wall Pressure
def plot_wall_pressure():
    data = np.loadtxt(directory + "wall_pressure.dat", comments="#")
    fig, ax = plt.subplots(figsize=(10, 4))
    axins1 = zoomed_inset_axes(ax, 5, loc=2)
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(data)):
        if data[i, 0] < data[i - 1, 0]:  # Detect new grid
            ax.plot(data[start_idx:i, 0], data[start_idx:i, 1],
                    line_styles[legend_idx % len(line_styles)],
                    color=line_colors[legend_idx % len(line_colors)],
                    label=legend_names[legend_idx % len(legend_names)])
            axins1.plot(data[start_idx:i, 0], data[start_idx:i, 1],
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
    axins1.plot(data[start_idx:, 0], data[start_idx:, 1],
            line_styles[legend_idx % len(line_styles)],
            color=line_colors[legend_idx % len(line_colors)],
            label=legend_names[legend_idx % len(legend_names)])


    mark_inset(ax, axins1, loc1=1, loc2=4, fc="none", ec="0.5")
    x1, x2, y1, y2 = 185, 200, 1.65,1.81 # specify the limits
    axins1.set_xlim(x1, x2) # apply the x-limits
    axins1.set_ylim(y1, y2) # apply the y-limits 
    axins1.set_xticks([])
    axins1.set_yticks([])

    ax.set_xlabel(r"$x$", fontsize=14)
    ax.set_ylabel(r"$P_w / P_1$", fontsize=14)
    ax.legend(fontsize=12, loc="best")
    ax.set_xlim([0,400])
    ax.grid()
    fig.savefig(directory + "wall_pressure.pdf", bbox_inches="tight")
    plt.close(fig)

# Plot Velocity and Temperature Profiles
def plot_profiles():
    vel_data = np.loadtxt(directory + "vel_profiles.dat", comments="#")
    temp_data = np.loadtxt(directory + "temp_profiles.dat", comments="#")

    # Velocity plot
    fig_vel, ax_vel = plt.subplots(figsize=(10, 5))
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(vel_data)):
        if vel_data[i, 0] < vel_data[i - 1, 0]:  # Detect new grid
            ax_vel.plot(vel_data[start_idx:i, 2], vel_data[start_idx:i, 1],
                        line_styles[legend_idx % len(line_styles)],
                        color=line_colors[legend_idx % len(line_colors)],
                        label=legend_names[legend_idx % len(legend_names)])
            start_idx = i
            legend_idx += 1

    # Plot the last segment
    ax_vel.plot(vel_data[start_idx:, 2], vel_data[start_idx:, 1],
                line_styles[legend_idx % len(line_styles)],
                color=line_colors[legend_idx % len(line_colors)],
                label=legend_names[legend_idx % len(legend_names)])

    ax_vel.set_xlabel(r"$u$", fontsize=14)
    ax_vel.set_ylabel(r"$y$", fontsize=14)
    ax_vel.legend(fontsize=12, loc="best")
    fig_vel.tight_layout()
    fig_vel.savefig(directory + "velocity_profiles.pdf", bbox_inches="tight")
    plt.close(fig_vel)

    # Temperature plot
    fig_temp, ax_temp = plt.subplots(figsize=(10, 5))
    start_idx = 0
    legend_idx = 0

    for i in range(1, len(temp_data)):
        if temp_data[i, 0] < temp_data[i - 1, 0]:  # Detect new grid
            ax_temp.plot(temp_data[start_idx:i, 2], temp_data[start_idx:i, 1],
                         line_styles[legend_idx % len(line_styles)],
                         color=line_colors[legend_idx % len(line_colors)],
                         label=legend_names[legend_idx % len(legend_names)])
            start_idx = i
            legend_idx += 1

    # Plot the last segment
    ax_temp.plot(temp_data[start_idx:, 2], temp_data[start_idx:, 1],
                 line_styles[legend_idx % len(line_styles)],
                 color=line_colors[legend_idx % len(line_colors)],
                 label=legend_names[legend_idx % len(legend_names)])

    ax_temp.set_xlabel(r"$T - T_{wall}$", fontsize=14)
    ax_temp.set_ylabel(r"$y$", fontsize=14)
    ax_temp.legend(fontsize=12, loc="best")
    fig_temp.tight_layout()
    fig_temp.savefig(directory + "temperature_profiles.pdf", bbox_inches="tight")
    plt.close(fig_temp)

# Generate all plots
plot_skin_friction()
plot_wall_pressure()
plot_profiles()
