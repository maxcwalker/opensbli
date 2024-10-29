import numpy as np
from scipy.interpolate import griddata
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Load and process the data
data = np.loadtxt('output.dat')
data = data.astype(float)

# Extracting the x, y, z values
x = data[:, 0]
y = data[:, 1]
z = data[:, 2]

# Define new uniform grid ranges
x_uniform = np.linspace(min(x), max(x), 1500) #change value to number of x points you want
z_uniform = np.linspace(min(z), max(z), 400)#change value to number of z points you want

# Create a meshgrid for the new coordinates
X_uniform, Z_uniform = np.meshgrid(x_uniform, z_uniform)

# Perform the interpolation
Y_interpolated = griddata((x, z), y, (X_uniform, Z_uniform), method='linear')

# Flatten the arrays for saving and plotting
x_flat = X_uniform.flatten()
z_flat = Z_uniform.flatten()
y_flat = Y_interpolated.flatten()

# Write the new coordinates and interpolated values to a file
with open('output_interpolated.dat', 'w') as f:
    for xi, yi, zi in zip(x_flat, y_flat, z_flat):
        f.write(f"{xi:.6f} {yi:.6f} {zi:.6f}\n")

# 3D Scatter plot of the new interpolated data
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
sc = ax.scatter(x_flat, y_flat, z_flat, c=y_flat, cmap='viridis', s=5)  # s parameter controls the size

# Set equal scaling for the axes
ax.set_box_aspect([np.ptp(x_flat), np.ptp(y_flat), np.ptp(z_flat)])  # Aspect ratio is proportional to the data range

# Add a color bar to show the scale of the interpolated y values
plt.colorbar(sc, label='Interpolated y values')

# Set labels
ax.set_xlabel('x')
ax.set_ylabel('y')
ax.set_zlabel('z')
ax.set_title('3D Scatter Plot of Interpolated Data')
fig.savefig('scatter_interpolated.pdf')
# Show the plot
# plt.show()
