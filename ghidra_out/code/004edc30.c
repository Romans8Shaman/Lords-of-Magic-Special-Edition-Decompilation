
undefined4 __thiscall FUN_004edc30(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004a4c50(this,param_1);
  if ((param_2 & uVar1) != 0) {
    iVar2 = FUN_004edbb0(this,param_1);
    if (iVar2 == 0) {
      if (*(int *)(*(int *)((int)this + 100) + param_1 * 8) == 0) {
        return 1;
      }
      if ((*(uint *)(*(int *)((int)this + 100) + param_1 * 8 + 4) & 0xa00000) != 0) {
        return 1;
      }
      iVar2 = FUN_004a8330(this,param_1,1);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x30) & 0x40) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


