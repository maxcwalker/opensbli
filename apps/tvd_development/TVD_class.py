class TVDCharacteristic(Characteristic):
    """ Implements the TVD equations

    :arg object physics: Physics object, defaults to NSPhysics.
    :arg object averaging: The averaging procedure to be applied for characteristics, defaults to Simple averaging."""

    def __init__(self, physics, averaging=None, flux_split=False):
        Characteristic.__init__(self, physics, flux_split)
        if averaging is None:
            self.average = SimpleAverage([0, 1]).average
        else:
            self.average = averaging.average
        self.flux_split = flux_split
        return

    def pre_process(self, direction, derivatives, solution_vector, block):
        """ TVD implementation over j-1/2, j+1/2, j+3/2, Max Walker & David J. Lusher (09/2023)."""
        self.direction = direction
        self.input_solution_vector = solution_vector
        # Number of variables to solve
        nvars = len(solution_vector)
        # Output equations
        pre_process_equations, reduction_equations = [], []
        # Update the ev, LEV and REV dicts and perform averaging
        avg_name = 'AVG_%d' % direction
        # Loop over 3 indices to get the eigensystem at j-1/2, j+1/2, j+3/2
        offsets = [-1, 0, 1]
        # Create the alpha variables
        alphas = Matrix([[GridVariable('alpha_%d%d' % (i, j)) for i in range(nvars)] for j in range(3)])
        for recon_index, jbase in enumerate(offsets):
            # Step 1: obtain the averaged eigenstate
            inv_metric, averaged_equations, required_symbols = self.characteristic_setup(direction, avg_name, derivatives, block, index=jbase)
            pre_process_equations += averaged_equations
            # Update required CRs
            if recon_index == 0:
                self.update_constituent_relation_symbols(required_symbols, direction)
            # Step 2: Store the R^-1 matrix components (LEV) based on this averaged state
            # # Inverse metric term: WARNING: Metrics need to be looked at for curvilinear cases
            self.inv_metric = self.convert_matrix_to_grid_variable(inv_metric, avg_name)
            # # Eigensystem based on averaged quantities
            avg_LEV_values = self.convert_matrix_to_grid_variable(self.left_eigen_vector[direction], avg_name)
            # # Manually replace re-used divides by inverses
            inverse_evals, avg_LEV_values = self.create_LEV_inverses(direction, avg_LEV_values)
            pre_process_equations += inverse_evals
            # # Grid variables to store averaged eigensystems
            grid_LEV_matrix = self.generate_grid_variable_LEV(direction, avg_name)
            pre_process_equations += flatten(self.generate_equations_from_matrices(grid_LEV_matrix, avg_LEV_values))
            # Step 3: Transform the du terms, alpha = R^-1 *(u_{i+1} - u_i)
            du = Matrix([increment_dataset(v, direction, jbase+1) - increment_dataset(v, direction, jbase) for v in solution_vector])
            alpha_vector = grid_LEV_matrix*du
            # Store the alphas for later use
            pre_process_equations += [OpenSBLIEq(alphas[recon_index, a], alpha_vector[a]) for a in range(len(alpha_vector))]
            # Step 5: If j+1/2 location, store the wavespeeds ws_0, ws_1, ws_2, and REV for later use
            if jbase == 0:
                # Step 5a: Wavespeed calculation 
                ev = self.eigen_value[direction]
                out = zeros(*ev.shape)
                # Replace the eigenvalues with their averaged state instead
                subs_dict = {}
                for eqn in averaged_equations:
                    dset_base = list(eqn.rhs.atoms(DataSetBase))[0]
                    subs_dict[EinsteinTerm(str(dset_base.noblockname))] = eqn.lhs
                for i in range(ev.shape[0]):
                    for j in range(ev.shape[1]):
                        ev[i,j] = ev[i,j].subs(subs_dict)
                wavespeeds = self.generate_grid_variable_ev(direction, 'ws')
                ev_equations = self.generate_equations_from_matrices(wavespeeds, ev)
                ev_equations = [x for x in ev_equations if x != 0]
                pre_process_equations += ev_equations
                # Step 5b: REV calculation
                avg_REV_values = self.create_REV_inverses(direction)
                self.grid_REV = self.generate_grid_variable_REV(direction, 'AVG')
                pre_process_equations += [OpenSBLIEq(x, y) for (x,y) in zip(self.grid_REV, avg_REV_values)]

        # Step 6: Calculate sigma values from Yee et al (1999)
        sigmas = [GridVariable('sigma_%d' % i) for i in range(nvars)]
        delta = ConstantObject('delta_TVD')
        delta.value = 0.5
        ConstantsToDeclare.add_constant(delta)
        for i, sigma in enumerate(sigmas):
            if_expr, else_expr = Abs(alphas[1, i]), (alphas[1, i]**2 + delta**2) / (2*delta)
            pre_process_equations += [OpenSBLIEq(sigmas[i], Piecewise((if_expr, Abs(alphas[1, i]) >= delta), (else_expr, True)))]
        # Step 7: Calculate the 'g' functions, which are the upwind limiter functions
        S = GridVariable('S')
        g_equations = []
        # g terms at j and j+1
        g_terms = [[GridVariable('g_%d%d' % (i,j)) for i in range(nvars)] for j in range(2)]
        # Temporary terms
        t1, t2 = GridVariable('t1'), GridVariable('t2')
        for j in [1, 2]:
            for i in range(nvars):
                g_equations += [OpenSBLIEq(S, sign(alphas[j,i]))]
                a1, a2 = alphas[j,i], alphas[j-1,i]
                g_equations += [OpenSBLIEq(t1, Max(0, Min(2*Abs(a1), S*a2))), OpenSBLIEq(t2, Min(Abs(a1), 2*S*a2))]
                g_eval = S*Max(t1, t2)
                g_equations += [OpenSBLIEq(g_terms[j-1][i], g_eval)]
        pre_process_equations += g_equations
        # Step 8: Calculate the phi_{j+1/2} terms
        gamma_terms = [GridVariable('gamma_%d' % i) for i in range(nvars)]
        eps = ConstantObject('eps_TVD')
        eps.value = 0.00000001
        ConstantsToDeclare.add_constant(eps)
        for i, gamma in enumerate(gamma_terms):
            if_expr, else_expr = 0, sigmas[i]*alphas[1,i]*(g_terms[1][i] - g_terms[0][i]) / (alphas[1,i]**2 + eps)
            pre_process_equations += [OpenSBLIEq(gamma_terms[i], Piecewise((if_expr, Equality(alphas[i,0], 0)), (else_expr, True)))]
        # Step 9: Calculate the phi terms
        phi_terms = [GridVariable('phi_%d' % i) for i in range(nvars)]
        # Lambda needs to be one per direction
        TVD_lambda = ConstantObject('lambda%d_TVD' % direction)
        for i, phi in enumerate(phi_terms):
            rhs = -sigmas[i]*(g_terms[1][i] + g_terms[0][i]) + (Abs(wavespeeds[i,i]+gamma_terms[i]) - TVD_lambda*wavespeeds[i,i]**2)*alphas[1,i]
            pre_process_equations += [OpenSBLIEq(phi, rhs)]
        # Step 10: Calculate switch to control the dissipation of the limiter (Harten switch, (eqns 2.22 and 2.23 in Yee et al. 1999))
        theta_hat_terms = [[GridVariable('theta_hat_%d%d' % (i,j)) for i in range(nvars)] for j in range(2)]
        for j in [1, 2]:
            for i in range(nvars):
                a1, a2 = alphas[j,i], alphas[j-1,i]
                pre_process_equations += [OpenSBLIEq(t1, Abs(a1) - Abs(a2))]
                pre_process_equations += [OpenSBLIEq(t2, Abs(a1) + Abs(a2) + eps)]
                rhs = Abs(t1/t2)**2
                pre_process_equations += [OpenSBLIEq(theta_hat_terms[j-1][i], rhs)]
        # Step 11: Calculate theta terms at j+1/2 interface
        theta_terms = [GridVariable('theta_%d' % i) for i in range(nvars)]
        pre_process_equations += [OpenSBLIEq(theta_terms[i], Max(theta_hat_terms[0][i], theta_hat_terms[1][i])) for i in range(nvars)]
        # Step 12: Calculate phi star terms
        self.phi_star_terms = [GridVariable('phi_star_%d' % i) for i in range(nvars)]
        kappa = ConstantObject('kappa_TVD')
        kappa.value = 1.5
        ConstantsToDeclare.add_constant(kappa)
        pre_process_equations += [OpenSBLIEq(self.phi_star_terms[i], kappa*theta_terms[i]*phi_terms[i]) for i in range(nvars)]
        # NOTE: Setting the work arrays is performed in the post_process function to be consistent with WENO
        # Remove '0' entries and gamma - 1 factors from pre_process_equations
        pre_process_equations = self.remove_zero_equations(pre_process_equations)
        pre_process_equations = self.replace_gamma_factor(pre_process_equations)
        return pre_process_equations, reduction_equations
