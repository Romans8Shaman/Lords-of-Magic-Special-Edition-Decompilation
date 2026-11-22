
void __cdecl op_upkeepbuildingcost(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_1c = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_18 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_1c = 0;
  }
  iVar1 = FUN_004026a0(&uStack_1c,(uint *)&vm,&uStack_20,&fStack_24);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  if (this_00 == (int *)0x0) {
    if (this_01 == (int *)0x0) {
      FUN_004d41c0(this,s_no_building_or_city_00556710);
    }
    else {
      iVar1 = this_01[0x35];
      iVar2 = this_01[0x11];
      this_01[0x35] = iVar1 + 1;
      this_01[0x11] = 0;
      (/*IC:00444c21*/**(code **)(*this_01 + 0x40))(this_01,&uStack_14);
      this_01[0x11] = iVar2;
      this_01[0x35] = iVar1;
    }
  }
  else {
    iVar1 = this_00[0x12];
    this_00[0x12] = 0;
    (/*IC:00444bf3*/**(code **)(*this_00 + 0x40))(this_00,&uStack_14);
    this_00[0x12] = iVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_14;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_10;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_c;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_8;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_4;
  return;
}


