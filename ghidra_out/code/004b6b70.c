
undefined4 __cdecl FUN_004b6b70(int param_1)

{
  if (param_1 < 0) {
    return 0xffffffff;
  }
  if ((param_1 < DAT_005cd2f0) && (DAT_005cd2f4 != 0)) {
    return *(undefined4 *)(DAT_005cd2f4 + param_1 * 1000 + 0x20);
  }
  return uRam00000020;
}


