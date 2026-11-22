
void __cdecl op_getcapitolfaiths(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  if (uVar3 != 0) {
    uVar5 = FUN_0043dbb0(uVar3);
    if (uVar5 == 0) {
      if (*(int *)((int)this + 0x54) == 0) {
        FUN_00404ab0(this,3);
      }
      else {
        iVar2 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
      }
    }
    else {
      uVar1 = *(undefined4 *)(uVar5 + 0x80);
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
      }
    }
    uVar3 = FUN_0043dbd0(uVar3);
    if (uVar3 == 0) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)(uVar3 + 0x80);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
        return;
      }
    }
    FUN_00404ab0(this,3);
    return;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  iVar2 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
  *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
  return;
}


