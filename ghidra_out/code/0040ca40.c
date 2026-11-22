
undefined4 __thiscall FUN_0040ca40(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(iVar1 + 4) == param_2) {
      return *(undefined4 *)(iVar1 + 0x34);
    }
    iVar1 = *(int *)(iVar1 + 0x38);
  } while (iVar1 != 0);
  return 0xffffffff;
}


