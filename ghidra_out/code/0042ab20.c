
void __cdecl op_wieldartifactifroom(void *vm)

{
  void *this;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar4 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar5 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar5 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) goto LAB_0042acb1;
      lVar6 = __ftol((float10)fStack_4);
      fVar5 = (float)lVar6;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar4 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar4;
    uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar4 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fStack_4 = (float)((int)fStack_4 >> 8);
    }
    else {
      if (uVar1 != 4) {
LAB_0042acb1:
        *(undefined4 *)((int)this + 0x90) = 0xe;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        return;
      }
      lVar6 = __ftol((float10)fStack_4);
      fStack_4 = (float)lVar6;
    }
  }
  iVar4 = FUN_0041be40(this,&vm);
  if (iVar4 != 0) {
    if (((int)fStack_4 < 0) || (*(int *)((int)vm + 0x4c) <= (int)fStack_4)) {
      FUN_004d41c0(this,s_no_such_unit_00555df8);
    }
    else {
      iVar4 = (int)fStack_4 * 0x4c;
      piVar2 = (int *)FUN_00428840((void *)((int)vm + iVar4 + 0xc4),(int)fVar5);
      if (piVar2 == (int *)0x0) {
        FUN_004d41c0(this,s_no_such_artifact_00555da0);
        return;
      }
      iVar3 = FUN_00428210((void *)((int)vm + iVar4 + 0xc4),piVar2);
      if (iVar3 != 0) {
        FUN_004282a0((void *)((int)vm + iVar4 + 0xc4),*(undefined4 *)((int)vm + 0x28),fStack_4,
                     piVar2[3],1);
        return;
      }
    }
  }
  return;
}


