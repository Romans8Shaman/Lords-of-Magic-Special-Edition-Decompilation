
void __fastcall FUN_00508b00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[3] != 0) {
    iVar1 = 0;
    if (0 < (int)param_1[2]) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + param_1[3]) != 0) {
          Ordinal_403(*(int *)(iVar2 + param_1[3]),s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar1 < (int)param_1[2]);
    }
    if (param_1[3] != 0) {
      Ordinal_403(param_1[3],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    param_1[3] = 0;
  }
  if (param_1[6] != 0) {
    Ordinal_403(param_1[6],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[6] = 0;
  }
  if (param_1[9] != 0) {
    Ordinal_403(param_1[9],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[9] = 0;
  }
  if (param_1[0xd] != 0) {
    Ordinal_403(param_1[0xd],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    Ordinal_403(param_1[0xe],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[0xe] = 0;
  }
  if (param_1[7] != 0) {
    Ordinal_403(param_1[7],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[7] = 0;
  }
  if (param_1[8] != 0) {
    Ordinal_403(param_1[8],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[8] = 0;
  }
  if (param_1[4] != 0) {
    Ordinal_403(param_1[4],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[4] = 0;
  }
  iVar1 = param_1[0x55];
  if (iVar1 != 0) {
    FUN_00539eb0(iVar1,0x10,*(int *)(iVar1 + -4),FUN_0046ba20);
    if (iVar1 + -4 != 0) {
      Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    param_1[0x55] = 0;
  }
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[0x56] = 0;
  *param_1 = 0;
  return;
}


