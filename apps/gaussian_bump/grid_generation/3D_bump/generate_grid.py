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
    # coordinates = coordinates[np.lexsort((coordinates[:, 2], coordinates[:, 0]))]

    x_column = coordinates[:, 0]
    z_column = coordinates[:, 2]
    
    # Identify the number of y points (rows before x changes)
    first_x_change_index = np.where(np.diff(x_column) != 0)[0]
    print(first_x_change_index)
    if len(first_x_change_index) == 0:
        raise ValueError("No change in x-coordinate found; unable to determine grid structure.")
    
    # Adding debug print to inspect the first_x_change_index
    print(f"First x change index: {first_x_change_index[0]}")
    
    num_y_points = first_x_change_index[0] + 1  # Number of y points

    # Identify the number of x points (rows before z changes)
    first_z_change_index = np.where(np.diff(z_column) != 0)[0]
    if len(first_z_change_index) == 0:
        raise ValueError("No change in z-coordinate found; unable to determine grid structure.")
    
    # Adding debug print to inspect the first_z_change_index
    print(f"First z change index: {first_z_change_index[0]}")
    
    num_x_points = (first_z_change_index[0] + 1) // num_y_points  # Number of x points
    
    # Debug prints to inspect calculated values
    print(f"Number of x points: {num_x_points}")
    print(f"Number of y points: {num_y_points}")
    
    if num_x_points <= 0 or num_y_points <= 0:
        raise ValueError("Invalid grid structure detected (zero or negative x or y points).")

    # Identify the number of z points
    total_points = len(coordinates)
    print("length of coords %.2f" %total_points )
    num_z_points = total_points // (num_x_points * num_y_points)  # Number of z points

    # Debug print to inspect calculated z points
    print(f"Total points: {total_points}")
    print(f"Number of z points: {num_z_points}")
    
    if num_z_points <= 0:
        raise ValueError("Invalid number of z points detected (zero or negative z points).")

    return num_x_points, num_y_points, num_z_points

def save_with_header(filename, data):
    try:
        num_x, num_y, num_z = calculate_counts_from_coordinates(data)
        num_coordinates = num_x * num_y * num_z
        header = (
            f"{num_x} {num_y} {num_z}"
        )
        np.savetxt(filename, data, fmt='%.6f', header=header, comments='')
    except ValueError as e:
        print(f"Error in calculating counts: {e}")

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
    filename = 'output_interpolated.dat'  # Replace with your output file name
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
