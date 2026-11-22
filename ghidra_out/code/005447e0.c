
undefined4 __cdecl FUN_005447e0(uint param_1)

{
  if (param_1 < DAT_005d6b20) {
    return *(byte *)((&DAT_005d6a20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
  }
  return 0;
}


