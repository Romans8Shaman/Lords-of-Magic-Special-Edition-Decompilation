
int __thiscall FUN_004c71c0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    return *param_4 + *param_3 + *param_2;
  }
  *param_2 = *(int *)((int)this + param_1 * 4 + 0x98);
  *param_3 = *(int *)((int)this + param_1 * 4 + 0xd8);
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x118);
  *param_4 = iVar1;
  return iVar1 + *param_3 + *param_2;
}


