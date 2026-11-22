
undefined4 __thiscall
FUN_00480130(void *this,int param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,int *param_8,int *param_9,uint param_10,int param_11)

{
  void *this_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_58 [5];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  void *local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_0054a763;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x482c);
  ExceptionList = &local_c;
  *param_8 = -1;
  *param_9 = -1;
  param_2 = (void *)FUN_004a51c0(this_00,param_1,(int)param_2);
  if (((param_4 < 0) || (DAT_005cd2f0 <= param_4)) || (DAT_005cd2f4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_005cd2f4 + param_4 * 1000;
  }
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    piVar6 = (int *)0x0;
    pvVar1 = (void *)FUN_004ede30(this_00,(int)param_2,*(uint *)(iVar4 + 0x14) & 0x1c0000);
    if (-1 < (int)pvVar1) {
      param_2 = pvVar1;
    }
    if (param_3 == *(int *)((int)this + 0x6a8)) {
      iVar5 = (int)this + 0x660;
    }
    else {
      if (param_3 != *(int *)((int)this + 0xc84)) {
        ExceptionList = local_c;
        return 0;
      }
      iVar5 = (int)this + 0xc3c;
    }
    if (param_11 < 0) {
      iVar2 = FUN_004154a0(iVar5);
      iVar3 = FUN_00415430(iVar5);
      if (((0 < *(int *)(iVar4 + 0x138)) && ((*(uint *)(iVar4 + 0x14) & 0x80000) != 0)) &&
         ((*(uint *)(iVar4 + 0x14) & 0x140000) == 0)) {
        ExceptionList = local_c;
        return 0;
      }
      if (*(int *)(iVar4 + 0x20) < 0) {
        if (8 < (*(int *)(iVar5 + 0x4c) - iVar2) - iVar3) {
          ExceptionList = local_c;
          return 0;
        }
      }
      else if (2 < iVar3) {
        ExceptionList = local_c;
        return 0;
      }
      if (0xe < *(int *)(iVar5 + 0x4c)) {
        ExceptionList = local_c;
        return 0;
      }
    }
  }
  else {
    iVar4 = FUN_004a8300(this_00,(int)param_2,0);
    *param_8 = iVar4;
    piVar6 = (int *)FUN_00482ac0(this,iVar4,0);
    if (((piVar6 != (int *)0x0) &&
        ((piVar6[0x12] != param_3 || (iVar4 = FUN_00415e90(piVar6,param_4), iVar4 == 0)))) &&
       (pvVar1 = FUN_004edca0(this_00,param_2,param_3,param_4), pvVar1 != param_2)) {
      iVar4 = FUN_004a8300(this_00,(int)pvVar1,0);
      *param_8 = iVar4;
      piVar6 = (int *)FUN_00482ac0(this,iVar4,0);
    }
    iVar5 = param_4;
  }
  if (piVar6 == (int *)0x0) {
    pvVar1 = (void *)Ordinal_401(0x5dc,s_C__lomse_source_storm_h_00555130,0x3ef,0);
    if (pvVar1 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piStack_4 = piVar6;
      piVar6 = FUN_004116b0(pvVar1,param_3);
    }
    piStack_4 = (int *)0xffffffff;
    if (piVar6 == (int *)0x0) {
      OutputDebugStringA(s_Insufficient_memory_to_add_army_00555ee4);
      ExceptionList = local_c;
      return 0;
    }
    iVar4 = FUN_004a7d50(this_00,piVar6,(int)param_2);
    *param_8 = iVar4;
    if (iVar4 == -1) {
      OutputDebugStringA(s_AddSprite_failed__army__00555ec8);
      ExceptionList = local_c;
      return 0;
    }
    piVar6[0x152] = (int)param_2;
  }
  FUN_00526e40(local_58);
  piStack_4 = (int *)0x1;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iStack_38 = DAT_005d3344;
  }
  else {
    iStack_38 = DAT_005d3340;
  }
  iVar4 = FUN_00529200(local_58,param_4,param_10);
  if (iVar4 == 0) {
    piStack_4 = (int *)0xffffffff;
    thunk_FUN_00526ea0((int)local_58);
    ExceptionList = local_c;
    return 0;
  }
  DAT_005d3340 = DAT_005d3340 + 1;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    DAT_005d3344 = DAT_005d3344 + 1;
  }
  iVar4 = FUN_004163a0(piVar6,local_58);
  uStack_40 = 0;
  uStack_3c = 0;
  *param_9 = iVar4;
  uStack_44 = 0;
  if (param_6 != -1) {
    piVar6[0x11] = param_6;
    (/*IC:00480459*/**(code **)(*piVar6 + 0x2c))(piVar6);
  }
  if (*param_9 < 0) {
    piStack_4 = (int *)0xffffffff;
    thunk_FUN_00526ea0((int)local_58);
    ExceptionList = local_c;
    return 0;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    if (param_11 < 0) {
      *(undefined1 *)(piVar6 + 0x16b) = *(undefined1 *)(iVar5 + 0x4c);
      piVar6 = local_58;
      piVar7 = (int *)(iVar5 + 0xc4 + *(int *)(iVar5 + 0x4c) * 0x4c);
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + 1;
    }
    else {
      *(char *)(piVar6 + 0x16b) = (char)param_11;
    }
    if (*(int *)(iVar5 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
      FUN_0052bc40((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      FUN_004d05e0(DAT_005a7b78,DAT_005a7bcc,DAT_005a7bd0);
    }
  }
  else {
    FUN_00415c20(piVar6,(int *)0x0,-1);
    iVar4 = piVar6[0x13];
    if (((iVar4 <= *param_9) || (piVar6[(*param_9 + 3) * 0x13] != iStack_38)) &&
       (iVar5 = 0, 0 < iVar4)) {
      piVar6 = piVar6 + 0x39;
      do {
        if (*piVar6 == iStack_38) {
          *param_9 = iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 0x13;
      } while (iVar5 < iVar4);
    }
  }
  if ((param_3 < 0) || (0xf < param_3)) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)this + param_3 * 0x1d84 + 0x5068;
  }
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x15d8) = *(uint *)(iVar4 + 0x15d8) | 0x40;
  }
  piStack_4 = (int *)0xffffffff;
  thunk_FUN_00526ea0((int)local_58);
  ExceptionList = local_c;
  return 1;
}


