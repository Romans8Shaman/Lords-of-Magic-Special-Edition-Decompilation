
undefined4 __thiscall FUN_0051c790(void *this,int *param_1)

{
  int *piVar1;
  int *unused_stack_0;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c3db;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)((int)this + 0x70);
  ExceptionList = &pvStack_c;
  if (iVar5 != 0) {
    ExceptionList = &pvStack_c;
    FUN_00539eb0(iVar5,0x14,*(int *)(iVar5 + -4),op_sunlight);
    if (iVar5 + -4 != 0) {
      Ordinal_403(iVar5 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  unused_stack_0 = param_1;
  FUN_005397f0((char *)((int)this + 0x68),4,1,param_1);
  FUN_005397f0((char *)((int)this + 0x6c),4,1,unused_stack_0);
  piVar1 = (int *)((int)this + 0x74);
  FUN_005397f0((char *)piVar1,4,1,unused_stack_0);
  iVar5 = *piVar1;
  piVar2 = (int *)Ordinal_401(iVar5 * 0x14 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar5;
    param_1 = piVar2 + 1;
    FUN_00539ff0(param_1,0x14,iVar5,&LAB_0051bc20,op_sunlight);
    piVar2 = param_1;
  }
  uStack_4 = 0xffffffff;
  *(int **)((int)this + 0x70) = piVar2;
  if (piVar2 == (int *)0x0) {
    *piVar1 = 0;
    uVar3 = 0;
  }
  else {
    iVar5 = 0;
    if (0 < *piVar1) {
      do {
        FUN_004bd210(unused_stack_0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *piVar1);
    }
    if (0x37 < DAT_005aa12c) {
      if (DAT_005aa12c < 0x4d) {
        param_1 = (int *)0x13;
      }
      else {
        FUN_005397f0((char *)&param_1,4,1,unused_stack_0);
      }
      iVar5 = 0;
      if (0 < (int)param_1) {
        pcVar4 = (char *)((int)this + 0x10);
        do {
          FUN_005397f0(pcVar4,4,1,unused_stack_0);
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 4;
        } while (iVar5 < (int)param_1);
      }
    }
    if (0x5a < DAT_005aa12c) {
      FUN_005397f0((char *)((int)this + 0x78),0x40,1,unused_stack_0);
    }
    uVar3 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar3;
}


