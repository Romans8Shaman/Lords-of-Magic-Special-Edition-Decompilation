
void __cdecl op_enterbuilding(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  uint uStack_14;
  float fStack_10;
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
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
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
  if (this_00 == (int *)0x0) {
    OutputDebugStringA(s_SF_enterbuilding___no_army_00556668);
  }
  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_14,2);
  if (this_01 != (int *)0x0) {
    iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    iVar2 = (/*IC:0043f816*/**(code **)(*this_01 + 0x3c))(this_01);
    if (iVar2 == iVar1) {
      iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      iVar2 = (/*IC:0043f830*/**(code **)(*this_00 + 0x3c))(this_00);
      if ((iVar2 != iVar1) && ((*(byte *)(this_01 + 0xc) & 2) != 0)) {
        FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,this_01[10],-1);
      }
    }
    FUN_004225a0(this_00,this_01,0);
  }
  return;
}


