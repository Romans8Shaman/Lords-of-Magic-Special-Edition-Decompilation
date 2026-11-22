
char * FUN_0044aa20(uint param_1)

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


