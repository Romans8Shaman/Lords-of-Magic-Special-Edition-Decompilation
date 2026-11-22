
undefined4 __thiscall FUN_005274b0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054c488;
  local_c = ExceptionList;
  puVar7 = *(undefined4 **)this;
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  if (param_1 != puVar7) {
    iVar1 = FUN_00521e00(this);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    *(undefined4 **)this = param_1;
    iVar2 = FUN_00521e00(this);
    if (iVar2 == 0) {
      *(undefined4 **)this = puVar7;
      ExceptionList = local_c;
      return 0;
    }
    if ((*(int *)(iVar2 + 0x20) != *(int *)(iVar1 + 0x20)) ||
       (*(int *)(iVar2 + 0x120) != *(int *)(iVar1 + 0x120))) {
      FUN_0044b490(local_20);
      iVar5 = *(int *)((int)this + 0x14);
      local_4 = 0;
      if (iVar5 == 0) {
        local_10 = 0xffffffff;
        local_18 = 0;
      }
      else {
        local_10 = *(undefined4 *)(iVar5 + 0x10);
        local_18 = *(undefined4 *)(iVar5 + 8);
      }
      if ((1 < *(int *)(iVar1 + 0x120)) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3)) {
        puVar3 = FUN_0044c0c0(*(int *)((int)this + 0x20),&local_24);
        if (puVar3 == (undefined4 *)0x0) {
LAB_005276d9:
          *(undefined4 **)this = puVar7;
          local_4 = 0xffffffff;
          FUN_0044b4e0(local_20);
          ExceptionList = local_c;
          return 0;
        }
        if (puVar3[0x12] == DAT_005aa7d4) {
          puVar8 = &DAT_005aa78c;
          param_1 = &DAT_005aa78c;
        }
        else {
          if (puVar3[0x12] != DAT_005aadb0) goto LAB_005276d9;
          param_1 = &DAT_005aad68;
          puVar8 = &DAT_005aad68;
        }
        if ((*(char *)(puVar3 + 0x16b) < '\0') ||
           ((int)puVar8[0x13] <= (int)*(char *)(puVar3 + 0x16b))) goto LAB_005276d9;
        puVar4 = (undefined4 *)FUN_004fbe60(&DAT_005ae974,0,0);
        if (puVar4 != (undefined4 *)0x0) {
          do {
            if (((puVar4 != puVar3) && (puVar4[0x12] == puVar3[0x12])) &&
               (*(char *)(puVar4 + 0x16b) == *(char *)(puVar3 + 0x16b))) break;
            puVar4 = (undefined4 *)FUN_004fbe60(&DAT_005ae974,(int)puVar4,0);
          } while (puVar4 != (undefined4 *)0x0);
          if (puVar4 != (undefined4 *)0x0) {
            iVar5 = FUN_004154a0((int)puVar8);
            iVar6 = FUN_00415430((int)puVar8);
            iVar1 = puVar8[0x13];
            if ((8 < (iVar1 - iVar5) - iVar6) || (0xe < iVar1)) {
              *(undefined4 **)this = puVar7;
              local_4 = 0xffffffff;
              FUN_0044b4e0(local_20);
              ExceptionList = local_c;
              return 0;
            }
            puVar7 = this;
            puVar8 = puVar8 + iVar1 * 0x13 + 0x31;
            for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined1 *)(puVar3 + 0x16b) = *(undefined1 *)(param_1 + 0x13);
            param_1[0x13] = param_1[0x13] + 1;
            *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + puVar3[10] + 100000;
            *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x100;
          }
        }
      }
      if (*(int *)(iVar2 + 0x20) < 0) {
        if (((1 < *(int *)(iVar2 + 0x120)) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) &&
           (puVar7 = *(undefined4 **)((int)this + 0x14), puVar7 != (undefined4 *)0x0)) {
          (/*IC:00527781*/**(code **)*puVar7)(puVar7,1);
          iVar1 = FUN_0044b4f0(3);
          *(int *)((int)this + 0x14) = iVar1;
          *(undefined4 *)(iVar1 + 0x44) = 1;
          iVar2 = 0;
          puVar7 = (undefined4 *)(iVar1 + 0x2c);
          do {
            iVar2 = iVar2 + 1;
            puVar7[-6] = *(undefined4 *)((int)this + 4);
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          } while (iVar2 < *(int *)(iVar1 + 0x44));
        }
      }
      else {
        puVar7 = *(undefined4 **)((int)this + 0x14);
        if (puVar7 != (undefined4 *)0x0) {
          (/*IC:00527713*/**(code **)*puVar7)(puVar7,1);
          iVar1 = FUN_0044b4f0(*(undefined4 *)(iVar2 + 0x20));
          *(int *)((int)this + 0x14) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x10) = local_10;
            *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = local_18;
          }
          if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
            FUN_004e7ea0(0x5aa78c);
            FUN_004e7ea0(0x5aad68);
          }
        }
      }
      local_4 = 0xffffffff;
      FUN_0044b4e0(local_20);
    }
  }
  ExceptionList = local_c;
  return 1;
}


