
void __cdecl op_setsliderbar(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  uint uStack_20;
  uint uStack_1c;
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
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
      iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
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
        iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
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
        if (iVar1 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        this_00 = (void *)FUN_00492790(&DAT_005a7b50,(int)vm);
        if (this_00 == (void *)0x0) {
          FUN_004d41c0(this,s_setsliderbar__no_slider_with_tha_00573088);
          return;
        }
        *(uint *)((int)this_00 + 4) = uStack_20;
        *(uint *)((int)this_00 + 8) = uStack_1c;
        *(uint *)((int)this_00 + 0xc) = uStack_18;
        *(uint *)((int)this_00 + 0x10) = uStack_14;
        FUN_004eb680(this_00,*(int *)((int)this_00 + 0x150),*(int *)((int)this_00 + 0x154));
        return;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


