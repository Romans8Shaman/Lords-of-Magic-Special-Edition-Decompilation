
undefined4 __thiscall FUN_00498aa0(void *this,int unused_stack_4,undefined4 param_p2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((unused_stack_4 < 0) || (9 < unused_stack_4)) ||
     (piVar1 = *(int **)(unused_stack_4 * 0x10 + 0x5e4 + (int)this), piVar1 == (int *)0x0)) {
    return 0xffffffff;
  }
  do {
    if (iVar2 == unused_stack_4) {
      return *(undefined4 *)(*piVar1 + 0x28);
    }
    piVar1 = (int *)piVar1[1];
    iVar2 = iVar2 + 1;
  } while (piVar1 != (int *)0x0);
  return 0xffffffff;
}


