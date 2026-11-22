
undefined4 __thiscall FUN_0040f600(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  int local_4;
  
  local_4 = 0;
  for (iVar2 = *(int *)this; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x4c)) {
    local_4 = local_4 + 1;
  }
  uVar1 = FUN_00539660((char *)&local_4,4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  this_00 = *(void **)this;
  if (this_00 == (void *)0x0) {
    return 1;
  }
  do {
    iVar2 = FUN_0040ec50(this_00,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    this_00 = *(void **)((int)this_00 + 0x4c);
  } while (this_00 != (void *)0x0);
  return 1;
}


