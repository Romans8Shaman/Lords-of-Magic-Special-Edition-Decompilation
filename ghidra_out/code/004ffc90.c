
void __fastcall FUN_004ffc90(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x25318);
  if (iVar1 != 0) {
    *(int *)((int)param_1 + 0x25630) = *(int *)((int)param_1 + 0x25630) + 1;
    do {
      if (DAT_005d2ca0 != 0) break;
      FUN_004ffa80(param_1);
    } while (*(int *)((int)param_1 + 0x25318) == iVar1);
    *(int *)((int)param_1 + 0x25630) = *(int *)((int)param_1 + 0x25630) + -1;
  }
  return;
}


