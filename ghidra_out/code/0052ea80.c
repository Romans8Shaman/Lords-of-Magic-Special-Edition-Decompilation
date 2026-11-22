
void __fastcall FUN_0052ea80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x1e;
  piVar3 = param_1 + 6;
  do {
    puVar1 = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,*piVar3,0);
    if (puVar1 == (undefined4 *)0x0) {
LAB_0052eab3:
      puVar1 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
      if (((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) &&
         ((puVar1[0xc] & 0x40000000) != 0)) {
LAB_0052ead4:
        FUN_00507260(&DAT_005aa12c,puVar1[10]);
      }
    }
    else {
      if (puVar1[0x12] == *param_1) goto LAB_0052ead4;
      if (puVar1 == (undefined4 *)0x0) goto LAB_0052eab3;
    }
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}


