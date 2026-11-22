
int __fastcall FUN_00492320(int *param_1,undefined4 unused_reg_1,undefined4 *unused_stack_0)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054a9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  this = (void *)Ordinal_401(0x238,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_004e9d00(this,unused_stack_0);
  }
  puVar2[1] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  *puVar2 = 0xc;
  ExceptionList = local_c;
  return iVar1;
}


