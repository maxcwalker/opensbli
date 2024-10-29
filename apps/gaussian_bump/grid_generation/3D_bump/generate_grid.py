import numpy as np
import matplotlib.pyplot as plt

def hyperbolic_sine_stretching(eta, a):
    return np.sinh(a * eta) / np.sinh(a)

def generate_y_coordinates(y_min, y_max, num_points, a):
    eta = np.linspace(0, 1, num_points)
    y_stretched = y_min + (y_max - y_min) * hyperbolic_sine_stretching(eta, a)
    return y_stretched

def reorder_and_generate_coordinates_incremental(filename, y_max, num_y_points, a, output_file):
    print("Loading coordinates from file...")
    coordinates = np.loadtxt(filename)
    coordinates = coordinates.astype(float)
    
    if coordinates.size == 0:
        print("No coordinates found in the file.")
        return None
    
    x = coordinates[:, 0]
    y = coordinates[:, 1]
    z = coordinates[:, 2]
    
    print("Sorting coordinates...")
    sorted_indices = np.lexsort((z, x))
    sorted_coords = coordinates[sorted_indices]
    
    unique_x = np.unique(x)
    unique_z = np.unique(z)

    # Calculate grid dimensions
    num_x_points = len(unique_x)
    num_z_points = len(unique_z)

    # Get the central z value
    central_z = unique_z[len(unique_z) // 2]
    central_plane_coords = []  # List to store central plane coordinates

    # Open file to write the output incrementally
    with open(output_file, 'w') as f:
        # Write header containing grid dimensions
        header = f"{num_x_points} {num_y_points} {num_z_points}"
        f.write(header + '\n')

        print("Generating and saving new coordinate grid incrementally...")
        for z_val in unique_z:
            print(f"{z_val} in length {unique_z[-1]:.2f}")
            for x_val in unique_x:
                mask = (x == x_val) & (z == z_val)
                if not np.any(mask):
                    continue
                y_min = min(y[mask])  # Find the y_min for the current (x, z) coordinate
                y_stretched = generate_y_coordinates(y_min, y_max, num_y_points, a)
                for y_val in y_stretched:
                    # Write the current coordinate to file
                    f.write(f"{x_val} {y_val} {z_val}\n")
                    # If the z_val is the central plane, store the coordinates
                    if z_val == central_z:
                        central_plane_coords.append([x_val, y_val, z_val])

    print(f"New coordinates saved to {output_file}")
    return np.array(central_plane_coords)  # Return the central plane coordinates

def plot_central_xy_plane(central_plane_coords, y_max):
    fig, ax = plt.subplots(1)
    ax.scatter(central_plane_coords[:, 0], central_plane_coords[:, 1], s=1, color='orange')
    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.set_xlim(0, 400)  # Adjust x-axis limit if necessary
    ax.set_ylim(0, y_max)  # Adjust y-axis limit to slightly above max y value
    ax.set_aspect('equal')
    fig.savefig("central_scatter.png")

if __name__ == "__main__":
    filename = 'output_interpolated.dat'  # Replace with your output file name
    output_file = 'new_output.dat'  # File to save the new coordinates
    y_max = 115.0  # Maximum y coordinate (farfield) LX1
    num_y_points = 400  # Number of points in the y direction
    a = 5.0  # Parameter for the hyperbolic sine function
    
    print("Loading original data...")
    coordinates = np.loadtxt(filename)
    coordinates = coordinates.astype(float)
    
    if coordinates.size == 0:
        print("No coordinates found in the file.")
    else:
        print("Generating stretched coordinates...")
        # Generate new coordinates and save the central plane coordinates
        central_plane_coords = reorder_and_generate_coordinates_incremental(filename, y_max, num_y_points, a, output_file)
        # Plot the central plane
        plot_central_xy_plane(central_plane_coords, y_max)
