import numpy as np
import matplotlib.pyplot as plt

# Define grid size
nx = 600  # Number of points in x-direction
nz = 300  # Number of points in z-direction (but z is constant at 0 in this case)

# Define Gaussian bump parameters
H = 115
L = 400
x0 = L // 2  # Center of the bump along the x-axis
a = 20    # Width of the Gaussian bump
h0 = H / 20  # Height of the Gaussian bump
b = 5

# Create a regular grid in the x-direction
x = np.linspace(0, L, nx)
z = np.zeros((nz, nx))  # z is 0 everywhere

# Generate Gaussian bump starting from the lower wall (y=0)
h = h0 * np.exp(-((x - x0) / a) ** 2)

# Calculate y-coordinates
eta = np.linspace(0, 1, nz)
y = np.zeros((nz, nx))

for j, ypos in enumerate(eta):
    for i, bumph in enumerate(h):
        y[j, i] = bumph + ((H - bumph) * np.sinh(b * ypos)) / np.sinh(b)

# Create meshgrid for x and z
x, z = np.meshgrid(np.linspace(0, L, nx), np.linspace(0, 0, nz))

# Flatten the arrays column-wise for saving
data = np.column_stack((x.T.ravel(), y.T.ravel(), z.T.ravel()))

# Save to .dat file
header = f"{nx} {nz}"
np.savetxt('gaussian_bump.dat', data, header=header, comments='')

# Plot the scatter plot
plt.figure(figsize=(10, 6))
plt.scatter(x, y, c='blue', s=1)
# plt.title('Scatter Plot of the Gaussian Bump')
plt.xlabel('x')
plt.ylabel('y')
# plt.grid(True)
plt.show()
plt.gca().set_aspect('equal')
plt.savefig('scatter.pdf',bbox_inches='tight')