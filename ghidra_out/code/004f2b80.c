
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2b80(float param_1)

{
  int in_ECX;
  
  if ((!NAN(param_1) && !NAN(_DAT_0054de18)) && _DAT_0054de18 <= param_1) {
    param_1 = param_1 - _DAT_0054de18;
  }
  if ((NAN(param_1) || NAN(_DAT_0054de1c)) || param_1 < _DAT_0054de1c) {
    param_1 = param_1 - _DAT_0054de20;
  }
  *(float *)(in_ECX + 4) = param_1;
  return;
}


