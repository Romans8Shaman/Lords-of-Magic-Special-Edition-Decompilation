
undefined4 __thiscall FUN_00414be0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x4c) < 1) {
    return 1;
  }
  piVar2 = (int *)((int)this + 0xc4);
  do {
    if ((param_1 & 1 << ((byte)iVar3 & 0x1f)) != 0) {
      uVar1 = FUN_00521e30(piVar2);
      if (uVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x13;
  } while (iVar3 < *(int *)((int)this + 0x4c));
  return 1;
}


