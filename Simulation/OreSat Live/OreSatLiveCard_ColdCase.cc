HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.2 Patch 6
C    Generated on Mon Mar 28 18:08:26 2022
C    From file: SimpleOreSat_v13.dwg
C    Case Set: Cold Case
C    TDUNITS,   Energy     = J
C    TDUNITS,   Time       = s
C    TDUNITS,   Temp       = C
C    TDUNITS,   Mass       = kg
C    TDUNITS,   Length     = m
C    TDUNITS,   Orbit      = km
C    TDUNITS,   Pressure   = Pa
C    TDUNITS,   Force      = N
C    TDUNITS,   Angle      = Degrees
C    TDUNITS,   Volt       = volt
C    TDUNITS,   Current    = amp
C    DWG name:      SimpleOreSat_v13.dwg
C    Thermophysical Property Database: tdthermo.tdp
C    Optical Property Database:        rcoptics.rco
C    Computer name: DESKTOP-ES3J6TO
C    User name:     elevy
C    Symbol Names, Evaluated values, Input Strings, Comments
C    Active_BatteryHeaters            1.            1                                   Determines whether battery he...
C    Active_HeatLoads                 1.            1                                   Determines whether misc heat ...
C    Active_TEC                       1.            1                                   Determines whether TEC connec...
C    Alpha_BlackAnno                  0.54          0.54                                Absportivity of black anno
C    Alpha_Cu                         0.3           0.30                                Solar Absorptance of copper
C    Alpha_PurpleCoating              0.8           0.8                                 Absorptivity of purple coatin...
C    Alpha_SolarPanel                 0.92          0.92 
C    BatteryHeatDissipation           1.            1                                   Amount of heat (W) dissipated...
C    Conductance_End_caps             0.8045        0.8045 
C    cp_Al                            900.          900                                 Specific heat of 6061-type2 Al
C    cp_Battery                       837.4         837.4 
C    cp_Cu                            386.          386                                 Specific Heat of Copper
C    cp_PCB                           1144.         1144                                Specific Heat of PCB assuming...
C    ElecConn_FortyPinConnector       0.1178        0.1178 
C    ElecConn_SolarCardConnector      0.00558       0.00558 
C    Epsilon_BlackAnno                0.75          0.75                                Emissivity of black annodization
C    Epsilon_Cu                       0.03          0.03                                Emissivity of Copper
C    Epsilon_PurpleCoating            0.8           0.8                                 Emissivity of purple coating ...
C    Epsilon_SolarPanel               0.85          0.85 
C    FotyPinConnector_Conductance     0.1178        0.1178 
C    hrBetaAngle                      0.            0 
C    hrEccen                          0.            0 
C    hrIllum                          0.            0 
C    hrMeanAnom                       0.            0 
C    hrPeriod                         5553.62       5553.62                             Always in current user units....
C    hrPeriodSec                      5553.62       5553.62 
C    hrPlanetX                        0.            0 
C    hrPlanetY                        0.            0 
C    hrPlanetZ                        1.            1 
C    hrPos                            0.            0 
C    hrShadowEntry                    109.784       109.784 
C    hrShadowExit                     250.216       250.216 
C    hrSpeed                          7.66856       7.66856 
C    hrSubSolarMeanAnom               6.113030e-12  6.11303e-12                         -180 to 180
C    hrSubSolarTrueAnom               6.113030e-12  6.11303e-12                         -180 to 180
C    hrSunX                           1.066920e-13  1.06692e-13 
C    hrSunY                           0.            0 
C    hrSunZ                           -1.           -1 
C    hrTime                           0.            0                                   Always in current user units....
C    hrTimeSec                        0.            0 
C    hrTimeShadowEntry                1693.6        1693.6 
C    hrTimeShadowEntrySec             1693.6        1693.6 
C    hrTimeShadowExit                 3860.02       3860.02 
C    hrTimeShadowExitSec              3860.02       3860.02 
C    hrTrueAnom                       0.            0 
C    hrVelocityX                      1.            1 
C    hrVelocityY                      0.            0 
C    hrVelocityZ                      0.            0 
C    k_Al                             167.          167                                 Conductivity of 6061-type2 Al...
C    k_Battery                        300.          300 
C    k_Cu                             385.          385                                 conductivity of copper
C    k_G10                            0.288         0.288                               Conductivity of G10 fiberglas...
C    k_PCB                            12.           12                                  Conductivity of 2-layer FR4 P...
C    k_SS                             17.           17                                  Conductivity of Stainless Ste...
C    m2_Conductance                   0.0256        0.0256 
C    Mass_Heatsink                    0.479         .479                                Mass of thermal mass in kg
C    MechConn_24mmSSSocketHeadScrew   0.002225295   k_SS*(pi*(0.002/2)^2)/(0.024)       Conduction of 24mm M2 fastend...
C    MechConn_BatteryToCard           0.108         0.108                               Conductance of mechanical con...
C    MechConn_CardToXFrame            0.144         0.144                               Conductance of mechanical con...
C    MechConn_CardToYFrames           0.3301        0.3301                              Conductance of mechanical con...
C    MechConn_CFCLensToLensMount      1.            1                                   Conductance (W/C) from top ed...
C    MechConn_DetectorToTEC           11.           11                                  Absolute Thermal Connection b...
C    MechConn_EndCaps                 0.8045        0.8045 
C    MechConn_LensMountFastener       0.0436967     k_SS*(pi*(0.003)^2)/(0.011)         Conductance (W/K) for fastene...
C    MechConn_LensMountLegs           1.            1                                   Conductance (W/K) of lens mou...
C    MechConn_M2                      3.09          3.09 
C    MechConn_OreSatLiveCardStandOffs 3.09          3.09                                Conductance (W/C) for stand o...
C    MechConn_RTV                     1.21          1.21 
C    MechConn_SupportBracketToFrames  0.2390617     k_G10*0.1104/.133                   Connection between fiberglass...
C    MechConn_TECToPedestal           11.           11                                  Connection between the thermo...
C    MechConn_ThermalMassStandOff     1.            1                                   (W/K) - k*A/L model for fiber...
C    MechConn_ThermalMassToCFCCard    0.2925087     1/((k_G10*.001582/0.008)+(k_SS*.... Connection between thermal ma...
C    MechConn_ThermalMassToLensMount  14.28866      k_Cu*.000180/.00485                 Conductance (W/K) of Copper s...
C    MechConn_ThermalStrap            10.13051      k_Al*((0.006*0.015/0.0204)+(0.01... Conductance (W/K) Between the...
C    Power_CFCCard                    0.5           0.5                                 Power of CFC card (in W)
C    Power_Detector                   0.1           0.1                                 Power incident to detector (i...
C    Power_HeatLoadAboveCFCCard       2.            2                                   Power on card above CFC card
C    Power_OreSatLive                 2.5           2.5                                 Power (W) for OreSat Live Card
C    Power_OreSatLiveCard             0.2555        0.2555                              Watts per pass for OreSat Liv...
C    Power_TEC                        2.            2                                   Power of CFC thermoelectric c...
C    rho_Al                           2700.         2700                                Density of 6061-type2 Al
C    rho_Battery                      2007.7        2007.7 
C    rho_Cu                           8920.         8920                                Density of copper
C    rho_PCB                          2077.         2077                                Density of PCB assuming 97.5%...
C    RVT_Conductance                  1.21          1.21 
C    SolarCardConnector_Conductance   0.00558       0.00558 
C    ThermalMass_Heatsink             184.894       Mass_Heatsink*cp_Cu                 Thermal mass in J/K
C    Thickness_HeatSink               10.           10                                  Thickness of Cu Heat Sink (in...
C    time_TransientFinal              22214.48      4*hrPeriod                          Total time to run transient s...
C
HEADER REGISTER DATA
      CC_2284 = 0. $ TEC Cycle
      CO_2284 = 0. $ TEC Info Optimum COP
      CU_2284 = 0. $ TEC Current
      DT_2284 = 0. $ TEC Info max temp lift
      IM_2284 = 0. $ TEC Info max current
      IO_2284 = 0. $ TEC Info Optimum Current
      KK_2284 = 0. $ TEC Calculated Conductivity
      OO_2284 = 0. $ TEC On Off Status
      P_2284 = 0. $ TEC Power
      QC_2284 = 0. $ TEC Info Max Cold Production
      QO_2284 = 0. $ TEC Info Cold Production at the Optimum Current
      R_2284 = 0. $ TEC Calculated Resistance
      S_2284 = 0. $ TEC Calculated Seebeck Coef
      VM_2284 = 0. $ TEC Info max voltage
      VO_2284 = 0. $ TEC Info Optimum Voltage
      V_2284 = 0. $ TEC Voltage
HEADER NODE DATA, BACKPLANE_TO_FRAME
HEADER CONDUCTOR DATA, BACKPLANE_TO_FRAME
            1,    CARDS.242,    FRAMES.348,    3.09
            2,    CARDS.249,    FRAMES.351,    3.09
            3,    CARDS.251,    FRAMES.354,    3.09
            4,    CARDS.252,    FRAMES.357,    3.09
            5,    CARDS.253,    FRAMES.368,    3.09
            6,    CARDS.257,    FRAMES.377,    3.09
            7,    CARDS.258,    FRAMES.388,    3.09
            8,    CARDS.262,    FRAMES.397,    3.09
            9,    CARDS.486,    FRAMES.1147,    3.09
            10,    CARDS.685,    FRAMES.235,    3.09
            11,    CARDS.703,    FRAMES.258,    3.09
            12,    CARDS.741,    FRAMES.267,    3.09
            13,    CARDS.748,    FRAMES.278,    3.09
            14,    CARDS.755,    FRAMES.281,    3.09
            15,    CARDS.769,    FRAMES.284,    3.09
HEADER NODE DATA, BATTERY
            1,    20.,    2.428469
            2,    20.,    4.856938
            3,    20.,    4.856938
            4,    20.,    2.428469
            5,    20.,    4.856938
            6,    20.,    9.713876
            7,    20.,    9.713876
            8,    20.,    4.856938
            9,    20.,    4.856938
            10,    20.,    9.713876
            11,    20.,    9.713876
            12,    20.,    4.856938
            13,    20.,    2.428469
            14,    20.,    4.856938
            15,    20.,    4.856938
            16,    20.,    2.428469
            17,    20.,    2.428469
            18,    20.,    4.856938
            19,    20.,    4.856938
            20,    20.,    2.428469
            21,    20.,    4.856938
            22,    20.,    9.713876
            23,    20.,    9.713876
            24,    20.,    4.856938
            25,    20.,    4.856938
            26,    20.,    9.713876
            27,    20.,    9.713876
            28,    20.,    4.856938
            29,    20.,    2.428469
            30,    20.,    4.856938
            31,    20.,    4.856938
            32,    20.,    2.428469
            69,    20.,    1.157155
            70,    20.,    2.31431
            71,    20.,    2.31431
            72,    20.,    2.31431
            73,    20.,    1.157155
            74,    20.,    1.157155
            75,    20.,    2.31431
            76,    20.,    0.5785774
            77,    20.,    1.157155
            78,    20.,    1.157155
            79,    20.,    1.157155
            80,    20.,    0.5785774
            81,    20.,    2.428469
            82,    20.,    9.713876
            83,    20.,    9.713876
            84,    20.,    4.856938
            85,    20.,    2.428469
            86,    20.,    4.856938
            87,    20.,    4.856938
            88,    20.,    2.428469
            89,    20.,    2.31431
            90,    20.,    2.428469
            91,    20.,    2.31431
            92,    20.,    2.31431
            93,    20.,    4.856938
            94,    20.,    2.31431
            95,    20.,    1.157155
            96,    20.,    4.856938
            97,    20.,    1.157155
            98,    20.,    4.856938
            99,    20.,    1.157155
            100,    20.,    2.428469
            101,    20.,    1.157155
            102,    20.,    2.31431
            103,    20.,    4.856938
            104,    20.,    2.31431
            105,    20.,    2.31431
            106,    20.,    9.713876
            107,    20.,    2.31431
            108,    20.,    2.31431
            109,    20.,    9.713876
            110,    20.,    2.31431
            111,    20.,    1.157155
            112,    20.,    4.856938
            113,    20.,    1.157155
            114,    20.,    0.5785774
            115,    20.,    4.856938
            116,    20.,    0.5785774
            117,    20.,    1.157155
            118,    20.,    9.713876
            119,    20.,    1.157155
            120,    20.,    1.157155
            121,    20.,    9.713876
            122,    20.,    1.157155
            123,    20.,    1.157155
            124,    20.,    4.856938
            125,    20.,    1.157155
            126,    20.,    0.5785774
            127,    20.,    2.428469
            128,    20.,    0.5785774
            129,    20.,    4.856938
            130,    20.,    4.856938
            131,    20.,    4.856938
            132,    20.,    2.428469
            133,    20.,    2.428469
            134,    20.,    4.856938
            135,    20.,    9.713876
            136,    20.,    1.157155
            137,    20.,    9.713876
            138,    20.,    2.31431
            139,    20.,    2.31431
            140,    20.,    2.31431
            141,    20.,    1.157155
            142,    20.,    1.157155
            143,    20.,    2.31431
            144,    20.,    0.5785774
            145,    20.,    1.157155
            146,    20.,    1.157155
            147,    20.,    1.157155
            148,    20.,    4.856938
            149,    20.,    0.5785774
            150,    20.,    4.856938
HEADER CONDUCTOR DATA, BATTERY
            1,    BATTERY.1,    BATTERY.2,    1.21875
            2,    BATTERY.1,    BATTERY.5,    1.846154
            3,    BATTERY.1,    BATTERY.17,    2.166667
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            4,    BATTERY.1,    BATTERY.72,    0.0024
            5,    BATTERY.1,    BATTERY.73,    0.0006
            6,    BATTERY.2,    BATTERY.3,    1.21875
            7,    BATTERY.2,    BATTERY.6,    3.692308
            8,    BATTERY.2,    BATTERY.18,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            9,    BATTERY.2,    BATTERY.71,    0.003
            10,    BATTERY.2,    BATTERY.72,    0.003
            11,    BATTERY.3,    BATTERY.4,    1.21875
            12,    BATTERY.3,    BATTERY.7,    3.692308
            13,    BATTERY.3,    BATTERY.19,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            14,    BATTERY.3,    BATTERY.70,    0.0036
            15,    BATTERY.3,    BATTERY.71,    0.0024
            16,    BATTERY.4,    BATTERY.8,    1.846154
            17,    BATTERY.4,    BATTERY.20,    2.166667
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            18,    BATTERY.4,    BATTERY.69,    0.0012
            19,    BATTERY.4,    BATTERY.70,    0.0018
            20,    BATTERY.5,    BATTERY.6,    2.4375
            21,    BATTERY.5,    BATTERY.9,    1.846154
            22,    BATTERY.5,    BATTERY.21,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            23,    BATTERY.5,    BATTERY.72,    0.00192
            24,    BATTERY.5,    BATTERY.73,    0.00048
            25,    BATTERY.5,    BATTERY.94,    0.00288
            26,    BATTERY.5,    BATTERY.97,    0.00072
            27,    BATTERY.6,    BATTERY.7,    2.4375
            28,    BATTERY.6,    BATTERY.10,    3.692308
            29,    BATTERY.6,    BATTERY.22,    8.666666
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            30,    BATTERY.6,    BATTERY.71,    0.0024
            31,    BATTERY.6,    BATTERY.72,    0.0024
            32,    BATTERY.6,    BATTERY.91,    0.0036
            33,    BATTERY.6,    BATTERY.94,    0.0036
            34,    BATTERY.7,    BATTERY.8,    2.4375
            35,    BATTERY.7,    BATTERY.11,    3.692308
            36,    BATTERY.7,    BATTERY.23,    8.666666
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            37,    BATTERY.7,    BATTERY.70,    0.00288
            38,    BATTERY.7,    BATTERY.71,    0.00192
            39,    BATTERY.7,    BATTERY.75,    0.00432
            40,    BATTERY.7,    BATTERY.91,    0.00288
            41,    BATTERY.8,    BATTERY.12,    1.846154
            42,    BATTERY.8,    BATTERY.24,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            43,    BATTERY.8,    BATTERY.69,    0.00096
            44,    BATTERY.8,    BATTERY.70,    0.00144
            45,    BATTERY.8,    BATTERY.74,    0.00144
            46,    BATTERY.8,    BATTERY.75,    0.00216
            47,    BATTERY.9,    BATTERY.10,    2.4375
            48,    BATTERY.9,    BATTERY.13,    1.846154
            49,    BATTERY.9,    BATTERY.25,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            50,    BATTERY.9,    BATTERY.94,    0.00288
            51,    BATTERY.9,    BATTERY.97,    0.00072
            52,    BATTERY.9,    BATTERY.110,    0.00192
            53,    BATTERY.9,    BATTERY.113,    0.00048
            54,    BATTERY.10,    BATTERY.11,    2.4375
            55,    BATTERY.10,    BATTERY.14,    3.692308
            56,    BATTERY.10,    BATTERY.26,    8.666666
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            57,    BATTERY.10,    BATTERY.91,    0.0036
            58,    BATTERY.10,    BATTERY.94,    0.0036
            59,    BATTERY.10,    BATTERY.107,    0.0024
            60,    BATTERY.10,    BATTERY.110,    0.0024
            61,    BATTERY.11,    BATTERY.12,    2.4375
            62,    BATTERY.11,    BATTERY.15,    3.692308
            63,    BATTERY.11,    BATTERY.27,    8.666666
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            64,    BATTERY.11,    BATTERY.75,    0.00432
            65,    BATTERY.11,    BATTERY.91,    0.00288
            66,    BATTERY.11,    BATTERY.104,    0.00288
            67,    BATTERY.11,    BATTERY.107,    0.00192
            68,    BATTERY.12,    BATTERY.16,    1.846154
            69,    BATTERY.12,    BATTERY.28,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            70,    BATTERY.12,    BATTERY.74,    0.00144
            71,    BATTERY.12,    BATTERY.75,    0.00216
            72,    BATTERY.12,    BATTERY.101,    0.00096
            73,    BATTERY.12,    BATTERY.104,    0.00144
            74,    BATTERY.13,    BATTERY.14,    1.21875
            75,    BATTERY.13,    BATTERY.29,    2.166667
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            76,    BATTERY.13,    BATTERY.110,    0.0024
            77,    BATTERY.13,    BATTERY.113,    0.0006
            78,    BATTERY.14,    BATTERY.15,    1.21875
            79,    BATTERY.14,    BATTERY.30,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            80,    BATTERY.14,    BATTERY.107,    0.003
            81,    BATTERY.14,    BATTERY.110,    0.003
            82,    BATTERY.15,    BATTERY.16,    1.21875
            83,    BATTERY.15,    BATTERY.31,    4.333333
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            84,    BATTERY.15,    BATTERY.104,    0.0036
            85,    BATTERY.15,    BATTERY.107,    0.0024
            86,    BATTERY.16,    BATTERY.32,    2.166667
C Contact - Face Contactor-Top battery pack to card[BATTERY][1]::11CE
            87,    BATTERY.16,    BATTERY.101,    0.0012
            88,    BATTERY.16,    BATTERY.104,    0.0018
            89,    BATTERY.17,    BATTERY.18,    1.21875
            90,    BATTERY.17,    BATTERY.21,    1.846154
            91,    BATTERY.18,    BATTERY.19,    1.21875
            92,    BATTERY.18,    BATTERY.22,    3.692308
            93,    BATTERY.19,    BATTERY.20,    1.21875
            94,    BATTERY.19,    BATTERY.23,    3.692308
            95,    BATTERY.20,    BATTERY.24,    1.846154
            96,    BATTERY.21,    BATTERY.22,    2.4375
            97,    BATTERY.21,    BATTERY.25,    1.846154
            98,    BATTERY.22,    BATTERY.23,    2.4375
            99,    BATTERY.22,    BATTERY.26,    3.692308
            100,    BATTERY.23,    BATTERY.24,    2.4375
            101,    BATTERY.23,    BATTERY.27,    3.692308
            102,    BATTERY.24,    BATTERY.28,    1.846154
            103,    BATTERY.25,    BATTERY.26,    2.4375
            104,    BATTERY.25,    BATTERY.29,    1.846154
            105,    BATTERY.26,    BATTERY.27,    2.4375
            106,    BATTERY.26,    BATTERY.30,    3.692308
            107,    BATTERY.27,    BATTERY.28,    2.4375
            108,    BATTERY.27,    BATTERY.31,    3.692308
            109,    BATTERY.28,    BATTERY.32,    1.846154
            110,    BATTERY.29,    BATTERY.30,    1.21875
            111,    BATTERY.30,    BATTERY.31,    1.21875
            112,    BATTERY.31,    BATTERY.32,    1.21875
            113,    BATTERY.81,    BATTERY.90,    2.166667
            114,    BATTERY.81,    BATTERY.98,    1.21875
            115,    BATTERY.81,    BATTERY.134,    1.846154
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            116,    BATTERY.81,    BATTERY.140,    0.0024
            117,    BATTERY.81,    BATTERY.141,    0.0006
            118,    BATTERY.82,    BATTERY.83,    2.4375
            119,    BATTERY.82,    BATTERY.86,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            120,    BATTERY.82,    BATTERY.89,    0.0036
            121,    BATTERY.82,    BATTERY.92,    0.0036
            122,    BATTERY.82,    BATTERY.105,    0.0024
            123,    BATTERY.82,    BATTERY.108,    0.0024
            124,    BATTERY.82,    BATTERY.118,    8.666666
            125,    BATTERY.82,    BATTERY.135,    3.692308
            126,    BATTERY.82,    BATTERY.150,    2.4375
            127,    BATTERY.83,    BATTERY.84,    2.4375
            128,    BATTERY.83,    BATTERY.87,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            129,    BATTERY.83,    BATTERY.89,    0.00288
            130,    BATTERY.83,    BATTERY.102,    0.00288
            131,    BATTERY.83,    BATTERY.105,    0.00192
            132,    BATTERY.83,    BATTERY.121,    8.666666
            133,    BATTERY.83,    BATTERY.137,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            134,    BATTERY.83,    BATTERY.143,    0.00432
            135,    BATTERY.84,    BATTERY.88,    1.846154
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            136,    BATTERY.84,    BATTERY.99,    0.00096
            137,    BATTERY.84,    BATTERY.102,    0.00144
            138,    BATTERY.84,    BATTERY.124,    4.333333
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            139,    BATTERY.84,    BATTERY.142,    0.00144
            140,    BATTERY.84,    BATTERY.143,    0.00216
            141,    BATTERY.84,    BATTERY.148,    1.846154
            142,    BATTERY.85,    BATTERY.86,    1.21875
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            143,    BATTERY.85,    BATTERY.108,    0.0024
            144,    BATTERY.85,    BATTERY.111,    0.0006
            145,    BATTERY.85,    BATTERY.127,    2.166667
            146,    BATTERY.85,    BATTERY.150,    1.846154
            147,    BATTERY.86,    BATTERY.87,    1.21875
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            148,    BATTERY.86,    BATTERY.105,    0.003
            149,    BATTERY.86,    BATTERY.108,    0.003
            150,    BATTERY.86,    BATTERY.130,    4.333333
            151,    BATTERY.87,    BATTERY.88,    1.21875
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            152,    BATTERY.87,    BATTERY.102,    0.0036
            153,    BATTERY.87,    BATTERY.105,    0.0024
            154,    BATTERY.87,    BATTERY.131,    4.333333
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            155,    BATTERY.88,    BATTERY.99,    0.0012
            156,    BATTERY.88,    BATTERY.102,    0.0018
            157,    BATTERY.88,    BATTERY.132,    2.166667
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            158,    BATTERY.89,    BATTERY.135,    0.0036
            159,    BATTERY.89,    BATTERY.137,    0.00288
            160,    BATTERY.90,    BATTERY.93,    1.21875
            161,    BATTERY.90,    BATTERY.103,    1.846154
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            162,    BATTERY.92,    BATTERY.134,    0.00288
            163,    BATTERY.92,    BATTERY.135,    0.0036
            164,    BATTERY.92,    BATTERY.150,    0.00288
            165,    BATTERY.93,    BATTERY.96,    1.21875
            166,    BATTERY.93,    BATTERY.98,    4.333333
            167,    BATTERY.93,    BATTERY.106,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            168,    BATTERY.95,    BATTERY.134,    0.00072
            169,    BATTERY.95,    BATTERY.150,    0.00072
            170,    BATTERY.96,    BATTERY.100,    1.21875
            171,    BATTERY.96,    BATTERY.109,    3.692308
            172,    BATTERY.96,    BATTERY.129,    4.333333
            173,    BATTERY.98,    BATTERY.129,    1.21875
            174,    BATTERY.98,    BATTERY.135,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            175,    BATTERY.98,    BATTERY.139,    0.003
            176,    BATTERY.98,    BATTERY.140,    0.003
            177,    BATTERY.100,    BATTERY.112,    1.846154
            178,    BATTERY.100,    BATTERY.133,    2.166667
            179,    BATTERY.103,    BATTERY.106,    2.4375
            180,    BATTERY.103,    BATTERY.115,    1.846154
            181,    BATTERY.103,    BATTERY.134,    4.333333
            182,    BATTERY.106,    BATTERY.109,    2.4375
            183,    BATTERY.106,    BATTERY.118,    3.692308
            184,    BATTERY.106,    BATTERY.135,    8.666666
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            185,    BATTERY.108,    BATTERY.150,    0.00192
            186,    BATTERY.109,    BATTERY.112,    2.4375
            187,    BATTERY.109,    BATTERY.121,    3.692308
            188,    BATTERY.109,    BATTERY.137,    8.666666
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            189,    BATTERY.111,    BATTERY.150,    0.00048
            190,    BATTERY.112,    BATTERY.124,    1.846154
            191,    BATTERY.112,    BATTERY.148,    4.333333
            192,    BATTERY.115,    BATTERY.118,    2.4375
            193,    BATTERY.115,    BATTERY.127,    1.846154
            194,    BATTERY.115,    BATTERY.150,    4.333333
            195,    BATTERY.118,    BATTERY.121,    2.4375
            196,    BATTERY.118,    BATTERY.130,    3.692308
            197,    BATTERY.121,    BATTERY.124,    2.4375
            198,    BATTERY.121,    BATTERY.131,    3.692308
            199,    BATTERY.124,    BATTERY.132,    1.846154
            200,    BATTERY.127,    BATTERY.130,    1.21875
            201,    BATTERY.129,    BATTERY.133,    1.21875
            202,    BATTERY.129,    BATTERY.137,    3.692308
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            203,    BATTERY.129,    BATTERY.138,    0.0036
            204,    BATTERY.129,    BATTERY.139,    0.0024
            205,    BATTERY.130,    BATTERY.131,    1.21875
            206,    BATTERY.131,    BATTERY.132,    1.21875
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            207,    BATTERY.133,    BATTERY.136,    0.0012
            208,    BATTERY.133,    BATTERY.138,    0.0018
            209,    BATTERY.133,    BATTERY.148,    1.846154
            210,    BATTERY.134,    BATTERY.135,    2.4375
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            211,    BATTERY.134,    BATTERY.140,    0.00192
            212,    BATTERY.134,    BATTERY.141,    0.00048
            213,    BATTERY.134,    BATTERY.150,    1.846154
            214,    BATTERY.135,    BATTERY.137,    2.4375
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            215,    BATTERY.135,    BATTERY.139,    0.0024
            216,    BATTERY.135,    BATTERY.140,    0.0024
            217,    BATTERY.136,    BATTERY.148,    0.00096
            218,    BATTERY.137,    BATTERY.138,    0.00288
            219,    BATTERY.137,    BATTERY.139,    0.00192
            220,    BATTERY.137,    BATTERY.143,    0.00432
            221,    BATTERY.137,    BATTERY.148,    2.4375
C Contact - Face Contactor-Bottom battery pack to card[BATTERY][12]::3D8
            222,    BATTERY.138,    BATTERY.148,    0.00144
            223,    BATTERY.142,    BATTERY.148,    0.00144
            224,    BATTERY.143,    BATTERY.148,    0.00216
HEADER NODE DATA, CARDS
            1,    20.,    0.6195993
            2,    20.,    0.6195993
            3,    20.,    0.6195993
            4,    20.,    0.6195993
            5,    20.,    0.6195993
            6,    20.,    0.6195993
            7,    20.,    0.6195993
            8,    20.,    0.6195993
            9,    20.,    0.6195993
            10,    20.,    2.31431
            11,    20.,    1.157155
            12,    20.,    1.157155
            13,    20.,    2.31431
            14,    20.,    2.31431
            15,    20.,    2.31431
            16,    20.,    1.157155
            17,    20.,    1.157155
            18,    20.,    2.31431
            19,    20.,    2.31431
            20,    20.,    2.31431
            21,    20.,    1.157155
            22,    20.,    0.5785774
            23,    20.,    1.157155
            24,    20.,    1.157155
            25,    20.,    1.157155
            26,    20.,    0.5785774
            66,    20.,    0.5785774
            67,    20.,    1.157155
            68,    20.,    1.157155
            69,    20.,    1.157155
            70,    20.,    0.5785774
            71,    20.,    1.157155
            72,    20.,    2.31431
            73,    20.,    2.31431
            74,    20.,    2.31431
            75,    20.,    1.157155
            76,    20.,    1.157155
            77,    20.,    2.31431
            78,    20.,    2.31431
            79,    20.,    2.31431
            80,    20.,    1.157155
            81,    20.,    1.157155
            82,    20.,    2.31431
            83,    20.,    2.31431
            84,    20.,    2.31431
            85,    20.,    1.157155
            86,    20.,    0.5785774
            87,    20.,    1.157155
            88,    20.,    1.157155
            89,    20.,    1.157155
            90,    20.,    0.5785774
            186,    20.,    2.259924
            193,    20.,    2.259924
            200,    20.,    1.129962
            207,    20.,    1.129962
            214,    20.,    2.259924
            221,    20.,    2.259924
            228,    20.,    2.259924
            235,    20.,    1.129962
            242,    20.,    1.129962
            249,    20.,    2.259924
            250,    20.,    2.259924
            251,    20.,    2.259924
            252,    20.,    1.129962
            253,    20.,    1.129962
            254,    20.,    2.259924
            255,    20.,    2.259924
            256,    20.,    2.259924
            257,    20.,    1.129962
            258,    20.,    1.129962
            259,    20.,    2.259924
            260,    20.,    2.259924
            261,    20.,    2.259924
            262,    20.,    1.129962
            263,    20.,    0.5649809
            264,    20.,    1.129962
            265,    20.,    1.129962
            266,    20.,    1.129962
            267,    20.,    0.5649809
            458,    20.,    0.5649809
            461,    20.,    1.129962
            468,    20.,    1.129962
            474,    20.,    1.129962
            480,    20.,    0.5649809
            486,    20.,    1.129962
            643,    20.,    2.259924
            685,    20.,    1.129962
            703,    20.,    1.129962
            721,    20.,    2.259924
            727,    20.,    2.259924
            734,    20.,    2.259924
            741,    20.,    1.129962
            748,    20.,    1.129962
            755,    20.,    2.259924
            762,    20.,    2.259924
            769,    20.,    2.259924
            776,    20.,    1.129962
            783,    20.,    1.129962
            790,    20.,    2.259924
            795,    20.,    2.259924
            799,    20.,    2.259924
            800,    20.,    2.376088
            801,    20.,    1.188044
            802,    20.,    1.188044
            803,    20.,    2.376088
            804,    20.,    2.376088
            805,    20.,    2.376088
            806,    20.,    1.188044
            807,    20.,    1.188044
            808,    20.,    2.376088
            809,    20.,    2.376088
            810,    20.,    0.594022
            811,    20.,    2.376088
            812,    20.,    1.188044
            813,    20.,    0.594022
            814,    20.,    1.188044
            815,    20.,    1.188044
            816,    20.,    1.188044
            817,    20.,    0.594022
            818,    20.,    1.188044
            819,    20.,    1.188044
            820,    20.,    1.188044
            821,    20.,    0.594022
            822,    20.,    0.594022
            823,    20.,    1.188044
            824,    20.,    1.188044
            825,    20.,    1.188044
            826,    20.,    1.188044
            827,    20.,    0.594022
            828,    20.,    1.188044
            829,    20.,    2.376088
            830,    20.,    2.376088
            831,    20.,    2.376088
            832,    20.,    1.188044
            833,    20.,    1.188044
            834,    20.,    2.376088
            835,    20.,    2.376088
            836,    20.,    2.376088
            837,    20.,    2.376088
            838,    20.,    1.188044
            839,    20.,    1.188044
            840,    20.,    2.376088
            841,    20.,    2.376088
            842,    20.,    2.376088
            843,    20.,    1.188044
            844,    20.,    0.594022
            845,    20.,    1.188044
            846,    20.,    1.188044
            847,    20.,    1.188044
            848,    20.,    2.376088
            849,    20.,    0.594022
            850,    20.,    2.31431
            852,    20.,    2.31431
            853,    20.,    1.157155
            855,    20.,    1.157155
            856,    20.,    1.157155
            858,    20.,    1.157155
            859,    20.,    2.31431
            861,    20.,    2.31431
            862,    20.,    2.31431
            864,    20.,    2.31431
            865,    20.,    2.31431
            867,    20.,    2.31431
            868,    20.,    1.157155
            870,    20.,    1.157155
            871,    20.,    1.157155
            873,    20.,    1.157155
            874,    20.,    2.31431
            876,    20.,    2.31431
            877,    20.,    2.31431
            879,    20.,    2.31431
            880,    20.,    0.5785774
            882,    20.,    0.5785774
            883,    20.,    2.31431
            885,    20.,    2.31431
            886,    20.,    1.157155
            888,    20.,    1.157155
            889,    20.,    0.5785774
            891,    20.,    0.5785774
            892,    20.,    1.157155
            894,    20.,    1.157155
            895,    20.,    1.157155
            897,    20.,    1.157155
            898,    20.,    1.157155
            900,    20.,    1.157155
            901,    20.,    0.5785774
            903,    20.,    0.5785774
            904,    20.,    1.157155
            906,    20.,    1.157155
            907,    20.,    1.157155
            909,    20.,    1.157155
            910,    20.,    1.157155
            912,    20.,    1.157155
            913,    20.,    0.5785774
            915,    20.,    0.5785774
            916,    20.,    0.5785774
            917,    20.,    0.5785774
            918,    20.,    0.5785774
            919,    20.,    0.5785774
            920,    20.,    1.157155
            921,    20.,    1.157155
            922,    20.,    1.157155
            923,    20.,    1.157155
            924,    20.,    1.157155
            925,    20.,    1.157155
            926,    20.,    1.157155
            927,    20.,    1.157155
            928,    20.,    1.157155
            929,    20.,    1.157155
            930,    20.,    1.157155
            931,    20.,    1.157155
            932,    20.,    1.157155
            934,    20.,    1.157155
            935,    20.,    0.5785774
            936,    20.,    0.5785774
            937,    20.,    0.5785774
            938,    20.,    0.5785774
            939,    20.,    1.157155
            940,    20.,    1.157155
            941,    20.,    1.157155
            942,    20.,    1.157155
            943,    20.,    2.31431
            944,    20.,    2.31431
            945,    20.,    2.31431
            946,    20.,    2.31431
            947,    20.,    2.31431
            948,    20.,    2.31431
            949,    20.,    2.31431
            950,    20.,    2.31431
            951,    20.,    2.31431
            952,    20.,    2.31431
            953,    20.,    2.31431
            954,    20.,    2.31431
            955,    20.,    1.157155
            956,    20.,    1.157155
            957,    20.,    1.157155
            958,    20.,    1.157155
            959,    20.,    1.157155
            960,    20.,    1.157155
            961,    20.,    1.157155
            962,    20.,    1.157155
            963,    20.,    2.31431
            964,    20.,    2.31431
            965,    20.,    2.31431
            966,    20.,    2.31431
            967,    20.,    2.31431
            968,    20.,    2.31431
            969,    20.,    2.31431
            970,    20.,    2.31431
            971,    20.,    2.31431
            972,    20.,    2.31431
            973,    20.,    2.31431
            974,    20.,    2.31431
            975,    20.,    2.31431
            977,    20.,    2.31431
            978,    20.,    1.157155
            979,    20.,    1.157155
            980,    20.,    1.157155
            981,    20.,    1.157155
            982,    20.,    1.157155
            983,    20.,    1.157155
            984,    20.,    1.157155
            985,    20.,    1.157155
            986,    20.,    2.31431
            987,    20.,    2.31431
            988,    20.,    2.31431
            989,    20.,    2.31431
            990,    20.,    2.31431
            991,    20.,    2.31431
            992,    20.,    2.31431
            993,    20.,    2.31431
            994,    20.,    2.31431
            995,    20.,    2.31431
            996,    20.,    2.31431
            997,    20.,    2.31431
            998,    20.,    1.157155
            999,    20.,    1.157155
            1000,    20.,    1.157155
            1001,    20.,    1.157155
            1002,    20.,    0.5785774
            1003,    20.,    0.5785774
            1004,    20.,    0.5785774
            1005,    20.,    0.5785774
            1006,    20.,    1.157155
            1007,    20.,    1.157155
            1008,    20.,    1.157155
            1009,    20.,    1.157155
            1010,    20.,    1.157155
            1011,    20.,    1.157155
            1012,    20.,    1.157155
            1013,    20.,    1.157155
            1014,    20.,    1.157155
            1015,    20.,    1.157155
            1016,    20.,    1.157155
            1017,    20.,    1.157155
            1018,    20.,    2.31431
            1020,    20.,    2.31431
            1021,    20.,    0.5785774
            1022,    20.,    0.5785774
            1023,    20.,    0.5785774
            1024,    20.,    0.5785774
            1025,    20.,    0.5785774
            1026,    20.,    1.157155
            1027,    20.,    1.157155
            1028,    20.,    1.157155
            1029,    20.,    0.5785774
            1030,    20.,    1.157155
            1031,    20.,    2.31431
            1032,    20.,    2.31431
HEADER CONDUCTOR DATA, CARDS
            1,    BATTERY.69,    BATTERY.70,    0.01971252
            2,    BATTERY.69,    BATTERY.74,    0.0093504
            3,    BATTERY.69,    BATTERY.76,    0.0093504
            4,    BATTERY.70,    BATTERY.71,    0.01971252
            5,    BATTERY.70,    BATTERY.75,    0.0187008
            6,    BATTERY.70,    BATTERY.77,    0.0187008
            7,    BATTERY.71,    BATTERY.72,    0.01971252
            8,    BATTERY.71,    BATTERY.78,    0.0187008
            9,    BATTERY.71,    BATTERY.91,    0.0187008
            10,    BATTERY.72,    BATTERY.73,    0.01971252
            11,    BATTERY.72,    BATTERY.79,    0.0187008
            12,    BATTERY.72,    BATTERY.94,    0.0187008
            13,    BATTERY.73,    BATTERY.80,    0.0093504
            14,    BATTERY.73,    BATTERY.97,    0.0093504
            15,    BATTERY.74,    BATTERY.75,    0.01971252
            16,    BATTERY.74,    BATTERY.101,    0.0093504
            17,    BATTERY.75,    BATTERY.91,    0.01971252
            18,    BATTERY.75,    BATTERY.104,    0.0187008
            19,    BATTERY.76,    BATTERY.77,    0.009856262
            20,    BATTERY.77,    BATTERY.78,    0.009856262
            21,    BATTERY.78,    BATTERY.79,    0.009856262
            22,    BATTERY.79,    BATTERY.80,    0.009856262
            23,    BATTERY.89,    BATTERY.92,    0.01971252
            24,    BATTERY.89,    BATTERY.105,    0.0187008
            25,    BATTERY.89,    BATTERY.139,    0.0187008
            26,    BATTERY.89,    BATTERY.143,    0.01971252
            27,    BATTERY.91,    BATTERY.94,    0.01971252
            28,    BATTERY.91,    BATTERY.107,    0.0187008
            29,    BATTERY.92,    BATTERY.95,    0.01971252
            30,    BATTERY.92,    BATTERY.108,    0.0187008
            31,    BATTERY.92,    BATTERY.140,    0.0187008
            32,    BATTERY.94,    BATTERY.97,    0.01971252
            33,    BATTERY.94,    BATTERY.110,    0.0187008
            34,    BATTERY.95,    BATTERY.111,    0.0093504
            35,    BATTERY.95,    BATTERY.141,    0.0093504
            36,    BATTERY.97,    BATTERY.113,    0.0093504
            37,    BATTERY.99,    BATTERY.102,    0.01971252
            38,    BATTERY.99,    BATTERY.114,    0.0093504
            39,    BATTERY.99,    BATTERY.142,    0.0093504
            40,    BATTERY.101,    BATTERY.104,    0.01971252
            41,    BATTERY.101,    BATTERY.116,    0.0093504
            42,    BATTERY.102,    BATTERY.105,    0.01971252
            43,    BATTERY.102,    BATTERY.117,    0.0187008
            44,    BATTERY.102,    BATTERY.143,    0.0187008
            45,    BATTERY.104,    BATTERY.107,    0.01971252
            46,    BATTERY.104,    BATTERY.119,    0.0187008
            47,    BATTERY.105,    BATTERY.108,    0.01971252
            48,    BATTERY.105,    BATTERY.120,    0.0187008
            49,    BATTERY.107,    BATTERY.110,    0.01971252
            50,    BATTERY.107,    BATTERY.122,    0.0187008
            51,    BATTERY.108,    BATTERY.111,    0.01971252
            52,    BATTERY.108,    BATTERY.123,    0.0187008
            53,    BATTERY.110,    BATTERY.113,    0.01971252
            54,    BATTERY.110,    BATTERY.125,    0.0187008
            55,    BATTERY.111,    BATTERY.126,    0.0093504
            56,    BATTERY.113,    BATTERY.128,    0.0093504
            57,    BATTERY.114,    BATTERY.117,    0.009856262
            58,    BATTERY.116,    BATTERY.119,    0.009856262
            59,    BATTERY.117,    BATTERY.120,    0.009856262
            60,    BATTERY.119,    BATTERY.122,    0.009856262
            61,    BATTERY.120,    BATTERY.123,    0.009856262
            62,    BATTERY.122,    BATTERY.125,    0.009856262
            63,    BATTERY.123,    BATTERY.126,    0.009856262
            64,    BATTERY.125,    BATTERY.128,    0.009856262
            65,    BATTERY.136,    BATTERY.138,    0.01971252
            66,    BATTERY.136,    BATTERY.142,    0.0093504
            67,    BATTERY.136,    BATTERY.144,    0.0093504
            68,    BATTERY.138,    BATTERY.139,    0.01971252
            69,    BATTERY.138,    BATTERY.143,    0.0187008
            70,    BATTERY.138,    BATTERY.145,    0.0187008
            71,    BATTERY.139,    BATTERY.140,    0.01971252
            72,    BATTERY.139,    BATTERY.146,    0.0187008
            73,    BATTERY.140,    BATTERY.141,    0.01971252
            74,    BATTERY.140,    BATTERY.147,    0.0187008
            75,    BATTERY.141,    BATTERY.149,    0.0093504
            76,    BATTERY.142,    BATTERY.143,    0.01971252
            77,    BATTERY.144,    BATTERY.145,    0.009856262
            78,    BATTERY.145,    BATTERY.146,    0.009856262
            79,    BATTERY.146,    BATTERY.147,    0.009856262
            80,    BATTERY.147,    BATTERY.149,    0.009856262
            81,    CARDS.1,    CARDS.2,    0.01950316
            82,    CARDS.1,    CARDS.4,    0.01890155
            83,    CARDS.2,    CARDS.3,    0.01950316
            84,    CARDS.2,    CARDS.5,    0.01890155
            85,    CARDS.3,    CARDS.6,    0.01890155
            86,    CARDS.4,    CARDS.5,    0.01950316
            87,    CARDS.4,    CARDS.7,    0.01890155
            88,    CARDS.5,    CARDS.6,    0.01950316
            89,    CARDS.5,    CARDS.8,    0.01890155
            90,    CARDS.6,    CARDS.9,    0.01890155
            91,    CARDS.7,    CARDS.8,    0.01950316
            92,    CARDS.8,    CARDS.9,    0.01950316
            93,    CARDS.10,    CARDS.11,    0.01971252
            94,    CARDS.10,    CARDS.15,    0.0187008
            95,    CARDS.10,    CARDS.1028,    0.0187008
            96,    CARDS.10,    CARDS.1032,    0.01971252
            97,    CARDS.11,    CARDS.16,    0.0093504
            98,    CARDS.11,    CARDS.1029,    0.0093504
            99,    CARDS.12,    CARDS.13,    0.01971252
            100,    CARDS.12,    CARDS.17,    0.0093504
            101,    CARDS.12,    CARDS.1030,    0.0093504
            102,    CARDS.13,    CARDS.14,    0.01971252
            103,    CARDS.13,    CARDS.18,    0.0187008
            104,    CARDS.13,    CARDS.1031,    0.0187008
            105,    CARDS.14,    CARDS.15,    0.01971252
            106,    CARDS.14,    CARDS.19,    0.0187008
            107,    CARDS.14,    CARDS.1032,    0.0187008
            108,    CARDS.15,    CARDS.16,    0.01971252
            109,    CARDS.15,    CARDS.20,    0.0187008
            110,    CARDS.16,    CARDS.21,    0.0093504
            111,    CARDS.17,    CARDS.18,    0.01971252
            112,    CARDS.17,    CARDS.22,    0.0093504
            113,    CARDS.18,    CARDS.19,    0.01971252
            114,    CARDS.18,    CARDS.23,    0.0187008
            115,    CARDS.19,    CARDS.20,    0.01971252
            116,    CARDS.19,    CARDS.24,    0.0187008
            117,    CARDS.20,    CARDS.21,    0.01971252
            118,    CARDS.20,    CARDS.25,    0.0187008
            119,    CARDS.21,    CARDS.26,    0.0093504
            120,    CARDS.22,    CARDS.23,    0.009856262
            121,    CARDS.23,    CARDS.24,    0.009856262
            122,    CARDS.24,    CARDS.25,    0.009856262
            123,    CARDS.25,    CARDS.26,    0.009856262
            124,    CARDS.66,    CARDS.67,    0.009856262
            125,    CARDS.66,    CARDS.71,    0.0093504
            126,    CARDS.67,    CARDS.68,    0.009856262
            127,    CARDS.67,    CARDS.72,    0.0187008
            128,    CARDS.68,    CARDS.69,    0.009856262
            129,    CARDS.68,    CARDS.73,    0.0187008
            130,    CARDS.69,    CARDS.70,    0.009856262
            131,    CARDS.69,    CARDS.74,    0.0187008
            132,    CARDS.70,    CARDS.75,    0.0093504
            133,    CARDS.71,    CARDS.72,    0.01971252
            134,    CARDS.71,    CARDS.76,    0.0093504
            135,    CARDS.72,    CARDS.73,    0.01971252
            136,    CARDS.72,    CARDS.77,    0.0187008
            137,    CARDS.73,    CARDS.74,    0.01971252
            138,    CARDS.73,    CARDS.78,    0.0187008
            139,    CARDS.74,    CARDS.75,    0.01971252
            140,    CARDS.74,    CARDS.79,    0.0187008
            141,    CARDS.75,    CARDS.80,    0.0093504
            142,    CARDS.76,    CARDS.77,    0.01971252
            143,    CARDS.76,    CARDS.81,    0.0093504
            144,    CARDS.77,    CARDS.78,    0.01971252
            145,    CARDS.77,    CARDS.82,    0.0187008
            146,    CARDS.78,    CARDS.79,    0.01971252
            147,    CARDS.78,    CARDS.83,    0.0187008
            148,    CARDS.79,    CARDS.80,    0.01971252
            149,    CARDS.79,    CARDS.84,    0.0187008
            150,    CARDS.80,    CARDS.85,    0.0093504
            151,    CARDS.81,    CARDS.82,    0.01971252
            152,    CARDS.81,    CARDS.86,    0.0093504
            153,    CARDS.82,    CARDS.83,    0.01971252
            154,    CARDS.82,    CARDS.87,    0.0187008
            155,    CARDS.83,    CARDS.84,    0.01971252
            156,    CARDS.83,    CARDS.88,    0.0187008
            157,    CARDS.84,    CARDS.85,    0.01971252
            158,    CARDS.84,    CARDS.89,    0.0187008
            159,    CARDS.85,    CARDS.90,    0.0093504
            160,    CARDS.86,    CARDS.87,    0.009856262
            161,    CARDS.87,    CARDS.88,    0.009856262
            162,    CARDS.88,    CARDS.89,    0.009856262
            163,    CARDS.89,    CARDS.90,    0.009856262
            164,    CARDS.186,    CARDS.193,    0.01826133
            165,    CARDS.186,    CARDS.221,    0.02018692
            166,    CARDS.186,    CARDS.762,    0.02018692
            167,    CARDS.186,    CARDS.790,    0.01826133
            168,    CARDS.193,    CARDS.200,    0.01826133
            169,    CARDS.193,    CARDS.228,    0.02018692
            170,    CARDS.193,    CARDS.769,    0.02018692
            171,    CARDS.200,    CARDS.235,    0.01009346
            172,    CARDS.200,    CARDS.776,    0.01009346
            173,    CARDS.207,    CARDS.214,    0.01826133
            174,    CARDS.207,    CARDS.242,    0.01009346
            175,    CARDS.207,    CARDS.783,    0.01009346
            176,    CARDS.214,    CARDS.221,    0.01826133
            177,    CARDS.214,    CARDS.249,    0.02018692
            178,    CARDS.214,    CARDS.790,    0.02018692
            179,    CARDS.221,    CARDS.228,    0.01826133
            180,    CARDS.221,    CARDS.250,    0.02018692
            181,    CARDS.228,    CARDS.235,    0.01826133
            182,    CARDS.228,    CARDS.251,    0.02018692
            183,    CARDS.235,    CARDS.252,    0.01009346
            184,    CARDS.242,    CARDS.249,    0.01826133
            185,    CARDS.242,    CARDS.253,    0.01009346
            186,    CARDS.249,    CARDS.250,    0.01826133
            187,    CARDS.249,    CARDS.254,    0.02018692
            188,    CARDS.250,    CARDS.251,    0.01826133
            189,    CARDS.250,    CARDS.255,    0.02018692
            190,    CARDS.251,    CARDS.252,    0.01826133
            191,    CARDS.251,    CARDS.256,    0.02018692
            192,    CARDS.252,    CARDS.257,    0.01009346
            193,    CARDS.253,    CARDS.254,    0.01826133
            194,    CARDS.253,    CARDS.258,    0.01009346
            195,    CARDS.254,    CARDS.255,    0.01826133
            196,    CARDS.254,    CARDS.259,    0.02018692
            197,    CARDS.255,    CARDS.256,    0.01826133
            198,    CARDS.255,    CARDS.260,    0.02018692
            199,    CARDS.256,    CARDS.257,    0.01826133
            200,    CARDS.256,    CARDS.261,    0.02018692
            201,    CARDS.257,    CARDS.262,    0.01009346
            202,    CARDS.258,    CARDS.259,    0.01826133
            203,    CARDS.258,    CARDS.263,    0.01009346
            204,    CARDS.259,    CARDS.260,    0.01826133
            205,    CARDS.259,    CARDS.264,    0.02018692
            206,    CARDS.260,    CARDS.261,    0.01826133
            207,    CARDS.260,    CARDS.265,    0.02018692
            208,    CARDS.261,    CARDS.262,    0.01826133
            209,    CARDS.261,    CARDS.266,    0.02018692
            210,    CARDS.262,    CARDS.267,    0.01009346
            211,    CARDS.263,    CARDS.264,    0.009130667
            212,    CARDS.264,    CARDS.265,    0.009130667
            213,    CARDS.265,    CARDS.266,    0.009130667
            214,    CARDS.266,    CARDS.267,    0.009130667
            215,    CARDS.458,    CARDS.461,    0.009130667
            216,    CARDS.458,    CARDS.486,    0.01009346
            217,    CARDS.461,    CARDS.468,    0.009130667
            218,    CARDS.461,    CARDS.643,    0.02018692
            219,    CARDS.468,    CARDS.474,    0.009130667
            220,    CARDS.468,    CARDS.795,    0.02018692
            221,    CARDS.474,    CARDS.480,    0.009130667
            222,    CARDS.474,    CARDS.799,    0.02018692
            223,    CARDS.480,    CARDS.685,    0.01009346
            224,    CARDS.486,    CARDS.643,    0.01826133
            225,    CARDS.486,    CARDS.703,    0.01009346
            226,    CARDS.643,    CARDS.721,    0.02018692
            227,    CARDS.643,    CARDS.795,    0.01826133
            228,    CARDS.685,    CARDS.741,    0.01009346
            229,    CARDS.685,    CARDS.799,    0.01826133
            230,    CARDS.703,    CARDS.721,    0.01826133
            231,    CARDS.703,    CARDS.748,    0.01009346
            232,    CARDS.721,    CARDS.727,    0.01826133
            233,    CARDS.721,    CARDS.755,    0.02018692
            234,    CARDS.727,    CARDS.734,    0.01826133
            235,    CARDS.727,    CARDS.762,    0.02018692
            236,    CARDS.727,    CARDS.795,    0.02018692
            237,    CARDS.734,    CARDS.741,    0.01826133
            238,    CARDS.734,    CARDS.769,    0.02018692
            239,    CARDS.734,    CARDS.799,    0.02018692
            240,    CARDS.741,    CARDS.776,    0.01009346
            241,    CARDS.748,    CARDS.755,    0.01826133
            242,    CARDS.748,    CARDS.783,    0.01009346
            243,    CARDS.755,    CARDS.762,    0.01826133
            244,    CARDS.755,    CARDS.790,    0.02018692
            245,    CARDS.762,    CARDS.769,    0.01826133
            246,    CARDS.769,    CARDS.776,    0.01826133
            247,    CARDS.783,    CARDS.790,    0.01826133
            248,    CARDS.795,    CARDS.799,    0.01826133
            249,    CARDS.800,    CARDS.801,    0.0192
            250,    CARDS.800,    CARDS.805,    0.0192
            251,    CARDS.800,    CARDS.820,    0.0192
            252,    CARDS.800,    CARDS.848,    0.0192
            253,    CARDS.801,    CARDS.806,    0.0096
            254,    CARDS.801,    CARDS.821,    0.0096
            255,    CARDS.802,    CARDS.803,    0.0192
            256,    CARDS.802,    CARDS.807,    0.0096
            257,    CARDS.802,    CARDS.826,    0.0096
            258,    CARDS.803,    CARDS.804,    0.0192
            259,    CARDS.803,    CARDS.808,    0.0192
            260,    CARDS.803,    CARDS.837,    0.0192
            261,    CARDS.804,    CARDS.805,    0.0192
            262,    CARDS.804,    CARDS.809,    0.0192
            263,    CARDS.804,    CARDS.848,    0.0192
            264,    CARDS.805,    CARDS.806,    0.0192
            265,    CARDS.805,    CARDS.811,    0.0192
            266,    CARDS.806,    CARDS.812,    0.0096
            267,    CARDS.807,    CARDS.808,    0.0192
            268,    CARDS.807,    CARDS.813,    0.0096
            269,    CARDS.808,    CARDS.809,    0.0192
            270,    CARDS.808,    CARDS.814,    0.0192
            271,    CARDS.809,    CARDS.811,    0.0192
            272,    CARDS.809,    CARDS.815,    0.0192
            273,    CARDS.810,    CARDS.818,    0.0096
            274,    CARDS.810,    CARDS.826,    0.0096
            275,    CARDS.811,    CARDS.812,    0.0192
            276,    CARDS.811,    CARDS.816,    0.0192
            277,    CARDS.812,    CARDS.817,    0.0096
            278,    CARDS.813,    CARDS.814,    0.0096
            279,    CARDS.814,    CARDS.815,    0.0096
            280,    CARDS.815,    CARDS.816,    0.0096
            281,    CARDS.816,    CARDS.817,    0.0096
            282,    CARDS.818,    CARDS.819,    0.0096
            283,    CARDS.818,    CARDS.837,    0.0192
            284,    CARDS.819,    CARDS.820,    0.0096
            285,    CARDS.819,    CARDS.848,    0.0192
            286,    CARDS.820,    CARDS.821,    0.0096
            287,    CARDS.822,    CARDS.823,    0.0096
            288,    CARDS.822,    CARDS.828,    0.0096
            289,    CARDS.823,    CARDS.824,    0.0096
            290,    CARDS.823,    CARDS.829,    0.0192
            291,    CARDS.824,    CARDS.825,    0.0096
            292,    CARDS.824,    CARDS.830,    0.0192
            293,    CARDS.825,    CARDS.827,    0.0096
            294,    CARDS.825,    CARDS.831,    0.0192
            295,    CARDS.826,    CARDS.837,    0.0192
            296,    CARDS.827,    CARDS.832,    0.0096
            297,    CARDS.828,    CARDS.829,    0.0192
            298,    CARDS.828,    CARDS.833,    0.0096
            299,    CARDS.829,    CARDS.830,    0.0192
            300,    CARDS.829,    CARDS.834,    0.0192
            301,    CARDS.830,    CARDS.831,    0.0192
            302,    CARDS.830,    CARDS.835,    0.0192
            303,    CARDS.831,    CARDS.832,    0.0192
            304,    CARDS.831,    CARDS.836,    0.0192
            305,    CARDS.832,    CARDS.838,    0.0096
            306,    CARDS.833,    CARDS.834,    0.0192
            307,    CARDS.833,    CARDS.839,    0.0096
            308,    CARDS.834,    CARDS.835,    0.0192
            309,    CARDS.834,    CARDS.840,    0.0192
            310,    CARDS.835,    CARDS.836,    0.0192
            311,    CARDS.835,    CARDS.841,    0.0192
            312,    CARDS.836,    CARDS.838,    0.0192
            313,    CARDS.836,    CARDS.842,    0.0192
            314,    CARDS.837,    CARDS.848,    0.0192
            315,    CARDS.838,    CARDS.843,    0.0096
            316,    CARDS.839,    CARDS.840,    0.0192
            317,    CARDS.839,    CARDS.844,    0.0096
            318,    CARDS.840,    CARDS.841,    0.0192
            319,    CARDS.840,    CARDS.845,    0.0192
            320,    CARDS.841,    CARDS.842,    0.0192
            321,    CARDS.841,    CARDS.846,    0.0192
            322,    CARDS.842,    CARDS.843,    0.0192
            323,    CARDS.842,    CARDS.847,    0.0192
            324,    CARDS.843,    CARDS.849,    0.0096
            325,    CARDS.844,    CARDS.845,    0.0096
            326,    CARDS.845,    CARDS.846,    0.0096
            327,    CARDS.846,    CARDS.847,    0.0096
            328,    CARDS.847,    CARDS.849,    0.0096
            329,    CARDS.850,    CARDS.853,    0.01971252
            330,    CARDS.850,    CARDS.865,    0.0187008
            331,    CARDS.850,    CARDS.910,    0.0187008
            332,    CARDS.850,    CARDS.1018,    0.01971252
            333,    CARDS.852,    CARDS.855,    0.01971252
            334,    CARDS.852,    CARDS.867,    0.0187008
            335,    CARDS.852,    CARDS.912,    0.0187008
            336,    CARDS.852,    CARDS.1020,    0.01971252
            337,    CARDS.853,    CARDS.868,    0.0093504
            338,    CARDS.853,    CARDS.913,    0.0093504
            339,    CARDS.855,    CARDS.870,    0.0093504
            340,    CARDS.855,    CARDS.915,    0.0093504
            341,    CARDS.856,    CARDS.859,    0.01971252
            342,    CARDS.856,    CARDS.871,    0.0093504
            343,    CARDS.856,    CARDS.932,    0.0093504
            344,    CARDS.858,    CARDS.861,    0.01971252
            345,    CARDS.858,    CARDS.873,    0.0093504
            346,    CARDS.858,    CARDS.934,    0.0093504
            347,    CARDS.859,    CARDS.862,    0.01971252
            348,    CARDS.859,    CARDS.874,    0.0187008
            349,    CARDS.859,    CARDS.975,    0.0187008
            350,    CARDS.861,    CARDS.864,    0.01971252
            351,    CARDS.861,    CARDS.876,    0.0187008
            352,    CARDS.861,    CARDS.977,    0.0187008
            353,    CARDS.862,    CARDS.865,    0.01971252
            354,    CARDS.862,    CARDS.877,    0.0187008
            355,    CARDS.862,    CARDS.1018,    0.0187008
            356,    CARDS.864,    CARDS.867,    0.01971252
            357,    CARDS.864,    CARDS.879,    0.0187008
            358,    CARDS.864,    CARDS.1020,    0.0187008
            359,    CARDS.865,    CARDS.868,    0.01971252
            360,    CARDS.865,    CARDS.883,    0.0187008
            361,    CARDS.867,    CARDS.870,    0.01971252
            362,    CARDS.867,    CARDS.885,    0.0187008
            363,    CARDS.868,    CARDS.886,    0.0093504
            364,    CARDS.870,    CARDS.888,    0.0093504
            365,    CARDS.871,    CARDS.874,    0.01971252
            366,    CARDS.871,    CARDS.889,    0.0093504
            367,    CARDS.873,    CARDS.876,    0.01971252
            368,    CARDS.873,    CARDS.891,    0.0093504
            369,    CARDS.874,    CARDS.877,    0.01971252
            370,    CARDS.874,    CARDS.892,    0.0187008
            371,    CARDS.876,    CARDS.879,    0.01971252
            372,    CARDS.876,    CARDS.894,    0.0187008
            373,    CARDS.877,    CARDS.883,    0.01971252
            374,    CARDS.877,    CARDS.895,    0.0187008
            375,    CARDS.879,    CARDS.885,    0.01971252
            376,    CARDS.879,    CARDS.897,    0.0187008
            377,    CARDS.880,    CARDS.904,    0.009856262
            378,    CARDS.880,    CARDS.932,    0.0093504
            379,    CARDS.882,    CARDS.906,    0.009856262
            380,    CARDS.882,    CARDS.934,    0.0093504
            381,    CARDS.883,    CARDS.886,    0.01971252
            382,    CARDS.883,    CARDS.898,    0.0187008
            383,    CARDS.885,    CARDS.888,    0.01971252
            384,    CARDS.885,    CARDS.900,    0.0187008
            385,    CARDS.886,    CARDS.901,    0.0093504
            386,    CARDS.888,    CARDS.903,    0.0093504
            387,    CARDS.889,    CARDS.892,    0.009856262
            388,    CARDS.891,    CARDS.894,    0.009856262
            389,    CARDS.892,    CARDS.895,    0.009856262
            390,    CARDS.894,    CARDS.897,    0.009856262
            391,    CARDS.895,    CARDS.898,    0.009856262
            392,    CARDS.897,    CARDS.900,    0.009856262
            393,    CARDS.898,    CARDS.901,    0.009856262
            394,    CARDS.900,    CARDS.903,    0.009856262
            395,    CARDS.904,    CARDS.907,    0.009856262
            396,    CARDS.904,    CARDS.975,    0.0187008
            397,    CARDS.906,    CARDS.909,    0.009856262
            398,    CARDS.906,    CARDS.977,    0.0187008
            399,    CARDS.907,    CARDS.910,    0.009856262
            400,    CARDS.907,    CARDS.1018,    0.0187008
            401,    CARDS.909,    CARDS.912,    0.009856262
            402,    CARDS.909,    CARDS.1020,    0.0187008
            403,    CARDS.910,    CARDS.913,    0.009856262
            404,    CARDS.912,    CARDS.915,    0.009856262
            405,    CARDS.916,    CARDS.920,    0.009856262
            406,    CARDS.916,    CARDS.939,    0.0093504
            407,    CARDS.917,    CARDS.921,    0.009856262
            408,    CARDS.917,    CARDS.940,    0.0093504
            409,    CARDS.918,    CARDS.922,    0.009856262
            410,    CARDS.918,    CARDS.941,    0.0093504
            411,    CARDS.919,    CARDS.923,    0.009856262
            412,    CARDS.919,    CARDS.942,    0.0093504
            413,    CARDS.920,    CARDS.924,    0.009856262
            414,    CARDS.920,    CARDS.943,    0.0187008
            415,    CARDS.921,    CARDS.925,    0.009856262
            416,    CARDS.921,    CARDS.944,    0.0187008
            417,    CARDS.922,    CARDS.926,    0.009856262
            418,    CARDS.922,    CARDS.945,    0.0187008
            419,    CARDS.923,    CARDS.927,    0.009856262
            420,    CARDS.923,    CARDS.946,    0.0187008
            421,    CARDS.924,    CARDS.928,    0.009856262
            422,    CARDS.924,    CARDS.947,    0.0187008
            423,    CARDS.925,    CARDS.929,    0.009856262
            424,    CARDS.925,    CARDS.948,    0.0187008
            425,    CARDS.926,    CARDS.930,    0.009856262
            426,    CARDS.926,    CARDS.949,    0.0187008
            427,    CARDS.927,    CARDS.931,    0.009856262
            428,    CARDS.927,    CARDS.950,    0.0187008
            429,    CARDS.928,    CARDS.935,    0.009856262
            430,    CARDS.928,    CARDS.951,    0.0187008
            431,    CARDS.929,    CARDS.936,    0.009856262
            432,    CARDS.929,    CARDS.952,    0.0187008
            433,    CARDS.930,    CARDS.937,    0.009856262
            434,    CARDS.930,    CARDS.953,    0.0187008
            435,    CARDS.931,    CARDS.938,    0.009856262
            436,    CARDS.931,    CARDS.954,    0.0187008
            437,    CARDS.932,    CARDS.975,    0.01971252
            438,    CARDS.934,    CARDS.977,    0.01971252
            439,    CARDS.935,    CARDS.955,    0.0093504
            440,    CARDS.936,    CARDS.956,    0.0093504
            441,    CARDS.937,    CARDS.957,    0.0093504
            442,    CARDS.938,    CARDS.958,    0.0093504
            443,    CARDS.939,    CARDS.943,    0.01971252
            444,    CARDS.939,    CARDS.959,    0.0093504
            445,    CARDS.940,    CARDS.944,    0.01971252
            446,    CARDS.940,    CARDS.960,    0.0093504
            447,    CARDS.941,    CARDS.945,    0.01971252
            448,    CARDS.941,    CARDS.961,    0.0093504
            449,    CARDS.942,    CARDS.946,    0.01971252
            450,    CARDS.942,    CARDS.962,    0.0093504
            451,    CARDS.943,    CARDS.947,    0.01971252
            452,    CARDS.943,    CARDS.963,    0.0187008
            453,    CARDS.944,    CARDS.948,    0.01971252
            454,    CARDS.944,    CARDS.964,    0.0187008
            455,    CARDS.945,    CARDS.949,    0.01971252
            456,    CARDS.945,    CARDS.965,    0.0187008
            457,    CARDS.946,    CARDS.950,    0.01971252
            458,    CARDS.946,    CARDS.966,    0.0187008
            459,    CARDS.947,    CARDS.951,    0.01971252
            460,    CARDS.947,    CARDS.967,    0.0187008
            461,    CARDS.948,    CARDS.952,    0.01971252
            462,    CARDS.948,    CARDS.968,    0.0187008
            463,    CARDS.949,    CARDS.953,    0.01971252
            464,    CARDS.949,    CARDS.969,    0.0187008
            465,    CARDS.950,    CARDS.954,    0.01971252
            466,    CARDS.950,    CARDS.970,    0.0187008
            467,    CARDS.951,    CARDS.955,    0.01971252
            468,    CARDS.951,    CARDS.971,    0.0187008
            469,    CARDS.952,    CARDS.956,    0.01971252
            470,    CARDS.952,    CARDS.972,    0.0187008
            471,    CARDS.953,    CARDS.957,    0.01971252
            472,    CARDS.953,    CARDS.973,    0.0187008
            473,    CARDS.954,    CARDS.958,    0.01971252
            474,    CARDS.954,    CARDS.974,    0.0187008
            475,    CARDS.955,    CARDS.978,    0.0093504
            476,    CARDS.956,    CARDS.979,    0.0093504
            477,    CARDS.957,    CARDS.980,    0.0093504
            478,    CARDS.958,    CARDS.981,    0.0093504
            479,    CARDS.959,    CARDS.963,    0.01971252
            480,    CARDS.959,    CARDS.982,    0.0093504
            481,    CARDS.960,    CARDS.964,    0.01971252
            482,    CARDS.960,    CARDS.983,    0.0093504
            483,    CARDS.961,    CARDS.965,    0.01971252
            484,    CARDS.961,    CARDS.984,    0.0093504
            485,    CARDS.962,    CARDS.966,    0.01971252
            486,    CARDS.962,    CARDS.985,    0.0093504
            487,    CARDS.963,    CARDS.967,    0.01971252
            488,    CARDS.963,    CARDS.986,    0.0187008
            489,    CARDS.964,    CARDS.968,    0.01971252
            490,    CARDS.964,    CARDS.987,    0.0187008
            491,    CARDS.965,    CARDS.969,    0.01971252
            492,    CARDS.965,    CARDS.988,    0.0187008
            493,    CARDS.966,    CARDS.970,    0.01971252
            494,    CARDS.966,    CARDS.989,    0.0187008
            495,    CARDS.967,    CARDS.971,    0.01971252
            496,    CARDS.967,    CARDS.990,    0.0187008
            497,    CARDS.968,    CARDS.972,    0.01971252
            498,    CARDS.968,    CARDS.991,    0.0187008
            499,    CARDS.969,    CARDS.973,    0.01971252
            500,    CARDS.969,    CARDS.992,    0.0187008
            501,    CARDS.970,    CARDS.974,    0.01971252
            502,    CARDS.970,    CARDS.993,    0.0187008
            503,    CARDS.971,    CARDS.978,    0.01971252
            504,    CARDS.971,    CARDS.994,    0.0187008
            505,    CARDS.972,    CARDS.979,    0.01971252
            506,    CARDS.972,    CARDS.995,    0.0187008
            507,    CARDS.973,    CARDS.980,    0.01971252
            508,    CARDS.973,    CARDS.996,    0.0187008
            509,    CARDS.974,    CARDS.981,    0.01971252
            510,    CARDS.974,    CARDS.997,    0.0187008
            511,    CARDS.975,    CARDS.1018,    0.01971252
            512,    CARDS.977,    CARDS.1020,    0.01971252
            513,    CARDS.978,    CARDS.998,    0.0093504
            514,    CARDS.979,    CARDS.999,    0.0093504
            515,    CARDS.980,    CARDS.1000,    0.0093504
            516,    CARDS.981,    CARDS.1001,    0.0093504
            517,    CARDS.982,    CARDS.986,    0.01971252
            518,    CARDS.982,    CARDS.1002,    0.0093504
            519,    CARDS.983,    CARDS.987,    0.01971252
            520,    CARDS.983,    CARDS.1003,    0.0093504
            521,    CARDS.984,    CARDS.988,    0.01971252
            522,    CARDS.984,    CARDS.1004,    0.0093504
            523,    CARDS.985,    CARDS.989,    0.01971252
            524,    CARDS.985,    CARDS.1005,    0.0093504
            525,    CARDS.986,    CARDS.990,    0.01971252
            526,    CARDS.986,    CARDS.1006,    0.0187008
            527,    CARDS.987,    CARDS.991,    0.01971252
            528,    CARDS.987,    CARDS.1007,    0.0187008
            529,    CARDS.988,    CARDS.992,    0.01971252
            530,    CARDS.988,    CARDS.1008,    0.0187008
            531,    CARDS.989,    CARDS.993,    0.01971252
            532,    CARDS.989,    CARDS.1009,    0.0187008
            533,    CARDS.990,    CARDS.994,    0.01971252
            534,    CARDS.990,    CARDS.1010,    0.0187008
            535,    CARDS.991,    CARDS.995,    0.01971252
            536,    CARDS.991,    CARDS.1011,    0.0187008
            537,    CARDS.992,    CARDS.996,    0.01971252
            538,    CARDS.992,    CARDS.1012,    0.0187008
            539,    CARDS.993,    CARDS.997,    0.01971252
            540,    CARDS.993,    CARDS.1013,    0.0187008
            541,    CARDS.994,    CARDS.998,    0.01971252
            542,    CARDS.994,    CARDS.1014,    0.0187008
            543,    CARDS.995,    CARDS.999,    0.01971252
            544,    CARDS.995,    CARDS.1015,    0.0187008
            545,    CARDS.996,    CARDS.1000,    0.01971252
            546,    CARDS.996,    CARDS.1016,    0.0187008
            547,    CARDS.997,    CARDS.1001,    0.01971252
            548,    CARDS.997,    CARDS.1017,    0.0187008
            549,    CARDS.998,    CARDS.1021,    0.0093504
            550,    CARDS.999,    CARDS.1022,    0.0093504
            551,    CARDS.1000,    CARDS.1023,    0.0093504
            552,    CARDS.1001,    CARDS.1024,    0.0093504
            553,    CARDS.1002,    CARDS.1006,    0.009856262
            554,    CARDS.1003,    CARDS.1007,    0.009856262
            555,    CARDS.1004,    CARDS.1008,    0.009856262
            556,    CARDS.1005,    CARDS.1009,    0.009856262
            557,    CARDS.1006,    CARDS.1010,    0.009856262
            558,    CARDS.1007,    CARDS.1011,    0.009856262
            559,    CARDS.1008,    CARDS.1012,    0.009856262
            560,    CARDS.1009,    CARDS.1013,    0.009856262
            561,    CARDS.1010,    CARDS.1014,    0.009856262
            562,    CARDS.1011,    CARDS.1015,    0.009856262
            563,    CARDS.1012,    CARDS.1016,    0.009856262
            564,    CARDS.1013,    CARDS.1017,    0.009856262
            565,    CARDS.1014,    CARDS.1021,    0.009856262
            566,    CARDS.1015,    CARDS.1022,    0.009856262
            567,    CARDS.1016,    CARDS.1023,    0.009856262
            568,    CARDS.1017,    CARDS.1024,    0.009856262
            569,    CARDS.1025,    CARDS.1026,    0.009856262
            570,    CARDS.1025,    CARDS.1030,    0.0093504
            571,    CARDS.1026,    CARDS.1027,    0.009856262
            572,    CARDS.1026,    CARDS.1031,    0.0187008
            573,    CARDS.1027,    CARDS.1028,    0.009856262
            574,    CARDS.1027,    CARDS.1032,    0.0187008
            575,    CARDS.1028,    CARDS.1029,    0.009856262
            576,    CARDS.1030,    CARDS.1031,    0.01971252
            577,    CARDS.1031,    CARDS.1032,    0.01971252
HEADER VARIABLES 0, CARDS
C Heat Load-Loading above CFC card[CARDS]::2A4E
      CARDS.Q852 = CARDS.Q852 + 0.125
      CARDS.Q855 = CARDS.Q855 + 0.0625
      CARDS.Q858 = CARDS.Q858 + 0.0625
      CARDS.Q861 = CARDS.Q861 + 0.125
      CARDS.Q864 = CARDS.Q864 + 0.125
      CARDS.Q867 = CARDS.Q867 + 0.125
      CARDS.Q870 = CARDS.Q870 + 0.0625
      CARDS.Q873 = CARDS.Q873 + 0.0625
      CARDS.Q876 = CARDS.Q876 + 0.125
      CARDS.Q879 = CARDS.Q879 + 0.125
      CARDS.Q882 = CARDS.Q882 + 0.03125
      CARDS.Q885 = CARDS.Q885 + 0.125
      CARDS.Q888 = CARDS.Q888 + 0.0625
      CARDS.Q891 = CARDS.Q891 + 0.03125
      CARDS.Q894 = CARDS.Q894 + 0.0625
      CARDS.Q897 = CARDS.Q897 + 0.0625
      CARDS.Q900 = CARDS.Q900 + 0.0625
      CARDS.Q903 = CARDS.Q903 + 0.03125
      CARDS.Q906 = CARDS.Q906 + 0.0625
      CARDS.Q909 = CARDS.Q909 + 0.0625
      CARDS.Q912 = CARDS.Q912 + 0.0625
      CARDS.Q915 = CARDS.Q915 + 0.03125
      CARDS.Q934 = CARDS.Q934 + 0.0625
      CARDS.Q977 = CARDS.Q977 + 0.125
      CARDS.Q1020 = CARDS.Q1020 + 0.125
HEADER NODE DATA, CFC_ASSEM
            1,    20.,    0.774702
            2,    20.,    0.774702
            3,    20.,    0.774702
            4,    20.,    0.774702
            5,    20.,    0.414864
            6,    20.,    0.414864
            7,    20.,    0.414864
            8,    20.,    0.414864
            9,    20.,    0.414864
            10,    20.,    0.414864
            11,    20.,    0.414864
            12,    20.,    0.414864
            13,    20.,    0.414864
            14,    20.,    0.414864
            15,    20.,    0.414864
            16,    20.,    0.414864
            17,    20.,    0.414864
            18,    20.,    0.414864
            19,    20.,    0.414864
            20,    20.,    0.414864
            21,    20.,    0.414864
            22,    20.,    0.414864
            23,    20.,    0.414864
            24,    20.,    0.414864
            25,    20.,    0.414864
            26,    20.,    0.414864
            27,    20.,    0.414864
            28,    20.,    0.414864
            29,    20.,    0.414864
            30,    20.,    0.414864
            31,    20.,    0.414864
            32,    20.,    0.414864
            851,    20.,    1.028582
            854,    20.,    1.028582
            857,    20.,    1.028582
            860,    20.,    1.028582
            863,    20.,    1.028582
            866,    20.,    0.514291
            869,    20.,    0.514291
            872,    20.,    1.028582
            875,    20.,    1.028582
            878,    20.,    1.028582
            881,    20.,    0.2571455
            884,    20.,    1.028582
            887,    20.,    1.028582
            890,    20.,    0.514291
            893,    20.,    0.514291
            896,    20.,    1.028582
            899,    20.,    1.028582
            902,    20.,    1.028582
            903,    20.,    1.028582
            904,    20.,    1.028582
            905,    20.,    0.514291
            906,    20.,    0.514291
            907,    20.,    1.028582
            908,    20.,    1.028582
            909,    20.,    1.028582
            910,    20.,    1.028582
            911,    20.,    1.028582
            912,    20.,    0.514291
            913,    20.,    0.514291
            914,    20.,    1.028582
            915,    20.,    1.028582
            916,    20.,    1.028582
            917,    20.,    1.028582
            918,    20.,    1.028582
            919,    20.,    0.514291
            920,    20.,    0.2571455
            921,    20.,    0.514291
            922,    20.,    0.514291
            923,    20.,    0.514291
            924,    20.,    0.514291
            925,    20.,    0.514291
            926,    20.,    0.2571455
            933,    20.,    0.514291
            976,    20.,    0.2571455
            1019,    20.,    0.514291
            1020,    20.,    0.1344013
            1021,    20.,    1.42884
            1023,    20.,    7.395756
            1024,    20.,    1.702145
            1025,    20.,    0.414864
            1026,    20.,    0.45
            1027,    20.,    0.45
            1028,    20.,    7.395756
            1029,    20.,    6.808579
            1030,    20.,    7.395756
            1031,    20.,    6.808579
            1032,    20.,    7.395756
            1033,    20.,    3.404289
            1035,    20.,    7.395756
            1036,    20.,    1.702145
            1037,    20.,    7.395756
            1038,    20.,    3.404289
            1039,    20.,    7.395756
            1040,    20.,    3.404289
            1042,    20.,    7.395756
            1043,    20.,    7.395756
            1044,    20.,    7.395756
            1045,    20.,    7.395756
            1046,    20.,    7.395756
            1047,    20.,    7.395756
            1048,    20.,    7.395756
            1049,    20.,    7.395756
            1050,    20.,    7.395756
            1051,    20.,    7.395756
            1052,    20.,    3.404289
            1053,    20.,    0.414864
            1054,    20.,    0.45
            1055,    20.,    0.45
            1056,    20.,    0.5376051
            1057,    20.,    1.42884
            1059,    20.,    7.395756
            1060,    20.,    1.702145
            1061,    20.,    0.414864
            1062,    20.,    0.45
            1063,    20.,    0.45
            1064,    20.,    0.5376051
            1065,    20.,    7.395756
            1066,    20.,    3.404289
            1067,    20.,    7.395756
            1068,    20.,    6.808579
            1069,    20.,    0.4704044
            1070,    20.,    7.395756
            1071,    20.,    6.808579
            1072,    20.,    0.4704044
            1073,    20.,    7.395756
            1074,    20.,    3.404289
            1075,    20.,    7.395756
            1076,    20.,    3.404289
            1077,    20.,    1.702145
            1078,    20.,    1.42884
            1079,    20.,    7.395756
            1080,    20.,    3.404289
            1081,    20.,    0.414864
            1082,    20.,    0.45
            1083,    20.,    0.45
            1084,    20.,    1.42884
            1085,    20.,    7.395756
            1086,    20.,    0.514291
            1087,    20.,    0.514291
            1088,    20.,    0.514291
            1089,    20.,    0.514291
HEADER ARRAY DATA, CFC_ASSEM
C     TEC_2284_areas:
            3 = 
            0.000225,  0.000225
            0.000225,  0.000225
C Integer    TEC_2284_cold_side_nodeids:
            1 = 
          1027,          1083,          1055,          1063
C Integer    TEC_2284_conductor_ids:
            4 = 
            64,            65,            66,            67
C Integer    TEC_2284_hot_side_nodeids:
            2 = 
          1026,          1082,          1054,          1062
HEADER CONDUCTOR DATA, CFC_ASSEM
C Calculated in TEC2 call
            64,    CFC_ASSEM.1026,    CFC_ASSEM.1027,    1.
            65,    CFC_ASSEM.1082,    CFC_ASSEM.1083,    1.
            66,    CFC_ASSEM.1054,    CFC_ASSEM.1055,    1.
            67,    CFC_ASSEM.1062,    CFC_ASSEM.1063,    1.
C Lens to -Z endcap
            68,    CARDS.803,    CFC_ASSEM.20,    10.13051
            69,    CARDS.805,    CFC_ASSEM.24,    10.13051
            70,    CARDS.809,    CFC_ASSEM.22,    10.13051
            71,    CARDS.848,    CFC_ASSEM.18,    10.13051
            72,    CFC_ASSEM.1,    CFC_ASSEM.2,    0.385
            73,    CFC_ASSEM.1,    CFC_ASSEM.3,    0.385
C Contact - Edge Contactor-Copper Pedestal to CFC board[CFC_ASSEM][1]::223F
            74,    CFC_ASSEM.1,    CFC_ASSEM.875,    0.0135
            75,    CFC_ASSEM.1,    CFC_ASSEM.878,    0.0075
            76,    CFC_ASSEM.1,    CFC_ASSEM.899,    0.009
C Contact - Face Contactor-TEC To Pedestal[CFC_ASSEM][2]::2243
            77,    CFC_ASSEM.1,    CFC_ASSEM.1026,    2.75
C Contact - Face Contactor-Pedestal to Thermal Mass[CFC_ASSEM][3]::223B
            78,    CFC_ASSEM.1,    CFC_ASSEM.1032,    12.99375
            79,    CFC_ASSEM.1,    CFC_ASSEM.1035,    19.49063
            80,    CFC_ASSEM.1,    CFC_ASSEM.1070,    8.6625
            81,    CFC_ASSEM.1,    CFC_ASSEM.1073,    12.99375
            82,    CFC_ASSEM.2,    CFC_ASSEM.4,    0.385
C Contact - Edge Contactor-Copper Pedestal to CFC board[CFC_ASSEM][1]::223F
            83,    CFC_ASSEM.2,    CFC_ASSEM.878,    0.0075
            84,    CFC_ASSEM.2,    CFC_ASSEM.884,    0.0135
            85,    CFC_ASSEM.2,    CFC_ASSEM.903,    0.009
C Contact - Face Contactor-Pedestal to Thermal Mass[CFC_ASSEM][3]::223B
            86,    CFC_ASSEM.2,    CFC_ASSEM.1035,    19.49063
            87,    CFC_ASSEM.2,    CFC_ASSEM.1037,    12.99375
            88,    CFC_ASSEM.2,    CFC_ASSEM.1073,    12.99375
            89,    CFC_ASSEM.2,    CFC_ASSEM.1075,    8.6625
C Contact - Face Contactor-TEC To Pedestal[CFC_ASSEM][2]::2243
            90,    CFC_ASSEM.2,    CFC_ASSEM.1082,    2.75
            91,    CFC_ASSEM.3,    CFC_ASSEM.4,    0.385
C Contact - Edge Contactor-Copper Pedestal to CFC board[CFC_ASSEM][1]::223F
            92,    CFC_ASSEM.3,    CFC_ASSEM.899,    0.009
            93,    CFC_ASSEM.3,    CFC_ASSEM.908,    0.0135
            94,    CFC_ASSEM.3,    CFC_ASSEM.909,    0.0075
C Contact - Face Contactor-Pedestal to Thermal Mass[CFC_ASSEM][3]::223B
            95,    CFC_ASSEM.3,    CFC_ASSEM.1032,    12.99375
            96,    CFC_ASSEM.3,    CFC_ASSEM.1035,    19.49063
            97,    CFC_ASSEM.3,    CFC_ASSEM.1043,    8.6625
            98,    CFC_ASSEM.3,    CFC_ASSEM.1044,    12.99375
C Contact - Face Contactor-TEC To Pedestal[CFC_ASSEM][2]::2243
            99,    CFC_ASSEM.3,    CFC_ASSEM.1054,    2.75
C Contact - Edge Contactor-Copper Pedestal to CFC board[CFC_ASSEM][1]::223F
            100,    CFC_ASSEM.4,    CFC_ASSEM.903,    0.009
            101,    CFC_ASSEM.4,    CFC_ASSEM.909,    0.0075
            102,    CFC_ASSEM.4,    CFC_ASSEM.910,    0.0135
C Contact - Face Contactor-Pedestal to Thermal Mass[CFC_ASSEM][3]::223B
            103,    CFC_ASSEM.4,    CFC_ASSEM.1035,    19.49063
            104,    CFC_ASSEM.4,    CFC_ASSEM.1037,    12.99375
            105,    CFC_ASSEM.4,    CFC_ASSEM.1044,    12.99375
            106,    CFC_ASSEM.4,    CFC_ASSEM.1045,    8.6625
C Contact - Face Contactor-TEC To Pedestal[CFC_ASSEM][2]::2243
            107,    CFC_ASSEM.4,    CFC_ASSEM.1062,    2.75
            108,    CFC_ASSEM.5,    CFC_ASSEM.6,    0.1350494
            109,    CFC_ASSEM.5,    CFC_ASSEM.13,    0.2065096
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            110,    CFC_ASSEM.5,    CFC_ASSEM.1029,    0.09595829
            111,    CFC_ASSEM.5,    CFC_ASSEM.1061,    0.1350494
            112,    CFC_ASSEM.6,    CFC_ASSEM.7,    0.1350494
            113,    CFC_ASSEM.6,    CFC_ASSEM.14,    0.2065096
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            114,    CFC_ASSEM.6,    CFC_ASSEM.1029,    0.04797914
            115,    CFC_ASSEM.6,    CFC_ASSEM.1031,    0.04797914
            116,    CFC_ASSEM.7,    CFC_ASSEM.8,    0.1350494
            117,    CFC_ASSEM.7,    CFC_ASSEM.15,    0.2065096
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            118,    CFC_ASSEM.7,    CFC_ASSEM.1031,    0.09595829
            119,    CFC_ASSEM.8,    CFC_ASSEM.16,    0.2065096
            120,    CFC_ASSEM.8,    CFC_ASSEM.1025,    0.1350494
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            121,    CFC_ASSEM.8,    CFC_ASSEM.1031,    0.04797914
            122,    CFC_ASSEM.8,    CFC_ASSEM.1071,    0.04797914
            123,    CFC_ASSEM.9,    CFC_ASSEM.10,    0.1350494
            124,    CFC_ASSEM.9,    CFC_ASSEM.16,    0.1350494
            125,    CFC_ASSEM.9,    CFC_ASSEM.17,    0.2065096
            126,    CFC_ASSEM.9,    CFC_ASSEM.1025,    0.2065096
            127,    CFC_ASSEM.10,    CFC_ASSEM.11,    0.1350494
            128,    CFC_ASSEM.10,    CFC_ASSEM.18,    0.2065096
            129,    CFC_ASSEM.10,    CFC_ASSEM.1081,    0.2065096
            130,    CFC_ASSEM.11,    CFC_ASSEM.12,    0.1350494
            131,    CFC_ASSEM.11,    CFC_ASSEM.19,    0.2065096
            132,    CFC_ASSEM.11,    CFC_ASSEM.1053,    0.2065096
            133,    CFC_ASSEM.12,    CFC_ASSEM.13,    0.1350494
            134,    CFC_ASSEM.12,    CFC_ASSEM.20,    0.2065096
            135,    CFC_ASSEM.12,    CFC_ASSEM.1061,    0.2065096
            136,    CFC_ASSEM.13,    CFC_ASSEM.14,    0.1350494
            137,    CFC_ASSEM.13,    CFC_ASSEM.21,    0.2065096
            138,    CFC_ASSEM.14,    CFC_ASSEM.15,    0.1350494
            139,    CFC_ASSEM.14,    CFC_ASSEM.22,    0.2065096
            140,    CFC_ASSEM.15,    CFC_ASSEM.16,    0.1350494
            141,    CFC_ASSEM.15,    CFC_ASSEM.23,    0.2065096
            142,    CFC_ASSEM.16,    CFC_ASSEM.24,    0.2065096
            143,    CFC_ASSEM.17,    CFC_ASSEM.18,    0.1350494
            144,    CFC_ASSEM.17,    CFC_ASSEM.24,    0.1350494
            145,    CFC_ASSEM.17,    CFC_ASSEM.25,    0.2065096
            146,    CFC_ASSEM.18,    CFC_ASSEM.19,    0.1350494
            147,    CFC_ASSEM.18,    CFC_ASSEM.26,    0.2065096
            148,    CFC_ASSEM.19,    CFC_ASSEM.20,    0.1350494
            149,    CFC_ASSEM.19,    CFC_ASSEM.27,    0.2065096
            150,    CFC_ASSEM.20,    CFC_ASSEM.21,    0.1350494
            151,    CFC_ASSEM.20,    CFC_ASSEM.28,    0.2065096
            152,    CFC_ASSEM.21,    CFC_ASSEM.22,    0.1350494
            153,    CFC_ASSEM.21,    CFC_ASSEM.29,    0.2065096
            154,    CFC_ASSEM.22,    CFC_ASSEM.23,    0.1350494
            155,    CFC_ASSEM.22,    CFC_ASSEM.30,    0.2065096
            156,    CFC_ASSEM.23,    CFC_ASSEM.24,    0.1350494
            157,    CFC_ASSEM.23,    CFC_ASSEM.31,    0.2065096
            158,    CFC_ASSEM.24,    CFC_ASSEM.32,    0.2065096
            159,    CFC_ASSEM.25,    CFC_ASSEM.26,    0.1350494
            160,    CFC_ASSEM.25,    CFC_ASSEM.32,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            161,    CFC_ASSEM.25,    CFC_ASSEM.1069,    0.1
            162,    CFC_ASSEM.26,    CFC_ASSEM.27,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            163,    CFC_ASSEM.26,    CFC_ASSEM.1069,    0.075
            164,    CFC_ASSEM.26,    CFC_ASSEM.1072,    0.05
            165,    CFC_ASSEM.27,    CFC_ASSEM.28,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            166,    CFC_ASSEM.27,    CFC_ASSEM.1072,    0.15
            167,    CFC_ASSEM.28,    CFC_ASSEM.29,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            168,    CFC_ASSEM.28,    CFC_ASSEM.1072,    0.1
            169,    CFC_ASSEM.29,    CFC_ASSEM.30,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            170,    CFC_ASSEM.29,    CFC_ASSEM.1072,    0.15
            171,    CFC_ASSEM.30,    CFC_ASSEM.31,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            172,    CFC_ASSEM.30,    CFC_ASSEM.1069,    0.075
            173,    CFC_ASSEM.30,    CFC_ASSEM.1072,    0.05
            174,    CFC_ASSEM.31,    CFC_ASSEM.32,    0.1350494
C Contact - Edge Contactor-Lens to CFC[CFC_ASSEM][2]::2183
            175,    CFC_ASSEM.31,    CFC_ASSEM.1069,    0.125
            176,    CFC_ASSEM.32,    CFC_ASSEM.1069,    0.125
            177,    CFC_ASSEM.851,    CFC_ASSEM.854,    0.01971252
            178,    CFC_ASSEM.851,    CFC_ASSEM.872,    0.0187008
            179,    CFC_ASSEM.851,    CFC_ASSEM.1019,    0.01971252
            180,    CFC_ASSEM.851,    CFC_ASSEM.1086,    0.0187008
            181,    CFC_ASSEM.854,    CFC_ASSEM.857,    0.01971252
            182,    CFC_ASSEM.854,    CFC_ASSEM.875,    0.0187008
C Thermal Mass to CFC Card
            183,    CFC_ASSEM.854,    CFC_ASSEM.1079,    0.2925087
            184,    CFC_ASSEM.854,    CFC_ASSEM.1087,    0.0187008
            185,    CFC_ASSEM.857,    CFC_ASSEM.860,    0.01971252
            186,    CFC_ASSEM.857,    CFC_ASSEM.878,    0.0187008
C Thermal Mass to CFC Card
            187,    CFC_ASSEM.857,    CFC_ASSEM.1085,    0.2925087
            188,    CFC_ASSEM.857,    CFC_ASSEM.1088,    0.0187008
            189,    CFC_ASSEM.860,    CFC_ASSEM.863,    0.01971252
            190,    CFC_ASSEM.860,    CFC_ASSEM.884,    0.0187008
C Thermal Mass to CFC Card
            191,    CFC_ASSEM.860,    CFC_ASSEM.1059,    0.2925087
            192,    CFC_ASSEM.860,    CFC_ASSEM.1089,    0.0187008
            193,    CFC_ASSEM.863,    CFC_ASSEM.866,    0.01971252
            194,    CFC_ASSEM.863,    CFC_ASSEM.887,    0.0187008
            195,    CFC_ASSEM.863,    CFC_ASSEM.933,    0.0187008
            196,    CFC_ASSEM.866,    CFC_ASSEM.890,    0.0093504
            197,    CFC_ASSEM.866,    CFC_ASSEM.976,    0.0093504
            198,    CFC_ASSEM.869,    CFC_ASSEM.872,    0.01971252
            199,    CFC_ASSEM.869,    CFC_ASSEM.893,    0.0093504
            200,    CFC_ASSEM.869,    CFC_ASSEM.1019,    0.0093504
            201,    CFC_ASSEM.872,    CFC_ASSEM.875,    0.01971252
            202,    CFC_ASSEM.872,    CFC_ASSEM.896,    0.0187008
            203,    CFC_ASSEM.875,    CFC_ASSEM.878,    0.01971252
            204,    CFC_ASSEM.875,    CFC_ASSEM.899,    0.0187008
            205,    CFC_ASSEM.878,    CFC_ASSEM.884,    0.01971252
            206,    CFC_ASSEM.878,    CFC_ASSEM.902,    0.0187008
            207,    CFC_ASSEM.881,    CFC_ASSEM.1019,    0.0093504
            208,    CFC_ASSEM.881,    CFC_ASSEM.1086,    0.009856262
            209,    CFC_ASSEM.884,    CFC_ASSEM.887,    0.01971252
            210,    CFC_ASSEM.884,    CFC_ASSEM.903,    0.0187008
            211,    CFC_ASSEM.887,    CFC_ASSEM.890,    0.01971252
            212,    CFC_ASSEM.887,    CFC_ASSEM.904,    0.0187008
C Thermal Mass to CFC card
            213,    CFC_ASSEM.887,    CFC_ASSEM.1028,    0.2925087
            214,    CFC_ASSEM.890,    CFC_ASSEM.905,    0.0093504
            215,    CFC_ASSEM.893,    CFC_ASSEM.896,    0.01971252
            216,    CFC_ASSEM.893,    CFC_ASSEM.906,    0.0093504
            217,    CFC_ASSEM.896,    CFC_ASSEM.899,    0.01971252
            218,    CFC_ASSEM.896,    CFC_ASSEM.907,    0.0187008
            219,    CFC_ASSEM.899,    CFC_ASSEM.902,    0.01971252
            220,    CFC_ASSEM.899,    CFC_ASSEM.908,    0.0187008
            221,    CFC_ASSEM.902,    CFC_ASSEM.903,    0.01971252
            222,    CFC_ASSEM.902,    CFC_ASSEM.909,    0.0187008
            223,    CFC_ASSEM.903,    CFC_ASSEM.904,    0.01971252
            224,    CFC_ASSEM.903,    CFC_ASSEM.910,    0.0187008
            225,    CFC_ASSEM.904,    CFC_ASSEM.905,    0.01971252
            226,    CFC_ASSEM.904,    CFC_ASSEM.911,    0.0187008
C Thermal Mass to CFC Card
            227,    CFC_ASSEM.904,    CFC_ASSEM.1039,    0.2925087
            228,    CFC_ASSEM.905,    CFC_ASSEM.912,    0.0093504
            229,    CFC_ASSEM.906,    CFC_ASSEM.907,    0.01971252
            230,    CFC_ASSEM.906,    CFC_ASSEM.913,    0.0093504
            231,    CFC_ASSEM.907,    CFC_ASSEM.908,    0.01971252
            232,    CFC_ASSEM.907,    CFC_ASSEM.914,    0.0187008
            233,    CFC_ASSEM.908,    CFC_ASSEM.909,    0.01971252
            234,    CFC_ASSEM.908,    CFC_ASSEM.915,    0.0187008
            235,    CFC_ASSEM.909,    CFC_ASSEM.910,    0.01971252
            236,    CFC_ASSEM.909,    CFC_ASSEM.916,    0.0187008
            237,    CFC_ASSEM.910,    CFC_ASSEM.911,    0.01971252
            238,    CFC_ASSEM.910,    CFC_ASSEM.917,    0.0187008
            239,    CFC_ASSEM.911,    CFC_ASSEM.912,    0.01971252
            240,    CFC_ASSEM.911,    CFC_ASSEM.918,    0.0187008
C Thermal Mass to CFC Card
            241,    CFC_ASSEM.911,    CFC_ASSEM.1046,    0.2925087
            242,    CFC_ASSEM.912,    CFC_ASSEM.919,    0.0093504
            243,    CFC_ASSEM.913,    CFC_ASSEM.914,    0.01971252
            244,    CFC_ASSEM.913,    CFC_ASSEM.920,    0.0093504
            245,    CFC_ASSEM.914,    CFC_ASSEM.915,    0.01971252
            246,    CFC_ASSEM.914,    CFC_ASSEM.921,    0.0187008
            247,    CFC_ASSEM.915,    CFC_ASSEM.916,    0.01971252
            248,    CFC_ASSEM.915,    CFC_ASSEM.922,    0.0187008
C Thermal Mass to CFC Card
            249,    CFC_ASSEM.915,    CFC_ASSEM.1048,    0.2925087
            250,    CFC_ASSEM.916,    CFC_ASSEM.917,    0.01971252
            251,    CFC_ASSEM.916,    CFC_ASSEM.923,    0.0187008
C Thermal Mass to CFC Card
            252,    CFC_ASSEM.916,    CFC_ASSEM.1049,    0.2925087
            253,    CFC_ASSEM.917,    CFC_ASSEM.918,    0.01971252
            254,    CFC_ASSEM.917,    CFC_ASSEM.924,    0.0187008
C Thermal Mass to CFC Card
            255,    CFC_ASSEM.917,    CFC_ASSEM.1050,    0.2925087
            256,    CFC_ASSEM.918,    CFC_ASSEM.919,    0.01971252
            257,    CFC_ASSEM.918,    CFC_ASSEM.925,    0.0187008
            258,    CFC_ASSEM.919,    CFC_ASSEM.926,    0.0093504
            259,    CFC_ASSEM.920,    CFC_ASSEM.921,    0.009856262
            260,    CFC_ASSEM.921,    CFC_ASSEM.922,    0.009856262
            261,    CFC_ASSEM.922,    CFC_ASSEM.923,    0.009856262
            262,    CFC_ASSEM.923,    CFC_ASSEM.924,    0.009856262
            263,    CFC_ASSEM.924,    CFC_ASSEM.925,    0.009856262
            264,    CFC_ASSEM.925,    CFC_ASSEM.926,    0.009856262
            265,    CFC_ASSEM.933,    CFC_ASSEM.976,    0.009856262
            266,    CFC_ASSEM.933,    CFC_ASSEM.1089,    0.009856262
            267,    CFC_ASSEM.1020,    CFC_ASSEM.1056,    0.001256637
            268,    CFC_ASSEM.1020,    CFC_ASSEM.1064,    0.001256637
C Contact - Face Contactor-Detector To TEC[CFC_ASSEM][5]::2247
            269,    CFC_ASSEM.1021,    CFC_ASSEM.1027,    2.75
            270,    CFC_ASSEM.1021,    CFC_ASSEM.1078,    0.2505
            271,    CFC_ASSEM.1021,    CFC_ASSEM.1084,    0.2505
C Lens Mount/CFC card/thermal mass Fastener
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            272,    CFC_ASSEM.1023,    CFC_ASSEM.1024,    1.472563
            273,    CFC_ASSEM.1023,    CFC_ASSEM.1067,    2.861497
            274,    CFC_ASSEM.1023,    CFC_ASSEM.1079,    2.861497
            275,    CFC_ASSEM.1024,    CFC_ASSEM.1066,    0.625625
            276,    CFC_ASSEM.1024,    CFC_ASSEM.1080,    0.625625
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            277,    CFC_ASSEM.1025,    CFC_ASSEM.1071,    0.09595829
            278,    CFC_ASSEM.1025,    CFC_ASSEM.1081,    0.1350494
            279,    CFC_ASSEM.1026,    CFC_ASSEM.1054,    0.0008
            280,    CFC_ASSEM.1026,    CFC_ASSEM.1082,    0.0008
            281,    CFC_ASSEM.1027,    CFC_ASSEM.1055,    0.0008
            282,    CFC_ASSEM.1027,    CFC_ASSEM.1083,    0.0008
            283,    CFC_ASSEM.1028,    CFC_ASSEM.1039,    2.861497
            284,    CFC_ASSEM.1028,    CFC_ASSEM.1065,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            285,    CFC_ASSEM.1028,    CFC_ASSEM.1074,    1.428866
            286,    CFC_ASSEM.1028,    CFC_ASSEM.1075,    2.861497
            287,    CFC_ASSEM.1029,    CFC_ASSEM.1031,    1.25125
            288,    CFC_ASSEM.1029,    CFC_ASSEM.1038,    1.25125
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            289,    CFC_ASSEM.1029,    CFC_ASSEM.1061,    0.04797914
            290,    CFC_ASSEM.1029,    CFC_ASSEM.1068,    1.25125
            291,    CFC_ASSEM.1029,    CFC_ASSEM.1076,    1.25125
            292,    CFC_ASSEM.1030,    CFC_ASSEM.1032,    2.861497
            293,    CFC_ASSEM.1030,    CFC_ASSEM.1042,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            294,    CFC_ASSEM.1030,    CFC_ASSEM.1066,    0.714433
            295,    CFC_ASSEM.1030,    CFC_ASSEM.1067,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            296,    CFC_ASSEM.1030,    CFC_ASSEM.1076,    0.714433
            297,    CFC_ASSEM.1031,    CFC_ASSEM.1033,    1.25125
            298,    CFC_ASSEM.1031,    CFC_ASSEM.1040,    1.25125
            299,    CFC_ASSEM.1031,    CFC_ASSEM.1071,    1.25125
            300,    CFC_ASSEM.1032,    CFC_ASSEM.1035,    2.861497
            301,    CFC_ASSEM.1032,    CFC_ASSEM.1043,    2.861497
            302,    CFC_ASSEM.1032,    CFC_ASSEM.1070,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            303,    CFC_ASSEM.1033,    CFC_ASSEM.1039,    0.714433
            304,    CFC_ASSEM.1033,    CFC_ASSEM.1046,    1.428866
            305,    CFC_ASSEM.1033,    CFC_ASSEM.1074,    0.625625
            306,    CFC_ASSEM.1033,    CFC_ASSEM.1077,    0.625625
            307,    CFC_ASSEM.1035,    CFC_ASSEM.1037,    2.861497
            308,    CFC_ASSEM.1035,    CFC_ASSEM.1044,    2.861497
            309,    CFC_ASSEM.1035,    CFC_ASSEM.1073,    2.861497
            310,    CFC_ASSEM.1036,    CFC_ASSEM.1038,    0.625625
C Lens Mount/CFC card/thermal mass Fastener
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            311,    CFC_ASSEM.1036,    CFC_ASSEM.1047,    1.472563
            312,    CFC_ASSEM.1036,    CFC_ASSEM.1076,    0.625625
C Contact - Edge Contactor-Lens Mount to Frames[CFC_ASSEM][0]::2AEF
            313,    CFC_ASSEM.1036,    FRAMES.52,    0.0199218
            314,    CFC_ASSEM.1036,    FRAMES.53,    0.0199218
            315,    CFC_ASSEM.1037,    CFC_ASSEM.1039,    2.861497
            316,    CFC_ASSEM.1037,    CFC_ASSEM.1045,    2.861497
            317,    CFC_ASSEM.1037,    CFC_ASSEM.1075,    2.861497
            318,    CFC_ASSEM.1038,    CFC_ASSEM.1040,    0.625625
C Contact - Edge Contactor-Lens Mount to Frames[CFC_ASSEM][0]::2AEF
            319,    CFC_ASSEM.1038,    FRAMES.49,    0.007968722
            320,    CFC_ASSEM.1038,    FRAMES.50,    0.03187489
            321,    CFC_ASSEM.1038,    FRAMES.51,    0.03187489
            322,    CFC_ASSEM.1038,    FRAMES.52,    0.007968722
            323,    CFC_ASSEM.1039,    CFC_ASSEM.1046,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            324,    CFC_ASSEM.1039,    CFC_ASSEM.1074,    0.714433
            325,    CFC_ASSEM.1040,    CFC_ASSEM.1077,    0.625625
C Contact - Edge Contactor-Lens Mount to Frames[CFC_ASSEM][0]::2AEF
            326,    CFC_ASSEM.1040,    FRAMES.47,    0.01593744
            327,    CFC_ASSEM.1040,    FRAMES.48,    0.03187489
            328,    CFC_ASSEM.1040,    FRAMES.49,    0.03187489
            329,    CFC_ASSEM.1042,    CFC_ASSEM.1043,    2.861497
            330,    CFC_ASSEM.1042,    CFC_ASSEM.1047,    2.861497
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            331,    CFC_ASSEM.1042,    CFC_ASSEM.1076,    1.428866
            332,    CFC_ASSEM.1043,    CFC_ASSEM.1044,    2.861497
            333,    CFC_ASSEM.1043,    CFC_ASSEM.1048,    2.861497
            334,    CFC_ASSEM.1044,    CFC_ASSEM.1045,    2.861497
            335,    CFC_ASSEM.1044,    CFC_ASSEM.1049,    2.861497
            336,    CFC_ASSEM.1045,    CFC_ASSEM.1046,    2.861497
            337,    CFC_ASSEM.1045,    CFC_ASSEM.1050,    2.861497
            338,    CFC_ASSEM.1046,    CFC_ASSEM.1051,    2.861497
            339,    CFC_ASSEM.1047,    CFC_ASSEM.1048,    2.861497
            340,    CFC_ASSEM.1048,    CFC_ASSEM.1049,    2.861497
            341,    CFC_ASSEM.1049,    CFC_ASSEM.1050,    2.861497
            342,    CFC_ASSEM.1050,    CFC_ASSEM.1051,    2.861497
C Lens Mount/CFC card/thermal mass Fastener
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            343,    CFC_ASSEM.1051,    CFC_ASSEM.1077,    1.472563
            344,    CFC_ASSEM.1052,    CFC_ASSEM.1060,    0.625625
            345,    CFC_ASSEM.1052,    CFC_ASSEM.1071,    1.25125
            346,    CFC_ASSEM.1052,    CFC_ASSEM.1080,    0.625625
            347,    CFC_ASSEM.1053,    CFC_ASSEM.1061,    0.1350494
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            348,    CFC_ASSEM.1053,    CFC_ASSEM.1068,    0.09595829
            349,    CFC_ASSEM.1053,    CFC_ASSEM.1081,    0.1350494
            350,    CFC_ASSEM.1054,    CFC_ASSEM.1062,    0.0008
            351,    CFC_ASSEM.1055,    CFC_ASSEM.1063,    0.0008
C Contact - Face Contactor-Detector To TEC[CFC_ASSEM][5]::2247
            352,    CFC_ASSEM.1055,    CFC_ASSEM.1084,    2.75
            353,    CFC_ASSEM.1056,    CFC_ASSEM.1064,    0.0005092958
            354,    CFC_ASSEM.1056,    CFC_ASSEM.1069,    0.003625888
C Contact - Face Contactor-Detector To TEC[CFC_ASSEM][5]::2247
            355,    CFC_ASSEM.1057,    CFC_ASSEM.1063,    2.75
            356,    CFC_ASSEM.1057,    CFC_ASSEM.1078,    0.2505
            357,    CFC_ASSEM.1057,    CFC_ASSEM.1084,    0.2505
            358,    CFC_ASSEM.1059,    CFC_ASSEM.1065,    2.861497
            359,    CFC_ASSEM.1059,    CFC_ASSEM.1075,    2.861497
            360,    CFC_ASSEM.1059,    CFC_ASSEM.1085,    2.861497
C Lens Mount/CFC card/thermal mass Fastener
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            361,    CFC_ASSEM.1060,    CFC_ASSEM.1065,    1.472563
            362,    CFC_ASSEM.1060,    CFC_ASSEM.1074,    0.625625
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            363,    CFC_ASSEM.1061,    CFC_ASSEM.1068,    0.04797914
            364,    CFC_ASSEM.1062,    CFC_ASSEM.1082,    0.0008
            365,    CFC_ASSEM.1063,    CFC_ASSEM.1083,    0.0008
            366,    CFC_ASSEM.1064,    CFC_ASSEM.1072,    0.003625888
C Contact - Edge Contactor-Edge Contactor - Thermal Mass to Lens Mount[CFC_ASSEM][1]::2AE8
            367,    CFC_ASSEM.1066,    CFC_ASSEM.1067,    1.428866
            368,    CFC_ASSEM.1066,    CFC_ASSEM.1068,    1.25125
            369,    CFC_ASSEM.1066,    CFC_ASSEM.1076,    0.625625
            370,    CFC_ASSEM.1067,    CFC_ASSEM.1070,    2.861497
            371,    CFC_ASSEM.1068,    CFC_ASSEM.1071,    1.25125
            372,    CFC_ASSEM.1068,    CFC_ASSEM.1080,    1.25125
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            373,    CFC_ASSEM.1068,    CFC_ASSEM.1081,    0.04797914
            374,    CFC_ASSEM.1069,    CFC_ASSEM.1072,    0.0001455131
            375,    CFC_ASSEM.1070,    CFC_ASSEM.1073,    2.861497
            376,    CFC_ASSEM.1070,    CFC_ASSEM.1079,    2.861497
            377,    CFC_ASSEM.1071,    CFC_ASSEM.1074,    1.25125
C Contact - Edge Contactor-Lens to Lens Mount[CFC_ASSEM][15]::2A95
            378,    CFC_ASSEM.1071,    CFC_ASSEM.1081,    0.04797914
            379,    CFC_ASSEM.1073,    CFC_ASSEM.1075,    2.861497
            380,    CFC_ASSEM.1073,    CFC_ASSEM.1085,    2.861497
C Contact - Edge Contactor-Lens Mount to Frames[CFC_ASSEM][0]::2AEF
            381,    CFC_ASSEM.1077,    FRAMES.46,    0.02789053
            382,    CFC_ASSEM.1077,    FRAMES.47,    0.01195308
C Contact - Face Contactor-Detector To TEC[CFC_ASSEM][5]::2247
            383,    CFC_ASSEM.1078,    CFC_ASSEM.1083,    2.75
            384,    CFC_ASSEM.1079,    CFC_ASSEM.1085,    2.861497
            385,    CFC_ASSEM.1086,    CFC_ASSEM.1087,    0.009856262
            386,    CFC_ASSEM.1087,    CFC_ASSEM.1088,    0.009856262
            387,    CFC_ASSEM.1088,    CFC_ASSEM.1089,    0.009856262
HEADER VARIABLES 0, CFC_ASSEM
C Heat Load-Loading on CFC card[CFC_ASSEM]::2A41
      CFC_ASSEM.Q851 = CFC_ASSEM.Q851 + 0.01388889
      CFC_ASSEM.Q854 = CFC_ASSEM.Q854 + 0.01388889
      CFC_ASSEM.Q857 = CFC_ASSEM.Q857 + 0.01388889
      CFC_ASSEM.Q860 = CFC_ASSEM.Q860 + 0.01388889
      CFC_ASSEM.Q863 = CFC_ASSEM.Q863 + 0.01388889
      CFC_ASSEM.Q866 = CFC_ASSEM.Q866 + 0.006944444
      CFC_ASSEM.Q869 = CFC_ASSEM.Q869 + 0.006944444
      CFC_ASSEM.Q872 = CFC_ASSEM.Q872 + 0.01388889
      CFC_ASSEM.Q875 = CFC_ASSEM.Q875 + 0.01388889
      CFC_ASSEM.Q878 = CFC_ASSEM.Q878 + 0.01388889
      CFC_ASSEM.Q881 = CFC_ASSEM.Q881 + 0.003472222
      CFC_ASSEM.Q884 = CFC_ASSEM.Q884 + 0.01388889
      CFC_ASSEM.Q887 = CFC_ASSEM.Q887 + 0.01388889
      CFC_ASSEM.Q890 = CFC_ASSEM.Q890 + 0.006944444
      CFC_ASSEM.Q893 = CFC_ASSEM.Q893 + 0.006944444
      CFC_ASSEM.Q896 = CFC_ASSEM.Q896 + 0.01388889
      CFC_ASSEM.Q899 = CFC_ASSEM.Q899 + 0.01388889
      CFC_ASSEM.Q902 = CFC_ASSEM.Q902 + 0.01388889
      CFC_ASSEM.Q903 = CFC_ASSEM.Q903 + 0.01388889
      CFC_ASSEM.Q904 = CFC_ASSEM.Q904 + 0.01388889
      CFC_ASSEM.Q905 = CFC_ASSEM.Q905 + 0.006944444
      CFC_ASSEM.Q906 = CFC_ASSEM.Q906 + 0.006944444
      CFC_ASSEM.Q907 = CFC_ASSEM.Q907 + 0.01388889
      CFC_ASSEM.Q908 = CFC_ASSEM.Q908 + 0.01388889
      CFC_ASSEM.Q909 = CFC_ASSEM.Q909 + 0.01388889
      CFC_ASSEM.Q910 = CFC_ASSEM.Q910 + 0.01388889
      CFC_ASSEM.Q911 = CFC_ASSEM.Q911 + 0.01388889
      CFC_ASSEM.Q912 = CFC_ASSEM.Q912 + 0.006944444
      CFC_ASSEM.Q913 = CFC_ASSEM.Q913 + 0.006944444
      CFC_ASSEM.Q914 = CFC_ASSEM.Q914 + 0.01388889
      CFC_ASSEM.Q915 = CFC_ASSEM.Q915 + 0.01388889
      CFC_ASSEM.Q916 = CFC_ASSEM.Q916 + 0.01388889
      CFC_ASSEM.Q917 = CFC_ASSEM.Q917 + 0.01388889
      CFC_ASSEM.Q918 = CFC_ASSEM.Q918 + 0.01388889
      CFC_ASSEM.Q919 = CFC_ASSEM.Q919 + 0.006944444
      CFC_ASSEM.Q920 = CFC_ASSEM.Q920 + 0.003472222
      CFC_ASSEM.Q921 = CFC_ASSEM.Q921 + 0.006944444
      CFC_ASSEM.Q922 = CFC_ASSEM.Q922 + 0.006944444
      CFC_ASSEM.Q923 = CFC_ASSEM.Q923 + 0.006944444
      CFC_ASSEM.Q924 = CFC_ASSEM.Q924 + 0.006944444
      CFC_ASSEM.Q925 = CFC_ASSEM.Q925 + 0.006944444
      CFC_ASSEM.Q926 = CFC_ASSEM.Q926 + 0.003472222
      CFC_ASSEM.Q933 = CFC_ASSEM.Q933 + 0.006944444
      CFC_ASSEM.Q976 = CFC_ASSEM.Q976 + 0.003472222
      CFC_ASSEM.Q1019 = CFC_ASSEM.Q1019 + 0.006944444
C Heat Load-Heat Load from Light[CFC_ASSEM]::2A42
      CFC_ASSEM.Q1021 = CFC_ASSEM.Q1021 + 0.025
      CFC_ASSEM.Q1057 = CFC_ASSEM.Q1057 + 0.025
      CFC_ASSEM.Q1078 = CFC_ASSEM.Q1078 + 0.025
      CFC_ASSEM.Q1084 = CFC_ASSEM.Q1084 + 0.025
C Heat Load-Loading on CFC card[CFC_ASSEM]::2A41
      CFC_ASSEM.Q1086 = CFC_ASSEM.Q1086 + 0.006944444
      CFC_ASSEM.Q1087 = CFC_ASSEM.Q1087 + 0.006944444
      CFC_ASSEM.Q1088 = CFC_ASSEM.Q1088 + 0.006944444
      CFC_ASSEM.Q1089 = CFC_ASSEM.Q1089 + 0.006944444
HEADER VARIABLES 1, CFC_ASSEM
C TEC Input for TEC-Thermoelectric Cooler[CFC_ASSEM]::2284
      P__TD = 2.
C     Controlling Cold Side
      IF( NSOL .LE. 1 ) THEN
          P__TD = P__TD*0.5
      ELSE
          T__TD =   0.25 * CFC_ASSEM.T1027
     +            + 0.25 * CFC_ASSEM.T1083
     +            + 0.25 * CFC_ASSEM.T1055
     +            + 0.25 * CFC_ASSEM.T1063
          O__TD = -5.
          F__TD = -6.
          IF( T__TD .GT. O__TD .OR.
     +       (OO_2284 .EQ. 1 .AND. T__TD .GT. F__TD ) ) THEN
              IF( OO_2284 .EQ. 0 ) CC_2284 = 1 + CC_2284
              OO_2284 = 1
          ELSE
              P__TD = 0.
              OO_2284 = 0
          ENDIF
      ENDIF
      P_2284 = P__TD
      CALL TECUNITS('LENGTH','m')
      CALL TECUNITS('TPOWER','W')
      CALL TEC2( 'CFC_ASSEM', NA1, NA2, NA4, A3, -3,
     +    CU_2284, V_2284, P_2284,
     +    0.0015, 77, S_2284, R_2284, KK_2284)
      C__TD = T1027*0.25
     +      + T1083*0.25
     +      + T1055*0.25
     +      + T1063*0.25
      H__TD = T1026*0.25
     +      + T1082*0.25
     +      + T1054*0.25
     +      + T1062*0.25
      CALL TECINFO( C__TD, H__TD, 0.0015,
     +S_2284, R_2284, KK_2284,
     +DT_2284, IM_2284, VM_2284, QC_2284,
     +IO_2284, VO_2284, QO_2284, CO_2284)

HEADER NODE DATA, FORTY_PIN_CONNECTOR
HEADER CONDUCTOR DATA, FORTY_PIN_CONNECTOR
C Contact - Edge Contactor-Top Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::2059
            1,    BATTERY.73,    CARDS.251,    0.02945
            2,    BATTERY.80,    CARDS.252,    0.014725
            3,    BATTERY.97,    CARDS.250,    0.02945
C Contact - Edge Contactor-Bottom Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205B
            4,    BATTERY.99,    CARDS.755,    0.02945
C Contact - Edge Contactor-Top Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::2059
            5,    BATTERY.113,    CARDS.249,    0.02945
C Contact - Edge Contactor-Bottom Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205B
            6,    BATTERY.114,    CARDS.748,    0.014725
C Contact - Edge Contactor-Top Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::2059
            7,    BATTERY.128,    CARDS.242,    0.014725
C Contact - Edge Contactor-Bottom Battery - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205B
            8,    BATTERY.136,    CARDS.769,    0.02945
            9,    BATTERY.142,    CARDS.762,    0.02945
            10,    BATTERY.144,    CARDS.776,    0.014725
C Contact - Edge Contactor-Reaction Wheel - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205A
            11,    CARDS.12,    CARDS.186,    0.02945
            12,    CARDS.17,    CARDS.790,    0.02945
            13,    CARDS.22,    CARDS.783,    0.014725
C Contact - Edge Contactor-C3 - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::2058
            14,    CARDS.70,    CARDS.257,    0.014725
            15,    CARDS.75,    CARDS.256,    0.02945
            16,    CARDS.80,    CARDS.255,    0.02945
            17,    CARDS.85,    CARDS.254,    0.02945
            18,    CARDS.90,    CARDS.253,    0.014725
C Contact - Edge Contactor-Reaction Wheel - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205A
            19,    CARDS.193,    CARDS.1030,    0.02945
            20,    CARDS.200,    CARDS.1025,    0.014725
C Contact - Edge Contactor-Star Tracker - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][4]::203D
            21,    CARDS.253,    CARDS.1024,    0.014725
            22,    CARDS.254,    CARDS.1001,    0.02945
            23,    CARDS.255,    CARDS.981,    0.02945
            24,    CARDS.256,    CARDS.958,    0.02945
            25,    CARDS.257,    CARDS.938,    0.014725
C Contact - Edge Contactor-DXWiFi - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203B
            26,    CARDS.258,    CARDS.1022,    0.014725
C Contact - Edge Contactor-GPS - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203C
            27,    CARDS.258,    CARDS.1023,    0.014725
C Contact - Edge Contactor-DXWiFi - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203B
            28,    CARDS.259,    CARDS.999,    0.02945
C Contact - Edge Contactor-GPS - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203C
            29,    CARDS.259,    CARDS.1000,    0.02945
C Contact - Edge Contactor-DXWiFi - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203B
            30,    CARDS.260,    CARDS.979,    0.02945
C Contact - Edge Contactor-GPS - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203C
            31,    CARDS.260,    CARDS.980,    0.02945
C Contact - Edge Contactor-DXWiFi - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203B
            32,    CARDS.261,    CARDS.956,    0.02945
C Contact - Edge Contactor-GPS - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203C
            33,    CARDS.261,    CARDS.957,    0.02945
C Contact - Edge Contactor-DXWiFi - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203B
            34,    CARDS.262,    CARDS.936,    0.014725
C Contact - Edge Contactor-GPS - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203C
            35,    CARDS.262,    CARDS.937,    0.014725
C Contact - Edge Contactor-Solar Connection Card - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][1]::203A
            36,    CARDS.263,    CARDS.1021,    0.014725
            37,    CARDS.264,    CARDS.998,    0.02945
            38,    CARDS.265,    CARDS.978,    0.02945
            39,    CARDS.266,    CARDS.955,    0.02945
            40,    CARDS.267,    CARDS.935,    0.014725
C Contact - Edge Contactor-Solar Connection Card - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205E
            41,    CARDS.458,    CARDS.889,    0.014725
            42,    CARDS.461,    CARDS.871,    0.02945
            43,    CARDS.468,    CARDS.856,    0.02945
            44,    CARDS.474,    CARDS.932,    0.02945
            45,    CARDS.480,    CARDS.880,    0.014725
C Contact - Edge Contactor-CFC - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205D
            46,    CARDS.486,    CFC_ASSEM.913,    0.00589
            47,    CARDS.486,    CFC_ASSEM.920,    0.009816667
            48,    CARDS.643,    CFC_ASSEM.906,    0.01374333
            49,    CARDS.643,    CFC_ASSEM.913,    0.01374333
            50,    CARDS.685,    CFC_ASSEM.881,    0.009816667
            51,    CARDS.685,    CFC_ASSEM.1019,    0.003926667
C Contact - Edge Contactor-OTRA - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205C
            52,    CARDS.703,    CARDS.891,    0.014725
            53,    CARDS.721,    CARDS.873,    0.02945
            54,    CARDS.727,    CARDS.858,    0.02945
            55,    CARDS.734,    CARDS.934,    0.02945
            56,    CARDS.741,    CARDS.882,    0.014725
C Contact - Edge Contactor-CFC - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205D
            57,    CARDS.795,    CFC_ASSEM.869,    0.00589
            58,    CARDS.795,    CFC_ASSEM.893,    0.01963333
            59,    CARDS.795,    CFC_ASSEM.906,    0.00589
            60,    CARDS.799,    CFC_ASSEM.869,    0.01374333
            61,    CARDS.799,    CFC_ASSEM.1019,    0.01570667
HEADER NODE DATA, FRAMES
            26,    20.,    0.728028
            29,    20.,    0.728028
            32,    20.,    0.728028
            35,    20.,    0.728028
            45,    20.,    0.728028
            46,    20.,    0.728028
            47,    20.,    0.728028
            48,    20.,    0.728028
            49,    20.,    0.728028
            50,    20.,    0.728028
            51,    20.,    0.728028
            52,    20.,    0.728028
            53,    20.,    0.728028
            54,    20.,    0.728028
            55,    20.,    0.728028
            56,    20.,    0.728028
            57,    20.,    0.728028
            58,    20.,    0.728028
            59,    20.,    0.728028
            60,    20.,    0.728028
            61,    20.,    0.728028
            62,    20.,    0.728028
            63,    20.,    0.728028
            64,    20.,    0.728028
            65,    20.,    0.728028
            67,    20.,    0.728028
            68,    20.,    0.728028
            69,    20.,    0.728028
            71,    20.,    0.728028
            73,    20.,    0.728028
            186,    20.,    0.728028
            188,    20.,    0.728028
            193,    20.,    0.728028
            195,    20.,    0.728028
            200,    20.,    0.728028
            202,    20.,    0.728028
            207,    20.,    0.728028
            209,    20.,    0.728028
            214,    20.,    0.728028
            216,    20.,    0.728028
            221,    20.,    0.728028
            223,    20.,    0.728028
            228,    20.,    0.728028
            230,    20.,    0.728028
            235,    20.,    0.728028
            237,    20.,    0.728028
            242,    20.,    0.728028
            244,    20.,    0.728028
            249,    20.,    0.728028
            250,    20.,    0.728028
            251,    20.,    0.728028
            252,    20.,    0.728028
            253,    20.,    0.728028
            254,    20.,    0.728028
            255,    20.,    0.728028
            256,    20.,    0.728028
            257,    20.,    0.728028
            258,    20.,    0.728028
            259,    20.,    0.728028
            260,    20.,    0.728028
            261,    20.,    0.728028
            262,    20.,    0.728028
            263,    20.,    0.728028
            264,    20.,    0.728028
            265,    20.,    0.728028
            266,    20.,    0.728028
            267,    20.,    0.728028
            268,    20.,    0.728028
            269,    20.,    0.728028
            270,    20.,    0.728028
            271,    20.,    0.728028
            272,    20.,    0.728028
            273,    20.,    0.728028
            274,    20.,    0.728028
            275,    20.,    0.728028
            276,    20.,    0.728028
            277,    20.,    0.728028
            278,    20.,    0.728028
            279,    20.,    0.728028
            280,    20.,    0.728028
            281,    20.,    0.728028
            282,    20.,    0.728028
            283,    20.,    0.728028
            284,    20.,    0.728028
            285,    20.,    0.728028
            286,    20.,    0.728028
            287,    20.,    0.728028
            288,    20.,    0.728028
            289,    20.,    0.728028
            290,    20.,    0.728028
            291,    20.,    0.728028
            292,    20.,    0.728028
            293,    20.,    0.728028
            294,    20.,    0.728028
            295,    20.,    0.728028
            296,    20.,    0.728028
            297,    20.,    0.728028
            298,    20.,    0.728028
            299,    20.,    0.728028
            300,    20.,    0.728028
            301,    20.,    0.728028
            302,    20.,    0.728028
            303,    20.,    0.728028
            304,    20.,    0.728028
            305,    20.,    0.728028
            306,    20.,    0.728028
            307,    20.,    0.728028
            308,    20.,    0.728028
            309,    20.,    0.728028
            310,    20.,    0.728028
            311,    20.,    0.728028
            312,    20.,    0.728028
            313,    20.,    0.728028
            314,    20.,    0.728028
            315,    20.,    0.728028
            316,    20.,    0.728028
            317,    20.,    0.728028
            318,    20.,    0.728028
            319,    20.,    0.728028
            320,    20.,    0.728028
            321,    20.,    0.728028
            322,    20.,    0.728028
            323,    20.,    0.728028
            324,    20.,    0.728028
            325,    20.,    0.728028
            326,    20.,    0.728028
            327,    20.,    0.728028
            328,    20.,    0.728028
            329,    20.,    0.728028
            330,    20.,    0.728028
            331,    20.,    0.728028
            332,    20.,    0.728028
            333,    20.,    0.728028
            334,    20.,    0.728028
            335,    20.,    0.728028
            336,    20.,    0.728028
            337,    20.,    0.728028
            338,    20.,    0.728028
            339,    20.,    0.728028
            340,    20.,    0.728028
            341,    20.,    0.728028
            342,    20.,    0.728028
            343,    20.,    0.728028
            344,    20.,    0.728028
            345,    20.,    0.728028
            346,    20.,    0.728028
            347,    20.,    0.728028
            348,    20.,    0.728028
            349,    20.,    0.728028
            350,    20.,    0.728028
            351,    20.,    0.728028
            352,    20.,    0.728028
            353,    20.,    0.728028
            354,    20.,    0.728028
            355,    20.,    0.728028
            356,    20.,    0.728028
            357,    20.,    0.728028
            358,    20.,    0.728028
            359,    20.,    0.728028
            360,    20.,    0.728028
            361,    20.,    0.728028
            362,    20.,    0.728028
            363,    20.,    0.728028
            364,    20.,    0.728028
            365,    20.,    0.728028
            366,    20.,    0.728028
            367,    20.,    0.728028
            368,    20.,    0.728028
            369,    20.,    0.728028
            370,    20.,    0.728028
            371,    20.,    0.728028
            372,    20.,    0.728028
            373,    20.,    0.728028
            374,    20.,    0.728028
            375,    20.,    0.728028
            376,    20.,    0.728028
            377,    20.,    0.728028
            378,    20.,    0.728028
            379,    20.,    0.728028
            380,    20.,    0.728028
            381,    20.,    0.728028
            382,    20.,    0.728028
            383,    20.,    0.728028
            384,    20.,    0.728028
            385,    20.,    0.728028
            386,    20.,    0.728028
            387,    20.,    0.728028
            388,    20.,    0.728028
            389,    20.,    0.728028
            390,    20.,    0.728028
            391,    20.,    0.728028
            392,    20.,    0.728028
            393,    20.,    0.728028
            394,    20.,    0.728028
            395,    20.,    0.728028
            396,    20.,    0.728028
            397,    20.,    0.728028
            398,    20.,    0.728028
            399,    20.,    0.728028
            400,    20.,    0.728028
            401,    20.,    0.728028
            402,    20.,    0.728028
            403,    20.,    0.728028
            404,    20.,    0.728028
            405,    20.,    0.728028
            406,    20.,    0.728028
            407,    20.,    0.728028
            408,    20.,    0.728028
            409,    20.,    0.728028
            410,    20.,    0.728028
            411,    20.,    0.728028
            412,    20.,    0.728028
            413,    20.,    0.728028
            414,    20.,    0.728028
            415,    20.,    0.728028
            416,    20.,    0.728028
            417,    20.,    0.728028
            418,    20.,    0.728028
            419,    20.,    0.728028
            420,    20.,    0.728028
            421,    20.,    0.728028
            422,    20.,    0.728028
            423,    20.,    0.728028
            424,    20.,    0.728028
            425,    20.,    0.728028
            426,    20.,    0.728028
            427,    20.,    0.728028
            428,    20.,    0.728028
            429,    20.,    0.728028
            430,    20.,    0.728028
            431,    20.,    0.728028
            432,    20.,    0.728028
            433,    20.,    0.728028
            434,    20.,    0.728028
            435,    20.,    0.728028
            436,    20.,    0.728028
            437,    20.,    0.728028
            438,    20.,    0.728028
            439,    20.,    0.728028
            440,    20.,    0.728028
            441,    20.,    0.728028
            442,    20.,    0.728028
            443,    20.,    0.728028
            444,    20.,    0.728028
            445,    20.,    0.728028
            446,    20.,    0.728028
            447,    20.,    0.728028
            448,    20.,    0.728028
            449,    20.,    0.728028
            450,    20.,    0.728028
            451,    20.,    0.728028
            452,    20.,    0.728028
            453,    20.,    0.728028
            454,    20.,    0.728028
            455,    20.,    0.728028
            456,    20.,    0.728028
            457,    20.,    0.728028
            458,    20.,    0.728028
            459,    20.,    0.728028
            460,    20.,    0.728028
            461,    20.,    0.728028
            462,    20.,    0.728028
            463,    20.,    0.728028
            464,    20.,    0.728028
            465,    20.,    0.728028
            466,    20.,    0.728028
            467,    20.,    0.728028
            468,    20.,    0.728028
            469,    20.,    0.728028
            470,    20.,    0.728028
            471,    20.,    0.728028
            472,    20.,    0.728028
            473,    20.,    0.728028
            474,    20.,    0.728028
            475,    20.,    0.728028
            476,    20.,    0.728028
            477,    20.,    0.728028
            478,    20.,    0.728028
            479,    20.,    0.728028
            480,    20.,    0.728028
            481,    20.,    0.728028
            482,    20.,    0.728028
            483,    20.,    0.728028
            484,    20.,    0.728028
            485,    20.,    0.728028
            486,    20.,    0.728028
            487,    20.,    0.728028
            488,    20.,    0.728028
            489,    20.,    0.728028
            491,    20.,    0.728028
            493,    20.,    0.728028
            495,    20.,    0.728028
            497,    20.,    0.728028
            499,    20.,    0.728028
            501,    20.,    0.728028
            503,    20.,    0.728028
            506,    20.,    0.728028
            510,    20.,    0.728028
            513,    20.,    0.728028
            514,    20.,    0.728028
            517,    20.,    0.728028
            518,    20.,    0.728028
            521,    20.,    0.728028
            522,    20.,    0.728028
            526,    20.,    0.728028
            529,    20.,    0.728028
            530,    20.,    0.728028
            534,    20.,    0.728028
            538,    20.,    0.728028
            542,    20.,    0.728028
            546,    20.,    0.728028
            550,    20.,    0.728028
            554,    20.,    0.728028
            559,    20.,    0.728028
            564,    20.,    0.728028
            569,    20.,    0.728028
            574,    20.,    0.728028
            579,    20.,    0.728028
            580,    20.,    0.728028
            581,    20.,    0.728028
            582,    20.,    0.728028
            583,    20.,    0.728028
            584,    20.,    0.728028
            585,    20.,    0.728028
            586,    20.,    0.728028
            587,    20.,    0.728028
            588,    20.,    0.728028
            589,    20.,    0.728028
            590,    20.,    0.728028
            591,    20.,    0.728028
            592,    20.,    0.728028
            593,    20.,    0.728028
            594,    20.,    0.728028
            595,    20.,    0.728028
            596,    20.,    0.728028
            597,    20.,    0.728028
            598,    20.,    0.728028
            599,    20.,    0.728028
            600,    20.,    0.728028
            601,    20.,    0.728028
            602,    20.,    0.728028
            603,    20.,    0.728028
            604,    20.,    0.728028
            605,    20.,    0.728028
            606,    20.,    0.728028
            607,    20.,    0.728028
            608,    20.,    0.728028
            609,    20.,    0.728028
            610,    20.,    0.728028
            611,    20.,    0.728028
            612,    20.,    0.728028
            613,    20.,    0.728028
            614,    20.,    0.728028
            615,    20.,    0.728028
            616,    20.,    0.728028
            617,    20.,    0.728028
            618,    20.,    0.728028
            619,    20.,    0.728028
            620,    20.,    0.728028
            621,    20.,    0.728028
            622,    20.,    0.728028
            623,    20.,    0.728028
            624,    20.,    0.728028
            625,    20.,    0.728028
            626,    20.,    0.728028
            627,    20.,    0.728028
            628,    20.,    0.728028
            629,    20.,    0.728028
            630,    20.,    0.728028
            631,    20.,    0.728028
            632,    20.,    0.728028
            633,    20.,    0.728028
            634,    20.,    0.728028
            635,    20.,    0.728028
            636,    20.,    0.728028
            637,    20.,    0.728028
            638,    20.,    0.728028
            639,    20.,    0.728028
            640,    20.,    0.728028
            641,    20.,    0.728028
            642,    20.,    0.728028
            643,    20.,    0.728028
            644,    20.,    0.728028
            645,    20.,    0.728028
            646,    20.,    0.728028
            647,    20.,    0.728028
            648,    20.,    0.728028
            649,    20.,    0.728028
            650,    20.,    0.728028
            651,    20.,    0.728028
            652,    20.,    0.728028
            653,    20.,    0.728028
            654,    20.,    0.728028
            655,    20.,    0.728028
            656,    20.,    0.728028
            657,    20.,    0.728028
            658,    20.,    0.728028
            659,    20.,    0.728028
            660,    20.,    0.728028
            661,    20.,    0.728028
            662,    20.,    0.728028
            663,    20.,    0.728028
            664,    20.,    0.728028
            665,    20.,    0.728028
            666,    20.,    0.728028
            667,    20.,    0.728028
            668,    20.,    0.728028
            669,    20.,    0.728028
            670,    20.,    0.728028
            671,    20.,    0.728028
            672,    20.,    0.728028
            673,    20.,    0.728028
            674,    20.,    0.728028
            675,    20.,    0.728028
            676,    20.,    0.728028
            677,    20.,    0.728028
            678,    20.,    0.728028
            679,    20.,    0.728028
            680,    20.,    0.728028
            681,    20.,    0.728028
            682,    20.,    0.728028
            683,    20.,    0.728028
            684,    20.,    0.728028
            685,    20.,    0.728028
            686,    20.,    0.728028
            687,    20.,    0.728028
            688,    20.,    0.728028
            689,    20.,    0.728028
            690,    20.,    0.728028
            691,    20.,    0.728028
            692,    20.,    0.728028
            693,    20.,    0.728028
            694,    20.,    0.728028
            695,    20.,    0.728028
            696,    20.,    0.728028
            697,    20.,    0.728028
            698,    20.,    0.728028
            699,    20.,    0.728028
            700,    20.,    0.728028
            701,    20.,    0.728028
            702,    20.,    0.728028
            703,    20.,    0.728028
            704,    20.,    0.728028
            705,    20.,    0.728028
            706,    20.,    0.728028
            707,    20.,    0.728028
            708,    20.,    0.728028
            709,    20.,    0.728028
            710,    20.,    0.728028
            711,    20.,    0.728028
            712,    20.,    0.728028
            713,    20.,    0.728028
            714,    20.,    0.728028
            715,    20.,    0.728028
            716,    20.,    0.728028
            717,    20.,    0.728028
            718,    20.,    0.728028
            719,    20.,    0.728028
            720,    20.,    0.728028
            721,    20.,    0.728028
            722,    20.,    0.728028
            723,    20.,    0.728028
            724,    20.,    0.728028
            725,    20.,    0.728028
            726,    20.,    0.728028
            727,    20.,    0.728028
            728,    20.,    0.728028
            729,    20.,    0.728028
            730,    20.,    0.728028
            731,    20.,    0.728028
            732,    20.,    0.728028
            733,    20.,    0.728028
            734,    20.,    0.728028
            735,    20.,    0.728028
            736,    20.,    0.728028
            737,    20.,    0.728028
            738,    20.,    0.728028
            739,    20.,    0.728028
            740,    20.,    0.728028
            741,    20.,    0.728028
            742,    20.,    0.728028
            743,    20.,    0.728028
            744,    20.,    0.728028
            745,    20.,    0.728028
            746,    20.,    0.728028
            747,    20.,    0.728028
            748,    20.,    0.728028
            749,    20.,    0.728028
            750,    20.,    0.728028
            751,    20.,    0.728028
            752,    20.,    0.728028
            753,    20.,    0.728028
            754,    20.,    0.728028
            755,    20.,    0.728028
            756,    20.,    0.728028
            757,    20.,    0.728028
            758,    20.,    0.728028
            759,    20.,    0.728028
            760,    20.,    0.728028
            761,    20.,    0.728028
            762,    20.,    0.728028
            763,    20.,    0.728028
            764,    20.,    0.728028
            765,    20.,    0.728028
            766,    20.,    0.728028
            767,    20.,    0.728028
            768,    20.,    0.728028
            769,    20.,    0.728028
            770,    20.,    0.728028
            771,    20.,    0.728028
            772,    20.,    0.728028
            773,    20.,    0.728028
            774,    20.,    0.728028
            775,    20.,    0.728028
            776,    20.,    0.728028
            777,    20.,    0.728028
            778,    20.,    0.728028
            779,    20.,    0.728028
            780,    20.,    0.728028
            781,    20.,    0.728028
            782,    20.,    0.728028
            783,    20.,    0.728028
            784,    20.,    0.728028
            785,    20.,    0.728028
            786,    20.,    0.728028
            787,    20.,    0.728028
            788,    20.,    0.728028
            789,    20.,    0.728028
            790,    20.,    0.728028
            791,    20.,    0.728028
            792,    20.,    0.728028
            793,    20.,    0.728028
            794,    20.,    0.728028
            795,    20.,    0.728028
            796,    20.,    0.728028
            797,    20.,    0.728028
            798,    20.,    0.728028
            799,    20.,    0.728028
            800,    20.,    0.728028
            801,    20.,    0.728028
            802,    20.,    0.728028
            803,    20.,    0.728028
            804,    20.,    0.728028
            805,    20.,    0.728028
            806,    20.,    0.728028
            807,    20.,    0.728028
            808,    20.,    0.728028
            809,    20.,    0.728028
            810,    20.,    0.728028
            811,    20.,    0.728028
            812,    20.,    0.728028
            813,    20.,    0.728028
            814,    20.,    0.728028
            815,    20.,    0.728028
            816,    20.,    0.728028
            817,    20.,    0.728028
            818,    20.,    0.728028
            819,    20.,    0.728028
            820,    20.,    0.728028
            821,    20.,    0.728028
            822,    20.,    0.728028
            823,    20.,    0.728028
            824,    20.,    0.728028
            825,    20.,    0.728028
            826,    20.,    0.728028
            827,    20.,    0.728028
            828,    20.,    0.728028
            829,    20.,    0.728028
            830,    20.,    0.728028
            831,    20.,    0.728028
            832,    20.,    0.728028
            833,    20.,    0.728028
            834,    20.,    0.728028
            835,    20.,    0.728028
            836,    20.,    0.728028
            837,    20.,    0.728028
            838,    20.,    0.728028
            839,    20.,    0.728028
            840,    20.,    0.728028
            841,    20.,    0.728028
            842,    20.,    0.728028
            843,    20.,    0.728028
            844,    20.,    0.728028
            845,    20.,    0.728028
            846,    20.,    0.728028
            867,    20.,    0.728028
            869,    20.,    0.728028
            871,    20.,    0.728028
            873,    20.,    0.728028
            874,    20.,    0.728028
            876,    20.,    0.728028
            878,    20.,    0.728028
            880,    20.,    0.728028
            882,    20.,    0.728028
            883,    20.,    0.728028
            884,    20.,    0.728028
            886,    20.,    0.728028
            888,    20.,    0.728028
            889,    20.,    0.728028
            890,    20.,    0.728028
            891,    20.,    0.728028
            892,    20.,    0.728028
            894,    20.,    0.728028
            895,    20.,    0.728028
            896,    20.,    0.728028
            897,    20.,    0.728028
            899,    20.,    0.728028
            901,    20.,    0.728028
            903,    20.,    0.728028
            904,    20.,    0.728028
            906,    20.,    0.728028
            908,    20.,    0.728028
            909,    20.,    0.728028
            910,    20.,    0.728028
            911,    20.,    0.728028
            912,    20.,    0.728028
            913,    20.,    0.728028
            914,    20.,    0.728028
            915,    20.,    0.728028
            916,    20.,    0.728028
            917,    20.,    0.728028
            918,    20.,    0.728028
            919,    20.,    0.728028
            921,    20.,    0.728028
            922,    20.,    0.728028
            923,    20.,    0.728028
            924,    20.,    0.728028
            925,    20.,    0.728028
            926,    20.,    0.728028
            927,    20.,    0.728028
            928,    20.,    0.728028
            929,    20.,    0.728028
            930,    20.,    0.728028
            931,    20.,    0.728028
            932,    20.,    0.728028
            933,    20.,    0.728028
            934,    20.,    0.728028
            935,    20.,    0.728028
            936,    20.,    0.728028
            937,    20.,    0.728028
            938,    20.,    0.728028
            939,    20.,    0.728028
            940,    20.,    0.728028
            941,    20.,    0.728028
            942,    20.,    0.728028
            943,    20.,    0.728028
            944,    20.,    0.728028
            945,    20.,    0.728028
            946,    20.,    0.728028
            947,    20.,    0.728028
            948,    20.,    0.728028
            949,    20.,    0.728028
            950,    20.,    0.728028
            951,    20.,    0.728028
            952,    20.,    0.728028
            953,    20.,    0.728028
            954,    20.,    0.728028
            955,    20.,    0.728028
            956,    20.,    0.728028
            957,    20.,    0.728028
            958,    20.,    0.728028
            959,    20.,    0.728028
            960,    20.,    0.728028
            961,    20.,    0.728028
            962,    20.,    0.728028
            963,    20.,    0.728028
            964,    20.,    0.728028
            965,    20.,    0.728028
            966,    20.,    0.728028
            967,    20.,    0.728028
            968,    20.,    0.728028
            969,    20.,    0.728028
            970,    20.,    0.728028
            971,    20.,    0.728028
            972,    20.,    0.728028
            973,    20.,    0.728028
            974,    20.,    0.728028
            975,    20.,    0.728028
            976,    20.,    0.728028
            977,    20.,    0.728028
            978,    20.,    0.728028
            979,    20.,    0.728028
            980,    20.,    0.728028
            981,    20.,    0.728028
            982,    20.,    0.728028
            983,    20.,    0.728028
            984,    20.,    0.728028
            985,    20.,    0.728028
            986,    20.,    0.728028
            987,    20.,    0.728028
            988,    20.,    0.728028
            990,    20.,    0.728028
            992,    20.,    0.728028
            993,    20.,    0.728028
            994,    20.,    0.728028
            995,    20.,    0.728028
            996,    20.,    0.728028
            997,    20.,    0.728028
            999,    20.,    0.728028
            1000,    20.,    0.728028
            1002,    20.,    0.728028
            1003,    20.,    0.728028
            1004,    20.,    0.728028
            1006,    20.,    0.728028
            1008,    20.,    0.728028
            1010,    20.,    0.728028
            1012,    20.,    0.728028
            1013,    20.,    0.728028
            1015,    20.,    0.728028
            1017,    20.,    0.728028
            1043,    20.,    0.728028
            1044,    20.,    0.728028
            1046,    20.,    0.728028
            1048,    20.,    0.728028
            1049,    20.,    0.728028
            1050,    20.,    0.728028
            1053,    20.,    0.728028
            1055,    20.,    0.728028
            1058,    20.,    0.728028
            1059,    20.,    0.728028
            1060,    20.,    0.728028
            1063,    20.,    0.728028
            1064,    20.,    0.728028
            1065,    20.,    0.728028
            1067,    20.,    0.728028
            1069,    20.,    0.728028
            1071,    20.,    0.728028
            1073,    20.,    0.728028
            1075,    20.,    0.728028
            1076,    20.,    0.728028
            1077,    20.,    0.728028
            1079,    20.,    0.728028
            1082,    20.,    0.728028
            1084,    20.,    0.728028
            1086,    20.,    0.728028
            1087,    20.,    0.728028
            1088,    20.,    0.728028
            1089,    20.,    0.728028
            1090,    20.,    0.728028
            1091,    20.,    0.728028
            1092,    20.,    0.728028
            1093,    20.,    0.728028
            1094,    20.,    0.728028
            1095,    20.,    0.728028
            1096,    20.,    0.728028
            1097,    20.,    0.728028
            1098,    20.,    0.728028
            1099,    20.,    0.728028
            1100,    20.,    0.728028
            1101,    20.,    0.728028
            1102,    20.,    0.728028
            1103,    20.,    0.728028
            1104,    20.,    0.728028
            1105,    20.,    0.728028
            1106,    20.,    0.728028
            1107,    20.,    0.728028
            1108,    20.,    0.728028
            1109,    20.,    0.728028
            1110,    20.,    0.728028
            1111,    20.,    0.728028
            1112,    20.,    0.728028
            1113,    20.,    0.728028
            1114,    20.,    0.728028
            1115,    20.,    0.728028
            1116,    20.,    0.728028
            1117,    20.,    0.728028
            1118,    20.,    0.728028
            1119,    20.,    0.728028
            1120,    20.,    0.728028
            1121,    20.,    0.728028
            1122,    20.,    0.728028
            1123,    20.,    0.728028
            1124,    20.,    0.728028
            1126,    20.,    0.728028
            1127,    20.,    0.728028
            1129,    20.,    0.728028
            1130,    20.,    0.728028
            1131,    20.,    0.728028
            1133,    20.,    0.728028
            1135,    20.,    0.728028
            1137,    20.,    0.728028
            1138,    20.,    0.728028
            1139,    20.,    0.728028
            1140,    20.,    0.728028
            1142,    20.,    0.728028
            1144,    20.,    0.728028
            1145,    20.,    0.728028
            1147,    20.,    0.728028
            1149,    20.,    0.728028
            1151,    20.,    0.728028
            1153,    20.,    0.728028
            1154,    20.,    0.728028
            1155,    20.,    0.728028
            1157,    20.,    0.728028
            1159,    20.,    0.728028
            1160,    20.,    0.728028
            1162,    20.,    0.728028
            1163,    20.,    0.728028
            1164,    20.,    0.728028
            1165,    20.,    0.728028
HEADER CONDUCTOR DATA, FRAMES
            1,    FRAMES.26,    FRAMES.29,    0.500332
            2,    FRAMES.26,    FRAMES.46,    0.4370093
            3,    FRAMES.26,    FRAMES.606,    0.500332
            4,    FRAMES.29,    FRAMES.32,    0.500332
            5,    FRAMES.29,    FRAMES.47,    0.4370093
            6,    FRAMES.32,    FRAMES.35,    0.500332
            7,    FRAMES.32,    FRAMES.48,    0.4370093
            8,    FRAMES.35,    FRAMES.49,    0.4370093
            9,    FRAMES.35,    FRAMES.665,    0.500332
            10,    FRAMES.45,    FRAMES.46,    0.500332
            11,    FRAMES.45,    FRAMES.55,    0.4370093
            12,    FRAMES.45,    FRAMES.606,    0.4370093
            13,    FRAMES.46,    FRAMES.47,    0.500332
            14,    FRAMES.46,    FRAMES.56,    0.4370093
            15,    FRAMES.47,    FRAMES.48,    0.500332
            16,    FRAMES.47,    FRAMES.57,    0.4370093
            17,    FRAMES.48,    FRAMES.49,    0.500332
            18,    FRAMES.48,    FRAMES.58,    0.4370093
            19,    FRAMES.49,    FRAMES.50,    0.500332
            20,    FRAMES.49,    FRAMES.59,    0.4370093
            21,    FRAMES.50,    FRAMES.51,    0.500332
            22,    FRAMES.50,    FRAMES.60,    0.4370093
            23,    FRAMES.50,    FRAMES.665,    0.4370093
            24,    FRAMES.51,    FRAMES.52,    0.500332
            25,    FRAMES.51,    FRAMES.61,    0.4370093
            26,    FRAMES.51,    FRAMES.683,    0.4370093
            27,    FRAMES.52,    FRAMES.53,    0.500332
            28,    FRAMES.52,    FRAMES.62,    0.4370093
            29,    FRAMES.52,    FRAMES.1092,    0.4370093
            30,    FRAMES.53,    FRAMES.54,    0.500332
            31,    FRAMES.53,    FRAMES.63,    0.4370093
            32,    FRAMES.53,    FRAMES.1112,    0.4370093
            33,    FRAMES.54,    FRAMES.64,    0.4370093
            34,    FRAMES.54,    FRAMES.1129,    0.4370093
            35,    FRAMES.55,    FRAMES.56,    0.500332
            36,    FRAMES.55,    FRAMES.65,    0.4370093
            37,    FRAMES.56,    FRAMES.57,    0.500332
            38,    FRAMES.56,    FRAMES.1164,    0.4370093
            39,    FRAMES.57,    FRAMES.58,    0.500332
            40,    FRAMES.57,    FRAMES.67,    0.4370093
            41,    FRAMES.58,    FRAMES.59,    0.500332
            42,    FRAMES.58,    FRAMES.68,    0.4370093
            43,    FRAMES.59,    FRAMES.60,    0.500332
            44,    FRAMES.59,    FRAMES.69,    0.4370093
            45,    FRAMES.60,    FRAMES.61,    0.500332
            46,    FRAMES.60,    FRAMES.616,    0.4370093
            47,    FRAMES.61,    FRAMES.62,    0.500332
            48,    FRAMES.61,    FRAMES.71,    0.4370093
            49,    FRAMES.62,    FRAMES.63,    0.500332
            50,    FRAMES.62,    FRAMES.626,    0.4370093
            51,    FRAMES.63,    FRAMES.64,    0.500332
            52,    FRAMES.63,    FRAMES.73,    0.4370093
            53,    FRAMES.64,    FRAMES.636,    0.4370093
            54,    FRAMES.65,    FRAMES.642,    0.4370093
            55,    FRAMES.65,    FRAMES.1164,    0.500332
            56,    FRAMES.67,    FRAMES.68,    0.500332
            57,    FRAMES.67,    FRAMES.654,    0.4370093
            58,    FRAMES.67,    FRAMES.1164,    0.500332
            59,    FRAMES.68,    FRAMES.69,    0.500332
            60,    FRAMES.68,    FRAMES.660,    0.4370093
            61,    FRAMES.69,    FRAMES.616,    0.500332
            62,    FRAMES.69,    FRAMES.666,    0.4370093
            63,    FRAMES.71,    FRAMES.616,    0.500332
            64,    FRAMES.71,    FRAMES.626,    0.500332
            65,    FRAMES.71,    FRAMES.678,    0.4370093
            66,    FRAMES.73,    FRAMES.626,    0.500332
            67,    FRAMES.73,    FRAMES.636,    0.500332
            68,    FRAMES.73,    FRAMES.690,    0.4370093
            69,    FRAMES.186,    FRAMES.193,    0.500332
            70,    FRAMES.186,    FRAMES.250,    0.4370093
            71,    FRAMES.186,    FRAMES.1122,    0.4370093
            72,    FRAMES.186,    FRAMES.1151,    0.500332
            73,    FRAMES.188,    FRAMES.195,    0.500332
            74,    FRAMES.188,    FRAMES.692,    0.4370093
            75,    FRAMES.188,    FRAMES.1153,    0.500332
            76,    FRAMES.188,    FRAMES.1159,    0.4370093
            77,    FRAMES.193,    FRAMES.200,    0.500332
            78,    FRAMES.193,    FRAMES.251,    0.4370093
            79,    FRAMES.193,    FRAMES.1127,    0.4370093
            80,    FRAMES.195,    FRAMES.202,    0.500332
            81,    FRAMES.195,    FRAMES.1131,    0.4370093
            82,    FRAMES.195,    FRAMES.1160,    0.4370093
            83,    FRAMES.200,    FRAMES.207,    0.500332
            84,    FRAMES.200,    FRAMES.252,    0.4370093
            85,    FRAMES.200,    FRAMES.1130,    0.4370093
            86,    FRAMES.202,    FRAMES.209,    0.500332
            87,    FRAMES.202,    FRAMES.867,    0.4370093
            88,    FRAMES.202,    FRAMES.1135,    0.4370093
            89,    FRAMES.207,    FRAMES.214,    0.500332
            90,    FRAMES.207,    FRAMES.253,    0.4370093
            91,    FRAMES.207,    FRAMES.1133,    0.4370093
            92,    FRAMES.209,    FRAMES.216,    0.500332
            93,    FRAMES.209,    FRAMES.517,    0.4370093
            94,    FRAMES.209,    FRAMES.869,    0.4370093
            95,    FRAMES.214,    FRAMES.221,    0.500332
            96,    FRAMES.214,    FRAMES.254,    0.4370093
            97,    FRAMES.214,    FRAMES.1137,    0.4370093
            98,    FRAMES.216,    FRAMES.223,    0.500332
            99,    FRAMES.216,    FRAMES.521,    0.4370093
            100,    FRAMES.216,    FRAMES.871,    0.4370093
            101,    FRAMES.221,    FRAMES.228,    0.500332
            102,    FRAMES.221,    FRAMES.255,    0.4370093
            103,    FRAMES.221,    FRAMES.1139,    0.4370093
            104,    FRAMES.223,    FRAMES.230,    0.500332
            105,    FRAMES.223,    FRAMES.873,    0.4370093
            106,    FRAMES.223,    FRAMES.1138,    0.4370093
            107,    FRAMES.228,    FRAMES.235,    0.500332
            108,    FRAMES.228,    FRAMES.256,    0.4370093
            109,    FRAMES.228,    FRAMES.1142,    0.4370093
            110,    FRAMES.230,    FRAMES.237,    0.500332
            111,    FRAMES.230,    FRAMES.874,    0.4370093
            112,    FRAMES.230,    FRAMES.1140,    0.4370093
            113,    FRAMES.235,    FRAMES.257,    0.4370093
            114,    FRAMES.235,    FRAMES.1144,    0.4370093
            115,    FRAMES.237,    FRAMES.244,    0.500332
            116,    FRAMES.237,    FRAMES.876,    0.4370093
            117,    FRAMES.237,    FRAMES.1145,    0.4370093
            118,    FRAMES.242,    FRAMES.249,    0.500332
            119,    FRAMES.242,    FRAMES.258,    0.4370093
            120,    FRAMES.242,    FRAMES.1147,    0.4370093
            121,    FRAMES.244,    FRAMES.878,    0.4370093
            122,    FRAMES.244,    FRAMES.1149,    0.4370093
            123,    FRAMES.249,    FRAMES.250,    0.500332
            124,    FRAMES.249,    FRAMES.259,    0.4370093
            125,    FRAMES.249,    FRAMES.1151,    0.4370093
            126,    FRAMES.250,    FRAMES.251,    0.500332
            127,    FRAMES.250,    FRAMES.260,    0.4370093
            128,    FRAMES.251,    FRAMES.252,    0.500332
            129,    FRAMES.251,    FRAMES.261,    0.4370093
            130,    FRAMES.252,    FRAMES.253,    0.500332
            131,    FRAMES.252,    FRAMES.262,    0.4370093
            132,    FRAMES.253,    FRAMES.254,    0.500332
            133,    FRAMES.253,    FRAMES.263,    0.4370093
            134,    FRAMES.254,    FRAMES.255,    0.500332
            135,    FRAMES.254,    FRAMES.264,    0.4370093
            136,    FRAMES.255,    FRAMES.256,    0.500332
            137,    FRAMES.255,    FRAMES.265,    0.4370093
            138,    FRAMES.256,    FRAMES.257,    0.500332
            139,    FRAMES.256,    FRAMES.266,    0.4370093
            140,    FRAMES.257,    FRAMES.267,    0.4370093
            141,    FRAMES.258,    FRAMES.259,    0.500332
            142,    FRAMES.258,    FRAMES.268,    0.4370093
            143,    FRAMES.259,    FRAMES.260,    0.500332
            144,    FRAMES.259,    FRAMES.269,    0.4370093
            145,    FRAMES.260,    FRAMES.261,    0.500332
            146,    FRAMES.260,    FRAMES.270,    0.4370093
            147,    FRAMES.261,    FRAMES.262,    0.500332
            148,    FRAMES.261,    FRAMES.271,    0.4370093
            149,    FRAMES.262,    FRAMES.263,    0.500332
            150,    FRAMES.262,    FRAMES.272,    0.4370093
            151,    FRAMES.263,    FRAMES.264,    0.500332
            152,    FRAMES.263,    FRAMES.273,    0.4370093
            153,    FRAMES.264,    FRAMES.265,    0.500332
            154,    FRAMES.264,    FRAMES.274,    0.4370093
            155,    FRAMES.265,    FRAMES.266,    0.500332
            156,    FRAMES.265,    FRAMES.275,    0.4370093
            157,    FRAMES.266,    FRAMES.267,    0.500332
            158,    FRAMES.266,    FRAMES.276,    0.4370093
            159,    FRAMES.267,    FRAMES.277,    0.4370093
            160,    FRAMES.268,    FRAMES.269,    0.500332
            161,    FRAMES.268,    FRAMES.278,    0.4370093
            162,    FRAMES.269,    FRAMES.270,    0.500332
            163,    FRAMES.269,    FRAMES.279,    0.4370093
            164,    FRAMES.270,    FRAMES.271,    0.500332
            165,    FRAMES.270,    FRAMES.280,    0.4370093
            166,    FRAMES.271,    FRAMES.272,    0.500332
            167,    FRAMES.271,    FRAMES.281,    0.4370093
            168,    FRAMES.272,    FRAMES.273,    0.500332
            169,    FRAMES.272,    FRAMES.282,    0.4370093
            170,    FRAMES.273,    FRAMES.274,    0.500332
            171,    FRAMES.273,    FRAMES.283,    0.4370093
            172,    FRAMES.274,    FRAMES.275,    0.500332
            173,    FRAMES.274,    FRAMES.284,    0.4370093
            174,    FRAMES.275,    FRAMES.276,    0.500332
            175,    FRAMES.275,    FRAMES.285,    0.4370093
            176,    FRAMES.276,    FRAMES.277,    0.500332
            177,    FRAMES.276,    FRAMES.286,    0.4370093
            178,    FRAMES.277,    FRAMES.287,    0.4370093
            179,    FRAMES.278,    FRAMES.279,    0.500332
            180,    FRAMES.278,    FRAMES.288,    0.4370093
            181,    FRAMES.279,    FRAMES.280,    0.500332
            182,    FRAMES.279,    FRAMES.289,    0.4370093
            183,    FRAMES.280,    FRAMES.281,    0.500332
            184,    FRAMES.280,    FRAMES.290,    0.4370093
            185,    FRAMES.281,    FRAMES.282,    0.500332
            186,    FRAMES.281,    FRAMES.291,    0.4370093
            187,    FRAMES.282,    FRAMES.283,    0.500332
            188,    FRAMES.282,    FRAMES.292,    0.4370093
            189,    FRAMES.283,    FRAMES.284,    0.500332
            190,    FRAMES.283,    FRAMES.293,    0.4370093
            191,    FRAMES.284,    FRAMES.285,    0.500332
            192,    FRAMES.284,    FRAMES.294,    0.4370093
            193,    FRAMES.285,    FRAMES.286,    0.500332
            194,    FRAMES.285,    FRAMES.295,    0.4370093
            195,    FRAMES.286,    FRAMES.287,    0.500332
            196,    FRAMES.286,    FRAMES.296,    0.4370093
            197,    FRAMES.287,    FRAMES.297,    0.4370093
            198,    FRAMES.288,    FRAMES.289,    0.500332
            199,    FRAMES.288,    FRAMES.298,    0.4370093
            200,    FRAMES.289,    FRAMES.290,    0.500332
            201,    FRAMES.289,    FRAMES.299,    0.4370093
            202,    FRAMES.290,    FRAMES.291,    0.500332
            203,    FRAMES.290,    FRAMES.300,    0.4370093
            204,    FRAMES.291,    FRAMES.292,    0.500332
            205,    FRAMES.291,    FRAMES.301,    0.4370093
            206,    FRAMES.292,    FRAMES.293,    0.500332
            207,    FRAMES.292,    FRAMES.302,    0.4370093
            208,    FRAMES.293,    FRAMES.294,    0.500332
            209,    FRAMES.293,    FRAMES.303,    0.4370093
            210,    FRAMES.294,    FRAMES.295,    0.500332
            211,    FRAMES.294,    FRAMES.304,    0.4370093
            212,    FRAMES.295,    FRAMES.296,    0.500332
            213,    FRAMES.295,    FRAMES.305,    0.4370093
            214,    FRAMES.296,    FRAMES.297,    0.500332
            215,    FRAMES.296,    FRAMES.306,    0.4370093
            216,    FRAMES.297,    FRAMES.307,    0.4370093
            217,    FRAMES.298,    FRAMES.299,    0.500332
            218,    FRAMES.298,    FRAMES.308,    0.4370093
            219,    FRAMES.299,    FRAMES.300,    0.500332
            220,    FRAMES.299,    FRAMES.309,    0.4370093
            221,    FRAMES.300,    FRAMES.301,    0.500332
            222,    FRAMES.300,    FRAMES.310,    0.4370093
            223,    FRAMES.301,    FRAMES.302,    0.500332
            224,    FRAMES.301,    FRAMES.311,    0.4370093
            225,    FRAMES.302,    FRAMES.303,    0.500332
            226,    FRAMES.302,    FRAMES.312,    0.4370093
            227,    FRAMES.303,    FRAMES.304,    0.500332
            228,    FRAMES.303,    FRAMES.313,    0.4370093
            229,    FRAMES.304,    FRAMES.305,    0.500332
            230,    FRAMES.304,    FRAMES.314,    0.4370093
            231,    FRAMES.305,    FRAMES.306,    0.500332
            232,    FRAMES.305,    FRAMES.315,    0.4370093
            233,    FRAMES.306,    FRAMES.307,    0.500332
            234,    FRAMES.306,    FRAMES.316,    0.4370093
            235,    FRAMES.307,    FRAMES.317,    0.4370093
            236,    FRAMES.308,    FRAMES.309,    0.500332
            237,    FRAMES.308,    FRAMES.318,    0.4370093
            238,    FRAMES.309,    FRAMES.310,    0.500332
            239,    FRAMES.309,    FRAMES.319,    0.4370093
            240,    FRAMES.310,    FRAMES.311,    0.500332
            241,    FRAMES.310,    FRAMES.320,    0.4370093
            242,    FRAMES.311,    FRAMES.312,    0.500332
            243,    FRAMES.311,    FRAMES.321,    0.4370093
            244,    FRAMES.312,    FRAMES.313,    0.500332
            245,    FRAMES.312,    FRAMES.322,    0.4370093
            246,    FRAMES.313,    FRAMES.314,    0.500332
            247,    FRAMES.313,    FRAMES.323,    0.4370093
            248,    FRAMES.314,    FRAMES.315,    0.500332
            249,    FRAMES.314,    FRAMES.324,    0.4370093
            250,    FRAMES.315,    FRAMES.316,    0.500332
            251,    FRAMES.315,    FRAMES.325,    0.4370093
            252,    FRAMES.316,    FRAMES.317,    0.500332
            253,    FRAMES.316,    FRAMES.326,    0.4370093
            254,    FRAMES.317,    FRAMES.327,    0.4370093
            255,    FRAMES.318,    FRAMES.319,    0.500332
            256,    FRAMES.318,    FRAMES.328,    0.4370093
            257,    FRAMES.319,    FRAMES.320,    0.500332
            258,    FRAMES.319,    FRAMES.329,    0.4370093
            259,    FRAMES.320,    FRAMES.321,    0.500332
            260,    FRAMES.320,    FRAMES.330,    0.4370093
            261,    FRAMES.321,    FRAMES.322,    0.500332
            262,    FRAMES.321,    FRAMES.331,    0.4370093
            263,    FRAMES.322,    FRAMES.323,    0.500332
            264,    FRAMES.322,    FRAMES.332,    0.4370093
            265,    FRAMES.323,    FRAMES.324,    0.500332
            266,    FRAMES.323,    FRAMES.333,    0.4370093
            267,    FRAMES.324,    FRAMES.325,    0.500332
            268,    FRAMES.324,    FRAMES.334,    0.4370093
            269,    FRAMES.325,    FRAMES.326,    0.500332
            270,    FRAMES.325,    FRAMES.335,    0.4370093
            271,    FRAMES.326,    FRAMES.327,    0.500332
            272,    FRAMES.326,    FRAMES.336,    0.4370093
            273,    FRAMES.327,    FRAMES.337,    0.4370093
            274,    FRAMES.328,    FRAMES.329,    0.500332
            275,    FRAMES.328,    FRAMES.338,    0.4370093
            276,    FRAMES.329,    FRAMES.330,    0.500332
            277,    FRAMES.329,    FRAMES.339,    0.4370093
            278,    FRAMES.330,    FRAMES.331,    0.500332
            279,    FRAMES.330,    FRAMES.340,    0.4370093
            280,    FRAMES.331,    FRAMES.332,    0.500332
            281,    FRAMES.331,    FRAMES.341,    0.4370093
            282,    FRAMES.332,    FRAMES.333,    0.500332
            283,    FRAMES.332,    FRAMES.342,    0.4370093
            284,    FRAMES.333,    FRAMES.334,    0.500332
            285,    FRAMES.333,    FRAMES.343,    0.4370093
            286,    FRAMES.334,    FRAMES.335,    0.500332
            287,    FRAMES.334,    FRAMES.344,    0.4370093
            288,    FRAMES.335,    FRAMES.336,    0.500332
            289,    FRAMES.335,    FRAMES.345,    0.4370093
            290,    FRAMES.336,    FRAMES.337,    0.500332
            291,    FRAMES.336,    FRAMES.346,    0.4370093
            292,    FRAMES.337,    FRAMES.347,    0.4370093
            293,    FRAMES.338,    FRAMES.339,    0.500332
            294,    FRAMES.338,    FRAMES.348,    0.4370093
            295,    FRAMES.339,    FRAMES.340,    0.500332
            296,    FRAMES.339,    FRAMES.349,    0.4370093
            297,    FRAMES.340,    FRAMES.341,    0.500332
            298,    FRAMES.340,    FRAMES.350,    0.4370093
            299,    FRAMES.341,    FRAMES.342,    0.500332
            300,    FRAMES.341,    FRAMES.351,    0.4370093
            301,    FRAMES.342,    FRAMES.343,    0.500332
            302,    FRAMES.342,    FRAMES.352,    0.4370093
            303,    FRAMES.343,    FRAMES.344,    0.500332
            304,    FRAMES.343,    FRAMES.353,    0.4370093
            305,    FRAMES.344,    FRAMES.345,    0.500332
            306,    FRAMES.344,    FRAMES.354,    0.4370093
            307,    FRAMES.345,    FRAMES.346,    0.500332
            308,    FRAMES.345,    FRAMES.355,    0.4370093
            309,    FRAMES.346,    FRAMES.347,    0.500332
            310,    FRAMES.346,    FRAMES.356,    0.4370093
            311,    FRAMES.347,    FRAMES.357,    0.4370093
            312,    FRAMES.348,    FRAMES.349,    0.500332
            313,    FRAMES.348,    FRAMES.358,    0.4370093
            314,    FRAMES.349,    FRAMES.350,    0.500332
            315,    FRAMES.349,    FRAMES.359,    0.4370093
            316,    FRAMES.350,    FRAMES.351,    0.500332
            317,    FRAMES.350,    FRAMES.360,    0.4370093
            318,    FRAMES.351,    FRAMES.352,    0.500332
            319,    FRAMES.351,    FRAMES.361,    0.4370093
            320,    FRAMES.352,    FRAMES.353,    0.500332
            321,    FRAMES.352,    FRAMES.362,    0.4370093
            322,    FRAMES.353,    FRAMES.354,    0.500332
            323,    FRAMES.353,    FRAMES.363,    0.4370093
            324,    FRAMES.354,    FRAMES.355,    0.500332
            325,    FRAMES.354,    FRAMES.364,    0.4370093
            326,    FRAMES.355,    FRAMES.356,    0.500332
            327,    FRAMES.355,    FRAMES.365,    0.4370093
            328,    FRAMES.356,    FRAMES.357,    0.500332
            329,    FRAMES.356,    FRAMES.366,    0.4370093
            330,    FRAMES.357,    FRAMES.367,    0.4370093
            331,    FRAMES.358,    FRAMES.359,    0.500332
            332,    FRAMES.358,    FRAMES.368,    0.4370093
            333,    FRAMES.359,    FRAMES.360,    0.500332
            334,    FRAMES.359,    FRAMES.369,    0.4370093
            335,    FRAMES.360,    FRAMES.361,    0.500332
            336,    FRAMES.360,    FRAMES.370,    0.4370093
            337,    FRAMES.361,    FRAMES.362,    0.500332
            338,    FRAMES.361,    FRAMES.371,    0.4370093
            339,    FRAMES.362,    FRAMES.363,    0.500332
            340,    FRAMES.362,    FRAMES.372,    0.4370093
            341,    FRAMES.363,    FRAMES.364,    0.500332
            342,    FRAMES.363,    FRAMES.373,    0.4370093
            343,    FRAMES.364,    FRAMES.365,    0.500332
            344,    FRAMES.364,    FRAMES.374,    0.4370093
            345,    FRAMES.365,    FRAMES.366,    0.500332
            346,    FRAMES.365,    FRAMES.375,    0.4370093
            347,    FRAMES.366,    FRAMES.367,    0.500332
            348,    FRAMES.366,    FRAMES.376,    0.4370093
            349,    FRAMES.367,    FRAMES.377,    0.4370093
            350,    FRAMES.368,    FRAMES.369,    0.500332
            351,    FRAMES.368,    FRAMES.378,    0.4370093
            352,    FRAMES.369,    FRAMES.370,    0.500332
            353,    FRAMES.369,    FRAMES.379,    0.4370093
            354,    FRAMES.370,    FRAMES.371,    0.500332
            355,    FRAMES.370,    FRAMES.380,    0.4370093
            356,    FRAMES.371,    FRAMES.372,    0.500332
            357,    FRAMES.371,    FRAMES.381,    0.4370093
            358,    FRAMES.372,    FRAMES.373,    0.500332
            359,    FRAMES.372,    FRAMES.382,    0.4370093
            360,    FRAMES.373,    FRAMES.374,    0.500332
            361,    FRAMES.373,    FRAMES.383,    0.4370093
            362,    FRAMES.374,    FRAMES.375,    0.500332
            363,    FRAMES.374,    FRAMES.384,    0.4370093
            364,    FRAMES.375,    FRAMES.376,    0.500332
            365,    FRAMES.375,    FRAMES.385,    0.4370093
            366,    FRAMES.376,    FRAMES.377,    0.500332
            367,    FRAMES.376,    FRAMES.386,    0.4370093
            368,    FRAMES.377,    FRAMES.387,    0.4370093
            369,    FRAMES.378,    FRAMES.379,    0.500332
            370,    FRAMES.378,    FRAMES.388,    0.4370093
            371,    FRAMES.379,    FRAMES.380,    0.500332
            372,    FRAMES.379,    FRAMES.389,    0.4370093
            373,    FRAMES.380,    FRAMES.381,    0.500332
            374,    FRAMES.380,    FRAMES.390,    0.4370093
            375,    FRAMES.381,    FRAMES.382,    0.500332
            376,    FRAMES.381,    FRAMES.391,    0.4370093
            377,    FRAMES.382,    FRAMES.383,    0.500332
            378,    FRAMES.382,    FRAMES.392,    0.4370093
            379,    FRAMES.383,    FRAMES.384,    0.500332
            380,    FRAMES.383,    FRAMES.393,    0.4370093
            381,    FRAMES.384,    FRAMES.385,    0.500332
            382,    FRAMES.384,    FRAMES.394,    0.4370093
            383,    FRAMES.385,    FRAMES.386,    0.500332
            384,    FRAMES.385,    FRAMES.395,    0.4370093
            385,    FRAMES.386,    FRAMES.387,    0.500332
            386,    FRAMES.386,    FRAMES.396,    0.4370093
            387,    FRAMES.387,    FRAMES.397,    0.4370093
            388,    FRAMES.388,    FRAMES.389,    0.500332
            389,    FRAMES.388,    FRAMES.398,    0.4370093
            390,    FRAMES.389,    FRAMES.390,    0.500332
            391,    FRAMES.389,    FRAMES.399,    0.4370093
            392,    FRAMES.390,    FRAMES.391,    0.500332
            393,    FRAMES.390,    FRAMES.400,    0.4370093
            394,    FRAMES.391,    FRAMES.392,    0.500332
            395,    FRAMES.391,    FRAMES.401,    0.4370093
            396,    FRAMES.392,    FRAMES.393,    0.500332
            397,    FRAMES.392,    FRAMES.402,    0.4370093
            398,    FRAMES.393,    FRAMES.394,    0.500332
            399,    FRAMES.393,    FRAMES.403,    0.4370093
            400,    FRAMES.394,    FRAMES.395,    0.500332
            401,    FRAMES.394,    FRAMES.404,    0.4370093
            402,    FRAMES.395,    FRAMES.396,    0.500332
            403,    FRAMES.395,    FRAMES.405,    0.4370093
            404,    FRAMES.396,    FRAMES.397,    0.500332
            405,    FRAMES.396,    FRAMES.406,    0.4370093
            406,    FRAMES.397,    FRAMES.407,    0.4370093
            407,    FRAMES.398,    FRAMES.399,    0.500332
            408,    FRAMES.398,    FRAMES.408,    0.4370093
            409,    FRAMES.399,    FRAMES.400,    0.500332
            410,    FRAMES.399,    FRAMES.409,    0.4370093
            411,    FRAMES.400,    FRAMES.401,    0.500332
            412,    FRAMES.400,    FRAMES.410,    0.4370093
            413,    FRAMES.401,    FRAMES.402,    0.500332
            414,    FRAMES.401,    FRAMES.411,    0.4370093
            415,    FRAMES.402,    FRAMES.403,    0.500332
            416,    FRAMES.402,    FRAMES.412,    0.4370093
            417,    FRAMES.403,    FRAMES.404,    0.500332
            418,    FRAMES.403,    FRAMES.413,    0.4370093
            419,    FRAMES.404,    FRAMES.405,    0.500332
            420,    FRAMES.404,    FRAMES.414,    0.4370093
            421,    FRAMES.405,    FRAMES.406,    0.500332
            422,    FRAMES.405,    FRAMES.415,    0.4370093
            423,    FRAMES.406,    FRAMES.407,    0.500332
            424,    FRAMES.406,    FRAMES.416,    0.4370093
            425,    FRAMES.407,    FRAMES.417,    0.4370093
            426,    FRAMES.408,    FRAMES.409,    0.500332
            427,    FRAMES.409,    FRAMES.410,    0.500332
            428,    FRAMES.410,    FRAMES.411,    0.500332
            429,    FRAMES.411,    FRAMES.412,    0.500332
            430,    FRAMES.412,    FRAMES.413,    0.500332
            431,    FRAMES.413,    FRAMES.414,    0.500332
            432,    FRAMES.414,    FRAMES.415,    0.500332
            433,    FRAMES.415,    FRAMES.416,    0.500332
            434,    FRAMES.416,    FRAMES.417,    0.500332
            435,    FRAMES.418,    FRAMES.428,    0.4370093
            436,    FRAMES.418,    FRAMES.979,    0.4370093
            437,    FRAMES.418,    FRAMES.988,    0.500332
            438,    FRAMES.419,    FRAMES.420,    0.500332
            439,    FRAMES.419,    FRAMES.429,    0.4370093
            440,    FRAMES.419,    FRAMES.980,    0.4370093
            441,    FRAMES.420,    FRAMES.421,    0.500332
            442,    FRAMES.420,    FRAMES.430,    0.4370093
            443,    FRAMES.420,    FRAMES.981,    0.4370093
            444,    FRAMES.421,    FRAMES.422,    0.500332
            445,    FRAMES.421,    FRAMES.431,    0.4370093
            446,    FRAMES.421,    FRAMES.982,    0.4370093
            447,    FRAMES.422,    FRAMES.423,    0.500332
            448,    FRAMES.422,    FRAMES.432,    0.4370093
            449,    FRAMES.422,    FRAMES.983,    0.4370093
            450,    FRAMES.423,    FRAMES.424,    0.500332
            451,    FRAMES.423,    FRAMES.433,    0.4370093
            452,    FRAMES.423,    FRAMES.984,    0.4370093
            453,    FRAMES.424,    FRAMES.425,    0.500332
            454,    FRAMES.424,    FRAMES.434,    0.4370093
            455,    FRAMES.424,    FRAMES.985,    0.4370093
            456,    FRAMES.425,    FRAMES.426,    0.500332
            457,    FRAMES.425,    FRAMES.435,    0.4370093
            458,    FRAMES.425,    FRAMES.986,    0.4370093
            459,    FRAMES.426,    FRAMES.427,    0.500332
            460,    FRAMES.426,    FRAMES.436,    0.4370093
            461,    FRAMES.426,    FRAMES.987,    0.4370093
            462,    FRAMES.427,    FRAMES.428,    0.500332
            463,    FRAMES.427,    FRAMES.437,    0.4370093
            464,    FRAMES.427,    FRAMES.988,    0.4370093
            465,    FRAMES.428,    FRAMES.438,    0.4370093
            466,    FRAMES.429,    FRAMES.430,    0.500332
            467,    FRAMES.429,    FRAMES.439,    0.4370093
            468,    FRAMES.430,    FRAMES.431,    0.500332
            469,    FRAMES.430,    FRAMES.440,    0.4370093
            470,    FRAMES.431,    FRAMES.432,    0.500332
            471,    FRAMES.431,    FRAMES.441,    0.4370093
            472,    FRAMES.432,    FRAMES.433,    0.500332
            473,    FRAMES.432,    FRAMES.442,    0.4370093
            474,    FRAMES.433,    FRAMES.434,    0.500332
            475,    FRAMES.433,    FRAMES.443,    0.4370093
            476,    FRAMES.434,    FRAMES.435,    0.500332
            477,    FRAMES.434,    FRAMES.444,    0.4370093
            478,    FRAMES.435,    FRAMES.436,    0.500332
            479,    FRAMES.435,    FRAMES.445,    0.4370093
            480,    FRAMES.436,    FRAMES.437,    0.500332
            481,    FRAMES.436,    FRAMES.446,    0.4370093
            482,    FRAMES.437,    FRAMES.438,    0.500332
            483,    FRAMES.437,    FRAMES.447,    0.4370093
            484,    FRAMES.438,    FRAMES.448,    0.4370093
            485,    FRAMES.439,    FRAMES.440,    0.500332
            486,    FRAMES.439,    FRAMES.449,    0.4370093
            487,    FRAMES.440,    FRAMES.441,    0.500332
            488,    FRAMES.440,    FRAMES.450,    0.4370093
            489,    FRAMES.441,    FRAMES.442,    0.500332
            490,    FRAMES.441,    FRAMES.451,    0.4370093
            491,    FRAMES.442,    FRAMES.443,    0.500332
            492,    FRAMES.442,    FRAMES.452,    0.4370093
            493,    FRAMES.443,    FRAMES.444,    0.500332
            494,    FRAMES.443,    FRAMES.453,    0.4370093
            495,    FRAMES.444,    FRAMES.445,    0.500332
            496,    FRAMES.444,    FRAMES.454,    0.4370093
            497,    FRAMES.445,    FRAMES.446,    0.500332
            498,    FRAMES.445,    FRAMES.455,    0.4370093
            499,    FRAMES.446,    FRAMES.447,    0.500332
            500,    FRAMES.446,    FRAMES.456,    0.4370093
            501,    FRAMES.447,    FRAMES.448,    0.500332
            502,    FRAMES.447,    FRAMES.457,    0.4370093
            503,    FRAMES.448,    FRAMES.990,    0.4370093
            504,    FRAMES.449,    FRAMES.450,    0.500332
            505,    FRAMES.449,    FRAMES.459,    0.4370093
            506,    FRAMES.450,    FRAMES.451,    0.500332
            507,    FRAMES.450,    FRAMES.460,    0.4370093
            508,    FRAMES.451,    FRAMES.452,    0.500332
            509,    FRAMES.451,    FRAMES.992,    0.4370093
            510,    FRAMES.452,    FRAMES.453,    0.500332
            511,    FRAMES.452,    FRAMES.462,    0.4370093
            512,    FRAMES.453,    FRAMES.454,    0.500332
            513,    FRAMES.453,    FRAMES.463,    0.4370093
            514,    FRAMES.454,    FRAMES.455,    0.500332
            515,    FRAMES.454,    FRAMES.464,    0.4370093
            516,    FRAMES.455,    FRAMES.456,    0.500332
            517,    FRAMES.455,    FRAMES.465,    0.4370093
            518,    FRAMES.456,    FRAMES.457,    0.500332
            519,    FRAMES.456,    FRAMES.466,    0.4370093
            520,    FRAMES.457,    FRAMES.467,    0.4370093
            521,    FRAMES.457,    FRAMES.990,    0.500332
            522,    FRAMES.458,    FRAMES.461,    0.500332
            523,    FRAMES.458,    FRAMES.1095,    0.4370093
            524,    FRAMES.459,    FRAMES.460,    0.500332
            525,    FRAMES.459,    FRAMES.469,    0.4370093
            526,    FRAMES.460,    FRAMES.470,    0.4370093
            527,    FRAMES.460,    FRAMES.992,    0.500332
            528,    FRAMES.461,    FRAMES.468,    0.500332
            529,    FRAMES.461,    FRAMES.1115,    0.4370093
            530,    FRAMES.462,    FRAMES.463,    0.500332
            531,    FRAMES.462,    FRAMES.472,    0.4370093
            532,    FRAMES.462,    FRAMES.992,    0.500332
            533,    FRAMES.463,    FRAMES.464,    0.500332
            534,    FRAMES.463,    FRAMES.473,    0.4370093
            535,    FRAMES.464,    FRAMES.465,    0.500332
            536,    FRAMES.464,    FRAMES.1002,    0.4370093
            537,    FRAMES.465,    FRAMES.466,    0.500332
            538,    FRAMES.465,    FRAMES.475,    0.4370093
            539,    FRAMES.466,    FRAMES.467,    0.500332
            540,    FRAMES.466,    FRAMES.476,    0.4370093
            541,    FRAMES.467,    FRAMES.477,    0.4370093
            542,    FRAMES.467,    FRAMES.996,    0.500332
            543,    FRAMES.468,    FRAMES.474,    0.500332
            544,    FRAMES.468,    FRAMES.1122,    0.4370093
            545,    FRAMES.469,    FRAMES.470,    0.500332
            546,    FRAMES.469,    FRAMES.479,    0.4370093
            547,    FRAMES.470,    FRAMES.471,    0.500332
            548,    FRAMES.470,    FRAMES.1008,    0.4370093
            549,    FRAMES.471,    FRAMES.472,    0.500332
            550,    FRAMES.471,    FRAMES.481,    0.4370093
            551,    FRAMES.471,    FRAMES.992,    0.4370093
            552,    FRAMES.472,    FRAMES.473,    0.500332
            553,    FRAMES.472,    FRAMES.482,    0.4370093
            554,    FRAMES.473,    FRAMES.483,    0.4370093
            555,    FRAMES.473,    FRAMES.1002,    0.500332
            556,    FRAMES.474,    FRAMES.480,    0.500332
            557,    FRAMES.474,    FRAMES.1127,    0.4370093
            558,    FRAMES.475,    FRAMES.476,    0.500332
            559,    FRAMES.475,    FRAMES.485,    0.4370093
            560,    FRAMES.475,    FRAMES.1002,    0.500332
            561,    FRAMES.476,    FRAMES.477,    0.500332
            562,    FRAMES.476,    FRAMES.1015,    0.4370093
            563,    FRAMES.477,    FRAMES.478,    0.500332
            564,    FRAMES.477,    FRAMES.487,    0.4370093
            565,    FRAMES.478,    FRAMES.488,    0.4370093
            566,    FRAMES.478,    FRAMES.996,    0.4370093
            567,    FRAMES.479,    FRAMES.1008,    0.500332
            568,    FRAMES.480,    FRAMES.486,    0.500332
            569,    FRAMES.480,    FRAMES.1130,    0.4370093
            570,    FRAMES.481,    FRAMES.482,    0.500332
            571,    FRAMES.481,    FRAMES.1008,    0.500332
            572,    FRAMES.482,    FRAMES.483,    0.500332
            573,    FRAMES.483,    FRAMES.484,    0.500332
            574,    FRAMES.484,    FRAMES.485,    0.500332
            575,    FRAMES.484,    FRAMES.1002,    0.4370093
            576,    FRAMES.485,    FRAMES.1015,    0.500332
            577,    FRAMES.486,    FRAMES.643,    0.500332
            578,    FRAMES.486,    FRAMES.1133,    0.4370093
            579,    FRAMES.487,    FRAMES.488,    0.500332
            580,    FRAMES.487,    FRAMES.1015,    0.500332
            581,    FRAMES.489,    FRAMES.491,    0.500332
            582,    FRAMES.489,    FRAMES.514,    0.4370093
            583,    FRAMES.489,    FRAMES.997,    0.4370093
            584,    FRAMES.489,    FRAMES.1017,    0.500332
            585,    FRAMES.491,    FRAMES.493,    0.500332
            586,    FRAMES.491,    FRAMES.518,    0.4370093
            587,    FRAMES.491,    FRAMES.999,    0.4370093
            588,    FRAMES.493,    FRAMES.495,    0.500332
            589,    FRAMES.493,    FRAMES.522,    0.4370093
            590,    FRAMES.493,    FRAMES.1000,    0.4370093
            591,    FRAMES.495,    FRAMES.497,    0.500332
            592,    FRAMES.495,    FRAMES.526,    0.4370093
            593,    FRAMES.495,    FRAMES.1003,    0.4370093
            594,    FRAMES.497,    FRAMES.499,    0.500332
            595,    FRAMES.497,    FRAMES.530,    0.4370093
            596,    FRAMES.497,    FRAMES.1004,    0.4370093
            597,    FRAMES.499,    FRAMES.534,    0.4370093
            598,    FRAMES.499,    FRAMES.1006,    0.4370093
            599,    FRAMES.501,    FRAMES.503,    0.500332
            600,    FRAMES.501,    FRAMES.538,    0.4370093
            601,    FRAMES.501,    FRAMES.1010,    0.4370093
            602,    FRAMES.503,    FRAMES.506,    0.500332
            603,    FRAMES.503,    FRAMES.542,    0.4370093
            604,    FRAMES.503,    FRAMES.1012,    0.4370093
            605,    FRAMES.506,    FRAMES.510,    0.500332
            606,    FRAMES.506,    FRAMES.546,    0.4370093
            607,    FRAMES.506,    FRAMES.1013,    0.4370093
            608,    FRAMES.510,    FRAMES.514,    0.500332
            609,    FRAMES.510,    FRAMES.550,    0.4370093
            610,    FRAMES.510,    FRAMES.1017,    0.4370093
            611,    FRAMES.513,    FRAMES.994,    0.4370093
            612,    FRAMES.513,    FRAMES.1055,    0.500332
            613,    FRAMES.513,    FRAMES.1063,    0.500332
            614,    FRAMES.514,    FRAMES.518,    0.500332
            615,    FRAMES.514,    FRAMES.554,    0.4370093
            616,    FRAMES.517,    FRAMES.521,    0.500332
            617,    FRAMES.517,    FRAMES.1135,    0.500332
            618,    FRAMES.518,    FRAMES.522,    0.500332
            619,    FRAMES.518,    FRAMES.559,    0.4370093
            620,    FRAMES.521,    FRAMES.1138,    0.500332
            621,    FRAMES.522,    FRAMES.526,    0.500332
            622,    FRAMES.522,    FRAMES.564,    0.4370093
            623,    FRAMES.526,    FRAMES.530,    0.500332
            624,    FRAMES.526,    FRAMES.569,    0.4370093
            625,    FRAMES.529,    FRAMES.997,    0.4370093
            626,    FRAMES.529,    FRAMES.1063,    0.500332
            627,    FRAMES.529,    FRAMES.1162,    0.500332
            628,    FRAMES.530,    FRAMES.534,    0.500332
            629,    FRAMES.530,    FRAMES.574,    0.4370093
            630,    FRAMES.534,    FRAMES.579,    0.4370093
            631,    FRAMES.538,    FRAMES.542,    0.500332
            632,    FRAMES.538,    FRAMES.580,    0.4370093
            633,    FRAMES.542,    FRAMES.546,    0.500332
            634,    FRAMES.542,    FRAMES.581,    0.4370093
            635,    FRAMES.546,    FRAMES.550,    0.500332
            636,    FRAMES.546,    FRAMES.582,    0.4370093
            637,    FRAMES.550,    FRAMES.554,    0.500332
            638,    FRAMES.550,    FRAMES.583,    0.4370093
            639,    FRAMES.554,    FRAMES.559,    0.500332
            640,    FRAMES.554,    FRAMES.584,    0.4370093
            641,    FRAMES.559,    FRAMES.564,    0.500332
            642,    FRAMES.559,    FRAMES.585,    0.4370093
            643,    FRAMES.564,    FRAMES.569,    0.500332
            644,    FRAMES.564,    FRAMES.586,    0.4370093
            645,    FRAMES.569,    FRAMES.574,    0.500332
            646,    FRAMES.569,    FRAMES.587,    0.4370093
            647,    FRAMES.574,    FRAMES.579,    0.500332
            648,    FRAMES.574,    FRAMES.588,    0.4370093
            649,    FRAMES.579,    FRAMES.589,    0.4370093
            650,    FRAMES.580,    FRAMES.581,    0.500332
            651,    FRAMES.580,    FRAMES.590,    0.4370093
            652,    FRAMES.581,    FRAMES.582,    0.500332
            653,    FRAMES.581,    FRAMES.591,    0.4370093
            654,    FRAMES.582,    FRAMES.583,    0.500332
            655,    FRAMES.582,    FRAMES.592,    0.4370093
            656,    FRAMES.583,    FRAMES.584,    0.500332
            657,    FRAMES.583,    FRAMES.593,    0.4370093
            658,    FRAMES.584,    FRAMES.585,    0.500332
            659,    FRAMES.584,    FRAMES.594,    0.4370093
            660,    FRAMES.585,    FRAMES.586,    0.500332
            661,    FRAMES.585,    FRAMES.595,    0.4370093
            662,    FRAMES.586,    FRAMES.587,    0.500332
            663,    FRAMES.586,    FRAMES.596,    0.4370093
            664,    FRAMES.587,    FRAMES.588,    0.500332
            665,    FRAMES.587,    FRAMES.597,    0.4370093
            666,    FRAMES.588,    FRAMES.589,    0.500332
            667,    FRAMES.588,    FRAMES.598,    0.4370093
            668,    FRAMES.589,    FRAMES.599,    0.4370093
            669,    FRAMES.590,    FRAMES.591,    0.500332
            670,    FRAMES.590,    FRAMES.600,    0.4370093
            671,    FRAMES.591,    FRAMES.592,    0.500332
            672,    FRAMES.591,    FRAMES.601,    0.4370093
            673,    FRAMES.592,    FRAMES.593,    0.500332
            674,    FRAMES.592,    FRAMES.602,    0.4370093
            675,    FRAMES.593,    FRAMES.594,    0.500332
            676,    FRAMES.593,    FRAMES.603,    0.4370093
            677,    FRAMES.594,    FRAMES.595,    0.500332
            678,    FRAMES.594,    FRAMES.604,    0.4370093
            679,    FRAMES.595,    FRAMES.596,    0.500332
            680,    FRAMES.595,    FRAMES.605,    0.4370093
            681,    FRAMES.596,    FRAMES.597,    0.500332
            682,    FRAMES.596,    FRAMES.1043,    0.4370093
            683,    FRAMES.597,    FRAMES.598,    0.500332
            684,    FRAMES.597,    FRAMES.607,    0.4370093
            685,    FRAMES.598,    FRAMES.599,    0.500332
            686,    FRAMES.598,    FRAMES.608,    0.4370093
            687,    FRAMES.599,    FRAMES.609,    0.4370093
            688,    FRAMES.600,    FRAMES.601,    0.500332
            689,    FRAMES.600,    FRAMES.610,    0.4370093
            690,    FRAMES.601,    FRAMES.602,    0.500332
            691,    FRAMES.601,    FRAMES.611,    0.4370093
            692,    FRAMES.602,    FRAMES.603,    0.500332
            693,    FRAMES.602,    FRAMES.612,    0.4370093
            694,    FRAMES.603,    FRAMES.604,    0.500332
            695,    FRAMES.603,    FRAMES.613,    0.4370093
            696,    FRAMES.604,    FRAMES.605,    0.500332
            697,    FRAMES.604,    FRAMES.614,    0.4370093
            698,    FRAMES.605,    FRAMES.615,    0.4370093
            699,    FRAMES.605,    FRAMES.1043,    0.500332
            700,    FRAMES.607,    FRAMES.608,    0.500332
            701,    FRAMES.607,    FRAMES.617,    0.4370093
            702,    FRAMES.607,    FRAMES.1043,    0.500332
            703,    FRAMES.608,    FRAMES.609,    0.500332
            704,    FRAMES.608,    FRAMES.618,    0.4370093
            705,    FRAMES.609,    FRAMES.619,    0.4370093
            706,    FRAMES.610,    FRAMES.611,    0.500332
            707,    FRAMES.610,    FRAMES.620,    0.4370093
            708,    FRAMES.611,    FRAMES.612,    0.500332
            709,    FRAMES.611,    FRAMES.621,    0.4370093
            710,    FRAMES.612,    FRAMES.613,    0.500332
            711,    FRAMES.612,    FRAMES.622,    0.4370093
            712,    FRAMES.613,    FRAMES.614,    0.500332
            713,    FRAMES.613,    FRAMES.623,    0.4370093
            714,    FRAMES.614,    FRAMES.615,    0.500332
            715,    FRAMES.614,    FRAMES.624,    0.4370093
            716,    FRAMES.615,    FRAMES.625,    0.4370093
            717,    FRAMES.615,    FRAMES.1046,    0.500332
            718,    FRAMES.616,    FRAMES.672,    0.4370093
            719,    FRAMES.617,    FRAMES.618,    0.500332
            720,    FRAMES.617,    FRAMES.627,    0.4370093
            721,    FRAMES.617,    FRAMES.1046,    0.500332
            722,    FRAMES.618,    FRAMES.619,    0.500332
            723,    FRAMES.618,    FRAMES.628,    0.4370093
            724,    FRAMES.619,    FRAMES.629,    0.4370093
            725,    FRAMES.620,    FRAMES.621,    0.500332
            726,    FRAMES.620,    FRAMES.630,    0.4370093
            727,    FRAMES.621,    FRAMES.622,    0.500332
            728,    FRAMES.621,    FRAMES.631,    0.4370093
            729,    FRAMES.622,    FRAMES.623,    0.500332
            730,    FRAMES.622,    FRAMES.632,    0.4370093
            731,    FRAMES.623,    FRAMES.624,    0.500332
            732,    FRAMES.623,    FRAMES.633,    0.4370093
            733,    FRAMES.624,    FRAMES.625,    0.500332
            734,    FRAMES.624,    FRAMES.634,    0.4370093
            735,    FRAMES.625,    FRAMES.635,    0.4370093
            736,    FRAMES.625,    FRAMES.1049,    0.500332
            737,    FRAMES.626,    FRAMES.684,    0.4370093
            738,    FRAMES.627,    FRAMES.628,    0.500332
            739,    FRAMES.627,    FRAMES.637,    0.4370093
            740,    FRAMES.627,    FRAMES.1049,    0.500332
            741,    FRAMES.628,    FRAMES.629,    0.500332
            742,    FRAMES.628,    FRAMES.638,    0.4370093
            743,    FRAMES.629,    FRAMES.639,    0.4370093
            744,    FRAMES.630,    FRAMES.631,    0.500332
            745,    FRAMES.630,    FRAMES.640,    0.4370093
            746,    FRAMES.631,    FRAMES.632,    0.500332
            747,    FRAMES.631,    FRAMES.641,    0.4370093
            748,    FRAMES.632,    FRAMES.633,    0.500332
            749,    FRAMES.632,    FRAMES.1058,    0.4370093
            750,    FRAMES.633,    FRAMES.634,    0.500332
            751,    FRAMES.633,    FRAMES.1059,    0.4370093
            752,    FRAMES.634,    FRAMES.635,    0.500332
            753,    FRAMES.634,    FRAMES.644,    0.4370093
            754,    FRAMES.635,    FRAMES.645,    0.4370093
            755,    FRAMES.635,    FRAMES.1053,    0.500332
            756,    FRAMES.636,    FRAMES.696,    0.4370093
            757,    FRAMES.637,    FRAMES.638,    0.500332
            758,    FRAMES.637,    FRAMES.647,    0.4370093
            759,    FRAMES.637,    FRAMES.1053,    0.500332
            760,    FRAMES.638,    FRAMES.639,    0.500332
            761,    FRAMES.638,    FRAMES.1060,    0.4370093
            762,    FRAMES.639,    FRAMES.649,    0.4370093
            763,    FRAMES.640,    FRAMES.641,    0.500332
            764,    FRAMES.640,    FRAMES.650,    0.4370093
            765,    FRAMES.641,    FRAMES.651,    0.4370093
            766,    FRAMES.641,    FRAMES.1058,    0.500332
            767,    FRAMES.642,    FRAMES.648,    0.500332
            768,    FRAMES.642,    FRAMES.697,    0.4370093
            769,    FRAMES.643,    FRAMES.1137,    0.4370093
            770,    FRAMES.643,    FRAMES.1154,    0.500332
            771,    FRAMES.644,    FRAMES.645,    0.500332
            772,    FRAMES.644,    FRAMES.1059,    0.500332
            773,    FRAMES.644,    FRAMES.1064,    0.4370093
            774,    FRAMES.645,    FRAMES.646,    0.500332
            775,    FRAMES.645,    FRAMES.655,    0.4370093
            776,    FRAMES.646,    FRAMES.647,    0.500332
            777,    FRAMES.646,    FRAMES.656,    0.4370093
            778,    FRAMES.646,    FRAMES.1053,    0.4370093
            779,    FRAMES.647,    FRAMES.657,    0.4370093
            780,    FRAMES.647,    FRAMES.1060,    0.500332
            781,    FRAMES.648,    FRAMES.654,    0.500332
            782,    FRAMES.648,    FRAMES.698,    0.4370093
            783,    FRAMES.648,    FRAMES.1164,    0.4370093
            784,    FRAMES.649,    FRAMES.659,    0.4370093
            785,    FRAMES.649,    FRAMES.1060,    0.500332
            786,    FRAMES.650,    FRAMES.651,    0.500332
            787,    FRAMES.650,    FRAMES.1065,    0.4370093
            788,    FRAMES.651,    FRAMES.652,    0.500332
            789,    FRAMES.651,    FRAMES.661,    0.4370093
            790,    FRAMES.652,    FRAMES.653,    0.500332
            791,    FRAMES.652,    FRAMES.662,    0.4370093
            792,    FRAMES.652,    FRAMES.1058,    0.4370093
            793,    FRAMES.653,    FRAMES.663,    0.4370093
            794,    FRAMES.653,    FRAMES.1059,    0.4370093
            795,    FRAMES.653,    FRAMES.1064,    0.500332
            796,    FRAMES.654,    FRAMES.660,    0.500332
            797,    FRAMES.654,    FRAMES.699,    0.4370093
            798,    FRAMES.655,    FRAMES.656,    0.500332
            799,    FRAMES.655,    FRAMES.1064,    0.500332
            800,    FRAMES.655,    FRAMES.1067,    0.4370093
            801,    FRAMES.656,    FRAMES.657,    0.500332
            802,    FRAMES.656,    FRAMES.1069,    0.4370093
            803,    FRAMES.657,    FRAMES.658,    0.500332
            804,    FRAMES.657,    FRAMES.667,    0.4370093
            805,    FRAMES.658,    FRAMES.659,    0.500332
            806,    FRAMES.658,    FRAMES.668,    0.4370093
            807,    FRAMES.658,    FRAMES.1060,    0.4370093
            808,    FRAMES.659,    FRAMES.669,    0.4370093
            809,    FRAMES.660,    FRAMES.666,    0.500332
            810,    FRAMES.660,    FRAMES.700,    0.4370093
            811,    FRAMES.661,    FRAMES.662,    0.500332
            812,    FRAMES.661,    FRAMES.671,    0.4370093
            813,    FRAMES.661,    FRAMES.1065,    0.500332
            814,    FRAMES.662,    FRAMES.663,    0.500332
            815,    FRAMES.662,    FRAMES.1071,    0.4370093
            816,    FRAMES.663,    FRAMES.664,    0.500332
            817,    FRAMES.663,    FRAMES.673,    0.4370093
            818,    FRAMES.664,    FRAMES.1064,    0.4370093
            819,    FRAMES.664,    FRAMES.1067,    0.500332
            820,    FRAMES.664,    FRAMES.1073,    0.4370093
            821,    FRAMES.665,    FRAMES.683,    0.500332
            822,    FRAMES.666,    FRAMES.672,    0.500332
            823,    FRAMES.666,    FRAMES.701,    0.4370093
            824,    FRAMES.667,    FRAMES.668,    0.500332
            825,    FRAMES.667,    FRAMES.677,    0.4370093
            826,    FRAMES.667,    FRAMES.1069,    0.500332
            827,    FRAMES.668,    FRAMES.669,    0.500332
            828,    FRAMES.668,    FRAMES.1075,    0.4370093
            829,    FRAMES.669,    FRAMES.679,    0.4370093
            830,    FRAMES.670,    FRAMES.671,    0.500332
            831,    FRAMES.670,    FRAMES.680,    0.4370093
            832,    FRAMES.670,    FRAMES.1065,    0.4370093
            833,    FRAMES.671,    FRAMES.681,    0.4370093
            834,    FRAMES.671,    FRAMES.1071,    0.500332
            835,    FRAMES.672,    FRAMES.678,    0.500332
            836,    FRAMES.672,    FRAMES.702,    0.4370093
            837,    FRAMES.673,    FRAMES.1071,    0.500332
            838,    FRAMES.673,    FRAMES.1073,    0.500332
            839,    FRAMES.673,    FRAMES.1076,    0.4370093
            840,    FRAMES.674,    FRAMES.692,    0.500332
            841,    FRAMES.674,    FRAMES.1153,    0.4370093
            842,    FRAMES.675,    FRAMES.676,    0.500332
            843,    FRAMES.675,    FRAMES.1067,    0.4370093
            844,    FRAMES.675,    FRAMES.1073,    0.500332
            845,    FRAMES.675,    FRAMES.1079,    0.4370093
            846,    FRAMES.676,    FRAMES.677,    0.500332
            847,    FRAMES.676,    FRAMES.686,    0.4370093
            848,    FRAMES.676,    FRAMES.1069,    0.4370093
            849,    FRAMES.677,    FRAMES.687,    0.4370093
            850,    FRAMES.677,    FRAMES.1075,    0.500332
            851,    FRAMES.678,    FRAMES.684,    0.500332
            852,    FRAMES.678,    FRAMES.703,    0.4370093
            853,    FRAMES.679,    FRAMES.689,    0.4370093
            854,    FRAMES.679,    FRAMES.1075,    0.500332
            855,    FRAMES.680,    FRAMES.681,    0.500332
            856,    FRAMES.680,    FRAMES.1082,    0.4370093
            857,    FRAMES.681,    FRAMES.682,    0.500332
            858,    FRAMES.681,    FRAMES.691,    0.4370093
            859,    FRAMES.682,    FRAMES.1071,    0.4370093
            860,    FRAMES.682,    FRAMES.1076,    0.500332
            861,    FRAMES.682,    FRAMES.1084,    0.4370093
            862,    FRAMES.683,    FRAMES.1092,    0.500332
            863,    FRAMES.684,    FRAMES.690,    0.500332
            864,    FRAMES.684,    FRAMES.704,    0.4370093
            865,    FRAMES.685,    FRAMES.1144,    0.4370093
            866,    FRAMES.685,    FRAMES.1155,    0.500332
            867,    FRAMES.686,    FRAMES.687,    0.500332
            868,    FRAMES.686,    FRAMES.1079,    0.500332
            869,    FRAMES.686,    FRAMES.1086,    0.4370093
            870,    FRAMES.687,    FRAMES.688,    0.500332
            871,    FRAMES.687,    FRAMES.1087,    0.4370093
            872,    FRAMES.688,    FRAMES.689,    0.500332
            873,    FRAMES.688,    FRAMES.1075,    0.4370093
            874,    FRAMES.688,    FRAMES.1088,    0.4370093
            875,    FRAMES.689,    FRAMES.1089,    0.4370093
            876,    FRAMES.690,    FRAMES.696,    0.500332
            877,    FRAMES.690,    FRAMES.705,    0.4370093
            878,    FRAMES.691,    FRAMES.1082,    0.500332
            879,    FRAMES.691,    FRAMES.1084,    0.500332
            880,    FRAMES.691,    FRAMES.1091,    0.4370093
            881,    FRAMES.692,    FRAMES.1131,    0.500332
            882,    FRAMES.693,    FRAMES.694,    0.500332
            883,    FRAMES.693,    FRAMES.1076,    0.4370093
            884,    FRAMES.693,    FRAMES.1084,    0.500332
            885,    FRAMES.693,    FRAMES.1094,    0.4370093
            886,    FRAMES.694,    FRAMES.695,    0.500332
            887,    FRAMES.694,    FRAMES.1077,    0.4370093
            888,    FRAMES.694,    FRAMES.1096,    0.4370093
            889,    FRAMES.695,    FRAMES.1079,    0.4370093
            890,    FRAMES.695,    FRAMES.1086,    0.500332
            891,    FRAMES.695,    FRAMES.1097,    0.4370093
            892,    FRAMES.696,    FRAMES.706,    0.4370093
            893,    FRAMES.697,    FRAMES.698,    0.500332
            894,    FRAMES.697,    FRAMES.707,    0.4370093
            895,    FRAMES.698,    FRAMES.699,    0.500332
            896,    FRAMES.698,    FRAMES.708,    0.4370093
            897,    FRAMES.699,    FRAMES.700,    0.500332
            898,    FRAMES.699,    FRAMES.709,    0.4370093
            899,    FRAMES.700,    FRAMES.701,    0.500332
            900,    FRAMES.700,    FRAMES.710,    0.4370093
            901,    FRAMES.701,    FRAMES.702,    0.500332
            902,    FRAMES.701,    FRAMES.711,    0.4370093
            903,    FRAMES.702,    FRAMES.703,    0.500332
            904,    FRAMES.702,    FRAMES.712,    0.4370093
            905,    FRAMES.703,    FRAMES.704,    0.500332
            906,    FRAMES.703,    FRAMES.713,    0.4370093
            907,    FRAMES.704,    FRAMES.705,    0.500332
            908,    FRAMES.704,    FRAMES.714,    0.4370093
            909,    FRAMES.705,    FRAMES.706,    0.500332
            910,    FRAMES.705,    FRAMES.715,    0.4370093
            911,    FRAMES.706,    FRAMES.716,    0.4370093
            912,    FRAMES.707,    FRAMES.708,    0.500332
            913,    FRAMES.707,    FRAMES.717,    0.4370093
            914,    FRAMES.708,    FRAMES.709,    0.500332
            915,    FRAMES.708,    FRAMES.718,    0.4370093
            916,    FRAMES.709,    FRAMES.710,    0.500332
            917,    FRAMES.709,    FRAMES.719,    0.4370093
            918,    FRAMES.710,    FRAMES.711,    0.500332
            919,    FRAMES.710,    FRAMES.720,    0.4370093
            920,    FRAMES.711,    FRAMES.712,    0.500332
            921,    FRAMES.711,    FRAMES.721,    0.4370093
            922,    FRAMES.712,    FRAMES.713,    0.500332
            923,    FRAMES.712,    FRAMES.722,    0.4370093
            924,    FRAMES.713,    FRAMES.714,    0.500332
            925,    FRAMES.713,    FRAMES.723,    0.4370093
            926,    FRAMES.714,    FRAMES.715,    0.500332
            927,    FRAMES.714,    FRAMES.724,    0.4370093
            928,    FRAMES.715,    FRAMES.716,    0.500332
            929,    FRAMES.715,    FRAMES.725,    0.4370093
            930,    FRAMES.716,    FRAMES.726,    0.4370093
            931,    FRAMES.717,    FRAMES.718,    0.500332
            932,    FRAMES.717,    FRAMES.727,    0.4370093
            933,    FRAMES.718,    FRAMES.719,    0.500332
            934,    FRAMES.718,    FRAMES.728,    0.4370093
            935,    FRAMES.719,    FRAMES.720,    0.500332
            936,    FRAMES.719,    FRAMES.729,    0.4370093
            937,    FRAMES.720,    FRAMES.721,    0.500332
            938,    FRAMES.720,    FRAMES.730,    0.4370093
            939,    FRAMES.721,    FRAMES.722,    0.500332
            940,    FRAMES.721,    FRAMES.731,    0.4370093
            941,    FRAMES.722,    FRAMES.723,    0.500332
            942,    FRAMES.722,    FRAMES.732,    0.4370093
            943,    FRAMES.723,    FRAMES.724,    0.500332
            944,    FRAMES.723,    FRAMES.733,    0.4370093
            945,    FRAMES.724,    FRAMES.725,    0.500332
            946,    FRAMES.724,    FRAMES.734,    0.4370093
            947,    FRAMES.725,    FRAMES.726,    0.500332
            948,    FRAMES.725,    FRAMES.735,    0.4370093
            949,    FRAMES.726,    FRAMES.736,    0.4370093
            950,    FRAMES.727,    FRAMES.728,    0.500332
            951,    FRAMES.727,    FRAMES.737,    0.4370093
            952,    FRAMES.728,    FRAMES.729,    0.500332
            953,    FRAMES.728,    FRAMES.738,    0.4370093
            954,    FRAMES.729,    FRAMES.730,    0.500332
            955,    FRAMES.729,    FRAMES.739,    0.4370093
            956,    FRAMES.730,    FRAMES.731,    0.500332
            957,    FRAMES.730,    FRAMES.740,    0.4370093
            958,    FRAMES.731,    FRAMES.732,    0.500332
            959,    FRAMES.731,    FRAMES.741,    0.4370093
            960,    FRAMES.732,    FRAMES.733,    0.500332
            961,    FRAMES.732,    FRAMES.742,    0.4370093
            962,    FRAMES.733,    FRAMES.734,    0.500332
            963,    FRAMES.733,    FRAMES.743,    0.4370093
            964,    FRAMES.734,    FRAMES.735,    0.500332
            965,    FRAMES.734,    FRAMES.744,    0.4370093
            966,    FRAMES.735,    FRAMES.736,    0.500332
            967,    FRAMES.735,    FRAMES.745,    0.4370093
            968,    FRAMES.736,    FRAMES.746,    0.4370093
            969,    FRAMES.737,    FRAMES.738,    0.500332
            970,    FRAMES.737,    FRAMES.747,    0.4370093
            971,    FRAMES.738,    FRAMES.739,    0.500332
            972,    FRAMES.738,    FRAMES.748,    0.4370093
            973,    FRAMES.739,    FRAMES.740,    0.500332
            974,    FRAMES.739,    FRAMES.749,    0.4370093
            975,    FRAMES.740,    FRAMES.741,    0.500332
            976,    FRAMES.740,    FRAMES.750,    0.4370093
            977,    FRAMES.741,    FRAMES.742,    0.500332
            978,    FRAMES.741,    FRAMES.751,    0.4370093
            979,    FRAMES.742,    FRAMES.743,    0.500332
            980,    FRAMES.742,    FRAMES.752,    0.4370093
            981,    FRAMES.743,    FRAMES.744,    0.500332
            982,    FRAMES.743,    FRAMES.753,    0.4370093
            983,    FRAMES.744,    FRAMES.745,    0.500332
            984,    FRAMES.744,    FRAMES.754,    0.4370093
            985,    FRAMES.745,    FRAMES.746,    0.500332
            986,    FRAMES.745,    FRAMES.755,    0.4370093
            987,    FRAMES.746,    FRAMES.756,    0.4370093
            988,    FRAMES.747,    FRAMES.748,    0.500332
            989,    FRAMES.747,    FRAMES.757,    0.4370093
            990,    FRAMES.748,    FRAMES.749,    0.500332
            991,    FRAMES.748,    FRAMES.758,    0.4370093
            992,    FRAMES.749,    FRAMES.750,    0.500332
            993,    FRAMES.749,    FRAMES.759,    0.4370093
            994,    FRAMES.750,    FRAMES.751,    0.500332
            995,    FRAMES.750,    FRAMES.760,    0.4370093
            996,    FRAMES.751,    FRAMES.752,    0.500332
            997,    FRAMES.751,    FRAMES.761,    0.4370093
            998,    FRAMES.752,    FRAMES.753,    0.500332
            999,    FRAMES.752,    FRAMES.762,    0.4370093
            1000,    FRAMES.753,    FRAMES.754,    0.500332
            1001,    FRAMES.753,    FRAMES.763,    0.4370093
            1002,    FRAMES.754,    FRAMES.755,    0.500332
            1003,    FRAMES.754,    FRAMES.764,    0.4370093
            1004,    FRAMES.755,    FRAMES.756,    0.500332
            1005,    FRAMES.755,    FRAMES.765,    0.4370093
            1006,    FRAMES.756,    FRAMES.766,    0.4370093
            1007,    FRAMES.757,    FRAMES.758,    0.500332
            1008,    FRAMES.757,    FRAMES.767,    0.4370093
            1009,    FRAMES.758,    FRAMES.759,    0.500332
            1010,    FRAMES.758,    FRAMES.768,    0.4370093
            1011,    FRAMES.759,    FRAMES.760,    0.500332
            1012,    FRAMES.759,    FRAMES.769,    0.4370093
            1013,    FRAMES.760,    FRAMES.761,    0.500332
            1014,    FRAMES.760,    FRAMES.770,    0.4370093
            1015,    FRAMES.761,    FRAMES.762,    0.500332
            1016,    FRAMES.761,    FRAMES.771,    0.4370093
            1017,    FRAMES.762,    FRAMES.763,    0.500332
            1018,    FRAMES.762,    FRAMES.772,    0.4370093
            1019,    FRAMES.763,    FRAMES.764,    0.500332
            1020,    FRAMES.763,    FRAMES.773,    0.4370093
            1021,    FRAMES.764,    FRAMES.765,    0.500332
            1022,    FRAMES.764,    FRAMES.774,    0.4370093
            1023,    FRAMES.765,    FRAMES.766,    0.500332
            1024,    FRAMES.765,    FRAMES.775,    0.4370093
            1025,    FRAMES.766,    FRAMES.776,    0.4370093
            1026,    FRAMES.767,    FRAMES.768,    0.500332
            1027,    FRAMES.767,    FRAMES.777,    0.4370093
            1028,    FRAMES.768,    FRAMES.769,    0.500332
            1029,    FRAMES.768,    FRAMES.778,    0.4370093
            1030,    FRAMES.769,    FRAMES.770,    0.500332
            1031,    FRAMES.769,    FRAMES.779,    0.4370093
            1032,    FRAMES.770,    FRAMES.771,    0.500332
            1033,    FRAMES.770,    FRAMES.780,    0.4370093
            1034,    FRAMES.771,    FRAMES.772,    0.500332
            1035,    FRAMES.771,    FRAMES.781,    0.4370093
            1036,    FRAMES.772,    FRAMES.773,    0.500332
            1037,    FRAMES.772,    FRAMES.782,    0.4370093
            1038,    FRAMES.773,    FRAMES.774,    0.500332
            1039,    FRAMES.773,    FRAMES.783,    0.4370093
            1040,    FRAMES.774,    FRAMES.775,    0.500332
            1041,    FRAMES.774,    FRAMES.784,    0.4370093
            1042,    FRAMES.775,    FRAMES.776,    0.500332
            1043,    FRAMES.775,    FRAMES.785,    0.4370093
            1044,    FRAMES.776,    FRAMES.786,    0.4370093
            1045,    FRAMES.777,    FRAMES.778,    0.500332
            1046,    FRAMES.777,    FRAMES.787,    0.4370093
            1047,    FRAMES.778,    FRAMES.779,    0.500332
            1048,    FRAMES.778,    FRAMES.788,    0.4370093
            1049,    FRAMES.779,    FRAMES.780,    0.500332
            1050,    FRAMES.779,    FRAMES.789,    0.4370093
            1051,    FRAMES.780,    FRAMES.781,    0.500332
            1052,    FRAMES.780,    FRAMES.790,    0.4370093
            1053,    FRAMES.781,    FRAMES.782,    0.500332
            1054,    FRAMES.781,    FRAMES.791,    0.4370093
            1055,    FRAMES.782,    FRAMES.783,    0.500332
            1056,    FRAMES.782,    FRAMES.792,    0.4370093
            1057,    FRAMES.783,    FRAMES.784,    0.500332
            1058,    FRAMES.783,    FRAMES.793,    0.4370093
            1059,    FRAMES.784,    FRAMES.785,    0.500332
            1060,    FRAMES.784,    FRAMES.794,    0.4370093
            1061,    FRAMES.785,    FRAMES.786,    0.500332
            1062,    FRAMES.785,    FRAMES.795,    0.4370093
            1063,    FRAMES.786,    FRAMES.796,    0.4370093
            1064,    FRAMES.787,    FRAMES.788,    0.500332
            1065,    FRAMES.787,    FRAMES.797,    0.4370093
            1066,    FRAMES.788,    FRAMES.789,    0.500332
            1067,    FRAMES.788,    FRAMES.798,    0.4370093
            1068,    FRAMES.789,    FRAMES.790,    0.500332
            1069,    FRAMES.789,    FRAMES.799,    0.4370093
            1070,    FRAMES.790,    FRAMES.791,    0.500332
            1071,    FRAMES.790,    FRAMES.800,    0.4370093
            1072,    FRAMES.791,    FRAMES.792,    0.500332
            1073,    FRAMES.791,    FRAMES.801,    0.4370093
            1074,    FRAMES.792,    FRAMES.793,    0.500332
            1075,    FRAMES.792,    FRAMES.802,    0.4370093
            1076,    FRAMES.793,    FRAMES.794,    0.500332
            1077,    FRAMES.793,    FRAMES.803,    0.4370093
            1078,    FRAMES.794,    FRAMES.795,    0.500332
            1079,    FRAMES.794,    FRAMES.804,    0.4370093
            1080,    FRAMES.795,    FRAMES.796,    0.500332
            1081,    FRAMES.795,    FRAMES.805,    0.4370093
            1082,    FRAMES.796,    FRAMES.806,    0.4370093
            1083,    FRAMES.797,    FRAMES.798,    0.500332
            1084,    FRAMES.797,    FRAMES.807,    0.4370093
            1085,    FRAMES.798,    FRAMES.799,    0.500332
            1086,    FRAMES.798,    FRAMES.808,    0.4370093
            1087,    FRAMES.799,    FRAMES.800,    0.500332
            1088,    FRAMES.799,    FRAMES.809,    0.4370093
            1089,    FRAMES.800,    FRAMES.801,    0.500332
            1090,    FRAMES.800,    FRAMES.810,    0.4370093
            1091,    FRAMES.801,    FRAMES.802,    0.500332
            1092,    FRAMES.801,    FRAMES.811,    0.4370093
            1093,    FRAMES.802,    FRAMES.803,    0.500332
            1094,    FRAMES.802,    FRAMES.812,    0.4370093
            1095,    FRAMES.803,    FRAMES.804,    0.500332
            1096,    FRAMES.803,    FRAMES.813,    0.4370093
            1097,    FRAMES.804,    FRAMES.805,    0.500332
            1098,    FRAMES.804,    FRAMES.814,    0.4370093
            1099,    FRAMES.805,    FRAMES.806,    0.500332
            1100,    FRAMES.805,    FRAMES.815,    0.4370093
            1101,    FRAMES.806,    FRAMES.816,    0.4370093
            1102,    FRAMES.807,    FRAMES.808,    0.500332
            1103,    FRAMES.807,    FRAMES.817,    0.4370093
            1104,    FRAMES.808,    FRAMES.809,    0.500332
            1105,    FRAMES.808,    FRAMES.818,    0.4370093
            1106,    FRAMES.809,    FRAMES.810,    0.500332
            1107,    FRAMES.809,    FRAMES.819,    0.4370093
            1108,    FRAMES.810,    FRAMES.811,    0.500332
            1109,    FRAMES.810,    FRAMES.820,    0.4370093
            1110,    FRAMES.811,    FRAMES.812,    0.500332
            1111,    FRAMES.811,    FRAMES.821,    0.4370093
            1112,    FRAMES.812,    FRAMES.813,    0.500332
            1113,    FRAMES.812,    FRAMES.822,    0.4370093
            1114,    FRAMES.813,    FRAMES.814,    0.500332
            1115,    FRAMES.813,    FRAMES.823,    0.4370093
            1116,    FRAMES.814,    FRAMES.815,    0.500332
            1117,    FRAMES.814,    FRAMES.824,    0.4370093
            1118,    FRAMES.815,    FRAMES.816,    0.500332
            1119,    FRAMES.815,    FRAMES.825,    0.4370093
            1120,    FRAMES.816,    FRAMES.826,    0.4370093
            1121,    FRAMES.817,    FRAMES.818,    0.500332
            1122,    FRAMES.817,    FRAMES.827,    0.4370093
            1123,    FRAMES.818,    FRAMES.819,    0.500332
            1124,    FRAMES.818,    FRAMES.828,    0.4370093
            1125,    FRAMES.819,    FRAMES.820,    0.500332
            1126,    FRAMES.819,    FRAMES.829,    0.4370093
            1127,    FRAMES.820,    FRAMES.821,    0.500332
            1128,    FRAMES.820,    FRAMES.830,    0.4370093
            1129,    FRAMES.821,    FRAMES.822,    0.500332
            1130,    FRAMES.821,    FRAMES.831,    0.4370093
            1131,    FRAMES.822,    FRAMES.823,    0.500332
            1132,    FRAMES.822,    FRAMES.832,    0.4370093
            1133,    FRAMES.823,    FRAMES.824,    0.500332
            1134,    FRAMES.823,    FRAMES.833,    0.4370093
            1135,    FRAMES.824,    FRAMES.825,    0.500332
            1136,    FRAMES.824,    FRAMES.834,    0.4370093
            1137,    FRAMES.825,    FRAMES.826,    0.500332
            1138,    FRAMES.825,    FRAMES.835,    0.4370093
            1139,    FRAMES.826,    FRAMES.836,    0.4370093
            1140,    FRAMES.827,    FRAMES.828,    0.500332
            1141,    FRAMES.827,    FRAMES.837,    0.4370093
            1142,    FRAMES.828,    FRAMES.829,    0.500332
            1143,    FRAMES.828,    FRAMES.838,    0.4370093
            1144,    FRAMES.829,    FRAMES.830,    0.500332
            1145,    FRAMES.829,    FRAMES.839,    0.4370093
            1146,    FRAMES.830,    FRAMES.831,    0.500332
            1147,    FRAMES.830,    FRAMES.840,    0.4370093
            1148,    FRAMES.831,    FRAMES.832,    0.500332
            1149,    FRAMES.831,    FRAMES.841,    0.4370093
            1150,    FRAMES.832,    FRAMES.833,    0.500332
            1151,    FRAMES.832,    FRAMES.842,    0.4370093
            1152,    FRAMES.833,    FRAMES.834,    0.500332
            1153,    FRAMES.833,    FRAMES.843,    0.4370093
            1154,    FRAMES.834,    FRAMES.835,    0.500332
            1155,    FRAMES.834,    FRAMES.844,    0.4370093
            1156,    FRAMES.835,    FRAMES.836,    0.500332
            1157,    FRAMES.835,    FRAMES.845,    0.4370093
            1158,    FRAMES.836,    FRAMES.846,    0.4370093
            1159,    FRAMES.837,    FRAMES.838,    0.500332
            1160,    FRAMES.838,    FRAMES.839,    0.500332
            1161,    FRAMES.839,    FRAMES.840,    0.500332
            1162,    FRAMES.840,    FRAMES.841,    0.500332
            1163,    FRAMES.841,    FRAMES.842,    0.500332
            1164,    FRAMES.842,    FRAMES.843,    0.500332
            1165,    FRAMES.843,    FRAMES.844,    0.500332
            1166,    FRAMES.844,    FRAMES.845,    0.500332
            1167,    FRAMES.845,    FRAMES.846,    0.500332
            1168,    FRAMES.867,    FRAMES.869,    0.500332
            1169,    FRAMES.867,    FRAMES.884,    0.4370093
            1170,    FRAMES.867,    FRAMES.1160,    0.500332
            1171,    FRAMES.869,    FRAMES.871,    0.500332
            1172,    FRAMES.869,    FRAMES.886,    0.4370093
            1173,    FRAMES.871,    FRAMES.873,    0.500332
            1174,    FRAMES.871,    FRAMES.888,    0.4370093
            1175,    FRAMES.873,    FRAMES.874,    0.500332
            1176,    FRAMES.873,    FRAMES.889,    0.4370093
            1177,    FRAMES.874,    FRAMES.876,    0.500332
            1178,    FRAMES.874,    FRAMES.890,    0.4370093
            1179,    FRAMES.876,    FRAMES.878,    0.500332
            1180,    FRAMES.876,    FRAMES.891,    0.4370093
            1181,    FRAMES.878,    FRAMES.892,    0.4370093
            1182,    FRAMES.880,    FRAMES.882,    0.500332
            1183,    FRAMES.880,    FRAMES.894,    0.4370093
            1184,    FRAMES.880,    FRAMES.1157,    0.4370093
            1185,    FRAMES.882,    FRAMES.883,    0.500332
            1186,    FRAMES.882,    FRAMES.895,    0.4370093
            1187,    FRAMES.882,    FRAMES.1159,    0.4370093
            1188,    FRAMES.883,    FRAMES.884,    0.500332
            1189,    FRAMES.883,    FRAMES.896,    0.4370093
            1190,    FRAMES.883,    FRAMES.1160,    0.4370093
            1191,    FRAMES.884,    FRAMES.886,    0.500332
            1192,    FRAMES.884,    FRAMES.897,    0.4370093
            1193,    FRAMES.886,    FRAMES.888,    0.500332
            1194,    FRAMES.886,    FRAMES.899,    0.4370093
            1195,    FRAMES.888,    FRAMES.889,    0.500332
            1196,    FRAMES.888,    FRAMES.901,    0.4370093
            1197,    FRAMES.889,    FRAMES.890,    0.500332
            1198,    FRAMES.889,    FRAMES.903,    0.4370093
            1199,    FRAMES.890,    FRAMES.891,    0.500332
            1200,    FRAMES.890,    FRAMES.904,    0.4370093
            1201,    FRAMES.891,    FRAMES.892,    0.500332
            1202,    FRAMES.891,    FRAMES.906,    0.4370093
            1203,    FRAMES.892,    FRAMES.908,    0.4370093
            1204,    FRAMES.894,    FRAMES.895,    0.500332
            1205,    FRAMES.894,    FRAMES.909,    0.4370093
            1206,    FRAMES.895,    FRAMES.896,    0.500332
            1207,    FRAMES.895,    FRAMES.910,    0.4370093
            1208,    FRAMES.896,    FRAMES.897,    0.500332
            1209,    FRAMES.896,    FRAMES.911,    0.4370093
            1210,    FRAMES.897,    FRAMES.899,    0.500332
            1211,    FRAMES.897,    FRAMES.912,    0.4370093
            1212,    FRAMES.899,    FRAMES.901,    0.500332
            1213,    FRAMES.899,    FRAMES.913,    0.4370093
            1214,    FRAMES.901,    FRAMES.903,    0.500332
            1215,    FRAMES.901,    FRAMES.914,    0.4370093
            1216,    FRAMES.903,    FRAMES.904,    0.500332
            1217,    FRAMES.903,    FRAMES.915,    0.4370093
            1218,    FRAMES.904,    FRAMES.906,    0.500332
            1219,    FRAMES.904,    FRAMES.916,    0.4370093
            1220,    FRAMES.906,    FRAMES.908,    0.500332
            1221,    FRAMES.906,    FRAMES.917,    0.4370093
            1222,    FRAMES.908,    FRAMES.918,    0.4370093
            1223,    FRAMES.909,    FRAMES.910,    0.500332
            1224,    FRAMES.909,    FRAMES.919,    0.4370093
            1225,    FRAMES.910,    FRAMES.911,    0.500332
            1226,    FRAMES.910,    FRAMES.921,    0.4370093
            1227,    FRAMES.911,    FRAMES.912,    0.500332
            1228,    FRAMES.911,    FRAMES.922,    0.4370093
            1229,    FRAMES.912,    FRAMES.913,    0.500332
            1230,    FRAMES.912,    FRAMES.923,    0.4370093
            1231,    FRAMES.913,    FRAMES.914,    0.500332
            1232,    FRAMES.913,    FRAMES.924,    0.4370093
            1233,    FRAMES.914,    FRAMES.915,    0.500332
            1234,    FRAMES.914,    FRAMES.925,    0.4370093
            1235,    FRAMES.915,    FRAMES.916,    0.500332
            1236,    FRAMES.915,    FRAMES.926,    0.4370093
            1237,    FRAMES.916,    FRAMES.917,    0.500332
            1238,    FRAMES.916,    FRAMES.927,    0.4370093
            1239,    FRAMES.917,    FRAMES.918,    0.500332
            1240,    FRAMES.917,    FRAMES.928,    0.4370093
            1241,    FRAMES.918,    FRAMES.929,    0.4370093
            1242,    FRAMES.919,    FRAMES.921,    0.500332
            1243,    FRAMES.919,    FRAMES.930,    0.4370093
            1244,    FRAMES.921,    FRAMES.922,    0.500332
            1245,    FRAMES.921,    FRAMES.931,    0.4370093
            1246,    FRAMES.922,    FRAMES.923,    0.500332
            1247,    FRAMES.922,    FRAMES.932,    0.4370093
            1248,    FRAMES.923,    FRAMES.924,    0.500332
            1249,    FRAMES.923,    FRAMES.933,    0.4370093
            1250,    FRAMES.924,    FRAMES.925,    0.500332
            1251,    FRAMES.924,    FRAMES.934,    0.4370093
            1252,    FRAMES.925,    FRAMES.926,    0.500332
            1253,    FRAMES.925,    FRAMES.935,    0.4370093
            1254,    FRAMES.926,    FRAMES.927,    0.500332
            1255,    FRAMES.926,    FRAMES.936,    0.4370093
            1256,    FRAMES.927,    FRAMES.928,    0.500332
            1257,    FRAMES.927,    FRAMES.937,    0.4370093
            1258,    FRAMES.928,    FRAMES.929,    0.500332
            1259,    FRAMES.928,    FRAMES.938,    0.4370093
            1260,    FRAMES.929,    FRAMES.939,    0.4370093
            1261,    FRAMES.930,    FRAMES.931,    0.500332
            1262,    FRAMES.930,    FRAMES.940,    0.4370093
            1263,    FRAMES.931,    FRAMES.932,    0.500332
            1264,    FRAMES.931,    FRAMES.941,    0.4370093
            1265,    FRAMES.932,    FRAMES.933,    0.500332
            1266,    FRAMES.932,    FRAMES.942,    0.4370093
            1267,    FRAMES.933,    FRAMES.934,    0.500332
            1268,    FRAMES.933,    FRAMES.943,    0.4370093
            1269,    FRAMES.934,    FRAMES.935,    0.500332
            1270,    FRAMES.934,    FRAMES.944,    0.4370093
            1271,    FRAMES.935,    FRAMES.936,    0.500332
            1272,    FRAMES.935,    FRAMES.945,    0.4370093
            1273,    FRAMES.936,    FRAMES.937,    0.500332
            1274,    FRAMES.936,    FRAMES.946,    0.4370093
            1275,    FRAMES.937,    FRAMES.938,    0.500332
            1276,    FRAMES.937,    FRAMES.947,    0.4370093
            1277,    FRAMES.938,    FRAMES.939,    0.500332
            1278,    FRAMES.938,    FRAMES.948,    0.4370093
            1279,    FRAMES.939,    FRAMES.949,    0.4370093
            1280,    FRAMES.940,    FRAMES.941,    0.500332
            1281,    FRAMES.940,    FRAMES.950,    0.4370093
            1282,    FRAMES.941,    FRAMES.942,    0.500332
            1283,    FRAMES.941,    FRAMES.951,    0.4370093
            1284,    FRAMES.942,    FRAMES.943,    0.500332
            1285,    FRAMES.942,    FRAMES.952,    0.4370093
            1286,    FRAMES.943,    FRAMES.944,    0.500332
            1287,    FRAMES.943,    FRAMES.953,    0.4370093
            1288,    FRAMES.944,    FRAMES.945,    0.500332
            1289,    FRAMES.944,    FRAMES.954,    0.4370093
            1290,    FRAMES.945,    FRAMES.946,    0.500332
            1291,    FRAMES.945,    FRAMES.955,    0.4370093
            1292,    FRAMES.946,    FRAMES.947,    0.500332
            1293,    FRAMES.946,    FRAMES.956,    0.4370093
            1294,    FRAMES.947,    FRAMES.948,    0.500332
            1295,    FRAMES.947,    FRAMES.957,    0.4370093
            1296,    FRAMES.948,    FRAMES.949,    0.500332
            1297,    FRAMES.948,    FRAMES.958,    0.4370093
            1298,    FRAMES.949,    FRAMES.959,    0.4370093
            1299,    FRAMES.950,    FRAMES.951,    0.500332
            1300,    FRAMES.950,    FRAMES.960,    0.4370093
            1301,    FRAMES.951,    FRAMES.952,    0.500332
            1302,    FRAMES.951,    FRAMES.961,    0.4370093
            1303,    FRAMES.952,    FRAMES.953,    0.500332
            1304,    FRAMES.952,    FRAMES.962,    0.4370093
            1305,    FRAMES.953,    FRAMES.954,    0.500332
            1306,    FRAMES.953,    FRAMES.963,    0.4370093
            1307,    FRAMES.954,    FRAMES.955,    0.500332
            1308,    FRAMES.954,    FRAMES.964,    0.4370093
            1309,    FRAMES.955,    FRAMES.956,    0.500332
            1310,    FRAMES.955,    FRAMES.965,    0.4370093
            1311,    FRAMES.956,    FRAMES.957,    0.500332
            1312,    FRAMES.956,    FRAMES.966,    0.4370093
            1313,    FRAMES.957,    FRAMES.958,    0.500332
            1314,    FRAMES.957,    FRAMES.967,    0.4370093
            1315,    FRAMES.958,    FRAMES.959,    0.500332
            1316,    FRAMES.958,    FRAMES.968,    0.4370093
            1317,    FRAMES.959,    FRAMES.969,    0.4370093
            1318,    FRAMES.960,    FRAMES.961,    0.500332
            1319,    FRAMES.960,    FRAMES.970,    0.4370093
            1320,    FRAMES.961,    FRAMES.962,    0.500332
            1321,    FRAMES.961,    FRAMES.971,    0.4370093
            1322,    FRAMES.962,    FRAMES.963,    0.500332
            1323,    FRAMES.962,    FRAMES.972,    0.4370093
            1324,    FRAMES.963,    FRAMES.964,    0.500332
            1325,    FRAMES.963,    FRAMES.973,    0.4370093
            1326,    FRAMES.964,    FRAMES.965,    0.500332
            1327,    FRAMES.964,    FRAMES.974,    0.4370093
            1328,    FRAMES.965,    FRAMES.966,    0.500332
            1329,    FRAMES.965,    FRAMES.975,    0.4370093
            1330,    FRAMES.966,    FRAMES.967,    0.500332
            1331,    FRAMES.966,    FRAMES.976,    0.4370093
            1332,    FRAMES.967,    FRAMES.968,    0.500332
            1333,    FRAMES.967,    FRAMES.977,    0.4370093
            1334,    FRAMES.968,    FRAMES.969,    0.500332
            1335,    FRAMES.968,    FRAMES.978,    0.4370093
            1336,    FRAMES.969,    FRAMES.979,    0.4370093
            1337,    FRAMES.970,    FRAMES.971,    0.500332
            1338,    FRAMES.970,    FRAMES.980,    0.4370093
            1339,    FRAMES.971,    FRAMES.972,    0.500332
            1340,    FRAMES.971,    FRAMES.981,    0.4370093
            1341,    FRAMES.972,    FRAMES.973,    0.500332
            1342,    FRAMES.972,    FRAMES.982,    0.4370093
            1343,    FRAMES.973,    FRAMES.974,    0.500332
            1344,    FRAMES.973,    FRAMES.983,    0.4370093
            1345,    FRAMES.974,    FRAMES.975,    0.500332
            1346,    FRAMES.974,    FRAMES.984,    0.4370093
            1347,    FRAMES.975,    FRAMES.976,    0.500332
            1348,    FRAMES.975,    FRAMES.985,    0.4370093
            1349,    FRAMES.976,    FRAMES.977,    0.500332
            1350,    FRAMES.976,    FRAMES.986,    0.4370093
            1351,    FRAMES.977,    FRAMES.978,    0.500332
            1352,    FRAMES.977,    FRAMES.987,    0.4370093
            1353,    FRAMES.978,    FRAMES.979,    0.500332
            1354,    FRAMES.978,    FRAMES.988,    0.4370093
            1355,    FRAMES.980,    FRAMES.981,    0.500332
            1356,    FRAMES.981,    FRAMES.982,    0.500332
            1357,    FRAMES.982,    FRAMES.983,    0.500332
            1358,    FRAMES.983,    FRAMES.984,    0.500332
            1359,    FRAMES.984,    FRAMES.985,    0.500332
            1360,    FRAMES.985,    FRAMES.986,    0.500332
            1361,    FRAMES.986,    FRAMES.987,    0.500332
            1362,    FRAMES.987,    FRAMES.988,    0.500332
            1363,    FRAMES.990,    FRAMES.996,    0.4370093
            1364,    FRAMES.993,    FRAMES.994,    0.500332
            1365,    FRAMES.993,    FRAMES.1012,    0.4370093
            1366,    FRAMES.993,    FRAMES.1050,    0.500332
            1367,    FRAMES.993,    FRAMES.1055,    0.4370093
            1368,    FRAMES.994,    FRAMES.995,    0.500332
            1369,    FRAMES.994,    FRAMES.1013,    0.4370093
            1370,    FRAMES.995,    FRAMES.997,    0.500332
            1371,    FRAMES.995,    FRAMES.1017,    0.4370093
            1372,    FRAMES.995,    FRAMES.1063,    0.4370093
            1373,    FRAMES.997,    FRAMES.999,    0.500332
            1374,    FRAMES.999,    FRAMES.1000,    0.500332
            1375,    FRAMES.999,    FRAMES.1162,    0.4370093
            1376,    FRAMES.1000,    FRAMES.1003,    0.500332
            1377,    FRAMES.1000,    FRAMES.1163,    0.4370093
            1378,    FRAMES.1003,    FRAMES.1004,    0.500332
            1379,    FRAMES.1003,    FRAMES.1165,    0.4370093
            1380,    FRAMES.1004,    FRAMES.1006,    0.500332
            1381,    FRAMES.1004,    FRAMES.1044,    0.4370093
            1382,    FRAMES.1006,    FRAMES.1048,    0.4370093
            1383,    FRAMES.1010,    FRAMES.1012,    0.500332
            1384,    FRAMES.1010,    FRAMES.1050,    0.4370093
            1385,    FRAMES.1012,    FRAMES.1013,    0.500332
            1386,    FRAMES.1013,    FRAMES.1017,    0.500332
            1387,    FRAMES.1043,    FRAMES.1046,    0.4370093
            1388,    FRAMES.1044,    FRAMES.1048,    0.500332
            1389,    FRAMES.1044,    FRAMES.1165,    0.500332
            1390,    FRAMES.1046,    FRAMES.1049,    0.4370093
            1391,    FRAMES.1049,    FRAMES.1053,    0.4370093
            1392,    FRAMES.1050,    FRAMES.1126,    0.4370093
            1393,    FRAMES.1055,    FRAMES.1126,    0.500332
            1394,    FRAMES.1058,    FRAMES.1059,    0.500332
            1395,    FRAMES.1067,    FRAMES.1069,    0.500332
            1396,    FRAMES.1073,    FRAMES.1077,    0.4370093
            1397,    FRAMES.1076,    FRAMES.1077,    0.500332
            1398,    FRAMES.1077,    FRAMES.1079,    0.500332
            1399,    FRAMES.1082,    FRAMES.1090,    0.4370093
            1400,    FRAMES.1084,    FRAMES.1093,    0.4370093
            1401,    FRAMES.1086,    FRAMES.1087,    0.500332
            1402,    FRAMES.1086,    FRAMES.1098,    0.4370093
            1403,    FRAMES.1087,    FRAMES.1088,    0.500332
            1404,    FRAMES.1087,    FRAMES.1099,    0.4370093
            1405,    FRAMES.1088,    FRAMES.1089,    0.500332
            1406,    FRAMES.1088,    FRAMES.1100,    0.4370093
            1407,    FRAMES.1089,    FRAMES.1101,    0.4370093
            1408,    FRAMES.1090,    FRAMES.1091,    0.500332
            1409,    FRAMES.1090,    FRAMES.1102,    0.4370093
            1410,    FRAMES.1091,    FRAMES.1093,    0.500332
            1411,    FRAMES.1091,    FRAMES.1103,    0.4370093
            1412,    FRAMES.1092,    FRAMES.1112,    0.500332
            1413,    FRAMES.1093,    FRAMES.1094,    0.500332
            1414,    FRAMES.1093,    FRAMES.1104,    0.4370093
            1415,    FRAMES.1094,    FRAMES.1096,    0.500332
            1416,    FRAMES.1094,    FRAMES.1105,    0.4370093
            1417,    FRAMES.1095,    FRAMES.1115,    0.500332
            1418,    FRAMES.1095,    FRAMES.1147,    0.4370093
            1419,    FRAMES.1096,    FRAMES.1097,    0.500332
            1420,    FRAMES.1096,    FRAMES.1106,    0.4370093
            1421,    FRAMES.1097,    FRAMES.1098,    0.500332
            1422,    FRAMES.1097,    FRAMES.1107,    0.4370093
            1423,    FRAMES.1098,    FRAMES.1099,    0.500332
            1424,    FRAMES.1098,    FRAMES.1108,    0.4370093
            1425,    FRAMES.1099,    FRAMES.1100,    0.500332
            1426,    FRAMES.1099,    FRAMES.1109,    0.4370093
            1427,    FRAMES.1100,    FRAMES.1101,    0.500332
            1428,    FRAMES.1100,    FRAMES.1110,    0.4370093
            1429,    FRAMES.1101,    FRAMES.1111,    0.4370093
            1430,    FRAMES.1102,    FRAMES.1103,    0.500332
            1431,    FRAMES.1102,    FRAMES.1113,    0.4370093
            1432,    FRAMES.1103,    FRAMES.1104,    0.500332
            1433,    FRAMES.1103,    FRAMES.1114,    0.4370093
            1434,    FRAMES.1104,    FRAMES.1105,    0.500332
            1435,    FRAMES.1104,    FRAMES.1116,    0.4370093
            1436,    FRAMES.1105,    FRAMES.1106,    0.500332
            1437,    FRAMES.1105,    FRAMES.1117,    0.4370093
            1438,    FRAMES.1106,    FRAMES.1107,    0.500332
            1439,    FRAMES.1106,    FRAMES.1118,    0.4370093
            1440,    FRAMES.1107,    FRAMES.1108,    0.500332
            1441,    FRAMES.1107,    FRAMES.1119,    0.4370093
            1442,    FRAMES.1108,    FRAMES.1109,    0.500332
            1443,    FRAMES.1108,    FRAMES.1120,    0.4370093
            1444,    FRAMES.1109,    FRAMES.1110,    0.500332
            1445,    FRAMES.1109,    FRAMES.1121,    0.4370093
            1446,    FRAMES.1110,    FRAMES.1111,    0.500332
            1447,    FRAMES.1110,    FRAMES.1123,    0.4370093
            1448,    FRAMES.1111,    FRAMES.1124,    0.4370093
            1449,    FRAMES.1112,    FRAMES.1129,    0.500332
            1450,    FRAMES.1113,    FRAMES.1114,    0.500332
            1451,    FRAMES.1114,    FRAMES.1116,    0.500332
            1452,    FRAMES.1115,    FRAMES.1122,    0.500332
            1453,    FRAMES.1115,    FRAMES.1151,    0.4370093
            1454,    FRAMES.1116,    FRAMES.1117,    0.500332
            1455,    FRAMES.1117,    FRAMES.1118,    0.500332
            1456,    FRAMES.1118,    FRAMES.1119,    0.500332
            1457,    FRAMES.1119,    FRAMES.1120,    0.500332
            1458,    FRAMES.1120,    FRAMES.1121,    0.500332
            1459,    FRAMES.1121,    FRAMES.1123,    0.500332
            1460,    FRAMES.1122,    FRAMES.1127,    0.500332
            1461,    FRAMES.1123,    FRAMES.1124,    0.500332
            1462,    FRAMES.1127,    FRAMES.1130,    0.500332
            1463,    FRAMES.1130,    FRAMES.1133,    0.500332
            1464,    FRAMES.1131,    FRAMES.1135,    0.500332
            1465,    FRAMES.1133,    FRAMES.1137,    0.500332
            1466,    FRAMES.1137,    FRAMES.1139,    0.500332
            1467,    FRAMES.1138,    FRAMES.1140,    0.500332
            1468,    FRAMES.1139,    FRAMES.1142,    0.500332
            1469,    FRAMES.1139,    FRAMES.1154,    0.4370093
            1470,    FRAMES.1140,    FRAMES.1145,    0.500332
            1471,    FRAMES.1142,    FRAMES.1144,    0.500332
            1472,    FRAMES.1142,    FRAMES.1155,    0.4370093
            1473,    FRAMES.1145,    FRAMES.1149,    0.500332
            1474,    FRAMES.1147,    FRAMES.1151,    0.500332
            1475,    FRAMES.1153,    FRAMES.1157,    0.4370093
            1476,    FRAMES.1154,    FRAMES.1155,    0.500332
            1477,    FRAMES.1157,    FRAMES.1159,    0.500332
            1478,    FRAMES.1159,    FRAMES.1160,    0.500332
            1479,    FRAMES.1162,    FRAMES.1163,    0.500332
            1480,    FRAMES.1163,    FRAMES.1165,    0.500332
HEADER OUTPUT CALLS, GLOBAL
C Case Set Prop Generated Code

      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 .OR. LOOPCT .GT. 0 ) CALL SAVE('ALL',0)

HEADER NODE DATA, MAIN
HEADER CONDUCTOR DATA, MAIN
            1,    CARDS.776,    FRAMES.287,    1.
HEADER NODE DATA, MECHANICAL_CONNECTIONS
HEADER CONDUCTOR DATA, MECHANICAL_CONNECTIONS
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            1,    BATTERY.73,    FRAMES.671,    0.0108
            2,    BATTERY.73,    FRAMES.673,    0.0108
            3,    BATTERY.73,    FRAMES.1071,    0.0144
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            4,    BATTERY.76,    FRAMES.429,    0.01237875
            5,    BATTERY.76,    FRAMES.430,    0.0082525
            6,    BATTERY.77,    FRAMES.430,    0.0082525
            7,    BATTERY.77,    FRAMES.431,    0.016505
            8,    BATTERY.77,    FRAMES.432,    0.016505
            9,    BATTERY.78,    FRAMES.433,    0.016505
            10,    BATTERY.78,    FRAMES.434,    0.02063125
            11,    BATTERY.78,    FRAMES.435,    0.00412625
            12,    BATTERY.79,    FRAMES.435,    0.01237875
            13,    BATTERY.79,    FRAMES.436,    0.016505
            14,    BATTERY.79,    FRAMES.437,    0.01237875
            15,    BATTERY.80,    FRAMES.437,    0.00412625
            16,    BATTERY.80,    FRAMES.438,    0.016505
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            17,    BATTERY.80,    FRAMES.670,    0.0144
            18,    BATTERY.80,    FRAMES.671,    0.0036
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            19,    BATTERY.95,    FRAMES.603,    0.0036
            20,    BATTERY.95,    FRAMES.604,    0.0144
            21,    BATTERY.95,    FRAMES.605,    0.0144
            22,    BATTERY.95,    FRAMES.1043,    0.0036
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            23,    BATTERY.97,    FRAMES.673,    0.0036
            24,    BATTERY.97,    FRAMES.675,    0.0144
            25,    BATTERY.97,    FRAMES.676,    0.0036
            26,    BATTERY.97,    FRAMES.1073,    0.0144
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            27,    BATTERY.111,    FRAMES.607,    0.0144
            28,    BATTERY.111,    FRAMES.608,    0.0108
            29,    BATTERY.111,    FRAMES.1043,    0.0108
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            30,    BATTERY.113,    FRAMES.676,    0.0108
            31,    BATTERY.113,    FRAMES.677,    0.0144
            32,    BATTERY.113,    FRAMES.1075,    0.0108
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            33,    BATTERY.114,    FRAMES.725,    0.0082525
            34,    BATTERY.114,    FRAMES.726,    0.01237875
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            35,    BATTERY.116,    FRAMES.795,    0.0082525
            36,    BATTERY.116,    FRAMES.796,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            37,    BATTERY.117,    FRAMES.723,    0.016505
            38,    BATTERY.117,    FRAMES.724,    0.016505
            39,    BATTERY.117,    FRAMES.725,    0.0082525
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            40,    BATTERY.119,    FRAMES.793,    0.016505
            41,    BATTERY.119,    FRAMES.794,    0.016505
            42,    BATTERY.119,    FRAMES.795,    0.0082525
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            43,    BATTERY.120,    FRAMES.720,    0.00412625
            44,    BATTERY.120,    FRAMES.721,    0.02063125
            45,    BATTERY.120,    FRAMES.722,    0.016505
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            46,    BATTERY.122,    FRAMES.790,    0.00412625
            47,    BATTERY.122,    FRAMES.791,    0.02063125
            48,    BATTERY.122,    FRAMES.792,    0.016505
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            49,    BATTERY.123,    FRAMES.718,    0.01237875
            50,    BATTERY.123,    FRAMES.719,    0.016505
            51,    BATTERY.123,    FRAMES.720,    0.01237875
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            52,    BATTERY.125,    FRAMES.788,    0.01237875
            53,    BATTERY.125,    FRAMES.789,    0.016505
            54,    BATTERY.125,    FRAMES.790,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            55,    BATTERY.126,    FRAMES.608,    0.0036
            56,    BATTERY.126,    FRAMES.609,    0.0144
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            57,    BATTERY.126,    FRAMES.717,    0.016505
            58,    BATTERY.126,    FRAMES.718,    0.00412625
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            59,    BATTERY.128,    FRAMES.679,    0.0144
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            60,    BATTERY.128,    FRAMES.787,    0.016505
            61,    BATTERY.128,    FRAMES.788,    0.00412625
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            62,    BATTERY.128,    FRAMES.1075,    0.0036
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            63,    BATTERY.141,    FRAMES.601,    0.0108
            64,    BATTERY.141,    FRAMES.602,    0.0144
            65,    BATTERY.141,    FRAMES.603,    0.0108
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            66,    BATTERY.144,    FRAMES.930,    0.01237875
            67,    BATTERY.144,    FRAMES.931,    0.0082525
            68,    BATTERY.145,    FRAMES.931,    0.0082525
            69,    BATTERY.145,    FRAMES.932,    0.016505
            70,    BATTERY.145,    FRAMES.933,    0.016505
            71,    BATTERY.146,    FRAMES.934,    0.016505
            72,    BATTERY.146,    FRAMES.935,    0.02063125
            73,    BATTERY.146,    FRAMES.936,    0.00412625
            74,    BATTERY.147,    FRAMES.936,    0.01237875
            75,    BATTERY.147,    FRAMES.937,    0.016505
            76,    BATTERY.147,    FRAMES.938,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            77,    BATTERY.149,    FRAMES.600,    0.0144
            78,    BATTERY.149,    FRAMES.601,    0.0036
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            79,    BATTERY.149,    FRAMES.938,    0.00412625
            80,    BATTERY.149,    FRAMES.939,    0.016505
C OreSatLiveCard-DxWiFi
            81,    CARDS.1,    CARDS.952,    3.09
            82,    CARDS.3,    CARDS.944,    3.09
            83,    CARDS.7,    CARDS.995,    3.09
            84,    CARDS.9,    CARDS.987,    3.09
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            85,    CARDS.11,    FRAMES.611,    0.0108
            86,    CARDS.11,    FRAMES.612,    0.0144
            87,    CARDS.11,    FRAMES.613,    0.0108
            88,    CARDS.16,    FRAMES.613,    0.0036
            89,    CARDS.16,    FRAMES.614,    0.0144
            90,    CARDS.16,    FRAMES.615,    0.0144
            91,    CARDS.16,    FRAMES.1046,    0.0036
            92,    CARDS.21,    FRAMES.617,    0.0144
            93,    CARDS.21,    FRAMES.618,    0.0108
            94,    CARDS.21,    FRAMES.1046,    0.0108
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            95,    CARDS.22,    FRAMES.735,    0.0082525
            96,    CARDS.22,    FRAMES.736,    0.01237875
            97,    CARDS.23,    FRAMES.733,    0.016505
            98,    CARDS.23,    FRAMES.734,    0.016505
            99,    CARDS.23,    FRAMES.735,    0.0082525
            100,    CARDS.24,    FRAMES.730,    0.00412625
            101,    CARDS.24,    FRAMES.731,    0.02063125
            102,    CARDS.24,    FRAMES.732,    0.016505
            103,    CARDS.25,    FRAMES.728,    0.01237875
            104,    CARDS.25,    FRAMES.729,    0.016505
            105,    CARDS.25,    FRAMES.730,    0.01237875
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            106,    CARDS.26,    FRAMES.618,    0.0036
            107,    CARDS.26,    FRAMES.619,    0.0144
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            108,    CARDS.26,    FRAMES.727,    0.016505
            109,    CARDS.26,    FRAMES.728,    0.00412625
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            110,    CARDS.66,    FRAMES.447,    0.00412625
            111,    CARDS.66,    FRAMES.448,    0.016505
C Contact - Edge Contactor-C3 to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCA
            112,    CARDS.66,    FRAMES.680,    0.0144
            113,    CARDS.66,    FRAMES.681,    0.0036
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            114,    CARDS.67,    FRAMES.445,    0.01237875
            115,    CARDS.67,    FRAMES.446,    0.016505
            116,    CARDS.67,    FRAMES.447,    0.01237875
            117,    CARDS.68,    FRAMES.443,    0.016505
            118,    CARDS.68,    FRAMES.444,    0.02063125
            119,    CARDS.68,    FRAMES.445,    0.00412625
            120,    CARDS.69,    FRAMES.440,    0.0082525
            121,    CARDS.69,    FRAMES.441,    0.016505
            122,    CARDS.69,    FRAMES.442,    0.016505
            123,    CARDS.70,    FRAMES.439,    0.01237875
            124,    CARDS.70,    FRAMES.440,    0.0082525
C Contact - Edge Contactor-C3 to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCA
            125,    CARDS.71,    FRAMES.681,    0.0108
            126,    CARDS.71,    FRAMES.682,    0.0144
            127,    CARDS.71,    FRAMES.1076,    0.0108
            128,    CARDS.76,    FRAMES.686,    0.0036
            129,    CARDS.76,    FRAMES.1076,    0.0036
            130,    CARDS.76,    FRAMES.1077,    0.0144
            131,    CARDS.76,    FRAMES.1079,    0.0144
            132,    CARDS.81,    FRAMES.686,    0.0108
            133,    CARDS.81,    FRAMES.687,    0.0144
            134,    CARDS.81,    FRAMES.688,    0.0108
            135,    CARDS.86,    FRAMES.688,    0.0036
            136,    CARDS.86,    FRAMES.689,    0.0144
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            137,    CARDS.86,    FRAMES.797,    0.016505
            138,    CARDS.86,    FRAMES.798,    0.00412625
            139,    CARDS.87,    FRAMES.798,    0.01237875
            140,    CARDS.87,    FRAMES.799,    0.016505
            141,    CARDS.87,    FRAMES.800,    0.01237875
            142,    CARDS.88,    FRAMES.800,    0.00412625
            143,    CARDS.88,    FRAMES.801,    0.02063125
            144,    CARDS.88,    FRAMES.802,    0.016505
            145,    CARDS.89,    FRAMES.803,    0.016505
            146,    CARDS.89,    FRAMES.804,    0.016505
            147,    CARDS.89,    FRAMES.805,    0.0082525
            148,    CARDS.90,    FRAMES.805,    0.0082525
            149,    CARDS.90,    FRAMES.806,    0.01237875
C Contact - Edge Contactor-  -Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][5]::F58
            150,    CARDS.801,    FRAMES.513,    0.0201125
            151,    CARDS.801,    FRAMES.1055,    0.01508438
            152,    CARDS.801,    FRAMES.1063,    0.01508437
            153,    CARDS.802,    FRAMES.474,    0.005028125
            154,    CARDS.802,    FRAMES.480,    0.0201125
            155,    CARDS.802,    FRAMES.486,    0.0201125
            156,    CARDS.802,    FRAMES.643,    0.005028125
            157,    CARDS.806,    FRAMES.529,    0.0201125
            158,    CARDS.806,    FRAMES.1063,    0.005028125
            159,    CARDS.806,    FRAMES.1162,    0.0201125
            160,    CARDS.806,    FRAMES.1163,    0.005028125
            161,    CARDS.807,    FRAMES.461,    0.01508437
            162,    CARDS.807,    FRAMES.468,    0.0201125
            163,    CARDS.807,    FRAMES.474,    0.01508437
            164,    CARDS.810,    FRAMES.674,    0.01759844
            165,    CARDS.810,    FRAMES.685,    0.02262656
            166,    CARDS.810,    FRAMES.692,    0.005028125
            167,    CARDS.810,    FRAMES.1155,    0.005028125
            168,    CARDS.812,    FRAMES.1044,    0.01508437
            169,    CARDS.812,    FRAMES.1163,    0.01508437
            170,    CARDS.812,    FRAMES.1165,    0.0201125
            171,    CARDS.813,    FRAMES.458,    0.02262656
            172,    CARDS.813,    FRAMES.461,    0.005028125
            173,    CARDS.813,    FRAMES.1112,    0.005028125
            174,    CARDS.813,    FRAMES.1129,    0.01759844
            175,    CARDS.814,    FRAMES.683,    0.01508437
            176,    CARDS.814,    FRAMES.1092,    0.0201125
            177,    CARDS.814,    FRAMES.1112,    0.01508438
            178,    CARDS.815,    FRAMES.32,    0.005028125
            179,    CARDS.815,    FRAMES.35,    0.0201125
            180,    CARDS.815,    FRAMES.665,    0.0201125
            181,    CARDS.815,    FRAMES.683,    0.005028125
            182,    CARDS.816,    FRAMES.26,    0.01508437
            183,    CARDS.816,    FRAMES.29,    0.0201125
            184,    CARDS.816,    FRAMES.32,    0.01508437
            185,    CARDS.817,    FRAMES.26,    0.005028125
            186,    CARDS.817,    FRAMES.606,    0.01759844
            187,    CARDS.817,    FRAMES.1044,    0.005028125
            188,    CARDS.817,    FRAMES.1048,    0.02262656
            189,    CARDS.818,    FRAMES.692,    0.01508438
            190,    CARDS.818,    FRAMES.1131,    0.0201125
            191,    CARDS.818,    FRAMES.1135,    0.01508437
            192,    CARDS.819,    FRAMES.517,    0.0201125
            193,    CARDS.819,    FRAMES.521,    0.0201125
            194,    CARDS.819,    FRAMES.1135,    0.005028125
            195,    CARDS.819,    FRAMES.1138,    0.005028125
            196,    CARDS.820,    FRAMES.1138,    0.01508437
            197,    CARDS.820,    FRAMES.1140,    0.0201125
            198,    CARDS.820,    FRAMES.1145,    0.01508437
            199,    CARDS.821,    FRAMES.1055,    0.005028125
            200,    CARDS.821,    FRAMES.1126,    0.02262656
            201,    CARDS.821,    FRAMES.1145,    0.005028125
            202,    CARDS.821,    FRAMES.1149,    0.01759844
C Contact - Edge Contactor-  +Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][28]::F32
            203,    CARDS.822,    FRAMES.487,    0.005028125
            204,    CARDS.822,    FRAMES.488,    0.01759844
            205,    CARDS.822,    FRAMES.1113,    0.02262656
            206,    CARDS.822,    FRAMES.1114,    0.005028125
            207,    CARDS.823,    FRAMES.485,    0.01508437
            208,    CARDS.823,    FRAMES.487,    0.01508438
            209,    CARDS.823,    FRAMES.1015,    0.0201125
            210,    CARDS.824,    FRAMES.482,    0.005028125
            211,    CARDS.824,    FRAMES.483,    0.0201125
            212,    CARDS.824,    FRAMES.484,    0.0201125
            213,    CARDS.824,    FRAMES.485,    0.005028125
            214,    CARDS.825,    FRAMES.481,    0.0201125
            215,    CARDS.825,    FRAMES.482,    0.01508437
            216,    CARDS.825,    FRAMES.1008,    0.01508437
C Contact - Edge Contactor-  -Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][5]::F58
            217,    CARDS.826,    FRAMES.643,    0.01508437
            218,    CARDS.826,    FRAMES.1154,    0.0201125
            219,    CARDS.826,    FRAMES.1155,    0.01508438
C Contact - Edge Contactor-  +Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][28]::F32
            220,    CARDS.827,    FRAMES.416,    0.005028125
            221,    CARDS.827,    FRAMES.417,    0.02262656
            222,    CARDS.827,    FRAMES.479,    0.01759844
            223,    CARDS.827,    FRAMES.1008,    0.005028125
            224,    CARDS.828,    FRAMES.1114,    0.01508438
            225,    CARDS.828,    FRAMES.1116,    0.0201125
            226,    CARDS.828,    FRAMES.1117,    0.01508437
            227,    CARDS.832,    FRAMES.414,    0.01508437
            228,    CARDS.832,    FRAMES.415,    0.0201125
            229,    CARDS.832,    FRAMES.416,    0.01508438
            230,    CARDS.833,    FRAMES.1117,    0.005028125
            231,    CARDS.833,    FRAMES.1118,    0.0201125
            232,    CARDS.833,    FRAMES.1119,    0.0201125
            233,    CARDS.833,    FRAMES.1120,    0.005028125
            234,    CARDS.838,    FRAMES.411,    0.005028125
            235,    CARDS.838,    FRAMES.412,    0.0201125
            236,    CARDS.838,    FRAMES.413,    0.0201125
            237,    CARDS.838,    FRAMES.414,    0.005028125
            238,    CARDS.839,    FRAMES.1120,    0.01508437
            239,    CARDS.839,    FRAMES.1121,    0.0201125
            240,    CARDS.839,    FRAMES.1123,    0.01508437
            241,    CARDS.843,    FRAMES.409,    0.01508437
            242,    CARDS.843,    FRAMES.410,    0.0201125
            243,    CARDS.843,    FRAMES.411,    0.01508437
            244,    CARDS.844,    FRAMES.837,    0.01759844
            245,    CARDS.844,    FRAMES.838,    0.005028125
            246,    CARDS.844,    FRAMES.1123,    0.005028125
            247,    CARDS.844,    FRAMES.1124,    0.02262656
            248,    CARDS.845,    FRAMES.838,    0.01508438
            249,    CARDS.845,    FRAMES.839,    0.0201125
            250,    CARDS.845,    FRAMES.840,    0.01508437
            251,    CARDS.846,    FRAMES.840,    0.005028125
            252,    CARDS.846,    FRAMES.841,    0.0201125
            253,    CARDS.846,    FRAMES.842,    0.0201125
            254,    CARDS.846,    FRAMES.843,    0.005028125
            255,    CARDS.847,    FRAMES.843,    0.01508437
            256,    CARDS.847,    FRAMES.844,    0.0201125
            257,    CARDS.847,    FRAMES.845,    0.01508437
            258,    CARDS.849,    FRAMES.408,    0.02262656
            259,    CARDS.849,    FRAMES.409,    0.005028125
            260,    CARDS.849,    FRAMES.845,    0.005028125
            261,    CARDS.849,    FRAMES.846,    0.01759844
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            262,    CARDS.855,    FRAMES.542,    0.0108
            263,    CARDS.855,    FRAMES.546,    0.0144
            264,    CARDS.855,    FRAMES.550,    0.0108
            265,    CARDS.870,    FRAMES.550,    0.0036
            266,    CARDS.870,    FRAMES.554,    0.0144
            267,    CARDS.870,    FRAMES.559,    0.0144
            268,    CARDS.870,    FRAMES.564,    0.0036
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            269,    CARDS.882,    FRAMES.894,    0.01237875
            270,    CARDS.882,    FRAMES.895,    0.0082525
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            271,    CARDS.888,    FRAMES.564,    0.0108
            272,    CARDS.888,    FRAMES.569,    0.0144
            273,    CARDS.888,    FRAMES.574,    0.0108
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            274,    CARDS.891,    FRAMES.690,    0.0082525
            275,    CARDS.891,    FRAMES.696,    0.01237875
            276,    CARDS.894,    FRAMES.678,    0.016505
            277,    CARDS.894,    FRAMES.684,    0.016505
            278,    CARDS.894,    FRAMES.690,    0.0082525
            279,    CARDS.897,    FRAMES.660,    0.00412625
            280,    CARDS.897,    FRAMES.666,    0.02063125
            281,    CARDS.897,    FRAMES.672,    0.016505
            282,    CARDS.900,    FRAMES.648,    0.01237875
            283,    CARDS.900,    FRAMES.654,    0.016505
            284,    CARDS.900,    FRAMES.660,    0.01237875
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            285,    CARDS.903,    FRAMES.574,    0.0036
            286,    CARDS.903,    FRAMES.579,    0.0144
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            287,    CARDS.903,    FRAMES.642,    0.016505
            288,    CARDS.903,    FRAMES.648,    0.00412625
            289,    CARDS.906,    FRAMES.895,    0.0082525
            290,    CARDS.906,    FRAMES.896,    0.016505
            291,    CARDS.906,    FRAMES.897,    0.016505
            292,    CARDS.909,    FRAMES.899,    0.016505
            293,    CARDS.909,    FRAMES.901,    0.02063125
            294,    CARDS.909,    FRAMES.903,    0.00412625
            295,    CARDS.912,    FRAMES.903,    0.01237875
            296,    CARDS.912,    FRAMES.904,    0.016505
            297,    CARDS.912,    FRAMES.906,    0.01237875
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            298,    CARDS.915,    FRAMES.538,    0.0144
            299,    CARDS.915,    FRAMES.542,    0.0036
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            300,    CARDS.915,    FRAMES.906,    0.00412625
            301,    CARDS.915,    FRAMES.908,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            302,    CARDS.917,    FRAMES.467,    0.00412625
            303,    CARDS.917,    FRAMES.996,    0.016505
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            304,    CARDS.917,    FRAMES.1090,    0.0144
            305,    CARDS.917,    FRAMES.1091,    0.0036
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            306,    CARDS.918,    FRAMES.467,    0.00412625
            307,    CARDS.918,    FRAMES.996,    0.016505
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            308,    CARDS.918,    FRAMES.1090,    0.0144
            309,    CARDS.918,    FRAMES.1091,    0.0036
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            310,    CARDS.919,    FRAMES.457,    0.00412625
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            311,    CARDS.919,    FRAMES.691,    0.0036
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            312,    CARDS.919,    FRAMES.990,    0.016505
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            313,    CARDS.919,    FRAMES.1082,    0.0144
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            314,    CARDS.921,    FRAMES.465,    0.01237875
            315,    CARDS.921,    FRAMES.466,    0.016505
            316,    CARDS.921,    FRAMES.467,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            317,    CARDS.922,    FRAMES.465,    0.01237875
            318,    CARDS.922,    FRAMES.466,    0.016505
            319,    CARDS.922,    FRAMES.467,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            320,    CARDS.923,    FRAMES.455,    0.01237875
            321,    CARDS.923,    FRAMES.456,    0.016505
            322,    CARDS.923,    FRAMES.457,    0.01237875
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            323,    CARDS.925,    FRAMES.463,    0.016505
            324,    CARDS.925,    FRAMES.464,    0.02063125
            325,    CARDS.925,    FRAMES.465,    0.00412625
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            326,    CARDS.926,    FRAMES.463,    0.016505
            327,    CARDS.926,    FRAMES.464,    0.02063125
            328,    CARDS.926,    FRAMES.465,    0.00412625
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            329,    CARDS.927,    FRAMES.453,    0.016505
            330,    CARDS.927,    FRAMES.454,    0.02063125
            331,    CARDS.927,    FRAMES.455,    0.00412625
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            332,    CARDS.929,    FRAMES.460,    0.0082525
            333,    CARDS.929,    FRAMES.462,    0.016505
            334,    CARDS.929,    FRAMES.992,    0.016505
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            335,    CARDS.930,    FRAMES.460,    0.0082525
            336,    CARDS.930,    FRAMES.462,    0.016505
            337,    CARDS.930,    FRAMES.992,    0.016505
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            338,    CARDS.931,    FRAMES.450,    0.0082525
            339,    CARDS.931,    FRAMES.451,    0.016505
            340,    CARDS.931,    FRAMES.452,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            341,    CARDS.936,    FRAMES.459,    0.01237875
            342,    CARDS.936,    FRAMES.460,    0.0082525
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            343,    CARDS.937,    FRAMES.459,    0.01237875
            344,    CARDS.937,    FRAMES.460,    0.0082525
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            345,    CARDS.938,    FRAMES.449,    0.01237875
            346,    CARDS.938,    FRAMES.450,    0.0082525
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            347,    CARDS.940,    FRAMES.1091,    0.0108
            348,    CARDS.940,    FRAMES.1093,    0.0144
            349,    CARDS.940,    FRAMES.1094,    0.0108
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            350,    CARDS.941,    FRAMES.1091,    0.0108
            351,    CARDS.941,    FRAMES.1093,    0.0144
            352,    CARDS.941,    FRAMES.1094,    0.0108
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            353,    CARDS.942,    FRAMES.691,    0.0108
            354,    CARDS.942,    FRAMES.693,    0.0108
            355,    CARDS.942,    FRAMES.1084,    0.0144
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            356,    CARDS.960,    FRAMES.1094,    0.0036
            357,    CARDS.960,    FRAMES.1096,    0.0144
            358,    CARDS.960,    FRAMES.1097,    0.0144
            359,    CARDS.960,    FRAMES.1098,    0.0036
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            360,    CARDS.961,    FRAMES.1094,    0.0036
            361,    CARDS.961,    FRAMES.1096,    0.0144
            362,    CARDS.961,    FRAMES.1097,    0.0144
            363,    CARDS.961,    FRAMES.1098,    0.0036
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            364,    CARDS.962,    FRAMES.693,    0.0036
            365,    CARDS.962,    FRAMES.694,    0.0144
            366,    CARDS.962,    FRAMES.695,    0.0144
            367,    CARDS.962,    FRAMES.1086,    0.0036
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            368,    CARDS.983,    FRAMES.1098,    0.0108
            369,    CARDS.983,    FRAMES.1099,    0.0144
            370,    CARDS.983,    FRAMES.1100,    0.0108
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            371,    CARDS.984,    FRAMES.1098,    0.0108
            372,    CARDS.984,    FRAMES.1099,    0.0144
            373,    CARDS.984,    FRAMES.1100,    0.0108
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            374,    CARDS.985,    FRAMES.1086,    0.0108
            375,    CARDS.985,    FRAMES.1087,    0.0144
            376,    CARDS.985,    FRAMES.1088,    0.0108
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            377,    CARDS.1003,    FRAMES.817,    0.016505
            378,    CARDS.1003,    FRAMES.818,    0.00412625
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            379,    CARDS.1003,    FRAMES.1100,    0.0036
            380,    CARDS.1003,    FRAMES.1101,    0.0144
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            381,    CARDS.1004,    FRAMES.817,    0.016505
            382,    CARDS.1004,    FRAMES.818,    0.00412625
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            383,    CARDS.1004,    FRAMES.1100,    0.0036
            384,    CARDS.1004,    FRAMES.1101,    0.0144
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            385,    CARDS.1005,    FRAMES.807,    0.016505
            386,    CARDS.1005,    FRAMES.808,    0.00412625
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            387,    CARDS.1005,    FRAMES.1088,    0.0036
            388,    CARDS.1005,    FRAMES.1089,    0.0144
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            389,    CARDS.1007,    FRAMES.818,    0.01237875
            390,    CARDS.1007,    FRAMES.819,    0.016505
            391,    CARDS.1007,    FRAMES.820,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            392,    CARDS.1008,    FRAMES.818,    0.01237875
            393,    CARDS.1008,    FRAMES.819,    0.016505
            394,    CARDS.1008,    FRAMES.820,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            395,    CARDS.1009,    FRAMES.808,    0.01237875
            396,    CARDS.1009,    FRAMES.809,    0.016505
            397,    CARDS.1009,    FRAMES.810,    0.01237875
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            398,    CARDS.1011,    FRAMES.820,    0.00412625
            399,    CARDS.1011,    FRAMES.821,    0.02063125
            400,    CARDS.1011,    FRAMES.822,    0.016505
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            401,    CARDS.1012,    FRAMES.820,    0.00412625
            402,    CARDS.1012,    FRAMES.821,    0.02063125
            403,    CARDS.1012,    FRAMES.822,    0.016505
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            404,    CARDS.1013,    FRAMES.810,    0.00412625
            405,    CARDS.1013,    FRAMES.811,    0.02063125
            406,    CARDS.1013,    FRAMES.812,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            407,    CARDS.1015,    FRAMES.823,    0.016505
            408,    CARDS.1015,    FRAMES.824,    0.016505
            409,    CARDS.1015,    FRAMES.825,    0.0082525
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            410,    CARDS.1016,    FRAMES.823,    0.016505
            411,    CARDS.1016,    FRAMES.824,    0.016505
            412,    CARDS.1016,    FRAMES.825,    0.0082525
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            413,    CARDS.1017,    FRAMES.813,    0.016505
            414,    CARDS.1017,    FRAMES.814,    0.016505
            415,    CARDS.1017,    FRAMES.815,    0.0082525
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            416,    CARDS.1022,    FRAMES.825,    0.0082525
            417,    CARDS.1022,    FRAMES.826,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            418,    CARDS.1023,    FRAMES.825,    0.0082525
            419,    CARDS.1023,    FRAMES.826,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            420,    CARDS.1024,    FRAMES.815,    0.0082525
            421,    CARDS.1024,    FRAMES.816,    0.01237875
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            422,    CARDS.1025,    FRAMES.940,    0.01237875
            423,    CARDS.1025,    FRAMES.941,    0.0082525
            424,    CARDS.1026,    FRAMES.941,    0.0082525
            425,    CARDS.1026,    FRAMES.942,    0.016505
            426,    CARDS.1026,    FRAMES.943,    0.016505
            427,    CARDS.1027,    FRAMES.944,    0.016505
            428,    CARDS.1027,    FRAMES.945,    0.02063125
            429,    CARDS.1027,    FRAMES.946,    0.00412625
            430,    CARDS.1028,    FRAMES.946,    0.01237875
            431,    CARDS.1028,    FRAMES.947,    0.016505
            432,    CARDS.1028,    FRAMES.948,    0.01237875
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            433,    CARDS.1029,    FRAMES.610,    0.0144
            434,    CARDS.1029,    FRAMES.611,    0.0036
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            435,    CARDS.1029,    FRAMES.948,    0.00412625
            436,    CARDS.1029,    FRAMES.949,    0.016505
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            437,    CFC_ASSEM.866,    FRAMES.1010,    0.0024
            438,    CFC_ASSEM.866,    FRAMES.1012,    0.0144
            439,    CFC_ASSEM.866,    FRAMES.1013,    0.0072
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            440,    CFC_ASSEM.881,    FRAMES.1157,    0.01237875
            441,    CFC_ASSEM.881,    FRAMES.1159,    0.001375417
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            442,    CFC_ASSEM.890,    FRAMES.489,    0.0024
            443,    CFC_ASSEM.890,    FRAMES.1013,    0.0072
            444,    CFC_ASSEM.890,    FRAMES.1017,    0.0144
            445,    CFC_ASSEM.905,    FRAMES.489,    0.012
            446,    CFC_ASSEM.905,    FRAMES.491,    0.012
            447,    CFC_ASSEM.912,    FRAMES.491,    0.0024
            448,    CFC_ASSEM.912,    FRAMES.493,    0.0144
            449,    CFC_ASSEM.912,    FRAMES.495,    0.0072
            450,    CFC_ASSEM.919,    FRAMES.495,    0.0072
            451,    CFC_ASSEM.919,    FRAMES.497,    0.0144
            452,    CFC_ASSEM.919,    FRAMES.499,    0.0024
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            453,    CFC_ASSEM.920,    FRAMES.63,    0.001375417
            454,    CFC_ASSEM.920,    FRAMES.64,    0.01237875
            455,    CFC_ASSEM.921,    FRAMES.62,    0.01100333
            456,    CFC_ASSEM.921,    FRAMES.63,    0.016505
            457,    CFC_ASSEM.922,    FRAMES.60,    0.005501667
            458,    CFC_ASSEM.922,    FRAMES.61,    0.016505
            459,    CFC_ASSEM.922,    FRAMES.62,    0.005501667
            460,    CFC_ASSEM.923,    FRAMES.59,    0.016505
            461,    CFC_ASSEM.923,    FRAMES.60,    0.01100333
            462,    CFC_ASSEM.924,    FRAMES.57,    0.0082525
            463,    CFC_ASSEM.924,    FRAMES.58,    0.01925583
            464,    CFC_ASSEM.925,    FRAMES.55,    0.002750833
            465,    CFC_ASSEM.925,    FRAMES.56,    0.016505
            466,    CFC_ASSEM.925,    FRAMES.57,    0.0082525
            467,    CFC_ASSEM.926,    FRAMES.55,    0.01375417
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            468,    CFC_ASSEM.926,    FRAMES.499,    0.012
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            469,    CFC_ASSEM.933,    FRAMES.874,    0.0082525
            470,    CFC_ASSEM.933,    FRAMES.876,    0.016505
            471,    CFC_ASSEM.933,    FRAMES.878,    0.002750833
            472,    CFC_ASSEM.976,    FRAMES.878,    0.01375417
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            473,    CFC_ASSEM.976,    FRAMES.1010,    0.012
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            474,    CFC_ASSEM.1086,    FRAMES.1159,    0.016505
            475,    CFC_ASSEM.1086,    FRAMES.1160,    0.01100333
            476,    CFC_ASSEM.1087,    FRAMES.867,    0.016505
            477,    CFC_ASSEM.1087,    FRAMES.869,    0.005501667
            478,    CFC_ASSEM.1087,    FRAMES.1160,    0.005501667
            479,    CFC_ASSEM.1088,    FRAMES.869,    0.01100333
            480,    CFC_ASSEM.1088,    FRAMES.871,    0.016505
            481,    CFC_ASSEM.1089,    FRAMES.873,    0.01925583
            482,    CFC_ASSEM.1089,    FRAMES.874,    0.0082525
HEADER NODE DATA, SOLARCARDS_CONNECTOR
HEADER CONDUCTOR DATA, SOLARCARDS_CONNECTOR
            1,    CARDS.856,    SOLAR_PANELS.813,    0.00558
            2,    CARDS.868,    SOLAR_PANELS.811,    0.00558
            3,    CARDS.895,    SOLAR_PANELS.807,    0.00558
            4,    CARDS.907,    SOLAR_PANELS.809,    0.00558
            5,    CARDS.924,    SOLAR_PANELS.859,    0.00558
            6,    CARDS.959,    SOLAR_PANELS.861,    0.00558
            7,    CARDS.978,    SOLAR_PANELS.703,    0.00558
            8,    CARDS.1010,    SOLAR_PANELS.857,    0.00558
HEADER NODE DATA, SOLAR_CARDS
            458,    20.,    0.3944306
            461,    20.,    0.7888612
            468,    20.,    0.7888612
            474,    20.,    0.7888612
            480,    20.,    0.3944306
            486,    20.,    0.7888612
            643,    20.,    1.577722
            685,    20.,    0.7888612
            703,    20.,    0.7888612
            721,    20.,    1.577722
            727,    20.,    1.577722
            734,    20.,    1.577722
            741,    20.,    0.7888612
            748,    20.,    0.7888612
            755,    20.,    1.577722
            762,    20.,    1.577722
            769,    20.,    1.577722
            776,    20.,    0.7888612
            777,    20.,    0.7888612
            778,    20.,    1.577722
            779,    20.,    1.577722
            780,    20.,    1.577722
            781,    20.,    0.7888612
            782,    20.,    0.3944306
            783,    20.,    0.7888612
            784,    20.,    0.7888612
            785,    20.,    0.7888612
            786,    20.,    0.3944306
            795,    20.,    1.577722
            799,    20.,    1.577722
            800,    20.,    0.3944306
            801,    20.,    0.3944306
            802,    20.,    0.3944306
            803,    20.,    0.3944306
            804,    20.,    0.3944306
            805,    20.,    0.3944306
            806,    20.,    0.3944306
            807,    20.,    0.7888612
            808,    20.,    0.7888612
            809,    20.,    0.7888612
            810,    20.,    0.7888612
            811,    20.,    0.7888612
            812,    20.,    0.7888612
            813,    20.,    0.7888612
            814,    20.,    0.7888612
            815,    20.,    0.7888612
            816,    20.,    0.7888612
            817,    20.,    0.7888612
            818,    20.,    0.7888612
            819,    20.,    0.7888612
            820,    20.,    0.7888612
            821,    20.,    0.7888612
            822,    20.,    0.7888612
            823,    20.,    0.7888612
            824,    20.,    0.7888612
            825,    20.,    0.7888612
            826,    20.,    0.7888612
            827,    20.,    0.7888612
            828,    20.,    0.3944306
            829,    20.,    0.3944306
            830,    20.,    0.3944306
            831,    20.,    0.3944306
            832,    20.,    0.3944306
            833,    20.,    0.3944306
            834,    20.,    0.3944306
            835,    20.,    0.7888612
            836,    20.,    0.7888612
            837,    20.,    0.7888612
            838,    20.,    0.7888612
            839,    20.,    0.7888612
            840,    20.,    0.7888612
            841,    20.,    0.7888612
            842,    20.,    1.577722
            843,    20.,    1.577722
            844,    20.,    1.577722
            845,    20.,    1.577722
            846,    20.,    1.577722
            847,    20.,    1.577722
            848,    20.,    1.577722
            849,    20.,    0.7888612
            850,    20.,    0.7888612
            851,    20.,    0.7888612
            852,    20.,    0.7888612
            853,    20.,    0.7888612
            854,    20.,    0.7888612
            855,    20.,    0.7888612
            856,    20.,    0.7888612
            857,    20.,    0.7888612
            858,    20.,    0.7888612
            859,    20.,    0.7888612
            860,    20.,    0.7888612
            861,    20.,    0.7888612
            862,    20.,    0.7888612
            863,    20.,    1.577722
            864,    20.,    1.577722
            865,    20.,    1.577722
            866,    20.,    1.577722
            867,    20.,    1.577722
            868,    20.,    1.577722
            869,    20.,    1.577722
            870,    20.,    1.577722
            871,    20.,    1.577722
            872,    20.,    1.577722
            873,    20.,    1.577722
            874,    20.,    1.577722
            875,    20.,    1.577722
            876,    20.,    1.577722
            877,    20.,    1.577722
            878,    20.,    1.577722
            879,    20.,    1.577722
            880,    20.,    1.577722
            881,    20.,    1.577722
            882,    20.,    1.577722
            883,    20.,    1.577722
            884,    20.,    0.7888612
            885,    20.,    0.7888612
            886,    20.,    0.7888612
            887,    20.,    0.7888612
            888,    20.,    0.7888612
            889,    20.,    0.7888612
            890,    20.,    0.7888612
            891,    20.,    0.7888612
            892,    20.,    0.7888612
            893,    20.,    0.7888612
            894,    20.,    0.7888612
            895,    20.,    0.7888612
            896,    20.,    0.7888612
            897,    20.,    0.7888612
            898,    20.,    1.577722
            899,    20.,    1.577722
            900,    20.,    1.577722
            901,    20.,    1.577722
            902,    20.,    1.577722
            903,    20.,    1.577722
            904,    20.,    1.577722
            905,    20.,    1.577722
            906,    20.,    1.577722
            907,    20.,    1.577722
            908,    20.,    1.577722
            909,    20.,    1.577722
            910,    20.,    1.577722
            911,    20.,    1.577722
            912,    20.,    1.577722
            913,    20.,    1.577722
            914,    20.,    1.577722
            915,    20.,    1.577722
            916,    20.,    1.577722
            917,    20.,    1.577722
            918,    20.,    1.577722
            919,    20.,    0.7888612
            920,    20.,    0.7888612
            921,    20.,    0.7888612
            922,    20.,    0.7888612
            923,    20.,    0.7888612
            924,    20.,    0.7888612
            925,    20.,    0.7888612
            926,    20.,    0.7888612
            927,    20.,    0.7888612
            928,    20.,    0.7888612
            929,    20.,    0.7888612
            930,    20.,    0.7888612
            931,    20.,    0.7888612
            932,    20.,    0.7888612
            933,    20.,    1.577722
            934,    20.,    1.577722
            935,    20.,    1.577722
            936,    20.,    1.577722
            937,    20.,    1.577722
            938,    20.,    1.577722
            939,    20.,    1.577722
            940,    20.,    1.577722
            941,    20.,    1.577722
            942,    20.,    1.577722
            943,    20.,    1.577722
            944,    20.,    1.577722
            945,    20.,    1.577722
            946,    20.,    1.577722
            947,    20.,    1.577722
            948,    20.,    1.577722
            949,    20.,    1.577722
            950,    20.,    1.577722
            951,    20.,    1.577722
            952,    20.,    1.577722
            953,    20.,    1.577722
            954,    20.,    0.7888612
            955,    20.,    0.7888612
            956,    20.,    0.7888612
            957,    20.,    0.7888612
            958,    20.,    0.7888612
            959,    20.,    0.7888612
            960,    20.,    0.7888612
            961,    20.,    0.3944306
            962,    20.,    0.3944306
            963,    20.,    0.3944306
            964,    20.,    0.3944306
            965,    20.,    0.3944306
            966,    20.,    0.3944306
            967,    20.,    0.3944306
            968,    20.,    0.7888612
            969,    20.,    0.7888612
            970,    20.,    0.7888612
            971,    20.,    0.7888612
            972,    20.,    0.7888612
            973,    20.,    0.7888612
            974,    20.,    0.7888612
            975,    20.,    0.7888612
            976,    20.,    0.7888612
            977,    20.,    0.7888612
            978,    20.,    0.7888612
            979,    20.,    0.7888612
            980,    20.,    0.7888612
            981,    20.,    0.7888612
            982,    20.,    0.7888612
            983,    20.,    0.7888612
            984,    20.,    0.7888612
            985,    20.,    0.7888612
            986,    20.,    0.7888612
            987,    20.,    0.7888612
            988,    20.,    0.7888612
            989,    20.,    0.3944306
            990,    20.,    0.3944306
            991,    20.,    0.3944306
            992,    20.,    0.3944306
            993,    20.,    0.3944306
            994,    20.,    0.3944306
            995,    20.,    0.3944306
            996,    20.,    1.577722
            997,    20.,    1.577722
            998,    20.,    1.577722
            999,    20.,    1.577722
            1000,    20.,    1.577722
            1001,    20.,    1.577722
            1002,    20.,    1.577722
            1003,    20.,    1.577722
            1004,    20.,    1.577722
            1005,    20.,    1.577722
            1006,    20.,    1.577722
            1007,    20.,    1.577722
            1008,    20.,    1.577722
            1009,    20.,    1.577722
HEADER CONDUCTOR DATA, SOLAR_CARDS
C Contact - Edge Contactor- -Z PCB to Soar (+x)[SOLAR_CARDS][0]::1ACC
            1,    CARDS.853,    FRAMES.993,    0.0108
            2,    CARDS.853,    FRAMES.994,    0.0144
            3,    CARDS.853,    FRAMES.995,    0.0108
            4,    CARDS.868,    FRAMES.995,    0.0036
            5,    CARDS.868,    FRAMES.997,    0.0144
            6,    CARDS.868,    FRAMES.999,    0.0144
            7,    CARDS.868,    FRAMES.1000,    0.0036
C Contact - Edge Contactor- -Z PCB to Solar (+/-y)[SOLAR_CARDS][0]::1ACD
            8,    CARDS.880,    FRAMES.188,    0.0082525
            9,    CARDS.880,    FRAMES.1153,    0.01237875
C Contact - Edge Contactor- -Z PCB to Soar (+x)[SOLAR_CARDS][0]::1ACC
            10,    CARDS.886,    FRAMES.1000,    0.0108
            11,    CARDS.886,    FRAMES.1003,    0.0144
            12,    CARDS.886,    FRAMES.1004,    0.0108
C Contact - Edge Contactor- -Z PCB to Solar (+/-y)[SOLAR_CARDS][0]::1ACD
            13,    CARDS.889,    FRAMES.53,    0.0082525
            14,    CARDS.889,    FRAMES.54,    0.01237875
            15,    CARDS.892,    FRAMES.51,    0.016505
            16,    CARDS.892,    FRAMES.52,    0.016505
            17,    CARDS.892,    FRAMES.53,    0.0082525
            18,    CARDS.895,    FRAMES.48,    0.00412625
            19,    CARDS.895,    FRAMES.49,    0.02063125
            20,    CARDS.895,    FRAMES.50,    0.016505
            21,    CARDS.898,    FRAMES.46,    0.01237875
            22,    CARDS.898,    FRAMES.47,    0.016505
            23,    CARDS.898,    FRAMES.48,    0.01237875
            24,    CARDS.901,    FRAMES.45,    0.016505
            25,    CARDS.901,    FRAMES.46,    0.00412625
C Contact - Edge Contactor- -Z PCB to Soar (+x)[SOLAR_CARDS][0]::1ACC
            26,    CARDS.901,    FRAMES.1004,    0.0036
            27,    CARDS.901,    FRAMES.1006,    0.0144
C Contact - Edge Contactor- -Z PCB to Solar (+/-y)[SOLAR_CARDS][0]::1ACD
            28,    CARDS.904,    FRAMES.188,    0.0082525
            29,    CARDS.904,    FRAMES.195,    0.016505
            30,    CARDS.904,    FRAMES.202,    0.016505
            31,    CARDS.907,    FRAMES.209,    0.016505
            32,    CARDS.907,    FRAMES.216,    0.02063125
            33,    CARDS.907,    FRAMES.223,    0.00412625
            34,    CARDS.910,    FRAMES.223,    0.01237875
            35,    CARDS.910,    FRAMES.230,    0.016505
            36,    CARDS.910,    FRAMES.237,    0.01237875
            37,    CARDS.913,    FRAMES.237,    0.00412625
            38,    CARDS.913,    FRAMES.244,    0.016505
C Contact - Edge Contactor- -Z PCB to Soar (+x)[SOLAR_CARDS][0]::1ACC
            39,    CARDS.913,    FRAMES.993,    0.0036
            40,    CARDS.913,    FRAMES.1050,    0.0144
C Contact - Edge Contactor-+Z PCB to Solar (+/-y)[SOLAR_CARDS][2]::1ACB
            41,    CARDS.916,    FRAMES.477,    0.00412625
            42,    CARDS.916,    FRAMES.478,    0.016505
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][3]::1AC9
            43,    CARDS.916,    FRAMES.1102,    0.0144
            44,    CARDS.916,    FRAMES.1103,    0.0036
C Contact - Edge Contactor-+Z PCB to Solar (+/-y)[SOLAR_CARDS][2]::1ACB
            45,    CARDS.920,    FRAMES.475,    0.01237875
            46,    CARDS.920,    FRAMES.476,    0.016505
            47,    CARDS.920,    FRAMES.477,    0.01237875
            48,    CARDS.924,    FRAMES.473,    0.016505
            49,    CARDS.924,    FRAMES.475,    0.00412625
            50,    CARDS.924,    FRAMES.1002,    0.02063125
            51,    CARDS.928,    FRAMES.470,    0.0082525
            52,    CARDS.928,    FRAMES.471,    0.016505
            53,    CARDS.928,    FRAMES.472,    0.016505
            54,    CARDS.935,    FRAMES.469,    0.01237875
            55,    CARDS.935,    FRAMES.470,    0.0082525
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][3]::1AC9
            56,    CARDS.939,    FRAMES.1103,    0.0108
            57,    CARDS.939,    FRAMES.1104,    0.0144
            58,    CARDS.939,    FRAMES.1105,    0.0108
            59,    CARDS.959,    FRAMES.1105,    0.0036
            60,    CARDS.959,    FRAMES.1106,    0.0144
            61,    CARDS.959,    FRAMES.1107,    0.0144
            62,    CARDS.959,    FRAMES.1108,    0.0036
            63,    CARDS.982,    FRAMES.1108,    0.0108
            64,    CARDS.982,    FRAMES.1109,    0.0144
            65,    CARDS.982,    FRAMES.1110,    0.0108
C Contact - Edge Contactor-+Z PCB to Solar (+/-y)[SOLAR_CARDS][2]::1ACB
            66,    CARDS.1002,    FRAMES.827,    0.016505
            67,    CARDS.1002,    FRAMES.828,    0.00412625
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][3]::1AC9
            68,    CARDS.1002,    FRAMES.1110,    0.0036
            69,    CARDS.1002,    FRAMES.1111,    0.0144
C Contact - Edge Contactor-+Z PCB to Solar (+/-y)[SOLAR_CARDS][2]::1ACB
            70,    CARDS.1006,    FRAMES.828,    0.01237875
            71,    CARDS.1006,    FRAMES.829,    0.016505
            72,    CARDS.1006,    FRAMES.830,    0.01237875
            73,    CARDS.1010,    FRAMES.830,    0.00412625
            74,    CARDS.1010,    FRAMES.831,    0.02063125
            75,    CARDS.1010,    FRAMES.832,    0.016505
            76,    CARDS.1014,    FRAMES.833,    0.016505
            77,    CARDS.1014,    FRAMES.834,    0.016505
            78,    CARDS.1014,    FRAMES.835,    0.0082525
            79,    CARDS.1021,    FRAMES.835,    0.0082525
            80,    CARDS.1021,    FRAMES.836,    0.01237875
            81,    FRAMES.32,    SOLAR_CARDS.811,    3.09
            82,    FRAMES.65,    SOLAR_CARDS.860,    3.09
            83,    FRAMES.242,    SOLAR_CARDS.856,    3.09
            84,    FRAMES.257,    SOLAR_CARDS.884,    3.09
            85,    FRAMES.278,    SOLAR_CARDS.891,    3.09
            86,    FRAMES.287,    SOLAR_CARDS.919,    3.09
            87,    FRAMES.308,    SOLAR_CARDS.961,    3.09
            88,    FRAMES.311,    SOLAR_CARDS.968,    3.09
            89,    FRAMES.314,    SOLAR_CARDS.982,    3.09
            90,    FRAMES.317,    SOLAR_CARDS.989,    3.09
            91,    FRAMES.318,    SOLAR_CARDS.801,    3.09
            92,    FRAMES.321,    SOLAR_CARDS.808,    3.09
            93,    FRAMES.324,    SOLAR_CARDS.822,    3.09
            94,    FRAMES.327,    SOLAR_CARDS.829,    3.09
            95,    FRAMES.348,    SOLAR_CARDS.857,    3.09
            96,    FRAMES.357,    SOLAR_CARDS.885,    3.09
            97,    FRAMES.387,    SOLAR_CARDS.920,    3.09
            98,    FRAMES.388,    SOLAR_CARDS.892,    3.09
            99,    FRAMES.408,    SOLAR_CARDS.962,    3.09
            100,    FRAMES.411,    SOLAR_CARDS.969,    3.09
            101,    FRAMES.414,    SOLAR_CARDS.983,    3.09
            102,    FRAMES.417,    SOLAR_CARDS.990,    3.09
            103,    FRAMES.419,    SOLAR_CARDS.887,    3.09
            104,    FRAMES.428,    SOLAR_CARDS.859,    3.09
            105,    FRAMES.449,    SOLAR_CARDS.922,    3.09
            106,    FRAMES.458,    SOLAR_CARDS.800,    3.09
            107,    FRAMES.474,    SOLAR_CARDS.807,    3.09
            108,    FRAMES.479,    SOLAR_CARDS.992,    3.09
            109,    FRAMES.482,    SOLAR_CARDS.985,    3.09
            110,    FRAMES.485,    SOLAR_CARDS.971,    3.09
            111,    FRAMES.488,    SOLAR_CARDS.964,    3.09
            112,    FRAMES.501,    SOLAR_CARDS.890,    3.09
            113,    FRAMES.534,    SOLAR_CARDS.862,    3.09
            114,    FRAMES.590,    SOLAR_CARDS.925,    3.09
            115,    FRAMES.599,    SOLAR_CARDS.897,    3.09
            116,    FRAMES.606,    SOLAR_CARDS.804,    3.09
            117,    FRAMES.620,    SOLAR_CARDS.995,    3.09
            118,    FRAMES.623,    SOLAR_CARDS.988,    3.09
            119,    FRAMES.629,    SOLAR_CARDS.967,    3.09
            120,    FRAMES.630,    SOLAR_CARDS.480,    3.09
            121,    FRAMES.633,    SOLAR_CARDS.474,    3.09
            122,    FRAMES.636,    SOLAR_CARDS.888,    3.09
            123,    FRAMES.639,    SOLAR_CARDS.458,    3.09
            124,    FRAMES.643,    SOLAR_CARDS.821,    3.09
            125,    FRAMES.669,    SOLAR_CARDS.703,    3.09
            126,    FRAMES.674,    SOLAR_CARDS.830,    3.09
            127,    FRAMES.683,    SOLAR_CARDS.825,    3.09
            128,    FRAMES.685,    SOLAR_CARDS.828,    3.09
            129,    FRAMES.707,    SOLAR_CARDS.895,    3.09
            130,    FRAMES.716,    SOLAR_CARDS.923,    3.09
            131,    FRAMES.737,    SOLAR_CARDS.965,    3.09
            132,    FRAMES.740,    SOLAR_CARDS.972,    3.09
            133,    FRAMES.743,    SOLAR_CARDS.986,    3.09
            134,    FRAMES.746,    SOLAR_CARDS.993,    3.09
            135,    FRAMES.747,    SOLAR_CARDS.805,    3.09
            136,    FRAMES.750,    SOLAR_CARDS.812,    3.09
            137,    FRAMES.753,    SOLAR_CARDS.826,    3.09
            138,    FRAMES.756,    SOLAR_CARDS.833,    3.09
            139,    FRAMES.777,    SOLAR_CARDS.861,    3.09
            140,    FRAMES.786,    SOLAR_CARDS.889,    3.09
            141,    FRAMES.807,    SOLAR_CARDS.896,    3.09
            142,    FRAMES.826,    SOLAR_CARDS.924,    3.09
            143,    FRAMES.837,    SOLAR_CARDS.966,    3.09
            144,    FRAMES.840,    SOLAR_CARDS.973,    3.09
            145,    FRAMES.843,    SOLAR_CARDS.987,    3.09
            146,    FRAMES.846,    SOLAR_CARDS.994,    3.09
            147,    FRAMES.880,    SOLAR_CARDS.886,    3.09
            148,    FRAMES.892,    SOLAR_CARDS.858,    3.09
            149,    FRAMES.919,    SOLAR_CARDS.921,    3.09
            150,    FRAMES.929,    SOLAR_CARDS.893,    3.09
            151,    FRAMES.950,    SOLAR_CARDS.991,    3.09
            152,    FRAMES.953,    SOLAR_CARDS.984,    3.09
            153,    FRAMES.956,    SOLAR_CARDS.970,    3.09
            154,    FRAMES.959,    SOLAR_CARDS.963,    3.09
            155,    FRAMES.960,    SOLAR_CARDS.831,    3.09
            156,    FRAMES.963,    SOLAR_CARDS.824,    3.09
            157,    FRAMES.966,    SOLAR_CARDS.810,    3.09
            158,    FRAMES.969,    SOLAR_CARDS.803,    3.09
            159,    FRAMES.990,    SOLAR_CARDS.894,    3.09
            160,    FRAMES.1048,    SOLAR_CARDS.806,    3.09
            161,    FRAMES.1049,    SOLAR_CARDS.974,    3.09
            162,    FRAMES.1053,    SOLAR_CARDS.461,    3.09
            163,    FRAMES.1063,    SOLAR_CARDS.827,    3.09
            164,    FRAMES.1065,    SOLAR_CARDS.741,    3.09
            165,    FRAMES.1082,    SOLAR_CARDS.776,    3.09
            166,    FRAMES.1089,    SOLAR_CARDS.748,    3.09
            167,    FRAMES.1113,    SOLAR_CARDS.786,    3.09
            168,    FRAMES.1117,    SOLAR_CARDS.785,    3.09
            169,    FRAMES.1120,    SOLAR_CARDS.783,    3.09
            170,    FRAMES.1124,    SOLAR_CARDS.782,    3.09
            171,    FRAMES.1126,    SOLAR_CARDS.834,    3.09
            172,    FRAMES.1129,    SOLAR_CARDS.832,    3.09
            173,    FRAMES.1135,    SOLAR_CARDS.823,    3.09
            174,    FRAMES.1138,    SOLAR_CARDS.809,    3.09
            175,    FRAMES.1149,    SOLAR_CARDS.802,    3.09
            176,    FRAMES.1163,    SOLAR_CARDS.813,    3.09
            177,    SOLAR_CARDS.458,    SOLAR_CARDS.461,    0.009253012
            178,    SOLAR_CARDS.458,    SOLAR_CARDS.486,    0.009959999
            179,    SOLAR_CARDS.461,    SOLAR_CARDS.468,    0.009253012
            180,    SOLAR_CARDS.461,    SOLAR_CARDS.643,    0.01992
            181,    SOLAR_CARDS.468,    SOLAR_CARDS.474,    0.009253012
            182,    SOLAR_CARDS.468,    SOLAR_CARDS.795,    0.01992
            183,    SOLAR_CARDS.474,    SOLAR_CARDS.480,    0.009253012
            184,    SOLAR_CARDS.474,    SOLAR_CARDS.799,    0.01992
            185,    SOLAR_CARDS.480,    SOLAR_CARDS.685,    0.009959999
            186,    SOLAR_CARDS.486,    SOLAR_CARDS.643,    0.01850602
            187,    SOLAR_CARDS.486,    SOLAR_CARDS.703,    0.009959999
            188,    SOLAR_CARDS.643,    SOLAR_CARDS.721,    0.01992
            189,    SOLAR_CARDS.643,    SOLAR_CARDS.795,    0.01850602
            190,    SOLAR_CARDS.685,    SOLAR_CARDS.741,    0.009959999
            191,    SOLAR_CARDS.685,    SOLAR_CARDS.799,    0.01850602
            192,    SOLAR_CARDS.703,    SOLAR_CARDS.721,    0.01850602
            193,    SOLAR_CARDS.703,    SOLAR_CARDS.748,    0.009959999
            194,    SOLAR_CARDS.721,    SOLAR_CARDS.727,    0.01850602
            195,    SOLAR_CARDS.721,    SOLAR_CARDS.755,    0.01992
            196,    SOLAR_CARDS.727,    SOLAR_CARDS.734,    0.01850602
            197,    SOLAR_CARDS.727,    SOLAR_CARDS.762,    0.01992
            198,    SOLAR_CARDS.727,    SOLAR_CARDS.795,    0.01992
            199,    SOLAR_CARDS.734,    SOLAR_CARDS.741,    0.01850602
            200,    SOLAR_CARDS.734,    SOLAR_CARDS.769,    0.01992
            201,    SOLAR_CARDS.734,    SOLAR_CARDS.799,    0.01992
            202,    SOLAR_CARDS.741,    SOLAR_CARDS.776,    0.009959999
            203,    SOLAR_CARDS.748,    SOLAR_CARDS.755,    0.01850602
            204,    SOLAR_CARDS.748,    SOLAR_CARDS.777,    0.009959999
            205,    SOLAR_CARDS.755,    SOLAR_CARDS.762,    0.01850602
            206,    SOLAR_CARDS.755,    SOLAR_CARDS.778,    0.01992
            207,    SOLAR_CARDS.762,    SOLAR_CARDS.769,    0.01850602
            208,    SOLAR_CARDS.762,    SOLAR_CARDS.779,    0.01992
            209,    SOLAR_CARDS.769,    SOLAR_CARDS.776,    0.01850602
            210,    SOLAR_CARDS.769,    SOLAR_CARDS.780,    0.01992
            211,    SOLAR_CARDS.776,    SOLAR_CARDS.781,    0.009959999
            212,    SOLAR_CARDS.777,    SOLAR_CARDS.778,    0.01850602
            213,    SOLAR_CARDS.777,    SOLAR_CARDS.782,    0.009959999
            214,    SOLAR_CARDS.778,    SOLAR_CARDS.779,    0.01850602
            215,    SOLAR_CARDS.778,    SOLAR_CARDS.783,    0.01992
            216,    SOLAR_CARDS.779,    SOLAR_CARDS.780,    0.01850602
            217,    SOLAR_CARDS.779,    SOLAR_CARDS.784,    0.01992
            218,    SOLAR_CARDS.780,    SOLAR_CARDS.781,    0.01850602
            219,    SOLAR_CARDS.780,    SOLAR_CARDS.785,    0.01992
            220,    SOLAR_CARDS.781,    SOLAR_CARDS.786,    0.009959999
            221,    SOLAR_CARDS.782,    SOLAR_CARDS.783,    0.009253012
            222,    SOLAR_CARDS.783,    SOLAR_CARDS.784,    0.009253012
            223,    SOLAR_CARDS.784,    SOLAR_CARDS.785,    0.009253012
            224,    SOLAR_CARDS.785,    SOLAR_CARDS.786,    0.009253012
            225,    SOLAR_CARDS.795,    SOLAR_CARDS.799,    0.01850602
            226,    SOLAR_CARDS.800,    SOLAR_CARDS.807,    0.009253012
            227,    SOLAR_CARDS.800,    SOLAR_CARDS.835,    0.009959999
            228,    SOLAR_CARDS.801,    SOLAR_CARDS.808,    0.009253012
            229,    SOLAR_CARDS.801,    SOLAR_CARDS.836,    0.009959999
            230,    SOLAR_CARDS.802,    SOLAR_CARDS.809,    0.009253012
            231,    SOLAR_CARDS.802,    SOLAR_CARDS.837,    0.009959999
            232,    SOLAR_CARDS.803,    SOLAR_CARDS.810,    0.009253012
            233,    SOLAR_CARDS.803,    SOLAR_CARDS.838,    0.009959999
            234,    SOLAR_CARDS.804,    SOLAR_CARDS.811,    0.009253012
            235,    SOLAR_CARDS.804,    SOLAR_CARDS.839,    0.009959999
            236,    SOLAR_CARDS.805,    SOLAR_CARDS.812,    0.009253012
            237,    SOLAR_CARDS.805,    SOLAR_CARDS.840,    0.009959999
            238,    SOLAR_CARDS.806,    SOLAR_CARDS.813,    0.009253012
            239,    SOLAR_CARDS.806,    SOLAR_CARDS.841,    0.009959999
            240,    SOLAR_CARDS.807,    SOLAR_CARDS.814,    0.009253012
            241,    SOLAR_CARDS.807,    SOLAR_CARDS.842,    0.01992
            242,    SOLAR_CARDS.808,    SOLAR_CARDS.815,    0.009253012
            243,    SOLAR_CARDS.808,    SOLAR_CARDS.843,    0.01992
            244,    SOLAR_CARDS.809,    SOLAR_CARDS.816,    0.009253012
            245,    SOLAR_CARDS.809,    SOLAR_CARDS.844,    0.01992
            246,    SOLAR_CARDS.810,    SOLAR_CARDS.817,    0.009253012
            247,    SOLAR_CARDS.810,    SOLAR_CARDS.845,    0.01992
            248,    SOLAR_CARDS.811,    SOLAR_CARDS.818,    0.009253012
            249,    SOLAR_CARDS.811,    SOLAR_CARDS.846,    0.01992
            250,    SOLAR_CARDS.812,    SOLAR_CARDS.819,    0.009253012
            251,    SOLAR_CARDS.812,    SOLAR_CARDS.847,    0.01992
            252,    SOLAR_CARDS.813,    SOLAR_CARDS.820,    0.009253012
            253,    SOLAR_CARDS.813,    SOLAR_CARDS.848,    0.01992
            254,    SOLAR_CARDS.814,    SOLAR_CARDS.821,    0.009253012
            255,    SOLAR_CARDS.814,    SOLAR_CARDS.996,    0.01992
            256,    SOLAR_CARDS.815,    SOLAR_CARDS.822,    0.009253012
            257,    SOLAR_CARDS.815,    SOLAR_CARDS.997,    0.01992
            258,    SOLAR_CARDS.816,    SOLAR_CARDS.823,    0.009253012
            259,    SOLAR_CARDS.816,    SOLAR_CARDS.998,    0.01992
            260,    SOLAR_CARDS.817,    SOLAR_CARDS.824,    0.009253012
            261,    SOLAR_CARDS.817,    SOLAR_CARDS.999,    0.01992
            262,    SOLAR_CARDS.818,    SOLAR_CARDS.825,    0.009253012
            263,    SOLAR_CARDS.818,    SOLAR_CARDS.1000,    0.01992
            264,    SOLAR_CARDS.819,    SOLAR_CARDS.826,    0.009253012
            265,    SOLAR_CARDS.819,    SOLAR_CARDS.1001,    0.01992
            266,    SOLAR_CARDS.820,    SOLAR_CARDS.827,    0.009253012
            267,    SOLAR_CARDS.820,    SOLAR_CARDS.1002,    0.01992
            268,    SOLAR_CARDS.821,    SOLAR_CARDS.828,    0.009253012
            269,    SOLAR_CARDS.821,    SOLAR_CARDS.1003,    0.01992
            270,    SOLAR_CARDS.822,    SOLAR_CARDS.829,    0.009253012
            271,    SOLAR_CARDS.822,    SOLAR_CARDS.1004,    0.01992
            272,    SOLAR_CARDS.823,    SOLAR_CARDS.830,    0.009253012
            273,    SOLAR_CARDS.823,    SOLAR_CARDS.1005,    0.01992
            274,    SOLAR_CARDS.824,    SOLAR_CARDS.831,    0.009253012
            275,    SOLAR_CARDS.824,    SOLAR_CARDS.1006,    0.01992
            276,    SOLAR_CARDS.825,    SOLAR_CARDS.832,    0.009253012
            277,    SOLAR_CARDS.825,    SOLAR_CARDS.1007,    0.01992
            278,    SOLAR_CARDS.826,    SOLAR_CARDS.833,    0.009253012
            279,    SOLAR_CARDS.826,    SOLAR_CARDS.1008,    0.01992
            280,    SOLAR_CARDS.827,    SOLAR_CARDS.834,    0.009253012
            281,    SOLAR_CARDS.827,    SOLAR_CARDS.1009,    0.01992
            282,    SOLAR_CARDS.828,    SOLAR_CARDS.849,    0.009959999
            283,    SOLAR_CARDS.829,    SOLAR_CARDS.850,    0.009959999
            284,    SOLAR_CARDS.830,    SOLAR_CARDS.851,    0.009959999
            285,    SOLAR_CARDS.831,    SOLAR_CARDS.852,    0.009959999
            286,    SOLAR_CARDS.832,    SOLAR_CARDS.853,    0.009959999
            287,    SOLAR_CARDS.833,    SOLAR_CARDS.854,    0.009959999
            288,    SOLAR_CARDS.834,    SOLAR_CARDS.855,    0.009959999
            289,    SOLAR_CARDS.835,    SOLAR_CARDS.842,    0.01850602
            290,    SOLAR_CARDS.835,    SOLAR_CARDS.856,    0.009959999
            291,    SOLAR_CARDS.836,    SOLAR_CARDS.843,    0.01850602
            292,    SOLAR_CARDS.836,    SOLAR_CARDS.857,    0.009959999
            293,    SOLAR_CARDS.837,    SOLAR_CARDS.844,    0.01850602
            294,    SOLAR_CARDS.837,    SOLAR_CARDS.858,    0.009959999
            295,    SOLAR_CARDS.838,    SOLAR_CARDS.845,    0.01850602
            296,    SOLAR_CARDS.838,    SOLAR_CARDS.859,    0.009959999
            297,    SOLAR_CARDS.839,    SOLAR_CARDS.846,    0.01850602
            298,    SOLAR_CARDS.839,    SOLAR_CARDS.860,    0.009959999
            299,    SOLAR_CARDS.840,    SOLAR_CARDS.847,    0.01850602
            300,    SOLAR_CARDS.840,    SOLAR_CARDS.861,    0.009959999
            301,    SOLAR_CARDS.841,    SOLAR_CARDS.848,    0.01850602
            302,    SOLAR_CARDS.841,    SOLAR_CARDS.862,    0.009959999
            303,    SOLAR_CARDS.842,    SOLAR_CARDS.863,    0.01992
            304,    SOLAR_CARDS.842,    SOLAR_CARDS.996,    0.01850602
            305,    SOLAR_CARDS.843,    SOLAR_CARDS.864,    0.01992
            306,    SOLAR_CARDS.843,    SOLAR_CARDS.997,    0.01850602
            307,    SOLAR_CARDS.844,    SOLAR_CARDS.865,    0.01992
            308,    SOLAR_CARDS.844,    SOLAR_CARDS.998,    0.01850602
            309,    SOLAR_CARDS.845,    SOLAR_CARDS.866,    0.01992
            310,    SOLAR_CARDS.845,    SOLAR_CARDS.999,    0.01850602
            311,    SOLAR_CARDS.846,    SOLAR_CARDS.867,    0.01992
            312,    SOLAR_CARDS.846,    SOLAR_CARDS.1000,    0.01850602
            313,    SOLAR_CARDS.847,    SOLAR_CARDS.868,    0.01992
            314,    SOLAR_CARDS.847,    SOLAR_CARDS.1001,    0.01850602
            315,    SOLAR_CARDS.848,    SOLAR_CARDS.869,    0.01992
            316,    SOLAR_CARDS.848,    SOLAR_CARDS.1002,    0.01850602
            317,    SOLAR_CARDS.849,    SOLAR_CARDS.884,    0.009959999
            318,    SOLAR_CARDS.849,    SOLAR_CARDS.1003,    0.01850602
            319,    SOLAR_CARDS.850,    SOLAR_CARDS.885,    0.009959999
            320,    SOLAR_CARDS.850,    SOLAR_CARDS.1004,    0.01850602
            321,    SOLAR_CARDS.851,    SOLAR_CARDS.886,    0.009959999
            322,    SOLAR_CARDS.851,    SOLAR_CARDS.1005,    0.01850602
            323,    SOLAR_CARDS.852,    SOLAR_CARDS.887,    0.009959999
            324,    SOLAR_CARDS.852,    SOLAR_CARDS.1006,    0.01850602
            325,    SOLAR_CARDS.853,    SOLAR_CARDS.888,    0.009959999
            326,    SOLAR_CARDS.853,    SOLAR_CARDS.1007,    0.01850602
            327,    SOLAR_CARDS.854,    SOLAR_CARDS.889,    0.009959999
            328,    SOLAR_CARDS.854,    SOLAR_CARDS.1008,    0.01850602
            329,    SOLAR_CARDS.855,    SOLAR_CARDS.890,    0.009959999
            330,    SOLAR_CARDS.855,    SOLAR_CARDS.1009,    0.01850602
            331,    SOLAR_CARDS.856,    SOLAR_CARDS.863,    0.01850602
            332,    SOLAR_CARDS.856,    SOLAR_CARDS.891,    0.009959999
            333,    SOLAR_CARDS.857,    SOLAR_CARDS.864,    0.01850602
            334,    SOLAR_CARDS.857,    SOLAR_CARDS.892,    0.009959999
            335,    SOLAR_CARDS.858,    SOLAR_CARDS.865,    0.01850602
            336,    SOLAR_CARDS.858,    SOLAR_CARDS.893,    0.009959999
            337,    SOLAR_CARDS.859,    SOLAR_CARDS.866,    0.01850602
            338,    SOLAR_CARDS.859,    SOLAR_CARDS.894,    0.009959999
            339,    SOLAR_CARDS.860,    SOLAR_CARDS.867,    0.01850602
            340,    SOLAR_CARDS.860,    SOLAR_CARDS.895,    0.009959999
            341,    SOLAR_CARDS.861,    SOLAR_CARDS.868,    0.01850602
            342,    SOLAR_CARDS.861,    SOLAR_CARDS.896,    0.009959999
            343,    SOLAR_CARDS.862,    SOLAR_CARDS.869,    0.01850602
            344,    SOLAR_CARDS.862,    SOLAR_CARDS.897,    0.009959999
            345,    SOLAR_CARDS.863,    SOLAR_CARDS.870,    0.01850602
            346,    SOLAR_CARDS.863,    SOLAR_CARDS.898,    0.01992
            347,    SOLAR_CARDS.864,    SOLAR_CARDS.871,    0.01850602
            348,    SOLAR_CARDS.864,    SOLAR_CARDS.899,    0.01992
            349,    SOLAR_CARDS.865,    SOLAR_CARDS.872,    0.01850602
            350,    SOLAR_CARDS.865,    SOLAR_CARDS.900,    0.01992
            351,    SOLAR_CARDS.866,    SOLAR_CARDS.873,    0.01850602
            352,    SOLAR_CARDS.866,    SOLAR_CARDS.901,    0.01992
            353,    SOLAR_CARDS.867,    SOLAR_CARDS.874,    0.01850602
            354,    SOLAR_CARDS.867,    SOLAR_CARDS.902,    0.01992
            355,    SOLAR_CARDS.868,    SOLAR_CARDS.875,    0.01850602
            356,    SOLAR_CARDS.868,    SOLAR_CARDS.903,    0.01992
            357,    SOLAR_CARDS.869,    SOLAR_CARDS.876,    0.01850602
            358,    SOLAR_CARDS.869,    SOLAR_CARDS.904,    0.01992
            359,    SOLAR_CARDS.870,    SOLAR_CARDS.877,    0.01850602
            360,    SOLAR_CARDS.870,    SOLAR_CARDS.905,    0.01992
            361,    SOLAR_CARDS.870,    SOLAR_CARDS.996,    0.01992
            362,    SOLAR_CARDS.871,    SOLAR_CARDS.878,    0.01850602
            363,    SOLAR_CARDS.871,    SOLAR_CARDS.906,    0.01992
            364,    SOLAR_CARDS.871,    SOLAR_CARDS.997,    0.01992
            365,    SOLAR_CARDS.872,    SOLAR_CARDS.879,    0.01850602
            366,    SOLAR_CARDS.872,    SOLAR_CARDS.907,    0.01992
            367,    SOLAR_CARDS.872,    SOLAR_CARDS.998,    0.01992
            368,    SOLAR_CARDS.873,    SOLAR_CARDS.880,    0.01850602
            369,    SOLAR_CARDS.873,    SOLAR_CARDS.908,    0.01992
            370,    SOLAR_CARDS.873,    SOLAR_CARDS.999,    0.01992
            371,    SOLAR_CARDS.874,    SOLAR_CARDS.881,    0.01850602
            372,    SOLAR_CARDS.874,    SOLAR_CARDS.909,    0.01992
            373,    SOLAR_CARDS.874,    SOLAR_CARDS.1000,    0.01992
            374,    SOLAR_CARDS.875,    SOLAR_CARDS.882,    0.01850602
            375,    SOLAR_CARDS.875,    SOLAR_CARDS.910,    0.01992
            376,    SOLAR_CARDS.875,    SOLAR_CARDS.1001,    0.01992
            377,    SOLAR_CARDS.876,    SOLAR_CARDS.883,    0.01850602
            378,    SOLAR_CARDS.876,    SOLAR_CARDS.911,    0.01992
            379,    SOLAR_CARDS.876,    SOLAR_CARDS.1002,    0.01992
            380,    SOLAR_CARDS.877,    SOLAR_CARDS.884,    0.01850602
            381,    SOLAR_CARDS.877,    SOLAR_CARDS.912,    0.01992
            382,    SOLAR_CARDS.877,    SOLAR_CARDS.1003,    0.01992
            383,    SOLAR_CARDS.878,    SOLAR_CARDS.885,    0.01850602
            384,    SOLAR_CARDS.878,    SOLAR_CARDS.913,    0.01992
            385,    SOLAR_CARDS.878,    SOLAR_CARDS.1004,    0.01992
            386,    SOLAR_CARDS.879,    SOLAR_CARDS.886,    0.01850602
            387,    SOLAR_CARDS.879,    SOLAR_CARDS.914,    0.01992
            388,    SOLAR_CARDS.879,    SOLAR_CARDS.1005,    0.01992
            389,    SOLAR_CARDS.880,    SOLAR_CARDS.887,    0.01850602
            390,    SOLAR_CARDS.880,    SOLAR_CARDS.915,    0.01992
            391,    SOLAR_CARDS.880,    SOLAR_CARDS.1006,    0.01992
            392,    SOLAR_CARDS.881,    SOLAR_CARDS.888,    0.01850602
            393,    SOLAR_CARDS.881,    SOLAR_CARDS.916,    0.01992
            394,    SOLAR_CARDS.881,    SOLAR_CARDS.1007,    0.01992
            395,    SOLAR_CARDS.882,    SOLAR_CARDS.889,    0.01850602
            396,    SOLAR_CARDS.882,    SOLAR_CARDS.917,    0.01992
            397,    SOLAR_CARDS.882,    SOLAR_CARDS.1008,    0.01992
            398,    SOLAR_CARDS.883,    SOLAR_CARDS.890,    0.01850602
            399,    SOLAR_CARDS.883,    SOLAR_CARDS.918,    0.01992
            400,    SOLAR_CARDS.883,    SOLAR_CARDS.1009,    0.01992
            401,    SOLAR_CARDS.884,    SOLAR_CARDS.919,    0.009959999
            402,    SOLAR_CARDS.885,    SOLAR_CARDS.920,    0.009959999
            403,    SOLAR_CARDS.886,    SOLAR_CARDS.921,    0.009959999
            404,    SOLAR_CARDS.887,    SOLAR_CARDS.922,    0.009959999
            405,    SOLAR_CARDS.888,    SOLAR_CARDS.923,    0.009959999
            406,    SOLAR_CARDS.889,    SOLAR_CARDS.924,    0.009959999
            407,    SOLAR_CARDS.890,    SOLAR_CARDS.925,    0.009959999
            408,    SOLAR_CARDS.891,    SOLAR_CARDS.898,    0.01850602
            409,    SOLAR_CARDS.891,    SOLAR_CARDS.926,    0.009959999
            410,    SOLAR_CARDS.892,    SOLAR_CARDS.899,    0.01850602
            411,    SOLAR_CARDS.892,    SOLAR_CARDS.927,    0.009959999
            412,    SOLAR_CARDS.893,    SOLAR_CARDS.900,    0.01850602
            413,    SOLAR_CARDS.893,    SOLAR_CARDS.928,    0.009959999
            414,    SOLAR_CARDS.894,    SOLAR_CARDS.901,    0.01850602
            415,    SOLAR_CARDS.894,    SOLAR_CARDS.929,    0.009959999
            416,    SOLAR_CARDS.895,    SOLAR_CARDS.902,    0.01850602
            417,    SOLAR_CARDS.895,    SOLAR_CARDS.930,    0.009959999
            418,    SOLAR_CARDS.896,    SOLAR_CARDS.903,    0.01850602
            419,    SOLAR_CARDS.896,    SOLAR_CARDS.931,    0.009959999
            420,    SOLAR_CARDS.897,    SOLAR_CARDS.904,    0.01850602
            421,    SOLAR_CARDS.897,    SOLAR_CARDS.932,    0.009959999
            422,    SOLAR_CARDS.898,    SOLAR_CARDS.905,    0.01850602
            423,    SOLAR_CARDS.898,    SOLAR_CARDS.933,    0.01992
            424,    SOLAR_CARDS.899,    SOLAR_CARDS.906,    0.01850602
            425,    SOLAR_CARDS.899,    SOLAR_CARDS.934,    0.01992
            426,    SOLAR_CARDS.900,    SOLAR_CARDS.907,    0.01850602
            427,    SOLAR_CARDS.900,    SOLAR_CARDS.935,    0.01992
            428,    SOLAR_CARDS.901,    SOLAR_CARDS.908,    0.01850602
            429,    SOLAR_CARDS.901,    SOLAR_CARDS.936,    0.01992
            430,    SOLAR_CARDS.902,    SOLAR_CARDS.909,    0.01850602
            431,    SOLAR_CARDS.902,    SOLAR_CARDS.937,    0.01992
            432,    SOLAR_CARDS.903,    SOLAR_CARDS.910,    0.01850602
            433,    SOLAR_CARDS.903,    SOLAR_CARDS.938,    0.01992
            434,    SOLAR_CARDS.904,    SOLAR_CARDS.911,    0.01850602
            435,    SOLAR_CARDS.904,    SOLAR_CARDS.939,    0.01992
            436,    SOLAR_CARDS.905,    SOLAR_CARDS.912,    0.01850602
            437,    SOLAR_CARDS.905,    SOLAR_CARDS.940,    0.01992
            438,    SOLAR_CARDS.906,    SOLAR_CARDS.913,    0.01850602
            439,    SOLAR_CARDS.906,    SOLAR_CARDS.941,    0.01992
            440,    SOLAR_CARDS.907,    SOLAR_CARDS.914,    0.01850602
            441,    SOLAR_CARDS.907,    SOLAR_CARDS.942,    0.01992
            442,    SOLAR_CARDS.908,    SOLAR_CARDS.915,    0.01850602
            443,    SOLAR_CARDS.908,    SOLAR_CARDS.943,    0.01992
            444,    SOLAR_CARDS.909,    SOLAR_CARDS.916,    0.01850602
            445,    SOLAR_CARDS.909,    SOLAR_CARDS.944,    0.01992
            446,    SOLAR_CARDS.910,    SOLAR_CARDS.917,    0.01850602
            447,    SOLAR_CARDS.910,    SOLAR_CARDS.945,    0.01992
            448,    SOLAR_CARDS.911,    SOLAR_CARDS.918,    0.01850602
            449,    SOLAR_CARDS.911,    SOLAR_CARDS.946,    0.01992
            450,    SOLAR_CARDS.912,    SOLAR_CARDS.919,    0.01850602
            451,    SOLAR_CARDS.912,    SOLAR_CARDS.947,    0.01992
            452,    SOLAR_CARDS.913,    SOLAR_CARDS.920,    0.01850602
            453,    SOLAR_CARDS.913,    SOLAR_CARDS.948,    0.01992
            454,    SOLAR_CARDS.914,    SOLAR_CARDS.921,    0.01850602
            455,    SOLAR_CARDS.914,    SOLAR_CARDS.949,    0.01992
            456,    SOLAR_CARDS.915,    SOLAR_CARDS.922,    0.01850602
            457,    SOLAR_CARDS.915,    SOLAR_CARDS.950,    0.01992
            458,    SOLAR_CARDS.916,    SOLAR_CARDS.923,    0.01850602
            459,    SOLAR_CARDS.916,    SOLAR_CARDS.951,    0.01992
            460,    SOLAR_CARDS.917,    SOLAR_CARDS.924,    0.01850602
            461,    SOLAR_CARDS.917,    SOLAR_CARDS.952,    0.01992
            462,    SOLAR_CARDS.918,    SOLAR_CARDS.925,    0.01850602
            463,    SOLAR_CARDS.918,    SOLAR_CARDS.953,    0.01992
            464,    SOLAR_CARDS.919,    SOLAR_CARDS.954,    0.009959999
            465,    SOLAR_CARDS.920,    SOLAR_CARDS.955,    0.009959999
            466,    SOLAR_CARDS.921,    SOLAR_CARDS.956,    0.009959999
            467,    SOLAR_CARDS.922,    SOLAR_CARDS.957,    0.009959999
            468,    SOLAR_CARDS.923,    SOLAR_CARDS.958,    0.009959999
            469,    SOLAR_CARDS.924,    SOLAR_CARDS.959,    0.009959999
            470,    SOLAR_CARDS.925,    SOLAR_CARDS.960,    0.009959999
            471,    SOLAR_CARDS.926,    SOLAR_CARDS.933,    0.01850602
            472,    SOLAR_CARDS.926,    SOLAR_CARDS.961,    0.009959999
            473,    SOLAR_CARDS.927,    SOLAR_CARDS.934,    0.01850602
            474,    SOLAR_CARDS.927,    SOLAR_CARDS.962,    0.009959999
            475,    SOLAR_CARDS.928,    SOLAR_CARDS.935,    0.01850602
            476,    SOLAR_CARDS.928,    SOLAR_CARDS.963,    0.009959999
            477,    SOLAR_CARDS.929,    SOLAR_CARDS.936,    0.01850602
            478,    SOLAR_CARDS.929,    SOLAR_CARDS.964,    0.009959999
            479,    SOLAR_CARDS.930,    SOLAR_CARDS.937,    0.01850602
            480,    SOLAR_CARDS.930,    SOLAR_CARDS.965,    0.009959999
            481,    SOLAR_CARDS.931,    SOLAR_CARDS.938,    0.01850602
            482,    SOLAR_CARDS.931,    SOLAR_CARDS.966,    0.009959999
            483,    SOLAR_CARDS.932,    SOLAR_CARDS.939,    0.01850602
            484,    SOLAR_CARDS.932,    SOLAR_CARDS.967,    0.009959999
            485,    SOLAR_CARDS.933,    SOLAR_CARDS.940,    0.01850602
            486,    SOLAR_CARDS.933,    SOLAR_CARDS.968,    0.01992
            487,    SOLAR_CARDS.934,    SOLAR_CARDS.941,    0.01850602
            488,    SOLAR_CARDS.934,    SOLAR_CARDS.969,    0.01992
            489,    SOLAR_CARDS.935,    SOLAR_CARDS.942,    0.01850602
            490,    SOLAR_CARDS.935,    SOLAR_CARDS.970,    0.01992
            491,    SOLAR_CARDS.936,    SOLAR_CARDS.943,    0.01850602
            492,    SOLAR_CARDS.936,    SOLAR_CARDS.971,    0.01992
            493,    SOLAR_CARDS.937,    SOLAR_CARDS.944,    0.01850602
            494,    SOLAR_CARDS.937,    SOLAR_CARDS.972,    0.01992
            495,    SOLAR_CARDS.938,    SOLAR_CARDS.945,    0.01850602
            496,    SOLAR_CARDS.938,    SOLAR_CARDS.973,    0.01992
            497,    SOLAR_CARDS.939,    SOLAR_CARDS.946,    0.01850602
            498,    SOLAR_CARDS.939,    SOLAR_CARDS.974,    0.01992
            499,    SOLAR_CARDS.940,    SOLAR_CARDS.947,    0.01850602
            500,    SOLAR_CARDS.940,    SOLAR_CARDS.975,    0.01992
            501,    SOLAR_CARDS.941,    SOLAR_CARDS.948,    0.01850602
            502,    SOLAR_CARDS.941,    SOLAR_CARDS.976,    0.01992
            503,    SOLAR_CARDS.942,    SOLAR_CARDS.949,    0.01850602
            504,    SOLAR_CARDS.942,    SOLAR_CARDS.977,    0.01992
            505,    SOLAR_CARDS.943,    SOLAR_CARDS.950,    0.01850602
            506,    SOLAR_CARDS.943,    SOLAR_CARDS.978,    0.01992
            507,    SOLAR_CARDS.944,    SOLAR_CARDS.951,    0.01850602
            508,    SOLAR_CARDS.944,    SOLAR_CARDS.979,    0.01992
            509,    SOLAR_CARDS.945,    SOLAR_CARDS.952,    0.01850602
            510,    SOLAR_CARDS.945,    SOLAR_CARDS.980,    0.01992
            511,    SOLAR_CARDS.946,    SOLAR_CARDS.953,    0.01850602
            512,    SOLAR_CARDS.946,    SOLAR_CARDS.981,    0.01992
            513,    SOLAR_CARDS.947,    SOLAR_CARDS.954,    0.01850602
            514,    SOLAR_CARDS.947,    SOLAR_CARDS.982,    0.01992
            515,    SOLAR_CARDS.948,    SOLAR_CARDS.955,    0.01850602
            516,    SOLAR_CARDS.948,    SOLAR_CARDS.983,    0.01992
            517,    SOLAR_CARDS.949,    SOLAR_CARDS.956,    0.01850602
            518,    SOLAR_CARDS.949,    SOLAR_CARDS.984,    0.01992
            519,    SOLAR_CARDS.950,    SOLAR_CARDS.957,    0.01850602
            520,    SOLAR_CARDS.950,    SOLAR_CARDS.985,    0.01992
            521,    SOLAR_CARDS.951,    SOLAR_CARDS.958,    0.01850602
            522,    SOLAR_CARDS.951,    SOLAR_CARDS.986,    0.01992
            523,    SOLAR_CARDS.952,    SOLAR_CARDS.959,    0.01850602
            524,    SOLAR_CARDS.952,    SOLAR_CARDS.987,    0.01992
            525,    SOLAR_CARDS.953,    SOLAR_CARDS.960,    0.01850602
            526,    SOLAR_CARDS.953,    SOLAR_CARDS.988,    0.01992
            527,    SOLAR_CARDS.954,    SOLAR_CARDS.989,    0.009959999
            528,    SOLAR_CARDS.955,    SOLAR_CARDS.990,    0.009959999
            529,    SOLAR_CARDS.956,    SOLAR_CARDS.991,    0.009959999
            530,    SOLAR_CARDS.957,    SOLAR_CARDS.992,    0.009959999
            531,    SOLAR_CARDS.958,    SOLAR_CARDS.993,    0.009959999
            532,    SOLAR_CARDS.959,    SOLAR_CARDS.994,    0.009959999
            533,    SOLAR_CARDS.960,    SOLAR_CARDS.995,    0.009959999
            534,    SOLAR_CARDS.961,    SOLAR_CARDS.968,    0.009253012
            535,    SOLAR_CARDS.962,    SOLAR_CARDS.969,    0.009253012
            536,    SOLAR_CARDS.963,    SOLAR_CARDS.970,    0.009253012
            537,    SOLAR_CARDS.964,    SOLAR_CARDS.971,    0.009253012
            538,    SOLAR_CARDS.965,    SOLAR_CARDS.972,    0.009253012
            539,    SOLAR_CARDS.966,    SOLAR_CARDS.973,    0.009253012
            540,    SOLAR_CARDS.967,    SOLAR_CARDS.974,    0.009253012
            541,    SOLAR_CARDS.968,    SOLAR_CARDS.975,    0.009253012
            542,    SOLAR_CARDS.969,    SOLAR_CARDS.976,    0.009253012
            543,    SOLAR_CARDS.970,    SOLAR_CARDS.977,    0.009253012
            544,    SOLAR_CARDS.971,    SOLAR_CARDS.978,    0.009253012
            545,    SOLAR_CARDS.972,    SOLAR_CARDS.979,    0.009253012
            546,    SOLAR_CARDS.973,    SOLAR_CARDS.980,    0.009253012
            547,    SOLAR_CARDS.974,    SOLAR_CARDS.981,    0.009253012
            548,    SOLAR_CARDS.975,    SOLAR_CARDS.982,    0.009253012
            549,    SOLAR_CARDS.976,    SOLAR_CARDS.983,    0.009253012
            550,    SOLAR_CARDS.977,    SOLAR_CARDS.984,    0.009253012
            551,    SOLAR_CARDS.978,    SOLAR_CARDS.985,    0.009253012
            552,    SOLAR_CARDS.979,    SOLAR_CARDS.986,    0.009253012
            553,    SOLAR_CARDS.980,    SOLAR_CARDS.987,    0.009253012
            554,    SOLAR_CARDS.981,    SOLAR_CARDS.988,    0.009253012
            555,    SOLAR_CARDS.982,    SOLAR_CARDS.989,    0.009253012
            556,    SOLAR_CARDS.983,    SOLAR_CARDS.990,    0.009253012
            557,    SOLAR_CARDS.984,    SOLAR_CARDS.991,    0.009253012
            558,    SOLAR_CARDS.985,    SOLAR_CARDS.992,    0.009253012
            559,    SOLAR_CARDS.986,    SOLAR_CARDS.993,    0.009253012
            560,    SOLAR_CARDS.987,    SOLAR_CARDS.994,    0.009253012
            561,    SOLAR_CARDS.988,    SOLAR_CARDS.995,    0.009253012
            562,    SOLAR_CARDS.996,    SOLAR_CARDS.1003,    0.01850602
            563,    SOLAR_CARDS.997,    SOLAR_CARDS.1004,    0.01850602
            564,    SOLAR_CARDS.998,    SOLAR_CARDS.1005,    0.01850602
            565,    SOLAR_CARDS.999,    SOLAR_CARDS.1006,    0.01850602
            566,    SOLAR_CARDS.1000,    SOLAR_CARDS.1007,    0.01850602
            567,    SOLAR_CARDS.1001,    SOLAR_CARDS.1008,    0.01850602
            568,    SOLAR_CARDS.1002,    SOLAR_CARDS.1009,    0.01850602
HEADER NODE DATA, SOLAR_PANELS
            458,    20.,    0.035112
            461,    20.,    0.070224
            468,    20.,    0.035112
            474,    20.,    0.070224
            480,    20.,    0.140448
            486,    20.,    0.070224
            643,    20.,    0.070224
            685,    20.,    0.035112
            703,    20.,    0.070224
            721,    20.,    0.035112
            795,    20.,    0.140448
            799,    20.,    0.070224
            800,    20.,    0.035112
            801,    20.,    0.035112
            802,    20.,    0.035112
            803,    20.,    0.035112
            804,    20.,    0.035112
            805,    20.,    0.035112
            806,    20.,    0.035112
            807,    20.,    0.070224
            808,    20.,    0.070224
            809,    20.,    0.070224
            810,    20.,    0.070224
            811,    20.,    0.070224
            812,    20.,    0.070224
            813,    20.,    0.070224
            814,    20.,    0.035112
            815,    20.,    0.035112
            816,    20.,    0.035112
            817,    20.,    0.035112
            818,    20.,    0.035112
            819,    20.,    0.035112
            820,    20.,    0.035112
            821,    20.,    0.070224
            822,    20.,    0.070224
            823,    20.,    0.070224
            824,    20.,    0.070224
            825,    20.,    0.070224
            826,    20.,    0.070224
            827,    20.,    0.070224
            828,    20.,    0.140448
            829,    20.,    0.140448
            830,    20.,    0.140448
            831,    20.,    0.140448
            832,    20.,    0.140448
            833,    20.,    0.140448
            834,    20.,    0.140448
            835,    20.,    0.070224
            836,    20.,    0.070224
            837,    20.,    0.070224
            838,    20.,    0.070224
            839,    20.,    0.070224
            840,    20.,    0.070224
            841,    20.,    0.070224
            842,    20.,    0.070224
            843,    20.,    0.070224
            844,    20.,    0.070224
            845,    20.,    0.070224
            846,    20.,    0.070224
            847,    20.,    0.070224
            848,    20.,    0.070224
            849,    20.,    0.035112
            850,    20.,    0.035112
            851,    20.,    0.035112
            852,    20.,    0.035112
            853,    20.,    0.035112
            854,    20.,    0.035112
            855,    20.,    0.035112
            856,    20.,    0.070224
            857,    20.,    0.070224
            858,    20.,    0.070224
            859,    20.,    0.070224
            860,    20.,    0.070224
            861,    20.,    0.070224
            862,    20.,    0.070224
            863,    20.,    0.035112
            864,    20.,    0.035112
            865,    20.,    0.035112
            866,    20.,    0.035112
            867,    20.,    0.035112
            868,    20.,    0.035112
            869,    20.,    0.035112
            870,    20.,    0.140448
            871,    20.,    0.140448
            872,    20.,    0.140448
            873,    20.,    0.140448
            874,    20.,    0.140448
            875,    20.,    0.140448
            876,    20.,    0.140448
            877,    20.,    0.070224
            878,    20.,    0.070224
            879,    20.,    0.070224
            880,    20.,    0.070224
            881,    20.,    0.070224
            882,    20.,    0.070224
            883,    20.,    0.070224
HEADER CONDUCTOR DATA, SOLAR_PANELS
C Contact - Face Contactor-+x top RTV[SOLAR_PANELS][1]::1A49
            1,    SOLAR_CARDS.643,    SOLAR_PANELS.805,    0.05041667
            2,    SOLAR_CARDS.643,    SOLAR_PANELS.812,    0.01008333
            3,    SOLAR_CARDS.643,    SOLAR_PANELS.826,    0.03025
            4,    SOLAR_CARDS.643,    SOLAR_PANELS.833,    0.00605
            5,    SOLAR_CARDS.721,    SOLAR_PANELS.826,    0.07058333
            6,    SOLAR_CARDS.721,    SOLAR_PANELS.833,    0.01411667
            7,    SOLAR_CARDS.727,    SOLAR_PANELS.833,    0.1129333
            8,    SOLAR_CARDS.734,    SOLAR_PANELS.833,    0.01411667
            9,    SOLAR_CARDS.734,    SOLAR_PANELS.840,    0.07058333
            10,    SOLAR_CARDS.755,    SOLAR_PANELS.847,    0.08066667
            11,    SOLAR_CARDS.755,    SOLAR_PANELS.875,    0.01613333
            12,    SOLAR_CARDS.762,    SOLAR_PANELS.875,    0.1290667
            13,    SOLAR_CARDS.769,    SOLAR_PANELS.875,    0.01613333
            14,    SOLAR_CARDS.769,    SOLAR_PANELS.882,    0.08066667
            15,    SOLAR_CARDS.778,    SOLAR_PANELS.847,    0.02016667
            16,    SOLAR_CARDS.778,    SOLAR_PANELS.854,    0.05041667
            17,    SOLAR_CARDS.778,    SOLAR_PANELS.861,    0.01008333
            18,    SOLAR_CARDS.778,    SOLAR_PANELS.875,    0.004033333
            19,    SOLAR_CARDS.779,    SOLAR_PANELS.861,    0.08066667
            20,    SOLAR_CARDS.779,    SOLAR_PANELS.875,    0.03226667
            21,    SOLAR_CARDS.780,    SOLAR_PANELS.861,    0.01008333
            22,    SOLAR_CARDS.780,    SOLAR_PANELS.868,    0.05041667
            23,    SOLAR_CARDS.780,    SOLAR_PANELS.875,    0.004033333
            24,    SOLAR_CARDS.780,    SOLAR_PANELS.882,    0.02016667
            25,    SOLAR_CARDS.795,    SOLAR_PANELS.812,    0.08066667
            26,    SOLAR_CARDS.795,    SOLAR_PANELS.833,    0.0484
            27,    SOLAR_CARDS.799,    SOLAR_PANELS.812,    0.01008333
            28,    SOLAR_CARDS.799,    SOLAR_PANELS.819,    0.05041667
            29,    SOLAR_CARDS.799,    SOLAR_PANELS.833,    0.00605
            30,    SOLAR_CARDS.799,    SOLAR_PANELS.840,    0.03025
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            31,    SOLAR_CARDS.842,    SOLAR_PANELS.806,    0.05041667
            32,    SOLAR_CARDS.842,    SOLAR_PANELS.813,    0.01008333
            33,    SOLAR_CARDS.842,    SOLAR_PANELS.827,    0.03025
            34,    SOLAR_CARDS.842,    SOLAR_PANELS.834,    0.00605
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            35,    SOLAR_CARDS.843,    SOLAR_PANELS.458,    0.05041667
            36,    SOLAR_CARDS.843,    SOLAR_PANELS.461,    0.01008333
            37,    SOLAR_CARDS.843,    SOLAR_PANELS.474,    0.03025
            38,    SOLAR_CARDS.843,    SOLAR_PANELS.480,    0.00605
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            39,    SOLAR_CARDS.844,    SOLAR_PANELS.802,    0.05041667
            40,    SOLAR_CARDS.844,    SOLAR_PANELS.809,    0.01008333
            41,    SOLAR_CARDS.844,    SOLAR_PANELS.823,    0.03025
            42,    SOLAR_CARDS.844,    SOLAR_PANELS.830,    0.00605
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            43,    SOLAR_CARDS.845,    SOLAR_PANELS.803,    0.05041667
            44,    SOLAR_CARDS.845,    SOLAR_PANELS.810,    0.01008333
            45,    SOLAR_CARDS.845,    SOLAR_PANELS.824,    0.03025
            46,    SOLAR_CARDS.845,    SOLAR_PANELS.831,    0.00605
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            47,    SOLAR_CARDS.846,    SOLAR_PANELS.800,    0.05041667
            48,    SOLAR_CARDS.846,    SOLAR_PANELS.807,    0.01008333
            49,    SOLAR_CARDS.846,    SOLAR_PANELS.821,    0.02016667
            50,    SOLAR_CARDS.846,    SOLAR_PANELS.828,    0.004033333
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            51,    SOLAR_CARDS.847,    SOLAR_PANELS.801,    0.05041667
            52,    SOLAR_CARDS.847,    SOLAR_PANELS.808,    0.01008333
            53,    SOLAR_CARDS.847,    SOLAR_PANELS.822,    0.03025
            54,    SOLAR_CARDS.847,    SOLAR_PANELS.829,    0.00605
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            55,    SOLAR_CARDS.848,    SOLAR_PANELS.804,    0.05041667
            56,    SOLAR_CARDS.848,    SOLAR_PANELS.811,    0.01008333
            57,    SOLAR_CARDS.848,    SOLAR_PANELS.825,    0.03025
            58,    SOLAR_CARDS.848,    SOLAR_PANELS.832,    0.00605
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            59,    SOLAR_CARDS.863,    SOLAR_PANELS.827,    0.07058333
            60,    SOLAR_CARDS.863,    SOLAR_PANELS.834,    0.01411667
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            61,    SOLAR_CARDS.864,    SOLAR_PANELS.474,    0.07058333
            62,    SOLAR_CARDS.864,    SOLAR_PANELS.480,    0.01411667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            63,    SOLAR_CARDS.865,    SOLAR_PANELS.823,    0.07058333
            64,    SOLAR_CARDS.865,    SOLAR_PANELS.830,    0.01411667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            65,    SOLAR_CARDS.866,    SOLAR_PANELS.824,    0.07058333
            66,    SOLAR_CARDS.866,    SOLAR_PANELS.831,    0.01411667
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            67,    SOLAR_CARDS.867,    SOLAR_PANELS.821,    0.08066667
            68,    SOLAR_CARDS.867,    SOLAR_PANELS.828,    0.01613333
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            69,    SOLAR_CARDS.868,    SOLAR_PANELS.822,    0.07058333
            70,    SOLAR_CARDS.868,    SOLAR_PANELS.829,    0.01411667
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            71,    SOLAR_CARDS.869,    SOLAR_PANELS.825,    0.07058333
            72,    SOLAR_CARDS.869,    SOLAR_PANELS.832,    0.01411667
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            73,    SOLAR_CARDS.870,    SOLAR_PANELS.834,    0.1129333
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            74,    SOLAR_CARDS.871,    SOLAR_PANELS.480,    0.1129333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            75,    SOLAR_CARDS.872,    SOLAR_PANELS.830,    0.1129333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            76,    SOLAR_CARDS.873,    SOLAR_PANELS.831,    0.1129333
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            77,    SOLAR_CARDS.874,    SOLAR_PANELS.828,    0.1290667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            78,    SOLAR_CARDS.875,    SOLAR_PANELS.829,    0.1129333
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            79,    SOLAR_CARDS.876,    SOLAR_PANELS.832,    0.1129333
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            80,    SOLAR_CARDS.877,    SOLAR_PANELS.834,    0.01411667
            81,    SOLAR_CARDS.877,    SOLAR_PANELS.841,    0.07058333
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            82,    SOLAR_CARDS.878,    SOLAR_PANELS.480,    0.01411667
            83,    SOLAR_CARDS.878,    SOLAR_PANELS.486,    0.07058333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            84,    SOLAR_CARDS.879,    SOLAR_PANELS.830,    0.01411667
            85,    SOLAR_CARDS.879,    SOLAR_PANELS.837,    0.07058333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            86,    SOLAR_CARDS.880,    SOLAR_PANELS.831,    0.01411667
            87,    SOLAR_CARDS.880,    SOLAR_PANELS.838,    0.07058333
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            88,    SOLAR_CARDS.881,    SOLAR_PANELS.828,    0.01613333
            89,    SOLAR_CARDS.881,    SOLAR_PANELS.835,    0.08066667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            90,    SOLAR_CARDS.882,    SOLAR_PANELS.829,    0.01411667
            91,    SOLAR_CARDS.882,    SOLAR_PANELS.836,    0.07058333
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            92,    SOLAR_CARDS.883,    SOLAR_PANELS.832,    0.01411667
            93,    SOLAR_CARDS.883,    SOLAR_PANELS.839,    0.07058333
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            94,    SOLAR_CARDS.898,    SOLAR_PANELS.848,    0.08066667
            95,    SOLAR_CARDS.898,    SOLAR_PANELS.876,    0.01613333
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            96,    SOLAR_CARDS.899,    SOLAR_PANELS.643,    0.08066667
            97,    SOLAR_CARDS.899,    SOLAR_PANELS.795,    0.01613333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            98,    SOLAR_CARDS.900,    SOLAR_PANELS.844,    0.08066667
            99,    SOLAR_CARDS.900,    SOLAR_PANELS.872,    0.01613333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            100,    SOLAR_CARDS.901,    SOLAR_PANELS.845,    0.08066667
            101,    SOLAR_CARDS.901,    SOLAR_PANELS.873,    0.01613333
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            102,    SOLAR_CARDS.902,    SOLAR_PANELS.842,    0.08066667
            103,    SOLAR_CARDS.902,    SOLAR_PANELS.870,    0.01613333
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            104,    SOLAR_CARDS.903,    SOLAR_PANELS.843,    0.08066667
            105,    SOLAR_CARDS.903,    SOLAR_PANELS.871,    0.01613333
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            106,    SOLAR_CARDS.904,    SOLAR_PANELS.846,    0.08066667
            107,    SOLAR_CARDS.904,    SOLAR_PANELS.874,    0.01613333
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            108,    SOLAR_CARDS.905,    SOLAR_PANELS.876,    0.1290667
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            109,    SOLAR_CARDS.906,    SOLAR_PANELS.795,    0.1290667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            110,    SOLAR_CARDS.907,    SOLAR_PANELS.872,    0.1290667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            111,    SOLAR_CARDS.908,    SOLAR_PANELS.873,    0.1290667
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            112,    SOLAR_CARDS.909,    SOLAR_PANELS.870,    0.1290667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            113,    SOLAR_CARDS.910,    SOLAR_PANELS.871,    0.1290667
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            114,    SOLAR_CARDS.911,    SOLAR_PANELS.874,    0.1290667
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            115,    SOLAR_CARDS.912,    SOLAR_PANELS.876,    0.01613333
            116,    SOLAR_CARDS.912,    SOLAR_PANELS.883,    0.08066667
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            117,    SOLAR_CARDS.913,    SOLAR_PANELS.795,    0.01613333
            118,    SOLAR_CARDS.913,    SOLAR_PANELS.799,    0.08066667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            119,    SOLAR_CARDS.914,    SOLAR_PANELS.872,    0.01613333
            120,    SOLAR_CARDS.914,    SOLAR_PANELS.879,    0.08066667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            121,    SOLAR_CARDS.915,    SOLAR_PANELS.873,    0.01613333
            122,    SOLAR_CARDS.915,    SOLAR_PANELS.880,    0.08066667
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            123,    SOLAR_CARDS.916,    SOLAR_PANELS.870,    0.01613333
            124,    SOLAR_CARDS.916,    SOLAR_PANELS.877,    0.08066667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            125,    SOLAR_CARDS.917,    SOLAR_PANELS.871,    0.01613333
            126,    SOLAR_CARDS.917,    SOLAR_PANELS.878,    0.08066667
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            127,    SOLAR_CARDS.918,    SOLAR_PANELS.874,    0.01613333
            128,    SOLAR_CARDS.918,    SOLAR_PANELS.881,    0.08066667
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            129,    SOLAR_CARDS.933,    SOLAR_PANELS.848,    0.02016667
            130,    SOLAR_CARDS.933,    SOLAR_PANELS.855,    0.05041667
            131,    SOLAR_CARDS.933,    SOLAR_PANELS.862,    0.01008333
            132,    SOLAR_CARDS.933,    SOLAR_PANELS.876,    0.004033333
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            133,    SOLAR_CARDS.934,    SOLAR_PANELS.643,    0.02016667
            134,    SOLAR_CARDS.934,    SOLAR_PANELS.685,    0.05041667
            135,    SOLAR_CARDS.934,    SOLAR_PANELS.703,    0.01008333
            136,    SOLAR_CARDS.934,    SOLAR_PANELS.795,    0.004033333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            137,    SOLAR_CARDS.935,    SOLAR_PANELS.844,    0.02016667
            138,    SOLAR_CARDS.935,    SOLAR_PANELS.851,    0.05041667
            139,    SOLAR_CARDS.935,    SOLAR_PANELS.858,    0.01008333
            140,    SOLAR_CARDS.935,    SOLAR_PANELS.872,    0.004033333
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            141,    SOLAR_CARDS.936,    SOLAR_PANELS.845,    0.02016667
            142,    SOLAR_CARDS.936,    SOLAR_PANELS.852,    0.05041667
            143,    SOLAR_CARDS.936,    SOLAR_PANELS.859,    0.01008333
            144,    SOLAR_CARDS.936,    SOLAR_PANELS.873,    0.004033333
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            145,    SOLAR_CARDS.937,    SOLAR_PANELS.842,    0.02016667
            146,    SOLAR_CARDS.937,    SOLAR_PANELS.849,    0.05041667
            147,    SOLAR_CARDS.937,    SOLAR_PANELS.856,    0.01008333
            148,    SOLAR_CARDS.937,    SOLAR_PANELS.870,    0.004033333
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            149,    SOLAR_CARDS.938,    SOLAR_PANELS.843,    0.02016667
            150,    SOLAR_CARDS.938,    SOLAR_PANELS.850,    0.05041667
            151,    SOLAR_CARDS.938,    SOLAR_PANELS.857,    0.01008333
            152,    SOLAR_CARDS.938,    SOLAR_PANELS.871,    0.004033333
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            153,    SOLAR_CARDS.939,    SOLAR_PANELS.846,    0.02016667
            154,    SOLAR_CARDS.939,    SOLAR_PANELS.853,    0.05041667
            155,    SOLAR_CARDS.939,    SOLAR_PANELS.860,    0.01008333
            156,    SOLAR_CARDS.939,    SOLAR_PANELS.874,    0.004033333
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            157,    SOLAR_CARDS.940,    SOLAR_PANELS.862,    0.08066667
            158,    SOLAR_CARDS.940,    SOLAR_PANELS.876,    0.03226667
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            159,    SOLAR_CARDS.941,    SOLAR_PANELS.703,    0.08066667
            160,    SOLAR_CARDS.941,    SOLAR_PANELS.795,    0.03226667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            161,    SOLAR_CARDS.942,    SOLAR_PANELS.858,    0.08066667
            162,    SOLAR_CARDS.942,    SOLAR_PANELS.872,    0.03226667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            163,    SOLAR_CARDS.943,    SOLAR_PANELS.859,    0.08066667
            164,    SOLAR_CARDS.943,    SOLAR_PANELS.873,    0.03226667
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            165,    SOLAR_CARDS.944,    SOLAR_PANELS.856,    0.08066667
            166,    SOLAR_CARDS.944,    SOLAR_PANELS.870,    0.03226667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            167,    SOLAR_CARDS.945,    SOLAR_PANELS.857,    0.08066667
            168,    SOLAR_CARDS.945,    SOLAR_PANELS.871,    0.03226667
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            169,    SOLAR_CARDS.946,    SOLAR_PANELS.860,    0.08066667
            170,    SOLAR_CARDS.946,    SOLAR_PANELS.874,    0.03226667
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            171,    SOLAR_CARDS.947,    SOLAR_PANELS.862,    0.01008333
            172,    SOLAR_CARDS.947,    SOLAR_PANELS.869,    0.05041667
            173,    SOLAR_CARDS.947,    SOLAR_PANELS.876,    0.004033333
            174,    SOLAR_CARDS.947,    SOLAR_PANELS.883,    0.02016667
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            175,    SOLAR_CARDS.948,    SOLAR_PANELS.703,    0.01008333
            176,    SOLAR_CARDS.948,    SOLAR_PANELS.721,    0.05041667
            177,    SOLAR_CARDS.948,    SOLAR_PANELS.795,    0.004033333
            178,    SOLAR_CARDS.948,    SOLAR_PANELS.799,    0.02016667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            179,    SOLAR_CARDS.949,    SOLAR_PANELS.858,    0.01008333
            180,    SOLAR_CARDS.949,    SOLAR_PANELS.865,    0.05041667
            181,    SOLAR_CARDS.949,    SOLAR_PANELS.872,    0.004033333
            182,    SOLAR_CARDS.949,    SOLAR_PANELS.879,    0.02016667
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            183,    SOLAR_CARDS.950,    SOLAR_PANELS.859,    0.01008333
            184,    SOLAR_CARDS.950,    SOLAR_PANELS.866,    0.05041667
            185,    SOLAR_CARDS.950,    SOLAR_PANELS.873,    0.004033333
            186,    SOLAR_CARDS.950,    SOLAR_PANELS.880,    0.02016667
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            187,    SOLAR_CARDS.951,    SOLAR_PANELS.856,    0.01008333
            188,    SOLAR_CARDS.951,    SOLAR_PANELS.863,    0.05041667
            189,    SOLAR_CARDS.951,    SOLAR_PANELS.870,    0.004033333
            190,    SOLAR_CARDS.951,    SOLAR_PANELS.877,    0.02016667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            191,    SOLAR_CARDS.952,    SOLAR_PANELS.857,    0.01008333
            192,    SOLAR_CARDS.952,    SOLAR_PANELS.864,    0.05041667
            193,    SOLAR_CARDS.952,    SOLAR_PANELS.871,    0.004033333
            194,    SOLAR_CARDS.952,    SOLAR_PANELS.878,    0.02016667
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            195,    SOLAR_CARDS.953,    SOLAR_PANELS.860,    0.01008333
            196,    SOLAR_CARDS.953,    SOLAR_PANELS.867,    0.05041667
            197,    SOLAR_CARDS.953,    SOLAR_PANELS.874,    0.004033333
            198,    SOLAR_CARDS.953,    SOLAR_PANELS.881,    0.02016667
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            199,    SOLAR_CARDS.996,    SOLAR_PANELS.813,    0.08066667
            200,    SOLAR_CARDS.996,    SOLAR_PANELS.834,    0.0484
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            201,    SOLAR_CARDS.997,    SOLAR_PANELS.461,    0.08066667
            202,    SOLAR_CARDS.997,    SOLAR_PANELS.480,    0.0484
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            203,    SOLAR_CARDS.998,    SOLAR_PANELS.809,    0.08066667
            204,    SOLAR_CARDS.998,    SOLAR_PANELS.830,    0.0484
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            205,    SOLAR_CARDS.999,    SOLAR_PANELS.810,    0.08066667
            206,    SOLAR_CARDS.999,    SOLAR_PANELS.831,    0.0484
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            207,    SOLAR_CARDS.1000,    SOLAR_PANELS.807,    0.08066667
            208,    SOLAR_CARDS.1000,    SOLAR_PANELS.828,    0.03226667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            209,    SOLAR_CARDS.1001,    SOLAR_PANELS.808,    0.08066667
            210,    SOLAR_CARDS.1001,    SOLAR_PANELS.829,    0.0484
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            211,    SOLAR_CARDS.1002,    SOLAR_PANELS.811,    0.08066667
            212,    SOLAR_CARDS.1002,    SOLAR_PANELS.832,    0.0484
C Contact - Face Contactor- -x bottom RTV[SOLAR_PANELS][0]::1A4E
            213,    SOLAR_CARDS.1003,    SOLAR_PANELS.813,    0.01008333
            214,    SOLAR_CARDS.1003,    SOLAR_PANELS.820,    0.05041667
            215,    SOLAR_CARDS.1003,    SOLAR_PANELS.834,    0.00605
            216,    SOLAR_CARDS.1003,    SOLAR_PANELS.841,    0.03025
C Contact - Face Contactor- -x top RTV[SOLAR_PANELS][1]::1A4D
            217,    SOLAR_CARDS.1004,    SOLAR_PANELS.461,    0.01008333
            218,    SOLAR_CARDS.1004,    SOLAR_PANELS.468,    0.05041667
            219,    SOLAR_CARDS.1004,    SOLAR_PANELS.480,    0.00605
            220,    SOLAR_CARDS.1004,    SOLAR_PANELS.486,    0.03025
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][0]::1A4C
            221,    SOLAR_CARDS.1005,    SOLAR_PANELS.809,    0.01008333
            222,    SOLAR_CARDS.1005,    SOLAR_PANELS.816,    0.05041667
            223,    SOLAR_CARDS.1005,    SOLAR_PANELS.830,    0.00605
            224,    SOLAR_CARDS.1005,    SOLAR_PANELS.837,    0.03025
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][2]::1A4B
            225,    SOLAR_CARDS.1006,    SOLAR_PANELS.810,    0.01008333
            226,    SOLAR_CARDS.1006,    SOLAR_PANELS.817,    0.05041667
            227,    SOLAR_CARDS.1006,    SOLAR_PANELS.831,    0.00605
            228,    SOLAR_CARDS.1006,    SOLAR_PANELS.838,    0.03025
C Contact - Face Contactor-+y bottom RTV[SOLAR_PANELS][1]::1A48
            229,    SOLAR_CARDS.1007,    SOLAR_PANELS.807,    0.01008333
            230,    SOLAR_CARDS.1007,    SOLAR_PANELS.814,    0.05041667
            231,    SOLAR_CARDS.1007,    SOLAR_PANELS.828,    0.004033333
            232,    SOLAR_CARDS.1007,    SOLAR_PANELS.835,    0.02016667
C Contact - Face Contactor-+y top RVT[SOLAR_PANELS][2]::1A47
            233,    SOLAR_CARDS.1008,    SOLAR_PANELS.808,    0.01008333
            234,    SOLAR_CARDS.1008,    SOLAR_PANELS.815,    0.05041667
            235,    SOLAR_CARDS.1008,    SOLAR_PANELS.829,    0.00605
            236,    SOLAR_CARDS.1008,    SOLAR_PANELS.836,    0.03025
C Contact - Face Contactor-+x bottom RTV[SOLAR_PANELS][1]::1A4A
            237,    SOLAR_CARDS.1009,    SOLAR_PANELS.811,    0.01008333
            238,    SOLAR_CARDS.1009,    SOLAR_PANELS.818,    0.05041667
            239,    SOLAR_CARDS.1009,    SOLAR_PANELS.832,    0.00605
            240,    SOLAR_CARDS.1009,    SOLAR_PANELS.839,    0.03025
            241,    SOLAR_PANELS.458,    SOLAR_PANELS.461,    0.002816
            242,    SOLAR_PANELS.458,    SOLAR_PANELS.474,    0.002475
            243,    SOLAR_PANELS.461,    SOLAR_PANELS.468,    0.002816
            244,    SOLAR_PANELS.461,    SOLAR_PANELS.480,    0.00495
            245,    SOLAR_PANELS.468,    SOLAR_PANELS.486,    0.002475
            246,    SOLAR_PANELS.474,    SOLAR_PANELS.480,    0.005632
            247,    SOLAR_PANELS.474,    SOLAR_PANELS.643,    0.002475
            248,    SOLAR_PANELS.480,    SOLAR_PANELS.486,    0.005632
            249,    SOLAR_PANELS.480,    SOLAR_PANELS.795,    0.00495
            250,    SOLAR_PANELS.486,    SOLAR_PANELS.799,    0.002475
            251,    SOLAR_PANELS.643,    SOLAR_PANELS.685,    0.002475
            252,    SOLAR_PANELS.643,    SOLAR_PANELS.795,    0.005632
            253,    SOLAR_PANELS.685,    SOLAR_PANELS.703,    0.002816
            254,    SOLAR_PANELS.703,    SOLAR_PANELS.721,    0.002816
            255,    SOLAR_PANELS.703,    SOLAR_PANELS.795,    0.00495
            256,    SOLAR_PANELS.721,    SOLAR_PANELS.799,    0.002475
            257,    SOLAR_PANELS.795,    SOLAR_PANELS.799,    0.005632
            258,    SOLAR_PANELS.800,    SOLAR_PANELS.807,    0.002816
            259,    SOLAR_PANELS.800,    SOLAR_PANELS.821,    0.002475
            260,    SOLAR_PANELS.801,    SOLAR_PANELS.808,    0.002816
            261,    SOLAR_PANELS.801,    SOLAR_PANELS.822,    0.002475
            262,    SOLAR_PANELS.802,    SOLAR_PANELS.809,    0.002816
            263,    SOLAR_PANELS.802,    SOLAR_PANELS.823,    0.002475
            264,    SOLAR_PANELS.803,    SOLAR_PANELS.810,    0.002816
            265,    SOLAR_PANELS.803,    SOLAR_PANELS.824,    0.002475
            266,    SOLAR_PANELS.804,    SOLAR_PANELS.811,    0.002816
            267,    SOLAR_PANELS.804,    SOLAR_PANELS.825,    0.002475
            268,    SOLAR_PANELS.805,    SOLAR_PANELS.812,    0.002816
            269,    SOLAR_PANELS.805,    SOLAR_PANELS.826,    0.002475
            270,    SOLAR_PANELS.806,    SOLAR_PANELS.813,    0.002816
            271,    SOLAR_PANELS.806,    SOLAR_PANELS.827,    0.002475
            272,    SOLAR_PANELS.807,    SOLAR_PANELS.814,    0.002816
            273,    SOLAR_PANELS.807,    SOLAR_PANELS.828,    0.00495
            274,    SOLAR_PANELS.808,    SOLAR_PANELS.815,    0.002816
            275,    SOLAR_PANELS.808,    SOLAR_PANELS.829,    0.00495
            276,    SOLAR_PANELS.809,    SOLAR_PANELS.816,    0.002816
            277,    SOLAR_PANELS.809,    SOLAR_PANELS.830,    0.00495
            278,    SOLAR_PANELS.810,    SOLAR_PANELS.817,    0.002816
            279,    SOLAR_PANELS.810,    SOLAR_PANELS.831,    0.00495
            280,    SOLAR_PANELS.811,    SOLAR_PANELS.818,    0.002816
            281,    SOLAR_PANELS.811,    SOLAR_PANELS.832,    0.00495
            282,    SOLAR_PANELS.812,    SOLAR_PANELS.819,    0.002816
            283,    SOLAR_PANELS.812,    SOLAR_PANELS.833,    0.00495
            284,    SOLAR_PANELS.813,    SOLAR_PANELS.820,    0.002816
            285,    SOLAR_PANELS.813,    SOLAR_PANELS.834,    0.00495
            286,    SOLAR_PANELS.814,    SOLAR_PANELS.835,    0.002475
            287,    SOLAR_PANELS.815,    SOLAR_PANELS.836,    0.002475
            288,    SOLAR_PANELS.816,    SOLAR_PANELS.837,    0.002475
            289,    SOLAR_PANELS.817,    SOLAR_PANELS.838,    0.002475
            290,    SOLAR_PANELS.818,    SOLAR_PANELS.839,    0.002475
            291,    SOLAR_PANELS.819,    SOLAR_PANELS.840,    0.002475
            292,    SOLAR_PANELS.820,    SOLAR_PANELS.841,    0.002475
            293,    SOLAR_PANELS.821,    SOLAR_PANELS.828,    0.005632
            294,    SOLAR_PANELS.821,    SOLAR_PANELS.842,    0.002475
            295,    SOLAR_PANELS.822,    SOLAR_PANELS.829,    0.005632
            296,    SOLAR_PANELS.822,    SOLAR_PANELS.843,    0.002475
            297,    SOLAR_PANELS.823,    SOLAR_PANELS.830,    0.005632
            298,    SOLAR_PANELS.823,    SOLAR_PANELS.844,    0.002475
            299,    SOLAR_PANELS.824,    SOLAR_PANELS.831,    0.005632
            300,    SOLAR_PANELS.824,    SOLAR_PANELS.845,    0.002475
            301,    SOLAR_PANELS.825,    SOLAR_PANELS.832,    0.005632
            302,    SOLAR_PANELS.825,    SOLAR_PANELS.846,    0.002475
            303,    SOLAR_PANELS.826,    SOLAR_PANELS.833,    0.005632
            304,    SOLAR_PANELS.826,    SOLAR_PANELS.847,    0.002475
            305,    SOLAR_PANELS.827,    SOLAR_PANELS.834,    0.005632
            306,    SOLAR_PANELS.827,    SOLAR_PANELS.848,    0.002475
            307,    SOLAR_PANELS.828,    SOLAR_PANELS.835,    0.005632
            308,    SOLAR_PANELS.828,    SOLAR_PANELS.870,    0.00495
            309,    SOLAR_PANELS.829,    SOLAR_PANELS.836,    0.005632
            310,    SOLAR_PANELS.829,    SOLAR_PANELS.871,    0.00495
            311,    SOLAR_PANELS.830,    SOLAR_PANELS.837,    0.005632
            312,    SOLAR_PANELS.830,    SOLAR_PANELS.872,    0.00495
            313,    SOLAR_PANELS.831,    SOLAR_PANELS.838,    0.005632
            314,    SOLAR_PANELS.831,    SOLAR_PANELS.873,    0.00495
            315,    SOLAR_PANELS.832,    SOLAR_PANELS.839,    0.005632
            316,    SOLAR_PANELS.832,    SOLAR_PANELS.874,    0.00495
            317,    SOLAR_PANELS.833,    SOLAR_PANELS.840,    0.005632
            318,    SOLAR_PANELS.833,    SOLAR_PANELS.875,    0.00495
            319,    SOLAR_PANELS.834,    SOLAR_PANELS.841,    0.005632
            320,    SOLAR_PANELS.834,    SOLAR_PANELS.876,    0.00495
            321,    SOLAR_PANELS.835,    SOLAR_PANELS.877,    0.002475
            322,    SOLAR_PANELS.836,    SOLAR_PANELS.878,    0.002475
            323,    SOLAR_PANELS.837,    SOLAR_PANELS.879,    0.002475
            324,    SOLAR_PANELS.838,    SOLAR_PANELS.880,    0.002475
            325,    SOLAR_PANELS.839,    SOLAR_PANELS.881,    0.002475
            326,    SOLAR_PANELS.840,    SOLAR_PANELS.882,    0.002475
            327,    SOLAR_PANELS.841,    SOLAR_PANELS.883,    0.002475
            328,    SOLAR_PANELS.842,    SOLAR_PANELS.849,    0.002475
            329,    SOLAR_PANELS.842,    SOLAR_PANELS.870,    0.005632
            330,    SOLAR_PANELS.843,    SOLAR_PANELS.850,    0.002475
            331,    SOLAR_PANELS.843,    SOLAR_PANELS.871,    0.005632
            332,    SOLAR_PANELS.844,    SOLAR_PANELS.851,    0.002475
            333,    SOLAR_PANELS.844,    SOLAR_PANELS.872,    0.005632
            334,    SOLAR_PANELS.845,    SOLAR_PANELS.852,    0.002475
            335,    SOLAR_PANELS.845,    SOLAR_PANELS.873,    0.005632
            336,    SOLAR_PANELS.846,    SOLAR_PANELS.853,    0.002475
            337,    SOLAR_PANELS.846,    SOLAR_PANELS.874,    0.005632
            338,    SOLAR_PANELS.847,    SOLAR_PANELS.854,    0.002475
            339,    SOLAR_PANELS.847,    SOLAR_PANELS.875,    0.005632
            340,    SOLAR_PANELS.848,    SOLAR_PANELS.855,    0.002475
            341,    SOLAR_PANELS.848,    SOLAR_PANELS.876,    0.005632
            342,    SOLAR_PANELS.849,    SOLAR_PANELS.856,    0.002816
            343,    SOLAR_PANELS.850,    SOLAR_PANELS.857,    0.002816
            344,    SOLAR_PANELS.851,    SOLAR_PANELS.858,    0.002816
            345,    SOLAR_PANELS.852,    SOLAR_PANELS.859,    0.002816
            346,    SOLAR_PANELS.853,    SOLAR_PANELS.860,    0.002816
            347,    SOLAR_PANELS.854,    SOLAR_PANELS.861,    0.002816
            348,    SOLAR_PANELS.855,    SOLAR_PANELS.862,    0.002816
            349,    SOLAR_PANELS.856,    SOLAR_PANELS.863,    0.002816
            350,    SOLAR_PANELS.856,    SOLAR_PANELS.870,    0.00495
            351,    SOLAR_PANELS.857,    SOLAR_PANELS.864,    0.002816
            352,    SOLAR_PANELS.857,    SOLAR_PANELS.871,    0.00495
            353,    SOLAR_PANELS.858,    SOLAR_PANELS.865,    0.002816
            354,    SOLAR_PANELS.858,    SOLAR_PANELS.872,    0.00495
            355,    SOLAR_PANELS.859,    SOLAR_PANELS.866,    0.002816
            356,    SOLAR_PANELS.859,    SOLAR_PANELS.873,    0.00495
            357,    SOLAR_PANELS.860,    SOLAR_PANELS.867,    0.002816
            358,    SOLAR_PANELS.860,    SOLAR_PANELS.874,    0.00495
            359,    SOLAR_PANELS.861,    SOLAR_PANELS.868,    0.002816
            360,    SOLAR_PANELS.861,    SOLAR_PANELS.875,    0.00495
            361,    SOLAR_PANELS.862,    SOLAR_PANELS.869,    0.002816
            362,    SOLAR_PANELS.862,    SOLAR_PANELS.876,    0.00495
            363,    SOLAR_PANELS.863,    SOLAR_PANELS.877,    0.002475
            364,    SOLAR_PANELS.864,    SOLAR_PANELS.878,    0.002475
            365,    SOLAR_PANELS.865,    SOLAR_PANELS.879,    0.002475
            366,    SOLAR_PANELS.866,    SOLAR_PANELS.880,    0.002475
            367,    SOLAR_PANELS.867,    SOLAR_PANELS.881,    0.002475
            368,    SOLAR_PANELS.868,    SOLAR_PANELS.882,    0.002475
            369,    SOLAR_PANELS.869,    SOLAR_PANELS.883,    0.002475
            370,    SOLAR_PANELS.870,    SOLAR_PANELS.877,    0.005632
            371,    SOLAR_PANELS.871,    SOLAR_PANELS.878,    0.005632
            372,    SOLAR_PANELS.872,    SOLAR_PANELS.879,    0.005632
            373,    SOLAR_PANELS.873,    SOLAR_PANELS.880,    0.005632
            374,    SOLAR_PANELS.874,    SOLAR_PANELS.881,    0.005632
            375,    SOLAR_PANELS.875,    SOLAR_PANELS.882,    0.005632
            376,    SOLAR_PANELS.876,    SOLAR_PANELS.883,    0.005632
HEADER NODE DATA, SPACE
            -1,    -270.42,    -1.0
HEADER SUBROUTINE
      SUBROUTINE TDHTR
C     This routine is to hold heaters at their midpoint temps
C     for steady state solutions.
      RETURN
      END
      SUBROUTINE TDREL
C     This routine is to release heaters for transient runs
C     for steady state solutions.
F     RETURN
F     END
F     SUBROUTINE TDHTOT
C     This routine prints out heater ontime and cycle summaries
F     RETURN
F     END
F     SUBROUTINE TDHTRST
C     This routine resets heater statistics
      CALL COMMON
      CC_2284 = 0.

F     RETURN
F     END
F     SUBROUTINE TDPREBL
C     This routine executes logic before the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTBL
C     This routine executes logic after the build statement
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE TDPOSTSL
C     This routine executes logic after the solution
M     CALL COMMON
F     RETURN
F     END
F     SUBROUTINE BASEPLOT
      CALL COMMON
F     RETURN
F     END
