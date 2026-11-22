
void __cdecl op_getunitlevel(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  this = vm;
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_no_unit_num_00572ac0);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_no_army_00555960);
    return;
  }
  puVar3 = FUN_00485080(&DAT_005aa12c,uStack_14,0x3f);
  if (((puVar3 == (undefined4 *)0x0) || ((int)vm < 0)) || ((int)puVar3[0x13] <= (int)vm)) {
    FUN_004d41c0(this,s_bad_arguments_00572864);
    return;
  }
  if (puVar3[10] == -1) {
    OutputDebugStringA(s_army_identity_trouble__00572aa4);
  }
  iVar2 = FUN_005228b0(puVar3 + (int)vm * 0x13 + 0x31,uStack_14,vm);
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar4 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar4;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
  *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
  return;
}


