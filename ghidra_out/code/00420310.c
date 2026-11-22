
void __fastcall FUN_00420310(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if ((pvVar1 != (void *)0x0) && (*(int *)((int)pvVar1 + 4) == 0)) {
        FUN_00420190(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  return;
}


