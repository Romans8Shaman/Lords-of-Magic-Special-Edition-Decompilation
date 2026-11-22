
void __fastcall FUN_005091c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < (int)param_1[5]) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1[8] + -4 + iVar2 * 4) = 0;
      *(undefined4 *)(param_1[7] + -4 + iVar2 * 4) = 0;
    } while (iVar2 < (int)param_1[5]);
  }
  FUN_0053a320((undefined1 *)param_1[3],param_1[1],0x2c,&LAB_00509260);
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1[3] + 8 + iVar4) * 4;
      if (*(int *)(param_1[8] + iVar3) == 0) {
        *(int *)(param_1[7] + iVar3) = iVar2;
      }
      piVar1 = (int *)(param_1[3] + 8 + iVar4);
      iVar4 = iVar4 + 0x2c;
      piVar1 = (int *)(param_1[8] + *piVar1 * 4);
      iVar2 = iVar2 + 1;
      *piVar1 = *piVar1 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  FUN_00509680((int)param_1);
  *param_1 = 1;
  return;
}


