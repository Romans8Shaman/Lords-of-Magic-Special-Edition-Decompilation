
undefined4 * __fastcall
FUN_0047ea50(undefined4 *param_1,undefined4 unused_reg_1,byte *unused_stack_0,
            undefined4 unused_stack_4,undefined4 unused_stack_8,undefined4 unused_stack_12)

{
  void *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054a2e4;
  pvStack_c = ExceptionList;
  puVar2 = param_1 + 4;
  ExceptionList = &pvStack_c;
  FUN_00539ff0(puVar2,0x1c,0x100,&LAB_0047f4e0,FUN_0047f510);
  DAT_0058341c = DAT_0058341c + 0x1c14;
  local_4 = 0;
  this = (void *)Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00495290(this,unused_stack_0);
  }
  *param_1 = puVar1;
  param_1[2] = unused_stack_8;
  param_1[3] = unused_stack_12;
  param_1[1] = unused_stack_4;
  param_1[0x704] = 1;
  iVar3 = 0x100;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = pvStack_c;
  return param_1;
}


