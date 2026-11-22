
undefined4 __fastcall FUN_004ef5b0(int param_1,undefined4 unused_reg_1,undefined4 *unused_stack_0)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)Ordinal_401(0x40,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *unused_stack_0;
    unused_stack_0 = unused_stack_0 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1[0xf] = *(undefined4 *)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = puVar1;
  return 1;
}


