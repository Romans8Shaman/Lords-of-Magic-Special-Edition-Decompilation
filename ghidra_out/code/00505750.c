
undefined4 __thiscall FUN_00505750(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int *this_00;
  
  piVar1 = (int *)FUN_005005f0(this,param_1);
  if ((piVar1 == (int *)0x0) || (this_00 = *(int **)((int)this + 0x25318), this_00 == (int *)0x0)) {
    return 0;
  }
  while( true ) {
    if (this_00 == piVar1) {
      return 1;
    }
    iVar2 = FUN_0048fc00(this_00,param_1);
    if (iVar2 != 0) break;
    this_00 = (int *)*this_00;
    if (this_00 == (int *)0x0) {
      return 0;
    }
  }
  return 1;
}


