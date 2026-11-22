
undefined4 __thiscall FUN_004279d0(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint local_4;
  
  local_4 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 4))) {
    iVar1 = param_1;
    do {
      local_4 = local_4 + 1;
      if ((*(byte *)(iVar1 + *(int *)this) & 8) != 0) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  FUN_00539660((char *)&local_4,4,1,param_2);
  if (0 < (int)local_4) {
    FUN_00539660((char *)(param_1 + *(int *)this),1,local_4,param_2);
  }
  return 1;
}


