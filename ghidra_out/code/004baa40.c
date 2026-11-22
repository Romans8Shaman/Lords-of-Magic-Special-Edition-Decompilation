
void __fastcall FUN_004baa40(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    Ordinal_403(param_1[2].DebugInfo,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return;
}


