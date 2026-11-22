
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00548ed0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = _DAT_005d6b2c;
  uVar7 = 0;
  if (param_3 != 0) {
    if (DAT_005d5310 == 0) {
      do {
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = *param_2;
        uVar6 = (uint)CONCAT11(bVar4,bVar1);
        param_2 = param_2 + 1;
        if (bVar4 != bVar1) {
          if ((0x40 < bVar4) && (bVar4 < 0x5b)) {
            uVar6 = (uint)CONCAT11(bVar4 + 0x20,bVar1);
          }
          uVar5 = (undefined2)uVar6;
          bVar4 = (byte)uVar6;
          if ((0x40 < bVar4) && (bVar4 < 0x5b)) {
            uVar5 = (undefined2)CONCAT31((int3)(uVar6 >> 8),bVar4 + 0x20);
          }
          bVar4 = (byte)((ushort)uVar5 >> 8);
          if (bVar4 != (byte)uVar5) {
            if (bVar4 < (byte)uVar5) {
              return 0xffffffff;
            }
            return 1;
          }
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar7 = 0;
    }
    else {
      LOCK();
      _DAT_005d6b2c = _DAT_005d6b2c + 1;
      UNLOCK();
      bVar2 = 0 < DAT_005d6b28;
      if (bVar2) {
        LOCK();
        UNLOCK();
        _DAT_005d6b2c = iVar3;
        FUN_0053cbb0(0x13);
      }
      uVar9 = (uint)bVar2;
      uVar8 = 0;
      uVar6 = 0;
      do {
        bVar4 = *param_1;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar4);
        param_1 = param_1 + 1;
        bVar1 = *param_2;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar1);
        param_2 = param_2 + 1;
        if (bVar4 != bVar1) {
          uVar8 = FUN_00543b00(uVar8);
          uVar6 = FUN_00543b00(uVar6);
          if ((byte)uVar6 != (byte)uVar8) {
            uVar7 = 0xffffffff;
            if ((byte)uVar8 <= (byte)uVar6) {
              uVar7 = 1;
            }
            goto LAB_00548f9e;
          }
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar7 = 0;
LAB_00548f9e:
      if (uVar9 == 0) {
        LOCK();
        _DAT_005d6b2c = _DAT_005d6b2c + -1;
        UNLOCK();
      }
      else {
        FUN_0053cc30(0x13);
      }
    }
  }
  return uVar7;
}


