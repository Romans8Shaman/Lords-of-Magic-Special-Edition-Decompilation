
void __cdecl op_canupgradebuilding_q(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  int iVar3;
  undefined4 uStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  iVar3 = 0;
  uStack_14 = 0;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  if (this_00 == (int *)0x0) {
    if (this_01 == (int *)0x0) {
      FUN_004d41c0(this,s_no_building_or_city_00556710);
    }
    else {
      iVar3 = (/*IC:00442fa4*/**(code **)(*this_01 + 0x3c))(this_01);
      iVar3 = FUN_0044ede0(this_01,&uStack_14,0,this_01[0x35] + 1,iVar3);
    }
  }
  else {
    iVar3 = (/*IC:00442f7e*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar3 = FUN_0043e820(this_00,&uStack_14,this_00[0x16],this_00[0x17] + 1,iVar3);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 0x50);
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(uint *)(iVar1 + 4 + iVar2 * 8) = -(uint)(iVar3 != 0);
  return;
}


