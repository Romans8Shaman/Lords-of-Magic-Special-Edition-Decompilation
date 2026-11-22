/* Rebuilt from lomse.exe FUN_0041eb70 @ 0x0041eb70 (63 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_0041eb70 1
void __stdcall rb_0041eb70(undefined4 param_1,undefined4 param_2)

{
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
  
  FUN_0048cc70(local_108,0x3b);
  local_ef = param_2;
  local_f3 = param_1;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
#undef local_108
#undef local_f3
#undef local_ef
}
