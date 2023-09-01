"""@brief
   @authors 
   @contributors
   @details
"""

from sympy import IndexedBase, Symbol, Rational, solve, interpolating_poly, integrate, Abs, Float, flatten, S
from opensbli.core.opensblifunctions import WenoDerivative
from opensbli.core.opensbliobjects import ConstantObject
from opensbli.equation_types.opensbliequations import SimulationEquations, OpenSBLIEq, NonSimulationEquations
from opensbli.core.grid import GridVariable
from .scheme import Scheme
from sympy import horner, pprint
from opensbli.schemes.spatial.shock_capturing import ShockCapturing, LLFCharacteristic

class TVDHalos(object):

    def __init__(self,order):
        k = int(0.5(order+1))
        self.halos = [-k,k+1]
        return

    def get_halos(self, side):
        return self.halos[side]


class configureTVD(object):
    
    def __init__(self, side):
        self.side = side
        self.nstencils = 3
        return
    
    def generate_left_right_points(self):
        """ Evaluate the required function evaluation points for left and
        right WENO reconstructions.

        :returns: fn_points: A list of integers to index the function locations."""
        k = self.k
        if self.side == -1:
            c = 1
        elif self.side == 1:
            c = 0
        fn_points = []
        for r in range(k):
            fn_points += [-r+j+c for j in range(k)]
        return fn_points



class TVDLimiters(object):

    def __init__(self):
        return
    
    def GenerateLimiters(self,):
        return    


class TVD(Scheme, ShockCapturing):
    
    def __init__(self, order):
        Scheme.__init__(self, "TVDDerivative", order)
        self.schemetype = "Spatial"
        self.k = int(0.5*(order+1))
        self.order = order

        self.halotype = TVDHalos(self.order)
        self.required_constituent_relations_symbols = {}


