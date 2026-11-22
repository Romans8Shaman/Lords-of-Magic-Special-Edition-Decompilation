
void __fastcall FUN_00498b90(int *param_1)

{
  int arg1;
  int iVar1;
  
  iVar1 = 0x14;
  do {
    arg1 = *param_1;
    if (arg1 != 0) {
      FUN_00498b00(arg1);
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


