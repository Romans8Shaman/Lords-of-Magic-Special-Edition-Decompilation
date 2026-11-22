
void __cdecl op_getbuildingrequirementdata(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_004445bb;
  }
  iVar1 = FUN_004442d0(this,&vm);
  if (iVar1 == 0) {
    return;
  }
  switch(uStack_14) {
  case 0:
    uVar3 = *(undefined4 *)((int)vm + 0x10);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
    break;
  default:
    FUN_004d41c0(this,s_invalid_data_id_00555b78);
    if (*(int *)((int)this + 0x54) == 0) {
      FUN_00404ab0(this,3);
      return;
    }
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    return;
  case 2:
    uVar3 = *(undefined4 *)((int)vm + 0x14);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
    break;
  case 3:
    uVar3 = *(undefined4 *)((int)vm + 0x18);
    goto LAB_00444596;
  case 4:
    uVar3 = *(undefined4 *)((int)vm + 0xc);
LAB_00444596:
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004445bb:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


