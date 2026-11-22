
void __cdecl op_matchguids(void *vm)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  uint uStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  char *pcStack_40;
  int *piStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [2];
  undefined1 auStack_1c [12];
  int aiStack_10 [4];
  
  uStack_4c = 0;
  if ((DAT_005d1e84 == 0) || (uVar8 = *(uint *)(DAT_005d1e84 + 0x100), (int)uVar8 < 1)) {
    uVar8 = 1;
  }
  if (0 < (int)uVar8) {
    piVar7 = aiStack_10;
    for (uVar4 = uVar8 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    piVar7 = aiStack_24;
    for (uVar4 = uVar8 & 0x3fffffff; piVar7 = piVar7 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar7 = 0;
    }
  }
  if (DAT_005aa679 == '\0') {
    uStack_4c = uVar8;
  }
  else {
    iStack_44 = 0;
    if (0 < (int)uVar8) {
      piStack_3c = aiStack_10;
      pcStack_40 = &DAT_005aa6b0;
      do {
        iVar6 = 1;
        bVar2 = false;
        if (0 < (int)uVar8) {
          puStack_48 = auStack_1c;
          do {
            if (*(int *)(puStack_48 + -4) == 0) {
              FUN_004b8fa0(&DAT_005cd358,iVar6,&uStack_30);
              iVar5 = 0x10;
              bVar11 = true;
              pcVar9 = pcStack_40;
              pcVar10 = (char *)&uStack_30;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar11 = *pcVar9 == *pcVar10;
                pcVar9 = pcVar9 + 1;
                pcVar10 = pcVar10 + 1;
              } while (bVar11);
              if (bVar11) {
                aiStack_24[iVar6] = aiStack_24[iVar6] + 1;
                bVar2 = true;
                *piStack_3c = *piStack_3c + 1;
                FUN_00482a20(&DAT_005aa12c,iStack_44,iVar6,0);
                break;
              }
            }
            iVar6 = iVar6 + 1;
            puStack_48 = puStack_48 + 4;
          } while (iVar6 <= (int)uVar8);
        }
        if (!bVar2) {
          uStack_4c = uStack_4c + 1;
        }
        iStack_44 = iStack_44 + 1;
        pcStack_40 = pcStack_40 + 0x10;
        piStack_3c = piStack_3c + 1;
      } while (iStack_44 < (int)uVar8);
    }
  }
  if ((uStack_4c != 0) && (iVar6 = 0, 0 < (int)uVar8)) {
    piVar7 = aiStack_10;
    piStack_3c = (int *)&DAT_005aa6b0;
    do {
      if ((*piVar7 == 0) && (iVar5 = 1, 0 < (int)uVar8)) {
        puVar3 = auStack_1c;
        do {
          if (*(int *)(puVar3 + -4) == 0) {
            FUN_004b8fa0(&DAT_005cd358,iVar5,&uStack_30);
            *piStack_3c = uStack_30;
            piStack_3c[1] = uStack_2c;
            piStack_3c[2] = uStack_28;
            aiStack_24[iVar5] = aiStack_24[iVar5] + 1;
            iVar1 = *piVar7;
            piStack_3c[3] = aiStack_24[0];
            *piVar7 = iVar1 + 1;
            FUN_00482a20(&DAT_005aa12c,iVar6,iVar5,0);
            break;
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 4;
        } while (iVar5 <= (int)uVar8);
      }
      iVar6 = iVar6 + 1;
      piStack_3c = piStack_3c + 4;
      piVar7 = piVar7 + 1;
    } while (iVar6 < (int)uVar8);
  }
  return;
}


