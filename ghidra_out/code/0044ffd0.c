
undefined4 __thiscall FUN_0044ffd0(void *this,int *param_1)

{
  uint uVar1;
  int *this_00;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  undefined *this_01;
  bool bVar8;
  void *pvStack_628;
  int iStack_624;
  int iStack_620;
  void *local_61c;
  uint local_618;
  int local_614;
  int iStack_610;
  int iStack_60c;
  int local_608;
  int iStack_604;
  undefined4 uStack_600;
  uint auStack_5fc [2];
  int iStack_5f4;
  int iStack_5f0;
  int iStack_5ec;
  undefined4 auStack_5e8 [18];
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined1 auStack_524 [1304];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549c0b;
  local_c = ExceptionList;
  local_608 = *param_1;
  uVar1 = param_1[1];
  this_01 = (undefined *)0x0;
  if ((((int)uVar1 < 0) || (DAT_005cd2f0 <= (int)uVar1)) || (DAT_005cd2f4 == 0)) {
    local_614 = 0;
  }
  else {
    local_614 = DAT_005cd2f4 + uVar1 * 1000;
  }
  ExceptionList = &local_c;
  local_61c = this;
  local_618 = uVar1;
  this_00 = (int *)FUN_00482ac0(&DAT_005aa12c,local_608,2);
  if (this_00 != (int *)0x0) {
    iVar2 = (/*IC:00450051*/**(code **)(*this_00 + 0x3c))(this_00);
    if ((-1 < iVar2) && (iVar2 < 0x10)) {
      this_01 = &DAT_005af194 + iVar2 * 0x1d84;
    }
    FUN_00441350(this_00,uVar1,param_1[2],auStack_5fc,1);
    *(int *)(this_01 + 0xd04) = *(int *)(this_01 + 0xd04) - iStack_5f4;
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    *(uint *)(this_01 + 0xcfc) = *(int *)(this_01 + 0xcfc) - auStack_5fc[0];
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    *(int *)(this_01 + 0xd08) = *(int *)(this_01 + 0xd08) - iStack_5f0;
    *(uint *)(this_01 + 0x15d8) = *(uint *)(this_01 + 0x15d8) | 0x40;
    iVar2 = FUN_0043e7b0((int)this_00);
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0xe0) - (iStack_5ec >> 8);
      *(int *)(iVar2 + 0xe0) = iVar7;
      if (iVar7 < 0) {
        pvStack_628 = (void *)-iVar7;
        *(undefined4 *)(iVar2 + 0xe0) = 0;
        FUN_004bfd70(this_01,(int *)&pvStack_628);
      }
      iStack_620 = param_1[3];
      if (iStack_620 == -1) {
        iStack_620 = this_00[7];
      }
      iVar7 = iStack_620 % DAT_005ae9c4;
      pvVar3 = (void *)(iStack_620 / DAT_005ae9c4);
      pvVar6 = (void *)((int)local_61c + 0x482c);
      pvStack_628 = pvVar3;
      iStack_624 = iVar7;
      iVar2 = FUN_004a8430(pvVar6,iStack_620);
      if (iVar2 != 0) {
        iStack_624 = iVar7 + 1;
        pvStack_628 = (void *)((int)pvVar3 + 1);
      }
      iStack_604 = FUN_004a51c0(pvVar6,iStack_624,(int)pvStack_628);
      bVar8 = false;
      iVar2 = FUN_004a8300(pvVar6,iStack_604,0);
      pvVar3 = (void *)FUN_00482ac0(local_61c,iVar2,0);
      if (pvVar3 != (void *)0x0) {
        FUN_00411610(auStack_5e8);
        uStack_4 = 0;
        uStack_59c = 1;
        FUN_00529200(auStack_524,local_618,param_1[2]);
        uStack_5a0 = (/*IC:00450200*/**(code **)(*this_00 + 0x3c))(this_00);
        iVar2 = FUN_00415610(pvVar3,(int)auStack_5e8);
        bVar8 = iVar2 == 0;
        FUN_00411760((int)auStack_5e8);
        uStack_4 = 0xffffffff;
        FUN_00411910(auStack_5e8);
      }
      uVar4 = FUN_004a4c50(pvVar6,iStack_604);
      iVar7 = local_614;
      iVar2 = iStack_620;
      uVar1 = *(uint *)(local_614 + 0x14);
      if ((uVar4 & uVar1 & 0x1c0000) == 0) {
        bVar8 = true;
      }
      if (((uVar1 & 0x80000) != 0) && ((uVar1 & 0x140000) == 0)) {
        bVar8 = true;
      }
      if (bVar8) {
        iVar5 = FUN_004a6f60(pvVar6,iStack_620,uVar1 & 0x1c0000);
        if (iVar5 < 0) {
          iVar5 = iVar2;
        }
        pvVar6 = (void *)(iVar5 / DAT_005ae9c4);
        iVar2 = iVar5 % DAT_005ae9c4;
      }
      else {
        pvVar6 = pvStack_628;
        iVar2 = iStack_624;
      }
      pvVar3 = local_61c;
      iVar2 = FUN_00480130(local_61c,iVar2,pvVar6,*(int *)(this_01 + 0x15a8),local_618,0,0,
                           *(undefined4 *)(iVar7 + 0xe8),&iStack_610,&iStack_60c,param_1[2],-1);
      pvVar6 = DAT_005a7b78;
      if (iVar2 != 0) {
        uStack_600 = *(undefined4 *)((int)pvVar3 + 0x4fc4);
        if (((char)*(uint *)((int)pvVar3 + 0x4fc0) == '\x06') &&
           ((*(uint *)((int)pvVar3 + 0x4fc0) & 0x100) == 0)) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar2 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = local_608;
          }
          pvVar6 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            iVar2 = *(int *)((int)pvVar6 + 0x50);
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = iStack_610;
          }
          pvVar6 = DAT_005a7b78;
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar6);
            *(undefined4 *)((int)pvVar6 + 0x90) = 0;
            *(undefined4 *)((int)pvVar6 + 0xa4) = 0;
          }
          else {
            iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
            iVar2 = *(int *)((int)pvVar6 + 0x50);
            *(undefined4 *)(iVar2 + iVar7 * 8) = 1;
            *(int *)(iVar2 + 4 + iVar7 * 8) = iStack_60c;
          }
          FUN_004d05e0(DAT_005a7b78,*(uint *)((int)pvVar3 + 0x4fc0),*(int **)((int)pvVar3 + 0x4fc4))
          ;
        }
      }
      *(undefined4 *)((int)pvVar3 + 0x4dc8) = 1;
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


