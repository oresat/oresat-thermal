HEADER OPTIONS
C    SINDA Data generated with Thermal Desktop 6.0 Patch 25
C    Generated on Mon Jun 29 17:01:09 2020
C    From file: SimpleOreSat_v11.dwg
C    Case Set: Cold Case - High Solar Card to Frame Cond
C    TDUNITS,   Energy   =    J
C    TDUNITS,   Time     =    sec
C    TDUNITS,   Temp     =    C
C    TDUNITS,   Mass     =    kg
C    TDUNITS,   Length   =    m
C    TDUNITS,   Orbit    =    km
C    TDUNITS,   Pressure =    Pa
C    TDUNITS,   Force    =    N
C    TDUNITS,   Angle    =    Degrees
C    TDUNITS,   Volt     =    volt
C    TDUNITS,   Current  =    amp
C    TDUNITS,   Resistance =   ohm
C    Symbol Names, Evaluated values, Input Strings, Comments
C    Alpha_BlackAnno             0.88          0.88         Absportivity of black anno
C    Alpha_PurpleCoating         0.01          0.01         Absorptivity of purple coating on PCB
C    Alpha_SolarPanel            0.88          0.88
C    BatteryHeatDissipation      1.            1            Amount of heat (W) dissipated by battery pack
C    cp_Al                       900.          900          Specific heat of 6061-type2 Al
C    cp_Battery                  837.4         837.4
C    cp_PCB                      1144.         1144         Specific Heat of PCB assuming 97.5% FR4. 2.5% C
C    ElecConn_FortyPinConnector  0.1178        0.1178
C    ElecConn_SolarCardConnector 0.00558       0.00558
C    Epsilon_BlackAnno           0.88          0.88         Emissivity of black annodization
C    Epsilon_PurpleCoating       0.68          0.68         Emissivity of purple coating on PCB
C    Epsilon_SolarPanel          0.85          0.85
C    hrBetaAngle                 0.            0
C    hrEccen                     0.            0
C    hrIllum                     3.            3
C    hrMeanAnom                  180.          180
C    hrPeriod                    5553.62       5553.62      Always in current user units. If programming, use hrPerio...
C    hrPeriodSec                 5553.62       5553.62
C    hrPlanetX                   -1.           -1
C    hrPlanetY                   -5.296910e-14 -5.29691e-14
C    hrPlanetZ                   2.648450e-14  2.64845e-14
C    hrPos                       7.            7
C    hrShadowEntry               109.784       109.784
C    hrShadowExit                250.216       250.216
C    hrSpeed                     7.66856       7.66856
C    hrSubSolarMeanAnom          6.113030e-12  6.11303e-12  -180 to 180
C    hrSubSolarTrueAnom          6.113030e-12  6.11303e-12  -180 to 180
C    hrSunX                      -1.           -1
C    hrSunY                      1.066920e-13  1.06692e-13
C    hrSunZ                      2.648450e-14  2.64845e-14
C    hrTime                      2776.81       2776.81      Always in current user units. If programming, use hrTimeS...
C    hrTimeSec                   2776.81       2776.81
C    hrTimeShadowEntry           1693.6        1693.6
C    hrTimeShadowEntrySec        1693.6        1693.6
C    hrTimeShadowExit            3860.02       3860.02
C    hrTimeShadowExitSec         3860.02       3860.02
C    hrTrueAnom                  180.          180
C    hrVelocityX                 5.296910e-14  5.29691e-14
C    hrVelocityY                 -1.           -1
C    hrVelocityZ                 -4.228560e-27 -4.22856e-27
C    IC                          0.            0            Initial Condition Temp
C    k_Al                        167.          167          Conductivity of 6061-type2 Aluminum
C    k_Battery                   300.          300          Dummy conductivity of battery 
C    k_PCB                       12.           12           Conductivity of 2-layer FR4 PCB. Calculated assuming 90% ...
C    MechConn_BatteryToCard      0.108         0.108        Conductance of mechanical connection from battery to batt...
C    MechConn_CardToXFrame       0.144         0.144        Conductance of mechanical connection from PCB to (+x) frame
C    MechConn_CardToYFrames      0.3301        0.3301       Conductance of mechanical connection from PCB to (+/- y) ...
C    MechConn_EndCaps            0.8045        0.8045
C    MechConn_M2                 0.0256        0.0256
C    MechConn_RVT                1.21          1.21
C    MechConn_SolarCardToFrame   125.8142      125.8142     Found from table below:
C    rho_Al                      2700.         2700         Density of 6061-type2 Al
C    rho_Battery                 2007.7        2007.7
C    rho_PCB                     2077.         2077         Density of PCB assuming 97.5% FR4, 2.5% Cu
C
HEADER REGISTER DATA
      INT:CH1FFB = 0 $ Num Cycles for Heater-Battery +Z Heater[BATTERY]::1FFB
      INT:CH1FFC = 0 $ Num Cycles for Heater-Battery -Z Heater[BATTERY]::1FFC
      INT:HT1FFB = 0 $ On Off for Heater-Battery +Z Heater[BATTERY]::1FFB
      INT:HT1FFC = 0 $ On Off for Heater-Battery -Z Heater[BATTERY]::1FFC
      HY1FFB = 0 $ Heater Capacity for Heater-Battery +Z Heater[BATTERY]::1FFB
      HY1FFC = 0 $ Heater Capacity for Heater-Battery -Z Heater[BATTERY]::1FFC
      OT1FFB = 0 $ On Time for Heater-Battery +Z Heater[BATTERY]::1FFB
      OT1FFC = 0 $ On Time for Heater-Battery -Z Heater[BATTERY]::1FFC
      PO1FFB = 0 $ Power for Heater-Battery +Z Heater[BATTERY]::1FFB
      PO1FFC = 0 $ Power for Heater-Battery -Z Heater[BATTERY]::1FFC
      ST1FFB = 0 $ Sense Temperature for Heater-Battery +Z Heater[BATTERY]::1FFB
      ST1FFC = 0 $ Sense Temperature for Heater-Battery -Z Heater[BATTERY]::1FFC
      TP1FFB = 0 $ Total Power for Heater-Battery +Z Heater[BATTERY]::1FFB
      TP1FFC = 0 $ Total Power for Heater-Battery -Z Heater[BATTERY]::1FFC
      XP1FFB = 0 $ SS Proportional for Heater-Battery +Z Heater[BATTERY]::1FFB
      XP1FFC = 0 $ SS Proportional for Heater-Battery -Z Heater[BATTERY]::1FFC
HEADER NODE DATA, BACKPLANE_TO_FRAME
HEADER CONDUCTOR DATA, BACKPLANE_TO_FRAME
            1,    CARDS.242,    FRAMES.348,    0.0256
            2,    CARDS.249,    FRAMES.856,    0.0256
            3,    CARDS.251,    FRAMES.857,    0.0256
            4,    CARDS.252,    FRAMES.357,    0.0256
            5,    CARDS.253,    FRAMES.368,    0.0256
            6,    CARDS.257,    FRAMES.377,    0.0256
            7,    CARDS.258,    FRAMES.388,    0.0256
            8,    CARDS.262,    FRAMES.397,    0.0256
            9,    CARDS.486,    FRAMES.1147,    0.0256
            10,    CARDS.685,    FRAMES.235,    0.0256
            11,    CARDS.703,    FRAMES.258,    0.0256
            12,    CARDS.741,    FRAMES.267,    0.0256
            13,    CARDS.748,    FRAMES.278,    0.0256
HEADER NODE DATA, BATTERY
            1,    0.,    2.428469
            2,    0.,    4.856938
            3,    0.,    4.856938
            4,    0.,    2.428469
            5,    0.,    4.856938
            6,    0.,    9.713876
            7,    0.,    9.713876
            8,    0.,    4.856938
            9,    0.,    4.856938
            10,    0.,    9.713876
            11,    0.,    9.713876
            12,    0.,    4.856938
            13,    0.,    2.428469
            14,    0.,    4.856938
            15,    0.,    4.856938
            16,    0.,    2.428469
            17,    0.,    2.428469
            18,    0.,    4.856938
            19,    0.,    4.856938
            20,    0.,    2.428469
            21,    0.,    4.856938
            22,    0.,    9.713876
            23,    0.,    9.713876
            24,    0.,    4.856938
            25,    0.,    4.856938
            26,    0.,    9.713876
            27,    0.,    9.713876
            28,    0.,    4.856938
            29,    0.,    2.428469
            30,    0.,    4.856938
            31,    0.,    4.856938
            32,    0.,    2.428469
            69,    0.,    1.157155
            70,    0.,    2.31431
            71,    0.,    2.31431
            72,    0.,    2.31431
            73,    0.,    1.157155
            74,    0.,    1.157155
            75,    0.,    2.31431
            76,    0.,    0.5785774
            77,    0.,    1.157155
            78,    0.,    1.157155
            79,    0.,    1.157155
            80,    0.,    0.5785774
            81,    0.,    2.428469
            82,    0.,    9.713876
            83,    0.,    9.713876
            84,    0.,    4.856938
            85,    0.,    2.428469
            86,    0.,    4.856938
            87,    0.,    4.856938
            88,    0.,    2.428469
            89,    0.,    2.31431
            90,    0.,    2.428469
            91,    0.,    2.31431
            92,    0.,    2.31431
            93,    0.,    4.856938
            94,    0.,    2.31431
            95,    0.,    1.157155
            96,    0.,    4.856938
            97,    0.,    1.157155
            98,    0.,    4.856938
            99,    0.,    1.157155
            100,    0.,    2.428469
            101,    0.,    1.157155
            102,    0.,    2.31431
            103,    0.,    4.856938
            104,    0.,    2.31431
            105,    0.,    2.31431
            106,    0.,    9.713876
            107,    0.,    2.31431
            108,    0.,    2.31431
            109,    0.,    9.713876
            110,    0.,    2.31431
            111,    0.,    1.157155
            112,    0.,    4.856938
            113,    0.,    1.157155
            114,    0.,    0.5785774
            115,    0.,    4.856938
            116,    0.,    0.5785774
            117,    0.,    1.157155
            118,    0.,    9.713876
            119,    0.,    1.157155
            120,    0.,    1.157155
            121,    0.,    9.713876
            122,    0.,    1.157155
            123,    0.,    1.157155
            124,    0.,    4.856938
            125,    0.,    1.157155
            126,    0.,    0.5785774
            127,    0.,    2.428469
            128,    0.,    0.5785774
            129,    0.,    4.856938
            130,    0.,    4.856938
            131,    0.,    4.856938
            132,    0.,    2.428469
            133,    0.,    2.428469
            134,    0.,    4.856938
            135,    0.,    9.713876
            136,    0.,    1.157155
            137,    0.,    9.713876
            138,    0.,    2.31431
            139,    0.,    2.31431
            140,    0.,    2.31431
            141,    0.,    1.157155
            142,    0.,    1.157155
            143,    0.,    2.31431
            144,    0.,    0.5785774
            145,    0.,    1.157155
            146,    0.,    1.157155
            147,    0.,    1.157155
            148,    0.,    4.856938
            149,    0.,    0.5785774
            150,    0.,    4.856938
HEADER CONDUCTOR DATA, BATTERY
            1,    BATTERY.1,    BATTERY.2,    1.21875
            2,    BATTERY.1,    BATTERY.5,    1.846154
            3,    BATTERY.1,    BATTERY.17,    2.166667
            4,    BATTERY.2,    BATTERY.3,    1.21875
            5,    BATTERY.2,    BATTERY.6,    3.692308
            6,    BATTERY.2,    BATTERY.18,    4.333333
            7,    BATTERY.3,    BATTERY.4,    1.21875
            8,    BATTERY.3,    BATTERY.7,    3.692308
            9,    BATTERY.3,    BATTERY.19,    4.333333
            10,    BATTERY.4,    BATTERY.8,    1.846154
            11,    BATTERY.4,    BATTERY.20,    2.166667
            12,    BATTERY.5,    BATTERY.6,    2.4375
            13,    BATTERY.5,    BATTERY.9,    1.846154
            14,    BATTERY.5,    BATTERY.21,    4.333333
            15,    BATTERY.6,    BATTERY.7,    2.4375
            16,    BATTERY.6,    BATTERY.10,    3.692308
            17,    BATTERY.6,    BATTERY.22,    8.666666
            18,    BATTERY.7,    BATTERY.8,    2.4375
            19,    BATTERY.7,    BATTERY.11,    3.692308
            20,    BATTERY.7,    BATTERY.23,    8.666666
            21,    BATTERY.8,    BATTERY.12,    1.846154
            22,    BATTERY.8,    BATTERY.24,    4.333333
            23,    BATTERY.9,    BATTERY.10,    2.4375
            24,    BATTERY.9,    BATTERY.13,    1.846154
            25,    BATTERY.9,    BATTERY.25,    4.333333
            26,    BATTERY.10,    BATTERY.11,    2.4375
            27,    BATTERY.10,    BATTERY.14,    3.692308
            28,    BATTERY.10,    BATTERY.26,    8.666666
            29,    BATTERY.11,    BATTERY.12,    2.4375
            30,    BATTERY.11,    BATTERY.15,    3.692308
            31,    BATTERY.11,    BATTERY.27,    8.666666
            32,    BATTERY.12,    BATTERY.16,    1.846154
            33,    BATTERY.12,    BATTERY.28,    4.333333
            34,    BATTERY.13,    BATTERY.14,    1.21875
            35,    BATTERY.13,    BATTERY.29,    2.166667
            36,    BATTERY.14,    BATTERY.15,    1.21875
            37,    BATTERY.14,    BATTERY.30,    4.333333
            38,    BATTERY.15,    BATTERY.16,    1.21875
            39,    BATTERY.15,    BATTERY.31,    4.333333
            40,    BATTERY.16,    BATTERY.32,    2.166667
            41,    BATTERY.17,    BATTERY.18,    1.21875
            42,    BATTERY.17,    BATTERY.21,    1.846154
            43,    BATTERY.18,    BATTERY.19,    1.21875
            44,    BATTERY.18,    BATTERY.22,    3.692308
            45,    BATTERY.19,    BATTERY.20,    1.21875
            46,    BATTERY.19,    BATTERY.23,    3.692308
            47,    BATTERY.20,    BATTERY.24,    1.846154
            48,    BATTERY.21,    BATTERY.22,    2.4375
            49,    BATTERY.21,    BATTERY.25,    1.846154
            50,    BATTERY.22,    BATTERY.23,    2.4375
            51,    BATTERY.22,    BATTERY.26,    3.692308
            52,    BATTERY.23,    BATTERY.24,    2.4375
            53,    BATTERY.23,    BATTERY.27,    3.692308
            54,    BATTERY.24,    BATTERY.28,    1.846154
            55,    BATTERY.25,    BATTERY.26,    2.4375
            56,    BATTERY.25,    BATTERY.29,    1.846154
            57,    BATTERY.26,    BATTERY.27,    2.4375
            58,    BATTERY.26,    BATTERY.30,    3.692308
            59,    BATTERY.27,    BATTERY.28,    2.4375
            60,    BATTERY.27,    BATTERY.31,    3.692308
            61,    BATTERY.28,    BATTERY.32,    1.846154
            62,    BATTERY.29,    BATTERY.30,    1.21875
            63,    BATTERY.30,    BATTERY.31,    1.21875
            64,    BATTERY.31,    BATTERY.32,    1.21875
            65,    BATTERY.81,    BATTERY.90,    2.166667
            66,    BATTERY.81,    BATTERY.98,    1.21875
            67,    BATTERY.81,    BATTERY.134,    1.846154
            68,    BATTERY.82,    BATTERY.83,    2.4375
            69,    BATTERY.82,    BATTERY.86,    3.692308
            70,    BATTERY.82,    BATTERY.118,    8.666666
            71,    BATTERY.82,    BATTERY.135,    3.692308
            72,    BATTERY.82,    BATTERY.150,    2.4375
            73,    BATTERY.83,    BATTERY.84,    2.4375
            74,    BATTERY.83,    BATTERY.87,    3.692308
            75,    BATTERY.83,    BATTERY.121,    8.666666
            76,    BATTERY.83,    BATTERY.137,    3.692308
            77,    BATTERY.84,    BATTERY.88,    1.846154
            78,    BATTERY.84,    BATTERY.124,    4.333333
            79,    BATTERY.84,    BATTERY.148,    1.846154
            80,    BATTERY.85,    BATTERY.86,    1.21875
            81,    BATTERY.85,    BATTERY.127,    2.166667
            82,    BATTERY.85,    BATTERY.150,    1.846154
            83,    BATTERY.86,    BATTERY.87,    1.21875
            84,    BATTERY.86,    BATTERY.130,    4.333333
            85,    BATTERY.87,    BATTERY.88,    1.21875
            86,    BATTERY.87,    BATTERY.131,    4.333333
            87,    BATTERY.88,    BATTERY.132,    2.166667
            88,    BATTERY.90,    BATTERY.93,    1.21875
            89,    BATTERY.90,    BATTERY.103,    1.846154
            90,    BATTERY.93,    BATTERY.96,    1.21875
            91,    BATTERY.93,    BATTERY.98,    4.333333
            92,    BATTERY.93,    BATTERY.106,    3.692308
            93,    BATTERY.96,    BATTERY.100,    1.21875
            94,    BATTERY.96,    BATTERY.109,    3.692308
            95,    BATTERY.96,    BATTERY.129,    4.333333
            96,    BATTERY.98,    BATTERY.129,    1.21875
            97,    BATTERY.98,    BATTERY.135,    3.692308
            98,    BATTERY.100,    BATTERY.112,    1.846154
            99,    BATTERY.100,    BATTERY.133,    2.166667
            100,    BATTERY.103,    BATTERY.106,    2.4375
            101,    BATTERY.103,    BATTERY.115,    1.846154
            102,    BATTERY.103,    BATTERY.134,    4.333333
            103,    BATTERY.106,    BATTERY.109,    2.4375
            104,    BATTERY.106,    BATTERY.118,    3.692308
            105,    BATTERY.106,    BATTERY.135,    8.666666
            106,    BATTERY.109,    BATTERY.112,    2.4375
            107,    BATTERY.109,    BATTERY.121,    3.692308
            108,    BATTERY.109,    BATTERY.137,    8.666666
            109,    BATTERY.112,    BATTERY.124,    1.846154
            110,    BATTERY.112,    BATTERY.148,    4.333333
            111,    BATTERY.115,    BATTERY.118,    2.4375
            112,    BATTERY.115,    BATTERY.127,    1.846154
            113,    BATTERY.115,    BATTERY.150,    4.333333
            114,    BATTERY.118,    BATTERY.121,    2.4375
            115,    BATTERY.118,    BATTERY.130,    3.692308
            116,    BATTERY.121,    BATTERY.124,    2.4375
            117,    BATTERY.121,    BATTERY.131,    3.692308
            118,    BATTERY.124,    BATTERY.132,    1.846154
            119,    BATTERY.127,    BATTERY.130,    1.21875
            120,    BATTERY.129,    BATTERY.133,    1.21875
            121,    BATTERY.129,    BATTERY.137,    3.692308
            122,    BATTERY.130,    BATTERY.131,    1.21875
            123,    BATTERY.131,    BATTERY.132,    1.21875
            124,    BATTERY.133,    BATTERY.148,    1.846154
            125,    BATTERY.134,    BATTERY.135,    2.4375
            126,    BATTERY.134,    BATTERY.150,    1.846154
            127,    BATTERY.135,    BATTERY.137,    2.4375
            128,    BATTERY.137,    BATTERY.148,    2.4375
HEADER VARIABLES 1, BATTERY
C
C Heater-Battery -Z Heater[BATTERY]::1FFC
C
      HY1FFC = 1.
      PO1FFC = 1.
      IF( NSOL .LE. 1 ) THEN
          T__TD =   0.02383402 * BATTERY.T81
     +            + 0.03566529 * BATTERY.T82
     +            + 0.03566529 * BATTERY.T83
     +            + 0.03120713 * BATTERY.T84
     +            + 0.02383402 * BATTERY.T85
     +            + 0.03429355 * BATTERY.T86
     +            + 0.03429355 * BATTERY.T87
     +            + 0.02383402 * BATTERY.T88
     +            + 0.02383402 * BATTERY.T90
     +            + 0.03429355 * BATTERY.T93
     +            + 0.03429355 * BATTERY.T96
     +            + 0.03429355 * BATTERY.T98
     +            + 0.02383402 * BATTERY.T100
     +            + 0.03120713 * BATTERY.T103
     +            + 0.03566529 * BATTERY.T106
     +            + 0.03566529 * BATTERY.T109
     +            + 0.03120713 * BATTERY.T112
     +            + 0.03120713 * BATTERY.T115
     +            + 0.03566529 * BATTERY.T118
     +            + 0.03566529 * BATTERY.T121
     +            + 0.03120713 * BATTERY.T124
     +            + 0.02383402 * BATTERY.T127
     +            + 0.03429355 * BATTERY.T129
     +            + 0.03429355 * BATTERY.T130
     +            + 0.03429355 * BATTERY.T131
     +            + 0.02383402 * BATTERY.T132
     +            + 0.02383402 * BATTERY.T133
     +            + 0.03120713 * BATTERY.T134
     +            + 0.03566529 * BATTERY.T135
     +            + 0.03566529 * BATTERY.T137
     +            + 0.03120713 * BATTERY.T148
     +            + 0.03120713 * BATTERY.T150
          ST1FFC = T__TD
          O__TD = 5. $ ON TEMP
          F__TD = 6. $ OFF TEMP
          D__TD = F__TD - O__TD
          IF( T__TD .LT. F__TD .AND. D__TD .NE. 0. ) THEN
              X__TD = (F__TD - T__TD)/(D__TD)
              IF( X__TD .GT. 1. ) X__TD = 1.
          ELSE
              X__TD = 0.
          ENDIF
          X__TD = XP1FFC + ( X__TD - XP1FFC ) * 0.05
          IF( X__TD .LT. .001 ) X__TD = 0.
          IF( X__TD .GT. .999 ) X__TD = 1.
          PO1FFC = PO1FFC * X__TD 
          XP1FFC = X__TD
              BATTERY.Q90 = BATTERY.Q90 + PO1FFC * 0.02777778
              BATTERY.Q93 = BATTERY.Q93 + PO1FFC * 0.05555556
              BATTERY.Q96 = BATTERY.Q96 + PO1FFC * 0.05555556
              BATTERY.Q100 = BATTERY.Q100 + PO1FFC * 0.02777778
              BATTERY.Q103 = BATTERY.Q103 + PO1FFC * 0.05555556
              BATTERY.Q106 = BATTERY.Q106 + PO1FFC * 0.1111111
              BATTERY.Q109 = BATTERY.Q109 + PO1FFC * 0.1111111
              BATTERY.Q112 = BATTERY.Q112 + PO1FFC * 0.05555556
              BATTERY.Q115 = BATTERY.Q115 + PO1FFC * 0.05555556
              BATTERY.Q118 = BATTERY.Q118 + PO1FFC * 0.1111111
              BATTERY.Q121 = BATTERY.Q121 + PO1FFC * 0.1111111
              BATTERY.Q124 = BATTERY.Q124 + PO1FFC * 0.05555556
              BATTERY.Q127 = BATTERY.Q127 + PO1FFC * 0.02777778
              BATTERY.Q130 = BATTERY.Q130 + PO1FFC * 0.05555556
              BATTERY.Q131 = BATTERY.Q131 + PO1FFC * 0.05555556
              BATTERY.Q132 = BATTERY.Q132 + PO1FFC * 0.02777778
      ELSE
          T__TD = MIN( 
     +            BATTERY.T81,
     +            BATTERY.T82,
     +            BATTERY.T83,
     +            BATTERY.T84,
     +            BATTERY.T85,
     +            BATTERY.T86,
     +            BATTERY.T87,
     +            BATTERY.T88,
     +            BATTERY.T90,
     +            BATTERY.T93,
     +            BATTERY.T96,
     +            BATTERY.T98,
     +            BATTERY.T100,
     +            BATTERY.T103,
     +            BATTERY.T106,
     +            BATTERY.T109,
     +            BATTERY.T112,
     +            BATTERY.T115,
     +            BATTERY.T118,
     +            BATTERY.T121,
     +            BATTERY.T124,
     +            BATTERY.T127,
     +            BATTERY.T129,
     +            BATTERY.T130,
     +            BATTERY.T131,
     +            BATTERY.T132,
     +            BATTERY.T133,
     +            BATTERY.T134,
     +            BATTERY.T135,
     +            BATTERY.T137,
     +            BATTERY.T148,
     +            BATTERY.T150 )
          ST1FFC = T__TD
          O__TD = 5. $ ON TEMP
          F__TD = 6. $ OFF TEMP
          IF( T__TD .LT. O__TD .OR.
     +       (HT1FFC .EQ. 1 .AND. T__TD .LT. F__TD ) ) THEN
              IF( HT1FFC .EQ. 0 ) CH1FFC = 1 + CH1FFC
              HT1FFC = 1
              BATTERY.Q90 = BATTERY.Q90 + PO1FFC * 0.02777778
              BATTERY.Q93 = BATTERY.Q93 + PO1FFC * 0.05555556
              BATTERY.Q96 = BATTERY.Q96 + PO1FFC * 0.05555556
              BATTERY.Q100 = BATTERY.Q100 + PO1FFC * 0.02777778
              BATTERY.Q103 = BATTERY.Q103 + PO1FFC * 0.05555556
              BATTERY.Q106 = BATTERY.Q106 + PO1FFC * 0.1111111
              BATTERY.Q109 = BATTERY.Q109 + PO1FFC * 0.1111111
              BATTERY.Q112 = BATTERY.Q112 + PO1FFC * 0.05555556
              BATTERY.Q115 = BATTERY.Q115 + PO1FFC * 0.05555556
              BATTERY.Q118 = BATTERY.Q118 + PO1FFC * 0.1111111
              BATTERY.Q121 = BATTERY.Q121 + PO1FFC * 0.1111111
              BATTERY.Q124 = BATTERY.Q124 + PO1FFC * 0.05555556
              BATTERY.Q127 = BATTERY.Q127 + PO1FFC * 0.02777778
              BATTERY.Q130 = BATTERY.Q130 + PO1FFC * 0.05555556
              BATTERY.Q131 = BATTERY.Q131 + PO1FFC * 0.05555556
              BATTERY.Q132 = BATTERY.Q132 + PO1FFC * 0.02777778
          ELSE
              HT1FFC = 0
              PO1FFC = 0.
          ENDIF
      ENDIF
C
C Heater-Battery +Z Heater[BATTERY]::1FFB
C
      HY1FFB = 1.
      PO1FFB = 1.
      IF( NSOL .LE. 1 ) THEN
          T__TD =   0.02383402 * BATTERY.T1
     +            + 0.03429355 * BATTERY.T2
     +            + 0.03429355 * BATTERY.T3
     +            + 0.02383402 * BATTERY.T4
     +            + 0.03120713 * BATTERY.T5
     +            + 0.03566529 * BATTERY.T6
     +            + 0.03566529 * BATTERY.T7
     +            + 0.03120713 * BATTERY.T8
     +            + 0.03120713 * BATTERY.T9
     +            + 0.03566529 * BATTERY.T10
     +            + 0.03566529 * BATTERY.T11
     +            + 0.03120713 * BATTERY.T12
     +            + 0.02383402 * BATTERY.T13
     +            + 0.03429355 * BATTERY.T14
     +            + 0.03429355 * BATTERY.T15
     +            + 0.02383402 * BATTERY.T16
     +            + 0.02383402 * BATTERY.T17
     +            + 0.03429355 * BATTERY.T18
     +            + 0.03429355 * BATTERY.T19
     +            + 0.02383402 * BATTERY.T20
     +            + 0.03120713 * BATTERY.T21
     +            + 0.03566529 * BATTERY.T22
     +            + 0.03566529 * BATTERY.T23
     +            + 0.03120713 * BATTERY.T24
     +            + 0.03120713 * BATTERY.T25
     +            + 0.03566529 * BATTERY.T26
     +            + 0.03566529 * BATTERY.T27
     +            + 0.03120713 * BATTERY.T28
     +            + 0.02383402 * BATTERY.T29
     +            + 0.03429355 * BATTERY.T30
     +            + 0.03429355 * BATTERY.T31
     +            + 0.02383402 * BATTERY.T32
          ST1FFB = T__TD
          O__TD = 5. $ ON TEMP
          F__TD = 6. $ OFF TEMP
          D__TD = F__TD - O__TD
          IF( T__TD .LT. F__TD .AND. D__TD .NE. 0. ) THEN
              X__TD = (F__TD - T__TD)/(D__TD)
              IF( X__TD .GT. 1. ) X__TD = 1.
          ELSE
              X__TD = 0.
          ENDIF
          X__TD = XP1FFB + ( X__TD - XP1FFB ) * 0.05
          IF( X__TD .LT. .001 ) X__TD = 0.
          IF( X__TD .GT. .999 ) X__TD = 1.
          PO1FFB = PO1FFB * X__TD 
          XP1FFB = X__TD
              BATTERY.Q17 = BATTERY.Q17 + PO1FFB * 0.02777778
              BATTERY.Q18 = BATTERY.Q18 + PO1FFB * 0.05555556
              BATTERY.Q19 = BATTERY.Q19 + PO1FFB * 0.05555556
              BATTERY.Q20 = BATTERY.Q20 + PO1FFB * 0.02777778
              BATTERY.Q21 = BATTERY.Q21 + PO1FFB * 0.05555556
              BATTERY.Q22 = BATTERY.Q22 + PO1FFB * 0.1111111
              BATTERY.Q23 = BATTERY.Q23 + PO1FFB * 0.1111111
              BATTERY.Q24 = BATTERY.Q24 + PO1FFB * 0.05555556
              BATTERY.Q25 = BATTERY.Q25 + PO1FFB * 0.05555556
              BATTERY.Q26 = BATTERY.Q26 + PO1FFB * 0.1111111
              BATTERY.Q27 = BATTERY.Q27 + PO1FFB * 0.1111111
              BATTERY.Q28 = BATTERY.Q28 + PO1FFB * 0.05555556
              BATTERY.Q29 = BATTERY.Q29 + PO1FFB * 0.02777778
              BATTERY.Q30 = BATTERY.Q30 + PO1FFB * 0.05555556
              BATTERY.Q31 = BATTERY.Q31 + PO1FFB * 0.05555556
              BATTERY.Q32 = BATTERY.Q32 + PO1FFB * 0.02777778
      ELSE
          T__TD = MIN( 
     +            BATTERY.T1,
     +            BATTERY.T2,
     +            BATTERY.T3,
     +            BATTERY.T4,
     +            BATTERY.T5,
     +            BATTERY.T6,
     +            BATTERY.T7,
     +            BATTERY.T8,
     +            BATTERY.T9,
     +            BATTERY.T10,
     +            BATTERY.T11,
     +            BATTERY.T12,
     +            BATTERY.T13,
     +            BATTERY.T14,
     +            BATTERY.T15,
     +            BATTERY.T16,
     +            BATTERY.T17,
     +            BATTERY.T18,
     +            BATTERY.T19,
     +            BATTERY.T20,
     +            BATTERY.T21,
     +            BATTERY.T22,
     +            BATTERY.T23,
     +            BATTERY.T24,
     +            BATTERY.T25,
     +            BATTERY.T26,
     +            BATTERY.T27,
     +            BATTERY.T28,
     +            BATTERY.T29,
     +            BATTERY.T30,
     +            BATTERY.T31,
     +            BATTERY.T32 )
          ST1FFB = T__TD
          O__TD = 5. $ ON TEMP
          F__TD = 6. $ OFF TEMP
          IF( T__TD .LT. O__TD .OR.
     +       (HT1FFB .EQ. 1 .AND. T__TD .LT. F__TD ) ) THEN
              IF( HT1FFB .EQ. 0 ) CH1FFB = 1 + CH1FFB
              HT1FFB = 1
              BATTERY.Q17 = BATTERY.Q17 + PO1FFB * 0.02777778
              BATTERY.Q18 = BATTERY.Q18 + PO1FFB * 0.05555556
              BATTERY.Q19 = BATTERY.Q19 + PO1FFB * 0.05555556
              BATTERY.Q20 = BATTERY.Q20 + PO1FFB * 0.02777778
              BATTERY.Q21 = BATTERY.Q21 + PO1FFB * 0.05555556
              BATTERY.Q22 = BATTERY.Q22 + PO1FFB * 0.1111111
              BATTERY.Q23 = BATTERY.Q23 + PO1FFB * 0.1111111
              BATTERY.Q24 = BATTERY.Q24 + PO1FFB * 0.05555556
              BATTERY.Q25 = BATTERY.Q25 + PO1FFB * 0.05555556
              BATTERY.Q26 = BATTERY.Q26 + PO1FFB * 0.1111111
              BATTERY.Q27 = BATTERY.Q27 + PO1FFB * 0.1111111
              BATTERY.Q28 = BATTERY.Q28 + PO1FFB * 0.05555556
              BATTERY.Q29 = BATTERY.Q29 + PO1FFB * 0.02777778
              BATTERY.Q30 = BATTERY.Q30 + PO1FFB * 0.05555556
              BATTERY.Q31 = BATTERY.Q31 + PO1FFB * 0.05555556
              BATTERY.Q32 = BATTERY.Q32 + PO1FFB * 0.02777778
          ELSE
              HT1FFB = 0
              PO1FFB = 0.
          ENDIF
      ENDIF
HEADER VARIABLES 2, BATTERY
      IF( HT1FFC .EQ. 1 ) THEN
          OT1FFC = OT1FFC + DTIMEU
          TP1FFC = TP1FFC + DTIMEU * PO1FFC
      ENDIF
      IF( HT1FFB .EQ. 1 ) THEN
          OT1FFB = OT1FFB + DTIMEU
          TP1FFB = TP1FFB + DTIMEU * PO1FFB
      ENDIF
HEADER NODE DATA, CARDS
            2,    0.,    0.5785774
            3,    0.,    1.157155
            4,    0.,    1.157155
            5,    0.,    1.157155
            6,    0.,    0.5785774
            7,    0.,    1.157155
            8,    0.,    2.31431
            9,    0.,    2.31431
            10,    0.,    2.31431
            11,    0.,    1.157155
            12,    0.,    1.157155
            13,    0.,    2.31431
            14,    0.,    2.31431
            15,    0.,    2.31431
            16,    0.,    1.157155
            17,    0.,    1.157155
            18,    0.,    2.31431
            19,    0.,    2.31431
            20,    0.,    2.31431
            21,    0.,    1.157155
            22,    0.,    0.5785774
            23,    0.,    1.157155
            24,    0.,    1.157155
            25,    0.,    1.157155
            26,    0.,    0.5785774
            66,    0.,    0.5785774
            67,    0.,    1.157155
            68,    0.,    1.157155
            69,    0.,    1.157155
            70,    0.,    0.5785774
            71,    0.,    1.157155
            72,    0.,    2.31431
            73,    0.,    2.31431
            74,    0.,    2.31431
            75,    0.,    1.157155
            76,    0.,    1.157155
            77,    0.,    2.31431
            78,    0.,    2.31431
            79,    0.,    2.31431
            80,    0.,    1.157155
            81,    0.,    1.157155
            82,    0.,    2.31431
            83,    0.,    2.31431
            84,    0.,    2.31431
            85,    0.,    1.157155
            86,    0.,    0.5785774
            87,    0.,    1.157155
            88,    0.,    1.157155
            89,    0.,    1.157155
            90,    0.,    0.5785774
            186,    0.,    2.259924
            193,    0.,    2.259924
            200,    0.,    1.129962
            207,    0.,    1.129962
            214,    0.,    2.259924
            221,    0.,    2.259924
            228,    0.,    2.259924
            235,    0.,    1.129962
            242,    0.,    1.129962
            249,    0.,    2.259924
            250,    0.,    2.259924
            251,    0.,    2.259924
            252,    0.,    1.129962
            253,    0.,    1.129962
            254,    0.,    2.259924
            255,    0.,    2.259924
            256,    0.,    2.259924
            257,    0.,    1.129962
            258,    0.,    1.129962
            259,    0.,    2.259924
            260,    0.,    2.259924
            261,    0.,    2.259924
            262,    0.,    1.129962
            263,    0.,    0.5649809
            264,    0.,    1.129962
            265,    0.,    1.129962
            266,    0.,    1.129962
            267,    0.,    0.5649809
            458,    0.,    0.5649809
            461,    0.,    1.129962
            468,    0.,    1.129962
            474,    0.,    1.129962
            480,    0.,    0.5649809
            486,    0.,    1.129962
            643,    0.,    2.259924
            685,    0.,    1.129962
            703,    0.,    1.129962
            721,    0.,    2.259924
            727,    0.,    2.259924
            734,    0.,    2.259924
            741,    0.,    1.129962
            748,    0.,    1.129962
            755,    0.,    2.259924
            762,    0.,    2.259924
            769,    0.,    2.259924
            776,    0.,    1.129962
            783,    0.,    1.129962
            790,    0.,    2.259924
            795,    0.,    2.259924
            799,    0.,    2.259924
            800,    0.,    2.376088
            801,    0.,    1.188044
            802,    0.,    1.188044
            803,    0.,    2.376088
            804,    0.,    2.376088
            805,    0.,    2.376088
            806,    0.,    1.188044
            807,    0.,    1.188044
            808,    0.,    2.376088
            809,    0.,    2.376088
            810,    0.,    0.594022
            811,    0.,    2.376088
            812,    0.,    1.188044
            813,    0.,    0.594022
            814,    0.,    1.188044
            815,    0.,    1.188044
            816,    0.,    1.188044
            817,    0.,    0.594022
            818,    0.,    1.188044
            819,    0.,    1.188044
            820,    0.,    1.188044
            821,    0.,    0.594022
            822,    0.,    0.594022
            823,    0.,    1.188044
            824,    0.,    1.188044
            825,    0.,    1.188044
            826,    0.,    1.188044
            827,    0.,    0.594022
            828,    0.,    1.188044
            829,    0.,    2.376088
            830,    0.,    2.376088
            831,    0.,    2.376088
            832,    0.,    1.188044
            833,    0.,    1.188044
            834,    0.,    2.376088
            835,    0.,    2.376088
            836,    0.,    2.376088
            837,    0.,    2.376088
            838,    0.,    1.188044
            839,    0.,    1.188044
            840,    0.,    2.376088
            841,    0.,    2.376088
            842,    0.,    2.376088
            843,    0.,    1.188044
            844,    0.,    0.594022
            845,    0.,    1.188044
            846,    0.,    1.188044
            847,    0.,    1.188044
            848,    0.,    2.376088
            849,    0.,    0.594022
            850,    0.,    2.31431
            851,    0.,    2.31431
            852,    0.,    2.31431
            853,    0.,    1.157155
            854,    0.,    1.157155
            855,    0.,    1.157155
            856,    0.,    1.157155
            857,    0.,    1.157155
            858,    0.,    1.157155
            859,    0.,    2.31431
            860,    0.,    2.31431
            861,    0.,    2.31431
            862,    0.,    2.31431
            863,    0.,    2.31431
            864,    0.,    2.31431
            865,    0.,    2.31431
            866,    0.,    2.31431
            867,    0.,    2.31431
            868,    0.,    1.157155
            869,    0.,    1.157155
            870,    0.,    1.157155
            871,    0.,    1.157155
            872,    0.,    1.157155
            873,    0.,    1.157155
            874,    0.,    2.31431
            875,    0.,    2.31431
            876,    0.,    2.31431
            877,    0.,    2.31431
            878,    0.,    2.31431
            879,    0.,    2.31431
            880,    0.,    0.5785774
            881,    0.,    0.5785774
            882,    0.,    0.5785774
            883,    0.,    2.31431
            884,    0.,    2.31431
            885,    0.,    2.31431
            886,    0.,    1.157155
            887,    0.,    1.157155
            888,    0.,    1.157155
            889,    0.,    0.5785774
            890,    0.,    0.5785774
            891,    0.,    0.5785774
            892,    0.,    1.157155
            893,    0.,    1.157155
            894,    0.,    1.157155
            895,    0.,    1.157155
            896,    0.,    1.157155
            897,    0.,    1.157155
            898,    0.,    1.157155
            899,    0.,    1.157155
            900,    0.,    1.157155
            901,    0.,    0.5785774
            902,    0.,    0.5785774
            903,    0.,    0.5785774
            904,    0.,    1.157155
            905,    0.,    1.157155
            906,    0.,    1.157155
            907,    0.,    1.157155
            908,    0.,    1.157155
            909,    0.,    1.157155
            910,    0.,    1.157155
            911,    0.,    1.157155
            912,    0.,    1.157155
            913,    0.,    0.5785774
            914,    0.,    0.5785774
            915,    0.,    0.5785774
            916,    0.,    0.5785774
            917,    0.,    0.5785774
            918,    0.,    0.5785774
            919,    0.,    0.5785774
            920,    0.,    1.157155
            921,    0.,    1.157155
            922,    0.,    1.157155
            923,    0.,    1.157155
            924,    0.,    1.157155
            925,    0.,    1.157155
            926,    0.,    1.157155
            927,    0.,    1.157155
            928,    0.,    1.157155
            929,    0.,    1.157155
            930,    0.,    1.157155
            931,    0.,    1.157155
            932,    0.,    1.157155
            933,    0.,    1.157155
            934,    0.,    1.157155
            935,    0.,    0.5785774
            936,    0.,    0.5785774
            937,    0.,    0.5785774
            938,    0.,    0.5785774
            939,    0.,    1.157155
            940,    0.,    1.157155
            941,    0.,    1.157155
            942,    0.,    1.157155
            943,    0.,    2.31431
            944,    0.,    2.31431
            945,    0.,    2.31431
            946,    0.,    2.31431
            947,    0.,    2.31431
            948,    0.,    2.31431
            949,    0.,    2.31431
            950,    0.,    2.31431
            951,    0.,    2.31431
            952,    0.,    2.31431
            953,    0.,    2.31431
            954,    0.,    2.31431
            955,    0.,    1.157155
            956,    0.,    1.157155
            957,    0.,    1.157155
            958,    0.,    1.157155
            959,    0.,    1.157155
            960,    0.,    1.157155
            961,    0.,    1.157155
            962,    0.,    1.157155
            963,    0.,    2.31431
            964,    0.,    2.31431
            965,    0.,    2.31431
            966,    0.,    2.31431
            967,    0.,    2.31431
            968,    0.,    2.31431
            969,    0.,    2.31431
            970,    0.,    2.31431
            971,    0.,    2.31431
            972,    0.,    2.31431
            973,    0.,    2.31431
            974,    0.,    2.31431
            975,    0.,    2.31431
            976,    0.,    2.31431
            977,    0.,    2.31431
            978,    0.,    1.157155
            979,    0.,    1.157155
            980,    0.,    1.157155
            981,    0.,    1.157155
            982,    0.,    1.157155
            983,    0.,    1.157155
            984,    0.,    1.157155
            985,    0.,    1.157155
            986,    0.,    2.31431
            987,    0.,    2.31431
            988,    0.,    2.31431
            989,    0.,    2.31431
            990,    0.,    2.31431
            991,    0.,    2.31431
            992,    0.,    2.31431
            993,    0.,    2.31431
            994,    0.,    2.31431
            995,    0.,    2.31431
            996,    0.,    2.31431
            997,    0.,    2.31431
            998,    0.,    1.157155
            999,    0.,    1.157155
            1000,    0.,    1.157155
            1001,    0.,    1.157155
            1002,    0.,    0.5785774
            1003,    0.,    0.5785774
            1004,    0.,    0.5785774
            1005,    0.,    0.5785774
            1006,    0.,    1.157155
            1007,    0.,    1.157155
            1008,    0.,    1.157155
            1009,    0.,    1.157155
            1010,    0.,    1.157155
            1011,    0.,    1.157155
            1012,    0.,    1.157155
            1013,    0.,    1.157155
            1014,    0.,    1.157155
            1015,    0.,    1.157155
            1016,    0.,    1.157155
            1017,    0.,    1.157155
            1018,    0.,    2.31431
            1019,    0.,    2.31431
            1020,    0.,    2.31431
            1021,    0.,    0.5785774
            1022,    0.,    0.5785774
            1023,    0.,    0.5785774
            1024,    0.,    0.5785774
HEADER ARRAY DATA, CARDS
C     heatload_1FED_time:
            3 = 
            0.
            5552.
            5553.
            6153.
            6154.
            11105.
            11106.
            11706.
            11707.
            16658.
            16659.
            17259.
            17260.
            22211.
            22212.
            22812.
            22813.
            27764.
            27765.
            28365.
            28366.
            33317.
            33318.
            33918.
            33919.
            38870.
            38871.
            39471.
            39472.
C     heatload_1FED_value:
            4 = 
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
C     heatload_1FF9_time:
            1 = 
            0.
            5552.
            5553.
            6153.
            6154.
            11105.
            11106.
            11706.
            11707.
            16658.
            16659.
            17259.
            17260.
            22211.
            22212.
            22812.
            22813.
            27764.
            27765.
            28365.
            28366.
            33317.
            33318.
            33918.
            33919.
            38870.
            38871.
            39471.
            39472.
C     heatload_1FF9_value:
            2 = 
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
            0.
            1.
            1.
            0.
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
            81,    CARDS.2,    CARDS.3,    0.009856262
            82,    CARDS.2,    CARDS.7,    0.0093504
            83,    CARDS.3,    CARDS.4,    0.009856262
            84,    CARDS.3,    CARDS.8,    0.0187008
            85,    CARDS.4,    CARDS.5,    0.009856262
            86,    CARDS.4,    CARDS.9,    0.0187008
            87,    CARDS.5,    CARDS.6,    0.009856262
            88,    CARDS.5,    CARDS.10,    0.0187008
            89,    CARDS.6,    CARDS.11,    0.0093504
            90,    CARDS.7,    CARDS.8,    0.01971252
            91,    CARDS.7,    CARDS.12,    0.0093504
            92,    CARDS.8,    CARDS.9,    0.01971252
            93,    CARDS.8,    CARDS.13,    0.0187008
            94,    CARDS.9,    CARDS.10,    0.01971252
            95,    CARDS.9,    CARDS.14,    0.0187008
            96,    CARDS.10,    CARDS.11,    0.01971252
            97,    CARDS.10,    CARDS.15,    0.0187008
            98,    CARDS.11,    CARDS.16,    0.0093504
            99,    CARDS.12,    CARDS.13,    0.01971252
            100,    CARDS.12,    CARDS.17,    0.0093504
            101,    CARDS.13,    CARDS.14,    0.01971252
            102,    CARDS.13,    CARDS.18,    0.0187008
            103,    CARDS.14,    CARDS.15,    0.01971252
            104,    CARDS.14,    CARDS.19,    0.0187008
            105,    CARDS.15,    CARDS.16,    0.01971252
            106,    CARDS.15,    CARDS.20,    0.0187008
            107,    CARDS.16,    CARDS.21,    0.0093504
            108,    CARDS.17,    CARDS.18,    0.01971252
            109,    CARDS.17,    CARDS.22,    0.0093504
            110,    CARDS.18,    CARDS.19,    0.01971252
            111,    CARDS.18,    CARDS.23,    0.0187008
            112,    CARDS.19,    CARDS.20,    0.01971252
            113,    CARDS.19,    CARDS.24,    0.0187008
            114,    CARDS.20,    CARDS.21,    0.01971252
            115,    CARDS.20,    CARDS.25,    0.0187008
            116,    CARDS.21,    CARDS.26,    0.0093504
            117,    CARDS.22,    CARDS.23,    0.009856262
            118,    CARDS.23,    CARDS.24,    0.009856262
            119,    CARDS.24,    CARDS.25,    0.009856262
            120,    CARDS.25,    CARDS.26,    0.009856262
            121,    CARDS.66,    CARDS.67,    0.009856262
            122,    CARDS.66,    CARDS.71,    0.0093504
            123,    CARDS.67,    CARDS.68,    0.009856262
            124,    CARDS.67,    CARDS.72,    0.0187008
            125,    CARDS.68,    CARDS.69,    0.009856262
            126,    CARDS.68,    CARDS.73,    0.0187008
            127,    CARDS.69,    CARDS.70,    0.009856262
            128,    CARDS.69,    CARDS.74,    0.0187008
            129,    CARDS.70,    CARDS.75,    0.0093504
            130,    CARDS.71,    CARDS.72,    0.01971252
            131,    CARDS.71,    CARDS.76,    0.0093504
            132,    CARDS.72,    CARDS.73,    0.01971252
            133,    CARDS.72,    CARDS.77,    0.0187008
            134,    CARDS.73,    CARDS.74,    0.01971252
            135,    CARDS.73,    CARDS.78,    0.0187008
            136,    CARDS.74,    CARDS.75,    0.01971252
            137,    CARDS.74,    CARDS.79,    0.0187008
            138,    CARDS.75,    CARDS.80,    0.0093504
            139,    CARDS.76,    CARDS.77,    0.01971252
            140,    CARDS.76,    CARDS.81,    0.0093504
            141,    CARDS.77,    CARDS.78,    0.01971252
            142,    CARDS.77,    CARDS.82,    0.0187008
            143,    CARDS.78,    CARDS.79,    0.01971252
            144,    CARDS.78,    CARDS.83,    0.0187008
            145,    CARDS.79,    CARDS.80,    0.01971252
            146,    CARDS.79,    CARDS.84,    0.0187008
            147,    CARDS.80,    CARDS.85,    0.0093504
            148,    CARDS.81,    CARDS.82,    0.01971252
            149,    CARDS.81,    CARDS.86,    0.0093504
            150,    CARDS.82,    CARDS.83,    0.01971252
            151,    CARDS.82,    CARDS.87,    0.0187008
            152,    CARDS.83,    CARDS.84,    0.01971252
            153,    CARDS.83,    CARDS.88,    0.0187008
            154,    CARDS.84,    CARDS.85,    0.01971252
            155,    CARDS.84,    CARDS.89,    0.0187008
            156,    CARDS.85,    CARDS.90,    0.0093504
            157,    CARDS.86,    CARDS.87,    0.009856262
            158,    CARDS.87,    CARDS.88,    0.009856262
            159,    CARDS.88,    CARDS.89,    0.009856262
            160,    CARDS.89,    CARDS.90,    0.009856262
            161,    CARDS.186,    CARDS.193,    0.01826133
            162,    CARDS.186,    CARDS.221,    0.02018692
            163,    CARDS.186,    CARDS.762,    0.02018692
            164,    CARDS.186,    CARDS.790,    0.01826133
            165,    CARDS.193,    CARDS.200,    0.01826133
            166,    CARDS.193,    CARDS.228,    0.02018692
            167,    CARDS.193,    CARDS.769,    0.02018692
            168,    CARDS.200,    CARDS.235,    0.01009346
            169,    CARDS.200,    CARDS.776,    0.01009346
            170,    CARDS.207,    CARDS.214,    0.01826133
            171,    CARDS.207,    CARDS.242,    0.01009346
            172,    CARDS.207,    CARDS.783,    0.01009346
            173,    CARDS.214,    CARDS.221,    0.01826133
            174,    CARDS.214,    CARDS.249,    0.02018692
            175,    CARDS.214,    CARDS.790,    0.02018692
            176,    CARDS.221,    CARDS.228,    0.01826133
            177,    CARDS.221,    CARDS.250,    0.02018692
            178,    CARDS.228,    CARDS.235,    0.01826133
            179,    CARDS.228,    CARDS.251,    0.02018692
            180,    CARDS.235,    CARDS.252,    0.01009346
            181,    CARDS.242,    CARDS.249,    0.01826133
            182,    CARDS.242,    CARDS.253,    0.01009346
            183,    CARDS.249,    CARDS.250,    0.01826133
            184,    CARDS.249,    CARDS.254,    0.02018692
            185,    CARDS.250,    CARDS.251,    0.01826133
            186,    CARDS.250,    CARDS.255,    0.02018692
            187,    CARDS.251,    CARDS.252,    0.01826133
            188,    CARDS.251,    CARDS.256,    0.02018692
            189,    CARDS.252,    CARDS.257,    0.01009346
            190,    CARDS.253,    CARDS.254,    0.01826133
            191,    CARDS.253,    CARDS.258,    0.01009346
            192,    CARDS.254,    CARDS.255,    0.01826133
            193,    CARDS.254,    CARDS.259,    0.02018692
            194,    CARDS.255,    CARDS.256,    0.01826133
            195,    CARDS.255,    CARDS.260,    0.02018692
            196,    CARDS.256,    CARDS.257,    0.01826133
            197,    CARDS.256,    CARDS.261,    0.02018692
            198,    CARDS.257,    CARDS.262,    0.01009346
            199,    CARDS.258,    CARDS.259,    0.01826133
            200,    CARDS.258,    CARDS.263,    0.01009346
            201,    CARDS.259,    CARDS.260,    0.01826133
            202,    CARDS.259,    CARDS.264,    0.02018692
            203,    CARDS.260,    CARDS.261,    0.01826133
            204,    CARDS.260,    CARDS.265,    0.02018692
            205,    CARDS.261,    CARDS.262,    0.01826133
            206,    CARDS.261,    CARDS.266,    0.02018692
            207,    CARDS.262,    CARDS.267,    0.01009346
            208,    CARDS.263,    CARDS.264,    0.009130667
            209,    CARDS.264,    CARDS.265,    0.009130667
            210,    CARDS.265,    CARDS.266,    0.009130667
            211,    CARDS.266,    CARDS.267,    0.009130667
            212,    CARDS.458,    CARDS.461,    0.009130667
            213,    CARDS.458,    CARDS.486,    0.01009346
            214,    CARDS.461,    CARDS.468,    0.009130667
            215,    CARDS.461,    CARDS.643,    0.02018692
            216,    CARDS.468,    CARDS.474,    0.009130667
            217,    CARDS.468,    CARDS.795,    0.02018692
            218,    CARDS.474,    CARDS.480,    0.009130667
            219,    CARDS.474,    CARDS.799,    0.02018692
            220,    CARDS.480,    CARDS.685,    0.01009346
            221,    CARDS.486,    CARDS.643,    0.01826133
            222,    CARDS.486,    CARDS.703,    0.01009346
            223,    CARDS.643,    CARDS.721,    0.02018692
            224,    CARDS.643,    CARDS.795,    0.01826133
            225,    CARDS.685,    CARDS.741,    0.01009346
            226,    CARDS.685,    CARDS.799,    0.01826133
            227,    CARDS.703,    CARDS.721,    0.01826133
            228,    CARDS.703,    CARDS.748,    0.01009346
            229,    CARDS.721,    CARDS.727,    0.01826133
            230,    CARDS.721,    CARDS.755,    0.02018692
            231,    CARDS.727,    CARDS.734,    0.01826133
            232,    CARDS.727,    CARDS.762,    0.02018692
            233,    CARDS.727,    CARDS.795,    0.02018692
            234,    CARDS.734,    CARDS.741,    0.01826133
            235,    CARDS.734,    CARDS.769,    0.02018692
            236,    CARDS.734,    CARDS.799,    0.02018692
            237,    CARDS.741,    CARDS.776,    0.01009346
            238,    CARDS.748,    CARDS.755,    0.01826133
            239,    CARDS.748,    CARDS.783,    0.01009346
            240,    CARDS.755,    CARDS.762,    0.01826133
            241,    CARDS.755,    CARDS.790,    0.02018692
            242,    CARDS.762,    CARDS.769,    0.01826133
            243,    CARDS.769,    CARDS.776,    0.01826133
            244,    CARDS.783,    CARDS.790,    0.01826133
            245,    CARDS.795,    CARDS.799,    0.01826133
            246,    CARDS.800,    CARDS.801,    0.0192
            247,    CARDS.800,    CARDS.805,    0.0192
            248,    CARDS.800,    CARDS.820,    0.0192
            249,    CARDS.800,    CARDS.848,    0.0192
            250,    CARDS.801,    CARDS.806,    0.0096
            251,    CARDS.801,    CARDS.821,    0.0096
            252,    CARDS.802,    CARDS.803,    0.0192
            253,    CARDS.802,    CARDS.807,    0.0096
            254,    CARDS.802,    CARDS.826,    0.0096
            255,    CARDS.803,    CARDS.804,    0.0192
            256,    CARDS.803,    CARDS.808,    0.0192
            257,    CARDS.803,    CARDS.837,    0.0192
            258,    CARDS.804,    CARDS.805,    0.0192
            259,    CARDS.804,    CARDS.809,    0.0192
            260,    CARDS.804,    CARDS.848,    0.0192
            261,    CARDS.805,    CARDS.806,    0.0192
            262,    CARDS.805,    CARDS.811,    0.0192
            263,    CARDS.806,    CARDS.812,    0.0096
            264,    CARDS.807,    CARDS.808,    0.0192
            265,    CARDS.807,    CARDS.813,    0.0096
            266,    CARDS.808,    CARDS.809,    0.0192
            267,    CARDS.808,    CARDS.814,    0.0192
            268,    CARDS.809,    CARDS.811,    0.0192
            269,    CARDS.809,    CARDS.815,    0.0192
            270,    CARDS.810,    CARDS.818,    0.0096
            271,    CARDS.810,    CARDS.826,    0.0096
            272,    CARDS.811,    CARDS.812,    0.0192
            273,    CARDS.811,    CARDS.816,    0.0192
            274,    CARDS.812,    CARDS.817,    0.0096
            275,    CARDS.813,    CARDS.814,    0.0096
            276,    CARDS.814,    CARDS.815,    0.0096
            277,    CARDS.815,    CARDS.816,    0.0096
            278,    CARDS.816,    CARDS.817,    0.0096
            279,    CARDS.818,    CARDS.819,    0.0096
            280,    CARDS.818,    CARDS.837,    0.0192
            281,    CARDS.819,    CARDS.820,    0.0096
            282,    CARDS.819,    CARDS.848,    0.0192
            283,    CARDS.820,    CARDS.821,    0.0096
            284,    CARDS.822,    CARDS.823,    0.0096
            285,    CARDS.822,    CARDS.828,    0.0096
            286,    CARDS.823,    CARDS.824,    0.0096
            287,    CARDS.823,    CARDS.829,    0.0192
            288,    CARDS.824,    CARDS.825,    0.0096
            289,    CARDS.824,    CARDS.830,    0.0192
            290,    CARDS.825,    CARDS.827,    0.0096
            291,    CARDS.825,    CARDS.831,    0.0192
            292,    CARDS.826,    CARDS.837,    0.0192
            293,    CARDS.827,    CARDS.832,    0.0096
            294,    CARDS.828,    CARDS.829,    0.0192
            295,    CARDS.828,    CARDS.833,    0.0096
            296,    CARDS.829,    CARDS.830,    0.0192
            297,    CARDS.829,    CARDS.834,    0.0192
            298,    CARDS.830,    CARDS.831,    0.0192
            299,    CARDS.830,    CARDS.835,    0.0192
            300,    CARDS.831,    CARDS.832,    0.0192
            301,    CARDS.831,    CARDS.836,    0.0192
            302,    CARDS.832,    CARDS.838,    0.0096
            303,    CARDS.833,    CARDS.834,    0.0192
            304,    CARDS.833,    CARDS.839,    0.0096
            305,    CARDS.834,    CARDS.835,    0.0192
            306,    CARDS.834,    CARDS.840,    0.0192
            307,    CARDS.835,    CARDS.836,    0.0192
            308,    CARDS.835,    CARDS.841,    0.0192
            309,    CARDS.836,    CARDS.838,    0.0192
            310,    CARDS.836,    CARDS.842,    0.0192
            311,    CARDS.837,    CARDS.848,    0.0192
            312,    CARDS.838,    CARDS.843,    0.0096
            313,    CARDS.839,    CARDS.840,    0.0192
            314,    CARDS.839,    CARDS.844,    0.0096
            315,    CARDS.840,    CARDS.841,    0.0192
            316,    CARDS.840,    CARDS.845,    0.0192
            317,    CARDS.841,    CARDS.842,    0.0192
            318,    CARDS.841,    CARDS.846,    0.0192
            319,    CARDS.842,    CARDS.843,    0.0192
            320,    CARDS.842,    CARDS.847,    0.0192
            321,    CARDS.843,    CARDS.849,    0.0096
            322,    CARDS.844,    CARDS.845,    0.0096
            323,    CARDS.845,    CARDS.846,    0.0096
            324,    CARDS.846,    CARDS.847,    0.0096
            325,    CARDS.847,    CARDS.849,    0.0096
            326,    CARDS.850,    CARDS.853,    0.01971252
            327,    CARDS.850,    CARDS.865,    0.0187008
            328,    CARDS.850,    CARDS.910,    0.0187008
            329,    CARDS.850,    CARDS.1018,    0.01971252
            330,    CARDS.851,    CARDS.854,    0.01971252
            331,    CARDS.851,    CARDS.866,    0.0187008
            332,    CARDS.851,    CARDS.911,    0.0187008
            333,    CARDS.851,    CARDS.1019,    0.01971252
            334,    CARDS.852,    CARDS.855,    0.01971252
            335,    CARDS.852,    CARDS.867,    0.0187008
            336,    CARDS.852,    CARDS.912,    0.0187008
            337,    CARDS.852,    CARDS.1020,    0.01971252
            338,    CARDS.853,    CARDS.868,    0.0093504
            339,    CARDS.853,    CARDS.913,    0.0093504
            340,    CARDS.854,    CARDS.869,    0.0093504
            341,    CARDS.854,    CARDS.914,    0.0093504
            342,    CARDS.855,    CARDS.870,    0.0093504
            343,    CARDS.855,    CARDS.915,    0.0093504
            344,    CARDS.856,    CARDS.859,    0.01971252
            345,    CARDS.856,    CARDS.871,    0.0093504
            346,    CARDS.856,    CARDS.932,    0.0093504
            347,    CARDS.857,    CARDS.860,    0.01971252
            348,    CARDS.857,    CARDS.872,    0.0093504
            349,    CARDS.857,    CARDS.933,    0.0093504
            350,    CARDS.858,    CARDS.861,    0.01971252
            351,    CARDS.858,    CARDS.873,    0.0093504
            352,    CARDS.858,    CARDS.934,    0.0093504
            353,    CARDS.859,    CARDS.862,    0.01971252
            354,    CARDS.859,    CARDS.874,    0.0187008
            355,    CARDS.859,    CARDS.975,    0.0187008
            356,    CARDS.860,    CARDS.863,    0.01971252
            357,    CARDS.860,    CARDS.875,    0.0187008
            358,    CARDS.860,    CARDS.976,    0.0187008
            359,    CARDS.861,    CARDS.864,    0.01971252
            360,    CARDS.861,    CARDS.876,    0.0187008
            361,    CARDS.861,    CARDS.977,    0.0187008
            362,    CARDS.862,    CARDS.865,    0.01971252
            363,    CARDS.862,    CARDS.877,    0.0187008
            364,    CARDS.862,    CARDS.1018,    0.0187008
            365,    CARDS.863,    CARDS.866,    0.01971252
            366,    CARDS.863,    CARDS.878,    0.0187008
            367,    CARDS.863,    CARDS.1019,    0.0187008
            368,    CARDS.864,    CARDS.867,    0.01971252
            369,    CARDS.864,    CARDS.879,    0.0187008
            370,    CARDS.864,    CARDS.1020,    0.0187008
            371,    CARDS.865,    CARDS.868,    0.01971252
            372,    CARDS.865,    CARDS.883,    0.0187008
            373,    CARDS.866,    CARDS.869,    0.01971252
            374,    CARDS.866,    CARDS.884,    0.0187008
            375,    CARDS.867,    CARDS.870,    0.01971252
            376,    CARDS.867,    CARDS.885,    0.0187008
            377,    CARDS.868,    CARDS.886,    0.0093504
            378,    CARDS.869,    CARDS.887,    0.0093504
            379,    CARDS.870,    CARDS.888,    0.0093504
            380,    CARDS.871,    CARDS.874,    0.01971252
            381,    CARDS.871,    CARDS.889,    0.0093504
            382,    CARDS.872,    CARDS.875,    0.01971252
            383,    CARDS.872,    CARDS.890,    0.0093504
            384,    CARDS.873,    CARDS.876,    0.01971252
            385,    CARDS.873,    CARDS.891,    0.0093504
            386,    CARDS.874,    CARDS.877,    0.01971252
            387,    CARDS.874,    CARDS.892,    0.0187008
            388,    CARDS.875,    CARDS.878,    0.01971252
            389,    CARDS.875,    CARDS.893,    0.0187008
            390,    CARDS.876,    CARDS.879,    0.01971252
            391,    CARDS.876,    CARDS.894,    0.0187008
            392,    CARDS.877,    CARDS.883,    0.01971252
            393,    CARDS.877,    CARDS.895,    0.0187008
            394,    CARDS.878,    CARDS.884,    0.01971252
            395,    CARDS.878,    CARDS.896,    0.0187008
            396,    CARDS.879,    CARDS.885,    0.01971252
            397,    CARDS.879,    CARDS.897,    0.0187008
            398,    CARDS.880,    CARDS.904,    0.009856262
            399,    CARDS.880,    CARDS.932,    0.0093504
            400,    CARDS.881,    CARDS.905,    0.009856262
            401,    CARDS.881,    CARDS.933,    0.0093504
            402,    CARDS.882,    CARDS.906,    0.009856262
            403,    CARDS.882,    CARDS.934,    0.0093504
            404,    CARDS.883,    CARDS.886,    0.01971252
            405,    CARDS.883,    CARDS.898,    0.0187008
            406,    CARDS.884,    CARDS.887,    0.01971252
            407,    CARDS.884,    CARDS.899,    0.0187008
            408,    CARDS.885,    CARDS.888,    0.01971252
            409,    CARDS.885,    CARDS.900,    0.0187008
            410,    CARDS.886,    CARDS.901,    0.0093504
            411,    CARDS.887,    CARDS.902,    0.0093504
            412,    CARDS.888,    CARDS.903,    0.0093504
            413,    CARDS.889,    CARDS.892,    0.009856262
            414,    CARDS.890,    CARDS.893,    0.009856262
            415,    CARDS.891,    CARDS.894,    0.009856262
            416,    CARDS.892,    CARDS.895,    0.009856262
            417,    CARDS.893,    CARDS.896,    0.009856262
            418,    CARDS.894,    CARDS.897,    0.009856262
            419,    CARDS.895,    CARDS.898,    0.009856262
            420,    CARDS.896,    CARDS.899,    0.009856262
            421,    CARDS.897,    CARDS.900,    0.009856262
            422,    CARDS.898,    CARDS.901,    0.009856262
            423,    CARDS.899,    CARDS.902,    0.009856262
            424,    CARDS.900,    CARDS.903,    0.009856262
            425,    CARDS.904,    CARDS.907,    0.009856262
            426,    CARDS.904,    CARDS.975,    0.0187008
            427,    CARDS.905,    CARDS.908,    0.009856262
            428,    CARDS.905,    CARDS.976,    0.0187008
            429,    CARDS.906,    CARDS.909,    0.009856262
            430,    CARDS.906,    CARDS.977,    0.0187008
            431,    CARDS.907,    CARDS.910,    0.009856262
            432,    CARDS.907,    CARDS.1018,    0.0187008
            433,    CARDS.908,    CARDS.911,    0.009856262
            434,    CARDS.908,    CARDS.1019,    0.0187008
            435,    CARDS.909,    CARDS.912,    0.009856262
            436,    CARDS.909,    CARDS.1020,    0.0187008
            437,    CARDS.910,    CARDS.913,    0.009856262
            438,    CARDS.911,    CARDS.914,    0.009856262
            439,    CARDS.912,    CARDS.915,    0.009856262
            440,    CARDS.916,    CARDS.920,    0.009856262
            441,    CARDS.916,    CARDS.939,    0.0093504
            442,    CARDS.917,    CARDS.921,    0.009856262
            443,    CARDS.917,    CARDS.940,    0.0093504
            444,    CARDS.918,    CARDS.922,    0.009856262
            445,    CARDS.918,    CARDS.941,    0.0093504
            446,    CARDS.919,    CARDS.923,    0.009856262
            447,    CARDS.919,    CARDS.942,    0.0093504
            448,    CARDS.920,    CARDS.924,    0.009856262
            449,    CARDS.920,    CARDS.943,    0.0187008
            450,    CARDS.921,    CARDS.925,    0.009856262
            451,    CARDS.921,    CARDS.944,    0.0187008
            452,    CARDS.922,    CARDS.926,    0.009856262
            453,    CARDS.922,    CARDS.945,    0.0187008
            454,    CARDS.923,    CARDS.927,    0.009856262
            455,    CARDS.923,    CARDS.946,    0.0187008
            456,    CARDS.924,    CARDS.928,    0.009856262
            457,    CARDS.924,    CARDS.947,    0.0187008
            458,    CARDS.925,    CARDS.929,    0.009856262
            459,    CARDS.925,    CARDS.948,    0.0187008
            460,    CARDS.926,    CARDS.930,    0.009856262
            461,    CARDS.926,    CARDS.949,    0.0187008
            462,    CARDS.927,    CARDS.931,    0.009856262
            463,    CARDS.927,    CARDS.950,    0.0187008
            464,    CARDS.928,    CARDS.935,    0.009856262
            465,    CARDS.928,    CARDS.951,    0.0187008
            466,    CARDS.929,    CARDS.936,    0.009856262
            467,    CARDS.929,    CARDS.952,    0.0187008
            468,    CARDS.930,    CARDS.937,    0.009856262
            469,    CARDS.930,    CARDS.953,    0.0187008
            470,    CARDS.931,    CARDS.938,    0.009856262
            471,    CARDS.931,    CARDS.954,    0.0187008
            472,    CARDS.932,    CARDS.975,    0.01971252
            473,    CARDS.933,    CARDS.976,    0.01971252
            474,    CARDS.934,    CARDS.977,    0.01971252
            475,    CARDS.935,    CARDS.955,    0.0093504
            476,    CARDS.936,    CARDS.956,    0.0093504
            477,    CARDS.937,    CARDS.957,    0.0093504
            478,    CARDS.938,    CARDS.958,    0.0093504
            479,    CARDS.939,    CARDS.943,    0.01971252
            480,    CARDS.939,    CARDS.959,    0.0093504
            481,    CARDS.940,    CARDS.944,    0.01971252
            482,    CARDS.940,    CARDS.960,    0.0093504
            483,    CARDS.941,    CARDS.945,    0.01971252
            484,    CARDS.941,    CARDS.961,    0.0093504
            485,    CARDS.942,    CARDS.946,    0.01971252
            486,    CARDS.942,    CARDS.962,    0.0093504
            487,    CARDS.943,    CARDS.947,    0.01971252
            488,    CARDS.943,    CARDS.963,    0.0187008
            489,    CARDS.944,    CARDS.948,    0.01971252
            490,    CARDS.944,    CARDS.964,    0.0187008
            491,    CARDS.945,    CARDS.949,    0.01971252
            492,    CARDS.945,    CARDS.965,    0.0187008
            493,    CARDS.946,    CARDS.950,    0.01971252
            494,    CARDS.946,    CARDS.966,    0.0187008
            495,    CARDS.947,    CARDS.951,    0.01971252
            496,    CARDS.947,    CARDS.967,    0.0187008
            497,    CARDS.948,    CARDS.952,    0.01971252
            498,    CARDS.948,    CARDS.968,    0.0187008
            499,    CARDS.949,    CARDS.953,    0.01971252
            500,    CARDS.949,    CARDS.969,    0.0187008
            501,    CARDS.950,    CARDS.954,    0.01971252
            502,    CARDS.950,    CARDS.970,    0.0187008
            503,    CARDS.951,    CARDS.955,    0.01971252
            504,    CARDS.951,    CARDS.971,    0.0187008
            505,    CARDS.952,    CARDS.956,    0.01971252
            506,    CARDS.952,    CARDS.972,    0.0187008
            507,    CARDS.953,    CARDS.957,    0.01971252
            508,    CARDS.953,    CARDS.973,    0.0187008
            509,    CARDS.954,    CARDS.958,    0.01971252
            510,    CARDS.954,    CARDS.974,    0.0187008
            511,    CARDS.955,    CARDS.978,    0.0093504
            512,    CARDS.956,    CARDS.979,    0.0093504
            513,    CARDS.957,    CARDS.980,    0.0093504
            514,    CARDS.958,    CARDS.981,    0.0093504
            515,    CARDS.959,    CARDS.963,    0.01971252
            516,    CARDS.959,    CARDS.982,    0.0093504
            517,    CARDS.960,    CARDS.964,    0.01971252
            518,    CARDS.960,    CARDS.983,    0.0093504
            519,    CARDS.961,    CARDS.965,    0.01971252
            520,    CARDS.961,    CARDS.984,    0.0093504
            521,    CARDS.962,    CARDS.966,    0.01971252
            522,    CARDS.962,    CARDS.985,    0.0093504
            523,    CARDS.963,    CARDS.967,    0.01971252
            524,    CARDS.963,    CARDS.986,    0.0187008
            525,    CARDS.964,    CARDS.968,    0.01971252
            526,    CARDS.964,    CARDS.987,    0.0187008
            527,    CARDS.965,    CARDS.969,    0.01971252
            528,    CARDS.965,    CARDS.988,    0.0187008
            529,    CARDS.966,    CARDS.970,    0.01971252
            530,    CARDS.966,    CARDS.989,    0.0187008
            531,    CARDS.967,    CARDS.971,    0.01971252
            532,    CARDS.967,    CARDS.990,    0.0187008
            533,    CARDS.968,    CARDS.972,    0.01971252
            534,    CARDS.968,    CARDS.991,    0.0187008
            535,    CARDS.969,    CARDS.973,    0.01971252
            536,    CARDS.969,    CARDS.992,    0.0187008
            537,    CARDS.970,    CARDS.974,    0.01971252
            538,    CARDS.970,    CARDS.993,    0.0187008
            539,    CARDS.971,    CARDS.978,    0.01971252
            540,    CARDS.971,    CARDS.994,    0.0187008
            541,    CARDS.972,    CARDS.979,    0.01971252
            542,    CARDS.972,    CARDS.995,    0.0187008
            543,    CARDS.973,    CARDS.980,    0.01971252
            544,    CARDS.973,    CARDS.996,    0.0187008
            545,    CARDS.974,    CARDS.981,    0.01971252
            546,    CARDS.974,    CARDS.997,    0.0187008
            547,    CARDS.975,    CARDS.1018,    0.01971252
            548,    CARDS.976,    CARDS.1019,    0.01971252
            549,    CARDS.977,    CARDS.1020,    0.01971252
            550,    CARDS.978,    CARDS.998,    0.0093504
            551,    CARDS.979,    CARDS.999,    0.0093504
            552,    CARDS.980,    CARDS.1000,    0.0093504
            553,    CARDS.981,    CARDS.1001,    0.0093504
            554,    CARDS.982,    CARDS.986,    0.01971252
            555,    CARDS.982,    CARDS.1002,    0.0093504
            556,    CARDS.983,    CARDS.987,    0.01971252
            557,    CARDS.983,    CARDS.1003,    0.0093504
            558,    CARDS.984,    CARDS.988,    0.01971252
            559,    CARDS.984,    CARDS.1004,    0.0093504
            560,    CARDS.985,    CARDS.989,    0.01971252
            561,    CARDS.985,    CARDS.1005,    0.0093504
            562,    CARDS.986,    CARDS.990,    0.01971252
            563,    CARDS.986,    CARDS.1006,    0.0187008
            564,    CARDS.987,    CARDS.991,    0.01971252
            565,    CARDS.987,    CARDS.1007,    0.0187008
            566,    CARDS.988,    CARDS.992,    0.01971252
            567,    CARDS.988,    CARDS.1008,    0.0187008
            568,    CARDS.989,    CARDS.993,    0.01971252
            569,    CARDS.989,    CARDS.1009,    0.0187008
            570,    CARDS.990,    CARDS.994,    0.01971252
            571,    CARDS.990,    CARDS.1010,    0.0187008
            572,    CARDS.991,    CARDS.995,    0.01971252
            573,    CARDS.991,    CARDS.1011,    0.0187008
            574,    CARDS.992,    CARDS.996,    0.01971252
            575,    CARDS.992,    CARDS.1012,    0.0187008
            576,    CARDS.993,    CARDS.997,    0.01971252
            577,    CARDS.993,    CARDS.1013,    0.0187008
            578,    CARDS.994,    CARDS.998,    0.01971252
            579,    CARDS.994,    CARDS.1014,    0.0187008
            580,    CARDS.995,    CARDS.999,    0.01971252
            581,    CARDS.995,    CARDS.1015,    0.0187008
            582,    CARDS.996,    CARDS.1000,    0.01971252
            583,    CARDS.996,    CARDS.1016,    0.0187008
            584,    CARDS.997,    CARDS.1001,    0.01971252
            585,    CARDS.997,    CARDS.1017,    0.0187008
            586,    CARDS.998,    CARDS.1021,    0.0093504
            587,    CARDS.999,    CARDS.1022,    0.0093504
            588,    CARDS.1000,    CARDS.1023,    0.0093504
            589,    CARDS.1001,    CARDS.1024,    0.0093504
            590,    CARDS.1002,    CARDS.1006,    0.009856262
            591,    CARDS.1003,    CARDS.1007,    0.009856262
            592,    CARDS.1004,    CARDS.1008,    0.009856262
            593,    CARDS.1005,    CARDS.1009,    0.009856262
            594,    CARDS.1006,    CARDS.1010,    0.009856262
            595,    CARDS.1007,    CARDS.1011,    0.009856262
            596,    CARDS.1008,    CARDS.1012,    0.009856262
            597,    CARDS.1009,    CARDS.1013,    0.009856262
            598,    CARDS.1010,    CARDS.1014,    0.009856262
            599,    CARDS.1011,    CARDS.1015,    0.009856262
            600,    CARDS.1012,    CARDS.1016,    0.009856262
            601,    CARDS.1013,    CARDS.1017,    0.009856262
            602,    CARDS.1014,    CARDS.1021,    0.009856262
            603,    CARDS.1015,    CARDS.1022,    0.009856262
            604,    CARDS.1016,    CARDS.1023,    0.009856262
            605,    CARDS.1017,    CARDS.1024,    0.009856262
HEADER VARIABLES 0, CARDS
      IF( NSOL .GT. 1 ) THEN
C Heat Load-UHF PA (C3 Card)[CARDS]::1FF9
          CALL DA11MC(39472.,TIMEM,A1,A2,1.,Q__TD)
          CARDS.Q78 = CARDS.Q78 + Q__TD * 1. *1.5
C Heat Load-DxWiFi Heat Load[CARDS]::1FED
          CALL DA11MC(39472.,TIMEM,A3,A4,1.,Q__TD)
          CARDS.Q968 = CARDS.Q968 + Q__TD * 1. *3.
      ELSE
C Heat Load-UHF PA (C3 Card)[CARDS]::1FF9
          CARDS.Q78 = CARDS.Q78 + 0.1065819 *1.5
C Heat Load-DxWiFi Heat Load[CARDS]::1FED
          CARDS.Q968 = CARDS.Q968 + 0.1065819 *3.
      ENDIF
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
            11,    CARDS.2,    CARDS.200,    0.014725
            12,    CARDS.7,    CARDS.193,    0.02945
            13,    CARDS.12,    CARDS.186,    0.02945
            14,    CARDS.17,    CARDS.790,    0.02945
            15,    CARDS.22,    CARDS.783,    0.014725
C Contact - Edge Contactor-C3 - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::2058
            16,    CARDS.70,    CARDS.257,    0.014725
            17,    CARDS.75,    CARDS.256,    0.02945
            18,    CARDS.80,    CARDS.255,    0.02945
            19,    CARDS.85,    CARDS.254,    0.02945
            20,    CARDS.90,    CARDS.253,    0.014725
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
            46,    CARDS.486,    CARDS.890,    0.014725
            47,    CARDS.643,    CARDS.872,    0.02945
            48,    CARDS.685,    CARDS.881,    0.014725
C Contact - Edge Contactor-OTRA - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205C
            49,    CARDS.703,    CARDS.891,    0.014725
            50,    CARDS.721,    CARDS.873,    0.02945
            51,    CARDS.727,    CARDS.858,    0.02945
            52,    CARDS.734,    CARDS.934,    0.02945
            53,    CARDS.741,    CARDS.882,    0.014725
C Contact - Edge Contactor-CFC - 40 Pin to Backplane[FORTY_PIN_CONNECTOR][0]::205D
            54,    CARDS.795,    CARDS.857,    0.02945
            55,    CARDS.799,    CARDS.933,    0.02945
HEADER NODE DATA, FRAMES
            26,    0.,    0.728028
            29,    0.,    0.728028
            32,    0.,    0.728028
            35,    0.,    0.728028
            45,    0.,    0.728028
            46,    0.,    0.728028
            47,    0.,    0.728028
            48,    0.,    0.728028
            49,    0.,    0.728028
            50,    0.,    0.728028
            51,    0.,    0.728028
            52,    0.,    0.728028
            53,    0.,    0.728028
            54,    0.,    0.728028
            55,    0.,    0.728028
            56,    0.,    0.728028
            57,    0.,    0.728028
            58,    0.,    0.728028
            59,    0.,    0.728028
            60,    0.,    0.728028
            61,    0.,    0.728028
            62,    0.,    0.728028
            63,    0.,    0.728028
            64,    0.,    0.728028
            65,    0.,    0.728028
            67,    0.,    0.728028
            68,    0.,    0.728028
            69,    0.,    0.728028
            71,    0.,    0.728028
            73,    0.,    0.728028
            186,    0.,    0.728028
            188,    0.,    0.728028
            193,    0.,    0.728028
            195,    0.,    0.728028
            200,    0.,    0.728028
            202,    0.,    0.728028
            207,    0.,    0.728028
            209,    0.,    0.728028
            214,    0.,    0.728028
            216,    0.,    0.728028
            221,    0.,    0.728028
            223,    0.,    0.728028
            228,    0.,    0.728028
            230,    0.,    0.728028
            235,    0.,    0.728028
            237,    0.,    0.728028
            242,    0.,    0.728028
            244,    0.,    0.728028
            249,    0.,    0.728028
            250,    0.,    0.728028
            251,    0.,    0.728028
            252,    0.,    0.728028
            253,    0.,    0.728028
            254,    0.,    0.728028
            255,    0.,    0.728028
            256,    0.,    0.728028
            257,    0.,    0.728028
            258,    0.,    0.728028
            259,    0.,    0.728028
            260,    0.,    0.728028
            261,    0.,    0.728028
            262,    0.,    0.728028
            263,    0.,    0.728028
            264,    0.,    0.728028
            265,    0.,    0.728028
            266,    0.,    0.728028
            267,    0.,    0.728028
            268,    0.,    0.728028
            269,    0.,    0.728028
            270,    0.,    0.728028
            271,    0.,    0.728028
            272,    0.,    0.728028
            273,    0.,    0.728028
            274,    0.,    0.728028
            275,    0.,    0.728028
            276,    0.,    0.728028
            277,    0.,    0.728028
            278,    0.,    0.728028
            279,    0.,    0.728028
            280,    0.,    0.728028
            281,    0.,    0.728028
            282,    0.,    0.728028
            283,    0.,    0.728028
            284,    0.,    0.728028
            285,    0.,    0.728028
            286,    0.,    0.728028
            287,    0.,    0.728028
            288,    0.,    0.728028
            289,    0.,    0.728028
            290,    0.,    0.728028
            291,    0.,    0.728028
            292,    0.,    0.728028
            293,    0.,    0.728028
            294,    0.,    0.728028
            295,    0.,    0.728028
            296,    0.,    0.728028
            297,    0.,    0.728028
            298,    0.,    0.728028
            299,    0.,    0.728028
            300,    0.,    0.728028
            301,    0.,    0.728028
            302,    0.,    0.728028
            303,    0.,    0.728028
            304,    0.,    0.728028
            305,    0.,    0.728028
            306,    0.,    0.728028
            307,    0.,    0.728028
            308,    0.,    0.728028
            309,    0.,    0.728028
            310,    0.,    0.728028
            311,    0.,    0.728028
            312,    0.,    0.728028
            313,    0.,    0.728028
            314,    0.,    0.728028
            315,    0.,    0.728028
            316,    0.,    0.728028
            317,    0.,    0.728028
            318,    0.,    0.728028
            319,    0.,    0.728028
            320,    0.,    0.728028
            321,    0.,    0.728028
            322,    0.,    0.728028
            323,    0.,    0.728028
            324,    0.,    0.728028
            325,    0.,    0.728028
            326,    0.,    0.728028
            327,    0.,    0.728028
            328,    0.,    0.728028
            329,    0.,    0.728028
            330,    0.,    0.728028
            331,    0.,    0.728028
            332,    0.,    0.728028
            333,    0.,    0.728028
            334,    0.,    0.728028
            335,    0.,    0.728028
            336,    0.,    0.728028
            337,    0.,    0.728028
            338,    0.,    0.728028
            339,    0.,    0.728028
            340,    0.,    0.728028
            341,    0.,    0.728028
            342,    0.,    0.728028
            343,    0.,    0.728028
            344,    0.,    0.728028
            345,    0.,    0.728028
            346,    0.,    0.728028
            347,    0.,    0.728028
            348,    0.,    0.728028
            349,    0.,    0.728028
            350,    0.,    0.728028
            351,    0.,    0.728028
            352,    0.,    0.728028
            353,    0.,    0.728028
            354,    0.,    0.728028
            355,    0.,    0.728028
            356,    0.,    0.728028
            357,    0.,    0.728028
            358,    0.,    0.728028
            359,    0.,    0.728028
            360,    0.,    0.728028
            361,    0.,    0.728028
            362,    0.,    0.728028
            363,    0.,    0.728028
            364,    0.,    0.728028
            365,    0.,    0.728028
            366,    0.,    0.728028
            367,    0.,    0.728028
            368,    0.,    0.728028
            369,    0.,    0.728028
            370,    0.,    0.728028
            371,    0.,    0.728028
            372,    0.,    0.728028
            373,    0.,    0.728028
            374,    0.,    0.728028
            375,    0.,    0.728028
            376,    0.,    0.728028
            377,    0.,    0.728028
            378,    0.,    0.728028
            379,    0.,    0.728028
            380,    0.,    0.728028
            381,    0.,    0.728028
            382,    0.,    0.728028
            383,    0.,    0.728028
            384,    0.,    0.728028
            385,    0.,    0.728028
            386,    0.,    0.728028
            387,    0.,    0.728028
            388,    0.,    0.728028
            389,    0.,    0.728028
            390,    0.,    0.728028
            391,    0.,    0.728028
            392,    0.,    0.728028
            393,    0.,    0.728028
            394,    0.,    0.728028
            395,    0.,    0.728028
            396,    0.,    0.728028
            397,    0.,    0.728028
            398,    0.,    0.728028
            399,    0.,    0.728028
            400,    0.,    0.728028
            401,    0.,    0.728028
            402,    0.,    0.728028
            403,    0.,    0.728028
            404,    0.,    0.728028
            405,    0.,    0.728028
            406,    0.,    0.728028
            407,    0.,    0.728028
            408,    0.,    0.728028
            409,    0.,    0.728028
            410,    0.,    0.728028
            411,    0.,    0.728028
            412,    0.,    0.728028
            413,    0.,    0.728028
            414,    0.,    0.728028
            415,    0.,    0.728028
            416,    0.,    0.728028
            417,    0.,    0.728028
            418,    0.,    0.728028
            419,    0.,    0.728028
            420,    0.,    0.728028
            421,    0.,    0.728028
            422,    0.,    0.728028
            423,    0.,    0.728028
            424,    0.,    0.728028
            425,    0.,    0.728028
            426,    0.,    0.728028
            427,    0.,    0.728028
            428,    0.,    0.728028
            429,    0.,    0.728028
            430,    0.,    0.728028
            431,    0.,    0.728028
            432,    0.,    0.728028
            433,    0.,    0.728028
            434,    0.,    0.728028
            435,    0.,    0.728028
            436,    0.,    0.728028
            437,    0.,    0.728028
            438,    0.,    0.728028
            439,    0.,    0.728028
            440,    0.,    0.728028
            441,    0.,    0.728028
            442,    0.,    0.728028
            443,    0.,    0.728028
            444,    0.,    0.728028
            445,    0.,    0.728028
            446,    0.,    0.728028
            447,    0.,    0.728028
            448,    0.,    0.728028
            449,    0.,    0.728028
            450,    0.,    0.728028
            451,    0.,    0.728028
            452,    0.,    0.728028
            453,    0.,    0.728028
            454,    0.,    0.728028
            455,    0.,    0.728028
            456,    0.,    0.728028
            457,    0.,    0.728028
            458,    0.,    0.728028
            459,    0.,    0.728028
            460,    0.,    0.728028
            461,    0.,    0.728028
            462,    0.,    0.728028
            463,    0.,    0.728028
            464,    0.,    0.728028
            465,    0.,    0.728028
            466,    0.,    0.728028
            467,    0.,    0.728028
            468,    0.,    0.728028
            469,    0.,    0.728028
            470,    0.,    0.728028
            471,    0.,    0.728028
            472,    0.,    0.728028
            473,    0.,    0.728028
            474,    0.,    0.728028
            475,    0.,    0.728028
            476,    0.,    0.728028
            477,    0.,    0.728028
            478,    0.,    0.728028
            479,    0.,    0.728028
            480,    0.,    0.728028
            481,    0.,    0.728028
            482,    0.,    0.728028
            483,    0.,    0.728028
            484,    0.,    0.728028
            485,    0.,    0.728028
            486,    0.,    0.728028
            487,    0.,    0.728028
            488,    0.,    0.728028
            489,    0.,    0.728028
            491,    0.,    0.728028
            493,    0.,    0.728028
            495,    0.,    0.728028
            497,    0.,    0.728028
            499,    0.,    0.728028
            501,    0.,    0.728028
            503,    0.,    0.728028
            506,    0.,    0.728028
            510,    0.,    0.728028
            513,    0.,    0.728028
            514,    0.,    0.728028
            517,    0.,    0.728028
            518,    0.,    0.728028
            521,    0.,    0.728028
            522,    0.,    0.728028
            526,    0.,    0.728028
            529,    0.,    0.728028
            530,    0.,    0.728028
            534,    0.,    0.728028
            538,    0.,    0.728028
            542,    0.,    0.728028
            546,    0.,    0.728028
            550,    0.,    0.728028
            554,    0.,    0.728028
            559,    0.,    0.728028
            564,    0.,    0.728028
            569,    0.,    0.728028
            574,    0.,    0.728028
            579,    0.,    0.728028
            580,    0.,    0.728028
            581,    0.,    0.728028
            582,    0.,    0.728028
            583,    0.,    0.728028
            584,    0.,    0.728028
            585,    0.,    0.728028
            586,    0.,    0.728028
            587,    0.,    0.728028
            588,    0.,    0.728028
            589,    0.,    0.728028
            590,    0.,    0.728028
            591,    0.,    0.728028
            592,    0.,    0.728028
            593,    0.,    0.728028
            594,    0.,    0.728028
            595,    0.,    0.728028
            596,    0.,    0.728028
            597,    0.,    0.728028
            598,    0.,    0.728028
            599,    0.,    0.728028
            600,    0.,    0.728028
            601,    0.,    0.728028
            602,    0.,    0.728028
            603,    0.,    0.728028
            604,    0.,    0.728028
            605,    0.,    0.728028
            606,    0.,    0.728028
            607,    0.,    0.728028
            608,    0.,    0.728028
            609,    0.,    0.728028
            610,    0.,    0.728028
            611,    0.,    0.728028
            612,    0.,    0.728028
            613,    0.,    0.728028
            614,    0.,    0.728028
            615,    0.,    0.728028
            616,    0.,    0.728028
            617,    0.,    0.728028
            618,    0.,    0.728028
            619,    0.,    0.728028
            620,    0.,    0.728028
            621,    0.,    0.728028
            622,    0.,    0.728028
            623,    0.,    0.728028
            624,    0.,    0.728028
            625,    0.,    0.728028
            626,    0.,    0.728028
            627,    0.,    0.728028
            628,    0.,    0.728028
            629,    0.,    0.728028
            630,    0.,    0.728028
            631,    0.,    0.728028
            632,    0.,    0.728028
            633,    0.,    0.728028
            634,    0.,    0.728028
            635,    0.,    0.728028
            636,    0.,    0.728028
            637,    0.,    0.728028
            638,    0.,    0.728028
            639,    0.,    0.728028
            640,    0.,    0.728028
            641,    0.,    0.728028
            642,    0.,    0.728028
            643,    0.,    0.728028
            644,    0.,    0.728028
            645,    0.,    0.728028
            646,    0.,    0.728028
            647,    0.,    0.728028
            648,    0.,    0.728028
            649,    0.,    0.728028
            650,    0.,    0.728028
            651,    0.,    0.728028
            652,    0.,    0.728028
            653,    0.,    0.728028
            654,    0.,    0.728028
            655,    0.,    0.728028
            656,    0.,    0.728028
            657,    0.,    0.728028
            658,    0.,    0.728028
            659,    0.,    0.728028
            660,    0.,    0.728028
            661,    0.,    0.728028
            662,    0.,    0.728028
            663,    0.,    0.728028
            664,    0.,    0.728028
            665,    0.,    0.728028
            666,    0.,    0.728028
            667,    0.,    0.728028
            668,    0.,    0.728028
            669,    0.,    0.728028
            670,    0.,    0.728028
            671,    0.,    0.728028
            672,    0.,    0.728028
            673,    0.,    0.728028
            674,    0.,    0.728028
            675,    0.,    0.728028
            676,    0.,    0.728028
            677,    0.,    0.728028
            678,    0.,    0.728028
            679,    0.,    0.728028
            680,    0.,    0.728028
            681,    0.,    0.728028
            682,    0.,    0.728028
            683,    0.,    0.728028
            684,    0.,    0.728028
            685,    0.,    0.728028
            686,    0.,    0.728028
            687,    0.,    0.728028
            688,    0.,    0.728028
            689,    0.,    0.728028
            690,    0.,    0.728028
            691,    0.,    0.728028
            692,    0.,    0.728028
            693,    0.,    0.728028
            694,    0.,    0.728028
            695,    0.,    0.728028
            696,    0.,    0.728028
            697,    0.,    0.728028
            698,    0.,    0.728028
            699,    0.,    0.728028
            700,    0.,    0.728028
            701,    0.,    0.728028
            702,    0.,    0.728028
            703,    0.,    0.728028
            704,    0.,    0.728028
            705,    0.,    0.728028
            706,    0.,    0.728028
            707,    0.,    0.728028
            708,    0.,    0.728028
            709,    0.,    0.728028
            710,    0.,    0.728028
            711,    0.,    0.728028
            712,    0.,    0.728028
            713,    0.,    0.728028
            714,    0.,    0.728028
            715,    0.,    0.728028
            716,    0.,    0.728028
            717,    0.,    0.728028
            718,    0.,    0.728028
            719,    0.,    0.728028
            720,    0.,    0.728028
            721,    0.,    0.728028
            722,    0.,    0.728028
            723,    0.,    0.728028
            724,    0.,    0.728028
            725,    0.,    0.728028
            726,    0.,    0.728028
            727,    0.,    0.728028
            728,    0.,    0.728028
            729,    0.,    0.728028
            730,    0.,    0.728028
            731,    0.,    0.728028
            732,    0.,    0.728028
            733,    0.,    0.728028
            734,    0.,    0.728028
            735,    0.,    0.728028
            736,    0.,    0.728028
            737,    0.,    0.728028
            738,    0.,    0.728028
            739,    0.,    0.728028
            740,    0.,    0.728028
            741,    0.,    0.728028
            742,    0.,    0.728028
            743,    0.,    0.728028
            744,    0.,    0.728028
            745,    0.,    0.728028
            746,    0.,    0.728028
            747,    0.,    0.728028
            748,    0.,    0.728028
            749,    0.,    0.728028
            750,    0.,    0.728028
            751,    0.,    0.728028
            752,    0.,    0.728028
            753,    0.,    0.728028
            754,    0.,    0.728028
            755,    0.,    0.728028
            756,    0.,    0.728028
            757,    0.,    0.728028
            758,    0.,    0.728028
            759,    0.,    0.728028
            760,    0.,    0.728028
            761,    0.,    0.728028
            762,    0.,    0.728028
            763,    0.,    0.728028
            764,    0.,    0.728028
            765,    0.,    0.728028
            766,    0.,    0.728028
            767,    0.,    0.728028
            768,    0.,    0.728028
            769,    0.,    0.728028
            770,    0.,    0.728028
            771,    0.,    0.728028
            772,    0.,    0.728028
            773,    0.,    0.728028
            774,    0.,    0.728028
            775,    0.,    0.728028
            776,    0.,    0.728028
            777,    0.,    0.728028
            778,    0.,    0.728028
            779,    0.,    0.728028
            780,    0.,    0.728028
            781,    0.,    0.728028
            782,    0.,    0.728028
            783,    0.,    0.728028
            784,    0.,    0.728028
            785,    0.,    0.728028
            786,    0.,    0.728028
            787,    0.,    0.728028
            788,    0.,    0.728028
            789,    0.,    0.728028
            790,    0.,    0.728028
            791,    0.,    0.728028
            792,    0.,    0.728028
            793,    0.,    0.728028
            794,    0.,    0.728028
            795,    0.,    0.728028
            796,    0.,    0.728028
            797,    0.,    0.728028
            798,    0.,    0.728028
            799,    0.,    0.728028
            800,    0.,    0.728028
            801,    0.,    0.728028
            802,    0.,    0.728028
            803,    0.,    0.728028
            804,    0.,    0.728028
            805,    0.,    0.728028
            806,    0.,    0.728028
            807,    0.,    0.728028
            808,    0.,    0.728028
            809,    0.,    0.728028
            810,    0.,    0.728028
            811,    0.,    0.728028
            812,    0.,    0.728028
            813,    0.,    0.728028
            814,    0.,    0.728028
            815,    0.,    0.728028
            816,    0.,    0.728028
            817,    0.,    0.728028
            818,    0.,    0.728028
            819,    0.,    0.728028
            820,    0.,    0.728028
            821,    0.,    0.728028
            822,    0.,    0.728028
            823,    0.,    0.728028
            824,    0.,    0.728028
            825,    0.,    0.728028
            826,    0.,    0.728028
            827,    0.,    0.728028
            828,    0.,    0.728028
            829,    0.,    0.728028
            830,    0.,    0.728028
            831,    0.,    0.728028
            832,    0.,    0.728028
            833,    0.,    0.728028
            834,    0.,    0.728028
            835,    0.,    0.728028
            836,    0.,    0.728028
            837,    0.,    0.728028
            838,    0.,    0.728028
            839,    0.,    0.728028
            840,    0.,    0.728028
            841,    0.,    0.728028
            842,    0.,    0.728028
            843,    0.,    0.728028
            844,    0.,    0.728028
            845,    0.,    0.728028
            846,    0.,    0.728028
            856,    20.,    1.
            857,    20.,    1.
            867,    0.,    0.728028
            869,    0.,    0.728028
            871,    0.,    0.728028
            873,    0.,    0.728028
            874,    0.,    0.728028
            876,    0.,    0.728028
            878,    0.,    0.728028
            880,    0.,    0.728028
            882,    0.,    0.728028
            883,    0.,    0.728028
            884,    0.,    0.728028
            886,    0.,    0.728028
            888,    0.,    0.728028
            889,    0.,    0.728028
            890,    0.,    0.728028
            891,    0.,    0.728028
            892,    0.,    0.728028
            894,    0.,    0.728028
            895,    0.,    0.728028
            896,    0.,    0.728028
            897,    0.,    0.728028
            899,    0.,    0.728028
            901,    0.,    0.728028
            903,    0.,    0.728028
            904,    0.,    0.728028
            906,    0.,    0.728028
            908,    0.,    0.728028
            909,    0.,    0.728028
            910,    0.,    0.728028
            911,    0.,    0.728028
            912,    0.,    0.728028
            913,    0.,    0.728028
            914,    0.,    0.728028
            915,    0.,    0.728028
            916,    0.,    0.728028
            917,    0.,    0.728028
            918,    0.,    0.728028
            919,    0.,    0.728028
            921,    0.,    0.728028
            922,    0.,    0.728028
            923,    0.,    0.728028
            924,    0.,    0.728028
            925,    0.,    0.728028
            926,    0.,    0.728028
            927,    0.,    0.728028
            928,    0.,    0.728028
            929,    0.,    0.728028
            930,    0.,    0.728028
            931,    0.,    0.728028
            932,    0.,    0.728028
            933,    0.,    0.728028
            934,    0.,    0.728028
            935,    0.,    0.728028
            936,    0.,    0.728028
            937,    0.,    0.728028
            938,    0.,    0.728028
            939,    0.,    0.728028
            940,    0.,    0.728028
            941,    0.,    0.728028
            942,    0.,    0.728028
            943,    0.,    0.728028
            944,    0.,    0.728028
            945,    0.,    0.728028
            946,    0.,    0.728028
            947,    0.,    0.728028
            948,    0.,    0.728028
            949,    0.,    0.728028
            950,    0.,    0.728028
            951,    0.,    0.728028
            952,    0.,    0.728028
            953,    0.,    0.728028
            954,    0.,    0.728028
            955,    0.,    0.728028
            956,    0.,    0.728028
            957,    0.,    0.728028
            958,    0.,    0.728028
            959,    0.,    0.728028
            960,    0.,    0.728028
            961,    0.,    0.728028
            962,    0.,    0.728028
            963,    0.,    0.728028
            964,    0.,    0.728028
            965,    0.,    0.728028
            966,    0.,    0.728028
            967,    0.,    0.728028
            968,    0.,    0.728028
            969,    0.,    0.728028
            970,    0.,    0.728028
            971,    0.,    0.728028
            972,    0.,    0.728028
            973,    0.,    0.728028
            974,    0.,    0.728028
            975,    0.,    0.728028
            976,    0.,    0.728028
            977,    0.,    0.728028
            978,    0.,    0.728028
            979,    0.,    0.728028
            980,    0.,    0.728028
            981,    0.,    0.728028
            982,    0.,    0.728028
            983,    0.,    0.728028
            984,    0.,    0.728028
            985,    0.,    0.728028
            986,    0.,    0.728028
            987,    0.,    0.728028
            988,    0.,    0.728028
            990,    0.,    0.728028
            992,    0.,    0.728028
            993,    0.,    0.728028
            994,    0.,    0.728028
            995,    0.,    0.728028
            996,    0.,    0.728028
            997,    0.,    0.728028
            999,    0.,    0.728028
            1000,    0.,    0.728028
            1002,    0.,    0.728028
            1003,    0.,    0.728028
            1004,    0.,    0.728028
            1006,    0.,    0.728028
            1008,    0.,    0.728028
            1010,    0.,    0.728028
            1012,    0.,    0.728028
            1013,    0.,    0.728028
            1015,    0.,    0.728028
            1017,    0.,    0.728028
            1043,    0.,    0.728028
            1044,    0.,    0.728028
            1046,    0.,    0.728028
            1048,    0.,    0.728028
            1049,    0.,    0.728028
            1050,    0.,    0.728028
            1053,    0.,    0.728028
            1055,    0.,    0.728028
            1058,    0.,    0.728028
            1059,    0.,    0.728028
            1060,    0.,    0.728028
            1063,    0.,    0.728028
            1064,    0.,    0.728028
            1065,    0.,    0.728028
            1067,    0.,    0.728028
            1069,    0.,    0.728028
            1071,    0.,    0.728028
            1073,    0.,    0.728028
            1075,    0.,    0.728028
            1076,    0.,    0.728028
            1077,    0.,    0.728028
            1079,    0.,    0.728028
            1082,    0.,    0.728028
            1084,    0.,    0.728028
            1086,    0.,    0.728028
            1087,    0.,    0.728028
            1088,    0.,    0.728028
            1089,    0.,    0.728028
            1090,    0.,    0.728028
            1091,    0.,    0.728028
            1092,    0.,    0.728028
            1093,    0.,    0.728028
            1094,    0.,    0.728028
            1095,    0.,    0.728028
            1096,    0.,    0.728028
            1097,    0.,    0.728028
            1098,    0.,    0.728028
            1099,    0.,    0.728028
            1100,    0.,    0.728028
            1101,    0.,    0.728028
            1102,    0.,    0.728028
            1103,    0.,    0.728028
            1104,    0.,    0.728028
            1105,    0.,    0.728028
            1106,    0.,    0.728028
            1107,    0.,    0.728028
            1108,    0.,    0.728028
            1109,    0.,    0.728028
            1110,    0.,    0.728028
            1111,    0.,    0.728028
            1112,    0.,    0.728028
            1113,    0.,    0.728028
            1114,    0.,    0.728028
            1115,    0.,    0.728028
            1116,    0.,    0.728028
            1117,    0.,    0.728028
            1118,    0.,    0.728028
            1119,    0.,    0.728028
            1120,    0.,    0.728028
            1121,    0.,    0.728028
            1122,    0.,    0.728028
            1123,    0.,    0.728028
            1124,    0.,    0.728028
            1126,    0.,    0.728028
            1127,    0.,    0.728028
            1129,    0.,    0.728028
            1130,    0.,    0.728028
            1131,    0.,    0.728028
            1133,    0.,    0.728028
            1135,    0.,    0.728028
            1137,    0.,    0.728028
            1138,    0.,    0.728028
            1139,    0.,    0.728028
            1140,    0.,    0.728028
            1142,    0.,    0.728028
            1144,    0.,    0.728028
            1145,    0.,    0.728028
            1147,    0.,    0.728028
            1149,    0.,    0.728028
            1151,    0.,    0.728028
            1153,    0.,    0.728028
            1154,    0.,    0.728028
            1155,    0.,    0.728028
            1157,    0.,    0.728028
            1159,    0.,    0.728028
            1160,    0.,    0.728028
            1162,    0.,    0.728028
            1163,    0.,    0.728028
            1164,    0.,    0.728028
            1165,    0.,    0.728028
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

      CALL HNQCAL('ALL')
      CALL TPRINT('ALL')
      IF(NSOL .GT. 1 ) THEN
          IF(TIMEN .GE. TIMEND) THEN
              CALL SAVE('ALL',0)
          ELSE
              CALL SAVE('T',0)
          ENDIF
      ELSE IF( LOOPCT .GT. 0 ) THEN
          CALL SAVE('ALL',0)
      ENDIF

HEADER NODE DATA, MAIN
HEADER CONDUCTOR DATA, MAIN
            1,    CARDS.776,    FRAMES.287,    1.
HEADER NODE DATA, MECHANICAL_CONNECTIONS
HEADER CONDUCTOR DATA, MECHANICAL_CONNECTIONS
C Contact - Face Contactor-Top battery pack to card[MECHANICAL_CONNECTIONS][1]::11CE
            1,    BATTERY.1,    BATTERY.72,    0.0024
            2,    BATTERY.1,    BATTERY.73,    0.0006
            3,    BATTERY.2,    BATTERY.71,    0.003
            4,    BATTERY.2,    BATTERY.72,    0.003
            5,    BATTERY.3,    BATTERY.70,    0.0036
            6,    BATTERY.3,    BATTERY.71,    0.0024
            7,    BATTERY.4,    BATTERY.69,    0.0012
            8,    BATTERY.4,    BATTERY.70,    0.0018
            9,    BATTERY.5,    BATTERY.72,    0.00192
            10,    BATTERY.5,    BATTERY.73,    0.00048
            11,    BATTERY.5,    BATTERY.94,    0.00288
            12,    BATTERY.5,    BATTERY.97,    0.00072
            13,    BATTERY.6,    BATTERY.71,    0.0024
            14,    BATTERY.6,    BATTERY.72,    0.0024
            15,    BATTERY.6,    BATTERY.91,    0.0036
            16,    BATTERY.6,    BATTERY.94,    0.0036
            17,    BATTERY.7,    BATTERY.70,    0.00288
            18,    BATTERY.7,    BATTERY.71,    0.00192
            19,    BATTERY.7,    BATTERY.75,    0.00432
            20,    BATTERY.7,    BATTERY.91,    0.00288
            21,    BATTERY.8,    BATTERY.69,    0.00096
            22,    BATTERY.8,    BATTERY.70,    0.00144
            23,    BATTERY.8,    BATTERY.74,    0.00144
            24,    BATTERY.8,    BATTERY.75,    0.00216
            25,    BATTERY.9,    BATTERY.94,    0.00288
            26,    BATTERY.9,    BATTERY.97,    0.00072
            27,    BATTERY.9,    BATTERY.110,    0.00192
            28,    BATTERY.9,    BATTERY.113,    0.00048
            29,    BATTERY.10,    BATTERY.91,    0.0036
            30,    BATTERY.10,    BATTERY.94,    0.0036
            31,    BATTERY.10,    BATTERY.107,    0.0024
            32,    BATTERY.10,    BATTERY.110,    0.0024
            33,    BATTERY.11,    BATTERY.75,    0.00432
            34,    BATTERY.11,    BATTERY.91,    0.00288
            35,    BATTERY.11,    BATTERY.104,    0.00288
            36,    BATTERY.11,    BATTERY.107,    0.00192
            37,    BATTERY.12,    BATTERY.74,    0.00144
            38,    BATTERY.12,    BATTERY.75,    0.00216
            39,    BATTERY.12,    BATTERY.101,    0.00096
            40,    BATTERY.12,    BATTERY.104,    0.00144
            41,    BATTERY.13,    BATTERY.110,    0.0024
            42,    BATTERY.13,    BATTERY.113,    0.0006
            43,    BATTERY.14,    BATTERY.107,    0.003
            44,    BATTERY.14,    BATTERY.110,    0.003
            45,    BATTERY.15,    BATTERY.104,    0.0036
            46,    BATTERY.15,    BATTERY.107,    0.0024
            47,    BATTERY.16,    BATTERY.101,    0.0012
            48,    BATTERY.16,    BATTERY.104,    0.0018
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            49,    BATTERY.73,    FRAMES.671,    0.0108
            50,    BATTERY.73,    FRAMES.673,    0.0108
            51,    BATTERY.73,    FRAMES.1071,    0.0144
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            52,    BATTERY.76,    FRAMES.429,    0.01237875
            53,    BATTERY.76,    FRAMES.430,    0.0082525
            54,    BATTERY.77,    FRAMES.430,    0.0082525
            55,    BATTERY.77,    FRAMES.431,    0.016505
            56,    BATTERY.77,    FRAMES.432,    0.016505
            57,    BATTERY.78,    FRAMES.433,    0.016505
            58,    BATTERY.78,    FRAMES.434,    0.02063125
            59,    BATTERY.78,    FRAMES.435,    0.00412625
            60,    BATTERY.79,    FRAMES.435,    0.01237875
            61,    BATTERY.79,    FRAMES.436,    0.016505
            62,    BATTERY.79,    FRAMES.437,    0.01237875
            63,    BATTERY.80,    FRAMES.437,    0.00412625
            64,    BATTERY.80,    FRAMES.438,    0.016505
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            65,    BATTERY.80,    FRAMES.670,    0.0144
            66,    BATTERY.80,    FRAMES.671,    0.0036
C Contact - Face Contactor-Bottom battery pack to card[MECHANICAL_CONNECTIONS][12]::3D8
            67,    BATTERY.81,    BATTERY.140,    0.0024
            68,    BATTERY.81,    BATTERY.141,    0.0006
            69,    BATTERY.82,    BATTERY.89,    0.0036
            70,    BATTERY.82,    BATTERY.92,    0.0036
            71,    BATTERY.82,    BATTERY.105,    0.0024
            72,    BATTERY.82,    BATTERY.108,    0.0024
            73,    BATTERY.83,    BATTERY.89,    0.00288
            74,    BATTERY.83,    BATTERY.102,    0.00288
            75,    BATTERY.83,    BATTERY.105,    0.00192
            76,    BATTERY.83,    BATTERY.143,    0.00432
            77,    BATTERY.84,    BATTERY.99,    0.00096
            78,    BATTERY.84,    BATTERY.102,    0.00144
            79,    BATTERY.84,    BATTERY.142,    0.00144
            80,    BATTERY.84,    BATTERY.143,    0.00216
            81,    BATTERY.85,    BATTERY.108,    0.0024
            82,    BATTERY.85,    BATTERY.111,    0.0006
            83,    BATTERY.86,    BATTERY.105,    0.003
            84,    BATTERY.86,    BATTERY.108,    0.003
            85,    BATTERY.87,    BATTERY.102,    0.0036
            86,    BATTERY.87,    BATTERY.105,    0.0024
            87,    BATTERY.88,    BATTERY.99,    0.0012
            88,    BATTERY.88,    BATTERY.102,    0.0018
            89,    BATTERY.89,    BATTERY.135,    0.0036
            90,    BATTERY.89,    BATTERY.137,    0.00288
            91,    BATTERY.92,    BATTERY.134,    0.00288
            92,    BATTERY.92,    BATTERY.135,    0.0036
            93,    BATTERY.92,    BATTERY.150,    0.00288
            94,    BATTERY.95,    BATTERY.134,    0.00072
            95,    BATTERY.95,    BATTERY.150,    0.00072
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            96,    BATTERY.95,    FRAMES.603,    0.0036
            97,    BATTERY.95,    FRAMES.604,    0.0144
            98,    BATTERY.95,    FRAMES.605,    0.0144
            99,    BATTERY.95,    FRAMES.1043,    0.0036
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            100,    BATTERY.97,    FRAMES.673,    0.0036
            101,    BATTERY.97,    FRAMES.675,    0.0144
            102,    BATTERY.97,    FRAMES.676,    0.0036
            103,    BATTERY.97,    FRAMES.1073,    0.0144
C Contact - Face Contactor-Bottom battery pack to card[MECHANICAL_CONNECTIONS][12]::3D8
            104,    BATTERY.98,    BATTERY.139,    0.003
            105,    BATTERY.98,    BATTERY.140,    0.003
            106,    BATTERY.108,    BATTERY.150,    0.00192
            107,    BATTERY.111,    BATTERY.150,    0.00048
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            108,    BATTERY.111,    FRAMES.607,    0.0144
            109,    BATTERY.111,    FRAMES.608,    0.0108
            110,    BATTERY.111,    FRAMES.1043,    0.0108
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            111,    BATTERY.113,    FRAMES.676,    0.0108
            112,    BATTERY.113,    FRAMES.677,    0.0144
            113,    BATTERY.113,    FRAMES.1075,    0.0108
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            114,    BATTERY.114,    FRAMES.725,    0.0082525
            115,    BATTERY.114,    FRAMES.726,    0.01237875
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            116,    BATTERY.116,    FRAMES.795,    0.0082525
            117,    BATTERY.116,    FRAMES.796,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            118,    BATTERY.117,    FRAMES.723,    0.016505
            119,    BATTERY.117,    FRAMES.724,    0.016505
            120,    BATTERY.117,    FRAMES.725,    0.0082525
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            121,    BATTERY.119,    FRAMES.793,    0.016505
            122,    BATTERY.119,    FRAMES.794,    0.016505
            123,    BATTERY.119,    FRAMES.795,    0.0082525
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            124,    BATTERY.120,    FRAMES.720,    0.00412625
            125,    BATTERY.120,    FRAMES.721,    0.02063125
            126,    BATTERY.120,    FRAMES.722,    0.016505
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            127,    BATTERY.122,    FRAMES.790,    0.00412625
            128,    BATTERY.122,    FRAMES.791,    0.02063125
            129,    BATTERY.122,    FRAMES.792,    0.016505
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            130,    BATTERY.123,    FRAMES.718,    0.01237875
            131,    BATTERY.123,    FRAMES.719,    0.016505
            132,    BATTERY.123,    FRAMES.720,    0.01237875
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            133,    BATTERY.125,    FRAMES.788,    0.01237875
            134,    BATTERY.125,    FRAMES.789,    0.016505
            135,    BATTERY.125,    FRAMES.790,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            136,    BATTERY.126,    FRAMES.608,    0.0036
            137,    BATTERY.126,    FRAMES.609,    0.0144
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            138,    BATTERY.126,    FRAMES.717,    0.016505
            139,    BATTERY.126,    FRAMES.718,    0.00412625
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            140,    BATTERY.128,    FRAMES.679,    0.0144
C Contact - Edge Contactor-Top battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][1]::11D3
            141,    BATTERY.128,    FRAMES.787,    0.016505
            142,    BATTERY.128,    FRAMES.788,    0.00412625
C Contact - Edge Contactor-Top battery card to frames (+X)[MECHANICAL_CONNECTIONS][1]::11D6
            143,    BATTERY.128,    FRAMES.1075,    0.0036
C Contact - Face Contactor-Bottom battery pack to card[MECHANICAL_CONNECTIONS][12]::3D8
            144,    BATTERY.129,    BATTERY.138,    0.0036
            145,    BATTERY.129,    BATTERY.139,    0.0024
            146,    BATTERY.133,    BATTERY.136,    0.0012
            147,    BATTERY.133,    BATTERY.138,    0.0018
            148,    BATTERY.134,    BATTERY.140,    0.00192
            149,    BATTERY.134,    BATTERY.141,    0.00048
            150,    BATTERY.135,    BATTERY.139,    0.0024
            151,    BATTERY.135,    BATTERY.140,    0.0024
            152,    BATTERY.136,    BATTERY.148,    0.00096
            153,    BATTERY.137,    BATTERY.138,    0.00288
            154,    BATTERY.137,    BATTERY.139,    0.00192
            155,    BATTERY.137,    BATTERY.143,    0.00432
            156,    BATTERY.138,    BATTERY.148,    0.00144
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            157,    BATTERY.141,    FRAMES.601,    0.0108
            158,    BATTERY.141,    FRAMES.602,    0.0144
            159,    BATTERY.141,    FRAMES.603,    0.0108
C Contact - Face Contactor-Bottom battery pack to card[MECHANICAL_CONNECTIONS][12]::3D8
            160,    BATTERY.142,    BATTERY.148,    0.00144
            161,    BATTERY.143,    BATTERY.148,    0.00216
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            162,    BATTERY.144,    FRAMES.930,    0.01237875
            163,    BATTERY.144,    FRAMES.931,    0.0082525
            164,    BATTERY.145,    FRAMES.931,    0.0082525
            165,    BATTERY.145,    FRAMES.932,    0.016505
            166,    BATTERY.145,    FRAMES.933,    0.016505
            167,    BATTERY.146,    FRAMES.934,    0.016505
            168,    BATTERY.146,    FRAMES.935,    0.02063125
            169,    BATTERY.146,    FRAMES.936,    0.00412625
            170,    BATTERY.147,    FRAMES.936,    0.01237875
            171,    BATTERY.147,    FRAMES.937,    0.016505
            172,    BATTERY.147,    FRAMES.938,    0.01237875
C Contact - Edge Contactor-Bottom battery card to frames (+X)[MECHANICAL_CONNECTIONS][7]::107A
            173,    BATTERY.149,    FRAMES.600,    0.0144
            174,    BATTERY.149,    FRAMES.601,    0.0036
C Contact - Edge Contactor-Bottom battery card to frames (+/- Y)[MECHANICAL_CONNECTIONS][9]::2E6
            175,    BATTERY.149,    FRAMES.938,    0.00412625
            176,    BATTERY.149,    FRAMES.939,    0.016505
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            177,    CARDS.2,    FRAMES.940,    0.01237875
            178,    CARDS.2,    FRAMES.941,    0.0082525
            179,    CARDS.3,    FRAMES.941,    0.0082525
            180,    CARDS.3,    FRAMES.942,    0.016505
            181,    CARDS.3,    FRAMES.943,    0.016505
            182,    CARDS.4,    FRAMES.944,    0.016505
            183,    CARDS.4,    FRAMES.945,    0.02063125
            184,    CARDS.4,    FRAMES.946,    0.00412625
            185,    CARDS.5,    FRAMES.946,    0.01237875
            186,    CARDS.5,    FRAMES.947,    0.016505
            187,    CARDS.5,    FRAMES.948,    0.01237875
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            188,    CARDS.6,    FRAMES.610,    0.0144
            189,    CARDS.6,    FRAMES.611,    0.0036
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            190,    CARDS.6,    FRAMES.948,    0.00412625
            191,    CARDS.6,    FRAMES.949,    0.016505
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            192,    CARDS.11,    FRAMES.611,    0.0108
            193,    CARDS.11,    FRAMES.612,    0.0144
            194,    CARDS.11,    FRAMES.613,    0.0108
            195,    CARDS.16,    FRAMES.613,    0.0036
            196,    CARDS.16,    FRAMES.614,    0.0144
            197,    CARDS.16,    FRAMES.615,    0.0144
            198,    CARDS.16,    FRAMES.1046,    0.0036
            199,    CARDS.21,    FRAMES.617,    0.0144
            200,    CARDS.21,    FRAMES.618,    0.0108
            201,    CARDS.21,    FRAMES.1046,    0.0108
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            202,    CARDS.22,    FRAMES.735,    0.0082525
            203,    CARDS.22,    FRAMES.736,    0.01237875
            204,    CARDS.23,    FRAMES.733,    0.016505
            205,    CARDS.23,    FRAMES.734,    0.016505
            206,    CARDS.23,    FRAMES.735,    0.0082525
            207,    CARDS.24,    FRAMES.730,    0.00412625
            208,    CARDS.24,    FRAMES.731,    0.02063125
            209,    CARDS.24,    FRAMES.732,    0.016505
            210,    CARDS.25,    FRAMES.728,    0.01237875
            211,    CARDS.25,    FRAMES.729,    0.016505
            212,    CARDS.25,    FRAMES.730,    0.01237875
C Contact - Edge Contactor-Reaction Wheel card to (+x) frane[MECHANICAL_CONNECTIONS][0]::1FD4
            213,    CARDS.26,    FRAMES.618,    0.0036
            214,    CARDS.26,    FRAMES.619,    0.0144
C Contact - Edge Contactor-Reaction wheel card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD5
            215,    CARDS.26,    FRAMES.727,    0.016505
            216,    CARDS.26,    FRAMES.728,    0.00412625
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            217,    CARDS.66,    FRAMES.447,    0.00412625
            218,    CARDS.66,    FRAMES.448,    0.016505
C Contact - Edge Contactor-C3 to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCA
            219,    CARDS.66,    FRAMES.680,    0.0144
            220,    CARDS.66,    FRAMES.681,    0.0036
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            221,    CARDS.67,    FRAMES.445,    0.01237875
            222,    CARDS.67,    FRAMES.446,    0.016505
            223,    CARDS.67,    FRAMES.447,    0.01237875
            224,    CARDS.68,    FRAMES.443,    0.016505
            225,    CARDS.68,    FRAMES.444,    0.02063125
            226,    CARDS.68,    FRAMES.445,    0.00412625
            227,    CARDS.69,    FRAMES.440,    0.0082525
            228,    CARDS.69,    FRAMES.441,    0.016505
            229,    CARDS.69,    FRAMES.442,    0.016505
            230,    CARDS.70,    FRAMES.439,    0.01237875
            231,    CARDS.70,    FRAMES.440,    0.0082525
C Contact - Edge Contactor-C3 to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCA
            232,    CARDS.71,    FRAMES.681,    0.0108
            233,    CARDS.71,    FRAMES.682,    0.0144
            234,    CARDS.71,    FRAMES.1076,    0.0108
            235,    CARDS.76,    FRAMES.686,    0.0036
            236,    CARDS.76,    FRAMES.1076,    0.0036
            237,    CARDS.76,    FRAMES.1077,    0.0144
            238,    CARDS.76,    FRAMES.1079,    0.0144
            239,    CARDS.81,    FRAMES.686,    0.0108
            240,    CARDS.81,    FRAMES.687,    0.0144
            241,    CARDS.81,    FRAMES.688,    0.0108
            242,    CARDS.86,    FRAMES.688,    0.0036
            243,    CARDS.86,    FRAMES.689,    0.0144
C Contact - Edge Contactor-C3 to (+/- y) frame[MECHANICAL_CONNECTIONS][0]::1FCB
            244,    CARDS.86,    FRAMES.797,    0.016505
            245,    CARDS.86,    FRAMES.798,    0.00412625
            246,    CARDS.87,    FRAMES.798,    0.01237875
            247,    CARDS.87,    FRAMES.799,    0.016505
            248,    CARDS.87,    FRAMES.800,    0.01237875
            249,    CARDS.88,    FRAMES.800,    0.00412625
            250,    CARDS.88,    FRAMES.801,    0.02063125
            251,    CARDS.88,    FRAMES.802,    0.016505
            252,    CARDS.89,    FRAMES.803,    0.016505
            253,    CARDS.89,    FRAMES.804,    0.016505
            254,    CARDS.89,    FRAMES.805,    0.0082525
            255,    CARDS.90,    FRAMES.805,    0.0082525
            256,    CARDS.90,    FRAMES.806,    0.01237875
C Contact - Edge Contactor-  -Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][5]::F58
            257,    CARDS.801,    FRAMES.513,    0.0201125
            258,    CARDS.801,    FRAMES.1055,    0.01508438
            259,    CARDS.801,    FRAMES.1063,    0.01508437
            260,    CARDS.802,    FRAMES.474,    0.005028125
            261,    CARDS.802,    FRAMES.480,    0.0201125
            262,    CARDS.802,    FRAMES.486,    0.0201125
            263,    CARDS.802,    FRAMES.643,    0.005028125
            264,    CARDS.806,    FRAMES.529,    0.0201125
            265,    CARDS.806,    FRAMES.1063,    0.005028125
            266,    CARDS.806,    FRAMES.1162,    0.0201125
            267,    CARDS.806,    FRAMES.1163,    0.005028125
            268,    CARDS.807,    FRAMES.461,    0.01508437
            269,    CARDS.807,    FRAMES.468,    0.0201125
            270,    CARDS.807,    FRAMES.474,    0.01508437
            271,    CARDS.810,    FRAMES.674,    0.01759844
            272,    CARDS.810,    FRAMES.685,    0.02262656
            273,    CARDS.810,    FRAMES.692,    0.005028125
            274,    CARDS.810,    FRAMES.1155,    0.005028125
            275,    CARDS.812,    FRAMES.1044,    0.01508437
            276,    CARDS.812,    FRAMES.1163,    0.01508437
            277,    CARDS.812,    FRAMES.1165,    0.0201125
            278,    CARDS.813,    FRAMES.458,    0.02262656
            279,    CARDS.813,    FRAMES.461,    0.005028125
            280,    CARDS.813,    FRAMES.1112,    0.005028125
            281,    CARDS.813,    FRAMES.1129,    0.01759844
            282,    CARDS.814,    FRAMES.683,    0.01508437
            283,    CARDS.814,    FRAMES.1092,    0.0201125
            284,    CARDS.814,    FRAMES.1112,    0.01508438
            285,    CARDS.815,    FRAMES.32,    0.005028125
            286,    CARDS.815,    FRAMES.35,    0.0201125
            287,    CARDS.815,    FRAMES.665,    0.0201125
            288,    CARDS.815,    FRAMES.683,    0.005028125
            289,    CARDS.816,    FRAMES.26,    0.01508437
            290,    CARDS.816,    FRAMES.29,    0.0201125
            291,    CARDS.816,    FRAMES.32,    0.01508437
            292,    CARDS.817,    FRAMES.26,    0.005028125
            293,    CARDS.817,    FRAMES.606,    0.01759844
            294,    CARDS.817,    FRAMES.1044,    0.005028125
            295,    CARDS.817,    FRAMES.1048,    0.02262656
            296,    CARDS.818,    FRAMES.692,    0.01508438
            297,    CARDS.818,    FRAMES.1131,    0.0201125
            298,    CARDS.818,    FRAMES.1135,    0.01508437
            299,    CARDS.819,    FRAMES.517,    0.0201125
            300,    CARDS.819,    FRAMES.521,    0.0201125
            301,    CARDS.819,    FRAMES.1135,    0.005028125
            302,    CARDS.819,    FRAMES.1138,    0.005028125
            303,    CARDS.820,    FRAMES.1138,    0.01508437
            304,    CARDS.820,    FRAMES.1140,    0.0201125
            305,    CARDS.820,    FRAMES.1145,    0.01508437
            306,    CARDS.821,    FRAMES.1055,    0.005028125
            307,    CARDS.821,    FRAMES.1126,    0.02262656
            308,    CARDS.821,    FRAMES.1145,    0.005028125
            309,    CARDS.821,    FRAMES.1149,    0.01759844
C Contact - Edge Contactor-  +Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][24]::F32
            310,    CARDS.822,    FRAMES.487,    0.005028125
            311,    CARDS.822,    FRAMES.488,    0.01759844
            312,    CARDS.822,    FRAMES.1113,    0.02262656
            313,    CARDS.822,    FRAMES.1114,    0.005028125
            314,    CARDS.823,    FRAMES.485,    0.01508437
            315,    CARDS.823,    FRAMES.487,    0.01508438
            316,    CARDS.823,    FRAMES.1015,    0.0201125
            317,    CARDS.824,    FRAMES.482,    0.005028125
            318,    CARDS.824,    FRAMES.483,    0.0201125
            319,    CARDS.824,    FRAMES.484,    0.0201125
            320,    CARDS.824,    FRAMES.485,    0.005028125
            321,    CARDS.825,    FRAMES.481,    0.0201125
            322,    CARDS.825,    FRAMES.482,    0.01508437
            323,    CARDS.825,    FRAMES.1008,    0.01508437
C Contact - Edge Contactor-  -Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][5]::F58
            324,    CARDS.826,    FRAMES.643,    0.01508437
            325,    CARDS.826,    FRAMES.1154,    0.0201125
            326,    CARDS.826,    FRAMES.1155,    0.01508438
C Contact - Edge Contactor-  +Z to frames (+/- Y)[MECHANICAL_CONNECTIONS][24]::F32
            327,    CARDS.827,    FRAMES.416,    0.005028125
            328,    CARDS.827,    FRAMES.417,    0.02262656
            329,    CARDS.827,    FRAMES.479,    0.01759844
            330,    CARDS.827,    FRAMES.1008,    0.005028125
            331,    CARDS.828,    FRAMES.1114,    0.01508438
            332,    CARDS.828,    FRAMES.1116,    0.0201125
            333,    CARDS.828,    FRAMES.1117,    0.01508437
            334,    CARDS.832,    FRAMES.414,    0.01508437
            335,    CARDS.832,    FRAMES.415,    0.0201125
            336,    CARDS.832,    FRAMES.416,    0.01508438
            337,    CARDS.833,    FRAMES.1117,    0.005028125
            338,    CARDS.833,    FRAMES.1118,    0.0201125
            339,    CARDS.833,    FRAMES.1119,    0.0201125
            340,    CARDS.833,    FRAMES.1120,    0.005028125
            341,    CARDS.838,    FRAMES.411,    0.005028125
            342,    CARDS.838,    FRAMES.412,    0.0201125
            343,    CARDS.838,    FRAMES.413,    0.0201125
            344,    CARDS.838,    FRAMES.414,    0.005028125
            345,    CARDS.839,    FRAMES.1120,    0.01508437
            346,    CARDS.839,    FRAMES.1121,    0.0201125
            347,    CARDS.839,    FRAMES.1123,    0.01508437
            348,    CARDS.843,    FRAMES.409,    0.01508437
            349,    CARDS.843,    FRAMES.410,    0.0201125
            350,    CARDS.843,    FRAMES.411,    0.01508437
            351,    CARDS.844,    FRAMES.837,    0.01759844
            352,    CARDS.844,    FRAMES.838,    0.005028125
            353,    CARDS.844,    FRAMES.1123,    0.005028125
            354,    CARDS.844,    FRAMES.1124,    0.02262656
            355,    CARDS.845,    FRAMES.838,    0.01508438
            356,    CARDS.845,    FRAMES.839,    0.0201125
            357,    CARDS.845,    FRAMES.840,    0.01508437
            358,    CARDS.846,    FRAMES.840,    0.005028125
            359,    CARDS.846,    FRAMES.841,    0.0201125
            360,    CARDS.846,    FRAMES.842,    0.0201125
            361,    CARDS.846,    FRAMES.843,    0.005028125
            362,    CARDS.847,    FRAMES.843,    0.01508437
            363,    CARDS.847,    FRAMES.844,    0.0201125
            364,    CARDS.847,    FRAMES.845,    0.01508437
            365,    CARDS.849,    FRAMES.408,    0.02262656
            366,    CARDS.849,    FRAMES.409,    0.005028125
            367,    CARDS.849,    FRAMES.845,    0.005028125
            368,    CARDS.849,    FRAMES.846,    0.01759844
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            369,    CARDS.854,    FRAMES.1012,    0.0108
            370,    CARDS.854,    FRAMES.1013,    0.0144
            371,    CARDS.854,    FRAMES.1017,    0.0108
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            372,    CARDS.855,    FRAMES.542,    0.0108
            373,    CARDS.855,    FRAMES.546,    0.0144
            374,    CARDS.855,    FRAMES.550,    0.0108
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            375,    CARDS.869,    FRAMES.489,    0.0144
            376,    CARDS.869,    FRAMES.491,    0.0144
            377,    CARDS.869,    FRAMES.493,    0.0036
            378,    CARDS.869,    FRAMES.1017,    0.0036
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            379,    CARDS.870,    FRAMES.550,    0.0036
            380,    CARDS.870,    FRAMES.554,    0.0144
            381,    CARDS.870,    FRAMES.559,    0.0144
            382,    CARDS.870,    FRAMES.564,    0.0036
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            383,    CARDS.881,    FRAMES.1157,    0.01237875
            384,    CARDS.881,    FRAMES.1159,    0.0082525
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            385,    CARDS.882,    FRAMES.894,    0.01237875
            386,    CARDS.882,    FRAMES.895,    0.0082525
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            387,    CARDS.887,    FRAMES.493,    0.0108
            388,    CARDS.887,    FRAMES.495,    0.0144
            389,    CARDS.887,    FRAMES.497,    0.0108
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            390,    CARDS.888,    FRAMES.564,    0.0108
            391,    CARDS.888,    FRAMES.569,    0.0144
            392,    CARDS.888,    FRAMES.574,    0.0108
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            393,    CARDS.890,    FRAMES.63,    0.0082525
            394,    CARDS.890,    FRAMES.64,    0.01237875
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            395,    CARDS.891,    FRAMES.690,    0.0082525
            396,    CARDS.891,    FRAMES.696,    0.01237875
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            397,    CARDS.893,    FRAMES.61,    0.016505
            398,    CARDS.893,    FRAMES.62,    0.016505
            399,    CARDS.893,    FRAMES.63,    0.0082525
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            400,    CARDS.894,    FRAMES.678,    0.016505
            401,    CARDS.894,    FRAMES.684,    0.016505
            402,    CARDS.894,    FRAMES.690,    0.0082525
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            403,    CARDS.896,    FRAMES.58,    0.00412625
            404,    CARDS.896,    FRAMES.59,    0.02063125
            405,    CARDS.896,    FRAMES.60,    0.016505
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            406,    CARDS.897,    FRAMES.660,    0.00412625
            407,    CARDS.897,    FRAMES.666,    0.02063125
            408,    CARDS.897,    FRAMES.672,    0.016505
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            409,    CARDS.899,    FRAMES.56,    0.01237875
            410,    CARDS.899,    FRAMES.57,    0.016505
            411,    CARDS.899,    FRAMES.58,    0.01237875
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            412,    CARDS.900,    FRAMES.648,    0.01237875
            413,    CARDS.900,    FRAMES.654,    0.016505
            414,    CARDS.900,    FRAMES.660,    0.01237875
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            415,    CARDS.902,    FRAMES.55,    0.016505
            416,    CARDS.902,    FRAMES.56,    0.00412625
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            417,    CARDS.902,    FRAMES.497,    0.0036
            418,    CARDS.902,    FRAMES.499,    0.0144
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            419,    CARDS.903,    FRAMES.574,    0.0036
            420,    CARDS.903,    FRAMES.579,    0.0144
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            421,    CARDS.903,    FRAMES.642,    0.016505
            422,    CARDS.903,    FRAMES.648,    0.00412625
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            423,    CARDS.905,    FRAMES.867,    0.016505
            424,    CARDS.905,    FRAMES.1159,    0.0082525
            425,    CARDS.905,    FRAMES.1160,    0.016505
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            426,    CARDS.906,    FRAMES.895,    0.0082525
            427,    CARDS.906,    FRAMES.896,    0.016505
            428,    CARDS.906,    FRAMES.897,    0.016505
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            429,    CARDS.908,    FRAMES.869,    0.016505
            430,    CARDS.908,    FRAMES.871,    0.02063125
            431,    CARDS.908,    FRAMES.873,    0.00412625
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            432,    CARDS.909,    FRAMES.899,    0.016505
            433,    CARDS.909,    FRAMES.901,    0.02063125
            434,    CARDS.909,    FRAMES.903,    0.00412625
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            435,    CARDS.911,    FRAMES.873,    0.01237875
            436,    CARDS.911,    FRAMES.874,    0.016505
            437,    CARDS.911,    FRAMES.876,    0.01237875
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            438,    CARDS.912,    FRAMES.903,    0.01237875
            439,    CARDS.912,    FRAMES.904,    0.016505
            440,    CARDS.912,    FRAMES.906,    0.01237875
C Contact - Edge Contactor-CDC card to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD1
            441,    CARDS.914,    FRAMES.876,    0.00412625
            442,    CARDS.914,    FRAMES.878,    0.016505
C Contact - Edge Contactor-CFC card to +x frame[MECHANICAL_CONNECTIONS][0]::1FD0
            443,    CARDS.914,    FRAMES.1010,    0.0144
            444,    CARDS.914,    FRAMES.1012,    0.0036
C Contact - Edge Contactor-ORTA to +x frame[MECHANICAL_CONNECTIONS][0]::1FD2
            445,    CARDS.915,    FRAMES.538,    0.0144
            446,    CARDS.915,    FRAMES.542,    0.0036
C Contact - Edge Contactor-ORTA to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FD3
            447,    CARDS.915,    FRAMES.906,    0.00412625
            448,    CARDS.915,    FRAMES.908,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            449,    CARDS.917,    FRAMES.467,    0.00412625
            450,    CARDS.917,    FRAMES.996,    0.016505
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            451,    CARDS.917,    FRAMES.1090,    0.0144
            452,    CARDS.917,    FRAMES.1091,    0.0036
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            453,    CARDS.918,    FRAMES.467,    0.00412625
            454,    CARDS.918,    FRAMES.996,    0.016505
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            455,    CARDS.918,    FRAMES.1090,    0.0144
            456,    CARDS.918,    FRAMES.1091,    0.0036
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            457,    CARDS.919,    FRAMES.457,    0.00412625
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            458,    CARDS.919,    FRAMES.691,    0.0036
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            459,    CARDS.919,    FRAMES.990,    0.016505
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            460,    CARDS.919,    FRAMES.1082,    0.0144
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            461,    CARDS.921,    FRAMES.465,    0.01237875
            462,    CARDS.921,    FRAMES.466,    0.016505
            463,    CARDS.921,    FRAMES.467,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            464,    CARDS.922,    FRAMES.465,    0.01237875
            465,    CARDS.922,    FRAMES.466,    0.016505
            466,    CARDS.922,    FRAMES.467,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            467,    CARDS.923,    FRAMES.455,    0.01237875
            468,    CARDS.923,    FRAMES.456,    0.016505
            469,    CARDS.923,    FRAMES.457,    0.01237875
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            470,    CARDS.925,    FRAMES.463,    0.016505
            471,    CARDS.925,    FRAMES.464,    0.02063125
            472,    CARDS.925,    FRAMES.465,    0.00412625
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            473,    CARDS.926,    FRAMES.463,    0.016505
            474,    CARDS.926,    FRAMES.464,    0.02063125
            475,    CARDS.926,    FRAMES.465,    0.00412625
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            476,    CARDS.927,    FRAMES.453,    0.016505
            477,    CARDS.927,    FRAMES.454,    0.02063125
            478,    CARDS.927,    FRAMES.455,    0.00412625
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            479,    CARDS.929,    FRAMES.460,    0.0082525
            480,    CARDS.929,    FRAMES.462,    0.016505
            481,    CARDS.929,    FRAMES.992,    0.016505
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            482,    CARDS.930,    FRAMES.460,    0.0082525
            483,    CARDS.930,    FRAMES.462,    0.016505
            484,    CARDS.930,    FRAMES.992,    0.016505
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            485,    CARDS.931,    FRAMES.450,    0.0082525
            486,    CARDS.931,    FRAMES.451,    0.016505
            487,    CARDS.931,    FRAMES.452,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            488,    CARDS.936,    FRAMES.459,    0.01237875
            489,    CARDS.936,    FRAMES.460,    0.0082525
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            490,    CARDS.937,    FRAMES.459,    0.01237875
            491,    CARDS.937,    FRAMES.460,    0.0082525
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            492,    CARDS.938,    FRAMES.449,    0.01237875
            493,    CARDS.938,    FRAMES.450,    0.0082525
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            494,    CARDS.940,    FRAMES.1091,    0.0108
            495,    CARDS.940,    FRAMES.1093,    0.0144
            496,    CARDS.940,    FRAMES.1094,    0.0108
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            497,    CARDS.941,    FRAMES.1091,    0.0108
            498,    CARDS.941,    FRAMES.1093,    0.0144
            499,    CARDS.941,    FRAMES.1094,    0.0108
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            500,    CARDS.942,    FRAMES.691,    0.0108
            501,    CARDS.942,    FRAMES.693,    0.0108
            502,    CARDS.942,    FRAMES.1084,    0.0144
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            503,    CARDS.960,    FRAMES.1094,    0.0036
            504,    CARDS.960,    FRAMES.1096,    0.0144
            505,    CARDS.960,    FRAMES.1097,    0.0144
            506,    CARDS.960,    FRAMES.1098,    0.0036
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            507,    CARDS.961,    FRAMES.1094,    0.0036
            508,    CARDS.961,    FRAMES.1096,    0.0144
            509,    CARDS.961,    FRAMES.1097,    0.0144
            510,    CARDS.961,    FRAMES.1098,    0.0036
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            511,    CARDS.962,    FRAMES.693,    0.0036
            512,    CARDS.962,    FRAMES.694,    0.0144
            513,    CARDS.962,    FRAMES.695,    0.0144
            514,    CARDS.962,    FRAMES.1086,    0.0036
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            515,    CARDS.983,    FRAMES.1098,    0.0108
            516,    CARDS.983,    FRAMES.1099,    0.0144
            517,    CARDS.983,    FRAMES.1100,    0.0108
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            518,    CARDS.984,    FRAMES.1098,    0.0108
            519,    CARDS.984,    FRAMES.1099,    0.0144
            520,    CARDS.984,    FRAMES.1100,    0.0108
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            521,    CARDS.985,    FRAMES.1086,    0.0108
            522,    CARDS.985,    FRAMES.1087,    0.0144
            523,    CARDS.985,    FRAMES.1088,    0.0108
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            524,    CARDS.1003,    FRAMES.817,    0.016505
            525,    CARDS.1003,    FRAMES.818,    0.00412625
C Contact - Edge Contactor-DxWiFi to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FC8
            526,    CARDS.1003,    FRAMES.1100,    0.0036
            527,    CARDS.1003,    FRAMES.1101,    0.0144
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            528,    CARDS.1004,    FRAMES.817,    0.016505
            529,    CARDS.1004,    FRAMES.818,    0.00412625
C Contact - Edge Contactor-GPS to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCC
            530,    CARDS.1004,    FRAMES.1100,    0.0036
            531,    CARDS.1004,    FRAMES.1101,    0.0144
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            532,    CARDS.1005,    FRAMES.807,    0.016505
            533,    CARDS.1005,    FRAMES.808,    0.00412625
C Contact - Edge Contactor-Star tracker card to (+x) frame[MECHANICAL_CONNECTIONS][0]::1FCE
            534,    CARDS.1005,    FRAMES.1088,    0.0036
            535,    CARDS.1005,    FRAMES.1089,    0.0144
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            536,    CARDS.1007,    FRAMES.818,    0.01237875
            537,    CARDS.1007,    FRAMES.819,    0.016505
            538,    CARDS.1007,    FRAMES.820,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            539,    CARDS.1008,    FRAMES.818,    0.01237875
            540,    CARDS.1008,    FRAMES.819,    0.016505
            541,    CARDS.1008,    FRAMES.820,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            542,    CARDS.1009,    FRAMES.808,    0.01237875
            543,    CARDS.1009,    FRAMES.809,    0.016505
            544,    CARDS.1009,    FRAMES.810,    0.01237875
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            545,    CARDS.1011,    FRAMES.820,    0.00412625
            546,    CARDS.1011,    FRAMES.821,    0.02063125
            547,    CARDS.1011,    FRAMES.822,    0.016505
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            548,    CARDS.1012,    FRAMES.820,    0.00412625
            549,    CARDS.1012,    FRAMES.821,    0.02063125
            550,    CARDS.1012,    FRAMES.822,    0.016505
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            551,    CARDS.1013,    FRAMES.810,    0.00412625
            552,    CARDS.1013,    FRAMES.811,    0.02063125
            553,    CARDS.1013,    FRAMES.812,    0.016505
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            554,    CARDS.1015,    FRAMES.823,    0.016505
            555,    CARDS.1015,    FRAMES.824,    0.016505
            556,    CARDS.1015,    FRAMES.825,    0.0082525
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            557,    CARDS.1016,    FRAMES.823,    0.016505
            558,    CARDS.1016,    FRAMES.824,    0.016505
            559,    CARDS.1016,    FRAMES.825,    0.0082525
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            560,    CARDS.1017,    FRAMES.813,    0.016505
            561,    CARDS.1017,    FRAMES.814,    0.016505
            562,    CARDS.1017,    FRAMES.815,    0.0082525
C Contact - Edge Contactor-DxWiFi to (+/- y) frame[MECHANICAL_CONNECTIONS][2]::1FC9
            563,    CARDS.1022,    FRAMES.825,    0.0082525
            564,    CARDS.1022,    FRAMES.826,    0.01237875
C Contact - Edge Contactor-GPS to (+/- y) frames[MECHANICAL_CONNECTIONS][0]::1FCD
            565,    CARDS.1023,    FRAMES.825,    0.0082525
            566,    CARDS.1023,    FRAMES.826,    0.01237875
C Contact - Edge Contactor-Star Tracker card to (+/- y) frames[MECHANICAL_CONNECTIONS][1]::1FCF
            567,    CARDS.1024,    FRAMES.815,    0.0082525
            568,    CARDS.1024,    FRAMES.816,    0.01237875
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            569,    FRAMES.26,    SOLAR_CARDS.804,    1.41541
            570,    FRAMES.26,    SOLAR_CARDS.811,    0.3145355
            571,    FRAMES.29,    SOLAR_CARDS.811,    1.258142
            572,    FRAMES.32,    SOLAR_CARDS.811,    1.572677
            573,    FRAMES.35,    SOLAR_CARDS.818,    1.572677
            574,    FRAMES.45,    SOLAR_CARDS.839,    0.1887213
            575,    FRAMES.46,    SOLAR_CARDS.839,    1.698492
            576,    FRAMES.46,    SOLAR_CARDS.846,    0.3774426
            577,    FRAMES.47,    SOLAR_CARDS.846,    1.50977
            578,    FRAMES.48,    SOLAR_CARDS.846,    1.887213
            579,    FRAMES.49,    SOLAR_CARDS.1000,    1.887213
            580,    FRAMES.50,    SOLAR_CARDS.1000,    1.887213
            581,    FRAMES.51,    SOLAR_CARDS.1007,    1.887213
            582,    FRAMES.52,    SOLAR_CARDS.1007,    1.50977
            583,    FRAMES.53,    SOLAR_CARDS.853,    1.698492
            584,    FRAMES.53,    SOLAR_CARDS.1007,    0.3774426
            585,    FRAMES.54,    SOLAR_CARDS.853,    0.1887213
            586,    FRAMES.55,    SOLAR_CARDS.839,    0.1258142
            587,    FRAMES.55,    SOLAR_CARDS.860,    0.03145355
            588,    FRAMES.56,    SOLAR_CARDS.839,    1.132328
            589,    FRAMES.56,    SOLAR_CARDS.846,    0.2516284
            590,    FRAMES.56,    SOLAR_CARDS.860,    0.283082
            591,    FRAMES.56,    SOLAR_CARDS.867,    0.0629071
            592,    FRAMES.57,    SOLAR_CARDS.846,    1.006514
            593,    FRAMES.57,    SOLAR_CARDS.867,    0.2516284
            594,    FRAMES.58,    SOLAR_CARDS.846,    1.258142
            595,    FRAMES.58,    SOLAR_CARDS.867,    0.3145355
            596,    FRAMES.59,    SOLAR_CARDS.874,    0.3145355
            597,    FRAMES.59,    SOLAR_CARDS.1000,    1.258142
            598,    FRAMES.60,    SOLAR_CARDS.874,    0.3145355
            599,    FRAMES.60,    SOLAR_CARDS.1000,    1.258142
            600,    FRAMES.61,    SOLAR_CARDS.881,    0.3145355
            601,    FRAMES.61,    SOLAR_CARDS.1007,    1.258142
            602,    FRAMES.62,    SOLAR_CARDS.881,    0.2516284
            603,    FRAMES.62,    SOLAR_CARDS.1007,    1.006514
            604,    FRAMES.63,    SOLAR_CARDS.853,    1.132328
            605,    FRAMES.63,    SOLAR_CARDS.881,    0.0629071
            606,    FRAMES.63,    SOLAR_CARDS.888,    0.283082
            607,    FRAMES.63,    SOLAR_CARDS.1007,    0.2516284
            608,    FRAMES.64,    SOLAR_CARDS.853,    0.1258142
            609,    FRAMES.64,    SOLAR_CARDS.888,    0.03145355
            610,    FRAMES.65,    SOLAR_CARDS.860,    0.1572677
            611,    FRAMES.67,    SOLAR_CARDS.867,    1.258142
            612,    FRAMES.68,    SOLAR_CARDS.867,    1.572677
            613,    FRAMES.69,    SOLAR_CARDS.874,    1.572677
            614,    FRAMES.71,    SOLAR_CARDS.881,    1.572677
            615,    FRAMES.73,    SOLAR_CARDS.881,    0.3145355
            616,    FRAMES.73,    SOLAR_CARDS.888,    1.41541
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            617,    FRAMES.186,    SOLAR_CARDS.842,    1.006514
            618,    FRAMES.186,    SOLAR_CARDS.863,    0.2516284
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            619,    FRAMES.188,    SOLAR_CARDS.851,    1.698492
            620,    FRAMES.188,    SOLAR_CARDS.1005,    0.3774426
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            621,    FRAMES.193,    SOLAR_CARDS.842,    1.258142
            622,    FRAMES.193,    SOLAR_CARDS.863,    0.3145355
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            623,    FRAMES.195,    SOLAR_CARDS.1005,    1.50977
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            624,    FRAMES.200,    SOLAR_CARDS.870,    0.3145355
            625,    FRAMES.200,    SOLAR_CARDS.996,    1.258142
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            626,    FRAMES.202,    SOLAR_CARDS.1005,    1.887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            627,    FRAMES.207,    SOLAR_CARDS.870,    0.3145355
            628,    FRAMES.207,    SOLAR_CARDS.996,    1.258142
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            629,    FRAMES.209,    SOLAR_CARDS.998,    1.887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            630,    FRAMES.214,    SOLAR_CARDS.877,    0.3145355
            631,    FRAMES.214,    SOLAR_CARDS.1003,    1.258142
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            632,    FRAMES.216,    SOLAR_CARDS.998,    1.887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            633,    FRAMES.221,    SOLAR_CARDS.877,    0.2516284
            634,    FRAMES.221,    SOLAR_CARDS.1003,    1.006514
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            635,    FRAMES.223,    SOLAR_CARDS.844,    1.887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            636,    FRAMES.228,    SOLAR_CARDS.849,    1.132328
            637,    FRAMES.228,    SOLAR_CARDS.877,    0.0629071
            638,    FRAMES.228,    SOLAR_CARDS.884,    0.283082
            639,    FRAMES.228,    SOLAR_CARDS.1003,    0.2516284
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            640,    FRAMES.230,    SOLAR_CARDS.844,    1.50977
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            641,    FRAMES.235,    SOLAR_CARDS.849,    0.1258142
            642,    FRAMES.235,    SOLAR_CARDS.884,    0.03145355
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            643,    FRAMES.237,    SOLAR_CARDS.837,    1.698492
            644,    FRAMES.237,    SOLAR_CARDS.844,    0.3774426
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            645,    FRAMES.242,    SOLAR_CARDS.856,    0.1572677
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            646,    FRAMES.244,    SOLAR_CARDS.837,    0.1887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            647,    FRAMES.249,    SOLAR_CARDS.856,    1.41541
            648,    FRAMES.249,    SOLAR_CARDS.863,    0.3145355
            649,    FRAMES.250,    SOLAR_CARDS.863,    1.258142
            650,    FRAMES.251,    SOLAR_CARDS.863,    1.572677
            651,    FRAMES.252,    SOLAR_CARDS.870,    1.572677
            652,    FRAMES.253,    SOLAR_CARDS.870,    1.572677
            653,    FRAMES.254,    SOLAR_CARDS.877,    1.572677
            654,    FRAMES.255,    SOLAR_CARDS.877,    1.258142
            655,    FRAMES.256,    SOLAR_CARDS.877,    0.3145355
            656,    FRAMES.256,    SOLAR_CARDS.884,    1.41541
            657,    FRAMES.257,    SOLAR_CARDS.884,    0.1572677
            658,    FRAMES.258,    SOLAR_CARDS.856,    0.1258142
            659,    FRAMES.258,    SOLAR_CARDS.891,    0.0629071
            660,    FRAMES.259,    SOLAR_CARDS.856,    1.132328
            661,    FRAMES.259,    SOLAR_CARDS.863,    0.2516284
            662,    FRAMES.259,    SOLAR_CARDS.891,    0.5661639
            663,    FRAMES.259,    SOLAR_CARDS.898,    0.1258142
            664,    FRAMES.260,    SOLAR_CARDS.863,    1.006514
            665,    FRAMES.260,    SOLAR_CARDS.898,    0.5032568
            666,    FRAMES.261,    SOLAR_CARDS.863,    1.258142
            667,    FRAMES.261,    SOLAR_CARDS.898,    0.629071
            668,    FRAMES.262,    SOLAR_CARDS.870,    1.258142
            669,    FRAMES.262,    SOLAR_CARDS.905,    0.629071
            670,    FRAMES.263,    SOLAR_CARDS.870,    1.258142
            671,    FRAMES.263,    SOLAR_CARDS.905,    0.629071
            672,    FRAMES.264,    SOLAR_CARDS.877,    1.258142
            673,    FRAMES.264,    SOLAR_CARDS.912,    0.629071
            674,    FRAMES.265,    SOLAR_CARDS.877,    1.006514
            675,    FRAMES.265,    SOLAR_CARDS.912,    0.5032568
            676,    FRAMES.266,    SOLAR_CARDS.877,    0.2516284
            677,    FRAMES.266,    SOLAR_CARDS.884,    1.132328
            678,    FRAMES.266,    SOLAR_CARDS.912,    0.1258142
            679,    FRAMES.266,    SOLAR_CARDS.919,    0.5661639
            680,    FRAMES.267,    SOLAR_CARDS.884,    0.1258142
            681,    FRAMES.267,    SOLAR_CARDS.919,    0.0629071
            682,    FRAMES.268,    SOLAR_CARDS.891,    0.1572677
            683,    FRAMES.269,    SOLAR_CARDS.891,    1.41541
            684,    FRAMES.269,    SOLAR_CARDS.898,    0.3145355
            685,    FRAMES.270,    SOLAR_CARDS.898,    1.258142
            686,    FRAMES.271,    SOLAR_CARDS.898,    1.572677
            687,    FRAMES.272,    SOLAR_CARDS.905,    1.572677
            688,    FRAMES.273,    SOLAR_CARDS.905,    1.572677
            689,    FRAMES.274,    SOLAR_CARDS.912,    1.572677
            690,    FRAMES.275,    SOLAR_CARDS.912,    1.258142
            691,    FRAMES.276,    SOLAR_CARDS.912,    0.3145355
            692,    FRAMES.276,    SOLAR_CARDS.919,    1.41541
            693,    FRAMES.277,    SOLAR_CARDS.919,    0.1572677
            694,    FRAMES.278,    SOLAR_CARDS.891,    0.09436065
            695,    FRAMES.278,    SOLAR_CARDS.926,    0.0629071
            696,    FRAMES.279,    SOLAR_CARDS.891,    0.8492459
            697,    FRAMES.279,    SOLAR_CARDS.898,    0.1887213
            698,    FRAMES.279,    SOLAR_CARDS.926,    0.5661639
            699,    FRAMES.279,    SOLAR_CARDS.933,    0.1258142
            700,    FRAMES.280,    SOLAR_CARDS.898,    0.7548852
            701,    FRAMES.280,    SOLAR_CARDS.933,    0.5032568
            702,    FRAMES.281,    SOLAR_CARDS.898,    0.9436065
            703,    FRAMES.281,    SOLAR_CARDS.933,    0.629071
            704,    FRAMES.282,    SOLAR_CARDS.905,    0.9436065
            705,    FRAMES.282,    SOLAR_CARDS.940,    0.629071
            706,    FRAMES.283,    SOLAR_CARDS.905,    0.9436065
            707,    FRAMES.283,    SOLAR_CARDS.940,    0.629071
            708,    FRAMES.284,    SOLAR_CARDS.912,    0.9436065
            709,    FRAMES.284,    SOLAR_CARDS.947,    0.629071
            710,    FRAMES.285,    SOLAR_CARDS.912,    0.7548852
            711,    FRAMES.285,    SOLAR_CARDS.947,    0.5032568
            712,    FRAMES.286,    SOLAR_CARDS.912,    0.1887213
            713,    FRAMES.286,    SOLAR_CARDS.919,    0.8492459
            714,    FRAMES.286,    SOLAR_CARDS.947,    0.1258142
            715,    FRAMES.286,    SOLAR_CARDS.954,    0.5661639
            716,    FRAMES.287,    SOLAR_CARDS.919,    0.09436065
            717,    FRAMES.287,    SOLAR_CARDS.954,    0.0629071
            718,    FRAMES.288,    SOLAR_CARDS.926,    0.1887213
            719,    FRAMES.289,    SOLAR_CARDS.926,    1.698492
            720,    FRAMES.289,    SOLAR_CARDS.933,    0.3774426
            721,    FRAMES.290,    SOLAR_CARDS.933,    1.50977
            722,    FRAMES.291,    SOLAR_CARDS.933,    1.887213
            723,    FRAMES.292,    SOLAR_CARDS.940,    1.887213
            724,    FRAMES.293,    SOLAR_CARDS.940,    1.887213
            725,    FRAMES.294,    SOLAR_CARDS.947,    1.887213
            726,    FRAMES.295,    SOLAR_CARDS.947,    1.50977
            727,    FRAMES.296,    SOLAR_CARDS.947,    0.3774426
            728,    FRAMES.296,    SOLAR_CARDS.954,    1.698492
            729,    FRAMES.297,    SOLAR_CARDS.954,    0.1887213
            730,    FRAMES.298,    SOLAR_CARDS.926,    0.0629071
            731,    FRAMES.298,    SOLAR_CARDS.961,    0.09436065
            732,    FRAMES.299,    SOLAR_CARDS.926,    0.5661639
            733,    FRAMES.299,    SOLAR_CARDS.933,    0.1258142
            734,    FRAMES.299,    SOLAR_CARDS.961,    0.8492458
            735,    FRAMES.299,    SOLAR_CARDS.968,    0.1887213
            736,    FRAMES.300,    SOLAR_CARDS.933,    0.5032568
            737,    FRAMES.300,    SOLAR_CARDS.968,    0.7548852
            738,    FRAMES.301,    SOLAR_CARDS.933,    0.629071
            739,    FRAMES.301,    SOLAR_CARDS.968,    0.9436065
            740,    FRAMES.302,    SOLAR_CARDS.940,    0.629071
            741,    FRAMES.302,    SOLAR_CARDS.975,    0.9436065
            742,    FRAMES.303,    SOLAR_CARDS.940,    0.629071
            743,    FRAMES.303,    SOLAR_CARDS.975,    0.9436065
            744,    FRAMES.304,    SOLAR_CARDS.947,    0.629071
            745,    FRAMES.304,    SOLAR_CARDS.982,    0.9436065
            746,    FRAMES.305,    SOLAR_CARDS.947,    0.5032568
            747,    FRAMES.305,    SOLAR_CARDS.982,    0.7548852
            748,    FRAMES.306,    SOLAR_CARDS.947,    0.1258142
            749,    FRAMES.306,    SOLAR_CARDS.954,    0.5661639
            750,    FRAMES.306,    SOLAR_CARDS.982,    0.1887213
            751,    FRAMES.306,    SOLAR_CARDS.989,    0.8492458
            752,    FRAMES.307,    SOLAR_CARDS.954,    0.0629071
            753,    FRAMES.307,    SOLAR_CARDS.989,    0.09436065
            754,    FRAMES.308,    SOLAR_CARDS.961,    0.0629071
            755,    FRAMES.309,    SOLAR_CARDS.961,    0.5661639
            756,    FRAMES.309,    SOLAR_CARDS.968,    0.1258142
            757,    FRAMES.310,    SOLAR_CARDS.968,    0.5032568
            758,    FRAMES.311,    SOLAR_CARDS.968,    0.629071
            759,    FRAMES.312,    SOLAR_CARDS.975,    0.629071
            760,    FRAMES.313,    SOLAR_CARDS.975,    0.629071
            761,    FRAMES.314,    SOLAR_CARDS.982,    0.629071
            762,    FRAMES.315,    SOLAR_CARDS.982,    0.5032568
            763,    FRAMES.316,    SOLAR_CARDS.982,    0.1258142
            764,    FRAMES.316,    SOLAR_CARDS.989,    0.5661639
            765,    FRAMES.317,    SOLAR_CARDS.989,    0.0629071
C Contact - Face Contactor-(-x) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2111
            766,    FRAMES.318,    SOLAR_CARDS.801,    0.0629071
            767,    FRAMES.319,    SOLAR_CARDS.801,    0.5661639
            768,    FRAMES.319,    SOLAR_CARDS.808,    0.1258142
            769,    FRAMES.320,    SOLAR_CARDS.808,    0.5032568
            770,    FRAMES.321,    SOLAR_CARDS.808,    0.629071
            771,    FRAMES.322,    SOLAR_CARDS.815,    0.629071
            772,    FRAMES.323,    SOLAR_CARDS.815,    0.629071
            773,    FRAMES.324,    SOLAR_CARDS.822,    0.629071
            774,    FRAMES.325,    SOLAR_CARDS.822,    0.5032568
            775,    FRAMES.326,    SOLAR_CARDS.822,    0.1258142
            776,    FRAMES.326,    SOLAR_CARDS.829,    0.5661639
            777,    FRAMES.327,    SOLAR_CARDS.829,    0.0629071
            778,    FRAMES.328,    SOLAR_CARDS.801,    0.09436065
            779,    FRAMES.328,    SOLAR_CARDS.836,    0.0629071
            780,    FRAMES.329,    SOLAR_CARDS.801,    0.8492458
            781,    FRAMES.329,    SOLAR_CARDS.808,    0.1887213
            782,    FRAMES.329,    SOLAR_CARDS.836,    0.5661639
            783,    FRAMES.329,    SOLAR_CARDS.843,    0.1258142
            784,    FRAMES.330,    SOLAR_CARDS.808,    0.7548852
            785,    FRAMES.330,    SOLAR_CARDS.843,    0.5032568
            786,    FRAMES.331,    SOLAR_CARDS.808,    0.9436065
            787,    FRAMES.331,    SOLAR_CARDS.843,    0.629071
            788,    FRAMES.332,    SOLAR_CARDS.815,    0.9436065
            789,    FRAMES.332,    SOLAR_CARDS.997,    0.629071
            790,    FRAMES.333,    SOLAR_CARDS.815,    0.9436065
            791,    FRAMES.333,    SOLAR_CARDS.997,    0.629071
            792,    FRAMES.334,    SOLAR_CARDS.822,    0.9436065
            793,    FRAMES.334,    SOLAR_CARDS.1004,    0.629071
            794,    FRAMES.335,    SOLAR_CARDS.822,    0.7548852
            795,    FRAMES.335,    SOLAR_CARDS.1004,    0.5032568
            796,    FRAMES.336,    SOLAR_CARDS.822,    0.1887213
            797,    FRAMES.336,    SOLAR_CARDS.829,    0.8492459
            798,    FRAMES.336,    SOLAR_CARDS.850,    0.5661639
            799,    FRAMES.336,    SOLAR_CARDS.1004,    0.1258142
            800,    FRAMES.337,    SOLAR_CARDS.829,    0.09436065
            801,    FRAMES.337,    SOLAR_CARDS.850,    0.0629071
            802,    FRAMES.338,    SOLAR_CARDS.836,    0.1887213
            803,    FRAMES.339,    SOLAR_CARDS.836,    1.698492
            804,    FRAMES.339,    SOLAR_CARDS.843,    0.3774426
            805,    FRAMES.340,    SOLAR_CARDS.843,    1.50977
            806,    FRAMES.341,    SOLAR_CARDS.843,    1.887213
            807,    FRAMES.342,    SOLAR_CARDS.997,    1.887213
            808,    FRAMES.343,    SOLAR_CARDS.997,    1.887213
            809,    FRAMES.344,    SOLAR_CARDS.1004,    1.887213
            810,    FRAMES.345,    SOLAR_CARDS.1004,    1.50977
            811,    FRAMES.346,    SOLAR_CARDS.850,    1.698492
            812,    FRAMES.346,    SOLAR_CARDS.1004,    0.3774426
            813,    FRAMES.347,    SOLAR_CARDS.850,    0.1887213
            814,    FRAMES.348,    SOLAR_CARDS.836,    0.0629071
            815,    FRAMES.348,    SOLAR_CARDS.857,    0.09436065
            816,    FRAMES.349,    SOLAR_CARDS.836,    0.5661639
            817,    FRAMES.349,    SOLAR_CARDS.843,    0.1258142
            818,    FRAMES.349,    SOLAR_CARDS.857,    0.8492459
            819,    FRAMES.349,    SOLAR_CARDS.864,    0.1887213
            820,    FRAMES.350,    SOLAR_CARDS.843,    0.5032568
            821,    FRAMES.350,    SOLAR_CARDS.864,    0.7548852
            822,    FRAMES.351,    SOLAR_CARDS.843,    0.629071
            823,    FRAMES.351,    SOLAR_CARDS.864,    0.9436065
            824,    FRAMES.352,    SOLAR_CARDS.871,    0.9436065
            825,    FRAMES.352,    SOLAR_CARDS.997,    0.629071
            826,    FRAMES.353,    SOLAR_CARDS.871,    0.9436065
            827,    FRAMES.353,    SOLAR_CARDS.997,    0.629071
            828,    FRAMES.354,    SOLAR_CARDS.878,    0.9436065
            829,    FRAMES.354,    SOLAR_CARDS.1004,    0.629071
            830,    FRAMES.355,    SOLAR_CARDS.878,    0.7548852
            831,    FRAMES.355,    SOLAR_CARDS.1004,    0.5032568
            832,    FRAMES.356,    SOLAR_CARDS.850,    0.5661639
            833,    FRAMES.356,    SOLAR_CARDS.878,    0.1887213
            834,    FRAMES.356,    SOLAR_CARDS.885,    0.8492459
            835,    FRAMES.356,    SOLAR_CARDS.1004,    0.1258142
            836,    FRAMES.357,    SOLAR_CARDS.850,    0.0629071
            837,    FRAMES.357,    SOLAR_CARDS.885,    0.09436065
            838,    FRAMES.358,    SOLAR_CARDS.857,    0.1572677
            839,    FRAMES.359,    SOLAR_CARDS.857,    1.41541
            840,    FRAMES.359,    SOLAR_CARDS.864,    0.3145355
            841,    FRAMES.360,    SOLAR_CARDS.864,    1.258142
            842,    FRAMES.361,    SOLAR_CARDS.864,    1.572677
            843,    FRAMES.362,    SOLAR_CARDS.871,    1.572677
            844,    FRAMES.363,    SOLAR_CARDS.871,    1.572677
            845,    FRAMES.364,    SOLAR_CARDS.878,    1.572677
            846,    FRAMES.365,    SOLAR_CARDS.878,    1.258142
            847,    FRAMES.366,    SOLAR_CARDS.878,    0.3145355
            848,    FRAMES.366,    SOLAR_CARDS.885,    1.41541
            849,    FRAMES.367,    SOLAR_CARDS.885,    0.1572677
            850,    FRAMES.368,    SOLAR_CARDS.857,    0.0629071
            851,    FRAMES.368,    SOLAR_CARDS.892,    0.1258142
            852,    FRAMES.369,    SOLAR_CARDS.857,    0.5661639
            853,    FRAMES.369,    SOLAR_CARDS.864,    0.1258142
            854,    FRAMES.369,    SOLAR_CARDS.892,    1.132328
            855,    FRAMES.369,    SOLAR_CARDS.899,    0.2516284
            856,    FRAMES.370,    SOLAR_CARDS.864,    0.5032568
            857,    FRAMES.370,    SOLAR_CARDS.899,    1.006514
            858,    FRAMES.371,    SOLAR_CARDS.864,    0.629071
            859,    FRAMES.371,    SOLAR_CARDS.899,    1.258142
            860,    FRAMES.372,    SOLAR_CARDS.871,    0.629071
            861,    FRAMES.372,    SOLAR_CARDS.906,    1.258142
            862,    FRAMES.373,    SOLAR_CARDS.871,    0.629071
            863,    FRAMES.373,    SOLAR_CARDS.906,    1.258142
            864,    FRAMES.374,    SOLAR_CARDS.878,    0.629071
            865,    FRAMES.374,    SOLAR_CARDS.913,    1.258142
            866,    FRAMES.375,    SOLAR_CARDS.878,    0.5032568
            867,    FRAMES.375,    SOLAR_CARDS.913,    1.006514
            868,    FRAMES.376,    SOLAR_CARDS.878,    0.1258142
            869,    FRAMES.376,    SOLAR_CARDS.885,    0.5661639
            870,    FRAMES.376,    SOLAR_CARDS.913,    0.2516284
            871,    FRAMES.376,    SOLAR_CARDS.920,    1.132328
            872,    FRAMES.377,    SOLAR_CARDS.885,    0.0629071
            873,    FRAMES.377,    SOLAR_CARDS.920,    0.1258142
            874,    FRAMES.378,    SOLAR_CARDS.892,    0.1572677
            875,    FRAMES.379,    SOLAR_CARDS.892,    1.41541
            876,    FRAMES.379,    SOLAR_CARDS.899,    0.3145355
            877,    FRAMES.380,    SOLAR_CARDS.899,    1.258142
            878,    FRAMES.381,    SOLAR_CARDS.899,    1.572677
            879,    FRAMES.382,    SOLAR_CARDS.906,    1.572677
            880,    FRAMES.383,    SOLAR_CARDS.906,    1.572677
            881,    FRAMES.384,    SOLAR_CARDS.913,    1.572677
            882,    FRAMES.385,    SOLAR_CARDS.913,    1.258142
            883,    FRAMES.386,    SOLAR_CARDS.913,    0.3145355
            884,    FRAMES.386,    SOLAR_CARDS.920,    1.41541
            885,    FRAMES.387,    SOLAR_CARDS.920,    0.1572677
            886,    FRAMES.388,    SOLAR_CARDS.892,    0.03145355
            887,    FRAMES.388,    SOLAR_CARDS.927,    0.1258142
            888,    FRAMES.389,    SOLAR_CARDS.892,    0.283082
            889,    FRAMES.389,    SOLAR_CARDS.899,    0.0629071
            890,    FRAMES.389,    SOLAR_CARDS.927,    1.132328
            891,    FRAMES.389,    SOLAR_CARDS.934,    0.2516284
            892,    FRAMES.390,    SOLAR_CARDS.899,    0.2516284
            893,    FRAMES.390,    SOLAR_CARDS.934,    1.006514
            894,    FRAMES.391,    SOLAR_CARDS.899,    0.3145355
            895,    FRAMES.391,    SOLAR_CARDS.934,    1.258142
            896,    FRAMES.392,    SOLAR_CARDS.906,    0.3145355
            897,    FRAMES.392,    SOLAR_CARDS.941,    1.258142
            898,    FRAMES.393,    SOLAR_CARDS.906,    0.3145355
            899,    FRAMES.393,    SOLAR_CARDS.941,    1.258142
            900,    FRAMES.394,    SOLAR_CARDS.913,    0.3145355
            901,    FRAMES.394,    SOLAR_CARDS.948,    1.258142
            902,    FRAMES.395,    SOLAR_CARDS.913,    0.2516284
            903,    FRAMES.395,    SOLAR_CARDS.948,    1.006514
            904,    FRAMES.396,    SOLAR_CARDS.913,    0.0629071
            905,    FRAMES.396,    SOLAR_CARDS.920,    0.283082
            906,    FRAMES.396,    SOLAR_CARDS.948,    0.2516284
            907,    FRAMES.396,    SOLAR_CARDS.955,    1.132328
            908,    FRAMES.397,    SOLAR_CARDS.920,    0.03145355
            909,    FRAMES.397,    SOLAR_CARDS.955,    0.1258142
            910,    FRAMES.398,    SOLAR_CARDS.927,    0.1887213
            911,    FRAMES.399,    SOLAR_CARDS.927,    1.698492
            912,    FRAMES.399,    SOLAR_CARDS.934,    0.3774426
            913,    FRAMES.400,    SOLAR_CARDS.934,    1.50977
            914,    FRAMES.401,    SOLAR_CARDS.934,    1.887213
            915,    FRAMES.402,    SOLAR_CARDS.941,    1.887213
            916,    FRAMES.403,    SOLAR_CARDS.941,    1.887213
            917,    FRAMES.404,    SOLAR_CARDS.948,    1.887213
            918,    FRAMES.405,    SOLAR_CARDS.948,    1.50977
            919,    FRAMES.406,    SOLAR_CARDS.948,    0.3774426
            920,    FRAMES.406,    SOLAR_CARDS.955,    1.698492
            921,    FRAMES.407,    SOLAR_CARDS.955,    0.1887213
            922,    FRAMES.408,    SOLAR_CARDS.962,    0.1572677
            923,    FRAMES.409,    SOLAR_CARDS.962,    1.41541
            924,    FRAMES.409,    SOLAR_CARDS.969,    0.3145355
            925,    FRAMES.410,    SOLAR_CARDS.969,    1.258142
            926,    FRAMES.411,    SOLAR_CARDS.969,    1.572678
            927,    FRAMES.412,    SOLAR_CARDS.976,    1.572677
            928,    FRAMES.413,    SOLAR_CARDS.976,    1.572678
            929,    FRAMES.414,    SOLAR_CARDS.983,    1.572678
            930,    FRAMES.415,    SOLAR_CARDS.983,    1.258142
            931,    FRAMES.416,    SOLAR_CARDS.983,    0.3145355
            932,    FRAMES.416,    SOLAR_CARDS.990,    1.41541
            933,    FRAMES.417,    SOLAR_CARDS.990,    0.1572677
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            934,    FRAMES.418,    SOLAR_CARDS.838,    0.1887213
            935,    FRAMES.419,    SOLAR_CARDS.852,    0.0629071
            936,    FRAMES.419,    SOLAR_CARDS.887,    0.09436065
            937,    FRAMES.420,    SOLAR_CARDS.852,    0.5661639
            938,    FRAMES.420,    SOLAR_CARDS.880,    0.1887213
            939,    FRAMES.420,    SOLAR_CARDS.887,    0.8492459
            940,    FRAMES.420,    SOLAR_CARDS.1006,    0.1258142
            941,    FRAMES.421,    SOLAR_CARDS.880,    0.7548852
            942,    FRAMES.421,    SOLAR_CARDS.1006,    0.5032568
            943,    FRAMES.422,    SOLAR_CARDS.880,    0.9436065
            944,    FRAMES.422,    SOLAR_CARDS.1006,    0.629071
            945,    FRAMES.423,    SOLAR_CARDS.873,    0.9436065
            946,    FRAMES.423,    SOLAR_CARDS.999,    0.629071
            947,    FRAMES.424,    SOLAR_CARDS.873,    0.9436065
            948,    FRAMES.424,    SOLAR_CARDS.999,    0.629071
            949,    FRAMES.425,    SOLAR_CARDS.845,    0.629071
            950,    FRAMES.425,    SOLAR_CARDS.866,    0.9436065
            951,    FRAMES.426,    SOLAR_CARDS.845,    0.5032568
            952,    FRAMES.426,    SOLAR_CARDS.866,    0.7548852
            953,    FRAMES.427,    SOLAR_CARDS.838,    0.5661639
            954,    FRAMES.427,    SOLAR_CARDS.845,    0.1258142
            955,    FRAMES.427,    SOLAR_CARDS.859,    0.8492459
            956,    FRAMES.427,    SOLAR_CARDS.866,    0.1887213
            957,    FRAMES.428,    SOLAR_CARDS.838,    0.0629071
            958,    FRAMES.428,    SOLAR_CARDS.859,    0.09436065
            959,    FRAMES.429,    SOLAR_CARDS.887,    0.1572677
            960,    FRAMES.430,    SOLAR_CARDS.880,    0.3145355
            961,    FRAMES.430,    SOLAR_CARDS.887,    1.41541
            962,    FRAMES.431,    SOLAR_CARDS.880,    1.258142
            963,    FRAMES.432,    SOLAR_CARDS.880,    1.572677
            964,    FRAMES.433,    SOLAR_CARDS.873,    1.572677
            965,    FRAMES.434,    SOLAR_CARDS.873,    1.572677
            966,    FRAMES.435,    SOLAR_CARDS.866,    1.572677
            967,    FRAMES.436,    SOLAR_CARDS.866,    1.258142
            968,    FRAMES.437,    SOLAR_CARDS.859,    1.41541
            969,    FRAMES.437,    SOLAR_CARDS.866,    0.3145355
            970,    FRAMES.438,    SOLAR_CARDS.859,    0.1572677
            971,    FRAMES.439,    SOLAR_CARDS.887,    0.0629071
            972,    FRAMES.439,    SOLAR_CARDS.922,    0.1258142
            973,    FRAMES.440,    SOLAR_CARDS.880,    0.1258142
            974,    FRAMES.440,    SOLAR_CARDS.887,    0.5661639
            975,    FRAMES.440,    SOLAR_CARDS.915,    0.2516284
            976,    FRAMES.440,    SOLAR_CARDS.922,    1.132328
            977,    FRAMES.441,    SOLAR_CARDS.880,    0.5032568
            978,    FRAMES.441,    SOLAR_CARDS.915,    1.006514
            979,    FRAMES.442,    SOLAR_CARDS.880,    0.629071
            980,    FRAMES.442,    SOLAR_CARDS.915,    1.258142
            981,    FRAMES.443,    SOLAR_CARDS.873,    0.629071
            982,    FRAMES.443,    SOLAR_CARDS.908,    1.258142
            983,    FRAMES.444,    SOLAR_CARDS.873,    0.629071
            984,    FRAMES.444,    SOLAR_CARDS.908,    1.258142
            985,    FRAMES.445,    SOLAR_CARDS.866,    0.629071
            986,    FRAMES.445,    SOLAR_CARDS.901,    1.258142
            987,    FRAMES.446,    SOLAR_CARDS.866,    0.5032568
            988,    FRAMES.446,    SOLAR_CARDS.901,    1.006514
            989,    FRAMES.447,    SOLAR_CARDS.859,    0.5661639
            990,    FRAMES.447,    SOLAR_CARDS.866,    0.1258142
            991,    FRAMES.447,    SOLAR_CARDS.894,    1.132328
            992,    FRAMES.447,    SOLAR_CARDS.901,    0.2516284
            993,    FRAMES.448,    SOLAR_CARDS.859,    0.0629071
            994,    FRAMES.448,    SOLAR_CARDS.894,    0.1258142
            995,    FRAMES.449,    SOLAR_CARDS.922,    0.1572677
            996,    FRAMES.450,    SOLAR_CARDS.915,    0.3145355
            997,    FRAMES.450,    SOLAR_CARDS.922,    1.41541
            998,    FRAMES.451,    SOLAR_CARDS.915,    1.258142
            999,    FRAMES.452,    SOLAR_CARDS.915,    1.572677
            1000,    FRAMES.453,    SOLAR_CARDS.908,    1.572677
            1001,    FRAMES.454,    SOLAR_CARDS.908,    1.572677
            1002,    FRAMES.455,    SOLAR_CARDS.901,    1.572677
            1003,    FRAMES.456,    SOLAR_CARDS.901,    1.258142
            1004,    FRAMES.457,    SOLAR_CARDS.894,    1.41541
            1005,    FRAMES.457,    SOLAR_CARDS.901,    0.3145355
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1006,    FRAMES.458,    SOLAR_CARDS.800,    0.1572677
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1007,    FRAMES.459,    SOLAR_CARDS.922,    0.03145355
            1008,    FRAMES.459,    SOLAR_CARDS.957,    0.1258142
            1009,    FRAMES.460,    SOLAR_CARDS.915,    0.0629071
            1010,    FRAMES.460,    SOLAR_CARDS.922,    0.283082
            1011,    FRAMES.460,    SOLAR_CARDS.950,    0.2516284
            1012,    FRAMES.460,    SOLAR_CARDS.957,    1.132328
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1013,    FRAMES.461,    SOLAR_CARDS.800,    1.41541
            1014,    FRAMES.461,    SOLAR_CARDS.807,    0.3145355
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1015,    FRAMES.462,    SOLAR_CARDS.915,    0.3145355
            1016,    FRAMES.462,    SOLAR_CARDS.950,    1.258142
            1017,    FRAMES.463,    SOLAR_CARDS.908,    0.3145355
            1018,    FRAMES.463,    SOLAR_CARDS.943,    1.258142
            1019,    FRAMES.464,    SOLAR_CARDS.908,    0.3145355
            1020,    FRAMES.464,    SOLAR_CARDS.943,    1.258142
            1021,    FRAMES.465,    SOLAR_CARDS.901,    0.3145355
            1022,    FRAMES.465,    SOLAR_CARDS.936,    1.258142
            1023,    FRAMES.466,    SOLAR_CARDS.901,    0.2516284
            1024,    FRAMES.466,    SOLAR_CARDS.936,    1.006514
            1025,    FRAMES.467,    SOLAR_CARDS.894,    0.283082
            1026,    FRAMES.467,    SOLAR_CARDS.901,    0.0629071
            1027,    FRAMES.467,    SOLAR_CARDS.929,    1.132328
            1028,    FRAMES.467,    SOLAR_CARDS.936,    0.2516284
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1029,    FRAMES.468,    SOLAR_CARDS.807,    1.258142
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1030,    FRAMES.469,    SOLAR_CARDS.957,    0.1887213
            1031,    FRAMES.470,    SOLAR_CARDS.950,    0.3774426
            1032,    FRAMES.470,    SOLAR_CARDS.957,    1.698492
            1033,    FRAMES.471,    SOLAR_CARDS.950,    1.50977
            1034,    FRAMES.472,    SOLAR_CARDS.950,    1.887213
            1035,    FRAMES.473,    SOLAR_CARDS.943,    1.887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1036,    FRAMES.474,    SOLAR_CARDS.807,    1.572677
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1037,    FRAMES.475,    SOLAR_CARDS.936,    1.887213
            1038,    FRAMES.476,    SOLAR_CARDS.936,    1.50977
            1039,    FRAMES.477,    SOLAR_CARDS.929,    1.698492
            1040,    FRAMES.477,    SOLAR_CARDS.936,    0.3774426
            1041,    FRAMES.478,    SOLAR_CARDS.929,    0.1887213
            1042,    FRAMES.479,    SOLAR_CARDS.992,    0.1572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1043,    FRAMES.480,    SOLAR_CARDS.814,    1.572677
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1044,    FRAMES.481,    SOLAR_CARDS.985,    1.258142
            1045,    FRAMES.482,    SOLAR_CARDS.985,    1.572678
            1046,    FRAMES.483,    SOLAR_CARDS.978,    1.572678
            1047,    FRAMES.484,    SOLAR_CARDS.978,    1.572677
            1048,    FRAMES.485,    SOLAR_CARDS.971,    1.572678
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1049,    FRAMES.486,    SOLAR_CARDS.814,    1.572677
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1050,    FRAMES.487,    SOLAR_CARDS.964,    1.41541
            1051,    FRAMES.487,    SOLAR_CARDS.971,    0.3145355
            1052,    FRAMES.488,    SOLAR_CARDS.964,    0.1572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1053,    FRAMES.489,    SOLAR_CARDS.876,    0.3145355
            1054,    FRAMES.489,    SOLAR_CARDS.1002,    1.258142
            1055,    FRAMES.491,    SOLAR_CARDS.876,    0.3145355
            1056,    FRAMES.491,    SOLAR_CARDS.1002,    1.258142
            1057,    FRAMES.493,    SOLAR_CARDS.848,    1.258142
            1058,    FRAMES.493,    SOLAR_CARDS.869,    0.3145355
            1059,    FRAMES.495,    SOLAR_CARDS.848,    1.006514
            1060,    FRAMES.495,    SOLAR_CARDS.869,    0.2516284
            1061,    FRAMES.497,    SOLAR_CARDS.841,    1.132328
            1062,    FRAMES.497,    SOLAR_CARDS.848,    0.2516284
            1063,    FRAMES.497,    SOLAR_CARDS.862,    0.283082
            1064,    FRAMES.497,    SOLAR_CARDS.869,    0.0629071
            1065,    FRAMES.499,    SOLAR_CARDS.841,    0.1258142
            1066,    FRAMES.499,    SOLAR_CARDS.862,    0.03145355
            1067,    FRAMES.501,    SOLAR_CARDS.890,    0.1572677
            1068,    FRAMES.503,    SOLAR_CARDS.883,    0.3145355
            1069,    FRAMES.503,    SOLAR_CARDS.890,    1.41541
            1070,    FRAMES.506,    SOLAR_CARDS.883,    1.258142
            1071,    FRAMES.510,    SOLAR_CARDS.883,    1.572677
            1072,    FRAMES.513,    SOLAR_CARDS.827,    1.258142
            1073,    FRAMES.514,    SOLAR_CARDS.876,    1.572677
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1074,    FRAMES.517,    SOLAR_CARDS.816,    1.572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1075,    FRAMES.518,    SOLAR_CARDS.876,    1.572677
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1076,    FRAMES.521,    SOLAR_CARDS.816,    1.572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1077,    FRAMES.522,    SOLAR_CARDS.869,    1.572677
            1078,    FRAMES.526,    SOLAR_CARDS.869,    1.258142
            1079,    FRAMES.529,    SOLAR_CARDS.820,    1.572677
            1080,    FRAMES.530,    SOLAR_CARDS.862,    1.41541
            1081,    FRAMES.530,    SOLAR_CARDS.869,    0.3145355
            1082,    FRAMES.534,    SOLAR_CARDS.862,    0.1572677
            1083,    FRAMES.538,    SOLAR_CARDS.890,    0.1258142
            1084,    FRAMES.538,    SOLAR_CARDS.925,    0.0629071
            1085,    FRAMES.542,    SOLAR_CARDS.883,    0.2516284
            1086,    FRAMES.542,    SOLAR_CARDS.890,    1.132328
            1087,    FRAMES.542,    SOLAR_CARDS.918,    0.1258142
            1088,    FRAMES.542,    SOLAR_CARDS.925,    0.5661639
            1089,    FRAMES.546,    SOLAR_CARDS.883,    1.006514
            1090,    FRAMES.546,    SOLAR_CARDS.918,    0.5032568
            1091,    FRAMES.550,    SOLAR_CARDS.883,    1.258142
            1092,    FRAMES.550,    SOLAR_CARDS.918,    0.629071
            1093,    FRAMES.554,    SOLAR_CARDS.876,    1.258142
            1094,    FRAMES.554,    SOLAR_CARDS.911,    0.629071
            1095,    FRAMES.559,    SOLAR_CARDS.876,    1.258142
            1096,    FRAMES.559,    SOLAR_CARDS.911,    0.629071
            1097,    FRAMES.564,    SOLAR_CARDS.869,    1.258142
            1098,    FRAMES.564,    SOLAR_CARDS.904,    0.629071
            1099,    FRAMES.569,    SOLAR_CARDS.869,    1.006514
            1100,    FRAMES.569,    SOLAR_CARDS.904,    0.5032568
            1101,    FRAMES.574,    SOLAR_CARDS.862,    1.132328
            1102,    FRAMES.574,    SOLAR_CARDS.869,    0.2516284
            1103,    FRAMES.574,    SOLAR_CARDS.897,    0.5661639
            1104,    FRAMES.574,    SOLAR_CARDS.904,    0.1258142
            1105,    FRAMES.579,    SOLAR_CARDS.862,    0.1258142
            1106,    FRAMES.579,    SOLAR_CARDS.897,    0.0629071
            1107,    FRAMES.580,    SOLAR_CARDS.925,    0.1572677
            1108,    FRAMES.581,    SOLAR_CARDS.918,    0.3145355
            1109,    FRAMES.581,    SOLAR_CARDS.925,    1.41541
            1110,    FRAMES.582,    SOLAR_CARDS.918,    1.258142
            1111,    FRAMES.583,    SOLAR_CARDS.918,    1.572677
            1112,    FRAMES.584,    SOLAR_CARDS.911,    1.572677
            1113,    FRAMES.585,    SOLAR_CARDS.911,    1.572677
            1114,    FRAMES.586,    SOLAR_CARDS.904,    1.572677
            1115,    FRAMES.587,    SOLAR_CARDS.904,    1.258142
            1116,    FRAMES.588,    SOLAR_CARDS.897,    1.41541
            1117,    FRAMES.588,    SOLAR_CARDS.904,    0.3145355
            1118,    FRAMES.589,    SOLAR_CARDS.897,    0.1572677
            1119,    FRAMES.590,    SOLAR_CARDS.925,    0.09436065
            1120,    FRAMES.590,    SOLAR_CARDS.960,    0.0629071
            1121,    FRAMES.591,    SOLAR_CARDS.918,    0.1887213
            1122,    FRAMES.591,    SOLAR_CARDS.925,    0.8492459
            1123,    FRAMES.591,    SOLAR_CARDS.953,    0.1258142
            1124,    FRAMES.591,    SOLAR_CARDS.960,    0.5661639
            1125,    FRAMES.592,    SOLAR_CARDS.918,    0.7548852
            1126,    FRAMES.592,    SOLAR_CARDS.953,    0.5032568
            1127,    FRAMES.593,    SOLAR_CARDS.918,    0.9436065
            1128,    FRAMES.593,    SOLAR_CARDS.953,    0.629071
            1129,    FRAMES.594,    SOLAR_CARDS.911,    0.9436065
            1130,    FRAMES.594,    SOLAR_CARDS.946,    0.629071
            1131,    FRAMES.595,    SOLAR_CARDS.911,    0.9436065
            1132,    FRAMES.595,    SOLAR_CARDS.946,    0.629071
            1133,    FRAMES.596,    SOLAR_CARDS.904,    0.9436065
            1134,    FRAMES.596,    SOLAR_CARDS.939,    0.629071
            1135,    FRAMES.597,    SOLAR_CARDS.904,    0.7548852
            1136,    FRAMES.597,    SOLAR_CARDS.939,    0.5032568
            1137,    FRAMES.598,    SOLAR_CARDS.897,    0.8492459
            1138,    FRAMES.598,    SOLAR_CARDS.904,    0.1887213
            1139,    FRAMES.598,    SOLAR_CARDS.932,    0.5661639
            1140,    FRAMES.598,    SOLAR_CARDS.939,    0.1258142
            1141,    FRAMES.599,    SOLAR_CARDS.897,    0.09436065
            1142,    FRAMES.599,    SOLAR_CARDS.932,    0.0629071
            1143,    FRAMES.600,    SOLAR_CARDS.960,    0.1887213
            1144,    FRAMES.601,    SOLAR_CARDS.953,    0.3774426
            1145,    FRAMES.601,    SOLAR_CARDS.960,    1.698492
            1146,    FRAMES.602,    SOLAR_CARDS.953,    1.50977
            1147,    FRAMES.603,    SOLAR_CARDS.953,    1.887213
            1148,    FRAMES.604,    SOLAR_CARDS.946,    1.887213
            1149,    FRAMES.605,    SOLAR_CARDS.946,    1.887213
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1150,    FRAMES.606,    SOLAR_CARDS.804,    0.1572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1151,    FRAMES.607,    SOLAR_CARDS.939,    1.50977
            1152,    FRAMES.608,    SOLAR_CARDS.932,    1.698492
            1153,    FRAMES.608,    SOLAR_CARDS.939,    0.3774426
            1154,    FRAMES.609,    SOLAR_CARDS.932,    0.1887213
            1155,    FRAMES.610,    SOLAR_CARDS.960,    0.0629071
            1156,    FRAMES.610,    SOLAR_CARDS.995,    0.09436065
            1157,    FRAMES.611,    SOLAR_CARDS.953,    0.1258142
            1158,    FRAMES.611,    SOLAR_CARDS.960,    0.5661639
            1159,    FRAMES.611,    SOLAR_CARDS.988,    0.1887213
            1160,    FRAMES.611,    SOLAR_CARDS.995,    0.8492458
            1161,    FRAMES.612,    SOLAR_CARDS.953,    0.5032568
            1162,    FRAMES.612,    SOLAR_CARDS.988,    0.7548852
            1163,    FRAMES.613,    SOLAR_CARDS.953,    0.629071
            1164,    FRAMES.613,    SOLAR_CARDS.988,    0.9436065
            1165,    FRAMES.614,    SOLAR_CARDS.946,    0.629071
            1166,    FRAMES.614,    SOLAR_CARDS.981,    0.9436065
            1167,    FRAMES.615,    SOLAR_CARDS.946,    0.629071
            1168,    FRAMES.615,    SOLAR_CARDS.981,    0.9436065
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1169,    FRAMES.616,    SOLAR_CARDS.874,    1.572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1170,    FRAMES.617,    SOLAR_CARDS.939,    0.5032568
            1171,    FRAMES.617,    SOLAR_CARDS.974,    0.7548852
            1172,    FRAMES.618,    SOLAR_CARDS.932,    0.5661639
            1173,    FRAMES.618,    SOLAR_CARDS.939,    0.1258142
            1174,    FRAMES.618,    SOLAR_CARDS.967,    0.8492458
            1175,    FRAMES.618,    SOLAR_CARDS.974,    0.1887213
            1176,    FRAMES.619,    SOLAR_CARDS.932,    0.0629071
            1177,    FRAMES.619,    SOLAR_CARDS.967,    0.09436065
            1178,    FRAMES.620,    SOLAR_CARDS.995,    0.0629071
            1179,    FRAMES.621,    SOLAR_CARDS.988,    0.1258142
            1180,    FRAMES.621,    SOLAR_CARDS.995,    0.5661639
            1181,    FRAMES.622,    SOLAR_CARDS.988,    0.5032568
            1182,    FRAMES.623,    SOLAR_CARDS.988,    0.629071
            1183,    FRAMES.624,    SOLAR_CARDS.981,    0.629071
            1184,    FRAMES.625,    SOLAR_CARDS.981,    0.629071
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1185,    FRAMES.626,    SOLAR_CARDS.881,    1.258142
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1186,    FRAMES.627,    SOLAR_CARDS.974,    0.5032568
            1187,    FRAMES.628,    SOLAR_CARDS.967,    0.5661639
            1188,    FRAMES.628,    SOLAR_CARDS.974,    0.1258142
            1189,    FRAMES.629,    SOLAR_CARDS.967,    0.0629071
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1190,    FRAMES.630,    SOLAR_CARDS.480,    0.0629071
            1191,    FRAMES.631,    SOLAR_CARDS.474,    0.1258142
            1192,    FRAMES.631,    SOLAR_CARDS.480,    0.5661639
            1193,    FRAMES.632,    SOLAR_CARDS.474,    0.5032568
            1194,    FRAMES.633,    SOLAR_CARDS.474,    0.629071
            1195,    FRAMES.634,    SOLAR_CARDS.468,    0.629071
            1196,    FRAMES.635,    SOLAR_CARDS.468,    0.629071
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1197,    FRAMES.636,    SOLAR_CARDS.888,    0.1572677
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1198,    FRAMES.637,    SOLAR_CARDS.461,    0.5032568
            1199,    FRAMES.638,    SOLAR_CARDS.458,    0.5661639
            1200,    FRAMES.638,    SOLAR_CARDS.461,    0.1258142
            1201,    FRAMES.639,    SOLAR_CARDS.458,    0.0629071
            1202,    FRAMES.640,    SOLAR_CARDS.480,    0.09436065
            1203,    FRAMES.640,    SOLAR_CARDS.685,    0.0629071
            1204,    FRAMES.641,    SOLAR_CARDS.474,    0.1887213
            1205,    FRAMES.641,    SOLAR_CARDS.480,    0.8492459
            1206,    FRAMES.641,    SOLAR_CARDS.685,    0.5661639
            1207,    FRAMES.641,    SOLAR_CARDS.799,    0.1258142
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1208,    FRAMES.642,    SOLAR_CARDS.860,    0.1258142
            1209,    FRAMES.642,    SOLAR_CARDS.895,    0.0629071
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1210,    FRAMES.643,    SOLAR_CARDS.821,    1.572677
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1211,    FRAMES.644,    SOLAR_CARDS.468,    0.9436065
            1212,    FRAMES.644,    SOLAR_CARDS.795,    0.629071
            1213,    FRAMES.645,    SOLAR_CARDS.468,    0.9436065
            1214,    FRAMES.645,    SOLAR_CARDS.795,    0.629071
            1215,    FRAMES.646,    SOLAR_CARDS.461,    0.9436065
            1216,    FRAMES.646,    SOLAR_CARDS.643,    0.629071
            1217,    FRAMES.647,    SOLAR_CARDS.461,    0.7548852
            1218,    FRAMES.647,    SOLAR_CARDS.643,    0.5032568
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1219,    FRAMES.648,    SOLAR_CARDS.860,    1.132328
            1220,    FRAMES.648,    SOLAR_CARDS.867,    0.2516284
            1221,    FRAMES.648,    SOLAR_CARDS.895,    0.5661639
            1222,    FRAMES.648,    SOLAR_CARDS.902,    0.1258142
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1223,    FRAMES.649,    SOLAR_CARDS.458,    0.09436065
            1224,    FRAMES.649,    SOLAR_CARDS.486,    0.0629071
            1225,    FRAMES.650,    SOLAR_CARDS.685,    0.1887213
            1226,    FRAMES.651,    SOLAR_CARDS.685,    1.698492
            1227,    FRAMES.651,    SOLAR_CARDS.799,    0.3774426
            1228,    FRAMES.652,    SOLAR_CARDS.799,    1.50977
            1229,    FRAMES.653,    SOLAR_CARDS.799,    1.887213
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1230,    FRAMES.654,    SOLAR_CARDS.867,    1.006514
            1231,    FRAMES.654,    SOLAR_CARDS.902,    0.5032568
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1232,    FRAMES.655,    SOLAR_CARDS.795,    1.887213
            1233,    FRAMES.656,    SOLAR_CARDS.643,    1.887213
            1234,    FRAMES.657,    SOLAR_CARDS.643,    1.50977
            1235,    FRAMES.658,    SOLAR_CARDS.486,    1.698492
            1236,    FRAMES.658,    SOLAR_CARDS.643,    0.3774426
            1237,    FRAMES.659,    SOLAR_CARDS.486,    0.1887213
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1238,    FRAMES.660,    SOLAR_CARDS.867,    1.258142
            1239,    FRAMES.660,    SOLAR_CARDS.902,    0.629071
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1240,    FRAMES.661,    SOLAR_CARDS.685,    0.5661639
            1241,    FRAMES.661,    SOLAR_CARDS.734,    0.1887213
            1242,    FRAMES.661,    SOLAR_CARDS.741,    0.8492459
            1243,    FRAMES.661,    SOLAR_CARDS.799,    0.1258142
            1244,    FRAMES.662,    SOLAR_CARDS.734,    0.7548852
            1245,    FRAMES.662,    SOLAR_CARDS.799,    0.5032568
            1246,    FRAMES.663,    SOLAR_CARDS.734,    0.9436065
            1247,    FRAMES.663,    SOLAR_CARDS.799,    0.629071
            1248,    FRAMES.664,    SOLAR_CARDS.727,    0.9436065
            1249,    FRAMES.664,    SOLAR_CARDS.795,    0.629071
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1250,    FRAMES.665,    SOLAR_CARDS.818,    1.572677
            1251,    FRAMES.666,    SOLAR_CARDS.874,    1.258142
            1252,    FRAMES.666,    SOLAR_CARDS.909,    0.629071
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1253,    FRAMES.667,    SOLAR_CARDS.643,    0.5032568
            1254,    FRAMES.667,    SOLAR_CARDS.721,    0.7548852
            1255,    FRAMES.668,    SOLAR_CARDS.486,    0.5661639
            1256,    FRAMES.668,    SOLAR_CARDS.643,    0.1258142
            1257,    FRAMES.668,    SOLAR_CARDS.703,    0.8492459
            1258,    FRAMES.668,    SOLAR_CARDS.721,    0.1887213
            1259,    FRAMES.669,    SOLAR_CARDS.486,    0.0629071
            1260,    FRAMES.669,    SOLAR_CARDS.703,    0.09436065
            1261,    FRAMES.670,    SOLAR_CARDS.741,    0.1572677
            1262,    FRAMES.671,    SOLAR_CARDS.734,    0.3145355
            1263,    FRAMES.671,    SOLAR_CARDS.741,    1.41541
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1264,    FRAMES.672,    SOLAR_CARDS.874,    1.258142
            1265,    FRAMES.672,    SOLAR_CARDS.909,    0.629071
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1266,    FRAMES.673,    SOLAR_CARDS.734,    1.572677
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1267,    FRAMES.674,    SOLAR_CARDS.830,    0.1572677
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1268,    FRAMES.675,    SOLAR_CARDS.727,    1.572677
            1269,    FRAMES.676,    SOLAR_CARDS.721,    1.572677
            1270,    FRAMES.677,    SOLAR_CARDS.721,    1.258142
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1271,    FRAMES.678,    SOLAR_CARDS.881,    1.258142
            1272,    FRAMES.678,    SOLAR_CARDS.916,    0.629071
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1273,    FRAMES.679,    SOLAR_CARDS.703,    0.1572677
            1274,    FRAMES.680,    SOLAR_CARDS.741,    0.0629071
            1275,    FRAMES.680,    SOLAR_CARDS.776,    0.1258142
            1276,    FRAMES.681,    SOLAR_CARDS.734,    0.1258142
            1277,    FRAMES.681,    SOLAR_CARDS.741,    0.5661639
            1278,    FRAMES.681,    SOLAR_CARDS.769,    0.2516284
            1279,    FRAMES.681,    SOLAR_CARDS.776,    1.132328
            1280,    FRAMES.682,    SOLAR_CARDS.734,    0.5032568
            1281,    FRAMES.682,    SOLAR_CARDS.769,    1.006514
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1282,    FRAMES.683,    SOLAR_CARDS.825,    1.572677
            1283,    FRAMES.684,    SOLAR_CARDS.881,    1.006514
            1284,    FRAMES.684,    SOLAR_CARDS.916,    0.5032568
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1285,    FRAMES.685,    SOLAR_CARDS.828,    0.1572677
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1286,    FRAMES.686,    SOLAR_CARDS.721,    0.629071
            1287,    FRAMES.686,    SOLAR_CARDS.755,    1.258142
            1288,    FRAMES.687,    SOLAR_CARDS.721,    0.5032568
            1289,    FRAMES.687,    SOLAR_CARDS.755,    1.006514
            1290,    FRAMES.688,    SOLAR_CARDS.703,    0.5661639
            1291,    FRAMES.688,    SOLAR_CARDS.721,    0.1258142
            1292,    FRAMES.688,    SOLAR_CARDS.748,    1.132328
            1293,    FRAMES.688,    SOLAR_CARDS.755,    0.2516284
            1294,    FRAMES.689,    SOLAR_CARDS.703,    0.0629071
            1295,    FRAMES.689,    SOLAR_CARDS.748,    0.1258142
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1296,    FRAMES.690,    SOLAR_CARDS.881,    0.2516284
            1297,    FRAMES.690,    SOLAR_CARDS.888,    1.132328
            1298,    FRAMES.690,    SOLAR_CARDS.916,    0.1258142
            1299,    FRAMES.690,    SOLAR_CARDS.923,    0.5661639
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1300,    FRAMES.691,    SOLAR_CARDS.769,    0.3145355
            1301,    FRAMES.691,    SOLAR_CARDS.776,    1.41541
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1302,    FRAMES.692,    SOLAR_CARDS.823,    0.3145355
            1303,    FRAMES.692,    SOLAR_CARDS.830,    1.41541
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1304,    FRAMES.693,    SOLAR_CARDS.769,    1.572677
            1305,    FRAMES.694,    SOLAR_CARDS.762,    1.572677
            1306,    FRAMES.695,    SOLAR_CARDS.762,    1.572677
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1307,    FRAMES.696,    SOLAR_CARDS.888,    0.1258142
            1308,    FRAMES.696,    SOLAR_CARDS.923,    0.0629071
            1309,    FRAMES.697,    SOLAR_CARDS.895,    0.1572677
            1310,    FRAMES.698,    SOLAR_CARDS.895,    1.41541
            1311,    FRAMES.698,    SOLAR_CARDS.902,    0.3145355
            1312,    FRAMES.699,    SOLAR_CARDS.902,    1.258142
            1313,    FRAMES.700,    SOLAR_CARDS.902,    1.572677
            1314,    FRAMES.701,    SOLAR_CARDS.909,    1.572677
            1315,    FRAMES.702,    SOLAR_CARDS.909,    1.572677
            1316,    FRAMES.703,    SOLAR_CARDS.916,    1.572677
            1317,    FRAMES.704,    SOLAR_CARDS.916,    1.258142
            1318,    FRAMES.705,    SOLAR_CARDS.916,    0.3145355
            1319,    FRAMES.705,    SOLAR_CARDS.923,    1.41541
            1320,    FRAMES.706,    SOLAR_CARDS.923,    0.1572677
            1321,    FRAMES.707,    SOLAR_CARDS.895,    0.09436065
            1322,    FRAMES.707,    SOLAR_CARDS.930,    0.0629071
            1323,    FRAMES.708,    SOLAR_CARDS.895,    0.8492459
            1324,    FRAMES.708,    SOLAR_CARDS.902,    0.1887213
            1325,    FRAMES.708,    SOLAR_CARDS.930,    0.5661639
            1326,    FRAMES.708,    SOLAR_CARDS.937,    0.1258142
            1327,    FRAMES.709,    SOLAR_CARDS.902,    0.7548852
            1328,    FRAMES.709,    SOLAR_CARDS.937,    0.5032568
            1329,    FRAMES.710,    SOLAR_CARDS.902,    0.9436065
            1330,    FRAMES.710,    SOLAR_CARDS.937,    0.629071
            1331,    FRAMES.711,    SOLAR_CARDS.909,    0.9436065
            1332,    FRAMES.711,    SOLAR_CARDS.944,    0.629071
            1333,    FRAMES.712,    SOLAR_CARDS.909,    0.9436065
            1334,    FRAMES.712,    SOLAR_CARDS.944,    0.629071
            1335,    FRAMES.713,    SOLAR_CARDS.916,    0.9436065
            1336,    FRAMES.713,    SOLAR_CARDS.951,    0.629071
            1337,    FRAMES.714,    SOLAR_CARDS.916,    0.7548852
            1338,    FRAMES.714,    SOLAR_CARDS.951,    0.5032568
            1339,    FRAMES.715,    SOLAR_CARDS.916,    0.1887213
            1340,    FRAMES.715,    SOLAR_CARDS.923,    0.8492459
            1341,    FRAMES.715,    SOLAR_CARDS.951,    0.1258142
            1342,    FRAMES.715,    SOLAR_CARDS.958,    0.5661639
            1343,    FRAMES.716,    SOLAR_CARDS.923,    0.09436065
            1344,    FRAMES.716,    SOLAR_CARDS.958,    0.0629071
            1345,    FRAMES.717,    SOLAR_CARDS.930,    0.1887213
            1346,    FRAMES.718,    SOLAR_CARDS.930,    1.698492
            1347,    FRAMES.718,    SOLAR_CARDS.937,    0.3774426
            1348,    FRAMES.719,    SOLAR_CARDS.937,    1.50977
            1349,    FRAMES.720,    SOLAR_CARDS.937,    1.887213
            1350,    FRAMES.721,    SOLAR_CARDS.944,    1.887213
            1351,    FRAMES.722,    SOLAR_CARDS.944,    1.887213
            1352,    FRAMES.723,    SOLAR_CARDS.951,    1.887213
            1353,    FRAMES.724,    SOLAR_CARDS.951,    1.50977
            1354,    FRAMES.725,    SOLAR_CARDS.951,    0.3774426
            1355,    FRAMES.725,    SOLAR_CARDS.958,    1.698492
            1356,    FRAMES.726,    SOLAR_CARDS.958,    0.1887213
            1357,    FRAMES.727,    SOLAR_CARDS.930,    0.0629071
            1358,    FRAMES.727,    SOLAR_CARDS.965,    0.09436065
            1359,    FRAMES.728,    SOLAR_CARDS.930,    0.5661639
            1360,    FRAMES.728,    SOLAR_CARDS.937,    0.1258142
            1361,    FRAMES.728,    SOLAR_CARDS.965,    0.8492458
            1362,    FRAMES.728,    SOLAR_CARDS.972,    0.1887213
            1363,    FRAMES.729,    SOLAR_CARDS.937,    0.5032568
            1364,    FRAMES.729,    SOLAR_CARDS.972,    0.7548852
            1365,    FRAMES.730,    SOLAR_CARDS.937,    0.629071
            1366,    FRAMES.730,    SOLAR_CARDS.972,    0.9436065
            1367,    FRAMES.731,    SOLAR_CARDS.944,    0.629071
            1368,    FRAMES.731,    SOLAR_CARDS.979,    0.9436065
            1369,    FRAMES.732,    SOLAR_CARDS.944,    0.629071
            1370,    FRAMES.732,    SOLAR_CARDS.979,    0.9436065
            1371,    FRAMES.733,    SOLAR_CARDS.951,    0.629071
            1372,    FRAMES.733,    SOLAR_CARDS.986,    0.9436065
            1373,    FRAMES.734,    SOLAR_CARDS.951,    0.5032568
            1374,    FRAMES.734,    SOLAR_CARDS.986,    0.7548852
            1375,    FRAMES.735,    SOLAR_CARDS.951,    0.1258142
            1376,    FRAMES.735,    SOLAR_CARDS.958,    0.5661639
            1377,    FRAMES.735,    SOLAR_CARDS.986,    0.1887213
            1378,    FRAMES.735,    SOLAR_CARDS.993,    0.8492458
            1379,    FRAMES.736,    SOLAR_CARDS.958,    0.0629071
            1380,    FRAMES.736,    SOLAR_CARDS.993,    0.09436065
            1381,    FRAMES.737,    SOLAR_CARDS.965,    0.0629071
            1382,    FRAMES.738,    SOLAR_CARDS.965,    0.5661639
            1383,    FRAMES.738,    SOLAR_CARDS.972,    0.1258142
            1384,    FRAMES.739,    SOLAR_CARDS.972,    0.5032568
            1385,    FRAMES.740,    SOLAR_CARDS.972,    0.629071
            1386,    FRAMES.741,    SOLAR_CARDS.979,    0.629071
            1387,    FRAMES.742,    SOLAR_CARDS.979,    0.629071
            1388,    FRAMES.743,    SOLAR_CARDS.986,    0.629071
            1389,    FRAMES.744,    SOLAR_CARDS.986,    0.5032568
            1390,    FRAMES.745,    SOLAR_CARDS.986,    0.1258142
            1391,    FRAMES.745,    SOLAR_CARDS.993,    0.5661639
            1392,    FRAMES.746,    SOLAR_CARDS.993,    0.0629071
C Contact - Face Contactor-(+y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::210F
            1393,    FRAMES.747,    SOLAR_CARDS.805,    0.0629071
            1394,    FRAMES.748,    SOLAR_CARDS.805,    0.5661639
            1395,    FRAMES.748,    SOLAR_CARDS.812,    0.1258142
            1396,    FRAMES.749,    SOLAR_CARDS.812,    0.5032568
            1397,    FRAMES.750,    SOLAR_CARDS.812,    0.629071
            1398,    FRAMES.751,    SOLAR_CARDS.819,    0.629071
            1399,    FRAMES.752,    SOLAR_CARDS.819,    0.629071
            1400,    FRAMES.753,    SOLAR_CARDS.826,    0.629071
            1401,    FRAMES.754,    SOLAR_CARDS.826,    0.5032568
            1402,    FRAMES.755,    SOLAR_CARDS.826,    0.1258142
            1403,    FRAMES.755,    SOLAR_CARDS.833,    0.5661639
            1404,    FRAMES.756,    SOLAR_CARDS.833,    0.0629071
            1405,    FRAMES.757,    SOLAR_CARDS.805,    0.09436065
            1406,    FRAMES.757,    SOLAR_CARDS.840,    0.0629071
            1407,    FRAMES.758,    SOLAR_CARDS.805,    0.8492458
            1408,    FRAMES.758,    SOLAR_CARDS.812,    0.1887213
            1409,    FRAMES.758,    SOLAR_CARDS.840,    0.5661639
            1410,    FRAMES.758,    SOLAR_CARDS.847,    0.1258142
            1411,    FRAMES.759,    SOLAR_CARDS.812,    0.7548852
            1412,    FRAMES.759,    SOLAR_CARDS.847,    0.5032568
            1413,    FRAMES.760,    SOLAR_CARDS.812,    0.9436065
            1414,    FRAMES.760,    SOLAR_CARDS.847,    0.629071
            1415,    FRAMES.761,    SOLAR_CARDS.819,    0.9436065
            1416,    FRAMES.761,    SOLAR_CARDS.1001,    0.629071
            1417,    FRAMES.762,    SOLAR_CARDS.819,    0.9436065
            1418,    FRAMES.762,    SOLAR_CARDS.1001,    0.629071
            1419,    FRAMES.763,    SOLAR_CARDS.826,    0.9436065
            1420,    FRAMES.763,    SOLAR_CARDS.1008,    0.629071
            1421,    FRAMES.764,    SOLAR_CARDS.826,    0.7548852
            1422,    FRAMES.764,    SOLAR_CARDS.1008,    0.5032568
            1423,    FRAMES.765,    SOLAR_CARDS.826,    0.1887213
            1424,    FRAMES.765,    SOLAR_CARDS.833,    0.8492459
            1425,    FRAMES.765,    SOLAR_CARDS.854,    0.5661639
            1426,    FRAMES.765,    SOLAR_CARDS.1008,    0.1258142
            1427,    FRAMES.766,    SOLAR_CARDS.833,    0.09436065
            1428,    FRAMES.766,    SOLAR_CARDS.854,    0.0629071
            1429,    FRAMES.767,    SOLAR_CARDS.840,    0.1887213
            1430,    FRAMES.768,    SOLAR_CARDS.840,    1.698492
            1431,    FRAMES.768,    SOLAR_CARDS.847,    0.3774426
            1432,    FRAMES.769,    SOLAR_CARDS.847,    1.50977
            1433,    FRAMES.770,    SOLAR_CARDS.847,    1.887213
            1434,    FRAMES.771,    SOLAR_CARDS.1001,    1.887213
            1435,    FRAMES.772,    SOLAR_CARDS.1001,    1.887213
            1436,    FRAMES.773,    SOLAR_CARDS.1008,    1.887213
            1437,    FRAMES.774,    SOLAR_CARDS.1008,    1.50977
            1438,    FRAMES.775,    SOLAR_CARDS.854,    1.698492
            1439,    FRAMES.775,    SOLAR_CARDS.1008,    0.3774426
            1440,    FRAMES.776,    SOLAR_CARDS.854,    0.1887213
            1441,    FRAMES.777,    SOLAR_CARDS.840,    0.0629071
            1442,    FRAMES.777,    SOLAR_CARDS.861,    0.09436065
            1443,    FRAMES.778,    SOLAR_CARDS.840,    0.5661639
            1444,    FRAMES.778,    SOLAR_CARDS.847,    0.1258142
            1445,    FRAMES.778,    SOLAR_CARDS.861,    0.8492459
            1446,    FRAMES.778,    SOLAR_CARDS.868,    0.1887213
            1447,    FRAMES.779,    SOLAR_CARDS.847,    0.5032568
            1448,    FRAMES.779,    SOLAR_CARDS.868,    0.7548852
            1449,    FRAMES.780,    SOLAR_CARDS.847,    0.629071
            1450,    FRAMES.780,    SOLAR_CARDS.868,    0.9436065
            1451,    FRAMES.781,    SOLAR_CARDS.875,    0.9436065
            1452,    FRAMES.781,    SOLAR_CARDS.1001,    0.629071
            1453,    FRAMES.782,    SOLAR_CARDS.875,    0.9436065
            1454,    FRAMES.782,    SOLAR_CARDS.1001,    0.629071
            1455,    FRAMES.783,    SOLAR_CARDS.882,    0.9436065
            1456,    FRAMES.783,    SOLAR_CARDS.1008,    0.629071
            1457,    FRAMES.784,    SOLAR_CARDS.882,    0.7548852
            1458,    FRAMES.784,    SOLAR_CARDS.1008,    0.5032568
            1459,    FRAMES.785,    SOLAR_CARDS.854,    0.5661639
            1460,    FRAMES.785,    SOLAR_CARDS.882,    0.1887213
            1461,    FRAMES.785,    SOLAR_CARDS.889,    0.8492459
            1462,    FRAMES.785,    SOLAR_CARDS.1008,    0.1258142
            1463,    FRAMES.786,    SOLAR_CARDS.854,    0.0629071
            1464,    FRAMES.786,    SOLAR_CARDS.889,    0.09436065
            1465,    FRAMES.787,    SOLAR_CARDS.861,    0.1572677
            1466,    FRAMES.788,    SOLAR_CARDS.861,    1.41541
            1467,    FRAMES.788,    SOLAR_CARDS.868,    0.3145355
            1468,    FRAMES.789,    SOLAR_CARDS.868,    1.258142
            1469,    FRAMES.790,    SOLAR_CARDS.868,    1.572677
            1470,    FRAMES.791,    SOLAR_CARDS.875,    1.572677
            1471,    FRAMES.792,    SOLAR_CARDS.875,    1.572677
            1472,    FRAMES.793,    SOLAR_CARDS.882,    1.572677
            1473,    FRAMES.794,    SOLAR_CARDS.882,    1.258142
            1474,    FRAMES.795,    SOLAR_CARDS.882,    0.3145355
            1475,    FRAMES.795,    SOLAR_CARDS.889,    1.41541
            1476,    FRAMES.796,    SOLAR_CARDS.889,    0.1572677
            1477,    FRAMES.797,    SOLAR_CARDS.861,    0.0629071
            1478,    FRAMES.797,    SOLAR_CARDS.896,    0.1258142
            1479,    FRAMES.798,    SOLAR_CARDS.861,    0.5661639
            1480,    FRAMES.798,    SOLAR_CARDS.868,    0.1258142
            1481,    FRAMES.798,    SOLAR_CARDS.896,    1.132328
            1482,    FRAMES.798,    SOLAR_CARDS.903,    0.2516284
            1483,    FRAMES.799,    SOLAR_CARDS.868,    0.5032568
            1484,    FRAMES.799,    SOLAR_CARDS.903,    1.006514
            1485,    FRAMES.800,    SOLAR_CARDS.868,    0.629071
            1486,    FRAMES.800,    SOLAR_CARDS.903,    1.258142
            1487,    FRAMES.801,    SOLAR_CARDS.875,    0.629071
            1488,    FRAMES.801,    SOLAR_CARDS.910,    1.258142
            1489,    FRAMES.802,    SOLAR_CARDS.875,    0.629071
            1490,    FRAMES.802,    SOLAR_CARDS.910,    1.258142
            1491,    FRAMES.803,    SOLAR_CARDS.882,    0.629071
            1492,    FRAMES.803,    SOLAR_CARDS.917,    1.258142
            1493,    FRAMES.804,    SOLAR_CARDS.882,    0.5032568
            1494,    FRAMES.804,    SOLAR_CARDS.917,    1.006514
            1495,    FRAMES.805,    SOLAR_CARDS.882,    0.1258142
            1496,    FRAMES.805,    SOLAR_CARDS.889,    0.5661639
            1497,    FRAMES.805,    SOLAR_CARDS.917,    0.2516284
            1498,    FRAMES.805,    SOLAR_CARDS.924,    1.132328
            1499,    FRAMES.806,    SOLAR_CARDS.889,    0.0629071
            1500,    FRAMES.806,    SOLAR_CARDS.924,    0.1258142
            1501,    FRAMES.807,    SOLAR_CARDS.896,    0.1572677
            1502,    FRAMES.808,    SOLAR_CARDS.896,    1.41541
            1503,    FRAMES.808,    SOLAR_CARDS.903,    0.3145355
            1504,    FRAMES.809,    SOLAR_CARDS.903,    1.258142
            1505,    FRAMES.810,    SOLAR_CARDS.903,    1.572677
            1506,    FRAMES.811,    SOLAR_CARDS.910,    1.572677
            1507,    FRAMES.812,    SOLAR_CARDS.910,    1.572677
            1508,    FRAMES.813,    SOLAR_CARDS.917,    1.572677
            1509,    FRAMES.814,    SOLAR_CARDS.917,    1.258142
            1510,    FRAMES.815,    SOLAR_CARDS.917,    0.3145355
            1511,    FRAMES.815,    SOLAR_CARDS.924,    1.41541
            1512,    FRAMES.816,    SOLAR_CARDS.924,    0.1572677
            1513,    FRAMES.817,    SOLAR_CARDS.896,    0.03145355
            1514,    FRAMES.817,    SOLAR_CARDS.931,    0.1258142
            1515,    FRAMES.818,    SOLAR_CARDS.896,    0.283082
            1516,    FRAMES.818,    SOLAR_CARDS.903,    0.0629071
            1517,    FRAMES.818,    SOLAR_CARDS.931,    1.132328
            1518,    FRAMES.818,    SOLAR_CARDS.938,    0.2516284
            1519,    FRAMES.819,    SOLAR_CARDS.903,    0.2516284
            1520,    FRAMES.819,    SOLAR_CARDS.938,    1.006514
            1521,    FRAMES.820,    SOLAR_CARDS.903,    0.3145355
            1522,    FRAMES.820,    SOLAR_CARDS.938,    1.258142
            1523,    FRAMES.821,    SOLAR_CARDS.910,    0.3145355
            1524,    FRAMES.821,    SOLAR_CARDS.945,    1.258142
            1525,    FRAMES.822,    SOLAR_CARDS.910,    0.3145355
            1526,    FRAMES.822,    SOLAR_CARDS.945,    1.258142
            1527,    FRAMES.823,    SOLAR_CARDS.917,    0.3145355
            1528,    FRAMES.823,    SOLAR_CARDS.952,    1.258142
            1529,    FRAMES.824,    SOLAR_CARDS.917,    0.2516284
            1530,    FRAMES.824,    SOLAR_CARDS.952,    1.006514
            1531,    FRAMES.825,    SOLAR_CARDS.917,    0.0629071
            1532,    FRAMES.825,    SOLAR_CARDS.924,    0.283082
            1533,    FRAMES.825,    SOLAR_CARDS.952,    0.2516284
            1534,    FRAMES.825,    SOLAR_CARDS.959,    1.132328
            1535,    FRAMES.826,    SOLAR_CARDS.924,    0.03145355
            1536,    FRAMES.826,    SOLAR_CARDS.959,    0.1258142
            1537,    FRAMES.827,    SOLAR_CARDS.931,    0.1887213
            1538,    FRAMES.828,    SOLAR_CARDS.931,    1.698492
            1539,    FRAMES.828,    SOLAR_CARDS.938,    0.3774426
            1540,    FRAMES.829,    SOLAR_CARDS.938,    1.50977
            1541,    FRAMES.830,    SOLAR_CARDS.938,    1.887213
            1542,    FRAMES.831,    SOLAR_CARDS.945,    1.887213
            1543,    FRAMES.832,    SOLAR_CARDS.945,    1.887213
            1544,    FRAMES.833,    SOLAR_CARDS.952,    1.887213
            1545,    FRAMES.834,    SOLAR_CARDS.952,    1.50977
            1546,    FRAMES.835,    SOLAR_CARDS.952,    0.3774426
            1547,    FRAMES.835,    SOLAR_CARDS.959,    1.698492
            1548,    FRAMES.836,    SOLAR_CARDS.959,    0.1887213
            1549,    FRAMES.837,    SOLAR_CARDS.966,    0.1572677
            1550,    FRAMES.838,    SOLAR_CARDS.966,    1.41541
            1551,    FRAMES.838,    SOLAR_CARDS.973,    0.3145355
            1552,    FRAMES.839,    SOLAR_CARDS.973,    1.258142
            1553,    FRAMES.840,    SOLAR_CARDS.973,    1.572678
            1554,    FRAMES.841,    SOLAR_CARDS.980,    1.572677
            1555,    FRAMES.842,    SOLAR_CARDS.980,    1.572678
            1556,    FRAMES.843,    SOLAR_CARDS.987,    1.572678
            1557,    FRAMES.844,    SOLAR_CARDS.987,    1.258142
            1558,    FRAMES.845,    SOLAR_CARDS.987,    0.3145355
            1559,    FRAMES.845,    SOLAR_CARDS.994,    1.41541
            1560,    FRAMES.846,    SOLAR_CARDS.994,    0.1572677
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1561,    FRAMES.867,    SOLAR_CARDS.879,    0.3145355
            1562,    FRAMES.867,    SOLAR_CARDS.1005,    1.258142
            1563,    FRAMES.869,    SOLAR_CARDS.872,    0.3145355
            1564,    FRAMES.869,    SOLAR_CARDS.998,    1.258142
            1565,    FRAMES.871,    SOLAR_CARDS.872,    0.3145355
            1566,    FRAMES.871,    SOLAR_CARDS.998,    1.258142
            1567,    FRAMES.873,    SOLAR_CARDS.844,    1.258142
            1568,    FRAMES.873,    SOLAR_CARDS.865,    0.3145355
            1569,    FRAMES.874,    SOLAR_CARDS.844,    1.006514
            1570,    FRAMES.874,    SOLAR_CARDS.865,    0.2516284
            1571,    FRAMES.876,    SOLAR_CARDS.837,    1.132328
            1572,    FRAMES.876,    SOLAR_CARDS.844,    0.2516284
            1573,    FRAMES.876,    SOLAR_CARDS.858,    0.283082
            1574,    FRAMES.876,    SOLAR_CARDS.865,    0.0629071
            1575,    FRAMES.878,    SOLAR_CARDS.837,    0.1258142
            1576,    FRAMES.878,    SOLAR_CARDS.858,    0.03145355
            1577,    FRAMES.880,    SOLAR_CARDS.886,    0.1572677
            1578,    FRAMES.882,    SOLAR_CARDS.879,    0.3145355
            1579,    FRAMES.882,    SOLAR_CARDS.886,    1.41541
            1580,    FRAMES.883,    SOLAR_CARDS.879,    1.258142
            1581,    FRAMES.884,    SOLAR_CARDS.879,    1.572677
            1582,    FRAMES.886,    SOLAR_CARDS.872,    1.572677
            1583,    FRAMES.888,    SOLAR_CARDS.872,    1.572677
            1584,    FRAMES.889,    SOLAR_CARDS.865,    1.572677
            1585,    FRAMES.890,    SOLAR_CARDS.865,    1.258142
            1586,    FRAMES.891,    SOLAR_CARDS.858,    1.41541
            1587,    FRAMES.891,    SOLAR_CARDS.865,    0.3145355
            1588,    FRAMES.892,    SOLAR_CARDS.858,    0.1572677
            1589,    FRAMES.894,    SOLAR_CARDS.886,    0.1258142
            1590,    FRAMES.894,    SOLAR_CARDS.921,    0.0629071
            1591,    FRAMES.895,    SOLAR_CARDS.879,    0.2516284
            1592,    FRAMES.895,    SOLAR_CARDS.886,    1.132328
            1593,    FRAMES.895,    SOLAR_CARDS.914,    0.1258142
            1594,    FRAMES.895,    SOLAR_CARDS.921,    0.5661639
            1595,    FRAMES.896,    SOLAR_CARDS.879,    1.006514
            1596,    FRAMES.896,    SOLAR_CARDS.914,    0.5032568
            1597,    FRAMES.897,    SOLAR_CARDS.879,    1.258142
            1598,    FRAMES.897,    SOLAR_CARDS.914,    0.629071
            1599,    FRAMES.899,    SOLAR_CARDS.872,    1.258142
            1600,    FRAMES.899,    SOLAR_CARDS.907,    0.629071
            1601,    FRAMES.901,    SOLAR_CARDS.872,    1.258142
            1602,    FRAMES.901,    SOLAR_CARDS.907,    0.629071
            1603,    FRAMES.903,    SOLAR_CARDS.865,    1.258142
            1604,    FRAMES.903,    SOLAR_CARDS.900,    0.629071
            1605,    FRAMES.904,    SOLAR_CARDS.865,    1.006514
            1606,    FRAMES.904,    SOLAR_CARDS.900,    0.5032568
            1607,    FRAMES.906,    SOLAR_CARDS.858,    1.132328
            1608,    FRAMES.906,    SOLAR_CARDS.865,    0.2516284
            1609,    FRAMES.906,    SOLAR_CARDS.893,    0.5661639
            1610,    FRAMES.906,    SOLAR_CARDS.900,    0.1258142
            1611,    FRAMES.908,    SOLAR_CARDS.858,    0.1258142
            1612,    FRAMES.908,    SOLAR_CARDS.893,    0.0629071
            1613,    FRAMES.909,    SOLAR_CARDS.921,    0.1572677
            1614,    FRAMES.910,    SOLAR_CARDS.914,    0.3145355
            1615,    FRAMES.910,    SOLAR_CARDS.921,    1.41541
            1616,    FRAMES.911,    SOLAR_CARDS.914,    1.258142
            1617,    FRAMES.912,    SOLAR_CARDS.914,    1.572677
            1618,    FRAMES.913,    SOLAR_CARDS.907,    1.572677
            1619,    FRAMES.914,    SOLAR_CARDS.907,    1.572677
            1620,    FRAMES.915,    SOLAR_CARDS.900,    1.572677
            1621,    FRAMES.916,    SOLAR_CARDS.900,    1.258142
            1622,    FRAMES.917,    SOLAR_CARDS.893,    1.41541
            1623,    FRAMES.917,    SOLAR_CARDS.900,    0.3145355
            1624,    FRAMES.918,    SOLAR_CARDS.893,    0.1572677
            1625,    FRAMES.919,    SOLAR_CARDS.921,    0.09436065
            1626,    FRAMES.919,    SOLAR_CARDS.956,    0.0629071
            1627,    FRAMES.921,    SOLAR_CARDS.914,    0.1887213
            1628,    FRAMES.921,    SOLAR_CARDS.921,    0.8492459
            1629,    FRAMES.921,    SOLAR_CARDS.949,    0.1258142
            1630,    FRAMES.921,    SOLAR_CARDS.956,    0.5661639
            1631,    FRAMES.922,    SOLAR_CARDS.914,    0.7548852
            1632,    FRAMES.922,    SOLAR_CARDS.949,    0.5032568
            1633,    FRAMES.923,    SOLAR_CARDS.914,    0.9436065
            1634,    FRAMES.923,    SOLAR_CARDS.949,    0.629071
            1635,    FRAMES.924,    SOLAR_CARDS.907,    0.9436065
            1636,    FRAMES.924,    SOLAR_CARDS.942,    0.629071
            1637,    FRAMES.925,    SOLAR_CARDS.907,    0.9436065
            1638,    FRAMES.925,    SOLAR_CARDS.942,    0.629071
            1639,    FRAMES.926,    SOLAR_CARDS.900,    0.9436065
            1640,    FRAMES.926,    SOLAR_CARDS.935,    0.629071
            1641,    FRAMES.927,    SOLAR_CARDS.900,    0.7548852
            1642,    FRAMES.927,    SOLAR_CARDS.935,    0.5032568
            1643,    FRAMES.928,    SOLAR_CARDS.893,    0.8492459
            1644,    FRAMES.928,    SOLAR_CARDS.900,    0.1887213
            1645,    FRAMES.928,    SOLAR_CARDS.928,    0.5661639
            1646,    FRAMES.928,    SOLAR_CARDS.935,    0.1258142
            1647,    FRAMES.929,    SOLAR_CARDS.893,    0.09436065
            1648,    FRAMES.929,    SOLAR_CARDS.928,    0.0629071
            1649,    FRAMES.930,    SOLAR_CARDS.956,    0.1887213
            1650,    FRAMES.931,    SOLAR_CARDS.949,    0.3774426
            1651,    FRAMES.931,    SOLAR_CARDS.956,    1.698492
            1652,    FRAMES.932,    SOLAR_CARDS.949,    1.50977
            1653,    FRAMES.933,    SOLAR_CARDS.949,    1.887213
            1654,    FRAMES.934,    SOLAR_CARDS.942,    1.887213
            1655,    FRAMES.935,    SOLAR_CARDS.942,    1.887213
            1656,    FRAMES.936,    SOLAR_CARDS.935,    1.887213
            1657,    FRAMES.937,    SOLAR_CARDS.935,    1.50977
            1658,    FRAMES.938,    SOLAR_CARDS.928,    1.698492
            1659,    FRAMES.938,    SOLAR_CARDS.935,    0.3774426
            1660,    FRAMES.939,    SOLAR_CARDS.928,    0.1887213
            1661,    FRAMES.940,    SOLAR_CARDS.956,    0.0629071
            1662,    FRAMES.940,    SOLAR_CARDS.991,    0.09436065
            1663,    FRAMES.941,    SOLAR_CARDS.949,    0.1258142
            1664,    FRAMES.941,    SOLAR_CARDS.956,    0.5661639
            1665,    FRAMES.941,    SOLAR_CARDS.984,    0.1887213
            1666,    FRAMES.941,    SOLAR_CARDS.991,    0.8492458
            1667,    FRAMES.942,    SOLAR_CARDS.949,    0.5032568
            1668,    FRAMES.942,    SOLAR_CARDS.984,    0.7548852
            1669,    FRAMES.943,    SOLAR_CARDS.949,    0.629071
            1670,    FRAMES.943,    SOLAR_CARDS.984,    0.9436065
            1671,    FRAMES.944,    SOLAR_CARDS.942,    0.629071
            1672,    FRAMES.944,    SOLAR_CARDS.977,    0.9436065
            1673,    FRAMES.945,    SOLAR_CARDS.942,    0.629071
            1674,    FRAMES.945,    SOLAR_CARDS.977,    0.9436065
            1675,    FRAMES.946,    SOLAR_CARDS.935,    0.629071
            1676,    FRAMES.946,    SOLAR_CARDS.970,    0.9436065
            1677,    FRAMES.947,    SOLAR_CARDS.935,    0.5032568
            1678,    FRAMES.947,    SOLAR_CARDS.970,    0.7548852
            1679,    FRAMES.948,    SOLAR_CARDS.928,    0.5661639
            1680,    FRAMES.948,    SOLAR_CARDS.935,    0.1258142
            1681,    FRAMES.948,    SOLAR_CARDS.963,    0.8492458
            1682,    FRAMES.948,    SOLAR_CARDS.970,    0.1887213
            1683,    FRAMES.949,    SOLAR_CARDS.928,    0.0629071
            1684,    FRAMES.949,    SOLAR_CARDS.963,    0.09436065
            1685,    FRAMES.950,    SOLAR_CARDS.991,    0.0629071
            1686,    FRAMES.951,    SOLAR_CARDS.984,    0.1258142
            1687,    FRAMES.951,    SOLAR_CARDS.991,    0.5661639
            1688,    FRAMES.952,    SOLAR_CARDS.984,    0.5032568
            1689,    FRAMES.953,    SOLAR_CARDS.984,    0.629071
            1690,    FRAMES.954,    SOLAR_CARDS.977,    0.629071
            1691,    FRAMES.955,    SOLAR_CARDS.977,    0.629071
            1692,    FRAMES.956,    SOLAR_CARDS.970,    0.629071
            1693,    FRAMES.957,    SOLAR_CARDS.970,    0.5032568
            1694,    FRAMES.958,    SOLAR_CARDS.963,    0.5661639
            1695,    FRAMES.958,    SOLAR_CARDS.970,    0.1258142
            1696,    FRAMES.959,    SOLAR_CARDS.963,    0.0629071
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1697,    FRAMES.960,    SOLAR_CARDS.831,    0.0629071
            1698,    FRAMES.961,    SOLAR_CARDS.824,    0.1258142
            1699,    FRAMES.961,    SOLAR_CARDS.831,    0.5661639
            1700,    FRAMES.962,    SOLAR_CARDS.824,    0.5032568
            1701,    FRAMES.963,    SOLAR_CARDS.824,    0.629071
            1702,    FRAMES.964,    SOLAR_CARDS.817,    0.629071
            1703,    FRAMES.965,    SOLAR_CARDS.817,    0.629071
            1704,    FRAMES.966,    SOLAR_CARDS.810,    0.629071
            1705,    FRAMES.967,    SOLAR_CARDS.810,    0.5032568
            1706,    FRAMES.968,    SOLAR_CARDS.803,    0.5661639
            1707,    FRAMES.968,    SOLAR_CARDS.810,    0.1258142
            1708,    FRAMES.969,    SOLAR_CARDS.803,    0.0629071
            1709,    FRAMES.970,    SOLAR_CARDS.831,    0.09436065
            1710,    FRAMES.970,    SOLAR_CARDS.852,    0.0629071
            1711,    FRAMES.971,    SOLAR_CARDS.824,    0.1887213
            1712,    FRAMES.971,    SOLAR_CARDS.831,    0.8492459
            1713,    FRAMES.971,    SOLAR_CARDS.852,    0.5661639
            1714,    FRAMES.971,    SOLAR_CARDS.1006,    0.1258142
            1715,    FRAMES.972,    SOLAR_CARDS.824,    0.7548852
            1716,    FRAMES.972,    SOLAR_CARDS.1006,    0.5032568
            1717,    FRAMES.973,    SOLAR_CARDS.824,    0.9436065
            1718,    FRAMES.973,    SOLAR_CARDS.1006,    0.629071
            1719,    FRAMES.974,    SOLAR_CARDS.817,    0.9436065
            1720,    FRAMES.974,    SOLAR_CARDS.999,    0.629071
            1721,    FRAMES.975,    SOLAR_CARDS.817,    0.9436065
            1722,    FRAMES.975,    SOLAR_CARDS.999,    0.629071
            1723,    FRAMES.976,    SOLAR_CARDS.810,    0.9436065
            1724,    FRAMES.976,    SOLAR_CARDS.845,    0.629071
            1725,    FRAMES.977,    SOLAR_CARDS.810,    0.7548852
            1726,    FRAMES.977,    SOLAR_CARDS.845,    0.5032568
            1727,    FRAMES.978,    SOLAR_CARDS.803,    0.8492458
            1728,    FRAMES.978,    SOLAR_CARDS.810,    0.1887213
            1729,    FRAMES.978,    SOLAR_CARDS.838,    0.5661639
            1730,    FRAMES.978,    SOLAR_CARDS.845,    0.1258142
            1731,    FRAMES.979,    SOLAR_CARDS.803,    0.09436065
            1732,    FRAMES.979,    SOLAR_CARDS.838,    0.0629071
            1733,    FRAMES.980,    SOLAR_CARDS.852,    0.1887213
            1734,    FRAMES.981,    SOLAR_CARDS.852,    1.698492
            1735,    FRAMES.981,    SOLAR_CARDS.1006,    0.3774426
            1736,    FRAMES.982,    SOLAR_CARDS.1006,    1.50977
            1737,    FRAMES.983,    SOLAR_CARDS.1006,    1.887213
            1738,    FRAMES.984,    SOLAR_CARDS.999,    1.887213
            1739,    FRAMES.985,    SOLAR_CARDS.999,    1.887213
            1740,    FRAMES.986,    SOLAR_CARDS.845,    1.887213
            1741,    FRAMES.987,    SOLAR_CARDS.845,    1.50977
            1742,    FRAMES.988,    SOLAR_CARDS.838,    1.698492
            1743,    FRAMES.988,    SOLAR_CARDS.845,    0.3774426
            1744,    FRAMES.990,    SOLAR_CARDS.894,    0.1572677
            1745,    FRAMES.992,    SOLAR_CARDS.915,    0.2516284
            1746,    FRAMES.992,    SOLAR_CARDS.950,    1.006514
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1747,    FRAMES.993,    SOLAR_CARDS.855,    1.698492
            1748,    FRAMES.993,    SOLAR_CARDS.1009,    0.3774426
            1749,    FRAMES.994,    SOLAR_CARDS.1009,    1.50977
            1750,    FRAMES.995,    SOLAR_CARDS.1009,    1.887213
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1751,    FRAMES.996,    SOLAR_CARDS.894,    0.03145355
            1752,    FRAMES.996,    SOLAR_CARDS.929,    0.1258142
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1753,    FRAMES.997,    SOLAR_CARDS.1002,    1.887213
            1754,    FRAMES.999,    SOLAR_CARDS.1002,    1.887213
            1755,    FRAMES.1000,    SOLAR_CARDS.848,    1.887213
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1756,    FRAMES.1002,    SOLAR_CARDS.943,    1.887213
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1757,    FRAMES.1003,    SOLAR_CARDS.848,    1.50977
            1758,    FRAMES.1004,    SOLAR_CARDS.841,    1.698492
            1759,    FRAMES.1004,    SOLAR_CARDS.848,    0.3774426
            1760,    FRAMES.1006,    SOLAR_CARDS.841,    0.1887213
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1761,    FRAMES.1008,    SOLAR_CARDS.985,    0.3145355
            1762,    FRAMES.1008,    SOLAR_CARDS.992,    1.41541
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1763,    FRAMES.1010,    SOLAR_CARDS.855,    0.1258142
            1764,    FRAMES.1010,    SOLAR_CARDS.890,    0.03145355
            1765,    FRAMES.1012,    SOLAR_CARDS.855,    1.132328
            1766,    FRAMES.1012,    SOLAR_CARDS.883,    0.0629071
            1767,    FRAMES.1012,    SOLAR_CARDS.890,    0.283082
            1768,    FRAMES.1012,    SOLAR_CARDS.1009,    0.2516284
            1769,    FRAMES.1013,    SOLAR_CARDS.883,    0.2516284
            1770,    FRAMES.1013,    SOLAR_CARDS.1009,    1.006514
C Contact - Face Contactor-(-y) TOP solar card to frame[MECHANICAL_CONNECTIONS][0]::2113
            1771,    FRAMES.1015,    SOLAR_CARDS.971,    1.258142
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1772,    FRAMES.1017,    SOLAR_CARDS.883,    0.3145355
            1773,    FRAMES.1017,    SOLAR_CARDS.1009,    1.258142
            1774,    FRAMES.1043,    SOLAR_CARDS.939,    1.887213
            1775,    FRAMES.1044,    SOLAR_CARDS.806,    1.41541
            1776,    FRAMES.1044,    SOLAR_CARDS.813,    0.3145355
            1777,    FRAMES.1046,    SOLAR_CARDS.939,    0.629071
            1778,    FRAMES.1046,    SOLAR_CARDS.974,    0.9436065
            1779,    FRAMES.1048,    SOLAR_CARDS.806,    0.1572677
            1780,    FRAMES.1049,    SOLAR_CARDS.974,    0.629071
            1781,    FRAMES.1050,    SOLAR_CARDS.855,    0.1887213
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1782,    FRAMES.1053,    SOLAR_CARDS.461,    0.629071
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1783,    FRAMES.1055,    SOLAR_CARDS.827,    0.3145355
            1784,    FRAMES.1055,    SOLAR_CARDS.834,    1.41541
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1785,    FRAMES.1058,    SOLAR_CARDS.474,    0.7548852
            1786,    FRAMES.1058,    SOLAR_CARDS.799,    0.5032568
            1787,    FRAMES.1059,    SOLAR_CARDS.474,    0.9436065
            1788,    FRAMES.1059,    SOLAR_CARDS.799,    0.629071
            1789,    FRAMES.1060,    SOLAR_CARDS.458,    0.8492458
            1790,    FRAMES.1060,    SOLAR_CARDS.461,    0.1887213
            1791,    FRAMES.1060,    SOLAR_CARDS.486,    0.5661639
            1792,    FRAMES.1060,    SOLAR_CARDS.643,    0.1258142
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1793,    FRAMES.1063,    SOLAR_CARDS.827,    1.572677
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1794,    FRAMES.1064,    SOLAR_CARDS.795,    1.887213
            1795,    FRAMES.1065,    SOLAR_CARDS.685,    0.0629071
            1796,    FRAMES.1065,    SOLAR_CARDS.741,    0.09436065
            1797,    FRAMES.1067,    SOLAR_CARDS.727,    0.9436065
            1798,    FRAMES.1067,    SOLAR_CARDS.795,    0.629071
            1799,    FRAMES.1069,    SOLAR_CARDS.643,    0.629071
            1800,    FRAMES.1069,    SOLAR_CARDS.721,    0.9436065
            1801,    FRAMES.1071,    SOLAR_CARDS.734,    1.258142
            1802,    FRAMES.1073,    SOLAR_CARDS.727,    1.572677
            1803,    FRAMES.1075,    SOLAR_CARDS.703,    1.41541
            1804,    FRAMES.1075,    SOLAR_CARDS.721,    0.3145355
            1805,    FRAMES.1076,    SOLAR_CARDS.734,    0.629071
            1806,    FRAMES.1076,    SOLAR_CARDS.769,    1.258142
            1807,    FRAMES.1077,    SOLAR_CARDS.727,    0.629071
            1808,    FRAMES.1077,    SOLAR_CARDS.762,    1.258142
            1809,    FRAMES.1079,    SOLAR_CARDS.727,    0.629071
            1810,    FRAMES.1079,    SOLAR_CARDS.762,    1.258142
            1811,    FRAMES.1082,    SOLAR_CARDS.776,    0.1572677
            1812,    FRAMES.1084,    SOLAR_CARDS.769,    1.258142
            1813,    FRAMES.1086,    SOLAR_CARDS.755,    1.572677
            1814,    FRAMES.1087,    SOLAR_CARDS.755,    1.258142
            1815,    FRAMES.1088,    SOLAR_CARDS.748,    1.41541
            1816,    FRAMES.1088,    SOLAR_CARDS.755,    0.3145355
            1817,    FRAMES.1089,    SOLAR_CARDS.748,    0.1572677
            1818,    FRAMES.1090,    SOLAR_CARDS.776,    0.03145355
            1819,    FRAMES.1090,    SOLAR_CARDS.781,    0.1258142
            1820,    FRAMES.1091,    SOLAR_CARDS.769,    0.0629071
            1821,    FRAMES.1091,    SOLAR_CARDS.776,    0.283082
            1822,    FRAMES.1091,    SOLAR_CARDS.780,    0.2516284
            1823,    FRAMES.1091,    SOLAR_CARDS.781,    1.132328
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1824,    FRAMES.1092,    SOLAR_CARDS.825,    1.258142
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1825,    FRAMES.1093,    SOLAR_CARDS.769,    0.2516284
            1826,    FRAMES.1093,    SOLAR_CARDS.780,    1.006514
            1827,    FRAMES.1094,    SOLAR_CARDS.769,    0.3145355
            1828,    FRAMES.1094,    SOLAR_CARDS.780,    1.258142
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1829,    FRAMES.1095,    SOLAR_CARDS.835,    0.1887213
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1830,    FRAMES.1096,    SOLAR_CARDS.762,    0.3145355
            1831,    FRAMES.1096,    SOLAR_CARDS.779,    1.258142
            1832,    FRAMES.1097,    SOLAR_CARDS.762,    0.3145355
            1833,    FRAMES.1097,    SOLAR_CARDS.779,    1.258142
            1834,    FRAMES.1098,    SOLAR_CARDS.755,    0.3145355
            1835,    FRAMES.1098,    SOLAR_CARDS.778,    1.258142
            1836,    FRAMES.1099,    SOLAR_CARDS.755,    0.2516284
            1837,    FRAMES.1099,    SOLAR_CARDS.778,    1.006514
            1838,    FRAMES.1100,    SOLAR_CARDS.748,    0.283082
            1839,    FRAMES.1100,    SOLAR_CARDS.755,    0.0629071
            1840,    FRAMES.1100,    SOLAR_CARDS.777,    1.132328
            1841,    FRAMES.1100,    SOLAR_CARDS.778,    0.2516284
            1842,    FRAMES.1101,    SOLAR_CARDS.748,    0.03145355
            1843,    FRAMES.1101,    SOLAR_CARDS.777,    0.1258142
            1844,    FRAMES.1102,    SOLAR_CARDS.781,    0.1887213
            1845,    FRAMES.1103,    SOLAR_CARDS.780,    0.3774426
            1846,    FRAMES.1103,    SOLAR_CARDS.781,    1.698492
            1847,    FRAMES.1104,    SOLAR_CARDS.780,    1.50977
            1848,    FRAMES.1105,    SOLAR_CARDS.780,    1.887213
            1849,    FRAMES.1106,    SOLAR_CARDS.779,    1.887213
            1850,    FRAMES.1107,    SOLAR_CARDS.779,    1.887213
            1851,    FRAMES.1108,    SOLAR_CARDS.778,    1.887213
            1852,    FRAMES.1109,    SOLAR_CARDS.778,    1.50977
            1853,    FRAMES.1110,    SOLAR_CARDS.777,    1.698492
            1854,    FRAMES.1110,    SOLAR_CARDS.778,    0.3774426
            1855,    FRAMES.1111,    SOLAR_CARDS.777,    0.1887213
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1856,    FRAMES.1112,    SOLAR_CARDS.825,    0.3145355
            1857,    FRAMES.1112,    SOLAR_CARDS.832,    1.41541
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1858,    FRAMES.1113,    SOLAR_CARDS.786,    0.1572677
            1859,    FRAMES.1114,    SOLAR_CARDS.785,    0.3145355
            1860,    FRAMES.1114,    SOLAR_CARDS.786,    1.41541
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1861,    FRAMES.1115,    SOLAR_CARDS.835,    1.698492
            1862,    FRAMES.1115,    SOLAR_CARDS.842,    0.3774426
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1863,    FRAMES.1116,    SOLAR_CARDS.785,    1.258142
            1864,    FRAMES.1117,    SOLAR_CARDS.785,    1.572678
            1865,    FRAMES.1118,    SOLAR_CARDS.784,    1.572678
            1866,    FRAMES.1119,    SOLAR_CARDS.784,    1.572677
            1867,    FRAMES.1120,    SOLAR_CARDS.783,    1.572678
            1868,    FRAMES.1121,    SOLAR_CARDS.783,    1.258142
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1869,    FRAMES.1122,    SOLAR_CARDS.842,    1.50977
C Contact - Face Contactor-(+x) TOP solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210D
            1870,    FRAMES.1123,    SOLAR_CARDS.782,    1.41541
            1871,    FRAMES.1123,    SOLAR_CARDS.783,    0.3145355
            1872,    FRAMES.1124,    SOLAR_CARDS.782,    0.1572677
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1873,    FRAMES.1126,    SOLAR_CARDS.834,    0.1572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1874,    FRAMES.1127,    SOLAR_CARDS.842,    1.887213
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1875,    FRAMES.1129,    SOLAR_CARDS.832,    0.1572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1876,    FRAMES.1130,    SOLAR_CARDS.996,    1.887213
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1877,    FRAMES.1131,    SOLAR_CARDS.823,    1.258142
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1878,    FRAMES.1133,    SOLAR_CARDS.996,    1.887213
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1879,    FRAMES.1135,    SOLAR_CARDS.823,    1.572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1880,    FRAMES.1137,    SOLAR_CARDS.1003,    1.887213
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1881,    FRAMES.1138,    SOLAR_CARDS.809,    1.572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1882,    FRAMES.1139,    SOLAR_CARDS.1003,    1.50977
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1883,    FRAMES.1140,    SOLAR_CARDS.809,    1.258142
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1884,    FRAMES.1142,    SOLAR_CARDS.849,    1.698492
            1885,    FRAMES.1142,    SOLAR_CARDS.1003,    0.3774426
            1886,    FRAMES.1144,    SOLAR_CARDS.849,    0.1887213
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1887,    FRAMES.1145,    SOLAR_CARDS.802,    1.41541
            1888,    FRAMES.1145,    SOLAR_CARDS.809,    0.3145355
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1889,    FRAMES.1147,    SOLAR_CARDS.835,    0.1258142
            1890,    FRAMES.1147,    SOLAR_CARDS.856,    0.03145355
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1891,    FRAMES.1149,    SOLAR_CARDS.802,    0.1572677
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1892,    FRAMES.1151,    SOLAR_CARDS.835,    1.132328
            1893,    FRAMES.1151,    SOLAR_CARDS.842,    0.2516284
            1894,    FRAMES.1151,    SOLAR_CARDS.856,    0.283082
            1895,    FRAMES.1151,    SOLAR_CARDS.863,    0.0629071
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1896,    FRAMES.1153,    SOLAR_CARDS.851,    0.1887213
C Contact - Face Contactor-(-x) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2112
            1897,    FRAMES.1154,    SOLAR_CARDS.821,    1.258142
            1898,    FRAMES.1155,    SOLAR_CARDS.821,    0.3145355
            1899,    FRAMES.1155,    SOLAR_CARDS.828,    1.41541
C Contact - Face Contactor-(-y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2114
            1900,    FRAMES.1157,    SOLAR_CARDS.851,    0.1258142
            1901,    FRAMES.1157,    SOLAR_CARDS.886,    0.03145355
            1902,    FRAMES.1159,    SOLAR_CARDS.851,    1.132328
            1903,    FRAMES.1159,    SOLAR_CARDS.879,    0.0629071
            1904,    FRAMES.1159,    SOLAR_CARDS.886,    0.283082
            1905,    FRAMES.1159,    SOLAR_CARDS.1005,    0.2516284
            1906,    FRAMES.1160,    SOLAR_CARDS.879,    0.2516284
            1907,    FRAMES.1160,    SOLAR_CARDS.1005,    1.006514
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1908,    FRAMES.1162,    SOLAR_CARDS.820,    1.572677
            1909,    FRAMES.1163,    SOLAR_CARDS.813,    1.572677
C Contact - Face Contactor-(+y) BOTTOM solar card to frame[MECHANICAL_CONNECTIONS][0]::2110
            1910,    FRAMES.1164,    SOLAR_CARDS.860,    1.41541
            1911,    FRAMES.1164,    SOLAR_CARDS.867,    0.3145355
C Contact - Face Contactor-(+x) BOTTOM solar card to frame lattice[MECHANICAL_CONNECTIONS][0]::210E
            1912,    FRAMES.1165,    SOLAR_CARDS.813,    1.258142
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
            458,    0.,    0.3944306
            461,    0.,    0.7888612
            468,    0.,    0.7888612
            474,    0.,    0.7888612
            480,    0.,    0.3944306
            486,    0.,    0.7888612
            643,    0.,    1.577722
            685,    0.,    0.7888612
            703,    0.,    0.7888612
            721,    0.,    1.577722
            727,    0.,    1.577722
            734,    0.,    1.577722
            741,    0.,    0.7888612
            748,    0.,    0.7888612
            755,    0.,    1.577722
            762,    0.,    1.577722
            769,    0.,    1.577722
            776,    0.,    0.7888612
            777,    0.,    0.7888612
            778,    0.,    1.577722
            779,    0.,    1.577722
            780,    0.,    1.577722
            781,    0.,    0.7888612
            782,    0.,    0.3944306
            783,    0.,    0.7888612
            784,    0.,    0.7888612
            785,    0.,    0.7888612
            786,    0.,    0.3944306
            795,    0.,    1.577722
            799,    0.,    1.577722
            800,    0.,    0.3944306
            801,    0.,    0.3944306
            802,    0.,    0.3944306
            803,    0.,    0.3944306
            804,    0.,    0.3944306
            805,    0.,    0.3944306
            806,    0.,    0.3944306
            807,    0.,    0.7888612
            808,    0.,    0.7888612
            809,    0.,    0.7888612
            810,    0.,    0.7888612
            811,    0.,    0.7888612
            812,    0.,    0.7888612
            813,    0.,    0.7888612
            814,    0.,    0.7888612
            815,    0.,    0.7888612
            816,    0.,    0.7888612
            817,    0.,    0.7888612
            818,    0.,    0.7888612
            819,    0.,    0.7888612
            820,    0.,    0.7888612
            821,    0.,    0.7888612
            822,    0.,    0.7888612
            823,    0.,    0.7888612
            824,    0.,    0.7888612
            825,    0.,    0.7888612
            826,    0.,    0.7888612
            827,    0.,    0.7888612
            828,    0.,    0.3944306
            829,    0.,    0.3944306
            830,    0.,    0.3944306
            831,    0.,    0.3944306
            832,    0.,    0.3944306
            833,    0.,    0.3944306
            834,    0.,    0.3944306
            835,    0.,    0.7888612
            836,    0.,    0.7888612
            837,    0.,    0.7888612
            838,    0.,    0.7888612
            839,    0.,    0.7888612
            840,    0.,    0.7888612
            841,    0.,    0.7888612
            842,    0.,    1.577722
            843,    0.,    1.577722
            844,    0.,    1.577722
            845,    0.,    1.577722
            846,    0.,    1.577722
            847,    0.,    1.577722
            848,    0.,    1.577722
            849,    0.,    0.7888612
            850,    0.,    0.7888612
            851,    0.,    0.7888612
            852,    0.,    0.7888612
            853,    0.,    0.7888612
            854,    0.,    0.7888612
            855,    0.,    0.7888612
            856,    0.,    0.7888612
            857,    0.,    0.7888612
            858,    0.,    0.7888612
            859,    0.,    0.7888612
            860,    0.,    0.7888612
            861,    0.,    0.7888612
            862,    0.,    0.7888612
            863,    0.,    1.577722
            864,    0.,    1.577722
            865,    0.,    1.577722
            866,    0.,    1.577722
            867,    0.,    1.577722
            868,    0.,    1.577722
            869,    0.,    1.577722
            870,    0.,    1.577722
            871,    0.,    1.577722
            872,    0.,    1.577722
            873,    0.,    1.577722
            874,    0.,    1.577722
            875,    0.,    1.577722
            876,    0.,    1.577722
            877,    0.,    1.577722
            878,    0.,    1.577722
            879,    0.,    1.577722
            880,    0.,    1.577722
            881,    0.,    1.577722
            882,    0.,    1.577722
            883,    0.,    1.577722
            884,    0.,    0.7888612
            885,    0.,    0.7888612
            886,    0.,    0.7888612
            887,    0.,    0.7888612
            888,    0.,    0.7888612
            889,    0.,    0.7888612
            890,    0.,    0.7888612
            891,    0.,    0.7888612
            892,    0.,    0.7888612
            893,    0.,    0.7888612
            894,    0.,    0.7888612
            895,    0.,    0.7888612
            896,    0.,    0.7888612
            897,    0.,    0.7888612
            898,    0.,    1.577722
            899,    0.,    1.577722
            900,    0.,    1.577722
            901,    0.,    1.577722
            902,    0.,    1.577722
            903,    0.,    1.577722
            904,    0.,    1.577722
            905,    0.,    1.577722
            906,    0.,    1.577722
            907,    0.,    1.577722
            908,    0.,    1.577722
            909,    0.,    1.577722
            910,    0.,    1.577722
            911,    0.,    1.577722
            912,    0.,    1.577722
            913,    0.,    1.577722
            914,    0.,    1.577722
            915,    0.,    1.577722
            916,    0.,    1.577722
            917,    0.,    1.577722
            918,    0.,    1.577722
            919,    0.,    0.7888612
            920,    0.,    0.7888612
            921,    0.,    0.7888612
            922,    0.,    0.7888612
            923,    0.,    0.7888612
            924,    0.,    0.7888612
            925,    0.,    0.7888612
            926,    0.,    0.7888612
            927,    0.,    0.7888612
            928,    0.,    0.7888612
            929,    0.,    0.7888612
            930,    0.,    0.7888612
            931,    0.,    0.7888612
            932,    0.,    0.7888612
            933,    0.,    1.577722
            934,    0.,    1.577722
            935,    0.,    1.577722
            936,    0.,    1.577722
            937,    0.,    1.577722
            938,    0.,    1.577722
            939,    0.,    1.577722
            940,    0.,    1.577722
            941,    0.,    1.577722
            942,    0.,    1.577722
            943,    0.,    1.577722
            944,    0.,    1.577722
            945,    0.,    1.577722
            946,    0.,    1.577722
            947,    0.,    1.577722
            948,    0.,    1.577722
            949,    0.,    1.577722
            950,    0.,    1.577722
            951,    0.,    1.577722
            952,    0.,    1.577722
            953,    0.,    1.577722
            954,    0.,    0.7888612
            955,    0.,    0.7888612
            956,    0.,    0.7888612
            957,    0.,    0.7888612
            958,    0.,    0.7888612
            959,    0.,    0.7888612
            960,    0.,    0.7888612
            961,    0.,    0.3944306
            962,    0.,    0.3944306
            963,    0.,    0.3944306
            964,    0.,    0.3944306
            965,    0.,    0.3944306
            966,    0.,    0.3944306
            967,    0.,    0.3944306
            968,    0.,    0.7888612
            969,    0.,    0.7888612
            970,    0.,    0.7888612
            971,    0.,    0.7888612
            972,    0.,    0.7888612
            973,    0.,    0.7888612
            974,    0.,    0.7888612
            975,    0.,    0.7888612
            976,    0.,    0.7888612
            977,    0.,    0.7888612
            978,    0.,    0.7888612
            979,    0.,    0.7888612
            980,    0.,    0.7888612
            981,    0.,    0.7888612
            982,    0.,    0.7888612
            983,    0.,    0.7888612
            984,    0.,    0.7888612
            985,    0.,    0.7888612
            986,    0.,    0.7888612
            987,    0.,    0.7888612
            988,    0.,    0.7888612
            989,    0.,    0.3944306
            990,    0.,    0.3944306
            991,    0.,    0.3944306
            992,    0.,    0.3944306
            993,    0.,    0.3944306
            994,    0.,    0.3944306
            995,    0.,    0.3944306
            996,    0.,    1.577722
            997,    0.,    1.577722
            998,    0.,    1.577722
            999,    0.,    1.577722
            1000,    0.,    1.577722
            1001,    0.,    1.577722
            1002,    0.,    1.577722
            1003,    0.,    1.577722
            1004,    0.,    1.577722
            1005,    0.,    1.577722
            1006,    0.,    1.577722
            1007,    0.,    1.577722
            1008,    0.,    1.577722
            1009,    0.,    1.577722
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
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][2]::1AC9
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
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][2]::1AC9
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
C Contact - Edge Contactor-+Z PCB to Solar (+x)[SOLAR_CARDS][2]::1AC9
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
            81,    FRAMES.29,    SOLAR_CARDS.811,    0.0256
            82,    FRAMES.65,    SOLAR_CARDS.860,    0.0256
            83,    FRAMES.242,    SOLAR_CARDS.856,    0.0256
            84,    FRAMES.257,    SOLAR_CARDS.884,    0.0256
            85,    FRAMES.278,    SOLAR_CARDS.891,    0.0256
            86,    FRAMES.287,    SOLAR_CARDS.919,    0.0256
            87,    FRAMES.308,    SOLAR_CARDS.961,    0.0256
            88,    FRAMES.310,    SOLAR_CARDS.968,    0.0256
            89,    FRAMES.315,    SOLAR_CARDS.982,    0.0256
            90,    FRAMES.317,    SOLAR_CARDS.989,    0.0256
            91,    FRAMES.318,    SOLAR_CARDS.801,    0.0256
            92,    FRAMES.320,    SOLAR_CARDS.808,    0.0256
            93,    FRAMES.325,    SOLAR_CARDS.822,    0.0256
            94,    FRAMES.327,    SOLAR_CARDS.829,    0.0256
            95,    FRAMES.348,    SOLAR_CARDS.857,    0.0256
            96,    FRAMES.357,    SOLAR_CARDS.885,    0.0256
            97,    FRAMES.378,    SOLAR_CARDS.892,    0.0256
            98,    FRAMES.387,    SOLAR_CARDS.920,    0.0256
            99,    FRAMES.408,    SOLAR_CARDS.962,    0.0256
            100,    FRAMES.410,    SOLAR_CARDS.969,    0.0256
            101,    FRAMES.415,    SOLAR_CARDS.983,    0.0256
            102,    FRAMES.417,    SOLAR_CARDS.990,    0.0256
            103,    FRAMES.419,    SOLAR_CARDS.887,    0.0256
            104,    FRAMES.428,    SOLAR_CARDS.859,    0.0256
            105,    FRAMES.449,    SOLAR_CARDS.922,    0.0256
            106,    FRAMES.458,    SOLAR_CARDS.800,    0.0256
            107,    FRAMES.468,    SOLAR_CARDS.807,    0.0256
            108,    FRAMES.479,    SOLAR_CARDS.992,    0.0256
            109,    FRAMES.481,    SOLAR_CARDS.985,    0.0256
            110,    FRAMES.488,    SOLAR_CARDS.964,    0.0256
            111,    FRAMES.501,    SOLAR_CARDS.890,    0.0256
            112,    FRAMES.513,    SOLAR_CARDS.827,    0.0256
            113,    FRAMES.534,    SOLAR_CARDS.862,    0.0256
            114,    FRAMES.590,    SOLAR_CARDS.925,    0.0256
            115,    FRAMES.599,    SOLAR_CARDS.897,    0.0256
            116,    FRAMES.606,    SOLAR_CARDS.804,    0.0256
            117,    FRAMES.620,    SOLAR_CARDS.995,    0.0256
            118,    FRAMES.622,    SOLAR_CARDS.988,    0.0256
            119,    FRAMES.627,    SOLAR_CARDS.974,    0.0256
            120,    FRAMES.629,    SOLAR_CARDS.967,    0.0256
            121,    FRAMES.630,    SOLAR_CARDS.480,    0.0256
            122,    FRAMES.632,    SOLAR_CARDS.474,    0.0256
            123,    FRAMES.636,    SOLAR_CARDS.888,    0.0256
            124,    FRAMES.637,    SOLAR_CARDS.461,    0.0256
            125,    FRAMES.639,    SOLAR_CARDS.458,    0.0256
            126,    FRAMES.669,    SOLAR_CARDS.703,    0.0256
            127,    FRAMES.674,    SOLAR_CARDS.830,    0.0256
            128,    FRAMES.685,    SOLAR_CARDS.828,    0.0256
            129,    FRAMES.707,    SOLAR_CARDS.895,    0.0256
            130,    FRAMES.716,    SOLAR_CARDS.923,    0.0256
            131,    FRAMES.737,    SOLAR_CARDS.965,    0.0256
            132,    FRAMES.739,    SOLAR_CARDS.972,    0.0256
            133,    FRAMES.744,    SOLAR_CARDS.986,    0.0256
            134,    FRAMES.746,    SOLAR_CARDS.993,    0.0256
            135,    FRAMES.747,    SOLAR_CARDS.805,    0.0256
            136,    FRAMES.749,    SOLAR_CARDS.812,    0.0256
            137,    FRAMES.754,    SOLAR_CARDS.826,    0.0256
            138,    FRAMES.756,    SOLAR_CARDS.833,    0.0256
            139,    FRAMES.777,    SOLAR_CARDS.861,    0.0256
            140,    FRAMES.786,    SOLAR_CARDS.889,    0.0256
            141,    FRAMES.807,    SOLAR_CARDS.896,    0.0256
            142,    FRAMES.816,    SOLAR_CARDS.924,    0.0256
            143,    FRAMES.837,    SOLAR_CARDS.966,    0.0256
            144,    FRAMES.839,    SOLAR_CARDS.973,    0.0256
            145,    FRAMES.844,    SOLAR_CARDS.987,    0.0256
            146,    FRAMES.846,    SOLAR_CARDS.994,    0.0256
            147,    FRAMES.880,    SOLAR_CARDS.886,    0.0256
            148,    FRAMES.892,    SOLAR_CARDS.858,    0.0256
            149,    FRAMES.919,    SOLAR_CARDS.921,    0.0256
            150,    FRAMES.929,    SOLAR_CARDS.893,    0.0256
            151,    FRAMES.950,    SOLAR_CARDS.991,    0.0256
            152,    FRAMES.952,    SOLAR_CARDS.984,    0.0256
            153,    FRAMES.957,    SOLAR_CARDS.970,    0.0256
            154,    FRAMES.959,    SOLAR_CARDS.963,    0.0256
            155,    FRAMES.960,    SOLAR_CARDS.831,    0.0256
            156,    FRAMES.962,    SOLAR_CARDS.824,    0.0256
            157,    FRAMES.967,    SOLAR_CARDS.810,    0.0256
            158,    FRAMES.969,    SOLAR_CARDS.803,    0.0256
            159,    FRAMES.990,    SOLAR_CARDS.894,    0.0256
            160,    FRAMES.1015,    SOLAR_CARDS.971,    0.0256
            161,    FRAMES.1048,    SOLAR_CARDS.806,    0.0256
            162,    FRAMES.1065,    SOLAR_CARDS.741,    0.0256
            163,    FRAMES.1082,    SOLAR_CARDS.776,    0.0256
            164,    FRAMES.1089,    SOLAR_CARDS.748,    0.0256
            165,    FRAMES.1092,    SOLAR_CARDS.825,    0.0256
            166,    FRAMES.1113,    SOLAR_CARDS.786,    0.0256
            167,    FRAMES.1116,    SOLAR_CARDS.785,    0.0256
            168,    FRAMES.1121,    SOLAR_CARDS.783,    0.0256
            169,    FRAMES.1124,    SOLAR_CARDS.782,    0.0256
            170,    FRAMES.1126,    SOLAR_CARDS.834,    0.0256
            171,    FRAMES.1129,    SOLAR_CARDS.832,    0.0256
            172,    FRAMES.1131,    SOLAR_CARDS.823,    0.0256
            173,    FRAMES.1140,    SOLAR_CARDS.809,    0.0256
            174,    FRAMES.1149,    SOLAR_CARDS.802,    0.0256
            175,    FRAMES.1154,    SOLAR_CARDS.821,    0.0256
            176,    FRAMES.1165,    SOLAR_CARDS.813,    0.0256
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
            458,    0.,    0.035112
            461,    0.,    0.070224
            468,    0.,    0.035112
            474,    0.,    0.070224
            480,    0.,    0.140448
            486,    0.,    0.070224
            643,    0.,    0.070224
            685,    0.,    0.035112
            703,    0.,    0.070224
            721,    0.,    0.035112
            795,    0.,    0.140448
            799,    0.,    0.070224
            800,    0.,    0.035112
            801,    0.,    0.035112
            802,    0.,    0.035112
            803,    0.,    0.035112
            804,    0.,    0.035112
            805,    0.,    0.035112
            806,    0.,    0.035112
            807,    0.,    0.070224
            808,    0.,    0.070224
            809,    0.,    0.070224
            810,    0.,    0.070224
            811,    0.,    0.070224
            812,    0.,    0.070224
            813,    0.,    0.070224
            814,    0.,    0.035112
            815,    0.,    0.035112
            816,    0.,    0.035112
            817,    0.,    0.035112
            818,    0.,    0.035112
            819,    0.,    0.035112
            820,    0.,    0.035112
            821,    0.,    0.070224
            822,    0.,    0.070224
            823,    0.,    0.070224
            824,    0.,    0.070224
            825,    0.,    0.070224
            826,    0.,    0.070224
            827,    0.,    0.070224
            828,    0.,    0.140448
            829,    0.,    0.140448
            830,    0.,    0.140448
            831,    0.,    0.140448
            832,    0.,    0.140448
            833,    0.,    0.140448
            834,    0.,    0.140448
            835,    0.,    0.070224
            836,    0.,    0.070224
            837,    0.,    0.070224
            838,    0.,    0.070224
            839,    0.,    0.070224
            840,    0.,    0.070224
            841,    0.,    0.070224
            842,    0.,    0.070224
            843,    0.,    0.070224
            844,    0.,    0.070224
            845,    0.,    0.070224
            846,    0.,    0.070224
            847,    0.,    0.070224
            848,    0.,    0.070224
            849,    0.,    0.035112
            850,    0.,    0.035112
            851,    0.,    0.035112
            852,    0.,    0.035112
            853,    0.,    0.035112
            854,    0.,    0.035112
            855,    0.,    0.035112
            856,    0.,    0.070224
            857,    0.,    0.070224
            858,    0.,    0.070224
            859,    0.,    0.070224
            860,    0.,    0.070224
            861,    0.,    0.070224
            862,    0.,    0.070224
            863,    0.,    0.035112
            864,    0.,    0.035112
            865,    0.,    0.035112
            866,    0.,    0.035112
            867,    0.,    0.035112
            868,    0.,    0.035112
            869,    0.,    0.035112
            870,    0.,    0.140448
            871,    0.,    0.140448
            872,    0.,    0.140448
            873,    0.,    0.140448
            874,    0.,    0.140448
            875,    0.,    0.140448
            876,    0.,    0.140448
            877,    0.,    0.070224
            878,    0.,    0.070224
            879,    0.,    0.070224
            880,    0.,    0.070224
            881,    0.,    0.070224
            882,    0.,    0.070224
            883,    0.,    0.070224
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
C Contact - Face Contactor- -y top RTV[SOLAR_PANELS][1]::1A4B
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
      CALL COMMON
      RETURN
      END
      SUBROUTINE TDREL
C     This routine is to release heaters for transient runs
C     for steady state solutions.
      CALL COMMON
F     CHARACTER*128 TEMP_LINE
      CALL HNQCAL('ALL')
      WRITE(NOUT,*) 'Heater Steady State Q Values:'
F     IF( ISBUILT( 'BATTERY' ) ) THEN
F     CALL OUTLOG( 'Heater-Battery -Z Heater[BATTERY]::1FFC:' )
F     CALL OUTLOG( '    Steady State Proportional Heater Power Required:' )
F     WRITE(TEMP_LINE,*) '        ', PO1FFC, 'W'
F     CALL OUTLOG( TEMP_LINE )
          O__TD = 5. $ ON TEMP
F         T__TD =   0.02383402 * T(INTNOD('BATTERY', 81))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 82))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 83))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 84))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 85))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 86))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 87))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 88))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 90))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 93))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 96))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 98))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 100))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 103))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 106))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 109))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 112))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 115))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 118))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 121))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 124))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 127))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 129))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 130))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 131))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 132))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 133))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 134))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 135))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 137))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 148))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 150))
F     IF( T__TD .LT. O__TD ) THEN
F         CALL OUTLOG( '    WARNING::Sense Temp Less Than On Temp' )
F         WRITE(TEMP_LINE,*) '        Sense=', T__TD, '    On Temp=', O__TD
F         CALL OUTLOG( TEMP_LINE )
F     ENDIF
F     ENDIF
F     IF( ISBUILT( 'BATTERY' ) ) THEN
F     CALL OUTLOG( 'Heater-Battery +Z Heater[BATTERY]::1FFB:' )
F     CALL OUTLOG( '    Steady State Proportional Heater Power Required:' )
F     WRITE(TEMP_LINE,*) '        ', PO1FFB, 'W'
F     CALL OUTLOG( TEMP_LINE )
          O__TD = 5. $ ON TEMP
F         T__TD =   0.02383402 * T(INTNOD('BATTERY', 1))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 2))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 3))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 4))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 5))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 6))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 7))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 8))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 9))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 10))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 11))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 12))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 13))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 14))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 15))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 16))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 17))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 18))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 19))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 20))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 21))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 22))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 23))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 24))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 25))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 26))
F    +            + 0.03566529 * T(INTNOD('BATTERY', 27))
F    +            + 0.03120713 * T(INTNOD('BATTERY', 28))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 29))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 30))
F    +            + 0.03429355 * T(INTNOD('BATTERY', 31))
F    +            + 0.02383402 * T(INTNOD('BATTERY', 32))
F     IF( T__TD .LT. O__TD ) THEN
F         CALL OUTLOG( '    WARNING::Sense Temp Less Than On Temp' )
F         WRITE(TEMP_LINE,*) '        Sense=', T__TD, '    On Temp=', O__TD
F         CALL OUTLOG( TEMP_LINE )
F     ENDIF
F     ENDIF
F     RETURN
F     END
F     SUBROUTINE TDHTOT
C     This routine prints out heater ontime and cycle summaries
      CALL COMMON
F     IF( ISBUILT( 'BATTERY' ) ) THEN
F     write(nout,*) 'Heater Summary for : ',
F    +'Heater-Battery -Z Heater[BATTERY]::1FFC'
F     write(nout,*) '    On Time:     ', OT1FFC, 'sec'
F     write(nout,*) '    Num Cycles:  ', CH1FFC
F     write(nout,*) '    Total Energy: ', TP1FFC, 'J'
F     write(nout,*) '    On Temp:  ', 5.
F     write(nout,*) '    Off Temp: ', 6.
F     write(nout,*) '    Power:    ', 1.
F     ENDIF
F     IF( ISBUILT( 'BATTERY' ) ) THEN
F     write(nout,*) 'Heater Summary for : ',
F    +'Heater-Battery +Z Heater[BATTERY]::1FFB'
F     write(nout,*) '    On Time:     ', OT1FFB, 'sec'
F     write(nout,*) '    Num Cycles:  ', CH1FFB
F     write(nout,*) '    Total Energy: ', TP1FFB, 'J'
F     write(nout,*) '    On Temp:  ', 5.
F     write(nout,*) '    Off Temp: ', 6.
F     write(nout,*) '    Power:    ', 1.
F     ENDIF
F     RETURN
F     END
F     SUBROUTINE TDHTRST
C     This routine resets heater statistics
      CALL COMMON
      HT1FFC = 0.
      OT1FFC = 0.
      CH1FFC = 0.
      TP1FFC = 0.
      XP1FFC = 0.

      HT1FFB = 0.
      OT1FFB = 0.
      CH1FFB = 0.
      TP1FFB = 0.
      XP1FFB = 0.

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
