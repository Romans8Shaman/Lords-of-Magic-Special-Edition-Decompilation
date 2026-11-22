
void __cdecl op_buybuildingoffaith(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *this_00;
  int *this_01;
  int iVar4;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
  if (iVar1 != 0) {
    FUN_0040adb0(this,&uStack_8);
    iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
    if (iVar1 != 0) {
      FUN_0040adb0(this,&uStack_8);
      iVar1 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
      if (iVar1 != 0) {
        FUN_0040adb0(this,&uStack_8);
        iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_10,&fStack_c);
        if (iVar1 != 0) {
          if (vm == (void *)0xfffffffd) {
            vm = *(void **)(DAT_005ae94c + 0x28);
          }
          uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
          uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
          if ((uVar2 == 0) && (uVar3 == 0)) {
            if (vm == (void *)0xffffffff) {
              FUN_004d41c0(this,s_No_building_or_city_00556824);
              return;
            }
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
            if (this_00 != (int *)0x0) {
              iVar1 = FUN_0050f7b0(this_00,&fStack_10);
              if (iVar1 != 0) {
                iVar1 = FUN_00452a50((int)fStack_10);
                if (iVar1 != -1) {
                  this_01 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,3);
                  if (this_01 != (int *)0x0) {
                    iVar1 = (/*IC:004461e3*/**(code **)(*this_00 + 0x3c))(this_00);
                    iVar4 = (/*IC:004461ec*/**(code **)(*this_01 + 0x3c))(this_01);
                    if (iVar1 == iVar4) {
                      FUN_0044f1c0(vm,uStack_14,uStack_18,uStack_1c,uStack_20);
                      return;
                    }
                  }
                }
              }
            }
          }
          FUN_0044f1c0(vm,uStack_14,uStack_18,uStack_1c,uStack_20);
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
}


