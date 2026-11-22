
void __fastcall FUN_004c5c00(int *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  if (*param_1 != 0) {
    Ordinal_403(*param_1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *param_1 = 0;
  }
  iVar1 = param_1[0x6b];
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0x19c,*(int *)(iVar1 + -4),FUN_004c5210);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    param_1[0x6b] = 0;
  }
  FUN_004c51d0((int)(param_1 + 4));
  FUN_004c6270((int)param_1);
  FUN_004c5aa0(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  return;
}


