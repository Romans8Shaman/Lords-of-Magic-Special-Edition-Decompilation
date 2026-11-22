
void __fastcall FUN_004bca80(int param_1)

{
  int iVar1;
  int arg1;
  
  iVar1 = *(int *)(param_1 + 0xd24);
  while (arg1 = iVar1, arg1 != 0) {
    iVar1 = *(int *)(arg1 + 0x20);
    if (arg1 == DAT_005844c8) {
      DAT_005844c8 = 0;
    }
    if (arg1 != 0) {
      op_sunlight();
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *(undefined4 *)(param_1 + 0xd24) = 0;
  return;
}


