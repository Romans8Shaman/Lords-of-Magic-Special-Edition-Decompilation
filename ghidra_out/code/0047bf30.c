
undefined4 __fastcall FUN_0047bf30(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = FUN_004c4d00(param_1 + 2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  return (uint)(0 < iVar1);
}


