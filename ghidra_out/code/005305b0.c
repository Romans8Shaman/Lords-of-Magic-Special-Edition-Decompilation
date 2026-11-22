
undefined4 __thiscall FUN_005305b0(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = DAT_005ae98c;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    return 0;
  }
  cVar1 = (char)param_1;
  if ((999 < param_1) && (param_1 < 0x3f2)) {
    FUN_00530540(this,cVar1 + '\x18');
    piVar6 = (int *)((int)this + 0x18);
    iVar10 = 0x1e;
    do {
      puVar2 = FUN_00485080(&DAT_005aa12c,*piVar6,0x2f);
      if ((puVar2 != (undefined4 *)0x0) && (puVar2[0x12] == *(int *)this)) {
        *(char *)(puVar2 + 0x176) = cVar1 + '\x18';
      }
      piVar6 = piVar6 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    return 1;
  }
  if ((param_1 < 2000) || (0x7d9 < param_1)) {
    if ((param_1 < 3000) || (0xbc1 < param_1)) {
      if (param_1 < 4000) {
        return 0;
      }
      if (0xfa9 < param_1) {
        return 0;
      }
      iVar10 = 0x1e;
      puVar2 = (undefined4 *)((int)this + 0x18);
      do {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        iVar11 = DAT_005ae98c;
        puVar2 = puVar2 + 3;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (DAT_005ae998 <= DAT_005ae98c) {
        puVar2 = (undefined4 *)((int)this + DAT_005ae998 * 0xc + 0x14);
        puVar7 = (undefined4 *)((int)this + 0x18);
        iVar10 = DAT_005ae998;
        do {
          iVar3 = FUN_004f6000(&DAT_005ae974,iVar10);
          puVar8 = puVar7;
          if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
             (*(int *)(iVar3 + 0x48) == *(int *)this)) {
            *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xffffffdf;
            iVar4 = FUN_00407d50(iVar3);
            if ((iVar4 == 0) && (*(char *)(iVar3 + 0x5d8) == (char)(cVar1 + '`'))) {
              puVar8 = puVar7 + 3;
              *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x20;
              *puVar7 = *(undefined4 *)(iVar3 + 0x28);
              *puVar2 = *(undefined4 *)(iVar3 + 0x1c);
              *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) | 2;
            }
          }
          iVar10 = iVar10 + 1;
          puVar2 = puVar2 + 3;
          puVar7 = puVar8;
        } while (iVar10 <= iVar11);
      }
    }
    else {
      for (iVar11 = DAT_005ae998; iVar11 <= iVar10; iVar11 = iVar11 + 1) {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar11);
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) &&
           ((*(int *)(iVar3 + 0x48) == *(int *)this &&
            ((iVar4 = FUN_00407d50(iVar3), iVar4 == 0 &&
             (*(char *)(iVar3 + 0x5d8) == (char)(cVar1 + 'H'))))))) {
          iVar4 = 0;
          piVar9 = (int *)((int)this + 0x18);
          piVar6 = piVar9;
          do {
            if (*piVar6 == *(int *)(iVar3 + 0x28)) goto LAB_00530866;
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 3;
          } while (iVar4 < 0x1e);
          iVar4 = 0;
          do {
            puVar2 = FUN_00485080(&DAT_005aa12c,*piVar9,0x2f);
            if (((puVar2 == (undefined4 *)0x0) || (puVar2[0x12] != *(int *)this)) ||
               (iVar5 = FUN_00407d50((int)puVar2), iVar5 != 0)) {
              *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x20;
              *(undefined4 *)((int)this + (iVar4 + 2) * 0xc) = *(undefined4 *)(iVar3 + 0x28);
              *(undefined4 *)((int)this + iVar4 * 0xc + 0x14) = *(undefined4 *)(iVar3 + 0x1c);
              *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) | 2;
              break;
            }
            iVar4 = iVar4 + 1;
            piVar9 = piVar9 + 3;
          } while (iVar4 < 0x1e);
        }
LAB_00530866:
      }
    }
  }
  else {
    iVar10 = 0x1e;
    puVar2 = (undefined4 *)((int)this + 0x18);
    do {
      puVar2[-1] = 0xffffffff;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      iVar11 = DAT_005ae98c;
      puVar2 = puVar2 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (DAT_005ae998 <= DAT_005ae98c) {
      iVar10 = DAT_005ae998;
      puVar2 = (undefined4 *)((int)this + 0x14);
      do {
        iVar3 = FUN_004f6000(&DAT_005ae974,iVar10);
        puVar7 = puVar2;
        if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0x48) == *(int *)this)
           ) {
          *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xffffffdf;
          iVar4 = FUN_00407d50(iVar3);
          if ((iVar4 == 0) && (*(char *)(iVar3 + 0x5d8) == (char)(cVar1 + '0'))) {
            puVar7 = puVar2 + 3;
            *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 0x20;
            puVar2[1] = *(undefined4 *)(iVar3 + 0x28);
            *puVar2 = *(undefined4 *)(iVar3 + 0x1c);
            *(byte *)(iVar3 + 0x34) = *(byte *)(iVar3 + 0x34) | 2;
          }
        }
        iVar10 = iVar10 + 1;
        puVar2 = puVar7;
      } while (iVar10 <= iVar11);
    }
    iVar10 = FUN_00406b50(&DAT_005ae958,*(int *)this);
    FUN_0051ab30(&DAT_005876d0,iVar10 % DAT_005ae9c4,iVar10 / DAT_005ae9c4,0x140,0xc0);
    FUN_00504b80(0x584ae8);
    FUN_00504ce0(&DAT_00584ae8,1,0);
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return 1;
}


