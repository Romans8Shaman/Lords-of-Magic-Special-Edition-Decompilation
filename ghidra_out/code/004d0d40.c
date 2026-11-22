
longlong __cdecl FUN_004d0d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int extraout_EDX;
  int iVar6;
  uint extraout_EDX_00;
  longlong lVar7;
  float fStack_4;
  
  pvVar3 = DAT_005845ec;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (*(int *)((int)DAT_005845ec + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005845ec + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005845ec + 0x54) + -1;
    *(int *)((int)DAT_005845ec + 0x54) = iVar4;
    iVar6 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar6 + iVar4 * 8) = uVar1;
    *(undefined4 *)(iVar6 + 4 + iVar4 * 8) = uVar2;
  }
  pvVar3 = DAT_005845ec;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (*(int *)((int)DAT_005845ec + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005845ec + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005845ec + 0x54) + -1;
    *(int *)((int)DAT_005845ec + 0x54) = iVar4;
    iVar6 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar6 + iVar4 * 8) = uVar1;
    *(undefined4 *)(iVar6 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d05e0(DAT_005845ec,DAT_005845f0,DAT_005845f4);
  pvVar3 = DAT_005845ec;
  if (*(int *)((int)DAT_005845ec + 0x54) < *(int *)((int)DAT_005845ec + 0x58)) {
    iVar6 = *(int *)((int)DAT_005845ec + 0x50);
    iVar4 = *(int *)((int)DAT_005845ec + 0x54) + 1;
    *(int *)((int)DAT_005845ec + 0x54) = iVar4;
    uVar5 = *(uint *)(iVar6 + -8 + iVar4 * 8);
    fStack_4 = *(float *)(iVar6 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005845ec + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar5 = 0;
    iVar6 = extraout_EDX;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 == 1) {
    return CONCAT44(iVar6,fStack_4);
  }
  if (uVar5 == 2) {
    return CONCAT44(iVar6,(int)fStack_4 >> 8);
  }
  if (uVar5 == 4) {
    lVar7 = __ftol((float10)fStack_4);
    return lVar7;
  }
  *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return (ulonglong)extraout_EDX_00 << 0x20;
}


