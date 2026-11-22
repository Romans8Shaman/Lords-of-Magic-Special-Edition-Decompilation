
void __fastcall FUN_004af530(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_004af280(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


