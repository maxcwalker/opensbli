%% ------------------------------------------------------------------------
% eigensys_euler
%
% 
%  
% author. 
% university of southampton
% -------------------------------------------------------------------------
clear all;close all;clc

%%  inputs
rho=sym('rho'); u0=sym('u0'); p=sym('p'); E=sym('E'); gamma=sym('gamma');
asq=sym('asq'); a=sym('a');

% A (2.31b) from Laney, 1998. ???
u  = [rho; rho*u0; rho*E];
f  = [rho*u0; rho*u0^2+(gamma-1)*(rho*E - 0.5*rho*u0^2); u0*rho*E+u0*(gamma-1)*(rho*E - 0.5*rho*u0^2)];
px = [rho, u0, E];

% find the jacobian matrics, construct A and find the eigenvalues and
dfdx = jacobian(f,px);
dudx = jacobian(u,px);

dxdf = inv(dfdx);
dxdu = inv(dudx);

A = dfdx*dxdu;
A = simplify(A);

% could do potential replacements to remove E and p 
% Egama = p/(rho*(gamma-1));
Egama = a^2/(gamma*(gamma-1)) + 1/2*u0^2;
A = subs(A,E,Egama);

% pgama = a^2*rho/gamma;
% A = subs(A,p,pgama);

A = simplify(A);

disp(A)
[evect, eval] = eig(A);

disp('Qa')
disp(evect)
% get the number of eigenvalues (and eigenvectors)
num_eigenvalues = size(eval, 1);

% normalize eigenvectors
for i = 1:num_eigenvalues
    eigenvector = evect(:, i); 
    norm_eigenvector = eigenvector / norm(eigenvector); 
    evect(:, i) = norm_eigenvector; 

    if evect(1, i) == 0 % will give you a NaN if the first eigenvector is 0
        evect(:, i) = evect(:, i);
    else 
        evect(:, i) = evect(:, i)/evect(1, i); % normalise with first value in eigenvector to have a [1,1,1 ...]
    end
end

disp('Qa new')
disp(evect)

disp('test') % should give A matrix
disp(simplify(evect*eval*inv(evect)),'Steps',20)


% simplify 
nstep = 5;
ev  = simplify(diag(eval),'Steps',nstep);
REV = simplify(evect,'Steps',nstep);
LEV = simplify(inv(evect),'Steps',nstep);


disp('ev')
disp(ev)
disp('rev')
disp(REV)
disp('lev')
disp(LEV)


% output c code for implementation in TVD/WENO
ccodeev  = ccode(ev);
ccodeREV = ccode(REV);
ccodeLEV = ccode(LEV);

disp(ccodeev)
disp(ccodeREV)
disp(ccodeLEV)