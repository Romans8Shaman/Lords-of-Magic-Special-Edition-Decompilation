
undefined4 * __fastcall FUN_0049f170(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_0054afab;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = puVar2[0xf];
    puVar2[0xf] = 0;
    FUN_0049c830((int)puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)Ordinal_401(0x40,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puStack_4 = puVar2;
  puVar2 = FUN_0049c890(puVar1);
  ExceptionList = local_c;
  return puVar2;
}


