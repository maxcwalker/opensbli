import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import matplotlib

plt.style.use('classic')


def read_com(filename):
    data = np.genfromtxt(filename, 
                     skip_header=1,
                     delimiter=',')
    return data


data = read_com('monitor.log')


iter, time = data[:, 0], data[:, 1]

# probe locations
pt1, pt2, pt3, pt4, pt5, pt6, pt7 = data[:, 2], data[:, 3], data[:, 4], data[:, 5], data[:, 6], data[:, 7], data[:, 8]

plt.plot(iter,pt1)
plt.xlabel('Iteration')
plt.ylabel('Pressure')
plt.show()