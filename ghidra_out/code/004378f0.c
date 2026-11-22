
undefined4 __fastcall FUN_004378f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c5140(param_1);
  if (iVar1 == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  iVar1 = param_1[0x10];
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return (uint)(iVar1 != 0);
}


