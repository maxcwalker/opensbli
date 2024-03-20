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
        for i, name in enumerate(names):
            if name == 'Exact':
                plt.plot(x[i], variables[i], label=labels[i], color=colors[i], marker='o', linestyle='--', markevery=4)
            elif name == 'p' or name == 'T':
                continue
                plt.plot(x[i], variables[i], label= r'$%s$' % labels[i], color=colors[i])
            elif name == 'rho':
                plt.plot(x[i], variables[i], label= r'$\%s$' % labels[i], color=colors[i])
            else:
                plt.plot(x[i], variables[i], label= r'$\%s$ / $\rho$' % labels[i], color=colors[i])
        plt.xlabel(r'$x$', fontsize=20)
        plt.ylabel(r'$\%s$' % 'rho', fontsize=20)
        plt.legend(loc='best')
        
        plt.savefig('density_plot.pdf', bbox_inches='tight')
        plt.clf()


        return

    def extract_flow_variables(self, group):
        rhoN = self.read_dataset(group, "rhoN_B0")
        rhoN2 = self.read_dataset(group, "rhoN2_B0")
        rho = rhoN+rhoN2
        rhou = self.read_dataset(group, "rhou0_B0")
        rhoE = self.read_dataset(group, "rhoE_B0")
        p = self.read_dataset(group, "p_B0")
        # print(p)
        x = self.read_dataset(group, "x0_B0")
        u = rhou/rho
        p_calced = (0.4)*(rhoE - 0.5*(u**2)*rho)
        T = p / (1.4*rho)
        return rhoN, rhoN2, u, p, x, T, p_calced

    def main_plot(self, fname, n_levels):
        f, group1 = self.read_file(fname)
        rhoN, rhoN2, u, p, x, T, p_calced = self.extract_flow_variables(group1)
        rho = rhoN + rhoN2
        rhoN = rhoN/rho
        rhoN2 = rhoN2/rho

        x_vars, variables = [x,x,x,x, x], [rhoN,rhoN2, p, rho, T]
        names = ['rhoN', 'rhoN2', 'p','rho', 'T']
        self.line_graphs(x_vars, variables, names)

        fig2,ax2 = plt.subplots(1)
        MN, MN2 = 14.0, 28.0
        molefracN, molefracN2 = (rhoN/MN) / (rhoN/MN + rhoN2/MN2), (rhoN2/MN2) / (rhoN/MN + rhoN2/MN2) 
        ax2.plot(x,molefracN,label =r"$X_{N}$")
        ax2.plot(x,molefracN2,label =r"$X_{N2}$")
        ax2.legend()
        ax2.set_ylabel(r"Mole fraction")
        ax2.set_xlabel(r"X")
        fig2.savefig("molefrac.pdf")

        fig3,ax3 = plt.subplots(1)
        ax3.plot(x,p,label =r"p_B0")
        # ax3.plot(x,p_calced,label =r"calculated p")
        ax3.legend()
        ax3.set_ylabel(r"P")
        ax3.set_xlabel(r"X")
        fig3.savefig("p_diff.pdf")

        return

labels = ['rho_{N}', 'rho_{N2}', 'p', 'rho_{Total}', 'T']
colors = ['r', 'k','c','b', 'orange']

directory = './'
fname = "opensbli_output.h5"
PC = Plot()
PC.main_plot(directory + fname, 25)




