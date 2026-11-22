
int __thiscall FUN_0042f3c0(void *this,int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 0;
  *param_3 = 0;
  if (param_1 == 0) {
    piVar3 = (int *)((int)this + 3000);
  }
  else {
    if (param_1 != 1) {
      return -1;
    }
    piVar3 = (int *)((int)this + 0xbf4);
    this = (void *)((int)this + 0x5dc);
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    do {
      if (*piVar3 == param_2) {
        *param_3 = *param_3 | 1 << ((byte)iVar2 & 0x1f);
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x4c));
  }
  return iVar1;
}


