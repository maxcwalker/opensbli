from opensbli import *
from sympy import symbols, exp, pprint, Piecewise, binomial, Min, sqrt, Equality, tanh
from opensbli.core.opensbliobjects import DataObject, ConstantObject, GroupedPiecewise
from opensbli.equation_types.opensbliequations import OpenSBLIEquation, NonSimulationEquations, ConstituentRelations
from opensbli.postprocess.post_process_eq import *
from opensbli.core.kernel import ConstantsToDeclare as CTD
from opensbli.code_generation.algorithm.common import *
from opensbli.utilities.user_defined_kernels import UserDefinedEquations
from opensbli.schemes.spatial.weno import *
from opensbli.core.boundary_conditions.bc_core import WallBC
from sympy.functions.elementary.piecewise import ExprCondPair


class TVDFilter(NonSimulationEquations):

    def __init__(self, block, order, metric=None, dissipation_sensor='Ducros', Mach_correction=False):
        self.reconstruction_kernela = []
        self.residual_kernels = []
        block.shock_filter = True
        self.dissipation_sensor = dissipation_sensor
        self.Mach_correection = Mach_correction
        self.block = block
        self.ndim = block.ndim
        self.order = order
        self.equation_classes = []
        self.nhalos = 3
        # Store the value of the dissipation control sensor for debugging
        self.store_kappa = True
        # Scheme used to form the non-linear filter
        self.scheme_type = "**{\'scheme\':\'TVD\'}"
        # Check if the problem needs a metric transformation of the equations
        self.process_metrics(metrics)
        self.constants = ["Re", "Pr","gama", "Minf", "SuthT", "RefT"]
         # Ensure gama has been added to the constants to define
        self.gama = ConstantObject('gama')
        CTD.add_constant(self.gama)
        # Einstein class to expand equations
        self.EE = EinsteinEquation()
        # Main class to generate the filter
        self.main(order,block)
        return

    def detect_wall_boundaries(self):
        self.wall_boundaries = [[False, False] for _ in range(self.ndim)]
        try:
            for direction in range(self.ndim):
                for side in [0,1]:
                   if isinstance(self.block.boundary_types[direction][side],WallBC):
                       self.wall_boundaries[direction][side] = True
        except:
            raise ValueError("Please set boundary conditions on the block before calling the shock filter.")
        return
    
    def process_metrics(self, metrics):
        # uniform mesh
        if metrics is None:
            self.metric_class = None
            self.stretched, self.curvilinear = False, False
        
        # Stretched or curvilinear mesh
        else:
            self.metric_class = metrics
            # Check whether the mesh is only stretched or full curvilinear
            if sum(self.metric_class.stretching_metric) > 0:
                self.stretched = True
            if sum(self.metric_class.curvilinear_metric) > 0:
                self.curvilinear = True
            else:
                self.curvilinear = False
        return