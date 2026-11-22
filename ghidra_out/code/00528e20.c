
void __cdecl FUN_00528e20(void)

{
  int arg1;
  
  if ((DAT_005d2f0c & 1) == 0) {
    DAT_005d2f0c = DAT_005d2f0c | 1;
    while (arg1 = DAT_005d2f50, DAT_005d2f50 = arg1, arg1 != 0) {
      DAT_005d2f50 = *(int *)(arg1 + 0x1c);
      if (arg1 != 0) {
        FUN_00526c10();
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}


