
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00487590(undefined4 *param_1)

{
  void *arg1;
  
  arg1 = DAT_005cd360;
  if (DAT_005cd360 != (void *)0x0) {
    FUN_004875f0(DAT_005cd360);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    DAT_005cd360 = (void *)0x0;
  }
  param_1[4] = 0;
  param_1[2] = 100;
  *param_1 = DAT_005aa1bc;
  param_1[1] = DAT_005aa1c0;
  _DAT_005aa1cc = param_1;
  return param_1;
}


