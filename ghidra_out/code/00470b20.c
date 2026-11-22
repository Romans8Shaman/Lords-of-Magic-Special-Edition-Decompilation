
int __thiscall FUN_00470b20(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x2c8)) {
    piVar2 = (int *)((int)this + 0x394);
    do {
      if (*param_1 == *piVar2) {
        iVar3 = iVar1;
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x2c8));
  }
  if (iVar3 < 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + iVar3 * 4 + 0x3cc));
    return iVar3;
  }
  if (param_2 == 1) {
    iVar3 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + iVar3 * 4 + 0x3ec));
    return iVar3;
  }
  iVar3 = FUN_00492760(&DAT_005a7b50,*(int *)((int)this + iVar3 * 4 + 0x3ec));
  return iVar3;
}


