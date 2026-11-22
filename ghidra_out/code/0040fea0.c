
void __cdecl op_setchampionbrainarg(void *vm)

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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
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
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
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
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        iVar1 = FUN_0040f4e0(&DAT_005aeed0,(int)vm);
        if (iVar1 == 0) {
          FUN_004d41c0(this,s_no_brain_005557ac);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
            return;
          }
        }
        else {
          if ((-1 < (int)uStack_18) && ((int)uStack_18 < *(int *)(iVar1 + 0x44))) {
            *(uint *)(iVar1 + 0x18 + (*(int *)(iVar1 + 0x44) - uStack_18) * 4) = uStack_14;
            return;
          }
          FUN_004d41c0(this,s_bad_arg___005557a0);
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
            return;
          }
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


