import numpy as np
from scipy.optimize import fsolve
from mpmath import cot

# Function representing the oblique shock equation
def shock_wave_eq(beta, M1, theta, gamma=1.4):
    lhs = np.tan(theta)  # Left-hand side: tan(theta)
    rhs = 2 * cot(beta) * ((M1**2 * np.sin(beta)**2 - 1) / (M1**2 * (gamma + np.cos(2*beta)) + 2))
    return lhs - rhs

# Example values (in radians)
M1 = 2.0  # Upstream Mach number
theta = np.radians(10)  # Deflection angle in radians

# Initial guess for beta
beta_initial_guess = np.radians(30)

# Solve for beta (shock wave angle in radians)
beta_solution = fsolve(shock_wave_eq, beta_initial_guess, args=(M1, theta))

# Convert back to degrees for interpretation
beta_deg = np.degrees(beta_solution)

print(f"Shock wave angle: {beta_deg[0]} degrees")
