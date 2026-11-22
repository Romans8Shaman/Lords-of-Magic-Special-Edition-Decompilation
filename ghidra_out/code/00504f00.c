
int __cdecl FUN_00504f00(int param_1,int param_2)

{
  uint uVar1;
  
  DAT_00573428 = ((int)DAT_00573428 % DAT_00573434) * DAT_0057342c -
                 ((int)DAT_00573428 / DAT_00573434) * DAT_00573438;
  if ((int)DAT_00573428 < 0) {
    DAT_00573428 = DAT_00573430 + DAT_00573428;
  }
  uVar1 = (param_2 - param_1) + 1;
  if ((int)uVar1 < 2) {
    return param_1;
  }
  return DAT_00573428 % uVar1 + param_1;
}


