import numpy as np
import matplotlib.pyplot as plt

def hyperbolic_sine_stretching(eta, a):
    return np.sinh(a * eta) / np.sinh(a)

def generate_y_coordinates(y_min, y_max, num_points, a):
    eta = np.linspace(0, 1, num_points)
    y_stretched = y_min + (y_max - y_min) * hyperbolic_sine_stretching(eta, a)
    return y_stretched

def reorder_and_generate_coordinates(filename, y_max, num_y_points, a):
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
    
    print("Generating new coordinate grid...")
    new_coordinates = []
    for z_val in unique_z:
        for x_val in unique_x:
            mask = (x == x_val) & (z == z_val)
            if not np.any(mask):
                continue
            y_min = min(y[mask])  # Find the y_min for the current (x, z) coordinate
            y_stretched = generate_y_coordinates(y_min, y_max, num_y_points, a)
            for y_val in y_stretched:
                new_coordinates.append([x_val, y_val, z_val])
    
    new_coordinates = np.array(new_coordinates)
    return new_coordinates

def calculate_counts_from_coordinates(coordinates):
    # Sort coordinates to make sure the counting logic works correctly
    coordinates = coordinates[np.lexsort((coordinates[:, 2], coordinates[:, 0]))]
    
    # Determine the number of y points
    num_y_points = len(np.unique(coordinates[:, 1]))  # Assume uniform number of y values per x-z
    
    # Determine the number of x and z points
    first_x_change_indices = np.where(np.diff(coordinates[:, 0], prepend=coordinates[0, 0]))[0]
    num_y = len(first_x_change_indices)  # Number of unique x values
    
    first_z_change_indices = np.where(np.diff(coordinates[:, 2], prepend=coordinates[0, 0]))[2]
    change_z = len(first_z_change_indices)
    num_x = change_z / num_y
    num_y_points_per_xz = num_y_points
    num_xz = num_x * num_y_points_per_xz
    num_z = 5
    
    return num_x, num_y_points, num_z

def save_with_header(filename, data):
    num_x, num_y, num_z = calculate_counts_from_coordinates(data)
    num_coordinates = num_x * num_y * num_z
    header = (
        f"Number of unique x values: {num_x}\n"
        f"Number of y points: {num_y}\n"
        f"Number of unique z values: {num_z}\n"
        f"Total number of coordinates: {num_coordinates}\n"
    )
    np.savetxt(filename, data, fmt='%.6f', header=header, comments='')

def plot_central_xy_plane(coordinates, title, y_max):
    unique_z = np.unique(coordinates[:, 2])
    central_z = unique_z[len(unique_z) // 2]
    
    central_plane_indices = coordinates[:, 2] == central_z
    central_plane_coords = coordinates[central_plane_indices]
    
    fig, ax = plt.subplots(1)
    ax.scatter(central_plane_coords[:, 0], central_plane_coords[:, 1], s=1, color='orange')
    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.set_xlim(0, 600)  # Adjust x-axis limit if necessary
    ax.set_ylim(0, y_max)  # Adjust y-axis limit to slightly above max y value
    ax.set_aspect('equal')
    fig.savefig("central_scatter.pdf")

if __name__ == "__main__":
    filename = 'output.dat'  # Replace with your output file name
    y_max = 300.0  # Maximum y coordinate (farfield)
    num_y_points = 100  # Number of points in the y direction
    a = 2.0  # Parameter for the hyperbolic sine function
    
    print("Loading original data...")
    coordinates = np.loadtxt(filename)
    coordinates = coordinates.astype(float)
    
    if coordinates.size == 0:
        print("No coordinates found in the file.")
    else:
        plot_central_xy_plane(coordinates, 'Original Scatter plot of the central x-y plane', y_max)

    new_coords = reorder_and_generate_coordinates(filename, y_max, num_y_points, a)
    
    if new_coords is not None:
        save_with_header('new_output.dat', new_coords)
        plot_central_xy_plane(new_coords, 'New Scatter plot of the central x-y plane', y_max)