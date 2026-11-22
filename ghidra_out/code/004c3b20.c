
int __thiscall FUN_004c3b20(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 < *(int *)this) && (*(int *)((int)this + 8) != 0)) {
    iVar2 = FUN_0052c720((void *)(*(int *)((int)this + 8) + iVar1 * 4),param_1);
    if (iVar2 != 0) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return iVar1;
    }
  }
  return -1;
}


