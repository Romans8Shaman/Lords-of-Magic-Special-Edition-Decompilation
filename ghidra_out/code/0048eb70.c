
int * __thiscall FUN_0048eb70(void *this,int *param_1)

{
  void *pvVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = -1;
  local_8 = -1;
  local_10 = 0x280;
  local_c = 0x1e0;
  pvVar1 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      FUN_0048ec30(pvVar1,&local_10,*(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this,
                   *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40));
    }
  }
  else {
    FUN_00491910(pvVar1,&local_10,*(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this,
                 *(int *)((int)this + 4) + *(int *)(*(int *)((int)this + 0x28) + 0x40));
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return param_1;
}


