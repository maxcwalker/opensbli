import numpy as np

def check_coordinate_order(filename):
    # Load the coordinates from the .dat file
    data = np.loadtxt(filename)
    
    # Extract x, y, z values
    x = data[:, 0]
    y = data[:, 1]
    z = data[:, 2]
    
    # Reshape the arrays to the original grid shape
    nx = int(np.max(x) / (np.max(x) / (len(np.unique(x)))))
    nz = int(np.max(z) / (np.max(z) / (len(np.unique(z)))))
    
    x_grid = x.reshape((nz, nx))
    y_grid = y.reshape((nz, nx))
    z_grid = z.reshape((nz, nx))

    # Check if the ordering is correct
    x_order_correct = np.all(np.diff(x_grid, axis=1) >= 0)
    y_order_correct = np.all(np.diff(y_grid, axis=0) >= 0)
    z_order_correct = np.all(z_grid == 0)
    
    if x_order_correct and y_order_correct and z_order_correct:
        print("Coordinates are ordered correctly.")
    else:
        print("Coordinates are not ordered as expected.")

if __name__ == "__main__":
    filename = 'gaussian_bump.dat'  # Replace with your output file name
    check_coordinate_order(filename)
