
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004f6160(int *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(*param_1 + 8) - *(float *)(*param_2 + 8);
  if ((NAN(fVar1) || NAN(_DAT_0054ded0)) || fVar1 < _DAT_0054ded0) {
    return 0xffffffff;
  }
  if ((!NAN(fVar1) && !NAN(_DAT_0054ded0)) && _DAT_0054ded0 < fVar1) {
    return 1;
  }
  return 0;
}


