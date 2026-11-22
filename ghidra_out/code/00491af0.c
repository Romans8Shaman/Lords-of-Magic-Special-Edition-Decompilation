
void __fastcall thunk_FUN_00491b00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = 0;
    if (0 < *param_1) {
      do {
        FUN_00491680((undefined4 *)(param_1[1] + iVar1 * 8));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *param_1);
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      FUN_00539eb0(iVar1,8,*(int *)(iVar1 + -4),&LAB_00491670);
      if (iVar1 + -4 != 0) {
        Ordinal_403(iVar1 + -4,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
    }
    param_1[1] = 0;
  }
  return;
}


