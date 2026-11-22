
void __cdecl op_setcurrenttickalarmdata(void *vm)

{
  void *this;
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    uVar3 = 0;
    uVar4 = uStack_4;
  }
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
      iVar1 = *(int *)((int)this_00 + 0x54) + 1;
      *(int *)((int)this_00 + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this_00 + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this_00 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this_00 + 0x90) = 6;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(float *)&vm);
    this = DAT_005aee88;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this_00 + 0x90) = 0xe;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return;
    }
    vm = DAT_005aee88;
    if (DAT_005aee88 == (void *)0x0) {
      FUN_004d41c0(this_00,s_no_current_alarm_005557c8);
      return;
    }
    if (*(int *)((int)this_00 + 0x54) != 0) {
      iVar1 = *(int *)((int)this_00 + 0x50);
      iVar2 = *(int *)((int)this_00 + 0x54) + -1;
      *(int *)((int)this_00 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar4;
      FUN_00410cf0(this,this_00,uStack_10);
      return;
    }
    *(undefined4 *)((int)this_00 + 0x90) = 3;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    FUN_00410cf0(vm,this_00,uStack_10);
  }
  return;
}


