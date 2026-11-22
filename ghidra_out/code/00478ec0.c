
undefined4 __cdecl FUN_00478ec0(undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 extraout_EAX;
  char *pcVar2;
  CHAR local_3e8 [1000];
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = &DAT_00579274;
  }
  if ((int)param_2 < -0x7ff8ffa8) {
    if (param_2 == (char *)0x80070057) {
      pcVar1 = s_DSERR_INVALIDPARAM_0055afcc;
      goto LAB_00478f29;
    }
    if (param_2 == (char *)0x8007000e) {
      pcVar1 = s_DSERR_OUTOFMEMORY_0055afe0;
      goto LAB_00478f29;
    }
  }
  else {
    if (param_2 == (char *)0x8878000a) {
      pcVar1 = s_DSERR_ALLOCATED_0055af94;
      goto LAB_00478f29;
    }
    if (param_2 == (char *)0x88780032) {
      pcVar1 = s_DSERR_INVALIDCALL_0055afa4;
      goto LAB_00478f29;
    }
    if (param_2 == (char *)0x887800aa) {
      pcVar1 = s_DSERR_UNINITIALIZED_0055afb8;
      goto LAB_00478f29;
    }
  }
  pcVar1 = (char *)0x0;
LAB_00478f29:
  if (pcVar1 == (char *)0x0) {
    pcVar2 = s_DirectSound_error__d__s_0055af78;
    pcVar1 = param_2;
  }
  else {
    pcVar2 = s_DirectSound_error__s__s_0055af5c;
  }
  FUN_0053a090(local_3e8,pcVar2,(uint)pcVar1,param_1);
  OutputDebugStringA(local_3e8);
  return extraout_EAX;
}


