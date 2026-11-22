
int __thiscall FUN_004b4b60(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x2c);
  do {
    if (*piVar2 == param_1) {
      return iVar1 * 0xc0 + 0x2c + (int)this;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x30;
  } while (iVar1 < 100);
  return 0;
}


