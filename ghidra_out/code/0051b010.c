
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl op_lomlighttables(void *vm)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  byte *pbVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iStack_31c;
  int iStack_318;
  short *psStack_310;
  undefined1 uStack_300;
  byte abStack_2ff [767];
  
  FUN_004a2380(&DAT_005aea70,(int)&uStack_300);
  iVar4 = 0;
  iStack_318 = 0x96;
  psStack_310 = &DAT_00587974;
  do {
    iVar4 = iVar4 + 1;
    fVar3 = (float)iVar4 * _DAT_0054e980;
    if (iStack_318 < 0) {
      pbVar10 = abStack_2ff;
      iStack_31c = 0x100;
      psVar8 = psStack_310;
      do {
        lVar13 = __ftol((float10)((uint)pbVar10[-1] << 2) * (float10)fVar3);
        lVar14 = __ftol((float10)((uint)*pbVar10 << 2) * (float10)fVar3);
        lVar15 = __ftol((float10)((uint)pbVar10[1] << 2) * (float10)fVar3);
        uVar9 = (uint)lVar13 & ((int)(uint)lVar13 < 1) - 1;
        if (0xff < (int)uVar9) {
          uVar9 = 0xff;
        }
        uVar6 = ((int)(uint)lVar14 < 1) - 1 & (uint)lVar14;
        if (0xff < (int)uVar6) {
          uVar6 = 0xff;
        }
        uVar5 = (uint)lVar15 & ((int)(uint)lVar15 < 1) - 1;
        if (0xff < (int)uVar5) {
          uVar5 = 0xff;
        }
        pbVar10 = pbVar10 + 3;
        *psVar8 = (short)(((int)uVar6 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f)) +
                  (short)(((int)uVar9 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
                  (short)(((int)uVar5 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f));
        iStack_31c = iStack_31c + -1;
        psVar8 = psVar8 + 1;
      } while (iStack_31c != 0);
    }
    else if (iStack_318 < 0x28) {
      fVar11 = (float10)iStack_318 * (float10)_DAT_0054e984;
      if ((NAN(fVar11) || NAN((float10)_DAT_0054e988)) || fVar11 <= (float10)_DAT_0054e988) {
        if ((NAN(fVar11) || NAN((float10)_DAT_0054e98c)) || fVar11 < (float10)_DAT_0054e98c) {
          fVar11 = (float10)_DAT_0054e98c;
        }
      }
      else {
        fVar11 = (float10)_DAT_0054e988;
      }
      fVar12 = (float10)_DAT_0054e988 - fVar11;
      pbVar10 = abStack_2ff;
      iStack_31c = 0x100;
      psVar8 = psStack_310;
      do {
        bVar1 = pbVar10[1];
        bVar2 = *pbVar10;
        lVar13 = __ftol(((float10)((uint)pbVar10[-1] * 4) * fVar12 +
                        (float10)((uint)bVar1 * 4 + (uint)bVar2 * 4 + (uint)pbVar10[-1] * 4) *
                        (float10)_DAT_0054e990 * fVar11) * (float10)fVar3);
        lVar14 = __ftol(((float10)((uint)bVar2 * 4) * extraout_ST1 + extraout_ST0) * (float10)fVar3)
        ;
        fVar11 = extraout_ST1_00;
        lVar15 = __ftol(((float10)((uint)bVar1 * 4) * extraout_ST1_00 + extraout_ST0_00) *
                        (float10)fVar3);
        uVar9 = (uint)lVar13 & ((int)(uint)lVar13 < 1) - 1;
        if (0xff < (int)uVar9) {
          uVar9 = 0xff;
        }
        uVar6 = ((int)(uint)lVar14 < 1) - 1 & (uint)lVar14;
        if (0xff < (int)uVar6) {
          uVar6 = 0xff;
        }
        uVar5 = (uint)lVar15 & ((int)(uint)lVar15 < 1) - 1;
        if (0xff < (int)uVar5) {
          uVar5 = 0xff;
        }
        pbVar10 = pbVar10 + 3;
        *psVar8 = (short)(((int)uVar6 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f)) +
                  (short)(((int)uVar9 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
                  (short)(((int)uVar5 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f));
        iStack_31c = iStack_31c + -1;
        psVar8 = psVar8 + 1;
        fVar12 = extraout_ST1_01;
      } while (iStack_31c != 0);
    }
    else {
      pbVar10 = abStack_2ff;
      iVar7 = 0x100;
      psVar8 = psStack_310;
      do {
        lVar13 = __ftol((float10)(((uint)pbVar10[-1] + (uint)pbVar10[1] + (uint)*pbVar10) * 4) *
                        (float10)_DAT_0054e990 * (float10)fVar3);
        uVar9 = (uint)lVar13 & ((int)(uint)lVar13 < 1) - 1;
        if (0xff < (int)uVar9) {
          uVar9 = 0xff;
        }
        pbVar10 = pbVar10 + 3;
        iVar7 = iVar7 + -1;
        *psVar8 = (short)(((int)uVar9 >> (DAT_005853f8 & 0x1f)) << ((byte)DAT_005853f4 & 0x1f)) +
                  (short)(((int)uVar9 >> (DAT_005853f0 & 0x1f)) << ((byte)DAT_005853ec & 0x1f)) +
                  (short)(((int)uVar9 >> (DAT_00585400 & 0x1f)) << ((byte)DAT_005853fc & 0x1f));
        psVar8 = psVar8 + 1;
      } while (iVar7 != 0);
    }
    iStack_318 = iStack_318 + -1;
    psStack_310 = psStack_310 + 0x100;
  } while (-0x6a < iStack_318);
  return;
}


