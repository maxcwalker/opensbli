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
            elif name == 'p':
                plt.plot(x[i], variables[i], label= r'$%s$' % labels[i], color=colors[i])
            elif name == 'ev':
                plt.plot(x[i], variables[i], label= r'$%s$' % labels[i], color=colors[i])
            elif name=='T':
                continue
            elif name == 'rho':
                plt.plot(x[i], variables[i], label= r'$\%s$' % labels[i], color=colors[i])
            else:
                plt.plot(x[i], variables[i], label= r'$%s$' % labels[i], color=colors[i]) #r'$\%s$ / $\rho$'
        plt.xlabel(r'$x$', fontsize=20)
        # plt.ylabel(r'$\%s$' % 'rho', fontsize=20)
        plt.legend(loc='best')
        
        plt.savefig('main_plot.pdf', bbox_inches='tight')
        plt.clf()
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
        # print(p)
        x = self.read_dataset(group, "x0_B0")
        u = rhou/rho
        ev = rhoev/rho
        # p = (0.4)*(rhoE - 0.5*(u**2)*rho)
        T = p / (1.4*rho)
        return rhoN, rhoN2, rhoO, rhoO2, rhoNO,  u, p, x, T, ev, p

    def main_plot(self, fname, n_levels):
        f, group1 = self.read_file(fname)
        rhoN, rhoN2, rhoO, rhoO2, rhoNO, u, p, x, T, ev, p_calced = self.extract_flow_variables(group1)
        rho = rhoN + rhoN2 + rhoO + rhoO2+ rhoNO
        # rhoN = rhoN/rho
        # rhoN2 = rhoN2/rho

        x_vars, variables = [x,x,x,x,x], [p, rho, T, u, ev]
        names = ['p','rho', 'T','u']
        self.line_graphs(x_vars, variables, names)

        fig2,ax2 = plt.subplots(1)
        MN, MN2, MO,MO2,MNO = 14.0, 28.0, 16.0, 32.0, 30.0
        sumrho = rhoN+rhoN2+rhoO+rhoO2+rhoNO
        sumrho_mole = rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO

        # molefracN, molefracN2 = (rhoN/MN) / (rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO), (rhoN2/MN2) / (rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO) 
        # molefracO, molefracO2 = (rhoO/MN) / (rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO), (rhoO2/MN2) / (rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO) 
        # molefracNO = (rhoN/MNO) / (rhoN/MN + rhoN2/MN2 + rhoO/MO + rhoO2/MO2 + rhoNO/MNO)

        molefracN, molefracN2 = (rhoN) / sumrho, (rhoN2) / sumrho 
        molefracO, molefracO2 = (rhoO) / sumrho, (rhoO2) / sumrho
        molefracNO = (rhoNO) / sumrho

        ax2.plot(x,molefracN,label =r"$X_{N}$")
        ax2.plot(x,molefracN2,label =r"$X_{N2}$")
        ax2.plot(x,molefracO,label =r"$X_{O}$")
        ax2.plot(x,molefracO2,label =r"$X_{O2}$")
        ax2.plot(x,molefracNO,label =r"$X_{NO}$")
        ax2.legend()
        ax2.set_ylabel(r"Mole fraction")
        ax2.set_xlabel(r"X")
        fig2.savefig("molefrac.pdf")

        fig3,ax3 = plt.subplots(1)
        # ax3.plot(x,p,label =r"e_v")
        ax3.plot(x,ev,label =r"e_V",color='k')
        ax3.legend()
        ax3.set_ylabel(r"e_v")
        ax3.set_xlabel(r"X")
        fig3.savefig("ev.pdf")

        # fig3,ax3 = plt.subplots(1)
        # # ax3.plot(x,p,label =r"e_v")
        # ax3.plot(x,rhoO,label =r"$\rho_O$")
        # ax3.plot(x,rhoO2,label =r"$\rho_{O2}$")
        # ax3.plot(x,rhoN,label =r"$\rho_N$")
        # ax3.plot(x,rhoN2,label =r"$\rho_{N2}$")
        # ax3.plot(x,rhoNO,label =r"$\rho_{NO}$")
        # ax3.legend()
        # ax3.set_ylabel(r"e_v")
        # ax3.set_xlabel(r"X")
        # fig3.savefig("density.pdf")

        return

# labels = ['rho_{N}', 'rho_{N2}', 'p', 'rho_{Total}', 'T', 'e_v']
labels = ['p', 'rho', 'T', 'u']
colors = ['r', 'k','c','b', 'orange','grey']

directory = './'
fname = "opensbli_output.h5"
PC = Plot()
PC.main_plot(directory + fname, 25)




