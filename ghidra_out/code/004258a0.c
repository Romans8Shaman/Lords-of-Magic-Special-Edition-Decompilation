
void __cdecl op_isattackspell_q(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  int aiStack_c [2];
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = (float)((int)fStack_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = (float)lVar5;
  }
  iVar1 = FUN_0041bf10(this,aiStack_c,(int *)&vm);
  if (iVar1 != 0) {
    iVar1 = FUN_00529360((void *)(aiStack_c[0] + 0xc4 + (int)vm * 0x4c),1,0,(int)fVar4);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        iVar1 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
        return;
      }
    }
    else if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


