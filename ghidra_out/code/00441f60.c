
void __cdecl op_unittrainmaintenance(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  void *pvStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
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
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar1 = FUN_004409e0(this,&pvStack_28);
  if (iVar1 != 0) {
    FUN_00441570(pvStack_28,(int)vm,0,&uStack_14);
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
      *(uint *)(iVar1 + 4 + iVar2 * 8) = uStack_14;
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
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 2;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uStack_4;
      return;
    }
    FUN_00404ab0(this,3);
  }
  return;
}


