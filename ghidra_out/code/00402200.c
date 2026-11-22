
void FUN_00402200(void *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = 0;
  *param_4 = 0;
  iVar5 = 0;
  *param_5 = 0;
  iVar4 = param_2 << 5;
  do {
    if (*(int *)(DAT_005ae970 + iVar4) == param_2) {
      *param_5 = *param_5 + 1;
    }
    else {
      iVar1 = FUN_004a8330(&DAT_005ae958,*(int *)(DAT_005ae970 + iVar4),0);
      if (((iVar1 != 0) && (iVar2 = FUN_00407d50(iVar1), iVar2 == 0)) &&
         (iVar2 = FUN_00506110(param_1,iVar1), iVar2 != 0)) {
        piVar3 = param_3;
        if (*(int *)(iVar1 + 0x48) != *(int *)((int)param_1 + 0x48)) {
          piVar3 = param_4;
        }
        *piVar3 = *piVar3 + 1;
      }
      iVar1 = FUN_004a4c70(&DAT_005ae958,param_2,iVar5,*(uint *)((int)param_1 + 0x54));
      if (iVar1 == param_2) {
        *param_5 = *param_5 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 8);
  return;
}


