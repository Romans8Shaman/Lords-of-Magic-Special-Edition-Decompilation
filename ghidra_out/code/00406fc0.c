
int __thiscall FUN_00406fc0(void *this,int param_1)

{
  undefined *puVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x40);
  iVar3 = 999999;
  local_c = -1;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar1 == (undefined *)0x0) {
    return -1;
  }
  if (puVar1 + 0x15e0 == (undefined *)0x0) {
    return -1;
  }
  if (iVar4 <= local_4) {
    do {
      this_00 = (void *)FUN_004f6000(&DAT_005ae974,iVar4);
      if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 0)) {
        FUN_004630e0(puVar1 + 0x15e0,&local_8,iVar4);
        if (local_8 < 0) {
          iVar2 = FUN_00407d50((int)this_00);
          if ((iVar2 == 0) && (*(int *)((int)this_00 + 0x48) == param_1)) {
            iVar2 = FUN_00421960(this_00);
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
              local_c = iVar4;
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= local_4);
  }
  return local_c;
}


