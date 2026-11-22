
void __cdecl op_addfaithselection(void *vm)

{
  void *this;
  int iVar1;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_8;
  
  FUN_004546e0(&uStack_38);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_48,&uStack_44,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_54,&uStack_44,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_58,&uStack_44,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_40 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_40 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_40,&uStack_4c,&uStack_44,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_40);
  iVar1 = FUN_004026a0(&uStack_40,&uStack_50,&uStack_44,(float *)&vm);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_40);
    iVar1 = FUN_004026a0(&uStack_40,&uStack_34,&uStack_44,(float *)&vm);
    if (iVar1 != 0) {
      uStack_30 = uStack_50;
      uStack_28 = uStack_50;
      uStack_20 = uStack_58;
      uStack_1c = uStack_54;
      uStack_2c = uStack_4c;
      uStack_8 = uStack_48;
      uStack_24 = uStack_4c;
      uStack_18 = 0;
      uStack_14 = 0;
      if ((((int)uStack_34 < 0) || (DAT_005cd2f0 <= (int)uStack_34)) || (DAT_005cd2f4 == 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = DAT_005cd2f4 + uStack_34 * 1000;
      }
      if (iVar1 != 0) {
        uStack_10 = *(undefined4 *)(iVar1 + 0x1c);
      }
      FUN_00454780(&DAT_005aa1dc,&uStack_38);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


