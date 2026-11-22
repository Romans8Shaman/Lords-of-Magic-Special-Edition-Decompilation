/* Rebuilt from lomse.exe FUN_00532040 @ 0x00532040 (1048 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574404 (*(int *)0x00574404)
#define DAT_00574408 (*(int *)0x00574408)
#define DAT_0057440c (*(int *)0x0057440c)
#define DAT_00574410 (*(int *)0x00574410)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae9c8 (*(int *)0x005ae9c8)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005af0bc (*(int *)0x005af0bc)
#define DAT_005d3858 (*(int *)0x005d3858)
#define FUN_004a4c30 ((undefined4 (__thiscall *)(void *, int))0x004a4c30)
#define FUN_004a83b0 ((int (__thiscall *)(void *, int))0x004a83b0)
#define FUN_004c6660 ((undefined4 (__fastcall *)(int *))0x004c6660)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00531b20 ((undefined4 (__thiscall *)(void *, int))0x00531b20)
#define FUN_00531c70 ((undefined4 (__thiscall *)(void *, int))0x00531c70)
#define FUN_00531ed0 ((int (__thiscall *)(void *, int))0x00531ed0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)
#define s_max_moves_exceeded__00574414 (*(char (*)[])0x00574414)

#define LOM_SELF_00532040 1
undefined4 __thiscall
rb_00532040(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5
            ,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uchar _fr[0x90] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_84;
  typedef int _t_local_80[32];
#define local_84 (*(_t_local_84 *)(_fr + 0x4))
#define local_80 (*(_t_local_80 *)(_fr + 0x8))
  
  iVar4 = 0;
  if (param_1[0x15] == 0) {
    *param_5 = 0;
    return 0;
  }
  iVar1 = DAT_005ae9c8 * DAT_005ae9c4;
  *(int *)((int)this + 0xc) = DAT_005ae9c4;
  if (*(int *)((int)this + 8) != iVar1) {
    FUN_00531b20(this,iVar1);
    DAT_005d3858 = 0;
    DAT_00574404 = -1;
    DAT_00574408 = -1;
    DAT_0057440c = -1;
    DAT_00574410 = -1;
  }
  piVar3 = param_1 + 0x31;
  piVar5 = local_80;
  do {
    local_84 = 1;
    FUN_00527e90(piVar3,iVar4 + 0x6c,&local_84);
    if (local_84 < 1) {
      local_84 = 1;
    }
    *piVar5 = local_84;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x20);
  if ((DAT_00574408 != param_3) &&
     ((iVar4 = FUN_004a83b0(&DAT_005ae958,param_3), iVar4 != 0 ||
      ((-1 < DAT_00574408 && (iVar4 = FUN_004a83b0(&DAT_005ae958,DAT_00574408), iVar4 != 0)))))) {
    DAT_00574404 = -1;
  }
  if ((((DAT_00574404 != param_2) || (DAT_005d3858 != param_1[0x15])) || (DAT_0057440c != *piVar3))
     || (DAT_00574410 != param_7)) {
    if (param_1[0x15] == 0x40000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if ((*(short *)(DAT_005aef04 + param_2 * 6 + 2) == *(short *)(DAT_005aef04 + 2 + iVar6))
             && (((param_3 == iVar4 || (param_2 == iVar4)) ||
                 (iVar2 = FUN_004a83b0(&DAT_005ae958,iVar4), iVar2 == 0)))) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar4);
            *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4) = 0x7fffffff;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar4 < iVar1);
      }
    }
    else if (param_1[0x15] == 0x80000) {
      if (DAT_005af0bc == 0) {
        FUN_004c6660(&DAT_005aef04);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if ((*(short *)(DAT_005aef04 + param_2 * 6 + 4) == *(short *)(DAT_005aef04 + 4 + iVar6))
             && (((param_3 == iVar4 || (param_2 == iVar4)) ||
                 (iVar2 = FUN_004a83b0(&DAT_005ae958,iVar4), iVar2 == 0)))) {
            iVar2 = FUN_004a4c30(&DAT_005ae958,iVar4);
            *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar2];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4) = 0x7fffffff;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 6;
        } while (iVar4 < iVar1);
      }
    }
    else {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          if (((param_3 == iVar4) || (param_2 == iVar4)) ||
             (iVar6 = FUN_004a83b0(&DAT_005ae958,iVar4), iVar6 == 0)) {
            iVar6 = FUN_004a4c30(&DAT_005ae958,iVar4);
            *(int *)(*(int *)((int)this + 4) + iVar4 * 4) = local_80[iVar6];
          }
          else {
            *(undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4) = 0x7fffffff;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    DAT_00574408 = param_3;
    DAT_005d3858 = param_1[0x15];
    DAT_0057440c = *piVar3;
    DAT_00574410 = param_7;
    DAT_00574404 = param_2;
    FUN_00531c70(this,param_2);
  }
  piVar3 = (int *)Ordinal_401(param_6 * 4 + 4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  *piVar3 = param_3;
  iVar4 = 1;
  piVar5 = piVar3;
  do {
    piVar5 = piVar5 + 1;
    param_3 = FUN_00531ed0(this,param_3);
    *piVar5 = param_3;
    iVar1 = iVar4 + 1;
    if (param_3 == param_2) {
      *param_5 = iVar4;
      if (0 < iVar1) {
        iVar4 = iVar1 * 4;
        do {
          iVar6 = iVar4 + -4;
          iVar4 = iVar4 + -4;
          *param_4 = *(undefined4 *)((int)piVar3 + iVar6);
          param_4 = param_4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (piVar3 != (int *)0x0) {
        Ordinal_403(piVar3,s_C__lomse_source_storm_h_00555130,0x3f6,0);
      }
      return 1;
    }
  } while ((param_3 != -1) && (iVar4 = iVar1, iVar1 < param_6));
  if (param_6 <= iVar1) {
    OutputDebugStringA(s_max_moves_exceeded__00574414);
  }
  if (piVar3 != (int *)0x0) {
    Ordinal_403(piVar3,s_C__lomse_source_storm_h_00555130,0x3f6,0);
  }
  return 0;
#undef local_84
#undef local_80
}
