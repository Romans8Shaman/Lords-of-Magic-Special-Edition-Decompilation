
void __fastcall FUN_004fec80(int param_1)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  HKEY local_c;
  DWORD DStack_8;
  DWORD DStack_4;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Sierra_OnLine_Setup_LOM_005734a0,0,0xf003f,
                        &local_c);
  if (LVar1 == 0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    lpData = (LPBYTE)Ordinal_401(0x104,s_C__lomse_source_storm_h_00555130,0x3fa,0);
    *(LPBYTE *)(param_1 + 0x110) = lpData;
    DStack_8 = 0x104;
    LVar1 = RegQueryValueExA(local_c,s_CDPath_00573498,(LPDWORD)0x0,&DStack_4,lpData,&DStack_8);
    RegCloseKey(local_c);
    if (LVar1 != 0) {
      if (*(int *)(param_1 + 0x110) != 0) {
        Ordinal_403(*(int *)(param_1 + 0x110),s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  return;
}


