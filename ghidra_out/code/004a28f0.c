
undefined4 __cdecl FUN_004a28f0(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_10;
  uint local_c;
  
  if (param_2 < 4) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar7 = 0;
  if (param_2 != 3) {
    do {
      if ((((*(char *)(uVar7 + param_1) == 'B') && (*(char *)(uVar7 + 1 + param_1) == 'O')) &&
          (*(char *)(uVar7 + 2 + param_1) == 'D')) && (*(char *)(uVar7 + 3 + param_1) == 'Y')) {
        uVar7 = uVar7 + 5;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2 - 3);
  }
  uVar3 = CONCAT21(CONCAT11(*(undefined1 *)(uVar7 + param_1),*(undefined1 *)(uVar7 + 1 + param_1)),
                   *(undefined1 *)(uVar7 + 2 + param_1));
  uVar10 = (uint)uVar3;
  if (*(char *)(param_1 + 0x1e) == '\0') {
    if (param_4 < uVar10) {
      return 0;
    }
    puVar9 = (undefined4 *)(uVar7 + 3 + param_1);
    for (uVar4 = (uint)(uVar3 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_3 = *puVar9;
      puVar9 = puVar9 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    return 1;
  }
  local_10 = 0;
  uVar4 = 0;
  uVar7 = uVar7 + 3;
  if (uVar10 == 0) {
    return 1;
  }
  do {
    if (param_2 <= uVar7) {
      return 0;
    }
    bVar1 = *(byte *)(uVar7 + param_1);
    uVar8 = uVar7 + 1;
    local_c = (uint)bVar1;
    uVar6 = uVar4;
    uVar5 = uVar8;
    if (bVar1 != 0x80) {
      if (bVar1 < 0x81) {
        if ((uVar8 != param_2) || (bVar1 != 0)) {
          uVar6 = uVar4 + 1 + local_c;
          if (param_4 < uVar6) {
            return 0;
          }
          uVar5 = uVar7 + 2 + local_c;
          if (param_2 < uVar5) {
            return 0;
          }
          puVar9 = (undefined4 *)(uVar8 + param_1);
          puVar11 = (undefined4 *)((int)param_3 + uVar4);
          for (uVar7 = local_c + 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = local_c + 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          local_10 = local_10 + 1 + local_c;
        }
      }
      else {
        if (param_2 <= uVar8) {
          return 0;
        }
        uVar2 = *(undefined1 *)(uVar8 + param_1);
        uVar6 = (uVar4 - local_c) + 0x101;
        if (param_4 < uVar6) {
          return 0;
        }
        if (uVar4 < uVar6) {
          puVar9 = (undefined4 *)(uVar4 + (int)param_3);
          for (uVar5 = uVar6 - uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar6 - uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = uVar2;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_10 = local_10 + 1;
        uVar5 = uVar7 + 2;
      }
    }
    local_10 = local_10 + 1;
    uVar4 = uVar6;
    uVar7 = uVar5;
    if (uVar10 <= local_10) {
      return 1;
    }
  } while( true );
}


