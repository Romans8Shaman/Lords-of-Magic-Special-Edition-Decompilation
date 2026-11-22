
void FUN_004f7960(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  char acStack_20 [16];
  char acStack_10 [16];
  
  iVar7 = DAT_005ae998;
  iVar2 = DAT_005ae98c;
  iVar3 = FUN_004154a0(0x5aa78c);
  iVar4 = FUN_004154a0(0x5aad68);
  if ((0 < iVar3) || (0 < iVar4)) {
    FUN_004e7300(0x5aa78c);
    iVar3 = 0;
    if (0 < DAT_005aa7d8) {
      do {
        uVar5 = FUN_004e72b0(iVar3);
        acStack_20[iVar3] = (char)uVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_005aa7d8);
    }
    FUN_004e7300(0x5aad68);
    iVar3 = 0;
    if (0 < DAT_005aadb4) {
      do {
        uVar5 = FUN_004e72b0(iVar3);
        acStack_10[iVar3] = (char)uVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_005aadb4);
    }
    local_30 = 0x1010101;
    local_2c = 0x1010101;
    local_28 = 0x1010101;
    local_24 = 0x101;
    local_22 = 1;
    local_40 = 0x1010101;
    local_3c = 0x1010101;
    local_38 = 0x1010101;
    local_34 = 0x101;
    local_32 = 1;
    iVar3 = iVar7;
    if (iVar7 <= iVar2) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_00415470((int *)(iVar4 + 0xc4)), iVar6 != 0)) {
          if (*(int *)(iVar4 + 0x48) == DAT_005aa7d4) {
            if ((*(uint *)(iVar4 + 0x30) & 0x100) != 0) {
              acStack_20[*(char *)(iVar4 + 0x5ac) + -0x20] = '\0';
            }
          }
          else if ((*(int *)(iVar4 + 0x48) == DAT_005aadb0) &&
                  ((*(uint *)(iVar4 + 0x30) & 0x100) != 0)) {
            acStack_20[*(char *)(iVar4 + 0x5ac) + -0x10] = '\0';
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar7;
      } while (iVar3 <= iVar2);
      for (; iVar4 <= iVar2; iVar4 = iVar4 + 1) {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar4);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
           ((*(uint *)(iVar3 + 0x30) & 0x10000000) != 0)) {
          if (*(int *)(iVar3 + 0x48) == DAT_005aa7d4) {
            if (0 < acStack_20[*(char *)(iVar3 + 0x5ac)]) {
              cVar1 = acStack_20[acStack_20[*(char *)(iVar3 + 0x5ac)] + -0x20];
joined_r0x004f7b0d:
              if (cVar1 == '\0') {
                *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x100;
              }
            }
          }
          else if ((*(int *)(iVar3 + 0x48) == DAT_005aadb0) &&
                  (0 < acStack_10[*(char *)(iVar3 + 0x5ac)])) {
            cVar1 = acStack_20[acStack_10[*(char *)(iVar3 + 0x5ac)] + -0x10];
            goto joined_r0x004f7b0d;
          }
        }
      }
    }
    local_30 = 0x1010101;
    local_2c = 0x1010101;
    local_28 = 0x1010101;
    local_24 = 0x101;
    local_22 = 1;
    local_40 = 0x1010101;
    local_3c = 0x1010101;
    local_38 = 0x1010101;
    local_34 = 0x101;
    local_32 = 1;
    iVar3 = iVar7;
    if (iVar7 <= iVar2) {
      do {
        iVar4 = FUN_004f6000(&DAT_005ae974,iVar3);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) &&
           (iVar6 = FUN_00415470((int *)(iVar4 + 0xc4)), iVar6 != 0)) {
          if (*(int *)(iVar4 + 0x48) == DAT_005aa7d4) {
            if ((*(uint *)(iVar4 + 0x30) & 0x400) != 0) {
              acStack_20[*(char *)(iVar4 + 0x5ac) + -0x20] = '\0';
            }
          }
          else if ((*(int *)(iVar4 + 0x48) == DAT_005aadb0) &&
                  ((*(uint *)(iVar4 + 0x30) & 0x400) != 0)) {
            acStack_20[*(char *)(iVar4 + 0x5ac) + -0x10] = '\0';
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar2);
      for (; iVar7 <= iVar2; iVar7 = iVar7 + 1) {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
           ((*(uint *)(iVar3 + 0x30) & 0x10000000) != 0)) {
          if (*(int *)(iVar3 + 0x48) == DAT_005aa7d4) {
            if (0 < acStack_20[*(char *)(iVar3 + 0x5ac)]) {
              cVar1 = acStack_20[acStack_20[*(char *)(iVar3 + 0x5ac)] + -0x20];
joined_r0x004f7c32:
              if (cVar1 == '\0') {
                *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x400;
              }
            }
          }
          else if ((*(int *)(iVar3 + 0x48) == DAT_005aadb0) &&
                  (0 < acStack_10[*(char *)(iVar3 + 0x5ac)])) {
            cVar1 = acStack_20[acStack_10[*(char *)(iVar3 + 0x5ac)] + -0x10];
            goto joined_r0x004f7c32;
          }
        }
      }
    }
  }
  return;
}


