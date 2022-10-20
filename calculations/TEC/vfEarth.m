function vf=vfEarth(altitude, angle)

    % taken from plane to orb view factor here:
    % http://webserver.dmt.upm.es/~isidoro/tc3/Radiation%20View%20factors.pdf
    % (pg 10)

    rEarth = 6378;          %km
    bigH=rEarth+altitude;
    lilH=bigH/rEarth;
    x=sqrt(lilH^2-1);
    angle=angle*pi/180;
    
    if abs(angle)<=acos(1/lilH)
        vf=cos(angle)/(lilH^2);
    else
        y = -x*cot(angle);
        vf = 1/(pi*lilH^2)*...
            (cos(angle)*acos(y)-x*sin(angle)*...
            sqrt(1-y^2))+1/pi*...
            atan((sin(angle)*sqrt(1-y^2)/x));
    end
    
end