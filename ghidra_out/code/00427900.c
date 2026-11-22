
void __thiscall FUN_00427900(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)this + param_1);
  if ((*pbVar1 & 8) == 0) {
    *pbVar1 = param_2;
    return;
  }
  *pbVar1 = param_2;
  *(byte *)(*(int *)this + param_1) = *(byte *)(*(int *)this + param_1) | 8;
  return;
}


