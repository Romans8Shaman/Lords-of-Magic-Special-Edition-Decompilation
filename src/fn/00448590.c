/* Rebuilt from lomse.exe FUN_00448590 @ 0x00448590 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00448590 1
undefined4 * __thiscall rb_00448590(void *this,byte param_1)

{
  FUN_0043ba50(this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    Ordinal_403(this,s_C__lomse_source_storm_h_00555130,0x3eb,0);
  }
  return this;
}
