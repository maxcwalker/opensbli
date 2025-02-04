import numpy as np
from scipy.interpolate import griddata, NearestNDInterpolator
import matplotlib.pyplot as plt

# Load and process the data
data = np.loadtxt('./output.dat')
data = data.astype(float)

# Extract the x, y, z values
x = data[:, 0]
y = data[:, 1]
z = data[:, 2]

# Define desired plate dimensions and grid resolution
plate_length = 400  # Desired length of the plate
plate_width = 160   # Desired width of the plate
num_x = 2000      # Number of points in x-direction
num_z = 1600      # Number of points in z-direction

# Calculate target grid spacing
delta_x = plate_length / num_x  # Grid spacing in x
delta_z = plate_width / num_z   # Grid spacing in z

# Compute current plate dimensions
current_length = max(x) - min(x)
current_width = max(z) - min(z)

# Calculate extra points needed for x and z directions
extra_length_x = plate_length - current_length
extra_width_z = plate_width - current_width

# Divide extra points proportionally for front/back and sides
add_front_x = int(80 / 400 * num_x)  # 80 units to the front
add_back_x = int(220 / 400 * num_x)  # 220 units to the back
add_side_z = int(extra_width_z / 2 / delta_z)  # Equal sides for z extension

# Extend the ranges
x_extended_min = min(x) - add_front_x * delta_x
x_extended_max = max(x) + add_back_x * delta_x
z_extended_min = min(z) - add_side_z * delta_z
z_extended_max = max(z) + add_side_z * delta_z

# Create new uniform grid ranges
x_uniform = np.linspace(x_extended_min, x_extended_max, num_x)
z_uniform = np.linspace(z_extended_min, z_extended_max, num_z)

# Print the grid details
print(f"Target grid spacing: Δx = {delta_x}, Δz = {delta_z}")
print(f"Extended x range: {x_extended_min} to {x_extended_max}, points: {num_x}")
print(f"Extended z range: {z_extended_min} to {z_extended_max}, points: {num_z}")

# Create a meshgrid for the new coordinates
X_uniform, Z_uniform = np.meshgrid(x_uniform, z_uniform)

# Perform interpolation with extrapolation
Y_interpolated = griddata((x, z), y, (X_uniform, Z_uniform), method='linear')
nearest_interpolator = NearestNDInterpolator((x, z), y)
Y_filled = np.where(np.isnan(Y_interpolated), nearest_interpolator(X_uniform, Z_uniform), Y_interpolated)

# Flatten the arrays for saving and plotting
x_flat = X_uniform.flatten()
z_flat = Z_uniform.flatten()
y_flat = Y_filled.flatten()

# Shift the entire grid so that (0, 0) is at the new front corner
x_flat_shifted = x_flat - x_flat.min()
z_flat_shifted = z_flat - z_flat.min()

# Write the new coordinates and interpolated values to a file
with open('output_interpolated_extended.dat', 'w') as f:
    for xi, yi, zi in zip(x_flat_shifted, y_flat, z_flat_shifted):
        f.write(f"{xi:.6f} {yi:.6f} {zi:.6f}\n")

print("x_flat_shifted range:", x_flat_shifted.min(), x_flat_shifted.max())
print("z_flat_shifted range:", z_flat_shifted.min(), z_flat_shifted.max())
# Print the grid details
print(f"Target grid spacing: Δx = {delta_x}, Δz = {delta_z}")
print(f"Extended x range: {x_extended_min} to {x_extended_max}, nx (points in x): {num_x}")
print(f"Extended z range: {z_extended_min} to {z_extended_max}, nz (points in z): {num_z}")
print(f"Current plate dimensions: Length = {current_length}, Width = {current_width}")
print(f"Extra points added: Front = {add_front_x}, Back = {add_back_x}, Sides (each) = {add_side_z}")


# 3D Scatter plot of the new interpolated data
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
sc = ax.scatter(x_flat_shifted[::4], z_flat_shifted[::4], c=y_flat[::4], cmap='viridis', s=5)
ax.set_xlim([x_flat_shifted.min(), x_flat_shifted.max()])
ax.set_ylim([z_flat_shifted.min(), z_flat_shifted.max()])
plt.colorbar(sc, label='Interpolated Value')
# plt.show()
