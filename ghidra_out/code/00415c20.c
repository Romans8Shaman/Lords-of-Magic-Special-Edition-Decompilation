
void __thiscall FUN_00415c20(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_720;
  int *local_71c;
  int local_714;
  int local_710 [77];
  undefined4 local_5dc [49];
  undefined4 local_518 [7];
  undefined4 local_4fc [319];
  
  piVar5 = local_710;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar5 = (int *)((int)this + 0xc4);
    do {
      iVar1 = FUN_00525fc0(piVar5);
      if (iVar1 == -1) {
        iVar1 = FUN_00415470(piVar5);
        if (iVar1 == 0) {
          iVar1 = 1;
          piVar4 = local_710;
          do {
            piVar4 = piVar4 + 1;
            if (*piVar4 < 0) goto LAB_00415d60;
            iVar1 = iVar1 + 1;
          } while (iVar1 < 4);
          iVar1 = 6;
          piVar4 = local_710 + 6;
          do {
            if (*piVar4 < 0) goto LAB_00415d60;
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < 9);
          iVar1 = 0xb;
          piVar4 = local_710 + 0xb;
          do {
            if (*piVar4 < 0) goto LAB_00415d60;
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < 0xe);
          iVar1 = 0xe;
          piVar4 = local_710 + 0xe;
          do {
            if (*piVar4 < 0) break;
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < 0x20);
LAB_00415d60:
          local_710[iVar1] = iVar3;
        }
        else if (local_710[4] < 0) {
          local_710[4] = iVar3;
        }
        else if (local_710[9] < 0) {
          local_710[9] = iVar3;
        }
        else if (local_710[10] < 0) {
          local_710[0xe] = iVar3;
        }
        else {
          iVar1 = 0xe;
          piVar4 = local_710 + 0xe;
          do {
            if (*piVar4 < 0) goto LAB_00415d60;
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < 0x20);
        }
      }
      else if (local_710[0] < 0) {
        local_710[0] = iVar3;
      }
      else if (local_710[5] < 0) {
        local_710[5] = iVar3;
      }
      else if (local_710[10] < 0) {
        local_710[10] = iVar3;
      }
      else {
        iVar1 = 0xe;
        piVar4 = local_710 + 0xe;
        do {
          if (*piVar4 < 0) goto LAB_00415d60;
          iVar1 = iVar1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar1 < 0x20);
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x13;
    } while (iVar3 < *(int *)((int)this + 0x4c));
  }
  FUN_00411610(local_5dc);
  if (param_1 != (int *)0x0) {
    piVar5 = param_1;
    piVar4 = local_710 + 0x20;
    for (iVar3 = 0x2d; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    }
  }
  local_71c = local_710;
  local_720 = 0;
  puVar2 = local_518;
  local_714 = 0x20;
  do {
    iVar3 = *local_71c;
    if (-1 < iVar3) {
      puVar6 = (undefined4 *)((int)this + iVar3 * 0x4c + 0xc4);
      puVar7 = puVar2;
      for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      if (param_1 != (int *)0x0) {
        iVar1 = 0;
        piVar5 = local_710 + 0x22;
        do {
          if ((piVar5[-1] == iVar3) && (*piVar5 == param_2)) break;
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 3;
        } while (iVar1 < 0xf);
        if (iVar1 < 0xf) {
          param_1[iVar1 * 3 + 1] = local_720;
        }
      }
      local_720 = local_720 + 1;
      puVar2 = puVar2 + 0x13;
    }
    local_71c = local_71c + 1;
    local_714 = local_714 + -1;
    if (local_714 == 0) {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x4c)) {
        puVar2 = local_4fc;
        puVar6 = (undefined4 *)((int)this + 0xc4);
        do {
          puVar7 = puVar2 + -7;
          puVar8 = puVar6;
          for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar3 = iVar3 + 1;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[-2] = 0;
          puVar2 = puVar2 + 0x13;
          puVar6 = puVar6 + 0x13;
        } while (iVar3 < *(int *)((int)this + 0x4c));
      }
      FUN_00411910(local_5dc);
      return;
    }
  } while( true );
}


