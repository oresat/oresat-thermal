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
      REAL, POINTER ::          CC_2284,CO_2284,CU_2284,DT_2284,IM_2284,IO_2284,KK_2284,OO_2284,P_2284,QC_2284,QO_2284,R_2284,S_2284
     +,VM_2284,VO_2284,V_2284
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
      CC_2284 => REGVAL(       1)
      CO_2284 => REGVAL(       2)
      CU_2284 => REGVAL(       3)
      DT_2284 => REGVAL(       4)
      IM_2284 => REGVAL(       5)
      IO_2284 => REGVAL(       6)
      KK_2284 => REGVAL(       7)
      OO_2284 => REGVAL(       8)
      P_2284 => REGVAL(       9)
      QC_2284 => REGVAL(      10)
      QO_2284 => REGVAL(      11)
      R_2284 => REGVAL(      12)
      S_2284 => REGVAL(      13)
      VM_2284 => REGVAL(      14)
      VO_2284 => REGVAL(      15)
      V_2284 => REGVAL(      16)
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
       SUBROUTINE SOR0014
        RETURN
        END
       SUBROUTINE VA10004
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       P__TD = 15.000000
       IF ( NSOL .LE. 1 ) THEN
           P__TD = P__TD * 0.50000000
       ELSE
           T__TD = 0.25000000 * T(         507)
     + + 0.25000000 * T(         560)
     + + 0.25000000 * T(         533)
     + + 0.25000000 * T(         540)
           O__TD = -5.0000000
           F__TD = -6.0000000
           IF ( T__TD .GT. O__TD .OR.
     + ( OO_2284 .EQ. 1 .AND. T__TD .GT. F__TD ) ) THEN
               IF ( OO_2284 .EQ. 0 ) CC_2284 = 1 + CC_2284
               OO_2284 = 1
           ELSE
               P__TD = 0.0000000
               OO_2284 = 0
           ENDIF
       ENDIF
       P_2284 = P__TD
       CALL TECUNITS( 'LENGTH' , 'm' )
       CALL TECUNITS( 'TPOWER' , 'W' )
       CALL TEC2( 'CFC_ASSEM' , NA(2046) , NA(2056) , NA(2051) , A(2041) , -3 ,
     + CU_2284 , V_2284 , P_2284 ,
     + 1.50000000E-03 , 77 , S_2284 , R_2284 , KK_2284 )
       C__TD = T(         507) * 0.25000000
     + + T(         560) * 0.25000000
     + + T(         533) * 0.25000000
     + + T(         540) * 0.25000000
       H__TD = T(         506) * 0.25000000
     + + T(         559) * 0.25000000
     + + T(         532) * 0.25000000
     + + T(         539) * 0.25000000
       CALL TECINFO( C__TD , H__TD , 1.50000000E-03 ,
     + S_2284 , R_2284 , KK_2284 ,
     + DT_2284 , IM_2284 , VM_2284 , QC_2284 ,
     + IO_2284 , VO_2284 , QO_2284 , CO_2284 )
       CALL QVTEMP('CFC_ASSEM')
       CALL GVTEMP('CFC_ASSEM')
       CALL CVTEMP('CFC_ASSEM')
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
       CALL QVTEMP('BACKPLANE_TO_FRAME')
       CALL GVTEMP('BACKPLANE_TO_FRAME')
       CALL CVTEMP('BACKPLANE_TO_FRAME')
       RETURN
       END
       SUBROUTINE VA10002
       CALL QVTEMP('BATTERY')
       CALL GVTEMP('BATTERY')
       CALL CVTEMP('BATTERY')
       RETURN
       END
       SUBROUTINE VA10003
       CALL QVTEMP('CARDS')
       CALL GVTEMP('CARDS')
       CALL CVTEMP('CARDS')
       RETURN
       END
       SUBROUTINE VA10005
       CALL QVTEMP('FORTY_PIN_CONNECTOR')
       CALL GVTEMP('FORTY_PIN_CONNECTOR')
       CALL CVTEMP('FORTY_PIN_CONNECTOR')
       RETURN
       END
       SUBROUTINE VA10006
       CALL QVTEMP('FRAMES')
       CALL GVTEMP('FRAMES')
       CALL CVTEMP('FRAMES')
       RETURN
       END
       SUBROUTINE VA10007
       CALL QVTEMP('MAIN')
       CALL GVTEMP('MAIN')
       CALL CVTEMP('MAIN')
       RETURN
       END
       SUBROUTINE VA10008
       CALL QVTEMP('MECHANICAL_CONNECTIONS')
       CALL GVTEMP('MECHANICAL_CONNECTIONS')
       CALL CVTEMP('MECHANICAL_CONNECTIONS')
       RETURN
       END
       SUBROUTINE VA10009
       CALL QVTEMP('SOLARCARDS_CONNECTOR')
       CALL GVTEMP('SOLARCARDS_CONNECTOR')
       CALL CVTEMP('SOLARCARDS_CONNECTOR')
       RETURN
       END
       SUBROUTINE VA10010
       CALL QVTEMP('SOLAR_CARDS')
       CALL GVTEMP('SOLAR_CARDS')
       CALL CVTEMP('SOLAR_CARDS')
       RETURN
       END
       SUBROUTINE VA10011
       CALL QVTEMP('SOLAR_PANELS')
       CALL GVTEMP('SOLAR_PANELS')
       CALL CVTEMP('SOLAR_PANELS')
       RETURN
       END
       SUBROUTINE VA10012
       CALL QVTEMP('SPACE')
       CALL GVTEMP('SPACE')
       CALL CVTEMP('SPACE')
       RETURN
       END
       SUBROUTINE VA10013
       CALL QVTEMP('C2A1')
       CALL GVTEMP('C2A1')
       CALL CVTEMP('C2A1')
       RETURN
       END
       SUBROUTINE VA10014
       CALL QVTEMP('C2A0')
       CALL GVTEMP('C2A0')
       CALL CVTEMP('C2A0')
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
       SUBROUTINE VA20014
       RETURN
       END
       SUBROUTINE VA00003
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       Q(         141) = Q(         141) + 2.89156300E-03
       Q(         142) = Q(         142) + 5.78312500E-03
       Q(         143) = Q(         143) + 5.78312500E-03
       Q(         144) = Q(         144) + 5.78312500E-03
       Q(         145) = Q(         145) + 2.89156300E-03
       Q(         146) = Q(         146) + 5.78312500E-03
       Q(         147) = Q(         147) + 1.15662500E-02
       Q(         148) = Q(         148) + 1.15662500E-02
       Q(         149) = Q(         149) + 1.15662500E-02
       Q(         150) = Q(         150) + 5.78312500E-03
       Q(         151) = Q(         151) + 5.78312500E-03
       Q(         152) = Q(         152) + 1.15662500E-02
       Q(         153) = Q(         153) + 1.15662500E-02
       Q(         154) = Q(         154) + 1.15662500E-02
       Q(         155) = Q(         155) + 5.78312500E-03
       Q(         156) = Q(         156) + 5.78312500E-03
       Q(         157) = Q(         157) + 1.15662500E-02
       Q(         158) = Q(         158) + 1.15662500E-02
       Q(         159) = Q(         159) + 1.15662500E-02
       Q(         160) = Q(         160) + 5.78312500E-03
       Q(         161) = Q(         161) + 2.89156300E-03
       Q(         162) = Q(         162) + 5.78312500E-03
       Q(         163) = Q(         163) + 5.78312500E-03
       Q(         164) = Q(         164) + 5.78312500E-03
       Q(         165) = Q(         165) + 2.89156300E-03
       Q(         267) = Q(         267) + 0.12500000
       Q(         269) = Q(         269) + 6.25000000E-02
       Q(         271) = Q(         271) + 6.25000000E-02
       Q(         273) = Q(         273) + 0.12500000
       Q(         275) = Q(         275) + 0.12500000
       Q(         277) = Q(         277) + 0.12500000
       Q(         279) = Q(         279) + 6.25000000E-02
       Q(         281) = Q(         281) + 6.25000000E-02
       Q(         283) = Q(         283) + 0.12500000
       Q(         285) = Q(         285) + 0.12500000
       Q(         287) = Q(         287) + 3.12500000E-02
       Q(         289) = Q(         289) + 0.12500000
       Q(         291) = Q(         291) + 6.25000000E-02
       Q(         293) = Q(         293) + 3.12500000E-02
       Q(         295) = Q(         295) + 6.25000000E-02
       Q(         297) = Q(         297) + 6.25000000E-02
       Q(         299) = Q(         299) + 6.25000000E-02
       Q(         301) = Q(         301) + 3.12500000E-02
       Q(         303) = Q(         303) + 6.25000000E-02
       Q(         305) = Q(         305) + 6.25000000E-02
       Q(         307) = Q(         307) + 6.25000000E-02
       Q(         309) = Q(         309) + 3.12500000E-02
       Q(         327) = Q(         327) + 6.25000000E-02
       Q(         369) = Q(         369) + 0.12500000
       Q(         411) = Q(         411) + 0.12500000
       IF ( NSOL .GT. 1 ) THEN
           CALL DA11MC( 43200.000 , TIMEM , A(61) , A(1021) , 1.0000000 , Q__TD )
           Q(         153) = Q(         153) + Q__TD * 1.0000000 * 3.0000000
           CALL DA11MC( 39472.000 , TIMEM , A(1) , A(31) , 1.0000000 , Q__TD )
           Q(         361) = Q(         361) + Q__TD * 1.0000000 * 6.0000000
           CALL DA11MC( 39472.000 , TIMEM , A(1981) , A(2011) , 1.0000000 , Q__TD )
           Q(         363) = Q(         363) + Q__TD * 1.0000000
       ELSE
           Q(         153) = Q(         153) + 0.11619210 * 3.0000000
           Q(         361) = Q(         361) + 0.10658190 * 6.0000000
           Q(         363) = Q(         363) + 0.10658190
       ENDIF
       CALL QVTIME('CARDS')
       CALL GVTIME('CARDS')
       CALL CVTIME('CARDS')
       RETURN
       END
       SUBROUTINE VA00004
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       Q(         456) = Q(         456) + 1.38888900E-02
       Q(         457) = Q(         457) + 1.38888900E-02
       Q(         458) = Q(         458) + 1.38888900E-02
       Q(         459) = Q(         459) + 1.38888900E-02
       Q(         460) = Q(         460) + 1.38888900E-02
       Q(         461) = Q(         461) + 6.94444400E-03
       Q(         462) = Q(         462) + 6.94444400E-03
       Q(         463) = Q(         463) + 1.38888900E-02
       Q(         464) = Q(         464) + 1.38888900E-02
       Q(         465) = Q(         465) + 1.38888900E-02
       Q(         466) = Q(         466) + 3.47222200E-03
       Q(         467) = Q(         467) + 1.38888900E-02
       Q(         468) = Q(         468) + 1.38888900E-02
       Q(         469) = Q(         469) + 6.94444400E-03
       Q(         470) = Q(         470) + 6.94444400E-03
       Q(         471) = Q(         471) + 1.38888900E-02
       Q(         472) = Q(         472) + 1.38888900E-02
       Q(         473) = Q(         473) + 1.38888900E-02
       Q(         474) = Q(         474) + 1.38888900E-02
       Q(         475) = Q(         475) + 1.38888900E-02
       Q(         476) = Q(         476) + 6.94444400E-03
       Q(         477) = Q(         477) + 6.94444400E-03
       Q(         478) = Q(         478) + 1.38888900E-02
       Q(         479) = Q(         479) + 1.38888900E-02
       Q(         480) = Q(         480) + 1.38888900E-02
       Q(         481) = Q(         481) + 1.38888900E-02
       Q(         482) = Q(         482) + 1.38888900E-02
       Q(         483) = Q(         483) + 6.94444400E-03
       Q(         484) = Q(         484) + 6.94444400E-03
       Q(         485) = Q(         485) + 1.38888900E-02
       Q(         486) = Q(         486) + 1.38888900E-02
       Q(         487) = Q(         487) + 1.38888900E-02
       Q(         488) = Q(         488) + 1.38888900E-02
       Q(         489) = Q(         489) + 1.38888900E-02
       Q(         490) = Q(         490) + 6.94444400E-03
       Q(         491) = Q(         491) + 3.47222200E-03
       Q(         492) = Q(         492) + 6.94444400E-03
       Q(         493) = Q(         493) + 6.94444400E-03
       Q(         494) = Q(         494) + 6.94444400E-03
       Q(         495) = Q(         495) + 6.94444400E-03
       Q(         496) = Q(         496) + 6.94444400E-03
       Q(         497) = Q(         497) + 3.47222200E-03
       Q(         498) = Q(         498) + 6.94444400E-03
       Q(         499) = Q(         499) + 3.47222200E-03
       Q(         500) = Q(         500) + 6.94444400E-03
       Q(         502) = Q(         502) + 2.50000000E-02
       Q(         535) = Q(         535) + 2.50000000E-02
       Q(         555) = Q(         555) + 2.50000000E-02
       Q(         561) = Q(         561) + 2.50000000E-02
       Q(         563) = Q(         563) + 6.94444400E-03
       Q(         564) = Q(         564) + 6.94444400E-03
       Q(         565) = Q(         565) + 6.94444400E-03
       Q(         566) = Q(         566) + 6.94444400E-03
       CALL QVTIME('CFC_ASSEM')
       CALL GVTIME('CFC_ASSEM')
       CALL CVTIME('CFC_ASSEM')
       RETURN
       END
       SUBROUTINE VA00013
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      CALL LOADQ_C2A1_1629423961
       CALL QVTIME('C2A1')
       CALL GVTIME('C2A1')
       CALL CVTIME('C2A1')
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
       SUBROUTINE VA00001
       CALL QVTIME('BACKPLANE_TO_FRAME')
       CALL GVTIME('BACKPLANE_TO_FRAME')
       CALL CVTIME('BACKPLANE_TO_FRAME')
       RETURN
       END
       SUBROUTINE VA00002
       CALL QVTIME('BATTERY')
       CALL GVTIME('BATTERY')
       CALL CVTIME('BATTERY')
       RETURN
       END
       SUBROUTINE VA00005
       CALL QVTIME('FORTY_PIN_CONNECTOR')
       CALL GVTIME('FORTY_PIN_CONNECTOR')
       CALL CVTIME('FORTY_PIN_CONNECTOR')
       RETURN
       END
       SUBROUTINE VA00006
       CALL QVTIME('FRAMES')
       CALL GVTIME('FRAMES')
       CALL CVTIME('FRAMES')
       RETURN
       END
       SUBROUTINE VA00007
       CALL QVTIME('MAIN')
       CALL GVTIME('MAIN')
       CALL CVTIME('MAIN')
       RETURN
       END
       SUBROUTINE VA00008
       CALL QVTIME('MECHANICAL_CONNECTIONS')
       CALL GVTIME('MECHANICAL_CONNECTIONS')
       CALL CVTIME('MECHANICAL_CONNECTIONS')
       RETURN
       END
       SUBROUTINE VA00009
       CALL QVTIME('SOLARCARDS_CONNECTOR')
       CALL GVTIME('SOLARCARDS_CONNECTOR')
       CALL CVTIME('SOLARCARDS_CONNECTOR')
       RETURN
       END
       SUBROUTINE VA00010
       CALL QVTIME('SOLAR_CARDS')
       CALL GVTIME('SOLAR_CARDS')
       CALL CVTIME('SOLAR_CARDS')
       RETURN
       END
       SUBROUTINE VA00011
       CALL QVTIME('SOLAR_PANELS')
       CALL GVTIME('SOLAR_PANELS')
       CALL CVTIME('SOLAR_PANELS')
       RETURN
       END
       SUBROUTINE VA00012
       CALL QVTIME('SPACE')
       CALL GVTIME('SPACE')
       CALL CVTIME('SPACE')
       RETURN
       END
       SUBROUTINE VA00014
       CALL QVTIME('C2A0')
       CALL GVTIME('C2A0')
       CALL CVTIME('C2A0')
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
       NBNAM(   1) = 'BACKPLANE_TO_FRAME              '
       NBNAM(   2) = 'BATTERY                         '
       NBNAM(   3) = 'CARDS                           '
       NBNAM(   4) = 'CFC_ASSEM                       '
       NBNAM(   5) = 'FORTY_PIN_CONNECTOR             '
       NBNAM(   6) = 'FRAMES                          '
       NBNAM(   7) = 'MAIN                            '
       NBNAM(   8) = 'MECHANICAL_CONNECTIONS          '
       NBNAM(   9) = 'SOLARCARDS_CONNECTOR            '
       NBNAM(  10) = 'SOLAR_CARDS                     '
       NBNAM(  11) = 'SOLAR_PANELS                    '
       NBNAM(  12) = 'SPACE                           '
       NBNAM(  13) = 'C2A1                            '
       NBNAM(  14) = 'C2A0                            '
       CALL BUILD ('DEFAULT                         ',  14, NBNAM)
       CALL TDPOSTBL
       CALL TRANSIENT
       CALL TDHTOT
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
               CALL SAVE('T',0)
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
       SUBROUTINE OUT0014
       !DEC$ ATTRIBUTES DLLEXPORT::OUT0014
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
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
       CC_2284 = 0.0000000
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
      RECURSIVE SUBROUTINE LOADQ_C2A1_1629423961
      USE BINARY_READER_MOD
       use sf_interfaces
       USE USERREGISTER_MOD
       USE USERCOMMONDATA
      INTEGER NVAR__TD
      REAL, ALLOCATABLE ::  DATA__TD(:)
      DATA NVAR__TD /-1/
      SAVE NVAR__TD, DATA__TD
      IF( NVAR__TD  .LT.  0 ) THEN
          ALLOCATE (DATA__TD(22209))
          CALL LOAD_BINARY_SINGLET_ARRAYS(
     +        'C2A1.hra_bin'
     +    , DATA__TD)
          NVAR__TD = 1
      ENDIF
      DATA__TD(1 + 5073 + 1) =
     + A(2063+1)
      CALL LOADQ('C2A1',1,115,
     +    DATA__TD(1+1691),
     +    DATA__TD(1+3382),
     +    DATA__TD(1),
     +    DATA__TD(1+5073),
     + A(2061) )
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
       ELSE IF(MODNO .EQ.        14)   THEN
                CALL VA00014
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
       ELSE IF(MODNO .EQ.        14)   THEN
                CALL VA10014
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
       ELSE IF(MODNO .EQ.        14)   THEN
                CALL VA20014
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
       ELSE IF(MODNO .EQ.        14)   THEN
                CALL SOR0014
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
       ELSE IF(MODNO .EQ.        14)   THEN
                CALL OUT0014
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
