
undefined4 __thiscall FUN_00492fd0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054aaeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  iVar3 = FUN_00492db0(this,param_1);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  iVar4 = FUN_00492de0(this,param_3);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  piVar5 = (int *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    DAT_00583654 = DAT_00583654 + 0x18;
    *piVar5 = iVar3;
    piVar5[1] = 0;
    piVar5[2] = param_2;
    piVar5[4] = iVar4;
    piVar5[3] = 0;
    FUN_004958e0((int)piVar5);
  }
  puVar2[1] = piVar5;
  if (piVar5 == (int *)0x0) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  *puVar2 = 3;
  ExceptionList = local_c;
  return iVar1;
}


