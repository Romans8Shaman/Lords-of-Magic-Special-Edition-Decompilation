/* Rebuilt from lomse.exe FUN_0047fe30 @ 0x0047fe30 (77 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_0047fe30 1
void __stdcall rb_0047fe30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
  
  FUN_0048cc40((int)&local_108);
  local_f3 = param_1;
  local_ef = param_2;
  local_104 = 0x23;
  local_eb = param_3;
  FUN_00489b70(&DAT_00584ae8,&local_108);
  return;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
#undef local_eb
}
