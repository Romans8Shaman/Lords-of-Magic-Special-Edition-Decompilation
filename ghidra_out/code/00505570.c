
void __cdecl op_setactivateprocedure(void *vm)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uVar3 = 0;
    fVar4 = fStack_4;
  }
  iVar1 = FUN_0041da00((int)vm);
  if (iVar1 == 0) {
    if (((char)uVar3 == '\x06') && ((uVar3 & 0x100) == 0)) goto LAB_005055e2;
    *(undefined4 *)((int)vm + 0x90) = 0x12;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
  }
  uVar3 = 0;
LAB_005055e2:
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
      iVar1 = *(int *)((int)vm + 0x54) + 1;
      *(int *)((int)vm + 0x54) = iVar1;
      uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
      fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)vm + 0x90) = 6;
      FUN_004d4550(vm);
      *(undefined4 *)((int)vm + 0x90) = 0;
      *(undefined4 *)((int)vm + 0xa4) = 0;
      uVar2 = 0;
    }
    uVar2 = uVar2 & 0xff;
    if (uVar2 != 1) {
      if (uVar2 == 2) {
        fStack_4 = (float)((int)fStack_4 >> 8);
      }
      else {
        if (uVar2 != 4) {
          FUN_00404ab0(vm,0xe);
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fStack_4 = (float)lVar5;
      }
    }
    iVar1 = FUN_005005f0(&DAT_00584ae8,(uint)fStack_4);
    if (iVar1 == 0) {
      FUN_004d41c0(vm,s_no_dialog_0055c39c);
      return;
    }
    *(uint *)(iVar1 + 0x2c) = uVar3;
    *(float *)(iVar1 + 0x30) = fVar4;
  }
  return;
}


