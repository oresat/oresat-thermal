SETLOCAL
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\zachg\oresat-thermal\Oresat0-Simulation"
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Exterior-FullSun_RandomOrientation_BatteryHeatersOff-RcOptics.rch" 1 Y 0
