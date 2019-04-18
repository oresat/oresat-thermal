function dTdt = odefunRad_case1(t,T)
%
% Date: 02/07/19
% Author: Tom Otero
% 
% OreSat Thermal Calculations
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%% Defining Terms

% Symbolic Notation
%syms T(t) 
% T is Temperature; t is time. 

% Satellite Properties
% One Plate
plate_height = 0.2; % Units: m
plate_width = 0.1; % Units: m
plate_thickness = 0.001704; % Units: m

% Aluminum Properties
cp = 921.096; % Units: J/(kg*K)
rho = 2.7*10^3; % Units: kg/m^3
m = 2.33/5; % Units: kg

% System Properties
boltz = 5.67*10^-8; % Units: W/(m^2-K^4) 
F = 1; % View Factor
epsilon = 1; % 

% Heat Flux terms
q_solar = 1400; % W/m^2
q_earth = 350; % W/m^2
q_internal = 3; % W/m^2 
    % Q_internal has an assumed flux value for now.

% Temperature terms
T_OreSat = 293.15; % Units: K
    % T_OreSat is assumed to be room temperature.
T_DeepSpace = 2.7; % Units: K

%dTdt = zeros(1,1)
dTdt = (((q_solar/(m*cp)) +  (q_earth/(m*cp)))*plate_height*plate_width)+(q_internal/(m*cp))  + (boltz/(rho*plate_thickness*cp))*((T^4)-(T_DeepSpace^4));
end