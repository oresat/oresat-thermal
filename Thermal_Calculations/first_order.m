function dTdt = first_order(t,T)
A = .01*.02;%m^2
sigma = 1.38064852e-23 % enter units
E = 1;
F = 1;
Qsol = 1400; %W/m^2
ro= 2700 % kg/m^3
Vol = .005*A % m^3
Tspace = 4 %K
m=Vol*ro
c = 896 % J/kg
B=A*sigma*E*F
dTdt = (1/(m*c))*(Qsol+B*(T^4-Tspace^4))
end