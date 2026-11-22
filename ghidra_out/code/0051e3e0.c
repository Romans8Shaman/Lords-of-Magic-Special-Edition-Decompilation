
void __cdecl op_longmoveattack(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,(uint *)&fStack_c,(float *)&puStack_14);
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&puStack_14,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&puStack_14,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  puStack_14 = FUN_00485080(&DAT_005aa12c,uStack_18,0x2f);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if (puStack_14 == (undefined4 *)0x0) {
LAB_0051e5f8:
    FUN_004d41c0(this,s_no_army_found_00573ed8);
    return;
  }
  if (uVar2 == 0) {
    if (((uVar3 == 0) && (uVar4 == 0)) && (uVar5 == 0)) {
      if (puStack_14 != (undefined4 *)0x0) {
        FUN_004d41c0(this,s_target_sprite_not_found_00573ec0);
        return;
      }
      goto LAB_0051e5f8;
    }
    if (uVar3 == 0) {
      if (uVar4 == 0) {
        iVar1 = *(int *)(uVar5 + 0x1c);
        uVar6 = 0xffffffff;
      }
      else {
        iVar1 = *(int *)(uVar4 + 0x1c);
        uVar6 = 0xffffffff;
      }
    }
    else {
      iVar1 = *(int *)(uVar3 + 0x1c);
      uVar6 = 0xffffffff;
    }
  }
  else {
    uVar6 = *(undefined4 *)(uVar2 + 0x28);
    iVar1 = *(int *)(uVar2 + 0x1c);
  }
  if ((iVar1 < 0) || (DAT_005ae9c0 <= iVar1)) {
    FUN_004d41c0(this,s_invalid_destination_00573ee8);
    return;
  }
  FUN_00420b80(puStack_14,iVar1,0x10040,uStack_10,uVar6,0xffffffff,0);
  return;
}


