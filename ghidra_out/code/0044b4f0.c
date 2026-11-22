
undefined4 * __cdecl FUN_0044b4f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005499cc;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  switch(param_1) {
  case 0:
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)Ordinal_401(0x28,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b730(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 1:
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b8e0(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 2:
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b950(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  case 3:
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)Ordinal_401(0x48,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_0044b970(puVar1);
      goto switchD_0044b514_default;
    }
    break;
  default:
    goto switchD_0044b514_default;
  }
  puVar1 = (undefined4 *)0x0;
switchD_0044b514_default:
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 1;
    puVar1[4] = 0xffffffff;
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


