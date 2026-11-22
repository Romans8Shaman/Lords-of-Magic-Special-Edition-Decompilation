
void __thiscall
FUN_004ee150(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224 [16];
  undefined4 local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  int local_1d0 [16];
  int local_190 [50];
  int local_c8 [50];
  
  local_224[0xd] = 2;
  local_224[8] = 2;
  local_224[9] = 1;
  local_224[10] = 1;
  local_224[2] = 1;
  local_224[3] = 0xffffffff;
  local_224[5] = 0xffffffff;
  local_224[6] = 0xffffffff;
  local_224[0xf] = param_1;
  iVar6 = *(int *)((int)this + 0x40);
  local_1dc = param_4;
  iVar7 = *(int *)((int)this + 0x34);
  local_1e4 = param_2;
  local_1e0 = param_3;
  local_224[0xb] = 0;
  local_224[0xc] = 0;
  local_224[0xe] = 0xfffffffe;
  local_224[7] = 0;
  local_224[1] = 0;
  local_224[4] = 0;
  local_1d8 = param_5;
  local_1d4 = param_6;
  local_22c = 0;
  local_230 = 0;
  if (iVar6 <= iVar7) {
    local_238 = local_c8;
    piVar5 = local_190;
    do {
      iVar2 = FUN_004f6000(&DAT_005ae974,iVar6);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && ((~*(uint *)(iVar2 + 0x30) & 0x100) != 0)
          ) && (((uVar3 = FUN_00407d70(iVar2), uVar3 == 0 &&
                 (uVar3 = FUN_00407d60(iVar2), uVar3 == 0)) &&
                (uVar3 = FUN_00407d80(iVar2), uVar3 == 0)))) {
        iVar4 = *(int *)(iVar2 + 0x48);
        if (iVar4 == DAT_005aa7d4) {
          local_22c = local_22c + 1;
          *local_238 = iVar2;
          local_238 = local_238 + 1;
        }
        if (iVar4 == DAT_005aadb0) {
          *piVar5 = iVar2;
          local_230 = local_230 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar7);
  }
  piVar5 = local_224 + 0x15;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  FUN_004e7300(0x5aa78c);
  FUN_004a8b50(this,param_1,param_4);
  if (0 < local_22c) {
    local_238 = local_c8;
    local_234 = local_22c;
    do {
      piVar5 = (int *)*local_238;
      iVar7 = (int)(char)piVar5[0x16b];
      iVar6 = FUN_004e7400(&DAT_005aa78c,iVar7,local_224,&local_228,0);
      if (iVar6 == 0) {
        FUN_004d41c0(DAT_005a7b78,s_Calls_UnitIndex2GroupPosition_00573188);
      }
      else {
        iVar6 = local_224[iVar7 + 0x15];
        iVar2 = FUN_0045a100(local_224[local_224[0] + 0xf],
                             local_224[iVar6 + 1] + local_224[local_228 + 0xb],
                             -(local_224[local_228 + 7] + local_224[iVar6 + 4]),piVar5[0x11]);
        iVar2 = FUN_004ee130(piVar5,iVar2);
        FUN_004a6dd0(this,piVar5,piVar5[7],iVar2);
        local_224[iVar7 + 0x15] = iVar6 + 1;
      }
      local_238 = local_238 + 1;
      local_234 = local_234 + -1;
    } while (local_234 != 0);
  }
  piVar5 = local_224 + 0x15;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  FUN_004e7300(0x5aad68);
  FUN_004a8b50(this,param_4,param_1);
  if (0 < local_230) {
    local_238 = local_190;
    local_234 = local_230;
    do {
      piVar5 = (int *)*local_238;
      iVar7 = (int)(char)piVar5[0x16b];
      iVar6 = FUN_004e7400(&DAT_005aad68,iVar7,local_224,&local_228,0);
      if (iVar6 == 0) {
        FUN_004d41c0(DAT_005a7b78,s_Calls_UnitIndex2GroupPosition_00573188);
      }
      else {
        iVar6 = local_224[iVar7 + 0x15];
        iVar2 = FUN_0045a100(local_224[local_224[0] + 0x12],
                             local_224[iVar6 + 1] + local_224[local_228 + 0xb],
                             -(local_224[local_228 + 7] + local_224[iVar6 + 4]),piVar5[0x11]);
        iVar2 = FUN_004ee130(piVar5,iVar2);
        FUN_004a6dd0(this,piVar5,piVar5[7],iVar2);
        local_224[iVar7 + 0x15] = iVar6 + 1;
      }
      local_238 = local_238 + 1;
      local_234 = local_234 + -1;
    } while (local_234 != 0);
  }
  if (local_230 != 0) {
    if (0 < local_22c) {
      piVar5 = local_c8;
      do {
        pvVar1 = (void *)*piVar5;
        uVar3 = FUN_004a8b50(this,*(int *)((int)pvVar1 + 0x1c),*(int *)(local_190[0] + 0x1c));
        FUN_0041d220(pvVar1,uVar3);
        piVar5 = piVar5 + 1;
        local_22c = local_22c + -1;
      } while (local_22c != 0);
    }
    if (0 < local_230) {
      piVar5 = local_190;
      do {
        pvVar1 = (void *)*piVar5;
        uVar3 = FUN_004a8b50(this,*(int *)((int)pvVar1 + 0x1c),*(int *)(local_c8[0] + 0x1c));
        FUN_0041d220(pvVar1,uVar3);
        piVar5 = piVar5 + 1;
        local_230 = local_230 + -1;
      } while (local_230 != 0);
    }
  }
  if (param_7 == -1) {
    iVar6 = 10;
    iVar2 = 0;
    iVar7 = 0x30;
    iVar4 = 0x10;
  }
  else {
    iVar2 = FUN_004a6f60(this,param_7,0x40000);
    if (iVar2 == -1) {
      iVar6 = 10;
      iVar2 = 0;
      iVar7 = 0x30;
      iVar4 = 0x10;
    }
    else {
      iVar4 = iVar2 % *(int *)((int)this + 0x6c);
      iVar2 = iVar2 / *(int *)((int)this + 0x6c);
      iVar6 = iVar2 + 2;
      iVar2 = iVar2 + -2;
      iVar7 = iVar4 + 2;
      iVar4 = iVar4 + -2;
    }
  }
  FUN_00468320(this,DAT_005aa7b4,iVar4,iVar7,iVar2,iVar6,0,-1);
  FUN_004a9f50(this);
  FUN_004aac90((int)this);
  FUN_004a6470((int)this);
  FUN_004a6a10(this,(int *)0x1);
  return;
}


