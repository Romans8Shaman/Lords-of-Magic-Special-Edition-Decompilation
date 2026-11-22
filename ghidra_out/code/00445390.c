
void __cdecl op_canaffordbuilding_getresourcesinfo(void *vm)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  void *this;
  int iVar4;
  int *piVar5;
  int *this_00;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  int *piStack_c;
  uint auStack_8 [2];
  
  this = vm;
  bVar2 = true;
  uVar7 = 1;
  uStack_24 = 1;
  uStack_14 = 1;
  uStack_10 = 1;
  bVar1 = true;
  bVar3 = 1;
  FUN_0040adb0(vm,auStack_8);
  iVar4 = FUN_004026a0(auStack_8,&uStack_1c,(uint *)&puStack_28,(float *)&piStack_c);
  if (iVar4 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    FUN_004d41c0(this,s_invalid_data_005567d8);
    bVar1 = bVar2;
    goto LAB_004456e2;
  }
  FUN_0040adb0(this,auStack_8);
  iVar4 = FUN_004026a0(auStack_8,(uint *)&vm,(uint *)&puStack_28,(float *)&piStack_c);
  if (iVar4 != 0) {
    FUN_0040adb0(this,auStack_8);
    iVar4 = FUN_004026a0(auStack_8,&uStack_18,(uint *)&puStack_28,(float *)&piStack_c);
    if (iVar4 != 0) {
      FUN_0040adb0(this,auStack_8);
      iVar4 = FUN_004026a0(auStack_8,&uStack_20,(uint *)&puStack_28,(float *)&piStack_c);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,2);
        piStack_c = piVar5;
        if (piVar5 == (int *)0x0) {
          if ((((uStack_20 == 0xffffffff) ||
               (piVar5 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_20,1), piVar5 == (int *)0x0)) ||
              (iVar4 = FUN_0050f7b0(piVar5,&piStack_c), iVar4 == 0)) ||
             (iVar4 = FUN_00452a50((int)piStack_c), iVar4 == -1)) {
            this_00 = vm;
            puVar8 = puStack_28;
            piVar5 = vm;
          }
          else {
            this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar4,3);
            if (this_00 != (int *)0x0) {
              iVar4 = (/*IC:004455f9*/**(code **)(*piVar5 + 0x3c))(piVar5);
              iVar6 = (/*IC:00445602*/**(code **)(*this_00 + 0x3c))(this_00);
              if (iVar4 == iVar6) {
                iVar4 = (/*IC:0044560d*/**(code **)(*this_00 + 0x3c))(this_00);
                if ((iVar4 < 0) || (0xf < iVar4)) {
                  puVar8 = (undefined *)0x0;
                }
                else {
                  puVar8 = &DAT_005af194 + iVar4 * 0x1d84;
                }
                if ((int)vm < 0) {
                  vm = (void *)(int)*(short *)((int)this_00 + 0xce);
                }
                piVar5 = FUN_0043d300(&DAT_005cd31c,uStack_18,(int)vm,uStack_1c);
                if (piVar5 == (int *)0x0) {
                  bVar3 = 0;
                  uVar7 = uStack_24;
                  goto LAB_004456e2;
                }
                goto LAB_00445685;
              }
            }
            puVar8 = puStack_28;
            piVar5 = vm;
          }
        }
        else {
          iVar4 = (/*IC:004454eb*/**(code **)(*piVar5 + 0x3c))(piVar5);
          if ((iVar4 < 0) || (0xf < iVar4)) {
            puStack_28 = (undefined *)0x0;
          }
          else {
            puStack_28 = &DAT_005af194 + iVar4 * 0x1d84;
          }
          this_00 = (int *)FUN_0043e7b0((int)piVar5);
          if (this_00 == (int *)0x0) {
            bVar3 = 0;
            bVar1 = bVar2;
            goto LAB_004456e2;
          }
          if ((int)vm < 0) {
            vm = (void *)this_00[0x20];
          }
          piVar5 = FUN_0043d300(&DAT_005cd31c,uStack_18,(int)vm,uStack_1c);
          if (piVar5 == (int *)0x0) {
            bVar3 = 0;
            goto LAB_004456e2;
          }
          iVar4 = (/*IC:0044556f*/**(code **)(*this_00 + 0x3c))(this_00);
          iVar6 = (/*IC:0044557a*/**(code **)(*piStack_c + 0x3c))(piStack_c);
          if (iVar4 != iVar6) {
            bVar3 = 0;
            uVar7 = uStack_24;
            goto LAB_004456e2;
          }
          puVar8 = puStack_28;
        }
LAB_00445685:
        uStack_10 = (uint)(piVar5[3] <= this_00[0x38] * 0x100);
        bVar1 = piVar5[4] <= *(int *)(puVar8 + 0xcfc);
        uStack_24 = (uint)(piVar5[5] <= *(int *)(puVar8 + 0xd04));
        uStack_14 = (uint)(piVar5[6] <= *(int *)(puVar8 + 0xd08));
        uVar7 = uStack_24;
        goto LAB_004456e2;
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  FUN_004d41c0(this,s_invalid_data_005567d8);
  bVar1 = bVar2;
LAB_004456e2:
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uVar7 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)bVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uStack_14 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x50);
    iVar6 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar6;
    *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
    *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)(uStack_10 != 0);
  }
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar6 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar6;
  iVar4 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
  *(uint *)(iVar4 + 4 + iVar6 * 8) = -(uint)bVar3;
  return;
}


