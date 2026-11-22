
void __fastcall FUN_0042e1b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_0042dff0(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}


