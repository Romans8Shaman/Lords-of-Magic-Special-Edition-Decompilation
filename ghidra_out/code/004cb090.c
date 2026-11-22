
void __cdecl op_idiv(void *vm)

{
  void *this;
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  float fStack_c;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar2 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar4 = 0;
    fVar2 = fStack_4;
  }
  fStack_4 = fVar2;
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    uStack_10 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    fStack_c = fStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    uVar4 = uVar4 & 0xff;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        fVar2 = (float)((int)fVar2 >> 8);
      }
      else {
        if (uVar4 != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          goto LAB_004cb1be;
        }
        lVar5 = __ftol((float10)fStack_4);
        fVar2 = (float)lVar5;
      }
    }
    if (fVar2 == 0.0) {
      FUN_004d41c0(this,s_divide_by_zero_0055e1d4);
      fVar2 = fStack_4;
    }
    else {
      fVar2 = (float)((int)vm / (int)fVar2);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(float *)(iVar1 + 4 + iVar3 * 8) = fVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
LAB_004cb1be:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


