
void __thiscall FUN_004b9a00(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int arg1;
  int iVar3;
  
  arg1 = *(int *)this;
  iVar2 = 0;
  if (arg1 == 0) {
    OutputDebugStringA(s_EffectPalettePool__Release___not_0055d5b8);
  }
  else {
    while (*(int *)(arg1 + 8) != param_1) {
      piVar1 = (int *)(arg1 + 0x14);
      iVar2 = arg1;
      arg1 = *piVar1;
      if (*piVar1 == 0) {
        OutputDebugStringA(s_EffectPalettePool__Release___not_0055d5b8);
        return;
      }
    }
    iVar3 = *(int *)(arg1 + 0x10) + -1;
    *(int *)(arg1 + 0x10) = iVar3;
    if (iVar3 < 1) {
      if (iVar2 == 0) {
        *(undefined4 *)this = *(undefined4 *)(arg1 + 0x14);
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(arg1 + 0x14);
      }
      if (*(int *)(arg1 + 8) != 0) {
        Ordinal_403(*(int *)(arg1 + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      if (arg1 != 0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
        return;
      }
    }
  }
  return;
}


