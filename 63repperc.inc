
*=============================================================================
* File      : 09REPPERC.INC
* Author    : Hasan Dudu
* Version   : 1.0
* Date      : 24/02/2011 19:41:48
* Changed   :
* Changed by:
* Remarks   :
$ontext

$offtext
*=============================================================================

*============================   End Of File   ================================



*-Computing %-age changes
CPIXP(SIMCUR)$CPIX('BASE')
     = 100*(CPIX(SIMCUR)/CPIX('BASE') - 1);
DPIXP(SIMCUR)$DPIX('BASE')
     = 100*(DPIX(SIMCUR)/DPIX('BASE') - 1);
*-DMPS is zero for the base; DMPSXP is excluded
*-DTINS is zero for the base; DTINSXP is excluded
EGXP(RN,SIMCUR)$EGX(RN,'BASE')
     = 100*(EGX(RN,SIMCUR)/EGX(RN,'BASE') - 1);
EHXP(RR,H,SIMCUR)$EHX(RR,H,'BASE')
     = 100*(EHX(RR,H,SIMCUR)/EHX(RR,H,'BASE') - 1);
EXRXP(ROW,SIMCUR)$EXRX(ROW,'BASE')
     = 100*(EXRX(ROW,SIMCUR)/EXRX(ROW,'BASE') - 1);
TFSAVXP(SIMCUR)$TFSAVX('BASE')
     = 100*(TFSAVX(SIMCUR)/TFSAVX('BASE') - 1);
FSAVXP(ROW,SIMCUR)$FSAVX(ROW,'BASE')
     = 100*(FSAVX(ROW,SIMCUR)/FSAVX(ROW,'BASE') - 1);
GADJXP(SIMCUR)$GADJX('BASE')
     = 100*(GADJX(SIMCUR)/GADJX('BASE') - 1);
GOVSHRXP(SIMCUR)$GOVSHRX('BASE')
     = 100*(GOVSHRX(SIMCUR)/GOVSHRX('BASE') - 1);
GSAVXP(SIMCUR)$GSAVX('BASE')
     = 100*(GSAVX(SIMCUR)/GSAVX('BASE') - 1);
IADJXP(SIMCUR)$IADJX('BASE')
     = 100*(IADJX(SIMCUR)/IADJX('BASE') - 1);
INVSHRXP(SIMCUR)$INVSHRX('BASE')
     = 100*(INVSHRX(SIMCUR)/INVSHRX('BASE') - 1);
MPSXP(RR,INS,SIMCUR)$MPSX(RR,INS,'BASE')
     = 100*(MPSX(RR,INS,SIMCUR)/MPSX(RR,INS,'BASE') - 1);
*-MPSADJ is zero for the base; MPSADJXP is excluded
PAXP(RR,A,SIMCUR)$PAX(RR,A,'BASE')
     = 100*(PAX(RR,A,SIMCUR)/PAX(RR,A,'BASE') - 1);
PDDXP(RR,C,SIMCUR)$PDDX(RR,C,'BASE')
     = 100*(PDDX(RR,C,SIMCUR)/PDDX(RR,C,'BASE') - 1);
PDSXP(RR,C,SIMCUR)$PDSX(RR,C,'BASE')
     = 100*(PDSX(RR,C,SIMCUR)/PDSX(RR,C,'BASE') - 1);
PEXP(RR,C,ROW,SIMCUR)$PEX(RR,C,ROW,'BASE')
     = 100*(PEX(RR,C,ROW,SIMCUR)/PEX(RR,C,ROW,'BASE') - 1);
PINTAXP(RR,A,SIMCUR)$PINTAX(RR,A,'BASE')
     = 100*(PINTAX(RR,A,SIMCUR)/PINTAX(RR,A,'BASE') - 1);
PMXP(ROW,RR,C,SIMCUR)$PMX(ROW,RR,C,'BASE')
     = 100*(PMX(ROW,RR,C,SIMCUR)/PMX(ROW,RR,C,'BASE') - 1);
PQXP(RR,C,SIMCUR)$PQX(RR,C,'BASE')
     = 100*(PQX(RR,C,SIMCUR)/PQX(RR,C,'BASE') - 1);
PVAXP(RR,A,SIMCUR)$PVAX(RR,A,'BASE')
     = 100*(PVAX(RR,A,SIMCUR)/PVAX(RR,A,'BASE') - 1);
PWEXP(RR,C,ROW,SIMCUR)$PWEX(RR,C,ROW,'BASE')
     = 100*(PWEX(RR,C,ROW,SIMCUR)/PWEX(RR,C,ROW,'BASE') - 1);
PWMXP(ROW,RR,C,SIMCUR)$PWMX(ROW,RR,C,'BASE')
     = 100*(PWMX(ROW,RR,C,SIMCUR)/PWMX(ROW,RR,C,'BASE') - 1);
PXXP(RR,C,SIMCUR)$PXX(RR,C,'BASE')
     = 100*(PXX(RR,C,SIMCUR)/PXX(RR,C,'BASE') - 1);
PXACXP(RR1,A,RR,C,SIMCUR)$PXACX(RR1,A,RR,C,'BASE')
     = 100*(PXACX(RR1,A,RR,C,SIMCUR)/PXACX(RR1,A,RR,C,'BASE') - 1);
QAXP(RR1,A,SIMCUR)$QAX(RR1,A,'BASE')
     = 100*(QAX(RR1,A,SIMCUR)/QAX(RR1,A,'BASE') - 1);
QDXP(RR,C,SIMCUR)$QDX(RR,C,'BASE')
     = 100*(QDX(RR,C,SIMCUR)/QDX(RR,C,'BASE') - 1);
QEXP(RR,C,ROW,SIMCUR)$QEX(RR,C,ROW,'BASE')
     = 100*(QEX(RR,C,ROW,SIMCUR)/QEX(RR,C,ROW,'BASE') - 1);
QETXP(RR,C,SIMCUR)$QETX(RR,C,'BASE')
     = 100*(QETX(RR,C,SIMCUR)/QETX(RR,C,'BASE') - 1);
QFXP(RR3,F,RR1,A,SIMCUR)$QFX(RR3,F,RR1,A,'BASE')
     = 100*(QFX(RR3,F,RR1,A,SIMCUR)/QFX(RR3,F,RR1,A,'BASE') - 1);
QFUEXP(RR,FLAB,SIMCUR)$QFUEX(RR,FLAB,'BASE')
     = 100*(QFUEX(RR,FLAB,SIMCUR)/QFUEX(RR,FLAB,'BASE') - 1);
LABAVLXP(RR,H,SIMCUR)$LABAVLX(RR,H,'BASE')
     = 100*(LABAVLX(RR,H,SIMCUR)/LABAVLX(RR,H,'BASE') - 1);
QFSXP(RR3,F,SIMCUR)$QFSX(RR3,F,'BASE')
     = 100*(QFSX(RR3,F,SIMCUR)/QFSX(RR3,F,'BASE') - 1);
QGXP(RR,C,RN,SIMCUR)$QGX(RR,C,RN,'BASE')
     = 100*(QGX(RR,C,RN,SIMCUR)/QGX(RR,C,RN,'BASE') - 1);
QHXP(RR,C,RR2,H,SIMCUR)$QHX(RR,C,RR2,H,'BASE')
     = 100*(QHX(RR,C,RR2,H,SIMCUR)/QHX(RR,C,RR2,H,'BASE') - 1);
QHAXP(RR1,A,RR,C,RR2,H,SIMCUR)$QHAX(RR1,A,RR,C,RR2,H,'BASE')
     = 100*(QHAX(RR1,A,RR,C,RR2,H,SIMCUR)/QHAX(RR1,A,RR,C,RR2,H,'BASE') - 1);
QINTXP(RR,C,RR1,A,SIMCUR)$QINTX(RR,C,RR1,A,'BASE')
     = 100*(QINTX(RR,C,RR1,A,SIMCUR)/QINTX(RR,C,RR1,A,'BASE') - 1);
QINTAXP(RR1,A,SIMCUR)$QINTAX(RR1,A,'BASE')
     = 100*(QINTAX(RR1,A,SIMCUR)/QINTAX(RR1,A,'BASE') - 1);
QINVXP(RR,C,SIMCUR)$QINVX(RR,C,'BASE')
     = 100*(QINVX(RR,C,SIMCUR)/QINVX(RR,C,'BASE') - 1);
QMXP(ROW,RR,C,SIMCUR)$QMX(ROW,RR,C,'BASE')
     = 100*(QMX(ROW,RR,C,SIMCUR)/QMX(ROW,RR,C,'BASE') - 1);
QMTXP(RR,C,SIMCUR)$QMTX(RR,C,'BASE')
     = 100*(QMTX(RR,C,SIMCUR)/QMTX(RR,C,'BASE') - 1);
QQXP(RR,C,SIMCUR)$QQX(RR,C,'BASE')
     = 100*(QQX(RR,C,SIMCUR)/QQX(RR,C,'BASE') - 1);
QTXP(RR,C,SIMCUR)$QTX(RR,C,'BASE')
     = 100*(QTX(RR,C,SIMCUR)/QTX(RR,C,'BASE') - 1);
QVAXP(RR1,A,SIMCUR)$QVAX(RR1,A,'BASE')
     = 100*(QVAX(RR1,A,SIMCUR)/QVAX(RR1,A,'BASE') - 1);
QXXP(RR,C,SIMCUR)$QXX(RR,C,'BASE')
     = 100*(QXX(RR,C,SIMCUR)/QXX(RR,C,'BASE') - 1);
QXACXP(RR1,A,RR,C,SIMCUR)$QXACX(RR1,A,RR,C,'BASE')
     = 100*(QXACX(RR1,A,RR,C,SIMCUR)/QXACX(RR1,A,RR,C,'BASE') - 1);
TABSXP(SIMCUR)$TABSX('BASE')
     = 100*(TABSX(SIMCUR)/TABSX('BASE') - 1);
TINSXP(RR,INSD,RN,SIMCUR)$TINSX(RR,INSD,RN,'BASE')
     = 100*(TINSX(RR,INSD,RN,SIMCUR)/TINSX(RR,INSD,RN ,'BASE') - 1);
*-TINSADJ is zero for the base; TINSADJXP is excluded
TRIIXP(RR5,INS,RR,INS1,SIMCUR)$TRIIX(RR5,INS,RR,INS1,'BASE')
     = 100*(TRIIX(RR5,INS,RR,INS1,SIMCUR)/TRIIX(RR5,INS,RR,INS1,'BASE') - 1);
*-WALRAS is zero for the base; WALRASXP is excluded
WFXP(F,SIMCUR)$WFX(F,'BASE')
     = 100*(WFX(F,SIMCUR)/WFX(F,'BASE') - 1);
WFRXP(RR,F,SIMCUR)$WFRX(RR,F,'BASE')
     = 100*(WFRX(RR,F,SIMCUR)/WFRX(RR,F,'BASE') - 1);
WFDISTXP(RR2,F,RR1,A,SIMCUR)$WFDISTX(RR2,F,RR1,A,'BASE')
     = 100*(WFDISTX(RR2,F,RR1,A,SIMCUR)/WFDISTX(RR2,F,RR1,A,'BASE') - 1);
YFXP(RR2,F,SIMCUR)$YFX(RR2,F,'BASE')
     = 100*(YFX(RR2,F,SIMCUR)/YFX(RR2,F,'BASE') - 1);
YGXP(RN,SIMCUR)$YGX(RN,'BASE')
     = 100*(YGX(RN,SIMCUR)/YGX(RN,'BASE') - 1);
YIXP(RR5,INS,SIMCUR)$YIX(RR5,INS,'BASE')
     = 100*(YIX(RR5,INS,SIMCUR)/YIX(RR5,INS,'BASE') - 1);
YIFXP(RR,INSD,RR2,F,SIMCUR)$YIFX(RR,INSD,RR2,F,'BASE')
     = 100*(YIFX(RR,INSD,RR2,F,SIMCUR)/YIFX(RR,INSD,RR2,F,'BASE') - 1);

*--Computed activity-specific wage
WFAXP(RR2,F,RR1,A,SIMCUR)$WFAX(RR2,F,RR1,A,'BASE')
     = 100*(WFAX(RR2,F,RR1,A,SIMCUR)/WFAX(RR2,F,RR1,A,'BASE') - 1);

*--XD: 4/26/08
WPAYXP(RR,SIMCUR)$WPAYX(RR,'BASE')
     = 100*(WPAYX(RR,SIMCUR)/WPAYX(RR,'BASE') - 1);
*--------

NSAMBUDP(SAC,AC,IND3,AC1,SIMCUR)
 $NSAMBUD(SAC,AC,IND3,AC1,'BASE')
  = 100 *( NSAMBUD(SAC,AC,IND3,AC1,SIMCUR)/NSAMBUD(SAC,AC,IND3,AC1,'BASE') - 1);

*--------

 NGDPTAB1P(KGDP,IGDP,SIMCUR)$NGDPTAB1(KGDP,IGDP,'BASE')
  = 100*(NGDPTAB1(KGDP,IGDP,SIMCUR)/NGDPTAB1(KGDP,IGDP,'BASE') - 1);

 NGDPTAB2P(KGDP,AC,SIMCUR)$NGDPTAB2(KGDP,AC,'BASE')
  = 100*(NGDPTAB2(KGDP,AC,SIMCUR)/NGDPTAB2(KGDP,AC,'BASE') - 1);

*--------
CPIXP('BASE')   = CPIX('BASE');
DPIXP('BASE')   = DPIX('BASE');
*-DMPS is zero for the base; DMPSXP is excluded
*-DTINS is zero for the base; DTINSXP is excluded
EGXP(RN,'BASE')    = EGX(RN,'BASE');
EHXP(RR,H,'BASE')  = EHX(RR,H,'BASE');
EXRXP(ROW,'BASE')   = EXRX(ROW,'BASE');
FSAVXP(ROW,'BASE')  = FSAVX(ROW,'BASE');
TFSAVXP('BASE')  = TFSAVX('BASE');
GADJXP('BASE')  = GADJX('BASE');
GOVSHRXP('BASE') = GOVSHRX('BASE');
GSAVXP('BASE')  = GSAVX('BASE');
IADJXP('BASE')  = IADJX('BASE');
INVSHRXP('BASE') = INVSHRX('BASE');
MPSXP(RR5,INS,'BASE') = MPSX(RR5,INS,'BASE');
*-MPSADJ is zero for the base; MPSADJXP is excluded
PAXP(RR1,A,'BASE')  = PAX(RR1,A,'BASE');
PDDXP(RR,C,'BASE') = PDDX(RR,C,'BASE');
PDSXP(RR,C,'BASE') = PDSX(RR,C,'BASE');
PEXP(RR,C,ROW,'BASE')  = PEX(RR,C,ROW,'BASE');
PINTAXP(RR1,A,'BASE') = PINTAX(RR1,A,'BASE');
PMXP(ROW,RR,C,'BASE')  = PMX(ROW,RR,C,'BASE');
PQXP(RR,C,'BASE')  = PQX(RR,C,'BASE');
PVAXP(RR1,A,'BASE') = PVAX(RR1,A,'BASE');
PWEXP(RR,C,ROW,'BASE') = PWEX(RR,C,ROW,'BASE');
PWMXP(ROW,RR,C,'BASE') = PWMX(ROW,RR,C,'BASE');
PXXP(RR,C,'BASE')  = PXX(RR,C,'BASE');
PXACXP(RR1,A,RR,C,'BASE') = PXACX(RR1,A,RR,C,'BASE');
QAXP(RR1,A,'BASE')  = QAX(RR1,A,'BASE');
QDXP(RR,C,'BASE')  = QDX(RR,C,'BASE');
QEXP(RR,C,ROW,'BASE')  = QEX(RR,C,ROW,'BASE');
QETXP(RR,C,'BASE')  = QETX(RR,C,'BASE');
QFXP(RR2,F,RR1,A,'BASE')   = QFX(RR2,F,RR1,A,'BASE');
QFUEXP(RR,FLAB,'BASE')=QFUEX(RR,FLAB,'BASE');
LABAVLXP(RR,H,'BASE')=LABAVLX(RR,H,'BASE');
QFSXP(RR2,F,'BASE')    = QFSX(RR2,F,'BASE');
QGXP(RR,C,RN,'BASE')     = QGX(RR,C,RN,'BASE');
QHXP(RR,C,RR4,H,'BASE')   = QHX(RR,C,RR4,H,'BASE');
QHAXP(RR1,A,RR,C,RR4,H,'BASE') = QHAX(RR1,A,RR,C,RR4,H,'BASE');
QINTXP(RR,C,RR1,A,'BASE') = QINTX(RR,C,RR1,A,'BASE');
QINTAXP(RR1,A,'BASE') = QINTAX(RR1,A,'BASE');
QINVXP(RR,C,'BASE')   = QINVX(RR,C,'BASE');
QMXP(ROW,RR,C,'BASE')     = QMX(ROW,RR,C,'BASE');
QMTXP(RR,C,'BASE')     = QMTX(RR,C,'BASE');
QQXP(RR,C,'BASE')     = QQX(RR,C,'BASE');
QTXP(RR,C,'BASE')     = QTX(RR,C,'BASE');
QVAXP(RR1,A,'BASE')    = QVAX(RR1,A,'BASE');
QXXP(RR,C,'BASE')     = QXX(RR,C,'BASE');
QXACXP(RR1,A,RR,C,'BASE') = QXACX(RR1,A,RR,C,'BASE');
TABSXP('BASE')     = TABSX('BASE');
TINSXP(RR,INSD,RN,'BASE') = TINSX(RR,INSD,RN,'BASE');
*-TINSADJ is zero for the base; TINSADJXP is excluded
TRIIXP(RR5,INS,RR,INS1,'BASE') = TRIIX(RR5,INS,RR,INS1,'BASE');
*-WALRASXP not included.
WFXP(F,'BASE')     = WFX(F,'BASE');
WFRXP(RR,F,'BASE')     = WFRX(RR,F,'BASE');
WFDISTXP(RR2,F,RR1,A,'BASE') = WFDISTX(RR2,F,RR1,A,'BASE');
YFXP(RR,F,'BASE')     = YFX(RR,F,'BASE');
YGXP(RN,'BASE')       = YGX(RN,'BASE');
YIXP(RR,INS,'BASE')   = YIX(RR,INS,'BASE');
YIFXP(RR,INSD,RR2,F,'BASE') = YIFX(RR,INSD,RR2,F,'BASE');

*-Computed activity-specific wage
WFAXP(RR2,F,RR1,A,'BASE')  = WFAX(RR2,F,RR1,A,'BASE');

WPAYXP(RR,'BASE')  = WPAYX(RR,'BASE');

NSAMBUDP(SAC,AC,IND3,AC1,'BASE') = NSAMBUD(SAC,AC,IND3,AC1,'BASE');

NGDPTAB1P(KGDP,IGDP,'BASE')      = NGDPTAB1(KGDP,IGDP,'BASE');
NGDPTAB2P(KGDP,AC,'BASE')        = NGDPTAB2(KGDP,AC,'BASE');


*-#*#*#*#*# THE END OF REPPERC.INC #*#*#*#*