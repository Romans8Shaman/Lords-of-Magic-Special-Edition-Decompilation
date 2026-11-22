
void __fastcall FUN_004c6f70(int param_1)

{
  int iVar1;
  int arg1;
  
  iVar1 = *(int *)(param_1 + 0x198);
  while (arg1 = iVar1, arg1 != 0) {
    iVar1 = *(int *)(arg1 + 4);
    if (arg1 != 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}


