
int FUN_00409840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 x;
  longlong lVar8;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = DAT_005ae998;
  iVar1 = DAT_005ae98c;
  local_10 = 0;
  local_c = -1;
  for (iVar7 = DAT_005ae998; iVar7 <= iVar1; iVar7 = iVar7 + 1) {
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0x48) == param_2)) &&
       (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
      local_14 = 0;
      iVar4 = iVar2;
      do {
        if (((iVar7 != iVar4) && (iVar5 = FUN_004f6000(&DAT_005ae974,iVar4), iVar5 != 0)) &&
           ((*(int *)(iVar5 + 4) == 0 &&
            ((*(int *)(iVar5 + 0x48) == param_2 && (iVar6 = FUN_00407d50(iVar5), iVar6 == 0)))))) {
          x = FUN_004a89d0(0x5ae958,*(int *)(iVar3 + 0x1c),*(int *)(iVar5 + 0x1c));
          lVar8 = __ftol(x);
          if ((int)lVar8 < param_1) {
            local_14 = local_14 + 1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar1);
      if (local_10 < local_14) {
        local_10 = local_14;
        local_c = iVar7;
      }
    }
  }
  return local_c;
}


