import numpy as np
import matplotlib.pyplot as plt

# Parameters
bf = 0.2
x_ts = 220  # Assume center of Gaussian is at x_ts = 0 for simplicity
sigma = 1 / np.sqrt(2 * bf)
x = np.linspace(x_ts - 3 * sigma, x_ts + 3 * sigma, 500)  # x range for plotting

# Gaussian function
gaussian = np.exp(-bf * (x - x_ts)**2)

# Plot
plt.figure(figsize=(8, 6))
plt.plot(x, gaussian, label=r'$e^{-b_f (x_0 - x_{ts})^2}$', color='b')
plt.axvline(x_ts - 2 * sigma, color='r', linestyle='--', label=r'$\pm 2\sigma$ (Affected Region)')
plt.axvline(x_ts + 2 * sigma, color='r', linestyle='--')

# Highlight the affected region
plt.fill_between(x, gaussian, where=(x_ts - 2 * sigma <= x) & (x <= x_ts + 2 * sigma), color='red', alpha=0.3)

# Labels and Title
plt.title('Gaussian Disturbance in Streamwise Direction', fontsize=14)
plt.xlabel('Streamwise Distance (x)', fontsize=12)
plt.ylabel('Amplitude', fontsize=12)
plt.legend(loc='upper right')
plt.grid(True)
plt.savefig('dist.pdf')

# Show plot
plt.show()
