
undefined4 __thiscall FUN_00525f40(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
    return 1;
  }
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
  return 1;
}


