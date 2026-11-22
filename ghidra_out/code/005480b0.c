
uint __cdecl FUN_005480b0(int *param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int local_24;
  short *local_20;
  int local_18;
  int local_14;
  int local_10;
  byte local_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  short local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  ushort uStack_2;
  
  local_14 = 0;
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar4 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar2 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar7 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  local_24 = uVar4 + uVar2;
  local_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < (ushort)uVar2) || (uVar5 = (ushort)uVar4, 0x7ffe < uVar5)) ||
     (0xbffd < (ushort)local_24)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
    return uVar2;
  }
  if ((ushort)local_24 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return uVar2;
  }
  if ((ushort)uVar2 == 0) {
    local_24 = local_24 + 1;
    if ((((param_1[2] & 0x7fffffffU) == 0) && (param_1[1] == 0)) && (*param_1 == 0)) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      return param_1[2];
    }
  }
  if (uVar5 == 0) {
    uVar2 = param_2[2];
    local_24 = local_24 + 1;
    if ((((uVar2 & 0x7fffffff) == 0) && (param_2[1] == 0)) && (*param_2 == 0)) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return uVar2;
    }
  }
  local_20 = &local_8;
  local_18 = 0;
  iVar6 = 5;
  do {
    if (0 < iVar6) {
      puVar9 = (ushort *)(param_2 + 2);
      puVar8 = (ushort *)(local_18 * 2 + (int)param_1);
      local_10 = iVar6;
      do {
        iVar3 = FUN_005473b0(*(uint *)(local_20 + -2),(uint)*puVar9 * (uint)*puVar8,
                             (uint *)(local_20 + -2));
        if (iVar3 != 0) {
          *local_20 = *local_20 + 1;
        }
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + -1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  local_24 = local_24 + 0xc002;
  sVar1 = (short)local_24;
  while ((uVar5 = (ushort)local_24, 0 < sVar1 && ((uStack_2 & 0x8000) == 0))) {
    FUN_00547450((uint *)&local_c);
    local_24 = local_24 + 0xffff;
    sVar1 = (short)local_24;
  }
  if ((short)uVar5 < 1) {
    uVar5 = uVar5 - 1;
    if ((short)uVar5 < 0) {
      iVar6 = -(int)(short)uVar5;
      uVar5 = uVar5 + (short)iVar6;
      do {
        if ((local_c & 1) != 0) {
          local_14 = local_14 + 1;
        }
        FUN_00547480((uint *)&local_c);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_14 != 0) {
      local_c = local_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,local_c)) ||
     (uVar2 = CONCAT22(uStack_a,CONCAT11(uStack_b,local_c)) & 0x1ffff,
     iVar3 = CONCAT22(local_4,uStack_6), iVar6 = CONCAT22(local_8,uStack_a), uVar2 == 0x18000)) {
    uVar2 = 0xffffffff;
    if (CONCAT22(local_8,uStack_a) == -1) {
      iVar6 = 0;
      if (CONCAT22(local_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar5 = uVar5 + 1;
          iVar3 = 0;
          iVar6 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar3 = 0;
          iVar6 = 0;
        }
      }
      else {
        iVar3 = CONCAT22(local_4,uStack_6) + 1;
      }
    }
    else {
      iVar6 = CONCAT22(local_8,uStack_a) + 1;
      iVar3 = CONCAT22(local_4,uStack_6);
    }
  }
  local_8 = (short)((uint)iVar6 >> 0x10);
  uStack_a = (undefined2)iVar6;
  local_4 = (undefined2)((uint)iVar3 >> 0x10);
  uStack_6 = (undefined2)iVar3;
  if (uVar5 < 0x7fff) {
    *(undefined2 *)param_1 = uStack_a;
    *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,local_8);
    *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,local_4);
    *(ushort *)((int)param_1 + 10) = uVar5 | uVar7;
    return CONCAT22(uStack_6,local_8);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar7 != 0) & 0x80000000) + 0x7fff8000;
  return uVar2;
}


