from sympy import sin, cos, sinh, tanh, exp, pi, log

gridx1_axi = parse_expr("Eq(DataObject(x1), H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2)*exp(-((block.deltas[2]*block.grid_indexes[2]-W/2)/a)**2) + (H - H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2)*exp(-((block.deltas[2]*block.grid_indexes[2]-W/2)/a)**2)) * sinh(b*block.deltas[1]*block.grid_indexes[1]/H)/sinh(b))", local_dict=local_dict)

gridx1_gauss = parse_expr("Eq(DataObject(x1), H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2) + (H - H/20*exp(-((block.deltas[0]*block.grid_indexes[0]-L/2)/a)**2))*sinh(b*block.deltas[1]*block.grid_indexes[1]/H)/sinh(b))", local_dict=local_dict)

pprint(gridx1_axi)