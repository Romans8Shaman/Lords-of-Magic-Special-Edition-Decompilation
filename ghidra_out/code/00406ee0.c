
int __thiscall FUN_00406ee0(void *this,int param_1)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = *(int *)((int)this + 0x34);
  iVar5 = *(int *)((int)this + 0x40);
  iVar4 = 999999;
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
  if (iVar5 <= local_4) {
    do {
      pvVar2 = (void *)FUN_004f6000(&DAT_005ae974,iVar5);
      if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 4) == 0)) {
        FUN_004630e0(puVar1 + 0x15e0,&local_8,iVar5);
        if (local_8 < 0) {
          iVar3 = FUN_00407d50((int)pvVar2);
          if ((iVar3 == 0) && (*(int *)((int)pvVar2 + 0x48) == param_1)) {
            iVar3 = FUN_00421840(pvVar2);
            if (iVar3 < iVar4) {
              iVar4 = iVar3;
              local_c = iVar5;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_4);
  }
  return local_c;
}


