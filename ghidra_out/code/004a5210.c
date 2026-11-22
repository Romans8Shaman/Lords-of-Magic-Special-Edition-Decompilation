
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a5210(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a5170(param_1,param_2,param_3);
  if (*(int *)((int)param_1 + 0x54) == 0) {
    return (float10)_DAT_0054da80;
  }
  return (float10)*(float *)(*(int *)((int)param_1 + 0x54) + 4 + iVar1 * 8);
}


