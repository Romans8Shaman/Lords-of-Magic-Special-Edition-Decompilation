
void __cdecl op_getbuttonframepageinfo(void *vm)

{
  uint uVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  void *pvStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_14 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_10 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_14 = 0;
    uStack_10 = uStack_4;
  }
  iVar2 = FUN_004026a0(&uStack_14,&uStack_c,(uint *)&pvStack_8,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  pvStack_8 = (void *)FUN_00492db0(&DAT_005a7b50,uStack_c);
  if (pvStack_8 == (void *)0x0) {
    FUN_004d41c0(this,s_no_such_buttonframe_00572850);
    return;
  }
  uStack_14 = 2;
  vm = pvStack_8;
  do {
    uVar4 = 0;
    uVar5 = 0;
    puStack_18 = &DAT_00579274;
    if ((*(int **)vm != (int *)0x0) && (iVar2 = **(int **)vm, iVar2 != 0)) {
      uVar4 = *(undefined4 *)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 8);
      if (*(undefined1 **)(iVar2 + 0x1c) != (undefined1 *)0x0) {
        puStack_18 = *(undefined1 **)(iVar2 + 0x1c);
      }
    }
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar4;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar5;
    }
    if (*(int *)((int)this + 0x54) == 0) {
      *(undefined4 *)((int)this + 0x90) = 3;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar2 + iVar3 * 8) = 8;
      *(undefined1 **)(iVar2 + 4 + iVar3 * 8) = puStack_18;
    }
    vm = (void *)((int)vm + 4);
    uStack_14 = uStack_14 - 1;
  } while (uStack_14 != 0);
  uVar1 = *(uint *)((int)pvStack_8 + 0x48);
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar3 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar3;
  iVar2 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
  *(uint *)(iVar2 + 4 + iVar3 * 8) = -(uint)((uVar1 & 1) != 0);
  return;
}


