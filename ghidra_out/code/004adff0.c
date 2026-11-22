
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004adff0(void *this)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fStack_64;
  uint uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(byte *)((int)this + 0x30) & 2) == 0) {
    return;
  }
  uVar1 = *(uint *)((int)this + 0x70);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x10) == 0) {
        fVar8 = (float)*(int *)((int)this + 0xa0);
        fVar9 = (float)*(int *)((int)this + 0xa0) * fVar8;
        fVar2 = *(float *)((int)this + 0xc0) * fVar9 * _DAT_0054db7c;
        *(float *)((int)this + 0xcc) =
             *(float *)((int)this + 0xbc) * fVar9 * _DAT_0054db7c +
             *(float *)((int)this + 0xb0) * fVar8 + *(float *)((int)this + 0xa4);
        *(float *)((int)this + 0xd0) =
             fVar2 + *(float *)((int)this + 0xb4) * fVar8 + *(float *)((int)this + 0xa8);
      }
      else {
        FUN_004adb70((int)this);
      }
    }
    else {
      fVar9 = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0xa4);
      fVar8 = *(float *)((int)this + 0xb4) + *(float *)((int)this + 0xa8);
      *(float *)((int)this + 0xa4) = fVar9;
      *(float *)((int)this + 0xa8) = fVar8;
      *(float *)((int)this + 0xcc) = fVar9;
      *(float *)((int)this + 0xd0) = fVar8;
    }
  }
  else {
    FUN_004adce0((int)this);
  }
  if ((*(byte *)((int)this + 0x70) & 4) == 0) {
    fVar8 = (float)*(int *)((int)this + 0xa0);
    *(float *)((int)this + 0xd4) =
         *(float *)((int)this + 0xb8) * fVar8 +
         *(float *)((int)this + 0xc4) * fVar8 * fVar8 * _DAT_0054db7c + *(float *)((int)this + 0xac)
    ;
  }
  else {
    if ((*(int *)((int)this + 0x144) < 1) ||
       (fStack_64 = (*(float *)((int)this + 0x120) - *(float *)((int)this + 0xf4)) /
                    (float)*(int *)((int)this + 0x144),
       (NAN(fStack_64) || NAN((float)_DAT_0054db80)) || fStack_64 < (float)_DAT_0054db80)) {
      fStack_64 = 0.5;
    }
    fVar8 = *(float *)((int)this + 0x68) + *(float *)((int)this + 0x68);
    fVar2 = (*(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8) + fStack_64) -
            *(float *)((int)this + 0xac);
    fVar9 = -fVar8;
    if ((!NAN(fVar2) && !NAN(fVar9)) && fVar9 <= fVar2) {
      if ((!NAN(fVar2) && !NAN(fVar8)) && fVar8 < fVar2) {
        fVar2 = fVar8;
      }
    }
    else {
      fVar2 = fVar9;
    }
    fVar8 = *(float *)((int)this + 0x68) * _DAT_0054db78;
    fVar2 = fVar2 - *(float *)((int)this + 0xb8);
    fVar9 = -fVar8;
    *(float *)((int)this + 0xc4) = fVar2;
    if ((!NAN(fVar2) && !NAN(fVar9)) && fVar9 <= fVar2) {
      if ((!NAN(fVar2) && !NAN(fVar8)) && fVar8 < fVar2) {
        *(float *)((int)this + 0xc4) = fVar8;
      }
    }
    else {
      *(float *)((int)this + 0xc4) = fVar9;
    }
    fVar8 = *(float *)((int)this + 0xc4) + *(float *)((int)this + 0xb8);
    fVar9 = *(float *)((int)this + 0xac) + fVar8;
    *(float *)((int)this + 0xb8) = fVar8;
    *(float *)((int)this + 0xac) = fVar9;
    *(float *)((int)this + 0xd4) = fVar9;
  }
  lVar7 = __ftol((float10)(DAT_005ae9b4 >> 1) + (float10)*(float *)((int)this + 0xcc));
  iVar5 = (int)lVar7;
  lVar7 = __ftol((float10)(DAT_005ae9b8 >> 1) + (float10)*(float *)((int)this + 0xd0));
  iVar3 = (int)lVar7;
  if (DAT_005ae96c == 0) {
    if (((-1 < iVar5) && (iVar5 < DAT_005ae9c4)) && (-1 < iVar3)) {
      if (DAT_005ae9c8 <= iVar3) {
        *(undefined4 *)((int)this + 0xd8) = 1;
        goto LAB_004ae3aa;
      }
      goto LAB_004ae291;
    }
  }
  else {
LAB_004ae291:
    iVar5 = FUN_004a51c0(&DAT_005ae958,iVar5,iVar3);
    if (iVar5 != *(int *)((int)this + 0x1c)) {
      iVar3 = FUN_004ab8f0(&DAT_005ae958,*(int *)((int)this + 0x1c),iVar5);
      if (iVar3 == 0) {
        if (((*(byte *)((int)this + 0x70) & 4) == 0) &&
           (iVar3 = FUN_00532820(&DAT_005ae958,*(int *)((int)this + 0x1c),0.0,iVar5,0.0,
                                 *(float *)((int)this + 0xd4) -
                                 *(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8)),
           iVar3 == 0)) {
          *(undefined4 *)((int)this + 0xd8) = 1;
          goto LAB_004ae3aa;
        }
      }
      FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),iVar5);
    }
    fVar8 = *(float *)(DAT_005ae9ac + 4 + *(int *)((int)this + 0x1c) * 8);
    FUN_004a9a60(&DAT_005ae958,&uStack_5c,*(int *)((int)this + 0x1c));
    if ((uStack_5c & 0x400000) == 0) {
      if ((uStack_5c & 0x38000) == 0) {
        if ((uStack_5c & 0x200000) == 0) {
          if ((uStack_5c & 0x800000) != 0) {
            fVar8 = fVar8 - _DAT_005ae93c * _DAT_0054db8c;
          }
        }
        else {
          fVar8 = fVar8 + _DAT_005ae93c;
        }
      }
      else {
        fVar8 = fVar8 + _DAT_005ae940;
      }
    }
    else {
      fVar8 = fVar8 + _DAT_005ae938;
    }
    if ((NAN(fVar8) || NAN(*(float *)((int)this + 0xd4))) || fVar8 < *(float *)((int)this + 0xd4)) {
      *(undefined4 *)((int)this + 0xd8) = 0;
      goto LAB_004ae3aa;
    }
  }
  *(undefined4 *)((int)this + 0xd8) = 1;
LAB_004ae3aa:
  fStack_58 = *(float *)((int)this + 0xcc);
  fStack_54 = *(float *)((int)this + 0xd0);
  fStack_50 = *(float *)((int)this + 0xd4);
  FUN_00469ae0(&DAT_005876d0,&fStack_58);
  lVar7 = __ftol((float10)fStack_4c);
  *(int *)((int)this + 0xc) = (int)lVar7;
  lVar7 = __ftol((float10)fStack_48);
  *(int *)((int)this + 0x10) = (int)lVar7;
  iVar5 = *(int *)((int)this + 0xa0) + 1;
  *(undefined4 *)((int)this + 8) = uStack_44;
  if ((*(uint *)((int)this + 0x70) & 1) == 0) {
    fVar8 = (float)iVar5;
    fStack_2c = (*(float *)((int)this + 0xb0) - *(float *)((int)this + 0xbc) * fVar8 * _DAT_0054db8c
                ) * fVar8 + *(float *)((int)this + 0xa4);
    fStack_28 = (*(float *)((int)this + 0xb4) - *(float *)((int)this + 0xc0) * fVar8 * _DAT_0054db8c
                ) * fVar8 + *(float *)((int)this + 0xa8);
  }
  else {
    fStack_2c = *(float *)((int)this + 0xb0) + *(float *)((int)this + 0xcc);
    fStack_28 = *(float *)((int)this + 0xb4) + *(float *)((int)this + 0xd0);
  }
  if ((*(uint *)((int)this + 0x70) & 4) == 0) {
    fVar8 = (float)iVar5;
    fStack_24 = (*(float *)((int)this + 0xb8) - *(float *)((int)this + 0xc4) * fVar8 * _DAT_0054db8c
                ) * fVar8 + *(float *)((int)this + 0xac);
  }
  else {
    fStack_24 = *(float *)((int)this + 0xd4) + *(float *)((int)this + 0xb8);
  }
  FUN_00469ae0(&DAT_005876d0,&fStack_2c);
  fVar6 = (float10)fpatan((float10)fStack_48 - (float10)fStack_1c,
                          (float10)fStack_4c - (float10)fStack_20);
  lVar7 = __ftol(fVar6 * (float10)_DAT_0054db90);
  iVar5 = -(int)lVar7 + -0x5a;
  if (iVar5 < 0) {
    iVar5 = -(int)lVar7 + 0x10e;
  }
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    FUN_0049dc60(*(void **)((int)this + 0x2c),iVar5,0x168);
  }
  if (*(void **)((int)this + 0xe8) != (void *)0x0) {
    FUN_0049dc60(*(void **)((int)this + 0xe8),iVar5,0x168);
  }
  if (*(int *)((int)this + 0xe4) != 0) {
    fVar8 = fStack_58;
    fVar9 = fStack_54;
    puVar4 = FUN_004c6fc0();
    fVar6 = FUN_004a64d0(puVar4,fVar8,fVar9);
    fStack_50 = (float)fVar6;
    fVar8 = fStack_2c;
    fVar9 = fStack_28;
    puVar4 = FUN_004c6fc0();
    fVar6 = FUN_004a64d0(puVar4,fVar8,fVar9);
    fStack_24 = (float)fVar6;
    FUN_00469ae0(&DAT_005876d0,&fStack_58);
    FUN_00469ae0(&DAT_005876d0,&fStack_2c);
    fVar6 = (float10)fpatan((float10)fStack_48 - (float10)fStack_1c,
                            (float10)fStack_4c - (float10)fStack_20);
    lVar7 = __ftol(fVar6 * (float10)_DAT_0054db90);
    iVar5 = -(int)lVar7 + -0x5a;
    if (iVar5 < 0) {
      iVar5 = -(int)lVar7 + 0x10e;
    }
    FUN_0049dc60(*(void **)((int)this + 0xe4),iVar5,0x168);
    lVar7 = __ftol((float10)fStack_48);
    *(int *)((int)this + 0xdc) = (int)lVar7 - *(int *)((int)this + 0x10);
  }
  return;
}


