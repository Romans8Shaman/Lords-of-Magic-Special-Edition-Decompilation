
int * __fastcall FUN_00525ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 10;
  if ((char)param_1[10] == '\0') {
    iVar2 = *param_1;
    if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_005cd2f4 + iVar2 * 1000;
    }
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0xf0);
    }
  }
  return piVar1;
}


