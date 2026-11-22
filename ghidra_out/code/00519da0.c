
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00519da0(void *this,int param_1,int param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  int local_14c;
  short *psStack_148;
  int local_144;
  double dStack_140;
  double dStack_138;
  int iStack_12c;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  int local_10c;
  double dStack_108;
  int local_ec;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int local_ac;
  double dStack_a8;
  int local_98;
  int local_94;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  
  local_30 = -*(int *)((int)this + 0x1a4);
  local_2c = -*(int *)((int)this + 0x1a8);
  local_28 = 0x27f - *(int *)((int)this + 0x1a4);
  dVar1 = (double)_DAT_005a79ec;
  local_24 = 0x17f - *(int *)((int)this + 0x1a8);
  local_ec = -1;
  local_10c = -1;
  local_144 = 0;
  iVar11 = -1;
  if (0 < *(int *)((int)this + 0x202c4)) {
    do {
      local_14c = 0;
      if (0 < *(int *)((int)this + 0x202c0)) {
        do {
          iVar11 = (/*IC:00519e6b*/**(code **)((int)this + 0x220))
                             (local_14c,local_144,local_30,local_2c,local_28,local_24);
          if (-1 < iVar11) {
            iVar19 = (param_1 - *(int *)((int)this + iVar11 * 4 + 0x22c)) -
                     *(int *)((int)this + 0x1a4);
            iVar20 = (param_2 - *(int *)((int)this + iVar11 * 4 + 0x250)) -
                     *(int *)((int)this + 0x1a8);
            iVar11 = *(int *)(*(int *)((int)this + 0x202ac) + local_144 * 4);
            iStack_12c = 3;
            uVar3 = *(undefined4 *)(iVar11 + local_14c * 8);
            uStack_4c = *(undefined4 *)(iVar11 + 4 + local_14c * 8);
            uStack_48 = *(undefined4 *)(iVar11 + 8 + local_14c * 8);
            uStack_44 = *(undefined4 *)(iVar11 + 0xc + local_14c * 8);
            iVar11 = *(int *)(*(int *)((int)this + 0x202ac) + 4 + local_144 * 4);
            uStack_40 = *(undefined4 *)(iVar11 + local_14c * 8);
            uStack_3c = *(undefined4 *)(iVar11 + 4 + local_14c * 8);
            uStack_38 = *(undefined4 *)(iVar11 + 8 + local_14c * 8);
            uStack_34 = *(undefined4 *)(iVar11 + 0xc + local_14c * 8);
            psStack_148 = (short *)((int)&uStack_48 + 2);
            uStack_50._0_2_ = (short)uVar3;
            iVar11 = (int)(short)uStack_50;
            uStack_50._2_2_ = (short)((uint)uVar3 >> 0x10);
            iVar12 = (int)uStack_50._2_2_;
            iStack_cc = iVar11;
            iStack_c8 = iVar12;
            iStack_c4 = iVar11;
            iStack_c0 = iVar12;
            do {
              iVar13 = (int)psStack_148[-1];
              if (iVar13 <= iStack_cc) {
                iStack_cc = iVar13;
              }
              if (iStack_c4 < iVar13) {
                iStack_c4 = iVar13;
              }
              iVar13 = (int)*psStack_148;
              if (iVar13 <= iStack_c8) {
                iStack_c8 = iVar13;
              }
              if (iStack_c0 < iVar13) {
                iStack_c0 = iVar13;
              }
              psStack_148 = psStack_148 + 4;
              iStack_12c = iStack_12c + -1;
            } while (iStack_12c != 0);
            uStack_50 = uVar3;
            if ((((iStack_cc <= iVar19) && (iVar19 <= iStack_c4)) && (iStack_c8 <= iVar20)) &&
               (iVar20 <= iStack_c0)) {
              iVar13 = (int)(short)uStack_40;
              uStack_40._2_2_ = (short)((uint)uStack_40 >> 0x10);
              iVar16 = (int)uStack_40._2_2_;
              iVar14 = (int)(short)uStack_48;
              fVar23 = (float10)fpatan((float10)iVar12 - (float10)iVar16,
                                       (float10)iVar11 - (float10)iVar13);
              uStack_48._2_2_ = (short)((uint)uStack_48 >> 0x10);
              iVar17 = (int)uStack_48._2_2_;
              iVar15 = (int)(short)uStack_38;
              uStack_38._2_2_ = (short)((uint)uStack_38 >> 0x10);
              iVar18 = (int)uStack_38._2_2_;
              dStack_18 = (double)iVar15;
              dStack_20 = (double)iVar18;
              fVar22 = fVar23;
              if ((NAN(fVar23) || NAN((float10)_DAT_0054e9a0)) || fVar23 < (float10)_DAT_0054e9a0) {
                fVar22 = fVar23 - (float10)_DAT_0054e9a8;
              }
              fVar24 = (float10)fpatan((float10)iVar17 - (float10)iVar16,
                                       (float10)iVar14 - (float10)iVar13);
              dVar2 = (double)fVar24;
              if ((NAN(fVar24) || NAN((float10)_DAT_0054e9a0)) || fVar24 < (float10)_DAT_0054e9a0) {
                fVar24 = fVar24 - (float10)_DAT_0054e9a8;
              }
              bVar4 = NAN(fVar24 - fVar22);
              bVar5 = NAN((float10)_DAT_0054e9b0);
              bVar7 = fVar24 - fVar22 <= (float10)_DAT_0054e9b0;
              bVar21 = (bVar4 || bVar5) || bVar7;
              fVar22 = (float10)dVar2;
              if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) || fVar22 < (float10)_DAT_0054e9a0) {
                fVar22 = fVar22 - (float10)_DAT_0054e9a8;
              }
              fVar24 = (float10)fpatan((float10)iVar18 - (float10)iVar16,
                                       (float10)iVar15 - (float10)iVar13);
              dStack_10 = (double)fVar24;
              if ((NAN(fVar24) || NAN((float10)_DAT_0054e9a0)) || fVar24 < (float10)_DAT_0054e9a0) {
                fVar24 = fVar24 - (float10)_DAT_0054e9a8;
              }
              bVar8 = (NAN(fVar24 - fVar22) || NAN((float10)_DAT_0054e9b0)) ||
                      fVar24 - fVar22 <= (float10)_DAT_0054e9b0;
              if ((bVar21) || (bVar8)) {
                if ((bVar4 || bVar5) || bVar7) {
                  dStack_138 = (double)fVar23;
                  if (((NAN(fVar23) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar23 < (float10)_DAT_0054e9a0) && ((bVar4 || bVar5) || bVar7)) {
                    dStack_138 = dStack_138 - _DAT_0054e9a8;
                  }
                  dStack_108 = dVar2;
                  if ((NAN(dVar2) || NAN(_DAT_0054e9a0)) || dVar2 < _DAT_0054e9a0) {
                    dStack_108 = dVar2 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar12 - (float10)iVar17,
                                           (float10)iVar11 - (float10)iVar14);
                  dStack_140 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_140 = dStack_140 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar16 - (float10)iVar17,
                                           (float10)iVar13 - (float10)iVar14);
                  dStack_128 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_128 = dStack_128 - _DAT_0054e9a8;
                  }
                  dVar6 = ABS(dStack_138 - dStack_108);
                  if ((!NAN(dVar6) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar6) {
                    dVar6 = _DAT_0054e9b8 - dVar6;
                  }
                  dStack_a8 = ABS(dStack_140 - dStack_128);
                  if ((!NAN(dStack_a8) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_a8) {
                    dStack_a8 = _DAT_0054e9b8 - dStack_a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar16,
                                           (float10)iVar19 - (float10)iVar13);
                  dStack_120 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_120 = dStack_120 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar17,
                                           (float10)iVar19 - (float10)iVar14);
                  dStack_118 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_118 = dStack_118 - _DAT_0054e9a8;
                  }
                  dVar9 = ABS(dStack_120 - dStack_138);
                  if ((!NAN(dVar9) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar9) {
                    dVar9 = _DAT_0054e9b8 - dVar9;
                  }
                  dVar10 = ABS(dStack_120 - dStack_108);
                  if ((!NAN(dVar10) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar10) {
                    dVar10 = _DAT_0054e9b8 - dVar10;
                  }
                  dStack_140 = ABS(dStack_118 - dStack_140);
                  if ((!NAN(dStack_140) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_140) {
                    dStack_140 = _DAT_0054e9b8 - dStack_140;
                  }
                  dStack_138 = ABS(dStack_118 - dStack_128);
                  if ((!NAN(dStack_138) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_138) {
                    dStack_138 = _DAT_0054e9b8 - dStack_138;
                  }
                  dVar6 = ABS((dVar10 + dVar9) - dVar6);
                  if (((!NAN(dVar6) && !NAN(dVar1)) && dVar1 < dVar6) ||
                     (dVar6 = ABS((dStack_138 + dStack_140) - dStack_a8),
                     bVar21 = (bVar4 || bVar5) || bVar7,
                     (!NAN(dVar6) && !NAN(dVar1)) && dVar1 < dVar6)) {
                    bVar21 = false;
                  }
                }
                if (bVar8) {
                  dStack_138 = dVar2;
                  if ((NAN(dVar2) || NAN(_DAT_0054e9a0)) || dVar2 < _DAT_0054e9a0) {
                    dStack_138 = dVar2 - _DAT_0054e9a8;
                  }
                  dStack_108 = dStack_10;
                  if ((NAN(dStack_10) || NAN(_DAT_0054e9a0)) || dStack_10 < _DAT_0054e9a0) {
                    dStack_108 = dStack_10 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar16 - (float10)iVar17,
                                           (float10)iVar13 - (float10)iVar14);
                  dStack_140 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_140 = dStack_140 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar18 - (float10)iVar17,
                                           (float10)iVar15 - (float10)iVar14);
                  dStack_128 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_128 = dStack_128 - _DAT_0054e9a8;
                  }
                  dVar2 = ABS(dStack_138 - dStack_108);
                  if ((!NAN(dVar2) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar2) {
                    dVar2 = _DAT_0054e9b8 - dVar2;
                  }
                  dStack_a8 = ABS(dStack_140 - dStack_128);
                  if ((!NAN(dStack_a8) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_a8) {
                    dStack_a8 = _DAT_0054e9b8 - dStack_a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar16,
                                           (float10)iVar19 - (float10)iVar13);
                  dStack_120 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_120 = dStack_120 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar17,
                                           (float10)iVar19 - (float10)iVar14);
                  dStack_118 = (double)fVar22;
                  if ((NAN(fVar22) || NAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_118 = dStack_118 - _DAT_0054e9a8;
                  }
                  dVar6 = ABS(dStack_120 - dStack_138);
                  if ((!NAN(dVar6) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar6) {
                    dVar6 = _DAT_0054e9b8 - dVar6;
                  }
                  dVar9 = ABS(dStack_120 - dStack_108);
                  if ((!NAN(dVar9) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar9) {
                    dVar9 = _DAT_0054e9b8 - dVar9;
                  }
                  dStack_140 = ABS(dStack_118 - dStack_140);
                  if ((!NAN(dStack_140) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_140) {
                    dStack_140 = _DAT_0054e9b8 - dStack_140;
                  }
                  dStack_138 = ABS(dStack_118 - dStack_128);
                  if ((!NAN(dStack_138) && !NAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_138) {
                    dStack_138 = _DAT_0054e9b8 - dStack_138;
                  }
                  dVar2 = ABS((dVar9 + dVar6) - dVar2);
                  if (((!NAN(dVar2) && !NAN(dVar1)) && dVar1 < dVar2) ||
                     (dVar2 = ABS((dStack_138 + dStack_140) - dStack_a8),
                     (!NAN(dVar2) && !NAN(dVar1)) && dVar1 < dVar2)) {
                    bVar8 = false;
                  }
                }
                if ((bVar21) && (local_10c <= local_144 + local_14c)) {
                  local_ec = local_14c;
                  local_ac = local_144;
                  iStack_78 = iVar11;
                  iStack_74 = iVar14;
                  iStack_70 = iVar13;
                  iStack_6c = iVar12;
                  iStack_68 = iVar17;
                  iStack_64 = iVar16;
                  iStack_60 = iVar19;
                  iStack_5c = iVar20;
                  FUN_0046a150((int)&iStack_78);
                  local_98 = iStack_58;
                  local_94 = iStack_54;
                  local_10c = local_144 + local_14c;
                }
                if ((bVar8) && (local_10c <= local_144 + local_14c)) {
                  local_ec = local_14c;
                  local_ac = local_144;
                  iStack_78 = iVar15;
                  iStack_74 = iVar13;
                  iStack_70 = iVar14;
                  iStack_6c = iVar18;
                  iStack_68 = iVar16;
                  iStack_64 = iVar17;
                  iStack_60 = iVar19;
                  iStack_5c = iVar20;
                  FUN_0046a150((int)&iStack_78);
                  local_98 = 0xff - iStack_58;
                  local_94 = 0xff - iStack_54;
                  local_10c = local_144 + local_14c;
                }
              }
            }
          }
          local_14c = local_14c + 1;
        } while (local_14c < *(int *)((int)this + 0x202c0));
      }
      local_144 = local_144 + 1;
    } while (local_144 < *(int *)((int)this + 0x202c4));
    iVar11 = local_ec;
  }
  if (-1 < iVar11) {
    *param_3 = local_98;
    param_3[1] = local_94;
  }
  iVar11 = FUN_004a5170(&DAT_005ae958,iVar11,local_ac);
  return iVar11;
}


