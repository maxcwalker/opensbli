#!/usr/bin/python
# --------------------------------------------------------------------------------------------------------------------------------------------
# split slice file into seperate files 
# fix: KeysViewHDF5
#
# author. gnsa1e21, 2023, extension from satya p jammy, 2017
# university of southampton
# --------------------------------------------------------------------------------------------------------------------------------------------
# from paraview import read_dataset, strip_halos, 
# Convert the output from OpenSBLI to the domain only by removing the halo points
# Author Satya P Jammy, 2017
# Requires numpy and h5py

import numpy as np
import h5py
import argparse
import os
import sys

def read_file(fname):
    f = h5py.File(fname, 'r')
    group = f["opensbliblock00/"]
    return f, group

def read_dataset(openname, dataset):
    d_m = openname["%s"%(dataset)].attrs['d_m']
    d_p = openname["%s"%(dataset)].attrs['d_p']
    size = openname["%s"%(dataset)].shape
    read_start = [abs(d) for d in d_m]
    read_end = [s-abs(d) for d,s in zip(d_m,size)]
    if len(read_end) == 2:
        read_data = openname["%s"%(dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1]]
    elif len(read_end) == 3:
        read_data = openname["%s"%(dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
    else:
        raise NotImplementedError("")
    return read_data, d_m, d_p

def write_to_hdf5(group, all_files):
    """Creates new HDF5 files for reading in data to a simulation,
    sets the metadata required by the OPS library."""
    dir_path = 'outputs_%s/'%input_file[:-3]
    written_files = set()  # Keep track of written files

    for file_name in all_files:
        print("Writing iteration %s to the HDF5 output file." % file_name)
        new_file_name = dir_path + 'opensbli_output_' + file_name.zfill(6) + '.h5'

        # Check if file already exists and delete it
        if os.path.exists(new_file_name):
            os.remove(new_file_name)
            print("Deleted existing file:", new_file_name)

        # Ensure unique file names
        while new_file_name in written_files:
            # If file name already exists, modify it slightly
            new_file_name = new_file_name.replace('.h5', '_new.h5')

        written_files.add(new_file_name)  # Add the new file name to the set of written files

        with h5py.File(new_file_name, 'w') as new_file:
            group00 = new_file.create_group("opensbliblock00")  # Create 'opensbliblock00' group
            for group_name, group_dataset in group.items():
                for dataset_name, dataset in group_dataset.items():
                    # Copy datasets from both "0" group and corresponding group to new file
                    if group_name == file_name or group_name == "0":
                        # Copy dataset
                        new_dataset = group00.create_dataset(dataset_name, data=dataset)

try:
    input_file = sys.argv[1]
except:
    input_file = 'I787.h5'
f, group = read_file(input_file)
all_files = [name for name in group.keys()]
directory='outputs_%s'%input_file[:-3]
if not os.path.exists(directory):
    os.makedirs(directory)


file_path = "./J20.h5"
#print('content of stats file":')
#with h5py.File(file_path, 'r') as f:
#    def print_all(name):
#        print(name)
#    f.visit(print_all)

write_to_hdf5(group, all_files)


