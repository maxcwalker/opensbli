import pandas as pd
import matplotlib.pyplot as plt 
from matplotlib.ticker import FormatStrFormatter
import os.path
from mpl_toolkits.axes_grid1.inset_locator import zoomed_inset_axes
from mpl_toolkits.axes_grid1.inset_locator import mark_inset, inset_axes


# Read the CSV file
df = pd.read_csv('block0_monitor.log')

print(df.shape)

