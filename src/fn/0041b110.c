/* Rebuilt from lomse.exe FUN_0041b110 @ 0x0041b110 (1171 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005557e8 (*(undefined *)0x005557e8)
#define DAT_00555808 (*(undefined *)0x00555808)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004a6700 ((undefined4 (__thiscall *)(void *, float *, int, int, int))0x004a6700)
#define FUN_004a9a20 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int))0x004a9a20)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f6760 ((undefined4 (__thiscall *)(void *, undefined4 *))0x004f6760)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define _DAT_0054d440 (*(float *)0x0054d440)
#define _DAT_005ae93c (*(float *)0x005ae93c)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0041b110 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_0041b110(void *this)

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
  uchar _fr[0xa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_9c;
  typedef int _t_iStack_98;
  typedef int _t_iStack_94;
  typedef int _t_iStack_90;
  typedef uint _t_uStack_8c;
  typedef uint _t_uStack_88;
  typedef float _t_fStack_84;
  typedef float _t_fStack_80;
  typedef undefined4 _t_uStack_7c;
  typedef float _t_fStack_78;
  typedef float _t_fStack_74;
  typedef float _t_fStack_70;
  typedef float _t_fStack_58;
  typedef float _t_fStack_54;
  typedef float _t_fStack_50;
  typedef float _t_fStack_48;
  typedef undefined4 _t_uStack_44;
  typedef float _t_fStack_2c;
  typedef float _t_fStack_28;
  typedef float _t_fStack_20;
  typedef float _t_fStack_1c;
  typedef float _t_fStack_18;
#define iStack_9c (*(_t_iStack_9c *)(_fr + 0x4))
#define iStack_98 (*(_t_iStack_98 *)(_fr + 0x8))
#define iStack_94 (*(_t_iStack_94 *)(_fr + 0xc))
#define iStack_90 (*(_t_iStack_90 *)(_fr + 0x10))
#define uStack_8c (*(_t_uStack_8c *)(_fr + 0x14))
#define uStack_88 (*(_t_uStack_88 *)(_fr + 0x18))
#define fStack_84 (*(_t_fStack_84 *)(_fr + 0x1c))
#define fStack_80 (*(_t_fStack_80 *)(_fr + 0x20))
#define uStack_7c (*(_t_uStack_7c *)(_fr + 0x24))
#define fStack_78 (*(_t_fStack_78 *)(_fr + 0x28))
#define fStack_74 (*(_t_fStack_74 *)(_fr + 0x2c))
#define fStack_70 (*(_t_fStack_70 *)(_fr + 0x30))
#define fStack_58 (*(_t_fStack_58 *)(_fr + 0x48))
#define fStack_54 (*(_t_fStack_54 *)(_fr + 0x4c))
#define fStack_50 (*(_t_fStack_50 *)(_fr + 0x50))
#define fStack_48 (*(_t_fStack_48 *)(_fr + 0x58))
#define uStack_44 (*(_t_uStack_44 *)(_fr + 0x5c))
#define fStack_2c (*(_t_fStack_2c *)(_fr + 0x74))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x78))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x80))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0x84))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x88))
  
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
        if ((!__LOM_ISNAN(fStack_50) && !__LOM_ISNAN(*(float *)((int)this + 0x59c))) &&
            *(float *)((int)this + 0x59c) <= fStack_50) {
          if ((!__LOM_ISNAN(fStack_50) && !__LOM_ISNAN(*(float *)((int)this + 0x5a0))) &&
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
#undef iStack_9c
#undef iStack_98
#undef iStack_94
#undef iStack_90
#undef uStack_8c
#undef uStack_88
#undef fStack_84
#undef fStack_80
#undef uStack_7c
#undef fStack_78
#undef fStack_74
#undef fStack_70
#undef fStack_58
#undef fStack_54
#undef fStack_50
#undef fStack_48
#undef uStack_44
#undef fStack_2c
#undef fStack_28
#undef fStack_20
#undef fStack_1c
#undef fStack_18
}
