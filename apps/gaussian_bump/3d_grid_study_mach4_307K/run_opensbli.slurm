#!/bin/bash --login

#SBATCH --job-name=M4_307K
#SBATCH --nodes=500
#SBATCH --ntasks-per-node=128
#SBATCH --cpus-per-task=1
#SBATCH --time=24:00:00

# mail alert at start, end and abortion of execution
#SBATCH --mail-type=ALL
# send mail to this address
#SBATCH --mail-user=mcww1g22@soton.ac.uk

# Replace [budget code] below with your project code (e.g. t01)
#SBATCH --account=e01-Soton-Sand
#SBATCH --partition=standard
#SBATCH --qos=lowpriority

# Load the xthi module to get access to the xthi program
    module purge PrgEnv-cray
    module load load-epcc-module
    module load cmake/3.21.3
    module load PrgEnv-gnu
    module load cray-hdf5-parallel
    module list

export SRUN_CPUS_PER_TASK=$SLURM_CPUS_PER_TASK

# Change to directory from which job was submitted
EXECUTABLE=opensbli_mpi
WORKDIR="$SLURM_SUBMIT_DIR"
# Check if settings are valid for directory -> DONT CHANGE
if [ -d $WORKDIR ]; then
    echo "Change into working directory ${WORKDIR}"
    cd $WORKDIR
else
    echo "Directory ${WORKDIR} does not exist !"
    exit 1
fi
cd $WORKDIR

# srun launches the parallel program based on the SBATCH options
srun --distribution=block:block --hint=nomultithread $EXECUTABLE $WORKDIR &> out.txt.$SLURM_JOB_ID
