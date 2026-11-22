
void __cdecl op_setplayerflagimp(void *param_1)

{
  void *this;
  int iVar1;
  undefined *this_00;
  uint uVar2;
  undefined4 uVar3;
  float local_18;
  float local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(param_1,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,&local_4,(uint *)&local_14,&local_18);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,&local_8,(uint *)&local_18,&local_14);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uVar2 = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
    uVar2 = local_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_c = *(uint *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    local_10 = 0;
    local_c = local_4;
  }
  iVar1 = FUN_004026a0(&local_10,(uint *)&param_1,(uint *)&local_18,&local_14);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (((int)param_1 < 0) || (0xf < (int)param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + (int)param_1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    FUN_004d41c0(this,s_Invalid_player___0055d75c);
    return;
  }
  FUN_004bb7b0(this_00,uVar3,uVar2,local_8,local_4);
  return;
}


