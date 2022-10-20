function TMatrix = SteadyStatePassive(solarFlux,albedo,earthFlux,percentInSun,...
    altitude,rotationZ, rotationX,emiss,absorp,surfArea,satTemp,targetError)

    stephBoltz = 5.67E-8;

    % convert to radians
    rotationZ=rotationZ*pi/180;
    rotationx=rotationX*pi/180;

    fEarth = vfEarth(altitude,rotationx);

    % assume 0 degree z rotation corresponds to radiator in RAM direction
    solarHeat = solarFlux*absorp*cos(rotationZ)*cos(rotationX)*...
        percentInSun*surfArea;
    earthHeat = fEarth*earthFlux*surfArea;
    albedoHeat= solarFlux*albedo*absorp*percentInSun*surfArea;
    
    % initially guess that all node temps are equal to that of the satelite
    radTemp = satTemp;
    tecHotTemp = satTemp;
    tecColdTemp = satTemp;
    detTemp = satTemp;
    tempArray = [radTemp tecHotTemp tecColdTemp detTemp];

    % thermal resistance values (all in K/W)
    rBus=2/5+1/0.3;
    rTEC=13;
    rTIM = 1/5;
    rStage = 1/0.007;
    rStandOff = 1/0.04;

    % set loop counter to 0
    counter = 0;
    netHeat = [100 100 100 100];
    % iterate until net heat in/out is within acceptable error band
    while(max(abs(netHeat))>=targetError)
        
        % calculate net heat array
        netHeat = [solarHeat+earthHeat+albedoHeat+(satTemp-tempArray(1))/rStandOff+...
            (tempArray(2)-tempArray(1))/rBus-stephBoltz*emiss*surfArea*tempArray(1)^4 ...
            (tempArray(1)-tempArray(2))/rBus+(tempArray(3)-tempArray(2))/rTEC ...
            (tempArray(2)-tempArray(3))/rTEC+(tempArray(4)-tempArray(3))/rTIM ...
            (tempArray(3)-tempArray(4))/rTIM+(satTemp-tempArray(4))/rStage];
                
        % check heat across each interface
        for i =1:1%length(netHeat)
            if(netHeat(i)<-1*targetError)
            % if less than target error, lower the temperature
                tempArray(i)=tempArray(i)-0.05*tempArray(i)
            elseif(netHeat(i)>targetError)
            % if greater than target error, raise the temperature
                tempArray(i)=tempArray(i)+0.05*tempArray(i)
            end
        end
        
        counter = counter+1;

    end

end