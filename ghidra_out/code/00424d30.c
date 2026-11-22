
int __thiscall FUN_00424d30(void *this,int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x48);
  if ((iVar2 < 0) || (0xf < iVar2)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + iVar2 * 0x1d84;
  }
  if (puVar1 == (undefined *)0x0) {
    return -1;
  }
  iVar2 = FUN_00529520((void *)((int)this + param_1 * 0x4c + 0xc4),(int)puVar1);
  return iVar2;
}


