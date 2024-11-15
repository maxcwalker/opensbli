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
        print(variables[0])
        for i, name in enumerate(names):
            if name is not 'Exact':
                plt.plot(x[i], variables[i], label=labels[i], color=colors[i], markevery=1)
            else:
                plt.plot(x[i], variables[i], label=labels[i], color=colors[i])
        # plt.axvline(x=0.635 ,color = 'b', linestyle=':', label = 'point of nan')
        # plt.title("TVD filter: Iteration 367, kappa = 0.5")
        plt.xlabel(r'$x$', fontsize=20)
        plt.ylabel(r'$\%s$' % 'rho', fontsize=20)
        plt.legend(loc='best')
        plt.savefig('Sod_shock_tube.pdf', bbox_inches='tight')
        plt.clf()
        return

    def extract_flow_variables(self, group):
        rho = self.read_dataset(group, "rho_B0")
        rhou = self.read_dataset(group, "rhou0_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        x = self.read_dataset(group, "x0_B0")
        u = rhou/rho
        p = (0.4)*(rhoE - 0.5*(u**2)*rho)
        return rho, u, p, x

    def main_plot(self, fname, fname1, n_levels):
        f, group1 = self.read_file(fname)
        f1,group2 = self.read_file(fname1)
        rho, u, p, x = self.extract_flow_variables(group1)
        rho1, u1, p1, x1 = self.extract_flow_variables(group2)
        data = numpy.loadtxt('reference.txt')
        x_ref, rho_ref = data[:, 0], data[:, 1]
        x_vars, variables = [x, x1, x_ref], [rho, rho1, rho_ref]
        names = ['rho', 'rho1', 'Exact']
        self.line_graphs(x_vars, variables, names)
        return

labels = ['TVD', 'WENO', 'Exact']
colors = ['r', 'b', 'k']

directory = './'
fname = "opensbli_output.h5"
fname1 = 'opensbli_output_weno_filter.h5'
PC = Plot()
PC.main_plot(directory + fname, directory + fname1, 25)
