/* Rebuilt from lomse.exe FUN_00519da0 @ 0x00519da0 (2723 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_0046a150 ((undefined4 (__stdcall *)(int))0x0046a150)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define _DAT_0054e9a0 (*(double *)0x0054e9a0)
#define _DAT_0054e9a8 (*(double *)0x0054e9a8)
#define _DAT_0054e9b0 (*(double *)0x0054e9b0)
#define _DAT_0054e9b8 (*(double *)0x0054e9b8)
#define _DAT_005a79ec (*(float *)0x005a79ec)

#define LOM_SELF_00519da0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_00519da0(void *this,int param_1,int param_2,int *param_3)

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
  uchar _fr[0x158] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14c;
  typedef short * _t_psStack_148;
  typedef int _t_local_144;
  typedef double _t_dStack_140;
  typedef double _t_dStack_138;
  typedef int _t_iStack_12c;
  typedef double _t_dStack_128;
  typedef double _t_dStack_120;
  typedef double _t_dStack_118;
  typedef int _t_local_10c;
  typedef double _t_dStack_108;
  typedef int _t_local_ec;
  typedef int _t_iStack_cc;
  typedef int _t_iStack_c8;
  typedef int _t_iStack_c4;
  typedef int _t_iStack_c0;
  typedef int _t_local_ac;
  typedef double _t_dStack_a8;
  typedef int _t_local_98;
  typedef int _t_local_94;
  typedef int _t_iStack_78;
  typedef int _t_iStack_74;
  typedef int _t_iStack_70;
  typedef int _t_iStack_6c;
  typedef int _t_iStack_68;
  typedef int _t_iStack_64;
  typedef int _t_iStack_60;
  typedef int _t_iStack_5c;
  typedef int _t_iStack_58;
  typedef int _t_iStack_54;
  typedef undefined4 _t_uStack_50;
  typedef undefined4 _t_uStack_4c;
  typedef undefined4 _t_uStack_48;
  typedef undefined4 _t_uStack_44;
  typedef undefined4 _t_uStack_40;
  typedef undefined4 _t_uStack_3c;
  typedef undefined4 _t_uStack_38;
  typedef undefined4 _t_uStack_34;
  typedef int _t_local_30;
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef double _t_dStack_20;
  typedef double _t_dStack_18;
  typedef double _t_dStack_10;
#define local_14c (*(_t_local_14c *)(_fr + 0x4))
#define psStack_148 (*(_t_psStack_148 *)(_fr + 0x8))
#define local_144 (*(_t_local_144 *)(_fr + 0xc))
#define dStack_140 (*(_t_dStack_140 *)(_fr + 0x10))
#define dStack_138 (*(_t_dStack_138 *)(_fr + 0x18))
#define iStack_12c (*(_t_iStack_12c *)(_fr + 0x24))
#define dStack_128 (*(_t_dStack_128 *)(_fr + 0x28))
#define dStack_120 (*(_t_dStack_120 *)(_fr + 0x30))
#define dStack_118 (*(_t_dStack_118 *)(_fr + 0x38))
#define local_10c (*(_t_local_10c *)(_fr + 0x44))
#define dStack_108 (*(_t_dStack_108 *)(_fr + 0x48))
#define local_ec (*(_t_local_ec *)(_fr + 0x64))
#define iStack_cc (*(_t_iStack_cc *)(_fr + 0x84))
#define iStack_c8 (*(_t_iStack_c8 *)(_fr + 0x88))
#define iStack_c4 (*(_t_iStack_c4 *)(_fr + 0x8c))
#define iStack_c0 (*(_t_iStack_c0 *)(_fr + 0x90))
#define local_ac (*(_t_local_ac *)(_fr + 0xa4))
#define dStack_a8 (*(_t_dStack_a8 *)(_fr + 0xa8))
#define local_98 (*(_t_local_98 *)(_fr + 0xb8))
#define local_94 (*(_t_local_94 *)(_fr + 0xbc))
#define iStack_78 (*(_t_iStack_78 *)(_fr + 0xd8))
#define iStack_74 (*(_t_iStack_74 *)(_fr + 0xdc))
#define iStack_70 (*(_t_iStack_70 *)(_fr + 0xe0))
#define iStack_6c (*(_t_iStack_6c *)(_fr + 0xe4))
#define iStack_68 (*(_t_iStack_68 *)(_fr + 0xe8))
#define iStack_64 (*(_t_iStack_64 *)(_fr + 0xec))
#define iStack_60 (*(_t_iStack_60 *)(_fr + 0xf0))
#define iStack_5c (*(_t_iStack_5c *)(_fr + 0xf4))
#define iStack_58 (*(_t_iStack_58 *)(_fr + 0xf8))
#define iStack_54 (*(_t_iStack_54 *)(_fr + 0xfc))
#define uStack_50 (*(_t_uStack_50 *)(_fr + 0x100))
#define uStack_4c (*(_t_uStack_4c *)(_fr + 0x104))
#define uStack_48 (*(_t_uStack_48 *)(_fr + 0x108))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x10c))
#define uStack_40 (*(_t_uStack_40 *)(_fr + 0x110))
#define uStack_3c (*(_t_uStack_3c *)(_fr + 0x114))
#define uStack_38 (*(_t_uStack_38 *)(_fr + 0x118))
#define uStack_34 (*(_t_uStack_34 *)(_fr + 0x11c))
#define local_30 (*(_t_local_30 *)(_fr + 0x120))
#define local_2c (*(_t_local_2c *)(_fr + 0x124))
#define local_28 (*(_t_local_28 *)(_fr + 0x128))
#define local_24 (*(_t_local_24 *)(_fr + 0x12c))
#define dStack_20 (*(_t_dStack_20 *)(_fr + 0x130))
#define dStack_18 (*(_t_dStack_18 *)(_fr + 0x138))
#define dStack_10 (*(_t_dStack_10 *)(_fr + 0x140))
  
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
          iVar11 = ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(local_14c), __typeof__(local_144), __typeof__(local_30), __typeof__(local_2c), __typeof__(local_28), __typeof__(local_24)))(**(code **)((int)this + 0x220)))
                             (this,local_14c,local_144,local_30,local_2c,local_28,local_24);
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
            (*(ushort *)((uchar *)&uStack_50 + 0)) = (short)uVar3;
            iVar11 = (int)(short)uStack_50;
            (*(ushort *)((uchar *)&uStack_50 + 2)) = (short)((uint)uVar3 >> 0x10);
            iVar12 = (int)(*(short *)((uchar *)&uStack_50 + 2));
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
              (*(ushort *)((uchar *)&uStack_40 + 2)) = (short)((uint)uStack_40 >> 0x10);
              iVar16 = (int)(*(short *)((uchar *)&uStack_40 + 2));
              iVar14 = (int)(short)uStack_48;
              fVar23 = (float10)fpatan((float10)iVar12 - (float10)iVar16,
                                       (float10)iVar11 - (float10)iVar13);
              (*(ushort *)((uchar *)&uStack_48 + 2)) = (short)((uint)uStack_48 >> 0x10);
              iVar17 = (int)(*(short *)((uchar *)&uStack_48 + 2));
              iVar15 = (int)(short)uStack_38;
              (*(ushort *)((uchar *)&uStack_38 + 2)) = (short)((uint)uStack_38 >> 0x10);
              iVar18 = (int)(*(short *)((uchar *)&uStack_38 + 2));
              dStack_18 = (double)iVar15;
              dStack_20 = (double)iVar18;
              fVar22 = fVar23;
              if ((__LOM_ISNAN(fVar23) || __LOM_ISNAN((float10)_DAT_0054e9a0)) || fVar23 < (float10)_DAT_0054e9a0) {
                fVar22 = fVar23 - (float10)_DAT_0054e9a8;
              }
              fVar24 = (float10)fpatan((float10)iVar17 - (float10)iVar16,
                                       (float10)iVar14 - (float10)iVar13);
              dVar2 = (double)fVar24;
              if ((__LOM_ISNAN(fVar24) || __LOM_ISNAN((float10)_DAT_0054e9a0)) || fVar24 < (float10)_DAT_0054e9a0) {
                fVar24 = fVar24 - (float10)_DAT_0054e9a8;
              }
              bVar4 = __LOM_ISNAN(fVar24 - fVar22);
              bVar5 = __LOM_ISNAN((float10)_DAT_0054e9b0);
              bVar7 = fVar24 - fVar22 <= (float10)_DAT_0054e9b0;
              bVar21 = (bVar4 || bVar5) || bVar7;
              fVar22 = (float10)dVar2;
              if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) || fVar22 < (float10)_DAT_0054e9a0) {
                fVar22 = fVar22 - (float10)_DAT_0054e9a8;
              }
              fVar24 = (float10)fpatan((float10)iVar18 - (float10)iVar16,
                                       (float10)iVar15 - (float10)iVar13);
              dStack_10 = (double)fVar24;
              if ((__LOM_ISNAN(fVar24) || __LOM_ISNAN((float10)_DAT_0054e9a0)) || fVar24 < (float10)_DAT_0054e9a0) {
                fVar24 = fVar24 - (float10)_DAT_0054e9a8;
              }
              bVar8 = (__LOM_ISNAN(fVar24 - fVar22) || __LOM_ISNAN((float10)_DAT_0054e9b0)) ||
                      fVar24 - fVar22 <= (float10)_DAT_0054e9b0;
              if ((bVar21) || (bVar8)) {
                if ((bVar4 || bVar5) || bVar7) {
                  dStack_138 = (double)fVar23;
                  if (((__LOM_ISNAN(fVar23) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar23 < (float10)_DAT_0054e9a0) && ((bVar4 || bVar5) || bVar7)) {
                    dStack_138 = dStack_138 - _DAT_0054e9a8;
                  }
                  dStack_108 = dVar2;
                  if ((__LOM_ISNAN(dVar2) || __LOM_ISNAN(_DAT_0054e9a0)) || dVar2 < _DAT_0054e9a0) {
                    dStack_108 = dVar2 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar12 - (float10)iVar17,
                                           (float10)iVar11 - (float10)iVar14);
                  dStack_140 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_140 = dStack_140 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar16 - (float10)iVar17,
                                           (float10)iVar13 - (float10)iVar14);
                  dStack_128 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_128 = dStack_128 - _DAT_0054e9a8;
                  }
                  dVar6 = ABS(dStack_138 - dStack_108);
                  if ((!__LOM_ISNAN(dVar6) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar6) {
                    dVar6 = _DAT_0054e9b8 - dVar6;
                  }
                  dStack_a8 = ABS(dStack_140 - dStack_128);
                  if ((!__LOM_ISNAN(dStack_a8) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_a8) {
                    dStack_a8 = _DAT_0054e9b8 - dStack_a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar16,
                                           (float10)iVar19 - (float10)iVar13);
                  dStack_120 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_120 = dStack_120 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar17,
                                           (float10)iVar19 - (float10)iVar14);
                  dStack_118 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_118 = dStack_118 - _DAT_0054e9a8;
                  }
                  dVar9 = ABS(dStack_120 - dStack_138);
                  if ((!__LOM_ISNAN(dVar9) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar9) {
                    dVar9 = _DAT_0054e9b8 - dVar9;
                  }
                  dVar10 = ABS(dStack_120 - dStack_108);
                  if ((!__LOM_ISNAN(dVar10) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar10) {
                    dVar10 = _DAT_0054e9b8 - dVar10;
                  }
                  dStack_140 = ABS(dStack_118 - dStack_140);
                  if ((!__LOM_ISNAN(dStack_140) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_140) {
                    dStack_140 = _DAT_0054e9b8 - dStack_140;
                  }
                  dStack_138 = ABS(dStack_118 - dStack_128);
                  if ((!__LOM_ISNAN(dStack_138) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_138) {
                    dStack_138 = _DAT_0054e9b8 - dStack_138;
                  }
                  dVar6 = ABS((dVar10 + dVar9) - dVar6);
                  if (((!__LOM_ISNAN(dVar6) && !__LOM_ISNAN(dVar1)) && dVar1 < dVar6) ||
                     (dVar6 = ABS((dStack_138 + dStack_140) - dStack_a8),
                     bVar21 = (bVar4 || bVar5) || bVar7,
                     (!__LOM_ISNAN(dVar6) && !__LOM_ISNAN(dVar1)) && dVar1 < dVar6)) {
                    bVar21 = false;
                  }
                }
                if (bVar8) {
                  dStack_138 = dVar2;
                  if ((__LOM_ISNAN(dVar2) || __LOM_ISNAN(_DAT_0054e9a0)) || dVar2 < _DAT_0054e9a0) {
                    dStack_138 = dVar2 - _DAT_0054e9a8;
                  }
                  dStack_108 = dStack_10;
                  if ((__LOM_ISNAN(dStack_10) || __LOM_ISNAN(_DAT_0054e9a0)) || dStack_10 < _DAT_0054e9a0) {
                    dStack_108 = dStack_10 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar16 - (float10)iVar17,
                                           (float10)iVar13 - (float10)iVar14);
                  dStack_140 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_140 = dStack_140 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar18 - (float10)iVar17,
                                           (float10)iVar15 - (float10)iVar14);
                  dStack_128 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_128 = dStack_128 - _DAT_0054e9a8;
                  }
                  dVar2 = ABS(dStack_138 - dStack_108);
                  if ((!__LOM_ISNAN(dVar2) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar2) {
                    dVar2 = _DAT_0054e9b8 - dVar2;
                  }
                  dStack_a8 = ABS(dStack_140 - dStack_128);
                  if ((!__LOM_ISNAN(dStack_a8) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_a8) {
                    dStack_a8 = _DAT_0054e9b8 - dStack_a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar16,
                                           (float10)iVar19 - (float10)iVar13);
                  dStack_120 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_120 = dStack_120 - _DAT_0054e9a8;
                  }
                  fVar22 = (float10)fpatan((float10)iVar20 - (float10)iVar17,
                                           (float10)iVar19 - (float10)iVar14);
                  dStack_118 = (double)fVar22;
                  if ((__LOM_ISNAN(fVar22) || __LOM_ISNAN((float10)_DAT_0054e9a0)) ||
                      fVar22 < (float10)_DAT_0054e9a0) {
                    dStack_118 = dStack_118 - _DAT_0054e9a8;
                  }
                  dVar6 = ABS(dStack_120 - dStack_138);
                  if ((!__LOM_ISNAN(dVar6) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar6) {
                    dVar6 = _DAT_0054e9b8 - dVar6;
                  }
                  dVar9 = ABS(dStack_120 - dStack_108);
                  if ((!__LOM_ISNAN(dVar9) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dVar9) {
                    dVar9 = _DAT_0054e9b8 - dVar9;
                  }
                  dStack_140 = ABS(dStack_118 - dStack_140);
                  if ((!__LOM_ISNAN(dStack_140) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_140) {
                    dStack_140 = _DAT_0054e9b8 - dStack_140;
                  }
                  dStack_138 = ABS(dStack_118 - dStack_128);
                  if ((!__LOM_ISNAN(dStack_138) && !__LOM_ISNAN(_DAT_0054e9b0)) && _DAT_0054e9b0 < dStack_138) {
                    dStack_138 = _DAT_0054e9b8 - dStack_138;
                  }
                  dVar2 = ABS((dVar9 + dVar6) - dVar2);
                  if (((!__LOM_ISNAN(dVar2) && !__LOM_ISNAN(dVar1)) && dVar1 < dVar2) ||
                     (dVar2 = ABS((dStack_138 + dStack_140) - dStack_a8),
                     (!__LOM_ISNAN(dVar2) && !__LOM_ISNAN(dVar1)) && dVar1 < dVar2)) {
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
#undef local_14c
#undef psStack_148
#undef local_144
#undef dStack_140
#undef dStack_138
#undef iStack_12c
#undef dStack_128
#undef dStack_120
#undef dStack_118
#undef local_10c
#undef dStack_108
#undef local_ec
#undef iStack_cc
#undef iStack_c8
#undef iStack_c4
#undef iStack_c0
#undef local_ac
#undef dStack_a8
#undef local_98
#undef local_94
#undef iStack_78
#undef iStack_74
#undef iStack_70
#undef iStack_6c
#undef iStack_68
#undef iStack_64
#undef iStack_60
#undef iStack_5c
#undef iStack_58
#undef iStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_3c
#undef uStack_38
#undef uStack_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef dStack_20
#undef dStack_18
#undef dStack_10
}
