
void __cdecl op_zerovisibility(void *vm)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_005ae9c0) {
    do {
      iVar1 = iVar3 * 8;
      iVar2 = iVar3 * 8;
      iVar3 = iVar3 + 1;
      *(uint *)(DAT_005ae9bc + 4 + iVar2) = *(uint *)(DAT_005ae9bc + 4 + iVar1) & 0xffffff00;
    } while (iVar3 < DAT_005ae9c0);
  }
  FUN_004a90b0(&DAT_005ae958,*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  return;
}


