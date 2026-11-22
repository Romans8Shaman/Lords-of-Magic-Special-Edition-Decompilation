
void __thiscall FUN_00410af0(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar2 = (int *)((int)this + 0xe4);
    do {
      if ((param_1 & 1 << ((byte)iVar1 & 0x1f)) != 0) {
        FUN_0040f140(&DAT_005aeed0,*piVar2);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x13;
    } while (iVar1 < *(int *)((int)this + 0x4c));
  }
  return;
}


