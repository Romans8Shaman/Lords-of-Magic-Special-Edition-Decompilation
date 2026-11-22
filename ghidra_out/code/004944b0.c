
void __fastcall FUN_004944b0(undefined4 *param_1)

{
  int *arg1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054abb9;
  pvStack_c = ExceptionList;
  local_4 = 0;
  DAT_0058341c = DAT_0058341c + -0x1c14;
  arg1 = (int *)*param_1;
  ExceptionList = &pvStack_c;
  if (((arg1 != (int *)0x0) && (ExceptionList = &pvStack_c, (*(byte *)(param_1 + 0x704) & 1) != 0))
     && (ExceptionList = &pvStack_c, arg1 != (int *)0x0)) {
    DAT_00583648 = DAT_00583648 + -0x20;
    ExceptionList = &pvStack_c;
    FUN_00495590(arg1);
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  local_4 = 0xffffffff;
  FUN_00539eb0(param_1 + 4,0x1c,0x100,FUN_0047f510);
  ExceptionList = pvStack_c;
  return;
}


