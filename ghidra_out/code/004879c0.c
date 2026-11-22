
void __cdecl op_setfaithstartingleadertype(void *vm)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  float fStack_4;
  
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
  fVar3 = fStack_4;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      fVar3 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar2 != 4) goto LAB_00487ae4;
      lVar4 = __ftol((float10)fStack_4);
      fVar3 = (float)lVar4;
    }
  }
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
LAB_00487ae4:
        *(undefined4 *)((int)vm + 0x90) = 0xe;
        FUN_004d4550(vm);
        *(undefined4 *)((int)vm + 0x90) = 0;
        *(undefined4 *)((int)vm + 0xa4) = 0;
        return;
      }
      lVar4 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar4;
    }
  }
  if (((int)fStack_4 < 0) || (7 < (int)fStack_4)) {
    FUN_004d41c0(vm,s_no_such_faith_0055b4c0);
    return;
  }
  if (((int)fVar3 < 0) || (2 < (int)fVar3)) {
    FUN_004d41c0(vm,s_must_be_WIZARD_WARRIOR_or_THIEF_0055b4d0);
    return;
  }
  *(float *)(&DAT_005af0f8 + (int)fStack_4 * 4) = fVar3;
  return;
}


