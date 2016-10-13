/* External objects file */
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

/* Has to be performed after _init.xml file has been read */
void IntegerNetwork1_callExternalObjectConstructors(DATA *data)
{
  /* data->simulationInfo.extObjs = NULL; */
  infoStreamPrint(LOG_DEBUG, 0, "call external Object Constructors");
  infoStreamPrint(LOG_DEBUG, 0, "call external Object Constructors finished");
}

void IntegerNetwork1_callExternalObjectDestructors(DATA *data)
{
  if(data->simulationInfo.extObjs)
  {
    free(data->simulationInfo.extObjs);
    data->simulationInfo.extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

