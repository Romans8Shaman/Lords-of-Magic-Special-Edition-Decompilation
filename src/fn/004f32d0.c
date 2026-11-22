/* Rebuilt from lomse.exe FUN_004f32d0 @ 0x004f32d0 (162 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00573250 (*(int *)0x00573250)
#define DAT_00584a90 (*(undefined4 *)0x00584a90)
#define FUN_004f3260 ((undefined4 (__thiscall *)(void *, float))0x004f3260)
#define FUN_004f32a0 ((undefined4 (__thiscall *)(void *, float))0x004f32a0)
#define FUN_004f3380 ((int (__fastcall *)(int))0x004f3380)
#define FUN_004f3420 ((int (__fastcall *)(int))0x004f3420)
#define _DAT_0054de1c (*(float *)0x0054de1c)
#define _DAT_0054de24 (*(float *)0x0054de24)
#define _DAT_0054de28 (*(float *)0x0054de28)
#define _DAT_0057324c (*(float *)0x0057324c)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004f32d0 1
/* WARNING: Function: __ftol replaced with injection: ftol_pop */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall rb_004f32d0(void *param_1)

{
  int iVar1;
  int iVar2;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_8;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
  
  local_8 = *(float *)((int)param_1 + 0x4c) * *(float *)((int)param_1 + 0x50) * _DAT_0054de24;
  if (DAT_00573250 != 0) {
    local_8 = ((float)DAT_00584a90 / (float)(int)(longlong)(_DAT_0054de28 / _DAT_0057324c)) *
              local_8;
  }
  if ((__LOM_ISNAN(local_8) || __LOM_ISNAN(_DAT_0054de1c)) || local_8 < _DAT_0054de1c) {
    iVar1 = FUN_004f32a0(param_1,local_8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_004f3420((int)param_1);
    }
  }
  else {
    iVar1 = FUN_004f3260(param_1,local_8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_004f3380((int)param_1);
      return iVar2;
    }
  }
  return iVar2;
#undef local_8
}
