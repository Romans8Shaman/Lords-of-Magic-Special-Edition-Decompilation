
undefined4 __thiscall FUN_00414b80(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    return 0;
  }
  piVar3 = (int *)((int)this + 0xc4);
  do {
    if ((param_1 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
      iVar1 = FUN_00415470(piVar3);
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar2 < *(int *)((int)this + 0x4c));
  return 0;
}


