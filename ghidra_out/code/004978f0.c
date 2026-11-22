
undefined4 __fastcall FUN_004978f0(int *param_1)

{
  int iVar1;
  
  if ((void *)param_1[5] == (void *)0x0) {
    OutputDebugStringA(s_TooBig___m_font__NULL_0055c6dc);
    return 1;
  }
  iVar1 = FUN_0047f420((void *)param_1[5],(char *)param_1[2],*param_1,param_1[1],param_1[8]);
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      return 1;
    }
    FUN_00497dd0(param_1);
  }
  return 0;
}


