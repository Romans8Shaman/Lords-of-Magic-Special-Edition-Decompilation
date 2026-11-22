
void __cdecl op_armycanmove_q(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float fStack_5f0;
  void *pvStack_5ec;
  undefined4 auStack_5e8 [375];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054958b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_5f0 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fStack_5f0 = (float)((int)fStack_5f0 >> 8);
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        ExceptionList = pvStack_c;
        return;
      }
      lVar5 = __ftol((float10)fStack_5f0);
      fStack_5f0 = (float)lVar5;
    }
  }
  iVar2 = FUN_0041be40(vm,&pvStack_5ec);
  if (iVar2 != 0) {
    FUN_00411610(auStack_5e8);
    uStack_4 = 0;
    FUN_00415170(pvStack_5ec,auStack_5e8,(uint)fStack_5f0);
    iVar2 = FUN_00420970(auStack_5e8);
    FUN_004117f0(auStack_5e8,0);
    if (*(int *)((int)vm + 0x54) == 0) {
      *(undefined4 *)((int)vm + 0x90) = 3;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)vm + 0x50);
      iVar3 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = -(uint)(iVar2 != 0);
    }
    uStack_4 = 0xffffffff;
    FUN_00411910(auStack_5e8);
  }
  ExceptionList = pvStack_c;
  return;
}


