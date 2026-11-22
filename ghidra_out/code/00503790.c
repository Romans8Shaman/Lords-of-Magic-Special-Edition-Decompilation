
undefined4 __thiscall FUN_00503790(void *this,int param_1,uint param_2,int param_3)

{
  void *this_00;
  void *this_01;
  void *this_02;
  bool bVar1;
  POINT pt;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  uint uVar8;
  RECT local_10;
  
  bVar1 = true;
  switch(param_1) {
  case 0x201:
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x252a8) = 1;
    DVar2 = GetTickCount();
    *(DWORD *)((int)this + 0x252ac) = DVar2;
    *(uint *)((int)this + 0x252b0) = param_2;
    *(int *)((int)this + 0x252b4) = param_3;
    FUN_00473930((int)this + 0x2531c);
    break;
  case 0x202:
    *(undefined4 *)((int)this + 0x252a8) = 0;
    DVar2 = GetTickCount();
    *(DWORD *)((int)this + 0x252b8) = DVar2;
    iVar5 = *(int *)((int)this + 0x1bc);
    *(uint *)((int)this + 0x252bc) = param_2;
    *(int *)((int)this + 0x252c0) = param_3;
    goto joined_r0x005038a9;
  case 0x204:
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x252c4) = 1;
    DVar2 = GetTickCount();
    *(DWORD *)((int)this + 0x252c8) = DVar2;
    *(uint *)((int)this + 0x252cc) = param_2;
    *(int *)((int)this + 0x252d0) = param_3;
    FUN_00503040(&DAT_00584ae8,0);
    FUN_00473930((int)this + 0x2531c);
    break;
  case 0x205:
    *(undefined4 *)((int)this + 0x252c4) = 0;
    DVar2 = GetTickCount();
    *(DWORD *)((int)this + 0x252d4) = DVar2;
    *(uint *)((int)this + 0x252d8) = param_2;
    iVar5 = *(int *)((int)this + 0x1bc);
    *(int *)((int)this + 0x252dc) = param_3;
joined_r0x005038a9:
    if (iVar5 == 0) {
      bVar1 = false;
    }
  }
  if (param_1 == 0x200) {
    FUN_004722d0((void *)((int)this + 0x2531c),param_2,param_3);
  }
  this_00 = (void *)((int)this + 0x2531c);
  if (*(void **)((int)this + 0x2531c) != (void *)0x0) {
    uVar3 = FUN_0046c700(*(void **)((int)this + 0x2531c),param_1,param_2,param_3);
    return uVar3;
  }
  FUN_00500bf0(this,param_2,param_3);
  if (((*(void **)((int)this + 0x25318) != (void *)0x0) && (*(int *)((int)this + 0x1b8) != 6)) &&
     (bVar1)) {
    iVar5 = *(int *)((int)this + 0x25404);
    iVar4 = FUN_0048dd30(*(void **)((int)this + 0x25318),param_1,param_2,param_3);
    if (iVar4 != 0) {
      if (((iVar5 == *(int *)((int)this + 0x25404)) &&
          ((iVar5 = *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this),
           iVar5 == 2 || (iVar5 == 3)))) && (*(int *)((int)this + 0x2bec) == -1)) {
        FUN_00472740(this_00,0x2b);
      }
      if ((param_1 == 0x201) || (param_1 == 0x204)) {
        *(undefined4 *)((int)this + 0x1bc) = 1;
        return 1;
      }
      return 1;
    }
  }
  this_01 = (void *)((int)this + 0x29e70);
  iVar5 = FUN_004a6e60(this_01,param_2,param_3);
  if ((iVar5 != DAT_005a9e34) &&
     (FUN_00473990(0x5a9e04),
     *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this) == 3)) {
    if ((iVar5 == -1) && (DAT_00573420 != -1)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7d7c,DAT_005a7d80,0);
    }
    DAT_00573420 = iVar5;
  }
  if (*(int *)((int)this + 0x255a4) != 0) {
    FUN_005041a0(this,param_2,param_3);
    uVar3 = FUN_0047b490(this,param_1,param_2,param_3);
    return uVar3;
  }
  this_02 = (void *)((int)this + 0x25644);
  iVar5 = FUN_00484e10((int)this_02);
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = FUN_005017d0(this,param_1,param_2,param_3);
  if (iVar5 != 0) {
    return 1;
  }
  FUN_0052d140(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  FUN_0052d0e0(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
  iVar5 = *(int *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x23590 + (int)this);
  switch(iVar5) {
  case 2:
  case 5:
  case 6:
    FUN_00472b10((int)this_00);
    switch(param_1) {
    case 0x200:
      FUN_005041a0(this,param_2,param_3);
      FUN_00500bf0(this,param_2,param_3);
      if (DAT_005a79e4 != -1) {
        FUN_00473930(0x5a9e04);
        return 1;
      }
      break;
    case 0x201:
      FUN_00503250(this,param_2,param_3);
      return 1;
    case 0x203:
      puVar6 = FUN_0052d240(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_004a6180(this_01,param_2,param_3);
        FUN_0052c0c0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                     param_3,1,1,0);
        return 1;
      }
      break;
    case 0x204:
      *(undefined4 *)((int)this + 0x22ecc) = 1;
      DVar2 = GetTickCount();
      *(DWORD *)((int)this + 0x22ec8) = DVar2;
      return 1;
    case 0x205:
      if (*(int *)((int)this + 0x25630) < 1) {
        FUN_0052bc40(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
        FUN_004fbe20(0x5ae974);
        FUN_0052bc40(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
        FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
        FUN_004fe020((int)this);
        return 1;
      }
      FUN_004fe180((int)this);
      FUN_004fe020((int)this);
      return 1;
    }
    break;
  case 3:
  case 4:
    switch(param_1) {
    case 0x200:
      FUN_005041a0(this,param_2,param_3);
      FUN_00500bf0(this,param_2,param_3);
      if (DAT_005a79e4 != -1) {
        FUN_00473930(0x5a9e04);
        return 1;
      }
      break;
    case 0x201:
      local_10.right = 0x27f;
      local_10.top = 0;
      local_10.left = 0;
      local_10.bottom = 0x17f;
      pt.y = param_3;
      pt.x = param_2;
      BVar7 = PtInRect(&local_10,pt);
      if (BVar7 != 0) {
        FUN_00472ac0((int)this_00);
        return 1;
      }
      goto LAB_00503efd;
    case 0x202:
      iVar5 = FUN_00471900((int)this_00);
      if (iVar5 != 0) {
        iVar5 = FUN_00472bf0((int)this_00);
        FUN_004fc070((void *)((int)this + 0x29e8c),
                     (void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),iVar5);
        FUN_00472b10((int)this_00);
        return 1;
      }
      iVar5 = FUN_004a8470(this_01,param_2,param_3,0);
      uVar8 = FUN_00482ac0(this_02,iVar5,0);
      if (uVar8 == 0) {
        iVar5 = FUN_004a6e60(this_01,param_2,param_3);
        if ((iVar5 == -1) || (DAT_00583100 != '\x02')) goto LAB_00503e34;
        iVar4 = FUN_004552b0(&DAT_005ae8e8,iVar5);
        if (iVar4 != 0) {
          FUN_00455540(&DAT_005ae8e8,(int *)&param_2,iVar5);
          FUN_0052c0c0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2
                       ,param_3,0,0,1);
          FUN_00472b10((int)this_00);
          return 1;
        }
        uVar8 = FUN_00482ac0(this_02,iVar5,7);
        if (uVar8 == 0) goto LAB_00503e34;
        uVar8 = FUN_00482ac0(this_02,*(int *)(uVar8 + 0x44),0);
        if (uVar8 == 0) goto LAB_00503efd;
      }
      iVar5 = FUN_00420620(uVar8);
      if (iVar5 != 0) {
        iVar5 = FUN_00458170();
        if (iVar5 == 0) {
          FUN_0052e220((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar8);
          FUN_00472b10((int)this_00);
          return 1;
        }
LAB_00503e34:
        FUN_0052c0c0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                     param_3,0,0,0);
        FUN_00472b10((int)this_00);
        return 1;
      }
      iVar5 = FUN_00407d50(uVar8);
      if (iVar5 != 0) {
        FUN_0052c0c0((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),param_2,
                     param_3,0,0,0);
        FUN_00472b10((int)this_00);
        return 1;
      }
      FUN_0052e220((void *)(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this),uVar8);
LAB_00503efd:
      FUN_00472b10((int)this_00);
      return 1;
    case 0x205:
      iVar5 = FUN_004a8470(this_01,param_2,param_3,0);
      uVar8 = FUN_00482ac0(this_02,iVar5,0);
      if (uVar8 == 0) {
        iVar5 = FUN_004a6e60(this_01,param_2,param_3);
        uVar8 = FUN_00482ac0(this_02,iVar5,7);
        if (uVar8 == 0) goto LAB_00503fcc;
        uVar8 = FUN_00482ac0(this_02,*(int *)(uVar8 + 0x44),0);
        iVar5 = FUN_00420580(uVar8);
        if ((iVar5 == 0) || (iVar5 = FUN_00420620(uVar8), iVar5 == 0)) goto LAB_00503fcc;
        iVar5 = *(int *)((int)this + 0x232a4);
      }
      else {
        iVar5 = FUN_00420580(uVar8);
        if ((iVar5 == 0) || (iVar5 = FUN_00420620(uVar8), iVar5 == 0)) {
          FUN_0052bc40(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
          goto LAB_00503fcc;
        }
        iVar5 = *(int *)((int)this + 0x232a4);
      }
      FUN_0052be00((int *)(iVar5 * 0x400 + 0x232a8 + (int)this));
LAB_00503fcc:
      FUN_0052bc40(*(int *)((int)this + 0x232a4) * 0x400 + 0x232a8 + (int)this);
      FUN_004d05e0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8);
      return 1;
    }
    break;
  default:
    if (param_1 == 0x201) {
      FUN_00500bb0((int)this);
    }
    break;
  case 8:
    if ((param_1 == 0x202) && (iVar5 == 8)) {
      FUN_00454ec0(this_02,param_2,param_3);
      return 1;
    }
  }
  return 1;
}


