
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_adjustbartertoratio(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  float fStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar3 = (float)((int)fStack_4 << 8);
  }
  else {
    fVar3 = fStack_4;
    if (uVar4 != 2) {
      if (uVar4 != 4) {
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar6 = __ftol((float10)fStack_4 * (float10)_DAT_0054d4b8);
      fVar3 = (float)lVar6;
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_00435010(&DAT_00584cd4,vm,(int)fVar3);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar5 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar5;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar5 * 8) = -(uint)(iVar2 != 0);
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


