import numpy
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os

plt.style.use('classic')

class calcs:
    def __init__(self):
        self.Ly = 115.0
        return
    
    def compute_wall_derivative(self, variable):
        ny = numpy.size(self.y[0, :, 0])
        Ly = self.Ly
        delta = Ly/(ny-1.0)
        D11 = self.D11[0:6, :]
        var = variable[0:6, :]
        coeffs = numpy.array([-1.83333333333334, 3.00000000000002, -1.50000000000003, 0.333333333333356, -8.34617916606957e-15, 1.06910884386911e-15])
        coeffs = coeffs.reshape([6, 1])
        dudy = sum(D11*var*coeffs)/delta
        return dudy
    
    def get_viscous_values(self, ):
        mu_wall = mu[0, 0, :]
        dudy = 
        tau_w = mu_wall*dudy