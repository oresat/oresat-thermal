clear 
close all

syms T(t)
Q_solar = 1400;
A = .02;
sigma = 5.6703*10^-8; 
epsilon = 1;
F = 1;
T_deep_space = 4;
time = [0,300];
cond1 = T(0) == 293;
T0 = 293;
conds = [cond1];
m = 1;
cp = 1;


DT = diff(T,t);

ode = DT == Q_solar + A*sigma...
        *epsilon*F*((T0^4) - T_deep_space^4)

    
TSol = dsolve(ode,conds)