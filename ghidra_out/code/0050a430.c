
undefined4 __thiscall FUN_0050a430(void *this,int param_1,int param_2,int param_3,int param_4)

{
  FUN_0050a570(this,param_1,param_2);
  if (DAT_005d2cd8 == (int *)0x0) {
    DAT_005d2cd8 = (int *)FUN_0050bfe0(&DAT_005d2cbc);
    if (DAT_005d2cd8 == (int *)0x0) {
      return 0;
    }
    DAT_005d2cd8[1] = param_2;
    *DAT_005d2cd8 = param_1;
    DAT_005d2cd8[2] = param_3;
    DAT_005d2cd8[4] = 0;
  }
  else {
    DAT_005d2cd8[2] = DAT_005d2cd8[2] + param_3;
  }
  DAT_005d2cd8[3] = param_4;
  return 1;
}


