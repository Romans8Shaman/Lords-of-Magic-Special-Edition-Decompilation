
void __cdecl op_setincombatspoils(void *vm)

{
  void *this;
  int iVar1;
  uint uStack_18;
  int iStack_14;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&fStack_c,(uint *)&vm,&fStack_10);
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
      iVar1 = FUN_004bdce0(this,&iStack_14);
      if (iVar1 != 0) {
        if ((-1 < (int)uStack_18) && ((int)uStack_18 < 5)) {
          if (*(int *)(iStack_14 + 0x15a8) == DAT_005aa7d4) {
            *(void **)(&DAT_005cd1c4 + uStack_18 * 4) = vm;
            return;
          }
          if (*(int *)(iStack_14 + 0x15a8) == DAT_005aadb0) {
            *(void **)(&DAT_005cd1d8 + uStack_18 * 4) = vm;
            return;
          }
          FUN_004d41c0(this,s_error___player_not_attacker_or_d_005577a0);
          return;
        }
        FUN_004d41c0(this,s_invalid_spoils_type_0055778c);
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


