
int __thiscall FUN_004a4c70(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_004a4c50(this,param_1);
  if ((param_3 & uVar2) == 0) {
    return param_1;
  }
  if ((uVar2 & 0xc0000) == 0xc0000) {
    if (param_3 == 0x80000) {
      if ((*(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) &
          1 << ((char)param_2 + 0x18U & 0x1f)) != 0) {
        return param_1;
      }
    }
    else if ((param_3 == 0x40000) &&
            ((*(uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8) &
             1 << ((char)param_2 + 0x18U & 0x1f)) == 0)) {
      return param_1;
    }
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + (param_2 + param_1 * 8) * 4);
  uVar2 = FUN_004a4c50(this,iVar1);
  if ((param_3 & uVar2) != 0) {
    param_1 = iVar1;
  }
  return param_1;
}


