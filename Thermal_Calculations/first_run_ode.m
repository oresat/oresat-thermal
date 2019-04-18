clear all
close all
clc
t = linspace (0,3600);
T0 = 293; %K
T= ode23('first_order',t,T0)

plot(t,y);