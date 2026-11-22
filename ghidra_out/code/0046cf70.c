
undefined4 __thiscall FUN_0046cf70(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x30 + *(int *)((int)this + 4);
  if ((((*(int *)(iVar1 + 0x28) == 0) || (*(int *)(iVar1 + 0x20) == *(int *)(param_2 + 4))) &&
      ((*(uint *)(iVar1 + 0x10) & *(uint *)(param_2 + 8)) != 0)) &&
     (((*(byte *)(iVar1 + 0x14) & 2) == 0 ||
      (*(int *)(param_2 + 0xc) + *(int *)(iVar1 + 0x28) <= *(int *)(iVar1 + 0x18))))) {
    return 1;
  }
  return 0;
}


