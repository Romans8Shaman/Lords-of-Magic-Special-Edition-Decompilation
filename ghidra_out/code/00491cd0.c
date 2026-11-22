
int __fastcall
FUN_00491cd0(int *param_1,undefined4 unused_reg_1,uint unused_stack_0,int unused_stack_4,
            int unused_stack_8)

{
  int *arg1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *this;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054a90b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  this = (undefined4 *)Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610(this);
  }
  puVar2[1] = this;
  uStack_4 = 0xffffffff;
  iVar3 = -1;
  if (this != (undefined4 *)0x0) {
    iVar3 = FUN_004952c0(this,unused_stack_0,unused_stack_4,unused_stack_8);
    if (iVar3 == 0) {
      arg1 = (int *)puVar2[1];
      if (arg1 != (int *)0x0) {
        DAT_00583648 = DAT_00583648 + -0x20;
        FUN_00495590(arg1);
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      puVar2[1] = 0;
      ExceptionList = local_c;
      return -1;
    }
    *puVar2 = 1;
    iVar3 = iVar1;
  }
  ExceptionList = local_c;
  return iVar3;
}


