import numpy as np
import matplotlib.pyplot as plt
import h5py
import pandas as pd

plt.style.use('classic')

class plotFunctions(object):
    def __init__(self):
        return

    def read_file(self, fname):
        f = h5py.File(fname, 'r')
        group = f["opensbliblock00"]
        return f, group

    def read_dataset(self, group, dataset):
        d_m = group["%s" % (dataset)].attrs['d_m']
        size = group["%s" % (dataset)].shape
        read_start = [abs(d) for d in d_m]
        read_end = [s-abs(d) for d, s in zip(d_m, size)]
        if len(read_end) == 1:
            read_data = group["%s" % (dataset)][read_start[0]:read_end[0]]
        elif len(read_end) == 2:
            read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1]]
        elif len(read_end) == 3:
            read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
        else:
            raise NotImplementedError("")
        return read_data

class Plot(plotFunctions):
    def __init__(self):
        return

    def extract_flow_variables(self, group):
        rhoN = self.read_dataset(group, "rhoN_B0")
        rhoN2 = self.read_dataset(group, "rhoN2_B0")
        rhoO = self.read_dataset(group, "rhoO_B0")
        rhoO2 = self.read_dataset(group, "rhoO2_B0")
        rhoNO = self.read_dataset(group, "rhoNO_B0")
        rho = rhoN+rhoN2+rhoO+rhoO2+rhoNO
        rhou = self.read_dataset(group, "rhou0_B0")
        rhoev = self.read_dataset(group, "rhoev_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        p = self.read_dataset(group, "p_B0")
        T = self.read_dataset(group, "T_B0")
        x = self.read_dataset(group, "x0_B0")
        u = rhou/rho
        ev = rhoev/rho
        T = p / (1.4*rho)
        return rho, rhoN, rhoN2, rhoO, rhoO2, rhoNO,  u, p, x, T, ev, p

    def main_plot(self, fname, reference_data_path):
        f, group1 = self.read_file(fname)
        rho, rhoN, rhoN2, rhoO, rhoO2, rhoNO, u, p, x, T, ev, p_calced = self.extract_flow_variables(group1)

        molefracN = rhoN / rho
        molefracN2 = rhoN2 / rho
        molefracO = rhoO / rho
        molefracO2 = rhoO2 / rho
        molefracNO = rhoNO / rho

        # Normalizing simulation data
        rho_R=rho[-1]
        p_R=p[-1]
        rho = rho/rho_R
        p = p/p_R
        c_R = np.sqrt(1.4 * p_R / rho_R)
        print('right speed of sound is %.2f'%c_R)
        u = u/c_R

        # Reference data from Grossman_merged.csv
        ref_data = pd.read_csv(reference_data_path)
        
        x_rho, y_rho = ref_data.iloc[:, 0], ref_data.iloc[:, 1]
        x_p, y_p = ref_data.iloc[:, 2], ref_data.iloc[:, 3]
        x_u, y_u = ref_data.iloc[:, 4], ref_data.iloc[:, 5]
        molefracN_x, molefracN_y = ref_data.iloc[:, 6], ref_data.iloc[:, 7]
        molefracO_x, molefracO_y = ref_data.iloc[:, 8], ref_data.iloc[:, 9]
        molefracN2_x, molefracN2_y = ref_data.iloc[:, 10], ref_data.iloc[:, 11]
        molefracO2_x, molefracO2_y = ref_data.iloc[:, 12], ref_data.iloc[:, 13]

        fig, axs = plt.subplots(2, 2, figsize=(15, 10))
        
        axs[0, 0].plot(x, rho, label='Simulation',color='k')
        axs[0, 0].plot(x_rho, y_rho, 'x', label='Reference')
        axs[0, 0].set_xlabel(r'$x$', fontsize=20)
        axs[0, 0].set_ylabel(r'$\rho/\rho_R$', fontsize=20)
        # axs[0, 0].legend(loc='best')
# 
        axs[0, 1].plot(x, p, label='Simulation',color='k')
        axs[0, 1].plot(x_p, y_p, 'x', label='Reference')
        axs[0, 1].set_xlabel(r'$x$', fontsize=20)
        axs[0, 1].set_ylabel(r'$p/p_R$', fontsize=20)
        # axs[0, 1].legend(loc='best')

        axs[1, 0].plot(x, u, label='Simulation',color='k')
        axs[1, 0].plot(x_u, y_u, 'x', label='Reference')
        axs[1, 0].set_xlabel(r'$x$', fontsize=20)
        axs[1, 0].set_ylabel(r'$u/c_R$', fontsize=20)
        # axs[1, 0].legend(loc='best')

        MN, MN2, MO, MO2, MNO = 14.0, 28.0, 16.0, 32.0, 30.0
        sumrho = rhoN + rhoN2 + rhoO + rhoO2 + rhoNO
        molefracN = rhoN / sumrho
        molefracN2 = rhoN2 / sumrho
        molefracO = rhoO / sumrho
        molefracO2 = rhoO2 / sumrho
        molefracNO = rhoNO / sumrho

        axs[1, 1].plot(x, molefracN, label=r"$X_{N}$",color='orange')
        axs[1, 1].plot(x, molefracN2, label=r"$X_{N2}$",color='blue')
        axs[1, 1].plot(x, molefracO, label=r"$X_{O}$",color='cyan')
        axs[1, 1].plot(x, molefracO2, label=r"$X_{O2}$",color='k')
        axs[1, 1].plot(x, molefracNO, label=r"$X_{NO}$",color='red')

        axs[1, 1].plot(molefracN_x, molefracN_y, 'x', color='orange')
        axs[1, 1].plot(molefracO_x, molefracO_y, 'x',color='cyan' )
        axs[1, 1].plot(molefracN2_x, molefracN2_y, 'x',color='blue' )
        axs[1, 1].plot(molefracO2_x, molefracO2_y, 'x',color='k' )

        axs[1, 1].set_xlabel(r'$x$', fontsize=20)
        axs[1, 1].set_ylabel(r'$X_s$', fontsize=20)
        axs[1, 1].legend(loc='best')

        plt.tight_layout()
        plt.savefig('combined_plot.pdf', bbox_inches='tight')
    

# Paths
directory = './'
fname = "opensbli_output.h5"
reference_data_path = "Grossman_merged.csv"

# Plot
PC = Plot()
PC.main_plot(directory + fname, reference_data_path)

