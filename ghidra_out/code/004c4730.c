
void __cdecl op_clearquests(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005aeedc) {
    do {
      iVar1 = DAT_005aeee4;
      *(undefined4 *)(DAT_005aeee4 + iVar2 * 8) = 0xffffffff;
      *(undefined1 *)(iVar1 + 4 + iVar2 * 8) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_005aeedc);
  }
  DAT_005aeee0 = 0;
  return;
}


