/* Rebuilt from lomse.exe FUN_004aec10 @ 0x004aec10 (981 bytes, __fastcall).
 * HAND 2026-11-12: Ghidra '(float)param_1[N]' / '(int)(float)x' on float fields are bitcasts (asm flds/fadds/fstps), not conversions.
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_00586774 (*(undefined4 *)0x00586774)
#define DAT_005867a4 (*(int *)0x005867a4)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae96c (*(int *)0x005ae96c)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_00478c00 ((undefined4 (__thiscall *)(void *, undefined4))0x00478c00)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004ae5e0(...) ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x004ae5e0)(__VA_ARGS__, 0) /* +1 unused stack dword(s): ret 12 */
#define FUN_004ae7e0 ((undefined4 (__thiscall *)(void *, float *, float *, float *, short))0x004ae7e0)
#define FUN_004aeb40 ((undefined4 (__thiscall *)(void *, undefined4 *, undefined4 *, float *))0x004aeb40)
#define FUN_0053a7a0 ((float10 (__cdecl *)(uint, uint))0x0053a7a0)
#define _DAT_0054db7c (*(float *)0x0054db7c)
#define _DAT_0054dba8 (*(double *)0x0054dba8)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)
#define _DAT_005867a8 (*(undefined4 *)0x005867a8)
#define _DAT_005867b0 (*(undefined4 *)0x005867b0)
#define _DAT_005867b4 (*(undefined4 *)0x005867b4)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004aec10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004aec10(int *param_1)

{
  float *unused_stack_8;
  float *unused_stack_8_00;
  double dVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  void *this;
  void *this_00;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_30;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef float _t_local_1c;
  typedef float _t_local_18;
  typedef float _t_local_14;
  typedef void * _t_local_10;
  typedef float _t_local_c;
  typedef float _t_local_8;
  typedef float _t_local_4;
#define local_30 (*(_t_local_30 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x18))
#define local_14 (*(_t_local_14 *)(_fr + 0x1c))
#define local_10 (*(_t_local_10 *)(_fr + 0x20))
#define local_c (*(_t_local_c *)(_fr + 0x24))
#define local_8 (*(_t_local_8 *)(_fr + 0x28))
#define local_4 (*(_t_local_4 *)(_fr + 0x2c))
  
  this = (void *)FUN_00482ac0(&DAT_005aa12c,param_1[0x14],0);
  this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,param_1[0x17],0);
  local_10 = this_00;
  if (this == (void *)0x0) {
    param_1[0x1c] = param_1[0x1c] | 0xc0;
  }
  else {
    FUN_004ae7e0(this,&local_1c,&local_18,&local_14,(short)param_1[0x20]);
    local_20 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
    local_24 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    local_1c = 0.0;
    local_18 = 0.0;
    local_20 = param_1[0x11] % DAT_005ae9c4;
    local_24 = param_1[0x11] / DAT_005ae9c4;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x80) != 0) {
    local_14 = __BC(float, param_1[0x12]);
  }
  if (this_00 == (void *)0x0) {
    iVar7 = param_1[0x13];
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = *(float *)(DAT_005ae9ac + 4 + iVar7 * 8);
  }
  else {
    FUN_004aeb40(this_00,&local_c,&local_8,&local_4);
    iVar7 = *(int *)((int)this_00 + 0x1c);
  }
  local_30 = iVar7 % DAT_005ae9c4;
  iVar7 = iVar7 / DAT_005ae9c4;
  iVar9 = local_30 - local_20;
  iVar8 = iVar7 - local_24;
  if (DAT_005ae96c == 0) goto LAB_004aed84;
  iVar6 = DAT_005ae9c4 + iVar9;
  iVar2 = DAT_005ae9c4;
  if (DAT_005ae9c4 + iVar9 < -iVar9) {
LAB_004aed5f:
    iVar9 = iVar6;
    local_30 = local_30 + iVar2;
  }
  else if (-iVar9 < iVar9 - DAT_005ae9c4) {
    iVar6 = iVar9 - DAT_005ae9c4;
    iVar2 = -DAT_005ae9c4;
    goto LAB_004aed5f;
  }
  iVar6 = DAT_005ae9c4 + iVar8;
  iVar2 = DAT_005ae9c4;
  if (-iVar8 <= DAT_005ae9c4 + iVar8) {
    if (iVar8 - DAT_005ae9c4 <= -iVar8) goto LAB_004aed84;
    iVar6 = iVar8 - DAT_005ae9c4;
    iVar2 = -DAT_005ae9c4;
  }
  iVar8 = iVar6;
  iVar7 = iVar7 + iVar2;
LAB_004aed84:
  dVar1 = (double)(SQRT((float)(iVar9 * iVar9 + iVar8 * iVar8)) / __BC(float, param_1[0x1a]) -
                  (float)_DAT_0054dba8);
  fVar10 = FUN_0053a7a0(SUB84(dVar1,0),(uint)(__BC(ulonglong, dVar1) >> 0x20));
  lVar11 = __ftol(fVar10);
  param_1[0x51] = (int)lVar11;
  unused_stack_8 = (float *)(param_1 + 0x3b);
  if (this == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8,local_20,local_24);
  }
  else {
    FUN_004ae5e0(this,unused_stack_8,0);
  }
  *unused_stack_8 = local_1c + *unused_stack_8;
  unused_stack_8_00 = (float *)(param_1 + 0x46);
  param_1[0x3c] = __BC(int, (local_18 + __BC(float, param_1[0x3c])));
  param_1[0x3d] = __BC(int, (local_14 + __BC(float, param_1[0x3d])));
  if (local_10 == (void *)0x0) {
    FUN_004a6600(&DAT_005ae958,unused_stack_8_00,local_30,iVar7);
  }
  else {
    FUN_004ae5e0(local_10,unused_stack_8_00,param_1[0x51]);
  }
  fVar3 = local_c + *unused_stack_8_00;
  fVar4 = local_8 + __BC(float, param_1[0x47]);
  fVar5 = local_4 + __BC(float, param_1[0x48]);
  local_10 = (void *)param_1[0x1b];
  *unused_stack_8_00 = fVar3;
  param_1[0x47] = __BC(int, fVar4);
  param_1[0x2b] = param_1[0x3d];
  param_1[0x48] = __BC(int, fVar5);
  param_1[0x29] = __BC(int, *unused_stack_8);
  param_1[0x31] = (int)local_10;
  param_1[0x2a] = param_1[0x3c];
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if (param_1[0x51] < 1) {
    fVar5 = fVar5 - __BC(float, param_1[0x3d]);
    param_1[0x2c] = __BC(int, (fVar3 - *unused_stack_8));
    param_1[0x2d] = __BC(int, (fVar4 - __BC(float, param_1[0x3c])));
  }
  else {
    param_1[0x2c] = __BC(int, ((fVar3 - *unused_stack_8) / (float)fVar10));
    param_1[0x2d] = __BC(int, ((fVar4 - __BC(float, param_1[0x3c])) / (float)fVar10));
    if ((*(byte *)(param_1 + 0x1c) & 4) == 0) {
      fVar5 = (fVar5 - __BC(float, param_1[0x3d])) -
              __BC(float, local_10) * _DAT_0054db7c * (float)fVar10 * (float)fVar10;
    }
    else {
      fVar5 = fVar5 - __BC(float, param_1[0x3d]);
    }
    fVar5 = fVar5 / (float)fVar10;
  }
  param_1[0x2e] = __BC(int, fVar5);
  fVar10 = (float10)fpatan((float10)__BC(float, param_1[0x2d]),(float10)__BC(float, param_1[0x2c]));
  param_1[0x28] = 0;
  param_1[0xc] = param_1[0xc] | 2;
  param_1[0x32] = __BC(int, (float)fVar10);
  if (-1 < param_1[0x23]) {
    _DAT_005867b0 = 0;
    _DAT_005867a8 = DAT_00586774;
    DAT_005867a4 = param_1[0x23];
    _DAT_005867a0 = 0xfffffc18;
    _DAT_005867b4 = 0;
    FUN_00478c00(&DAT_00585408,param_1[0x23]);
  }
  ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x2c)))(param_1);
  return;
#undef local_30
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
