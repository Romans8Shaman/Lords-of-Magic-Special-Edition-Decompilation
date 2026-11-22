
void __cdecl op_setuserproc(void *vm)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    uVar4 = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar2 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
    fVar2 = fStack_4;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fVar2 = (float)((int)fVar2 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar5 = __ftol((float10)fVar2);
      fVar2 = (float)lVar5;
    }
  }
  if (((int)fVar2 < 0) || (0x2c < (int)fVar2)) {
    FUN_004d41c0(vm,s_setuserproc___no_such_procedure_i_005729dc);
    return;
  }
  *(undefined4 *)(&DAT_005a7bc4 + (int)fVar2 * 8) = uVar4;
  *(float *)(&DAT_005a7bc8 + (int)fVar2 * 8) = fStack_4;
  return;
}


