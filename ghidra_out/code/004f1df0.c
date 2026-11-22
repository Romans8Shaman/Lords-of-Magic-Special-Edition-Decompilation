
int __fastcall FUN_004f1df0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x38) < 0) {
    return 0;
  }
  puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x24),0x2f);
  if ((((puVar1 == (undefined4 *)0x0) || (iVar2 = *(int *)(param_1 + 0x28), iVar2 < 0)) ||
      ((int)puVar1[0x13] <= iVar2)) ||
     (iVar2 = FUN_00428bf0(puVar1 + iVar2 * 0x13 + 0x31,*(int *)(param_1 + 0x38)), iVar2 == 0)) {
    iVar2 = FUN_004298a0(&DAT_005aa12c,*(int *)(param_1 + 0x38),&local_4,&local_8);
    return iVar2;
  }
  return iVar2;
}


