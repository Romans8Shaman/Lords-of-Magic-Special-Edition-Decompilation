
int __fastcall FUN_0052e1e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  piVar3 = param_1 + 6;
  iVar4 = 0x1e;
  do {
    puVar1 = FUN_00485080(&DAT_005aa12c,*piVar3,0x2f);
    if ((puVar1 != (undefined4 *)0x0) && (puVar1[0x12] == *param_1)) {
      iVar2 = iVar2 + 1;
    }
    piVar3 = piVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar2;
}


