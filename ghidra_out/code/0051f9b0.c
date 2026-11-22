
void __cdecl op_moveaway(void *vm)

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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_c,&fStack_10);
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      iVar1 = FUN_0041be40(this,&vm);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_004a51c0(&DAT_005ae958,uStack_14,uStack_18);
      iVar2 = FUN_004a8b50(&DAT_005ae958,iVar1,*(int *)((int)vm + 0x1c));
      if (-1 < iVar2) {
        iVar4 = 10;
        iVar1 = *(int *)((int)vm + 0x1c);
        iVar3 = iVar1;
        do {
          iVar4 = iVar4 + -1;
          iVar3 = *(int *)(DAT_005ae970 + (iVar2 + iVar3 * 8) * 4);
        } while (iVar4 != 0);
        iVar2 = FUN_00420890(vm,iVar3);
        if (iVar2 == 0) {
          iVar3 = FUN_004a6f60(&DAT_005ae958,iVar3,*(uint *)((int)vm + 0x54));
        }
        iVar2 = FUN_00420890(vm,iVar3);
        if (iVar2 != 0) {
          iVar1 = iVar3;
        }
      }
      if (iVar1 == *(int *)((int)vm + 0x1c)) {
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
        FUN_00420b80(vm,iVar1,0,0xffffffff,0xffffffff,0xffffffff,0);
        if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
          return;
        }
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


