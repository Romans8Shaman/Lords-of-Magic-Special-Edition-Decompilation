
int __fastcall FUN_00428a90(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(byte *)(piVar1 + 4) & 0x1f) != 0) {
      iVar2 = FUN_00427b80(*piVar1);
      if ((-1 < *(int *)(iVar2 + 0x7c)) &&
         (iVar2 = FUN_00491c20(&DAT_005a7b50,*(int *)(iVar2 + 0x7c)), iVar2 != 0)) {
        return iVar2;
      }
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}


