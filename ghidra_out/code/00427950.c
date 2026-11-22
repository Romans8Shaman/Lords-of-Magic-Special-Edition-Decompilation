
undefined4 __thiscall FUN_00427950(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < *(int *)((int)this + 4)) {
    while ((*(byte *)(*(int *)this + iVar1) & 8) == 0) {
      *(byte *)(*(int *)this + iVar1) = 0x10;
      iVar1 = iVar1 + 1;
      if (*(int *)((int)this + 4) <= iVar1) {
        *param_1 = -1;
        return 0xffffffff;
      }
    }
    *(undefined1 *)(iVar1 + *(int *)this) = 0x10;
  }
  *param_1 = -1;
  return 0xffffffff;
}


