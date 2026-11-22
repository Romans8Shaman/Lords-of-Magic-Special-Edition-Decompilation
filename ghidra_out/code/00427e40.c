
undefined4 __fastcall FUN_00427e40(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float local_4;
  
  FUN_004d09a0(DAT_005a7b78,*(uint *)(param_1 + 0x54),*(int **)(param_1 + 0x58),1);
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    uVar4 = *(uint *)(*piVar1 + -8 + iVar3 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      return (int)local_4 >> 8;
    }
    if (uVar4 == 4) {
      lVar5 = __ftol((float10)local_4);
      return (int)lVar5;
    }
    *(undefined4 *)((int)pvVar2 + 0x90) = 0xe;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    local_4 = 1.4013e-45;
  }
  return local_4;
}


