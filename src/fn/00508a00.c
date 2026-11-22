/* Rebuilt from lomse.exe FUN_00508a00 @ 0x00508a00 (88 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_00508a00 1
void __stdcall rb_00508a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
  typedef undefined4 _t_local_e7;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
#define local_e7 (*(_t_local_e7 *)(_fr + 0x21))
  
  FUN_0048cc40((int)&local_108);
  local_f3 = param_1;
  local_ef = param_2;
  local_104 = 0x14;
  local_eb = param_3;
  local_e7 = param_4;
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
#undef local_e7
}
