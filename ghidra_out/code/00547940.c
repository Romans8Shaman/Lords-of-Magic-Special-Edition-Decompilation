
int __cdecl FUN_00547940(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_0053cbb0(2);
  iVar4 = 3;
  if (3 < DAT_005d6a00) {
    do {
      piVar1 = *(int **)(DAT_005d59f4 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        if (((*(byte *)(piVar1 + 3) & 0x83) != 0) && (iVar2 = FUN_005394d0(piVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
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
  return iVar3;
}


