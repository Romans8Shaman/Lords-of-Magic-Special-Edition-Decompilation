
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00471950(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  DWORD DVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  BOOL bShow;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [4];
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00549fb0;
  local_c = ExceptionList;
  local_5c = 0;
  local_60 = 0;
  if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
    if (param_1[0x5b] < 0) {
      return;
    }
    ExceptionList = &local_c;
    iVar7 = ShowCursor(0);
    param_1[0x5b] = iVar7;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar7 = FUN_004c9810((undefined4 *)&DAT_00584d60);
  if ((iVar7 == 0) && ((*(byte *)(param_1 + 0x5e) & 2) == 0)) {
    bVar3 = false;
    if (param_1[0x5c] == 0) goto LAB_004719e5;
    if (param_1[0x5b] < 0) goto LAB_004719fb;
    bShow = 0;
  }
  else {
    bVar3 = true;
LAB_004719e5:
    if (-1 < param_1[0x5b]) goto LAB_004719fb;
    bShow = 1;
  }
  iVar7 = ShowCursor(bShow);
  param_1[0x5b] = iVar7;
LAB_004719fb:
  if (((void *)param_1[0x5c] == (void *)0x0) || (bVar3)) {
    param_1[0x45] = 0;
  }
  else {
    FUN_0049cb20((void *)param_1[0x5c],&local_5c,&local_60,1,0xffffffff);
    piVar8 = (int *)FUN_0049cc10((void *)param_1[0x5c],(int *)&local_58,param_1[0x3b] - local_5c,
                                 param_1[0x3c] - local_60);
    FUN_00476010(param_1 + 3,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
    DVar9 = GetTickCount();
    *(int *)(param_1[0x5c] + 0xc) = (int)(((ulonglong)DVar9 % 399) / 100);
    FUN_0049d9a0((void *)param_1[0x5c]);
    FUN_0049cb20((void *)param_1[0x5c],&local_5c,&local_60,1,0xffffffff);
    piVar8 = (int *)FUN_0049cc10((void *)param_1[0x5c],local_44,param_1[0x3b] - local_5c,
                                 param_1[0x3c] - local_60);
    local_58 = (int *)*piVar8;
    local_54 = piVar8[1];
    local_50 = piVar8[2];
    local_4c = piVar8[3];
    FUN_00471340(param_1 + 0x3d,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
  }
  if ((*param_1 == 0) || (bVar3)) {
    param_1[0x53] = 0;
  }
  else {
    iVar7 = param_1[0x59];
    iVar1 = param_1[0x3b];
    iVar15 = param_1[0x3c];
    iVar2 = param_1[0x5a];
    local_50 = FUN_0046bfc0(*param_1);
    local_50 = local_50 + iVar7 + iVar1;
    iVar10 = FUN_0046c1f0(*param_1);
    FUN_00471340(param_1 + 0x4b,iVar7 + iVar1,iVar2 + iVar15,local_50,iVar10 + iVar2 + iVar15);
  }
  iVar7 = FUN_00471900((int)param_1);
  if ((iVar7 == 0) || (bVar3)) {
    piVar8 = param_1 + 0x6f;
    iVar7 = 4;
    do {
      *piVar8 = 0;
      piVar8 = piVar8 + 0xe;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = param_1[99];
    iVar1 = param_1[100];
    local_50 = param_1[0x65];
    local_4c = param_1[0x66];
    FUN_00471340(param_1 + 0x67,iVar7,iVar1,iVar7,local_4c);
    FUN_00471340(param_1 + 0x75,param_1[0x65],iVar1,param_1[0x65],local_4c);
    local_4c = param_1[0x66];
    iVar7 = param_1[99] + 1;
    local_50 = param_1[0x65] + -1;
    FUN_00471340(param_1 + 0x83,iVar7,param_1[100],local_50,param_1[100]);
    FUN_00471340(param_1 + 0x91,iVar7,param_1[0x66],local_50,param_1[0x66]);
  }
  if ((param_1[0xe] != 2) || (bVar3)) {
    param_1[0x24] = 0;
  }
  else {
    FUN_00471340(param_1 + 0x1c,param_1[0x2a],param_1[0x2b],param_1[0x15] + param_1[0x2a],
                 param_1[0x16] + param_1[0x2b]);
  }
  if ((DAT_005aa710 == 0) || (bVar3)) {
    _DAT_005aa62c = 0;
  }
  else {
    FUN_00471340(&DAT_005aa60c,0,0x16c,DAT_005aa5f0,DAT_005aa5f4 + 0x16c);
  }
  DAT_005aa648 = 0;
  puVar14 = &DAT_005aa314;
  do {
    if (puVar14[-0x12] == 0) {
      *puVar14 = 0;
      puVar14[0x18] = 0;
    }
    else {
      FUN_00471340(puVar14 + -8,puVar14[6],puVar14[7],puVar14[-0xf] + puVar14[6],
                   puVar14[-0xe] + puVar14[7]);
      DAT_005aa648 = 1;
      FUN_00471340(puVar14 + 0x10,puVar14[0x1e],puVar14[0x1f],puVar14[9] + puVar14[0x1e],
                   puVar14[10] + puVar14[0x1f]);
    }
    puVar14 = puVar14 + 0x32;
  } while ((int)puVar14 < 0x5aa634);
  if (((!bVar3) &&
      ((((*param_1 != 0 || (iVar7 = FUN_00471900((int)param_1), iVar7 != 0)) || (param_1[0xe] == 2))
       || ((DAT_005aa710 != 0 || (DAT_005aa648 != 0)))))) &&
     (piVar8 = (int *)FUN_004754c0(0x584ae8), piVar8 != (int *)0x0)) {
    if ((void *)*param_1 != (void *)0x0) {
      FUN_0046c3f0((void *)*param_1,piVar8,param_1[0x59] + param_1[0x3b],
                   param_1[0x5a] + param_1[0x3c]);
    }
    iVar7 = FUN_00471900((int)param_1);
    if (iVar7 != 0) {
      iVar7 = param_1[99];
      iVar1 = param_1[0x65];
      iVar15 = (param_1[0x66] - param_1[100]) + 1;
      FUN_00497270(piVar8,iVar7,param_1[100],1,iVar15,(short)param_1[0x5f]);
      FUN_00497270(piVar8,param_1[0x65],param_1[100],1,iVar15,(short)param_1[0x5f]);
      uVar13 = (iVar1 - iVar7) - 1;
      FUN_00497270(piVar8,param_1[99] + 1,param_1[100],uVar13,1,(short)param_1[0x5f]);
      FUN_00497270(piVar8,param_1[99] + 1,param_1[0x66],uVar13,1,(short)param_1[0x5f]);
      piVar12 = param_1 + 0x67;
      iVar7 = 4;
      do {
        piVar11 = (int *)FUN_00471540(piVar12,local_44);
        FUN_00476010(param_1 + 3,*piVar11,piVar11[1],piVar11[2],piVar11[3]);
        piVar12 = piVar12 + 0xe;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (param_1[0xe] == 2) {
      local_48 = param_1[0x16];
      local_4c = param_1[0x15];
      DAT_0058364c = DAT_0058364c + 0x14;
      local_54 = 0;
      local_58 = param_1 + 0x14;
      local_50 = 0;
      local_4 = 0;
      piVar12 = (int *)FUN_00471540(param_1 + 0x1c,local_44);
      FUN_00476010(param_1 + 3,*piVar12,piVar12[1],piVar12[2],piVar12[3]);
      if (param_1[0x33] == 0) {
        FUN_00495db0(piVar8,(int *)&local_58,param_1[0x2a],param_1[0x2b]);
      }
      else {
        FUN_00496880(piVar8,(int *)&local_58,param_1[0x2a],param_1[0x2b],0,0x32);
      }
      local_4 = 0xffffffff;
      DAT_0058364c = DAT_0058364c + -0x14;
    }
    if (DAT_005aa710 != 0) {
      DAT_0058364c = DAT_0058364c + 0x14;
      local_58 = (int *)&DAT_005aa5ec;
      local_54 = 0;
      local_50 = 0;
      local_4c = DAT_005aa5f0;
      local_48 = DAT_005aa5f4;
      local_4 = 1;
      piVar12 = (int *)FUN_00471540(&DAT_005aa60c,local_44);
      FUN_00476010(param_1 + 3,*piVar12,piVar12[1],piVar12[2],piVar12[3]);
      FUN_00496880(piVar8,(int *)&local_58,0,0x16c,0,1);
      local_4 = 0xffffffff;
      DAT_0058364c = DAT_0058364c + -0x14;
    }
    puVar14 = &DAT_005aa2dc;
    do {
      if (puVar14[-4] != 0) {
        local_28 = puVar14[-1];
        DAT_0058364c = DAT_0058364c + 0x14;
        local_34 = puVar14 + -2;
        local_24 = *puVar14;
        local_30 = 0;
        local_2c = 0;
        local_4 = 2;
        piVar12 = (int *)FUN_00471540(puVar14 + 6,local_44);
        FUN_00476010(param_1 + 3,*piVar12,piVar12[1],piVar12[2],piVar12[3]);
        FUN_00496340(piVar8,(int *)&local_34,puVar14[0x14],puVar14[0x15],0);
        local_14 = puVar14[0x17];
        DAT_0058364c = DAT_0058364c + 0x14;
        local_1c = 0;
        local_18 = 0;
        local_10 = puVar14[0x18];
        local_20 = puVar14 + 0x16;
        local_4 = CONCAT31(local_4._1_3_,3);
        piVar12 = (int *)FUN_00471540(puVar14 + 0x1e,(int *)&local_58);
        FUN_00476010(param_1 + 3,*piVar12,piVar12[1],piVar12[2],piVar12[3]);
        FUN_00496340(piVar8,(int *)&local_20,puVar14[0x2c],puVar14[0x2d],0);
        local_4 = 0xffffffff;
        DAT_0058364c = DAT_0058364c + -0x28;
      }
      puVar14 = puVar14 + 0x32;
    } while ((int)puVar14 < 0x5aa5fc);
    FUN_004755a0(&DAT_00584ae8,piVar8);
  }
  uVar6 = DAT_00583734;
  uVar5 = DAT_00583730;
  uVar4 = DAT_0055c738;
  if ((param_1[0x5c] != 0) && (!bVar3)) {
    DAT_00583730 = 0;
    DAT_0055c738 = 0;
    DAT_00583734 = 0;
    FUN_0049cd80((void *)param_1[0x5c],param_1[0x3b] - local_5c,param_1[0x3c] - local_60,-1,0,2);
    piVar8 = (int *)FUN_0049cc10((void *)param_1[0x5c],local_44,param_1[0x3b] - local_5c,
                                 param_1[0x3c] - local_60);
    FUN_00476010(param_1 + 3,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
  }
  ExceptionList = local_c;
  DAT_0055c738 = uVar4;
  DAT_00583730 = uVar5;
  DAT_00583734 = uVar6;
  return;
}


