
void __cdecl op_unitindex2realarmy(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
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
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
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
    iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    iVar4 = DAT_005ae98c;
    iVar2 = DAT_005ae998;
    if (iVar3 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    for (; iVar2 <= iVar4; iVar2 = iVar2 + 1) {
      iVar3 = FUN_004f6000(&DAT_005ae974,iVar2);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(void **)(iVar3 + 0x48) == vm)) &&
         ((int)*(char *)(iVar3 + 0x5ac) == uStack_14)) {
        uVar1 = *(undefined4 *)(iVar3 + 0x28);
        if (*(int *)((int)this + 0x54) != 0) {
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          iVar2 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
          *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
          return;
        }
        goto LAB_004e9c57;
      }
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
      return;
    }
LAB_004e9c57:
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


