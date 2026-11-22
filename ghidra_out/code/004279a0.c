
void __thiscall FUN_004279a0(void *this,int param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_1 + *(int *)this);
  bVar2 = *(byte *)(param_1 + *(int *)this);
  if ((bVar2 & 8) == 0) {
    param_1 = param_1 + 1;
    *pbVar1 = bVar2 | 8;
    FUN_00427950(this,&param_1);
  }
  return;
}


