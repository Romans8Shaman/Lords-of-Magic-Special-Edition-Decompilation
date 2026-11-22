
int __thiscall FUN_0046ca20(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc);
  iVar1 = 0;
  if (0 < iVar3) {
    piVar2 = (int *)(*(int *)((int)this + 4) + 0x20);
    do {
      if (((piVar2[1] & param_1) != 0) && (-1 < *piVar2)) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


