
void __fastcall FUN_004f7890(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 <= *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (((piVar1 != (int *)0x0) && (piVar1[1] == 2)) &&
         (FUN_0043be20((int)piVar1), piVar1[0x13] == DAT_005cc9d4)) {
        FUN_0043d730(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x18));
  }
  return;
}


