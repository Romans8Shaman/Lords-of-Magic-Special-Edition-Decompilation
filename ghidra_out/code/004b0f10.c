
void __fastcall FUN_004b0f10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_004b0d80(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


