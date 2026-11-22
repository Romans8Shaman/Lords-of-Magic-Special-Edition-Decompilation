
int __thiscall FUN_004b9550(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0xc);
  do {
    if (param_1 == *piVar2) {
      return iVar1 + 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 0x25);
  } while (iVar1 < 4);
  return 0;
}


