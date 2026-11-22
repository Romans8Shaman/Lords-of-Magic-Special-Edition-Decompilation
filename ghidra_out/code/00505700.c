
undefined4 __thiscall FUN_00505700(void *this,uint param_1)

{
  int iVar1;
  int *this_00;
  
  iVar1 = FUN_005005f0(this,param_1);
  if ((iVar1 == 0) || (this_00 = *(int **)((int)this + 0x25318), this_00 == (int *)0x0)) {
    return 0;
  }
  do {
    iVar1 = FUN_0048fc00(this_00,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    this_00 = (int *)*this_00;
  } while (this_00 != (int *)0x0);
  return 0;
}


