
void __cdecl FUN_0047e930(void)

{
  undefined4 *puVar1;
  
  if ((DAT_00583400 & 1) == 0) {
    DAT_00583400 = DAT_00583400 | 1;
    while (puVar1 = DAT_0058340c, puVar1 != (undefined4 *)0x0) {
      DAT_0058340c = (undefined4 *)puVar1[0xf];
      if (puVar1 != (undefined4 *)0x0) {
        (/*IC:0047e95f*/**(code **)*puVar1)(1);
      }
    }
    DAT_0058340c = (undefined4 *)0x0;
  }
  return;
}


