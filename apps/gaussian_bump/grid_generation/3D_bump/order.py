import numpy as np

def check_coordinate_order(filename):
    # Read the coordinates from the .dat file
    coordinates = np.loadtxt(filename)
    
    # Ensure the data is in float format
    coordinates = coordinates.astype(float)
    
    if coordinates.size == 0:
        print("No coordinates found in the file.")
        return
    
    # Extract x, y, z values
    x = coordinates[:, 0]
    y = coordinates[:, 1]
    z = coordinates[:, 2]
    print(z.max())
    
    # Sort coordinates for checking
    sorted_indices = np.lexsort((z, x))  # First by z, then by x
    sorted_coords = coordinates[sorted_indices]
    
    # Check if the sorted coordinates are in the same order as the original
    if np.array_equal(coordinates, sorted_coords):
        print("Coordinates are ordered by increasing x within each z level.")
    else:
        print("Coordinates are not ordered by increasing x within each z level.")
        
        # Check if the data is ordered by z within each x row
        x_sorted = np.sort(np.unique(x))
        z_sorted_within_x = True
        for x_val in x_sorted:
            z_vals = z[x == x_val]
            if not np.all(np.diff(z_vals) >= 0):
                z_sorted_within_x = False
                break
        
        if z_sorted_within_x:
            print("Coordinates are ordered by increasing z within each x row.")
        else:
            print("Coordinates are not ordered by increasing z within each x row.")

if __name__ == "__main__":
    filename = 'output.dat'  # Replace with your output file name
    check_coordinate_order(filename)
