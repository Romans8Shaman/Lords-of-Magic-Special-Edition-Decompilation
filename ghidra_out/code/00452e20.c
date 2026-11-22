
undefined4 __cdecl FUN_00452e20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_34 [36];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  iVar1 = param_1;
  puStack_8 = &LAB_00549c88;
  local_c = ExceptionList;
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  DAT_005792fc = DAT_005792fc + 0x28;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_005397f0((char *)&param_1,4,1,param_2);
  if (uVar3 != 1) {
    DAT_005792fc = DAT_005792fc + -0x28;
    ExceptionList = local_c;
    return 0;
  }
  FUN_004530e0(iVar1);
  if (0 < param_1) {
    do {
      iVar4 = FUN_00452ce0(local_34,piVar2);
      if (iVar4 == 0) {
LAB_00452f0c:
        DAT_005792fc = DAT_005792fc + -0x28;
        ExceptionList = local_c;
        return 0;
      }
      iVar4 = FUN_00452fc0(local_34,iVar1);
      if (iVar4 == 0) goto LAB_00452f0c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  DAT_005792fc = DAT_005792fc + -0x28;
  ExceptionList = local_c;
  return 1;
}


