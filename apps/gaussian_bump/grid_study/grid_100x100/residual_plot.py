import numpy as np
import h5py
import matplotlib.pyplot as plt
import matplotlib.cm as cm

plt.style.use('classic')


def read_com(filename):
    data = np.genfromtxt(filename, 
                     skip_header=1, skip_footer=1,
                     delimiter=',')
    points = np.genfromtxt(filename, delimiter=', p_B0', dtype=str, max_rows=1)
    points = points
    return data, points



data, points = read_com('monitor.log')

points = points[2:]

iter, time = data[:, 0], data[:, 1]

# probe locations
pt1, pt2, pt3, pt4, pt5, pt6, pt7 = data[:, 2], data[:, 3], data[:, 4], data[:, 5], data[:, 6], data[:, 7], data[:, 8]

# res1 = []
# res1 = [0]
# for i in range(len(pt1)-1):
#     print(i)

#     res1.append(pt1[i+1] - pt1[i])



plt.plot(iter,pt1,iter,pt2,iter,pt3,iter,pt4,iter,pt5,iter,pt6)
# plt.yscale('log')
plt.xlabel('Iteration')
plt.ylabel('Pressure [kg/m$^3$]')
plt.title('Residual plot')
plt.legend(points)
plt.grid()
plt.savefig('residuals_grid_100x100.pdf')
plt.show()