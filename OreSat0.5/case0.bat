SETLOCAL
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\duyti\Desktop\Cubesat2U\"
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Exterior-RcOptics.rck" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Exterior-Full_sun_orbit-RcOptics.rch" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Interior-RcOptics.rck" 1 Y 0
