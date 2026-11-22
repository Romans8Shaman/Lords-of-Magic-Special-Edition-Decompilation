
void __thiscall FUN_004e74d0(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_5f0;
  undefined4 local_5e8 [19];
  undefined4 local_59c;
  undefined4 local_524 [7];
  undefined4 local_508 [319];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054b7cb;
  pvStack_c = ExceptionList;
  iVar5 = (&DAT_00584610)[param_1];
  if (param_2 < 0x20) {
    piVar1 = &DAT_00584610 + param_2;
    do {
      if (*piVar1 != -1) {
        local_5f0 = (&DAT_00584610)[param_2];
        break;
      }
      piVar1 = piVar1 + 1;
      param_2 = param_2 + 1;
    } while ((int)piVar1 < 0x584690);
  }
  ExceptionList = &pvStack_c;
  FUN_00411610(local_5e8);
  iVar6 = *(int *)((int)this + 0x4c);
  local_4 = 0;
  if (0 < iVar6) {
    puVar2 = (undefined4 *)((int)this + 0xc4);
    puVar7 = local_524;
    for (uVar3 = (uint)(iVar6 * 0x4c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if (local_5f0 == -1) {
    if (iVar5 < iVar6 + -1) {
      puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
      iVar6 = iVar5;
      do {
        iVar6 = iVar6 + 1;
        puVar7 = puVar2 + 0x13;
        puVar8 = puVar2;
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (iVar6 < *(int *)((int)this + 0x4c) + -1);
    }
    puVar2 = local_524 + iVar5 * 0x13;
    iVar5 = *(int *)((int)this + 0x4c) * 0x4c + 0x78;
  }
  else {
    if (iVar5 < local_5f0) {
      iVar6 = iVar5;
      if (iVar5 < *(int *)((int)this + 0x4c)) {
        puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
        do {
          iVar4 = iVar6 + 1;
          if (iVar4 == local_5f0) break;
          puVar7 = puVar2 + 0x13;
          puVar8 = puVar2;
          for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + 0x13;
          iVar6 = iVar4;
        } while (iVar4 < *(int *)((int)this + 0x4c));
      }
      puVar2 = local_524 + iVar5 * 0x13;
      local_5f0 = iVar6;
    }
    else {
      if (local_5f0 < iVar5) {
        iVar6 = iVar5 - local_5f0;
        puVar2 = (undefined4 *)((int)this + iVar5 * 0x4c + 0xc4);
        do {
          iVar6 = iVar6 + -1;
          puVar7 = puVar2 + -0x13;
          puVar8 = puVar2;
          for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar2 = puVar2 + -0x13;
        } while (iVar6 != 0);
      }
      puVar2 = local_524 + iVar5 * 0x13;
    }
    iVar5 = local_5f0 * 0x4c + 0xc4;
  }
  puVar7 = (undefined4 *)((int)this + iVar5);
  for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = *(int *)((int)this + 0x4c);
  if (0 < iVar5) {
    puVar2 = local_508;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[-2] = 0;
      puVar2 = puVar2 + 0x13;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_59c = 0;
  (/*IC:004e7680*/**(code **)(*(int *)this + 0x2c))(this);
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
  }
  local_4 = 0xffffffff;
  FUN_00411910(local_5e8);
  ExceptionList = pvStack_c;
  return;
}


