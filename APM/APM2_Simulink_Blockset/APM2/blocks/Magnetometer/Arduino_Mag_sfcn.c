/* This code was developed as part of graduate coursework at Embry-Riddle Aeronautical University
*  under the guidance of Dr. Pat Anderson and Dr. Hever Moncayo.
* 
* Author: Robert F. Hartley
* Assistant Developers: Francois Hugon, Brian DeRosa, and Christopher Carvalho
* Support: apm2.simulink@gmail.com
* 
* Oct. 25, 2012
* Version 1.0
* 
*/

/*
 * File: Arduino_Mag_sfcn.c
 *
 *
  *
  *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
  *
  *   This file is an S-function produced by the S-Function
  *   Builder which only recognizes certain fields.  Changes made
  *   outside these fields will be lost the next time the block is
  *   used to load, edit, and resave this file. This file will be overwritten
  *   by the S-function Builder block. If you want to edit this file by hand, 
  *   you must change it only in the area defined as:  
  *
  *        %%%-SFUNWIZ_defines_Changes_BEGIN
  *        #define NAME 'replacement text' 
  *        %%% SFUNWIZ_defines_Changes_END
  *
  *   DO NOT change NAME--Change the 'replacement text' only.
  *
  *   For better compatibility with the Simulink Coder, the
  *   "wrapper" S-function technique is used.  This is discussed
  *   in the Simulink Coder's Manual in the Chapter titled,
  *   "Wrapper S-functions".
  *
  *  -------------------------------------------------------------------------
  * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
  *  ------------------------------------------------------------------------- 
 * Created: Sun Aug  5 15:44:13 2012
 * 
 *
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME Arduino_Mag_sfcn
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS           3
/* Input Port  0 */
#define IN_PORT_0_NAME      bx_nT
#define INPUT_0_WIDTH       1
#define INPUT_DIMS_0_COL    1
#define INPUT_0_DTYPE       int32_T
#define INPUT_0_COMPLEX     COMPLEX_NO
#define IN_0_FRAME_BASED    FRAME_NO
#define IN_0_BUS_BASED      0
#define IN_0_BUS_NAME       
#define IN_0_DIMS           1-D
#define INPUT_0_FEEDTHROUGH 1
#define IN_0_ISSIGNED        1
#define IN_0_WORDLENGTH      8
#define IN_0_FIXPOINTSCALING 1
#define IN_0_FRACTIONLENGTH  3
#define IN_0_BIAS            0
#define IN_0_SLOPE           0.125
/* Input Port  1 */
#define IN_PORT_1_NAME      by_nT
#define INPUT_1_WIDTH       1
#define INPUT_DIMS_1_COL    1
#define INPUT_1_DTYPE       int32_T
#define INPUT_1_COMPLEX     COMPLEX_NO
#define IN_1_FRAME_BASED    FRAME_NO
#define IN_1_BUS_BASED      0
#define IN_1_BUS_NAME       
#define IN_1_DIMS           1-D
#define INPUT_1_FEEDTHROUGH 1
#define IN_1_ISSIGNED        1
#define IN_1_WORDLENGTH      8
#define IN_1_FIXPOINTSCALING 1
#define IN_1_FRACTIONLENGTH  3
#define IN_1_BIAS            0
#define IN_1_SLOPE           0.125
/* Input Port  2 */
#define IN_PORT_2_NAME      bz_nT
#define INPUT_2_WIDTH       1
#define INPUT_DIMS_2_COL    1
#define INPUT_2_DTYPE       int32_T
#define INPUT_2_COMPLEX     COMPLEX_NO
#define IN_2_FRAME_BASED    FRAME_NO
#define IN_2_BUS_BASED      0
#define IN_2_BUS_NAME       
#define IN_2_DIMS           1-D
#define INPUT_2_FEEDTHROUGH 1
#define IN_2_ISSIGNED        1
#define IN_2_WORDLENGTH      8
#define IN_2_FIXPOINTSCALING 1
#define IN_2_FRACTIONLENGTH  3
#define IN_2_BIAS            0
#define IN_2_SLOPE           0.125


#define NUM_OUTPUTS          3
/* Output Port  0 */
#define OUT_PORT_0_NAME      bx_nT
#define OUTPUT_0_WIDTH       1
#define OUTPUT_DIMS_0_COL    1
#define OUTPUT_0_DTYPE       int32_T
#define OUTPUT_0_COMPLEX     COMPLEX_NO
#define OUT_0_FRAME_BASED    FRAME_NO
#define OUT_0_BUS_BASED      0
#define OUT_0_BUS_NAME       
#define OUT_0_DIMS           1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125
/* Output Port  1 */
#define OUT_PORT_1_NAME      by_nT
#define OUTPUT_1_WIDTH       1
#define OUTPUT_DIMS_1_COL    1
#define OUTPUT_1_DTYPE       int32_T
#define OUTPUT_1_COMPLEX     COMPLEX_NO
#define OUT_1_FRAME_BASED    FRAME_NO
#define OUT_1_BUS_BASED      0
#define OUT_1_BUS_NAME       
#define OUT_1_DIMS           1-D
#define OUT_1_ISSIGNED        1
#define OUT_1_WORDLENGTH      8
#define OUT_1_FIXPOINTSCALING 1
#define OUT_1_FRACTIONLENGTH  3
#define OUT_1_BIAS            0
#define OUT_1_SLOPE           0.125
/* Output Port  2 */
#define OUT_PORT_2_NAME      bz_nT
#define OUTPUT_2_WIDTH       1
#define OUTPUT_DIMS_2_COL    1
#define OUTPUT_2_DTYPE       int32_T
#define OUTPUT_2_COMPLEX     COMPLEX_NO
#define OUT_2_FRAME_BASED    FRAME_NO
#define OUT_2_BUS_BASED      0
#define OUT_2_BUS_NAME       
#define OUT_2_DIMS           1-D
#define OUT_2_ISSIGNED        1
#define OUT_2_WORDLENGTH      8
#define OUT_2_FIXPOINTSCALING 1
#define OUT_2_FRACTIONLENGTH  3
#define OUT_2_BIAS            0
#define OUT_2_SLOPE           0.125

#define NPARAMS              7
/* Parameter  1 */
#define PARAMETER_0_NAME      cal_offset_x_nT
#define PARAMETER_0_DTYPE     int32_T
#define PARAMETER_0_COMPLEX   COMPLEX_NO
/* Parameter  2 */
#define PARAMETER_1_NAME      cal_offset_y_nT
#define PARAMETER_1_DTYPE     int32_T
#define PARAMETER_1_COMPLEX   COMPLEX_NO
/* Parameter  3 */
#define PARAMETER_2_NAME      cal_offset_z_nT
#define PARAMETER_2_DTYPE     int32_T
#define PARAMETER_2_COMPLEX   COMPLEX_NO
/* Parameter  4 */
#define PARAMETER_3_NAME      cal_gain_x
#define PARAMETER_3_DTYPE     real_T
#define PARAMETER_3_COMPLEX   COMPLEX_NO
/* Parameter  5 */
#define PARAMETER_4_NAME      cal_gain_y
#define PARAMETER_4_DTYPE     real_T
#define PARAMETER_4_COMPLEX   COMPLEX_NO
/* Parameter  6 */
#define PARAMETER_5_NAME      cal_gain_z
#define PARAMETER_5_DTYPE     real_T
#define PARAMETER_5_COMPLEX   COMPLEX_NO
/* Parameter  7 */
#define PARAMETER_6_NAME      sampletime
#define PARAMETER_6_DTYPE     real_T
#define PARAMETER_6_COMPLEX   COMPLEX_NO


/* #define SAMPLE_TIME_0        INHERITED_SAMPLE_TIME */
#define SAMPLE_TIME_0        sampletime
#define NUM_DISC_STATES      0
#define DISC_STATES_IC       [0]
#define NUM_CONT_STATES      0
#define CONT_STATES_IC       [0]

#define SFUNWIZ_GENERATE_TLC 0
#define SOURCEFILES "__SFB__"
#define PANELINDEX           6
#define USE_SIMSTRUCT        0
#define SHOW_COMPILE_STEPS   0                   
#define CREATE_DEBUG_MEXFILE 0
#define SAVE_CODE_ONLY       1
#define SFUNWIZ_REVISION     3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"
#define PARAM_DEF0(S) ssGetSFcnParam(S, 0)
#define PARAM_DEF1(S) ssGetSFcnParam(S, 1)
#define PARAM_DEF2(S) ssGetSFcnParam(S, 2)
#define PARAM_DEF3(S) ssGetSFcnParam(S, 3)
#define PARAM_DEF4(S) ssGetSFcnParam(S, 4)
#define PARAM_DEF5(S) ssGetSFcnParam(S, 5)
#define PARAM_DEF6(S) ssGetSFcnParam(S, 6)

#define IS_PARAM_DOUBLE(pVal) (mxIsNumeric(pVal) && !mxIsLogical(pVal) &&\
!mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && mxIsDouble(pVal))

/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
 #if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
   /* Function: mdlCheckParameters =============================================
     * Abstract:
     *    Validate our parameters to verify they are okay.
     */
    static void mdlCheckParameters(SimStruct *S)
    {
     int paramIndex  = 0;
     bool validParam = false;
     /* All parameters must match the S-function Builder Dialog */
     
/*
	 {
	  const mxArray *pVal0 = ssGetSFcnParam(S,0);
	  if (!IS_PARAM_DOUBLE(pVal0)) {
	    validParam = true;
	    paramIndex = 0;
	    goto EXIT_POINT;
	  }
	 }

	 {
	  const mxArray *pVal1 = ssGetSFcnParam(S,1);
	  if (!IS_PARAM_DOUBLE(pVal1)) {
	    validParam = true;
	    paramIndex = 1;
	    goto EXIT_POINT;
	  }
	 }

	 {
	  const mxArray *pVal2 = ssGetSFcnParam(S,2);
	  if (!IS_PARAM_DOUBLE(pVal2)) {
	    validParam = true;
	    paramIndex = 2;
	    goto EXIT_POINT;
	  }
     }
 */
     
     {
	  const mxArray *pVal3 = ssGetSFcnParam(S,3);
	  if (!IS_PARAM_DOUBLE(pVal3)) {
	    validParam = true;
	    paramIndex = 3;
	    goto EXIT_POINT;
	  }
	 }

	 {
	  const mxArray *pVal4 = ssGetSFcnParam(S,4);
	  if (!IS_PARAM_DOUBLE(pVal4)) {
	    validParam = true;
	    paramIndex = 4;
	    goto EXIT_POINT;
	  }
	 }

	 {
	  const mxArray *pVal5 = ssGetSFcnParam(S,5);
	  if (!IS_PARAM_DOUBLE(pVal5)) {
	    validParam = true;
	    paramIndex = 5;
	    goto EXIT_POINT;
	  }
	 }
     
     {
	  const mxArray *pVal6 = ssGetSFcnParam(S,6);
	  if (!IS_PARAM_DOUBLE(pVal6)) {
	    validParam = true;
	    paramIndex = 6;
	    goto EXIT_POINT;
	  }
	 }
     
     EXIT_POINT:
      if (validParam) {
          char parameterErrorMsg[1024];
          sprintf(parameterErrorMsg, "The data type and or complexity of parameter  %d does not match the "
                  "information specified in the S-function Builder dialog. "
                  "For non-double parameters you will need to cast them using int8, int16, "
                  "int32, uint8, uint16, uint32 or boolean.", paramIndex + 1);
	  ssSetErrorStatus(S,parameterErrorMsg);
      }
	return;
    }
 #endif /* MDL_CHECK_PARAMETERS */
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS);  /* Number of expected parameters */
      #if defined(MATLAB_MEX_FILE)
	if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
	  mdlCheckParameters(S);
	  if (ssGetErrorStatus(S) != NULL) {
	    return;
	  }
	 } else {
	   return; /* Parameter mismatch will be reported by Simulink */
	 }
      #endif

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);

    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /* Input Port 0 */
    ssSetInputPortWidth(S, 0, INPUT_0_WIDTH);
    ssSetInputPortDataType(S, 0, SS_INT32);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/

    /* Input Port 1 */
    ssSetInputPortWidth(S, 1, INPUT_1_WIDTH);
    ssSetInputPortDataType(S, 1, SS_INT32);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/

    /* Input Port 2 */
    ssSetInputPortWidth(S, 2, INPUT_2_WIDTH);
    ssSetInputPortDataType(S, 2, SS_INT32);
    ssSetInputPortComplexSignal(S, 2, INPUT_2_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 2, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 2, 1); /*direct input signal access*/

    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    /* Output Port 0 */
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortDataType(S, 0, SS_INT32);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    /* Output Port 1 */
    ssSetOutputPortWidth(S, 1, OUTPUT_1_WIDTH);
    ssSetOutputPortDataType(S, 1, SS_INT32);
    ssSetOutputPortComplexSignal(S, 1, OUTPUT_1_COMPLEX);
    /* Output Port 2 */
    ssSetOutputPortWidth(S, 2, OUTPUT_2_WIDTH);
    ssSetOutputPortDataType(S, 2, SS_INT32);
    ssSetOutputPortComplexSignal(S, 2, OUTPUT_2_COMPLEX);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
		     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    /* ssSetSampleTime(S, 0, SAMPLE_TIME_0); */
    ssSetSampleTime(S, 0, *mxGetPr(ssGetSFcnParam(S, 6)));
    ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
   ssSetOutputPortDataType(S, 0, SS_DOUBLE);
   ssSetInputPortDataType(S, 0, SS_DOUBLE);
}
/* Function: mdlOutputs =======================================================
 *
*/
static void mdlOutputs(SimStruct *S, int_T tid)
{
    int32_T        *bx_nT  = (int32_T *)ssGetOutputPortRealSignal(S,0);
    int32_T        *by_nT  = (int32_T *)ssGetOutputPortRealSignal(S,1);
    int32_T        *bz_nT  = (int32_T *)ssGetOutputPortRealSignal(S,2);
    const int_T   p_width0  = mxGetNumberOfElements(PARAM_DEF0(S));
    const int_T   p_width1  = mxGetNumberOfElements(PARAM_DEF1(S));
    const int_T   p_width2  = mxGetNumberOfElements(PARAM_DEF2(S));
    const uint32_T  *cal_offset_x_nT  = (const uint32_T *)mxGetData(PARAM_DEF0(S));
    const uint32_T  *cal_offset_y_nT  = (const uint32_T *)mxGetData(PARAM_DEF1(S));
    const uint32_T  *cal_offset_z_nT  = (const uint32_T *)mxGetData(PARAM_DEF2(S));
    const real_T  *cal_gain_x  = (const real_T *)mxGetData(PARAM_DEF3(S));
    const real_T  *cal_gain_y  = (const real_T *)mxGetData(PARAM_DEF4(S));
    const real_T  *cal_gain_z  = (const real_T *)mxGetData(PARAM_DEF5(S));
    const real_T  *sampletime  = (const real_T *)mxGetData(PARAM_DEF6(S));
    
    int32_T        *bx_nT_in  = (int32_T *)ssGetInputPortRealSignal(S,0);
    int32_T        *by_nT_in  = (int32_T *)ssGetInputPortRealSignal(S,1);
    int32_T        *bz_nT_in  = (int32_T *)ssGetInputPortRealSignal(S,2);

    bx_nT[0] = bx_nT_in[0];
    by_nT[0] = by_nT_in[0];
    bz_nT[0] = bz_nT_in[0];
}


#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

/* Function: mdlSetWorkWidths =============================================
 * Abstract:
 *      The optional method, mdlSetWorkWidths is called after input port
 *      width, output port width, and sample times of the S-function have
 *      been determined to set any state and work vector sizes which are
 *      a function of the input, output, and/or sample times.
 *
 *      Run-time parameters are registered in this method using methods
 *      ssSetNumRunTimeParams, ssSetRunTimeParamInfo, and related methods.
 */
static void mdlSetWorkWidths(SimStruct *S)
{
  /* Set number of run-time parameters */
  if (!ssSetNumRunTimeParams(S, 7))
    return;

  /*
   * Register the run-time parameters
   */
  ssRegDlgParamAsRunTimeParam(S, 0, 0, "cal_offset_x_nT", ssGetDataTypeId(S, "int32"));
  ssRegDlgParamAsRunTimeParam(S, 1, 1, "cal_offset_y_nT", ssGetDataTypeId(S, "int32"));
  ssRegDlgParamAsRunTimeParam(S, 2, 2, "cal_offset_z_nT", ssGetDataTypeId(S, "int32"));
  ssRegDlgParamAsRunTimeParam(S, 3, 3, "cal_gain_x", ssGetDataTypeId(S, "double"));
  ssRegDlgParamAsRunTimeParam(S, 4, 4, "cal_gain_y", ssGetDataTypeId(S, "double"));
  ssRegDlgParamAsRunTimeParam(S, 5, 5, "cal_gain_z", ssGetDataTypeId(S, "double"));
  ssRegDlgParamAsRunTimeParam(S, 6, 6, "sampletime", ssGetDataTypeId(S, "double"));
}

#endif



/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
}
#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif


