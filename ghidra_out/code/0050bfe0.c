
int __fastcall FUN_0050bfe0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054c24b;
  local_c = ExceptionList;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    *param_1 = *(int *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    return iVar2;
  }
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = FUN_00509f40(puVar1);
  ExceptionList = local_c;
  return iVar2;
}


