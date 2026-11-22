
void __cdecl op_getuserproc(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uVar5 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar5 = 0;
  }
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar5 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004e1f53;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  if (((int)fStack_4 < 0) || (0x2c < (int)fStack_4)) {
    FUN_004d41c0(vm,s_getuserproc___no_such_procedure_i_00572a00);
    return;
  }
  uVar1 = *(undefined4 *)(&DAT_005a7bc4 + (int)fStack_4 * 8);
  uVar2 = *(undefined4 *)(&DAT_005a7bc8 + (int)fStack_4 * 8);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar3 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar3 + iVar4 * 8) = uVar1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004e1f53:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


