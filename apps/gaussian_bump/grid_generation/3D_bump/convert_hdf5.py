import numpy as np
import h5py
from opensbli import *

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
        if isinstance(block, MultiBlock):
            all_blocks = block.blocks
        else:
            all_blocks = [block]
        for b in all_blocks:
            g1 = hf.create_group(b.blockname)
            # Loop over all the dataset inputs and write to the hdf5 file
            for ar, name in zip(array, array_name):
                g1.attrs.create("dims", [b.ndim], dtype="int32")
                g1.attrs.create("ops_type", u"ops_block", dtype="S9")
                g1.attrs.create("index", [b.blocknumber], dtype="int32")
                block_dset_name = b.location_dataset(name).base
                dset = g1.create_dataset('%s' % (block_dset_name), data=ar)
                set_hdf5_metadata(dset, halos, npoints, b)
    return

def fill_halo_coordinates(block_data, block_number):
    x, y, z, h = block_data[block_number]['x'], block_data[block_number]['y'], block_data[block_number]['z'], block_data[block_number]['h']
    nz, ny, nx = x.shape
    shape = [nz + 2 * nhalo, ny + 2 * nhalo, nx + 2 * nhalo]
    
    # Initialize arrays with halos
    full_x = np.zeros(shape)
    full_y = np.zeros(shape)
    full_z = np.zeros(shape)
    full_h = np.zeros(shape)
    
    # Fill interior data
    full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo:nhalo+nx] = x
    full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo:nhalo+nx] = y
    full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo:nhalo+nx] = z
    full_h[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo:nhalo+nx] = h
    
    # Halo Handling for full_x
    for k in range(nz + 2 * nhalo):
        # sides (k < nhalo)
        if k < nhalo:
            full_x[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_x[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx] - (full_x[nhalo + 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_x[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx])
        # sides (k >= nz + nhalo)
        if k >= nz + nhalo:
            full_x[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_x[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] + (full_x[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_x[nz + nhalo - 2, nhalo:nhalo+ny, nhalo:nhalo+nx])
    
    for j in range(ny + 2 * nhalo):
        # top  (j < nhalo)
        if j < nhalo:
            full_x[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_x[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx] - (full_x[nhalo:nhalo+nz, nhalo + 1, nhalo:nhalo+nx] - full_x[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx])
        # bottom (j >= ny + nhalo)
        if j >= ny + nhalo:
            full_x[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_x[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] + (full_x[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] - full_x[nhalo:nhalo+nz, ny + nhalo - 2, nhalo:nhalo+nx])

    # Difference values for incremental adjustments
    left_diff = full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo + 1] - full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo]
    right_diff = full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] - full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 2]

    # Apply changes incrementally for the left and right halo regions
    for i in range(nx + 2 * nhalo):
        # Left (i < nhalo)
        if i < nhalo:
            full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = (full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo] - left_diff * (nhalo - i)) 

        # Right (i >= nx + nhalo)
        if i >= nx + nhalo:
            full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_x[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] + right_diff * (i - (nx + nhalo - 1))

    # Halo Handling for full_y
    for k in range(nz + 2 * nhalo):
        # side (k < nhalo)
        if k < nhalo:
            full_y[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_y[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx] - (full_y[nhalo + 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_y[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx])
        # side (k >= nz + nhalo)
        if k >= nz + nhalo:
            full_y[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_y[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] + (full_y[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_y[nz + nhalo - 2, nhalo:nhalo+ny, nhalo:nhalo+nx])
    
    # Difference values for incremental adjustments
    bottom_diff = full_y[nhalo:nhalo+nz, nhalo + 1, nhalo:nhalo+nx] - full_y[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx]
    top_diff = full_y[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] - full_y[nhalo:nhalo+nz, ny + nhalo - 2, nhalo:nhalo+nx]

    # Apply changes incrementally for the bottom and top halo regions
    for j in range(ny + 2 * nhalo):
        # Bottom (j < nhalo)
        if j < nhalo:
            full_y[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = (full_y[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx] - bottom_diff * (nhalo - j))

        # Top (j >= ny + nhalo)
        if j >= ny + nhalo:
            full_y[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_y[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] + top_diff * (j - (ny + nhalo - 1))

    for i in range(nx + 2 * nhalo):
        # Front (i < nhalo)
        if i < nhalo:
            full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo] - (full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo + 1] - full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo])
        # Back (i >= nx + nhalo)
        if i >= nx + nhalo:
            full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] + (full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] - full_y[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 2])

    # Difference values for incremental adjustments
    bottom_side_diff = full_z[nhalo + 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_z[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx]
    top_side_diff = full_z[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] - full_z[nz + nhalo - 2, nhalo:nhalo+ny, nhalo:nhalo+nx]

    # Apply changes incrementally for the sides in the z direction
    for k in range(nz + 2 * nhalo):
        # Bottom Side (k < nhalo)
        if k < nhalo:
            full_z[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = (full_z[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx] - bottom_side_diff * (nhalo - k))

        # Top Side (k >= nz + nhalo)
        if k >= nz + nhalo:
            full_z[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_z[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] + top_side_diff * (k - (nz + nhalo - 1))

    for j in range(ny + 2 * nhalo):
        # Left (j < nhalo)
        if j < nhalo:
            full_z[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_z[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx] - (full_z[nhalo:nhalo+nz, nhalo + 1, nhalo:nhalo+nx] - full_z[nhalo:nhalo+nz, nhalo, nhalo:nhalo+nx])
        # Right (j >= ny + nhalo)
        if j >= ny + nhalo:
            full_z[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_z[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] + (full_z[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] - full_z[nhalo:nhalo+nz, ny + nhalo - 2, nhalo:nhalo+nx])

    for i in range(nx + 2 * nhalo):
        # Front (i < nhalo)
        if i < nhalo:
            full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo] - (full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo + 1] - full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo])
        # Back (i >= nx + nhalo)
        if i >= nx + nhalo:
            full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] + (full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] - full_z[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 2])

    # Halo Handling for full_h
    for k in range(nz + 2 * nhalo):
        # Bottom (k < nhalo)
        if k < nhalo:
            full_h[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_h[nhalo, nhalo:nhalo+ny, nhalo:nhalo+nx] 
        # Top (k >= nz + nhalo)
        if k >= nz + nhalo:
            full_h[k, nhalo:nhalo+ny, nhalo:nhalo+nx] = full_h[nz + nhalo - 1, nhalo:nhalo+ny, nhalo:nhalo+nx] 
    
    for j in range(ny + 2 * nhalo):
        # Left (j < nhalo)
        if j < nhalo:
            full_h[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_h[nhalo:nhalo+nz, nhalo+1, nhalo:nhalo+nx] 
            # full_h[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = (nhalo-j)*full_h[nhalo:nhalo+nz, nhalo+1, nhalo:nhalo+nx] 
        # Right (j >= ny + nhalo)
        if j >= ny + nhalo:
            full_h[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_h[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] 
            # full_h[nhalo:nhalo+nz, j, nhalo:nhalo+nx] = full_h[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] + (j-nhalo-ny+1)*(full_h[nhalo:nhalo+nz, ny + nhalo - 1, nhalo:nhalo+nx] - full_h[nhalo:nhalo+nz, ny + nhalo - 2, nhalo:nhalo+nx])

    for i in range(nx + 2 * nhalo):
        # Front (i < nhalo)
        if i < nhalo:
            full_h[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_h[nhalo:nhalo+nz, nhalo:nhalo+ny, nhalo] 
        # Back (i >= nx + nhalo)
        if i >= nx + nhalo:
            full_h[nhalo:nhalo+nz, nhalo:nhalo+ny, i] = full_h[nhalo:nhalo+nz, nhalo:nhalo+ny, nx + nhalo - 1] 

    return full_x, full_y, full_z, full_h


def read_blocks(block_data):
    total_grid_points = 0
    for block_number, block in enumerate(input_files):
        print("\n\nReading from %s." % block)
        with open(block) as f:
            nx, ny, nz = map(int, f.readline().split())
        print("Nx, Ny, Nz from the input file for block %d:" % block_number, nx, ny, nz)
        
        # Read the data
        x, y, z = np.loadtxt(block, skiprows=1, unpack=True)
        x = x.reshape(nz, nx, ny)
        y = y.reshape(nz, nx, ny)
        z = z.reshape(nz, nx, ny)
        
        # Transpose to match desired order
        x = x.transpose((0, 2, 1))
        y = y.transpose((0, 2, 1))
        z = z.transpose((0, 2, 1))
        
        # Create h field using y[:, 0, :]
        h = np.tile(y[:, 0, :][:, np.newaxis, :], (1, ny, 1))

        shape = list(x.shape)
        total = shape[0] * shape[1] * shape[2]
        print("Block %d has %e grid points." % (block_number, int(total)))
        total_grid_points += total
        print("Original 3D shape: %s" % shape)
        
        # Save this block data to the dictionary
        block_data[block_number] = {'x': x, 'y': y, 'z': z, 'h': h}
    
    # Finish
    print("Total grid points: %g" % total_grid_points)
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


total_grid_points = 0

# Loop over all of the grid points
for block_number, block in enumerate(input_files):
    # Read all of the blocks at once
    if block_number == 0:
        print("Reading all of the x, y, z data for the %d blocks" % nblocks)
        read_blocks(block_data)

    x, y, z, h = block_data[block_number]['x'], block_data[block_number]['y'], block_data[block_number]['z'], block_data[block_number]['h'] 
    # Extend the coordinates into the halo points to avoid issues with the metric calculations
    full_x, full_y, full_z, full_h = fill_halo_coordinates(block_data, block_number)

    # Shape without halo points (Nx, Ny, Nz) required for OPS attribute, without halos
    OPS_shape = list(x.shape)[::-1]
    # Make an OpenSBLI block
    b = SimulationBlock(3, block_number=block_number)
    g1 = h5f.create_group(b.blockname)
    halo = [[-nhalo, -nhalo, -nhalo], [nhalo, nhalo, nhalo]]
    apply_group_attributes(g1, b)
    
    # Create x coordinates
    block_dset_name = b.location_dataset("x0").base
    print("OpenSBLI block shape without halo points: %s" % OPS_shape)
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

    # Create h coordinates
    block_dset_name = b.location_dataset("h0").base
    dset = g1.create_dataset('%s' % (block_dset_name), data=full_h)
    set_hdf5_metadata(dset, halos=halo, npoints=[OPS_shape[0], OPS_shape[1], OPS_shape[2]], block=b)
    
    print("Length in x for block %d:" % block_number, abs(np.amin(x) - np.amax(x)))
    print("Length in y for block %d:" % block_number, abs(np.amin(y) - np.amax(y)))
    print("Length in z for block %d:" % block_number, abs(np.amin(z) - np.amax(z)))

h5f.close()
