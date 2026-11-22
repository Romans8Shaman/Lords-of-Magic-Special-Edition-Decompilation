
void __cdecl op_enumhistoricevents(void *param_1)

{
  void *this;
  int iVar1;
  undefined *this_00;
  uint uVar2;
  int *piVar3;
  float local_10;
  uint local_c;
  uint local_8;
  int *local_4;
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    piVar3 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
    piVar3 = local_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    local_8 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (iVar1 != 0) {
    FUN_004d41c0(this,s_enumhistoricevents___no_such_pla_0055d814);
    return;
  }
  if (((int)param_1 < 0) || (0xf < (int)param_1)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = &DAT_005af194 + (int)param_1 * 0x1d84;
  }
  if (this_00 == (undefined *)0x0) {
    FUN_004d41c0(this,s_enumhistoricevents___no_such_pla_0055d814);
    return;
  }
  FUN_004bc970(this_00,this,uVar2,piVar3);
  return;
}


