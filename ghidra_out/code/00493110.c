
int __thiscall
FUN_00493110(void *this,int unused_stack_4,undefined4 unused_stack_8,undefined4 unused_stack_12,
            undefined4 in_stack_10)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0054ab0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  iVar3 = FUN_00491ec0(this,unused_stack_4);
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return -1;
  }
  this_00 = (void *)Ordinal_401(0x1c14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0047eb20(this_00,iVar3,unused_stack_8,unused_stack_12,in_stack_10);
  }
  puVar2[1] = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return -1;
  }
  *puVar2 = 5;
  ExceptionList = local_c;
  return iVar1;
}


