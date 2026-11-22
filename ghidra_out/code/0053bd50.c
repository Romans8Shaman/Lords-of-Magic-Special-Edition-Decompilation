
undefined4 __cdecl FUN_0053bd50(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_005d6b20) &&
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00542f50(param_1);
    uVar1 = FUN_0053bdc0(param_1);
    FUN_00542fc0(param_1);
    return uVar1;
  }
  pDVar2 = FUN_0053b4c0();
  *pDVar2 = 9;
  pDVar2 = FUN_0053b4d0();
  *pDVar2 = 0;
  return 0xffffffff;
}


