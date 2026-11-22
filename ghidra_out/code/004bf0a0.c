
undefined4 __thiscall FUN_004bf0a0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00539660((char *)((int)this + 4),4,1,param_1);
  if (uVar1 != 1) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 4) + 0x1f >> 5;
  if (0 < iVar2) {
    uVar1 = FUN_00539660(*(char **)this,iVar2 << 2,1,param_1);
    if (uVar1 != 1) {
      return 0;
    }
  }
  return 1;
}


