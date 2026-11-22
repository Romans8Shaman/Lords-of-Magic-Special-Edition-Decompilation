
void __fastcall FUN_004fd670(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] != 8)) && (piVar1[1] != 0)) {
        FUN_00483be0(&DAT_005aa12c,piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}


