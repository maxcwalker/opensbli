#!/bin/bash
set -e
cd $OPS_INSTALL_PATH/c
<<COMMENT
if [ -x "$(command -v enroot)" ]; then
  cd -
  enroot start --root --mount $OPS_INSTALL_PATH/../:/tmp/OPS --rw cuda112hip sh -c 'cd /tmp/OPS/apps/c/TeaLeaf; ./test.sh'
  grep "PASSED" perf_out
  rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
  rm perf_out
  echo "All HIP complied applications PASSED"
fi

if [[ -v HIP_INSTALL_PATH ]]; then
  source ../../scripts/$SOURCE_HIP
  make -j -B
  cd -
  make clean
  rm -f .generated
  make tealeaf_hip tealeaf_mpi_hip -j
   
  echo '============> Running HIP'
  ./tealeaf_hip OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
  grep "Total Wall time" tea.out
  #grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
  grep "PASSED" tea.out
  rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
  rm -f tea.out
  
  echo '============> Running MPI+HIP'
  mpirun --allow-run-as-root -np 2 ./tealeaf_mpi_hip OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
  grep "Total Wall time" tea.out
  #grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
  grep "PASSED" tea.out
  rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
  rm -f tea.out
  echo "All HIP complied applications PASSED : Moving no to Intel Compiler Tests" > perf_out
  exit 0
fi
COMMENT
cd $OPS_INSTALL_PATH/c
source ../../scripts/$SOURCE_INTEL
make -j -B
cd $OPS_INSTALL_PATH/../apps/c/TeaLeaf/
./generate.sh
make clean
make IEEE=1 -j

#============================ Test Cloverleaf 2D With Intel Compilers==========================================================
#<<COMMENT
echo '============> Running OpenMP'
KMP_AFFINITY=compact OMP_NUM_THREADS=20 ./tealeaf_openmp > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running OpenMP with Tiling'
KMP_AFFINITY=compact OMP_NUM_THREADS=20 ./tealeaf_tiled OPS_TILING > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI+OpenMP'
export OMP_NUM_THREADS=2;$MPI_INSTALL_PATH/bin/mpirun -np 10 numawrap10 ./tealeaf_mpi_openmp > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

#echo '============> Running MPI_Inline with MPI+OpenMP'
#export OMP_NUM_THREADS=2;$MPI_INSTALL_PATH/bin/mpirun -np 10 ./tealeaf_mpi_inline > perf_out
#grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
#grep "PASSED" tea.out
#rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
#rm -f tea.out

echo '============> Running DEV_MPI'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_dev_mpi > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI_Tiled'
export OMP_NUM_THREADS=10;$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_tiled OPS_TILING OPS_TILING_MAXDEPTH=6 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out


#echo '============> Running MPI_Inline'
#export OMP_NUM_THREADS=1;$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi_inline > perf_out
#grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
#grep "PASSED" tea.out
#rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
#rm -f tea.out


echo '============> Running CUDA'
./tealeaf_cuda OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI+CUDA'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

#echo '============> Running MPI+CUDA with GPU-Direct'
#MV2_USE_CUDA=1 $MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda -gpudirect OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
#grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
#grep "PASSED" tea.out
#rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
#rm -f tea.out

echo '============> Running MPI+CUDA+Tiled'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda_tiled OPS_TILING OPS_TILING_MAXDEPTH=6 OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:   2952" -e "step:   2953" -e "step:   2954" -e "step:   2955" tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

<<COMMENT
echo '============> Running OpenCL on CPU'
./tealeaf_opencl OPS_CL_DEVICE=0 OPS_BLOCK_SIZE_X=512 OPS_BLOCK_SIZE_Y=1 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out
COMMENT


echo '============> Running OpenCL on GPU'
./tealeaf_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
./tealeaf_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

<<COMMENT
echo '============> Running MPI+OpenCL on CPU'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi_opencl OPS_CL_DEVICE=0  > perf_out
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi_opencl OPS_CL_DEVICE=0  > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out
COMMENT

echo '============> Running MPI+OpenCL on GPU'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

echo "All Intel complied applications PASSED : Moving on to PGI compiler tests "
#exit

#COMMENT
cd -
source ../../scripts/$SOURCE_PGI

make clean
make -j
cd -
make clean
make IEEE=1


#============================ Test Cloverleaf 2D With PGI Compilers==========================================================
echo '============> Running OpenMP'
KMP_AFFINITY=compact OMP_NUM_THREADS=20 ./tealeaf_openmp > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI+OpenMP'
export OMP_NUM_THREADS=2;$MPI_INSTALL_PATH/bin/mpirun -np 10 ./tealeaf_mpi_openmp > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running DEV_MPI'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_dev_mpi > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running CUDA'
./tealeaf_cuda OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

echo '============> Running MPI+CUDA'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

#echo '============> Running MPI+CUDA with GPU-Direct'
#MV2_USE_CUDA=1 $MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda -gpudirect OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
#grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
#grep "PASSED" tea.out
#rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
#rm -f tea.out

echo '============> Running MPI+CUDA+Tiled'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_cuda_tiled OPS_TILING OPS_TILING_MAXDEPTH=6 OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:   2952" -e "step:   2953" -e "step:   2954" -e "step:   2955" tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out

<<COMMENT
#echo '============> Running OpenCL on CPU'
./tealeaf_opencl OPS_CL_DEVICE=0 OPS_BLOCK_SIZE_X=512 OPS_BLOCK_SIZE_Y=1 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out
COMMENT

echo '============> Running OpenCL on GPU'
./tealeaf_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
./tealeaf_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

<<COMMENT
#echo '============> Running MPI+OpenCL on CPU'
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi_opencl OPS_CL_DEVICE=0  > perf_out
$MPI_INSTALL_PATH/bin/mpirun -np 20 ./tealeaf_mpi_opencl OPS_CL_DEVICE=0  > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out
COMMENT


echo '============> Running MPI+OpenCL on GPU'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_opencl OPS_CL_DEVICE=1 OPS_BLOCK_SIZE_X=32 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

echo '============> Running OpenACC'
./tealeaf_openacc OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

echo '============> Running MPI+OpenACC'
$MPI_INSTALL_PATH/bin/mpirun -np 2 ./tealeaf_mpi_openacc OPS_BLOCK_SIZE_X=64 OPS_BLOCK_SIZE_Y=4 > perf_out
grep "Total Wall time" tea.out
#grep -e "step:    86" -e "step:    87" -e "step:    88"  tea.out
grep "PASSED" tea.out
rc=$?; if [[ $rc != 0 ]]; then echo "TEST FAILED";exit $rc; fi
rm -f tea.out
rm perf_out

echo "All PGI complied applications PASSED : Exiting Test Script "
