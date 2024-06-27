import numpy
import matplotlib.pyplot as plt
import h5py
import os.path
import os

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

    def line_graphs(self, x, variables, names):
        fig,ax = plt.subplots(1)
        for i, name in enumerate(names):
            ax.plot(x[i], variables[i], label= r'$%s$' % labels[i], color=colors[i]) #r'$\%s$ / $\rho$'
        ax.set_xlabel(r'$x$', fontsize=20)
        # plt.ylabel(r'$\%s$' % 'rho', fontsize=20)
        ax.legend(loc='best')
        
        fig.savefig('raw_vals.pdf', bbox_inches='tight')
        plt.clf()
        return

    def extract_flow_variables(self, group):
        rhoN = self.read_dataset(group, "rhoN_B0")
        rhoN2 = self.read_dataset(group, "rhoN2_B0")
        rhoO = self.read_dataset(group, "rhoO_B0")
        rhoO2 = self.read_dataset(group, "rhoO2_B0")
        rhoNO = self.read_dataset(group, "rhoNO_B0")
        rhou = self.read_dataset(group, "rhou0_B0")
        rhoev = self.read_dataset(group, "rhoev_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        x = self.read_dataset(group, "x0_B0")
        return x,rhoN, rhoN2, rhoO, rhoO2, rhoNO,rhoev, rhoE

    def main_plot(self, fname, n_levels):
        f, group1 = self.read_file(fname)
        x,rhoN, rhoN2, rhoO, rhoO2, rhoNO, rhoev, rhoE = self.extract_flow_variables(group1)
        rho = rhoN + rhoN2 + rhoO + rhoO2+ rhoNO
        print(rhoO2)
        x_vars, variables = [x,x,x,x,x], [rhoN, rhoN2, rhoNO, rhoO2,rhoNO]#, rhoev,rhoE]
        names = ['rhoN','rhoN2', 'rhoO', 'rhoO2', 'rhoNO']#, 'rhoev','rhoE']
        self.line_graphs(x_vars, variables, names)
        return


labels = ['rhoN','rhoN2', 'rhoO', 'rhoO2', 'rhoNO', 'rhoev','rhoE']
colors = ['r', 'k','c','b', 'orange','grey','g']

directory = './'
fname = "opensbli_output.h5"
PC = Plot()
PC.main_plot(directory + fname, 25)




