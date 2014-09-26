/* Include files */

#include "observador_multirate_sfun.h"
#include "c1_observador_multirate.h"
#include "c2_observador_multirate.h"
#include "c3_observador_multirate.h"
#include "c4_observador_multirate.h"
#include "c5_observador_multirate.h"
#include "c6_observador_multirate.h"
#include "c7_observador_multirate.h"
#include "c8_observador_multirate.h"
#include "c9_observador_multirate.h"
#include "c10_observador_multirate.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _observador_multirateMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void observador_multirate_initializer(void)
{
}

void observador_multirate_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_observador_multirate_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_observador_multirate_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_observador_multirate_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2980621184U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(999686506U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4145399634U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(106746066U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(791869345U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4263451432U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(473647982U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2922378118U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c1_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c2_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c3_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c4_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c5_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c6_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c7_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c8_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c9_observador_multirate_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_observador_multirate_get_check_sum(mxArray *plhs[]);
          sf_c10_observador_multirate_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3809206343U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(164408188U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2857541231U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1614886115U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_observador_multirate_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "L0xKuJhGP3PV5ReepyhHlB") == 0) {
          extern mxArray *sf_c1_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c1_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "raU7cJpaX09H9yQhpSZl0G") == 0) {
          extern mxArray *sf_c2_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c2_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "7zS6oOqXdNXJumDxap45vH") == 0) {
          extern mxArray *sf_c3_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c3_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "ekMZSH4pEDqbM6p5hRtYdC") == 0) {
          extern mxArray *sf_c4_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c4_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "XnLWyjfSjCYHq57UVPKYI") == 0) {
          extern mxArray *sf_c5_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c5_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "raU7cJpaX09H9yQhpSZl0G") == 0) {
          extern mxArray *sf_c6_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c6_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "L0xKuJhGP3PV5ReepyhHlB") == 0) {
          extern mxArray *sf_c7_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c7_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "7zS6oOqXdNXJumDxap45vH") == 0) {
          extern mxArray *sf_c8_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c8_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "ekMZSH4pEDqbM6p5hRtYdC") == 0) {
          extern mxArray *sf_c9_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c9_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "XnLWyjfSjCYHq57UVPKYI") == 0) {
          extern mxArray *sf_c10_observador_multirate_get_autoinheritance_info
            (void);
          plhs[0] = sf_c10_observador_multirate_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_observador_multirate_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_observador_multirate_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_observador_multirate_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void observador_multirate_debug_initialize(void)
{
  _observador_multirateMachineNumber_ = sf_debug_initialize_machine(
    "observador_multirate","sfun",0,10,0,0,0);
  sf_debug_set_machine_event_thresholds(_observador_multirateMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_observador_multirateMachineNumber_,0);
}

void observador_multirate_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_observador_multirate_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "observador_multirate", "observador_multirate");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_observador_multirate_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
