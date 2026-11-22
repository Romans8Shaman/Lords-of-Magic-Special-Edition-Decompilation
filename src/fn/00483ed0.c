/* Rebuilt from lomse.exe FUN_00483ed0 @ 0x00483ed0 (89 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583ad4 (*(undefined4 *)0x00583ad4)
#define DAT_00583ad8 (*(undefined4 *)0x00583ad8)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_00483ed0 1
undefined4 __stdcall rb_00483ed0(void)

{
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined4 _t_local_eb;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_eb (*(_t_local_eb *)(_fr + 0x1d))
  
  FUN_0048cc70(local_108,0x5d);
  if (DAT_005d1e84 == 0) {
    local_f3 = 1;
  }
  else {
    local_f3 = FUN_004b7dd0(DAT_005d1e84);
  }
  local_eb = DAT_00583ad8;
  local_ef = DAT_00583ad4;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return 1;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_eb
}
