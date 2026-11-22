/* Rebuilt from lomse.exe FUN_00407fd0 @ 0x00407fd0 (2006 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555150 (*(int *)0x00555150)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00401730 ((undefined4 (__stdcall *)(void *))0x00401730)
#define FUN_004019f0 ((undefined4 (__stdcall *)(void *, int, int))0x004019f0)
#define FUN_00402150 ((int (__stdcall *)(void *, int))0x00402150)
#define FUN_00402200 ((undefined4 (__stdcall *)(void *, int, int *, int *, int *))0x00402200)
#define FUN_004022c0 ((undefined4 (__thiscall *)(void *, void *))0x004022c0)
#define FUN_00403a90 ((undefined4 (__thiscall *)(void *, void *))0x00403a90)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00420910 ((undefined4 (__thiscall *)(void *, int, uint))0x00420910)
#define FUN_00421180 ((undefined4 (__fastcall *)(int *))0x00421180)
#define FUN_00458170 ((undefined4 (__stdcall *)(void))0x00458170)
#define FUN_0047c6e0 ((undefined4 (__thiscall *)(void *, int *, uint))0x0047c6e0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_004a4c70 ((int (__thiscall *)(void *, int, int, uint))0x004a4c70)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_00407fd0 1
undefined4 __thiscall
rb_00407fd0(void *this,int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uchar _fr[0x178] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_170;
  typedef int _t_local_16c;
  typedef int _t_local_164;
  typedef int _t_local_160;
  typedef int _t_local_15c;
  typedef int _t_iStack_158;
  typedef int _t_local_154;
  typedef int _t_iStack_150;
  typedef uint _t_local_14c;
  typedef uint _t_uStack_148;
  typedef uint _t_uStack_144;
  typedef int _t_iStack_140;
  typedef int _t_local_13c;
  typedef int _t_local_138;
  typedef uint _t_auStack_134[18];
  typedef int _t_iStack_ec;
  typedef undefined4 _t_uStack_e8;
  typedef undefined4 _t_uStack_e4;
  typedef int _t_iStack_dc;
  typedef int _t_iStack_d8;
  typedef undefined4 _t_uStack_d4;
  typedef undefined4 _t_uStack_d0;
  typedef undefined4 _t_uStack_cc;
#define local_170 (*(_t_local_170 *)(_fr + 0x0))
#define local_16c (*(_t_local_16c *)(_fr + 0x4))
#define local_164 (*(_t_local_164 *)(_fr + 0xc))
#define local_160 (*(_t_local_160 *)(_fr + 0x10))
#define local_15c (*(_t_local_15c *)(_fr + 0x14))
#define iStack_158 (*(_t_iStack_158 *)(_fr + 0x18))
#define local_154 (*(_t_local_154 *)(_fr + 0x1c))
#define iStack_150 (*(_t_iStack_150 *)(_fr + 0x20))
#define local_14c (*(_t_local_14c *)(_fr + 0x24))
#define uStack_148 (*(_t_uStack_148 *)(_fr + 0x28))
#define uStack_144 (*(_t_uStack_144 *)(_fr + 0x2c))
#define iStack_140 (*(_t_iStack_140 *)(_fr + 0x30))
#define local_13c (*(_t_local_13c *)(_fr + 0x34))
#define local_138 (*(_t_local_138 *)(_fr + 0x38))
#define auStack_134 (*(_t_auStack_134 *)(_fr + 0x3c))
#define iStack_ec (*(_t_iStack_ec *)(_fr + 0x84))
#define uStack_e8 (*(_t_uStack_e8 *)(_fr + 0x88))
#define uStack_e4 (*(_t_uStack_e4 *)(_fr + 0x8c))
#define iStack_dc (*(_t_iStack_dc *)(_fr + 0x94))
#define iStack_d8 (*(_t_iStack_d8 *)(_fr + 0x98))
#define uStack_d4 (*(_t_uStack_d4 *)(_fr + 0x9c))
#define uStack_d0 (*(_t_uStack_d0 *)(_fr + 0xa0))
#define uStack_cc (*(_t_uStack_cc *)(_fr + 0xa4))
  
  FUN_00402200(param_1,param_1[7],&local_138,&local_154,&local_13c);
  if (((param_2 != 0) && (param_6 == *(int *)(param_2 + 0x1c))) &&
     (FUN_00402200(param_1,param_6,&local_15c,&local_160,(int *)&local_14c),
     1 < local_160 + local_15c)) {
    iVar8 = 9999;
    local_16c = -1;
    local_170 = 9999;
    local_164 = 0;
    do {
      iVar2 = FUN_004a4c70(&DAT_005ae958,param_6,local_164,param_1[0x15]);
      if (iVar2 != param_6) {
        FUN_00402200(param_1,param_6,&local_15c,&local_160,(int *)&local_14c);
        iVar1 = local_160 + local_15c;
        iVar3 = FUN_004a8960(&DAT_005ae958,param_1[7],iVar2);
        if (iVar1 < iVar8) {
LAB_004080ca:
          iVar8 = iVar1;
          local_170 = iVar3;
          local_16c = iVar2;
        }
        else if (iVar1 == iVar8) {
          if (iVar3 < local_170) goto LAB_004080ca;
        }
      }
      local_164 = local_164 + 1;
    } while (local_164 < 8);
    if (-1 < local_16c) {
      param_6 = local_16c;
      param_4 = FUN_004a8b50(&DAT_005ae958,param_1[7],local_16c);
    }
  }
  if ((((local_154 == 0) || ((*(byte *)((int)this + 0x14) & 1) == 0)) ||
      (iVar8 = FUN_004022c0(this,param_1), iVar8 == 0)) &&
     ((local_154 == 0 ||
      ((((*(uint *)((int)this + 0x14) & 0x400) == 0 ||
        (iVar8 = FUN_00403a90(this,param_1), iVar8 == 0)) &&
       (((local_154 == 0 ||
         (((uVar4 = FUN_0047c9e0(&DAT_005aa12c,param_1[0x12]), uVar4 == 0 ||
           (iVar8 = FUN_00402150(param_1,*(int *)((int)this + 4)), iVar8 == 0)) ||
          (iVar8 = FUN_00420620(iVar8), iVar8 == 0)))) ||
        ((iVar8 = FUN_00458170(), iVar8 != 0 || (iVar8 = FUN_004022c0(this,param_1), iVar8 == 0)))))
       ))))) {
    iVar8 = param_1[7];
    uVar9 = param_4 - 1 & 7;
    uVar4 = param_4 + 1 & 7;
    puVar5 = FUN_004c6fc0();
    iStack_140 = *(int *)(*(int *)(puVar5 + 0x18) + (param_4 + iVar8 * 8) * 4);
    iVar8 = param_1[7];
    puVar5 = FUN_004c6fc0();
    uStack_144 = *(uint *)(*(int *)(puVar5 + 0x18) + (uVar9 + iVar8 * 8) * 4);
    iVar8 = param_1[7];
    puVar5 = FUN_004c6fc0();
    iStack_158 = *(int *)(*(int *)(puVar5 + 0x18) + (uVar4 + iVar8 * 8) * 4);
    puVar5 = FUN_004c6fc0();
    uStack_148 = FUN_004a8330(puVar5,iStack_140,0);
    puVar5 = FUN_004c6fc0();
    iStack_150 = FUN_004a8330(puVar5,uStack_144,0);
    puVar5 = FUN_004c6fc0();
    iVar8 = FUN_004a8330(puVar5,iStack_158,0);
    local_164 = FUN_00420910(param_1,param_1[7],param_4);
    local_15c = FUN_00420910(param_1,param_1[7],uVar9);
    local_160 = FUN_00420910(param_1,param_1[7],uVar4);
    bVar10 = (*(byte *)(param_1 + 0xc) & 4) != 0;
    if (bVar10) {
      local_164 = 0;
      local_15c = 0;
      local_160 = 0;
    }
    local_14c = (uint)bVar10;
    local_16c = 0;
    if ((local_164 != 0) && (uStack_148 == 0)) {
      auStack_134[0] = param_4;
      FUN_00402200(param_1,iStack_140,(int *)(auStack_134 + 1),(int *)(auStack_134 + 2),
                   (int *)(auStack_134 + 3));
      auStack_134[4] = FUN_004a8960(&DAT_005ae958,param_6,iStack_140);
      auStack_134[5] = param_1[0x11] + param_4 & 7;
      if (4 < auStack_134[5]) {
        auStack_134[5] = 8 - auStack_134[5];
      }
      local_16c = 1;
    }
    if ((local_15c != 0) && (iStack_150 == 0)) {
      auStack_134[local_16c * 6] = uVar9;
      FUN_00402200(param_1,uStack_144,(int *)(auStack_134 + local_16c * 6 + 1),
                   (int *)(auStack_134 + local_16c * 6 + 2),(int *)(auStack_134 + local_16c * 6 + 3)
                  );
      uVar6 = FUN_004a8960(&DAT_005ae958,param_6,uStack_144);
      auStack_134[local_16c * 6 + 4] = uVar6;
      uVar6 = param_1[0x11] + uVar9 & 7;
      if (4 < uVar6) {
        uVar6 = 8 - uVar6;
      }
      auStack_134[local_16c * 6 + 5] = uVar6;
      local_16c = local_16c + 1;
    }
    if ((local_160 != 0) && (iVar8 == 0)) {
      auStack_134[local_16c * 6] = uVar4;
      FUN_00402200(param_1,iStack_158,(int *)(auStack_134 + local_16c * 6 + 1),
                   (int *)(auStack_134 + local_16c * 6 + 2),(int *)(auStack_134 + local_16c * 6 + 3)
                  );
      uVar6 = FUN_004a8960(&DAT_005ae958,param_6,iStack_158);
      auStack_134[local_16c * 6 + 4] = uVar6;
      uVar6 = param_1[0x11] + uVar4 & 7;
      if (4 < uVar6) {
        uVar6 = 8 - uVar6;
      }
      auStack_134[local_16c * 6 + 5] = uVar6;
      local_16c = local_16c + 1;
    }
    if (local_16c != 0) {
      iStack_158 = 0;
      local_170 = -1;
      iStack_150 = -1;
      iVar8 = -1;
      if (local_16c != 0) {
        uVar4 = *(uint *)((int)this + 0x14);
        local_14c = uVar4 & 8;
        uStack_148 = uVar4 & 0x10;
        uStack_144 = uVar4 & 0x20;
        puVar7 = auStack_134 + 1;
        do {
          iVar8 = (((param_3 - puVar7[3]) * 0x100 + local_154 + local_138) - *puVar7) - puVar7[1];
          if ((((uVar4 & 4) != 0) && (local_138 != 0)) && (*puVar7 == 0)) {
            iVar8 = 0;
          }
          if ((local_14c != 0) && (local_154 < (int)puVar7[1])) {
            iVar8 = iVar8 >> 8;
          }
          if ((uStack_148 != 0) && (local_13c < (int)puVar7[2])) {
            iVar8 = iVar8 >> 8;
          }
          if (((uStack_144 != 0) && (local_13c != 0)) && (puVar7[2] == 0)) {
            iVar8 = iVar8 >> 8;
          }
          if ((iStack_150 < iVar8) || (local_170 < 0)) {
            local_170 = iStack_158;
            iStack_150 = iVar8;
          }
          iStack_158 = iStack_158 + 1;
          puVar7 = puVar7 + 6;
          iVar8 = local_170;
        } while (iStack_158 < local_16c);
      }
      param_1[0x155] = 0;
      if (param_1[0x11] == auStack_134[iVar8 * 6]) {
        FUN_00421180(param_1);
        return 1;
      }
      FUN_004193e0(param_1,auStack_134[iVar8 * 6]);
      return 1;
    }
    if (((local_164 == 0) || (uStack_148 == 0)) || (*(int *)(uStack_148 + 0x48) == param_1[0x12])) {
      if (((local_15c == 0) || (iStack_150 == 0)) || (*(int *)(iStack_150 + 0x48) == param_1[0x12]))
      {
        if (((local_160 == 0) || (iVar8 == 0)) || (*(int *)(iVar8 + 0x48) == param_1[0x12])) {
          FUN_00401730(param_1);
          if (((*(byte *)(param_1 + 0xc) & 0x80) != 0) &&
             (iVar8 = param_1[0x155], param_1[0x155] = iVar8 + -1, 0 < iVar8 + -1)) {
            return 0;
          }
          if ((local_154 == 0) || (iVar8 = FUN_004022c0(this,param_1), iVar8 == 0)) {
            if (((*(byte *)((int)this + 0x14) & 4) != 0) && (local_138 != 0)) {
              return 0;
            }
            param_1[0xc] = param_1[0xc] & 0xfffffffbU | 2;
            param_1[0x155] = DAT_00555150;
            if ((param_1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) ||
               (uVar4 = FUN_0047c9e0(&DAT_005aa12c,param_1[0x12]), uVar4 != 0)) {
              iStack_ec = param_1[10];
              uStack_d4 = 0;
              iStack_d8 = param_6;
              uStack_e8 = 0xffffffff;
              if ((param_2 != 0) && (*(int *)(param_2 + 0x1c) == param_6)) {
                uStack_e8 = *(undefined4 *)(param_2 + 0x28);
              }
              iStack_dc = param_1[7];
              uStack_d0 = 0xffffffff;
              uStack_e4 = 0xffffffff;
              uVar4 = 4;
              if ((((local_164 != 0) || (local_15c != 0)) || (local_160 != 0)) || (local_14c != 0))
              {
                uVar4 = 0xc;
              }
              uStack_cc = 0;
              FUN_0047c6e0(&DAT_005aa12c,&iStack_ec,uVar4);
            }
          }
        }
        else {
          iVar8 = FUN_004019f0(param_1,iVar8,uVar4);
          if (iVar8 != 0) {
            FUN_0041efa0(param_1,3);
            return 1;
          }
        }
      }
      else {
        iVar8 = FUN_004019f0(param_1,iStack_150,uVar9);
        if (iVar8 != 0) {
          FUN_0041efa0(param_1,3);
          return 1;
        }
      }
    }
    else {
      iVar8 = FUN_004019f0(param_1,uStack_148,param_4);
      if (iVar8 != 0) {
        FUN_0041efa0(param_1,3);
        return 1;
      }
    }
  }
  return 1;
#undef local_170
#undef local_16c
#undef local_164
#undef local_160
#undef local_15c
#undef iStack_158
#undef local_154
#undef iStack_150
#undef local_14c
#undef uStack_148
#undef uStack_144
#undef iStack_140
#undef local_13c
#undef local_138
#undef auStack_134
#undef iStack_ec
#undef uStack_e8
#undef uStack_e4
#undef iStack_dc
#undef iStack_d8
#undef uStack_d4
#undef uStack_d0
#undef uStack_cc
}
