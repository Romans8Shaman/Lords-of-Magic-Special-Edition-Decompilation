
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00547b90(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = _DAT_005d6b2c;
  if (DAT_005d5310 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_00547bde;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_00547bde:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_005d6b2c = _DAT_005d6b2c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_005d6b28;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_005d6b2c = iVar2;
      FUN_0053cbb0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_00547c3f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_00543b00(uVar8);
      uVar7 = FUN_00543b00(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_00547c3f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_005d6b2c = _DAT_005d6b2c + -1;
      UNLOCK();
    }
    else {
      FUN_0053cc30(0x13);
    }
  }
  return uVar7;
}


