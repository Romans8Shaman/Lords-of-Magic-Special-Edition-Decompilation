
void __cdecl op_getleaderlocation(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined *this_00;
  int iStack_18;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (this_00 == (undefined *)0x0) {
      FUN_004d41c0(this,s_No_such_player_0055d854);
      return;
    }
    FUN_004bbb70(this_00,&iStack_18,&iStack_14);
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x50);
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_18;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar2 * 8) = iStack_14;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


