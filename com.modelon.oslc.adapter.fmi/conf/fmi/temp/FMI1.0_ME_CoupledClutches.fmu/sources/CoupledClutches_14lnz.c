/* Linearization */
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

const char *CoupledClutches_linear_model_frame()
{
  return "model linear_CoupledClutches\n  parameter Integer n = 8; // states \n  parameter Integer k = 1; // top-level inputs \n  parameter Integer l = 4; // top-level outputs \n"
  "  parameter Real x0[8] = {%s};\n"
  "  parameter Real u0[1] = {%s};\n"
  "  parameter Real A[8,8] = [%s];\n"
  "  parameter Real B[8,1] = [%s];\n"
  "  parameter Real C[4,8] = [%s];\n"
  "  parameter Real D[4,1] = [%s];\n"
  "  Real x[8](start=x0);\n"
  "  input Real u[1](start= u0);\n"
  "  output Real y[4];\n"
  "\n  Real x_PJ3Pphi = x[1];\n  Real x_PJ3Pw = x[2];\n  Real x_Pclutch1Pphi_rel = x[3];\n  Real x_Pclutch1Pw_rel = x[4];\n  Real x_Pclutch2Pphi_rel = x[5];\n  Real x_Pclutch2Pw_rel = x[6];\n  Real x_Pclutch3Pphi_rel = x[7];\n  Real x_Pclutch3Pw_rel = x[8];\n    Real u_Pstep2 = u[1];\n    Real y_PJ1_w1 = y[1];\n  Real y_PJ2_w1 = y[2];\n  Real y_PJ3_w1 = y[3];\n  Real y_PJ4_w1 = y[4];\n  \n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_CoupledClutches;\n";
}
#if defined(__cplusplus)
}
#endif

