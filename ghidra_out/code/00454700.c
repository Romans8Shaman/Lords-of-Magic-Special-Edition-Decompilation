
undefined4 * __fastcall FUN_00454700(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549ceb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 8;
  param_1[1] = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x1c0,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = 8;
    puVar2 = puVar1;
    do {
      FUN_004546e0(puVar2);
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[2] = puVar1;
  ExceptionList = pvStack_c;
  return param_1;
}


