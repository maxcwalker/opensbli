import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from scipy.signal import find_peaks

# Read the CSV file
df = pd.read_csv('block0_monitor.log')
# Remove columns with NaN values
df = df.dropna(axis=1, how='all')   
# Add new columns
new_columns = ['Iter', 'Time', 'p_50', 'p_96', 'p_100', 'p_175', 'p_187', 'p_191', 'p_200', 'p_213', 'p_225', 'p_240', 'p_250', 'p_275', 'p_300', 'p_325', 'p_350', 'p_375', 'p_400', 'u_50', 'u_96', 'u_100', 'u_175', 'u_187', 'u_191', 'u_200', 'u_213', 'u_225', 'u_240', 'u_250', 'u_275', 'u_300', 'u_325', 'u_350', 'u_375', 'u_400']
df.columns = new_columns

val = new_columns[2]
# Compute the FFT
fft_result = np.fft.fft(df[val])
fft_magnitudes = np.abs(fft_result)  # Magnitudes of FFT result

# Frequency array corresponding to the FFT result
freqs = np.fft.fftfreq(len(df[val]))

# Exclude the DC component (frequency=0)
nonzero_indices = np.where(freqs != 0)
freqs = freqs[nonzero_indices]
fft_magnitudes = fft_magnitudes[nonzero_indices]


# Set the threshold for peak detection
threshold = 0.06 # Adjust as needed
# Find peaks in the Fourier transform
peaks, _ = find_peaks(fft_magnitudes, height=threshold)  # Adjust threshold as needed


# Plot the Fourier transform data
plt.figure(figsize=(10, 5))
plt.plot(freqs, fft_magnitudes,color='k')
plt.plot(freqs[peaks], fft_magnitudes[peaks], 'ro')  # Plot peaks
plt.title('Fourier Transform for monitor point at x=%s'% val[-3:])
plt.xlabel('Frequency')
plt.ylabel('Magnitude')
plt.grid(True)
plt.show()