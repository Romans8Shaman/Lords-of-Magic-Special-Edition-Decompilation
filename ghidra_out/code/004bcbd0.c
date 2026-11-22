
undefined4 __thiscall FUN_004bcbd0(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b62b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_004bca80((int)this);
  FUN_005397f0((char *)((int)this + 0x15a8),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x15ac),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x15b0),4,1,param_1);
  FUN_005397f0((char *)&local_10,4,1,param_1);
  while( true ) {
    if (local_10 == (void *)0x0) {
      pvVar2 = (void *)((int)this + 0xd28);
      iVar1 = 0x10;
      local_10 = (void *)0x0;
      do {
        FUN_0050a230(pvVar2,param_1);
        pvVar2 = (void *)((int)pvVar2 + 0x88);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_00462fd0((void *)((int)this + 0x15e0),param_1);
      FUN_0051c790((void *)((int)this + 0x1c64),param_1);
      if (0x38 < DAT_005aa12c) {
        pcVar3 = (char *)((int)this + 0xcfc);
        iVar1 = 5;
        do {
          FUN_005397f0(pcVar3 + -0x14,4,1,param_1);
          FUN_005397f0(pcVar3,4,1,param_1);
          FUN_005397f0(pcVar3 + 0x14,4,1,param_1);
          pcVar3 = pcVar3 + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (0x43 < DAT_005aa12c) {
          FUN_005397f0((char *)((int)this + 0x3c),4,1,param_1);
        }
        FUN_004bf100((void *)((int)this + 0x34),param_1);
      }
      if (0x4b < DAT_005aa12c) {
        FUN_005397f0((char *)((int)this + 0x44),0x1f,1,param_1);
      }
      if (0x55 < DAT_005aa12c) {
        FUN_005397f0((char *)((int)this + 0x15d8),4,1,param_1);
      }
      if (0x67 < DAT_005aa12c) {
        FUN_005397f0((char *)((int)this + 0x68),0xc80,1,param_1);
      }
      if (0x6d < DAT_005aa12c) {
        FUN_005397f0((char *)((int)this + 0x15b4),4,1,param_1);
        FUN_005397f0((char *)((int)this + 0x15b8),4,1,param_1);
      }
      if (0x6e < DAT_005aa12c) {
        FUN_005397f0((char *)((int)this + 0x40),4,1,param_1);
      }
      *(uint *)((int)this + 0x15d8) = *(uint *)((int)this + 0x15d8) | 0x40;
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar1 = Ordinal_401(0x24,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (iVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_0050b770(iVar1);
    }
    uStack_4 = 0xffffffff;
    if (pvVar2 == (void *)0x0) break;
    FUN_0050b780(pvVar2,param_1);
    *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)this + 0xd24);
    local_10 = (void *)((int)local_10 + -1);
    *(void **)((int)this + 0xd24) = pvVar2;
  }
  ExceptionList = pvStack_c;
  return 0;
}


