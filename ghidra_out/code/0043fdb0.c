
void __cdecl op_addchildbuilding(void *vm)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 auStack_a0 [19];
  undefined4 auStack_54 [18];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549956;
  pvStack_c = ExceptionList;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    ExceptionList = &pvStack_c;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_a8,(uint *)&fStack_b0,&fStack_b4);
  if (iVar1 == 0) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_ac,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_a4,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_c0 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_bc = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_c0 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_c0,&uStack_b8,(uint *)&fStack_b4,&fStack_b0);
  if (iVar1 == 0) {
    FUN_00404ab0(vm,0xe);
    ExceptionList = pvStack_c;
    return;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,uStack_b8,3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,uStack_b8,2);
  if (uVar2 != 0) {
    FUN_0043b990(auStack_a0,*(undefined4 *)(uVar2 + 0x68),(short)*(undefined4 *)(uVar2 + 0x74),
                 (short)*(undefined4 *)(uVar2 + 0x80),uStack_a4,1,*(undefined4 *)(uVar2 + 0x28),
                 *(undefined4 *)(uVar2 + 0x28),uStack_b8);
    uStack_4 = 0;
    FUN_0043c480(uStack_ac,uStack_a8,auStack_54);
    uStack_4 = 0xffffffff;
    FUN_0043ba50(auStack_a0);
  }
  if (uVar3 != 0) {
    FUN_0043b990(auStack_a0,*(undefined4 *)(uVar3 + 0x4c),*(short *)(uVar3 + 0x54),
                 *(short *)(uVar3 + 0x56),uStack_a4,1,uStack_b8,uStack_b8,uStack_b8);
    uStack_4 = 1;
    FUN_0043c480(uStack_ac,uStack_a8,auStack_54);
    uStack_4 = 0xffffffff;
    FUN_0043ba50(auStack_a0);
  }
  ExceptionList = pvStack_c;
  return;
}


