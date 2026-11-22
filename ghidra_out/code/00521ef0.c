
uint __fastcall FUN_00521ef0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return ~*(uint *)(iVar1 + 0x14) >> 0x15 & 1;
}


