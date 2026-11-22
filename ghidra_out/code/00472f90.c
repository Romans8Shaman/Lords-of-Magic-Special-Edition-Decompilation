
/* WARNING: Variable defined which should be unmapped: param_2 */

int * __thiscall
FUN_00472f90(int param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint *local_78;
  int *local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [8];
  undefined1 local_2c [8];
  int local_24;
  int iStack_20;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00549ffb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_68 = param_1;
  FUN_00539ff0(local_2c,0x10,2,&LAB_00474de0,FUN_0046ba20);
  local_4._0_1_ = 1;
  local_4c[0] = -1;
  local_4c[1] = 0xffffffff;
  local_4c[2] = 0xffffffff;
  local_4c[3] = 0xffffffff;
  local_64 = param_3;
  local_60 = param_4;
  if ((param_3 == 0) && (local_64 = param_4, param_4 == 0)) {
    *param_2 = -1;
    param_2[1] = -1;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00539eb0(local_2c,0x10,2,FUN_0046ba20);
    DAT_00583650 = DAT_00583650 + -0x10;
    ExceptionList = local_c;
    return param_2;
  }
  iVar1 = FUN_004a6e60(&DAT_005ae958,*(int *)(param_1 + 0xec),*(int *)(param_1 + 0xf0));
  piVar2 = (int *)FUN_004f6000(&DAT_005ae974,iVar1);
  if (param_9 == 0) {
    if (piVar2 == (int *)0x0) {
      pvVar3 = (void *)FUN_005005f0(&DAT_00584ae8,DAT_005a79bc);
      if (pvVar3 == (void *)0x0) {
        local_4 = (uint)local_4._1_3_ << 8;
        *param_2 = -1;
        param_2[1] = -1;
        FUN_00539eb0(local_2c,0x10,2,FUN_0046ba20);
        DAT_00583650 = DAT_00583650 + -0x10;
        ExceptionList = local_c;
        return param_2;
      }
      pvVar3 = (void *)FUN_0048d810(pvVar3,DAT_005a79c0);
      if (pvVar3 == (void *)0x0) {
        *param_2 = -1;
        param_2[1] = -1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00539eb0(local_2c,0x10,2,FUN_0046ba20);
        DAT_00583650 = DAT_00583650 + -0x10;
        ExceptionList = local_c;
        return param_2;
      }
      piVar2 = (int *)FUN_0048eb70(pvVar3,local_4c + 4);
      local_8c = *piVar2;
      local_5c = local_8c;
      local_88 = piVar2[1];
      local_58 = local_88;
      local_54 = piVar2[2];
      local_84 = piVar2[2] - local_8c;
      local_50 = piVar2[3];
      local_80 = piVar2[3] - local_88;
    }
    else {
      (/*IC:00473098*/**(code **)(*piVar2 + 0x48))(piVar2,&local_5c);
      local_84 = local_54 - local_5c;
      local_80 = local_50 - local_58;
      local_8c = local_5c;
      local_88 = local_58;
    }
  }
  else {
    local_8c = 0x140;
    local_88 = 0xbe;
    local_84 = 1;
    local_80 = 1;
  }
  local_74 = &local_24;
  local_78 = &local_64;
  local_7c = 0;
  piVar2 = local_4c + 1;
  do {
    if (local_7c == 2) {
      uVar6 = (uint)(local_24 * iStack_20 <= iStack_14 * iStack_10);
      piVar2 = local_4c + uVar6 * 2;
      if (0x27f < param_7 + local_4c[uVar6 * 2]) {
        *piVar2 = 0x27f - param_7;
      }
      if (*piVar2 < 0) {
        *piVar2 = 0;
      }
      piVar4 = local_4c + uVar6 * 2 + 1;
      if (0x1df < param_8 + local_4c[uVar6 * 2 + 1]) {
        *piVar4 = 0x1df - param_8;
      }
      if (*piVar4 < 0) {
        *piVar4 = 0;
      }
      iVar1 = local_4c[uVar6 * 2 + 1];
      *param_2 = *piVar2;
      goto LAB_0047342e;
    }
    uVar6 = *local_78;
    if ((uVar6 & 0x10) != 0) {
      FUN_0049cb20(*(void **)(param_1 + 0x170),&iStack_6c,&iStack_70,1,0xffffffff);
      piVar4 = (int *)FUN_0049cc10(*(void **)(param_1 + 0x170),local_4c + 4,
                                   *(int *)(param_1 + 0xec) - iStack_6c,
                                   *(int *)(param_1 + 0xf0) - iStack_70);
      local_8c = *piVar4;
      local_5c = local_8c;
      local_88 = piVar4[1];
      local_58 = local_88;
      local_54 = piVar4[2];
      local_84 = piVar4[2] - local_8c;
      local_50 = piVar4[3];
      local_80 = piVar4[3] - local_88;
      param_1 = local_68;
    }
    piVar2[-1] = local_8c;
    *piVar2 = local_88;
    if ((uVar6 & 1) != 0) {
      *piVar2 = local_88 - param_8;
    }
    if ((uVar6 & 2) != 0) {
      *piVar2 = local_80 + local_88;
    }
    if ((uVar6 & 4) != 0) {
      piVar2[-1] = local_8c - param_7;
    }
    if ((uVar6 & 8) != 0) {
      piVar2[-1] = local_84 + local_8c;
    }
    iVar1 = local_84 >> 1;
    if ((uVar6 & 0x20) != 0) {
      piVar2[-1] = iVar1 + local_8c;
    }
    if ((uVar6 & 0x40) != 0) {
      piVar2[-1] = (iVar1 - param_7) + local_8c;
    }
    iVar5 = local_80 >> 1;
    if ((uVar6 & 0x80) != 0) {
      *piVar2 = iVar5 + local_88;
    }
    if ((uVar6 & 0x100) != 0) {
      *piVar2 = (iVar5 - param_8) + local_88;
    }
    if ((uVar6 & 0x200) != 0) {
      piVar2[-1] = (iVar1 - (param_7 >> 1)) + local_8c;
    }
    if ((uVar6 & 0x400) != 0) {
      *piVar2 = (iVar5 - (param_8 >> 1)) + local_88;
    }
    iVar1 = piVar2[-1];
    if ((((-1 < iVar1) && (param_7 + iVar1 < 0x280)) && (-1 < *piVar2)) &&
       (param_8 + *piVar2 < 0x1e0)) break;
    local_74[-2] = param_5;
    local_74[-1] = param_6;
    *local_74 = param_7;
    local_74[1] = param_8;
    if (iVar1 < 0) {
      *local_74 = *local_74 + iVar1;
    }
    if (0x27f < param_7 + iVar1) {
      *local_74 = *local_74 + ((0x280 - param_7) - iVar1);
    }
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      local_74[1] = local_74[1] + iVar1;
    }
    if (0x1df < param_8 + iVar1) {
      local_74[1] = local_74[1] + ((0x1e0 - param_8) - iVar1);
    }
    local_7c = local_7c + 1;
    local_78 = local_78 + 1;
    piVar2 = piVar2 + 2;
    local_74 = local_74 + 4;
  } while (local_7c < 3);
  iVar1 = local_4c[local_7c * 2 + 1];
  *param_2 = local_4c[local_7c * 2];
LAB_0047342e:
  param_2[1] = iVar1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00539eb0(local_2c,0x10,2,FUN_0046ba20);
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return param_2;
}


