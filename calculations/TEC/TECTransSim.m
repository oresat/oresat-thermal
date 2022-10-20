function TMatrix = TECTransSim(IC,duration,setTemp, detectorHeatLoad,...
   frameTemp,voltageTEC)

    % First, calc thermal masses of each node
    % node 0: detector
    % node 1: cold side of TEC
    % node 2: hot side of TEC
    % node 3: radiator
    tmDetector = 300*0.03^2*0.01*6000;       % J/K
    tmTEC=300*6000*(1/3*0.004*0.023^2+1/3*0.004*0.023*0.027)+...
        1/3*3/4*123*10022*0.023^2*0.004;
    tmStrap = 0.03*385;
    tmRad = 0.01514*0.003*2700*890;
    
    % calc TEC thermal masses
    tmTECHotSide = 1/2*(tmTEC+tmStrap);
    tmTECColdSide = 1/2*tmTEC;
    
    rDetectorInterface = 1/5;
    rStrap = 1/5+1/0.3+1/5;       % accounts for 5 W/K TIM on either side
    rStage = 0.5*130;             % half of HARP2's (total guess)
    rRadStandOff = 1/0.04;

    %initially set answer to zeroes at 250ms resolution
    TMatrix = zeros(duration/0.25+1,6);
    % set first row to IC
    TMatrix(1,1)=0;
    for i = 1:length(IC)
        TMatrix(1,i+1)=IC(i);
    end
    TMatrix(1,6)=0;

    % loop at 500 ms resolution
    for i = 2:length(TMatrix)
        
        % determine whether TEC is on for this time step
        if(TMatrix(i-1,5)>setTemp)
            V=voltageTEC;
        else
            V=0;
        end
        
        TMatrix(i,1)=0.5*(i-1);

        % update latest row of temperature matrix
        TMatrix(i,2)=radBC(TMatrix(i-1,3),TMatrix(i-1,2),0.25,90,90,...
            0.6, 500,1350,0.25,255,300,...
            0.8, 0.14,0.01514,tmRad,rStrap,rRadStandOff);
        TMatrix(i,3)=TECh(TMatrix(i-1,4),TMatrix(i-1,3),TMatrix(i-1,2),...
            0.25,tmTECHotSide,V,rStrap);
        TMatrix(i,4)=TECc(TMatrix(i-1,4),TMatrix(i-1,3),TMatrix(i-1,5),...
            0.25,tmTECColdSide,V,rDetectorInterface);
        TMatrix(i,5)=detectorTemp(TMatrix(i-1,5),TMatrix(i-1,4),frameTemp,...
            0.25,tmDetector,rStage,rDetectorInterface,detectorHeatLoad);

        TMatrix(i,6)=V;

    end

   writematrix(TMatrix,'output.csv') 

end