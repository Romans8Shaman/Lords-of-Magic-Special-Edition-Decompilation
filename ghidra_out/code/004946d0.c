
void __thiscall
FUN_004946d0(void *this,uint param_1,uint param_2,uint param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = param_3;
  if (*(int *)this == 0) {
    return;
  }
  uVar8 = param_4 - param_2;
  uVar6 = param_3 - param_1;
  if ((int)param_1 < 0) {
    if (uVar6 == 0) {
      return;
    }
    uVar4 = 0;
    uVar3 = param_3;
LAB_00494744:
    param_2 = param_2 - (int)(uVar8 * param_1) / (int)uVar6;
    uVar8 = param_4 - param_2;
    param_1 = uVar4;
    uVar6 = uVar3;
  }
  else {
    iVar5 = *(int *)((int)this + 4);
    if (iVar5 <= (int)param_1) {
      if (uVar6 == 0) {
        return;
      }
      param_1 = (param_1 - iVar5) + 1;
      uVar4 = iVar5 - 1;
      uVar3 = param_3 - uVar4;
      goto LAB_00494744;
    }
  }
  if ((int)param_2 < 0) {
    if (uVar8 == 0) {
      return;
    }
    param_1 = param_1 - (int)(uVar6 * param_2) / (int)uVar8;
    if ((int)param_1 < 0) {
      return;
    }
    if (*(int *)((int)this + 4) <= (int)param_1) {
      return;
    }
    param_2 = 0;
    uVar6 = param_3 - param_1;
    uVar8 = param_4;
  }
  else {
    iVar5 = *(int *)((int)this + 8);
    if (iVar5 <= (int)param_2) {
      if (uVar8 == 0) {
        return;
      }
      param_1 = param_1 - (int)(((param_2 - iVar5) + 1) * uVar6) / (int)uVar8;
      if ((int)param_1 < 0) {
        return;
      }
      if (*(int *)((int)this + 4) <= (int)param_1) {
        return;
      }
      param_2 = iVar5 - 1;
      uVar6 = param_3 - param_1;
      uVar8 = param_4 - param_2;
    }
  }
  if ((int)param_3 < 0) {
    if (uVar6 == 0) {
      return;
    }
    param_3 = 0;
    uVar4 = -param_1;
  }
  else {
    iVar5 = *(int *)((int)this + 4);
    if ((int)param_3 < iVar5) goto LAB_00494832;
    if (uVar6 == 0) {
      return;
    }
    uVar2 = (param_3 - iVar5) + 1;
    param_3 = iVar5 - 1;
    uVar4 = param_3 - param_1;
  }
  param_4 = param_4 - (int)(uVar8 * uVar2) / (int)uVar6;
  uVar8 = param_4 - param_2;
  uVar6 = uVar4;
LAB_00494832:
  if ((int)param_4 < 0) {
    if (uVar8 == 0) {
      return;
    }
    param_3 = param_3 - (int)(uVar6 * param_4) / (int)uVar8;
    if ((int)param_3 < 0) {
      return;
    }
    if (*(int *)((int)this + 4) <= (int)param_3) {
      return;
    }
    uVar6 = param_3 - param_1;
    param_4 = 0;
    uVar8 = -param_2;
  }
  else {
    iVar5 = *(int *)((int)this + 8);
    if (iVar5 <= (int)param_4) {
      if (uVar8 == 0) {
        return;
      }
      param_3 = param_3 - (int)(((param_4 - iVar5) + 1) * uVar6) / (int)uVar8;
      if ((int)param_3 < 0) {
        return;
      }
      if (*(int *)((int)this + 4) <= (int)param_3) {
        return;
      }
      uVar6 = param_3 - param_1;
      param_4 = iVar5 - 1;
      uVar8 = param_4 - param_2;
    }
  }
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) <
      (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
    if ((int)uVar6 < 1) {
      uVar2 = -uVar6;
      param_2 = param_4;
    }
    else {
      param_3 = param_1;
      uVar2 = uVar6;
    }
    iVar7 = (int)(uVar8 << 0x10) / (int)uVar6;
    param_4 = uVar2 + 1;
    iVar5 = param_2 << 0x10;
    if ((*(byte *)((int)this + 0x14) & 4) == 0) {
      if (param_4 != 0) {
        do {
          iVar1 = (iVar5 >> 0x10) * *(int *)((int)this + 0xc) + param_3;
          param_3 = param_3 + 1;
          iVar5 = iVar5 + iVar7;
          *(undefined1 *)(iVar1 + *(int *)this) = (undefined1)param_5;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        return;
      }
    }
    else {
      iVar1 = *(int *)((int)this + 0xc);
      if (param_4 != 0) {
        while( true ) {
          iVar9 = (iVar5 >> 0x10) * (iVar1 >> 1) + param_3;
          param_3 = param_3 + 1;
          *(undefined2 *)(*(int *)this + iVar9 * 2) = param_5;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          iVar5 = iVar5 + iVar7;
        }
        return;
      }
    }
  }
  else {
    if ((int)uVar8 < 1) {
      uVar2 = 1;
      if ((int)uVar8 < 0) {
        uVar2 = 1 - uVar8;
        param_1 = param_3 << 0x10;
        iVar5 = (int)(uVar6 << 0x10) / (int)uVar8;
        param_2 = param_4;
      }
      else {
        iVar5 = 0;
      }
    }
    else {
      uVar2 = uVar8 + 1;
      param_1 = param_1 << 0x10;
      iVar5 = (int)(uVar6 << 0x10) / (int)uVar8;
    }
    param_4 = uVar2;
    if ((*(byte *)((int)this + 0x14) & 4) == 0) {
      if (uVar2 != 0) {
        do {
          iVar7 = param_2 * *(int *)((int)this + 0xc);
          iVar1 = (int)param_1 >> 0x10;
          param_2 = param_2 + 1;
          param_1 = param_1 + iVar5;
          *(undefined1 *)(iVar7 + iVar1 + *(int *)this) = (undefined1)param_5;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
    }
    else {
      iVar7 = *(int *)((int)this + 0xc) >> 1;
      if (uVar2 != 0) {
        iVar1 = iVar7 * param_2;
        do {
          iVar9 = (int)param_1 >> 0x10;
          param_1 = param_1 + iVar5;
          *(undefined2 *)(*(int *)this + (iVar9 + iVar1) * 2) = param_5;
          iVar1 = iVar1 + iVar7;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
        return;
      }
    }
  }
  return;
}


