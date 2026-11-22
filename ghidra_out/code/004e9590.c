
void __cdecl op_combat_deadtarget(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_c,&uStack_10,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_10,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar2 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_10,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  vm = (void *)0xffffffff;
  uStack_10 = DAT_005ae98c;
  iVar2 = DAT_005ae998;
  if (DAT_005ae998 <= (int)DAT_005ae98c) {
    do {
      iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && ((~*(uint *)(iVar3 + 0x30) & 0x100) == 0)
          ) && ((*(uint *)(iVar3 + 0x28) != uStack_18 && (*(uint *)(iVar3 + 0x28) != uStack_14)))) {
        iVar4 = FUN_00521e00((int *)(iVar3 + 0xc4));
        if (*(int *)(iVar4 + 0x164) != 7) {
          iVar4 = FUN_00525e80(iVar3 + 0xc4);
          if (iVar4 != 0) {
            uVar1 = *(undefined4 *)(iVar3 + 0x28);
            if (*(int *)((int)this + 0x54) == 0) {
              *(undefined4 *)((int)this + 0x90) = 3;
              FUN_004d4550(this);
              *(undefined4 *)((int)this + 0x90) = 0;
              *(undefined4 *)((int)this + 0xa4) = 0;
              return;
            }
            iVar2 = *(int *)((int)this + 0x50);
            iVar3 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar3;
            *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
            return;
          }
          vm = *(void **)(iVar3 + 0x28);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)uStack_10);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x50);
  iVar3 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar3;
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(void **)(iVar2 + 4 + iVar3 * 8) = vm;
  return;
}


