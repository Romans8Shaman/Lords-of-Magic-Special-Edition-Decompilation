
void __cdecl op_exitbuilding(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  longlong lVar4;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  int *piStack_4;
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    piVar3 = piStack_4;
  }
  else if (uVar1 == 2) {
    piVar3 = (int *)((int)piStack_4 >> 8);
  }
  else {
    if (uVar1 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar4 = __ftol((float10)(float)piStack_4);
    piVar3 = (int *)lVar4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  if (this_00 == (void *)0x0) {
    FUN_004d41c0(this,s_building_in_upgradebuilding_does_0055663c);
    return;
  }
  if (*(int *)((int)this_00 + 0x48) != 0) {
    FUN_0043de70(this_00,piVar3);
  }
  return;
}


