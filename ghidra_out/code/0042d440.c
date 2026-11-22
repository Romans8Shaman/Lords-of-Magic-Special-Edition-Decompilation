
int __fastcall FUN_0042d440(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005495eb;
  local_c = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return iVar1;
  }
  ExceptionList = &local_c;
  iVar1 = Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00427b50(iVar1);
  ExceptionList = local_c;
  return iVar1;
}


