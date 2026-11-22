
void __fastcall FUN_005095a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x144) == 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x2c);
  }
  if (0 < *(int *)(param_1 + 0x158)) {
    iVar1 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x154) + 8 + iVar1) = *(undefined4 *)(param_1 + 0x14c);
      *(undefined4 *)(*(int *)(param_1 + 0x154) + 0xc + iVar1) = *(undefined4 *)(param_1 + 0x150);
      iVar1 = iVar1 + 0x10;
      *(int *)(*(int *)(param_1 + 0x154) + -0x10 + iVar1) =
           (iVar2 % *(int *)(param_1 + 0x144)) * *(int *)(param_1 + 0x14c);
      *(int *)(*(int *)(param_1 + 0x154) + -0xc + iVar1) =
           (iVar2 / *(int *)(param_1 + 0x144)) * *(int *)(param_1 + 0x14c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x158));
  }
  return;
}


