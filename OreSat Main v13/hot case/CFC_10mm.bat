SETLOCAL
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\PSAS CAD\Desktop\OreSat Thermal\OreSat Sims\OreSat Main v13\Hot Case"
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "BASE-rcoptics.rck" 1 Y
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "BASE-75beta-rcoptics.rch" 1 Y
