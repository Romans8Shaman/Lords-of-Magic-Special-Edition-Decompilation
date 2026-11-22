
void __fastcall FUN_0048d6d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 != 0) {
    if (DAT_00583610 != 0) {
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x54)) {
        do {
          if (DAT_00583610 == iVar2) {
            DAT_00583610 = 0;
            break;
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x2c;
        } while (iVar1 < *(int *)(param_1 + 0x54));
      }
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      Ordinal_403(*(int *)(param_1 + 0x4c),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


