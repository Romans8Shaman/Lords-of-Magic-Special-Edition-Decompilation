
undefined4 __fastcall FUN_0047bf70(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  iVar1 = FUN_004c4d00(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  return (uint)(0 < iVar1);
}


