
int __fastcall
FUN_00493390(int *param_1,undefined4 unused_reg_1,undefined4 unused_stack_0,
            undefined4 unused_stack_4,undefined4 unused_stack_8,undefined4 unused_stack_12)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00491c70(param_1);
  puVar2 = (undefined4 *)FUN_00491c20(param_1,iVar1);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  puVar3 = (undefined4 *)Ordinal_401(0x10,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    DAT_00583650 = DAT_00583650 + 0x10;
    *puVar3 = unused_stack_0;
    puVar3[1] = unused_stack_4;
    puVar3[2] = unused_stack_8;
    puVar3[3] = unused_stack_12;
  }
  puVar2[1] = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return -1;
  }
  *puVar2 = 6;
  return iVar1;
}


