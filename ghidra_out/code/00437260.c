
void __fastcall FUN_00437260(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00549713;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (param_1[0x43] != 0) {
    Ordinal_403(param_1[0x43],s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004380a0(param_1 + 0x1b);
  local_4 = 0xffffffff;
  FUN_004c4e40(param_1);
  ExceptionList = pvStack_c;
  return;
}


