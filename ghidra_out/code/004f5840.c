
bool __fastcall FUN_004f5840(int param_1)

{
  uint arg1;
  
  DAT_00584ad0 = DAT_00584ad0 + 1;
  arg1 = (uint)*(ushort *)(*(int *)(param_1 + 8) + 4) * (uint)*(ushort *)(*(int *)(param_1 + 8) + 6)
  ;
  if (arg1 <= DAT_00584acc) {
    return DAT_00584ac8 != 0;
  }
  FUN_004f58d0();
  DAT_00584ac8 = Ordinal_401(arg1,s_c__NEWERSTORM_H_storm_h_00573258,0x3fa,0);
  if (DAT_00584ac8 == 0) {
    OutputDebugStringA(s_No_memory_for_scratch_buffer__005732a8);
    DAT_00584acc = 0;
    return DAT_00584ac8 != 0;
  }
  DAT_00584acc = arg1;
  return DAT_00584ac8 != 0;
}


