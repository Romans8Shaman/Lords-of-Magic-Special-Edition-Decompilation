
undefined4 FUN_004a9a90(int param_1,uint param_2)

{
  if (param_1 == DAT_005aa7d4) {
    if ((param_2 & 0x400) != 0) {
      return 1;
    }
  }
  else if ((param_2 & 0x800) != 0) {
    return 1;
  }
  return 0;
}


