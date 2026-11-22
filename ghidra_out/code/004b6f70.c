
void __fastcall FUN_004b6f70(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 1;
  puVar3 = &DAT_00584444;
  while( true ) {
    if ((*(int *)((int)param_1 + 0x4b2c) == 0) ||
       (iVar1 = *(int *)(*(int *)((int)param_1 + 0x4b2c) + 0x100), iVar1 < 1)) {
      iVar1 = 1;
    }
    if (iVar1 < iVar2) break;
    if (puVar3[-1] == 1) {
      FUN_004b6fc0(param_1,iVar2);
      puVar3[-1] = 0;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


