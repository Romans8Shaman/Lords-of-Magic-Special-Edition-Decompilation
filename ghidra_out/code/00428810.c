
int __thiscall FUN_00428810(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)((int)this + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    if ((*(uint *)(iVar1 + 0x10) & 1 << (param_1 + 8U & 0x1f)) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


