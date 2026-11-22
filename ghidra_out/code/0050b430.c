
void __cdecl op_enumpromises(void *vm)

{
  void *this;
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
    piVar4 = piStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      if (((int)vm < 0) || (0xf < (int)vm)) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = &DAT_005af194 + (int)vm * 0x1d84;
      }
      if (puVar2 == (undefined *)0x0) {
        FUN_004d41c0(this,s_enumpromises___no__me__player_005739f8);
        return;
      }
      if (((int)uStack_14 < 0) || (0xf < (int)uStack_14)) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = puVar2 + uStack_14 * 0x88 + 0xd28;
      }
      if (puVar2 == (undefined *)0x0) {
        FUN_004d41c0(this,s_enumpromises___no__you__player_005739d8);
        return;
      }
      FUN_0050a520(puVar2,this,uVar3,piVar4);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


