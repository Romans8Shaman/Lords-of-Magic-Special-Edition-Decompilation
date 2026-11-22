
int __fastcall FUN_0040e1a0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005491bb;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x40);
    return iVar1;
  }
  ExceptionList = &local_c;
  iVar1 = Ordinal_401(0x48,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_0040dcd0(iVar1);
  ExceptionList = local_c;
  return iVar1;
}


