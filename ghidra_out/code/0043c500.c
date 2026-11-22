
undefined4 __thiscall FUN_0043c500(void *this,int param_1,int unused_stack_8,undefined4 *in_stack_c)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054984b;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x482c);
  ExceptionList = &local_c;
  iVar1 = FUN_004a51c0(this_00,param_1,unused_stack_8);
  iVar2 = FUN_004a8300(this_00,iVar1,2);
  if (iVar2 == -1) {
    puVar3 = (undefined4 *)Ordinal_401(0x94,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    uStack_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_0043b930(puVar3);
    }
    uStack_4 = 0xffffffff;
    FUN_0043bac0(this_01,in_stack_c);
    iVar1 = FUN_004a7d50(this_00,this_01,iVar1);
    if (iVar1 == -1) {
      if (this_01 != (int *)0x0) {
        (/*IC:0043c5a3*/**(code **)*this_01)(this_01,1);
      }
      OutputDebugStringA(s_AddBuilding_failed_00556544);
      ExceptionList = local_c;
      return 0;
    }
    (/*IC:0043c5ca*/**(code **)(*this_01 + 0x2c))(this_01);
  }
  ExceptionList = local_c;
  return 1;
}


