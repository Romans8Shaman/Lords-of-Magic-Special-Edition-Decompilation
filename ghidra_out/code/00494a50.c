
void __thiscall
FUN_00494a50(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)this == 0) {
    return;
  }
  uVar4 = param_3 - param_1;
  uVar8 = param_4 - param_2;
  if ((int)param_1 < 0) {
    if (uVar4 == 0) {
      return;
    }
    uVar6 = 0;
    uVar2 = param_3;
  }
  else {
    iVar3 = *(int *)((int)this + 4);
    if ((int)param_1 < iVar3) goto LAB_00494ae4;
    if (uVar4 == 0) {
      return;
    }
    param_1 = (param_1 - iVar3) + 1;
    uVar6 = iVar3 - 1;
    uVar2 = param_3 - uVar6;
  }
  param_2 = param_2 - (int)(uVar8 * param_1) / (int)uVar4;
  uVar8 = param_4 - param_2;
  uVar4 = uVar2;
  param_1 = uVar6;
LAB_00494ae4:
  if ((int)param_2 < 0) {
    if (uVar8 == 0) {
      return;
    }
    param_1 = param_1 - (int)(uVar4 * param_2) / (int)uVar8;
    if ((int)param_1 < 0) {
      return;
    }
    if (*(int *)((int)this + 4) <= (int)param_1) {
      return;
    }
    param_2 = 0;
    uVar4 = param_3 - param_1;
    uVar8 = param_4;
  }
  else {
    iVar3 = *(int *)((int)this + 8);
    if (iVar3 <= (int)param_2) {
      if (uVar8 == 0) {
        return;
      }
      param_1 = param_1 - (int)(((param_2 - iVar3) + 1) * uVar4) / (int)uVar8;
      if ((int)param_1 < 0) {
        return;
      }
      if (*(int *)((int)this + 4) <= (int)param_1) {
        return;
      }
      uVar4 = param_3 - param_1;
      param_2 = iVar3 - 1;
      uVar8 = param_4 - param_2;
    }
  }
  if ((int)param_3 < 0) {
    if (uVar4 == 0) {
      return;
    }
    iVar3 = uVar8 * param_3;
    param_3 = 0;
    param_4 = param_4 - iVar3 / (int)uVar4;
    uVar4 = -param_1;
    uVar8 = param_4 - param_2;
  }
  else {
    iVar3 = *(int *)((int)this + 4);
    if (iVar3 <= (int)param_3) {
      if (uVar4 == 0) {
        return;
      }
      iVar7 = (int)(((param_3 - iVar3) + 1) * uVar8) / (int)uVar4;
      param_3 = iVar3 - 1;
      uVar4 = param_3 - param_1;
      param_4 = param_4 - iVar7;
      uVar8 = param_4 - param_2;
    }
  }
  if ((int)param_4 < 0) {
    if (uVar8 == 0) {
      return;
    }
    param_3 = param_3 - (int)(uVar4 * param_4) / (int)uVar8;
    if ((int)param_3 < 0) {
      return;
    }
    if (*(int *)((int)this + 4) <= (int)param_3) {
      return;
    }
    uVar4 = param_3 - param_1;
    param_4 = 0;
    uVar8 = -param_2;
  }
  else {
    iVar3 = *(int *)((int)this + 8);
    if (iVar3 <= (int)param_4) {
      if (uVar8 == 0) {
        return;
      }
      param_3 = param_3 - (int)(((param_4 - iVar3) + 1) * uVar4) / (int)uVar8;
      if ((int)param_3 < 0) {
        return;
      }
      if (*(int *)((int)this + 4) <= (int)param_3) {
        return;
      }
      param_4 = iVar3 - 1;
      uVar4 = param_3 - param_1;
      uVar8 = param_4 - param_2;
    }
  }
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <=
      (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
    if ((int)uVar8 < 1) {
      iVar3 = 1;
      if ((int)uVar8 < 0) {
        iVar3 = 1 - uVar8;
        param_1 = param_3 << 0x10;
        iVar7 = (int)(uVar4 << 0x10) / (int)uVar8;
        param_2 = param_4;
      }
      else {
        iVar7 = 0;
      }
    }
    else {
      iVar3 = uVar8 + 1;
      param_1 = param_1 << 0x10;
      iVar7 = (int)(uVar4 << 0x10) / (int)uVar8;
    }
    if ((*(byte *)((int)this + 0x14) & 4) == 0) {
      if (iVar3 != 0) {
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar3 & 0xf)) != 0) {
            iVar10 = *(int *)((int)this + 0xc) * param_2 + ((int)param_1 >> 0x10);
            *(byte *)(iVar10 + *(int *)this) = ~*(byte *)(iVar10 + *(int *)this);
          }
          iVar3 = iVar3 + -1;
          param_2 = param_2 + 1;
          param_1 = param_1 + iVar7;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar10 = *(int *)((int)this + 0xc) >> 1;
      if (iVar3 != 0) {
        iVar9 = iVar10 * param_2;
        do {
          if ((param_5 & 0xffff & 1 << ((byte)iVar3 & 0xf)) != 0) {
            puVar1 = (ushort *)(*(int *)this + (((int)param_1 >> 0x10) + iVar9) * 2);
            *puVar1 = ~*puVar1;
          }
          iVar3 = iVar3 + -1;
          iVar9 = iVar9 + iVar10;
          param_1 = param_1 + iVar7;
        } while (iVar3 != 0);
        return;
      }
    }
    return;
  }
  if ((int)uVar4 < 1) {
    uVar6 = -uVar4;
    param_2 = param_4;
  }
  else {
    param_3 = param_1;
    uVar6 = uVar4;
  }
  iVar7 = param_2 << 0x10;
  iVar10 = uVar6 + 1;
  iVar3 = (int)(uVar8 << 0x10) / (int)uVar4;
  if ((*(byte *)((int)this + 0x14) & 4) == 0) {
    if (iVar10 == 0) {
      return;
    }
    do {
      if ((param_5 & 0xffff & 1 << ((byte)iVar10 & 0xf)) != 0) {
        pbVar5 = (byte *)(*(int *)this + (iVar7 >> 0x10) * *(int *)((int)this + 0xc) + param_3);
        *pbVar5 = ~*pbVar5;
      }
      iVar10 = iVar10 + -1;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + iVar3;
    } while (iVar10 != 0);
    return;
  }
  iVar9 = *(int *)((int)this + 0xc);
  if (iVar10 == 0) {
    return;
  }
  do {
    if ((param_5 & 0xffff & 1 << ((byte)iVar10 & 0xf)) != 0) {
      puVar1 = (ushort *)(*(int *)this + ((iVar7 >> 0x10) * (iVar9 >> 1) + param_3) * 2);
      *puVar1 = ~*puVar1;
    }
    iVar10 = iVar10 + -1;
    param_3 = param_3 + 1;
    iVar7 = iVar7 + iVar3;
  } while (iVar10 != 0);
  return;
}


