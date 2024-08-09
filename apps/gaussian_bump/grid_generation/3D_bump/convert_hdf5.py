import numpy as np
import h5py
from opensbli import *

def apply_group_attributes(group, block):
    group.attrs.create("dims", [block.ndim], dtype="int32")
    group.attrs.create("ops_type", u"ops_block",dtype="S8")
    group.attrs.create("index", [block.blocknumber], dtype="int32")
    return

def set_hdf5_metadata(dset, halos, npoints, block):
    """ Function to set hdf5 metadata required by OPS to a dataset. """
    d_m = halos[0]
    d_p = halos[1]

    dset.attrs.create("d_p", d_p, dtype="int32")
    dset.attrs.create("d_m", d_m, dtype="int32")
    dset.attrs.create("dim", [1], dtype="int32")
    dset.attrs.create("ops_type", u"ops_dat",dtype="S10")
    dset.attrs.create("block_index", [block.blocknumber], dtype="int32")
    dset.attrs.create("base", [0 for i in range(block.ndim)], dtype="int32")
    dset.attrs.create("type", u"double",dtype="S15")
    dset.attrs.create("block", u"%s" % block.blockname,dtype="S25")
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
    # Create an array with zeros padded around the data
    shape = [nz] + list(x.shape)
    print(shape)
    new_shape = tuple([shape[i] + 2 * nhalo for i in range(ndim)])
    print("Reversed shape for C-style indexing", new_shape)
    # Full arrays with halo points on the outside
    full_x = np.zeros(new_shape)
    full_y = np.zeros(new_shape)
    full_z = np.zeros(new_shape)

    # Fill out the interior data
    # Create slices of the interior points to reuse (Nz, Ny, Nz) (they have been transposed into C style)
    x_slice = np.s_[nhalo:new_shape[2] - nhalo]
    y_slice = np.s_[nhalo:new_shape[1] - nhalo]
    z_slice = np.s_[nhalo:new_shape[0] - nhalo]

    # Filling out the full data
    for k in range(new_shape[0]):
        full_x[k, y_slice, x_slice] = x
        full_y[k, y_slice, x_slice] = y
        full_z[k, y_slice, x_slice] = z

    # Halo filling logic for x, y, and z remains unchanged
    for k in range(new_shape[0]):
        # bottom
        dx1 = np.abs((full_x[k, 6, x_slice] - full_x[k, 5, x_slice]))
        full_x[k, 4, x_slice] = full_x[k, 5, x_slice] + dx1
        full_x[k, 3, x_slice] = full_x[k, 5, x_slice] + 2 * dx1
        full_x[k, 2, x_slice] = full_x[k, 5, x_slice] + 3 * dx1
        full_x[k, 1, x_slice] = full_x[k, 5, x_slice] + 4 * dx1
        full_x[k, 0, x_slice] = full_x[k, 5, x_slice] + 5 * dx1

        # right
        dx = np.abs((full_x[k, y_slice, -7] - full_x[k, y_slice, -6]))
        full_x[k, y_slice, -5] = full_x[k, y_slice, -6] + dx
        full_x[k, y_slice, -4] = full_x[k, y_slice, -5] + dx
        full_x[k, y_slice, -3] = full_x[k, y_slice, -4] + dx
        full_x[k, y_slice, -2] = full_x[k, y_slice, -3] + dx
        full_x[k, y_slice, -1] = full_x[k, y_slice, -2] + dx

        # left
        dx = np.abs((full_x[k, y_slice, 6] - full_x[k, y_slice, 5]))
        full_x[k, y_slice, 4] = -full_x[k, y_slice, 5] + dx
        full_x[k, y_slice, 3] = full_x[k, y_slice, 5] - 2 * dx
        full_x[k, y_slice, 2] = full_x[k, y_slice, 5] - 3 * dx
        full_x[k, y_slice, 1] = full_x[k, y_slice, 5] - 4 * dx
        full_x[k, y_slice, 0] = full_x[k, y_slice, 5] - 5 * dx

        # Top
        dx = np.abs((full_x[k, -7, x_slice] - full_x[k, -6, x_slice]))
        full_x[k, -5, x_slice] = full_x[k, -6, x_slice] + dx
        full_x[k, -4, x_slice] = full_x[k, -5, x_slice] + dx
        full_x[k, -3, x_slice] = full_x[k, -4, x_slice] + dx
        full_x[k, -2, x_slice] = full_x[k, -3, x_slice] + dx
        full_x[k, -1, x_slice] = full_x[k, -2, x_slice] + dx

        # for y
        # bottom
        dy1 = np.abs((full_y[k, 6, x_slice] - full_y[k, 5, x_slice]))
        full_y[k, 4, x_slice] = full_y[k, 5, x_slice] - dy1
        full_y[k, 3, x_slice] = full_y[k, 5, x_slice] - 2 * dy1
        full_y[k, 2, x_slice] = full_y[k, 5, x_slice] - 3 * dy1
        full_y[k, 1, x_slice] = full_y[k, 5, x_slice] - 4 * dy1
        full_y[k, 0, x_slice] = full_y[k, 5, x_slice] - 5 * dy1

        # right
        dy = np.abs((full_y[k, y_slice, -7] - full_y[k, y_slice, -6]))
        full_y[k, y_slice, -5] = full_y[k, y_slice, -6] + dy
        full_y[k, y_slice, -4] = full_y[k, y_slice, -5] + dy
        full_y[k, y_slice, -3] = full_y[k, y_slice, -4] + dy
        full_y[k, y_slice, -2] = full_y[k, y_slice, -3] + dy
        full_y[k, y_slice, -1] = full_y[k, y_slice, -2] + dy

        # left
        dy = np.abs((full_y[k, y_slice, 6] - full_y[k, y_slice, 5]))
        full_y[k, y_slice, 4] = full_y[k, y_slice, 5] + dy
        full_y[k, y_slice, 3] = full_y[k, y_slice, 5] + 2 * dy
        full_y[k, y_slice, 2] = full_y[k, y_slice, 5] + 3 * dy
        full_y[k, y_slice, 1] = full_y[k, y_slice, 5] + 4 * dy
        full_y[k, y_slice, 0] = full_y[k, y_slice, 5] + 5 * dy

        # Top
        dy = np.abs((full_y[k, -7, x_slice] - full_y[k, -6, x_slice]))
        full_y[k, -5, x_slice] = full_y[k, -6, x_slice] + dy
        full_y[k, -4, x_slice] = full_y[k, -5, x_slice] + dy
        full_y[k, -3, x_slice] = full_y[k, -4, x_slice] + dy
        full_y[k, -2, x_slice] = full_y[k, -3, x_slice] + dy
        full_y[k, -1, x_slice] = full_y[k, -2, x_slice] + dy

        # for z
        # bottom
        dz1 = np.abs((full_z[k, 6, x_slice] - full_z[k, 5, x_slice]))
        full_z[k, 4, x_slice] = full_z[k, 5, x_slice] - dz1
        full_z[k, 3, x_slice] = full_z[k, 5, x_slice] - 2 * dz1
        full_z[k, 2, x_slice] = full_z[k, 5, x_slice] - 3 * dz1
        full_z[k, 1, x_slice] = full_z[k, 5, x_slice] - 4 * dz1
        full_z[k, 0, x_slice] = full_z[k, 5, x_slice] - 5 * dz1

        # right
        dz = np.abs((full_z[k, y_slice, -7] - full_z[k, y_slice, -6]))
        full_z[k, y_slice, -5] = full_z[k, y_slice, -6] + dz
        full_z[k, y_slice, -4] = full_z[k, y_slice, -5] + dz
        full_z[k, y_slice, -3] = full_z[k, y_slice, -4] + dz
        full_z[k, y_slice, -2] = full_z[k, y_slice, -3] + dz
        full_z[k, y_slice, -1] = full_z[k, y_slice, -2] + dz

        # left
        dz = np.abs((full_z[k, y_slice, 6] - full_z[k, y_slice, 5]))
        full_z[k, y_slice, 4] = full_z[k, y_slice, 5] + dz
        full_z[k, y_slice, 3] = full_z[k, y_slice, 5] + 2 * dz
        full_z[k, y_slice, 2] = full_z[k, y_slice, 5] + 3 * dz
        full_z[k, y_slice, 1] = full_z[k, y_slice, 5] + 4 * dz
        full_z[k, y_slice, 0] = full_z[k, y_slice, 5] + 5 * dz

        # Top
        dz = np.abs((full_z[k, -7, x_slice] - full_z[k, -6, x_slice]))
        full_z[k, -5, x_slice] = full_z[k, -6, x_slice] + dz
        full_z[k, -4, x_slice] = full_z[k, -5, x_slice] + dz
        full_z[k, -3, x_slice] = full_z[k, -4, x_slice] + dz
        full_z[k, -2, x_slice] = full_z[k, -3, x_slice] + dz
        full_z[k, -1, x_slice] = full_z[k, -2, x_slice] + dz

    # return the full coordinates
    return full_x, full_y, full_z

def read_data_file(filename):
    data = np.loadtxt(filename)
    x = data[:, 0].reshape(nx, ny)
    y = data[:, 1].reshape(nx, ny)
    z = data[:, 2].reshape(nx, ny)
    return x, y, z

# Parameters
nx = 50
ny = 50
nz = 30
ndim = 3
nhalo = 6

# Read data
x, y, z = read_data_file('new_output.dat')

# Allocate full data array with halo
block_data = {'x': x, 'y': y, 'z': z}

# Initialize Block
block = Block("main", 1, ndim)

# Fill coordinates including halo
full_x, full_y, full_z = fill_halo_coordinates(block_data, block.blocknumber)

# Save to HDF5
output_hdf5([full_x, full_y, full_z], ["x_coords", "y_coords", "z_coords"], [nhalo, nhalo], [nx, ny, nz], block)
