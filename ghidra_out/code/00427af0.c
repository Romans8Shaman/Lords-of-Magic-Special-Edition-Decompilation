
void __cdecl FUN_00427af0(void)

{
  int arg1;
  
  if ((DAT_00578800 & 1) == 0) {
    DAT_00578800 = DAT_00578800 | 1;
    while (arg1 = DAT_00578818, DAT_00578818 = arg1, arg1 != 0) {
      DAT_00578818 = *(int *)(arg1 + 0x14);
      if (arg1 != 0) {
        DAT_005788c8 = DAT_005788c8 + -0x18;
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}


