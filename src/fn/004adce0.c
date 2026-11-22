/* Rebuilt from lomse.exe FUN_004adce0 @ 0x004adce0 (777 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae96c (*(int *)0x005ae96c)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004ae5e0(...) ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004ae5e0)(__VA_ARGS__, 0) /* +1 unused stack dword(s): ret 12 */
#define FUN_004aeb40 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, float *))0x004aeb40)
#define _DAT_0054db70 (*(double *)0x0054db70)
#define _DAT_0054db78 (*(float *)0x0054db78)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

static inline float __r32(float10 x){ volatile float f = (float)x; return f; }
#define LOM_SELF_004adce0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004adce0(int param_1)

{
  float *unused_stack_8;
  float fVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  void *this;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  longlong lVar12;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20;
  typedef float _t_local_18;
  typedef float _t_local_14;
  typedef float _t_local_10;
  typedef int _t_local_c;
  typedef double _t_local_8;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  local_c = *(int *)(param_1 + 0x1c) % DAT_005ae9c4;
  local_8 = __BC(double, CONCAT44((*(uint *)((uchar *)&local_8 + 4)),*(int *)(param_1 + 0x1c) / DAT_005ae9c4));
  this = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5c),0);
  if (this == (void *)0x0) {
    iVar6 = *(int *)(param_1 + 0x4c);
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = *(float *)(DAT_005ae9ac + 4 + iVar6 * 8);
  }
  else {
    FUN_004aeb40(this,&local_18,&local_14,&local_10);
    iVar6 = *(int *)((int)this + 0x1c);
  }
  local_20 = iVar6 % DAT_005ae9c4;
  iVar6 = iVar6 / DAT_005ae9c4;
  iVar8 = local_20 - local_c;
  (*(int *)((uchar *)&local_8 + 0)) = iVar6 - (*(int *)((uchar *)&local_8 + 0));
  if (DAT_005ae96c == 0) goto LAB_004addd1;
  iVar7 = DAT_005ae9c4 + iVar8;
  iVar5 = DAT_005ae9c4;
  if (iVar7 < -iVar8) {
LAB_004addac:
    local_20 = local_20 + iVar5;
    iVar8 = iVar7;
  }
  else {
    iVar7 = iVar8 - DAT_005ae9c4;
    if (-iVar8 < iVar7) {
      iVar5 = -DAT_005ae9c4;
      goto LAB_004addac;
    }
  }
  iVar5 = DAT_005ae9c4 + (*(int *)((uchar *)&local_8 + 0));
  iVar7 = DAT_005ae9c4;
  if (-(*(int *)((uchar *)&local_8 + 0)) <= DAT_005ae9c4 + (*(int *)((uchar *)&local_8 + 0))) {
    if ((*(int *)((uchar *)&local_8 + 0)) - DAT_005ae9c4 <= -(*(int *)((uchar *)&local_8 + 0))) goto LAB_004addd1;
    iVar5 = (*(int *)((uchar *)&local_8 + 0)) - DAT_005ae9c4;
    iVar7 = -DAT_005ae9c4;
  }
  (*(int *)((uchar *)&local_8 + 0)) = iVar5;
  iVar6 = iVar6 + iVar7;
LAB_004addd1:
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xac);
  unused_stack_8 = (float *)(param_1 + 0x118);
  /* HAND: fild int; fsqrt; fdiv float; fstp qword (80-bit, no float rounding) */
  local_8 = (double)(SQRT((float10)(iVar8 * iVar8 + (*(int *)((uchar *)&local_8 + 0)) * (*(int *)((uchar *)&local_8 + 0)))) / (float10)*(float *)(param_1 + 0x68));
  if (this == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8,local_20,iVar6);
  }
  else {
    lVar12 = __ftol((float10)local_8);
    FUN_004ae5e0(this,unused_stack_8,(int)lVar12);
  }
  {
  /* HAND (x87 trace 4ade43..4adfdc): X/Y stay 80-bit, divide by the double, compare unrounded values */
  float10 X = (float10)local_18 + (float10)*unused_stack_8;
  float10 Y = (float10)local_14 + (float10)*(float *)(param_1 + 0x11c);
  float10 Z = (float10)local_10 + (float10)*(float *)(param_1 + 0x120);
  float10 A, B, C, F, P, Qy, ANG;
  float N, Cr, Pr;
  int cdiv = !(__LOM_ISNAN(local_8) || __LOM_ISNAN(_DAT_0054db70)) && !((float10)local_8 < (float10)_DAT_0054db70);
  *unused_stack_8 = (float)X;
  *(float *)(param_1 + 0x11c) = (float)Y;
  *(float *)(param_1 + 0x120) = (float)Z;
  if (cdiv) {
    A = (X - (float10)*(float *)(param_1 + 0xec)) / (float10)local_8;
    local_10 = __r32((Y - (float10)*(float *)(param_1 + 0xf0)) / (float10)local_8);
  }
  else {
    A = X - (float10)*(float *)(param_1 + 0xec);
    local_10 = __r32(Y - (float10)*(float *)(param_1 + 0xf0));
  }
  F = (float10)*(float *)(param_1 + 0x68) * (float10)_DAT_0054db78;
  B = A - (float10)*(float *)(param_1 + 0xb0);
  C = (float10)local_10 - (float10)*(float *)(param_1 + 0xb4);
  N = __r32(-F);
  Cr = __r32(C);
  *(float *)(param_1 + 0xbc) = (float)B;
  *(float *)(param_1 + 0xc0) = (float)C;
  if (__LOM_ISNAN(B) || __LOM_ISNAN(N) || B < (float10)N) {
    *(float *)(param_1 + 0xbc) = N;
  }
  else if (!(__LOM_ISNAN(B) || __LOM_ISNAN(F)) && B > F) {
    *(float *)(param_1 + 0xbc) = (float)F;
  }
  if (__LOM_ISNAN(Cr) || __LOM_ISNAN(N) || Cr < N) {
    *(float *)(param_1 + 0xc0) = N;
  }
  else if (!(__LOM_ISNAN(Cr) || __LOM_ISNAN(F)) && (float10)Cr > F) {
    *(float *)(param_1 + 0xc0) = (float)F;
  }
  P = (float10)*(float *)(param_1 + 0xbc) + (float10)*(float *)(param_1 + 0xb0);
  Qy = (float10)*(float *)(param_1 + 0xc0) + (float10)*(float *)(param_1 + 0xb4);
  Pr = __r32(P);
  ANG = (float10)fpatan(Qy,P);
  {
    float Pa = __r32((float10)Pr + (float10)*(float *)(param_1 + 0xa4));
    float Qa = __r32(Qy + (float10)*(float *)(param_1 + 0xa8));
    *(float *)(param_1 + 0xb0) = Pr;
    *(float *)(param_1 + 0xb4) = (float)Qy;
    *(float *)(param_1 + 0xa4) = Pa;
    *(float *)(param_1 + 0xa8) = Qa;
    *(float *)(param_1 + 0xcc) = Pa;
    *(float *)(param_1 + 0xd0) = Qa;
    *(float *)(param_1 + 200) = (float)ANG;
  }
  }
  return;
#undef local_20
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
}
