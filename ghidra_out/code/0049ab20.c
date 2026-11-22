
void __fastcall FUN_0049ab20(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00583718 = DAT_00583718 - *(int *)(*param_1 + 0x18);
    FUN_004f5800(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    Ordinal_403(param_1[1],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[1] = 0;
    DAT_00583718 = DAT_00583718 + param_1[2] * -4;
  }
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


