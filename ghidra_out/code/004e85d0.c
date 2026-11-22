
void __cdecl op_getcombatunitlevel(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
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
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      iVar1 = 0;
      fStack_10 = DAT_005ae98c;
      iVar3 = DAT_005ae998;
      if (DAT_005ae998 <= (int)DAT_005ae98c) {
        do {
          iVar2 = FUN_004f6000(&DAT_005ae974,iVar3);
          if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(void **)(iVar2 + 0x48) == vm)) &&
             ((int)*(char *)(iVar2 + 0x5ac) == uStack_14)) {
            iVar2 = FUN_005228b0((void *)(iVar2 + 0xc4),*(undefined4 *)(iVar2 + 0x28),0);
            if (iVar1 < iVar2) {
              iVar1 = iVar2;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= (int)fStack_10);
      }
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar3 + iVar2 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar2 * 8) = iVar1;
        return;
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


