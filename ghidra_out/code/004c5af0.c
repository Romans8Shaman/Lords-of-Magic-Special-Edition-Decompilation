
void __fastcall FUN_004c5af0(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1bc));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1b0)) {
    iVar1 = 0;
    do {
      FUN_004c5340(*(int *)(param_1 + 0x1ac) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x19c;
    } while (iVar2 < *(int *)(param_1 + 0x1b0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1bc));
  return;
}


