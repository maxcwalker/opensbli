from sympy import Rational, Min, Abs, sqrt, tanh, pprint
from opensbli.core.opensblifunctions import CentralDerivative as CD
from opensbli.core.parsing import EinsteinEquation as EE
from opensbli.core.opensbliobjects import ConstantObject, CoordinateObject, DataObject
from opensbli.equation_types.opensbliequations import OpenSBLIEq


class ShockSensor(object):
    def __init__(self):
        return

    def ducros_equations(self, block, coordinate_symbol, metrics=None, name='theta'):
        """ Create the non-discretized equations for the modified Ducros shock sensor and applies a metric transformation if required.
        :arg object block: OpenSBLI simulation block.
        :arg string coordinate_symbol: Coordinate symbol to perform the derivatives with.
        :arg object metrics: OpenSBLI metric class to apply curvilinear coordinates to the sensor if required."""

        ndim = block.ndim
        substitutions, constants, output_eqns = [], [], []
        cart = CoordinateObject('x_i')
        cartesian_coordinates = [cart.apply_index(cart.indices[0], dim) for dim in range(ndim)]

        epsilon, Minf = ConstantObject('epsilon'), ConstantObject('Minf')
        sensor_array = block.location_dataset('%s' % name)
        epsilon.value = 1.0e-12
        # Calculate vorticity
        if block.ndim == 2:
            x0, x1 = cartesian_coordinates[0], cartesian_coordinates[1]
            u0, u1 = DataObject('u0'), DataObject('u1')
            vorticity_sq = (CD(u1, x0) - CD(u0, x1))**2
        elif block.ndim == 3:
            x0, x1, x2 = cartesian_coordinates[0], cartesian_coordinates[1], cartesian_coordinates[2]
            u0, u1, u2 = DataObject('u0'), DataObject('u1'), DataObject('u2')
            vorticity_sq = (CD(u2, x1) - CD(u1, x2))**2 + (CD(u0, x2) - CD(u2, x0))**2 + (CD(u1, x0) - CD(u0, x1))**2
        else:
            raise ValueError("vorticity is not defined for one-dimensional cases.")

        divergence = "Eq(divergence, (KD(_i,_j)*Der(u_i, x_j)))"
        divergence = EE().expand(divergence, ndim, coordinate_symbol, substitutions, constants)

        # Apply metric transformation if required
        if metrics:
            vorticity_sq = metrics.apply_transformation(vorticity_sq)
            divergence = metrics.apply_transformation(divergence)

        a = 100.0
        tanh_filter = Rational(1, 2)*(1 - tanh(2.5*(1 + a*divergence.rhs)))
        output_eqns += [OpenSBLIEq(sensor_array, tanh_filter*divergence.rhs**2 / (divergence.rhs**2 + vorticity_sq + epsilon))]
        return output_eqns, sensor_array
