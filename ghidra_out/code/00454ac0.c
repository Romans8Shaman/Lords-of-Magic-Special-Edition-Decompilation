
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void op_clearfaithselection(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549d0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004b0e00(0x5aa1dc);
  iVar3 = 8;
  _DAT_005aa1dc = 8;
  _DAT_005aa1e0 = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x1c0,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    do {
      FUN_004546e0(puVar2);
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_005aa1e4 = puVar1;
  ExceptionList = pvStack_c;
  return;
}


