/* Rebuilt from lomse.exe FUN_0052c0c0 @ 0x0052c0c0 (1623 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583100 (*(char *)0x00583100)
#define DAT_005851a0 (*(int *)0x005851a0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define DAT_005d209c (*(char *)0x005d209c)
#define FUN_00404d50 ((undefined4 (__stdcall *)(int, int))0x00404d50)
#define FUN_00404da0 ((undefined4 (__stdcall *)(uint, int))0x00404da0)
#define FUN_0041ed80 ((undefined4 (__thiscall *)(void *, undefined4))0x0041ed80)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00431160 ((uint (__fastcall *)(int, undefined4, undefined4))0x00431160)
#define FUN_00454fc0 ((int (__stdcall *)(int, int))0x00454fc0)
#define FUN_004550e0 ((undefined4 (__stdcall *)(int))0x004550e0)
#define FUN_0047c570 ((undefined4 (__stdcall *)(int *, undefined4))0x0047c570)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a4c70 ((int (__thiscall *)(void *, int, int, uint))0x004a4c70)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a6e60 ((undefined4 (__thiscall *)(void *, int, int))0x004a6e60)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004fbb10 ((undefined4 (__thiscall *)(void *, undefined4, int))0x004fbb10)
#define FUN_0052bd80 ((int (__stdcall *)(int, int))0x0052bd80)
#define FUN_0052be20 ((uint (__fastcall *)(int))0x0052be20)
#define FUN_0052bf50 ((undefined4 (__fastcall *)(int))0x0052bf50)
#define FUN_0052c010 ((undefined4 (__thiscall *)(void *, int *))0x0052c010)
#define FUN_0053a320 ((undefined4 (__cdecl *)(undefined1 *, uint, uint, undefined *))0x0053a320)
#define LAB_0052bf80 (*(undefined *)0x0052bf80) /* code label used as address */

#define LOM_SELF_0052c0c0 1
undefined4 __thiscall
rb_0052c0c0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *this_00;
  uint uVar5;
  int iVar6;
  undefined4 unused_reg_1;
  undefined1 *puVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uchar _fr[0x210] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_204;
  typedef uint * _t_local_200;
  typedef int _t_local_1fc;
  typedef undefined1 * _t_local_1f8;
  typedef int _t_local_1f4;
  typedef int _t_local_1e8;
  typedef int _t_local_1e4;
  typedef int _t_local_1e0;
  typedef uint _t_local_1dc;
  typedef int _t_local_1d8;
  typedef int _t_local_1d4;
  typedef int _t_local_1d0;
  typedef undefined4 _t_local_1cc;
  typedef int _t_local_1c8;
  typedef undefined4 _t_local_1c4;
  typedef undefined4 _t_local_1c0;
  typedef undefined4 _t_local_1bc;
  typedef undefined2 _t_local_1b8;
  typedef undefined1 _t_local_1b6;
  typedef uint _t_local_1b4;
  typedef undefined4 _t_local_1b0;
  typedef uint _t_local_1ac;
  typedef undefined4 _t_local_1a4;
  typedef int _t_local_1a0;
  typedef uint _t_local_19c;
  typedef undefined4 _t_local_198;
  typedef undefined4 _t_local_194;
  typedef undefined1 _t_local_c8[200];
#define local_204 (*(_t_local_204 *)(_fr + 0x4))
#define local_200 (*(_t_local_200 *)(_fr + 0x8))
#define local_1fc (*(_t_local_1fc *)(_fr + 0xc))
#define local_1f8 (*(_t_local_1f8 *)(_fr + 0x10))
#define local_1f4 (*(_t_local_1f4 *)(_fr + 0x14))
#define local_1e8 (*(_t_local_1e8 *)(_fr + 0x20))
#define local_1e4 (*(_t_local_1e4 *)(_fr + 0x24))
#define local_1e0 (*(_t_local_1e0 *)(_fr + 0x28))
#define local_1dc (*(_t_local_1dc *)(_fr + 0x2c))
#define local_1d8 (*(_t_local_1d8 *)(_fr + 0x30))
#define local_1d4 (*(_t_local_1d4 *)(_fr + 0x34))
#define local_1d0 (*(_t_local_1d0 *)(_fr + 0x38))
#define local_1cc (*(_t_local_1cc *)(_fr + 0x3c))
#define local_1c8 (*(_t_local_1c8 *)(_fr + 0x40))
#define local_1c4 (*(_t_local_1c4 *)(_fr + 0x44))
#define local_1c0 (*(_t_local_1c0 *)(_fr + 0x48))
#define local_1bc (*(_t_local_1bc *)(_fr + 0x4c))
#define local_1b8 (*(_t_local_1b8 *)(_fr + 0x50))
#define local_1b6 (*(_t_local_1b6 *)(_fr + 0x52))
#define local_1b4 (*(_t_local_1b4 *)(_fr + 0x54))
#define local_1b0 (*(_t_local_1b0 *)(_fr + 0x58))
#define local_1ac (*(_t_local_1ac *)(_fr + 0x5c))
#define local_1a4 (*(_t_local_1a4 *)(_fr + 0x64))
#define local_1a0 (*(_t_local_1a0 *)(_fr + 0x68))
#define local_19c (*(_t_local_19c *)(_fr + 0x6c))
#define local_198 (*(_t_local_198 *)(_fr + 0x70))
#define local_194 (*(_t_local_194 *)(_fr + 0x74))
#define local_c8 (*(_t_local_c8 *)(_fr + 0x140))
  
  iVar10 = 0;
  if (param_5 == 0) {
    iVar1 = FUN_0052bd80(param_1,param_2);
  }
  else {
    iVar1 = FUN_004a51c0(&DAT_005ae958,param_1,param_2);
  }
  local_1c4 = 0;
  local_1c0 = 0;
  local_1cc = 0;
  local_1bc = 0;
  local_1f4 = -1;
  local_1b8 = 0;
  local_1d4 = 0;
  local_1b6 = 0;
  cVar9 = -2;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = FUN_004a8330(&DAT_005ae958,iVar1,1);
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x30) & 0x40) != 0)) {
      local_1d4 = 1;
    }
    FUN_0053a320((undefined1 *)((int)this + 0x14),0x1e,0xc,&LAB_0052bf80);
    local_200 = (uint *)((int)this + 0x18);
    local_1e8 = -2;
    local_1fc = 0;
    local_1f8 = (undefined1 *)0x0;
    local_204 = 0;
    puVar7 = local_c8;
    local_1e4 = 0x1e;
    do {
      puVar3 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f);
      if ((puVar3 != (undefined4 *)0x0) && (puVar3[0x12] == *(int *)this)) {
        iVar2 = FUN_004c1cf0((int)puVar3);
        if (iVar2 == 0) {
          if (puVar3[0x12] != DAT_005cc9d4) {
            iVar2 = FUN_00420560((int)puVar3);
            if (iVar2 != 0) goto LAB_0052c27f;
          }
          iVar2 = puVar3[7];
          if ((iVar2 != iVar1) && (local_1e0 = iVar2, (puVar3[0xc] & 0x40000000) == 0)) {
            iVar2 = FUN_0052bf50((int)puVar3);
            if ((local_1e8 != iVar2) || ((6 < iVar10 + 1 && (cVar9 != *(char *)(puVar3 + 0x16b)))))
            {
              iVar10 = 0;
              puVar7 = puVar7 + 4;
              local_1e8 = iVar2;
            }
            cVar9 = *(char *)(puVar3 + 0x16b);
            iVar2 = puVar3[7];
            iVar10 = iVar10 + 1;
            *(int *)(puVar7 + -4) = iVar10;
            local_1fc = local_1fc + iVar2 % DAT_005ae9c4;
            local_1f8 = (undefined1 *)((int)local_1f8 + iVar2 / DAT_005ae9c4);
            local_204 = local_204 + 1;
          }
        }
      }
LAB_0052c27f:
      local_200 = local_200 + 3;
      local_1e4 = local_1e4 + -1;
    } while (local_1e4 != 0);
    if (local_204 != 0) {
      local_1e0 = FUN_004a51c0(&DAT_005ae958,local_1fc / local_204,(int)local_1f8 / local_204);
    }
    FUN_004a9a60(&DAT_005ae958,&local_1dc,iVar1);
    if ((local_1dc & 0x200000) != 0) {
      local_1c8 = FUN_00454fc0(iVar1,local_204);
    }
  }
  local_1e8 = -2;
  cVar9 = -2;
  local_204 = 0;
  local_1d8 = 0;
  local_1fc = 0;
  local_1f8 = local_c8;
  local_200 = (uint *)((int)this + 0x18);
  local_1d0 = 0x1e;
  uVar8 = local_1cc;
  do {
    puVar3 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f);
    if ((((((puVar3 != (undefined4 *)0x0) && (puVar3[0x12] == *(int *)this)) &&
          (iVar10 = FUN_004c1cf0((int)puVar3), iVar10 == 0)) &&
         ((puVar3[0x12] == DAT_005cc9d4 || (iVar10 = FUN_00420560((int)puVar3), iVar10 == 0)))) &&
        ((puVar3[7] != iVar1 && ((puVar3[0xc] & 0x40000000) == 0)))) &&
       ((puVar4 = FUN_00485080(&DAT_005aa12c,*local_200,0x2f), puVar4 != (undefined4 *)0x0 ||
        (local_200[1] != 0)))) {
      iVar10 = FUN_00420580((int)puVar3);
      if (iVar10 == 0) {
        local_1b4 = *local_200;
        local_1ac = local_200[1];
        if (local_1ac == 0) {
          local_1ac = 0xffffffff;
        }
        local_1a4 = puVar3[7];
        local_19c = -(uint)(param_3 != 0) & 0x40;
        local_194 = 0;
        local_1a0 = iVar1;
        if (param_3 == 0) {
          local_1b0 = 0xffffffff;
        }
        else {
          iVar10 = FUN_004a6e60(&DAT_005ae958,param_1,param_2);
          puVar3 = FUN_00485080(&DAT_005aa12c,iVar10,0x2f);
          if (puVar3 == (undefined4 *)0x0) {
            uVar5 = FUN_00482ac0(&DAT_005aa12c,iVar10,7);
            if (uVar5 != 0) {
              puVar3 = (undefined4 *)FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar5 + 0x44),0);
            }
            if (puVar3 == (undefined4 *)0x0) {
              local_1b0 = 0xffffffff;
              goto LAB_0052c68e;
            }
          }
          local_1b0 = puVar3[10];
        }
LAB_0052c68e:
        local_198 = 0xffffffff;
        if (((param_4 == 0) && ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3)) &&
           ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 8)) {
          local_19c = local_19c | 8;
        }
        iVar10 = FUN_0052c010(this,(int *)&local_1b4);
        if (iVar10 == 0) {
          FUN_0047c570((int *)&local_1b4,0);
        }
      }
      else {
        if (local_1f4 < 0) {
          if (local_1e0 == iVar1) {
            local_1f4 = puVar3[0x11];
          }
          else {
            local_1f4 = FUN_004a8b50(&DAT_005ae958,local_1e0,iVar1);
          }
        }
        iVar10 = iVar1;
        if (local_1d4 == 0) {
          iVar2 = FUN_0052bf50((int)puVar3);
          if ((local_1e8 != iVar2) || ((6 < local_204 + 1 && (cVar9 != *(char *)(puVar3 + 0x16b)))))
          {
            local_1fc = local_1fc + 2;
            local_1f8 = local_1f8 + 4;
            local_204 = 0;
            local_1e8 = iVar2;
          }
          cVar9 = *(char *)(puVar3 + 0x16b);
          if (2 < local_1fc) {
            iVar2 = local_1fc + -2;
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 - 4U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          iVar2 = *(int *)(local_1f8 + -4) >> 1;
          if (0 < iVar2) {
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 - 2U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          if (0 < local_204) {
            iVar2 = local_204;
            do {
              iVar10 = FUN_004a4c70(&DAT_005ae958,iVar10,local_1f4 + 2U & 7,puVar3[0x15]);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        this_00 = (void *)FUN_0052be20((int)this);
        uVar8 = 0;
        if (this_00 != (void *)0x0) {
          FUN_0041ed80(this_00,0x18);
          uVar8 = 0;
        }
        if (DAT_00583100 == '\x02') {
          iVar2 = FUN_00420620((int)puVar3);
          if ((iVar2 == 0) &&
             ((DAT_005d209c != '\x01' ||
              (uVar5 = FUN_00431160((int)puVar3,unused_reg_1,0), uVar5 != 0)))) {
            iVar2 = local_1d8;
            if (((local_1dc & 0x200000) != 0) && (local_1d8 < local_1c8)) {
              iVar6 = FUN_004550e0(local_1d8);
              if (iVar6 != -1) {
                iVar10 = iVar6;
              }
              local_1d8 = iVar2 + 1;
            }
            if (DAT_005851a0 == 0) {
              FUN_00404da0(*local_200,iVar10);
            }
            else {
              FUN_00404d50(*local_200,iVar10);
            }
          }
        }
        else if ((DAT_005d209c != '\x01') || (uVar5 = FUN_00431160((int)puVar3,uVar8,0), uVar5 != 0)
                ) {
          FUN_00404d50(*local_200,iVar10);
        }
        local_204 = local_204 + 1;
        if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
          FUN_004fbb10(&DAT_005ae974,iVar10,puVar3[10]);
        }
      }
      uVar8 = 1;
      local_200[1] = 0;
    }
    local_200 = local_200 + 3;
    local_1d0 = local_1d0 + -1;
    if (local_1d0 == 0) {
      return uVar8;
    }
  } while( true );
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b6
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_c8
}
