SETLOCAL
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\zachg\OneDrive\Documents\School\.Oresat0 Thermal Sim\"
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Exterior-RcOptics.rck" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Exterior-no-spin-RcOptics.rch" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Interior-RcOptics.rck" 1 Y 0
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "Interior-no-spin-RcOptics.rch" 1 Y 0
