
undefined4 __fastcall FUN_0052d190(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar2,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      return *(undefined4 *)(param_1 + 0x1c + iVar3 * 0xc);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0;
}


