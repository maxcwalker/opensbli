import numpy as np
from scipy.interpolate import griddata
import matplotlib.pyplot as plt

# Sample data (replace this with your actual data)
data = np.loadtxt('new_output.dat')
data = data.astype(float)
# Extracting the x, y, z values
x = data[:, 0]
y = data[:, 1]
z = data[:, 2]

# Define new uniform grid ranges
x_uniform = np.linspace(min(x), max(x), 100)
z_uniform = np.linspace(min(z), max(z), 100)

# Create a meshgrid for the new coordinates
X_uniform, Z_uniform = np.meshgrid(x_uniform, z_uniform)

# Perform the interpolation
Y_interpolated = griddata((x, z), y, (X_uniform, Z_uniform), method='linear')

# Flatten the arrays for saving and plotting
x_flat = X_uniform.flatten()
z_flat = Z_uniform.flatten()
y_flat = Y_interpolated.flatten()

# Write the new coordinates and interpolated values to a file
with open('interpolated_data.txt', 'w') as f:
    f.write("x y z\n")
    for xi, yi, zi in zip(x_flat, y_flat, z_flat):
        f.write(f"{xi:.6f} {yi:.6f} {zi:.6f}\n")

# Scatter plot of the new interpolated data
plt.scatter(x_flat, z_flat, c=y_flat, cmap='viridis')
plt.colorbar(label='Interpolated y values')
plt.xlabel('x')
plt.ylabel('z')
plt.title('Scatter Plot of Interpolated Data')
plt.show()
