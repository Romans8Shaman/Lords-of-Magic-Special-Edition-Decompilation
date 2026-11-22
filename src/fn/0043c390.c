/* Rebuilt from lomse.exe FUN_0043c390 @ 0x0043c390 (158 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579088 (*(int *)0x00579088)
#define FUN_0043c430 ((int (__thiscall *)(void *, undefined4 *))0x0043c430)

#define LOM_SELF_0043c390 1
undefined4 __thiscall rb_0043c390(void *this,undefined4 *unused_stack_4,undefined4 param_p2)

{
  int iVar1;
  undefined4 *puVar2;
  uchar _fr[0x70] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_64[9];
  typedef undefined2 _t_local_40;
  typedef undefined2 _t_local_3e;
#define local_64 (*(_t_local_64 *)(_fr + 0x4))
#define local_40 (*(_t_local_40 *)(_fr + 0x28))
#define local_3e (*(_t_local_3e *)(_fr + 0x2a))

  DAT_00579088 = DAT_00579088 + 0x58;
  puVar2 = local_64;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *unused_stack_4;
    unused_stack_4 = unused_stack_4 + 1;
    puVar2 = puVar2 + 1;
  }
  local_3e = local_40;
  iVar1 = FUN_0043c430(this,local_64);
  if (iVar1 < 0) {
    DAT_00579088 = DAT_00579088 + -0x58;
    return 0;
  }
  DAT_00579088 = DAT_00579088 + -0x58;
  return 1;
#undef local_64
#undef local_40
#undef local_3e
}
