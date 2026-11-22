/* Rebuilt from lomse.exe FUN_00449ab0 @ 0x00449ab0 (87 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00489b70 ((undefined4 (__thiscall *)(void *, int *))0x00489b70)
#define FUN_0048cc40 ((int (__fastcall *)(int))0x0048cc40)

#define LOM_SELF_00449ab0 1
undefined4 __stdcall rb_00449ab0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uchar _fr[0x110] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_108;
  typedef undefined1 _t_local_104;
  typedef undefined4 _t_local_f3;
  typedef undefined4 _t_local_ef;
#define local_108 (*(_t_local_108 *)(_fr + 0x0))
#define local_104 (*(_t_local_104 *)(_fr + 0x4))
#define local_f3 (*(_t_local_f3 *)(_fr + 0x15))
#define local_ef (*(_t_local_ef *)(_fr + 0x19))
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_0048cc40((int)&local_108);
  local_f3 = *(undefined4 *)(param_1 + 0x28);
  local_ef = param_2;
  local_104 = 0x2f;
  uVar1 = FUN_00489b70(&DAT_00584ae8,&local_108);
  return uVar1;
#undef local_108
#undef local_104
#undef local_f3
#undef local_ef
}
