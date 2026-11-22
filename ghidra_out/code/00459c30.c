
void __cdecl op_preparedefendingcity(void *vm)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (0 < DAT_005ae918) {
    switch(DAT_005ae91c) {
    case 0:
      iStack_18 = DAT_005ae924;
      iVar7 = DAT_005ae924 + -3;
      iStack_14 = DAT_005ae928 + 5;
      iVar5 = DAT_005ae928 + 1;
      iStack_20 = DAT_005ae924 + 3;
      iStack_24 = iVar5;
      break;
    default:
      iVar5 = iStack_4;
      iVar7 = iStack_4;
      break;
    case 2:
      iStack_18 = DAT_005ae924 + -5;
      iVar7 = DAT_005ae924 + -1;
      iStack_14 = DAT_005ae928;
      iVar5 = DAT_005ae928 + -3;
      iStack_24 = DAT_005ae928 + 3;
      iStack_20 = iVar7;
      break;
    case 4:
      iStack_18 = DAT_005ae924;
      iVar7 = DAT_005ae924 + -3;
      iStack_14 = DAT_005ae928 + -5;
      iVar5 = DAT_005ae928 + -1;
      iStack_24 = iVar5;
      iStack_20 = DAT_005ae924 + 3;
      break;
    case 6:
      iStack_18 = DAT_005ae924 + 5;
      iVar7 = DAT_005ae924 + 1;
      iStack_14 = DAT_005ae928;
      iVar5 = DAT_005ae928 + -3;
      iStack_24 = DAT_005ae928 + 3;
      iStack_20 = iVar7;
    }
    iStack_1c = 0;
    iStack_10 = 0;
    iStack_4 = DAT_005ae98c;
    iVar6 = DAT_005ae998;
    if (DAT_005ae998 <= DAT_005ae98c) {
      do {
        piVar1 = (int *)FUN_004f6000(&DAT_005ae974,iVar6);
        if (((piVar1 != (int *)0x0) && (piVar1[1] == 0)) && (piVar1[0x12] == DAT_005aadb0)) {
          if (((iStack_1c < 2) && (iVar2 = FUN_004205e0((int)piVar1), iVar2 != 0)) &&
             ((iVar2 = FUN_004c2330((int)piVar1), iVar2 < 1 &&
              (iVar2 = FUN_004b02a0(piVar1 + 0x157), iVar2 == 0)))) {
            if (iStack_1c == 0) {
              iVar2 = iVar7;
              iVar4 = iVar5;
LAB_004580b3:
              puVar3 = FUN_004c6fc0();
              iVar4 = FUN_004a51c0(puVar3,iVar2,iVar4);
              iVar2 = piVar1[7];
              puVar3 = FUN_004c6fc0();
              FUN_004a6dd0(puVar3,piVar1,iVar2,iVar4);
            }
            else if (iStack_1c == 1) {
              iVar2 = iStack_20;
              iVar4 = iStack_24;
              goto LAB_004580b3;
            }
            iStack_1c = iStack_1c + 1;
          }
          else {
            iStack_8 = iStack_18;
            iStack_c = iStack_14;
            FUN_0045a1c0(iStack_10,piVar1[0x11],&iStack_8,&iStack_c);
            iVar2 = iStack_8;
            iVar4 = iStack_c;
            puVar3 = FUN_004c6fc0();
            iVar4 = FUN_004a51c0(puVar3,iVar2,iVar4);
            iVar2 = piVar1[7];
            puVar3 = FUN_004c6fc0();
            FUN_004a6dd0(puVar3,piVar1,iVar2,iVar4);
            iStack_10 = iStack_10 + 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iStack_4);
    }
  }
  return;
}


