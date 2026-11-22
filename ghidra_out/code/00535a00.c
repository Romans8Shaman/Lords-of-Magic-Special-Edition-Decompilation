
void __cdecl FUN_00535a00(int *param_1)

{
  int iVar1;
  
  FUN_00535a80((int)param_1,(int)(param_1 + 0x23),param_1[0x2c5]);
  FUN_00535a80((int)param_1,(int)(param_1 + 0x260),param_1[0x2c8]);
  FUN_005354d0(param_1,param_1 + 0x2ca);
  iVar1 = 0x12;
  do {
    if (*(short *)((int)param_1 + (uint)(byte)(&DAT_0054ec08)[iVar1] * 4 + 0xa76) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  param_1[0x5a8] = param_1[0x5a8] + iVar1 * 3 + 0x11;
  return;
}


