
undefined4 __thiscall FUN_004f5690(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_1) {
    iVar1 = *(int *)((int)this + 0x114);
    piVar2 = (int *)(**(int **)((int)this + 0x118) + -4);
    **(int **)((int)this + 0x118) = (int)piVar2;
    *piVar2 = iVar1 + param_1 * 0x20;
  }
  return 0;
}


