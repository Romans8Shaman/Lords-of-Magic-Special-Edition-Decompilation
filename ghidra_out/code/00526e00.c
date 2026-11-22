
void __thiscall FUN_00526e00(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      iVar3 = param_1;
      do {
        iVar3 = *(int *)(iVar3 + 0x1c);
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = param_1;
    while (iVar2 = iVar3, iVar2 != 0) {
      iVar1 = iVar2;
      iVar3 = *(int *)(iVar2 + 0x1c);
    }
    *(int *)(iVar1 + 0x1c) = *(int *)this;
    *(int *)this = param_1;
  }
  return;
}


