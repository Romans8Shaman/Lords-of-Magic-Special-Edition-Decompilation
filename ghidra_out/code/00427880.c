
undefined4 __thiscall FUN_00427880(void *this,int *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (*param_1 < 0) {
    return 8;
  }
  pbVar2 = (byte *)(*(int *)this + *param_1);
  bVar1 = *pbVar2;
  if (param_2 != 0) {
    *pbVar2 = 0x10;
  }
  if ((bVar1 & 8) == 0) {
    *param_1 = *param_1 + 1;
    return bVar1 & 7;
  }
  *param_1 = -1;
  return bVar1 & 7;
}


