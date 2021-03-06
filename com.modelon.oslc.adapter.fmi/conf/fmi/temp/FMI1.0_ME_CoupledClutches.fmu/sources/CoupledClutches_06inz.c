/* Initialization */
/* Simulation code for CoupledClutches generated by the OpenModelica Compiler 1.9.2+dev (r24999). */

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_xml.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <assert.h>
#include <string.h>

#include "CoupledClutches_functions.h"
#include "CoupledClutches_model.h"
#include "CoupledClutches_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#define threadData data->threadData

#include "CoupledClutches_11mix.h"
#include "CoupledClutches_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 1
 type: SIMPLE_ASSIGN
 J1._phi = 0.0
 */
void CoupledClutches_eqFunction_1(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  $PJ1$Pphi = 0.0;
  TRACE_POP
}
/*
 equation index: 2
 type: SIMPLE_ASSIGN
 J2._phi = 0.0
 */
void CoupledClutches_eqFunction_2(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  $PJ2$Pphi = 0.0;
  TRACE_POP
}
/*
 equation index: 3
 type: SIMPLE_ASSIGN
 clutch1._phi_rel = J2.phi - J1.phi
 */
void CoupledClutches_eqFunction_3(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  $Pclutch1$Pphi_rel = ($PJ2$Pphi - $PJ1$Pphi);
  TRACE_POP
}
/*
 equation index: 4
 type: SIMPLE_ASSIGN
 J3._phi = 0.0
 */
void CoupledClutches_eqFunction_4(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  $PJ3$Pphi = 0.0;
  TRACE_POP
}
/*
 equation index: 5
 type: SIMPLE_ASSIGN
 clutch2._phi_rel = J3.phi - J2.phi
 */
void CoupledClutches_eqFunction_5(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  $Pclutch2$Pphi_rel = ($PJ3$Pphi - $PJ2$Pphi);
  TRACE_POP
}
/*
 equation index: 6
 type: SIMPLE_ASSIGN
 J4._phi = 0.0
 */
void CoupledClutches_eqFunction_6(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  $PJ4$Pphi = 0.0;
  TRACE_POP
}
/*
 equation index: 7
 type: SIMPLE_ASSIGN
 clutch3._phi_rel = J4.phi - J3.phi
 */
void CoupledClutches_eqFunction_7(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  $Pclutch3$Pphi_rel = ($PJ4$Pphi - $PJ3$Pphi);
  TRACE_POP
}
/*
 equation index: 8
 type: SIMPLE_ASSIGN
 J4._flange_b._tau = 0.0
 */
void CoupledClutches_eqFunction_8(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  $PJ4$Pflange_b$Ptau = 0.0;
  TRACE_POP
}
/*
 equation index: 9
 type: SIMPLE_ASSIGN
 sin2._freqHz = freqHz
 */
void CoupledClutches_eqFunction_9(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  $Psin2$PfreqHz = $PfreqHz;
  TRACE_POP
}
/*
 equation index: 10
 type: SIMPLE_ASSIGN
 step1._startTime = T2
 */
void CoupledClutches_eqFunction_10(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  $Pstep1$PstartTime = $PT2;
  TRACE_POP
}
/*
 equation index: 11
 type: SIMPLE_ASSIGN
 clutch3._mue0 = Modelica.Math.tempInterpol1(0.0, {{clutch3.mue_pos[1,1], clutch3.mue_pos[1,2]}}, 2)
 */
void CoupledClutches_eqFunction_11(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  real_array tmp0;
  /* -- start: matrix[1,2] -- */
  alloc_real_array(&tmp0, 2, 1, 2);
  put_real_matrix_element($Pclutch3$Pmue_pos$lB1$c1$rB, 0, 0, &tmp0);
  put_real_matrix_element($Pclutch3$Pmue_pos$lB1$c2$rB, 0, 1, &tmp0);
  /* -- end: matrix[1,2] -- */
  $Pclutch3$Pmue0 = omc_Modelica_Math_tempInterpol1(threadData, 0.0, tmp0, (modelica_integer) 2);
  TRACE_POP
}
/*
 equation index: 12
 type: SIMPLE_ASSIGN
 clutch2._mue0 = Modelica.Math.tempInterpol1(0.0, {{clutch2.mue_pos[1,1], clutch2.mue_pos[1,2]}}, 2)
 */
void CoupledClutches_eqFunction_12(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  real_array tmp1;
  /* -- start: matrix[1,2] -- */
  alloc_real_array(&tmp1, 2, 1, 2);
  put_real_matrix_element($Pclutch2$Pmue_pos$lB1$c1$rB, 0, 0, &tmp1);
  put_real_matrix_element($Pclutch2$Pmue_pos$lB1$c2$rB, 0, 1, &tmp1);
  /* -- end: matrix[1,2] -- */
  $Pclutch2$Pmue0 = omc_Modelica_Math_tempInterpol1(threadData, 0.0, tmp1, (modelica_integer) 2);
  TRACE_POP
}
/*
 equation index: 13
 type: SIMPLE_ASSIGN
 clutch1._mue0 = Modelica.Math.tempInterpol1(0.0, {{clutch1.mue_pos[1,1], clutch1.mue_pos[1,2]}}, 2)
 */
void CoupledClutches_eqFunction_13(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  real_array tmp2;
  /* -- start: matrix[1,2] -- */
  alloc_real_array(&tmp2, 2, 1, 2);
  put_real_matrix_element($Pclutch1$Pmue_pos$lB1$c1$rB, 0, 0, &tmp2);
  put_real_matrix_element($Pclutch1$Pmue_pos$lB1$c2$rB, 0, 1, &tmp2);
  /* -- end: matrix[1,2] -- */
  $Pclutch1$Pmue0 = omc_Modelica_Math_tempInterpol1(threadData, 0.0, tmp2, (modelica_integer) 2);
  TRACE_POP
}
/*
 equation index: 14
 type: SIMPLE_ASSIGN
 sin1._y = sin1.offset + (if time < sin1.startTime then 0.0 else sin1.amplitude * sin(6.283185307179586 * sin1.freqHz * (time - sin1.startTime) + sin1.phase))
 */
void CoupledClutches_eqFunction_14(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_boolean tmp3;
  RELATIONHYSTERESIS(tmp3, time, $Psin1$PstartTime, 0, Less);
  $Psin1$Py = ($Psin1$Poffset + (tmp3?0.0:($Psin1$Pamplitude * sin(((6.283185307179586 * ($Psin1$PfreqHz * (time - $Psin1$PstartTime))) + $Psin1$Pphase)))));
  TRACE_POP
}
/*
 equation index: 15
 type: SIMPLE_ASSIGN
 clutch3._fn = clutch3.fn_max * step2
 */
void CoupledClutches_eqFunction_15(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  $Pclutch3$Pfn = ($Pclutch3$Pfn_max * $Pstep2);
  TRACE_POP
}
/*
 equation index: 16
 type: SIMPLE_ASSIGN
 clutch3._free = clutch3.fn <= 0.0
 */
void CoupledClutches_eqFunction_16(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  modelica_boolean tmp4;
  RELATIONHYSTERESIS(tmp4, $Pclutch3$Pfn, 0.0, 1, LessEq);
  $Pclutch3$Pfree = tmp4;
  TRACE_POP
}
/*
 equation index: 17
 type: SIMPLE_ASSIGN
 clutch3._tau0 = clutch3.mue0 * clutch3.cgeo * clutch3.fn
 */
void CoupledClutches_eqFunction_17(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  $Pclutch3$Ptau0 = ($Pclutch3$Pmue0 * ($Pclutch3$Pcgeo * $Pclutch3$Pfn));
  TRACE_POP
}
/*
 equation index: 18
 type: SIMPLE_ASSIGN
 clutch3._tau0_max = clutch3.peak * clutch3.tau0
 */
void CoupledClutches_eqFunction_18(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  $Pclutch3$Ptau0_max = ($Pclutch3$Ppeak * $Pclutch3$Ptau0);
  TRACE_POP
}
/*
 equation index: 19
 type: SIMPLE_ASSIGN
 clutch1._f_normalized = sin2.offset + (if time < sin2.startTime then 0.0 else sin2.amplitude * sin(6.283185307179586 * sin2.freqHz * (time - sin2.startTime) + sin2.phase))
 */
void CoupledClutches_eqFunction_19(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, time, $Psin2$PstartTime, 2, Less);
  $Pclutch1$Pf_normalized = ($Psin2$Poffset + (tmp5?0.0:($Psin2$Pamplitude * sin(((6.283185307179586 * ($Psin2$PfreqHz * (time - $Psin2$PstartTime))) + $Psin2$Pphase)))));
  TRACE_POP
}
/*
 equation index: 20
 type: SIMPLE_ASSIGN
 clutch1._fn = clutch1.fn_max * clutch1.f_normalized
 */
void CoupledClutches_eqFunction_20(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  $Pclutch1$Pfn = ($Pclutch1$Pfn_max * $Pclutch1$Pf_normalized);
  TRACE_POP
}
/*
 equation index: 21
 type: SIMPLE_ASSIGN
 clutch1._tau0 = clutch1.mue0 * clutch1.cgeo * clutch1.fn
 */
void CoupledClutches_eqFunction_21(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  $Pclutch1$Ptau0 = ($Pclutch1$Pmue0 * ($Pclutch1$Pcgeo * $Pclutch1$Pfn));
  TRACE_POP
}
/*
 equation index: 22
 type: SIMPLE_ASSIGN
 clutch1._tau0_max = clutch1.peak * clutch1.tau0
 */
void CoupledClutches_eqFunction_22(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  $Pclutch1$Ptau0_max = ($Pclutch1$Ppeak * $Pclutch1$Ptau0);
  TRACE_POP
}
/*
 equation index: 23
 type: SIMPLE_ASSIGN
 clutch1._free = clutch1.fn <= 0.0
 */
void CoupledClutches_eqFunction_23(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp6;
  RELATIONHYSTERESIS(tmp6, $Pclutch1$Pfn, 0.0, 3, LessEq);
  $Pclutch1$Pfree = tmp6;
  TRACE_POP
}
/*
 equation index: 24
 type: SIMPLE_ASSIGN
 clutch2._f_normalized = step1.offset + (if time < step1.startTime then 0.0 else step1.height)
 */
void CoupledClutches_eqFunction_24(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  modelica_boolean tmp7;
  RELATIONHYSTERESIS(tmp7, time, $Pstep1$PstartTime, 4, Less);
  $Pclutch2$Pf_normalized = ($Pstep1$Poffset + (tmp7?0.0:$Pstep1$Pheight));
  TRACE_POP
}
/*
 equation index: 25
 type: SIMPLE_ASSIGN
 clutch2._fn = clutch2.fn_max * clutch2.f_normalized
 */
void CoupledClutches_eqFunction_25(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  $Pclutch2$Pfn = ($Pclutch2$Pfn_max * $Pclutch2$Pf_normalized);
  TRACE_POP
}
/*
 equation index: 26
 type: SIMPLE_ASSIGN
 clutch2._tau0 = clutch2.mue0 * clutch2.cgeo * clutch2.fn
 */
void CoupledClutches_eqFunction_26(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  $Pclutch2$Ptau0 = ($Pclutch2$Pmue0 * ($Pclutch2$Pcgeo * $Pclutch2$Pfn));
  TRACE_POP
}
/*
 equation index: 27
 type: SIMPLE_ASSIGN
 clutch2._tau0_max = clutch2.peak * clutch2.tau0
 */
void CoupledClutches_eqFunction_27(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  $Pclutch2$Ptau0_max = ($Pclutch2$Ppeak * $Pclutch2$Ptau0);
  TRACE_POP
}
/*
 equation index: 28
 type: SIMPLE_ASSIGN
 clutch2._free = clutch2.fn <= 0.0
 */
void CoupledClutches_eqFunction_28(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp8;
  RELATIONHYSTERESIS(tmp8, $Pclutch2$Pfn, 0.0, 5, LessEq);
  $Pclutch2$Pfree = tmp8;
  TRACE_POP
}
/*
 equation index: 29
 type: SIMPLE_ASSIGN
 $PRE._clutch1._startForward = false
 */
void CoupledClutches_eqFunction_29(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  $P$PRE$Pclutch1$PstartForward = 0;
  TRACE_POP
}
/*
 equation index: 30
 type: SIMPLE_ASSIGN
 $PRE._clutch1._startBackward = false
 */
void CoupledClutches_eqFunction_30(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  $P$PRE$Pclutch1$PstartBackward = 0;
  TRACE_POP
}
/*
 equation index: 31
 type: SIMPLE_ASSIGN
 $PRE._clutch1._mode = 3
 */
void CoupledClutches_eqFunction_31(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  $P$PRE$Pclutch1$Pmode = (modelica_integer) 3;
  TRACE_POP
}
/*
 equation index: 32
 type: SIMPLE_ASSIGN
 $PRE._clutch2._startForward = false
 */
void CoupledClutches_eqFunction_32(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  $P$PRE$Pclutch2$PstartForward = 0;
  TRACE_POP
}
/*
 equation index: 33
 type: SIMPLE_ASSIGN
 $PRE._clutch2._startBackward = false
 */
void CoupledClutches_eqFunction_33(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  $P$PRE$Pclutch2$PstartBackward = 0;
  TRACE_POP
}
/*
 equation index: 34
 type: SIMPLE_ASSIGN
 $PRE._clutch2._mode = 3
 */
void CoupledClutches_eqFunction_34(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  $P$PRE$Pclutch2$Pmode = (modelica_integer) 3;
  TRACE_POP
}
/*
 equation index: 35
 type: SIMPLE_ASSIGN
 J3._w = 0.0
 */
void CoupledClutches_eqFunction_35(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  $PJ3$Pw = 0.0;
  TRACE_POP
}
/*
 equation index: 36
 type: SIMPLE_ASSIGN
 der(J3._phi) = J3.w
 */
void CoupledClutches_eqFunction_36(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  $P$DER$PJ3$Pphi = $PJ3$Pw;
  TRACE_POP
}
/*
 equation index: 37
 type: SIMPLE_ASSIGN
 J3_w1 = J3.w
 */
void CoupledClutches_eqFunction_37(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  $PJ3_w1 = $PJ3$Pw;
  TRACE_POP
}
/*
 equation index: 38
 type: SIMPLE_ASSIGN
 $PRE._clutch3._startForward = false
 */
void CoupledClutches_eqFunction_38(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  $P$PRE$Pclutch3$PstartForward = 0;
  TRACE_POP
}
/*
 equation index: 39
 type: SIMPLE_ASSIGN
 $PRE._clutch3._startBackward = false
 */
void CoupledClutches_eqFunction_39(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  $P$PRE$Pclutch3$PstartBackward = 0;
  TRACE_POP
}
/*
 equation index: 40
 type: SIMPLE_ASSIGN
 $PRE._clutch3._mode = 3
 */
void CoupledClutches_eqFunction_40(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  $P$PRE$Pclutch3$Pmode = (modelica_integer) 3;
  TRACE_POP
}
/*
 equation index: 41
 type: SIMPLE_ASSIGN
 J1_w1 = 10.0
 */
void CoupledClutches_eqFunction_41(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  $PJ1_w1 = 10.0;
  TRACE_POP
}
/*
 equation index: 42
 type: SIMPLE_ASSIGN
 J2_w1 = 0.0
 */
void CoupledClutches_eqFunction_42(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  $PJ2_w1 = 0.0;
  TRACE_POP
}
/*
 equation index: 43
 type: SIMPLE_ASSIGN
 clutch1._w_rel = J2_w1 - J1_w1
 */
void CoupledClutches_eqFunction_43(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  $Pclutch1$Pw_rel = ($PJ2_w1 - $PJ1_w1);
  TRACE_POP
}
/*
 equation index: 44
 type: SIMPLE_ASSIGN
 der(clutch1._phi_rel) = clutch1.w_rel
 */
void CoupledClutches_eqFunction_44(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  $P$DER$Pclutch1$Pphi_rel = $Pclutch1$Pw_rel;
  TRACE_POP
}
/*
 equation index: 45
 type: SIMPLE_ASSIGN
 clutch2._w_rel = J3.w - J2_w1
 */
void CoupledClutches_eqFunction_45(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  $Pclutch2$Pw_rel = ($PJ3$Pw - $PJ2_w1);
  TRACE_POP
}
/*
 equation index: 46
 type: SIMPLE_ASSIGN
 der(clutch2._phi_rel) = clutch2.w_rel
 */
void CoupledClutches_eqFunction_46(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  $P$DER$Pclutch2$Pphi_rel = $Pclutch2$Pw_rel;
  TRACE_POP
}
/*
 equation index: 47
 type: SIMPLE_ASSIGN
 J4_w1 = 0.0
 */
void CoupledClutches_eqFunction_47(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  $PJ4_w1 = 0.0;
  TRACE_POP
}
/*
 equation index: 48
 type: SIMPLE_ASSIGN
 clutch3._w_rel = J4_w1 - J3.w
 */
void CoupledClutches_eqFunction_48(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  $Pclutch3$Pw_rel = ($PJ4_w1 - $PJ3$Pw);
  TRACE_POP
}
void CoupledClutches_eqFunction_49(DATA*);
void CoupledClutches_eqFunction_50(DATA*);
void CoupledClutches_eqFunction_51(DATA*);
void CoupledClutches_eqFunction_52(DATA*);
void CoupledClutches_eqFunction_53(DATA*);
void CoupledClutches_eqFunction_54(DATA*);
void CoupledClutches_eqFunction_55(DATA*);
void CoupledClutches_eqFunction_56(DATA*);
void CoupledClutches_eqFunction_57(DATA*);
void CoupledClutches_eqFunction_58(DATA*);
void CoupledClutches_eqFunction_59(DATA*);
void CoupledClutches_eqFunction_60(DATA*);
void CoupledClutches_eqFunction_61(DATA*);
void CoupledClutches_eqFunction_62(DATA*);
void CoupledClutches_eqFunction_63(DATA*);
void CoupledClutches_eqFunction_64(DATA*);
void CoupledClutches_eqFunction_65(DATA*);
void CoupledClutches_eqFunction_66(DATA*);
void CoupledClutches_eqFunction_70(DATA*);
void CoupledClutches_eqFunction_69(DATA*);
void CoupledClutches_eqFunction_68(DATA*);
void CoupledClutches_eqFunction_67(DATA*);
/*
 equation index: 71
 indexNonlinear: 0
 type: NONLINEAR
 
 vars: {J2._a, clutch2._sa, clutch3._sa, clutch1._sa}
 eqns: {49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 70, 69, 68, 67}
 */
void CoupledClutches_eqFunction_71(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  int retValue;
  /* extrapolate data */
  data->simulationInfo.nonlinearSystemData[0].nlsx[0] = $PJ2$Pa;
  data->simulationInfo.nonlinearSystemData[0].nlsxOld[0] = _$PJ2$Pa(1) /*old1*/;
  data->simulationInfo.nonlinearSystemData[0].nlsxExtrapolation[0] = extraPolate(data, _$PJ2$Pa(1) /*old1*/, _$PJ2$Pa(2) /*old2*/,$P$ATTRIBUTE$PJ2$Pa.min, $P$ATTRIBUTE$PJ2$Pa.max);
  data->simulationInfo.nonlinearSystemData[0].nlsx[1] = $Pclutch2$Psa;
  data->simulationInfo.nonlinearSystemData[0].nlsxOld[1] = _$Pclutch2$Psa(1) /*old1*/;
  data->simulationInfo.nonlinearSystemData[0].nlsxExtrapolation[1] = extraPolate(data, _$Pclutch2$Psa(1) /*old1*/, _$Pclutch2$Psa(2) /*old2*/,$P$ATTRIBUTE$Pclutch2$Psa.min, $P$ATTRIBUTE$Pclutch2$Psa.max);
  data->simulationInfo.nonlinearSystemData[0].nlsx[2] = $Pclutch3$Psa;
  data->simulationInfo.nonlinearSystemData[0].nlsxOld[2] = _$Pclutch3$Psa(1) /*old1*/;
  data->simulationInfo.nonlinearSystemData[0].nlsxExtrapolation[2] = extraPolate(data, _$Pclutch3$Psa(1) /*old1*/, _$Pclutch3$Psa(2) /*old2*/,$P$ATTRIBUTE$Pclutch3$Psa.min, $P$ATTRIBUTE$Pclutch3$Psa.max);
  data->simulationInfo.nonlinearSystemData[0].nlsx[3] = $Pclutch1$Psa;
  data->simulationInfo.nonlinearSystemData[0].nlsxOld[3] = _$Pclutch1$Psa(1) /*old1*/;
  data->simulationInfo.nonlinearSystemData[0].nlsxExtrapolation[3] = extraPolate(data, _$Pclutch1$Psa(1) /*old1*/, _$Pclutch1$Psa(2) /*old2*/,$P$ATTRIBUTE$Pclutch1$Psa.min, $P$ATTRIBUTE$Pclutch1$Psa.max);
  retValue = solve_nonlinear_system(data, 0);
  /* check if solution process was sucessful */
  if (retValue > 0){
    const int indexes[2] = {1,71};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 71 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", time);
  }
  /* write solution */
  $PJ2$Pa = data->simulationInfo.nonlinearSystemData[0].nlsx[0];
  $Pclutch2$Psa = data->simulationInfo.nonlinearSystemData[0].nlsx[1];
  $Pclutch3$Psa = data->simulationInfo.nonlinearSystemData[0].nlsx[2];
  $Pclutch1$Psa = data->simulationInfo.nonlinearSystemData[0].nlsx[3];
  TRACE_POP
}
/*
 equation index: 72
 type: SIMPLE_ASSIGN
 clutch3._lossPower = clutch3.tau * clutch3.w_rel
 */
void CoupledClutches_eqFunction_72(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  $Pclutch3$PlossPower = ($Pclutch3$Ptau * $Pclutch3$Pw_rel);
  TRACE_POP
}
/*
 equation index: 73
 type: SIMPLE_ASSIGN
 clutch2._lossPower = clutch2.tau * clutch2.w_rel
 */
void CoupledClutches_eqFunction_73(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  $Pclutch2$PlossPower = ($Pclutch2$Ptau * $Pclutch2$Pw_rel);
  TRACE_POP
}
/*
 equation index: 74
 type: SIMPLE_ASSIGN
 clutch1._lossPower = clutch1.tau * clutch1.w_rel
 */
void CoupledClutches_eqFunction_74(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  $Pclutch1$PlossPower = ($Pclutch1$Ptau * $Pclutch1$Pw_rel);
  TRACE_POP
}
/*
 equation index: 75
 type: SIMPLE_ASSIGN
 clutch1._mode = if clutch1.free then 2 else if ($PRE.clutch1.mode == 1 or $PRE.clutch1.mode == 2 or clutch1.startForward) and clutch1.w_rel > 0.0 then 1 else if ($PRE.clutch1.mode == -1 or $PRE.clutch1.mode == 2 or clutch1.startBackward) and clutch1.w_rel < 0.0 then -1 else 0
 */
void CoupledClutches_eqFunction_75(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_boolean tmp101;
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  modelica_integer tmp106;
  modelica_boolean tmp107;
  modelica_integer tmp108;
  tmp107 = (modelica_boolean)$Pclutch1$Pfree;
  if(tmp107)
  {
    tmp108 = (modelica_integer) 2;
  }
  else
  {
    RELATIONHYSTERESIS(tmp101, $Pclutch1$Pw_rel, 0.0, 13, Greater);
    tmp105 = (modelica_boolean)(((((modelica_integer)$P$PRE$Pclutch1$Pmode == (modelica_integer) 1) || ((modelica_integer)$P$PRE$Pclutch1$Pmode == (modelica_integer) 2)) || $Pclutch1$PstartForward) && tmp101);
    if(tmp105)
    {
      tmp106 = (modelica_integer) 1;
    }
    else
    {
      RELATIONHYSTERESIS(tmp104, $Pclutch1$Pw_rel, 0.0, 17, Less);
      tmp106 = ((((((modelica_integer)$P$PRE$Pclutch1$Pmode == (modelica_integer) -1) || ((modelica_integer)$P$PRE$Pclutch1$Pmode == (modelica_integer) 2)) || $Pclutch1$PstartBackward) && tmp104)?(modelica_integer) -1:(modelica_integer) 0);
    }
    tmp108 = tmp106;
  }
  $Pclutch1$Pmode = tmp108;
  TRACE_POP
}
/*
 equation index: 76
 type: SIMPLE_ASSIGN
 der(clutch1._w_rel) = clutch1.a_relfric
 */
void CoupledClutches_eqFunction_76(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  $P$DER$Pclutch1$Pw_rel = $Pclutch1$Pa_relfric;
  TRACE_POP
}
/*
 equation index: 77
 type: SIMPLE_ASSIGN
 clutch2._mode = if clutch2.free then 2 else if ($PRE.clutch2.mode == 1 or $PRE.clutch2.mode == 2 or clutch2.startForward) and clutch2.w_rel > 0.0 then 1 else if ($PRE.clutch2.mode == -1 or $PRE.clutch2.mode == 2 or clutch2.startBackward) and clutch2.w_rel < 0.0 then -1 else 0
 */
void CoupledClutches_eqFunction_77(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_boolean tmp111;
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  modelica_integer tmp116;
  modelica_boolean tmp117;
  modelica_integer tmp118;
  tmp117 = (modelica_boolean)$Pclutch2$Pfree;
  if(tmp117)
  {
    tmp118 = (modelica_integer) 2;
  }
  else
  {
    RELATIONHYSTERESIS(tmp111, $Pclutch2$Pw_rel, 0.0, 9, Greater);
    tmp115 = (modelica_boolean)(((((modelica_integer)$P$PRE$Pclutch2$Pmode == (modelica_integer) 1) || ((modelica_integer)$P$PRE$Pclutch2$Pmode == (modelica_integer) 2)) || $Pclutch2$PstartForward) && tmp111);
    if(tmp115)
    {
      tmp116 = (modelica_integer) 1;
    }
    else
    {
      RELATIONHYSTERESIS(tmp114, $Pclutch2$Pw_rel, 0.0, 29, Less);
      tmp116 = ((((((modelica_integer)$P$PRE$Pclutch2$Pmode == (modelica_integer) -1) || ((modelica_integer)$P$PRE$Pclutch2$Pmode == (modelica_integer) 2)) || $Pclutch2$PstartBackward) && tmp114)?(modelica_integer) -1:(modelica_integer) 0);
    }
    tmp118 = tmp116;
  }
  $Pclutch2$Pmode = tmp118;
  TRACE_POP
}
/*
 equation index: 78
 type: SIMPLE_ASSIGN
 der(clutch2._w_rel) = clutch2.a_relfric
 */
void CoupledClutches_eqFunction_78(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  $P$DER$Pclutch2$Pw_rel = $Pclutch2$Pa_relfric;
  TRACE_POP
}
/*
 equation index: 79
 type: SIMPLE_ASSIGN
 der(J3._w) = J3.a
 */
void CoupledClutches_eqFunction_79(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  $P$DER$PJ3$Pw = $PJ3$Pa;
  TRACE_POP
}
/*
 equation index: 80
 type: SIMPLE_ASSIGN
 der(clutch3._w_rel) = clutch3.a_relfric
 */
void CoupledClutches_eqFunction_80(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  $P$DER$Pclutch3$Pw_rel = $Pclutch3$Pa_relfric;
  TRACE_POP
}
/*
 equation index: 81
 type: SIMPLE_ASSIGN
 clutch3._mode = if clutch3.free then 2 else if ($PRE.clutch3.mode == 1 or $PRE.clutch3.mode == 2 or clutch3.startForward) and clutch3.w_rel > 0.0 then 1 else if ($PRE.clutch3.mode == -1 or $PRE.clutch3.mode == 2 or clutch3.startBackward) and clutch3.w_rel < 0.0 then -1 else 0
 */
void CoupledClutches_eqFunction_81(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  modelica_boolean tmp121;
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  modelica_integer tmp126;
  modelica_boolean tmp127;
  modelica_integer tmp128;
  tmp127 = (modelica_boolean)$Pclutch3$Pfree;
  if(tmp127)
  {
    tmp128 = (modelica_integer) 2;
  }
  else
  {
    RELATIONHYSTERESIS(tmp121, $Pclutch3$Pw_rel, 0.0, 21, Greater);
    tmp125 = (modelica_boolean)(((((modelica_integer)$P$PRE$Pclutch3$Pmode == (modelica_integer) 1) || ((modelica_integer)$P$PRE$Pclutch3$Pmode == (modelica_integer) 2)) || $Pclutch3$PstartForward) && tmp121);
    if(tmp125)
    {
      tmp126 = (modelica_integer) 1;
    }
    else
    {
      RELATIONHYSTERESIS(tmp124, $Pclutch3$Pw_rel, 0.0, 25, Less);
      tmp126 = ((((((modelica_integer)$P$PRE$Pclutch3$Pmode == (modelica_integer) -1) || ((modelica_integer)$P$PRE$Pclutch3$Pmode == (modelica_integer) 2)) || $Pclutch3$PstartBackward) && tmp124)?(modelica_integer) -1:(modelica_integer) 0);
    }
    tmp128 = tmp126;
  }
  $Pclutch3$Pmode = tmp128;
  TRACE_POP
}
/*
 equation index: 82
 type: SIMPLE_ASSIGN
 der(clutch3._phi_rel) = clutch3.w_rel
 */
void CoupledClutches_eqFunction_82(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  $P$DER$Pclutch3$Pphi_rel = $Pclutch3$Pw_rel;
  TRACE_POP
}


int CoupledClutches_functionInitialEquations(DATA *data)
{
  TRACE_PUSH

  data->simulationInfo.discreteCall = 1;
  CoupledClutches_eqFunction_1(data);

  CoupledClutches_eqFunction_2(data);

  CoupledClutches_eqFunction_3(data);

  CoupledClutches_eqFunction_4(data);

  CoupledClutches_eqFunction_5(data);

  CoupledClutches_eqFunction_6(data);

  CoupledClutches_eqFunction_7(data);

  CoupledClutches_eqFunction_8(data);

  CoupledClutches_eqFunction_9(data);

  CoupledClutches_eqFunction_10(data);

  CoupledClutches_eqFunction_11(data);

  CoupledClutches_eqFunction_12(data);

  CoupledClutches_eqFunction_13(data);

  CoupledClutches_eqFunction_14(data);

  CoupledClutches_eqFunction_15(data);

  CoupledClutches_eqFunction_16(data);

  CoupledClutches_eqFunction_17(data);

  CoupledClutches_eqFunction_18(data);

  CoupledClutches_eqFunction_19(data);

  CoupledClutches_eqFunction_20(data);

  CoupledClutches_eqFunction_21(data);

  CoupledClutches_eqFunction_22(data);

  CoupledClutches_eqFunction_23(data);

  CoupledClutches_eqFunction_24(data);

  CoupledClutches_eqFunction_25(data);

  CoupledClutches_eqFunction_26(data);

  CoupledClutches_eqFunction_27(data);

  CoupledClutches_eqFunction_28(data);

  CoupledClutches_eqFunction_29(data);

  CoupledClutches_eqFunction_30(data);

  CoupledClutches_eqFunction_31(data);

  CoupledClutches_eqFunction_32(data);

  CoupledClutches_eqFunction_33(data);

  CoupledClutches_eqFunction_34(data);

  CoupledClutches_eqFunction_35(data);

  CoupledClutches_eqFunction_36(data);

  CoupledClutches_eqFunction_37(data);

  CoupledClutches_eqFunction_38(data);

  CoupledClutches_eqFunction_39(data);

  CoupledClutches_eqFunction_40(data);

  CoupledClutches_eqFunction_41(data);

  CoupledClutches_eqFunction_42(data);

  CoupledClutches_eqFunction_43(data);

  CoupledClutches_eqFunction_44(data);

  CoupledClutches_eqFunction_45(data);

  CoupledClutches_eqFunction_46(data);

  CoupledClutches_eqFunction_47(data);

  CoupledClutches_eqFunction_48(data);

  CoupledClutches_eqFunction_71(data);

  CoupledClutches_eqFunction_72(data);

  CoupledClutches_eqFunction_73(data);

  CoupledClutches_eqFunction_74(data);

  CoupledClutches_eqFunction_75(data);

  CoupledClutches_eqFunction_76(data);

  CoupledClutches_eqFunction_77(data);

  CoupledClutches_eqFunction_78(data);

  CoupledClutches_eqFunction_79(data);

  CoupledClutches_eqFunction_80(data);

  CoupledClutches_eqFunction_81(data);

  CoupledClutches_eqFunction_82(data);
  data->simulationInfo.discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int CoupledClutches_functionRemovedInitialEquations(DATA *data)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}

/* funtion initialize mixed systems */
void CoupledClutches_initialMixedSystem(int nMixedSystems, MIXED_SYSTEM_DATA* mixedSystemData)
{
  /* initial mixed systems */
  /* parameter mixed systems */
  /* model mixed systems */
  /* jacobians mixed systems */
}

#if defined(__cplusplus)
}
#endif

