
int __thiscall FUN_004102e0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    *param_1 = -1;
    return 0;
  }
  piVar2 = (int *)((int)this + 0xe4);
  do {
    iVar1 = FUN_0040f4e0(&DAT_005aeed0,*piVar2);
    if (iVar1 != 0) {
      *param_1 = iVar3;
      return iVar1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x13;
  } while (iVar3 < *(int *)((int)this + 0x4c));
  *param_1 = -1;
  return 0;
}


