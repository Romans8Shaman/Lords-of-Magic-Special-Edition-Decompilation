
undefined4 __thiscall FUN_00506190(void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float local_4;
  
  if ((char)DAT_005d2cb0 == '\0') {
    return 200;
  }
  iVar4 = FUN_005228b0((void *)((int)this + 0xc4),*(undefined4 *)((int)this + 0x28),0);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar2 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar5 * 8) = iVar4;
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005d2cb0,DAT_005d2cb4);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 == 1) {
    return local_4;
  }
  if (uVar6 == 2) {
    return (int)local_4 >> 8;
  }
  if (uVar6 == 4) {
    lVar7 = __ftol((float10)local_4);
    return (int)lVar7;
  }
  *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return 200;
}


