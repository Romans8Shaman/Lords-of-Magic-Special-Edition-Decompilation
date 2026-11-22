
void __fastcall FUN_004b98f0(int *param_1)

{
  int arg1;
  
  for (arg1 = *param_1; arg1 != 0; arg1 = *(int *)(arg1 + 0x14)) {
    if (*(int *)(arg1 + 8) != 0) {
      Ordinal_403(*(int *)(arg1 + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    if (arg1 != 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *param_1 = 0;
  return;
}


