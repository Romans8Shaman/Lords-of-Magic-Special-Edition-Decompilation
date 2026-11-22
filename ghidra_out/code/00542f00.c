
undefined4 __cdecl FUN_00542f00(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_005d6b20) &&
     ((*(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_005d6a20)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_0053b4c0();
  *pDVar1 = 9;
  pDVar1 = FUN_0053b4d0();
  *pDVar1 = 0;
  return 0xffffffff;
}


