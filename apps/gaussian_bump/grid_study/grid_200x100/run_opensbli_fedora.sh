#!bin/bash
rm *.h5
eval "$(conda shell.bash hook)"
conda activate venv3
python $1
conda activate venv3
python $OPS_TRANSLATOR/ops.py opensbli.cpp
make clean
make opensbli_mpi
mpirun -np 6 ./opensbli_mpi
