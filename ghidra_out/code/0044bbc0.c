
undefined4 __thiscall FUN_0044bbc0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int local_34;
  void *local_30;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = this;
  FUN_00526bf0((int)local_2c);
  iVar6 = 0;
  local_4 = 0;
  FUN_0044b660(this,param_1);
  if (DAT_005aa12c < 0x55) {
    pcVar4 = (char *)((int)this + 0x14);
    do {
      uVar1 = FUN_005397f0(pcVar4,4,1,param_1);
      if ((uVar1 != 1) || (uVar1 = FUN_005397f0((char *)&local_34,4,1,param_1), uVar1 != 1)) {
LAB_0044bd93:
        local_4 = 0xffffffff;
        FUN_00526c10();
        ExceptionList = local_c;
        return 0;
      }
      for (; local_34 != 0; local_34 = local_34 + -1) {
        iVar2 = FUN_00526c20(local_2c,param_1);
        if (iVar2 == 0) goto LAB_0044bd93;
        FUN_0044ba50(this,local_2c,iVar6);
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 4;
    } while (iVar6 < 6);
    iVar6 = 0;
    piVar5 = (int *)((int)this + 0x14);
    do {
      if (*piVar5 < 1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 6);
    *(int *)((int)this + 0x44) = iVar6;
    local_34 = 0;
  }
  else {
    piVar5 = (int *)((int)this + 0x44);
    uVar1 = FUN_005397f0((char *)piVar5,4,1,param_1);
    if (uVar1 != 1) {
      local_4 = 0xffffffff;
      FUN_00526c10();
      ExceptionList = local_c;
      return 0;
    }
    iVar2 = 0;
    iVar6 = local_34;
    if (0 < *piVar5) {
      pcVar4 = (char *)((int)local_30 + 0x14);
      do {
        uVar1 = FUN_005397f0(pcVar4,4,1,param_1);
        if ((uVar1 != 1) || (uVar1 = FUN_005397f0((char *)&local_34,4,1,param_1), uVar1 != 1))
        goto LAB_0044bd93;
        for (; local_34 != 0; local_34 = local_34 + -1) {
          iVar6 = FUN_00526c20(local_2c,param_1);
          if (iVar6 == 0) goto LAB_0044bd93;
          FUN_0044ba50(local_30,local_2c,iVar2);
        }
        iVar2 = iVar2 + 1;
        pcVar4 = pcVar4 + 4;
        iVar6 = 0;
      } while (iVar2 < *piVar5);
    }
    local_34 = iVar6;
    iVar6 = *piVar5;
    if (iVar6 < 6) {
      iVar2 = 6 - iVar6;
      puVar3 = (undefined4 *)((int)local_30 + iVar6 * 4 + 0x2c);
      do {
        puVar3[-6] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_4 = 0xffffffff;
  FUN_00526c10();
  ExceptionList = local_c;
  return 1;
}


