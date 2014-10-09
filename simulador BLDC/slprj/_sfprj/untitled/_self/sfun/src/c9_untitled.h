#ifndef __c9_untitled_h__
#define __c9_untitled_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc9_untitledInstanceStruct
#define typedef_SFc9_untitledInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c9_sfEvent;
  boolean_T c9_isStable;
  boolean_T c9_doneDoubleBufferReInit;
  uint8_T c9_is_active_c9_untitled;
} SFc9_untitledInstanceStruct;

#endif                                 /*typedef_SFc9_untitledInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_untitled_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_untitled_get_check_sum(mxArray *plhs[]);
extern void c9_untitled_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif