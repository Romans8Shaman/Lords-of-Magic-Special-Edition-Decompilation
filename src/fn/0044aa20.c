/* Rebuilt from lomse.exe FUN_0044aa20 @ 0x0044aa20 (296 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00556be8 (*(undefined *)0x00556be8)
#define DAT_00556c34 (*(undefined *)0x00556c34)
#define DAT_00579160 (*(undefined *)0x00579160)
#define FUN_0053a090 ((int (__cdecl *)(undefined1 *, ...))0x0053a090)
#define s_Buffer_Too_Small_00556ca0 (*(char (*)[])0x00556ca0)
#define s_CLASS_E_NOAGGREGATION_00556cf8 (*(char (*)[])0x00556cf8)
#define s_DPERR_ALREADYINITIALIZED_00556cb4 (*(char (*)[])0x00556cb4)
#define s_DPERR_EXCEPTION_00556c90 (*(char (*)[])0x00556c90)
#define s_DPERR_INVALIDINTERFACE_00556c1c (*(char (*)[])0x00556c1c)
#define s_DPERR_NOCONNECTION_00556c5c (*(char (*)[])0x00556c5c)
#define s_DPERR_NOTLOBBIED_00556bd4 (*(char (*)[])0x00556bd4)
#define s_DPERR_OUTOFMEMORY_00556ce4 (*(char (*)[])0x00556ce4)
#define s_DPERR_UNAVAILABLE_00556c3c (*(char (*)[])0x00556c3c)
#define s_Generic_Error_00556d10 (*(char (*)[])0x00556d10)
#define s_Invalid_Object_00556c80 (*(char (*)[])0x00556c80)
#define s_Invalid_Parameters_00556cd0 (*(char (*)[])0x00556cd0)
#define s_Invalid_Player_00556c70 (*(char (*)[])0x00556c70)
#define s_No_Messages_00556c50 (*(char (*)[])0x00556c50)
#define s_Unknown_error__Hex___x_Dec___d_U_00556bec (*(char (*)[])0x00556bec)

#define LOM_SELF_0044aa20 1
char * __stdcall rb_0044aa20(uint param_1)

{
  if ((int)param_1 < -0x7ffbfeef) {
    if (param_1 == 0x80040110) {
      return s_CLASS_E_NOAGGREGATION_00556cf8;
    }
    if (param_1 == 0x80004005) {
      return s_Generic_Error_00556d10;
    }
  }
  else if ((int)param_1 < -0x7ff8ffa8) {
    if (param_1 == 0x80070057) {
      return s_Invalid_Parameters_00556cd0;
    }
    if (param_1 == 0x8007000e) {
      return s_DPERR_OUTOFMEMORY_00556ce4;
    }
  }
  else if ((int)param_1 < -0x7788ffe1) {
    if (param_1 == 0x8877001e) {
      return s_Buffer_Too_Small_00556ca0;
    }
    if (param_1 == 0x88770005) {
      return s_DPERR_ALREADYINITIALIZED_00556cb4;
    }
  }
  else if ((int)param_1 < -0x7788ff7d) {
    if (param_1 == 0x88770082) {
      return s_Invalid_Object_00556c80;
    }
    if (param_1 == 0x8877005a) {
      return s_DPERR_EXCEPTION_00556c90;
    }
  }
  else if ((int)param_1 < -0x7788ff55) {
    if (param_1 == 0x887700aa) {
      return s_DPERR_NOCONNECTION_00556c5c;
    }
    if (param_1 == 0x88770096) {
      return s_Invalid_Player_00556c70;
    }
  }
  else if ((int)param_1 < -0x7788ff05) {
    if (param_1 == 0x887700fa) {
      return s_DPERR_UNAVAILABLE_00556c3c;
    }
    if (param_1 == 0x887700be) {
      return s_No_Messages_00556c50;
    }
  }
  else if ((int)param_1 < -0x7788fbf9) {
    if (param_1 == 0x88770406) {
      return s_DPERR_INVALIDINTERFACE_00556c1c;
    }
    if (param_1 == 0x8877010e) {
      return &DAT_00556c34;
    }
  }
  else {
    if (param_1 == 0x8877042e) {
      return s_DPERR_NOTLOBBIED_00556bd4;
    }
    if (param_1 == 0) {
      return &DAT_00556be8;
    }
  }
  FUN_0053a090(&DAT_00579160,s_Unknown_error__Hex___x_Dec___d_U_00556bec,param_1,param_1,param_1);
  return &DAT_00579160;
}
