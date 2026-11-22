
int __cdecl FUN_00542390(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_0053cbb0(2);
  iVar3 = 0;
  if (0 < DAT_005d6a00) {
    do {
      iVar1 = *(int *)(DAT_005d59f4 + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_0053cc90(iVar3,iVar1);
        piVar2 = *(int **)(DAT_005d59f4 + iVar3 * 4);
        if (((*(byte *)(piVar2 + 3) & 0x83) != 0) && (piVar2[7] != 0)) {
          FUN_00539510(piVar2);
          iVar4 = iVar4 + 1;
        }
        FUN_0053cd00(iVar3,*(int *)(DAT_005d59f4 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005d6a00);
  }
  FUN_0053cc30(2);
  return iVar4;
}


