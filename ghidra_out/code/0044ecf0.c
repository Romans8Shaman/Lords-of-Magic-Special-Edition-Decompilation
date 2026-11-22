
undefined4 __thiscall
FUN_0044ecf0(void *this,int param_1,int unused_stack_8,undefined4 unused_stack_12,
            undefined4 in_stack_10)

{
  void *this_00;
  int iVar1;
  int iVar2;
  void *this_01;
  int *this_02;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549bab;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x482c);
  ExceptionList = &local_c;
  iVar1 = FUN_004a51c0(this_00,param_1,unused_stack_8);
  iVar2 = FUN_004a8300(this_00,iVar1,3);
  if (iVar2 == -1) {
    this_01 = (void *)Ordinal_401(0x34c,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (this_01 == (void *)0x0) {
      this_02 = (int *)0x0;
    }
    else {
      this_02 = FUN_0044e8c0(this_01,unused_stack_12,in_stack_10);
    }
    uStack_4 = 0xffffffff;
    iVar1 = FUN_004a7d50(this_00,this_02,iVar1);
    if (iVar1 == -1) {
      if (this_02 != (int *)0x0) {
        (/*IC:0044ed91*/**(code **)*this_02)(this_02,1);
      }
      OutputDebugStringA(s_AddCapitol_failed_00557328);
      ExceptionList = local_c;
      return 0;
    }
    (/*IC:0044edb8*/**(code **)(*this_02 + 0x2c))(this_02);
    (/*IC:0044edbf*/**(code **)(*this_02 + 0x1c))(this_02);
  }
  ExceptionList = local_c;
  return 1;
}


