
void __cdecl op_getavecombatunitdata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  iVar4 = 0;
  iStack_24 = 0;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_c,&fStack_10);
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  fStack_10 = DAT_005ae98c;
  iVar1 = DAT_005ae998;
  if (DAT_005ae998 <= (int)DAT_005ae98c) {
    do {
      iVar2 = FUN_004f6000(&DAT_005ae974,iVar1);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(uint *)(iVar2 + 0x48) == uStack_20))
         && ((int)*(char *)(iVar2 + 0x5ac) == uStack_1c)) {
        iVar3 = FUN_00527e90((void *)(iVar2 + 0xc4),(int)vm,&iStack_18);
        if (iVar3 == 0) {
          iVar2 = FUN_00527fa0((void *)(iVar2 + 0xc4),(int)vm,&iStack_14);
          if (iVar2 == 0) goto LAB_004e851c;
          iVar2 = iStack_14 >> 8;
        }
        else {
          iVar2 = iStack_18;
        }
        iVar4 = iVar4 + iVar2;
        iStack_24 = iStack_24 + 1;
      }
LAB_004e851c:
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)fStack_10);
  }
  if (iStack_24 != 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar2 * 8) = iVar4 / iStack_24;
    return;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar1;
  iVar4 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar4 + iVar1 * 8) = 1;
  *(undefined4 *)(iVar4 + 4 + iVar1 * 8) = 0;
  return;
}


