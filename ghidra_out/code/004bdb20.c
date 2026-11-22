
void __cdecl op_getplayerrace(void *param_1)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  float local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_8 = 0;
  }
  iVar2 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (((int)param_1 < 0) || (0xf < (int)param_1)) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = &DAT_005af194 + (int)param_1 * 0x1d84;
    }
    if (puVar3 == (undefined *)0x0) {
      FUN_004d41c0(this,s_no_such_player_0055b488);
      return;
    }
    uVar1 = *(undefined4 *)(puVar3 + 0x15ac);
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
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


