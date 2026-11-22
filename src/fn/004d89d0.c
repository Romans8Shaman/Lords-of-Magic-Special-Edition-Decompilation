/* Rebuilt from lomse.exe op_setmultichatcallbackproc @ 0x004d89d0 (100 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_005aa6f0 (*(undefined4 *)0x005aa6f0)
#define _DAT_005aa6f4 (*(undefined4 *)0x005aa6f4)

#define LOM_SELF_004d89d0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_004d89d0(void *vm)

{
  int iVar1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_uStack_4;
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x4))
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    _DAT_005aa6f0 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    _DAT_005aa6f4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 6;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  _DAT_005aa6f0 = 0;
  _DAT_005aa6f4 = uStack_4;
  return;
#undef uStack_4
}
