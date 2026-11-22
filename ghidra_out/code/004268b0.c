
void __cdecl op_needhealing_q(void *vm)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  int iStack_14;
  int iStack_10;
  int aiStack_c [2];
  float fStack_4;
  
  pvVar1 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = fStack_4;
  }
  else if (uVar4 == 2) {
    fVar5 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(pvVar1,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_4);
    fVar5 = (float)lVar6;
  }
  iVar2 = FUN_0041bf10(pvVar1,&iStack_14,(int *)&vm);
  if (iVar2 != 0) {
    FUN_00522000((void *)(iStack_14 + 0xc4 + (int)vm * 0x4c),&iStack_10,aiStack_c);
    pvVar1 = DAT_005a7b78;
    if ((iStack_10 * 100) / aiStack_c[0] < (int)fVar5) {
      if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
        iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
        *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
        iVar2 = *(int *)((int)pvVar1 + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar2 = *(int *)((int)pvVar1 + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      return;
    }
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  return;
}


