import pandas as pd

# Define the CSV file names
csv_files = [
    "Grossman_rho.csv",
    "Grossman_p.csv",
    "Grossman_u.csv",
    "Grossman_N.csv",
    "Grossman_O.csv",
    "Grossman_N2.csv",
    "Grossman_O2.csv"
]

# Initialize an empty DataFrame
merged_df = pd.DataFrame()

# Iterate over each CSV file and merge them
for file in csv_files:
    # Read the current CSV file
    df = pd.read_csv(file)
    
    # Shift the x data by +0.5 (x data is assumed to be in the left column of each pair)
    df.iloc[:, 0] += 0.5
    
    # If the merged DataFrame is empty, initialize it with the current DataFrame
    if merged_df.empty:
        merged_df = df
    else:
        # Merge the current DataFrame with the merged DataFrame
        merged_df = pd.concat([merged_df, df], axis=1)

# Save the merged DataFrame to a new CSV file
merged_df.to_csv("Grossman_merged.csv", index=False)

print("CSV files merged successfully into 'Grossman_merged.csv' and x data shifted by +0.5")

