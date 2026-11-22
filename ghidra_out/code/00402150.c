
int FUN_00402150(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  uVar4 = 8;
  do {
    iVar1 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)((int)param_1 + 0x1c) * 8) * 4);
    if (iVar1 != *(int *)((int)param_1 + 0x1c)) {
      iVar1 = FUN_004a8330(&DAT_005ae958,iVar1,0);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) != *(int *)((int)param_1 + 0x48))) {
        iVar2 = FUN_00407d50(iVar1);
        if (iVar2 == 0) {
          iVar2 = FUN_00506110(param_1,iVar1);
          if (iVar2 != 0) {
            if (*(int *)(iVar1 + 0x28) == param_2) {
              return iVar1;
            }
            uVar3 = *(int *)((int)param_1 + 0x44) - iVar5 & 7;
            if (4 < uVar3) {
              uVar3 = 8 - uVar3;
            }
            if ((int)uVar3 < (int)uVar4) {
              uVar4 = uVar3;
              local_4 = iVar1;
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return local_4;
}


