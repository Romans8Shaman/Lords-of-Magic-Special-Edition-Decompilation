
undefined4 __cdecl FUN_00452f30(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  void *this;
  int local_4;
  
  local_4 = 0;
  for (iVar2 = *(int *)(param_1 + 0x348); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
    local_4 = local_4 + 1;
  }
  uVar1 = FUN_00539660((char *)&local_4,4,1,param_2);
  if (uVar1 != 1) {
    return 0;
  }
  this = *(void **)(param_1 + 0x348);
  if (this == (void *)0x0) {
    return 1;
  }
  do {
    iVar2 = FUN_00452d80(this,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    this = *(void **)((int)this + 0x24);
    local_4 = local_4 + 1;
  } while (this != (void *)0x0);
  return 1;
}


