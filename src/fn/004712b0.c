/* Rebuilt from lomse.exe FUN_004712b0 @ 0x004712b0 (38 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_114 ((undefined4 (__stdcall *)(undefined4))0x005338ca) /* thunk -> STORM.DLL!Ordinal_114 */

#define LOM_SELF_004712b0 1
undefined4 __cdecl rb_004712b0(void)

{
  int iVar1;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_auStack_24[2];
  typedef undefined4 _t_uStack_1c;
#define auStack_24 (*(_t_auStack_24 *)(_fr + 0x4))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
  
  auStack_24[0] = 0x24;
  iVar1 = Ordinal_114(auStack_24);
  if (iVar1 == 0) {
    uStack_1c = 0x105;
  }
  return uStack_1c;
#undef auStack_24
#undef uStack_1c
}
