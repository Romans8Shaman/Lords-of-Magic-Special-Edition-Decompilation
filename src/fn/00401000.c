/* Rebuilt from lomse.exe FUN_00401000 @ 0x00401000 (27 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00401000 1
void __cdecl rb_00401000(int param_1)

{
  if (param_1 != 0) {
    Ordinal_403(param_1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  return;
}
