function T_rad = radBC(T_TECh_i,T_rad_i, timeStep,angleY,angleZ,...
    percentOrbitInSun, altitude,solar,albedo,T_earth,T_frame,...
    emiss, absorp,areaRad,thermalMass,rStrap,rStandOff)

    % first, calc earth vf and solar angle of incidence
    fEarth = vfEarth(altitude,angleY);
    fSpace = 1-fEarth;
    areaPerp = areaRad*cos(angleZ*pi/180);
    aveSolar = solar*percentOrbitInSun;
    
%     % assuming radiator is 3mm thick, find thermal mass:
%     volume = 0.003*areaRad;
%     mass=volume*2700;
%     thermalMass = mass*890;     %scale specific heat by mass (J/K)
    
    % can't forget Stephan-Boltzmann
    stephBoltz=5.67E-8;         % Wm^-2K^-4
    
    % perform calculation from energy balance
    T_rad=T_rad_i+timeStep/thermalMass*...
        (absorp*areaPerp*aveSolar+fEarth*absorp*albedo*areaRad*aveSolar+...
        fEarth*areaRad*stephBoltz*(T_earth^4-T_rad_i^4)-...
        fSpace*stephBoltz*emiss*areaRad*T_rad_i^4+...
        (T_TECh_i-T_rad_i)/rStrap+(T_frame-T_rad_i)/rStandOff);

end