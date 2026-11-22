/* Rebuilt from lomse.exe FUN_00524d70 @ 0x00524d70 (1051 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578818 (*(void * *)0x00578818)
#define DAT_00579278 (*(undefined4 *)0x00579278)
#define DAT_005aa12c (*(int *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005cd18c (*(undefined *)0x005cd18c)
#define DAT_005d2f50 (*(undefined4 *)0x005d2f50)
#define DAT_005d3340 (*(int *)0x005d3340)
#define FUN_00427b50 ((undefined4 (__fastcall *)(int))0x00427b50)
#define FUN_00427fa0 ((undefined4 (__thiscall *)(void *, int *))0x00427fa0)
#define FUN_00428170 ((undefined4 (__thiscall *)(void *, int))0x00428170)
#define FUN_0044b490 ((undefined4 (__fastcall *)(undefined4 *))0x0044b490)
#define FUN_0044b4e0 ((undefined4 (__fastcall *)(undefined4 *))0x0044b4e0)
#define FUN_0044b4f0 ((undefined4 (__cdecl *)(undefined4))0x0044b4f0)
#define FUN_004fbed0 ((undefined4 * (__thiscall *)(void *, int))0x004fbed0)
#define FUN_00526bf0 ((undefined4 (__fastcall *)(int))0x00526bf0)
#define FUN_00526c10 ((undefined4 (__stdcall *)(void))0x00526c10)
#define FUN_00526c20 ((undefined4 (__thiscall *)(void *, int *))0x00526c20)
#define FUN_00526e00 ((undefined4 (__thiscall *)(void *, int))0x00526e00)
#define FUN_00526fe0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x00526fe0)
#define FUN_0052b470 ((undefined4 (__thiscall *)(void *, int *))0x0052b470)
#define FUN_0052b540 ((int * (__thiscall *)(void *, int))0x0052b540)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00524d70 1
undefined4 __thiscall rb_00524d70(void *this, int *volatile param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int *this_00;
  undefined4 uVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_48;
  typedef void * _t_local_44;
  typedef undefined4 _t_auStack_40[5];
  typedef undefined4 _t_auStack_2c[8];
#define iStack_48 (*(_t_iStack_48 *)(_fr + 0x0))
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
#define auStack_40 (*(_t_auStack_40 *)(_fr + 0x8))
#define auStack_2c (*(_t_auStack_2c *)(_fr + 0x1c))

  iVar8 = *(int *)((int)this + 0x18);
  pvVar10 = *(void **)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_44 = pvVar10;
  if (((iVar8 != 0) || (pvVar10 != (void *)0x0)) &&
     (puVar6 = FUN_004fbed0(&DAT_005ae974,0), puVar6 != (undefined4 *)0x0)) {
    do {
      piVar11 = puVar6 + 0x37;
      iVar14 = 0xf;
      do {
        if (iVar8 != 0) {
          for (iVar2 = *piVar11; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
            iVar12 = iVar8;
            do {
              iVar12 = *(int *)(iVar12 + 0x1c);
            } while (iVar12 != 0);
          }
        }
        piVar11 = piVar11 + 0x13;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      puVar6 = FUN_004fbed0(&DAT_005ae974,(int)puVar6);
    } while (puVar6 != (undefined4 *)0x0);
    pvVar10 = local_44;
  }
  FUN_00526e00(&DAT_005d2f50,iVar8);
  if (pvVar10 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar10 + 0x14);
    pvVar4 = pvVar10;
    while (pvVar3 = pvVar5, pvVar3 != (void *)0x0) {
      pvVar4 = pvVar3;
      pvVar5 = *(void **)((int)pvVar3 + 0x14);
    }
    *(void **)((int)pvVar4 + 0x14) = DAT_00578818;
    DAT_00578818 = pvVar10;
  }
  puVar6 = *(undefined4 **)((int)this + 0x14);
  if (puVar6 != (undefined4 *)0x0) {
    ((undefined4 (__thiscall *)(__typeof__(puVar6), __typeof__(1)))(**(code **)*puVar6))(puVar6,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar11 = param_1;
  uVar7 = 0x4c;
  if (DAT_005aa12c < 0x48) {
    uVar7 = 0x20;
  }
  else if (DAT_005aa12c < 0x49) {
    uVar7 = 0x24;
  }
  else if (DAT_005aa12c < 0x65) {
    uVar7 = 0x28;
  }
  else if (DAT_005aa12c < 0x67) {
    uVar7 = 0x48;
  }
  uVar7 = FUN_005397f0(this,uVar7,1,param_1);
  if (uVar7 != 1) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    return 0;
  }
  iVar8 = *(int *)((int)this + 0x20) + 1;
  if (DAT_005d3340 <= iVar8) {
    DAT_005d3340 = iVar8;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_0044b490(auStack_40);
  if (DAT_005aa12c < 0x37) {
    *(uint *)((int)this + 0x14) = -(uint)(*(int *)((int)this + 0x14) != -1) & (uint)auStack_40;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    uVar7 = FUN_005397f0((char *)&param_1,4,1,piVar11);
    if (uVar7 != 1) {
      FUN_0044b4e0(auStack_40);
      return 0;
    }
    this_00 = (int *)FUN_0044b4f0(param_1);
    *(int **)((int)this + 0x14) = this_00;
    if (this_00 == (int *)0x0) {
      FUN_0044b4e0(auStack_40);
      return 0;
    }
    iVar8 = ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(piVar11)))(**(code **)(*this_00 + 8)))(this_00,piVar11);
    if (iVar8 == 0) {
      FUN_0044b4e0(auStack_40);
      return 0;
    }
    if (DAT_005aa12c < 0x65) {
      uVar7 = 0xffffffff;
      pcVar15 = (char *)&DAT_00579278;
      do {
        pcVar16 = pcVar15;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar16 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar15 = pcVar16 + -uVar7;
      pcVar16 = (char *)((int)this + 0x28);
      for (uVar13 = uVar7 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar16 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  uVar7 = FUN_005397f0((char *)&iStack_48,4,1,piVar11);
  if (uVar7 == 1) {
    FUN_00526bf0((int)auStack_2c);
    for (; iStack_48 != 0; iStack_48 = iStack_48 + -1) {
      iVar8 = FUN_00526c20(auStack_2c,piVar11);
      if (iVar8 == 0) goto LAB_00525015;
      FUN_00526fe0(this,auStack_2c);
    }
    if (0x3d < DAT_005aa12c) {
      uVar7 = FUN_005397f0((char *)&param_1,4,1,piVar11);
      if (uVar7 != 1) {
LAB_00525015:
        FUN_00526c10();
        goto LAB_00525023;
      }
      if (param_1 != (int *)0x0) {
        do {
          pvVar10 = DAT_00578818;
          if (DAT_00578818 == (void *)0x0) {
            local_44 = (void *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
            if (local_44 == (void *)0x0) {
              pvVar10 = (void *)0x0;
            }
            else {
              pvVar10 = (void *)FUN_00427b50((int)local_44);
            }
          }
          else {
            puVar6 = (undefined4 *)((int)DAT_00578818 + 0x14);
            DAT_00578818 = *(void **)((int)DAT_00578818 + 0x14);
            *puVar6 = 0;
          }
          if (pvVar10 == (void *)0x0) {
LAB_00525168:
            FUN_00526c10();
            FUN_0044b4e0(auStack_40);
            return 0;
          }
          iVar8 = FUN_00427fa0(pvVar10,piVar11);
          if (iVar8 == 0) {
            *(void **)((int)pvVar10 + 0x14) = DAT_00578818;
            DAT_00578818 = pvVar10;
            goto LAB_00525168;
          }
          FUN_00428170(this,(int)pvVar10);
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
        param_1 = (int *)0x0;
      }
    }
    if ((*(uint *)((int)this + 0x24) & 0x200) != 0) {
      uVar9 = *(undefined4 *)this;
      piVar11 = FUN_0052b540(&DAT_005cd18c,*(int *)((int)this + 0x20));
      if (piVar11 == (int *)0x0) {
        iVar8 = *(int *)this;
      }
      else {
        iVar8 = piVar11[1];
      }
      *(int *)((int)this + 0x20) = DAT_005d3340;
      DAT_005d3340 = DAT_005d3340 + 1;
      *(int *)this = iVar8;
      FUN_0052b470(&DAT_005cd18c,this);
      *(undefined4 *)this = uVar9;
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffdff;
    }
    FUN_00526c10();
    FUN_0044b4e0(auStack_40);
    uVar9 = 1;
  }
  else {
LAB_00525023:
    FUN_0044b4e0(auStack_40);
    uVar9 = 0;
  }
  return uVar9;
#undef iStack_48
#undef local_44
#undef auStack_40
#undef auStack_2c
}
