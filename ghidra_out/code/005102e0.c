
undefined4 __thiscall
FUN_005102e0(void *this,int param_1,int param_2,int unused_stack_16,undefined4 param_p5)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *this_00;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  int *this_01;
  int local_1c;
  void *local_18;
  void *apvStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c31b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = this;
  iVar2 = FUN_0050f7b0(this,&local_1c);
  if ((iVar2 != 0) &&
     (((iVar3 = (/*IC:00510318*/**(code **)(*(int *)this + 0x3c))(this), iVar2 = unused_stack_16,
       unused_stack_16 == iVar3 || (unused_stack_16 < 0)) &&
      (iVar3 = FUN_00452a50(local_1c), iVar3 != -1)))) {
    this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,3);
    this_01 = (int *)0x0;
    if ((this_00 != (int *)0x0) &&
       ((iVar3 = (/*IC:00510361*/**(code **)(*this_00 + 0x3c))(this_00), iVar3 == iVar2 || (iVar2 < 0)))) {
      unused_stack_16 = 0;
      apvStack_14[0] = (void *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
      uStack_4 = 0;
      if (apvStack_14[0] != (void *)0x0) {
        iVar3 = this_00[10];
        this_01 = FUN_0043b990(apvStack_14[0],iVar2,(short)this_00[0x1d],(short)param_p5,param_1,
                               param_2,iVar3,iVar3,iVar3);
      }
      uStack_4 = 0xffffffff;
      if (this_01 != (int *)0x0) {
        if ((iVar2 < 0) ||
           (iVar3 = FUN_0043e820(this_01,&unused_stack_16,param_1,param_2,iVar2), iVar3 != 0)) {
          (/*IC:005103ff*/**(code **)(*this_01 + 0x2c))(this_01);
          this_01[7] = *(int *)((int)local_18 + 0x1c);
          piVar4 = (int *)FUN_0043e680(this_01,(int *)apvStack_14,param_1);
          iVar3 = FUN_004a51c0(&DAT_005ae958,*piVar4,piVar4[1]);
          this_01[7] = iVar3;
          iVar3 = FUN_004a7d50(&DAT_005ae958,this_01,iVar3);
          if (-1 < iVar2) {
            if ((iVar2 < 0) || (0xf < iVar2)) {
              puVar5 = (undefined *)0x0;
            }
            else {
              puVar5 = &DAT_005af194 + iVar2 * 0x1d84;
            }
            this_00[0x38] = this_00[0x38] - (*(int *)(unused_stack_16 + 0xc) >> 8);
            *(int *)(puVar5 + 0xcfc) = *(int *)(puVar5 + 0xcfc) - *(int *)(unused_stack_16 + 0x10);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
            *(int *)(puVar5 + 0xd04) = *(int *)(puVar5 + 0xd04) - *(int *)(unused_stack_16 + 0x14);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
            *(int *)(puVar5 + 0xd08) = *(int *)(puVar5 + 0xd08) - *(int *)(unused_stack_16 + 0x18);
            *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
          }
          FUN_004869d0(&DAT_005aa12c,iVar2);
          pvVar1 = DAT_005a7b78;
          if ((char)DAT_005aa180 != '\0') {
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar1);
              *(undefined4 *)((int)pvVar1 + 0x90) = 0;
              *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
            }
            else {
              iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              *(undefined4 *)(iVar2 + iVar6 * 8) = 1;
              *(int *)(iVar2 + 4 + iVar6 * 8) = iVar3;
            }
            FUN_004d05e0(DAT_005a7b78,DAT_005aa180,DAT_005aa184);
          }
          ExceptionList = local_c;
          return 1;
        }
        (/*IC:005103e2*/**(code **)*this_01)(this_01,1);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


