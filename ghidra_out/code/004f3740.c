
void __fastcall FUN_004f3740(ushort *param_1)

{
  if (((*param_1 & 8) == 0) && ((*param_1 & 0x10) != 0)) {
    if (*(int *)(param_1 + 6) != 0) {
      Ordinal_403(*(int *)(param_1 + 6),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
    if ((*(char *)((int)param_1 + 1) != '\0') && (*(int *)(param_1 + 4) != 0)) {
      Ordinal_403(*(int *)(param_1 + 4),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
  }
  return;
}


