
undefined4 __thiscall FUN_0052b6f0(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_ac;
  uint local_a0;
  int local_98 [30];
  undefined4 local_20 [8];
  
  puVar1 = local_20;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0;
  puVar1 = FUN_00485080(&DAT_005aa12c,param_1,0x3f);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar6 = FUN_00505a70();
  if ((iVar6 == 0) && (iVar6 = FUN_00505a90(), iVar6 == 0)) {
    FUN_0052bc40((int)this);
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar6 = FUN_00505a70();
    if (iVar6 == 0) {
      iVar6 = FUN_00505a90();
      if (iVar6 == 0) {
        if (DAT_005d209c == '\0') {
          uVar4 = 2;
        }
        else if (DAT_005d209c == '\x01') {
          uVar4 = 4;
        }
        else if (DAT_005d209c == '\x02') {
          uVar4 = 2 - ((param_2 & 0x100) != 0);
        }
        else {
          uVar4 = local_a0;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  iVar9 = DAT_005ae998;
  iVar6 = DAT_005ae98c;
  if ((uVar4 & 0xfffffffe) == 0) {
    piVar8 = (int *)((int)this + 0x18);
    puVar1[0xc] = puVar1[0xc] | 0x20;
    iVar6 = 0;
    do {
      if (*piVar8 == -1) break;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 3;
    } while (iVar6 < 0x1e);
    if (0x1d < iVar6) {
      iVar6 = 0;
    }
    *(undefined4 *)((int)this + iVar6 * 0xc + 0x14) = puVar1[7];
    *(int *)((int)this + (iVar6 + 2) * 0xc) = param_1;
    *(undefined4 *)((int)this + iVar6 * 0xc + 0x1c) = 0;
  }
  else {
    local_a0 = 0;
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 4) != 0) {
        iVar3 = 0;
        local_ac = -1;
        for (iVar2 = DAT_005ae998; iVar2 <= iVar6; iVar2 = iVar2 + 1) {
          iVar5 = FUN_004f6000(&DAT_005ae974,iVar2);
          if ((((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) &&
              (*(int *)(iVar5 + 0x48) == puVar1[0x12])) && (*(int *)(iVar5 + 0x28) == param_1)) {
            local_ac = iVar2;
            break;
          }
        }
        if (iVar9 <= local_ac) {
          piVar8 = local_98;
          iVar2 = local_ac;
          do {
            iVar5 = FUN_004f6000(&DAT_005ae974,iVar2);
            if (((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) &&
               (*(int *)(iVar5 + 0x48) == puVar1[0x12])) {
              *piVar8 = iVar2;
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
              if (0x1d < iVar3) goto LAB_0052ba3b;
              uVar4 = FUN_00431160(iVar5,puVar1,0);
              if (uVar4 != 0) break;
            }
            iVar2 = iVar2 + -1;
          } while (iVar9 <= iVar2);
        }
        local_ac = local_ac + 1;
        if (local_ac <= iVar6) {
          piVar8 = local_98 + iVar3;
          do {
            iVar9 = FUN_004f6000(&DAT_005ae974,local_ac);
            if (((iVar9 != 0) && (*(int *)(iVar9 + 4) == 0)) &&
               (*(int *)(iVar9 + 0x48) == puVar1[0x12])) {
              uVar4 = FUN_00431160(iVar9,puVar1,0);
              if (uVar4 != 0) break;
              *piVar8 = local_ac;
              iVar3 = iVar3 + 1;
              piVar8 = piVar8 + 1;
              if (0x1d < iVar3) break;
            }
            local_ac = local_ac + 1;
          } while (local_ac <= iVar6);
        }
LAB_0052ba3b:
        iVar6 = 0;
        if (0 < iVar3) {
          piVar8 = local_98;
          puVar1 = (undefined4 *)((int)this + 0x18);
          do {
            iVar9 = FUN_004f6000(&DAT_005ae974,*piVar8);
            if ((iVar9 != 0) && (*(int *)(iVar9 + 4) == 0)) {
              *(byte *)(iVar9 + 0x34) = *(byte *)(iVar9 + 0x34) | 2;
              *(uint *)(iVar9 + 0x30) = *(uint *)(iVar9 + 0x30) | 0x20;
              puVar1[-1] = *(undefined4 *)(iVar9 + 0x1c);
              *puVar1 = *(undefined4 *)(iVar9 + 0x28);
              puVar1[1] = 0;
              local_a0 = local_a0 + 1;
              puVar1 = puVar1 + 3;
              if (0x1d < (int)local_a0) break;
            }
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar6 < iVar3);
        }
      }
    }
    else {
      local_ac = 0;
      iVar9 = 0;
      if (DAT_005ae998 <= DAT_005ae98c) {
        piVar8 = local_98;
        iVar9 = DAT_005ae998;
        do {
          iVar2 = FUN_004f6000(&DAT_005ae974,iVar9);
          if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) &&
              (((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3 ||
               (iVar3 = FUN_00407d50(iVar2), iVar3 == 0)))) &&
             ((*(int *)(iVar2 + 0x48) == puVar1[0x12] &&
              (*(char *)(iVar2 + 0x5ac) == *(char *)(puVar1 + 0x16b))))) {
            local_ac = local_ac + 1;
            *piVar8 = *(int *)(iVar2 + 0x28);
            piVar8 = piVar8 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= iVar6);
        iVar9 = local_ac;
      }
      if (0 < iVar9) {
        piVar8 = local_98;
        do {
          iVar6 = 0;
          piVar7 = (int *)((int)this + 0x18);
          do {
            if (*piVar7 == -1) break;
            if (*piVar7 == *piVar8) {
              *piVar8 = -1;
            }
            iVar6 = iVar6 + 1;
            piVar7 = piVar7 + 3;
          } while (iVar6 < 0x1e);
          if ((((*piVar8 != -1) && (iVar6 < 0x1e)) &&
              (iVar2 = FUN_004f6000(&DAT_005ae974,*piVar8), iVar2 != 0)) &&
             (*(int *)(iVar2 + 4) == 0)) {
            *(byte *)(iVar2 + 0x34) = *(byte *)(iVar2 + 0x34) | 2;
            *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x20;
            *(undefined4 *)((int)this + iVar6 * 0xc + 0x14) = *(undefined4 *)(iVar2 + 0x1c);
            *(undefined4 *)((int)this + (iVar6 + 2) * 0xc) = *(undefined4 *)(iVar2 + 0x28);
            *(undefined4 *)((int)this + iVar6 * 0xc + 0x1c) = 0;
          }
          piVar8 = piVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      this_00 = (void *)FUN_0052be20((int)this);
      if (((this_00 != (void *)0x0) && (uVar4 = FUN_00407d80((int)this_00), uVar4 == 0)) &&
         (iVar6 = FUN_004c1cf0((int)this_00), iVar6 == 0)) {
        FUN_0041ed80(this_00,0x17);
      }
    }
  }
  FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
  return 1;
}


