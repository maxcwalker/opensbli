import numpy as np
from matplotlib import pyplot as plt


x = np.linspace(0,3,100)
h0 = 1
x01 = 1
x02 = 2
a = 0.1


h1 = h0 * np.exp(-((x - x01)/a)**2) + h0 * np.exp(-((x - x02)/a)**2)

plt.plot(x,h1)
plt.ylim([0,5])
plt.show()
