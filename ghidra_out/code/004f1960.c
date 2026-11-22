
void __cdecl op_getspellname(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    goto LAB_004f1a48;
  }
  iVar1 = FUN_004efe80(&DAT_005aee6c,(int)vm);
  if (iVar1 == 0) {
    FUN_004d41c0(this,s_No_such_spell_0057323c);
LAB_004f1a03:
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar2;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 8;
      *(undefined **)(iVar1 + 4 + iVar2 * 8) = &DAT_00573238;
      return;
    }
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) goto LAB_004f1a03;
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar2 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar2 + iVar3 * 8) = 8;
      *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_004f1a48:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


