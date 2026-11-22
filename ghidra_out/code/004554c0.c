
void __fastcall FUN_004554c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00523160((int)pvVar2);
    FUN_00522b60(pvVar2);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)(DAT_005cd2f4 + iVar1 * 1000);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00523160((int)pvVar2);
    FUN_00522b60(pvVar2);
  }
  return;
}


