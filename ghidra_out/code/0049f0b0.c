
void __cdecl FUN_0049f0b0(void)

{
  undefined4 *puVar1;
  int arg1;
  
  if ((DAT_005836d0 & 1) == 0) {
    DAT_005836d0 = DAT_005836d0 | 1;
    puVar1 = DAT_005836f4;
    while (puVar1 != (undefined4 *)0x0) {
      DAT_005836f4 = (undefined4 *)puVar1[0xf];
      if (puVar1 == (undefined4 *)0x0) {
        arg1 = 0;
      }
      else {
        arg1 = (/*IC:0049f0e1*/**(code **)*puVar1)(0);
      }
      puVar1 = DAT_005836f4;
      if (arg1 != 0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        puVar1 = DAT_005836f4;
      }
    }
    DAT_005836f4 = (undefined4 *)0x0;
  }
  return;
}


