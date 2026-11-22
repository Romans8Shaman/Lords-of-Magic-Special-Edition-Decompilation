/* Rebuilt from lomse.exe FUN_004f58d0 @ 0x004f58d0 (48 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ac8 (*(int *)0x00584ac8)
#define DAT_00584acc (*(undefined4 *)0x00584acc)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f58d0 1
void __stdcall rb_004f58d0(void)

{
  if (DAT_00584ac8 != 0) {
    Ordinal_403(DAT_00584ac8,s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    DAT_00584ac8 = 0;
    DAT_00584acc = 0;
  }
  return;
}
