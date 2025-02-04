import matplotlib.pyplot as plt
import numpy as np
from scipy.interpolate import griddata

# Function to read the STL file, extract vertex lines, and remove duplicates
def process_stl_file(input_filename, output_filename):
    vertices = set()

    with open(input_filename, 'r') as file:
        for line in file:
            if line.strip().startswith("vertex"):
                # Extract the coordinates
                _, x, y, z = line.strip().split()
                x, y, z = float(x), float(y), float(z)
                # Adjust the y value
                y -= 0.000000000001
                # y -= 0.0
                # Add to the set to remove duplicates if y is greater than or equal to 0
                if y >= 0:
                    vertices.add((x, y, z))

    # Save unique vertices to .dat file
    with open(output_filename, 'w') as file:
        for vertex in vertices:
            file.write(f"{vertex[0]} {vertex[1]} {vertex[2]}\n")

    return vertices

# Function to scatter the STL coordinates and inspect ranges
def scatter_stl_coordinates(vertices):
    vertices_array = np.array(list(vertices))
    x = vertices_array[:, 0]
    z = vertices_array[:, 2]

    plt.figure(figsize=(8, 6))
    plt.scatter(x, z, alpha=0.5, edgecolor='k')
    plt.title('Scatter Plot of STL Coordinates (X vs Z)')
    plt.xlabel('X Coordinate')
    plt.ylabel('Z Coordinate')
    plt.grid(True)
    plt.axhline(0, color='gray', linestyle='--', linewidth=0.8)
    plt.axvline(0, color='gray', linestyle='--', linewidth=0.8)
    plt.show()

    print(f"X Range: min={x.min()}, max={x.max()}")
    print(f"Z Range: min={z.min()}, max={z.max()}")

# Function to create a scatter plot from the vertex data with rotation and aspect ratio 1
def create_contour_plot(vertices, elev=30, azim=130):
    vertices_array = np.array(list(vertices))
    x = vertices_array[:, 0]
    y = vertices_array[:, 1]
    z = vertices_array[:, 2]

    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')
    scatter = ax.scatter(x, y, z, c=y, cmap='viridis')
    ax.set_xlabel('X Coordinate')
    ax.set_ylabel('Y Coordinate')
    ax.set_zlabel('Z Coordinate')
    plt.title('Scatter Plot with Contours Based on Y Coordinate')
    
    # Add color bar
    cbar = plt.colorbar(scatter, ax=ax, pad=0.1)
    cbar.set_label('Y Value')

    # Rotate the view
    ax.view_init(elev=elev, azim=azim)

    # Set aspect ratio to 1
    max_range = np.array([x.max()-x.min(), y.max()-y.min(), z.max()-z.min()]).max()
    mid_x = (x.max()+x.min()) * 0.5
    mid_y = (y.max()+y.min()) * 0.5
    mid_z = (z.max()+z.min()) * 0.5
    ax.set_xlim(mid_x - max_range/2, mid_x + max_range/2)
    ax.set_ylim(mid_y - max_range/2, mid_y + max_range/2)
    ax.set_zlim(mid_z - max_range/2, mid_z + max_range/2)

    fig.savefig('scatter.pdf')
    plt.show()

# Main function
def main():
    input_filename = 'dome_geometry_flatPlate_30deg_h10.STL'  # Replace with your input STL file name
    output_filename = './output.dat'

    vertices = process_stl_file(input_filename, output_filename)
    
    # Scatter STL coordinates to inspect ranges
    scatter_stl_coordinates(vertices)
    
    # Create contour plot
    create_contour_plot(vertices)

if __name__ == "__main__":
    main()

