
void __fastcall FUN_0050d110(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 4))) {
    iVar1 = 0;
    do {
      FUN_0050cff0(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


