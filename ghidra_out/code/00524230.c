
void __fastcall FUN_00524230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_00523160(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1000;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


