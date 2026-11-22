
void __cdecl FUN_00509ee0(void)

{
  int arg1;
  
  if ((DAT_005d2cb8 & 1) == 0) {
    DAT_005d2cb8 = DAT_005d2cb8 | 1;
    while (arg1 = DAT_005d2cbc, DAT_005d2cbc = arg1, arg1 != 0) {
      DAT_005d2cbc = *(int *)(arg1 + 0x14);
      if (arg1 != 0) {
        op_sunlight();
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}


