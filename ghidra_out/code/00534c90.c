
void FUN_00534c90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short *psVar8;
  int local_24;
  short local_20 [7];
  short local_12;
  short local_10;
  short local_e;
  
  if (DAT_005d4148 == 0) {
    iVar2 = 0;
    local_24 = 0;
    iVar5 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_0054eac8)[iVar5] & 0x1f);
      (&DAT_005d3960)[iVar5] = iVar2;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar5;
        puVar7 = (undefined4 *)((int)&DAT_005d3860 + iVar2);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar2 = local_24 + uVar6;
        local_24 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1c);
    (&DAT_005d385f)[iVar2] = (char)iVar5;
    iVar5 = 0;
    iVar2 = 0;
    do {
      uVar6 = 1 << ((byte)(&DAT_0054eb40)[iVar2] & 0x1f);
      (&DAT_005d40d0)[iVar2] = iVar5;
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)((int)&DAT_005d39d8 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar5 = iVar5 >> 7;
    for (; iVar2 < 0x1e; iVar2 = iVar2 + 1) {
      (&DAT_005d40d0)[iVar2] = iVar5 << 7;
      uVar6 = 1 << ((char)(&DAT_0054eb40)[iVar2] - 7U & 0x1f);
      if (0 < (int)uVar6) {
        uVar1 = (undefined1)iVar2;
        puVar7 = (undefined4 *)(&DAT_005d3ad8 + iVar5);
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = uVar1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        iVar5 = iVar5 + uVar6;
      }
    }
    psVar8 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar8[0] = 0;
      psVar8[1] = 0;
      psVar8 = psVar8 + 2;
    }
    puVar3 = &DAT_005d3bda;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x5d3e17);
    puVar3 = &DAT_005d3e1a;
    do {
      *puVar3 = 9;
      puVar3 = puVar3 + 2;
      local_e = local_e + 1;
    } while ((int)puVar3 < 0x5d3fd7);
    puVar3 = (undefined2 *)((int)&DAT_005d3fd8 + 2);
    do {
      *puVar3 = 7;
      puVar3 = puVar3 + 2;
      local_12 = local_12 + 1;
    } while ((int)puVar3 < 0x5d4037);
    puVar3 = &DAT_005d403a;
    do {
      *puVar3 = 8;
      puVar3 = puVar3 + 2;
      local_10 = local_10 + 1;
    } while ((int)puVar3 < 0x5d4057);
    FUN_00534ef0((undefined2 *)&DAT_005d3bd8,0x11f,local_20);
    uVar6 = 0;
    puVar3 = &DAT_005d4058;
    do {
      puVar3[1] = 5;
      uVar4 = FUN_00536940(uVar6,5);
      *puVar3 = (short)uVar4;
      puVar3 = puVar3 + 2;
      uVar6 = uVar6 + 1;
    } while ((int)puVar3 < 0x5d40d0);
    DAT_005d4148 = 1;
  }
  return;
}


