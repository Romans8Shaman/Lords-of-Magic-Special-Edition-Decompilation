
void __fastcall FUN_00519980(int param_1)

{
  int arg1;
  int iVar1;
  
  if (*(int *)(param_1 + 0x202ac) != 0) {
    *(int *)(param_1 + 0x1ac) =
         *(int *)(param_1 + 0x1ac) -
         (*(int *)(param_1 + 0x202b4) * 8 + 4) * *(int *)(param_1 + 0x202b0);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x202b0)) {
      do {
        arg1 = *(int *)(*(int *)(param_1 + 0x202ac) + iVar1 * 4);
        if (arg1 != 0) {
          Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x202b0));
    }
    if (*(int *)(param_1 + 0x202ac) != 0) {
      Ordinal_403(*(int *)(param_1 + 0x202ac),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)(param_1 + 0x202ac) = 0;
  }
  return;
}


