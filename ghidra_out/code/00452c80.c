
void __cdecl FUN_00452c80(void)

{
  int arg1;
  
  if ((DAT_005792b8 & 1) == 0) {
    DAT_005792b8 = DAT_005792b8 | 1;
    while (arg1 = DAT_005792c4, DAT_005792c4 = arg1, arg1 != 0) {
      DAT_005792c4 = *(int *)(arg1 + 0x24);
      if (arg1 != 0) {
        DAT_005792fc = DAT_005792fc + -0x28;
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
    }
  }
  return;
}


