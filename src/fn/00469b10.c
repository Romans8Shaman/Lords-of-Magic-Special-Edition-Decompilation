/* Rebuilt from lomse.exe FUN_00469b10 @ 0x00469b10 (211 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a47c0 ((undefined4 (__cdecl *)(float *, int, float *))0x004a47c0)
#define _DAT_0054d7d4 (*(float *)0x0054d7d4)
#define _DAT_0054d7d8 (*(float *)0x0054d7d8)
#define _DAT_0054d7dc (*(float *)0x0054d7dc)

#define LOM_SELF_00469b10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_00469b10(void *this,float *param_1)

{
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_30;
  typedef float _t_local_2c;
  typedef float _t_local_20;
  typedef float _t_local_1c;
  typedef float _t_local_18;
  typedef undefined4 _t_local_14;
  typedef float _t_local_10[4];
#define local_30 (*(_t_local_30 *)(_fr + 0x0))
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x10))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
#define local_18 (*(_t_local_18 *)(_fr + 0x18))
#define local_14 (*(_t_local_14 *)(_fr + 0x1c))
#define local_10 (*(_t_local_10 *)(_fr + 0x20))
  
  local_14 = 0x3f800000;
  local_20 = *param_1;
  local_1c = param_1[1];
  local_18 = param_1[2];
  FUN_004a47c0(&local_20,(int)this + 0x164,local_10);
  FUN_004a47c0(local_10,(int)this + 100,&local_30);
  local_18 = 0.0;
  local_30 = local_30 * _DAT_0054d7d4 - _DAT_0054d7d8;
  local_2c = _DAT_0054d7dc - local_2c * _DAT_0054d7dc;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  FUN_004a47c0(&local_20,(int)this + 0x164,local_10);
  FUN_004a47c0(local_10,(int)this + 100,&local_30);
  param_1[5] = _DAT_0054d7dc - local_2c * _DAT_0054d7dc;
  return;
#undef local_30
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
}
