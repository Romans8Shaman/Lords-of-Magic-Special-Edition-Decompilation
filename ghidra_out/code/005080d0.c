
undefined4 __thiscall FUN_005080d0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (((-1 < param_1) && (param_1 < 0x10)) && (-1 < param_3)) {
    if (param_3 < 3) {
      piVar2 = (int *)((int)this + (param_3 + param_1 * 0x32) * 4 + 0x68);
      *piVar2 = *piVar2 + param_2;
      return 1;
    }
    iVar1 = 0;
    piVar2 = (int *)((int)this + param_1 * 200 + 0x68);
    do {
      if (*piVar2 == -1) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x32);
    if (iVar1 < 0x32) {
      *(int *)((int)this + (iVar1 + param_1 * 0x32) * 4 + 0x68) = param_2;
      return 1;
    }
  }
  return 0;
}


