
void __cdecl op_upgradebuildingcost(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int *this_00;
  int *this_01;
  int iVar3;
  int iStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  iStack_14 = 0;
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
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
      iVar2 = (/*IC:004430ed*/**(code **)(*this_01 + 0x3c))(this_01);
      FUN_0044ede0(this_01,&iStack_14,0,this_01[0x35] + 1,iVar2);
    }
  }
  else {
    iVar2 = (/*IC:004430ca*/**(code **)(*this_00 + 0x3c))(this_00);
    FUN_0043e820(this_00,&iStack_14,this_00[0x16],this_00[0x17] + 1,iVar2);
  }
  if (iStack_14 == 0) {
    fStack_10 = 7.00649e-45;
    do {
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
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
      }
      fStack_10 = (float)((int)fStack_10 + -1);
    } while (fStack_10 != 0.0);
    return;
  }
  uVar1 = *(undefined4 *)(iStack_14 + 0x10);
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
    *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
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
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0;
  }
  uVar1 = *(undefined4 *)(iStack_14 + 0x14);
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  }
  uVar1 = *(undefined4 *)(iStack_14 + 0x18);
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
    *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  }
  uVar1 = *(undefined4 *)(iStack_14 + 0xc);
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar3 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar3;
  iVar2 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar2 + iVar3 * 8) = 2;
  *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
  return;
}


