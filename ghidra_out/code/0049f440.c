
void __cdecl op_getplayerintelinfo(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
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
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      FUN_00404ab0(this,0xe);
      return;
    }
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar2 == (undefined *)0x0) {
      FUN_004d41c0(this,s_getplayerintelinfo___no__me__pla_0055c908);
      return;
    }
    if (((int)uStack_18 < 0) || (0xf < (int)uStack_18)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar2 + uStack_18 * 0x88 + 0xd28;
    }
    if (puVar2 == (undefined *)0x0) {
      FUN_004d41c0(this,s_getplayerintelinfo___no__you__pl_0055c8e0);
      return;
    }
    uVar3 = FUN_0049f300(puVar2 + 0x18,uStack_14);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar3;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


