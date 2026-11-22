
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047d1a0(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 x;
  float10 extraout_ST0;
  longlong lVar9;
  float fStack_58;
  undefined4 auStack_44 [2];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)((int)this + 0x2c) != 0) {
    iVar7 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
    iVar5 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
    FUN_004f6760(this,auStack_44);
    if (*(int *)((int)this + 0x78) < *(int *)((int)this + 0x7c)) {
      iVar6 = *(int *)((int)this + 0x74) * 4;
      fVar3 = (float)(*(int *)(&DAT_0055b090 + iVar6) + iVar7) - _DAT_0054d9b8;
      fVar4 = (float)(*(int *)(&DAT_0055b0b0 + iVar6) + iVar5) - _DAT_0054d9b8;
      fVar2 = (float)*(int *)((int)this + 0x7c);
      fVar1 = (float)*(int *)((int)this + 0x78);
      fVar3 = ((((float)iVar7 - _DAT_0054d9b8) - fVar3) * fVar1) / fVar2 +
              *(float *)((int)this + 0x6c) + fVar3;
      fVar4 = ((((float)iVar5 - _DAT_0054d9b8) - fVar4) * fVar1) / fVar2 +
              *(float *)((int)this + 0x70) + fVar4;
    }
    else {
      fVar3 = ((float)iVar7 + *(float *)((int)this + 0x6c)) - _DAT_0054d9b8;
      fVar4 = ((float)iVar5 + *(float *)((int)this + 0x70)) - _DAT_0054d9b8;
    }
    lVar9 = __ftol((float10)fVar4);
    iVar5 = (int)lVar9;
    lVar9 = __ftol((float10)fVar3);
    iVar7 = (int)lVar9;
    fVar8 = FUN_004a5210(&DAT_005ae958,iVar7,iVar5);
    fStack_3c = (float)fVar8;
    fVar8 = FUN_004a5210(&DAT_005ae958,iVar7 + 1,iVar5);
    fStack_38 = (float)fVar8;
    fVar8 = FUN_004a5210(&DAT_005ae958,iVar7,iVar5 + 1);
    fStack_34 = (float)fVar8;
    fVar8 = FUN_004a5210(&DAT_005ae958,iVar7 + 1,iVar5 + 1);
    iVar7 = DAT_005ae9b8;
    iVar5 = DAT_005ae9b4;
    fStack_30 = (float)fVar8;
    fStack_58 = fVar3;
    if ((NAN(fVar3) || NAN(_DAT_0054d9bc)) || fVar3 < _DAT_0054d9bc) {
      fStack_58 = (float)DAT_005ae9b4 + fVar3;
    }
    lVar9 = __ftol((float10)fStack_58);
    fStack_58 = fStack_58 - (float)(int)lVar9;
    lVar9 = __ftol(x);
    fVar8 = extraout_ST0 - (float10)(int)lVar9;
    fStack_2c = fVar3 - (float)(iVar5 / 2);
    fStack_28 = fVar4 - (float)(iVar7 / 2);
    fStack_24 = (float)(((float10)_DAT_0054d9c0 - fVar8) *
                        ((float10)fStack_58 * (float10)fStack_38 +
                        (float10)fStack_3c * (float10)((float)_DAT_0054d9c0 - fStack_58)) +
                       ((float10)fStack_58 * (float10)fStack_30 +
                       (float10)fStack_34 * (float10)((float)_DAT_0054d9c0 - fStack_58)) *
                       (float10)(float)fVar8);
    FUN_00469ae0(&DAT_005876d0,&fStack_2c);
    lVar9 = __ftol((float10)fStack_20);
    *(int *)((int)this + 0xc) = (int)lVar9;
    lVar9 = __ftol((float10)fStack_1c);
    *(int *)((int)this + 0x10) = (int)lVar9;
    *(undefined4 *)((int)this + 8) = uStack_18;
    if ((((DAT_00583100 == '\x02') && (DAT_005ae92c != -1)) && (DAT_005ae935 == '\a')) &&
       (iVar5 = FUN_004f6000(&DAT_005ae974,DAT_005ae92c), iVar5 != 0)) {
      fVar8 = FUN_0047ced0((int)this,*(int *)(iVar5 + 0x1c));
      *(float *)((int)this + 8) = (float)fVar8;
    }
  }
  return;
}


