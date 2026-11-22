/* Rebuilt from lomse.exe FUN_00407c10 @ 0x00407c10 (94 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc70 ((int (__thiscall *)(void *, undefined1))0x0048cc70)

#define LOM_SELF_00407c10 1
void __stdcall rb_00407c10(int param_1)

{
  uint uVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108[5];
  typedef int _t_local_f3;
  typedef undefined4 _t_local_ef;
  typedef undefined1 _t_local_e3;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
#define local_e3 (*(_t_local_e3 *)(_fr + 0x25))
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return;
  }
  FUN_0048cc70(local_108,0x44);
  local_f3 = param_1;
  local_ef = 0x17;
  local_e3 = 0;
  FUN_00489b70(&DAT_00584ae8,local_108);
  return;
#undef local_108
#undef local_f3
#undef local_ef
#undef local_e3
}
