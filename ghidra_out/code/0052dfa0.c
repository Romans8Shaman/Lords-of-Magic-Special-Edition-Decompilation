
void __thiscall FUN_0052dfa0(void *this,int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 unused_reg_1;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_94;
  int local_88;
  int local_80;
  int local_78 [30];
  
  iVar7 = DAT_005ae998;
  iVar6 = DAT_005ae98c;
  iVar9 = 0;
  local_80 = 0;
  if (0 < param_2) {
    do {
      bVar1 = false;
      iVar2 = 0;
      if (0 < iVar9) {
        piVar8 = local_78;
        do {
          if (*param_1 == *piVar8) {
            bVar1 = true;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar2 < iVar9);
      }
      if (!bVar1) {
        iVar2 = FUN_004f6000(&DAT_005ae974,*param_1);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) {
          local_88 = -1;
          for (iVar10 = iVar7; iVar10 <= iVar6; iVar10 = iVar10 + 1) {
            iVar3 = FUN_004f6000(&DAT_005ae974,iVar10);
            if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                (*(int *)(iVar3 + 0x48) == *(int *)(iVar2 + 0x48))) &&
               (*(int *)(iVar3 + 0x28) == *(int *)(iVar2 + 0x28))) {
              local_88 = iVar10;
              break;
            }
          }
          local_94 = iVar2;
          if (iVar7 <= local_88) {
            piVar8 = local_78 + iVar9;
            iVar10 = local_88;
            do {
              iVar3 = FUN_004f6000(&DAT_005ae974,iVar10);
              if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
                 ((iVar4 = FUN_00407d50(iVar2), iVar4 == 0 &&
                  (*(int *)(iVar3 + 0x48) == *(int *)(iVar2 + 0x48))))) {
                *piVar8 = iVar10;
                iVar9 = iVar9 + 1;
                piVar8 = piVar8 + 1;
                if (0x1d < iVar9) goto LAB_0052e16c;
                uVar5 = FUN_00431160(iVar3,unused_reg_1,0);
                if (uVar5 != 0) break;
              }
              iVar10 = iVar10 + -1;
            } while (iVar7 <= iVar10);
          }
          local_88 = local_88 + 1;
          if (local_88 <= iVar6) {
            piVar8 = local_78 + iVar9;
            do {
              iVar10 = FUN_004f6000(&DAT_005ae974,local_88);
              if (((iVar10 != 0) && (*(int *)(iVar10 + 4) == 0)) &&
                 ((iVar3 = FUN_00407d50(iVar2), iVar3 == 0 &&
                  (*(int *)(iVar10 + 0x48) == *(int *)(iVar2 + 0x48))))) {
                uVar5 = FUN_00431160(iVar10,*(int *)(iVar10 + 0x48),0);
                if (uVar5 != 0) break;
                *piVar8 = local_88;
                iVar9 = iVar9 + 1;
                piVar8 = piVar8 + 1;
                if (0x1d < iVar9) goto LAB_0052e16c;
              }
              local_88 = local_88 + 1;
            } while (local_88 <= iVar6);
          }
        }
      }
      local_80 = local_80 + 1;
      param_1 = param_1 + 1;
    } while (local_80 < param_2);
  }
LAB_0052e16c:
  if (0 < iVar9) {
    piVar8 = local_78;
    puVar11 = (undefined4 *)((int)this + 0x18);
    do {
      iVar6 = FUN_004f6000(&DAT_005ae974,*piVar8);
      if (((iVar6 != 0) && (*(int *)(iVar6 + 4) == 0)) &&
         (iVar7 = FUN_00407d50(local_94), iVar7 == 0)) {
        *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) | 0x20;
        puVar11[-1] = *(undefined4 *)(iVar6 + 0x1c);
        *puVar11 = *(undefined4 *)(iVar6 + 0x28);
        puVar11[1] = 0xffffffff;
        *(byte *)(iVar6 + 0x34) = *(byte *)(iVar6 + 0x34) | 2;
      }
      piVar8 = piVar8 + 1;
      puVar11 = puVar11 + 3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}


