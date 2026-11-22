
undefined4 * __fastcall FUN_004c3bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b66b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0x96;
  param_1[2] = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x4b4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x96;
    FUN_00539ff0(puVar2,8,0x96,&LAB_004c3ba0,op_sunlight);
  }
  param_1[2] = puVar2;
  param_1[1] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


