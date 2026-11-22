
void __cdecl op_find_empty_x_y(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_18,(int)vm);
      iVar1 = FUN_004a6f60(&DAT_005ae958,iVar1,uStack_14);
      if (iVar1 < 0) {
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0xffffffff;
        }
        if (*(int *)((int)this + 0x54) != 0) {
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = 0xffffffff;
          return;
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
      else {
        iVar4 = iVar1 % DAT_005ae9c4;
        if (*(int *)((int)this + 0x54) == 0) {
          FUN_00404ab0(this,3);
        }
        else {
          iVar3 = *(int *)((int)this + 0x50);
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          *(undefined4 *)(iVar3 + iVar2 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar2 * 8) = iVar4;
        }
        iVar1 = iVar1 / DAT_005ae9c4;
        if (*(int *)((int)this + 0x54) != 0) {
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          iVar4 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
          *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
          return;
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


