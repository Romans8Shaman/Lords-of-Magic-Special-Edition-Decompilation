
undefined * FUN_00470240(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if ((int)param_1 < 9) {
    if (param_1 == 8) {
      pcVar1 = s_SNET_ERROR_NOT_ENOUGH_MEMORY_00557de0;
    }
    else {
      switch(param_1) {
      case 0x85100066:
        pcVar1 = s_SNET_ERROR_GAME_ALREADY_STARTED_00557f10;
        break;
      case 0x85100067:
        pcVar1 = s_SNET_ERROR_GAME_FULL_00557ef8;
        break;
      case 0x85100068:
        pcVar1 = s_SNET_ERROR_GAME_NOT_FOUND_00557edc;
        break;
      case 0x85100069:
        pcVar1 = s_SNET_ERROR_GAME_TERMINATED_00557ec0;
        break;
      case 0x8510006a:
        pcVar1 = s_SNET_ERROR_INVALID_PLAYER_00557f30;
        break;
      case 0x8510006b:
        pcVar1 = s_SNET_ERROR_NO_MESSAGES_WAITING_00557ea0;
        break;
      case 0x8510006e:
        pcVar1 = s_SNET_ERROR_NOT_IMPLEMENTED_00557e84;
        break;
      case 0x85100070:
        pcVar1 = s_SNET_ERROR_NOT_IN_GAME_00557e6c;
        break;
      case 0x85100073:
        pcVar1 = s_SNET_ERROR_NOT_REGISTERED_00557e50;
        break;
      case 0x85100077:
        pcVar1 = s_SNET_ERROR_REQUIRES_UPGRADE_00557e34;
        break;
      case 0x85100078:
        pcVar1 = s_SNET_ERROR_STILL_ACTIVE_00557e1c;
        break;
      case 0x85100079:
        pcVar1 = s_SNET_ERROR_VERSION_MISMATCH_00557e00;
      }
    }
  }
  else if ((int)param_1 < 0x45) {
    if (param_1 == 0x44) {
      pcVar1 = s_SNET_ERROR_TOO_MANY_NAMES_00557dac;
    }
    else if (param_1 == 0x36) {
      pcVar1 = s_SNET_ERROR_NETWORK_BUSY_00557dc8;
    }
  }
  else if ((int)param_1 < 0xa5) {
    if (param_1 == 0xa4) {
      pcVar1 = s_SNET_ERROR_MAX_THRDS_REACHED_00557d6c;
    }
    else if (param_1 == 0x57) {
      pcVar1 = s_SNET_ERROR_INVALID_PARAMETER_00557d8c;
    }
  }
  else if ((int)param_1 < 0x121) {
    if (param_1 == 0x120) {
      pcVar1 = s_SNET_ERROR_NOT_OWNER_00557d38;
    }
    else if (param_1 == 0xb7) {
      pcVar1 = s_SNET_ERROR_ALREADY_EXISTS_00557d50;
    }
  }
  else if ((int)param_1 < 0x4c7) {
    if (param_1 == 0x4c6) {
      pcVar1 = s_SNET_ERROR_NO_NETWORK_00557d08;
    }
    else if (param_1 == 0x4b4) {
      pcVar1 = s_SNET_ERROR_BAD_PROVIDER_00557d20;
    }
  }
  else if (param_1 == 0x4c7) {
    pcVar1 = s_SNET_ERROR_CANCELLED_00557cb8;
  }
  else if (param_1 == 0x4d0) {
    pcVar1 = s_SNET_ERROR_HOST_UNREACHABLE_00557cd0;
  }
  else if (param_1 == 0x8ca) {
    pcVar1 = s_SNET_ERROR_NOT_CONNECTED_00557cec;
  }
  if (pcVar1 == (char *)0x0) {
    FUN_0053a090(&DAT_005831f0,s_Unknown_error__Hex___x_Dec___d_U_00556bec,param_1);
    return &DAT_005831f0;
  }
  FUN_0053a090(&DAT_005831f0,s_Error_name__s__Hex___x_Dec___d_U_00557c88,(uint)pcVar1,param_1,
               param_1,param_1);
  return &DAT_005831f0;
}


