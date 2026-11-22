
void __cdecl op_addbuilding(void *vm)

{
  int iVar1;
  uint uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  short asStack_b0 [2];
  uint uStack_ac;
  short asStack_a8 [2];
  uint uStack_a4;
  undefined4 auStack_a0 [19];
  undefined4 auStack_54 [18];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054988b;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_a4,(uint *)&fStack_c0,&fStack_c4);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_b8,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,(uint *)asStack_b0,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_cc = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_c8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_cc = 0;
  }
  iVar1 = FUN_004026a0(&uStack_cc,(uint *)asStack_a8,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0040adb0(vm,&uStack_cc);
  iVar1 = FUN_004026a0(&uStack_cc,&uStack_b4,(uint *)&fStack_c4,&fStack_c0);
  if (iVar1 != 0) {
    FUN_0040adb0(vm,&uStack_cc);
    iVar1 = FUN_004026a0(&uStack_cc,&uStack_bc,(uint *)&fStack_c4,&fStack_c0);
    if (iVar1 != 0) {
      FUN_0040adb0(vm,&uStack_cc);
      iVar1 = FUN_004026a0(&uStack_cc,&uStack_ac,(uint *)&fStack_c4,&fStack_c0);
      if (iVar1 == 0) {
        FUN_00404ab0(vm,0xe);
        ExceptionList = pvStack_c;
        return;
      }
      FUN_0043b990(auStack_a0,uStack_b4,asStack_a8[0],asStack_b0[0],uStack_b8,uStack_a4,0xffffffff,
                   0xffffffff,0xffffffff);
      uStack_4 = 0;
      FUN_0043c480(uStack_ac,uStack_bc,auStack_54);
      uStack_4 = 0xffffffff;
      FUN_0043ba50(auStack_a0);
      ExceptionList = pvStack_c;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  ExceptionList = pvStack_c;
  return;
}


