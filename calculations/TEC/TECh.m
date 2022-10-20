function T_TECh = TECh(T_TECc_i,T_TECh_i,T_rad_i,timeStep,...
    thermalMass, voltage,rStrap)
    
    
    %extrapolate for v_max
    V_max=8.2+((9.2-8.2)/(323-300))*(T_TECh_i-300);
    R_TEC=V_max/2.5;
    I_TEC = voltage/R_TEC;
    
    %extrapolate for seabeck (V/K)
    deltaT = T_TECh_i-T_TECc_i;
    deltaTMax=65+((9.2-8.2)/(73-65))*(deltaT-65);
    seabeck=V_max/deltaTMax;
    peltier=seabeck*T_TECh_i;
    
    %extrapolate for Q_max to find condutance of TEC
    qMax=13+((14-13)/(323-300))*(T_TECh_i-300);
    gTEC=qMax/deltaTMax;
    
    %calculate the hot-side temperature at the next time index
    T_TECh=T_TECh_i+(timeStep/thermalMass)*...
        ((T_rad_i-T_TECh_i)/rStrap+gTEC*(T_TECc_i-T_TECh_i)+...
        0.5*(I_TEC^2*R_TEC)+peltier*I_TEC);

end