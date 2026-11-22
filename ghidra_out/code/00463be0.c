
void __cdecl op_attackorder(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
      uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
      if (uVar2 != 0) {
        uVar3 = FUN_00482ac0(&DAT_005aa12c,uStack_14,0);
        if (uVar3 != 0) {
          uVar4 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(uVar2 + 0x48));
          if (((uVar4 == 0) || ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) ||
             ((iVar1 = *(int *)(uVar2 + 0x68), iVar1 != 0x11 && ((iVar1 != 0x30 && (iVar1 != 0x32)))
              ))) {
            FUN_00404f90(uVar2,uVar3);
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


