close all; clc

%% distributed roughness

stretch = 5.0;

block0np0 = 400 ; block0np1 = 250 ; block0np2 = 200; 
Lx0       = 400.0 ; Lx1       = 115.0 ; Lx2       = 80.0 ;

% block deltas
dx = Lx0/(block0np0-1);
dy = Lx1/(block0np1-1);
dz = Lx2/(block0np2 -1); 

x  = zeros(block0np0,block0np1,block0np2);
y  = zeros(block0np0,block0np1,block0np2);
z  = zeros(block0np0,block0np1,block0np2);

x0 = Lx0/2; a = Lx0 / 20.0; b = Lx2 / 20.0; z0 = Lx2 / 2;

for i = 1:block0np0
    for j = 1:block0np1
        for k = 1:block0np2
            
            x(i, j, k) = dx*i;
            % eqn = Lx1/20*exp(-((dx*i-x0)/a).^2);
            % stretch_eqn =  (Lx1/100)*eqn + (Lx1 - (Lx1/100)*eqn)*sinh((stretch*dy*j)/Lx1)/sinh(stretch);

            y(i,j,k) = Lx1/20*exp(-((dx*i-x0)/a).^2)*exp(-((dz*k-z0)/a).^2);

            z(i,j,k) = dz*k;
        end
    end
end

% x-y plot
% surf(x(:,:,1), z(:,:,1), y(:,:,1))

xzp = x(:, 1, :); yzp =  y(:, 1, :); zzp = z(:, 1, :);
xzp = reshape(xzp, [block0np0, block0np2]);
yzp = reshape(yzp, [block0np0, block0np2]);
zzp = reshape(zzp, [block0np0, block0np2]);

% z plane
s = surf(xzp, zzp, yzp,'FaceAlpha',1.0);
s.EdgeColor = 'none';
xlim([150 250])
zlim([0 20])
ylim([0 100])
% axis equal
% grid0 = dx*i;
% grid1 = H/20*exp(-((dx*i-x0)/a).^2);
% grid2 = H/20*exp(-((dy*j-z0)/a).^2);
