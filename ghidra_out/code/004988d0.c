
int __thiscall FUN_004988d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (((param_1 < 0) || (9 < param_1)) ||
     (iVar2 = *(int *)(param_1 * 0x10 + 0x5e4 + (int)this), iVar2 == 0)) {
    return 0;
  }
  do {
    iVar2 = *(int *)(iVar2 + 4);
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0);
  return iVar1;
}


