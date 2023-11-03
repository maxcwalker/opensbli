import pandas as pd

# Read the original CSV file
input_file = "block0_TGV.log"
df = pd.read_csv(input_file)

# Create new columns
df["Time"] = df[" Time"]
df["KineticEnergy"] = df[" KE"] / df[" rhom"]
df["SolenoidalDissipation"] = df[" enstrophy_dissipation"] / (df[" rhom"]*1600)
df["DilatationalDissipation"] = df[" dilatation_dissipation"] / (df[" rhom"]*1600)

# Select and reorder the columns
new_columns = ["Time", "KineticEnergy", "SolenoidalDissipation", "DilatationalDissipation"]
df = df[new_columns]

# Save the modified data to a new CSV file
output_file = "modified_block0_TGV.log"
df.to_csv(output_file, index=False)

print(f"New CSV file '{output_file}' created with the desired columns.")