import numpy as np
import h5py
#from opensbli import *

def apply_group_attributes(group, block):
    group.attrs.create("dims", [block.ndim], dtype="int32")
    group.attrs.create("ops_type", u"ops_block", dtype="S8")
    group.attrs.create("index", [block.blocknumber], dtype="int32")
    return

def set_hdf5_metadata(dset, halos, npoints, block):
    """ Function to set hdf5 metadata required by OPS to a dataset. """
    d_m = halos[0]
    d_p = halos[1]

    dset.attrs.create("d_p", d_p, dtype="int32")
    dset.attrs.create("d_m", d_m, dtype="int32")
    dset.attrs.create("dim", [1], dtype="int32")
    dset.attrs.create("ops_type", u"ops_dat", dtype="S10")
    dset.attrs.create("block_index", [block.blocknumber], dtype="int32")
    dset.attrs.create("base", [0 for i in range(block.ndim)], dtype="int32")
    dset.attrs.create("type", u"double", dtype="S15")
    dset.attrs.create("block", u"%s" % block.blockname, dtype="S25")
    dset.attrs.create("size", npoints, dtype="int32")
    return

def output_hdf5(array, array_name, halos, npoints, block):
    """ Creates an HDF5 file for reading in data to a simulation, 
    sets the metadata required by the OPS library. """
    if not isinstance(array, list):
        array = [array]
    if not isinstance(array_name, list):
        array_name = [array_name]
    assert len(array) == len(array_name)
    with h5py.File('data.h5', 'w') as hf:
        # Create a group
        if (isinstance(block, MultiBlock)):
            all_blocks = block.blocks
        else:
            all_blocks = [block]
        for b in all_blocks:
            g1 = hf.create_group(b.blockname)
            # Loop over all the dataset inputs and write to the hdf5 file
            for ar, name in zip(array, array_name):
                g1.attrs.create("dims", [b.ndim], dtype="int32")
                g1.attrs.create("ops_type", u"ops_block",dtype="S9")
                g1.attrs.create("index", [b.blocknumber], dtype="int32")
                block_dset_name = b.location_dataset(name).base
                dset = g1.create_dataset('%s' % (block_dset_name), data=ar)
                set_hdf5_metadata(dset, halos, npoints, b)
    return

def fill_halo_coordinates(block_data, block_number):
    x, y, z = block_data[block_number]['x'], block_data[block_number]['y'], block_data[block_number]['z']
    
    # The original shape of the arrays, assuming (nz, ny, nx)
    shape = list(x.shape)
    print("Original shape [nz, ny, nx]:", shape)
    
    # Corrected shape with halo points included (reversed for C-style indexing)
    new_shape = (shape[0] + 2 * nhalo, shape[1] + 2 * nhalo, shape[2] + 2 * nhalo)
    print("Corrected new shape with halos:", new_shape)
    
    # Full arrays with halo points on the outside
    full_x = np.zeros(new_shape)
    full_y = np.zeros(new_shape)
    full_z = np.zeros(new_shape)
    
    # Slices to insert the original data into the haloed array
    z_slice = np.s_[nhalo:nhalo + shape[0]]
    y_slice = np.s_[nhalo:nhalo + shape[1]]
    x_slice = np.s_[nhalo:nhalo + shape[2]]

    # Fill the interior data
    full_x[z_slice, y_slice, x_slice] = x
    full_y[z_slice, y_slice, x_slice] = y
    full_z[z_slice, y_slice, x_slice] = z
    
    # Replicate the interior values for the halo points in each direction
    # Fill halos in x direction
    full_x[:, :, :nhalo] = full_x[:, :, nhalo:nhalo+1]  # Left halo
    full_x[:, :, -nhalo:] = full_x[:, :, -nhalo-1:-nhalo]  # Right halo
    
    # Fill halos in y direction
    full_y[:, :nhalo, :] = full_y[:, nhalo:nhalo+1, :]  # Bottom halo
    full_y[:, -nhalo:, :] = full_y[:, -nhalo-1:-nhalo, :]  # Top halo
    
    # Fill halos in z direction
    full_z[:nhalo, :, :] = full_z[nhalo:nhalo+1, :, :]  # Front halo
    full_z[-nhalo:, :, :] = full_z[-nhalo-1:-nhalo, :, :]  # Back halo
    
    return full_x, full_y, full_z



def read_blocks(block_data):
    total_grid_points = 0
    for block_number, block in enumerate(input_files):
        print("\n\nReading from %s." % block)
        with open(block, 'r') as f:
            first_line = f.readline().strip().split()
            if len(first_line) != 3:
                raise ValueError(f"Expected 3 values in the first line for nx, ny, and nz, but got {len(first_line)}. Line content: {first_line}")
            try:
                nx, ny, nz = map(int, first_line)
            except ValueError:
                raise ValueError(f"Could not convert the first line values to integers. Line content: {first_line}")
            
        print(f"Nx, Ny, Nz from the input file for block {block_number}: {nx}, {ny}, {nz}")
        
        # Read the rest of the data
        data = np.loadtxt(block, skiprows=1)
        print(f"Raw data shape before reshaping: {data.shape}")
        
        # Calculate expected total number of points
        expected_points = nx * ny * nz
        if data.shape[0] != expected_points:
            raise ValueError(f"Mismatch between expected points ({expected_points}) and actual points ({data.shape[0]}).")

        # Ensure the correct shape order: (nz, ny, nx)
        x = data[:, 0].reshape(nz, ny, nx)
        y = data[:, 1].reshape(nz, ny, nx)
        z = data[:, 2].reshape(nz, ny, nx)
        print(f"Reshaped data shape (nz, ny, nx): {x.shape}")
        
        
        shape = list(x.shape)
        total = shape[0] * shape[1] * shape[2]
        print(f"Block {block_number} has {total:.2e} grid points.")
        total_grid_points += total
        print(f"Corrected 3D shape (nz, ny, nx): {shape}")
        
        # No need to transpose; save the data directly
        block_data[block_number] = {'x': x, 'y': y, 'z': z}
    
    print(f"Total grid points: {total_grid_points}")
    return





block_data = {}

# Specify the input grid files
input_files = ['new_output.dat']
# Number of halo points to add on each side of each direction (default 5)
nhalo = 5
ndim = 3
nblocks = len(input_files)
# Output grid file name
fname = "data.h5"
h5f = h5py.File(fname, 'w')

# Number of points in the periodic span.
nz = 50

sharp_TE = False

total_grid_points = 0

# Loop over all of the grid points
for block_number, block in enumerate(input_files):
    # Read all of the blocks at once
    if block_number == 0:
        print("Reading all of the x,y,z data for the %d blocks" % nblocks)
        read_blocks(block_data)

    x, y, z = block_data[block_number]['x'], block_data[block_number]['y'], block_data[block_number]['z']
    # Extend the coordinates into the halo points to avoid issues with the metric calculations
    full_x, full_y, full_z = fill_halo_coordinates(block_data, block_number)

    # Shape without halo points (Nx, Ny, Nz) required for OPS attribute, without halos
    OPS_shape = list(x.shape)[::-1]
    # Make an OpenSBLI block
    b = SimulationBlock(3, block_number=block_number)
    g1 = h5f.create_group(b.blockname)
    halo = [[-nhalo, -nhalo, -nhalo], [nhalo, nhalo, nhalo]]
    apply_group_attributes(g1, b)
    block_dset_name = b.location_dataset("x0").base
    print("OpenSBLI block shape without halo points: %s" % OPS_shape)
    # Create x coordinates
    dset = g1.create_dataset('%s' % (block_dset_name), data=full_x)
    set_hdf5_metadata(dset, halos=halo, npoints=[OPS_shape[0], OPS_shape[1], OPS_shape[2]], block=b)
    # Create y coordinates
    block_dset_name = b.location_dataset("x1").base
    dset = g1.create_dataset('%s' % (block_dset_name), data=full_y)
    set_hdf5_metadata(dset, halos=halo, npoints=[OPS_shape[0], OPS_shape[1], OPS_shape[2]], block=b)
    # Create z coordinates
    block_dset_name = b.location_dataset("x2").base
    dset = g1.create_dataset('%s' % (block_dset_name), data=full_z)
    set_hdf5_metadata(dset, halos=halo, npoints=[OPS_shape[0], OPS_shape[1], OPS_shape[2]], block=b)

h5f.close()
