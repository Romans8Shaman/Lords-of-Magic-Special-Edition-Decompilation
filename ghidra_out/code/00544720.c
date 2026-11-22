
char FUN_00544720(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  FUN_0053ce20();
  if (DAT_005d52e8 == '\0') {
    return '\0';
  }
  cVar3 = '\0';
  FUN_0053cbb0(2);
  iVar4 = 3;
  if (3 < DAT_005d6a00) {
    do {
      piVar1 = *(int **)(DAT_005d59f4 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        if (((*(byte *)(piVar1 + 3) & 0x83) != 0) && (iVar2 = FUN_005394d0(piVar1), iVar2 != -1)) {
          cVar3 = cVar3 + '\x01';
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_005d59f4 + iVar4 * 4) + 0x20));
          FUN_0053bce0(*(undefined **)(DAT_005d59f4 + iVar4 * 4));
          *(undefined4 *)(DAT_005d59f4 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_005d6a00);
  }
  FUN_0053cc30(2);
  return cVar3;
}


