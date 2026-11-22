
void __fastcall FUN_0047c4b0(int *param_1)

{
  int iVar1;
  undefined4 local_f8 [62];
  
  if (*param_1 != 0) {
    iVar1 = FUN_0047bfb0(param_1,local_f8);
    while (iVar1 != 0) {
      iVar1 = FUN_0047bfb0(param_1,local_f8);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
    iVar1 = FUN_0047c010(param_1,local_f8);
    while (iVar1 != 0) {
      iVar1 = FUN_0047c010(param_1,local_f8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  }
  return;
}


