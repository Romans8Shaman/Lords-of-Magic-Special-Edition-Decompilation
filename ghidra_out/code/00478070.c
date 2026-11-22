
int __thiscall FUN_00478070(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this <= iVar1) {
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  DAT_005832e4 = DAT_005832e4 + 4;
  *(undefined4 *)(*(int *)((int)this + 8) + iVar1 * 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  DAT_005832e4 = DAT_005832e4 + -4;
  return iVar1;
}


