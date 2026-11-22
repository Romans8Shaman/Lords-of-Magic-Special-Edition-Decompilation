
int __thiscall FUN_00406e10(void *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar6 = *(int *)((int)this + 0x40);
  iVar5 = 0;
  local_8 = 0;
  if ((param_1 < 0) || (0xf < param_1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + param_1 * 0x1d84;
  }
  if (puVar2 == (undefined *)0x0) {
    return 0;
  }
  if (puVar2 == (undefined *)0xffffea20) {
    return 0;
  }
  for (; iVar6 <= iVar1; iVar6 = iVar6 + 1) {
    pvVar3 = (void *)FUN_004f6000(&DAT_005ae974,iVar6);
    if ((((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) == 0)) &&
        (iVar4 = FUN_00407d50((int)pvVar3), iVar4 == 0)) &&
       (*(int *)((int)pvVar3 + 0x48) == param_1)) {
      iVar4 = FUN_00421840(pvVar3);
      local_8 = local_8 + iVar4;
      iVar5 = iVar5 + 1;
    }
  }
  if (iVar5 == 0) {
    return 0;
  }
  return local_8 / iVar5;
}


