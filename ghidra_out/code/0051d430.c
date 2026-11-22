
void __cdecl op_getturnaibrain(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar4 == (undefined *)0x0) {
      FUN_004d41c0(this,s_no_such_player_0055b488);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
        return;
      }
    }
    else {
      if ((undefined4 *)(puVar4 + 0x1c64) == (undefined4 *)0x0) {
        FUN_004d41c0(this,s_turn_ai_not_found_00573e54);
        return;
      }
      uVar1 = *(undefined4 *)(puVar4 + 0x1c64);
      uVar2 = *(undefined4 *)(puVar4 + 0x1c68);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


