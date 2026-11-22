
void __cdecl op_addauratype(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint auStack_24 [9];
  
  FUN_0042dcc0(&uStack_48);
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_38 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_34 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_38 = 0;
    uStack_34 = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_30 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_2c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_30 = 0;
    uStack_2c = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_48 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_44 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_48 = 0;
    uStack_44 = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_40 = *(undefined4 *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_3c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_40 = 0;
    uStack_3c = uStack_4c;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_50 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_50 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_50,auStack_24,&uStack_54,(float *)&vm);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_50);
  iVar2 = FUN_004026a0(&uStack_50,&uStack_28,&uStack_54,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = FUN_0042e160(&DAT_005cd334,&uStack_48);
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar1 = *(int *)((int)this + 0x50);
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
  }
  if (iVar2 < 0) {
    FUN_004d41c0(this,s_addauratype_failed_00555eb4);
  }
  return;
}


