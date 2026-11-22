/* Rebuilt from lomse.exe FUN_004ae7e0 @ 0x004ae7e0 (862 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005aec3c (*(uint *)0x005aec3c)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_0049abe0 ((byte * (__thiscall *)(void *, uint, uint, uint, uint *))0x0049abe0)
#define FUN_0049d890 ((uint (__thiscall *)(void *, uint, uint))0x0049d890)
#define _DAT_0054db68 (*(float *)0x0054db68)
#define _DAT_0054db80 (*(double *)0x0054db80)
#define _DAT_0054dba0 (*(double *)0x0054dba0)

#define LOM_SELF_004ae7e0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004ae7e0(void *this,float *param_1,float *param_2,float *param_3,short param_4)

{
  double dVar1;
  double dVar2;
  void *this_00;
  int iVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uchar _fr[0xe0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_d8;
  typedef int * _t_local_d0;
  typedef byte _t_local_c4[4];
  typedef float _t_local_c0;
  typedef float _t_local_bc;
  typedef undefined4 _t_local_b8;
  typedef float _t_local_b4;
  typedef float _t_local_b0;
  typedef double _t_local_94;
  typedef float _t_local_8c;
  typedef float _t_local_88;
  typedef undefined4 _t_local_84;
  typedef float _t_local_80;
  typedef float _t_local_7c;
  typedef int _t_local_60[2];
  typedef int _t_local_58;
  typedef int _t_local_50;
  typedef int _t_local_40;
  typedef int _t_local_3c[3];
  typedef int _t_local_30;
  typedef int _t_local_20;
  typedef int _t_local_1c;
#define local_d8 (*(_t_local_d8 *)(_fr + 0x0))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x8))
#define local_c4 (*(_t_local_c4 *)(_fr + 0x14))
#define local_c0 (*(_t_local_c0 *)(_fr + 0x18))
#define local_bc (*(_t_local_bc *)(_fr + 0x1c))
#define local_b8 (*(_t_local_b8 *)(_fr + 0x20))
#define local_b4 (*(_t_local_b4 *)(_fr + 0x24))
#define local_b0 (*(_t_local_b0 *)(_fr + 0x28))
#define local_94 (*(_t_local_94 *)(_fr + 0x44))
#define local_8c (*(_t_local_8c *)(_fr + 0x4c))
#define local_88 (*(_t_local_88 *)(_fr + 0x50))
#define local_84 (*(_t_local_84 *)(_fr + 0x54))
#define local_80 (*(_t_local_80 *)(_fr + 0x58))
#define local_7c (*(_t_local_7c *)(_fr + 0x5c))
#define local_60 (*(_t_local_60 *)(_fr + 0x78))
#define local_58 (*(_t_local_58 *)(_fr + 0x80))
#define local_50 (*(_t_local_50 *)(_fr + 0x88))
#define local_40 (*(_t_local_40 *)(_fr + 0x98))
#define local_3c (*(_t_local_3c *)(_fr + 0x9c))
#define local_30 (*(_t_local_30 *)(_fr + 0xa8))
#define local_20 (*(_t_local_20 *)(_fr + 0xb8))
#define local_1c (*(_t_local_1c *)(_fr + 0xbc))
  
  uVar11 = 0;
  if ((*(int *)((int)this + 0x2c) == 0) ||
     (this_00 = *(void **)(*(int *)((int)this + 0x2c) + 0x3c), this_00 == (void *)0x0)) {
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  else {
    local_d8 = local_60;
    local_d0 = local_3c;
    bVar5 = false;
    do {
      uVar6 = *(uint *)(*(int *)((int)this + 0x2c) + 4);
      *local_d8 = 0;
      uVar6 = FUN_0049d890(this_00,uVar6,uVar11);
      uVar10 = 0;
      if (0 < (int)uVar6) {
        do {
          puVar7 = (ushort *)
                   FUN_0049abe0(this_00,*(uint *)(*(int *)((int)this + 0x2c) + 4),uVar11,uVar10,
                                (uint *)local_c4);
          if (puVar7 != (ushort *)0x0) {
            iVar9 = 1;
            if (1 < *puVar7 >> 8) {
              psVar8 = *(short **)(puVar7 + 4);
              do {
                psVar8 = psVar8 + 3;
                if (param_4 == *psVar8) {
                  psVar8 = *(short **)(puVar7 + 4) + iVar9 * 3 + 1;
                  goto LAB_004ae89d;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uint)(*puVar7 >> 8));
            }
            psVar8 = (short *)0x0;
LAB_004ae89d:
            if (psVar8 != (short *)0x0) {
              iVar9 = (int)*psVar8;
              if ((local_c4[0] & 1) != 0) {
                iVar9 = -iVar9;
                bVar5 = true;
              }
              local_d0[-1] = iVar9;
              *local_d0 = (int)psVar8[1];
              *local_d8 = 1;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar6);
      }
      uVar11 = uVar11 + 1;
      local_d0 = local_d0 + 2;
      local_d8 = local_d8 + 1;
    } while ((int)uVar11 < 8);
    iVar3 = *(int *)((int)this + 0x44);
    iVar9 = DAT_005aec3c + 1;
    if (((local_60[0] != 0) && (local_50 != 0)) && (local_58 != 0)) {
      fVar12 = (float10)(local_40 + local_20) * (float10)_DAT_0054db80;
      fVar13 = (float10)local_40 - fVar12;
      fVar12 = (float10)local_30 - fVar12;
      dVar4 = (double)(local_3c[0] + local_1c) * _DAT_0054db80;
      local_8c = _DAT_0054db68;
      dVar1 = (double)fVar13;
      dVar2 = (double)fVar12;
      fVar13 = (float10)fpatan(fVar13,fVar12);
      local_84 = 0;
      local_88 = _DAT_0054db68;
      FUN_00469ae0(&DAT_005876d0,&local_8c);
      local_c0 = 0.0;
      local_bc = 0.0;
      local_b8 = 0x3f800000;
      FUN_00469ae0(&DAT_005876d0,&local_c0);
      local_c0 = (float)SQRT((float10)_DAT_0054db80);
      local_94 = (double)-ABS(local_b0 - local_7c);
      local_bc = local_c0;
      if ((DAT_005aec3c & 2) == 0) {
        local_bc = -local_c0;
      }
      local_b8 = 0;
      FUN_00469ae0(&DAT_005876d0,&local_c0);
      fVar14 = SQRT((float10)dVar2 * (float10)dVar2 + (float10)dVar1 * (float10)dVar1) /
               ABS((float10)local_b4 - (float10)local_80);
      *param_3 = (float)((float10)dVar4 / (float10)local_94);
      fVar12 = (float10)(*(int *)((int)this + 0x44) - 2U & 7) * (float10)_DAT_0054dba0;
      if ((bVar5) && (4 < (iVar9 + iVar3 & 7U))) {
        fVar12 = fVar12 - (float10)(double)fVar13;
      }
      else {
        fVar12 = fVar12 + (float10)(double)fVar13;
      }
      fVar13 = (float10)fcos(fVar12);
      fVar12 = (float10)fsin(fVar12);
      *param_1 = (float)(fVar13 * fVar14);
      *param_2 = (float)(fVar12 * fVar14);
      return;
    }
    *param_1 = 0.0;
    *param_2 = 0.0;
  }
  *param_3 = 1.0;
  return;
#undef local_d8
#undef local_d0
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_94
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_60
#undef local_58
#undef local_50
#undef local_40
#undef local_3c
#undef local_30
#undef local_20
#undef local_1c
}
