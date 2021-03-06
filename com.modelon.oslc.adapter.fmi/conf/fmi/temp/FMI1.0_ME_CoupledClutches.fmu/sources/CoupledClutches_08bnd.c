/* update bound parameters and variable attributes (start, nominal, min, max) */
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

#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 142
 type: SIMPLE_ASSIGN
 clutch3._phi_rel = if clutch3.phi_nominal >= 1e-015 then clutch3.phi_nominal else 1.0
 */
void CoupledClutches_eqFunction_142(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  $Pclutch3$Pphi_rel = (($Pclutch3$Pphi_nominal >= 1e-015)?$Pclutch3$Pphi_nominal:1.0);
  TRACE_POP
}
/*
 equation index: 143
 type: SIMPLE_ASSIGN
 clutch2._phi_rel = if clutch2.phi_nominal >= 1e-015 then clutch2.phi_nominal else 1.0
 */
void CoupledClutches_eqFunction_143(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  $Pclutch2$Pphi_rel = (($Pclutch2$Pphi_nominal >= 1e-015)?$Pclutch2$Pphi_nominal:1.0);
  TRACE_POP
}
/*
 equation index: 144
 type: SIMPLE_ASSIGN
 clutch1._phi_rel = if clutch1.phi_nominal >= 1e-015 then clutch1.phi_nominal else 1.0
 */
void CoupledClutches_eqFunction_144(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  $Pclutch1$Pphi_rel = (($Pclutch1$Pphi_nominal >= 1e-015)?$Pclutch1$Pphi_nominal:1.0);
  TRACE_POP
}
int CoupledClutches_updateBoundVariableAttributes(DATA *data)
{
  TRACE_PUSH
  
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  CoupledClutches_eqFunction_142(data);

  CoupledClutches_eqFunction_143(data);

  CoupledClutches_eqFunction_144(data);
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  $P$ATTRIBUTE$Pclutch3$Pphi_rel.nominal = $Pclutch3$Pphi_rel;
    infoStreamPrint(LOG_INIT, 0, "%s(nominal=%g)", $Pclutch3$Pphi_rel__varInfo.name, (modelica_real) $P$ATTRIBUTE$Pclutch3$Pphi_rel.nominal);
  $P$ATTRIBUTE$Pclutch2$Pphi_rel.nominal = $Pclutch2$Pphi_rel;
    infoStreamPrint(LOG_INIT, 0, "%s(nominal=%g)", $Pclutch2$Pphi_rel__varInfo.name, (modelica_real) $P$ATTRIBUTE$Pclutch2$Pphi_rel.nominal);
  $P$ATTRIBUTE$Pclutch1$Pphi_rel.nominal = $Pclutch1$Pphi_rel;
    infoStreamPrint(LOG_INIT, 0, "%s(nominal=%g)", $Pclutch1$Pphi_rel__varInfo.name, (modelica_real) $P$ATTRIBUTE$Pclutch1$Pphi_rel.nominal);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}


/*
 equation index: 145
 type: SIMPLE_ASSIGN
 step1._startTime = T2
 */
void CoupledClutches_eqFunction_145(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  $Pstep1$PstartTime = $PT2;
  TRACE_POP
}
/*
 equation index: 146
 type: SIMPLE_ASSIGN
 sin2._freqHz = freqHz
 */
void CoupledClutches_eqFunction_146(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  $Psin2$PfreqHz = $PfreqHz;
  TRACE_POP
}
/*
 equation index: 147
 type: ALGORITHM
 
   assert(J4.stateSelect >= StateSelect.never and J4.stateSelect <= StateSelect.always, "Variable J4.stateSelect out of [min, max] interval: J4.stateSelect >= StateSelect.never and J4.stateSelect <= StateSelect.always has value: " + String(J4.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_147(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,140,"Variable J4.stateSelect out of [min, max] interval: J4.stateSelect >= StateSelect.never and J4.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq((modelica_integer)$PJ4$PstateSelect,1);
    tmp1 = LessEq((modelica_integer)$PJ4$PstateSelect,5);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format((modelica_integer)$PJ4$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2416,7,2418,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ4.stateSelect >= StateSelect.never and J4.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp4 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 148
 type: ALGORITHM
 
   assert(J4.J >= 0.0, "Variable J4.J out of [min, max] interval: J4.J >= 0.0 has value: " + String(J4.J, "g"));
 */
void CoupledClutches_eqFunction_148(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,65,"Variable J4.J out of [min, max] interval: J4.J >= 0.0 has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp5 = GreaterEq($PJ4$PJ,0.0);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format($PJ4$PJ, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2415,7,2415,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ4.J >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp8 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 149
 type: ALGORITHM
 
   assert(clutch3.fn_max >= 0.0, "Variable clutch3.fn_max out of [min, max] interval: clutch3.fn_max >= 0.0 has value: " + String(clutch3.fn_max, "g"));
 */
void CoupledClutches_eqFunction_149(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,85,"Variable clutch3.fn_max out of [min, max] interval: clutch3.fn_max >= 0.0 has value: ");
  modelica_string tmp11;
  static int tmp12 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp12)
  {
    tmp9 = GreaterEq($Pclutch3$Pfn_max,0.0);
    if(!tmp9)
    {
      tmp11 = modelica_real_to_modelica_string_format($Pclutch3$Pfn_max, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3531,7,3531,77,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch3.fn_max >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp12 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 150
 type: ALGORITHM
 
   assert(clutch3.cgeo >= 0.0, "Variable clutch3.cgeo out of [min, max] interval: clutch3.cgeo >= 0.0 has value: " + String(clutch3.cgeo, "g"));
 */
void CoupledClutches_eqFunction_150(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,81,"Variable clutch3.cgeo out of [min, max] interval: clutch3.cgeo >= 0.0 has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp13 = GreaterEq($Pclutch3$Pcgeo,0.0);
    if(!tmp13)
    {
      tmp15 = modelica_real_to_modelica_string_format($Pclutch3$Pcgeo, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3529,7,3530,72,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch3.cgeo >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp16 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 151
 type: ALGORITHM
 
   assert(clutch3.peak >= 1.0, "Variable clutch3.peak out of [min, max] interval: clutch3.peak >= 1.0 has value: " + String(clutch3.peak, "g"));
 */
void CoupledClutches_eqFunction_151(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,81,"Variable clutch3.peak out of [min, max] interval: clutch3.peak >= 1.0 has value: ");
  modelica_string tmp19;
  static int tmp20 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp20)
  {
    tmp17 = GreaterEq($Pclutch3$Ppeak,1.0);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string_format($Pclutch3$Ppeak, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3527,7,3528,64,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch3.peak >= 1.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp20 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 152
 type: ALGORITHM
 
   assert(clutch3.stateSelect >= StateSelect.never and clutch3.stateSelect <= StateSelect.always, "Variable clutch3.stateSelect out of [min, max] interval: clutch3.stateSelect >= StateSelect.never and clutch3.stateSelect <= StateSelect.always has value: " + String(clutch3.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_152(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,155,"Variable clutch3.stateSelect out of [min, max] interval: clutch3.stateSelect >= StateSelect.never and clutch3.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp25)
  {
    tmp21 = GreaterEq((modelica_integer)$Pclutch3$PstateSelect,1);
    tmp22 = LessEq((modelica_integer)$Pclutch3$PstateSelect,5);
    if(!(tmp21 && tmp22))
    {
      tmp24 = modelica_integer_to_modelica_string_format((modelica_integer)$Pclutch3$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7007,7,7009,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch3.stateSelect >= StateSelect.never and clutch3.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp25 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 153
 type: ALGORITHM
 
   assert(clutch3.phi_nominal >= 0.0, "Variable clutch3.phi_nominal out of [min, max] interval: clutch3.phi_nominal >= 0.0 has value: " + String(clutch3.phi_nominal, "g"));
 */
void CoupledClutches_eqFunction_153(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,95,"Variable clutch3.phi_nominal out of [min, max] interval: clutch3.phi_nominal >= 0.0 has value: ");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp29)
  {
    tmp26 = GreaterEq($Pclutch3$Pphi_nominal,0.0);
    if(!tmp26)
    {
      tmp28 = modelica_real_to_modelica_string_format($Pclutch3$Pphi_nominal, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7003,7,7006,44,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch3.phi_nominal >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp29 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 154
 type: ALGORITHM
 
   assert(J3.stateSelect >= StateSelect.never and J3.stateSelect <= StateSelect.always, "Variable J3.stateSelect out of [min, max] interval: J3.stateSelect >= StateSelect.never and J3.stateSelect <= StateSelect.always has value: " + String(J3.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_154(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,140,"Variable J3.stateSelect out of [min, max] interval: J3.stateSelect >= StateSelect.never and J3.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp30 = GreaterEq((modelica_integer)$PJ3$PstateSelect,1);
    tmp31 = LessEq((modelica_integer)$PJ3$PstateSelect,5);
    if(!(tmp30 && tmp31))
    {
      tmp33 = modelica_integer_to_modelica_string_format((modelica_integer)$PJ3$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2416,7,2418,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ3.stateSelect >= StateSelect.never and J3.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp34 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 155
 type: ALGORITHM
 
   assert(J3.J >= 0.0, "Variable J3.J out of [min, max] interval: J3.J >= 0.0 has value: " + String(J3.J, "g"));
 */
void CoupledClutches_eqFunction_155(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,65,"Variable J3.J out of [min, max] interval: J3.J >= 0.0 has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp35 = GreaterEq($PJ3$PJ,0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format($PJ3$PJ, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2415,7,2415,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ3.J >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp38 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 156
 type: ALGORITHM
 
   assert(clutch2.fn_max >= 0.0, "Variable clutch2.fn_max out of [min, max] interval: clutch2.fn_max >= 0.0 has value: " + String(clutch2.fn_max, "g"));
 */
void CoupledClutches_eqFunction_156(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,85,"Variable clutch2.fn_max out of [min, max] interval: clutch2.fn_max >= 0.0 has value: ");
  modelica_string tmp41;
  static int tmp42 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp42)
  {
    tmp39 = GreaterEq($Pclutch2$Pfn_max,0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format($Pclutch2$Pfn_max, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3531,7,3531,77,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch2.fn_max >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp42 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 157
 type: ALGORITHM
 
   assert(clutch2.cgeo >= 0.0, "Variable clutch2.cgeo out of [min, max] interval: clutch2.cgeo >= 0.0 has value: " + String(clutch2.cgeo, "g"));
 */
void CoupledClutches_eqFunction_157(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,81,"Variable clutch2.cgeo out of [min, max] interval: clutch2.cgeo >= 0.0 has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp43 = GreaterEq($Pclutch2$Pcgeo,0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string_format($Pclutch2$Pcgeo, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3529,7,3530,72,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch2.cgeo >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp46 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 158
 type: ALGORITHM
 
   assert(clutch2.peak >= 1.0, "Variable clutch2.peak out of [min, max] interval: clutch2.peak >= 1.0 has value: " + String(clutch2.peak, "g"));
 */
void CoupledClutches_eqFunction_158(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,81,"Variable clutch2.peak out of [min, max] interval: clutch2.peak >= 1.0 has value: ");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp50)
  {
    tmp47 = GreaterEq($Pclutch2$Ppeak,1.0);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string_format($Pclutch2$Ppeak, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3527,7,3528,64,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch2.peak >= 1.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp50 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 159
 type: ALGORITHM
 
   assert(clutch2.stateSelect >= StateSelect.never and clutch2.stateSelect <= StateSelect.always, "Variable clutch2.stateSelect out of [min, max] interval: clutch2.stateSelect >= StateSelect.never and clutch2.stateSelect <= StateSelect.always has value: " + String(clutch2.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_159(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  modelica_boolean tmp51;
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,155,"Variable clutch2.stateSelect out of [min, max] interval: clutch2.stateSelect >= StateSelect.never and clutch2.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp51 = GreaterEq((modelica_integer)$Pclutch2$PstateSelect,1);
    tmp52 = LessEq((modelica_integer)$Pclutch2$PstateSelect,5);
    if(!(tmp51 && tmp52))
    {
      tmp54 = modelica_integer_to_modelica_string_format((modelica_integer)$Pclutch2$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7007,7,7009,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch2.stateSelect >= StateSelect.never and clutch2.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp55 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 160
 type: ALGORITHM
 
   assert(clutch2.phi_nominal >= 0.0, "Variable clutch2.phi_nominal out of [min, max] interval: clutch2.phi_nominal >= 0.0 has value: " + String(clutch2.phi_nominal, "g"));
 */
void CoupledClutches_eqFunction_160(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,95,"Variable clutch2.phi_nominal out of [min, max] interval: clutch2.phi_nominal >= 0.0 has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq($Pclutch2$Pphi_nominal,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format($Pclutch2$Pphi_nominal, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7003,7,7006,44,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch2.phi_nominal >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp59 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 161
 type: ALGORITHM
 
   assert(J2.stateSelect >= StateSelect.never and J2.stateSelect <= StateSelect.always, "Variable J2.stateSelect out of [min, max] interval: J2.stateSelect >= StateSelect.never and J2.stateSelect <= StateSelect.always has value: " + String(J2.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_161(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,140,"Variable J2.stateSelect out of [min, max] interval: J2.stateSelect >= StateSelect.never and J2.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp63;
  static int tmp64 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp64)
  {
    tmp60 = GreaterEq((modelica_integer)$PJ2$PstateSelect,1);
    tmp61 = LessEq((modelica_integer)$PJ2$PstateSelect,5);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_integer_to_modelica_string_format((modelica_integer)$PJ2$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2416,7,2418,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ2.stateSelect >= StateSelect.never and J2.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp64 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 162
 type: ALGORITHM
 
   assert(J2.J >= 0.0, "Variable J2.J out of [min, max] interval: J2.J >= 0.0 has value: " + String(J2.J, "g"));
 */
void CoupledClutches_eqFunction_162(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,65,"Variable J2.J out of [min, max] interval: J2.J >= 0.0 has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp65 = GreaterEq($PJ2$PJ,0.0);
    if(!tmp65)
    {
      tmp67 = modelica_real_to_modelica_string_format($PJ2$PJ, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2415,7,2415,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ2.J >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp68 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 163
 type: ALGORITHM
 
   assert(clutch1.fn_max >= 0.0, "Variable clutch1.fn_max out of [min, max] interval: clutch1.fn_max >= 0.0 has value: " + String(clutch1.fn_max, "g"));
 */
void CoupledClutches_eqFunction_163(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,85,"Variable clutch1.fn_max out of [min, max] interval: clutch1.fn_max >= 0.0 has value: ");
  modelica_string tmp71;
  static int tmp72 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp72)
  {
    tmp69 = GreaterEq($Pclutch1$Pfn_max,0.0);
    if(!tmp69)
    {
      tmp71 = modelica_real_to_modelica_string_format($Pclutch1$Pfn_max, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3531,7,3531,77,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch1.fn_max >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp72 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 164
 type: ALGORITHM
 
   assert(clutch1.cgeo >= 0.0, "Variable clutch1.cgeo out of [min, max] interval: clutch1.cgeo >= 0.0 has value: " + String(clutch1.cgeo, "g"));
 */
void CoupledClutches_eqFunction_164(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,81,"Variable clutch1.cgeo out of [min, max] interval: clutch1.cgeo >= 0.0 has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp73 = GreaterEq($Pclutch1$Pcgeo,0.0);
    if(!tmp73)
    {
      tmp75 = modelica_real_to_modelica_string_format($Pclutch1$Pcgeo, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3529,7,3530,72,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch1.cgeo >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp76 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 165
 type: ALGORITHM
 
   assert(clutch1.peak >= 1.0, "Variable clutch1.peak out of [min, max] interval: clutch1.peak >= 1.0 has value: " + String(clutch1.peak, "g"));
 */
void CoupledClutches_eqFunction_165(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,81,"Variable clutch1.peak out of [min, max] interval: clutch1.peak >= 1.0 has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp77 = GreaterEq($Pclutch1$Ppeak,1.0);
    if(!tmp77)
    {
      tmp79 = modelica_real_to_modelica_string_format($Pclutch1$Ppeak, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",3527,7,3528,64,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch1.peak >= 1.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp80 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 166
 type: ALGORITHM
 
   assert(clutch1.stateSelect >= StateSelect.never and clutch1.stateSelect <= StateSelect.always, "Variable clutch1.stateSelect out of [min, max] interval: clutch1.stateSelect >= StateSelect.never and clutch1.stateSelect <= StateSelect.always has value: " + String(clutch1.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_166(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,155,"Variable clutch1.stateSelect out of [min, max] interval: clutch1.stateSelect >= StateSelect.never and clutch1.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq((modelica_integer)$Pclutch1$PstateSelect,1);
    tmp82 = LessEq((modelica_integer)$Pclutch1$PstateSelect,5);
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_integer_to_modelica_string_format((modelica_integer)$Pclutch1$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7007,7,7009,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch1.stateSelect >= StateSelect.never and clutch1.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp85 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 167
 type: ALGORITHM
 
   assert(clutch1.phi_nominal >= 0.0, "Variable clutch1.phi_nominal out of [min, max] interval: clutch1.phi_nominal >= 0.0 has value: " + String(clutch1.phi_nominal, "g"));
 */
void CoupledClutches_eqFunction_167(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,95,"Variable clutch1.phi_nominal out of [min, max] interval: clutch1.phi_nominal >= 0.0 has value: ");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp89)
  {
    tmp86 = GreaterEq($Pclutch1$Pphi_nominal,0.0);
    if(!tmp86)
    {
      tmp88 = modelica_real_to_modelica_string_format($Pclutch1$Pphi_nominal, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",7003,7,7006,44,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nclutch1.phi_nominal >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp89 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 168
 type: ALGORITHM
 
   assert(J1.stateSelect >= StateSelect.never and J1.stateSelect <= StateSelect.always, "Variable J1.stateSelect out of [min, max] interval: J1.stateSelect >= StateSelect.never and J1.stateSelect <= StateSelect.always has value: " + String(J1.stateSelect, "d"));
 */
void CoupledClutches_eqFunction_168(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,140,"Variable J1.stateSelect out of [min, max] interval: J1.stateSelect >= StateSelect.never and J1.stateSelect <= StateSelect.always has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp90 = GreaterEq((modelica_integer)$PJ1$PstateSelect,1);
    tmp91 = LessEq((modelica_integer)$PJ1$PstateSelect,5);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_integer_to_modelica_string_format((modelica_integer)$PJ1$PstateSelect, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2416,7,2418,61,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ1.stateSelect >= StateSelect.never and J1.stateSelect <= StateSelect.always", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp94 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 169
 type: ALGORITHM
 
   assert(J1.J >= 0.0, "Variable J1.J out of [min, max] interval: J1.J >= 0.0 has value: " + String(J1.J, "g"));
 */
void CoupledClutches_eqFunction_169(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,65,"Variable J1.J out of [min, max] interval: J1.J >= 0.0 has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp95 = GreaterEq($PJ1$PJ,0.0);
    if(!tmp95)
    {
      tmp97 = modelica_real_to_modelica_string_format($PJ1$PJ, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Mechanics/Rotational.mo",2415,7,2415,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nJ1.J >= 0.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp98 = 1;
    }
  }
  TRACE_POP
}
int CoupledClutches_updateBoundParameters(DATA *data)
{
  TRACE_PUSH
  CoupledClutches_eqFunction_145(data);

  CoupledClutches_eqFunction_146(data);

  CoupledClutches_eqFunction_147(data);

  CoupledClutches_eqFunction_148(data);

  CoupledClutches_eqFunction_149(data);

  CoupledClutches_eqFunction_150(data);

  CoupledClutches_eqFunction_151(data);

  CoupledClutches_eqFunction_152(data);

  CoupledClutches_eqFunction_153(data);

  CoupledClutches_eqFunction_154(data);

  CoupledClutches_eqFunction_155(data);

  CoupledClutches_eqFunction_156(data);

  CoupledClutches_eqFunction_157(data);

  CoupledClutches_eqFunction_158(data);

  CoupledClutches_eqFunction_159(data);

  CoupledClutches_eqFunction_160(data);

  CoupledClutches_eqFunction_161(data);

  CoupledClutches_eqFunction_162(data);

  CoupledClutches_eqFunction_163(data);

  CoupledClutches_eqFunction_164(data);

  CoupledClutches_eqFunction_165(data);

  CoupledClutches_eqFunction_166(data);

  CoupledClutches_eqFunction_167(data);

  CoupledClutches_eqFunction_168(data);

  CoupledClutches_eqFunction_169(data);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

