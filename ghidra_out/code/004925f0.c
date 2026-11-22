
int __thiscall
FUN_004925f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054aa53;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00491c70(this);
  puVar2 = (undefined4 *)FUN_00491c20(this,iVar1);
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = (void *)Ordinal_401(0x14,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (this_00 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      DAT_00583650 = DAT_00583650 + 0x10;
      iVar3 = FUN_00494580(this_00,param_1,param_2,param_3,param_4,param_5);
    }
    puVar2[1] = iVar3;
    if (iVar3 != 0) {
      *puVar2 = 0xf;
      ExceptionList = local_c;
      DAT_00583650 = DAT_00583650 + -0x10;
      return iVar1;
    }
  }
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return -1;
}


