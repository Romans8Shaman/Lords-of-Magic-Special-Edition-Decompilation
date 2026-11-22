
int __thiscall FUN_0049dd80(void *this,byte *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return -1;
  }
  do {
    uVar1 = FUN_00547b90(*(byte **)(*(int *)this + iVar2 * 4),param_1);
    if (uVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)((int)this + 4));
  return -1;
}


