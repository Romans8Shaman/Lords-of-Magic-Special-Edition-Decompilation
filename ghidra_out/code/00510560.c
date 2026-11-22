
void __cdecl op_templecanbuildthistype(void *vm)

{
  void *this;
  int iVar1;
  int *this_00;
  int *this_01;
  int iVar2;
  int iStack_18;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    FUN_004d41c0(this,s_invalid_data_005567d8);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    return;
  }
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if ((((this_00 != (int *)0x0) && (iVar1 = FUN_0050f7b0(this_00,&iStack_18), iVar1 != 0)) &&
      (iVar1 = FUN_00452a50(iStack_18), iVar1 != -1)) &&
     (this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3), this_01 != (int *)0x0)) {
    iVar1 = (/*IC:0051069f*/**(code **)(*this_00 + 0x3c))(this_00);
    iVar2 = (/*IC:005106a8*/**(code **)(*this_01 + 0x3c))(this_01);
    if (iVar1 == iVar2) {
      for (iVar1 = FUN_004fbe60(&DAT_005ae974,0,2); iVar1 != 0;
          iVar1 = FUN_004fbe60(&DAT_005ae974,iVar1,2)) {
        if ((*(int *)(iVar1 + 0x80) == this_01[10]) && (*(uint *)(iVar1 + 0x58) == uStack_14)) {
          if (*(int *)((int)this + 0x54) != 0) {
            iVar2 = *(int *)((int)this + 0x54) + -1;
            *(int *)((int)this + 0x54) = iVar2;
            iVar1 = *(int *)((int)this + 0x50);
            *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
            return;
          }
          goto LAB_00510732;
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
      goto LAB_00510732;
    }
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
LAB_00510732:
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


