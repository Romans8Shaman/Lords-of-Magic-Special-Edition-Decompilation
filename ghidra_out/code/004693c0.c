
void __cdecl op_getmissiletarget(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_1c,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_1c,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_1c,&fStack_c);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    uVar4 = 0xffffffff;
    uStack_1c = 0xffffffff;
    fStack_c = DAT_005ae98c;
    uVar5 = DAT_005ae998;
    if ((int)DAT_005ae998 <= (int)DAT_005ae98c) {
      do {
        this_00 = (void *)FUN_004f6000(&DAT_005ae974,uVar5);
        if (((((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 0)) &&
             (*(int *)((int)vm + 0x48) != *(int *)((int)this_00 + 0x48))) &&
            ((iVar1 = FUN_004205e0((int)this_00), iVar1 != 0 &&
             (iVar1 = FUN_00407d50((int)this_00), iVar1 == 0)))) &&
           ((iVar1 = FUN_005071c0(this_00,*(int *)((int)this_00 + 0x48)), iVar1 != 0 &&
            (uVar2 = FUN_004a8960(&DAT_005ae958,*(int *)((int)vm + 0x1c),
                                  *(int *)((int)this_00 + 0x1c)), (int)uVar2 < (int)uStack_20)))) {
          if (((uVar5 == uStack_18) || (uVar5 == uStack_14)) || (uVar5 == uStack_10)) {
            uStack_1c = uVar5;
          }
          else {
            uVar4 = uVar5;
          }
          uStack_20 = uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 <= (int)fStack_c);
    }
    if ((uVar4 == 0xffffffff) && (uStack_1c != 0xffffffff)) {
      uVar4 = uStack_1c;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uVar4;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}


