/* Rebuilt from lomse.exe FUN_004a6700 @ 0x004a6700 (329 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define FUN_004a9a20 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int))0x004a9a20)
#define _DAT_0054dab0 (*(float *)0x0054dab0)
#define _DAT_0054dae0 (*(float *)0x0054dae0)
#define _DAT_0054dae8 (*(double *)0x0054dae8)
#define _DAT_005ae938 (*(float *)0x005ae938)
#define _DAT_005ae93c (*(float *)0x005ae93c)
#define _DAT_005ae940 (*(float *)0x005ae940)

#define LOM_SELF_004a6700 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004a6700(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef float _t_local_10;
  typedef float _t_local_c;
  typedef float _t_local_8;
  typedef float _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  fVar2 = FUN_004a5210(this,param_2,param_3);
  local_10 = (float)fVar2;
  fVar2 = FUN_004a5210(this,param_2 + 1,param_3);
  local_c = (float)fVar2;
  fVar2 = FUN_004a5210(this,param_2,param_3 + 1);
  local_8 = (float)fVar2;
  fVar3 = FUN_004a5210(this,param_2 + 1,param_3 + 1);
  local_4 = (float)fVar3;
  *param_1 = ((float)param_2 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x5c) / 2);
  fVar2 = (float10)_DAT_0054dae0;
  param_1[1] = ((float)param_3 - _DAT_0054dab0) - (float)(*(int *)((int)this + 0x60) / 2);
  param_1[2] = (float)((fVar3 * fVar2 - (float10)local_8 * (float10)_DAT_0054dae8) *
                       (float10)_DAT_0054dae0 -
                      ((float10)local_c * (float10)_DAT_0054dae0 -
                      (float10)local_10 * (float10)_DAT_0054dae8) * (float10)_DAT_0054dae8);
  FUN_004a9a20(this,&local_14,param_2,param_3);
  if ((local_14 & 0x400000) == 0) {
    if ((local_14 & 0x38000) == 0) {
      if ((local_14 & 0x200000) == 0) goto LAB_004a6834;
      fVar1 = _DAT_005ae93c;
    }
    else {
      fVar1 = _DAT_005ae940;
    }
  }
  else {
    if ((*(uint *)(param_4 + 0x54) & 0x100000) == 0) goto LAB_004a6834;
    fVar1 = _DAT_005ae938;
  }
  param_1[2] = fVar1 + param_1[2];
LAB_004a6834:
  FUN_00469ae0(&DAT_005876d0,param_1);
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
