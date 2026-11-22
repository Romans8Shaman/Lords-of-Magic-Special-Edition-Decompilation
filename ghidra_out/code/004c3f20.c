
undefined4 __thiscall FUN_004c3f20(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    return 0;
  }
  if (param_1 < *(int *)((int)this + 4) + -1) {
    do {
      iVar1 = *(int *)((int)this + 8);
      param_1 = param_1 + 1;
      *(undefined4 *)(iVar1 + -8 + param_1 * 8) = *(undefined4 *)(iVar1 + param_1 * 8);
      *(undefined4 *)(iVar1 + -4 + param_1 * 8) = *(undefined4 *)(iVar1 + 4 + param_1 * 8);
    } while (param_1 < *(int *)((int)this + 4) + -1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return 1;
}


