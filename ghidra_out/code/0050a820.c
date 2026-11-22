
void __cdecl op_gettreaty(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  undefined *puVar3;
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
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      if (((int)vm < 0) || (0xf < (int)vm)) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = &DAT_005af194 + (int)vm * 0x1d84;
      }
      if (puVar3 == (undefined *)0x0) {
        FUN_004d41c0(this,s_gettreaty___no__me__player_00573970);
        return;
      }
      if (((int)uStack_14 < 0) || (0xf < (int)uStack_14)) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar3 + uStack_14 * 0x88 + 0xd28;
      }
      if (puVar3 == (undefined *)0x0) {
        FUN_004d41c0(this,s_gettreaty___no__you__player_00573954);
        return;
      }
      uVar1 = *(undefined4 *)(puVar3 + 8);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
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


