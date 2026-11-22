
void __cdecl op_map2screen(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  float fStack_44;
  float fStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  void *pvStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_38,&uStack_3c,&fStack_40);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_3c,&uStack_38,&fStack_44);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_34 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_34 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_34,&uStack_3c,&uStack_38,(float *)&vm);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  pvStack_2c = vm;
  fStack_28 = fStack_44;
  fStack_24 = fStack_40;
  FUN_00469ae0(&DAT_005876d0,(float *)&pvStack_2c);
  uStack_30 = uStack_18;
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
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_18;
  }
  uStack_30 = uStack_1c;
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
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_1c;
  }
  uStack_30 = uStack_20;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar1 = *(int *)((int)this + 0x50);
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_20;
  return;
}


