
void __cdecl op_upgradebuilding(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  undefined4 uVar2;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
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
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
      this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
      if (this_00 == (int *)0x0) {
        if (this_01 == (int *)0x0) {
          FUN_004d41c0(this,s_no_such_building_005566b8);
          return;
        }
        uVar2 = (/*IC:00440217*/**(code **)(*this_01 + 0x3c))(this_01);
        iVar1 = 0;
      }
      else {
        uVar2 = (/*IC:0044020b*/**(code **)(*this_00 + 0x3c))(this_00);
        iVar1 = this_00[0x16];
      }
      FUN_0044f1c0(vm,iVar1,uStack_14,uVar2,0xffffffff);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


