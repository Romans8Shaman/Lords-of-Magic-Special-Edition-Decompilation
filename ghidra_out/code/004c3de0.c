
int __fastcall
FUN_004c3de0(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4)

{
  int iVar1;
  void *this;
  undefined4 *arg1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054b6ab;
  local_c = ExceptionList;
  if (*param_1 <= param_1[1]) {
    return 0;
  }
  ExceptionList = &local_c;
  this = (void *)Ordinal_401(8,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    arg1 = (undefined4 *)0x0;
  }
  else {
    arg1 = (undefined4 *)FUN_004c3bb0(this,unused_stack_0,(undefined1)unused_stack_4);
  }
  iVar1 = param_1[1];
  uStack_4 = 0xffffffff;
  FUN_004c3db0(param_1,arg1);
  if (arg1 != (undefined4 *)0x0) {
    op_sunlight();
    Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  ExceptionList = local_c;
  return iVar1;
}


