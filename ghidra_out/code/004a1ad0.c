
undefined4 __thiscall FUN_004a1ad0(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar3 = 0;
  iVar2 = (int)*param_1;
  if ((iVar2 < 0) || (0xf < iVar2)) {
    local_4 = 0;
  }
  else {
    local_4 = (int)this + iVar2 * 0x1d84 + 0x5068;
  }
  iVar4 = (int)param_1[0x33];
  if ((iVar4 < 0) || (0xf < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)this + iVar4 * 0x1d84 + 0x5068;
  }
  if ((local_4 != 0) && (iVar4 != 0)) {
    if ((iVar2 < 0) || (0xf < iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar4 + 0xd28 + iVar2 * 0x88;
    }
    if (iVar2 != 0) {
      do {
        uVar1 = (uint)(byte)param_1[iVar3 + 1];
        if (uVar1 != 0xff) {
          iVar4 = FUN_004beef0((void *)(iVar2 + 0x7c),uVar1);
          if (iVar4 == 0) {
            FUN_004bef40((void *)(iVar2 + 0x7c),uVar1);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x32);
      iVar2 = (int)param_1[0x33];
      if ((iVar2 < 0) || (0xf < iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = local_4 + 0xd28 + iVar2 * 0x88;
      }
      if (iVar2 != 0) {
        iVar3 = 0;
        do {
          uVar1 = (uint)(byte)param_1[iVar3 + 0x34];
          if (uVar1 != 0xff) {
            iVar4 = FUN_004beef0((void *)(iVar2 + 0x7c),uVar1);
            if (iVar4 == 0) {
              FUN_004bef40((void *)(iVar2 + 0x7c),uVar1);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x32);
        return 1;
      }
    }
  }
  return 0;
}


