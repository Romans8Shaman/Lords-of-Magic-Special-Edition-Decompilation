
int __cdecl FUN_0052bf80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 4),0x2f);
  puVar2 = FUN_00485080(&DAT_005aa12c,*(int *)(param_2 + 4),0x2f);
  if (puVar1 == (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    return 1;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  iVar3 = FUN_0052bf50((int)puVar2);
  iVar4 = FUN_0052bf50((int)puVar1);
  iVar4 = iVar4 - iVar3;
  if (iVar4 == 0) {
    iVar4 = (int)*(char *)(puVar1 + 0x16b) - (int)*(char *)(puVar2 + 0x16b);
  }
  if (iVar4 == 0) {
    iVar4 = puVar1[10] - puVar2[10];
  }
  return iVar4;
}


