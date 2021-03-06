/* update bound parameters and variable attributes (start, nominal, min, max) */
/* Simulation code for IntegerNetwork1 generated by the OpenModelica Compiler 1.9.2+dev (r24999). */

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

#include "IntegerNetwork1_functions.h"
#include "IntegerNetwork1_model.h"
#include "IntegerNetwork1_literals.h"




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

int IntegerNetwork1_updateBoundVariableAttributes(DATA *data)
{
  TRACE_PUSH
  
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}


/*
 equation index: 46
 type: ALGORITHM
 
   assert(booleanPulse2.period >= 1e-060, "Variable booleanPulse2.period out of [min, max] interval: booleanPulse2.period >= 1e-060 has value: " + String(booleanPulse2.period, "g"));
 */
void IntegerNetwork1_eqFunction_46(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,100,"Variable booleanPulse2.period out of [min, max] interval: booleanPulse2.period >= 1e-060 has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq($PbooleanPulse2$Pperiod,1e-060);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format($PbooleanPulse2$Pperiod, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Sources.mo",2790,5,2791,39,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nbooleanPulse2.period >= 1e-060", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp3 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 47
 type: ALGORITHM
 
   assert(booleanPulse2.width >= 1e-060 and booleanPulse2.width <= 100.0, "Variable booleanPulse2.width out of [min, max] interval: booleanPulse2.width >= 1e-060 and booleanPulse2.width <= 100.0 has value: " + String(booleanPulse2.width, "g"));
 */
void IntegerNetwork1_eqFunction_47(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,131,"Variable booleanPulse2.width out of [min, max] interval: booleanPulse2.width >= 1e-060 and booleanPulse2.width <= 100.0 has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq($PbooleanPulse2$Pwidth,1e-060);
    tmp5 = LessEq($PbooleanPulse2$Pwidth,100.0);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_real_to_modelica_string_format($PbooleanPulse2$Pwidth, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Sources.mo",2787,5,2789,58,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nbooleanPulse2.width >= 1e-060 and booleanPulse2.width <= 100.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp8 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 48
 type: ALGORITHM
 
   assert(multiSwitch1.nu >= 0, "Variable multiSwitch1.nu out of [min, max] interval: multiSwitch1.nu >= 0 has value: " + String(multiSwitch1.nu, "d"));
 */
void IntegerNetwork1_eqFunction_48(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,85,"Variable multiSwitch1.nu out of [min, max] interval: multiSwitch1.nu >= 0 has value: ");
  modelica_string tmp11;
  static int tmp12 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp12)
  {
    tmp9 = GreaterEq((modelica_integer)$PmultiSwitch1$Pnu,(modelica_integer) 0);
    if(!tmp9)
    {
      tmp11 = modelica_integer_to_modelica_string_format((modelica_integer)$PmultiSwitch1$Pnu, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/MathInteger.mo",17,3,18,68,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nmultiSwitch1.nu >= 0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp12 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 49
 type: ALGORITHM
 
   assert(booleanPulse1.period >= 1e-060, "Variable booleanPulse1.period out of [min, max] interval: booleanPulse1.period >= 1e-060 has value: " + String(booleanPulse1.period, "g"));
 */
void IntegerNetwork1_eqFunction_49(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,100,"Variable booleanPulse1.period out of [min, max] interval: booleanPulse1.period >= 1e-060 has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp13 = GreaterEq($PbooleanPulse1$Pperiod,1e-060);
    if(!tmp13)
    {
      tmp15 = modelica_real_to_modelica_string_format($PbooleanPulse1$Pperiod, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Sources.mo",2790,5,2791,39,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nbooleanPulse1.period >= 1e-060", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp16 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 50
 type: ALGORITHM
 
   assert(booleanPulse1.width >= 1e-060 and booleanPulse1.width <= 100.0, "Variable booleanPulse1.width out of [min, max] interval: booleanPulse1.width >= 1e-060 and booleanPulse1.width <= 100.0 has value: " + String(booleanPulse1.width, "g"));
 */
void IntegerNetwork1_eqFunction_50(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,131,"Variable booleanPulse1.width out of [min, max] interval: booleanPulse1.width >= 1e-060 and booleanPulse1.width <= 100.0 has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp17 = GreaterEq($PbooleanPulse1$Pwidth,1e-060);
    tmp18 = LessEq($PbooleanPulse1$Pwidth,100.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format($PbooleanPulse1$Pwidth, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Sources.mo",2787,5,2789,58,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nbooleanPulse1.width >= 1e-060 and booleanPulse1.width <= 100.0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp21 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 51
 type: ALGORITHM
 
   assert(product.nu >= 0, "Variable product.nu out of [min, max] interval: product.nu >= 0 has value: " + String(product.nu, "d"));
 */
void IntegerNetwork1_eqFunction_51(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,75,"Variable product.nu out of [min, max] interval: product.nu >= 0 has value: ");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp25)
  {
    tmp22 = GreaterEq((modelica_integer)$Pproduct$Pnu,(modelica_integer) 0);
    if(!tmp22)
    {
      tmp24 = modelica_integer_to_modelica_string_format((modelica_integer)$Pproduct$Pnu, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Interfaces.mo",920,5,921,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nproduct.nu >= 0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp25 = 1;
    }
  }
  TRACE_POP
}
/*
 equation index: 52
 type: ALGORITHM
 
   assert(sum.nu >= 0, "Variable sum.nu out of [min, max] interval: sum.nu >= 0 has value: " + String(sum.nu, "d"));
 */
void IntegerNetwork1_eqFunction_52(DATA *data)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,67,"Variable sum.nu out of [min, max] interval: sum.nu >= 0 has value: ");
  modelica_string tmp28;
  static int tmp29 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp29)
  {
    tmp26 = GreaterEq((modelica_integer)$Psum$Pnu,(modelica_integer) 0);
    if(!tmp26)
    {
      tmp28 = modelica_integer_to_modelica_string_format((modelica_integer)$Psum$Pnu, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      FILE_INFO info = {"C:/OpenModelica/trunk/build/lib/omlibrary/Modelica 3.2.1/Blocks/Interfaces.mo",920,5,921,65,0};
      omc_assert_warning(info, "The following assertion has been violated at time %f\nsum.nu >= 0", time);
      omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      tmp29 = 1;
    }
  }
  TRACE_POP
}
int IntegerNetwork1_updateBoundParameters(DATA *data)
{
  TRACE_PUSH
  IntegerNetwork1_eqFunction_46(data);

  IntegerNetwork1_eqFunction_47(data);

  IntegerNetwork1_eqFunction_48(data);

  IntegerNetwork1_eqFunction_49(data);

  IntegerNetwork1_eqFunction_50(data);

  IntegerNetwork1_eqFunction_51(data);

  IntegerNetwork1_eqFunction_52(data);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

