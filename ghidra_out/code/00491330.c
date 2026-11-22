
void __cdecl op_getfocus(void *vm)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float fStack_4;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar3 != 4) {
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        goto LAB_004913e9;
      }
      lVar5 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar5;
    }
  }
  iVar2 = FUN_005005f0(&DAT_00584ae8,(uint)fStack_4);
  if (iVar2 == 0) {
    FUN_004d41c0(vm,s_bad_dialog_identifier_0055c384);
    return;
  }
  iVar2 = FUN_0048df90(iVar2);
  if (*(int *)((int)vm + 0x54) != 0) {
    iVar4 = *(int *)((int)vm + 0x54) + -1;
    *(int *)((int)vm + 0x54) = iVar4;
    iVar1 = *(int *)((int)vm + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
LAB_004913e9:
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}


