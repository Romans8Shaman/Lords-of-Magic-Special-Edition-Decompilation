
undefined4 * __fastcall FUN_0052d240(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x18);
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar4,0x2f);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_00420580((int)puVar1);
      if ((iVar2 == 0) || ((~puVar1[0xc] & 0x100) != 0)) {
        return puVar1;
      }
      *piVar4 = -1;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 3;
    if (0x1d < iVar3) {
      return (undefined4 *)0x0;
    }
  } while( true );
}


