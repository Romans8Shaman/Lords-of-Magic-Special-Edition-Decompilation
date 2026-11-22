
void __cdecl op_canaffordbuilding_q(void *vm)

{
  void *this;
  int iVar1;
  int *piVar2;
  int *this_00;
  int iVar3;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  uint auStack_8 [2];
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_1c,&uStack_14,&fStack_10);
  if (iVar1 == 0) {
LAB_004451df:
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    return;
  }
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_18,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  FUN_0040adb0(this,auStack_8);
  iVar1 = FUN_004026a0(auStack_8,&uStack_20,&uStack_14,&fStack_10);
  if (iVar1 == 0) goto LAB_004451df;
  piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,2);
  if (piVar2 == (int *)0x0) {
    if (uStack_20 != 0xffffffff) {
      piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,1);
      if (piVar2 != (int *)0x0) {
        iVar1 = FUN_0050f7b0(piVar2,&uStack_14);
        if (iVar1 != 0) {
          iVar1 = FUN_00452a50(uStack_14);
          if (iVar1 != -1) {
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3);
            if (this_00 != (int *)0x0) {
              iVar1 = (/*IC:004452e0*/**(code **)(*piVar2 + 0x3c))(piVar2);
              iVar3 = (/*IC:004452e9*/**(code **)(*this_00 + 0x3c))(this_00);
              if (iVar1 == iVar3) {
                fStack_10 = 0.0;
                iVar1 = (/*IC:004452f8*/**(code **)(*this_00 + 0x3c))(this_00);
                iVar1 = FUN_0044ede0(this_00,&fStack_10,uStack_18,uStack_1c,iVar1);
                if (iVar1 != 0) {
                  if (*(int *)((int)this + 0x54) != 0) {
                    iVar3 = *(int *)((int)this + 0x54) + -1;
                    *(int *)((int)this + 0x54) = iVar3;
                    iVar1 = *(int *)((int)this + 0x50);
                    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
                    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0xffffffff;
                    return;
                  }
                  goto LAB_0044535f;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((int)vm < 0) {
      vm = (void *)(int)*(short *)((int)piVar2 + 0x56);
    }
    iVar1 = (/*IC:0044523d*/**(code **)(*piVar2 + 0x3c))(piVar2);
    iVar1 = FUN_00445830(piVar2,&uStack_c,(int)vm,uStack_18,uStack_1c,iVar1);
    if (iVar1 != 0) {
      FUN_0041d1d0(this,1,0xffffffff);
      return;
    }
  }
  if (*(int *)((int)this + 0x54) != 0) {
    iVar3 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar3;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
    return;
  }
LAB_0044535f:
  *(undefined4 *)((int)this + 0x90) = 3;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


