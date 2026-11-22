
void __cdecl op_uncheckallhelppanels(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < DAT_005aa1f4) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(DAT_005aa1f8 + 4 + iVar2) = 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < DAT_005aa1f4);
  }
  return;
}


