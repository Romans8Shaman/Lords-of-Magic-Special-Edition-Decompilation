
void __cdecl op_settooltipborders(void *vm)

{
  void *this;
  int iVar1;
  uint uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_18 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_14 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_18 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_18,&uStack_8,&uStack_1c,(float *)&vm);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_18 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_14 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_18 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_18,&uStack_4,&uStack_1c,(float *)&vm);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar1 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar1;
        uStack_18 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
        uStack_14 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
      }
      else {
        FUN_00404ab0(this,6);
        uStack_18 = 0;
      }
      iVar1 = FUN_004026a0(&uStack_18,&uStack_10,&uStack_1c,(float *)&vm);
      if (iVar1 != 0) {
        if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
          iVar1 = *(int *)((int)this + 0x54) + 1;
          *(int *)((int)this + 0x54) = iVar1;
          uStack_18 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
          uStack_14 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
        }
        else {
          *(undefined4 *)((int)this + 0x90) = 6;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
          uStack_18 = 0;
        }
        iVar1 = FUN_004026a0(&uStack_18,&uStack_c,&uStack_1c,(float *)&vm);
        if (iVar1 != 0) {
          FUN_00473a40(&DAT_005a9e04,&uStack_10);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


