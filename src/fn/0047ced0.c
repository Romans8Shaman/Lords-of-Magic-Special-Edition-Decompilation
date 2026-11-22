/* Rebuilt from lomse.exe FUN_0047ced0 @ 0x0047ced0 (719 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b050 (*(undefined *)0x0055b050)
#define DAT_0055b070 (*(undefined *)0x0055b070)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae9b4 (*(int *)0x005ae9b4)
#define DAT_005ae9b8 (*(int *)0x005ae9b8)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_00455660 ((undefined4 (__thiscall *)(void *, int))0x00455660)
#define FUN_00455750 ((undefined4 (__thiscall *)(void *, int, undefined4 *, undefined4 *))0x00455750)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define _DAT_0054d9b8 (*(float *)0x0054d9b8)
#define _DAT_0054d9bc (*(float *)0x0054d9bc)
#define _DAT_0054d9c0 (*(double *)0x0054d9c0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

/* x87: LLVM keeps f32 values in 80-bit registers; force the float rounding the original gets from fstp dword */
static inline float __rf_0047ced0(float10 x) { volatile float f = (float)x; return f; }

#define LOM_SELF_0047ced0 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall rb_0047ced0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_58;
  typedef int _t_local_54;
  typedef int _t_local_50;
  typedef float _t_local_4c;
  typedef int _t_local_48;
  typedef double _t_local_44;
  typedef float _t_local_3c;
  typedef float _t_local_38;
  typedef float _t_local_34;
  typedef float _t_local_30;
  typedef float _t_local_2c;
  typedef float _t_local_28;
  typedef float _t_local_24;
  typedef float _t_local_18;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_4c (*(_t_local_4c *)(_fr + 0xc))
#define local_48 (*(_t_local_48 *)(_fr + 0x10))
#define local_44 (*(_t_local_44 *)(_fr + 0x14))
#define local_3c (*(_t_local_3c *)(_fr + 0x1c))
#define local_38 (*(_t_local_38 *)(_fr + 0x20))
#define local_34 (*(_t_local_34 *)(_fr + 0x24))
#define local_30 (*(_t_local_30 *)(_fr + 0x28))
#define local_2c (*(_t_local_2c *)(_fr + 0x2c))
#define local_28 (*(_t_local_28 *)(_fr + 0x30))
#define local_24 (*(_t_local_24 *)(_fr + 0x34))
#define local_18 (*(_t_local_18 *)(_fr + 0x40))
  
  iVar6 = param_2 % DAT_005ae9c4;
  iVar4 = param_2 / DAT_005ae9c4;
  iVar5 = FUN_00455660(&DAT_005ae8e8,2);
  if (*(int *)(param_1 + 0x4c) == iVar5) {
    iVar5 = 2;
  }
  else {
    iVar5 = 1;
  }
  FUN_00455750(&DAT_005ae8e8,iVar5,&local_54,&local_50);
  iVar6 = iVar6 + local_54;
  iVar5 = *(int *)(param_1 + 0x7c);
  iVar4 = iVar4 + local_50;
  local_48 = *(int *)(param_1 + 0x78);
  local_44 = __BC(double, CONCAT44((*(uint *)((uchar *)&local_44 + 4)),iVar5));
  if (local_48 < iVar5) {
    /* HAND: x87 order of the original (X/Y stay extended; only fA, fB, m, n are rounded to float) */
    iVar7 = *(int *)(param_1 + 0x74) * 4;
    {
      float fA = __rf_0047ced0((float10)(*(int *)(&DAT_0055b050 + iVar7) + iVar6) - (float10)_DAT_0054d9b8);
      float fB = __rf_0047ced0((float10)(*(int *)(&DAT_0055b070 + iVar7) + iVar4) - (float10)_DAT_0054d9b8);
      float fm = __rf_0047ced0((float10)local_48), fn = __rf_0047ced0((float10)iVar5);
      float10 X = (float10)iVar6 - (float10)_DAT_0054d9b8, Y = (float10)iVar4 - (float10)_DAT_0054d9b8;
      fVar1 = __rf_0047ced0((((X - (float10)fA) * (float10)fm) / (float10)fn + (float10)fA));
      fVar2 = __rf_0047ced0((((Y - (float10)fB) * (float10)fm) / (float10)fn + (float10)fB));
    }
  }
  else {
    fVar1 = __rf_0047ced0(((float10)iVar6 - (float10)_DAT_0054d9b8));
    fVar2 = __rf_0047ced0(((float10)iVar4 - (float10)_DAT_0054d9b8));
  }
  iVar4 = (int)(longlong)fVar2;
  iVar5 = (int)(longlong)fVar1;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5,iVar4);
  local_3c = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5 + 1,iVar4);
  local_38 = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5,iVar4 + 1);
  local_34 = (float)fVar8;
  fVar8 = FUN_004a5210(&DAT_005ae958,iVar5 + 1,iVar4 + 1);
  local_30 = (float)fVar8;
  local_48 = DAT_005ae9b8;
  local_58 = fVar1;
  if ((__LOM_ISNAN(fVar1) || __LOM_ISNAN(_DAT_0054d9bc)) || fVar1 < _DAT_0054d9bc) {
    local_58 = (float)DAT_005ae9b4 + fVar1;
  }
  local_4c = fVar2;
  if ((__LOM_ISNAN(fVar2) || __LOM_ISNAN(_DAT_0054d9bc)) || fVar2 < _DAT_0054d9bc) {
    local_4c = (float)DAT_005ae9b8 + fVar2;
  }
  local_58 = local_58 - (float)(int)(longlong)local_58;
  fVar3 = _DAT_0054d9c0 - local_58;
  local_4c = local_4c - (float)(int)(longlong)local_4c;
  local_2c = fVar1 - (float)(DAT_005ae9b4 / 2);
  local_28 = fVar2 - (float)(DAT_005ae9b8 / 2);
  local_44 = (double)fVar3;
  local_24 = (_DAT_0054d9c0 - local_4c) * (local_58 * local_38 + local_3c * fVar3) +
             (local_58 * local_30 + local_34 * fVar3) * local_4c;
  FUN_00469ae0(&DAT_005876d0,&local_2c);
  return (float10)local_18;
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_18
}
