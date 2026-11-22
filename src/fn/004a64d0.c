/* Rebuilt from lomse.exe FUN_004a64d0 @ 0x004a64d0 (303 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"
/* tools/fpsearch.py: float locals fVar1,fVar2 = xv (v volatile float, x float10) */

#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define _DAT_0054da90 (*(float *)0x0054da90)
#define _DAT_0054daa0 (*(double *)0x0054daa0)
#define _DAT_0054dac0 (*(float *)0x0054dac0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

static inline float __r32(float10 x){ volatile float f = (float)x; return f; }
#define LOM_SELF_004a64d0 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall rb_004a64d0(void *param_1,float param_2,float param_3)

{
  float10 fVar1;
  volatile float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  float10 t3;
  float A;
  fVar1 = (float10)(*(int *)((int)param_1 + 0x5c) >> 1) + (float10)param_2;
  fVar2 = __r32((float10)(*(int *)((int)param_1 + 0x60) >> 1) + (float10)param_3);
  iVar3 = (int)(longlong)fVar1;
  iVar4 = (int)(longlong)(float10)fVar2;
  param_2 = __r32(fVar1 - (float10)iVar3);
  if ((__LOM_ISNAN(param_2) || __LOM_ISNAN((float)_DAT_0054daa0)) || (float10)param_2 < (float10)_DAT_0054daa0) {
    param_2 = __r32((float10)param_2 - (float10)_DAT_0054dac0);
  }
  t3 = (float10)fVar2 - (float10)iVar4;
  param_3 = __r32(t3);
  if ((__LOM_ISNAN(t3) || __LOM_ISNAN((float)_DAT_0054daa0)) || t3 < (float10)_DAT_0054daa0) {
    param_3 = __r32((float10)param_3 - (float10)_DAT_0054dac0);
  }
  fVar5 = (float10)__r32(FUN_004a5210(param_1,iVar3,iVar4));
  fVar6 = (float10)__r32(FUN_004a5210(param_1,iVar3 + 1,iVar4));
  fVar7 = (float10)__r32(FUN_004a5210(param_1,iVar3,iVar4 + 1));
  fVar8 = FUN_004a5210(param_1,iVar3 + 1,iVar4 + 1);
  A = __r32((float10)_DAT_0054da90 - (float10)param_2);
  return ((float10)_DAT_0054da90 - (float10)param_3) *
         (fVar6 * (float10)param_2 + fVar5 * (float10)A) +
         (fVar8 * (float10)param_2 + fVar7 * (float10)A) * (float10)param_3;
}
