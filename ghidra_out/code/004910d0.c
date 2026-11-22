
void __cdecl op_getitem(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int iVar5;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar3 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar3 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = (void *)FUN_005005f0(&DAT_00584ae8,(uint)vm);
  if (this_00 == (void *)0x0) {
    FUN_004d41c0(this,s_bad_dialog_identifier_0055c384);
    return;
  }
  puVar4 = (undefined4 *)FUN_0048d810(this_00,uStack_14);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_no_such_element_0055c468);
    return;
  }
  uVar1 = puVar4[3];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = *puVar4;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = puVar4[1];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
  }
  uVar1 = puVar4[4];
  uVar2 = puVar4[5];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  }
  uVar1 = puVar4[6];
  uVar2 = puVar4[7];
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 0x50);
    iVar5 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar5;
    *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
    *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  }
  uVar1 = puVar4[8];
  uVar2 = puVar4[9];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
    return;
  }
  iVar3 = *(int *)((int)this + 0x50);
  iVar5 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar5;
  *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
  *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
  return;
}


