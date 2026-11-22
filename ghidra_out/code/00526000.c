
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00526000(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 == 0) {
    return (float10)_DAT_0054e9e0;
  }
  return (float10)*(float *)(iVar1 + 0xf8);
}


