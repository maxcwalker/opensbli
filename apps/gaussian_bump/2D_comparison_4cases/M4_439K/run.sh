rm -rf *.h5
make clean
python gaussian_bump_2D_M4_439K.py
make opensbli_mpi
mpirun -np 1 opensbli_mpi