
void __fastcall FUN_004bde30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_14 [5];
  
  if ((*(uint *)(param_1 + 0x15d8) & 0x40) != 0) {
    *(uint *)(param_1 + 0x15d8) = *(uint *)(param_1 + 0x15d8) & 0xffffffbf;
    iVar4 = 5;
    piVar2 = (int *)(param_1 + 0xd10);
    do {
      *piVar2 = piVar2[-5];
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    for (piVar2 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)(param_1 + 0x15a8),0);
        piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_004fbf80(&DAT_005ae974,*(int *)(param_1 + 0x15a8),(int)piVar2)) {
      iVar4 = (/*IC:004bde85*/**(code **)(*piVar2 + 0x40))(piVar2,local_14);
      if (iVar4 != 0) {
        piVar5 = local_14;
        iVar4 = 5;
        piVar3 = (int *)(param_1 + 0xd10);
        do {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          *piVar3 = *piVar3 + iVar1;
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}


