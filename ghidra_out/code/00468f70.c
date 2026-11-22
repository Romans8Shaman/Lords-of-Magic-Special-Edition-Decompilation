
int __fastcall FUN_00468f70(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar7 = DAT_005ae998;
  iVar1 = DAT_005ae98c;
  iVar2 = FUN_00420600((int)param_1);
  iStack_18 = -1;
  do {
    if (iVar1 < iVar7) {
      return iStack_18;
    }
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) == 0) {
        iVar4 = FUN_00468df0(iVar3);
        if (*(int *)(iVar3 + 0x48) != *(int *)((int)param_1 + 0x48)) {
          if (-1 < iVar4) {
            if (iVar4 < 5) {
              iVar4 = FUN_00407d50(iVar3);
              if (iVar4 == 0) {
                iVar4 = FUN_00506110(param_1,iVar3);
                if (iVar4 != 0) {
                  iVar4 = FUN_004a8960(&DAT_005ae958,*(int *)(iVar3 + 0x1c),
                                       *(int *)((int)param_1 + 0x1c));
                  if (iVar4 <= iVar2) {
                    if (iStack_18 == -1) {
                      iStack_18 = iVar7;
                      iStack_14 = iVar3;
                      iStack_10 = iVar4;
                    }
                    else {
                      iVar5 = FUN_00468df0(iVar3);
                      iVar6 = FUN_00468df0(iStack_14);
                      if (iVar5 < iVar6) {
LAB_00469046:
                        iStack_18 = iVar7;
                        iStack_14 = iVar3;
                        iStack_10 = iVar4;
                      }
                      else if (iVar5 == iVar6) {
                        if (iVar4 < iStack_10) goto LAB_00469046;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


