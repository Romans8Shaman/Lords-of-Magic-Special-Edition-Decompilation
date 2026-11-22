
void FUN_00478f60(int *param_1)

{
  int iVar1;
  int local_14 [5];
  
  local_14[0] = 0x14;
  iVar1 = (/*IC:00478f77*/**(code **)(*param_1 + 0xc))(param_1,local_14);
  if (iVar1 == 0) {
    DAT_005832ec = DAT_005832ec - local_14[0];
    return;
  }
  OutputDebugStringA(s_GetCaps_failed__0055aff4);
  return;
}


