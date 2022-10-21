       subroutine setexit(expnt)
      !DEC$ ATTRIBUTES DLLEXPORT::setexit
      common /exfunc/ ex_pnt
      data ex_pnt /0/
      integer expnt, ex_pnt
      ex_pnt = expnt
      return
      end
      subroutine myexit(stat)
      integer stat
      common /exfunc/ ex_pnt
      integer ex_pnt
      pointer (ex_pnt,pext)
      integer, external :: pext
      if(ex_pnt .eq. 0) then
         call exit(stat)
      endif
      call pext(stat)
      return
      end
      subroutine checkexit()
      use exitflag_MOD
      if(exitflag .ne. 0) call ABNORMNOSAVE('EXIT KEY',0,'EXIT KEY')
      return
      end

      MODULE USERREGISTER_MOD
      REAL,   POINTER :: ATEST,BTEST,CTEST,DTEST,ETEST,FTEST,GTEST,HTEST,OTEST,PTEST,QTEST,RTEST,STEST,TTEST,UTEST,VTEST,WTEST,XTEST
     +,YTEST,ZTEST,A__TD,B__TD,C__TD,D__TD,E__TD,F__TD,G__TD,H__TD,O__TD,P__TD,Q__TD,R__TD,S__TD,T__TD,U__TD,V__TD,W__TD,X__TD,Y__TD
     +,Z__TD,ATEST_DP,BTEST_DP,CTEST_DP,DTEST_DP,ETEST_DP,FTEST_DP,GTEST_DP,HTEST_DP,OTEST_DP,PTEST_DP,QTEST_DP,RTEST_DP,STEST_DP
     +,TTEST_DP,UTEST_DP,VTEST_DP,WTEST_DP,XTEST_DP,YTEST_DP,ZTEST_DP,A__TD_DP,B__TD_DP,C__TD_DP,D__TD_DP,E__TD_DP,F__TD_DP,G__TD_DP
     +,H__TD_DP,O__TD_DP,P__TD_DP,Q__TD_DP,R__TD_DP,S__TD_DP,T__TD_DP,U__TD_DP,V__TD_DP,W__TD_DP,X__TD_DP,Y__TD_DP,Z__TD_DP,ATEST_SP
     +,BTEST_SP,CTEST_SP,DTEST_SP,ETEST_SP,FTEST_SP,GTEST_SP,HTEST_SP,OTEST_SP,PTEST_SP,QTEST_SP,RTEST_SP,STEST_SP,TTEST_SP,UTEST_SP
     +,VTEST_SP,WTEST_SP,XTEST_SP,YTEST_SP,ZTEST_SP
      INTEGER,POINTER ::  ITEST,JTEST,KTEST,LTEST,MTEST,NTEST,I__TD,J__TD,K__TD,L__TD,M__TD,N__TD,ITEST_DP,JTEST_DP,KTEST_DP
     +,LTEST_DP,MTEST_DP,NTEST_DP,I__TD_DP,J__TD_DP,K__TD_DP,L__TD_DP,M__TD_DP,N__TD_DP,ITEST_SP,JTEST_SP,KTEST_SP,LTEST_SP,MTEST_SP
     +,NTEST_SP
      END MODULE
      subroutine setptr(pntrs)
      INTEGER pntrs
      !DEC$ ATTRIBUTES DLLEXPORT::setptr
      call setfpntr(pntrs)
      return
      end
      SUBROUTINE SETUSERREG
      !DEC$ ATTRIBUTES DLLEXPORT::SETUSERREG
      USE REGDAT_MOD
      USE USERREGISTER_MOD
      USE CPADIMS_MOD
      CALL INITCSR
      ATEST => RUSERC(   1 )
      BTEST => RUSERC(   2 )
      CTEST => RUSERC(   3 )
      DTEST => RUSERC(   4 )
      ETEST => RUSERC(   5 )
      FTEST => RUSERC(   6 )
      GTEST => RUSERC(   7 )
      HTEST => RUSERC(   8 )
      ITEST => NUSERC(   9 )
      JTEST => NUSERC(  10 )
      KTEST => NUSERC(  11 )
      LTEST => NUSERC(  12 )
      MTEST => NUSERC(  13 )
      NTEST => NUSERC(  14 )
      OTEST => RUSERC(  15 )
      PTEST => RUSERC(  16 )
      QTEST => RUSERC(  17 )
      RTEST => RUSERC(  18 )
      STEST => RUSERC(  19 )
      TTEST => RUSERC(  20 )
      UTEST => RUSERC(  21 )
      VTEST => RUSERC(  22 )
      WTEST => RUSERC(  23 )
      XTEST => RUSERC(  24 )
      YTEST => RUSERC(  25 )
      ZTEST => RUSERC(  26 )
      A__TD => RUSERC(  27 )
      B__TD => RUSERC(  28 )
      C__TD => RUSERC(  29 )
      D__TD => RUSERC(  30 )
      E__TD => RUSERC(  31 )
      F__TD => RUSERC(  32 )
      G__TD => RUSERC(  33 )
      H__TD => RUSERC(  34 )
      I__TD => NUSERC(  35 )
      J__TD => NUSERC(  36 )
      K__TD => NUSERC(  37 )
      L__TD => NUSERC(  38 )
      M__TD => NUSERC(  39 )
      N__TD => NUSERC(  40 )
      O__TD => RUSERC(  41 )
      P__TD => RUSERC(  42 )
      Q__TD => RUSERC(  43 )
      R__TD => RUSERC(  44 )
      S__TD => RUSERC(  45 )
      T__TD => RUSERC(  46 )
      U__TD => RUSERC(  47 )
      V__TD => RUSERC(  48 )
      W__TD => RUSERC(  49 )
      X__TD => RUSERC(  50 )
      Y__TD => RUSERC(  51 )
      Z__TD => RUSERC(  52 )
      ATEST_DP => RUSERC(  53 )
      BTEST_DP => RUSERC(  54 )
      CTEST_DP => RUSERC(  55 )
      DTEST_DP => RUSERC(  56 )
      ETEST_DP => RUSERC(  57 )
      FTEST_DP => RUSERC(  58 )
      GTEST_DP => RUSERC(  59 )
      HTEST_DP => RUSERC(  60 )
      ITEST_DP => NUSERC(  61 )
      JTEST_DP => NUSERC(  62 )
      KTEST_DP => NUSERC(  63 )
      LTEST_DP => NUSERC(  64 )
      MTEST_DP => NUSERC(  65 )
      NTEST_DP => NUSERC(  66 )
      OTEST_DP => RUSERC(  67 )
      PTEST_DP => RUSERC(  68 )
      QTEST_DP => RUSERC(  69 )
      RTEST_DP => RUSERC(  70 )
      STEST_DP => RUSERC(  71 )
      TTEST_DP => RUSERC(  72 )
      UTEST_DP => RUSERC(  73 )
      VTEST_DP => RUSERC(  74 )
      WTEST_DP => RUSERC(  75 )
      XTEST_DP => RUSERC(  76 )
      YTEST_DP => RUSERC(  77 )
      ZTEST_DP => RUSERC(  78 )
      A__TD_DP => RUSERC(  79 )
      B__TD_DP => RUSERC(  80 )
      C__TD_DP => RUSERC(  81 )
      D__TD_DP => RUSERC(  82 )
      E__TD_DP => RUSERC(  83 )
      F__TD_DP => RUSERC(  84 )
      G__TD_DP => RUSERC(  85 )
      H__TD_DP => RUSERC(  86 )
      I__TD_DP => NUSERC(  87 )
      J__TD_DP => NUSERC(  88 )
      K__TD_DP => NUSERC(  89 )
      L__TD_DP => NUSERC(  90 )
      M__TD_DP => NUSERC(  91 )
      N__TD_DP => NUSERC(  92 )
      O__TD_DP => RUSERC(  93 )
      P__TD_DP => RUSERC(  94 )
      Q__TD_DP => RUSERC(  95 )
      R__TD_DP => RUSERC(  96 )
      S__TD_DP => RUSERC(  97 )
      T__TD_DP => RUSERC(  98 )
      U__TD_DP => RUSERC(  99 )
      V__TD_DP => RUSERC( 100 )
      W__TD_DP => RUSERC( 101 )
      X__TD_DP => RUSERC( 102 )
      Y__TD_DP => RUSERC( 103 )
      Z__TD_DP => RUSERC( 104 )
      ATEST_SP => RUSERC( 105 )
      BTEST_SP => RUSERC( 106 )
      CTEST_SP => RUSERC( 107 )
      DTEST_SP => RUSERC( 108 )
      ETEST_SP => RUSERC( 109 )
      FTEST_SP => RUSERC( 110 )
      GTEST_SP => RUSERC( 111 )
      HTEST_SP => RUSERC( 112 )
      ITEST_SP => NUSERC( 113 )
      JTEST_SP => NUSERC( 114 )
      KTEST_SP => NUSERC( 115 )
      LTEST_SP => NUSERC( 116 )
      MTEST_SP => NUSERC( 117 )
      NTEST_SP => NUSERC( 118 )
      OTEST_SP => RUSERC( 119 )
      PTEST_SP => RUSERC( 120 )
      QTEST_SP => RUSERC( 121 )
      RTEST_SP => RUSERC( 122 )
      STEST_SP => RUSERC( 123 )
      TTEST_SP => RUSERC( 124 )
      UTEST_SP => RUSERC( 125 )
      VTEST_SP => RUSERC( 126 )
      WTEST_SP => RUSERC( 127 )
      XTEST_SP => RUSERC( 128 )
      YTEST_SP => RUSERC( 129 )
      ZTEST_SP => RUSERC( 130 )
      RETURN
      END
       SUBROUTINE SOR0001
        RETURN
        END
       SUBROUTINE SOR0002
        RETURN
        END
       SUBROUTINE SOR0003
        RETURN
        END
       SUBROUTINE SOR0004
        RETURN
        END
       SUBROUTINE SOR0005
        RETURN
        END
       SUBROUTINE SOR0006
        RETURN
        END
       SUBROUTINE SOR0007
        RETURN
        END
       SUBROUTINE SOR0008
        RETURN
        END
       SUBROUTINE SOR0009
        RETURN
        END
       SUBROUTINE SOR0010
        RETURN
        END
       SUBROUTINE SOR0011
        RETURN
        END
       SUBROUTINE SOR0012
        RETURN
        END
       SUBROUTINE SOR0013
        RETURN
        END
       SUBROUTINE VA1_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA1_GLOBAL
       RETURN
       END
       SUBROUTINE VA1_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA1_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA10001
       CALL QVTEMP('BATTERY')
       CALL GVTEMP('BATTERY')
       CALL CVTEMP('BATTERY')
       RETURN
       END
       SUBROUTINE VA10002
       CALL QVTEMP('FRAME')
       CALL GVTEMP('FRAME')
       CALL CVTEMP('FRAME')
       RETURN
       END
       SUBROUTINE VA10003
       CALL QVTEMP('MAIN')
       CALL GVTEMP('MAIN')
       CALL CVTEMP('MAIN')
       RETURN
       END
       SUBROUTINE VA10004
       CALL QVTEMP('NEG_X')
       CALL GVTEMP('NEG_X')
       CALL CVTEMP('NEG_X')
       RETURN
       END
       SUBROUTINE VA10005
       CALL QVTEMP('NEG_Y')
       CALL GVTEMP('NEG_Y')
       CALL CVTEMP('NEG_Y')
       RETURN
       END
       SUBROUTINE VA10006
       CALL QVTEMP('OUTER_BOARD')
       CALL GVTEMP('OUTER_BOARD')
       CALL CVTEMP('OUTER_BOARD')
       RETURN
       END
       SUBROUTINE VA10007
       CALL QVTEMP('POS_X')
       CALL GVTEMP('POS_X')
       CALL CVTEMP('POS_X')
       RETURN
       END
       SUBROUTINE VA10008
       CALL QVTEMP('POS_Y')
       CALL GVTEMP('POS_Y')
       CALL CVTEMP('POS_Y')
       RETURN
       END
       SUBROUTINE VA10009
       CALL QVTEMP('SOLAR_PANEL')
       CALL GVTEMP('SOLAR_PANEL')
       CALL CVTEMP('SOLAR_PANEL')
       RETURN
       END
       SUBROUTINE VA10010
       CALL QVTEMP('SPACE')
       CALL GVTEMP('SPACE')
       CALL CVTEMP('SPACE')
       RETURN
       END
       SUBROUTINE VA10011
       CALL QVTEMP('C0A1')
       CALL GVTEMP('C0A1')
       CALL CVTEMP('C0A1')
       RETURN
       END
       SUBROUTINE VA10012
       CALL QVTEMP('C0A0')
       CALL GVTEMP('C0A0')
       CALL CVTEMP('C0A0')
       RETURN
       END
       SUBROUTINE VA10013
       CALL QVTEMP('C0A2')
       CALL GVTEMP('C0A2')
       CALL CVTEMP('C0A2')
       RETURN
       END
       SUBROUTINE VA2_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA2_GLOBAL
       RETURN
       END
       SUBROUTINE VA2_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA2_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA20001
       RETURN
       END
       SUBROUTINE VA20002
       RETURN
       END
       SUBROUTINE VA20003
       RETURN
       END
       SUBROUTINE VA20004
       RETURN
       END
       SUBROUTINE VA20005
       RETURN
       END
       SUBROUTINE VA20006
       RETURN
       END
       SUBROUTINE VA20007
       RETURN
       END
       SUBROUTINE VA20008
       RETURN
       END
       SUBROUTINE VA20009
       RETURN
       END
       SUBROUTINE VA20010
       RETURN
       END
       SUBROUTINE VA20011
       RETURN
       END
       SUBROUTINE VA20012
       RETURN
       END
       SUBROUTINE VA20013
       RETURN
       END
       SUBROUTINE VA00001
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       Q(          10) = Q(          10) + 6.25000000E-02
       Q(          11) = Q(          11) + 0.12500000
       Q(          12) = Q(          12) + 6.25000000E-02
       Q(          13) = Q(          13) + 0.12500000
       Q(          14) = Q(          14) + 0.25000000
       Q(          15) = Q(          15) + 0.12500000
       Q(          16) = Q(          16) + 6.25000000E-02
       Q(          17) = Q(          17) + 0.12500000
       Q(          18) = Q(          18) + 6.25000000E-02
       CALL QVTIME('BATTERY')
       CALL GVTIME('BATTERY')
       CALL CVTIME('BATTERY')
       RETURN
       END
       SUBROUTINE VA00003
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       Q(           1) = Q(           1) + 3.12500000E-02
       Q(           2) = Q(           2) + 6.25000000E-02
       Q(           3) = Q(           3) + 3.12500000E-02
       Q(           4) = Q(           4) + 6.25000000E-02
       Q(           5) = Q(           5) + 0.12500000
       Q(           6) = Q(           6) + 6.25000000E-02
       Q(           7) = Q(           7) + 3.12500000E-02
       Q(           8) = Q(           8) + 6.25000000E-02
       Q(           9) = Q(           9) + 3.12500000E-02
       CALL QVTIME('MAIN')
       CALL GVTIME('MAIN')
       CALL CVTIME('MAIN')
       RETURN
       END
       SUBROUTINE VA00011
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      CALL LOADQ_C0A1_1654263672
       CALL QVTIME('C0A1')
       CALL GVTIME('C0A1')
       CALL CVTIME('C0A1')
       RETURN
       END
       SUBROUTINE VA0_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::VA0_GLOBAL
       RETURN
       END
       SUBROUTINE VA0_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::VA0_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE VA00002
       CALL QVTIME('FRAME')
       CALL GVTIME('FRAME')
       CALL CVTIME('FRAME')
       RETURN
       END
       SUBROUTINE VA00004
       CALL QVTIME('NEG_X')
       CALL GVTIME('NEG_X')
       CALL CVTIME('NEG_X')
       RETURN
       END
       SUBROUTINE VA00005
       CALL QVTIME('NEG_Y')
       CALL GVTIME('NEG_Y')
       CALL CVTIME('NEG_Y')
       RETURN
       END
       SUBROUTINE VA00006
       CALL QVTIME('OUTER_BOARD')
       CALL GVTIME('OUTER_BOARD')
       CALL CVTIME('OUTER_BOARD')
       RETURN
       END
       SUBROUTINE VA00007
       CALL QVTIME('POS_X')
       CALL GVTIME('POS_X')
       CALL CVTIME('POS_X')
       RETURN
       END
       SUBROUTINE VA00008
       CALL QVTIME('POS_Y')
       CALL GVTIME('POS_Y')
       CALL CVTIME('POS_Y')
       RETURN
       END
       SUBROUTINE VA00009
       CALL QVTIME('SOLAR_PANEL')
       CALL GVTIME('SOLAR_PANEL')
       CALL CVTIME('SOLAR_PANEL')
       RETURN
       END
       SUBROUTINE VA00010
       CALL QVTIME('SPACE')
       CALL GVTIME('SPACE')
       CALL CVTIME('SPACE')
       RETURN
       END
       SUBROUTINE VA00012
       CALL QVTIME('C0A0')
       CALL GVTIME('C0A0')
       CALL CVTIME('C0A0')
       RETURN
       END
       SUBROUTINE VA00013
       CALL QVTIME('C0A2')
       CALL GVTIME('C0A2')
       CALL CVTIME('C0A2')
       RETURN
       END
       SUBROUTINE SLLOG1
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG1
       RETURN
       END
       SUBROUTINE SLLOG2
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG2
       RETURN
       END
       SUBROUTINE SLLOG0
       !DEC$ ATTRIBUTES DLLEXPORT::SLLOG0
       RETURN
       END
       SUBROUTINE SOLOUT
       !DEC$ ATTRIBUTES DLLEXPORT::SOLOUT
       RETURN
       END
       SUBROUTINE RELOUT
       !DEC$ ATTRIBUTES DLLEXPORT::RELOUT
       RETURN
       END
       SUBROUTINE FL1_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL1_GLOBAL
       RETURN
       END
       SUBROUTINE FL1_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL1_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE FL2_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL2_GLOBAL
       RETURN
       END
       SUBROUTINE FL2_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL2_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE FL0_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::FL0_GLOBAL
       RETURN
       END
       SUBROUTINE FL0_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::FL0_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE OPER
       !DEC$ ATTRIBUTES DLLEXPORT::OPER
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       CHARACTER*32 NBNAM( 999)
       CHARACTER*32 NFNAM( 999)
       CALL TDPREBL
       NBNAM(   1) = 'BATTERY                         '
       NBNAM(   2) = 'FRAME                           '
       NBNAM(   3) = 'MAIN                            '
       NBNAM(   4) = 'NEG_X                           '
       NBNAM(   5) = 'NEG_Y                           '
       NBNAM(   6) = 'OUTER_BOARD                     '
       NBNAM(   7) = 'POS_X                           '
       NBNAM(   8) = 'POS_Y                           '
       NBNAM(   9) = 'SOLAR_PANEL                     '
       NBNAM(  10) = 'SPACE                           '
       NBNAM(  11) = 'C0A1                            '
       NBNAM(  12) = 'C0A0                            '
       NBNAM(  13) = 'C0A2                            '
       CALL BUILD ('DEFAULT                         ',  13, NBNAM)
       CALL TDPOSTBL
       CALL TDHTR
       CALL STEADY
       CALL TDREL
       CALL TDPOSTSL
       RETURN
       END
       SUBROUTINE OUT_GLOBAL
       !DEC$ ATTRIBUTES DLLEXPORT::OUT_GLOBAL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       CALL TPRINT('ALL')
       IF(NSOL.GT.1)THEN
           IF(TIMEN.GE.TIMEND)THEN
               CALL SAVE('ALL',0)
           ELSE
               CALL SAVE('TR',0)
           ENDIF
       ELSEIF(LOOPCT.GT.0)THEN
           CALL SAVE('ALL',0)
       ENDIF
       RETURN
       END
       SUBROUTINE OUT_GLOBAL_INIT
       !DEC$ ATTRIBUTES DLLEXPORT::OUT_GLOBAL_INIT
       RETURN
       END
       SUBROUTINE OUT0001
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0001
       RETURN
       END
       SUBROUTINE OUT0002
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0002
       RETURN
       END
       SUBROUTINE OUT0003
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0003
       RETURN
       END
       SUBROUTINE OUT0004
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0004
       RETURN
       END
       SUBROUTINE OUT0005
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0005
       RETURN
       END
       SUBROUTINE OUT0006
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0006
       RETURN
       END
       SUBROUTINE OUT0007
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0007
       RETURN
       END
       SUBROUTINE OUT0008
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0008
       RETURN
       END
       SUBROUTINE OUT0009
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0009
       RETURN
       END
       SUBROUTINE OUT0010
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0010
       RETURN
       END
       SUBROUTINE OUT0011
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0011
       RETURN
       END
       SUBROUTINE OUT0012
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0012
       RETURN
       END
       SUBROUTINE OUT0013
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0013
       RETURN
       END
       SUBROUTINE TDHTR
       RETURN
       END
       SUBROUTINE TDREL
      RETURN
      END
      SUBROUTINE TDHTOT
      RETURN
      END
      SUBROUTINE TDHTRST
      RETURN
      END
      SUBROUTINE TDPREBL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE TDPOSTBL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE TDPOSTSL
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      SUBROUTINE BASEPLOT
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      RETURN
      END
      RECURSIVE SUBROUTINE LOADQ_C0A1_1654263672
      USE BINARY_READER_MOD
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      INTEGER NVAR__TD
      REAL, ALLOCATABLE ::  DATA__TD(:)
      DATA NVAR__TD /-1/
      SAVE NVAR__TD, DATA__TD
      IF( NVAR__TD  .LT.  0 ) THEN
          ALLOCATE (DATA__TD(6307))
          CALL LOAD_BINARY_SINGLET_ARRAYS(
     +        'C0A1.hra_bin'
     +    , DATA__TD)
          NVAR__TD = 1
      ENDIF
      DATA__TD(1 + 1113 + 1) =
     + A(3+1)
      CALL LOADQ('C0A1',1,22,
     +    DATA__TD(1+371),
     +    DATA__TD(1+742),
     +    DATA__TD(1),
     +    DATA__TD(1+1113),
     + A(1) )
      RETURN
      END
       SUBROUTINE FLOGI0(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI0
       RETURN
       END
       SUBROUTINE FLOGI1(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI1
       RETURN
       END
       SUBROUTINE FLOGI2(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::FLOGI2
       RETURN
       END
       SUBROUTINE VARBL0(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL0
       IF(MODNO .EQ. 1)   THEN
                CALL VA00001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA00002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA00003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA00004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA00005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA00006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA00007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA00008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA00009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA00010
       ELSE IF(MODNO .EQ.        11)   THEN
                CALL VA00011
       ELSE IF(MODNO .EQ.        12)   THEN
                CALL VA00012
       ELSE IF(MODNO .EQ.        13)   THEN
                CALL VA00013
       END IF
       RETURN
       END
       SUBROUTINE VARBL1(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL1
       IF(MODNO .EQ. 1)   THEN
                CALL VA10001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA10002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA10003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA10004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA10005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA10006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA10007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA10008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA10009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA10010
       ELSE IF(MODNO .EQ.        11)   THEN
                CALL VA10011
       ELSE IF(MODNO .EQ.        12)   THEN
                CALL VA10012
       ELSE IF(MODNO .EQ.        13)   THEN
                CALL VA10013
       END IF
       RETURN
       END
       SUBROUTINE VARBL2(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::VARBL2
       IF(MODNO .EQ. 1)   THEN
                CALL VA20001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL VA20002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL VA20003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL VA20004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL VA20005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL VA20006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL VA20007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL VA20008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL VA20009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL VA20010
       ELSE IF(MODNO .EQ.        11)   THEN
                CALL VA20011
       ELSE IF(MODNO .EQ.        12)   THEN
                CALL VA20012
       ELSE IF(MODNO .EQ.        13)   THEN
                CALL VA20013
       END IF
       RETURN
       END
       SUBROUTINE QVTEMP(MODNAM)
       !DEC$ ATTRIBUTES DLLEXPORT::QVTEMP
       USE MODNAM_MOD
       INTEGER SERCHN
       CHARACTER*(*) MODNAM
       INTEGER MODNO
       MODNO = SERCHN(MODNAM,MROOT,MLLINK,MRLINK,MACT,MNAMES)
       IF(MODNO .EQ. 1)   THEN
                CALL SOR0001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL SOR0002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL SOR0003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL SOR0004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL SOR0005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL SOR0006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL SOR0007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL SOR0008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL SOR0009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL SOR0010
       ELSE IF(MODNO .EQ.        11)   THEN
                CALL SOR0011
       ELSE IF(MODNO .EQ.        12)   THEN
                CALL SOR0012
       ELSE IF(MODNO .EQ.        13)   THEN
                CALL SOR0013
       END IF
       RETURN
       END
       SUBROUTINE OUTCAL(MODNO)
       INTEGER MODNO
       !DEC$ ATTRIBUTES DLLEXPORT::OUTCAL
       IF(MODNO .EQ. 1)   THEN
                CALL OUT0001
       ELSE IF(MODNO .EQ.         2)   THEN
                CALL OUT0002
       ELSE IF(MODNO .EQ.         3)   THEN
                CALL OUT0003
       ELSE IF(MODNO .EQ.         4)   THEN
                CALL OUT0004
       ELSE IF(MODNO .EQ.         5)   THEN
                CALL OUT0005
       ELSE IF(MODNO .EQ.         6)   THEN
                CALL OUT0006
       ELSE IF(MODNO .EQ.         7)   THEN
                CALL OUT0007
       ELSE IF(MODNO .EQ.         8)   THEN
                CALL OUT0008
       ELSE IF(MODNO .EQ.         9)   THEN
                CALL OUT0009
       ELSE IF(MODNO .EQ.        10)   THEN
                CALL OUT0010
       ELSE IF(MODNO .EQ.        11)   THEN
                CALL OUT0011
       ELSE IF(MODNO .EQ.        12)   THEN
                CALL OUT0012
       ELSE IF(MODNO .EQ.        13)   THEN
                CALL OUT0013
       END IF
       RETURN
       END
       SUBROUTINE FASTFS
       RETURN
       END
       SUBROUTINE FLUSET(D,A)
       REAL D
       REAL A(1)
       RETURN
       END
       LOGICAL FUNCTION RDOFLU(D,D2,I)
       REAL D,D2
       INTEGER I
       RDOFLU = .FALSE.
       RETURN
       END
       SUBROUTINE FLUSLV(D,D1,A,A1,*)
       REAL D,D1
       REAL A(1),A1(1)
       RETURN
       END
       SUBROUTINE PREFLO(A,A1,A2)
       REAL A(1),A1(1),A2(1)
       RETURN
       END
       SUBROUTINE FLUINF(A)
       REAL A(1)
       RETURN
       END
       SUBROUTINE UPDATF(A)
       REAL A(1)
       RETURN
       END
       SUBROUTINE FCNVRG(A,D,A2,A3)
       REAL A(1),A2(1),A3(1),D
       RETURN
       END
