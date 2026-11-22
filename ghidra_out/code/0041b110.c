
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041b110(void *this)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint *puVar13;
  void *pvVar14;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((*(int *)((int)this + 0x2c) != 0) && (puVar3 = FUN_004c6fc0(), puVar3 != (undefined *)0x0)) {
    iVar9 = *(int *)((int)this + 0x1c);
    puVar3 = FUN_004c6fc0();
    iVar9 = iVar9 % *(int *)(puVar3 + 0x6c);
    iVar4 = *(int *)((int)this + 0x1c);
    puVar3 = FUN_004c6fc0();
    iVar4 = iVar4 / *(int *)(puVar3 + 0x6c);
    FUN_004f6760(this,&iStack_9c);
    if (((*(byte *)((int)this + 0x30) & 0x10) == 0) ||
       (*(int *)((int)this + 0x540) <= *(int *)((int)this + 0x53c))) {
      iVar5 = FUN_00420580((int)this);
      if (iVar5 == 0) {
        pfVar12 = &fStack_84;
        puVar3 = FUN_004c6fc0();
        FUN_004a6600(puVar3,pfVar12,iVar9,iVar4);
      }
      else {
        iVar5 = FUN_00420620((int)this);
        if (iVar5 == 0) {
          pfVar12 = &fStack_84;
          pvVar14 = this;
          puVar3 = FUN_004c6fc0();
          FUN_004a6700(puVar3,pfVar12,iVar9,iVar4,(int)pvVar14);
        }
        else {
          pfVar12 = &fStack_84;
          puVar3 = FUN_004c6fc0();
          FUN_004a6600(puVar3,pfVar12,iVar9,iVar4);
        }
      }
      lVar11 = __ftol((float10)fStack_78);
      *(int *)((int)this + 0xc) = (int)lVar11 + iStack_9c;
      lVar11 = __ftol((float10)fStack_74);
      *(int *)((int)this + 0x10) = (int)lVar11 + iStack_98;
      *(float *)((int)this + 8) = fStack_70;
      if ((~*(uint *)((int)this + 0x30) & 0x100) == 0) {
        *(float *)((int)this + 8) = fStack_70 - _DAT_0054d440;
      }
      uVar7 = FUN_00521e30((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
      if ((uVar7 != 0) && (*(int *)((int)this + 0x58c) != 0)) {
        uStack_7c = *(undefined4 *)((int)this + 0x5a8);
        iVar9 = *(int *)((int)this + 0x10);
        FUN_00469ae0(&DAT_005876d0,&fStack_84);
        lVar11 = __ftol((float10)fStack_74);
        iStack_98 = (int)lVar11 + iStack_98;
        *(int *)((int)this + 0x10) = iStack_98;
        *(int *)((int)this + 0x590) = iVar9 - iStack_98;
      }
    }
    else {
      iVar5 = *(int *)((int)this + 0x44) * 4;
      iVar6 = *(int *)(&DAT_00555808 + iVar5) + iVar4;
      iVar10 = *(int *)(&DAT_005557e8 + iVar5) + iVar9;
      iVar5 = FUN_00420580((int)this);
      if (iVar5 == 0) {
        pfVar12 = &fStack_2c;
        iVar5 = iVar10;
        iVar8 = iVar6;
        puVar3 = FUN_004c6fc0();
        FUN_004a6600(puVar3,pfVar12,iVar5,iVar8);
      }
      else {
        pfVar12 = &fStack_2c;
        iVar5 = iVar10;
        iVar8 = iVar6;
        pvVar14 = this;
        puVar3 = FUN_004c6fc0();
        FUN_004a6700(puVar3,pfVar12,iVar5,iVar8,(int)pvVar14);
      }
      lVar11 = __ftol((float10)fStack_20);
      iStack_94 = (int)lVar11;
      lVar11 = __ftol((float10)fStack_1c);
      iStack_90 = (int)lVar11;
      iVar5 = FUN_00420580((int)this);
      if (iVar5 == 0) {
        pfVar12 = &fStack_84;
        iVar5 = iVar9;
        iVar8 = iVar4;
        puVar3 = FUN_004c6fc0();
        FUN_004a6600(puVar3,pfVar12,iVar5,iVar8);
      }
      else {
        iVar5 = FUN_00420620((int)this);
        if (iVar5 == 0) {
          pfVar12 = &fStack_84;
          iVar5 = iVar9;
          iVar8 = iVar4;
          pvVar14 = this;
          puVar3 = FUN_004c6fc0();
          FUN_004a6700(puVar3,pfVar12,iVar5,iVar8,(int)pvVar14);
        }
        else {
          pfVar12 = &fStack_84;
          iVar5 = iVar9;
          iVar8 = iVar4;
          puVar3 = FUN_004c6fc0();
          FUN_004a6600(puVar3,pfVar12,iVar5,iVar8);
        }
      }
      iVar5 = *(int *)((int)this + 0x53c);
      iVar8 = *(int *)((int)this + 0x540);
      lVar11 = __ftol((float10)fStack_78);
      *(int *)((int)this + 0xc) =
           (((int)lVar11 - iStack_94) * iVar5) / iVar8 + iStack_9c + iStack_94;
      lVar11 = __ftol((float10)fStack_74);
      *(int *)((int)this + 0x10) =
           (((int)lVar11 - iStack_90) * iVar5) / iVar8 + iStack_98 + iStack_90;
      *(float *)((int)this + 8) =
           ((fStack_70 - fStack_18) * (float)iVar5) / (float)iVar8 + fStack_18;
      uVar7 = FUN_00521e30((int *)((int)this + *(int *)((int)this + 0x50) * 0x4c + 0xc4));
      if ((uVar7 != 0) && (*(int *)((int)this + 0x58c) != 0)) {
        fVar2 = (float)*(int *)((int)this + 0x53c);
        fVar1 = (float)*(int *)((int)this + 0x540);
        iVar5 = *(int *)((int)this + 0x10);
        fStack_50 = (*(float *)((int)this + 0x5a4) * fVar2) / fVar1 + *(float *)((int)this + 0x5a8);
        fStack_58 = ((fStack_84 - fStack_2c) * fVar2) / fVar1 + fStack_2c;
        fStack_54 = ((fStack_80 - fStack_28) * fVar2) / fVar1 + fStack_28;
        if ((!NAN(fStack_50) && !NAN(*(float *)((int)this + 0x59c))) &&
            *(float *)((int)this + 0x59c) <= fStack_50) {
          if ((!NAN(fStack_50) && !NAN(*(float *)((int)this + 0x5a0))) &&
              *(float *)((int)this + 0x5a0) < fStack_50) {
            fStack_50 = *(float *)((int)this + 0x5a0);
          }
        }
        else {
          fStack_50 = *(float *)((int)this + 0x59c);
        }
        iVar8 = FUN_00420580((int)this);
        if (iVar8 != 0) {
          puVar13 = &uStack_88;
          puVar3 = FUN_004c6fc0();
          FUN_004a9a20(puVar3,puVar13,iVar10,iVar6);
          puVar13 = &uStack_8c;
          puVar3 = FUN_004c6fc0();
          FUN_004a9a20(puVar3,puVar13,iVar9,iVar4);
          if (((uStack_88 & 0x800000) == 0) || ((uStack_8c & 0x200000) == 0)) {
            if (((uStack_88 & 0x200000) == 0) || ((uStack_8c & 0x800000) == 0)) {
              if (((uStack_88 & 0x200000) != 0) && ((uStack_8c & 0x200000) != 0)) {
                fStack_50 = fStack_50 + _DAT_005ae93c;
              }
            }
            else {
              fStack_50 = fStack_50 -
                          ((float)*(int *)((int)this + 0x53c) / (float)*(int *)((int)this + 0x540))
                          * _DAT_005ae93c;
            }
          }
          else {
            fStack_50 = ((float)*(int *)((int)this + 0x53c) / (float)*(int *)((int)this + 0x540)) *
                        _DAT_005ae93c + fStack_50;
          }
        }
        FUN_00469ae0(&DAT_005876d0,&fStack_58);
        lVar11 = __ftol((float10)fStack_48);
        iStack_98 = (int)lVar11 + iStack_98;
        *(int *)((int)this + 0x10) = iStack_98;
        *(undefined4 *)((int)this + 8) = uStack_44;
        *(int *)((int)this + 0x590) = iVar5 - iStack_98;
        return;
      }
    }
  }
  return;
}


