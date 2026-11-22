
int __fastcall FUN_0044c430(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549a2b;
  local_c = ExceptionList;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    return iVar1;
  }
  ExceptionList = &local_c;
  iVar1 = Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_00526bf0(iVar1);
  ExceptionList = local_c;
  return iVar1;
}


