
int __thiscall FUN_004a7d50(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004f6030((void *)((int)this + 0x1c),(int)param_1);
  if (iVar1 == -1) {
    return -1;
  }
  param_1[7] = param_2;
  if (param_1[1] == 0) {
    *(uint *)(*(int *)((int)this + 100) + 4 + param_2 * 8) =
         *(uint *)(*(int *)((int)this + 100) + 4 + param_2 * 8) |
         1 << ((byte)param_1[0x12] & 0x1f) & 0xffU;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    (/*IC:004a7daa*/**(code **)(*param_1 + 0x1c))(param_1);
  }
  FUN_004a6d20(this,(int)param_1,param_2);
  return iVar1;
}


