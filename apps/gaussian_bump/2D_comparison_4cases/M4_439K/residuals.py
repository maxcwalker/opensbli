import pandas as pd
import matplotlib.pyplot as plt
from matplotlib.ticker import ScalarFormatter
import os
import numpy as np

# Define the directory for saving plots
directory_monitor = 'plots_monitor/'
if not os.path.exists(directory_monitor):
    os.makedirs(directory_monitor)

# Read the CSV file
df = pd.read_csv('block0_monitor.log')

# Remove columns with NaN values
df = df.dropna(axis=1, how='all')

# Define new column names
new_columns = [
    'Iter', 'Time',
    
    # Pressure points
    'p_125_0', 'p_225_0', 'p_250_0', 'p_275_0', 'p_300_0', 'p_325_0', 'p_350_0', 
    'p_375_0', 'p_400_0', 'p_425_0', 'p_450_0', 'p_462_0', 'p_475_0', 'p_487_0', 
    'p_500_0', 'p_512_0', 'p_525_0', 'p_537_0', 'p_550_0', 'p_575_0', 'p_600_0', 
    'p_625_0', 'p_650_0', 'p_675_0', 'p_700_0', 'p_725_0', 'p_750_0', 'p_775_0', 
    'p_800_0', 'p_825_0', 'p_850_0', 'p_875_0', 'p_900_0', 'p_925_0', 'p_950_0', 
    'p_975_0', 'p_997_0',
    
    # rho*u points
    'rhou_125_1', 'rhou_225_1', 'rhou_250_1', 'rhou_275_1', 'rhou_300_1', 'rhou_325_1', 
    'rhou_350_1', 'rhou_375_1', 'rhou_400_1', 'rhou_425_1', 'rhou_450_1', 'rhou_462_1', 
    'rhou_475_1', 'rhou_487_1', 'rhou_500_1', 'rhou_512_1', 'rhou_525_1', 'rhou_537_1', 
    'rhou_550_1', 'rhou_575_1', 'rhou_600_1', 'rhou_625_1', 'rhou_650_1', 'rhou_675_1', 
    'rhou_700_1', 'rhou_725_1', 'rhou_750_1', 'rhou_775_1', 'rhou_800_1', 'rhou_825_1', 
    'rhou_850_1', 'rhou_875_1', 'rhou_900_1', 'rhou_925_1', 'rhou_950_1', 'rhou_975_1', 
    'rhou_997_1'
]

df.columns = new_columns

# Plot residuals function with a logarithmic y-axis
def plot_residuals(dataframe):
    # Use 'Iter' column for iteration numbers, and other columns for residuals
    iterations = dataframe['Iter'].to_numpy()
    
    # Calculate residuals as the difference between consecutive rows
    residuals = dataframe.iloc[:, 2:].diff().iloc[1:]
    residuals = residuals.iloc[:,20:25]
    print(np.shape(residuals))
    # Plot residuals for each pressure point as lines only, without fill
    plt.figure(figsize=(10, 6))
    for column in residuals.columns:
        # Ensure only lines are plotted without filling
        plt.scatter(iterations[1:], residuals[column].to_numpy(), label=column,s=1)

    # Set y-axis to logarithmic scale
    plt.yscale('log')
    
    # Add labels and title
    plt.xlabel("Iteration")
    plt.ylabel("Residual (Log Scale)")
    plt.title("Residuals over Iterations for Pressure Points (Logarithmic Scale)")
    plt.legend(loc="upper right", fontsize="small")
    plt.grid(True, which="both", linestyle="--", linewidth=0.5)
    
    # Set y-axis limits to focus on the convergence range
    # plt.ylim(1e-9, 1e-2)

    # Save plot
    plt.savefig(directory_monitor + "residuals_plot.pdf", bbox_inches='tight')
    plt.show()

# Call the residual plotting function
plot_residuals(df)
