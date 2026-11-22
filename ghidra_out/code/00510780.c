
void __cdecl op_templegetcity(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  int iVar3;
  int iStack_14;
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
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if ((((this_00 != (int *)0x0) && (iVar1 = FUN_0050f7b0(this_00,&iStack_14), iVar1 != 0)) &&
      (iVar1 = FUN_00452a50(iStack_14), iVar1 != -1)) &&
     (this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3), this_01 != (int *)0x0)) {
    iVar2 = (/*IC:0051086e*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar3 = (/*IC:00510877*/**(code **)(*this_01 + 0x3c))(this_01);
    if (iVar2 == iVar3) {
      if (*(int *)((int)this + 0x54) != 0) {
        iVar2 = *(int *)((int)this + 0x50);
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(int *)(iVar2 + 4 + iVar3 * 8) = iVar1;
        return;
      }
      goto LAB_005108c9;
    }
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0xffffffff;
    return;
  }
LAB_005108c9:
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


