
void __cdecl op_movetoward(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      iVar1 = FUN_0041be40(this,&vm);
      if (iVar1 != 0) {
        if (((int)uStack_18 < 0) || (DAT_005ae9c0 <= (int)uStack_18)) {
          FUN_004d41c0(this,s_invalid_location_0055cc04);
          return;
        }
        iVar1 = FUN_004a8b50(&DAT_005ae958,uStack_18,*(int *)((int)vm + 0x1c));
        if (-1 < iVar1) {
          iVar1 = FUN_004a6f60(&DAT_005ae958,*(int *)(DAT_005ae970 + (iVar1 + uStack_18 * 8) * 4),
                               *(uint *)((int)vm + 0x54));
          iVar2 = FUN_00420890(vm,iVar1);
          if (iVar2 != 0) {
            FUN_00420b80(vm,iVar1,0,uStack_14,0xffffffff,0xffffffff,0);
          }
        }
      }
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


